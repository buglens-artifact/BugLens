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
   volatile long long f0;
   unsigned char f1;
   int f2;
};


static int g_3 = 8L;
static int *g_15 = &g_3;
static int **g_14[3] = {&g_15, &g_15, &g_15};
static volatile int g_16 = 0L;
static volatile int g_17 = 1L;
static volatile int g_18 = 0xC7A8CF1DL;
static volatile int g_19 = 4L;
static volatile int g_20 = 4L;
static int g_21 = 0x09F5954EL;
static volatile int g_22 = 0x2EB2FC25L;
static volatile int g_23 = 3L;
static int g_24 = 0x4087A912L;
static int g_87 = (-1L);
static unsigned char g_121 = 0xE4L;
static volatile union U0 *g_233 = (void*)0;
static union U0 g_236 = {0xA2D73B8AE9C4D85BLL};
static union U0 g_237 = {0x944529DE8BCC898ELL};
static union U0 g_238[3] = {{0xA4DB21452BD49051LL}, {0xA4DB21452BD49051LL}, {0xA4DB21452BD49051LL}};
static union U0 g_239[3][8] = {{{9L}, {0xCCC3FB247190EA31LL}, {0xFE5E31DAC9CA45F4LL}, {0xCCC3FB247190EA31LL}, {9L}, {5L}, {9L}, {0xCCC3FB247190EA31LL}}, {{9L}, {0xCCC3FB247190EA31LL}, {0xFE5E31DAC9CA45F4LL}, {0xCCC3FB247190EA31LL}, {9L}, {5L}, {9L}, {0xCCC3FB247190EA31LL}}, {{9L}, {0xCCC3FB247190EA31LL}, {0xFE5E31DAC9CA45F4LL}, {0xCCC3FB247190EA31LL}, {9L}, {5L}, {9L}, {0xCCC3FB247190EA31LL}}};
static union U0 g_241 = {-9L};
static union U0 g_278 = {-6L};
static union U0 g_279 = {8L};
static union U0 g_294 = {0L};
static union U0 g_295 = {9L};
static union U0 g_296 = {6L};
static union U0 g_298 = {0x9376B58073E3AB01LL};
static int g_356 = (-1L);
static volatile union U0 g_366[10][10][2] = {{{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}, {{{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}, {{9L}, {0x215CE271BE7167D2LL}}}};
static union U0 g_384 = {0L};
static int g_422 = (-6L);
static volatile int *g_517 = (void*)0;
static int g_534 = (-3L);
static int **g_566 = &g_15;
static volatile char g_607[4][8][8] = {{{0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}}, {{0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}}, {{0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}}, {{0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}, {0L, 0xA4L, (-6L), 4L, 0xFAL, 8L, (-9L), 0xC8L}}};
static long long g_621[7][10][3] = {{{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}, {{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}, {{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}, {{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}, {{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}, {{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}, {{0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}, {0xAAEAD5E174C5E538LL, 0xC74C569794F27112LL, (-9L)}}};
static char g_628 = 0x91L;
static unsigned g_724[8][7][3] = {{{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}, {{18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}, {18446744073709551615UL, 1UL, 1UL}}};



static unsigned char func_1(void);
static int func_5(int ** p_6, unsigned long long p_7, int p_8, short p_9);
static unsigned func_12(int ** p_13);
static unsigned func_26(int * p_27, unsigned char p_28, int ** p_29, unsigned long long p_30, unsigned p_31);
static int * func_32(short p_33, int p_34, int ** p_35);
static int ** func_36(int p_37, int * p_38);
static unsigned long long func_42(int ** p_43, int * p_44, int ** p_45, int * p_46);
static int ** func_47(int * p_48, char p_49, int p_50, int p_51);
static int * func_52(int ** p_53, unsigned long long p_54, unsigned p_55);
static int ** func_56(short p_57, int ** p_58, unsigned short p_59, int ** p_60, unsigned p_61);
static unsigned char func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    (*l_4) = l_2;
    (**g_566) = ((**l_4) | (((*l_4) == &g_3) >= func_5(&l_2, (**l_4), (*l_2), ((((safe_sub_func_uint8_t_u_u((func_12(g_14[1]) > (safe_add_func_int8_t_s_s(((*l_2) < g_621[2][3][0]), g_298.f0))), 0xDEL)) | (*l_2)) != g_278.f1) != g_295.f1))));
    return g_628;
}







static int func_5(int ** p_6, unsigned long long p_7, int p_8, short p_9)
{
    return (**g_566);
}







static unsigned func_12(int ** p_13)
{
    short l_25[9] = {0xED66L, (-1L), 0xED66L, (-1L), 0xED66L, (-1L), 0xED66L, (-1L), 0xED66L};
    long long l_459 = 1L;
    int l_468 = 0xB223BC8AL;
    union U0 *l_486 = &g_241;
    int **l_496 = &g_15;
    int *l_554 = &l_468;
    int l_651 = 0xB34A142FL;
    char l_682 = 1L;
    unsigned char l_754 = 0UL;
    int i;
    for (g_21 = 0; (g_21 <= 2); g_21 += 1)
    {
        int *l_39[1][8][2] = {{{&g_21, &g_24}, {&g_21, &g_24}, {&g_21, &g_24}, {&g_21, &g_24}, {&g_21, &g_24}, {&g_21, &g_24}, {&g_21, &g_24}, {&g_21, &g_24}}};
        int **l_606 = &l_39[0][2][1];
        union U0 *l_659 = &g_279;
        int i, j, k;
        for (g_24 = 2; (g_24 >= 0); g_24 -= 1)
        {
            int l_464 = 1L;
            char l_489[5] = {0x93L, 1L, 0x93L, 1L, 0x93L};
            unsigned char l_507 = 248UL;
            unsigned long long l_524[2][7][3] = {{{18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}}, {{18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}, {18446744073709551612UL, 18446744073709551612UL, 0UL}}};
            unsigned l_537 = 18446744073709551615UL;
            int **l_546 = &g_15;
            int i, j, k;
        }
    }
    return (**l_496);
}







static unsigned func_26(int * p_27, unsigned char p_28, int ** p_29, unsigned long long p_30, unsigned p_31)
{
    char l_460 = 0L;
    long long l_462 = 0x4315CCBC6AC75C5ALL;
    for (g_121 = 0; (g_121 <= 2); g_121 += 1)
    {
        int i;
        if ((*p_27))
            break;
        if (g_121)
            goto lbl_461;
    }
lbl_461:
    (*p_27) = l_460;
    for (l_460 = 2; (l_460 >= 0); l_460 -= 1)
    {
        int i;
        if (g_279.f2)
            goto lbl_461;
        (*p_27) = (-1L);
    }
    return l_462;
}







static int * func_32(short p_33, int p_34, int ** p_35)
{
    unsigned char l_447[3];
    int *l_448 = &g_279.f2;
    int i;
    for (i = 0; i < 3; i++)
        l_447[i] = 253UL;
    (*l_448) = l_447[1];

    for (g_298.f1 = 8; (g_298.f1 < 12); ++g_298.f1)
    {
        unsigned long long l_453 = 0x5588A1D245225081LL;
        int *l_454 = &g_295.f2;
        int **l_456 = &l_454;
        for (g_294.f1 = 6; (g_294.f1 != 54); g_294.f1 = safe_add_func_uint64_t_u_u(g_294.f1, 9))
        {
            int l_455 = 0xF3AF6400L;
            if (l_453)
                break;
            l_454 = (void*)0;

            ;
            if (l_455)
                continue;
        }

        ;
        (*l_456) = (void*)0;

        ;
        for (g_294.f1 = 0; (g_294.f1 <= 2); g_294.f1 += 1)
        {
            int i;
            (*l_448) = (func_42(g_14[g_294.f1], &p_34, g_14[g_294.f1], l_448) < (safe_lshift_func_int8_t_s_s(l_447[g_294.f1], 5)));
            return l_448;


        }
    }
    return l_448;


}







static int ** func_36(int p_37, int * p_38)
{
    unsigned char l_62 = 255UL;
    int **l_63 = &g_15;
    int l_338 = 1L;
    int l_358 = 0x6434A620L;
    union U0 *l_383 = &g_384;
    int **l_430 = (void*)0;
    if (((((((safe_rshift_func_int16_t_s_u((func_42(func_47(func_52(func_56((p_37 ^ l_62), l_63, (**l_63), &g_15, ((safe_lshift_func_uint8_t_u_s((**l_63), ((p_37 && (p_37 && (p_37 || (**l_63)))) || 1UL))) == p_37)), g_87, p_37), p_37, g_298.f1, l_62), &g_3, l_63, &g_24) <= l_62), 13)) & g_236.f1) == g_238[0].f1) ^ g_236.f2) & g_24) > p_37))
    {
        unsigned char l_315 = 255UL;
        unsigned char l_321 = 0x31L;
        union U0 *l_334 = (void*)0;
        union U0 **l_333 = &l_334;
        int **l_341 = (void*)0;
        int *l_343 = &g_295.f2;
        int *l_351 = &g_238[0].f2;
        union U0 *l_362 = (void*)0;
        short l_386[4] = {(-1L), 0xC515L, (-1L), 0xC515L};
        int *l_393 = &g_238[0].f2;
        int i;
        if (l_315)
        {
            int *l_326[5] = {&g_298.f2, (void*)0, &g_298.f2, (void*)0, &g_298.f2};
            int i;
            for (g_298.f2 = 21; (g_298.f2 == 7); g_298.f2 = safe_sub_func_uint64_t_u_u(g_298.f2, 3))
            {
                int *l_318 = &g_87;
            }

            for (g_298.f1 = 19; (g_298.f1 > 11); --g_298.f1)
            {
                int **l_335[7] = {&g_15, &g_15, (void*)0, &g_15, &g_15, (void*)0, &g_15};
                int i;
                l_338 = (((l_333 == &g_233) & func_42(func_56(g_296.f2, l_335[5], p_37, &g_15, ((p_37 <= (safe_rshift_func_uint16_t_u_u((l_326[3] == p_38), 12))) > (-3L))), l_326[3], &g_15, (*l_63))) <= 0L);
                if ((p_37 | (g_241.f1 | ((((safe_sub_func_uint32_t_u_u(g_298.f1, func_42(&p_38, p_38, &g_15, p_38))) < p_37) >= p_37) & g_237.f2))))
                {
                    l_338 = func_42(l_63, l_326[1], l_341, (*l_63));
                }
                else
                {
                    long long l_342 = 0L;
                    l_342 = (*p_38);
                }
                l_343 = p_38;

                ;
            }

            ;
            (**l_63) = (*p_38);

        }
        else
        {
            unsigned l_357[10][5][4] = {{{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}, {{4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}, {4294967293UL, 0x56A28996L, 0xBC235594L, 0x8E9C823DL}}};
            volatile union U0 *l_365 = &g_366[3][5][0];
            int **l_367 = &l_343;
            int i, j, k;
            for (g_237.f2 = 0; (g_237.f2 == (-19)); g_237.f2 = safe_sub_func_uint8_t_u_u(g_237.f2, 5))
            {
                unsigned l_350[2][8][9] = {{{0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}}, {{0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}, {0xB230FD66L, 0x7D474E7FL, 4294967295UL, 4294967295UL, 0x49B26988L, 0xE3C059C4L, 4294967295UL, 0xC176C8BCL, 0xA654E71AL}}};
                int *l_354[10][6] = {{&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}, {&g_295.f2, &g_239[0][2].f2, &g_239[0][2].f2, (void*)0, (void*)0, (void*)0}};
                int i, j, k;
                (*l_63) = func_52(&g_15, g_237.f1, (p_37 == (-1L)));

                ;
                for (g_296.f2 = 0; (g_296.f2 < 26); g_296.f2++)
                {
                    int l_355 = 0x023E313CL;
                    int *l_359 = &g_236.f2;
                    for (g_87 = 0; (g_87 != 18); g_87++)
                    {
                    }
                    if (l_355)
                    {
                        int *l_360 = &l_338;
                        l_357[5][3][1] = g_356;
                        (*l_343) = ((l_358 < g_239[0][2].f1) > (*l_343));
                        l_360 = l_359;

                        ;
                        return &g_15;


                    }
                    else
                    {
                        int *l_361 = &g_278.f2;
                        (*l_63) = l_361;

                        ;
                        (*l_333) = l_362;
                    }

                    ;
                    for (g_295.f2 = 0; (g_295.f2 == 24); g_295.f2++)
                    {
                        return &g_15;


                    }
                    l_365 = g_233;

                    ;
                }

                ;
                (*l_63) = p_38;

                ;
            }

            ;
            ;
            (*l_63) = (void*)0;

            ;
            if (l_357[4][2][1])
            {
                (*l_63) = p_38;

                ;
                return &g_15;


            }
            else
            {
                (*l_343) = (*p_38);
            }
            (*l_351) = ((void*)0 == &p_38);

        }

        ;
        ;
lbl_427:
        for (g_295.f1 = 0; (g_295.f1 < 55); g_295.f1 = safe_add_func_uint16_t_u_u(g_295.f1, 4))
        {
            int *l_376 = (void*)0;
            unsigned long long l_392 = 1UL;
            for (g_294.f2 = 0; (g_294.f2 < 5); ++g_294.f2)
            {
                unsigned long long l_387 = 0xE744610ED45B4981LL;
            }
        }
        for (g_298.f1 = 0; (g_298.f1 <= 3); g_298.f1 += 1)
        {
            union U0 ***l_404 = (void*)0;
            int *l_407[2][8] = {{&g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2}, {&g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2, &g_384.f2}};
            union U0 ***l_437 = &l_333;
            int i, j;
            (*l_393) = (safe_mod_func_uint8_t_u_u((((l_386[g_298.f1] <= (safe_rshift_func_uint16_t_u_s(g_3, (((safe_unary_minus_func_uint32_t_u(((&l_333 != l_404) != (safe_rshift_func_int8_t_s_u(p_37, (p_37 != func_42(&g_15, l_407[0][7], &g_15, p_38))))))) & p_37) != g_121)))) | (*p_38)) <= (*l_351)), (-6L)));
            if ((safe_add_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(p_37, 247UL)), (safe_sub_func_int64_t_s_s(((safe_add_func_uint64_t_u_u(0xC1419806A1C85E13LL, (+(g_278.f2 ^ ((void*)0 != &g_15))))) | ((void*)0 != p_38)), ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((9L == 0xBB5954C9L), g_87)), 0)) & g_295.f1))))) != g_422), 0x54L)))
            {
                unsigned l_426 = 0x9012F46FL;
                if ((*p_38))
                    break;
                for (g_296.f1 = 0; (g_296.f1 <= 3); g_296.f1 += 1)
                {
                    volatile union U0 **l_423 = &g_233;
                    int *l_428 = &g_3;
                    (*l_423) = g_233;
                    if ((safe_sub_func_int8_t_s_s(((void*)0 != &g_14[1]), l_426)))
                    {
                        if (g_296.f1)
                            goto lbl_427;
                        (*l_63) = l_428;

                        ;
                        p_38 = p_38;
                        return &g_15;


                    }
                    else
                    {
                        return &g_15;


                    }
                }
                if ((*p_38))
                    break;
            }
            else
            {
                for (g_295.f1 = 0; (g_295.f1 <= 3); g_295.f1 += 1)
                {
                    char l_429 = 6L;
                    for (g_241.f2 = 1; (g_241.f2 >= 0); g_241.f2 -= 1)
                    {
                        int i, j;
                        if (l_429)
                            break;
                        if ((*p_38))
                            break;
                    }
                    (*l_63) = l_343;

                    ;
                    for (p_37 = 3; (p_37 >= 0); p_37 -= 1)
                    {
                        return &g_15;


                    }
                    return l_430;


                }
            }
            for (g_236.f1 = 0; (g_236.f1 <= 3); g_236.f1 += 1)
            {
                int *l_436 = &g_241.f2;
                union U0 ***l_442 = (void*)0;
                (*l_436) = (((safe_unary_minus_func_uint64_t_u(g_384.f2)) >= func_42(func_47(p_38, p_37, g_237.f2, (((safe_rshift_func_int8_t_s_u(0x96L, 1)) != (safe_mod_func_uint64_t_u_u((p_37 && 0x79238BF043807441LL), func_42(func_47(l_436, (((void*)0 != l_437) >= p_37), g_295.f1, p_37), l_436, &l_407[0][7], p_38)))) || g_422)), p_38, g_14[1], p_38)) <= g_121);

                ;
                if ((((func_42(&g_15, l_407[0][1], &g_15, p_38) || g_24) > (safe_lshift_func_uint16_t_u_u((((func_42(&g_15, l_351, &g_15, l_436) >= 7UL) > g_237.f2) & p_37), 7))) == 0xF45786106C9B8850LL))
                {
                    int **l_440[6][8][5] = {{{&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}}, {{&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}}, {{&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}}, {{&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}}, {{&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}}, {{&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}, {&l_393, &l_407[0][6], &l_393, &g_15, (void*)0}}};
                    int i, j, k;
                    return &g_15;


                }
                else
                {
                    short l_444 = 1L;
                    if ((*p_38))
                    {
                        long long l_441[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_441[i] = 4L;
                        if (l_441[1])
                            break;
                        return &g_15;


                    }
                    else
                    {
                        long long l_445[4][9][7] = {{{0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}}, {{0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}}, {{0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}}, {{0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}, {0L, 0L, 4L, 1L, 0x9A801F09C70BA9AFLL, 0x4EAB486E3620E710LL, 0x4A097852C8BA58FBLL}}};
                        int *l_446 = &g_3;
                        int i, j, k;
                        (*l_436) = ((l_442 != (void*)0) != ((((p_37 | (safe_unary_minus_func_int8_t_s(g_241.f2))) || g_422) > l_444) | func_42(&l_407[0][7], p_38, func_47(l_407[0][7], l_445[0][5][4], g_238[0].f2, g_294.f1), l_446)));
                    }
                }
                l_343 = l_407[0][5];

                ;
            }
        }
        return l_430;


    }
    else
    {
        return l_430;


    }
}







static unsigned long long func_42(int ** p_43, int * p_44, int ** p_45, int * p_46)
{
    return g_278.f1;
}







static int ** func_47(int * p_48, char p_49, int p_50, int p_51)
{
    int *l_311 = &g_298.f2;
    int **l_312 = &g_15;
    (*l_312) = l_311;

    ;
    (*l_312) = (*l_312);
    return &g_15;


}







static int * func_52(int ** p_53, unsigned long long p_54, unsigned p_55)
{
    char l_205 = (-1L);
    int **l_210 = &g_15;
    int l_214 = 0L;
    unsigned short l_215 = 0xE44EL;
    unsigned char l_216 = 255UL;
    int *l_274 = &l_214;
    union U0 *l_281 = (void*)0;
    union U0 **l_280 = &l_281;
    for (g_121 = 19; (g_121 > 17); g_121 = safe_sub_func_int16_t_s_s(g_121, 7))
    {
        int ***l_198 = &g_14[1];
        int *l_213 = &g_87;
        for (p_55 = 7; (p_55 <= 23); p_55++)
        {
            unsigned long long l_194 = 5UL;
            int *l_197 = &g_87;
            for (p_54 = 0; (p_54 > 46); p_54 = safe_add_func_int16_t_s_s(p_54, 5))
            {
                int *l_189 = &g_24;
                return l_189;


            }
            (*l_197) = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_3, ((0UL >= l_194) ^ 0x7621L))), ((**p_53) ^ (safe_lshift_func_int16_t_s_u(l_194, 8)))));
            return l_197;


        }
        (*l_198) = (void*)0;
        (*l_213) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((p_54 & l_205) < (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(g_121, l_205)), (l_210 == p_53)))), (g_121 > (safe_lshift_func_uint8_t_u_u(0x0AL, 3))))), 12)), p_55));
        if ((*g_15))
            continue;
    }
    if ((**l_210))
    {
        short l_232 = 0x5C11L;
        int *l_242 = (void*)0;
        int l_254 = 1L;
        union U0 *l_277[6] = {&g_278, &g_278, (void*)0, &g_278, &g_278, (void*)0};
        union U0 **l_276 = &l_277[5];
        union U0 ***l_275[1][6][7] = {{{(void*)0, &l_276, &l_276, &l_276, (void*)0, &l_276, (void*)0}, {(void*)0, &l_276, &l_276, &l_276, (void*)0, &l_276, (void*)0}, {(void*)0, &l_276, &l_276, &l_276, (void*)0, &l_276, (void*)0}, {(void*)0, &l_276, &l_276, &l_276, (void*)0, &l_276, (void*)0}, {(void*)0, &l_276, &l_276, &l_276, (void*)0, &l_276, (void*)0}, {(void*)0, &l_276, &l_276, &l_276, (void*)0, &l_276, (void*)0}}};
        int i, j, k;
        l_214 = (g_87 <= (~(**p_53)));
        if (((*p_53) == (*l_210)))
        {
            unsigned short l_217 = 65535UL;
lbl_227:
            if (((**l_210) < l_215))
            {
                l_217 = l_216;
            }
            else
            {
                int *l_226 = &g_87;
                for (l_216 = 0; (l_216 >= 58); l_216 = safe_add_func_int64_t_s_s(l_216, 8))
                {
                    for (p_54 = 8; (p_54 > 38); p_54 = safe_add_func_uint32_t_u_u(p_54, 1))
                    {
                        int *l_222 = &g_87;
                        (*l_222) = l_217;
                        (*l_222) = (**l_210);
                    }
                    if (l_217)
                        continue;
                    for (l_217 = 0; (l_217 <= 2); l_217 += 1)
                    {
                        int l_223 = 0x194C20FCL;
                        int i;
                        l_223 = 0x563B7CE2L;
                    }
                }
                if (p_55)
                    goto lbl_227;
                (*l_226) = (safe_lshift_func_int16_t_s_u(((**p_53) && g_21), g_21));
            }
            for (p_54 = (-1); (p_54 == 58); p_54 = safe_add_func_int8_t_s_s(p_54, 5))
            {
                if ((**l_210))
                    break;
            }
        }
        else
        {
            int *l_246 = &g_21;
            int *l_271 = &g_241.f2;
            for (l_214 = 0; (l_214 == 25); ++l_214)
            {
                union U0 *l_240 = &g_241;
                int l_260[9][9][1] = {{{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}, {{0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}, {0xAE7E2266L}}};
                int ***l_270 = &l_210;
                int i, j, k;
            }
            l_242 = (*l_210);


            (*l_271) = (**p_53);
            for (l_232 = (-23); (l_232 != 29); ++l_232)
            {
                return (*p_53);


            }
        }


        l_280 = (void*)0;

        ;
        (*l_274) = (**p_53);
    }
    else
    {
        int l_282[4][6] = {{0x0C7559ADL, (-1L), 1L, (-8L), (-1L), 7L}, {0x0C7559ADL, (-1L), 1L, (-8L), (-1L), 7L}, {0x0C7559ADL, (-1L), 1L, (-8L), (-1L), 7L}, {0x0C7559ADL, (-1L), 1L, (-8L), (-1L), 7L}};
        int *l_286 = &l_214;
        union U0 *l_297 = &g_298;
        int *l_299 = (void*)0;
        char l_300 = (-1L);
        int l_310 = 4L;
        int i, j;
        if (l_282[0][4])
        {
            unsigned l_285 = 0x496B0659L;
            int **l_292 = &g_15;
            l_285 = ((safe_add_func_uint16_t_u_u((**l_210), (0x8DL && p_54))) <= (**l_210));
            l_286 = (*p_53);


            if (l_215)
                goto lbl_309;
            (*l_274) = 0xF94E7593L;
            (*l_274) = (safe_mod_func_uint8_t_u_u(((~g_237.f1) != ((*l_274) <= (safe_rshift_func_uint8_t_u_u((g_278.f2 && p_54), (*l_286))))), (safe_unary_minus_func_int8_t_s(((void*)0 != l_292)))));
        }
        else
        {
            union U0 *l_293[3][4] = {{&g_294, &g_295, &g_294, &g_295}, {&g_294, &g_295, &g_294, &g_295}, {&g_294, &g_295, &g_294, &g_295}};
            int *l_308 = &g_239[0][2].f2;
            int i, j;
            (*l_274) = (g_238[0].f2 != (l_293[1][3] != l_297));
            (*p_53) = l_299;

            ;
            if (l_300)
            {
                for (g_279.f1 = (-10); (g_279.f1 > 13); g_279.f1++)
                {
                    for (l_215 = 0; (l_215 > 31); l_215++)
                    {
                        return (*l_210);


                    }
                }
            }
            else
            {
                int l_307 = (-9L);
                if ((safe_lshift_func_uint8_t_u_u(l_307, ((void*)0 == &p_53))))
                {
                    (*l_210) = l_308;

                    ;
                    for (g_296.f2 = 2; (g_296.f2 >= 0); g_296.f2 -= 1)
                    {
                        (*l_286) = (**p_53);
                    }
                }
                else
                {
                    return (*p_53);


                }

                ;
                (*g_15) = ((*l_308) < p_55);
                return (*p_53);


            }
            (*l_280) = (void*)0;
        }



lbl_309:
        (*p_53) = (void*)0;

        ;
        l_310 = (l_299 == (*l_210));
        (*l_210) = (*l_210);
    }


    ;
    return (*p_53);


}







static int ** func_56(short p_57, int ** p_58, unsigned short p_59, int ** p_60, unsigned p_61)
{
    unsigned char l_85 = 4UL;
    int ***l_129 = &g_14[1];
    int l_133 = 8L;
    unsigned char l_173 = 0xF8L;
    int *l_181[8];
    unsigned long long l_182 = 18446744073709551611UL;
    int i;
    for (i = 0; i < 8; i++)
        l_181[i] = &g_87;
    return p_60;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_236.f0, "g_236.f0", print_hash_value);
    transparent_crc(g_236.f1, "g_236.f1", print_hash_value);
    transparent_crc(g_236.f2, "g_236.f2", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_237.f2, "g_237.f2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_238[i].f0, "g_238[i].f0", print_hash_value);
        transparent_crc(g_238[i].f1, "g_238[i].f1", print_hash_value);
        transparent_crc(g_238[i].f2, "g_238[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_239[i][j].f0, "g_239[i][j].f0", print_hash_value);
            transparent_crc(g_239[i][j].f1, "g_239[i][j].f1", print_hash_value);
            transparent_crc(g_239[i][j].f2, "g_239[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_241.f0, "g_241.f0", print_hash_value);
    transparent_crc(g_241.f1, "g_241.f1", print_hash_value);
    transparent_crc(g_241.f2, "g_241.f2", print_hash_value);
    transparent_crc(g_278.f0, "g_278.f0", print_hash_value);
    transparent_crc(g_278.f1, "g_278.f1", print_hash_value);
    transparent_crc(g_278.f2, "g_278.f2", print_hash_value);
    transparent_crc(g_279.f0, "g_279.f0", print_hash_value);
    transparent_crc(g_279.f1, "g_279.f1", print_hash_value);
    transparent_crc(g_279.f2, "g_279.f2", print_hash_value);
    transparent_crc(g_294.f0, "g_294.f0", print_hash_value);
    transparent_crc(g_294.f1, "g_294.f1", print_hash_value);
    transparent_crc(g_294.f2, "g_294.f2", print_hash_value);
    transparent_crc(g_295.f0, "g_295.f0", print_hash_value);
    transparent_crc(g_295.f1, "g_295.f1", print_hash_value);
    transparent_crc(g_295.f2, "g_295.f2", print_hash_value);
    transparent_crc(g_296.f0, "g_296.f0", print_hash_value);
    transparent_crc(g_296.f1, "g_296.f1", print_hash_value);
    transparent_crc(g_296.f2, "g_296.f2", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f1, "g_298.f1", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_366[i][j][k].f0, "g_366[i][j][k].f0", print_hash_value);
                transparent_crc(g_366[i][j][k].f1, "g_366[i][j][k].f1", print_hash_value);
                transparent_crc(g_366[i][j][k].f2, "g_366[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_384.f0, "g_384.f0", print_hash_value);
    transparent_crc(g_384.f1, "g_384.f1", print_hash_value);
    transparent_crc(g_384.f2, "g_384.f2", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_607[i][j][k], "g_607[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_621[i][j][k], "g_621[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_628, "g_628", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_724[i][j][k], "g_724[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
