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
   unsigned short f0;
   volatile unsigned long long f1;
};

struct S1 {
   char f0;
   const unsigned f1;
   short f2;
};

struct S2 {
   volatile short f0;
   volatile int f1;
   unsigned f2;
   struct S0 f3;
   volatile int f4;
   const volatile unsigned short f5;
   volatile long long f6;
};


static long long g_6 = (-10L);
static struct S0 g_18 = {1UL,8UL};
static struct S0 *g_17 = &g_18;
static int g_52 = (-1L);
static int * volatile g_51 = &g_52;
static int *g_79 = &g_52;
static int **g_78 = &g_79;
static int *** volatile g_77 = &g_78;
static struct S2 g_81 = {0xD77FL,-1L,0x9828A5DAL,{0xDE90L,0xBA9A64B00F59FB91LL},0xDE484183L,0xA7A6L,1L};
static const int *** volatile g_110 = (void*)0;
static struct S2 g_115 = {0xD0ABL,1L,6UL,{0xD39DL,0xE3EE8C007EE71932LL},0x0CCB0868L,2UL,-10L};
static struct S0 g_126 = {0UL,0x8553EDC7201A7A66LL};
static volatile struct S1 *g_127 = (void*)0;
static struct S1 g_132 = {0x06L,0xC9850C21L,4L};
static volatile struct S2 g_143 = {0x61EAL,0x6C69FB00L,0x4203E263L,{0x393DL,0x3457D5AD653C0322LL},0x2D308AEAL,0x6F31L,-1L};
static volatile struct S2 *g_142 = &g_143;
static volatile struct S2 **g_141 = &g_142;
static struct S0 *g_145 = &g_18;
static struct S0 ** volatile g_144 = &g_145;
static int *** volatile g_150 = (void*)0;
static struct S2 g_160 = {0x32F2L,0xBEF3D604L,4294967291UL,{0xAACEL,0x8682C8C66085447BLL},-1L,65535UL,1L};
static struct S2 *g_159 = &g_160;
static struct S0 g_193 = {0xE9B0L,0x27CE1FA24A68E686LL};
static int ** volatile g_197 = (void*)0;
static struct S1 *g_203 = (void*)0;
static struct S1 ** volatile g_202 = &g_203;
static struct S0 g_239 = {1UL,18446744073709551615UL};
static volatile unsigned long long g_242 = 0xCF226FB7A4C9A174LL;
static struct S1 ** volatile g_243 = (void*)0;
static struct S1 ** volatile g_244 = (void*)0;
static struct S1 ** volatile g_245 = &g_203;
static struct S0 g_265 = {1UL,7UL};
static unsigned long long g_277 = 0xD6AAB76A276C94B1LL;
static volatile struct S0 g_297 = {0xD6D6L,0xA8F09C824AA738E8LL};
static int * volatile g_298 = (void*)0;
static int * volatile g_299 = &g_52;
static struct S0 ** volatile g_300 = &g_145;
static int * volatile g_309 = &g_52;
static const volatile struct S2 g_312 = {5L,0x9814D243L,0xC4BFCA96L,{1UL,0xCA1CA584BB0F4E43LL},0xC9994073L,5UL,-1L};
static struct S0 g_318 = {7UL,1UL};
static volatile struct S2 g_384 = {0xE8D2L,0L,0xAE60E6F7L,{0xBCE2L,18446744073709551609UL},1L,2UL,4L};
static struct S0 g_387 = {3UL,18446744073709551609UL};
static const int *g_398 = &g_52;
static const int ** volatile g_397 = &g_398;
static const int ** volatile g_399 = &g_398;
static struct S0 ** volatile g_408 = (void*)0;
static struct S0 ** volatile g_409 = (void*)0;
static volatile struct S0 g_411 = {65528UL,1UL};
static struct S0 g_422 = {2UL,0xAF48ABD43E76DAE3LL};
static struct S0 g_423 = {0xCA1CL,0UL};
static struct S0 g_437 = {0x2C94L,0UL};
static int * volatile g_490 = &g_52;
static int *** const volatile g_492 = &g_78;
static struct S0 g_494 = {65535UL,0x947B932794AB9A40LL};
static int ** volatile g_496 = &g_79;
static struct S2 g_574 = {0xDA47L,0x135B0497L,0x9B5594C2L,{65532UL,0xE777681C51685E31LL},1L,7UL,-1L};
static struct S0 g_584 = {0x5EDBL,0x987C49DB748DA701LL};
static unsigned g_598 = 0xC37C7C50L;
static int * volatile g_609 = &g_52;
static struct S0 *g_624 = &g_387;
static int * volatile g_639 = &g_52;
static struct S0 g_648 = {65534UL,18446744073709551615UL};
static struct S0 g_660 = {65532UL,4UL};
static int ** volatile g_663 = (void*)0;
static const struct S1 *g_669 = &g_132;
static const struct S1 **g_668 = &g_669;
static const struct S1 *** const volatile g_667 = &g_668;
static int ** volatile g_681 = &g_79;
static const struct S0 *g_686 = &g_81.f3;
static const struct S0 ** volatile g_685 = &g_686;
static volatile struct S0 g_696 = {0UL,0x05B8F7AFCA018DA9LL};
static volatile struct S0 *g_695 = &g_696;
static volatile struct S0 * volatile *g_694 = &g_695;
static int *** volatile g_698 = &g_78;
static struct S0 g_699 = {65535UL,0xBC5AB5CC4D655CEELL};
static struct S0 *g_700 = &g_660;
static struct S0 g_702 = {0x82FBL,0xFFF2927388E632CFLL};
static int * volatile g_708 = &g_52;
static int * volatile g_709 = &g_52;



static unsigned short func_1(void);
static const int func_2(const short p_3, unsigned long long p_4);
static const struct S0 * func_7(unsigned p_8, unsigned short p_9, struct S0 * const p_10, int p_11);
static struct S1 func_14(struct S0 * p_15, short p_16);
static unsigned func_19(long long p_20, const unsigned p_21, struct S0 * p_22);
static long long func_23(int p_24);
static struct S0 func_25(struct S0 * p_26, unsigned char p_27, struct S0 * p_28, unsigned p_29, unsigned short p_30);
static struct S0 * func_32(int p_33, struct S0 * p_34);
static struct S0 * func_35(struct S0 * p_36, struct S0 * p_37);
static struct S0 * func_38(struct S0 * p_39, struct S0 * p_40, struct S0 * p_41, unsigned char p_42);
static unsigned short func_1(void)
{
    const unsigned l_5 = 8UL;
    (*g_709) = func_2(l_5, g_6);
    return g_660.f0;
}







static const int func_2(const short p_3, unsigned long long p_4)
{
    const unsigned l_414 = 0xDFB4F0E1L;
    struct S0 * const l_647 = &g_648;
    int **l_687 = &g_79;
    (*g_685) = func_7(g_6, (~(safe_add_func_int16_t_s_s((((func_14(g_17, ((func_19(func_23(p_3), l_414, ((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(l_414)) && (p_4 & (safe_mul_func_uint8_t_u_u((((l_414 , ((g_115.f2 < p_4) ^ g_132.f2)) <= 0xAFB3F48BL) || 2UL), 0xADL)))), 4)) , g_17)) , p_3) , (-5L))) , g_312.f4) < l_414) != p_4), p_4))), l_647, l_414);
    (*l_687) = (void*)0;
    (*l_687) = (*l_687);
    for (g_126.f0 = 0; (g_126.f0 < 52); ++g_126.f0)
    {
        int **l_697 = &g_79;
        if ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(g_143.f1, ((void*)0 == g_694))), g_160.f3.f0)))
        {
            (*g_698) = l_697;
        }
        else
        {
            struct S0 *l_701 = &g_702;
            struct S1 l_703 = {0xA5L,0xD1E9281FL,0x5AB5L};
            (*g_17) = g_699;
            (*g_17) = (**g_300);
            (*g_708) = (g_132.f2 < g_574.f2);
        }
        return p_3;
    }
    return (*g_51);
}







static const struct S0 * func_7(unsigned p_8, unsigned short p_9, struct S0 * const p_10, int p_11)
{
    short l_649 = 0x44DFL;
    struct S2 **l_652 = &g_159;
    struct S0 *l_659 = &g_660;
    int *l_662 = &g_52;
    const struct S1 *l_666 = &g_132;
    const struct S1 **l_665 = &l_666;
    const struct S0 *l_684 = &g_265;
    if (func_19(((((((l_649 < (p_8 && g_574.f4)) > (((g_277 <= (l_649 & (safe_sub_func_int8_t_s_s(((l_652 == ((safe_lshift_func_int16_t_s_u((l_649 , (safe_mul_func_int8_t_s_s((((g_6 != ((safe_mul_func_uint16_t_u_u(0xC9ECL, g_81.f3.f0)) & p_11)) , 1L) == 0xCC1DL), g_193.f0))), 4)) , l_652)) ^ 0UL), p_8)))) | l_649) == g_18.f0)) > p_8) | g_574.f2) != l_649) , 0x5606793D22F0553ELL), p_11, l_659))
    {
        int *l_661 = &g_52;
        int **l_664 = &g_79;
        (*g_496) = l_661;
        (*l_664) = l_662;
    }
    else
    {
        unsigned char l_670 = 250UL;
        struct S0 *l_673 = &g_115.f3;
        int l_674 = 4L;
        (*g_667) = l_665;
        (*g_17) = (*g_624);
        (*l_662) = (*g_309);
        l_674 = (((p_8 && 0x85EBL) != (p_10 == l_673)) , 0xAAEE85D8L);
    }
    (*l_662) = (0xA8A26D010A09B7C4LL < (safe_mul_func_uint8_t_u_u(p_9, p_11)));
    (*g_681) = l_662;
    if (func_19((safe_rshift_func_int8_t_s_u((*l_662), 6)), p_9, l_659))
    {
        return l_684;
    }
    else
    {
        l_662 = l_662;
        (*g_141) = (*g_141);
    }
    return l_659;
}







static struct S1 func_14(struct S0 * p_15, short p_16)
{
    int *l_641 = (void*)0;
    int **l_642 = (void*)0;
    int **l_643 = &g_79;
    struct S1 *l_644 = (void*)0;
    struct S1 *l_645 = &g_132;
    int l_646 = 0L;
    (*l_643) = l_641;
    l_646 = (l_644 == l_645);
    return (*l_645);
}







static unsigned func_19(long long p_20, const unsigned p_21, struct S0 * p_22)
{
    struct S2 *l_420 = &g_160;
    int l_421 = 0x21C4B42CL;
    struct S1 l_433 = {-9L,0xEB6BC0C5L,0L};
    int **l_468 = (void*)0;
    unsigned short l_487 = 0xE9BEL;
    int **l_640 = &g_79;
    l_420 = l_420;
    if (l_421)
    {
        struct S0 *l_436 = &g_437;
        int l_438 = 0x47914ABDL;
        int **l_443 = &g_79;
        const struct S2 *l_472 = &g_81;
        const struct S2 **l_471 = &l_472;
        int l_491 = (-1L);
        const unsigned l_560 = 0x301BB163L;
        struct S1 *l_626 = (void*)0;
        struct S1 l_630 = {0xADL,0x445E5A8AL,1L};
        g_423 = g_422;
        for (g_115.f2 = 0; (g_115.f2 == 60); g_115.f2++)
        {
            unsigned long long l_462 = 0x823F320E88AB914DLL;
            int l_466 = 2L;
            unsigned char l_470 = 0xE2L;
            struct S0 *l_501 = &g_239;
            unsigned long long l_513 = 0UL;
            int l_559 = 0xC5FF2AC0L;
            char l_588 = (-1L);
            int **l_597 = &g_79;
            char l_610 = 0x94L;
        }
        (*l_443) = (*l_443);
        for (g_132.f2 = 0; (g_132.f2 == (-27)); g_132.f2 = safe_sub_func_uint16_t_u_u(g_132.f2, 8))
        {
            unsigned long long l_633 = 0xB1103292EA3299FELL;
            int *l_638 = (void*)0;
            l_633 = (0x79L != ((l_433 , g_115.f0) > (((l_630 , (g_115.f3.f0 != 0x40B3L)) && ((l_438 || ((safe_lshift_func_uint16_t_u_u(0x2DDBL, 1)) > p_20)) & 0xC074220CA61AD9B2LL)) || 0x8BL)));
            l_438 = ((p_21 && (l_433 , (g_160.f1 || (g_143.f3.f1 , (l_633 , (g_494.f0 >= g_384.f3.f0)))))) < (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((l_438 || (((0xCC1CL && l_633) != (-1L)) | l_633)), 1UL)) ^ p_21), p_21)));
            if ((*g_309))
                break;
            (*l_443) = l_638;
        }
    }
    else
    {
        (*g_639) = (*g_309);
    }
    (*g_309) = p_21;
    (*l_640) = &l_421;
    return g_81.f6;
}







static long long func_23(int p_24)
{
    struct S0 *l_31 = &g_18;
    int l_166 = (-5L);
    (*l_31) = func_25(l_31, p_24, func_32(g_6, func_35(func_38(&g_18, &g_18, l_31, (g_18.f1 , 252UL)), l_31)), l_166, g_160.f3.f0);
    return l_166;
}







static struct S0 func_25(struct S0 * p_26, unsigned char p_27, struct S0 * p_28, unsigned p_29, unsigned short p_30)
{
    struct S1 l_167 = {0xB6L,1UL,0x7248L};
    struct S2 **l_186 = (void*)0;
    int **l_233 = &g_79;
    struct S0 *l_247 = &g_18;
    long long l_290 = 6L;
    unsigned char l_291 = 0xDEL;
    unsigned l_326 = 0x4941D301L;
    struct S2 *l_404 = (void*)0;
    int *l_413 = &g_52;
    if ((!(*g_51)))
    {
        unsigned long long l_189 = 0xD449D27B8070DB40LL;
        unsigned l_190 = 0xF129304CL;
        int **l_232 = &g_79;
        struct S1 **l_250 = &g_203;
        unsigned long long l_254 = 0UL;
        unsigned l_273 = 3UL;
        struct S0 **l_325 = &l_247;
        int *l_327 = &g_52;
        if (((g_143.f3.f1 <= (((((l_167 , ((p_30 < (l_167.f0 < ((void*)0 == &g_17))) || (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((-1L), 2)), g_6)) , (-1L)) < p_29), p_30)), l_167.f1)))) & (-1L)) > 0xA5F8L) ^ 0xA106L) && 65526UL)) > g_52))
        {
            (*g_79) = (safe_lshift_func_uint16_t_u_u((~g_126.f1), 9));
        }
        else
        {
            struct S2 *l_178 = &g_115;
            struct S2 **l_179 = (void*)0;
            struct S2 **l_180 = &l_178;
            struct S1 * const l_201 = &l_167;
            int l_210 = 0x87665D8AL;
            int **l_271 = &g_79;
            (*l_180) = l_178;
lbl_219:
            if (p_30)
            {
                int **l_181 = &g_79;
                int *l_182 = &g_52;
                (*l_181) = (void*)0;
                (*l_182) = 0x6D6AB550L;
            }
            else
            {
                struct S2 *l_183 = &g_115;
                int l_218 = 0L;
                if (((((0xB1L ^ ((*g_141) == l_183)) , ((*g_159) , (safe_mod_func_uint64_t_u_u(g_115.f1, ((&l_183 == (g_160.f2 , l_186)) | (safe_rshift_func_int16_t_s_s(l_189, 9))))))) <= p_30) >= l_190))
                {
                    int * const l_196 = &g_52;
                    int *l_198 = &g_52;
                    for (g_115.f3.f0 = (-10); (g_115.f3.f0 <= 35); g_115.f3.f0 = safe_add_func_int16_t_s_s(g_115.f3.f0, 1))
                    {
                        (*g_145) = (*g_145);
                        if (p_30)
                            goto lbl_219;
                    }
                    (*g_145) = g_193;
                    (*g_79) = (safe_rshift_func_uint16_t_u_u(0UL, 4));
                    l_198 = (g_115.f1 , l_196);
                }
                else
                {
                    int l_211 = (-8L);
                    for (p_27 = (-12); (p_27 < 22); p_27 = safe_add_func_uint32_t_u_u(p_27, 9))
                    {
                        (*g_79) = ((p_29 >= (1UL || (g_193.f1 ^ (-1L)))) != l_190);
                    }
                    (*g_79) = p_30;
                    (*g_202) = l_201;
                    for (g_160.f3.f0 = (-11); (g_160.f3.f0 <= 14); g_160.f3.f0++)
                    {
                        l_218 = (((safe_add_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u(l_210, (-5L))) >= p_27), (l_211 , 0UL))) || ((safe_lshift_func_int16_t_s_s((((l_167 , (safe_rshift_func_int8_t_s_u(g_81.f6, 0))) != (safe_sub_func_uint8_t_u_u((g_6 == ((p_27 , l_190) <= (*g_79))), p_29))) ^ 2L), 4)) & g_6)) <= p_30);
                    }
                }
            }
            if ((0x9FL | ((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((((l_167.f1 , g_143.f3.f1) > (g_115.f3.f0 || (safe_rshift_func_uint16_t_u_s(p_27, 5)))) || (l_189 > l_190)) , ((((safe_mul_func_int16_t_s_s(g_160.f5, ((safe_add_func_int16_t_s_s((l_232 == l_233), p_27)) & p_27))) & 0UL) , 0xF738797EL) && p_27)), l_210)), p_29)) , l_189)))
            {
                int *l_234 = (void*)0;
                (*l_233) = l_234;
                if (p_30)
                {
                    for (g_81.f2 = 0; (g_81.f2 >= 1); ++g_81.f2)
                    {
                        struct S1 *l_237 = &l_167;
                        struct S1 **l_238 = &g_203;
                        (*l_238) = l_237;
                        (*l_232) = l_234;
                        return g_239;
                    }
                    if ((((**g_141) , p_30) ^ 0UL))
                    {
                        return (*p_26);
                    }
                    else
                    {
                        return (*g_145);
                    }
                }
                else
                {
                    struct S0 **l_248 = &l_247;
                    for (p_27 = 3; (p_27 >= 27); ++p_27)
                    {
                        int *l_246 = &g_52;
                        (*l_233) = (*l_232);
                        g_242 = (-7L);
                        (*g_245) = (*g_202);
                        (*l_246) = p_30;
                    }
                    (*l_248) = l_247;
                }
                return (*p_26);
            }
            else
            {
                long long l_249 = (-8L);
                struct S1 *l_251 = &g_132;
                unsigned char l_261 = 255UL;
                int l_274 = 0x729FCB4DL;
                int *l_282 = &g_52;
                l_249 = 1L;
                l_210 = p_27;
                if ((((((void*)0 != l_250) > (0x4721E7CADE12A715LL <= (&l_167 != l_251))) && (p_30 != (g_81.f0 < (safe_lshift_func_int16_t_s_u(((l_249 < ((((p_29 | g_126.f0) & 0xEE6F4B5C2CF825CBLL) & l_210) != l_254)) | p_29), 8))))) , p_27))
                {
                    struct S1 l_264 = {8L,0xEC33E8E4L,-6L};
                    if ((3L ^ (((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((p_27 , p_29), (((safe_lshift_func_uint16_t_u_s(l_261, 14)) >= p_29) , (safe_mod_func_uint64_t_u_u((((l_264 , g_81.f3.f0) | ((p_30 || l_264.f2) <= l_264.f0)) ^ l_264.f1), p_30))))), 0UL)) == l_261) >= p_30)))
                    {
                        int *l_266 = &g_52;
                        (*p_28) = g_265;
                        l_266 = (void*)0;
                        (*g_202) = (*g_245);
                    }
                    else
                    {
                        (*l_233) = (*l_233);
                        if (l_264.f2)
                            goto lbl_267;
lbl_267:
                        (*g_51) = p_29;
                        return (*g_145);
                    }
                }
                else
                {
                    unsigned l_270 = 0xDB83E6DEL;
                    int * const *l_272 = &g_79;
                    int l_278 = 0x1C7011D9L;
                    l_274 = ((((safe_lshift_func_uint8_t_u_u(g_115.f3.f0, p_30)) ^ ((g_143.f3.f1 , g_160.f4) < ((((l_270 || ((void*)0 == l_271)) != ((l_271 != l_272) & 3L)) < g_160.f3.f0) , l_210))) && g_160.f5) , l_273);
                    l_278 = ((safe_mul_func_int8_t_s_s((l_251 != (g_277 , l_201)), ((((&l_272 == &l_271) , (65535UL != l_261)) | ((g_160.f3.f1 <= 0UL) && 0x3F7A6105L)) < l_189))) | g_52);
                    if ((safe_mod_func_int16_t_s_s(((((((*l_232) != &l_274) > g_115.f1) <= (p_29 >= g_6)) , g_143.f5) && p_30), ((&l_247 != (p_29 , &l_247)) , 1L))))
                    {
                        int *l_281 = (void*)0;
                        (*l_233) = l_281;
                        (*l_271) = (*l_233);
                    }
                    else
                    {
                        l_282 = (*l_233);
                    }
                }
            }
        }
        if (p_29)
        {
            long long l_285 = 0x08CA354A29A4AC84LL;
            int l_292 = 0L;
            int l_295 = (-1L);
            struct S0 *l_317 = &g_318;
            l_292 = (safe_mod_func_int16_t_s_s(((l_167 , 0xF60BL) ^ (l_285 , ((**g_141) , ((((l_285 > (safe_lshift_func_uint8_t_u_u(g_160.f2, (((g_143.f3.f0 || (safe_mod_func_uint64_t_u_u(p_27, l_290))) , 0xB0EEL) , g_132.f0)))) || p_29) <= l_285) != l_291)))), 0x5115L));
            (*l_232) = (void*)0;
            for (g_81.f2 = (-23); (g_81.f2 == 42); ++g_81.f2)
            {
                unsigned l_304 = 0xDA0CBBA4L;
                if (l_295)
                {
                    short l_296 = 1L;
                    (*l_232) = (*l_233);
                    l_296 = l_292;
                    (*g_17) = g_297;
                }
                else
                {
                    short l_303 = 0xB5FCL;
                    (*g_299) = p_30;
                    (*g_300) = func_35((*g_144), g_17);
                    for (g_18.f0 = 0; (g_18.f0 < 51); ++g_18.f0)
                    {
                        (*g_141) = (*g_141);
                        l_304 = l_303;
                        if (p_29)
                            break;
                        (*g_141) = (*g_141);
                    }
                    for (l_285 = 0; (l_285 != (-6)); l_285 = safe_sub_func_uint32_t_u_u(l_285, 7))
                    {
                        int l_307 = 0x9A12A585L;
                        int *l_308 = (void*)0;
                        (*g_309) = l_307;
                        if (l_303)
                            break;
                    }
                }
            }
            if ((((l_167 , (safe_add_func_uint64_t_u_u(((g_312 , func_35(((safe_mul_func_uint16_t_u_u(p_27, (safe_lshift_func_int16_t_s_u((-9L), 1)))) , func_38((*g_144), p_28, l_317, ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(p_29, 7)) >= (safe_add_func_uint64_t_u_u(((g_265.f0 , &g_145) == l_325), l_292))), l_326)) | p_29))), (*l_325))) != p_28), g_193.f0))) < g_160.f2) , 0xC2B7B0E1L))
            {
                (*l_233) = l_327;
                (**l_233) = ((~p_27) >= ((p_30 < g_81.f0) >= l_285));
            }
            else
            {
                (*l_232) = (*l_233);
                (*l_232) = (void*)0;
            }
        }
        else
        {
            unsigned l_330 = 18446744073709551613UL;
            int l_333 = 0x4D58D476L;
            (*l_325) = func_32((((l_167 , (((safe_rshift_func_uint8_t_u_u((l_330 || (l_167 , (((*g_309) , l_330) != ((l_330 | (safe_mod_func_uint32_t_u_u(((p_28 != g_145) < g_18.f0), l_330))) | 0xC5CB491CE318A9A5LL)))), 3)) <= l_333) , (*l_327))) , g_312.f2) , g_242), g_145);
        }
    }
    else
    {
        unsigned long long l_357 = 0UL;
        struct S1 *l_363 = (void*)0;
        struct S1 l_393 = {-5L,1UL,1L};
        unsigned l_412 = 0UL;
        for (l_326 = 0; (l_326 == 54); l_326 = safe_add_func_uint32_t_u_u(l_326, 6))
        {
            unsigned l_336 = 0UL;
            if (l_336)
                break;
        }
        if ((p_29 <= (((((safe_lshift_func_int8_t_s_s(p_27, (safe_add_func_int8_t_s_s(0xC7L, (**l_233))))) > (l_247 == p_26)) , (safe_sub_func_int32_t_s_s(((((g_132.f0 < p_29) < 0x0DDA55B130C05418LL) == 0xCEL) ^ g_115.f0), (**l_233)))) <= p_29) , 0xB9L)))
        {
            unsigned short l_356 = 0x59FDL;
            for (g_277 = 0; (g_277 >= 59); g_277 = safe_add_func_uint16_t_u_u(g_277, 4))
            {
                struct S2 **l_351 = &g_159;
                for (g_18.f0 = (-17); (g_18.f0 >= 46); g_18.f0 = safe_add_func_int8_t_s_s(g_18.f0, 9))
                {
                    (*g_79) = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((p_30 || (&g_142 == l_351)) < ((safe_mul_func_uint16_t_u_u(((p_30 == ((1L || p_29) < (**l_233))) , ((**l_233) | (safe_sub_func_uint16_t_u_u(p_30, (**l_233))))), 9L)) && g_143.f4)) && g_18.f0), l_356)), 12));
                }
                if (l_357)
                    break;
            }
        }
        else
        {
            (*p_28) = (*g_145);
            (*g_145) = (*g_145);
            (*g_79) = p_27;
        }
        if (((safe_unary_minus_func_int32_t_s(((safe_lshift_func_int8_t_s_u(g_132.f2, 0)) && (*g_79)))) ^ ((safe_add_func_int32_t_s_s(((l_357 ^ (((**l_233) & (((**l_233) != ((&l_233 != (void*)0) > g_81.f3.f0)) && (!(p_30 & p_27)))) , g_115.f2)) & g_115.f5), 4294967295UL)) > 18446744073709551611UL)))
        {
            unsigned char l_385 = 247UL;
            int *l_386 = (void*)0;
            (*g_79) = ((0xDD1063FD6FBCA5A7LL <= ((*g_51) && (&l_167 != (p_27 , l_363)))) || p_30);
            if (((void*)0 == (*g_144)))
            {
                long long l_383 = 1L;
                for (g_81.f3.f0 = 0; (g_81.f3.f0 != 14); ++g_81.f3.f0)
                {
                    for (g_81.f2 = 0; (g_81.f2 <= 20); g_81.f2 = safe_add_func_uint32_t_u_u(g_81.f2, 3))
                    {
                        unsigned short l_382 = 65528UL;
                        (*g_79) = (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(((!(((p_30 || g_160.f3.f0) || ((((((safe_rshift_func_uint8_t_u_u((g_126.f1 == (safe_add_func_int32_t_s_s(p_29, (((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(g_193.f0, p_27)), p_29)) ^ (!(safe_mul_func_int8_t_s_s(l_357, (-1L))))) >= l_382)))), l_383)) , g_384) , 3L) && (*g_51)) <= (-10L)) != l_385)) < p_27)) && p_30), g_126.f0)) < g_81.f3.f0), 5));
                    }
                }
                (*l_233) = (*l_233);
            }
            else
            {
                (*l_233) = l_386;
                return g_387;
            }
            (*g_141) = (*g_141);
        }
        else
        {
            long long l_390 = 0x478207495FB48D22LL;
            if (((p_29 & 0UL) || (0x6AA79E289F323D68LL | (((l_357 >= g_242) >= ((((((safe_mul_func_uint8_t_u_u(g_115.f2, 0xACL)) < (**l_233)) != (-1L)) && l_390) | 0xF5C0L) , 2UL)) & (**l_233)))))
            {
                (**l_233) = (safe_sub_func_int8_t_s_s(p_27, p_30));
            }
            else
            {
                if (((((void*)0 != l_247) < (18446744073709551615UL & 0xAE65E62D59CFF97FLL)) > (l_393 , (safe_rshift_func_uint16_t_u_s(0UL, 11)))))
                {
                    const int *l_396 = (void*)0;
                    (*g_397) = l_396;
                }
                else
                {
                    (*g_399) = (*g_397);
                }
            }
            for (g_18.f0 = 0; (g_18.f0 > 55); g_18.f0++)
            {
                struct S0 *l_402 = &g_239;
                struct S2 *l_403 = &g_115;
                struct S0 **l_407 = (void*)0;
                struct S0 **l_410 = &l_247;
                (*l_402) = (**g_300);
                l_404 = l_403;
                (*g_141) = (*g_141);
                (*l_410) = func_32(g_312.f3.f0, (((l_167 , (p_27 , (safe_sub_func_uint64_t_u_u(p_30, g_277)))) , ((void*)0 != &g_142)) , g_17));
            }
            (*p_26) = g_411;
        }
        (*g_79) = l_412;
    }
    (*l_413) = l_326;
    (*l_233) = (*l_233);
    return (*p_28);
}







static struct S0 * func_32(int p_33, struct S0 * p_34)
{
    unsigned short l_72 = 65535UL;
    int *l_75 = (void*)0;
    int *l_76 = &g_52;
    struct S2 *l_80 = &g_81;
    struct S2 **l_82 = &l_80;
    int *l_129 = &g_52;
    (*l_76) = (((g_18.f1 & (((safe_lshift_func_uint8_t_u_s((l_72 , g_18.f0), 7)) , l_72) < l_72)) > ((safe_lshift_func_int8_t_s_u(0xA7L, 0)) | l_72)) && (0x8960L && p_33));
    (*g_77) = &l_76;
    (*l_82) = l_80;
    for (g_81.f2 = (-12); (g_81.f2 <= 23); g_81.f2 = safe_add_func_uint8_t_u_u(g_81.f2, 8))
    {
        int *l_90 = &g_52;
        char l_106 = 0x33L;
        struct S2 *l_113 = &g_81;
        struct S1 *l_131 = &g_132;
        struct S1 **l_130 = &l_131;
        struct S0 *l_155 = (void*)0;
        const int *l_161 = &g_52;
        (*g_78) = l_76;
        for (l_72 = 0; (l_72 < 3); l_72 = safe_add_func_int32_t_s_s(l_72, 2))
        {
            struct S2 *l_87 = &g_81;
            int l_93 = (-1L);
            int *l_123 = &l_93;
            struct S0 *l_136 = &g_81.f3;
        }
        (*l_76) = (*l_161);
        if (p_33)
            continue;
    }
    return p_34;
}







static struct S0 * func_35(struct S0 * p_36, struct S0 * p_37)
{
    const unsigned l_50 = 0x31CD1AC8L;
    struct S0 *l_69 = &g_18;
    for (g_18.f0 = 0; (g_18.f0 < 21); g_18.f0++)
    {
        int l_56 = 0x360ABED9L;
        int *l_68 = &g_52;
        if (g_6)
        {
            (*g_51) = (safe_mod_func_uint32_t_u_u(l_50, (g_18.f0 , g_6)));
        }
        else
        {
            int *l_53 = &g_52;
            (*l_53) = (((g_18.f1 , l_53) == &g_52) & (safe_rshift_func_int16_t_s_s(l_56, 7)));
        }
        l_56 = (l_56 ^ (l_50 == (((((l_56 ^ (l_50 == (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((!(safe_mul_func_int8_t_s_s((p_37 != ((l_56 , (l_56 > (((safe_unary_minus_func_uint8_t_u((l_50 != (safe_mod_func_int8_t_s_s((~l_50), g_18.f0))))) , 1UL) <= l_50))) , p_37)), 0L))), 0x7AEB8F83F3A8A1D5LL)), l_50)), g_52)))) ^ g_18.f0) && 0UL) || l_56) <= l_50)));
        (*l_68) = (*g_51);
    }
    return l_69;
}







static struct S0 * func_38(struct S0 * p_39, struct S0 * p_40, struct S0 * p_41, unsigned char p_42)
{
    int *l_43 = (void*)0;
    int **l_44 = &l_43;
    int ***l_45 = &l_44;
    (*p_40) = (*p_39);
    (*l_44) = l_43;
    (*l_45) = &l_43;
    return &g_18;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3.f0, "g_81.f3.f0", print_hash_value);
    transparent_crc(g_81.f3.f1, "g_81.f3.f1", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_81.f6, "g_81.f6", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_115.f3.f0, "g_115.f3.f0", print_hash_value);
    transparent_crc(g_115.f3.f1, "g_115.f3.f1", print_hash_value);
    transparent_crc(g_115.f4, "g_115.f4", print_hash_value);
    transparent_crc(g_115.f5, "g_115.f5", print_hash_value);
    transparent_crc(g_115.f6, "g_115.f6", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_126.f1, "g_126.f1", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_143.f0, "g_143.f0", print_hash_value);
    transparent_crc(g_143.f1, "g_143.f1", print_hash_value);
    transparent_crc(g_143.f2, "g_143.f2", print_hash_value);
    transparent_crc(g_143.f3.f0, "g_143.f3.f0", print_hash_value);
    transparent_crc(g_143.f3.f1, "g_143.f3.f1", print_hash_value);
    transparent_crc(g_143.f4, "g_143.f4", print_hash_value);
    transparent_crc(g_143.f5, "g_143.f5", print_hash_value);
    transparent_crc(g_143.f6, "g_143.f6", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_160.f2, "g_160.f2", print_hash_value);
    transparent_crc(g_160.f3.f0, "g_160.f3.f0", print_hash_value);
    transparent_crc(g_160.f3.f1, "g_160.f3.f1", print_hash_value);
    transparent_crc(g_160.f4, "g_160.f4", print_hash_value);
    transparent_crc(g_160.f5, "g_160.f5", print_hash_value);
    transparent_crc(g_160.f6, "g_160.f6", print_hash_value);
    transparent_crc(g_193.f0, "g_193.f0", print_hash_value);
    transparent_crc(g_193.f1, "g_193.f1", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_239.f1, "g_239.f1", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f1, "g_265.f1", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_297.f0, "g_297.f0", print_hash_value);
    transparent_crc(g_297.f1, "g_297.f1", print_hash_value);
    transparent_crc(g_312.f0, "g_312.f0", print_hash_value);
    transparent_crc(g_312.f1, "g_312.f1", print_hash_value);
    transparent_crc(g_312.f2, "g_312.f2", print_hash_value);
    transparent_crc(g_312.f3.f0, "g_312.f3.f0", print_hash_value);
    transparent_crc(g_312.f3.f1, "g_312.f3.f1", print_hash_value);
    transparent_crc(g_312.f4, "g_312.f4", print_hash_value);
    transparent_crc(g_312.f5, "g_312.f5", print_hash_value);
    transparent_crc(g_312.f6, "g_312.f6", print_hash_value);
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    transparent_crc(g_318.f1, "g_318.f1", print_hash_value);
    transparent_crc(g_384.f0, "g_384.f0", print_hash_value);
    transparent_crc(g_384.f1, "g_384.f1", print_hash_value);
    transparent_crc(g_384.f2, "g_384.f2", print_hash_value);
    transparent_crc(g_384.f3.f0, "g_384.f3.f0", print_hash_value);
    transparent_crc(g_384.f3.f1, "g_384.f3.f1", print_hash_value);
    transparent_crc(g_384.f4, "g_384.f4", print_hash_value);
    transparent_crc(g_384.f5, "g_384.f5", print_hash_value);
    transparent_crc(g_384.f6, "g_384.f6", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_411.f0, "g_411.f0", print_hash_value);
    transparent_crc(g_411.f1, "g_411.f1", print_hash_value);
    transparent_crc(g_422.f0, "g_422.f0", print_hash_value);
    transparent_crc(g_422.f1, "g_422.f1", print_hash_value);
    transparent_crc(g_423.f0, "g_423.f0", print_hash_value);
    transparent_crc(g_423.f1, "g_423.f1", print_hash_value);
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_437.f1, "g_437.f1", print_hash_value);
    transparent_crc(g_494.f0, "g_494.f0", print_hash_value);
    transparent_crc(g_494.f1, "g_494.f1", print_hash_value);
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_574.f1, "g_574.f1", print_hash_value);
    transparent_crc(g_574.f2, "g_574.f2", print_hash_value);
    transparent_crc(g_574.f3.f0, "g_574.f3.f0", print_hash_value);
    transparent_crc(g_574.f3.f1, "g_574.f3.f1", print_hash_value);
    transparent_crc(g_574.f4, "g_574.f4", print_hash_value);
    transparent_crc(g_574.f5, "g_574.f5", print_hash_value);
    transparent_crc(g_574.f6, "g_574.f6", print_hash_value);
    transparent_crc(g_584.f0, "g_584.f0", print_hash_value);
    transparent_crc(g_584.f1, "g_584.f1", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_648.f0, "g_648.f0", print_hash_value);
    transparent_crc(g_648.f1, "g_648.f1", print_hash_value);
    transparent_crc(g_660.f0, "g_660.f0", print_hash_value);
    transparent_crc(g_660.f1, "g_660.f1", print_hash_value);
    transparent_crc(g_696.f0, "g_696.f0", print_hash_value);
    transparent_crc(g_696.f1, "g_696.f1", print_hash_value);
    transparent_crc(g_699.f0, "g_699.f0", print_hash_value);
    transparent_crc(g_699.f1, "g_699.f1", print_hash_value);
    transparent_crc(g_702.f0, "g_702.f0", print_hash_value);
    transparent_crc(g_702.f1, "g_702.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
