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
   volatile char f0;
   unsigned char f1;
   int f2;
   unsigned f3;
};


static int g_9 = 0L;
static int *g_8 = &g_9;
static int g_21 = 0x4D035725L;
static int * volatile g_24 = &g_21;
static const int g_30 = 0x5EC62BB2L;
static int g_34 = 0L;
static short g_36 = 0x79DCL;
static volatile union U0 g_39 = {0x9FL};
static char g_41 = 0L;
static int ** volatile g_70 = (void*)0;
static unsigned short g_75 = 0UL;
static short g_84 = 8L;
static int ** volatile g_87 = (void*)0;
static int *g_89 = &g_34;
static int ** volatile g_88 = &g_89;
static short g_98 = 0xC86DL;
static int ** volatile g_106 = &g_89;
static union U0 g_108 = {0xA8L};
static int g_122 = 0x9EF24C43L;
static int * volatile g_128 = &g_122;
static volatile union U0 g_129 = {0x47L};
static int ** volatile g_130 = &g_89;
static const int g_202 = 0x1C62F756L;
static unsigned short g_214 = 0xC95DL;
static short g_230 = 0x67C5L;
static unsigned char g_237 = 4UL;
static int * volatile g_240 = &g_122;
static volatile union U0 *g_258 = &g_129;
static volatile union U0 ** volatile g_257 = &g_258;
static union U0 g_267 = {1L};
static char g_279 = 0L;
static unsigned g_281 = 0x60CB9E47L;
static unsigned g_304 = 0x1880EF60L;
static int g_319 = 0L;
static const short g_342 = 8L;
static const short *g_341 = &g_342;
static int ** volatile g_359 = &g_89;
static volatile union U0 g_360 = {0xC7L};
static volatile union U0 g_395 = {1L};
static short * volatile *g_397 = (void*)0;
static short * volatile **g_396 = &g_397;
static int g_405 = (-1L);
static int ** volatile g_416 = &g_89;
static char g_437 = (-1L);
static volatile unsigned g_443 = 4294967295UL;
static unsigned short *g_454 = &g_75;
static union U0 g_476 = {0L};
static int ** volatile g_480 = &g_89;
static int ** volatile g_481 = &g_89;
static int ** volatile g_482 = (void*)0;
static int ** volatile g_483 = &g_89;
static const volatile unsigned char * volatile * const volatile g_511 = (void*)0;
static const volatile unsigned char * volatile *g_513 = (void*)0;
static const volatile unsigned char * volatile * volatile * volatile g_512 = &g_513;
static char * volatile * volatile g_515 = (void*)0;
static char * volatile * volatile * volatile g_516 = &g_515;
static int * volatile g_518 = &g_319;
static int * volatile *g_517 = &g_518;
static int * volatile ** volatile g_519 = &g_517;
static int g_530 = 0x77306DE7L;
static int * const g_529 = &g_530;
static int * const *g_528 = &g_529;
static int *g_534 = &g_405;
static char *g_570 = (void*)0;
static char **g_569 = &g_570;
static char **g_574 = &g_570;
static int ** const volatile g_580 = &g_534;
static unsigned g_581 = 18446744073709551606UL;
static int ** volatile g_584 = &g_534;
static volatile unsigned char g_595 = 247UL;
static char *** volatile g_604 = &g_574;
static char *** volatile g_605 = &g_569;
static unsigned short **g_611 = &g_454;
static unsigned short *** volatile g_610 = &g_611;
static union U0 g_633 = {0L};
static int ** volatile g_638 = &g_534;
static int * const *g_649 = &g_534;
static int * const g_679 = &g_319;
static int * const *g_678 = &g_679;
static const int *g_687 = &g_530;
static const int **g_686 = &g_687;
static const int *g_691 = &g_122;
static const int **g_690 = &g_691;
static int **g_712 = (void*)0;
static int ***g_711 = &g_712;
static int ****g_710 = &g_711;
static unsigned char g_738 = 0UL;
static const union U0 g_753 = {0xC4L};
static short ***g_772 = (void*)0;
static int ** volatile g_799 = (void*)0;
static unsigned *g_816 = (void*)0;



static int func_1(void);
static int * func_2(int * p_3, unsigned short p_4, unsigned p_5, int * p_6, int * p_7);
static int * func_10(int p_11, int p_12);
static int ** func_14(const char p_15, const int * p_16, unsigned char p_17);
static int * func_18(char p_19);
static unsigned short func_37(short p_38);
static unsigned short func_54(int p_55);
static unsigned func_56(unsigned p_57, const int p_58, unsigned p_59, const int ** p_60, char * p_61);
static unsigned func_62(int * const * p_63, char p_64, int p_65, int ** p_66);
static unsigned short func_68(int * const p_69);
static int func_1(void)
{
    unsigned l_13 = 0x0BD2AB60L;
    int *l_817 = &g_9;
    char *l_831 = &g_437;
    short *l_832 = (void*)0;
    short *l_833 = (void*)0;
    short *l_834 = &g_36;
    int *l_835 = (void*)0;
    (*g_416) = func_2(g_8, g_9, g_9, func_10(l_13, l_13), l_817);

    ;

    ;
    ;
    (*l_817) = ((safe_mod_func_int32_t_s_s((*l_817), (safe_lshift_func_int16_t_s_s(((*l_817) <= (safe_mod_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((*g_454), (**g_611))) & ((*g_89) | (((((*l_834) = (safe_lshift_func_int8_t_s_u(((*l_831) = ((((*l_817) ^ (*l_817)) ^ (**g_480)) > (safe_sub_func_uint8_t_u_u((g_476.f1 , g_476.f1), 0x85L)))), g_279))) == (*l_817)) & 1L) >= 0xBEL))), 0x336FL))), 4)))) && 0x1FL);
    (*g_686) = l_835;

    ;
    return (**g_480);
}







static int * func_2(int * p_3, unsigned short p_4, unsigned p_5, int * p_6, int * p_7)
{
    int *l_818 = &g_9;
    l_818 = p_7;
    return p_3;


}







static int * func_10(int p_11, int p_12)
{
    unsigned char l_20 = 0UL;
    const int *l_637 = &g_202;
    const int **l_636 = &l_637;
    int **l_640 = &g_534;
    int ***l_639 = &l_640;
    short l_642 = 1L;
    unsigned *l_643 = &g_281;
    short l_646 = 0xCB08L;
    int **l_654 = &g_534;
    const unsigned char *l_656 = &l_20;
    const unsigned char **l_655 = &l_656;
    char *l_657 = &g_437;
    unsigned short ***l_672 = &g_611;
    int ****l_714 = &g_711;
    int l_759 = 0x151A9C89L;
    (*l_639) = func_14(p_11, ((*l_636) = func_18((g_21 = l_20))), g_581);

    ;
    ;

    ;
    ;
    if (g_581)
        goto lbl_641;
lbl_641:
    (*l_636) = (*g_359);

    ;
    (*l_636) = &p_11;

    ;
    if (func_56(((*l_643) = l_642), (func_62(&g_8, (safe_rshift_func_uint16_t_u_s(((**g_611) = ((p_11 , (((**g_611) > ((l_646 , ((safe_lshift_func_uint16_t_u_u((func_62((g_649 = g_649), p_12, (safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((-4L), (***l_639))) <= (**g_611)), (**l_640))), l_654) ^ p_12), 5)) | p_11)) ^ (-3L))) , (void*)0)) == l_655)), (**l_640))), g_342, (*l_639)) >= 0x179BL), p_12, &l_637, l_657))
    {
        volatile union U0 **l_659 = &g_258;
        volatile union U0 ***l_658 = &l_659;
        (*l_658) = &g_258;
        for (g_75 = 0; (g_75 != 38); ++g_75)
        {
            const unsigned short **l_663 = (void*)0;
            const unsigned short ***l_662 = &l_663;
            (*l_662) = (void*)0;
        }
    }
    else
    {
        int l_664 = 0x1C5DA31AL;
        const int ****l_668 = (void*)0;
        char *l_688 = (void*)0;
        unsigned short ***l_696 = &g_611;
        int l_755 = 0x0C3056F9L;
        int * const *l_773 = &g_529;
        int *l_815 = &l_755;
        int **l_814 = &l_815;
        (**l_654) = (((**l_636) , 0x16DDCFA3L) & ((((*g_258) , &l_657) != &g_570) > (p_11 & p_12)));
        if (((l_664 = ((**g_611) = (***l_639))) > (*g_341)))
        {
            (*g_534) = p_12;
        }
        else
        {
            unsigned short l_667 = 0UL;
            const int *****l_669 = (void*)0;
            const int *****l_670 = &l_668;
            unsigned short ***l_671 = &g_611;
            int * const l_673 = &g_21;
            int ***l_676 = (void*)0;
            if (((p_12 ^ ((((safe_sub_func_uint8_t_u_u(l_667, (p_12 ^ (((*l_670) = (l_667 , l_668)) == &l_639)))) , l_671) != ((65535UL < (((p_11 >= p_12) & 0x28F8L) , p_12)) , l_672)) ^ p_12)) | l_664))
            {
                return (*g_638);


            }
            else
            {
                const char l_677 = 0x46L;
                int * const **l_680 = &g_678;
                unsigned char *l_685 = &g_237;
                int *l_689 = &g_319;
                if ((((p_12 , (((*l_643) = ((-8L) || (((*l_657) = p_11) > l_664))) , (-2L))) && (*g_341)) > 0x61A4L))
                {
                    p_11 = l_677;
                }
                else
                {
                    (**g_528) = ((*l_673) = (**g_584));
                }
                (*g_534) = func_56((l_677 , ((**l_654) >= ((*g_519) != ((*l_680) = g_678)))), ((*l_689) = (func_56((!g_36), (**l_636), (safe_add_func_uint16_t_u_u((((((~65535UL) | (*g_341)) > (safe_rshift_func_int16_t_s_u(((((*l_685) = 249UL) <= (**l_636)) && p_11), p_11))) <= (**g_528)) > g_405), 0L)), g_686, l_688) | l_677)), g_530, g_690, l_688);

                ;
                ;
            }

            ;
            ;
            for (g_75 = 25; (g_75 >= 31); ++g_75)
            {
                unsigned short *l_697 = &g_214;
                int l_700 = 0x2566186EL;
                unsigned *l_701 = &g_633.f3;
                int *****l_713 = (void*)0;
                unsigned char *l_715 = &g_476.f1;
                unsigned short *l_718 = &l_667;
                union U0 ***l_730 = (void*)0;
                int **l_735 = (void*)0;
                l_700 = ((**g_528) = func_54((safe_rshift_func_int16_t_s_s((0UL < (l_696 == (((*l_701) = (func_54((p_12 = (((*l_697) = p_12) != (*g_341)))) <= (safe_rshift_func_uint16_t_u_u(((p_11 , ((void*)0 == (**g_519))) , l_700), (**l_654))))) , &g_611))), p_11))));

                                (*l_636) = (((p_12 | (g_595 , ((((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((((*l_715) = (safe_add_func_uint16_t_u_u(0x6D6DL, (l_700 , ((l_714 = g_710) == (void*)0))))) && p_12) | (safe_sub_func_int32_t_s_s((l_664 = ((((*l_718) = (((*l_697) = 0xAC84L) != 0UL)) == p_12) <= p_11)), 0x009AFDE6L))), (*g_341))) , 0L), 2UL)), 0x2FE57461L)) , 0xCE6332B8L) , p_11) ^ p_11))) == p_11) , &p_11);

                ;
                (*l_636) = &p_11;
                if (func_54((***g_519)))
                {
                    for (l_664 = 0; (l_664 <= (-18)); l_664 = safe_sub_func_int32_t_s_s(l_664, 1))
                    {
                        (*l_636) = (*g_638);

                        ;
                    }

                    ;
                }
                else
                {
                    int l_729 = (-8L);
                    int * const *l_732 = (void*)0;
                    char *l_739 = &g_437;
                    if ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u(p_11, (safe_sub_func_uint8_t_u_u(((**g_611) <= (((((((l_729 <= p_12) , ((p_11 , l_730) != &g_257)) || (((safe_unary_minus_func_uint32_t_u((func_62(l_732, (safe_mod_func_int16_t_s_s(func_54(((func_54(p_11) | 0x9A4FL) && p_11)), p_11)), p_11, l_735) , p_11))) , p_12) & g_279)) & 0x5F52L) , 65534UL) == p_12) < (*g_341))), g_581)))) ^ (**l_636)) > p_11), (***l_639))), 0x39L)))
                    {
                        return (*g_584);


                    }
                    else
                    {
                        const int l_746 = 0x9FE4C7AFL;
                        char l_747 = 5L;
                        (**g_528) = (*g_691);
                        (**g_528) = ((safe_lshift_func_uint16_t_u_u((func_56(g_738, p_11, g_39.f0, &l_637, l_739) , ((safe_mod_func_uint16_t_u_u(((*l_718) = ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((func_56(func_62(func_14(l_746, (*g_638), p_12), p_12, (**g_678), (**g_710)), (**g_678), p_12, &l_637, l_715) >= (*g_454)) ^ 0x10L) <= g_202), 0x00L)) && l_747), g_202)) & l_747)), 0x6185L)) | l_746)), 11)) && 4294967289UL);

                        ;
                        (*l_673) = p_12;
                    }

                    ;
                    (*l_636) = (*g_480);

                    ;
                }

                ;
            }

            ;
        }

        ;
        ;
        ;
        for (l_646 = 28; (l_646 <= 3); --l_646)
        {
            int l_752 = 0x254944C3L;
            int l_765 = 5L;
            int *l_809 = (void*)0;
            for (g_405 = 12; (g_405 > 5); g_405 = safe_sub_func_int8_t_s_s(g_405, 2))
            {
                int * const *l_756 = &g_534;
                char ***l_760 = &g_569;
                short *l_766 = &g_230;
                short ***l_771 = (void*)0;
                char l_785 = 0x06L;
                int *l_792 = &g_530;
                int l_801 = 0x49328860L;
                if (l_752)
                {
                    int *l_754 = &g_405;
                    (*g_690) = (g_753 , l_754);

                    ;
                }
                else
                {
                    (*g_240) = (-1L);
                    p_11 = p_11;
                }
                if (((*g_529) = ((l_755 && ((*l_766) = (((g_98 = 0L) , func_62(l_756, (safe_rshift_func_int8_t_s_u(l_759, 4)), (((*l_643) = (l_760 != l_760)) || (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((-4L) | l_765), (**l_756))), 13))), (**l_714))) | 1UL))) != 1UL)))
                {
                    short l_769 = 0xAFEEL;
                    const short * const **l_770 = (void*)0;
                    short * volatile *l_774 = &l_766;
                    int l_789 = 1L;
                    unsigned l_791 = 18446744073709551615UL;
                    (*g_529) = (**g_528);
                    for (g_530 = 3; (g_530 >= (-11)); g_530 = safe_sub_func_uint8_t_u_u(g_530, 5))
                    {
                        short **l_775 = &l_766;
                        unsigned **l_776 = &l_643;
                        unsigned char *l_786 = (void*)0;
                        unsigned char *l_787 = (void*)0;
                        unsigned char *l_788 = &g_108.f1;
                        short *l_790 = &l_769;
                        p_11 = (((p_12 && p_12) ^ ((+l_769) | ((l_770 != (g_772 = l_771)) && func_62(l_773, p_11, func_54((p_12 , l_765)), (**g_710))))) >= p_11);
                        if (p_12)
                            break;
                        l_774 = (*g_396);

                        ;
                        p_11 = ((l_775 == ((g_395.f1 == g_98) , l_775)) <= (((((*l_776) = &g_281) == ((+((*l_790) = ((*l_766) = ((((*l_657) = ((l_789 = (((safe_mod_func_int16_t_s_s(((-1L) == (((*l_788) = (safe_add_func_uint8_t_u_u(255UL, (((g_30 | (safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(g_34, 254UL)) || p_11), (*g_454)))) || l_785) >= p_11)))) && g_108.f1)), 1L)) ^ p_12) != l_765)) || 1L)) , 0xE340L) > (-1L))))) , l_637)) || p_12) < l_791));

                                            }

                    ;
                }
                else
                {
                    (*g_686) = l_792;

                    ;
                    for (g_122 = 0; (g_122 <= (-13)); g_122--)
                    {
                        int *l_795 = &g_34;
                        return l_795;


                    }
                }
                for (l_785 = 23; (l_785 < (-17)); l_785--)
                {
                    int * const l_798 = &g_405;
                    int **l_800 = &l_792;
                    (**g_528) = p_12;
                    (*l_800) = l_798;

                    ;
                    if (l_801)
                        break;
                }

                ;
            }
            (**g_649) = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((*g_691), g_530)), ((*l_657) = 0x45L))) , (safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint8_t_u(p_12)) | func_54(func_54(l_765))) > p_12), (((0x55L | (**l_640)) | p_11) | p_11))));
            if (p_11)
                break;
            (*g_481) = l_809;
        }
        p_11 = (~(p_12 || (safe_add_func_int16_t_s_s(((((*l_657) = (((**l_654) && ((((safe_add_func_uint16_t_u_u((((p_12 && (**g_584)) , l_814) == &l_815), ((void*)0 == g_816))) || func_56((((void*)0 == l_815) , 0xAF4C4810L), (*g_679), p_11, &g_687, (**g_604))) , p_11) , 0x7372L)) >= 0UL)) | p_12) && (-1L)), 0x8EA7L))));
    }

    ;
    ;
    ;
    ;
    return (**l_639);


}







static int ** func_14(const char p_15, const int * p_16, unsigned char p_17)
{
    (*g_638) = (*g_106);

    ;
    return &g_8;


}







static int * func_18(char p_19)
{
    const int *l_29 = &g_30;
    const int **l_28 = &l_29;
    const int ***l_27 = &l_28;
    int * const l_33 = &g_34;
    int * const *l_32 = &l_33;
    int * const **l_31 = &l_32;
    char *l_35 = (void*)0;
    int **l_606 = &g_89;
    char * const *l_608 = (void*)0;
    char * const **l_607 = &l_608;
    unsigned short **l_609 = &g_454;
    (*g_24) = (safe_lshift_func_uint8_t_u_u(g_9, 3));
    (*g_529) = (safe_add_func_uint32_t_u_u(((((g_9 , ((*l_27) = (void*)0)) == ((*l_31) = (void*)0)) || ((-8L) == p_19)) & (g_36 = ((g_21 && 0xCCA6L) , g_21))), (func_37((*l_33)) >= p_19)));

    ;
    ;


    (*l_606) = (void*)0;

    ;
    if ((l_607 == (void*)0))
    {
        (*l_33) = 0xF41B52C0L;
        (*g_610) = l_609;
        (**g_528) = ((!0xFBDEL) ^ (~p_19));
        return (*l_606);


    }
    else
    {
        const unsigned l_626 = 3UL;
        int l_630 = 0xA5898E8FL;
        int *l_635 = &g_34;
        for (g_214 = (-26); (g_214 >= 38); ++g_214)
        {
            int * const *l_618 = &g_534;
            unsigned char *l_623 = (void*)0;
            unsigned char *l_624 = (void*)0;
            unsigned char *l_625 = &g_476.f1;
            char *l_627 = &g_279;
            unsigned char *l_628 = &g_237;
            (**g_528) = (safe_add_func_uint32_t_u_u(((p_19 >= (!(safe_rshift_func_uint16_t_u_s((((*l_628) = (!((*l_625) = (((func_62(l_618, ((safe_add_func_uint32_t_u_u(0x48C56D47L, (safe_sub_func_uint8_t_u_u(((*l_625) = p_19), ((*l_627) = (l_626 > p_19)))))) || 0xF966L), (*g_518), l_606) >= l_626) >= p_19) < 0L)))) && l_626), 4)))) , l_626), (*g_529)));

            if (((*g_534) = ((**g_528) = (safe_unary_minus_func_int32_t_s((0x6431L & (***g_610)))))))
            {
                int *l_634 = &g_319;
                l_630 = p_19;
                (**g_528) = (safe_add_func_int32_t_s_s(func_62((g_633 , ((*l_31) = ((*g_341) , l_618))), (3L != (((&g_319 == l_634) > (+0L)) & func_54(((*l_33) = ((func_54(p_19) > p_19) & g_98))))), p_19, &g_89), 0UL));

                ;
            }
            else
            {
                return l_635;


            }

            ;
        }

        ;
    }

    ;
    return (*l_606);


}







static unsigned short func_37(short p_38)
{
    char *l_40 = &g_41;
    int * const *l_67 = &g_8;
    int **l_582 = &g_8;
    const int *l_586 = &g_405;
    const int **l_585 = &l_586;
    unsigned char l_596 = 0UL;
    unsigned char *l_597 = &l_596;
    if (((4L ^ ((*l_597) = (g_39 , ((((((((((*l_40) = g_21) <= (!(safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(1L, (safe_rshift_func_int8_t_s_u(p_38, 5)))) >= (safe_add_func_uint16_t_u_u((func_54((9L <= func_56((func_62(l_67, (((*g_454) = func_68(&g_9)) == 0x3659L), g_319, l_582) && 0x810E5A72L), (**l_67), (**l_582), l_585, l_40))) & 0UL), 0x7727L))) , (*g_454)), 4UL)), 0x0E79A3B4L)), (**l_582))))) && g_595) && (**l_585)) >= l_596) , 0x14L) != 0xFFL) && (**l_585)) >= g_530)))) & (**l_582)))
    {
        int *l_598 = (void*)0;
        int l_599 = (-8L);
        (*l_585) = (void*)0;

        ;
        (*l_585) = l_598;
        l_599 = ((*g_534) = ((*g_529) = (0x9012L > (p_38 != p_38))));
        l_598 = &l_599;

        ;
    }
    else
    {
        int *l_600 = &g_122;
        short *l_601 = &g_230;
        short *l_602 = &g_84;
        char **l_603 = &g_570;
        (*l_585) = l_600;

        ;
        (*g_604) = ((*g_341) , (((*l_602) = ((*l_601) = 1L)) , ((*l_600) , l_603)));
    }


    ;
    (*l_585) = (*l_582);

    ;
    (*g_605) = &l_40;

    ;
    return (*g_454);


}







static unsigned short func_54(int p_55)
{
    int *l_592 = &g_122;
    int **l_593 = (void*)0;
    int **l_594 = &l_592;
    (*l_594) = l_592;
    return p_55;
}







static unsigned func_56(unsigned p_57, const int p_58, unsigned p_59, const int ** p_60, char * p_61)
{
    int *l_587 = &g_405;
    union U0 *l_588 = &g_108;
    union U0 **l_589 = &l_588;
    union U0 *l_591 = &g_476;
    union U0 **l_590 = &l_591;
    (*p_60) = l_587;
    (*l_590) = ((*l_589) = l_588);

    ;
    return p_58;
}







static unsigned func_62(int * const * p_63, char p_64, int p_65, int ** p_66)
{
    int *l_583 = &g_405;
    (*g_584) = l_583;

    ;
    return g_237;
}







static unsigned short func_68(int * const p_69)
{
    int *l_72 = &g_9;
    int **l_71 = &l_72;
    unsigned short *l_73 = (void*)0;
    unsigned short *l_74 = &g_75;
    union U0 *l_109 = &g_108;
    int l_194 = 1L;
    unsigned char l_223 = 1UL;
    short l_251 = 0x7229L;
    int *l_255 = &g_122;
    int ***l_306 = &l_71;
    unsigned l_345 = 4294967292UL;
    int *l_366 = &l_194;
    short l_438 = 0x7166L;
    int l_556 = 0x80E6533EL;
    char **l_575 = &g_570;
lbl_168:
    (*l_71) = p_69;

    ;
    if ((((*l_74) = (g_39.f0 , (*l_72))) | (safe_add_func_int8_t_s_s((-1L), (**l_71)))))
    {
        int * const *l_79 = &g_8;
        int * const **l_78 = &l_79;
        int **l_83 = (void*)0;
        char l_104 = 0x23L;
        int *l_110 = (void*)0;
        if (((l_78 == &g_70) , (-1L)))
        {
            unsigned short l_103 = 0x7BE2L;
            union U0 *l_107 = &g_108;
            for (g_34 = 0; (g_34 >= (-15)); g_34 = safe_sub_func_int8_t_s_s(g_34, 5))
            {
                int **l_82 = &l_72;
                (*l_82) = p_69;
                if ((**l_82))
                    continue;
            }
            g_39.f2 = ((&p_69 == (l_71 = l_83)) , (((g_84 = ((*l_72) , (g_75 && ((-1L) == (*l_72))))) || ((((((*l_72) == g_21) || (*l_72)) == g_75) ^ (**l_79)) , 0L)) || g_21));

            ;
            if ((safe_rshift_func_int8_t_s_s(g_21, 0)))
            {
                (*g_88) = &g_21;

                ;
            }
            else
            {
                int * const l_105 = &g_21;
                l_104 = (safe_mod_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u((g_39.f3 , ((**g_88) , ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_39.f2, (g_98 & (***l_78)))), 15)) & g_84))), 0)) , ((safe_mod_func_uint32_t_u_u((*l_72), g_21)) && (safe_add_func_uint16_t_u_u(l_103, (*l_72))))) , 2L), g_21));
                (*g_106) = l_105;

                ;
            }

            ;
            l_109 = l_107;
        }
        else
        {
            unsigned l_111 = 4294967294UL;
            (*l_71) = l_110;

            ;
            l_111 = ((**g_106) = (**g_88));
        }

        ;
        ;
        ;
    }
    else
    {
        char l_121 = 0x3AL;
        int l_141 = 0x81597F86L;
        int l_144 = 0x87636F93L;
        short *l_145 = &g_84;
        int l_146 = 0L;
        unsigned *l_147 = (void*)0;
        int l_148 = 1L;
        union U0 *l_250 = &g_108;
        int **l_265 = &l_255;
        union U0 **l_268 = &l_250;
        for (g_108.f2 = 0; (g_108.f2 > (-5)); g_108.f2 = safe_sub_func_int32_t_s_s(g_108.f2, 3))
        {
            short l_114 = 0L;
            l_114 = ((*g_89) = (*p_69));
            for (g_98 = 1; (g_98 == 21); g_98++)
            {
                unsigned l_127 = 1UL;
                (*g_89) = (*g_8);
            }
            for (g_34 = 0; (g_34 < (-7)); g_34 = safe_sub_func_uint16_t_u_u(g_34, 1))
            {
                int *l_133 = (void*)0;
                int *l_134 = &g_122;
                (*l_134) = (*p_69);
                (*l_134) = 0x58EAAB99L;
                (*l_134) = 0x5DA103C1L;
                return l_114;
            }
            return l_114;
        }

                if (((l_148 = ((safe_rshift_func_int8_t_s_s(((l_146 = (((*l_145) = ((safe_mod_func_int32_t_s_s((l_121 && (l_144 = (safe_rshift_func_uint8_t_u_u((**l_71), ((l_141 , ((*l_72) & ((g_98 == (safe_rshift_func_int8_t_s_u(((g_84 != g_122) , (*l_72)), 2))) >= (**g_106)))) , (*l_72)))))), l_141)) , g_108.f0)) > (*l_72))) , l_121), 3)) && l_121)) ^ 5L))
        {
            int l_151 = 0x4EAF9A50L;
            int *l_156 = &g_122;
            int l_177 = 0x54331F87L;
            int l_195 = 3L;
            const int *l_203 = &g_108.f2;
            if ((0x56A42CAAL | ((*g_89) = (((((*l_74) = (safe_lshift_func_uint8_t_u_s(l_151, g_108.f2))) <= l_146) == (((((((~(**l_71)) ^ 9UL) || (safe_rshift_func_int16_t_s_s(((*l_145) = ((((safe_rshift_func_int16_t_s_s(l_141, (((*l_71) = (*g_106)) != (l_156 = &g_34)))) , &g_98) == &g_84) >= 1UL)), g_21))) , g_129.f0) || (-2L)) | g_108.f1) != 1UL)) <= g_122))))
            {
                unsigned short l_161 = 3UL;
                char *l_162 = (void*)0;
                char *l_163 = (void*)0;
                char *l_164 = &l_121;
                int l_167 = 0L;
                if (((g_108.f3 && g_108.f2) <= ((*l_164) = (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_122, (**g_130))), (l_161 = (g_108.f3 <= (*l_156))))))))
                {
                    return g_9;
                }
                else
                {
                    for (l_121 = 0; (l_121 >= (-11)); l_121 = safe_sub_func_uint16_t_u_u(l_121, 4))
                    {
                        if ((*g_24))
                            break;
                        l_167 = ((*l_156) , ((*l_156) = (l_141 > g_98)));
                        if ((**l_71))
                            break;
                        if (g_84)
                            goto lbl_168;
                    }
                    (*l_71) = ((((*l_156) = (**g_106)) >= (*p_69)) , (void*)0);

                    ;
                    return l_167;
                }
            }
            else
            {
                int * const l_171 = &l_151;
                int **l_172 = &l_72;
                unsigned l_192 = 0x12F535E8L;
                (*l_156) = (safe_sub_func_uint16_t_u_u(0x6935L, l_148));
                (*l_172) = l_171;

                ;
                (*l_171) = (*p_69);
                for (l_144 = (-26); (l_144 != 15); l_144++)
                {
                    unsigned short **l_182 = &l_73;
                    unsigned char l_191 = 0x59L;
                    unsigned char *l_193 = &g_108.f1;
                    l_194 = ((safe_sub_func_uint8_t_u_u(l_177, (((*l_156) = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((**l_71) = (((*l_182) = (void*)0) == l_145)) < (l_74 != ((((safe_sub_func_int16_t_s_s(((((*l_193) = ((safe_sub_func_uint32_t_u_u((((((((((*l_156) < (safe_sub_func_int16_t_s_s((((safe_add_func_int8_t_s_s(l_191, l_191)) <= (l_144 < ((g_84 = g_129.f0) && l_191))) , (-1L)), l_191))) , 1UL) ^ 6UL) > 1UL) <= l_191) == 8UL) , (*l_156)) < g_75), 1UL)) >= l_192)) >= 255UL) > 0xF3L), 0xB3F8L)) | l_144) >= g_21) , (void*)0))) >= g_34), 9)), l_191))) & g_98))) != 5L);

                                        (*l_171) = (+(l_195 ^ (safe_sub_func_uint8_t_u_u(0x1DL, l_191))));
                    return l_191;
                }
            }

            ;
            ;
            if (((*g_89) = (g_108.f2 && 0L)))
            {
                int *l_198 = &l_194;
                (*l_71) = l_198;

                ;
                (*l_71) = &l_148;

                ;
                (*l_72) = ((((*l_156) >= ((*l_145) = ((safe_add_func_int32_t_s_s((*l_156), (g_129 , (*p_69)))) | l_148))) , (*l_198)) != g_21);
            }
            else
            {
                const int *l_201 = &g_202;
                (*l_71) = (*g_130);

                ;
                l_203 = (l_201 = (*g_88));

                ;
                ;
                (*l_71) = (*g_88);
            }

            ;
            ;
            (*l_71) = p_69;

            ;
        }
        else
        {
            volatile union U0 *l_205 = &g_39;
            volatile union U0 **l_204 = &l_205;
            (*l_204) = &g_39;
        }
        for (g_108.f1 = 0; (g_108.f1 <= 54); g_108.f1 = safe_add_func_int8_t_s_s(g_108.f1, 6))
        {
            int **l_208 = &g_89;
            unsigned short **l_243 = &l_73;
            int l_252 = (-1L);
            union U0 *l_266 = &g_267;
            (*l_208) = ((*l_71) = (*l_71));

            ;
            for (l_146 = (-29); (l_146 <= (-4)); l_146 = safe_add_func_int8_t_s_s(l_146, 9))
            {
                unsigned l_220 = 7UL;
                int *l_259 = &l_194;
            }
            (*l_208) = p_69;
            (**l_265) = (g_129.f1 , (safe_mod_func_uint8_t_u_u(g_21, (g_21 , (safe_mod_func_int8_t_s_s(((g_9 & (safe_unary_minus_func_uint32_t_u(((void*)0 == l_265)))) || (((*g_257) != l_266) & 1UL)), (**l_265)))))));
        }

        ;
                (*l_268) = l_109;
    }

    ;
    ;
    ;
    if (((*g_258) , (*p_69)))
    {
        int l_277 = 0x6F5E02EBL;
        char *l_278 = &g_279;
        unsigned *l_280 = &g_281;
        short *l_343 = &g_230;
        if (((*l_109) , ((safe_lshift_func_uint8_t_u_s((((*l_255) = 0xA8F5FBB2L) , 255UL), 0)) ^ (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(((((l_277 ^ ((*l_280) = (g_202 == (g_267.f0 > ((*l_278) = g_267.f1))))) , (g_230 , (safe_lshift_func_uint16_t_u_u((g_75 = ((l_277 , 255UL) && g_279)), l_277)))) >= g_9) ^ g_230), (*p_69))) | 0xBD90867EL) | 4294967295UL), l_277)), g_30)))))
        {
            unsigned char * const l_307 = &g_108.f1;
            int l_317 = 0x7D79F017L;
            int *l_320 = &g_21;
            short l_357 = 0x7D21L;
            int **l_367 = &g_89;
            for (l_223 = 0; (l_223 == 42); l_223 = safe_add_func_uint32_t_u_u(l_223, 7))
            {
                int **l_286 = &g_89;
                int *l_287 = &l_277;
                int ***l_294 = &l_71;
                int ****l_293 = &l_294;
                unsigned *l_303 = &g_304;
                short *l_305 = &l_251;
                short *l_311 = (void*)0;
                unsigned l_361 = 2UL;
                l_287 = ((*l_286) = &l_277);

                ;
                for (g_108.f1 = (-7); (g_108.f1 <= 7); g_108.f1 = safe_add_func_int8_t_s_s(g_108.f1, 1))
                {
                    (*l_287) = (*p_69);
                    (*l_286) = (*g_130);
                    for (l_194 = 0; (l_194 > 16); l_194 = safe_add_func_uint16_t_u_u(l_194, 4))
                    {
                        unsigned char l_292 = 0x4FL;
                        (*l_286) = (*g_88);
                        if (l_292)
                            break;
                    }
                }

                            }

            ;
            (*l_367) = l_366;

            ;
        }
        else
        {
            unsigned l_391 = 0xECFDCDECL;
            short l_398 = (-1L);
            int *l_418 = &l_194;
            unsigned l_468 = 0UL;
            int * const ***l_488 = (void*)0;
            if ((safe_add_func_int16_t_s_s((~(safe_rshift_func_int8_t_s_u((g_267.f0 , l_277), ((safe_mod_func_int8_t_s_s((l_277 , g_9), (0x1FL ^ ((*l_278) = 8L)))) == 0L)))), ((safe_rshift_func_int16_t_s_u(l_277, 14)) & (g_304 = ((g_304 || 0x245F9A7DL) != l_277))))))
            {
                short **l_390 = &l_343;
                int l_406 = (-9L);
                unsigned short *l_415 = (void*)0;
                if (((*g_128) != (safe_rshift_func_int16_t_s_s((*g_341), (~(safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((g_230 > (*p_69)), (g_34 = (*g_8)))), g_30)) & (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(0x5EL, ((g_319 , l_390) != &g_341))) | l_391), l_277))), 6UL)) >= (*g_8)), 0)))))))
                {
                    int l_394 = 0xE6C3C61FL;
                    (*l_255) = (*p_69);
                    l_398 = (safe_rshift_func_uint8_t_u_s((((g_108.f1 == (g_267.f1 = (0x6DL & (g_279 , l_394)))) > ((*p_69) , ((g_395 , g_396) != &g_397))) ^ 4294967295UL), (*l_366)));

                    (*l_366) = ((l_406 = (!(safe_rshift_func_int8_t_s_s(g_129.f0, ((*l_278) = (safe_mod_func_int32_t_s_s((l_398 & l_277), (safe_add_func_uint8_t_u_u((((*l_74) = g_237) || (p_69 != &g_281)), g_405))))))))) ^ (l_277 <= ((safe_lshift_func_uint16_t_u_s(65535UL, (*l_366))) , l_394)));
                }
                else
                {
                    int *l_411 = &l_406;
                    for (g_237 = (-17); (g_237 != 5); g_237 = safe_add_func_uint32_t_u_u(g_237, 3))
                    {
                        unsigned short l_414 = 0xD987L;
                        l_411 = p_69;

                        ;
                        l_406 = (safe_add_func_int16_t_s_s(l_414, (+l_406)));
                        (*l_255) = (l_406 & (g_279 <= ((*l_366) = g_360.f0)));
                    }

                    ;
                }

                if ((&g_214 == l_415))
                {
                    (*g_416) = (*g_130);
                }
                else
                {
                    return l_398;
                }
            }
            else
            {
                int **l_417 = (void*)0;
                int l_425 = 1L;
                unsigned short *l_426 = (void*)0;
                unsigned short *l_427 = (void*)0;
                unsigned short *l_428 = &g_214;
                char *l_436 = &g_437;
                l_418 = (void*)0;

                ;
                (*g_130) = &l_277;

                ;
            }

            ;
            ;
            (*l_255) = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((void*)0 == l_488), 0x91L)), 3));
        }

        ;
    }
    else
    {
        char l_491 = 0x74L;
        int *l_535 = (void*)0;
        unsigned l_557 = 1UL;
        (*l_366) = ((safe_sub_func_uint32_t_u_u(l_491, l_491)) & l_491);
        (*l_255) = (safe_lshift_func_int16_t_s_s((-8L), 2));
        for (g_108.f2 = 0; (g_108.f2 <= (-24)); g_108.f2--)
        {
            int l_498 = (-1L);
            int l_499 = 0L;
            unsigned char l_501 = 0x73L;
            for (g_476.f2 = 22; (g_476.f2 >= 21); --g_476.f2)
            {
                unsigned *l_500 = &l_345;
                int * const *l_507 = (void*)0;
                int l_541 = 0x8503DEE2L;
                char ***l_571 = &g_569;
                char ***l_572 = (void*)0;
                char ***l_573 = (void*)0;
                short *l_576 = &g_98;
                short l_577 = 0xE719L;
            }

        }

            }


    return g_581;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_39.f0, "g_39.f0", print_hash_value);
    transparent_crc(g_39.f1, "g_39.f1", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_267.f0, "g_267.f0", print_hash_value);
    transparent_crc(g_267.f1, "g_267.f1", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_360.f0, "g_360.f0", print_hash_value);
    transparent_crc(g_360.f1, "g_360.f1", print_hash_value);
    transparent_crc(g_395.f0, "g_395.f0", print_hash_value);
    transparent_crc(g_395.f1, "g_395.f1", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_476.f0, "g_476.f0", print_hash_value);
    transparent_crc(g_476.f1, "g_476.f1", print_hash_value);
    transparent_crc(g_530, "g_530", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_633.f0, "g_633.f0", print_hash_value);
    transparent_crc(g_633.f1, "g_633.f1", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_753.f0, "g_753.f0", print_hash_value);
    transparent_crc(g_753.f1, "g_753.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
