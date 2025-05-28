#!/bin/bash

rm -f out*.txt

FIX_COMMIT="b0331cc"
BEFORE_FIX_COMMIT="1721382"

CC_FIXED="/tmp/gcc-${FIX_COMMIT}/bin/gcc"
CC_BEFORE_FIXED="/tmp/gcc-${BEFORE_FIX_COMMIT}/bin/gcc"


if 
  clang -pedantic -Wall -O0 -c small.c  >out.txt 2>&1 &&\
  ! grep 'conversions than data arguments' out.txt &&\
  ! grep 'incompatible redeclaration' out.txt &&\
  ! grep 'ordered comparison between pointer' out.txt &&\
  ! grep 'eliding middle term' out.txt &&\
  ! grep 'end of non-void function' out.txt &&\
  ! grep 'invalid in C99' out.txt &&\
  ! grep 'specifies type' out.txt &&\
  ! grep 'should return a value' out.txt &&\
  ! grep 'uninitialized' out.txt &&\
  ! grep 'incompatible pointer to' out.txt &&\
  ! grep 'incompatible integer to' out.txt &&\
  ! grep 'type specifier missing' out.txt &&\
  gcc -Wall -Wextra -O2 small.c -o smallz >outa.txt 2>&1 &&\
  ! grep uninitialized outa.txt &&\
  ! grep 'without a cast' outa.txt &&\
  ! grep 'control reaches end' outa.txt &&\
  ! grep 'null argument' outa.txt &&\
  ! grep 'return type defaults' outa.txt &&\
  ! grep 'useless type name in empty declaration' outa.txt &&\
  ! grep 'no semicolon at end' outa.txt &&\
  ! grep 'type defaults to' outa.txt &&\
  ! grep 'format' outa.txt &&\
  ! grep 'incompatible pointer' outa.txt &&\
  ! grep 'ordered comparison of pointer with integer' outa.txt &&\
  ! grep 'declaration does not declare anything' outa.txt &&\
  ! grep 'expects type' outa.txt &&\
  ! grep 'pointer from integer' outa.txt &&\
  ! grep 'incompatible implicit' outa.txt &&\
  ! grep 'excess elements in struct initializer' outa.txt &&\
  ! grep 'comparison between pointer and integer' outa.txt &&\
   gcc-4.3.0 -O3  -w -DINLINE= -DCSMITH_MINIMAL  -I/uusoc/exports/scratch/chenyang/csmith/runtime  -DWRAP_VOLATILES=0   small.c -o small1 > cc_out1.txt 2>&1 &&\
  RunSafely.sh 3 1 /dev/null out1.txt ./small1 >/dev/null 2>&1 &&\
   gcc-4.3.0 -O1  -w -DINLINE= -DCSMITH_MINIMAL  -I/uusoc/exports/scratch/chenyang/csmith/runtime  -DWRAP_VOLATILES=0   small.c -o small2 > cc_out2.txt 2>&1 &&\
  RunSafely.sh 3 1 /dev/null out2.txt ./small2 >/dev/null 2>&1 &&\
  ! diff out1.txt out2.txt &&\
  ${CC_FIXED} -O3 -w -DINLINE= -DCSMITH_MINIMAL -I/uusoc/exports/scratch/chenyang/csmith/runtime -DWRAP_VOLATILES=0 small.c -o small1_fixed > cc_out1_fixed.txt 2>&1 &&
  RunSafely.sh 3 1 /dev/null out1_fixed.txt ./small1_fixed >/dev/null 2>&1 &&
  ${CC_FIXED} -O1 -w -DINLINE= -DCSMITH_MINIMAL -I/uusoc/exports/scratch/chenyang/csmith/runtime -DWRAP_VOLATILES=0 small.c -o small2_fixed > cc_out2_fixed.txt 2>&1 &&
  RunSafely.sh 3 1 /dev/null out2_fixed.txt ./small2_fixed >/dev/null 2>&1 &&
  diff out1_fixed.txt out2_fixed.txt &&
  ${CC_BEFORE_FIXED} -O3 -w -DINLINE= -DCSMITH_MINIMAL -I/uusoc/exports/scratch/chenyang/csmith/runtime -DWRAP_VOLATILES=0 small.c -o small1_before_fixed > cc_out1_before_fixed.txt 2>&1 &&
  RunSafely.sh 3 1 /dev/null out1_before_fixed.txt ./small1_before_fixed >/dev/null 2>&1 &&
  ${CC_BEFORE_FIXED} -O1 -w -DINLINE= -DCSMITH_MINIMAL -I/uusoc/exports/scratch/chenyang/csmith/runtime -DWRAP_VOLATILES=0 small.c -o small2_before_fixed > cc_out2_before_fixed.txt 2>&1 &&
  RunSafely.sh 3 1 /dev/null out2_before_fixed.txt ./small2_before_fixed >/dev/null 2>&1 &&
  ! diff out1_before_fixed.txt out2_before_fixed.txt &&

  cp small.c small-framac.c &&\
  perl -pi.bak -e 's/int main \(int argc, char\* argv\[\]\)/int argc; char **argv; int main (void)/' small-framac.c &&\
  RunSafely.sh 5 1 /dev/null out_framac.txt frama-c -cpp-command \"gcc -C -Dvolatile= -E -I.\" -val-signed-overflow-alarms -val-stop-at-first-alarm -no-val-show-progress -machdep x86_64 -obviously-terminates -precise-unions small-framac.c &&\
  ! egrep -i '(user error|assert)' out_framac.txt >/dev/null 2>&1
then
  exit 0
else
  exit 1
fi
