extern int printf (const char *, ...);



static char
(safe_unary_minus_func_int8_t_s)(char si )
{
 
  return


    (si==(-128)) ?
    ((si)) :


    -si;
}

static char
(safe_add_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((127)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-128)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static char
(safe_sub_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(127))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static char
(safe_mul_func_int8_t_s_s)(char si1, char si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((127) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-128) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-128) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((127) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static char
(safe_mod_func_int8_t_s_s)(char si1, char si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static char
(safe_div_func_int8_t_s_s)(char si1, char si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static char
(safe_lshift_func_int8_t_s_s)(char left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static char
(safe_lshift_func_int8_t_s_u)(char left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static char
(safe_rshift_func_int8_t_s_s)(char left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static char
(safe_rshift_func_int8_t_s_u)(char left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static short
(safe_unary_minus_func_int16_t_s)(short si )
{
 
  return


    (si==(-32767-1)) ?
    ((si)) :


    -si;
}

static short
(safe_add_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((32767)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-32767-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static short
(safe_sub_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(32767))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static short
(safe_mul_func_int16_t_s_s)(short si1, short si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((32767) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-32767-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-32767-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((32767) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static short
(safe_mod_func_int16_t_s_s)(short si1, short si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static short
(safe_div_func_int16_t_s_s)(short si1, short si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static short
(safe_lshift_func_int16_t_s_s)(short left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static short
(safe_lshift_func_int16_t_s_u)(short left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static short
(safe_rshift_func_int16_t_s_s)(short left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static short
(safe_rshift_func_int16_t_s_u)(short left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static int
(safe_unary_minus_func_int32_t_s)(int si )
{
 
  return


    (si==(-2147483647-1)) ?
    ((si)) :


    -si;
}

static int
(safe_add_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static int
(safe_sub_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static int
(safe_mul_func_int32_t_s_s)(int si1, int si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static int
(safe_mod_func_int32_t_s_s)(int si1, int si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static int
(safe_div_func_int32_t_s_s)(int si1, int si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static int
(safe_lshift_func_int32_t_s_s)(int left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static int
(safe_lshift_func_int32_t_s_u)(int left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static int
(safe_rshift_func_int32_t_s_s)(int left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static int
(safe_rshift_func_int32_t_s_u)(int left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static long long
(safe_unary_minus_func_int64_t_s)(long long si )
{
 
  return


    (si==(-(9223372036854775807LL)-1)) ?
    ((si)) :


    -si;
}

static long long
(safe_add_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807LL)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-(9223372036854775807LL)-1)-si2)))) ?
    ((si1)) :


    (si1 + si2);
}

static long long
(safe_sub_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807LL))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}

static long long
(safe_mul_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return


    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807LL) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-(9223372036854775807LL)-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-(9223372036854775807LL)-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807LL) / si1)))) ?
    ((si1)) :


    si1 * si2;
}

static long long
(safe_mod_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 % si2);
}

static long long
(safe_div_func_int64_t_s_s)(long long si1, long long si2 )
{
 
  return

    ((si2 == 0) || ((si1 == (-(9223372036854775807LL)-1)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}

static long long
(safe_lshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807LL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static long long
(safe_lshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807LL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static long long
(safe_rshift_func_int64_t_s_s)(long long left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}

static long long
(safe_rshift_func_int64_t_s_u)(long long left, unsigned int right )
{
 
  return

    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)right));
}







static unsigned char
(safe_unary_minus_func_uint8_t_u)(unsigned char ui )
{
 
  return -ui;
}

static unsigned char
(safe_add_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ui1 + ui2;
}

static unsigned char
(safe_sub_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ui1 - ui2;
}

static unsigned char
(safe_mul_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned char
(safe_mod_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned char
(safe_div_func_uint8_t_u_u)(unsigned char ui1, unsigned char ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned char
(safe_lshift_func_uint8_t_u_s)(unsigned char left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned char
(safe_lshift_func_uint8_t_u_u)(unsigned char left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned char
(safe_rshift_func_uint8_t_u_s)(unsigned char left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned char
(safe_rshift_func_uint8_t_u_u)(unsigned char left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static unsigned short
(safe_unary_minus_func_uint16_t_u)(unsigned short ui )
{
 
  return -ui;
}

static unsigned short
(safe_add_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ui1 + ui2;
}

static unsigned short
(safe_sub_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ui1 - ui2;
}

static unsigned short
(safe_mul_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned short
(safe_mod_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned short
(safe_div_func_uint16_t_u_u)(unsigned short ui1, unsigned short ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned short
(safe_lshift_func_uint16_t_u_s)(unsigned short left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned short
(safe_lshift_func_uint16_t_u_u)(unsigned short left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned short
(safe_rshift_func_uint16_t_u_s)(unsigned short left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned short
(safe_rshift_func_uint16_t_u_u)(unsigned short left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}



static unsigned
(safe_unary_minus_func_uint32_t_u)(unsigned ui )
{
 
  return -ui;
}

static unsigned
(safe_add_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ui1 + ui2;
}

static unsigned
(safe_sub_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ui1 - ui2;
}

static unsigned
(safe_mul_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}

static unsigned
(safe_mod_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned
(safe_div_func_uint32_t_u_u)(unsigned ui1, unsigned ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned
(safe_lshift_func_uint32_t_u_s)(unsigned left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned
(safe_lshift_func_uint32_t_u_u)(unsigned left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned
(safe_rshift_func_uint32_t_u_s)(unsigned left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned
(safe_rshift_func_uint32_t_u_u)(unsigned left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}




static unsigned long long
(safe_unary_minus_func_uint64_t_u)(unsigned long long ui )
{
 
  return -ui;
}

static unsigned long long
(safe_add_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 + ui2;
}

static unsigned long long
(safe_sub_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ui1 - ui2;
}

static unsigned long long
(safe_mul_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return ((unsigned long long int)ui1) * ((unsigned long long int)ui2);
}

static unsigned long long
(safe_mod_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
}

static unsigned long long
(safe_div_func_uint64_t_u_u)(unsigned long long ui1, unsigned long long ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 / ui2);
}

static unsigned long long
(safe_lshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((int)right)))) ?
    ((left)) :

    (left << ((int)right));
}

static unsigned long long
(safe_lshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615ULL) >> ((unsigned int)right)))) ?
    ((left)) :

    (left << ((unsigned int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_s)(unsigned long long left, int right )
{
 
  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static unsigned long long
(safe_rshift_func_uint64_t_u_u)(unsigned long long left, unsigned int right )
{
 
  return

    (((unsigned int)right) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)right));
}

static inline void platform_main_begin(void)
{
}

static inline void crc32_gentab (void)
{
}



int crc32_context;
extern int strcmp (const char *, const char *);


static inline void
transparent_crc (unsigned val, char* vname, int flag)
{
  if (flag) printf ("%s %d\n", vname, val);
  crc32_context += val;
}

static inline void
platform_main_end (int x, int flag)
{
  if (!flag) printf ("checksum = %x\n", x);
}


static long __undefined;


union U0 {
   unsigned f0;
   char * f1;
};


static int * volatile g_4 = (void*)0;
static int g_6 = 9L;
static unsigned char g_11 = 0UL;
static unsigned char g_19 = 1UL;
static unsigned char *g_18 = &g_19;
static union U0 g_28 = {0xE63A5BEDL};
static char g_58 = 0x8DL;
static unsigned short g_66 = 0x7F2AL;
static unsigned short g_74 = 0xAD24L;
static unsigned short *g_73 = &g_74;
static short g_89 = (-8L);
static int g_92 = 9L;
static int * volatile g_91 = &g_92;
static int * volatile g_116 = &g_92;
static volatile char *g_121 = (void*)0;
static volatile char ** volatile g_120 = &g_121;
static int * volatile g_124 = &g_92;
static unsigned short **g_142 = (void*)0;
static unsigned short *** volatile g_141 = &g_142;
static unsigned short g_163 = 0x2018L;
static short g_181 = (-2L);
static unsigned long long g_186 = 0UL;
static int g_187 = 2L;
static int * volatile g_188 = &g_92;
static int ** volatile g_197 = (void*)0;
static int * volatile g_206 = &g_92;
static int g_232 = 6L;
static volatile unsigned g_256 = 0UL;
static int g_278 = 3L;
static long long g_302 = 0xD82316B0F5D29D3DLL;
static int * volatile g_304 = &g_92;
static short g_305 = 0xC1B4L;
static int * volatile g_308 = &g_232;
static char g_330 = 0x37L;
static unsigned g_338 = 3UL;
static unsigned g_349 = 4294967295UL;
static union U0 *g_378 = &g_28;
static int * volatile g_390 = &g_92;
static int * volatile g_391 = (void*)0;
static int * volatile g_392 = (void*)0;
static int * volatile g_393 = &g_92;
static int * volatile g_399 = &g_278;
static unsigned char **g_416 = (void*)0;
static volatile long long g_422 = 0x39C108E173D9858ALL;
static volatile long long *g_421 = &g_422;
static volatile long long **g_420 = &g_421;
static int *g_438 = (void*)0;
static int ** volatile g_437 = &g_438;
static unsigned long long g_446 = 0x03861C0902CA02D7LL;
static unsigned short g_449 = 0UL;
static volatile short * volatile * volatile g_486 = (void*)0;
static volatile short * volatile * volatile *g_485 = &g_486;
static int * volatile g_488 = &g_92;
static int * volatile g_518 = &g_232;
static short g_522 = 0x7AD6L;
static int ** volatile g_526 = &g_438;
static volatile unsigned char * volatile g_539 = (void*)0;
static volatile unsigned char * volatile *g_538 = &g_539;
static int ** volatile g_555 = &g_438;
static int ** volatile g_571 = &g_438;
static int * volatile g_593 = &g_278;
static int ** volatile g_633 = &g_438;
static int ** volatile g_656 = &g_438;
static int ** volatile g_664 = &g_438;
static short *g_684 = &g_522;
static short **g_683 = &g_684;
static short ***g_682 = &g_683;
static volatile unsigned g_699 = 0x0D5864A9L;
static int ** volatile g_714 = &g_438;
static int ** volatile g_729 = &g_438;
static int ** volatile g_730 = &g_438;
static int ** volatile g_750 = &g_438;
static volatile int g_770 = 1L;
static unsigned long long *g_788 = &g_186;
static unsigned long long * volatile * volatile g_787 = &g_788;
static int ** volatile g_815 = &g_438;
static int ** volatile g_820 = &g_438;
static volatile unsigned short *g_861 = (void*)0;
static volatile unsigned short **g_860 = &g_861;
static volatile unsigned short ** volatile * volatile g_859 = &g_860;
static volatile unsigned short ** volatile * volatile *g_858 = &g_859;
static int ** volatile g_864 = &g_438;
static union U0 **g_870 = &g_378;
static int ** volatile g_872 = &g_438;
static int ** volatile g_890 = &g_438;
static int **g_951 = &g_438;
static unsigned short g_1011 = 1UL;
static int *g_1029 = (void*)0;



static int func_1(void);
static unsigned short func_22(unsigned short p_23, unsigned char p_24, union U0 p_25, unsigned p_26, short p_27);
static unsigned char func_31(char p_32, int p_33, unsigned char * p_34, int p_35, unsigned p_36);
static unsigned char * func_38(char p_39, unsigned char * p_40, unsigned char p_41, unsigned long long p_42);
static char func_43(int p_44);
static int * func_45(unsigned char p_46, union U0 p_47, int * p_48);
static union U0 func_49(int * p_50, int * p_51, unsigned short p_52);
static unsigned short func_69(long long p_70, unsigned short * p_71, unsigned char p_72);
static union U0 func_80(unsigned short * p_81, char * p_82);
static short func_107(int p_108, short p_109, unsigned p_110, long long p_111);
static int func_1(void)
{
    unsigned l_2 = 0x0C4D8E5CL;
    int *l_3 = (void*)0;
    int *l_5 = &g_6;
    unsigned char *l_9 = (void*)0;
    unsigned char *l_10 = &g_11;
    unsigned long long l_1055 = 0xC87BC31434912B4DLL;
    (*l_5) = l_2;
    l_3 = ((safe_mul_func_uint8_t_u_u(((*l_5) = ((((((*l_10) = (*l_5)) >= ((*g_18) = ((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(g_6, g_6)), (safe_mod_func_int8_t_s_s((0x78C0L > (((void*)0 != g_18) <= (((*l_5) > ((safe_sub_func_int64_t_s_s((((func_22(g_6, ((&g_6 == l_5) < (*l_5)), g_28, g_19, (*l_5)) != (-7L)) <= g_6) , (*g_421)), (*l_5))) > (*l_5))) , (**g_683)))), 0x6DL)))) , 0x3BL))) | l_1055) > (*l_5)) > 1UL)), g_1011)) , l_3);
    return g_305;
}







static unsigned short func_22(unsigned short p_23, unsigned char p_24, union U0 p_25, unsigned p_26, short p_27)
{
    unsigned short l_492 = 0x6A9FL;
    int l_493 = 0xFF23394CL;
    int *l_544 = &g_232;
    unsigned long long l_594 = 3UL;
    unsigned char l_636 = 0x2BL;
    unsigned l_724 = 0x5B448D8EL;
    unsigned l_762 = 4294967295UL;
    union U0 l_792 = {0x64A09435L};
    int *l_806 = &g_92;
    char *l_807 = &g_58;
    unsigned short *l_813 = &g_449;
    unsigned char ****l_821 = (void*)0;
    short l_845 = 0x707AL;
    union U0 *l_865 = &l_792;
    short l_873 = 0x2875L;
    unsigned long long l_886 = 18446744073709551610UL;
    unsigned long long l_906 = 0x8DA16A2FAE40B9F5LL;
    long long *l_920 = &g_302;
    short **l_948 = &g_684;
    unsigned l_968 = 0x6AF9C61BL;
    int l_1027 = 0x45C46787L;
    unsigned short l_1045 = 0x510EL;
    union U0 **l_1051 = &g_378;
    union U0 l_1052 = {0x81E6ABB3L};
    unsigned short l_1053 = 65532UL;
    if (p_27)
    {
        int l_37 = 3L;
        char *l_489 = &g_330;
        union U0 l_553 = {0UL};
        char l_578 = (-1L);
        int *l_584 = &g_232;
        long long *l_592 = &g_302;
        long long **l_591 = &l_592;
        if ((l_37 = (0x2F55126EL >= (safe_mod_func_int16_t_s_s((func_31(l_37, g_6, func_38(((*l_489) = func_43(g_28.f0)), g_18, (safe_rshift_func_uint8_t_u_s(((((l_492 | g_305) >= l_37) , 0x4C4325F0L) , l_493), 7)), l_37), g_28.f0, l_493) , l_37), l_492)))))
        {
            int *l_543 = &g_232;
            l_544 = l_543;
        }
        else
        {
            short *l_545 = &g_522;
            unsigned *l_546 = &g_349;
            int **l_554 = (void*)0;
            unsigned l_558 = 0xC47262F4L;
            unsigned short **l_563 = &g_73;
            union U0 l_582 = {4294967290UL};
            int **l_590 = &l_584;
            (*g_555) = func_45((((((((*g_390) < (l_37 = (((*l_545) = g_66) > l_37))) , l_546) == l_546) <= (p_23 = ((*g_73) = (p_26 >= 0x5C1BD8E5L)))) && ((*l_546) = l_37)) <= (safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(249UL, (*l_544))), 5)) || 1L) <= g_58) , 0x59L), 254UL))), l_553, &g_278);
            for (g_349 = 0; (g_349 != 32); g_349 = safe_add_func_uint64_t_u_u(g_349, 9))
            {
                short l_561 = 0L;
                union U0 *l_562 = (void*)0;
                unsigned short *l_579 = &g_163;
                int *l_583 = &g_6;
                int **l_585 = &l_584;
                if ((l_558 >= ((l_561 && p_25.f0) ^ 0xA0C3L)))
                {
                    unsigned short ***l_564 = &l_563;
                    (**g_555) = (((*l_564) = l_563) != (*g_141));
                    for (g_187 = 0; (g_187 <= 21); g_187 = safe_add_func_uint32_t_u_u(g_187, 7))
                    {
                        return p_27;
                    }
                }
                else
                {
                    for (g_181 = 0; (g_181 == 10); ++g_181)
                    {
                        int *l_569 = &g_278;
                        int **l_570 = (void*)0;
                        (*g_571) = l_569;
                    }
                }
                l_37 = (*l_544);
                l_584 = func_45(((safe_rshift_func_int8_t_s_s(g_89, 2)) || (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(l_578, (l_579 != (void*)0))), (safe_lshift_func_uint16_t_u_u(p_23, 11))))), l_582, l_583);
                (*l_585) = l_544;
            }
            (*g_438) = ((safe_lshift_func_uint8_t_u_s(((*l_544) = (safe_mul_func_uint8_t_u_u(p_27, 0x0DL))), 0)) & (p_23 < 0x01L));
            (*l_590) = (void*)0;
        }
        (*g_593) = ((*l_544) = (9L >= ((*l_544) >= ((void*)0 != l_591))));
    }
    else
    {
        short l_599 = (-9L);
        int l_603 = 0xC821BC8BL;
        unsigned long long *l_618 = &g_446;
        char l_663 = 0x88L;
        char *l_669 = (void*)0;
        char **l_668 = &l_669;
        int l_703 = 0L;
        union U0 **l_717 = &g_378;
        unsigned short *l_734 = (void*)0;
        char l_747 = 0x91L;
        unsigned short *l_759 = &l_492;
        int **l_797 = &g_438;
        (*g_555) = (*g_526);
        (*l_544) = ((*g_378) , l_594);
        if ((0x52E430BB10B64470LL < (((safe_rshift_func_int8_t_s_u((0xA4ACL < p_23), 1)) != (safe_sub_func_uint32_t_u_u(l_599, 0x1F9277D2L))) || l_599)))
        {
            unsigned long long *l_619 = &g_186;
            int l_624 = 0xF3D36BC6L;
            short *l_638 = &g_181;
            short **l_637 = &l_638;
            int **l_652 = &l_544;
            for (g_181 = 0; (g_181 >= 26); ++g_181)
            {
                int l_602 = 0x5E3234ACL;
                unsigned char ***l_631 = (void*)0;
                unsigned char ****l_630 = &l_631;
                (*l_544) = 0xA4DEB143L;
                if ((l_603 = l_602))
                {
                    unsigned *l_611 = (void*)0;
                    unsigned *l_612 = &g_349;
                    unsigned long long *l_617 = &l_594;
                    char *l_620 = &g_58;
                    int l_621 = 0xF3E5404EL;
                    (*l_544) = (((*g_73) | 0xF387L) , (safe_mul_func_uint16_t_u_u(0x5648L, (((safe_unary_minus_func_int16_t_s((safe_mod_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s(0x41L, p_26)) > ((*l_612) = g_181)) || 0UL) & (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((*l_620) = (l_617 != (l_619 = l_618))), 2)), l_621))), p_26)))) >= 0x702494B7L) | l_602))));
                    (*l_544) = ((p_27 , l_621) != p_24);
                    for (l_621 = (-11); (l_621 <= 28); l_621 = safe_add_func_int16_t_s_s(l_621, 8))
                    {
                        short *l_627 = &g_305;
                        (*l_544) = (((*l_620) = l_624) , (((*l_627) = (safe_mul_func_uint16_t_u_u(l_621, l_602))) , (-7L)));
                    }
                }
                else
                {
                    int *l_632 = &l_624;
                    short ***l_639 = &l_637;
                    short *l_647 = &g_305;
                    int **l_648 = &g_438;
                    int l_651 = (-1L);
                    for (l_599 = 0; (l_599 != 10); l_599 = safe_add_func_int8_t_s_s(l_599, 4))
                    {
                        (*l_544) = (+((void*)0 != l_630));
                        (*g_633) = l_632;
                    }
                    (*l_648) = func_45((l_624 | (safe_lshift_func_uint16_t_u_u((l_603 && (l_636 = (*l_544))), (((*l_639) = l_637) != ((((*l_647) = ((p_24 <= (safe_rshift_func_uint16_t_u_u((*g_73), (((safe_lshift_func_uint16_t_u_s((*g_73), 15)) , (p_25 , (safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s(l_602, l_599)))))) , p_23)))) >= 0xBCC7D3ECL)) , p_23) , (void*)0))))), (*g_378), &l_603);
                    (*l_632) = p_25.f0;
                    (**l_648) = ((safe_sub_func_int8_t_s_s(0xD0L, (l_651 && (l_624 || g_278)))) > 0x34L);
                }
            }
            (*l_652) = func_45((0x2277L >= ((*g_73) = p_23)), p_25, &l_624);
            return p_23;
        }
        else
        {
            int *l_655 = &g_92;
            char **l_673 = &l_669;
            char l_694 = 0L;
            int l_702 = 9L;
            unsigned long long l_728 = 3UL;
            union U0 l_738 = {0xA438C057L};
            unsigned short *l_757 = &l_492;
            l_603 = (*l_544);
            (*l_544) = (safe_add_func_int16_t_s_s(5L, 0x5EF6L));
            if (p_23)
            {
                unsigned char l_660 = 0x7FL;
                int l_667 = 0L;
                long long l_672 = 0x61261F334AA78AA9LL;
                unsigned char l_727 = 0UL;
                char **l_752 = &l_669;
                (*g_656) = l_655;
                if (((p_23 = ((((((safe_unary_minus_func_int32_t_s(0L)) ^ (safe_mul_func_int16_t_s_s(l_660, l_660))) ^ ((*g_378) , (safe_sub_func_int32_t_s_s((p_25.f0 && p_27), ((*g_656) != (void*)0))))) , l_663) , (*l_655)) > (-2L))) > 65535UL))
                {
                    (*l_655) = ((-6L) > func_43((*l_655)));
                    (*g_664) = (*g_656);
                    (*g_593) = ((*l_655) = (0x13BD52955BC8A108LL | (safe_rshift_func_uint8_t_u_u(((*g_18) = ((p_26 && p_23) , (*l_655))), ((l_667 = l_660) && (((*l_544) = ((void*)0 != l_668)) & (((safe_mul_func_int8_t_s_s(((*l_655) & ((p_27 > p_23) , 7UL)), l_672)) , l_673) != (void*)0)))))));
                }
                else
                {
                    short ****l_685 = &g_682;
                    unsigned *l_700 = (void*)0;
                    unsigned *l_701 = &g_349;
                    int l_704 = 1L;
                    int l_709 = 0L;
                    (*l_544) = ((safe_lshift_func_uint16_t_u_s((*g_73), 5)) > (l_704 = ((g_187 , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(((((((*l_685) = g_682) == (void*)0) < (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((+func_31(((safe_mul_func_uint8_t_u_u((((((*l_701) = func_31(l_694, (safe_mod_func_uint8_t_u_u((((*l_701) = (((safe_mod_func_uint64_t_u_u(g_302, (**g_420))) , (*l_544)) , (g_699 > 1UL))) != p_26), l_663)), &g_19, p_24, g_522)) | p_23) , p_25.f0) , 1UL), (*l_655))) | 0xA36BL), l_702, &l_660, g_89, g_446)), g_74)) , l_703), p_27)), 2))) ^ g_187) , (*l_655)), 4L)) > 0xFDL) , (*l_655)), 6)), 248UL))) <= 18446744073709551614UL)));
                    if (((*l_655) = p_23))
                    {
                        char *l_712 = &l_663;
                        int **l_713 = (void*)0;
                        (*g_714) = (l_544 = func_45(((*g_18) = ((safe_sub_func_int32_t_s_s(((*g_124) = 0x6BD12272L), (g_349 = ((p_27 = (l_704 = (-8L))) & 0L)))) | g_302)), (((((safe_mul_func_uint16_t_u_u(((*g_73) = p_26), (((*l_712) = (l_709 | (safe_lshift_func_int16_t_s_u(((((p_24 || ((l_709 & p_26) >= p_25.f0)) , 0x6508L) ^ p_26) , l_660), p_26)))) , 9L))) , &g_28) != &p_25) > p_25.f0) , p_25), l_655));
                        (*l_655) = 4L;
                    }
                    else
                    {
                        (*g_729) = func_45((((safe_mod_func_int16_t_s_s(((void*)0 != l_717), (safe_sub_func_int64_t_s_s(((safe_add_func_int64_t_s_s((-4L), (p_24 , (0xB9E53406E8FD1639LL ^ (l_724 >= (safe_rshift_func_int16_t_s_u((l_704 != l_727), 4))))))) || 1L), p_27)))) , l_728) , p_23), (*g_378), l_544);
                    }
                }
                if (((*l_655) = l_603))
                {
                    int **l_731 = &g_438;
                    (*g_730) = l_655;
                    (*l_655) = (p_23 | 0UL);
                    (*l_731) = (*g_571);
                }
                else
                {
                    unsigned char *l_736 = (void*)0;
                    unsigned char **l_735 = &l_736;
                    int l_737 = 4L;
                    (*l_544) = (safe_mod_func_int64_t_s_s(((p_27 <= 0xB424B032L) != l_703), 8L));
                    for (l_672 = 8; (l_672 != (-30)); l_672 = safe_sub_func_uint16_t_u_u(l_672, 9))
                    {
                        int **l_751 = &g_438;
                        (*g_750) = &l_667;
                        (*l_751) = ((***g_682) , l_655);
                        (*l_751) = func_45(((*g_18) = (l_752 == (void*)0)), p_25, &l_737);
                        (*l_751) = (*g_555);
                    }
                }
                for (g_302 = 0; (g_302 < 29); g_302++)
                {
                    unsigned short *l_758 = &l_492;
                    int **l_761 = &l_655;
                    for (l_599 = (-16); (l_599 > (-9)); ++l_599)
                    {
                        unsigned *l_760 = &l_724;
                        (*l_544) = (((l_757 != (l_759 = l_758)) != ((*l_760) = (((*l_544) , l_703) , ((*g_399) == ((*l_655) == (g_446 != ((l_663 != l_672) , (-10L)))))))) < g_186);
                    }
                    (*l_544) = (*g_91);
                    (*l_761) = l_544;
                    (*l_761) = func_45(p_23, (*g_378), l_544);
                }
            }
            else
            {
                unsigned short *l_769 = &g_449;
                int l_782 = 0x88298CE9L;
                if (l_762)
                {
                    volatile long long l_771 = 0L;
                    for (g_338 = 0; (g_338 > 25); ++g_338)
                    {
                        return p_23;
                    }
                    for (l_636 = (-29); (l_636 > 50); l_636 = safe_add_func_uint32_t_u_u(l_636, 8))
                    {
                    }
                }
                else
                {
                    (*l_544) = 0xC794C4F2L;
                }
                for (g_89 = 12; (g_89 == 22); g_89 = safe_add_func_int8_t_s_s(g_89, 8))
                {
                    unsigned char l_785 = 2UL;
                    char *l_786 = &l_663;
                    unsigned long long * volatile * volatile *l_789 = &g_787;
                    for (g_278 = 22; (g_278 < 17); --g_278)
                    {
                        int *l_776 = &g_92;
                        int **l_777 = &l_655;
                        if (p_27)
                            break;
                        (*l_544) = (*g_308);
                        (*l_777) = l_776;
                    }
                    (*l_789) = ((!func_31(((*l_786) = (safe_lshift_func_int8_t_s_s(l_703, ((p_27 && ((safe_lshift_func_int8_t_s_u((l_759 == ((1UL > ((*l_655) = (*g_188))) , &p_23)), ((*g_18) = (l_782 & (safe_sub_func_int64_t_s_s((((*g_378) , (*g_684)) , l_785), l_782)))))) != g_28.f0)) ^ l_782)))), l_747, g_18, (*l_544), g_66)) , g_787);
                    (*l_655) = 6L;
                }
            }
            for (g_19 = 0; (g_19 == 52); ++g_19)
            {
                (*l_544) = (((**l_717) = l_792) , (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((6UL == ((*l_544) , (*l_544))), p_27)), ((*g_788) = (*l_655)))));
                if ((*l_544))
                    continue;
            }
        }
        (*l_797) = (void*)0;
    }
    if (((safe_mul_func_int16_t_s_s(p_23, (safe_mul_func_uint8_t_u_u((((*g_308) = 0L) == (((*l_807) = (safe_mod_func_uint64_t_u_u(((8L < 0x86L) , (g_6 > (safe_sub_func_int32_t_s_s(p_27, ((*l_806) = (l_792 , p_24)))))), p_26))) > 255UL)), p_26)))) && p_24))
    {
        unsigned long long l_810 = 0xA6E3FCCA68B84ED5LL;
        int *l_814 = &g_278;
        unsigned char ****l_822 = (void*)0;
        unsigned short ***l_857 = &g_142;
        unsigned short ****l_856 = &l_857;
        union U0 **l_869 = &g_378;
        unsigned l_889 = 18446744073709551615UL;
        long long l_907 = 0xF68A317AC1ADFB80LL;
        char *l_913 = &g_58;
        short l_923 = 0xF173L;
        int l_925 = (-1L);
        (*l_814) = (((*l_544) = ((*l_806) || (safe_mul_func_uint8_t_u_u(p_27, l_810)))) >= p_23);
        (*g_815) = (*g_633);
        (*l_814) = (!p_27);
        for (g_522 = 0; (g_522 != 21); g_522 = safe_add_func_int64_t_s_s(g_522, 1))
        {
            int *l_818 = (void*)0;
            int **l_819 = (void*)0;
            long long **l_877 = (void*)0;
            char *l_912 = (void*)0;
            (*g_820) = l_818;
            if (((((*l_814) >= p_25.f0) == 1L) < p_25.f0))
            {
                unsigned char *****l_823 = (void*)0;
                unsigned char *****l_824 = (void*)0;
                unsigned char *****l_825 = &l_822;
                int l_828 = (-1L);
                unsigned short *l_829 = (void*)0;
                union U0 *l_863 = (void*)0;
                l_818 = (*g_750);
                if (((*l_544) = (((((*l_813) = 1UL) , ((l_821 == ((*l_825) = l_822)) <= g_449)) , 5UL) , 0xE3C356F8L)))
                {
                    union U0 **l_830 = &g_378;
                    int l_836 = (-1L);
                    unsigned char l_846 = 255UL;
                    unsigned char l_847 = 0xF4L;
                    int *l_866 = &g_92;
                    (*l_830) = &p_25;
                    if ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(p_27)) && ((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((0x4A885673E7C2F96DLL || p_27) >= p_23), p_25.f0)), l_836)) | 0x56L)), l_828)))
                    {
                        char l_848 = 7L;
                        (*l_814) = ((*l_544) = (safe_mod_func_uint16_t_u_u((~(((((*l_814) && (safe_add_func_int64_t_s_s(p_27, l_828))) && p_24) != 0x22E21727721E3DE3LL) == l_828)), 1L)));
                        l_847 = p_23;
                        if (p_27)
                            break;
                        (*l_806) = (l_848 = p_25.f0);
                    }
                    else
                    {
                        long long *l_851 = &g_302;
                        unsigned long long *l_862 = &l_594;
                        (*l_814) = ((safe_mul_func_int8_t_s_s((!((*g_788) & ((*l_851) = ((*l_544) = (*g_421))))), (safe_lshift_func_int16_t_s_s(((((!((*g_788) < ((*l_862) = (p_25.f0 > (((safe_lshift_func_uint8_t_u_s(0xF9L, l_846)) > (l_856 != g_858)) > (l_828 < p_24)))))) != p_23) > p_26) < (*g_18)), p_24)))) | 4294967295UL);
                        (*l_830) = l_863;
                        (*l_544) = 5L;
                        (*g_864) = &l_836;
                    }
                    if (((*l_814) = l_846))
                    {
                        l_865 = &g_28;
                        l_866 = l_814;
                    }
                    else
                    {
                        return p_25.f0;
                    }
                    (*g_393) = (*l_814);
                }
                else
                {
                    union U0 **l_871 = &l_863;
                    (*l_544) = (safe_rshift_func_uint8_t_u_u((*l_806), ((*l_814) , ((*l_544) ^ (((g_870 = l_869) == l_871) | p_24)))));
                    (*l_814) = p_23;
                    return p_25.f0;
                }
                (*g_872) = l_818;
            }
            else
            {
                unsigned l_876 = 0x45E62EF1L;
                long long **l_879 = (void*)0;
                long long ***l_878 = &l_879;
                (*g_116) = (*l_806);
                (*l_806) = 0xED2A309AL;
                (*g_890) = func_45(l_873, ((safe_sub_func_int64_t_s_s((**g_420), p_27)) , p_25), l_814);
            }
            if ((*g_518))
            {
                char l_899 = 0xF0L;
                for (g_338 = (-15); (g_338 >= 45); g_338 = safe_add_func_uint8_t_u_u(g_338, 2))
                {
                    (*l_806) = ((*l_814) = (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((*g_18), ((safe_mod_func_int64_t_s_s((l_899 ^ (func_31(((safe_add_func_int64_t_s_s(((*g_188) <= (safe_add_func_uint16_t_u_u(((g_89 & (*l_544)) ^ ((*g_18) != (safe_mod_func_uint8_t_u_u(249UL, ((*l_807) = 0x8BL))))), l_906))), p_26)) < g_66), g_449, &g_19, p_26, g_305) & (***g_682))), 0xF09E42D4EFAED858LL)) ^ (-2L)))) <= (*g_18)), (*g_18))));
                }
            }
            else
            {
                short l_908 = (-1L);
                (*l_806) = p_25.f0;
                if ((*l_806))
                {
                    (*l_806) = p_25.f0;
                }
                else
                {
                    unsigned short *l_914 = &g_163;
                    int l_924 = 0xA5886EFEL;
                    if ((l_907 && ((l_908 > (-7L)) <= (~(safe_rshift_func_uint16_t_u_s(((*g_73) = p_27), 3))))))
                    {
                        unsigned short l_911 = 0xBCF4L;
                        (*l_544) = ((void*)0 != &g_421);
                        return l_911;
                    }
                    else
                    {
                        long long *l_915 = &g_302;
                        unsigned short *l_916 = (void*)0;
                        short *l_919 = &g_181;
                        int l_921 = (-1L);
                        unsigned short *l_922 = &g_74;
                        (*l_814) = ((*l_544) = (((&g_538 == &g_416) < p_26) , 0xC1317050L));
                        (*l_814) = (0UL < l_923);
                    }
                    (*l_806) = ((**g_420) >= (((~(((*g_870) == &l_792) ^ (l_924 == (l_925 >= g_163)))) , ((*g_18) = 0xB4L)) && (*l_544)));
                    (*l_814) = 1L;
                }
                (*l_544) = ((safe_add_func_int64_t_s_s((*g_421), (-6L))) & g_66);
            }
            (*l_806) = 1L;
        }
    }
    else
    {
        unsigned short **l_934 = &g_73;
        unsigned short *l_935 = &g_74;
        union U0 **l_936 = &g_378;
        int l_939 = 0xA740A466L;
        unsigned l_940 = 0x0FF10E18L;
        int **l_944 = (void*)0;
        char *l_953 = &g_58;
        union U0 *l_1046 = (void*)0;
        for (l_594 = 0; (l_594 <= 49); l_594 = safe_add_func_int16_t_s_s(l_594, 1))
        {
            if ((*g_593))
                break;
        }
        if ((((safe_add_func_uint8_t_u_u((((((void*)0 != &l_813) || (((*l_934) = &p_23) != (l_935 = &p_23))) > ((((**g_683) = ((*l_806) = (***g_682))) < l_939) <= l_939)) <= l_939), (*g_18))) , l_940) , l_940))
        {
            int *l_941 = &g_232;
            int **l_942 = &l_806;
            (*l_936) = &p_25;
            (*l_942) = l_941;
        }
        else
        {
            int **l_943 = &g_438;
            (*l_806) = (((-1L) >= ((l_944 = l_943) == (p_23 , &g_124))) == 0xE7L);
            (*l_544) = (*g_116);
        }
        if ((g_278 > p_26))
        {
            unsigned l_947 = 0xF44049D2L;
            char l_949 = (-9L);
            int **l_950 = &l_806;
            unsigned short *l_952 = &l_492;
            unsigned l_969 = 6UL;
            int l_975 = (-1L);
            unsigned char *l_976 = &l_636;
            int l_984 = 1L;
            union U0 l_999 = {0x0CE19401L};
            unsigned *l_1010 = &l_792.f0;
            char *l_1044 = &g_330;
            union U0 ***l_1047 = &l_936;
            union U0 ***l_1048 = &g_870;
            union U0 ***l_1049 = (void*)0;
            union U0 **l_1050 = &l_1046;
            for (l_636 = 0; (l_636 != 32); l_636 = safe_add_func_int32_t_s_s(l_636, 4))
            {
                unsigned short l_974 = 65528UL;
                int l_983 = 0xC12161C7L;
                int *l_991 = &g_278;
                unsigned short ***l_998 = &g_142;
                unsigned char *l_1012 = &g_19;
                if (l_947)
                    break;
            }
            (*l_806) = ((safe_mul_func_uint16_t_u_u(p_24, ((**l_950) | p_26))) | (*g_73));
            (*l_936) = l_1046;
            (*l_806) = (((((l_1052 , &l_813) != (*g_141)) < p_25.f0) & (**l_950)) < l_1053);
        }
        else
        {
            long long l_1054 = 0L;
            return l_1054;
        }
        (*l_544) = (*g_304);
    }
    return (*l_806);
}







static unsigned char func_31(char p_32, int p_33, unsigned char * p_34, int p_35, unsigned p_36)
{
    int l_517 = 0xE3149CD4L;
    int *l_528 = &g_92;
    (*g_518) = (l_517 & (0L | l_517));
    if ((safe_unary_minus_func_uint32_t_u(((l_517 , (safe_mul_func_uint8_t_u_u(l_517, g_522))) > (safe_sub_func_int64_t_s_s(0x45972E4058C229EALL, l_517))))))
    {
        int *l_525 = &g_232;
        (*g_526) = l_525;
        return l_517;
    }
    else
    {
        int *l_527 = &g_232;
        int *l_532 = &g_278;
        int l_537 = 1L;
        long long l_540 = 0L;
        l_528 = l_527;
        (*l_527) = (((*l_528) <= ((((safe_unary_minus_func_uint32_t_u(((void*)0 == &g_142))) , &g_18) == ((safe_mod_func_int32_t_s_s(((*l_532) = (p_35 ^ g_6)), (p_32 | l_537))) , g_538)) <= 0x4DB9A804L)) > l_540);
        for (g_181 = (-18); (g_181 == (-25)); g_181 = safe_sub_func_uint16_t_u_u(g_181, 2))
        {
            (*l_528) = (*l_532);
        }
    }
    return (*l_528);
}







static unsigned char * func_38(char p_39, unsigned char * p_40, unsigned char p_41, unsigned long long p_42)
{
    unsigned l_497 = 0xBFDEBF19L;
    unsigned short ***l_502 = &g_142;
    union U0 l_503 = {0x9D59A091L};
    int *l_516 = &g_278;
    for (g_278 = 0; (g_278 < 11); g_278 = safe_add_func_uint16_t_u_u(g_278, 1))
    {
        char l_496 = (-1L);
        int *l_498 = &g_92;
        if (l_496)
            break;
        if (p_42)
            break;
        (*l_498) = l_497;
    }
    for (l_497 = 7; (l_497 == 30); ++l_497)
    {
        unsigned short ***l_501 = (void*)0;
        unsigned char ****l_511 = (void*)0;
        unsigned char ****l_512 = (void*)0;
        unsigned char ***l_514 = &g_416;
        unsigned char ****l_513 = &l_514;
        int *l_515 = &g_232;
        (*g_437) = (l_516 = func_45((l_501 != l_502), l_503, func_45((((*g_18) = (safe_mul_func_uint8_t_u_u((*g_18), p_42))) > ((safe_rshift_func_uint8_t_u_s(l_503.f0, 6)) > p_41)), (*g_378), (((*l_515) = ((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s(((((*l_513) = &g_416) == &g_416) ^ p_41), p_42)))) != 18446744073709551615UL)) , (*g_437)))));
    }
    return &g_19;
}







static char func_43(int p_44)
{
    int *l_53 = &g_6;
    char **l_54 = (void*)0;
    char **l_55 = (void*)0;
    char *l_57 = &g_58;
    char **l_56 = &l_57;
    unsigned char *l_63 = (void*)0;
    unsigned short *l_64 = (void*)0;
    unsigned short *l_65 = &g_66;
    int **l_454 = &g_438;
    short *l_475 = &g_305;
    short **l_474 = &l_475;
    short ***l_473 = &l_474;
    int *l_487 = &g_278;
    (*l_454) = func_45(p_44, func_49(l_53, (((((*l_56) = (void*)0) == (((safe_sub_func_int32_t_s_s(p_44, (((safe_lshift_func_uint16_t_u_s((+((*l_65) = ((void*)0 == l_63))), (*l_53))) > (safe_lshift_func_int16_t_s_u((*l_53), func_69(((g_73 != (void*)0) & (*l_53)), l_65, (*l_53))))) & (*l_53)))) != 0x92F95D623B7D0749LL) , (*g_120))) & p_44) , l_53), (*l_53)), l_53);
    for (g_92 = (-7); (g_92 != 0); g_92++)
    {
        char *l_459 = &g_330;
        int l_460 = 1L;
        long long l_463 = 0x9660C891040D20ADLL;
        short *l_466 = &g_181;
        short *l_467 = (void*)0;
        short *l_468 = &g_89;
        int *l_476 = &g_232;
        (*l_476) = ((p_44 , ((safe_sub_func_int8_t_s_s(((*l_459) = p_44), 0UL)) > l_460)) | ((g_349 == (-1L)) < (safe_add_func_uint32_t_u_u(l_463, (safe_add_func_int16_t_s_s(((*l_468) = ((*l_466) = g_58)), ((safe_add_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s((p_44 || 0xF2L), 4UL)) , l_473) == &l_474), 1L)) < p_44)))))));
        (*l_454) = (*l_454);
        if (p_44)
            break;
    }
    (*g_488) = ((((*l_487) = (safe_sub_func_int64_t_s_s(((*l_53) , (((*l_53) | 0xA8D1L) ^ (*g_18))), (~(safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((**g_420) , (0L ^ (*l_53))), ((-4L) > ((safe_add_func_int8_t_s_s((&l_474 == g_485), (*g_18))) <= 0xF619L)))), p_44)))))) > (**l_454)) | 1L);
    return p_44;
}







static int * func_45(unsigned char p_46, union U0 p_47, int * p_48)
{
    int *l_453 = &g_92;
    for (g_278 = 0; (g_278 <= (-18)); g_278--)
    {
        return p_48;
    }
    return l_453;
}







static union U0 func_49(int * p_50, int * p_51, unsigned short p_52)
{
    unsigned l_441 = 0x027CD5C1L;
    union U0 **l_442 = (void*)0;
    unsigned long long *l_443 = &g_186;
    unsigned long long *l_444 = (void*)0;
    unsigned long long *l_445 = &g_446;
    union U0 l_447 = {0x3C059C4FL};
    int *l_448 = &g_232;
    int **l_450 = &g_438;
    (*g_437) = p_51;
    g_449 = (safe_mod_func_int32_t_s_s(l_441, (((*l_445) = ((*l_443) = (l_442 != &g_378))) , (l_447 , ((*l_448) = l_447.f0)))));
    (*l_448) = (*p_50);
    (*l_450) = (void*)0;
    return (*g_378);
}







static unsigned short func_69(long long p_70, unsigned short * p_71, unsigned char p_72)
{
    short l_77 = 0xA629L;
    char *l_83 = &g_58;
    unsigned long long l_212 = 0UL;
    union U0 l_255 = {0x7F3106F3L};
    unsigned long long l_261 = 18446744073709551615UL;
    char l_358 = 6L;
    unsigned *l_376 = &l_255.f0;
    int l_385 = (-1L);
    int l_387 = (-1L);
    int *l_401 = &g_278;
    unsigned long long l_407 = 0xE0EB8E2102A08289LL;
    unsigned long long l_426 = 0xB75E71E7B9D53C29LL;
    unsigned char l_429 = 1UL;
    union U0 **l_430 = &g_378;
    long long **l_433 = (void*)0;
    long long l_434 = 0x616F3A77F5BDC1D6LL;
    unsigned l_435 = 8UL;
    int **l_436 = &l_401;
    if (p_72)
    {
        long long l_221 = 0xFEC5635C934E113DLL;
        int l_254 = 0xF8657140L;
        unsigned long long *l_275 = &l_261;
        int *l_280 = &g_232;
        int **l_279 = &l_280;
        short *l_284 = &g_89;
        short **l_283 = &l_284;
        unsigned l_295 = 0x95288B18L;
        unsigned *l_364 = &g_349;
        unsigned l_371 = 0xAEF6CC77L;
        char *l_374 = &l_358;
        char **l_375 = &l_374;
        int *l_377 = &g_232;
        if (((safe_mod_func_int16_t_s_s(g_58, l_77)) | (((safe_add_func_uint8_t_u_u(((*g_18) = (p_70 , (func_80(p_71, l_83) , (*g_18)))), (safe_lshift_func_int8_t_s_s(((((!((l_77 > (p_72 != g_6)) >= l_77)) || 4294967288UL) < l_77) || p_70), 5)))) >= 0xA36B5B5DF624FECDLL) & p_70)))
        {
            long long l_226 = 0xB5CEBA8194CA43DCLL;
            int *l_227 = &g_92;
            long long *l_228 = (void*)0;
            long long *l_229 = (void*)0;
            long long *l_230 = &l_221;
            int *l_231 = &g_232;
            unsigned short ***l_242 = &g_142;
            if (((*l_231) = (safe_mul_func_int8_t_s_s((l_212 , p_70), (safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_uint8_t_u_u(p_70, (((*l_230) = (safe_rshift_func_uint16_t_u_u(l_221, (((*l_227) = ((safe_sub_func_int32_t_s_s((*g_206), p_70)) , (safe_mod_func_int16_t_s_s(((l_226 | g_181) < 0x5244L), l_221)))) ^ 0xA48B500BL)))) <= g_28.f0))), g_58)), p_72))))))
            {
                (*l_231) = l_77;
            }
            else
            {
                unsigned short l_241 = 0xDE77L;
                unsigned long long l_264 = 18446744073709551607UL;
                for (l_226 = 0; (l_226 > 3); l_226++)
                {
                    unsigned short ***l_244 = (void*)0;
                    unsigned short ****l_243 = &l_244;
                    short *l_253 = &g_181;
                    (*l_227) = (((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((l_241 != (65535UL <= ((0xC24F611E92AA66C7LL < ((l_242 != ((*l_243) = &g_142)) && (safe_mod_func_int32_t_s_s((~(*g_116)), p_70)))) , 0x879FL))), 0x9FL)) == g_92), 0)), g_58)) < p_70) != p_70);
                }
                (*l_227) = p_72;
            }
            (*l_227) = (safe_mul_func_uint8_t_u_u((*l_227), ((l_275 == l_228) && ((safe_mod_func_uint64_t_u_u((l_221 , 0x3F57621A5245C12DLL), (g_278 = g_92))) >= g_187))));
        }
        else
        {
            union U0 l_281 = {1UL};
            char l_282 = (-9L);
            short ***l_285 = &l_283;
            unsigned short *l_286 = &g_74;
            int *l_350 = &g_278;
            (*l_280) = ((+((void*)0 == l_279)) && 0L);
            (**l_279) = (g_186 , p_72);
            (*l_285) = (((l_77 , p_72) ^ 3L) , l_283);
            if (p_72)
            {
                unsigned l_299 = 0x66D061A8L;
                int *l_311 = &g_232;
                unsigned l_318 = 0x3FB24719L;
                if (((g_28 , (safe_mod_func_int8_t_s_s(0xCCL, ((*g_18) = 9UL)))) < ((safe_add_func_int64_t_s_s((p_70 == (safe_rshift_func_uint8_t_u_u(g_74, 6))), (safe_mul_func_int16_t_s_s(l_255.f0, (65535UL >= 0x653AL))))) | l_295)))
                {
                    (*l_280) = (!p_70);
                }
                else
                {
                    int *l_296 = (void*)0;
                    (*l_280) = 0xB53073A3L;
                    (*l_279) = l_296;
                }
                (*l_279) = (*l_279);
                for (p_72 = 18; (p_72 == 5); --p_72)
                {
                    long long *l_300 = &l_221;
                    long long *l_301 = &g_302;
                    int *l_303 = (void*)0;
                    (*g_304) = (l_299 < ((*l_301) = ((*l_300) = p_72)));
                    (*g_308) = ((((((g_305 , l_281.f0) , (safe_lshift_func_int16_t_s_s(p_70, g_163))) != 8L) ^ p_70) , 1L) & (((l_299 <= (*g_18)) , &g_91) != (void*)0));
                    for (g_186 = 0; (g_186 <= 17); g_186++)
                    {
                        unsigned *l_319 = &l_255.f0;
                        int l_326 = 0x7EB90BE4L;
                        int l_327 = 0x393BE6B1L;
                        l_311 = &g_278;
                        (*l_311) = (safe_add_func_int64_t_s_s((((*g_73) = (safe_mod_func_int16_t_s_s((((*l_319) = l_318) , (safe_sub_func_int16_t_s_s((*l_311), (safe_rshift_func_int8_t_s_u(p_72, (!l_281.f0)))))), ((safe_add_func_uint64_t_u_u(p_72, l_326)) | ((*l_284) = (l_327 = ((g_89 == (*g_73)) , ((p_70 < (-1L)) , 0x17E8L)))))))) >= 0L), g_181));
                    }
                    if (((*g_73) & 0xCD24L))
                    {
                        (*l_311) = 0xB4E17504L;
                    }
                    else
                    {
                        (*l_279) = l_303;
                        if ((*g_188))
                            continue;
                    }
                }
            }
            else
            {
                unsigned l_339 = 0x2BEB2762L;
                unsigned char l_353 = 0x5CL;
                if ((g_58 , (safe_lshift_func_uint8_t_u_u(0UL, 7))))
                {
                    (**l_279) = (*g_91);
                }
                else
                {
                    int l_340 = (-1L);
                    if ((((((*l_286) = p_70) && (*g_73)) , (void*)0) != (void*)0))
                    {
                        short l_331 = 0xA3ACL;
                        (*l_280) = p_72;
                        (*l_280) = (g_330 | (l_331 > (*g_73)));
                        (**l_279) = (safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_70 > (p_72 == 0x6DL)), l_331)), 0xD823L));
                    }
                    else
                    {
                        (*l_279) = l_350;
                    }
                    (*l_350) = (safe_lshift_func_uint8_t_u_u((p_70 && 0xFFD46F37L), 6));
                    for (l_340 = (-7); (l_340 < (-18)); l_340 = safe_sub_func_int64_t_s_s(l_340, 5))
                    {
                        return l_212;
                    }
                }
                (**l_279) = (safe_mod_func_uint8_t_u_u((l_358 > (p_70 | 255UL)), p_70));
                (*l_280) = l_358;
            }
        }
        (*l_377) = (safe_sub_func_uint16_t_u_u((l_255.f0 < (0x598FL <= 0x6B70L)), (((p_70 , ((l_364 = (void*)0) != ((safe_lshift_func_uint8_t_u_u((!(*g_18)), l_358)) , l_376))) ^ p_72) == 0L)));
        (*l_279) = &g_278;
        g_378 = &g_28;
    }
    else
    {
        long long l_386 = 1L;
        int l_394 = 1L;
        unsigned long long *l_404 = (void*)0;
        unsigned char *l_405 = (void*)0;
        short **l_427 = (void*)0;
        short ***l_428 = &l_427;
        for (g_338 = (-4); (g_338 != 51); g_338 = safe_add_func_uint32_t_u_u(g_338, 1))
        {
            int *l_382 = &g_6;
            int **l_381 = &l_382;
            (*l_381) = (void*)0;
        }
        l_394 = l_385;
        for (g_349 = 0; (g_349 != 36); g_349 = safe_add_func_uint8_t_u_u(g_349, 7))
        {
            short *l_397 = (void*)0;
            short *l_398 = &g_89;
            int *l_400 = &g_232;
            int **l_402 = (void*)0;
            int **l_403 = &l_400;
            unsigned char **l_406 = &l_405;
            (*g_399) = (((*l_398) = 0x0487L) == (*g_73));
            (*l_403) = (l_401 = (p_72 , l_400));
            if ((*g_188))
                continue;
        }
        (*l_428) = l_427;
    }
    (*l_401) = (*l_401);
    l_435 = ((safe_lshift_func_uint16_t_u_u(((void*)0 == l_433), 3)) , (((*l_83) = l_434) | ((*l_401) = 0xE8L)));
    (*l_436) = &l_385;
    return (*g_73);
}







static union U0 func_80(unsigned short * p_81, char * p_82)
{
    short *l_88 = &g_89;
    int l_90 = 0L;
    int l_95 = (-1L);
    short l_114 = 0L;
    char l_115 = 0L;
    int l_201 = 0xAFFF8E30L;
    int *l_202 = (void*)0;
    int *l_203 = (void*)0;
    union U0 l_207 = {0x3C559F55L};
    (*g_91) = ((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((*l_88) = 0x3274L), 0x5249L)), l_90)) & (-1L));
    (*g_116) = (!(l_90 = ((safe_lshift_func_int16_t_s_u((l_95 >= l_95), 10)) , (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*p_82), (safe_unary_minus_func_uint64_t_u(l_90)))), (safe_mod_func_uint8_t_u_u(((l_95 = l_95) | (l_201 = ((safe_mul_func_int16_t_s_s((((-5L) == ((func_107(((l_90 > g_92) || ((safe_add_func_int8_t_s_s((*p_82), (*g_18))) & l_114)), l_115, l_115, l_115) | l_115) < l_114)) > g_58), g_6)) , g_186))), (*p_82))))), 4)))));
    (*g_206) = (safe_lshift_func_int16_t_s_s((&g_188 == (((*g_18) = 0UL) , &l_203)), 13));
    return l_207;
}







static short func_107(int p_108, short p_109, unsigned p_110, long long p_111)
{
    int l_117 = (-1L);
    unsigned short **l_140 = &g_73;
    int *l_199 = &g_92;
    if ((*g_91))
    {
        char *l_123 = &g_58;
        char **l_122 = &l_123;
        (*g_116) = (p_108 > g_58);
        (*g_124) = (((~(l_117 & l_117)) > (g_74 <= (safe_mul_func_int16_t_s_s(((0x64C7F453ACC8D4E5LL | g_58) != 1UL), p_111)))) <= ((g_120 == l_122) && p_108));
    }
    else
    {
        unsigned l_127 = 4294967289UL;
        union U0 l_171 = {0x559458B2L};
        char *l_172 = &g_58;
        int l_184 = (-1L);
        unsigned l_195 = 0xBA988505L;
        int *l_200 = &g_92;
        if (((1L ^ p_109) , (l_117 , ((safe_lshift_func_int8_t_s_u(l_127, ((*g_18) = (safe_mod_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(l_117, ((safe_rshift_func_uint16_t_u_u((l_127 < ((((g_74 ^ ((p_110 ^ (p_108 >= 0x4015L)) >= 0x896CL)) && 0x56F3C4E318651235LL) && 0UL) & p_110)), 6)) > 0UL))) , (*g_91)), g_74))))) , 0x6F28A7DEL))))
        {
            unsigned char l_145 = 0UL;
            union U0 l_192 = {0xF33FD128L};
            int *l_196 = &g_92;
            int **l_198 = &l_196;
            if ((~9L))
            {
                char l_164 = (-2L);
                for (g_19 = 25; (g_19 != 17); --g_19)
                {
                    int *l_137 = &g_6;
                    int **l_136 = &l_137;
                    int *l_139 = &g_92;
                    int **l_138 = &l_139;
                    (*l_138) = ((*l_136) = &g_92);
                    (*g_141) = l_140;
                    for (l_127 = 4; (l_127 >= 35); ++l_127)
                    {
                        (*l_137) = l_127;
                        l_145 = ((*l_137) = p_111);
                        (*l_136) = ((*l_138) = &p_108);
                    }
                }
                for (p_108 = 27; (p_108 > (-11)); p_108--)
                {
                    unsigned short *l_168 = &g_74;
                    int l_169 = 0x6483D34BL;
                    int *l_174 = &g_92;
                    int **l_173 = &l_174;
                    for (g_74 = 0; (g_74 <= 15); ++g_74)
                    {
                        int *l_150 = (void*)0;
                        int *l_151 = &g_92;
                        unsigned short *l_162 = &g_163;
                        short *l_165 = &g_89;
                        int **l_170 = &l_150;
                        (*l_151) = l_127;
                        (*l_151) = (safe_rshift_func_uint8_t_u_u(((void*)0 != &g_92), (p_109 <= (safe_mul_func_int16_t_s_s(((void*)0 == &g_142), (safe_mul_func_uint8_t_u_u(l_127, (l_127 , (-8L)))))))));
                        (*l_170) = ((+(p_111 || (safe_lshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((*l_162) = p_109), ((*l_165) = l_164))), (safe_sub_func_int64_t_s_s((((*g_18) = p_110) != ((void*)0 == l_168)), ((g_92 >= 0x19BA6681F6C300DCLL) <= l_169))))))) , &p_108);
                        (*l_151) = (l_171 , (((&l_150 != &g_124) , (*g_120)) == l_172));
                    }
                    (*l_173) = (void*)0;
                    (*l_173) = &l_117;
                    if (p_111)
                        break;
                }
            }
            else
            {
                short *l_180 = &g_181;
                unsigned short ***l_182 = (void*)0;
                int l_183 = 0xE2E77569L;
                unsigned long long *l_185 = &g_186;
                (*g_188) = ((safe_sub_func_int8_t_s_s((l_117 = ((((void*)0 != &g_142) <= ((!(safe_unary_minus_func_uint16_t_u(65535UL))) < (g_187 = (((*l_185) = (((safe_add_func_uint32_t_u_u(g_89, ((l_171 , (((p_109 = ((*l_180) = 0xC716L)) ^ g_58) , l_182)) != (void*)0))) & l_183) > l_184)) , g_163)))) , 0xC5L)), p_108)) ^ 0xC552L);
            }
            (*l_196) = (safe_unary_minus_func_int16_t_s(((l_117 <= 0x7C474B76L) > ((safe_lshift_func_int8_t_s_u((((l_192 , (safe_sub_func_uint32_t_u_u((g_187 , (l_195 = ((!0xF18E88F9L) | g_186))), p_108))) == l_117) && p_111), (*g_18))) , l_192.f0))));
            (*l_198) = &p_108;
            (*l_196) = (*g_188);
        }
        else
        {
            g_124 = &p_108;
            l_200 = l_199;
            return (*l_199);
        }
        p_108 = p_110;
    }
    (*l_199) = p_111;
    return g_92;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_699, "g_699", print_hash_value);
    transparent_crc(g_770, "g_770", print_hash_value);
    transparent_crc(g_1011, "g_1011", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
