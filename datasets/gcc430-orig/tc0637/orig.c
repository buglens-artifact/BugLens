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


struct S0 {
   char f0;
   unsigned char f1;
   char f2;
   unsigned f3;
   unsigned char f4;
   volatile unsigned char f5;
   unsigned char f6;
   char f7;
   unsigned char f8;
};

struct S1 {
   unsigned short f0;
};

union U2 {
   char * f0;
   char f1;
   volatile struct S0 f2;
   char f3;
   struct S1 f4;
};

union U3 {
   char f0;
};


static char g_5 = 0x4BL;
static char *g_4 = &g_5;
static struct S1 g_15 = {0x6AA1L};
static int g_35 = 0x57B1A094L;
static unsigned g_36 = 4294967286UL;
static unsigned g_53 = 0x405B7518L;
static unsigned g_55 = 9UL;
static int g_66 = 0x5C02AC6AL;
static volatile struct S0 g_69 = {0x09L,0x5DL,9L,0x5815DA77L,0x36L,1UL,5UL,0xEBL,0xC2L};
static volatile unsigned char *g_72 = &g_69.f5;
static volatile unsigned char **g_71 = &g_72;
static unsigned short g_90 = 0x6F2FL;
static struct S0 g_100 = {-1L,246UL,6L,2UL,255UL,0x11L,0UL,0x06L,0x74L};
static struct S0 g_127 = {6L,0xD1L,-1L,0x57A5C46AL,255UL,0x71L,0xB0L,4L,1UL};
static unsigned short g_128 = 7UL;
static union U2 *g_131 = (void*)0;
static short g_156 = (-1L);
static volatile union U2 g_174 = {0};
static union U3 g_217 = {0x11L};
static union U3 *g_216 = &g_217;
static union U2 g_230 = {0};
static volatile struct S0 g_251 = {8L,3UL,0xD3L,6UL,1UL,0xE6L,249UL,1L,1UL};
static struct S0 *g_268 = &g_127;
static struct S0 **g_267 = &g_268;
static volatile struct S0 g_281 = {-1L,4UL,0L,0xBC5042F7L,4UL,248UL,1UL,7L,255UL};
static int *g_290 = (void*)0;
static unsigned *g_301 = &g_100.f3;
static unsigned **g_300 = &g_301;
static unsigned ***g_299 = &g_300;
static volatile int g_311 = 0xB3240AD2L;
static struct S0 g_334 = {-1L,0UL,0xF6L,9UL,8UL,9UL,0x08L,0xEFL,0x7BL};
static unsigned short *g_344 = &g_128;
static union U2 g_347 = {0};
static unsigned g_357 = 0xFDC557DAL;
static unsigned g_359 = 18446744073709551610UL;
static volatile struct S0 g_368 = {0L,0xE9L,0L,3UL,3UL,1UL,0x6AL,-1L,0xE9L};
static union U2 g_421 = {0};
static volatile struct S0 g_425 = {-1L,2UL,0x8EL,0xF1C8C5D9L,249UL,0xD2L,0x7AL,6L,0x16L};
static struct S1 *g_443 = &g_347.f4;
static struct S0 g_444 = {-7L,255UL,0x37L,18446744073709551615UL,7UL,249UL,255UL,0x6AL,0xB7L};
static struct S0 g_473 = {-3L,250UL,0x7AL,0xDB37D4CBL,6UL,255UL,0xD0L,0x93L,253UL};
static volatile union U3 ***g_484 = (void*)0;
static volatile short g_503 = 0x5E0DL;
static volatile short *g_502 = &g_503;
static volatile union U2 g_518 = {0};
static short *g_531 = &g_156;
static short **g_530 = &g_531;
static char g_559 = 0xC1L;
static struct S0 g_581 = {0xDDL,0x26L,0L,0x353B853FL,0x64L,0x29L,1UL,0x7FL,1UL};
static struct S0 g_582 = {0x66L,255UL,0x5CL,18446744073709551612UL,4UL,254UL,0xAEL,0xA6L,0xD3L};
static struct S0 g_600 = {0xF6L,0x71L,1L,0xD1B74C6EL,1UL,0x1CL,255UL,1L,0x39L};
static struct S0 g_602 = {-1L,1UL,0xF9L,1UL,0x0EL,248UL,1UL,1L,253UL};
static struct S0 g_605 = {0x2DL,247UL,1L,1UL,0xDBL,255UL,249UL,0x85L,0xE8L};



static unsigned char func_1(void);
static int func_2(char * p_3);
static struct S1 func_6(char * p_7, unsigned p_8, int p_9, unsigned p_10, unsigned p_11);
static char * func_12(short p_13, struct S1 p_14);
static struct S0 func_16(int p_17, int p_18, struct S1 p_19, char * p_20, char * p_21);
static struct S1 func_23(unsigned short p_24, unsigned char p_25, short p_26);
static int func_27(char * p_28, char * p_29, char * p_30);
static unsigned short func_46(unsigned p_47, unsigned char p_48);
static union U3 func_56(int p_57, unsigned short p_58, char * p_59, char p_60);
static char func_61(struct S1 p_62, char p_63);
static unsigned char func_1(void)
{
    short l_592 = (-7L);
    struct S0 *l_601 = &g_602;
    int l_612 = (-5L);
    int l_615 = 0x9C65E470L;
    if (func_2(g_4))
    {
        int **l_576 = &g_290;
        int *l_577 = (void*)0;
        (*l_576) = &g_66;
        (*l_576) = l_577;
        (*g_267) = (*g_267);
    }
    else
    {
        char l_593 = (-7L);
        int *l_606 = (void*)0;
        struct S1 l_611 = {0x56A3L};
        unsigned char l_621 = 255UL;
        for (g_334.f0 = (-26); (g_334.f0 == (-12)); g_334.f0 = safe_add_func_uint8_t_u_u(g_334.f0, 3))
        {
            int **l_580 = &g_290;
            union U2 **l_589 = &g_131;
            unsigned l_613 = 0x0C127C97L;
            char *l_620 = &g_605.f2;
            (*l_580) = &g_35;
            g_582 = g_581;
            if (((*g_290) = (0x6C1DL & (((safe_sub_func_int16_t_s_s(((((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((&g_131 != l_589) , (**l_580)), (safe_lshift_func_int8_t_s_s(0xF8L, ((l_592 <= l_593) , l_592))))) && l_593), g_444.f0)) || 1UL) >= 65533UL) , (*g_502)), 0x2800L)) , (*g_290)) & 0UL))))
            {
                (*g_290) = l_592;
            }
            else
            {
                int l_594 = (-9L);
                struct S0 *l_599 = &g_600;
                unsigned char *l_603 = (void*)0;
                unsigned char *l_604 = &g_602.f6;
                char l_614 = 0x7EL;
                short **l_619 = &g_531;
                if ((((l_593 , (func_61(g_15, l_592) , l_594)) | (safe_rshift_func_uint8_t_u_s(((*l_604) = ((*g_72) >= (safe_mul_func_int8_t_s_s((((void*)0 == &g_300) < ((l_599 != l_601) == 255UL)), (**l_580))))), (*g_4)))) ^ (**g_530)))
                {
                    (*l_599) = g_605;
                    if (l_593)
                        break;
                    g_444 = g_600;
                    (*l_580) = l_606;
                }
                else
                {
                    unsigned short *l_616 = (void*)0;
                    unsigned short *l_617 = (void*)0;
                    unsigned short *l_618 = &g_347.f4.f0;
                    struct S1 l_622 = {0x84F8L};
                    (*g_443) = g_15;
                }
            }
            (*g_443) = g_15;
        }
        return l_615;
    }
    return (*g_72);
}







static int func_2(char * p_3)
{
    unsigned l_355 = 0x24309495L;
    unsigned *l_356 = &g_357;
    unsigned *l_358 = &g_359;
    struct S1 *l_388 = (void*)0;
    struct S1 *l_389 = (void*)0;
    union U2 **l_393 = (void*)0;
    int l_396 = 3L;
    short *l_407 = &g_156;
    short **l_406 = &l_407;
    int *l_464 = &g_35;
    char *l_480 = &g_334.f0;
    union U3 l_556 = {0xC7L};
    g_230.f4 = func_6(func_12(g_5, g_15), ((*l_358) = ((*l_356) = l_355)), ((*g_299) == (*g_299)), (safe_add_func_uint8_t_u_u((4L && 0UL), (safe_mod_func_uint32_t_u_u(((l_355 > g_334.f0) < g_334.f3), l_355)))), l_355);
    if ((safe_add_func_int8_t_s_s(0xEAL, 0xF3L)))
    {
        union U2 **l_392 = &g_131;
        int *l_394 = &g_35;
        short **l_404 = (void*)0;
        struct S1 *l_414 = (void*)0;
        union U3 **l_423 = &g_216;
        struct S1 l_451 = {0x19D1L};
        struct S1 l_476 = {0x0DA8L};
        union U2 **l_501 = &g_131;
        struct S0 *l_547 = (void*)0;
        unsigned char *l_560 = &g_444.f4;
        unsigned char *l_561 = &g_444.f1;
        if (((l_393 = l_392) != (void*)0))
        {
            int **l_395 = &l_394;
            struct S1 l_401 = {65535UL};
            short ***l_405 = (void*)0;
            (*l_395) = l_394;
            l_396 = (-7L);
            (**l_395) = (((*l_394) | (*l_394)) >= (safe_sub_func_int32_t_s_s((**l_395), (((*g_300) = l_358) == ((func_61(g_15, (safe_add_func_int16_t_s_s(func_61(l_401, ((((safe_lshift_func_uint8_t_u_u(0UL, 0)) <= 0x72L) < (((**l_395) , (*l_394)) >= 0x9DA9L)) == (*l_394))), l_396))) ^ 0x305A8607L) , l_394)))));
            l_406 = l_404;
        }
        else
        {
            struct S1 *l_408 = &g_230.f4;
            int l_411 = 0x8AF96AB8L;
            char l_438 = 0L;
            union U3 *l_445 = (void*)0;
            union U2 *l_448 = &g_230;
            struct S1 l_453 = {5UL};
            short l_485 = 0xDE95L;
            unsigned ***l_522 = &g_300;
            l_408 = (void*)0;
            for (g_359 = (-1); (g_359 >= 26); g_359 = safe_add_func_int8_t_s_s(g_359, 2))
            {
                unsigned char l_422 = 0xC2L;
                int l_439 = (-1L);
                char *l_440 = (void*)0;
                int l_441 = (-1L);
            }
            if (((func_16((*l_394), (((*l_464) > (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((g_473 , (safe_rshift_func_uint16_t_u_s((l_438 && (-2L)), 8))), func_61(l_476, (safe_rshift_func_int8_t_s_s(0x4AL, 6))))) == (*p_3)), 0x52L)), 9L))) ^ 0L), g_230.f4, &g_5, p_3) , (*g_4)) > (*p_3)))
            {
                char l_479 = 0x6CL;
                struct S1 l_481 = {0x8FAEL};
                unsigned char l_494 = 0xF4L;
                int **l_495 = &g_290;
                (*g_443) = (l_479 , func_6((l_453.f0 , l_480), ((*g_290) < (*g_290)), (l_481 , ((safe_sub_func_int32_t_s_s((+((void*)0 == g_484)), (*l_464))) > l_485)), (*l_394), (**g_300)));
                (*g_290) = ((*l_464) = ((safe_sub_func_uint16_t_u_u(((g_368.f4 & (&l_406 == ((*l_464) , &l_404))) >= ((safe_add_func_int8_t_s_s(((g_100.f8 >= ((*l_394) < func_61((*g_443), l_481.f0))) ^ l_481.f0), 0x2FL)) | (*p_3))), 65535UL)) && l_494));
                (*l_495) = &l_396;
                (*l_464) = (l_411 && (*l_464));
            }
            else
            {
                union U3 l_498 = {-5L};
                int *l_504 = &l_411;
                struct S1 *l_529 = &l_451;
                short l_539 = (-1L);
                for (g_90 = (-19); (g_90 == 59); g_90 = safe_add_func_int32_t_s_s(g_90, 2))
                {
                    union U2 **l_499 = &g_131;
                    union U2 ***l_500 = &l_392;
                    int **l_505 = &g_290;
                    char *l_519 = &l_498.f0;
                    struct S1 *l_526 = &g_230.f4;
                    (*g_290) = (((l_498 , (((*l_500) = l_499) == l_501)) , &l_485) == g_502);
                    (*l_505) = l_504;
                    if ((~l_438))
                    {
                        volatile unsigned char ***l_506 = (void*)0;
                        volatile unsigned char ***l_507 = &g_71;
                        int l_510 = 4L;
                        struct S1 **l_517 = &l_414;
                        char *l_525 = (void*)0;
                        (*l_507) = &g_72;
                        (*l_464) = (safe_sub_func_uint32_t_u_u((func_56(l_510, (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((*l_504) , l_510), (safe_sub_func_uint16_t_u_u((*l_464), (!(((*l_517) = &g_15) == &l_453)))))), ((*g_4) >= (g_518 , 251UL)))), l_519, (*g_4)) , l_485), (*g_290)));
                        (**l_505) = (*l_394);
                        (**g_267) = func_16((*l_504), g_251.f4, ((**l_517) = (*l_414)), ((safe_sub_func_int8_t_s_s((((*l_464) , l_522) == (void*)0), (safe_mul_func_int8_t_s_s(l_411, (*l_464))))) , p_3), l_525);
                    }
                    else
                    {
                        struct S1 **l_527 = &l_526;
                        (*l_527) = l_526;
                        (*l_423) = l_445;
                    }
                }
                (*l_501) = (*l_392);
                if ((*g_290))
                {
                    struct S1 *l_528 = &l_453;
                    short ***l_532 = &g_530;
                    (*g_290) = ((((0L > (l_438 >= ((*p_3) = (*l_464)))) & (*l_394)) , g_100.f8) != (*g_290));
                    l_529 = l_528;
                    (*g_290) = (((*l_532) = g_530) != (void*)0);
                    (*l_464) = (-10L);
                }
                else
                {
                    unsigned l_541 = 0x4AAF0699L;
                    for (g_35 = (-15); (g_35 >= 9); g_35++)
                    {
                        unsigned l_540 = 0x2C7C724EL;
                        unsigned char **l_544 = (void*)0;
                        unsigned char *l_546 = &g_444.f4;
                        unsigned char **l_545 = &l_546;
                        if ((*g_290))
                            break;
                        (*g_290) = (1L | (*p_3));
                        (*g_290) = (0x4820L >= (0x412AL && ((*g_72) | ((*p_3) = (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_539 >= (l_540 , l_541)), ((*l_480) = (safe_add_func_int8_t_s_s(((*l_504) && l_411), (((*l_545) = g_4) == (*g_71))))))), (*p_3)))))));
                    }
                }
            }
        }
        (*g_267) = l_547;
        (*l_394) = (safe_sub_func_int8_t_s_s(((g_425.f8 ^ (safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((*l_394), (*l_464))), func_61(g_15, (*p_3)))) | ((*l_407) = (l_556 , (safe_mul_func_uint8_t_u_u(((*l_561) = ((*l_560) = g_559)), ((*l_464) | (*g_531))))))), g_127.f8))) , (*l_394)), (*g_4)));
    }
    else
    {
        unsigned l_562 = 4294967295UL;
        char *l_569 = &g_100.f2;
        char **l_570 = (void*)0;
        char **l_571 = &l_569;
        (*g_443) = func_23(g_425.f8, (*l_464), (((*l_480) = ((*g_4) = (*p_3))) && (8L | l_562)));
        for (l_556.f0 = (-3); (l_556.f0 == (-18)); --l_556.f0)
        {
            union U3 **l_565 = (void*)0;
            union U3 **l_566 = &g_216;
            (*l_566) = &g_217;
        }
        if ((func_61((*g_443), l_562) , ((safe_div_func_int16_t_s_s((func_61((*g_443), func_27(&g_559, &g_5, ((*l_571) = l_569))) | l_562), l_562)) || (-6L))))
        {
            struct S1 l_572 = {0xB7FEL};
            char *l_573 = &g_347.f1;
            (*g_268) = func_16(g_100.f0, g_251.f4, l_572, (l_573 = &g_5), &g_5);
        }
        else
        {
            volatile union U2 *l_575 = &g_174;
            volatile union U2 **l_574 = &l_575;
            (*l_574) = &g_518;
        }
    }
    return (*l_464);
}







static struct S1 func_6(char * p_7, unsigned p_8, int p_9, unsigned p_10, unsigned p_11)
{
    int *l_364 = &g_66;
    int **l_365 = &g_290;
    short l_376 = 0x05B4L;
    struct S1 l_387 = {65532UL};
    (*l_365) = ((*g_216) , l_364);
    for (g_127.f6 = (-23); (g_127.f6 >= 10); g_127.f6 = safe_add_func_uint16_t_u_u(g_127.f6, 2))
    {
        volatile struct S0 *l_369 = &g_347.f2;
        int *l_370 = &g_66;
        unsigned l_373 = 1UL;
        union U2 **l_378 = (void*)0;
        unsigned char *l_379 = (void*)0;
        short l_380 = (-1L);
        (*l_369) = (p_11 , g_368);
        l_370 = &p_9;
        (*l_365) = &g_66;
        if (func_46((**l_365), (l_380 = (safe_sub_func_uint32_t_u_u(l_373, ((g_347.f2.f8 , (safe_add_func_uint8_t_u_u((*l_370), l_376))) , (g_15 , ((safe_unary_minus_func_uint16_t_u((**l_365))) ^ ((void*)0 == l_378)))))))))
        {
            for (g_100.f6 = 11; (g_100.f6 == 24); g_100.f6++)
            {
                if ((*g_290))
                    break;
            }
        }
        else
        {
            (*l_370) = (*g_290);
        }
    }
    for (g_127.f2 = 0; (g_127.f2 <= 28); g_127.f2++)
    {
        struct S1 *l_385 = &g_15;
        struct S1 **l_386 = &l_385;
        (*l_386) = l_385;
    }
    return l_387;
}







static char * func_12(short p_13, struct S1 p_14)
{
    unsigned short l_22 = 0xF903L;
    int *l_33 = (void*)0;
    int *l_34 = &g_35;
    char *l_37 = &g_5;
    struct S0 *l_341 = &g_100;
    unsigned char *l_348 = &g_127.f1;
    unsigned char *l_349 = &g_127.f4;
    unsigned short *l_352 = &g_128;
    short *l_353 = (void*)0;
    short *l_354 = &g_156;
    (*l_341) = func_16(g_5, l_22, func_23(p_13, (func_27(((safe_sub_func_uint16_t_u_u(p_14.f0, (l_22 > ((g_36 = ((*l_34) = 5L)) | g_15.f0)))) , l_37), &g_5, &g_5) || 4294967295UL), p_13), l_37, l_37);
    (*l_341) = (*l_341);
    (*l_34) = (((*l_354) = (((safe_sub_func_uint8_t_u_u(((((*g_4) = (&l_22 == (g_344 = &l_22))) , (((*l_349) = ((*l_348) = (((*l_34) == (safe_rshift_func_int16_t_s_u((g_347 , p_14.f0), 2))) <= (*g_4)))) & p_14.f0)) < (g_15 , (safe_div_func_uint16_t_u_u(((*l_352) = (g_334.f3 , 0x3C3DL)), p_14.f0)))), 0x3EL)) , (void*)0) != (void*)0)) ^ p_13);
    return &g_5;
}







static struct S0 func_16(int p_17, int p_18, struct S1 p_19, char * p_20, char * p_21)
{
    unsigned short l_336 = 65530UL;
    unsigned short *l_337 = (void*)0;
    unsigned short *l_338 = (void*)0;
    int l_339 = 0xFCF543DDL;
    int *l_340 = &g_35;
    (*g_268) = g_334;
    (*l_340) = (+((l_339 = (safe_unary_minus_func_uint32_t_u(l_336))) > l_336));
    return (*g_268);
}







static struct S1 func_23(unsigned short p_24, unsigned char p_25, short p_26)
{
    int *l_159 = (void*)0;
    int *l_160 = (void*)0;
    int l_181 = 0x2A67DBE3L;
    struct S1 l_184 = {65535UL};
    char *l_209 = &g_5;
    struct S0 **l_269 = &g_268;
    unsigned char *l_289 = &g_127.f1;
    unsigned char **l_288 = &l_289;
    unsigned char ***l_287 = &l_288;
    char *l_331 = (void*)0;
    char *l_332 = &g_230.f1;
    int *l_333 = &g_66;
    if ((g_66 = p_25))
    {
        return g_15;
    }
    else
    {
        int *l_163 = &g_35;
        struct S1 l_165 = {0x4846L};
        unsigned *l_172 = (void*)0;
        unsigned **l_171 = &l_172;
        for (g_100.f8 = 0; (g_100.f8 <= 20); g_100.f8++)
        {
            int *l_164 = &g_35;
            int **l_166 = &l_159;
            int **l_167 = (void*)0;
            int **l_168 = &l_163;
            char l_173 = (-1L);
            unsigned char **l_179 = (void*)0;
            l_164 = l_163;
        }
    }
    if ((0L & 0x68L))
    {
        int l_191 = (-4L);
        int l_210 = (-7L);
        unsigned short l_212 = 0xF96AL;
        struct S1 l_264 = {0x2BC1L};
        int l_295 = (-5L);
        unsigned ***l_302 = &g_300;
        l_181 = 0x7032A699L;
        l_181 = 1L;
        for (g_90 = (-4); (g_90 != 8); ++g_90)
        {
            return l_184;
        }
        if (p_24)
        {
            unsigned l_204 = 0xC1D74413L;
            char *l_211 = &g_100.f7;
            int l_213 = 0x8DC4A0E6L;
            l_213 = (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((((*l_211) = ((safe_div_func_uint32_t_u_u(((l_191 > (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((l_210 = (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((l_204 = g_100.f7) != p_24), (safe_sub_func_uint32_t_u_u((0x22L | (safe_mul_func_int8_t_s_s(p_25, ((void*)0 != l_209)))), p_25)))), p_24)), 1L))), 6)) <= 8L), p_25)), p_24))) | 8L), g_127.f4)) < 0x05D29A36L)) > 0xC6L), 0UL)) == 0xFD280BCCL), l_212));
            for (p_25 = 5; (p_25 <= 17); ++p_25)
            {
                union U3 **l_218 = &g_216;
                char *l_219 = (void*)0;
                int l_238 = 0xD8FF2045L;
                int l_286 = (-9L);
                (*l_218) = g_216;
                if ((func_27(l_211, l_219, &g_5) , g_127.f3))
                {
                    int *l_220 = &l_191;
                    (*l_220) = 3L;
                }
                else
                {
                    struct S1 *l_221 = &g_15;
                    (*l_221) = l_184;
                    g_216 = &g_217;
                }
                if ((safe_rshift_func_int16_t_s_s(0L, p_26)))
                {
                    int *l_226 = (void*)0;
                    union U2 *l_229 = &g_230;
                    if (p_25)
                        break;
                    for (g_36 = 0; (g_36 != 33); g_36 = safe_add_func_int8_t_s_s(g_36, 1))
                    {
                        int **l_227 = &l_226;
                        int **l_228 = &l_159;
                        union U2 **l_231 = &l_229;
                        (*l_228) = ((*l_227) = l_226);
                        (*l_231) = l_229;
                        if (l_204)
                            continue;
                    }
                    for (g_127.f3 = (-27); (g_127.f3 != 45); g_127.f3 = safe_add_func_int16_t_s_s(g_127.f3, 5))
                    {
                        int **l_243 = &l_159;
                        int **l_244 = &l_160;
                        unsigned char *l_252 = &g_127.f6;
                        short *l_253 = (void*)0;
                        short *l_254 = (void*)0;
                        short *l_255 = &g_156;
                        int **l_256 = &l_226;
                        if (g_5)
                            break;
                        if (l_204)
                            continue;
                        (*l_256) = ((g_100.f2 , ((safe_sub_func_int16_t_s_s(((*l_255) = ((safe_sub_func_int16_t_s_s(l_238, l_238)) & ((safe_div_func_uint8_t_u_u(((*l_252) = ((safe_mul_func_uint8_t_u_u((((*l_243) = &g_66) != ((*l_244) = l_226)), (~(safe_sub_func_int32_t_s_s(0xCC6211D8L, p_25))))) > (l_210 = ((~(p_26 == (safe_mul_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(0x46280EF9L, g_100.f0)) , g_251) , 0xE42DL), 0xE298L)))) || 0xCDD5L)))), 0x78L)) >= l_238))), p_26)) < 0xB4L)) , (void*)0);
                    }
                }
                else
                {
                    int **l_257 = &l_159;
                    struct S1 *l_271 = &g_230.f4;
                    (*l_257) = &l_191;
                    (*l_159) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_26, (safe_div_func_int32_t_s_s(p_24, (func_61(l_264, (l_204 , ((void*)0 != &g_251))) && 0xE7L))))), (l_238 && g_100.f8)));
                    (*l_257) = &l_213;
                    if (((**l_257) = l_213))
                    {
                        volatile union U2 *l_266 = &g_174;
                        volatile union U2 **l_265 = &l_266;
                        short *l_270 = &g_156;
                        (*l_265) = &g_174;
                        l_269 = g_267;
                        l_210 = (((*l_270) = g_251.f4) && (p_25 , (l_204 | g_156)));
                    }
                    else
                    {
                        l_271 = (void*)0;
                        (*l_159) = ((((safe_mod_func_int8_t_s_s(((((func_46((safe_mul_func_int16_t_s_s((p_25 , (safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u(0x66L, 7)))) < (g_281 , g_100.f3)) < (((((safe_div_func_uint16_t_u_u((((**l_257) >= g_35) || (safe_lshift_func_uint8_t_u_s(l_286, 4))), 0x1C94L)) == ((**l_288) = (l_287 != &l_288))) | g_156) & l_210) | (*l_159))), (*g_4)))), (-7L))), p_25) == 0x75L) , p_24) > p_26) , (*g_4)), (**l_257))) == g_100.f0) , &l_181) == g_290);
                    }
                }
            }
        }
        else
        {
            unsigned short l_305 = 0xEC05L;
            int **l_318 = (void*)0;
            int **l_319 = (void*)0;
            int **l_320 = &l_160;
            for (g_53 = 0; (g_53 != 15); g_53 = safe_add_func_int16_t_s_s(g_53, 3))
            {
                int l_303 = 0x755E538CL;
                char **l_312 = &g_4;
                int *l_317 = &g_35;
                for (l_181 = (-11); (l_181 >= 16); l_181 = safe_add_func_uint32_t_u_u(l_181, 4))
                {
                    unsigned l_298 = 0xD8B5B9D1L;
                    if ((l_295 != ((safe_lshift_func_uint16_t_u_s(p_25, 0)) != l_298)))
                    {
                        int *l_304 = (void*)0;
                        int *l_306 = (void*)0;
                        int *l_307 = &g_66;
                        int **l_308 = &l_304;
                        l_303 = (p_25 != ((g_299 == l_302) && 8L));
                        (*l_269) = (*g_267);
                        (*l_307) = (l_305 = p_25);
                        (*l_308) = &l_210;
                    }
                    else
                    {
                        volatile int *l_309 = (void*)0;
                        volatile int *l_310 = &g_311;
                        char ***l_313 = (void*)0;
                        char ***l_314 = &l_312;
                        (*l_310) = g_69.f2;
                        (*l_314) = l_312;
                    }
                    if (l_303)
                    {
                        if (g_281.f0)
                            break;
                    }
                    else
                    {
                        int *l_315 = &g_66;
                        int **l_316 = &l_315;
                        (*l_316) = l_315;
                        (*l_316) = (void*)0;
                        l_317 = (void*)0;
                        if (p_26)
                            break;
                    }
                }
            }
            (*l_320) = &g_66;
            (**l_320) = p_24;
        }
    }
    else
    {
        union U3 **l_321 = (void*)0;
        union U3 **l_322 = (void*)0;
        union U3 **l_323 = (void*)0;
        union U3 **l_324 = &g_216;
        (*l_324) = &g_217;
    }
    l_184 = g_15;
    (*l_333) = (((((safe_lshift_func_int16_t_s_s((func_61((((*l_332) = ((l_184 , &l_288) != ((safe_add_func_uint8_t_u_u((**g_71), (0xA6ECE732L | (0xABL && 0L)))) , &l_288))) , l_184), (p_26 == g_217.f0)) & g_36), 12)) >= p_25) , 0xE58CL) <= 65530UL) , 0xAA67B04CL);
    return l_184;
}







static int func_27(char * p_28, char * p_29, char * p_30)
{
    unsigned char l_40 = 255UL;
    unsigned char *l_41 = &l_40;
    int l_49 = 0xD1A6F322L;
    int l_50 = 0x3734BD47L;
    unsigned *l_54 = &g_55;
    struct S1 l_64 = {65535UL};
    int *l_67 = &g_66;
    short *l_155 = &g_156;
    int *l_157 = (void*)0;
    int *l_158 = &l_50;
    (*l_158) = ((*l_67) = ((((((*l_155) = (((safe_mod_func_uint8_t_u_u(((*l_41) = l_40), ((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((func_46(((*l_54) = (((l_49 = l_49) | l_50) < (((safe_add_func_int16_t_s_s((g_53 = l_50), g_5)) != 0x62EAE264L) == g_35))), (func_56(((*l_67) = (g_36 | func_61(l_64, (*g_4)))), l_50, l_41, (*p_30)) , (*l_67))) , 0xF5L) == l_50), l_64.f0)), 6)) ^ g_100.f4) > 0xF991L) , (**g_71)))) | (-9L)) , g_5)) > 0x9F67L) & 0xC4ABL) & 0x2020L) <= g_5));
    return g_35;
}







static unsigned short func_46(unsigned p_47, unsigned char p_48)
{
    struct S0 *l_99 = &g_100;
    struct S1 l_108 = {0x6B4CL};
    int l_119 = 0x24915224L;
    unsigned short l_126 = 0x13C5L;
    int *l_135 = &g_35;
    unsigned l_142 = 1UL;
    struct S1 *l_145 = (void*)0;
    struct S1 *l_146 = &l_108;
    unsigned *l_148 = &l_142;
    unsigned **l_147 = &l_148;
    unsigned *l_150 = &g_55;
    unsigned **l_149 = &l_150;
    struct S1 *l_153 = (void*)0;
    struct S1 *l_154 = &g_15;
    for (g_15.f0 = (-7); (g_15.f0 >= 16); g_15.f0 = safe_add_func_uint16_t_u_u(g_15.f0, 9))
    {
        char *l_84 = &g_5;
        int l_91 = (-1L);
        for (p_48 = (-2); (p_48 >= 11); p_48 = safe_add_func_int32_t_s_s(p_48, 2))
        {
            unsigned char l_89 = 0xFBL;
            int *l_92 = &g_66;
            g_35 = (((*l_92) = (safe_lshift_func_uint16_t_u_u((l_84 != (void*)0), (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_89, g_90)) | g_69.f7), l_91))))) <= (0x2328L == (((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(g_53, 8)) , (g_55 == 0x46FCCBB2L)), g_90)) , (-1L)) != 0x9396L)));
        }
    }
    for (g_36 = (-17); (g_36 > 19); g_36 = safe_add_func_uint8_t_u_u(g_36, 6))
    {
        struct S0 **l_101 = &l_99;
        int *l_113 = &g_35;
        (*l_101) = l_99;
        if ((~p_48))
        {
            int *l_102 = &g_35;
            int **l_103 = &l_102;
            unsigned char *l_116 = &g_100.f1;
            unsigned char **l_115 = &l_116;
            unsigned char ***l_114 = &l_115;
            (*l_103) = l_102;
            for (g_100.f1 = 15; (g_100.f1 != 28); g_100.f1 = safe_add_func_uint16_t_u_u(g_100.f1, 4))
            {
                int l_106 = 1L;
                int l_107 = (-1L);
                unsigned short *l_117 = (void*)0;
                unsigned short *l_118 = (void*)0;
                if ((l_107 = (~l_106)))
                {
                    if (g_55)
                        break;
                    (*l_101) = &g_100;
                }
                else
                {
                    if (l_106)
                        break;
                }
                if (p_47)
                    break;
                if ((func_61((l_108 = g_15), (safe_sub_func_uint32_t_u_u((&l_99 == (void*)0), (((l_119 = (((*g_4) && ((void*)0 == l_113)) | ((void*)0 != l_114))) && (*l_102)) != 1UL)))) <= p_48))
                {
                    unsigned *l_121 = &g_100.f3;
                    unsigned **l_120 = &l_121;
                    unsigned ***l_122 = &l_120;
                    int l_125 = (-1L);
                    struct S0 *l_129 = &g_127;
                    (*l_122) = l_120;
                    if (((l_126 = (safe_mod_func_int16_t_s_s(l_125, g_36))) <= (p_47 <= (*l_102))))
                    {
                        return l_125;
                    }
                    else
                    {
                        (*l_103) = l_113;
                        g_128 = (g_127 , ((*l_102) = (g_69.f0 , l_125)));
                        (*l_101) = l_129;
                        if (g_90)
                            continue;
                    }
                }
                else
                {
                    struct S1 *l_130 = &l_108;
                    union U2 **l_132 = &g_131;
                    (*l_130) = g_15;
                    (*l_132) = g_131;
                }
                if (p_48)
                    continue;
            }
            (**l_103) = 0x2B24513FL;
        }
        else
        {
            return p_47;
        }
    }
    (*l_135) = (safe_mul_func_int16_t_s_s((-3L), 0x2A05L));
    (*l_135) = (safe_div_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((g_100.f8 ^ (l_142 & (safe_sub_func_int8_t_s_s((((((*l_146) = l_108) , 255UL) == (&l_142 != ((*l_149) = ((*l_147) = &l_142)))) , (-8L)), (**g_71))))), (safe_mul_func_uint8_t_u_u(func_61(((*l_154) = g_15), (*l_135)), 0x57L)))), (*l_135))) ^ (*g_4)), 0x0140L));
    return p_47;
}







static union U3 func_56(int p_57, unsigned short p_58, char * p_59, char p_60)
{
    struct S1 l_68 = {0x372AL};
    volatile struct S0 *l_70 = &g_69;
    volatile unsigned char ***l_73 = &g_71;
    int *l_74 = &g_66;
    union U3 l_75 = {0xC6L};
    (*l_70) = ((p_57 < ((((func_61(l_68, (*g_4)) < (1UL | g_36)) >= (l_68.f0 < l_68.f0)) | g_35) | l_68.f0)) , g_69);
    (*l_73) = g_71;
    (*l_74) = p_58;
    return l_75;
}







static char func_61(struct S1 p_62, char p_63)
{
    int *l_65 = &g_66;
    (*l_65) = ((void*)0 != &g_35);
    return (*g_4);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69.f0, "g_69.f0", print_hash_value);
    transparent_crc(g_69.f1, "g_69.f1", print_hash_value);
    transparent_crc(g_69.f2, "g_69.f2", print_hash_value);
    transparent_crc(g_69.f3, "g_69.f3", print_hash_value);
    transparent_crc(g_69.f4, "g_69.f4", print_hash_value);
    transparent_crc(g_69.f5, "g_69.f5", print_hash_value);
    transparent_crc(g_69.f6, "g_69.f6", print_hash_value);
    transparent_crc(g_69.f7, "g_69.f7", print_hash_value);
    transparent_crc(g_69.f8, "g_69.f8", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_100.f5, "g_100.f5", print_hash_value);
    transparent_crc(g_100.f6, "g_100.f6", print_hash_value);
    transparent_crc(g_100.f7, "g_100.f7", print_hash_value);
    transparent_crc(g_100.f8, "g_100.f8", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_127.f2, "g_127.f2", print_hash_value);
    transparent_crc(g_127.f3, "g_127.f3", print_hash_value);
    transparent_crc(g_127.f4, "g_127.f4", print_hash_value);
    transparent_crc(g_127.f5, "g_127.f5", print_hash_value);
    transparent_crc(g_127.f6, "g_127.f6", print_hash_value);
    transparent_crc(g_127.f7, "g_127.f7", print_hash_value);
    transparent_crc(g_127.f8, "g_127.f8", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_217.f0, "g_217.f0", print_hash_value);
    transparent_crc(g_251.f0, "g_251.f0", print_hash_value);
    transparent_crc(g_251.f1, "g_251.f1", print_hash_value);
    transparent_crc(g_251.f2, "g_251.f2", print_hash_value);
    transparent_crc(g_251.f3, "g_251.f3", print_hash_value);
    transparent_crc(g_251.f4, "g_251.f4", print_hash_value);
    transparent_crc(g_251.f5, "g_251.f5", print_hash_value);
    transparent_crc(g_251.f6, "g_251.f6", print_hash_value);
    transparent_crc(g_251.f7, "g_251.f7", print_hash_value);
    transparent_crc(g_251.f8, "g_251.f8", print_hash_value);
    transparent_crc(g_281.f0, "g_281.f0", print_hash_value);
    transparent_crc(g_281.f1, "g_281.f1", print_hash_value);
    transparent_crc(g_281.f2, "g_281.f2", print_hash_value);
    transparent_crc(g_281.f3, "g_281.f3", print_hash_value);
    transparent_crc(g_281.f4, "g_281.f4", print_hash_value);
    transparent_crc(g_281.f5, "g_281.f5", print_hash_value);
    transparent_crc(g_281.f6, "g_281.f6", print_hash_value);
    transparent_crc(g_281.f7, "g_281.f7", print_hash_value);
    transparent_crc(g_281.f8, "g_281.f8", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_334.f0, "g_334.f0", print_hash_value);
    transparent_crc(g_334.f1, "g_334.f1", print_hash_value);
    transparent_crc(g_334.f2, "g_334.f2", print_hash_value);
    transparent_crc(g_334.f3, "g_334.f3", print_hash_value);
    transparent_crc(g_334.f4, "g_334.f4", print_hash_value);
    transparent_crc(g_334.f5, "g_334.f5", print_hash_value);
    transparent_crc(g_334.f6, "g_334.f6", print_hash_value);
    transparent_crc(g_334.f7, "g_334.f7", print_hash_value);
    transparent_crc(g_334.f8, "g_334.f8", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_368.f0, "g_368.f0", print_hash_value);
    transparent_crc(g_368.f1, "g_368.f1", print_hash_value);
    transparent_crc(g_368.f2, "g_368.f2", print_hash_value);
    transparent_crc(g_368.f3, "g_368.f3", print_hash_value);
    transparent_crc(g_368.f4, "g_368.f4", print_hash_value);
    transparent_crc(g_368.f5, "g_368.f5", print_hash_value);
    transparent_crc(g_368.f6, "g_368.f6", print_hash_value);
    transparent_crc(g_368.f7, "g_368.f7", print_hash_value);
    transparent_crc(g_368.f8, "g_368.f8", print_hash_value);
    transparent_crc(g_425.f0, "g_425.f0", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_425.f2, "g_425.f2", print_hash_value);
    transparent_crc(g_425.f3, "g_425.f3", print_hash_value);
    transparent_crc(g_425.f4, "g_425.f4", print_hash_value);
    transparent_crc(g_425.f5, "g_425.f5", print_hash_value);
    transparent_crc(g_425.f6, "g_425.f6", print_hash_value);
    transparent_crc(g_425.f7, "g_425.f7", print_hash_value);
    transparent_crc(g_425.f8, "g_425.f8", print_hash_value);
    transparent_crc(g_444.f0, "g_444.f0", print_hash_value);
    transparent_crc(g_444.f1, "g_444.f1", print_hash_value);
    transparent_crc(g_444.f2, "g_444.f2", print_hash_value);
    transparent_crc(g_444.f3, "g_444.f3", print_hash_value);
    transparent_crc(g_444.f4, "g_444.f4", print_hash_value);
    transparent_crc(g_444.f5, "g_444.f5", print_hash_value);
    transparent_crc(g_444.f6, "g_444.f6", print_hash_value);
    transparent_crc(g_444.f7, "g_444.f7", print_hash_value);
    transparent_crc(g_444.f8, "g_444.f8", print_hash_value);
    transparent_crc(g_473.f0, "g_473.f0", print_hash_value);
    transparent_crc(g_473.f1, "g_473.f1", print_hash_value);
    transparent_crc(g_473.f2, "g_473.f2", print_hash_value);
    transparent_crc(g_473.f3, "g_473.f3", print_hash_value);
    transparent_crc(g_473.f4, "g_473.f4", print_hash_value);
    transparent_crc(g_473.f5, "g_473.f5", print_hash_value);
    transparent_crc(g_473.f6, "g_473.f6", print_hash_value);
    transparent_crc(g_473.f7, "g_473.f7", print_hash_value);
    transparent_crc(g_473.f8, "g_473.f8", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_581.f0, "g_581.f0", print_hash_value);
    transparent_crc(g_581.f1, "g_581.f1", print_hash_value);
    transparent_crc(g_581.f2, "g_581.f2", print_hash_value);
    transparent_crc(g_581.f3, "g_581.f3", print_hash_value);
    transparent_crc(g_581.f4, "g_581.f4", print_hash_value);
    transparent_crc(g_581.f5, "g_581.f5", print_hash_value);
    transparent_crc(g_581.f6, "g_581.f6", print_hash_value);
    transparent_crc(g_581.f7, "g_581.f7", print_hash_value);
    transparent_crc(g_581.f8, "g_581.f8", print_hash_value);
    transparent_crc(g_582.f0, "g_582.f0", print_hash_value);
    transparent_crc(g_582.f1, "g_582.f1", print_hash_value);
    transparent_crc(g_582.f2, "g_582.f2", print_hash_value);
    transparent_crc(g_582.f3, "g_582.f3", print_hash_value);
    transparent_crc(g_582.f4, "g_582.f4", print_hash_value);
    transparent_crc(g_582.f5, "g_582.f5", print_hash_value);
    transparent_crc(g_582.f6, "g_582.f6", print_hash_value);
    transparent_crc(g_582.f7, "g_582.f7", print_hash_value);
    transparent_crc(g_582.f8, "g_582.f8", print_hash_value);
    transparent_crc(g_600.f0, "g_600.f0", print_hash_value);
    transparent_crc(g_600.f1, "g_600.f1", print_hash_value);
    transparent_crc(g_600.f2, "g_600.f2", print_hash_value);
    transparent_crc(g_600.f3, "g_600.f3", print_hash_value);
    transparent_crc(g_600.f4, "g_600.f4", print_hash_value);
    transparent_crc(g_600.f5, "g_600.f5", print_hash_value);
    transparent_crc(g_600.f6, "g_600.f6", print_hash_value);
    transparent_crc(g_600.f7, "g_600.f7", print_hash_value);
    transparent_crc(g_600.f8, "g_600.f8", print_hash_value);
    transparent_crc(g_602.f0, "g_602.f0", print_hash_value);
    transparent_crc(g_602.f1, "g_602.f1", print_hash_value);
    transparent_crc(g_602.f2, "g_602.f2", print_hash_value);
    transparent_crc(g_602.f3, "g_602.f3", print_hash_value);
    transparent_crc(g_602.f4, "g_602.f4", print_hash_value);
    transparent_crc(g_602.f5, "g_602.f5", print_hash_value);
    transparent_crc(g_602.f6, "g_602.f6", print_hash_value);
    transparent_crc(g_602.f7, "g_602.f7", print_hash_value);
    transparent_crc(g_602.f8, "g_602.f8", print_hash_value);
    transparent_crc(g_605.f0, "g_605.f0", print_hash_value);
    transparent_crc(g_605.f1, "g_605.f1", print_hash_value);
    transparent_crc(g_605.f2, "g_605.f2", print_hash_value);
    transparent_crc(g_605.f3, "g_605.f3", print_hash_value);
    transparent_crc(g_605.f4, "g_605.f4", print_hash_value);
    transparent_crc(g_605.f5, "g_605.f5", print_hash_value);
    transparent_crc(g_605.f6, "g_605.f6", print_hash_value);
    transparent_crc(g_605.f7, "g_605.f7", print_hash_value);
    transparent_crc(g_605.f8, "g_605.f8", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
