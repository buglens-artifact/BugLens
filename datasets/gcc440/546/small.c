int printf(const char *, ...);
union {
  int a;
  signed b : 28;
} c[] = {{}, {}, {}, {}, {}, 161453696};
int d, e, f, g;
char *h;
long i[9][7][3];
short j, l;
long k = 10;
long *m = &i[8][6][1];
short(n)(o, p) { return p; }
char fn2() {
  for (;;) {
    for (; d;)
      *h = 7;
    l = n(*m = c[5].a, c[5].b);
    if (k <= 0)
      ;
    else
      return j;
  }
}
int main() {
  fn2();
  for (; e < 9; e++) {
    f = 0;
    for (; f < 7; f++) {
      g = 0;
      for (; g < 3; g++)
        printf("%d\n", (int)i[e][f][g]);
    }
  }
  return 0;
}
