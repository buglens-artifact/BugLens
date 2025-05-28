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
   unsigned f0;
   unsigned f1 : 1;
   long long f2;
   int f3;
   unsigned char f4;
   int f5;
   unsigned long long f6;
   char f7;
   int f8;
};


static int g_3 = 1L;
static unsigned char g_7 = 4UL;
static int g_46 = 0xEE1D35EEL;
static int g_51 = 0xC48AE5B1L;
static unsigned short g_52 = 0UL;
static unsigned char g_111 = 0x2AL;
static int g_112 = 0L;
static unsigned char g_126 = 0xC3L;
static unsigned g_131 = 0xC269514AL;
static long long g_139 = 0L;
static int g_146 = 0L;
static long long g_174[6][2] = {{6L,6L},{6L,6L},{6L,6L},{6L,6L},{6L,6L},{6L,6L}};
static char g_175 = (-10L);
static int g_177 = 0x61B32DCAL;
static unsigned g_179 = 1UL;
static char g_197 = (-7L);
static long long g_249 = 0x1C1D8338CC7A9075LL;
static char g_250[3] = {0x83L,0x83L,0x83L};
static unsigned g_251 = 0x9C83E0C9L;
static short g_275 = 0x2B36L;
static unsigned long long g_276 = 8UL;
static struct S0 g_301 = {0UL,0,0x01A78B9F14CE7F40LL,0x8CC03F76L,0x67L,0x422D3240L,0x2EEA0C97CF48B9D1LL,1L,0x89688EA0L};
static unsigned long long g_308 = 0x1034903E4FB4587ALL;
static short g_335 = (-5L);
static int g_337 = 0x3C35E153L;
static unsigned g_339 = 0UL;
static char g_361[10] = {0x32L,0xBCL,0x32L,0xBCL,0x32L,0xBCL,0x32L,0xBCL,0x32L,0xBCL};
static unsigned char g_362 = 0xDEL;
static int g_419 = (-1L);
static struct S0 g_451[4][1] = {{{0xFB3C2A42L,0,0x8D4158D25C6EDAE6LL,0x73DC524EL,255UL,0L,8UL,8L,0xB6CB277DL}},{{0xFB3C2A42L,0,0x8D4158D25C6EDAE6LL,0x73DC524EL,255UL,0L,8UL,8L,0xB6CB277DL}},{{0xFB3C2A42L,0,0x8D4158D25C6EDAE6LL,0x73DC524EL,255UL,0L,8UL,8L,0xB6CB277DL}},{{0xFB3C2A42L,0,0x8D4158D25C6EDAE6LL,0x73DC524EL,255UL,0L,8UL,8L,0xB6CB277DL}}};
static unsigned short g_485[1][1] = {{0xBD16L}};
static struct S0 g_604 = {18446744073709551615UL,0,0x9DD06C94D625CA1ELL,1L,249UL,0x56A85F7AL,0UL,5L,0xA11EED2BL};
static long long g_635 = (-8L);
static int g_636[5][9] = {{(-7L),(-1L),0x6576FE42L,(-1L),(-1L),(-1L),0x6576FE42L,(-1L),(-7L)},{0xDBDEFF60L,1L,0x6AFC0FAAL,(-10L),1L,(-10L),0x6AFC0FAAL,0x6AFC0FAAL,0x05665BC6L},{(-1L),0x6576FE42L,0x4F93F205L,(-1L),0x6576FE42L,(-1L),0x4F93F205L,0x6576FE42L,(-1L)},{0x05665BC6L,0x6AFC0FAAL,0xE6033CCDL,(-1L),0x6AFC0FAAL,(-1L),0xE6033CCDL,0x6AFC0FAAL,0x05665BC6L},{(-1L),0x6576FE42L,0x4F93F205L,(-1L),0x6576FE42L,(-1L),0x4F93F205L,0x6576FE42L,(-1L)}};
static unsigned long long g_659 = 0x9F5C67D95A0ECF13LL;
static long long g_727 = 0x4077CCA2253A435DLL;
static unsigned g_728 = 0x57EA7D86L;
static unsigned short g_743 = 0x0FE8L;
static unsigned g_784 = 4294967295UL;
static unsigned g_801 = 0xA8C69798L;
static long long g_883 = 0xF096CE789C5AFF38LL;
static short g_884 = 0xC670L;
static unsigned long long g_885 = 1UL;
static short g_906 = (-10L);
static int g_934 = 6L;
static char g_954[4][8] = {{0L,6L,0L,0L,6L,0L,0L,6L},{6L,0L,0L,6L,0L,0L,6L,0L},{6L,6L,0x0BL,6L,6L,0x0BL,6L,6L},{0L,6L,0L,0L,6L,0L,0L,6L}};
static char g_986 = 0x32L;
static long long g_1012 = 5L;
static unsigned char g_1013 = 0x2CL;
static long long g_1016 = 0L;
static unsigned char g_1103 = 255UL;
static short g_1123 = 0x9A14L;
static unsigned short g_1149 = 6UL;
static unsigned long long g_1198 = 0UL;
static int g_1200 = (-7L);
static long long g_1305[5][10] = {{0xAE125C5343372044LL,(-1L),(-1L),0xAE125C5343372044LL,1L,0xB110D148F8343A74LL,0L,1L,0x1B9EA771C68386EBLL,1L},{(-1L),0x83F86A3E1ED03056LL,0L,1L,0L,0x83F86A3E1ED03056LL,(-1L),0L,0x1B9EA771C68386EBLL,(-10L)},{0L,0xB110D148F8343A74LL,1L,0xAE125C5343372044LL,(-1L),(-1L),0xAE125C5343372044LL,1L,0xB110D148F8343A74LL,0L},{(-10L),0xB110D148F8343A74LL,0x1B9EA771C68386EBLL,0x20D7750501FAEB8ALL,0L,0xAE125C5343372044LL,(-10L),0xAE125C5343372044LL,0L,(-10L)},{(-10L),0x20D7750501FAEB8ALL,(-10L),(-1L),0L,0xB110D148F8343A74LL,0x83F86A3E1ED03056LL,1L,1L,0x83F86A3E1ED03056LL}};
static unsigned g_1415 = 0x12471408L;
static unsigned g_1417 = 0xD99C8911L;
static unsigned short g_1459 = 65535UL;
static unsigned short g_1533[10] = {0x8E5AL,0UL,0x8E5AL,0UL,0x8E5AL,0UL,0x8E5AL,0UL,0x8E5AL,0UL};
static short g_1558 = 3L;
static unsigned g_1559 = 0x1AEEBBD1L;
static unsigned g_1609 = 1UL;
static int g_1610 = 0x9F428A0CL;
static unsigned g_1674 = 18446744073709551615UL;
static short g_1830 = 8L;
static unsigned char g_1832[8][3] = {{0x1CL,255UL,0xCEL},{0x37L,0x37L,0x88L},{0x1CL,0x88L,255UL},{255UL,0x88L,0x1CL},{0x88L,0x37L,0x37L},{0xCEL,255UL,0x1CL},{0x35L,246UL,255UL},{0x35L,7UL,0x88L}};
static long long g_1869 = (-1L);
static unsigned g_1873 = 0UL;
static unsigned char g_1876 = 248UL;
static short g_1916[6][9] = {{0L,0xE347L,0x6F36L,0x0EB7L,0x6F36L,0xE347L,0L,0xE347L,0x6F36L},{0xB4F1L,0x545CL,0x545CL,0xB4F1L,0L,0x545CL,1L,0L,0L},{0x6C87L,0xE347L,0L,0x0EB7L,0L,0xE347L,0x6C87L,0xE347L,0L},{0xB4F1L,0L,0x545CL,1L,0L,0L,1L,0x545CL,0L},{0L,0xE347L,0x6F36L,0x0EB7L,0x6F36L,0xE347L,0L,0xE347L,0x6F36L},{0xB4F1L,1L,1L,0L,0x7FE4L,1L,0x545CL,0x7FE4L,0x7FE4L}};
static unsigned long long g_1917 = 18446744073709551608UL;
static unsigned long long g_1936 = 18446744073709551614UL;
static char g_1993[9][7] = {{5L,2L,0L,0x01L,4L,0L,0x01L},{1L,0L,0xA7L,4L,(-1L),2L,2L},{(-1L),5L,0L,5L,(-1L),(-9L),0x50L},{(-5L),2L,4L,0x50L,4L,2L,(-5L)},{0xA7L,(-5L),2L,4L,0x50L,4L,2L},{(-5L),0x50L,(-9L),(-1L),5L,0L,5L},{(-1L),2L,2L,(-1L),4L,0xA7L,0L},{1L,0x01L,0L,4L,0x01L,0L,2L},{5L,0x01L,0L,0x50L,0L,0L,0L}};
static unsigned char g_1994 = 0x05L;
static short g_2012 = 0x0964L;
static unsigned short g_2110 = 0xFEC9L;
static int g_2114 = (-1L);
static unsigned long long g_2118 = 0xC663332758926ECALL;
static unsigned char g_2187 = 9UL;
static short g_2237[9][5][4] = {{{1L,7L,7L,1L},{7L,1L,0x50DEL,0L},{7L,0x50DEL,7L,0x89BFL},{1L,0L,0x89BFL,0x89BFL},{0x50DEL,0x50DEL,(-8L),0L}},{{0L,1L,(-8L),1L},{(-8L),1L,0L,0x89BFL},{(-1L),1L,1L,(-1L)},{1L,(-1L),(-8L),7L},{1L,(-8L),1L,0L}},{{(-1L),7L,0L,0L},{(-8L),(-8L),0x89BFL,7L},{7L,(-1L),0x89BFL,(-1L)},{(-8L),1L,0L,0x89BFL},{(-1L),1L,1L,(-1L)}},{{1L,(-1L),(-8L),7L},{1L,(-8L),1L,0L},{(-1L),7L,0L,0L},{(-8L),(-8L),0x89BFL,7L},{7L,(-1L),0x89BFL,(-1L)}},{{(-8L),1L,0L,0x89BFL},{(-1L),1L,1L,(-1L)},{1L,(-1L),(-8L),7L},{1L,(-8L),1L,0L},{(-1L),7L,0L,0L}},{{(-8L),(-8L),0x89BFL,7L},{7L,(-1L),0x89BFL,(-1L)},{(-8L),1L,0L,0x89BFL},{(-1L),1L,1L,(-1L)},{1L,(-1L),(-8L),0x89BFL}},{{0L,(-1L),0L,(-8L)},{7L,0x89BFL,(-8L),(-8L)},{(-1L),(-1L),0x50DEL,0x89BFL},{0x89BFL,7L,0x50DEL,7L},{(-1L),0L,(-8L),0x50DEL}},{{7L,0L,0L,7L},{0L,7L,(-1L),0x89BFL},{0L,(-1L),0L,(-8L)},{7L,0x89BFL,(-8L),(-8L)},{(-1L),(-1L),0x50DEL,0x89BFL}},{{0x89BFL,7L,0x50DEL,7L},{(-1L),0L,(-8L),0x50DEL},{7L,0L,0L,7L},{0L,7L,(-1L),0x89BFL},{0L,(-1L),0L,(-8L)}}};
static unsigned short g_2238 = 0x1C19L;
static long long g_2300 = 0x575542ED5AEC2C04LL;
static unsigned g_2301 = 1UL;
static short g_2410 = 0xAB05L;
static short g_2411 = 1L;
static unsigned short g_2413 = 0x9ACEL;
static short g_2429 = 0xB3ABL;
static long long g_2431[3] = {0x4A270C91F9636FA0LL,0x4A270C91F9636FA0LL,0x4A270C91F9636FA0LL};
static unsigned long long g_2436 = 18446744073709551615UL;
static int g_2460 = 0x1F4ECE1DL;
static int g_2461 = (-3L);
static short g_2462 = 0x72D4L;
static short g_2463 = (-1L);
static unsigned char g_2464 = 254UL;
static char g_2468 = 0xE7L;
static int g_2469[3][10][8] = {{{(-1L),(-1L),0x0E6E42ADL,7L,(-1L),5L,(-10L),0x9D78492DL},{(-1L),0xFE16F30BL,(-10L),8L,(-10L),0xFE16F30BL,(-1L),0x8D013F6FL},{0x76989875L,(-1L),0xB960CAB3L,2L,3L,0xBFA95B2BL,1L,0xC4F1D605L},{1L,0x3ED05CF7L,0xC4F1D605L,(-1L),3L,(-1L),(-1L),8L},{(-1L),0xAD5A5F32L,1L,0xCD832BE4L,8L,(-1L),0x15B2CF9DL,0x8D013F6FL},{3L,(-1L),(-1L),6L,(-10L),(-1L),(-1L),0x7DA3237EL},{0x7DA3237EL,0x417E11A7L,(-1L),(-1L),0xD9E32C19L,3L,5L,0x53DEEA01L},{0xD0457A44L,(-1L),(-1L),0L,3L,0xA936E5EAL,0L,0x221A5A38L},{0L,(-1L),0x0E6E42ADL,(-1L),0xA259CDA8L,1L,1L,(-1L)},{0xC1F51FECL,0x7DA3237EL,0x8D013F6FL,3L,0xAD5A5F32L,0x9D902B26L,(-1L),(-1L)}},{{0x032B20FDL,6L,1L,1L,6L,0x032B20FDL,0x3ED05CF7L,1L},{(-1L),0L,(-1L),0x53DEEA01L,0xC42A58B8L,(-10L),7L,6L},{(-1L),2L,(-7L),0x53DEEA01L,0xC4F1D605L,(-1L),0x2715D12DL,1L},{(-1L),0xC4F1D605L,0x9D902B26L,1L,(-1L),0x49FFE04CL,(-1L),(-1L)},{0x3F3ABE08L,0xE451AA7EL,0xC4F1D605L,3L,1L,2L,0L,(-1L)},{0L,(-10L),0x2715D12DL,(-1L),0x53DEEA01L,0xAD5A5F32L,(-1L),(-10L)},{(-1L),0xC42A58B8L,(-1L),(-1L),0L,1L,0x49FFE04CL,0x417E11A7L},{2L,0xA936E5EAL,1L,(-1L),(-1L),0x0E6E42ADL,7L,(-1L)},{0x94E4AAB7L,(-10L),0xB960CAB3L,0x15B2CF9DL,(-10L),(-1L),0xC4F1D605L,(-1L)},{6L,2L,0xB5805980L,2L,6L,0L,1L,(-1L)}},{{(-10L),0xB5805980L,(-7L),1L,0L,0xCD832BE4L,0x417E11A7L,2L},{0x15B2CF9DL,0x9D902B26L,(-7L),0L,0x9D78492DL,2L,1L,0xC4F1D605L},{0L,(-1L),0xB5805980L,(-1L),(-1L),0x8D013F6FL,0xC4F1D605L,(-1L)},{0x0E6E42ADL,1L,0xB960CAB3L,0x221A5A38L,0x3F3ABE08L,0x7DA3237EL,7L,(-1L)},{0xD0457A44L,0x0E6E42ADL,1L,0x94E4AAB7L,0x76989875L,0x53DEEA01L,0x49FFE04CL,(-1L)},{(-1L),0xC1F51FECL,(-1L),0xB960CAB3L,(-4L),0x221A5A38L,(-1L),(-1L)},{(-7L),(-1L),(-10L),0xD9E32C19L,6L,(-1L),0xB5805980L,8L},{0x7DA3237EL,0x8D013F6FL,3L,0xAD5A5F32L,0x9D902B26L,(-1L),(-1L),0xEFCDF892L},{(-1L),0x53DEEA01L,0x53DEEA01L,(-1L),(-1L),0L,0x9D78492DL,0xA936E5EAL},{0L,0xD9E32C19L,0xA259CDA8L,(-1L),(-1L),(-1L),0x221A5A38L,(-4L)}}};
static char g_2503 = 0L;
static int g_2508 = 1L;
static unsigned char g_2551 = 246UL;



static unsigned func_1(void);
static unsigned func_14(struct S0 p_15, short p_16);
static unsigned long long func_31(char p_32);
static unsigned long long func_36(unsigned short p_37, struct S0 p_38, unsigned long long p_39, struct S0 p_40);
static struct S0 func_42(struct S0 p_43);
static struct S0 func_44(short p_45);
static char func_47(char p_48);
static char func_60(int p_61, unsigned p_62);
static char func_66(unsigned short p_67, unsigned p_68, char p_69, char p_70, char p_71);
static char func_72(long long p_73, long long p_74);
static unsigned func_1(void)
{
    unsigned l_2[7][9][4] = {{{1UL,9UL,1UL,0x27213EC7L},{18446744073709551613UL,18446744073709551612UL,1UL,18446744073709551607UL},{1UL,18446744073709551613UL,9UL,7UL},{0UL,0x04822B16L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x04822B16L,0UL},{7UL,9UL,18446744073709551613UL,1UL},{18446744073709551607UL,1UL,18446744073709551612UL,18446744073709551613UL},{0x27213EC7L,1UL,9UL,1UL},{1UL,9UL,0x27213EC7L,0UL}},{{0x2F67D50FL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0x662A2B3BL,0x04822B16L,1UL,7UL},{0UL,18446744073709551613UL,9UL,18446744073709551607UL},{18446744073709551615UL,18446744073709551612UL,2UL,0x27213EC7L},{18446744073709551615UL,9UL,9UL,1UL},{0UL,0x27213EC7L,1UL,0x2F67D50FL},{0x662A2B3BL,18446744073709551615UL,18446744073709551615UL,0x662A2B3BL},{0x2F67D50FL,1UL,0x27213EC7L,0UL},{1UL,9UL,9UL,18446744073709551615UL}},{{0x27213EC7L,2UL,18446744073709551612UL,18446744073709551615UL},{18446744073709551607UL,9UL,7UL,1UL},{18446744073709551615UL,0xBEDEDB5CL,0UL,9UL},{18446744073709551607UL,9UL,18446744073709551607UL,0UL},{2UL,18446744073709551615UL,9UL,0xD3740063L},{0xBEDEDB5CL,0x04822B16L,0xD3740063L,18446744073709551615UL},{7UL,1UL,0xD3740063L,0x2F67D50FL},{0xBEDEDB5CL,7UL,9UL,18446744073709551615UL},{2UL,0UL,18446744073709551607UL,18446744073709551607UL}},{{18446744073709551607UL,18446744073709551607UL,0UL,2UL},{18446744073709551615UL,9UL,7UL,0xBEDEDB5CL},{0x2F67D50FL,0xD3740063L,1UL,7UL},{18446744073709551615UL,0xD3740063L,0x04822B16L,0xBEDEDB5CL},{0xD3740063L,9UL,18446744073709551615UL,2UL},{0UL,18446744073709551607UL,9UL,18446744073709551607UL},{9UL,0UL,0xBEDEDB5CL,18446744073709551615UL},{1UL,7UL,18446744073709551615UL,0x2F67D50FL},{9UL,1UL,0x27213EC7L,18446744073709551615UL}},{{9UL,0x04822B16L,18446744073709551615UL,0xD3740063L},{1UL,18446744073709551615UL,0xBEDEDB5CL,0UL},{9UL,9UL,9UL,9UL},{0UL,0xBEDEDB5CL,18446744073709551615UL,1UL},{0xD3740063L,18446744073709551615UL,0x04822B16L,9UL},{18446744073709551615UL,0x27213EC7L,1UL,9UL},{0x2F67D50FL,18446744073709551615UL,7UL,1UL},{18446744073709551615UL,18446744073709551615UL,2UL,0xBEDEDB5CL},{18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551613UL}},{{18446744073709551615UL,0x2F67D50FL,18446744073709551612UL,0UL},{18446744073709551615UL,0UL,0UL,0x2F67D50FL},{9UL,0x04822B16L,0UL,0x11F07B4BL},{18446744073709551615UL,9UL,18446744073709551612UL,9UL},{18446744073709551615UL,2UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,2UL,18446744073709551615UL},{9UL,18446744073709551612UL,9UL,18446744073709551615UL},{0x11F07B4BL,0UL,0x04822B16L,9UL},{0x2F67D50FL,0UL,0UL,18446744073709551615UL}},{{0UL,18446744073709551612UL,0x2F67D50FL,18446744073709551615UL},{18446744073709551613UL,18446744073709551615UL,0UL,18446744073709551615UL},{0xBEDEDB5CL,2UL,18446744073709551615UL,9UL},{0x27213EC7L,9UL,1UL,0x11F07B4BL},{0UL,0x04822B16L,18446744073709551607UL,0x2F67D50FL},{0UL,0UL,1UL,0UL},{0x27213EC7L,0x2F67D50FL,18446744073709551615UL,18446744073709551613UL},{0xBEDEDB5CL,0UL,0UL,0xBEDEDB5CL},{18446744073709551613UL,18446744073709551615UL,0x2F67D50FL,0x27213EC7L}}};
    struct S0 l_17 = {0UL,0,5L,-1L,248UL,0xF7C2F5A2L,0x0DF39281C1D99EA5LL,0L,-1L};
    unsigned short l_2279 = 65531UL;
    struct S0 l_2332[8] = {{0x64A1B41FL,0,0x29F2DB053F5E9E64LL,0x3285BF18L,0x21L,0x67715EE0L,0UL,0xF7L,0x2FF3E099L},{1UL,0,-1L,0xED3416FBL,0x8AL,3L,0xD6DA1B12C1214802LL,0L,0xC3B263C4L},{1UL,0,-1L,0xED3416FBL,0x8AL,3L,0xD6DA1B12C1214802LL,0L,0xC3B263C4L},{0x64A1B41FL,0,0x29F2DB053F5E9E64LL,0x3285BF18L,0x21L,0x67715EE0L,0UL,0xF7L,0x2FF3E099L},{1UL,0,-1L,0xED3416FBL,0x8AL,3L,0xD6DA1B12C1214802LL,0L,0xC3B263C4L},{1UL,0,-1L,0xED3416FBL,0x8AL,3L,0xD6DA1B12C1214802LL,0L,0xC3B263C4L},{0x64A1B41FL,0,0x29F2DB053F5E9E64LL,0x3285BF18L,0x21L,0x67715EE0L,0UL,0xF7L,0x2FF3E099L},{1UL,0,-1L,0xED3416FBL,0x8AL,3L,0xD6DA1B12C1214802LL,0L,0xC3B263C4L}};
    unsigned char l_2365 = 1UL;
    short l_2382 = 0xD4B8L;
    int l_2385 = 0xFE2047E0L;
    char l_2404 = 0x70L;
    long long l_2432[8][1][10] = {{{0xE0F3894C1F6BFF47LL,0xE0F3894C1F6BFF47LL,(-1L),0xA58F45283C700573LL,0xAD85E00178F1F42BLL,(-3L),1L,0x5F59F456E7B68137LL,(-1L),0x0AD00658ABCB274CLL}},{{0x7D54B7434E4E60BALL,0x29BCD8D3F1B2D74ELL,0L,(-1L),0x93638880B8EACD4FLL,1L,(-1L),(-3L),0x134A21636CA5E96ELL,0x7D54B7434E4E60BALL}},{{(-1L),0L,0x134A21636CA5E96ELL,0x93638880B8EACD4FLL,0x0AD00658ABCB274CLL,0x93638880B8EACD4FLL,0x134A21636CA5E96ELL,0L,(-1L),0L}},{{0x5E214C64479F018CLL,0x8C2A34A0E617A3C9LL,0x5F59F456E7B68137LL,0L,0xAD64C46BD8380ACDLL,0x5F59F456E7B68137LL,0x4E549275E4F8D459LL,0x7D54B7434E4E60BALL,0xA58F45283C700573LL,(-1L)}},{{0xAD64C46BD8380ACDLL,0x134A21636CA5E96ELL,1L,0L,0x93638880B8EACD4FLL,1L,0xAD64C46BD8380ACDLL,(-1L),(-1L),0xAD64C46BD8380ACDLL}},{{(-3L),0x7D54B7434E4E60BALL,0x93638880B8EACD4FLL,0x93638880B8EACD4FLL,0x7D54B7434E4E60BALL,(-3L),0x29BCD8D3F1B2D74ELL,0x5E214C64479F018CLL,0x134A21636CA5E96ELL,(-1L)}},{{0x4E549275E4F8D459LL,0x5E214C64479F018CLL,0x5F59F456E7B68137LL,(-1L),0x8C2A34A0E617A3C9LL,8L,0x0AD00658ABCB274CLL,0xAD64C46BD8380ACDLL,8L,(-1L)}},{{0x4E549275E4F8D459LL,0x134A21636CA5E96ELL,1L,0x4E549275E4F8D459LL,0xBF3EEE9F640BDDACLL,(-3L),(-1L),(-3L),0xBF3EEE9F640BDDACLL,0x4E549275E4F8D459LL}}};
    int l_2470 = 0x8B8C5FC2L;
    int l_2476[1][4][7] = {{{0xCE061FFBL,(-7L),(-7L),0xCE061FFBL,0L,1L,0L},{0xCE061FFBL,(-7L),(-7L),0xCE061FFBL,0L,1L,0L},{0xCE061FFBL,(-7L),(-7L),0xCE061FFBL,0L,1L,0L},{0xCE061FFBL,(-7L),(-7L),0x71513AD5L,0x276F2A36L,(-7L),0x276F2A36L}}};
    unsigned l_2531 = 0xAFB41FE7L;
    int i, j, k;
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    {
        char l_4 = 0x89L;
        int l_5 = 1L;
        int l_6 = 0xB6F9B691L;
        int l_2331 = (-1L);
        int l_2334 = 5L;
        struct S0 l_2339 = {18446744073709551606UL,0,-4L,0x8788910DL,8UL,0x2EE2B1DEL,6UL,0xBDL,-3L};
        unsigned char l_2456 = 0x03L;
        short l_2467 = 0L;
        int l_2471 = 8L;
        int l_2472 = 6L;
        int l_2475 = 0xDC76D682L;
        int l_2478 = 0L;
        int l_2479[7][2] = {{0x0B82856FL,8L},{(-9L),(-9L)},{8L,0x0B82856FL},{0xAB829022L,0x0B82856FL},{8L,(-9L)},{(-9L),8L},{0x0B82856FL,0xAB829022L}};
        unsigned long long l_2483[9] = {9UL,18446744073709551611UL,9UL,9UL,18446744073709551611UL,9UL,9UL,18446744073709551611UL,9UL};
        unsigned char l_2519[2];
        struct S0 l_2525 = {18446744073709551613UL,0,-3L,0x0E3C8D55L,0xB9L,0x415D63B4L,0x3FEF23D1611275BELL,0x5FL,0L};
        int l_2530 = 0x86C93012L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_2519[i] = 0UL;
        --g_7;
        for (l_6 = 3; (l_6 >= 0); l_6 -= 1)
        {
            short l_20 = (-6L);
            int l_2265 = 1L;
            struct S0 l_2282 = {0xD660F181L,0,0x14356E3F0E26A25ALL,0x55069097L,0x93L,0xBFB41CE0L,18446744073709551613UL,0x7DL,9L};
            int l_2299 = 0L;
            unsigned l_2433 = 18446744073709551615UL;
            int l_2492 = 0x0D652F3DL;
            if ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((func_14(l_17, (((+65534UL) | (safe_mod_func_int64_t_s_s(l_20, (safe_div_func_int32_t_s_s((g_1876 ^= ((((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_3 & ((safe_mod_func_uint16_t_u_u(g_7, (func_31(g_3) ^ g_3))) <= 0x9F12L)), 9)), g_1609)), g_419)) ^ g_1417) || g_175) || l_17.f5)), l_2[5][1][1]))))) >= l_4)) > 0x393D2CEBL), l_20)), 1L)))
            {
                unsigned l_2266[4][5][1] = {{{0UL},{4294967295UL},{0UL},{4294967295UL},{0UL}},{{4294967295UL},{0UL},{4294967295UL},{0UL},{4294967295UL}},{{0UL},{4294967295UL},{0UL},{4294967295UL},{0UL}},{{4294967295UL},{0UL},{4294967295UL},{0UL},{4294967295UL}}};
                unsigned char l_2271 = 8UL;
                int l_2274 = 1L;
                struct S0 l_2333 = {1UL,0,0x5B557241B9AD1495LL,3L,0x5EL,0x8B508846L,0UL,1L,-1L};
                int i, j, k;
                for (g_1149 = 0; (g_1149 <= 4); g_1149 += 1)
                {
                    char l_2264[2][8][6] = {{{0xC7L,0L,0L,0xC7L,0x10L,1L},{7L,0L,0x10L,7L,0x10L,0L},{1L,0L,1L,1L,0x10L,0x10L},{0xC7L,0L,0L,0xC7L,0x10L,1L},{7L,0L,0x10L,7L,0x10L,0L},{1L,0L,1L,1L,0x10L,0x10L},{0xC7L,0L,0L,0xC7L,0x10L,1L},{7L,0L,0x10L,7L,0x10L,0L}},{{1L,0L,(-1L),1L,0xBCL,0xBCL},{0x10L,0L,0L,0x10L,0xBCL,(-1L)},{0L,0L,0xBCL,0L,0xBCL,0L},{1L,0L,(-1L),1L,0xBCL,0xBCL},{0x10L,0L,0L,0x10L,0xBCL,(-1L)},{0L,0L,0xBCL,0L,0xBCL,0L},{1L,0L,(-1L),1L,0xBCL,0xBCL},{0x10L,0L,0L,0x10L,0xBCL,(-1L)}}};
                    int l_2269 = 1L;
                    int l_2270[10] = {0x0176DF7EL,0x7C6F1FDBL,0x7C6F1FDBL,0x0176DF7EL,0x7C6F1FDBL,0x7C6F1FDBL,0x0176DF7EL,0x7C6F1FDBL,0x7C6F1FDBL,0x0176DF7EL};
                    int i, j, k;
                    ++l_2266[2][3][0];
                    for (g_1459 = 0; (g_1459 <= 3); g_1459 += 1)
                    {
                        int i, j, k;
                        l_17.f3 = l_2[(g_1149 + 2)][g_1149][g_3];
                        l_2271++;
                        l_2274 = g_954[l_6][(l_6 + 4)];
                        g_451[3][0].f3 = (g_604.f5 == func_66((l_20 & func_72(l_17.f4, (0x44L == func_60(g_301.f1, (l_6 > ((safe_lshift_func_int16_t_s_s(((!g_451[3][0].f5) > (safe_add_func_uint32_t_u_u((l_17.f3 && (g_1305[(g_1459 + 1)][g_1459] = l_5)), 1UL))), 10)) | g_197)))))), l_2279, l_2264[0][1][0], g_1916[0][2], g_604.f3));
                    }
                    g_2114 ^= func_72((g_1305[(l_6 + 1)][(g_1149 + 5)] ^= func_60(l_2[l_6][(g_3 + 5)][g_3], g_954[g_3][(g_1149 + 2)])), g_954[l_6][g_1149]);
                    if (g_177)
                        break;
                }
                if ((safe_rshift_func_uint16_t_u_u(func_14(l_2282, ((safe_add_func_uint8_t_u_u(((g_1305[3][6] ^ (safe_rshift_func_int8_t_s_u((((g_301.f6 = g_1993[1][5]) >= (l_2274 = l_5)) >= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(g_604.f8, 5)), (0x2B60D90CL ^ (((safe_lshift_func_uint8_t_u_s((g_301.f7 != (l_2265 = g_2187)), (l_2299 |= (safe_lshift_func_uint8_t_u_s(((g_419 >= l_17.f7) < g_604.f1), 2))))) <= l_2266[2][3][0]) || g_7)))), g_111)) && 6L), g_884))), g_301.f5))) & g_1916[0][2]), g_2300)) || l_6)), g_2301)))
                {
                    unsigned short l_2312 = 9UL;
                    for (g_883 = 0; (g_883 <= 3); g_883 += 1)
                    {
                        int i, j, k;
                        g_2114 = ((safe_rshift_func_int8_t_s_s(func_72((~l_2[l_6][(g_883 + 1)][g_883]), (g_1305[g_3][(g_3 + 2)] = ((l_2[(l_6 + 3)][(l_6 + 4)][g_883] && 0x890704A9L) | (((g_1305[g_3][(l_6 + 5)] >= (safe_div_func_uint16_t_u_u(g_361[(l_6 + 6)], func_72((safe_mod_func_uint16_t_u_u((g_451[3][0].f8 <= (++g_52)), g_126)), l_2282.f1)))) <= l_2282.f2) > 0xA1111CD9E91B6123LL)))), 7)) == g_361[(l_6 + 6)]);
                    }
                    for (l_17.f0 = 0; (l_17.f0 <= 3); l_17.f0 += 1)
                    {
                        int i, j, k;
                        g_2114 = (7L <= func_36((safe_mod_func_int16_t_s_s((l_2[(l_6 + 3)][(l_6 + 5)][l_6] ^ g_954[g_3][(l_17.f0 + 3)]), (g_1533[1] |= (l_2312++)))), l_2282, (safe_mod_func_int8_t_s_s(g_954[g_3][(l_17.f0 + 3)], (safe_rshift_func_uint8_t_u_u(func_60((safe_div_func_int64_t_s_s(g_3, (safe_lshift_func_uint16_t_u_s(g_604.f7, 1)))), (g_451[3][0].f1 &= (((((safe_lshift_func_uint16_t_u_u(((g_2237[2][2][2] = (safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((0x287D282EL | 4294967295UL), 0x120DA2E7L)), 0x18L)), 0xEC41L))) < 65533UL), g_1936)) || 0xDD6BBCA57EF93BB0LL) ^ 1L) ^ l_6) != l_2282.f1))), l_2331)))), l_2332[2]));
                        l_2282 = l_2333;
                        return l_2334;
                    }
                    l_2282 = func_44(l_2312);
                    g_177 = ((safe_add_func_uint8_t_u_u(l_2282.f4, 0x4BL)) ^ 1UL);
                }
                else
                {
                    for (g_604.f7 = 0; (g_604.f7 <= 3); g_604.f7 += 1)
                    {
                        int i, j, k;
                        l_2339 = func_44((safe_lshift_func_int8_t_s_u(l_2[g_3][(g_3 + 4)][g_3], l_2[(g_604.f7 + 3)][(g_3 + 3)][g_3])));
                    }
                }
                if (g_2238)
                    break;
                return g_301.f7;
            }
            else
            {
                unsigned l_2354 = 18446744073709551611UL;
                int l_2364 = 0x7B815EE9L;
                char l_2381 = (-1L);
                unsigned l_2383 = 0xBAA03829L;
                struct S0 l_2384 = {0x0454707DL,0,1L,-10L,0xCCL,0L,0x734017EA376DD06ALL,1L,0x5A00D3CDL};
                int l_2407 = (-3L);
                int l_2412 = 5L;
                char l_2424 = 0xD7L;
                int l_2427 = 0xB9A77B2AL;
                for (g_2301 = 0; (g_2301 <= 3); g_2301 += 1)
                {
                    int i, j, k;
                    if (l_2[g_2301][(g_2301 + 5)][g_2301])
                        break;
                }
                if ((safe_div_func_uint8_t_u_u(l_17.f1, func_47(func_31((safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(g_954[0][7], (~(g_51 < (g_52 = g_7))))), (g_934 || (g_1610 | (safe_lshift_func_int8_t_s_s((-1L), ((safe_rshift_func_int8_t_s_s((l_17.f3 &= (safe_rshift_func_int16_t_s_u(func_66(((l_2332[2].f6 != (safe_lshift_func_uint16_t_u_s(func_66(l_2354, g_174[4][0], l_2354, l_2282.f8, l_2354), 3))) & g_131), g_175, l_2354, g_361[3], g_1533[3]), g_636[0][8]))), g_362)) | g_1200))))))))))))
                {
                    unsigned long long l_2363 = 0xF33108C9EE7A1AE2LL;
                    int l_2408 = 6L;
                    int l_2409 = (-1L);
                    g_451[3][0].f8 = ((safe_lshift_func_int16_t_s_u((g_743 || func_47((0xCF343CD1L >= func_14(g_451[3][0], ((safe_lshift_func_int16_t_s_s(func_72((g_883 &= g_1459), ((l_5 &= (l_2332[2].f4 > (g_728 > ((safe_sub_func_int16_t_s_s((func_72((safe_rshift_func_uint8_t_u_u((l_2364 |= (func_66(g_635, g_131, g_635, g_249, l_2363) == l_2282.f6)), 1)), l_2339.f6) & l_2365), 65535UL)) <= 0x2EL)))) < 0xB48A4C82L)), 10)) | 65528UL))))), g_1609)) & 0x94L);
                    if ((((l_2299 = (safe_sub_func_int16_t_s_s((g_1558 = ((g_1610 == ((safe_sub_func_int64_t_s_s(((safe_unary_minus_func_uint64_t_u((l_2331 = ((func_36(l_2339.f3, l_2339, (safe_div_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((func_36(l_2364, l_2282, l_17.f5, g_451[0][0]) && (l_2382 = ((func_66((((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((++g_301.f4), g_451[3][0].f7)) < l_2363), l_2363)) & 0xECL) > g_362), l_20, l_2381, l_2279, g_451[3][0].f2) & 0x767A3BE24AF6D022LL) | 1UL))), 0xE5E2DEF9L)) & 0xA0L), l_2383)), l_2384) && 0UL) | l_2385)))) && 0L), g_2187)) && l_2364)) >= l_2363)), 0x4FB3L))) & 255UL) < g_7))
                    {
                        int l_2386[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_2386[i] = 0xDFC47681L;
                        g_2114 = l_2386[4];
                    }
                    else
                    {
                        unsigned long long l_2397 = 18446744073709551615UL;
                        int l_2405 = 0x4CA53C52L;
                        int l_2406[2][1][7] = {{{(-1L),1L,(-1L),(-1L),1L,(-1L),(-1L)}},{{0x484EFA1EL,0x484EFA1EL,0x73D5C985L,0x484EFA1EL,0x484EFA1EL,0x73D5C985L,0x484EFA1EL}}};
                        int i, j, k;
                        g_451[3][0].f8 = ((safe_sub_func_int16_t_s_s((g_335 &= ((g_801 = (safe_rshift_func_uint16_t_u_u(l_2334, (safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s((l_2364 = (l_2363 > g_604.f8)), 254UL)), (safe_lshift_func_uint8_t_u_u((l_2397++), 6))))))) || g_885)), 1L)) < func_66((g_2238 = (safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((func_72(l_5, l_2363) | (-6L)), g_451[3][0].f8)) < 255UL), l_2331))), g_2114, l_2363, l_2384.f3, l_2404));
                        --g_2413;
                        g_146 = l_2406[0][0][5];
                        l_2384 = func_44(((g_801 = 0xF589615DL) && func_47((safe_div_func_uint8_t_u_u(((g_301.f4 || (func_14(func_44(((safe_sub_func_int8_t_s_s(g_175, (g_301.f7 = (g_604.f7 ^ (g_2411 = g_2237[3][4][2]))))) ^ ((l_6 < (g_1149 ^ 0xCDL)) == (safe_lshift_func_int8_t_s_s((-1L), 4))))), l_2339.f3) == g_1609)) >= 1L), 0x9EL)))));
                    }
                    l_2364 = (l_2299 >= (safe_add_func_int16_t_s_s(((g_361[7] |= (g_743 ^ l_2282.f2)) > l_2424), g_1558)));
                }
                else
                {
                    short l_2425 = 0x723AL;
                    int l_2426[9] = {0x7E8331BDL,0x7E8331BDL,0x7E8331BDL,0x7E8331BDL,0x7E8331BDL,0x7E8331BDL,0x7E8331BDL,0x7E8331BDL,0x7E8331BDL};
                    int i;
                    for (l_2412 = 0; (l_2412 <= 3); l_2412 += 1)
                    {
                        long long l_2428 = 0xA508459D8AAF875ALL;
                        int l_2430 = (-1L);
                        if (g_2110)
                            break;
                        g_2114 &= ((l_2364 = (((+g_1936) | (g_2118 |= func_31(l_2425))) < (g_2413 = 1UL))) < l_2384.f0);
                        l_2426[2] = g_728;
                        l_2433++;
                    }
                    for (l_2282.f3 = 0; (l_2282.f3 <= 2); l_2282.f3 += 1)
                    {
                        g_2436++;
                    }
                }
            }
            if ((l_2339.f3 = (1L != (safe_rshift_func_int8_t_s_u((g_335 <= l_2282.f0), 4)))))
            {
                unsigned l_2457[10] = {0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL,0x44AE0AECL};
                int l_2458 = 0L;
                int l_2473 = 3L;
                int l_2474 = 0x1A1AFF0CL;
                int l_2477[1][8] = {{0xB9429203L,0xB9429203L,0xB9429203L,0xB9429203L,0xB9429203L,0xB9429203L,0xB9429203L,0xB9429203L}};
                unsigned char l_2480[10][2][4] = {{{0x31L,0x1AL,0x90L,0xE6L},{1UL,6UL,6UL,1UL}},{{0xEAL,0x31L,0x01L,8UL},{0x01L,8UL,0xE8L,0x1AL}},{{0UL,0xA8L,1UL,0x1AL},{0x14L,8UL,0UL,8UL}},{{0x89L,0x31L,0x3BL,1UL},{0xE8L,6UL,0x14L,0xE6L}},{{0xA8L,0x1AL,0xE6L,0xE8L},{0xA8L,0xEAL,0x14L,0x14L}},{{0xE8L,0xE8L,0x3BL,0x90L},{0x89L,0x3BL,0UL,0x31L}},{{0x14L,0x01L,1UL,0UL},{0UL,0x01L,0xE8L,0x31L}},{{0x01L,0x3BL,0x01L,0x90L},{0xEAL,0xE8L,6UL,0x14L}},{{1UL,0xEAL,0x90L,0xE8L},{0x31L,0x1AL,0x90L,0xE6L}},{{1UL,6UL,6UL,1UL},{0xEAL,0x31L,0x01L,8UL}}};
                int i, j, k;
                if ((g_301.f3 = (safe_rshift_func_uint16_t_u_u(l_2282.f5, l_2282.f8))))
                {
                    short l_2445 = 9L;
                    int l_2459 = 0xB694AD86L;
                    g_301.f3 &= (safe_rshift_func_int8_t_s_s((g_728 & 0x664CL), (l_2445 >= g_139)));
                    g_451[3][0].f3 = (((l_2339.f7 != ((safe_lshift_func_int16_t_s_s(g_1559, func_72(g_934, l_2445))) > (safe_add_func_uint16_t_u_u(g_884, 0x49B1L)))) || ((((safe_mod_func_int8_t_s_s(g_2012, (safe_rshift_func_int8_t_s_u((l_2457[7] = ((safe_mod_func_int32_t_s_s((g_451[3][0].f8 = l_17.f5), l_2339.f7)) & l_2456)), g_339)))) ^ l_2365) & 0x79774240040767F2LL) && g_604.f8)) || g_139);
                    --g_2464;
                    for (l_2282.f0 = 0; (l_2282.f0 <= 0); l_2282.f0 += 1)
                    {
                        int i;
                        return g_2431[(l_2282.f0 + 1)];
                    }
                }
                else
                {
                    ++l_2480[9][0][3];
                }
            }
            else
            {
                l_2483[7]--;
                g_604 = g_451[3][0];
            }
            if ((safe_div_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((((((g_604.f6 &= (safe_rshift_func_uint8_t_u_u(g_2460, (0UL == (g_954[3][7] >= (g_604.f2 = (l_2492 || (l_2432[1][0][2] || l_2282.f7)))))))) <= func_72((+(safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((~(safe_rshift_func_uint16_t_u_s(l_2282.f1, (safe_lshift_func_uint8_t_u_u((g_2012 == ((func_72((l_2476[0][0][2] < 0x0D8B70DDL), g_2503) | g_1916[0][2]) != g_1916[1][5])), l_17.f3))))), 248UL)), 7)) & g_1916[0][2]), g_2460))), l_2478)) >= 0xC39DABB632D43466LL) <= l_2433) ^ l_2282.f7), 0xF472F36C47E8B218LL)) & l_2339.f7), 0x76EE0DA896E08463LL)))
            {
                int l_2518 = 0x9FD23FB4L;
                l_2339 = func_42(g_451[3][0]);
                if (g_801)
                {
                    char l_2513[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2513[i] = 0x72L;
                    if ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(func_60(g_2508, (g_784 = (safe_mod_func_int16_t_s_s(l_2476[0][2][0], (safe_lshift_func_uint16_t_u_u((g_2110++), 5)))))), (safe_lshift_func_uint8_t_u_u((l_2282.f1 >= ((g_174[4][1] | (l_2470 = g_884)) & (g_1610 > (l_2518 == (l_2299 >= g_604.f3))))), g_2431[2])))) || l_2519[0]), l_5)))
                    {
                        if (l_2332[2].f2)
                            break;
                        return g_1674;
                    }
                    else
                    {
                        l_17.f3 = (l_20 < l_2513[0]);
                    }
                }
                else
                {
                    unsigned l_2524[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2524[i] = 0xCA06DF54L;
                    for (g_2508 = 0; g_2508 < 7; g_2508 += 1)
                    {
                        for (g_308 = 0; g_308 < 2; g_308 += 1)
                        {
                            l_2479[g_2508][g_308] = (-6L);
                        }
                    }
                    g_2461 ^= (0x5D47B9C45E83AB96LL <= (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_1415, (g_1559 > (l_2524[0] < 255UL)))), g_301.f3)));
                    if (l_2524[0])
                        continue;
                    l_2525 = g_604;
                }
            }
            else
            {
                if ((g_451[3][0].f8 = func_47((g_301.f7 |= l_2432[2][0][5]))))
                {
                    for (g_7 = 0; (g_7 <= 3); g_7 += 1)
                    {
                        int i, j, k;
                        g_2114 ^= (l_2[(l_6 + 2)][(g_7 + 4)][l_6] <= (!0L));
                    }
                }
                else
                {
                    return l_2476[0][3][2];
                }
            }
            for (g_728 = 0; (g_728 <= 3); g_728 += 1)
            {
                int l_2528 = 0xE3BE96CBL;
                int l_2529 = 0x5FBDE199L;
                int l_2532 = 0xD462A0D8L;
                if ((func_66((++g_1533[7]), (g_2237[1][0][2] && (l_2529 = func_60(l_2332[2].f0, (l_2528 ^ l_2528)))), (l_2531 &= l_2530), ((0xA9L | ((l_2532 ^= l_20) || g_2469[1][0][6])) > l_2528), l_2404) ^ 8UL))
                {
                    g_451[3][0] = g_301;
                    l_2470 = (((g_1873 ^ (~(l_2332[2].f8 ^= (safe_sub_func_int16_t_s_s((g_1916[0][2] ^= l_17.f0), (safe_mod_func_uint16_t_u_u(((((g_2012 | ((0UL > (l_2382 > (+func_60((l_17.f8 = (l_2471 ^= g_2411)), ((g_301.f1 >= (safe_add_func_uint16_t_u_u((g_1149++), l_2525.f4))) < g_2118))))) >= l_2282.f7)) > g_604.f6) < 0xACL) == g_2237[4][1][0]), 0x7240L))))))) ^ g_1610) ^ 0xD8C90541L);
                }
                else
                {
                    unsigned long long l_2541[1];
                    int l_2552 = 0x105AC349L;
                    int l_2553 = 0x91844BCCL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_2541[i] = 0x557AE5AE8739ECE6LL;
                    for (l_2470 = 3; (l_2470 >= 0); l_2470 -= 1)
                    {
                        return l_2475;
                    }
                    for (g_7 = 0; (g_7 <= 3); g_7 += 1)
                    {
                        l_2492 &= l_2541[0];
                    }
                    if (((g_361[2] = (safe_unary_minus_func_int16_t_s(func_47(func_60(((((l_2282.f0 ^ g_1916[2][7]) >= 0x5EFBL) & 0x7C9921F2L) | l_2385), l_2332[2].f8))))) >= (l_2525.f5 < 0x25L)))
                    {
                        l_2553 = (2UL && func_66(g_1198, g_1873, (g_301.f7 ^= g_197), (0x8A607B733AE3B409LL ^ (g_1016 ^ (safe_rshift_func_uint8_t_u_s((g_301.f4 = ((l_2552 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s(g_179, g_2551)) > g_1103), g_485[0][0])) || 4294967295UL), 1UL))) < (-1L))), 3)))), g_301.f8));
                    }
                    else
                    {
                        g_2469[1][9][0] &= (safe_sub_func_int32_t_s_s(l_2553, 1L));
                    }
                    if (g_934)
                        continue;
                }
            }
        }
    }
    return g_934;
}







static unsigned func_14(struct S0 p_15, short p_16)
{
    unsigned short l_1880 = 1UL;
    int l_1890 = 2L;
    int l_1911 = 1L;
    int l_1914 = 0x3F16BF8FL;
    struct S0 l_1971 = {7UL,0,4L,0xCF317F6AL,0x14L,0x3B8CE3FCL,0UL,0x6FL,0xA20640A5L};
    unsigned l_2051 = 0x9D7DF433L;
    short l_2058[10];
    short l_2123 = 0x021CL;
    char l_2179[8][10] = {{1L,0xFAL,0L,0L,0x11L,0x56L,0x17L,0xF3L,0x17L,0x56L},{1L,0x59L,1L,(-1L),0x99L,0x17L,0x59L,0xFAL,0x11L,0xF7L},{0x17L,0x59L,0xFAL,0x11L,0xF7L,2L,0L,0L,2L,0xF7L},{1L,0x11L,0x11L,1L,0x99L,0x4BL,0x0AL,0x17L,(-2L),0x59L},{0x56L,0x99L,0L,2L,(-2L),0x0AL,0x11L,0x0AL,(-2L),2L},{0x59L,0x56L,0x59L,1L,0L,0x56L,(-2L),0x40L,2L,0xFDL},{0xFDL,0x56L,0x99L,0x11L,0x40L,0xF7L,0xF7L,0x40L,0x11L,0x99L},{0L,0L,0x59L,(-1L),2L,0x56L,0xFAL,0x0AL,0x40L,0x4BL}};
    long long l_2235 = 0xAB5E91A94B1299B3LL;
    int i, j;
    for (i = 0; i < 10; i++)
        l_2058[i] = 0xDD8FL;
    for (g_784 = 0; (g_784 >= 52); g_784++)
    {
        int l_1879 = 0x96726689L;
        int l_1908 = 0x0DE8884BL;
        int l_1912[7] = {0xA31540F8L,1L,0xA31540F8L,0xA31540F8L,1L,0xA31540F8L,0xA31540F8L};
        unsigned char l_1952 = 0x84L;
        int i;
        for (g_301.f2 = 0; (g_301.f2 >= 0); g_301.f2 -= 1)
        {
            int l_1889[7] = {0L,0L,0L,0L,0L,0L,0L};
            unsigned short l_1897 = 0xD03AL;
            unsigned short l_1898 = 0xF088L;
            int i, j;
            l_1880 = (l_1879 = 0xAFDAB487L);
            g_604.f3 = ((p_15.f6 = 18446744073709551606UL) < ((p_15.f2 = ((0x72EB00E3L & g_485[g_301.f2][g_301.f2]) && (safe_sub_func_int32_t_s_s(g_361[(g_301.f2 + 6)], ((l_1890 = (((safe_lshift_func_uint16_t_u_u(0x93E6L, 8)) && (((l_1879 >= (l_1889[4] |= (safe_sub_func_int64_t_s_s(0x9A2D32024D2568BCLL, ((safe_sub_func_int16_t_s_s(((++g_604.f6) > (g_179 != (safe_rshift_func_int8_t_s_u((((safe_add_func_int32_t_s_s(g_1103, l_1879)) < g_337) && g_784), 0)))), p_15.f5)) || l_1890))))) & l_1879) != l_1897)) != 0x44260076L)) != l_1879))))) == l_1879));
            for (g_197 = 0; (g_197 >= 0); g_197 -= 1)
            {
                unsigned char l_1903 = 0xEBL;
                int l_1913 = 0L;
                int l_1915 = (-7L);
                if ((((0xABD8L < ((((((g_1305[3][6] & l_1898) ^ (((safe_add_func_int16_t_s_s(g_604.f4, (0xC60CE564D0ADA4B0LL & l_1889[4]))) && ((p_15.f4 = (safe_mod_func_uint16_t_u_u(1UL, 65535UL))) & (l_1903 >= p_15.f3))) >= 1L)) & g_1558) <= g_906) != p_15.f8) ^ p_15.f8)) || g_451[3][0].f4) & 0x90BC23AD7E0B06C7LL))
                {
                    for (g_1013 = 0; (g_1013 <= 0); g_1013 += 1)
                    {
                        return g_335;
                    }
                }
                else
                {
                    for (g_179 = 0; (g_179 <= 0); g_179 += 1)
                    {
                        g_301.f3 &= p_15.f5;
                    }
                    l_1908 = (safe_sub_func_int16_t_s_s(p_15.f8, (safe_div_func_uint8_t_u_u(g_339, g_1012))));
                }
                p_15.f3 = (safe_add_func_int16_t_s_s((p_16 = p_15.f6), 0x7EA6L));
                ++g_1917;
            }
            p_15.f8 &= (((p_15.f7 && p_15.f3) | (safe_rshift_func_uint8_t_u_u((++g_1013), ((safe_add_func_uint16_t_u_u((+p_16), (g_451[3][0].f4 < ((!p_15.f6) == (0x73BB4937L ^ (g_1305[2][1] >= (safe_lshift_func_int8_t_s_s(6L, 5)))))))) == (g_485[g_301.f2][g_301.f2] = 0x5DEAL))))) > l_1908);
        }
        for (g_301.f2 = (-8); (g_301.f2 < 1); g_301.f2++)
        {
            struct S0 l_1930 = {0UL,0,0xEFB70F75B41CCF47LL,0L,4UL,2L,18446744073709551609UL,0xE8L,0L};
            int l_1985 = 6L;
            int l_1990 = (-1L);
            int l_1992[1];
            char l_2003 = (-1L);
            int i;
            for (i = 0; i < 1; i++)
                l_1992[i] = 0L;
            p_15 = (l_1930 = p_15);
            if (((safe_unary_minus_func_uint16_t_u(g_1198)) && g_1417))
            {
                unsigned short l_1963 = 0UL;
                for (l_1930.f2 = 0; (l_1930.f2 == 8); l_1930.f2 = safe_add_func_int32_t_s_s(l_1930.f2, 9))
                {
                    unsigned l_1941[6][6][2] = {{{0x3AAF97ACL,0x7917E3A5L},{0xA46946FBL,0xE0DA3C77L},{0xCE8F5C70L,0xEAA054D6L},{0x72E7DCC1L,18446744073709551606UL},{0x6241AFC3L,5UL},{18446744073709551615UL,0xB2E2DD7AL}},{{0xA46946FBL,1UL},{0xB2E2DD7AL,1UL},{0x52735D47L,0xCE8F5C70L},{18446744073709551615UL,0x0E6F68FDL},{0x3009D913L,0xEAA054D6L},{0x0941B181L,18446744073709551610UL}},{{9UL,0xA4EBBE9DL},{0xCE8F5C70L,0xCE8F5C70L},{0x241D53E4L,0UL},{0x7917E3A5L,0xA46946FBL},{0x0941B181L,5UL},{0xE0DA3C77L,0x0941B181L}},{{0x3AAF97ACL,0xCE8F5C70L},{0x3AAF97ACL,0x0941B181L},{0xE0DA3C77L,5UL},{0x0941B181L,0xA46946FBL},{0x7917E3A5L,0UL},{0x241D53E4L,0xCE8F5C70L}},{{0xCE8F5C70L,0xA4EBBE9DL},{9UL,18446744073709551610UL},{0x0941B181L,0xEAA054D6L},{0x3009D913L,0x0E6F68FDL},{18446744073709551615UL,0xCE8F5C70L},{0x52735D47L,1UL}},{{0xB2E2DD7AL,1UL},{0x0941B181L,1UL},{0xB2E2DD7AL,1UL},{0x52735D47L,0xCE8F5C70L},{18446744073709551615UL,0x0E6F68FDL},{0x3009D913L,0xEAA054D6L}}};
                    int i, j, k;
                    for (p_15.f4 = 23; (p_15.f4 >= 29); ++p_15.f4)
                    {
                        short l_1939 = 7L;
                        int l_1940 = 0xB57559C2L;
                        g_1936--;
                        ++l_1941[0][2][1];
                        g_146 = (safe_sub_func_uint8_t_u_u(p_16, ((~(safe_mod_func_int64_t_s_s((p_15.f3 && (safe_div_func_int8_t_s_s(((g_301.f6--) & g_301.f3), l_1952))), (-6L)))) & (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_u(g_1123, p_15.f8)) == (safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_1941[0][2][1], (~(l_1963 == 1L)))), l_1912[2])), 0x6BL))), 6)))));
                        if (p_15.f8)
                            continue;
                    }
                }
                if (g_485[0][0])
                    continue;
            }
            else
            {
                char l_1966[1][1][4];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1966[i][j][k] = 0xD2L;
                    }
                }
                p_15 = p_15;
                g_301.f8 ^= g_1016;
                l_1930.f3 = ((0xC0E4L || (safe_lshift_func_int16_t_s_u((((0UL & (p_15.f7 = p_15.f6)) || (g_1832[3][0] = l_1912[6])) & (+l_1966[0][0][0])), (safe_mod_func_uint16_t_u_u(l_1890, g_1305[0][7]))))) ^ (safe_rshift_func_int8_t_s_u(p_16, 1)));
            }
            g_604 = l_1971;
            if ((6L && (((l_1912[3] || (++g_1533[4])) >= (0x9BB5L >= ((l_1971.f3 = ((safe_mod_func_int16_t_s_s(((p_15.f6 & g_1103) & (safe_sub_func_int64_t_s_s((g_250[2] ^ p_15.f0), (p_15.f5 || g_451[3][0].f6)))), 0x959EL)) >= p_15.f5)) != g_485[0][0]))) >= g_604.f5)))
            {
                char l_1986 = 0x33L;
                int l_1987 = (-1L);
                int l_1989 = (-9L);
                for (g_301.f5 = 4; (g_301.f5 <= (-3)); g_301.f5--)
                {
                    unsigned l_1982 = 0x0339B7ABL;
                    long long l_1988[3];
                    int l_1991 = 0x12137BD5L;
                    int l_1999 = 0x43490A96L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1988[i] = 0xF6E52B374E32AC91LL;
                    for (g_1917 = 0; (g_1917 >= 13); g_1917++)
                    {
                        p_15 = g_451[3][0];
                        --l_1982;
                    }
                    if (l_1952)
                    {
                        return l_1912[2];
                    }
                    else
                    {
                        g_451[3][0].f3 |= (-1L);
                        g_1994++;
                    }
                    for (l_1971.f3 = (-29); (l_1971.f3 != 18); ++l_1971.f3)
                    {
                        unsigned l_2000 = 0UL;
                        l_2000--;
                    }
                    l_1991 ^= 0xDC677DB4L;
                }
                p_15.f3 |= l_2003;
            }
            else
            {
                return p_15.f8;
            }
        }
        if (p_15.f0)
            break;
    }
    if ((p_15.f6 != ((safe_add_func_int32_t_s_s(g_52, func_66((safe_mul_func_int16_t_s_s(l_1971.f0, (l_1971.f8 >= (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_301.f4, 3)), g_2012))))), (g_883 == ((g_954[0][7] = p_15.f1) >= p_15.f2)), p_16, p_15.f3, g_636[1][0]))) > g_451[3][0].f2)))
    {
        int l_2023 = 0x05B575DAL;
        long long l_2024 = 0xF22D58D20B15F8F9LL;
        int l_2053 = 0xBAE9D81AL;
        unsigned l_2086 = 1UL;
        struct S0 l_2202 = {18446744073709551615UL,0,0x50DE532EBD4EA457LL,9L,0x50L,1L,0xC8E20D9AFBD0BBA1LL,-5L,-1L};
        if ((safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(g_139, (2L || p_15.f7))), (l_2023 = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((p_15.f4 = (g_1013 = p_15.f6)), l_2023)) && func_66(l_2024, (safe_rshift_func_int16_t_s_u((((safe_add_func_int64_t_s_s(((((++g_301.f6) || ((((0xB8A4A0ECA4821F70LL && l_1890) > g_485[0][0]) >= 0xFFB2L) && g_1993[4][5])) & 0UL) >= g_1533[1]), l_1971.f7)) || 0xE2BBL) && p_16), 4)), l_1890, p_15.f1, l_2024)), 1))))))
        {
            unsigned char l_2035 = 7UL;
            int l_2036 = (-1L);
            short l_2078 = 4L;
            if (func_60((p_15.f6 && ((1L < (func_72((g_883 |= ((((g_635 && 0x9D58L) >= (safe_lshift_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(0xB711F316173C9129LL, ((g_131 || l_1890) == (l_1971.f8 = (+func_66((g_301.f4 < l_2035), p_15.f6, p_15.f4, g_636[1][0], l_2023)))))) || p_15.f0), l_1971.f0))) & (-9L)) ^ l_2023)), l_2023) <= g_46)) && p_15.f2)), g_1012))
            {
                l_2036 = g_604.f0;
            }
            else
            {
                unsigned short l_2039 = 0UL;
                int l_2050 = (-1L);
                int l_2054[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                unsigned l_2079 = 0x2BBA81F4L;
                int i;
                p_15.f3 = (safe_add_func_uint16_t_u_u(p_15.f5, 65526UL));
                if ((l_2039 != ((l_2024 & (((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((p_15.f5 != (l_2024 >= (((safe_sub_func_int32_t_s_s(g_1013, func_66((l_2050 &= 0x9909L), p_15.f2, p_15.f1, l_2039, g_1559))) > l_2039) != 0x1BC762D8L))) > 0xC1556DE5L), p_15.f4)), g_604.f1)), 0)) > p_15.f8) >= 7L)) && g_175)))
                {
                    unsigned l_2055 = 0UL;
                    if ((l_2051 <= 1L))
                    {
                        short l_2052 = (-1L);
                        l_2055++;
                        l_2036 = (p_15.f3 = l_2023);
                    }
                    else
                    {
                        g_301.f3 |= g_301.f1;
                        p_15.f8 = g_335;
                        p_15.f8 = l_2058[2];
                    }
                    p_15 = g_451[3][0];
                }
                else
                {
                    int l_2077 = 1L;
                    for (p_15.f3 = 17; (p_15.f3 < (-22)); --p_15.f3)
                    {
                        unsigned short l_2061 = 3UL;
                        p_15.f8 = (l_2061 > ((safe_unary_minus_func_int64_t_s((+(safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((l_2061 < (safe_rshift_func_int8_t_s_s((p_15.f7 = 3L), 0))) <= (p_15.f6 > (((g_1917 == (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((l_1971.f3 = l_2053) == p_15.f2), p_16)), (0x8E14FEE0L >= g_419)))) == g_139) > g_1916[0][5]))), 0UL)), l_2077)), p_15.f4))))) > l_2078));
                    }
                    l_2036 = func_72((l_1971.f8 = 0xEC0C4B11886E820CLL), (g_174[0][1] = (((l_2079 > 0x0DL) > (safe_mod_func_uint64_t_u_u(func_36(((safe_add_func_int16_t_s_s(g_175, func_66(((l_2077 |= g_308) >= (((safe_sub_func_int64_t_s_s(g_451[3][0].f4, (0xF38F9B45L && func_66(p_15.f5, p_15.f7, p_15.f2, l_1971.f1, g_604.f6)))) | p_15.f4) ^ g_1936)), p_15.f8, p_16, g_52, g_339))) & 0x325307FA77D85804LL), g_604, g_1198, g_451[3][0]), 0x9AA07052116BD47FLL))) > g_1994)));
                }
                g_451[3][0].f8 |= l_2036;
                ++l_2086;
            }
            for (l_2035 = 2; (l_2035 <= 9); l_2035 += 1)
            {
                unsigned long long l_2091 = 0UL;
                int l_2117 = 0xE27F690BL;
                l_2091 = (safe_lshift_func_uint8_t_u_u(249UL, 4));
                for (g_604.f7 = 0; (g_604.f7 <= 2); g_604.f7 += 1)
                {
                    int l_2115[5] = {6L,6L,6L,6L,6L};
                    int i, j;
                    g_604.f8 = l_2058[l_2035];
                    if (l_2058[(g_604.f7 + 3)])
                        break;
                    if ((safe_rshift_func_uint8_t_u_s((g_1832[(g_604.f7 + 1)][g_604.f7] ^= l_2058[l_2035]), l_2058[l_2035])))
                    {
                        char l_2094 = 1L;
                        g_604.f3 &= (p_15.f3 |= p_15.f8);
                        g_604.f8 &= ((g_451[3][0].f3 ^ 4L) < 0x53L);
                        if (l_2094)
                            break;
                        if (g_276)
                            continue;
                    }
                    else
                    {
                        long long l_2109 = 0x8C9D3FD4460FA7C5LL;
                        int l_2113 = (-4L);
                        int l_2116[8] = {0xABCAF2BFL,0xABCAF2BFL,0xABCAF2BFL,0xABCAF2BFL,0xABCAF2BFL,0xABCAF2BFL,0xABCAF2BFL,0xABCAF2BFL};
                        int i;
                        g_451[3][0].f3 |= (safe_lshift_func_int16_t_s_u(func_72(l_2086, func_72(p_15.f3, (safe_lshift_func_uint8_t_u_u((p_16 > (++g_179)), 4)))), (safe_sub_func_int8_t_s_s((g_361[3] |= ((safe_add_func_uint16_t_u_u((((l_2053 = (~(safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(p_15.f3, 1)), l_2024)))) < l_2036) ^ 6UL), g_728)) <= 1L)), l_2109))));
                        --g_2110;
                        g_2118++;
                        g_604.f8 = l_2117;
                    }
                    for (l_2023 = 6; (l_2023 >= 0); l_2023 -= 1)
                    {
                        int i;
                        if (g_1533[(g_604.f7 + 1)])
                            break;
                    }
                }
            }
            for (l_2035 = 4; (l_2035 > 32); l_2035 = safe_add_func_uint32_t_u_u(l_2035, 1))
            {
                short l_2135 = 7L;
                p_15.f3 |= (p_15.f8 = ((l_2123 = l_2035) && (safe_lshift_func_int8_t_s_s(l_2023, (safe_add_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_15.f5, ((p_15.f8 ^ (safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_u(func_72(p_15.f1, l_2135), g_46))))) <= (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(65535UL, g_1873)), 14)) & 6L), l_2023))))), l_2051)), g_604.f4))))));
            }
            p_15 = l_1971;
        }
        else
        {
            for (g_727 = 0; (g_727 == (-15)); --g_727)
            {
                return p_15.f0;
            }
        }
        for (g_301.f6 = (-21); (g_301.f6 < 24); g_301.f6 = safe_add_func_int8_t_s_s(g_301.f6, 9))
        {
            int l_2162 = 0xB17D2770L;
            int l_2173 = 0xD5A2DD27L;
            int l_2174[1];
            unsigned l_2194 = 0xD57F2368L;
            int i;
            for (i = 0; i < 1; i++)
                l_2174[i] = (-7L);
            if ((safe_lshift_func_int8_t_s_s(p_15.f6, (safe_div_func_int64_t_s_s(((g_1016 = (0UL == ((-1L) == ((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u(((g_1609 < (safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(g_301.f8, 0)), g_1123)) ^ ((safe_mod_func_uint64_t_u_u((l_2162 = p_15.f7), p_15.f6)) < ((l_2173 = (l_1890 &= (((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((!(safe_rshift_func_int8_t_s_u(g_1876, 6))), p_15.f6)), l_2173)), l_2173)), 3UL)) <= p_16) | g_604.f8))) > l_2174[0]))), g_1936))) || l_2174[0]), g_174[1][1])), p_15.f0)) == g_604.f4)))) | l_1971.f4), p_15.f1)))))
            {
                short l_2177 = 0x5E91L;
                int l_2178 = 0xA3F2A256L;
                int l_2182 = 0L;
                int l_2183 = 8L;
                int l_2184 = 0L;
                int l_2185 = 0xF71B4631L;
                int l_2186 = 2L;
                for (g_604.f5 = 0; (g_604.f5 == 13); ++g_604.f5)
                {
                    l_2177 = g_301.f5;
                }
                g_177 = (p_15.f7 >= g_1610);
                for (g_275 = 9; (g_275 >= 0); g_275 -= 1)
                {
                    int l_2180 = (-2L);
                    int l_2181 = (-5L);
                    for (g_1415 = 0; (g_1415 <= 9); g_1415 += 1)
                    {
                        int i;
                        g_2114 ^= (p_15.f8 = g_361[g_275]);
                        g_301.f8 = (0x0DL & g_986);
                        if (l_2053)
                            break;
                    }
                    g_2187++;
                    l_2180 |= (safe_lshift_func_int8_t_s_s(p_15.f1, 0));
                }
                g_146 = g_1993[3][6];
            }
            else
            {
                int l_2201 = 0x38F9CA00L;
                g_2114 = (safe_mod_func_int32_t_s_s((l_2194 ^ ((0x6A6253ACL < ((g_146 &= (p_15.f1 | g_1533[2])) > 1L)) == (p_15.f6 = (safe_lshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(g_335, ((g_743 = l_2201) ^ (g_275 = p_15.f3)))) || l_2194), g_604.f7)) || g_485[0][0]) == 7L), l_2201))))), l_2194));
                p_15.f3 = p_16;
            }
            return g_743;
        }
        l_2202 = g_301;
    }
    else
    {
        unsigned short l_2218[2];
        int l_2224 = 9L;
        int l_2232 = 1L;
        int l_2233 = (-1L);
        unsigned char l_2244 = 0xD6L;
        int i;
        for (i = 0; i < 2; i++)
            l_2218[i] = 0UL;
        for (g_1013 = 0; (g_1013 <= 3); g_1013 += 1)
        {
            unsigned short l_2209 = 0xE41FL;
            int l_2212 = 0x251267DBL;
            short l_2217[4];
            int l_2230 = (-9L);
            int l_2231[2][4][10] = {{{(-1L),0xF55646A0L,(-1L),0x6BF4C32BL,0x6BF4C32BL,(-1L),0xF55646A0L,(-1L),0x6BF4C32BL,0x6BF4C32BL},{(-1L),0xF55646A0L,(-1L),0x6BF4C32BL,(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)},{0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)},{0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)}},{{0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)},{0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)},{0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)},{0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L),0x6BF4C32BL,5L,0x6BF4C32BL,(-10L),(-10L)}}};
            int l_2254 = 6L;
            struct S0 l_2263 = {0xDBE19BA7L,0,-1L,0xEE142DCFL,0xF9L,1L,0xF5B1298CF86CC800LL,0xCEL,0xE4B960FFL};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_2217[i] = 0x9B8BL;
            for (g_604.f2 = 2; (g_604.f2 >= 0); g_604.f2 -= 1)
            {
                int i;
                g_451[3][0].f3 = (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((p_16 = (safe_div_func_int32_t_s_s(g_250[g_604.f2], func_66((l_1971.f8 ^= ((func_66(l_1914, (l_1971.f3 |= (l_2209++)), l_1971.f7, (((!(p_15.f6 = (l_1911 &= g_339))) != l_1971.f5) < (g_7 = p_15.f1)), ((--g_1533[1]) | (safe_sub_func_uint32_t_u_u((p_15.f2 ^ 0x1B96EBC81C225DD2LL), g_250[g_604.f2])))) | 0xCAL) >= p_15.f0)), l_1890, p_15.f3, g_250[2], l_2212)))) < p_15.f1), (-1L))), p_15.f0));
            }
            p_15.f8 = (l_2212 | (g_249 < (7L != 0xA36442056BB9AA4CLL)));
            for (g_276 = 0; (g_276 <= 2); g_276 += 1)
            {
                int l_2221 = 0x0B02AF3AL;
                int l_2255 = 7L;
                int i;
                g_604.f3 |= (!g_250[g_276]);
                if (l_2217[0])
                    continue;
                l_2218[0]++;
                for (p_15.f8 = 0; (p_15.f8 <= 2); p_15.f8 += 1)
                {
                    l_2221 ^= 1L;
                }
                for (l_2051 = 0; (l_2051 <= 3); l_2051 += 1)
                {
                    unsigned long long l_2226 = 0xC80DCD9BE12CDABBLL;
                    int l_2227 = 1L;
                    int l_2228 = 0xDFB7188BL;
                    int l_2234 = (-1L);
                    int l_2236[3][3] = {{0x1C27F07FL,0x1C27F07FL,0x1C27F07FL},{(-1L),1L,(-1L)},{0x1C27F07FL,0x1C27F07FL,0x1C27F07FL}};
                    unsigned l_2253[9] = {0x89EDC00CL,1UL,0x89EDC00CL,0x89EDC00CL,1UL,0x89EDC00CL,0x89EDC00CL,1UL,0x89EDC00CL};
                    int i, j;
                    if ((l_2224 = ((g_250[g_276] < l_1971.f8) < (--g_801))))
                    {
                        unsigned l_2225 = 0x41ED1716L;
                        int l_2229 = 0L;
                        int l_2241 = (-1L);
                        int l_2242 = 8L;
                        int l_2243[7][1] = {{(-1L)},{0L},{0L},{(-1L)},{0L},{0L},{(-1L)}};
                        int i, j;
                        l_2225 |= g_250[g_276];
                        if (l_2226)
                            break;
                        --g_2238;
                        ++l_2244;
                    }
                    else
                    {
                        l_2255 ^= ((g_451[3][0].f8 | (g_2237[1][0][2] > (safe_add_func_uint64_t_u_u(((p_15.f3 &= p_15.f7) != 1L), func_66(((func_66(g_250[g_276], (((safe_lshift_func_uint8_t_u_s(((((l_2221 = p_15.f8) < 0UL) != g_250[g_276]) <= ((g_177 = (l_2253[3] |= (g_301.f8 = (l_2218[0] || p_15.f7)))) | l_1971.f5)), 6)) && 65532UL) > (-1L)), g_250[g_276], l_2217[0], g_1869) | p_15.f8) ^ p_15.f0), l_2217[0], g_604.f7, l_2254, g_126))))) | g_175);
                        if (p_15.f5)
                            break;
                        l_2233 |= p_15.f8;
                        return p_15.f4;
                    }
                }
            }
            l_1890 = ((l_2218[1] | (safe_unary_minus_func_uint16_t_u(((p_15.f1 ^ (g_1198 ^= (safe_add_func_int16_t_s_s(func_60(p_15.f5, (l_2230 = g_179)), (p_16 |= (((0xC2F0L < (l_1971.f5 >= (g_1123 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(p_15.f0, p_15.f2)), p_15.f1))))) != l_2217[0]) <= g_604.f8)))))) < l_2244)))) && p_15.f2);
            for (l_2051 = 0; (l_2051 <= 3); l_2051 += 1)
            {
                p_15 = func_42(p_15);
                l_2231[0][2][6] &= (!g_934);
                p_15 = l_2263;
            }
        }
        return g_361[3];
    }
    return p_15.f8;
}







static unsigned long long func_31(char p_32)
{
    unsigned char l_33 = 0x9EL;
    int l_41[7] = {1L,1L,1L,1L,1L,1L,1L};
    struct S0 l_744 = {0x856F305AL,0,-8L,0x016CFABFL,0x4FL,-1L,9UL,0x97L,0x8394BA39L};
    struct S0 l_1612 = {1UL,0,-2L,0xD67603F1L,0x56L,0x7563C151L,4UL,0L,0x11F4A8E6L};
    struct S0 l_1613 = {18446744073709551610UL,0,-1L,-7L,251UL,0x6F43C5C9L,0x6BC69708B4BEC7CALL,0xA9L,1L};
    int l_1673 = (-1L);
    char l_1709 = 0xBDL;
    unsigned short l_1710 = 0UL;
    unsigned l_1739 = 4294967295UL;
    unsigned char l_1759[4][5] = {{0UL,0x5BL,0x5BL,0UL,0x5BL},{0UL,0UL,0xA8L,0UL,0UL},{0x5BL,0UL,0x5BL,0x5BL,0UL},{0UL,0x5BL,0x5BL,0UL,0x5BL}};
    long long l_1836 = (-1L);
    int l_1842[3][4] = {{0xA95DFCECL,0xA95DFCECL,0L,0xA95DFCECL},{0xA95DFCECL,1L,1L,0xA95DFCECL},{1L,0xA95DFCECL,1L,1L}};
    int i, j;
    l_744.f3 = ((l_33 = g_7) > (l_41[6] = (((g_7 == (5L == ((safe_sub_func_int32_t_s_s((func_36(l_41[5], func_42(func_44((g_46 = (p_32 | p_32)))), (g_743 = ((safe_add_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((0x693298D8660198EBLL ^ 8L), 0x30407945L)) & p_32), g_51)) ^ g_604.f1)), l_744) ^ p_32), g_51)) | l_744.f1))) & p_32) | g_1200)));
    for (g_906 = 0; (g_906 <= 1); g_906 += 1)
    {
        unsigned l_1545 = 4294967293UL;
        long long l_1549 = 1L;
        int l_1550 = 0xAC248186L;
        int l_1611 = 7L;
        struct S0 l_1614 = {0xFF22D1D4L,0,0xA3107F8BEB54E63CLL,0L,0x5BL,0xBBA1DB3BL,18446744073709551615UL,1L,-1L};
        char l_1762 = 0x0BL;
        unsigned long long l_1837 = 18446744073709551607UL;
        if (l_1545)
        {
            long long l_1546 = 0x4EAF9CBB085D03F4LL;
            int l_1551 = 0L;
            int l_1555 = 0x8FCACBD1L;
            int l_1556 = 9L;
            int l_1557[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            l_1550 = (l_1549 = ((l_41[5] = (18446744073709551606UL <= (l_1546 = g_604.f8))) > ((safe_lshift_func_int8_t_s_s((g_1149 <= g_636[1][0]), 6)) && g_301.f3)));
            if (p_32)
                break;
            for (g_727 = 0; (g_727 <= 1); g_727 += 1)
            {
                short l_1552 = (-3L);
                int l_1553 = 0xC256CAC2L;
                int l_1554[9][2][8] = {{{0x4079F5A2L,(-2L),(-7L),0x4079F5A2L,0x65D4B8BFL,0L,8L,0x8207AAA9L},{0x81103B99L,0xD8F06FF8L,2L,(-10L),0x4079F5A2L,2L,8L,(-10L)}},{{0x8207AAA9L,3L,(-7L),0x65D4B8BFL,(-10L),(-2L),(-2L),(-10L)},{(-10L),(-2L),(-2L),(-10L),0x65D4B8BFL,(-7L),3L,0x8207AAA9L}},{{(-10L),8L,2L,0x4079F5A2L,(-10L),2L,0xD8F06FF8L,0x81103B99L},{0x8207AAA9L,8L,0L,0x65D4B8BFL,0x4079F5A2L,(-7L),(-2L),0x4079F5A2L}},{{0x81103B99L,(-2L),(-10L),(-8L),0x3252A0EDL,0x008444D3L,(-2L),0xE4E89649L},{0x8207AAA9L,0L,3L,(-8L),(-8L),3L,0L,0x8207AAA9L}},{{0xE4E89649L,(-2L),0x008444D3L,0x3252A0EDL,(-8L),(-10L),0x008444D3L,(-8L)},{0x8207AAA9L,0x008444D3L,2L,0x8207AAA9L,0x3252A0EDL,(-10L),(-7L),0xE4E89649L}},{{(-8L),(-2L),3L,0x65D4B8BFL,0x8207AAA9L,3L,(-7L),0x65D4B8BFL},{0xE4E89649L,0L,2L,0x3252A0EDL,0x65D4B8BFL,0x008444D3L,0x008444D3L,0x65D4B8BFL}},{{0x65D4B8BFL,0x008444D3L,0x008444D3L,0x65D4B8BFL,0x3252A0EDL,2L,0L,0xE4E89649L},{0x65D4B8BFL,(-7L),3L,0x8207AAA9L,0x65D4B8BFL,3L,(-2L),(-8L)}},{{0xE4E89649L,(-7L),(-10L),0x3252A0EDL,0x8207AAA9L,2L,0x008444D3L,0x8207AAA9L},{(-8L),0x008444D3L,(-10L),(-8L),0x3252A0EDL,0x008444D3L,(-2L),0xE4E89649L}},{{0x8207AAA9L,0L,3L,(-8L),(-8L),3L,0L,0x8207AAA9L},{0xE4E89649L,(-2L),0x008444D3L,0x3252A0EDL,(-8L),(-10L),0x008444D3L,(-8L)}}};
                int i, j, k;
                --g_1559;
                if (g_174[g_727][g_727])
                    continue;
            }
        }
        else
        {
            char l_1562 = 0L;
            int l_1588 = 0xEDCE0E47L;
            l_41[5] |= l_1562;
            for (g_659 = 0; (g_659 > 40); g_659 = safe_add_func_int32_t_s_s(g_659, 9))
            {
                l_744 = g_451[1][0];
                return p_32;
            }
            for (g_51 = 4; (g_51 != 26); g_51 = safe_add_func_int64_t_s_s(g_51, 8))
            {
                char l_1577 = 0x90L;
                int l_1578 = 0x4677FBF9L;
                struct S0 l_1589 = {0x888DC8DFL,0,-1L,-8L,0x38L,-1L,0xE04FE0156D698C6FLL,-1L,0xADD9E770L};
                l_1578 ^= ((g_126 = (safe_div_func_uint16_t_u_u((((1UL >= ((!(safe_add_func_int32_t_s_s(p_32, (!g_301.f3)))) && g_301.f7)) ^ (18446744073709551615UL || (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(l_1545, (safe_mod_func_uint8_t_u_u(((l_1550 == 0x28D0L) | (0x27DA248B5860C2D5LL != g_1012)), g_1558)))), p_32)))) <= l_1577), 65535UL))) & l_1545);
                g_604.f3 = (safe_rshift_func_int8_t_s_s((l_1562 < (safe_add_func_int16_t_s_s(p_32, (l_1588 = (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((g_301.f3 <= (((safe_lshift_func_uint16_t_u_s(g_301.f4, g_361[3])) || g_1558) <= (0xB9D49E8C9B131C30LL | (0xB0FA82CB353A728ELL ^ l_1577)))))), 7)))))), g_451[3][0].f8));
                g_301 = l_1589;
                if (l_1577)
                    break;
            }
            if (g_112)
                break;
        }
        for (g_1559 = 0; (g_1559 > 12); g_1559 = safe_add_func_int16_t_s_s(g_1559, 9))
        {
            unsigned l_1596 = 0x3F180BFAL;
            g_451[3][0].f8 = (safe_lshift_func_int16_t_s_s(p_32, (l_744.f8 = l_1549)));
            for (g_884 = 0; (g_884 >= 21); g_884 = safe_add_func_uint64_t_u_u(g_884, 6))
            {
                l_744 = g_451[3][0];
            }
            l_1611 = (l_1596 >= (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_954[0][1], (safe_add_func_uint32_t_u_u((((safe_add_func_uint32_t_u_u(g_986, (p_32 <= ((safe_div_func_int64_t_s_s(0L, 0xF2119C5A248F9196LL)) & g_249)))) | (l_1550 = g_1609)) == g_1610), p_32)))), 0xE7L)));
            l_1614 = (l_1613 = func_42(l_1612));
        }
        for (g_1012 = 19; (g_1012 == 29); g_1012 = safe_add_func_uint64_t_u_u(g_1012, 2))
        {
            unsigned char l_1621[6] = {0x74L,0xB2L,0xB2L,0x74L,0xB2L,0xB2L};
            int l_1622 = 7L;
            int l_1631[3][4] = {{(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),(-9L),(-9L)},{(-9L),(-9L),3L,(-9L)}};
            struct S0 l_1706[10] = {{0xC2171975L,0,0x723496A1D7DD4805LL,-1L,0UL,4L,0x9847D6A0BEA5E913LL,0xBDL,7L},{1UL,0,0x992BAE908D323C9ELL,1L,0x5CL,3L,0x40A386E4A1B1D6A7LL,-5L,-1L},{1UL,0,0x992BAE908D323C9ELL,1L,0x5CL,3L,0x40A386E4A1B1D6A7LL,-5L,-1L},{0xC2171975L,0,0x723496A1D7DD4805LL,-1L,0UL,4L,0x9847D6A0BEA5E913LL,0xBDL,7L},{1UL,0,0x992BAE908D323C9ELL,1L,0x5CL,3L,0x40A386E4A1B1D6A7LL,-5L,-1L},{1UL,0,0x992BAE908D323C9ELL,1L,0x5CL,3L,0x40A386E4A1B1D6A7LL,-5L,-1L},{0xC2171975L,0,0x723496A1D7DD4805LL,-1L,0UL,4L,0x9847D6A0BEA5E913LL,0xBDL,7L},{1UL,0,0x992BAE908D323C9ELL,1L,0x5CL,3L,0x40A386E4A1B1D6A7LL,-5L,-1L},{1UL,0,0x992BAE908D323C9ELL,1L,0x5CL,3L,0x40A386E4A1B1D6A7LL,-5L,-1L},{0xC2171975L,0,0x723496A1D7DD4805LL,-1L,0UL,4L,0x9847D6A0BEA5E913LL,0xBDL,7L}};
            unsigned short l_1773[5] = {1UL,1UL,1UL,1UL,1UL};
            unsigned short l_1797 = 8UL;
            int i, j;
            if ((safe_sub_func_uint32_t_u_u((g_604.f1 = (l_1622 = (safe_lshift_func_int16_t_s_u(l_1621[5], 6)))), (((+((((((+func_66(p_32, (l_1612.f3 = p_32), g_986, (func_72(l_1621[5], (0x60L || 0xD4L)) & p_32), p_32)) != p_32) >= p_32) || 0xADC4L) & g_604.f4) | (-5L))) ^ l_1621[5]) ^ p_32))))
            {
                unsigned char l_1632 = 1UL;
                int l_1639 = 1L;
                int l_1658 = (-1L);
                struct S0 l_1727 = {0x1C03C3C5L,0,0x001F4187CE69505DLL,0xEE1F4BAAL,0x78L,-9L,0x21A24E82E1741328LL,0xCCL,0xD9DA9BD0L};
                for (g_1200 = 0; (g_1200 == (-7)); g_1200 = safe_sub_func_int16_t_s_s(g_1200, 8))
                {
                    unsigned short l_1635 = 65534UL;
                    int l_1638 = 1L;
                    g_604.f3 = ((func_72((safe_mod_func_uint8_t_u_u((l_1622 = (0xD163L & 0x3792L)), l_1545)), g_146) < ((safe_lshift_func_int16_t_s_u(((safe_sub_func_uint8_t_u_u(((l_1635 = ((--l_1632) || l_1632)) & ((g_604.f4 | (l_1638 &= (g_1305[3][6] = ((safe_lshift_func_int16_t_s_u((-5L), 11)) >= 0x3BDBD674L)))) & p_32)), 0xCDL)) == 0x681EF79FL), g_1103)) == 0x00CDL)) != 0UL);
                }
                l_1639 = l_1632;
                if ((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(func_60((g_1200 = (0xF4B0E83BF565579ELL | (l_1613.f8 &= p_32))), p_32), 7)) != ((safe_sub_func_uint64_t_u_u((g_885 = l_1631[0][1]), ((p_32 | 0x7F5AL) > (0x43451064F48D0FACLL > l_1632)))) && 0x1A39EDC6D5DB034FLL)), 9L)))
                {
                    unsigned l_1650 = 0x0F84E8FBL;
                    int l_1683 = 0x78EE473DL;
                    for (g_337 = (-16); (g_337 <= 7); ++g_337)
                    {
                        char l_1657 = (-5L);
                        if (l_1613.f4)
                            break;
                        l_1658 |= ((-9L) ^ (l_1639 = (g_46 ^ (safe_mod_func_uint8_t_u_u((g_451[3][0].f4 |= (l_744.f8 = ((g_131 < l_1650) || (safe_mod_func_uint8_t_u_u((~(safe_div_func_int32_t_s_s((((safe_add_func_int64_t_s_s((g_451[3][0].f0 ^ 0x82CDL), (+(p_32 <= (p_32 | 7L))))) > l_1657) & g_451[3][0].f7), l_1622))), p_32))))), p_32)))));
                        g_451[3][0].f3 = (l_1612.f3 &= l_1657);
                        return l_1650;
                    }
                    for (g_1013 = (-24); (g_1013 <= 45); g_1013 = safe_add_func_uint32_t_u_u(g_1013, 3))
                    {
                        long long l_1665 = 0xC16AE3C73B606C99LL;
                        l_1631[2][0] = g_179;
                        if (l_1658)
                            break;
                        l_1639 = (safe_add_func_uint32_t_u_u((~((l_1658 = (l_1650 ^ (255UL ^ (l_1658 <= (((p_32 & l_1665) | (((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((0x017284F33FE0BDD9LL ^ (safe_rshift_func_uint16_t_u_s(l_1673, 1))))), (~g_604.f0))), g_251)) <= p_32) == 3UL)) & g_1674))))) >= 18446744073709551615UL)), 0x69007486L));
                    }
                    if (l_1549)
                    {
                        unsigned long long l_1704 = 4UL;
                        unsigned long long l_1705 = 0x4EF22A147539E8DDLL;
                        g_301.f8 &= g_308;
                        g_604.f8 = p_32;
                        g_451[3][0].f3 = (((g_451[3][0].f6 ^ ((((safe_div_func_uint16_t_u_u(g_954[3][0], (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((0xFFEE386F648E8A16LL || g_884) < (safe_lshift_func_int8_t_s_u(l_1683, (func_72((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(g_1533[1], g_743)), ((safe_add_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(4294967294UL, (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_66((((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((l_1614.f3 = l_1632), p_32)), g_1198)) < g_451[3][0].f4) || g_250[2]), l_1650, g_1558, p_32, g_131), 6)), l_1704)), 0xA9L)))) <= p_32), l_1613.f8)) & g_1558))), p_32)), g_52) >= 65533UL)))) == 0L), l_1621[1])), g_1198)))) && l_1650) > g_906) && 0UL)) ^ 0x38FEL) >= l_1705);
                        l_1706[0] = l_1614;
                    }
                    else
                    {
                        l_1612.f3 = (g_451[3][0].f8 |= ((safe_rshift_func_uint8_t_u_u((l_1614.f2 & p_32), 2)) | 254UL));
                    }
                    l_1710++;
                }
                else
                {
                    unsigned l_1725 = 0x41870E7EL;
                    int l_1726 = (-2L);
                    for (g_337 = 0; (g_337 >= 20); g_337 = safe_add_func_int32_t_s_s(g_337, 1))
                    {
                        g_146 &= (safe_rshift_func_int16_t_s_u(g_175, p_32));
                        l_1725 = ((safe_mod_func_int64_t_s_s((p_32 ^ p_32), (func_60((safe_lshift_func_uint16_t_u_s(g_727, 9)), l_1706[0].f3) & (g_604.f4 <= 65533UL)))) ^ (safe_div_func_uint16_t_u_u((g_174[0][1] || (-9L)), g_339)));
                        l_1726 = (g_1200 || l_1658);
                    }
                    if (p_32)
                        break;
                }
                g_604 = (l_1727 = (l_1614 = func_42(l_1614)));
            }
            else
            {
                char l_1736 = 0L;
                int l_1771 = 0x2E63445EL;
                unsigned l_1788 = 0UL;
                if ((safe_rshift_func_int8_t_s_s(((l_41[5] = (func_47((safe_add_func_uint32_t_u_u((g_784 ^= (safe_sub_func_int64_t_s_s((-8L), g_885))), (safe_rshift_func_int16_t_s_u(func_60(l_1736, ((((safe_rshift_func_uint16_t_u_u((g_451[3][0].f4 >= (~func_66(l_1739, (((l_1631[2][0] ^= ((((safe_lshift_func_int8_t_s_u(p_32, p_32)) & ((l_1611 = 0x3FL) >= func_72(p_32, g_301.f2))) < l_1614.f7) < p_32)) >= l_1736) || 1UL), p_32, p_32, g_451[3][0].f7))), 8)) <= (-3L)) || l_1622) <= 0x6270B533ACD99057LL)), 14))))) == p_32)) | l_1614.f1), 7)))
                {
                    struct S0 l_1742 = {0xAFF9237FL,0,0xD21199744A5E3FACLL,5L,0x7FL,0L,4UL,1L,0L};
                    unsigned l_1743 = 0x60AFDE42L;
                    l_1706[0] = func_42((l_1742 = func_42(g_301)));
                    if (l_1743)
                    {
                        long long l_1744[6][2] = {{0x83F7218B8CBE54C8LL,0x2210A95DED570B6ELL},{0x83F7218B8CBE54C8LL,0x83F7218B8CBE54C8LL},{0x2210A95DED570B6ELL,0x83F7218B8CBE54C8LL},{0x83F7218B8CBE54C8LL,0x2210A95DED570B6ELL},{0x83F7218B8CBE54C8LL,0x83F7218B8CBE54C8LL},{0x2210A95DED570B6ELL,0x83F7218B8CBE54C8LL}};
                        int l_1772 = 0x5C01356EL;
                        int i, j;
                        g_604.f3 = g_301.f2;
                        l_1706[0].f8 = (l_1744[2][0] ^ ((((g_276 < g_604.f2) <= (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(g_1305[3][6], 4)) > (g_46 == (+func_66((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((((((l_744.f3 > 0UL) & (safe_add_func_uint8_t_u_u(((((l_1611 = func_66((safe_rshift_func_uint16_t_u_s(l_1736, func_66(((safe_lshift_func_uint8_t_u_u(0x4BL, 3)) ^ 7L), g_301.f6, p_32, p_32, g_451[3][0].f1))), g_451[3][0].f0, g_1459, g_728, l_1759[3][4])) > g_51) & g_362) == g_250[2]), p_32))) < 0L) <= p_32) ^ p_32) >= g_361[5]), p_32)), g_635)), g_451[3][0].f3, g_1200, p_32, g_801)))), 0x8DD6L))) ^ p_32) && l_41[0]));
                        l_1771 = ((((safe_rshift_func_uint8_t_u_s(l_1762, 4)) || (+l_1614.f3)) < func_66(g_451[3][0].f1, l_1612.f7, ((g_1198 & 1UL) & (safe_sub_func_int64_t_s_s((g_174[0][1] = (safe_sub_func_uint8_t_u_u(255UL, (~(safe_div_func_int16_t_s_s(g_743, (safe_add_func_int8_t_s_s((!g_1305[0][8]), 1UL)))))))), l_1614.f7))), g_301.f3, l_1706[0].f1)) <= p_32);
                        --l_1773[2];
                    }
                    else
                    {
                        return p_32;
                    }
                    for (l_1612.f3 = 17; (l_1612.f3 < (-9)); --l_1612.f3)
                    {
                        unsigned l_1786 = 0x82DA40B6L;
                        char l_1787 = 1L;
                        unsigned long long l_1789 = 0x65922A6F5E4B17FBLL;
                        int l_1790[10] = {7L,(-8L),0xFC9AE932L,(-8L),7L,7L,(-8L),0xFC9AE932L,(-8L),7L};
                        int i;
                        l_1790[5] = func_66(((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((+(p_32 = ((l_1622 == (safe_sub_func_int64_t_s_s((l_1742.f3 = g_174[1][1]), func_66(g_485[0][0], g_934, (g_250[1] &= func_66(l_1742.f7, g_883, p_32, (l_1706[0].f3 && (func_66(p_32, l_1786, l_1787, g_604.f7, p_32) < l_1788)), l_1706[0].f7)), p_32, p_32)))) != l_1789))), g_7)), g_1123)) < l_1706[0].f4), l_1614.f8, l_1736, l_1742.f2, l_1706[0].f1);
                        l_1797 = (0L ^ func_47(((l_1706[0].f6 & (safe_sub_func_int8_t_s_s(func_47(g_308), ((l_1706[0].f8 = p_32) || ((l_1771 ^= g_337) >= (safe_div_func_int8_t_s_s(p_32, (+0x70L)))))))) > ((safe_div_func_int16_t_s_s(p_32, p_32)) < l_1612.f7))));
                    }
                    g_451[1][0] = g_604;
                }
                else
                {
                    return g_885;
                }
                return l_41[5];
            }
            for (g_177 = 0; (g_177 < (-10)); --g_177)
            {
                char l_1824 = (-5L);
                int l_1828 = 0xBFC334AFL;
                int l_1831 = 0xB177C7A3L;
                if ((safe_div_func_int8_t_s_s(l_1612.f3, (0x3B34D1200B170F02LL && (p_32 != (safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((p_32 >= (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s((p_32 < l_1706[0].f4))) >= g_451[3][0].f6), 3)), (((safe_unary_minus_func_int64_t_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(g_728, (safe_div_func_int32_t_s_s(p_32, 4294967295UL)))), l_1824)), 7)), 13)))) || p_32) | l_1614.f5)))), l_744.f7)) & 2UL), l_1824)))))))
                {
                    unsigned long long l_1827 = 0xF3831D1EDF6DCACELL;
                    l_1827 &= (safe_lshift_func_int8_t_s_s(p_32, 5));
                }
                else
                {
                    char l_1829 = (-5L);
                    int l_1835 = 0x9C24B5B1L;
                    g_1832[7][2]++;
                    if (p_32)
                        continue;
                    l_1835 = (g_1830 ^ (g_301.f2 |= 6L));
                    l_1836 = (g_301.f0 & (+g_885));
                }
                g_146 &= (((0x0380A68ADAB4DDB4LL >= (g_1305[2][0] &= (((g_635 = func_66(p_32, g_659, l_1837, ((l_1831 |= ((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(7L, p_32)), l_1842[2][2])) && l_1614.f7)) == (+1L)), g_308)) >= 0L) <= 0x8CL))) | (-2L)) & l_1828);
            }
            for (l_1545 = 23; (l_1545 <= 24); ++l_1545)
            {
                unsigned l_1863 = 0x74A63FB5L;
                struct S0 l_1864[8] = {{18446744073709551615UL,0,0xD28ECECDD9F8F1F8LL,0xDC238B55L,0x70L,0x65067279L,0UL,0xD8L,1L},{0xE30118FAL,0,1L,0x933DD9F6L,0xD8L,0xDE34DDAAL,1UL,-1L,0x1D894848L},{18446744073709551615UL,0,0xD28ECECDD9F8F1F8LL,0xDC238B55L,0x70L,0x65067279L,0UL,0xD8L,1L},{18446744073709551615UL,0,0xD28ECECDD9F8F1F8LL,0xDC238B55L,0x70L,0x65067279L,0UL,0xD8L,1L},{0xE30118FAL,0,1L,0x933DD9F6L,0xD8L,0xDE34DDAAL,1UL,-1L,0x1D894848L},{18446744073709551615UL,0,0xD28ECECDD9F8F1F8LL,0xDC238B55L,0x70L,0x65067279L,0UL,0xD8L,1L},{18446744073709551615UL,0,0xD28ECECDD9F8F1F8LL,0xDC238B55L,0x70L,0x65067279L,0UL,0xD8L,1L},{0xE30118FAL,0,1L,0x933DD9F6L,0xD8L,0xDE34DDAAL,1UL,-1L,0x1D894848L}};
                short l_1868 = 0x6F32L;
                int l_1870 = (-5L);
                int l_1871 = 0x39A72538L;
                int l_1872 = 4L;
                int i;
                if (func_60((l_1550 |= (l_1842[0][1] >= (safe_mod_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_uint8_t_u_u((p_32 ^ l_1549), 2)))))), (safe_rshift_func_uint8_t_u_u(((g_451[3][0].f6 = func_60((7UL && ((safe_sub_func_int32_t_s_s(((func_66(((0x65ACB06BL | (+(g_175 & l_1706[0].f6))) ^ 0x3EL), g_986, l_1614.f3, g_3, g_1013) || g_301.f7) > p_32), l_1762)) && 0x7DL)), l_1612.f4)) ^ g_1305[2][7]), 6))))
                {
                    int l_1857 = 0x6C8C87EAL;
                    int l_1862 = 0L;
                    g_451[3][0] = func_42((l_1864[2] = func_44(((safe_lshift_func_int8_t_s_u(func_60(g_884, func_47(g_1417)), (((l_1863 = (safe_add_func_uint8_t_u_u(g_1609, (l_1862 = (g_1533[1] >= ((l_1857 = p_32) && ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(0x96BBL, (p_32 <= 0xB4D8L))), 0)) || p_32))))))) | 1UL) >= g_884))) | l_1706[0].f2))));
                    return l_1862;
                }
                else
                {
                    for (g_139 = (-24); (g_139 >= 24); g_139++)
                    {
                        unsigned l_1867 = 0x93ACCEE8L;
                        g_301.f3 = (l_1867 &= 0x1FC34F2CL);
                        return p_32;
                    }
                    --g_1873;
                }
            }
        }
    }
    return g_339;
}







static unsigned long long func_36(unsigned short p_37, struct S0 p_38, unsigned long long p_39, struct S0 p_40)
{
    char l_752[8][4] = {{0x27L,0xE1L,(-10L),(-1L)},{(-10L),(-1L),(-10L),0xE1L},{0x27L,(-1L),0L,(-1L)},{0x27L,0xE1L,(-10L),(-1L)},{(-10L),(-1L),(-10L),0xE1L},{0x27L,(-1L),0L,(-1L)},{0x27L,0xE1L,(-10L),(-1L)},{(-10L),(-1L),(-10L),0xE1L}};
    long long l_769 = (-9L);
    int l_797 = 0x2B23D5E2L;
    int l_798[9][8][3] = {{{(-1L),7L,6L},{0xBCB41988L,0xEC8313FCL,0xC6980DD0L},{0x26F49890L,0x1740C8C4L,0x26F49890L},{0x07F1A144L,0xC6980DD0L,0x01D137AEL},{(-1L),0xF0C9FC2DL,0x67E1405EL},{0xF55FAE9BL,0xEC8313FCL,0x2DBC25A3L},{0x88CCDD4FL,(-9L),1L},{0xF55FAE9BL,0x5D28405DL,0xF2CD86A4L}},{{(-1L),0L,6L},{0x07F1A144L,0x206CF713L,0x5D28405DL},{0x26F49890L,0x13D08D36L,1L},{0xBCB41988L,0xC6980DD0L,(-9L)},{(-1L),0x13D08D36L,0x67E1405EL},{0x206CF713L,0x206CF713L,0x4C6AD6DAL},{0x88CCDD4FL,0L,0x26F49890L},{0xEC8313FCL,0x5D28405DL,1L}},{{(-1L),(-9L),6L},{0xA3660804L,0xEC8313FCL,1L},{0x26F49890L,0xF0C9FC2DL,0x26F49890L},{(-1L),0xC6980DD0L,0x4C6AD6DAL},{(-1L),0x1740C8C4L,0x67E1405EL},{1L,0xEC8313FCL,(-9L)},{0x88CCDD4FL,7L,1L},{1L,0x5D28405DL,0x5D28405DL}},{{(-1L),0x952808D7L,6L},{(-1L),0x206CF713L,0xF2CD86A4L},{0x26F49890L,0x390ADCA7L,1L},{0xA3660804L,0xC6980DD0L,0x2DBC25A3L},{(-1L),0x390ADCA7L,0x67E1405EL},{0xEC8313FCL,0x206CF713L,0x01D137AEL},{0x88CCDD4FL,0x952808D7L,0x26F49890L},{0x206CF713L,0x5D28405DL,0xC6980DD0L}},{{(-1L),7L,6L},{0xBCB41988L,0xEC8313FCL,0xC6980DD0L},{0x26F49890L,0x1740C8C4L,0x26F49890L},{0x07F1A144L,0xC6980DD0L,0x01D137AEL},{(-1L),0xF0C9FC2DL,0x67E1405EL},{0xF55FAE9BL,0xEC8313FCL,0x2DBC25A3L},{0x88CCDD4FL,(-9L),1L},{0xF55FAE9BL,0x5D28405DL,0xF2CD86A4L}},{{(-1L),0L,6L},{0x07F1A144L,0x206CF713L,0x5D28405DL},{0x26F49890L,0x13D08D36L,1L},{0xBCB41988L,0xC6980DD0L,(-9L)},{(-1L),0x13D08D36L,0x67E1405EL},{0x206CF713L,0x206CF713L,0x4C6AD6DAL},{0x88CCDD4FL,0L,0x26F49890L},{0xEC8313FCL,0x5D28405DL,1L}},{{(-1L),(-9L),6L},{0xA3660804L,0xEC8313FCL,1L},{0x26F49890L,0xF0C9FC2DL,0x26F49890L},{(-1L),0xC6980DD0L,0x4C6AD6DAL},{(-1L),0x1740C8C4L,0x67E1405EL},{1L,0xEC8313FCL,(-9L)},{0x88CCDD4FL,7L,1L},{1L,0x5D28405DL,0x5D28405DL}},{{(-1L),0x952808D7L,6L},{(-1L),0x206CF713L,0xF2CD86A4L},{0x26F49890L,0x390ADCA7L,1L},{0xA3660804L,0xC6980DD0L,0x2DBC25A3L},{(-1L),0x390ADCA7L,0x67E1405EL},{0xEC8313FCL,0x206CF713L,0x01D137AEL},{0x88CCDD4FL,0x952808D7L,0x26F49890L},{0x206CF713L,0x5D28405DL,0xC6980DD0L}},{{(-1L),7L,6L},{0xBCB41988L,0xEC8313FCL,0xC6980DD0L},{0x26F49890L,0x1740C8C4L,0x26F49890L},{0x07F1A144L,0xC6980DD0L,0x01D137AEL},{(-1L),0xF0C9FC2DL,0x67E1405EL},{0xF55FAE9BL,0xEC8313FCL,0x2DBC25A3L},{0x88CCDD4FL,(-9L),1L},{0xF55FAE9BL,0x5D28405DL,0xF2CD86A4L}}};
    unsigned l_820 = 0x53BF6FF4L;
    unsigned long long l_824 = 0UL;
    unsigned char l_868 = 255UL;
    struct S0 l_988 = {5UL,0,0L,0x327CC03EL,0UL,0x87650725L,18446744073709551615UL,1L,0x611D3D39L};
    unsigned long long l_1001[10][10] = {{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL,1UL,2UL,2UL,1UL,0x15B630CB745E87C3LL},{1UL,2UL,18446744073709551608UL,0x15B630CB745E87C3LL,2UL,0x15B630CB745E87C3LL,18446744073709551608UL,18446744073709551608UL,0x15B630CB745E87C3LL,2UL},{0x15B630CB745E87C3LL,18446744073709551608UL,18446744073709551608UL,0x15B630CB745E87C3LL,2UL,0x15B630CB745E87C3LL,18446744073709551608UL,18446744073709551608UL,0x15B630CB745E87C3LL,2UL},{0x15B630CB745E87C3LL,18446744073709551608UL,18446744073709551608UL,0x15B630CB745E87C3LL,2UL,0x15B630CB745E87C3LL,18446744073709551608UL,18446744073709551608UL,0x15B630CB745E87C3LL,2UL}};
    unsigned l_1095[8][6] = {{0xA5F646A2L,4294967295UL,4294967295UL,0xA5F646A2L,0x0F174B86L,0xACEBD6D7L},{0xA5F646A2L,0x0F174B86L,0xACEBD6D7L,7UL,4294967295UL,0xACEBD6D7L},{9UL,0x2053674DL,4294967295UL,1UL,4294967295UL,0x2053674DL},{7UL,0x0F174B86L,4294967292UL,1UL,0x0F174B86L,4294967295UL},{9UL,4294967295UL,4294967292UL,7UL,0x2053674DL,0x2053674DL},{0xA5F646A2L,4294967295UL,4294967295UL,0xA5F646A2L,0x0F174B86L,0xACEBD6D7L},{0xA5F646A2L,0x0F174B86L,0xACEBD6D7L,7UL,4294967295UL,0xACEBD6D7L},{9UL,0x2053674DL,4294967295UL,1UL,4294967295UL,0x2053674DL}};
    int l_1145[1];
    short l_1148 = 0x89E1L;
    int l_1163 = 0x67D560CBL;
    int l_1385[10][7][2] = {{{1L,0x3582DEA9L},{(-1L),0xA7CBAEACL},{0x4D89B909L,1L},{0xA7CBAEACL,0L},{(-7L),8L},{0xC4365E56L,8L},{(-7L),0L}},{{0xA7CBAEACL,1L},{0x4D89B909L,0xA7CBAEACL},{(-1L),4L},{0x4D89B909L,0x8A6FBCF3L},{0L,0xF3FEEAFAL},{0x8A6FBCF3L,0x38E058E5L},{0L,0L}},{{3L,0x3582DEA9L},{0x1AC7512AL,0x38E058E5L},{5L,0xC4365E56L},{0L,5L},{0xF3FEEAFAL,4L},{0xF3FEEAFAL,5L},{0L,0xC4365E56L}},{{5L,0x38E058E5L},{0x1AC7512AL,0x3582DEA9L},{3L,0L},{0L,0x38E058E5L},{0x8A6FBCF3L,0xF3FEEAFAL},{0L,0x8A6FBCF3L},{0x4D89B909L,4L}},{{0xC4365E56L,1L},{0L,0x4D89B909L},{1L,0x38E058E5L},{0x3582DEA9L,0x1AC7512AL},{3L,0x1AC7512AL},{0x3582DEA9L,0x38E058E5L},{1L,0x4D89B909L}},{{0L,1L},{0xC4365E56L,4L},{0x4D89B909L,0x8A6FBCF3L},{0L,0xF3FEEAFAL},{0x8A6FBCF3L,0x38E058E5L},{0L,0L},{3L,0x3582DEA9L}},{{0x1AC7512AL,0x38E058E5L},{5L,0xC4365E56L},{0L,5L},{0xF3FEEAFAL,4L},{0xF3FEEAFAL,5L},{0L,0xC4365E56L},{5L,0x38E058E5L}},{{0x1AC7512AL,0x3582DEA9L},{3L,0L},{0L,0x38E058E5L},{0x8A6FBCF3L,0xF3FEEAFAL},{0L,0x8A6FBCF3L},{0x4D89B909L,4L},{0xC4365E56L,1L}},{{0L,0x4D89B909L},{1L,(-10L)},{0x4D89B909L,0xC4365E56L},{0L,0xC4365E56L},{0x4D89B909L,(-10L)},{0x3582DEA9L,0x8A6FBCF3L},{0x6C1BD893L,0x3582DEA9L}},{{5L,0L},{0x8A6FBCF3L,0x1AC7512AL},{0x6C1BD893L,1L},{0x1AC7512AL,(-10L)},{0xF3FEEAFAL,0xF3FEEAFAL},{0L,0x4D89B909L},{0xC4365E56L,(-10L)}}};
    unsigned char l_1386 = 0x06L;
    int l_1537[9];
    unsigned char l_1542[6] = {0x9FL,0x9FL,0x7AL,0x9FL,0x9FL,0x7AL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1145[i] = 0xE1AB2607L;
    for (i = 0; i < 9; i++)
        l_1537[i] = 0xBA6F12E6L;
    if (g_604.f8)
    {
        return g_635;
    }
    else
    {
        unsigned long long l_745 = 0x3D51671E8E7EBF46LL;
        struct S0 l_746 = {18446744073709551615UL,0,0xC6691FBD33CC498ELL,0x83D355FDL,0x20L,0x15B76557L,0xA6BE8484AE1CA2D8LL,-1L,0xCC47C30AL};
        long long l_747 = (-1L);
        int l_800[2];
        int i;
        for (i = 0; i < 2; i++)
            l_800[i] = 0x01F68DABL;
        l_746 = func_44(l_745);
        g_301.f8 &= l_747;
        if ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_451[3][0].f3 != (l_752[2][0] || (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(0x33L, ((18446744073709551615UL != (safe_mod_func_uint16_t_u_u(func_72(l_746.f4, (((safe_lshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_s(g_451[3][0].f4, 7)) >= (safe_sub_func_uint16_t_u_u(g_197, (((safe_mod_func_uint16_t_u_u(g_3, l_752[0][3])) & 2L) <= 18446744073709551607UL)))) & l_746.f1) <= g_51) > l_746.f0), l_745)), 5)) > g_139) | g_604.f6)), p_40.f1))) != l_769))) == (-5L)), p_40.f8)))), 0x67L)) > 0x2595L), 13)))
        {
            unsigned long long l_792 = 9UL;
            struct S0 l_805 = {4UL,0,0xCA16C589F143837ELL,0x70AADA04L,246UL,0x4605B831L,18446744073709551615UL,0L,0x94725652L};
            l_746.f8 = l_752[0][3];
            if ((func_60(g_301.f2, l_769) ^ g_604.f6))
            {
                unsigned l_781 = 1UL;
                for (g_301.f3 = 0; (g_301.f3 <= 1); g_301.f3 += 1)
                {
                    unsigned l_770 = 0x478C6B7FL;
                    p_38.f3 = g_301.f2;
                    p_40 = g_451[3][0];
                    for (g_727 = 0; (g_727 <= 1); g_727 += 1)
                    {
                        int i, j;
                        l_770 = g_174[(g_301.f3 + 3)][g_727];
                        p_38.f3 = 0L;
                        p_38.f3 = (safe_rshift_func_uint16_t_u_s((g_301.f5 | ((safe_sub_func_uint64_t_u_u(p_40.f4, p_40.f6)) ^ (safe_sub_func_uint32_t_u_u((g_301.f1 = 6UL), ((safe_mod_func_uint64_t_u_u(g_301.f7, g_174[(g_301.f3 + 3)][g_727])) & (!(safe_sub_func_int8_t_s_s(0x2DL, g_301.f5)))))))), 11));
                        p_40.f3 = (((l_781 | g_250[1]) ^ (0xCA86C58CC8D1B7BELL < 9UL)) == (safe_lshift_func_uint8_t_u_s(0xB0L, 3)));
                    }
                }
                g_604.f8 |= g_784;
            }
            else
            {
                int l_787[6] = {0x8211E404L,0x8211E404L,0x8211E404L,0x8211E404L,0x8211E404L,0x8211E404L};
                unsigned long long l_793[1][6][4] = {{{0x98899CFCBF1BAC88LL,0xDCD2D6E8B0E9B09ALL,0xDCD2D6E8B0E9B09ALL,0x98899CFCBF1BAC88LL},{0UL,0xDCD2D6E8B0E9B09ALL,0UL,0xDCD2D6E8B0E9B09ALL},{0xDCD2D6E8B0E9B09ALL,0x75D027B8827D6915LL,0UL,0UL},{0UL,0UL,0xDCD2D6E8B0E9B09ALL,0UL},{0x98899CFCBF1BAC88LL,0x75D027B8827D6915LL,0x98899CFCBF1BAC88LL,0xDCD2D6E8B0E9B09ALL},{0x98899CFCBF1BAC88LL,0xDCD2D6E8B0E9B09ALL,0xDCD2D6E8B0E9B09ALL,0x98899CFCBF1BAC88LL}}};
                int i, j, k;
                g_604.f8 |= (safe_rshift_func_int16_t_s_u((((g_362 ^ (0xF56DL && g_361[3])) || (p_40.f4 = (l_787[3] || ((0xD2FBL <= (g_784 <= l_752[4][2])) | (((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((func_66(l_792, (l_752[6][2] | l_792), g_339, l_787[3], g_604.f1) || 0x7A1EL) > 0L), 4)), p_40.f5)) >= l_793[0][3][0]) && l_745))))) < 0x881B9F472164896CLL), p_40.f7));
                for (g_743 = (-20); (g_743 >= 7); g_743 = safe_add_func_uint16_t_u_u(g_743, 8))
                {
                    return l_769;
                }
                for (g_335 = 0; (g_335 <= 4); g_335 += 1)
                {
                    struct S0 l_796 = {0x7534DAB6L,0,2L,0x7DD96E50L,1UL,3L,18446744073709551610UL,0xB6L,0xA1675556L};
                    struct S0 l_804 = {0UL,0,0xC7D2D3EB7C111345LL,0x0602BBC2L,0xCFL,-1L,0x6D3AADE1FC13B727LL,0x4AL,-2L};
                    l_796 = g_451[3][0];
                    for (g_301.f0 = 0; (g_301.f0 <= 4); g_301.f0 += 1)
                    {
                        short l_799[2][5] = {{(-10L),2L,0L,2L,(-10L)},{(-10L),2L,0L,2L,(-10L)}};
                        int i, j;
                        g_801--;
                        p_38 = (p_40 = p_38);
                        p_40.f3 ^= (g_301.f5 != g_361[3]);
                        l_805 = (g_451[3][0] = l_804);
                    }
                }
            }
            l_800[1] &= ((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(p_40.f8, (((safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((((g_174[0][1] |= (-5L)) & (safe_mod_func_uint64_t_u_u((((safe_div_func_uint8_t_u_u((((p_38.f6 || l_769) < 0x4199L) == ((l_746.f6 < (g_451[3][0].f6 = ((p_38.f4 = ((g_604.f2 = g_784) < (safe_add_func_uint16_t_u_u((p_40.f6 || ((((((g_361[3] ^= func_66(l_797, g_451[3][0].f2, g_743, g_451[3][0].f3, l_746.f3)) != 0xEEL) ^ 0x32909AD71D24C113LL) && 6UL) && 0x60162704L) != g_485[0][0])), p_40.f0)))) != l_752[7][0]))) & p_38.f0)), g_362)) | g_250[1]) ^ 0x15L), p_38.f0))) & l_820), g_727)) | l_746.f3), p_40.f0)) != 249UL) && l_820))), 3)) > g_451[3][0].f4);
            for (l_805.f4 = 25; (l_805.f4 >= 28); l_805.f4++)
            {
                for (l_805.f8 = 0; (l_805.f8 <= 2); l_805.f8 += 1)
                {
                    for (p_40.f5 = 0; (p_40.f5 <= 2); p_40.f5 += 1)
                    {
                        int i, j, k;
                        l_798[p_40.f5][(l_805.f8 + 2)][p_40.f5] |= (-4L);
                    }
                    g_177 = (g_604.f8 = l_820);
                }
                for (g_275 = 0; (g_275 <= 1); g_275 += 1)
                {
                    struct S0 l_823 = {18446744073709551608UL,0,0x003BEC314BBD98B6LL,1L,0x91L,0x09A958D7L,0xEC37768BB187550DLL,-9L,0xA9E5275FL};
                    int i;
                    l_746 = l_823;
                    ++l_824;
                }
            }
        }
        else
        {
            return p_38.f0;
        }
    }
    if ((l_797 || (safe_div_func_int64_t_s_s(l_752[2][0], ((safe_lshift_func_int8_t_s_s(((func_72(g_451[3][0].f4, ((g_485[0][0] = (safe_sub_func_uint8_t_u_u(255UL, (0x04BBD30AL <= (g_801 = func_72(p_38.f3, (safe_rshift_func_uint8_t_u_u((g_301.f0 & 0xAFL), (p_40.f4 = g_301.f4))))))))) <= p_40.f7)) & g_451[3][0].f6) ^ l_820), g_743)) | l_797)))))
    {
        int l_835 = (-1L);
        unsigned l_838 = 8UL;
        int l_843 = 0x1CA729DFL;
        short l_857 = (-1L);
        int l_987 = (-7L);
        unsigned char l_1017 = 0x96L;
        unsigned char l_1023 = 0x93L;
        int l_1057 = 0xD2CC84DBL;
        int l_1058 = 0L;
        struct S0 l_1107 = {0x2CD0BACFL,0,0xFD04843E54AB8C2ELL,0x51D48F1CL,0xB9L,0xACDE950BL,0UL,0x46L,0x4193B902L};
        int l_1177 = 8L;
        int l_1234[7] = {0L,0xAEA0B7D5L,0xAEA0B7D5L,0L,0xAEA0B7D5L,0xAEA0B7D5L,0L};
        unsigned char l_1265 = 255UL;
        unsigned short l_1270 = 0UL;
        int l_1333[10][4][3] = {{{0x30DC30C0L,0L,0x3FE75952L},{0x7A478A95L,0x6B768501L,0x40F3B2A4L},{0L,0xB6BAB9F5L,0x3FE75952L},{8L,(-9L),0x30DC30C0L}},{{8L,(-6L),0x7A478A95L},{0L,0x7FCA4790L,0x99100D68L},{8L,8L,5L},{0x0B037A31L,0x2812D4E9L,5L}},{{1L,0x40F3B2A4L,0x99100D68L},{0xCD4301D0L,0x47210398L,8L},{1L,0L,0x0B037A31L},{0x0B037A31L,0L,1L}},{{8L,0x47210398L,0xCD4301D0L},{0x99100D68L,0x40F3B2A4L,1L},{5L,0x2812D4E9L,0x0B037A31L},{5L,8L,8L}},{{0x99100D68L,0x06578F45L,0x99100D68L},{8L,8L,5L},{0x0B037A31L,0x2812D4E9L,5L},{1L,0x40F3B2A4L,0x99100D68L}},{{0xCD4301D0L,0x47210398L,8L},{1L,0L,0x0B037A31L},{0x0B037A31L,0L,1L},{8L,0x47210398L,0xCD4301D0L}},{{0x99100D68L,0x40F3B2A4L,1L},{5L,0x2812D4E9L,0x0B037A31L},{5L,8L,8L},{0x99100D68L,0x06578F45L,0x99100D68L}},{{8L,8L,5L},{0x0B037A31L,0x2812D4E9L,5L},{1L,0x40F3B2A4L,0x99100D68L},{0xCD4301D0L,0x47210398L,8L}},{{1L,0L,0x0B037A31L},{0x0B037A31L,0L,1L},{8L,0x47210398L,0xCD4301D0L},{0x99100D68L,0x40F3B2A4L,1L}},{{5L,0x2812D4E9L,0x0B037A31L},{5L,8L,0x0B037A31L},{0xCD4301D0L,0x619A03F0L,0xCD4301D0L},{0x0B037A31L,0x7A478A95L,8L}}};
        unsigned long long l_1345 = 0xA646314F879EFB77LL;
        struct S0 l_1387 = {0x68B63A2BL,0,-1L,1L,0xB5L,0L,0xF85048BDC39B21C9LL,-3L,0xCBCB10F1L};
        long long l_1458 = 0xD8277959C3210F56LL;
        int i, j, k;
        if ((func_47(l_835) && func_66(((l_838 ^= (safe_lshift_func_uint16_t_u_u(g_308, 5))) >= (safe_add_func_uint8_t_u_u(p_40.f8, (func_60(l_752[6][2], g_3) && p_40.f6)))), (p_40.f0 = (safe_add_func_uint64_t_u_u(g_636[1][0], 0x533F7B2B286FB82CLL))), l_835, p_38.f0, l_843)))
        {
            int l_850 = (-8L);
            unsigned l_851[2][5] = {{0xCA5CC917L,18446744073709551607UL,0xCA5CC917L,0x3A67670AL,0x3A67670AL},{0xCA5CC917L,18446744073709551607UL,0xCA5CC917L,0x3A67670AL,0x3A67670AL}};
            unsigned char l_852[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_852[i] = 247UL;
            p_38.f8 = ((func_60(g_301.f3, (((g_727 == ((l_797 |= (2L >= (g_335 = ((safe_add_func_uint32_t_u_u((p_38.f5 > (p_37 & p_38.f4)), ((0xA336L > (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_301.f4 &= (g_301.f3 < (l_851[0][4] = l_850))), l_852[1])), g_451[3][0].f8))) | 1L))) | 0UL)))) != p_40.f6)) & g_3) > l_838)) == l_838) <= g_337);
        }
        else
        {
            unsigned char l_869 = 1UL;
            int l_870 = (-1L);
            int l_871 = 0x957B29FAL;
            int l_872 = 0x832128E4L;
            struct S0 l_955 = {18446744073709551615UL,0,0L,0xFADE5030L,5UL,0L,1UL,7L,-10L};
            g_451[3][0].f8 = (((func_47((g_361[7] &= func_66((safe_sub_func_uint64_t_u_u((g_604.f6 > (g_451[3][0].f4 &= 1UL)), (+(safe_add_func_uint32_t_u_u(func_66(l_835, l_835, l_857, l_843, p_39), (g_801 >= p_40.f4)))))), g_3, g_604.f8, p_39, p_40.f7))) && (-4L)) ^ p_38.f8) > 3L);
            if ((l_870 = ((((safe_rshift_func_uint16_t_u_s((0UL && (((p_39 || ((((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((p_38.f6++), (l_838 < (safe_div_func_uint32_t_u_u(1UL, (4UL || l_835)))))), (-9L))) < p_39) >= (~func_47(func_47((p_38.f4 < 0xFAE3BEF5C57E0738LL))))) != l_843)) && p_40.f2) && l_857)), 11)) & l_868) != g_3) > l_869)))
            {
                unsigned l_873 = 0xB411FF16L;
                int l_881 = 0xA4A1C75DL;
                int l_882 = 0x8A904D66L;
                --l_873;
                for (p_38.f6 = (-19); (p_38.f6 <= 50); ++p_38.f6)
                {
                    int l_880 = 1L;
                    for (g_126 = (-20); (g_126 <= 3); g_126 = safe_add_func_int16_t_s_s(g_126, 7))
                    {
                        if (g_146)
                            break;
                        if (l_835)
                            break;
                        g_885++;
                        l_835 = p_37;
                    }
                }
            }
            else
            {
                long long l_896 = (-3L);
                int l_897 = 0xB418B9FDL;
                struct S0 l_907 = {0UL,0,0x2D51FAD11835EB80LL,0x15D2B5B2L,0x09L,-1L,18446744073709551607UL,1L,0L};
                short l_967 = 1L;
                g_451[3][0].f3 = (l_798[5][1][2] = (g_604.f3 |= (p_38.f3 = ((safe_div_func_int16_t_s_s(func_66((g_46 ^ (p_40.f6 = (safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u(l_769, 1)) != (func_66((safe_sub_func_int32_t_s_s((l_897 |= l_896), 0x237FBD0CL)), func_72(g_883, l_857), (safe_rshift_func_int16_t_s_s((((((safe_mod_func_uint64_t_u_u((l_896 > (safe_sub_func_uint64_t_u_u(p_40.f1, 0x3ECEC50D0E1221ECLL))), 0xBC56DAC6184093C5LL)) ^ 18446744073709551615UL) == l_869) < l_871) || p_38.f7), 15)), l_857, g_604.f1) == 4294967295UL)) == g_604.f7), 0xE734BEF4L)))), g_51, l_872, l_896, g_727), p_38.f2)) & l_871))));
                g_906 |= ((p_37--) < func_47(l_752[2][0]));
                if (g_636[1][0])
                {
                    l_907 = g_451[3][0];
                    for (g_301.f8 = 17; (g_301.f8 <= (-8)); g_301.f8--)
                    {
                        g_604 = p_38;
                        g_604.f3 = l_907.f3;
                        g_451[0][0] = p_38;
                    }
                }
                else
                {
                    p_38 = g_604;
                }
                for (g_604.f8 = 0; (g_604.f8 != 1); g_604.f8 = safe_add_func_uint64_t_u_u(g_604.f8, 9))
                {
                    int l_970 = 0xE8B42290L;
                    struct S0 l_973 = {8UL,0,0x70A45381B3F03029LL,0x109D5D20L,255UL,0x5097957DL,0xCE0CC969D10D252DLL,0L,-3L};
                    for (g_301.f6 = 28; (g_301.f6 < 18); g_301.f6--)
                    {
                        short l_918[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_918[i] = 0xE8EAL;
                        g_146 = (((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s(l_918[0], (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(l_843, (safe_mul_func_int16_t_s_s(g_451[3][0].f2, ((safe_sub_func_int32_t_s_s(p_38.f7, g_51)) > 0xF0E74870L))))) < (g_175 = (!p_40.f1))), 12)), 4294967295UL)))), l_857)) <= 4294967295UL) || g_604.f2);
                    }
                    for (g_883 = 0; (g_883 > (-18)); g_883--)
                    {
                        int l_931 = 0x9526A793L;
                        int l_932 = 1L;
                        int l_933 = (-1L);
                        unsigned char l_935 = 1UL;
                        --l_935;
                        g_451[3][0].f3 = (p_38.f8 = (safe_add_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(g_301.f1, (safe_div_func_int16_t_s_s(0x070DL, (l_835 = (l_872 &= (g_250[2] > (safe_rshift_func_uint16_t_u_s(((+((g_485[0][0] ^ g_604.f2) | p_38.f4)) <= (l_907.f8 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_907.f3 = ((((g_301.f3 ^= p_40.f7) <= (safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint64_t_u_u((g_954[0][7] && (1UL < g_46)), l_870)) && 0UL) || p_37), 5))) < 0x19L) == l_871)), l_869)), 4)) <= 0xA5A5L))), p_38.f3))))))))) | l_907.f4), p_40.f3)));
                        if (g_727)
                            break;
                        l_955 = func_44(g_250[2]);
                    }
                    g_604.f3 = (l_798[8][3][2] >= 0x9EL);
                    if (g_727)
                    {
                        unsigned l_956 = 3UL;
                        l_956--;
                        g_146 |= p_39;
                    }
                    else
                    {
                        g_451[3][0].f3 ^= (safe_lshift_func_int16_t_s_s((((((safe_rshift_func_int16_t_s_s((g_784 | p_40.f7), g_174[0][1])) >= (safe_sub_func_int16_t_s_s((g_301.f3 || 0x90L), (safe_div_func_int32_t_s_s(l_967, (safe_sub_func_uint32_t_u_u(p_37, p_39))))))) || p_40.f3) >= l_907.f8) & l_970), 10));
                        g_177 ^= (g_126 >= (g_659 = (safe_mod_func_uint16_t_u_u(0x1F4EL, g_604.f8))));
                        l_973 = func_44(p_38.f1);
                        p_40 = g_604;
                    }
                }
            }
        }
        if ((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(g_784, (safe_rshift_func_uint16_t_u_u((0L & ((g_301.f1 <= (l_798[4][2][1] < l_820)) && p_38.f2)), 2)))), (0x765AA0E66E73D9C3LL && (safe_sub_func_uint64_t_u_u((((((g_986 = (((safe_rshift_func_int16_t_s_u(((g_174[3][0] & 0xDE88C158E5D5B992LL) || 0x6105AF5CL), g_635)) <= g_339) < g_419)) > 5UL) ^ p_40.f7) > g_934) == (-1L)), p_40.f3))))))
        {
            short l_998[9] = {0x4F5AL,0x4F5AL,(-1L),0x4F5AL,0x4F5AL,(-1L),0x4F5AL,0x4F5AL,(-1L)};
            int l_1006 = 0xB5399A1EL;
            char l_1010 = (-1L);
            int l_1011 = (-1L);
            long long l_1020 = 0xD2E4787BD366F5DDLL;
            short l_1022 = 1L;
            int l_1051 = 0x41981436L;
            int l_1052 = 1L;
            int l_1055[8] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            unsigned l_1084 = 0x07EBDCC7L;
            struct S0 l_1154[6] = {{0xB4EE40C9L,0,3L,0x25B807BEL,0x31L,0xB1F4E8A8L,0x81B2084DD33B0D36LL,-6L,0x8FA858E8L},{4UL,0,0x20C36EA5F8A12833LL,0x4B1196F2L,9UL,0x7E36B109L,0x615CD57FD619E73CLL,0L,8L},{0xB4EE40C9L,0,3L,0x25B807BEL,0x31L,0xB1F4E8A8L,0x81B2084DD33B0D36LL,-6L,0x8FA858E8L},{0xB4EE40C9L,0,3L,0x25B807BEL,0x31L,0xB1F4E8A8L,0x81B2084DD33B0D36LL,-6L,0x8FA858E8L},{4UL,0,0x20C36EA5F8A12833LL,0x4B1196F2L,9UL,0x7E36B109L,0x615CD57FD619E73CLL,0L,8L},{0xB4EE40C9L,0,3L,0x25B807BEL,0x31L,0xB1F4E8A8L,0x81B2084DD33B0D36LL,-6L,0x8FA858E8L}};
            short l_1161 = 5L;
            unsigned l_1164 = 0x5B33756BL;
            int i;
            if (((0L < (0x16L ^ 0xE7L)) == l_987))
            {
                short l_991 = 0x6C36L;
                p_38 = l_988;
                for (l_988.f5 = 0; (l_988.f5 >= (-2)); l_988.f5 = safe_sub_func_uint16_t_u_u(l_988.f5, 5))
                {
                    l_991 = (g_276 ^ 0x44E0L);
                    g_451[3][0].f8 = (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint32_t_u_u((0xCB54D6C4C2FC15FDLL ^ (l_991 != (func_60(l_991, (4L != (l_998[4] ^ l_991))) | g_604.f6))), (((g_954[0][7] = (((safe_mod_func_int16_t_s_s(l_998[6], 0x2541L)) | 0x976DE21FL) || 0x4796BEACL)) || g_174[0][1]) > p_38.f7))), l_991)) == p_40.f8), l_998[4]));
                    p_40.f8 = g_301.f7;
                    ++l_1001[1][5];
                }
                l_1006 &= (safe_lshift_func_int16_t_s_u((l_798[8][4][0] |= (-2L)), 7));
                p_40.f3 = p_38.f2;
            }
            else
            {
                unsigned l_1007 = 0x27669EB8L;
                int l_1008 = 0xE0174CC2L;
                int l_1009 = 0xA831B790L;
                int l_1021 = 2L;
                l_1007 = g_659;
                g_1013--;
                --l_1017;
                l_1023--;
            }
            if ((l_838 != l_843))
            {
                unsigned l_1036 = 18446744073709551607UL;
                p_38.f3 = g_604.f2;
                g_451[3][0].f3 = (safe_sub_func_int16_t_s_s(func_72(g_451[3][0].f2, (func_66(((safe_rshift_func_uint16_t_u_u((0xB1L ^ (p_38.f8 && ((g_126 |= ((safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s((g_197 != 0x196BE9B8L), ((p_38.f0 & (l_987 > (l_843 = (safe_lshift_func_int8_t_s_s(func_66(l_1036, p_38.f0, p_40.f6, p_40.f3, g_604.f2), 4))))) <= 0x2BL))), g_179)) < g_451[3][0].f0)) > g_175))), 8)) || (-1L)), g_451[3][0].f4, l_838, l_1036, l_998[1]) <= g_485[0][0])), p_40.f6));
                p_40 = g_301;
            }
            else
            {
                unsigned char l_1037 = 0xAEL;
                int l_1053 = 0xB98F4B37L;
                int l_1054 = 0x9DAE19DBL;
                int l_1056[4] = {0x2CFAC9E0L,0x2CFAC9E0L,0x2CFAC9E0L,0x2CFAC9E0L};
                unsigned short l_1061 = 65534UL;
                struct S0 l_1106 = {0UL,0,0x312A4CB2041038FBLL,0xA884EFE1L,1UL,5L,0x794B970E8880C3B8LL,2L,1L};
                int i;
                --l_1037;
                for (g_111 = 0; (g_111 <= 9); g_111 += 1)
                {
                    struct S0 l_1040 = {0x466F6293L,0,0x27376D79927ED0DBLL,0xD9173560L,0x31L,0xA32911CBL,1UL,2L,0x213AEBF1L};
                    long long l_1047 = (-7L);
                    unsigned long long l_1079 = 0x0CDA4A9AC025078CLL;
                    for (p_37 = 2; (p_37 <= 9); p_37 += 1)
                    {
                        unsigned l_1048 = 0x6060FC65L;
                        short l_1059 = 0L;
                        int l_1060 = (-3L);
                        int i;
                        l_1040 = g_451[1][0];
                        g_604.f8 |= (p_40.f8 = (p_38.f3 = ((safe_div_func_uint8_t_u_u(g_361[p_37], (++g_126))) < (safe_mod_func_uint8_t_u_u(g_451[3][0].f2, l_824)))));
                        l_1048--;
                        --l_1061;
                    }
                    for (p_38.f3 = (-1); (p_38.f3 <= (-11)); p_38.f3 = safe_sub_func_int32_t_s_s(p_38.f3, 6))
                    {
                        unsigned long long l_1078 = 0x1F392B5A6A978296LL;
                        p_40.f8 = p_40.f0;
                        if (p_40.f8)
                            continue;
                        p_38.f8 = ((g_636[0][8] != (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_451[3][0].f4, (((g_177 && 0x2A5CL) && g_884) > ((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((g_249 = l_1061), (g_1012 ^= (((safe_add_func_int16_t_s_s(((((0UL ^ l_1078) > 0x974904BAL) > p_38.f2) ^ 4UL), p_40.f5)) >= l_1040.f6) || l_988.f2)))), l_998[4])) && 0x913FA0B717F5FDECLL), 0xCE20L)) || 0x067B406133D9136ELL)))), l_1079))) == l_1040.f4);
                    }
                }
                for (p_38.f4 = (-14); (p_38.f4 < 44); p_38.f4 = safe_add_func_int8_t_s_s(p_38.f4, 7))
                {
                    short l_1100 = 0x8B61L;
                    int l_1101 = 0x30BAE18FL;
                    int l_1102[4] = {8L,8L,8L,8L};
                    int i;
                    p_38.f8 |= ((safe_add_func_uint8_t_u_u(((l_1052 = l_1084) <= ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(func_66(g_451[3][0].f3, l_1020, ((((0x3EE81B40FCE91F3ALL | (l_1051 || (safe_add_func_int16_t_s_s(((p_38.f7 = (p_39 | (l_1054 |= (g_451[3][0].f6 = func_72(((((p_40.f7 = (l_835 = (p_38.f0 < func_72(((safe_rshift_func_uint8_t_u_s(g_604.f8, (safe_mod_func_int64_t_s_s(((p_40.f0 >= (-1L)) <= p_40.f4), p_37)))) ^ l_1056[2]), g_451[3][0].f2)))) < l_843) == 1L) == l_1053), l_1055[1]))))) | g_604.f4), g_46)))) || l_1053) || 0xC5L) > l_1022), p_38.f3, p_38.f4), 7)), 0)) <= p_38.f1)), 0x1BL)) & g_986);
                    if ((((p_40.f7 |= (p_38.f7 = l_1095[5][1])) == (((safe_rshift_func_uint8_t_u_s(p_38.f8, (0xA2L && 0xB5L))) || g_743) <= l_1057)) | g_604.f7))
                    {
                        short l_1098 = 0x3011L;
                        int l_1099 = (-2L);
                        g_1103--;
                        if (g_604.f3)
                            continue;
                        p_38.f8 = g_604.f1;
                    }
                    else
                    {
                        l_1106 = g_451[2][0];
                        l_1107 = g_451[3][0];
                        p_40.f3 = l_1107.f2;
                        if (l_1106.f8)
                            continue;
                    }
                }
            }
            if ((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(3L, 4)), ((((p_40.f3 | p_40.f5) && (safe_rshift_func_uint8_t_u_u(((l_1107.f8 = (0xF209EE26L == (g_1012 != func_72(p_40.f1, l_843)))) == (1UL != p_40.f2)), 6))) >= g_604.f0) > (-4L)))))
            {
                int l_1122 = 0x520DDD3DL;
                struct S0 l_1124 = {18446744073709551615UL,0,-7L,-10L,1UL,0L,0x4381AF4F5486EAD3LL,9L,0x5B825BBAL};
                l_797 ^= (safe_sub_func_int16_t_s_s((l_988.f8 = (safe_sub_func_uint8_t_u_u(func_66((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(func_47(l_1122), (p_40.f0 | 0x2589B09DL))), p_38.f3)), (p_38.f7 | g_337), g_1123, (g_934 > 0L), g_51), g_337))), l_1095[6][1]));
                if (p_38.f0)
                {
                    l_1124 = func_44(g_451[3][0].f3);
                }
                else
                {
                    g_604.f8 |= p_40.f1;
                }
            }
            else
            {
                int l_1144 = 0x37F41F45L;
                int l_1153 = 4L;
                int l_1162[9][4][7] = {{{0xF9876C35L,0xD0FD7691L,0x9F645FEDL,0x3D1D7ADBL,0L,(-1L),1L},{(-6L),0xEAF04C7BL,1L,0x94A118A7L,(-7L),0xDCE41590L,(-9L)},{(-9L),(-6L),(-1L),0x8DB6565EL,0x7E4EADE8L,(-5L),(-6L)},{0x98C4EC1AL,1L,(-1L),(-6L),0xFD58B9B9L,(-1L),0x538F46EEL}},{{0xCFD3643BL,0x74C99BE7L,1L,(-1L),0x86D25B47L,0x7BEE3E03L,0x7E4EADE8L},{0x7BEE3E03L,0x94A118A7L,0x9F645FEDL,0x947C7344L,0xDCFF17B9L,0x947C7344L,0x9F645FEDL},{5L,5L,(-6L),1L,0L,0x8DB6565EL,0xD0FD7691L},{(-9L),0x538F46EEL,(-1L),0x86D25B47L,(-5L),0xBB0E23E7L,0xDCFF17B9L}},{{5L,0x97792547L,0x27B38A08L,0xEAF04C7BL,0xFD58B9B9L,0x0572B1E9L,(-8L)},{0L,(-1L),3L,0x97792547L,0xCFD3643BL,0xDFFAFCA8L,(-5L)},{0x98C4EC1AL,(-5L),0x86D25B47L,0xEFACBA97L,1L,0xE5AFCD53L,0xDFFAFCA8L},{0xAE601EFFL,0xDF9A1DEFL,0x7E4EADE8L,0x2BF24110L,5L,0x947C7344L,0x5D31BAE4L}},{{0x3909A194L,0xAE601EFFL,0x2BF24110L,(-1L),(-1L),(-1L),0x5D31BAE4L},{0x97792547L,1L,(-8L),(-1L),0x5D31BAE4L,0L,0xDFFAFCA8L},{0xDFFAFCA8L,(-6L),(-4L),0x947C7344L,0x5DE4DD28L,1L,(-5L)},{0xCFD3643BL,(-9L),1L,1L,(-9L),0xCFD3643BL,(-8L)}},{{0xF9876C35L,0x86D25B47L,0L,0x8DB6565EL,0xE774386EL,0xEFACBA97L,0xDCFF17B9L},{1L,0x98C4EC1AL,0xE774386EL,0xE5AFCD53L,0xEAF04C7BL,0x6A190D5AL,0xD0FD7691L},{(-8L),0x86D25B47L,(-6L),(-9L),8L,0xE774386EL,(-8L)},{(-1L),(-9L),1L,0L,0x7E4EADE8L,0xD0FD7691L,(-1L)}},{{1L,(-6L),0x947C7344L,0L,0xEAF04C7BL,(-9L),0xF9876C35L},{0x947C7344L,0x97792547L,0x7E4EADE8L,0xEFACBA97L,0x98C4EC1AL,1L,(-1L)},{(-7L),5L,(-8L),0xEFACBA97L,(-1L),0x6A190D5AL,0x7E4EADE8L},{(-4L),1L,(-7L),0L,0L,0xDCE41590L,5L}},{{8L,1L,0x9F645FEDL,0xDCFF17B9L,1L,1L,0xDCFF17B9L},{1L,0x94A118A7L,1L,(-1L),8L,5L,0x8DB6565EL},{0x2BF24110L,0xE5AFCD53L,1L,(-4L),0xDCE41590L,0x8DB6565EL,0xBB0E23E7L},{0xAE601EFFL,0xDCE41590L,(-5L),0x74C99BE7L,0x9F645FEDL,5L,0x0572B1E9L}},{{0x7E4EADE8L,0x3909A194L,0xEFACBA97L,(-1L),0L,1L,0xDFFAFCA8L},{0xCFD3643BL,0xFD58B9B9L,0x27B38A08L,0xF9876C35L,0x74C99BE7L,0xDCE41590L,0xE5AFCD53L},{(-5L),0x538F46EEL,(-1L),0x94A118A7L,0L,0x6A190D5AL,0x947C7344L},{1L,0L,(-8L),0x0572B1E9L,0xDFFAFCA8L,1L,(-1L)}},{{1L,0x8DB6565EL,(-6L),0x538F46EEL,(-4L),(-9L),0L},{(-5L),0x4C8883DEL,(-1L),(-8L),0xCFD3643BL,(-9L),1L},{1L,1L,0xE5AFCD53L,(-4L),0xE5AFCD53L,1L,1L},{(-1L),(-1L),(-6L),0x4C8883DEL,0x98C4EC1AL,(-6L),1L}}};
                int i, j, k;
                if ((g_301.f3 = (safe_add_func_uint8_t_u_u(g_934, ((safe_mod_func_uint16_t_u_u((safe_div_func_int64_t_s_s(p_40.f0, (safe_div_func_int16_t_s_s(((g_604.f2 = l_987) ^ 0x5C67E7FEE5BE8CF3LL), g_112)))), p_40.f5)) > p_40.f1)))))
                {
                    char l_1146 = 0xEAL;
                    int l_1152 = 0x1A967313L;
                    l_1107.f3 = 0x79E194C9L;
                    if (g_250[2])
                    {
                        long long l_1137[6][9] = {{0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L)},{0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L)},{0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L)},{0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L)},{0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L)},{0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L),0x5B26FEB795607AA4LL,(-3L),(-3L)}};
                        int l_1147[2][9] = {{0x383A3CEBL,1L,0x383A3CEBL,1L,0x383A3CEBL,1L,0x383A3CEBL,1L,0x383A3CEBL},{0x4F00380CL,0x72683DB7L,0x72683DB7L,0x4F00380CL,0x4F00380CL,0x72683DB7L,0x72683DB7L,0x4F00380CL,0x4F00380CL}};
                        int i, j;
                        l_835 = func_47(((safe_sub_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s(((-1L) < (func_72((l_1137[3][0] = 0xCCCFC6F9555787C9LL), func_66(g_954[1][1], g_250[1], (p_40.f0 == p_39), (l_1147[0][0] = (l_1146 &= (safe_add_func_int64_t_s_s((func_66(p_40.f0, (l_1145[0] = (safe_mod_func_uint8_t_u_u(0xC5L, ((safe_add_func_int16_t_s_s(l_1144, p_38.f2)) && g_604.f1)))), g_884, p_40.f4, g_884) & 0L), 0x3A4AF4A99CB19F2DLL)))), l_1148)) >= 0x2AL)), l_1144)) || p_38.f4) || p_38.f3), p_38.f2)) >= (-3L)));
                        g_1149--;
                        g_146 = (p_38.f3 && g_743);
                    }
                    else
                    {
                        l_1152 &= (p_38.f8 = p_38.f2);
                        l_1152 ^= p_38.f5;
                        l_1153 |= l_988.f1;
                        l_1154[5] = func_42(l_1154[5]);
                    }
                    p_38 = func_44(g_174[0][0]);
                }
                else
                {
                    long long l_1157 = 0x0132ABE7E3C30CB2LL;
                    int l_1159 = 0x0A0919C5L;
                    int l_1160 = 0xA4C15614L;
                    for (p_39 = 0; (p_39 < 2); p_39++)
                    {
                        short l_1158 = (-6L);
                        l_1164++;
                        l_1159 = 0xBD4DC43AL;
                    }
                }
            }
            for (p_40.f7 = 10; (p_40.f7 <= 24); p_40.f7 = safe_add_func_int32_t_s_s(p_40.f7, 8))
            {
                short l_1176 = 0x5199L;
                int l_1197[10][4] = {{(-1L),0xAF54B45EL,(-1L),0xCDDBE6E9L},{(-1L),0xCDDBE6E9L,(-1L),0xAF54B45EL},{(-1L),0xAF54B45EL,(-1L),0xCDDBE6E9L},{(-1L),0xCDDBE6E9L,(-1L),0xAF54B45EL},{(-1L),0xAF54B45EL,(-1L),0xCDDBE6E9L},{(-1L),0xCDDBE6E9L,(-1L),0xAF54B45EL},{(-1L),0xAF54B45EL,(-1L),0xCDDBE6E9L},{(-1L),0xCDDBE6E9L,(-1L),0xAF54B45EL},{(-1L),0xAF54B45EL,(-1L),0xCDDBE6E9L},{(-1L),0xCDDBE6E9L,(-1L),0xAF54B45EL}};
                int i, j;
                l_1058 = 0x59D7E43EL;
                for (g_934 = 0; (g_934 <= 2); g_934 += 1)
                {
                    unsigned long long l_1169 = 0x3A1ABCCF97C81753LL;
                    char l_1186 = 1L;
                    p_40.f8 = 0xDA2129BFL;
                    g_451[3][0].f3 = (l_1169 && ((((-1L) || (g_451[3][0].f1 = (safe_sub_func_int32_t_s_s(0x319F582BL, ((safe_div_func_int32_t_s_s((g_197 == 0xAE49L), g_52)) & 0x279CFFE0L))))) > (safe_div_func_uint64_t_u_u(((l_1176 &= (3UL == (g_636[3][2] | p_38.f4))) > (-8L)), l_1177))) != l_1055[4]));
                    for (l_824 = 0; (l_824 <= 2); l_824 += 1)
                    {
                        l_1107 = func_42(p_38);
                    }
                    for (l_835 = 0; (l_835 <= 2); l_835 += 1)
                    {
                        unsigned short l_1199 = 3UL;
                        int i, j, k;
                        g_301.f3 = (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(0x0EL, (l_798[(g_934 + 6)][(l_835 + 1)][l_835] >= ((safe_lshift_func_uint8_t_u_s(l_1186, p_39)) < (((g_177 = (safe_sub_func_int8_t_s_s(((--g_659) | (safe_sub_func_int8_t_s_s(g_451[3][0].f5, 0x9EL))), 0xE4L))) || (safe_mod_func_uint16_t_u_u(g_46, ((safe_rshift_func_uint8_t_u_s(l_1176, p_40.f4)) || l_1154[5].f5)))) > g_451[3][0].f7))))), 0x678157C6L));
                        l_1197[8][3] ^= g_485[0][0];
                        g_1198 &= (l_1154[5].f6 && ((g_604.f1 &= 6UL) && p_38.f1));
                        if (l_1199)
                            break;
                    }
                }
                if ((p_40.f3 <= 0x40F0651B6676CBBELL))
                {
                    g_451[3][0].f8 = (l_1107.f5 | 0x4AFAL);
                    if (g_301.f1)
                        break;
                }
                else
                {
                    unsigned char l_1201[8][6] = {{0x13L,0x64L,0x13L,0xD0L,0x64L,255UL},{0x13L,0xA8L,0xD0L,0xD0L,0xA8L,0x13L},{0x13L,0xCDL,255UL,0xD0L,0xCDL,0xD0L},{0x13L,0x64L,0x13L,0xD0L,0x64L,255UL},{0x13L,0xA8L,0xD0L,0xD0L,0xA8L,0x13L},{0x13L,0xCDL,255UL,0xD0L,0xCDL,0xD0L},{0x13L,0x64L,0x13L,0xD0L,0x64L,255UL},{0x13L,0xA8L,0xD0L,0xD0L,0xA8L,0x13L}};
                    int i, j;
                    for (g_301.f0 = 0; (g_301.f0 <= 5); g_301.f0 += 1)
                    {
                        return p_38.f8;
                    }
                    --l_1201[3][2];
                }
                g_146 = (l_1197[3][1] = (-1L));
            }
        }
        else
        {
            int l_1211 = (-1L);
            int l_1229 = 0x773348EDL;
            unsigned char l_1306 = 0x18L;
            unsigned long long l_1338 = 1UL;
            struct S0 l_1357[8][6][5] = {{{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0x17D09631L,0,0x6370AB03B47C1731LL,0xA4A535C5L,255UL,-4L,18446744073709551615UL,-5L,0x907EF3C1L},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0xB353807DL,0,0xADCD0D23E445345BLL,-1L,1UL,0x68224579L,0xE75059AE34755380LL,0x84L,0x106EFE94L}},{{0x6EFE2128L,0,0xEB5661957AB66BBDLL,1L,0x2DL,-5L,1UL,-3L,-5L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xA312A823L,0,-2L,-1L,0xD6L,-4L,3UL,0x1EL,-8L},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}},{{0x37A63F25L,0,0x13A0CD4CC3411773LL,-1L,255UL,0x0417D9E6L,0UL,0x5BL,1L},{18446744073709551615UL,0,0x5EEDF70F258A076ELL,0x1D9D5A20L,0x12L,-8L,0UL,0x8CL,5L},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{18446744073709551615UL,0,0x5EEDF70F258A076ELL,0x1D9D5A20L,0x12L,-8L,0UL,0x8CL,5L},{0x37A63F25L,0,0x13A0CD4CC3411773LL,-1L,255UL,0x0417D9E6L,0UL,0x5BL,1L}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551611UL,0,0x1246B0F25229F383LL,2L,0x7EL,-5L,18446744073709551607UL,8L,7L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}}},{{{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L}},{{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0xB353807DL,0,0xADCD0D23E445345BLL,-1L,1UL,0x68224579L,0xE75059AE34755380LL,0x84L,0x106EFE94L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L}},{{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551611UL,0,0x1246B0F25229F383LL,2L,0x7EL,-5L,18446744073709551607UL,8L,7L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}},{{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{0xD2D5D822L,0,0xDEECAAF291232D6ALL,0x922E0B23L,253UL,-1L,0x84E287CA8BECB164LL,0xD4L,3L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}}},{{{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L}},{{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x0032A783L,0,0x422CB165B04D6BABLL,2L,0x48L,-8L,18446744073709551615UL,0x84L,-6L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L}},{{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL}},{{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xD2D5D822L,0,0xDEECAAF291232D6ALL,0x922E0B23L,253UL,-1L,0x84E287CA8BECB164LL,0xD4L,3L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}}},{{{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551611UL,0,0x1246B0F25229F383LL,2L,0x7EL,-5L,18446744073709551607UL,8L,7L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0xB353807DL,0,0xADCD0D23E445345BLL,-1L,1UL,0x68224579L,0xE75059AE34755380LL,0x84L,0x106EFE94L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L}},{{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}},{{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L}},{{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}}},{{{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L}},{{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551611UL,0,0x1246B0F25229F383LL,2L,0x7EL,-5L,18446744073709551607UL,8L,7L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L}},{{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x0032A783L,0,0x422CB165B04D6BABLL,2L,0x48L,-8L,18446744073709551615UL,0x84L,-6L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L}},{{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551611UL,0,0x1246B0F25229F383LL,2L,0x7EL,-5L,18446744073709551607UL,8L,7L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}}},{{{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L}},{{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0xB353807DL,0,0xADCD0D23E445345BLL,-1L,1UL,0x68224579L,0xE75059AE34755380LL,0x84L,0x106EFE94L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L}},{{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{18446744073709551611UL,0,0x1246B0F25229F383LL,2L,0x7EL,-5L,18446744073709551607UL,8L,7L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}},{{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0x5DEA5663L,0,0xB909E0826DC39DDELL,0L,253UL,2L,0x3AC677440F3316CCLL,-10L,3L},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{0xD2D5D822L,0,0xDEECAAF291232D6ALL,0x922E0B23L,253UL,-1L,0x84E287CA8BECB164LL,0xD4L,3L},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL}}},{{{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L}},{{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L}},{{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x0032A783L,0,0x422CB165B04D6BABLL,2L,0x48L,-8L,18446744073709551615UL,0x84L,-6L},{0xE7C5AAF0L,0,-1L,-1L,0x2AL,0xEBAED87EL,0xD54C5CCAF72D9C9CLL,0x3EL,0x84751153L},{0x15471C6AL,0,1L,1L,0x57L,1L,18446744073709551610UL,0L,-7L}},{{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0xA2DBBCA3L,0,-3L,0xC232D9CFL,255UL,-9L,0x36A891D32586F98CLL,0xCDL,0xDDB0A304L}},{{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0x9FC8CCA0L,0,0L,0x4AC96B71L,0UL,0x235D5192L,0xCAC4A1E29322B02BLL,1L,0xBBA25C16L},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL}},{{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xD4D30161L,0,0L,0xDF36CB46L,0x83L,0L,0x0319F6554A0FA9B2LL,0x5AL,0x5DD80F9DL},{0xA312A823L,0,-2L,-1L,0xD6L,-4L,3UL,0x1EL,-8L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L}}},{{{0x37A63F25L,0,0x13A0CD4CC3411773LL,-1L,255UL,0x0417D9E6L,0UL,0x5BL,1L},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0x0032A783L,0,0x422CB165B04D6BABLL,2L,0x48L,-8L,18446744073709551615UL,0x84L,-6L},{18446744073709551615UL,0,0x5EEDF70F258A076ELL,0x1D9D5A20L,0x12L,-8L,0UL,0x8CL,5L},{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L}},{{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{0xD2D5D822L,0,0xDEECAAF291232D6ALL,0x922E0B23L,253UL,-1L,0x84E287CA8BECB164LL,0xD4L,3L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{0x6EFE2128L,0,0xEB5661957AB66BBDLL,1L,0x2DL,-5L,1UL,-3L,-5L}},{{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL},{0x281AB12FL,0,0x0664C74047305B20LL,-1L,253UL,0xF084EC4FL,0x79B3B54410E3C66ALL,0x0AL,0xCD4D4215L},{0x52E737D5L,0,0xFB8BF4676F6EEB81LL,0L,0x07L,0xDFFF7EB9L,6UL,-3L,0L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0xFA7FD467L,0,0L,0x2B7B7A28L,0UL,0L,0UL,0x09L,0xB33D5AABL}},{{0xF83B9D5AL,0,0x25EA5AC9F163FA89LL,0x28445FAAL,247UL,0x88DB89EEL,18446744073709551606UL,-1L,0x48A3A137L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{18446744073709551607UL,0,-10L,0x2C5FF2B3L,0UL,0xAF998D44L,0xF8F0737CBA0F1AB9LL,0xF5L,0xA3CCCEF8L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L}},{{0x1C07516CL,0,0x82F4C0040DB26773LL,0xFC0B5FE6L,0UL,0L,1UL,1L,0xCB3D4425L},{0x17D09631L,0,0x6370AB03B47C1731LL,0xA4A535C5L,255UL,-4L,18446744073709551615UL,-5L,0x907EF3C1L},{0x0032A783L,0,0x422CB165B04D6BABLL,2L,0x48L,-8L,18446744073709551615UL,0x84L,-6L},{0xB144C92FL,0,0x40283BDEEABCFAC6LL,0x63E0F4E0L,8UL,0x4EF9DD40L,18446744073709551610UL,0x32L,0x821F83CCL},{0x37A63F25L,0,0x13A0CD4CC3411773LL,-1L,255UL,0x0417D9E6L,0UL,0x5BL,1L}},{{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551615UL,0,0x1DC8BDA28DEF12E1LL,0x477967C0L,0xBCL,1L,0x5D9EB94B71AD6BB0LL,-1L,6L},{18446744073709551609UL,0,1L,0x2E8529E7L,0x9EL,6L,1UL,9L,0x5FDFE084L},{18446744073709551607UL,0,4L,0x1B68D9C6L,0UL,0L,6UL,1L,-1L},{18446744073709551615UL,0,-9L,-4L,251UL,0xAB022A83L,1UL,0xA1L,1L}}}};
            int i, j, k;
            for (g_112 = 0; (g_112 >= 0); g_112 -= 1)
            {
                struct S0 l_1204 = {18446744073709551615UL,0,7L,0x759B1C68L,1UL,0x9FAE9180L,7UL,-9L,-8L};
                p_38 = (l_1204 = l_1204);
                for (g_337 = 0; (g_337 <= 0); g_337 += 1)
                {
                    int l_1228[2][10] = {{0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L},{0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L,0x8FC5B9F4L}};
                    int i, j;
                    l_1228[1][0] &= (safe_div_func_uint64_t_u_u((g_485[g_112][g_337] ^ (safe_rshift_func_uint8_t_u_u(g_485[g_112][g_112], (((l_1058 ^= func_66(func_66((safe_rshift_func_uint8_t_u_u(l_1211, (safe_rshift_func_int8_t_s_s(l_1017, ((l_1211 & (safe_mod_func_int32_t_s_s((253UL & (safe_mod_func_int8_t_s_s(func_66(func_66(g_784, (g_301.f0++), (safe_add_func_int32_t_s_s((((5UL == (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(255UL, l_1204.f1)), l_1023)), g_126))) < 0x3669L) | 0x8ECB02CDL), 0x5D39DBB1L)), g_301.f3, l_1107.f3), p_40.f2, p_38.f8, l_857, p_40.f1), g_451[3][0].f1))), g_636[3][4]))) || 0xAE1D4B6500047FDELL))))), p_38.f4, l_1211, g_126, g_884), g_635, g_308, g_485[g_112][g_112], l_1204.f3)) & g_451[3][0].f6) <= p_40.f8)))), 8L));
                    l_1229 |= g_636[0][1];
                }
                return l_1145[0];
            }
            if (((l_1229 && (safe_mod_func_int32_t_s_s(func_72(p_38.f8, p_40.f1), p_40.f0))) && (((p_38.f2 = p_40.f7) || (((safe_add_func_uint64_t_u_u(g_604.f0, func_66(p_38.f2, p_38.f5, p_40.f3, p_40.f7, l_1234[5]))) | 0x89402AC1L) == g_604.f1)) >= 1UL)))
            {
                for (g_301.f5 = 2; (g_301.f5 <= 6); g_301.f5 += 1)
                {
                    int i;
                    if ((l_798[4][0][2] |= l_1234[g_301.f5]))
                    {
                        int i;
                        if (l_1234[g_301.f5])
                            break;
                    }
                    else
                    {
                        char l_1241 = (-1L);
                        p_38.f3 ^= (g_604.f3 = ((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(0xF2L, g_361[3])), ((g_249 = (safe_mod_func_uint64_t_u_u(((g_784 = (l_1241 <= ((l_1145[0] == l_1023) != (~l_1241)))) ^ (safe_sub_func_int32_t_s_s((l_988.f8 = (safe_sub_func_uint64_t_u_u(p_38.f2, (!l_987)))), (safe_rshift_func_int8_t_s_s(p_38.f8, 7))))), p_40.f6))) == l_1241))) && 0x5615L));
                        if (g_934)
                            break;
                        g_451[3][0].f3 = (safe_rshift_func_int16_t_s_u((l_988.f5 > (safe_rshift_func_int16_t_s_u(((5L >= p_40.f3) >= (safe_div_func_uint8_t_u_u(0UL, (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((((g_451[3][0].f6 = (0xEBDA0C78L & (1UL || 65532UL))) > g_139) >= ((g_986 | 0x1CD940186D0627B5LL) == l_798[8][3][2])), p_38.f7)), 0x42L))))), g_250[2]))), g_885));
                    }
                    for (p_38.f8 = 0; (p_38.f8 >= 0); p_38.f8 -= 1)
                    {
                        unsigned char l_1258[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_1258[i] = 255UL;
                        p_38.f3 |= g_451[3][0].f7;
                        l_797 |= p_40.f0;
                        l_1234[4] = (l_1258[0] = 0xD5C55204L);
                        g_451[(p_38.f8 + 2)][p_38.f8] = g_451[(p_38.f8 + 2)][p_38.f8];
                    }
                }
            }
            else
            {
                unsigned l_1281 = 1UL;
                int l_1332 = 1L;
                struct S0 l_1343 = {18446744073709551611UL,0,0xBC675E000B465164LL,4L,5UL,0xAC1B5505L,4UL,0x76L,0x3B980CC0L};
                if ((g_126 | p_40.f1))
                {
                    char l_1271 = 0xE7L;
                    int l_1282 = 0x28AA5024L;
                    if ((p_39 < l_1229))
                    {
                        l_1107 = l_1107;
                        p_38.f8 = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0xFCL, 3)), 0xD24DL));
                        g_451[0][0] = g_301;
                        l_1271 = ((g_301.f7 <= g_727) || (g_174[0][1] < (((safe_mod_func_int64_t_s_s(((!p_38.f7) != 0xC1DE22C48E861A4FLL), func_66(l_1265, (safe_add_func_uint64_t_u_u((--g_1198), ((func_60(l_1270, l_1107.f7) >= g_604.f3) ^ 0xAFL))), p_40.f3, g_251, g_131))) || p_40.f6) <= p_40.f4)));
                    }
                    else
                    {
                        unsigned l_1272 = 0x336D6DD7L;
                        p_40.f8 = (l_988.f2 ^ l_1272);
                    }
                    if (func_72(g_146, (g_1012 = (g_801 == ((safe_mod_func_int8_t_s_s((+(safe_sub_func_int64_t_s_s((-5L), g_46))), (p_38.f4 = ((l_1211 == ((safe_mod_func_uint64_t_u_u(l_1107.f5, (safe_add_func_uint16_t_u_u((g_301.f7 <= g_954[2][6]), (l_1281 > 0xCA5137947D3CAE47LL))))) <= l_1211)) & 0x323E09BDL)))) > l_1282)))))
                    {
                        p_40.f3 &= (func_47(l_1271) > g_604.f2);
                        p_38.f3 = (g_301.f3 = p_38.f6);
                        g_451[3][0].f3 ^= g_339;
                        g_177 = ((safe_sub_func_uint8_t_u_u(g_3, p_37)) < (g_337 != ((safe_sub_func_uint32_t_u_u((0xD3L ^ p_40.f5), l_1281)) | (g_301.f8 <= l_1281))));
                    }
                    else
                    {
                        unsigned long long l_1291 = 0x3B527EE4E7A7DF27LL;
                        int l_1292 = 1L;
                        l_1292 = (3L && l_1291);
                        g_604.f3 = (((((l_1292 = l_1291) == (safe_mod_func_uint8_t_u_u((p_38.f4 = 0xB3L), (safe_div_func_uint8_t_u_u(l_1270, p_40.f3))))) > (l_1271 < ((safe_rshift_func_uint8_t_u_s(((g_1200 < ((l_843 = ((safe_sub_func_uint8_t_u_u(l_988.f8, (((func_66(l_1281, (((6L != g_451[3][0].f5) & p_40.f1) <= g_659), l_1107.f1, p_40.f5, l_1107.f8) != g_883) || g_337) ^ g_954[0][7]))) == 2L)) | 0x6AA9L)) & p_40.f6), g_885)) == p_40.f4))) != 0x73684156L) || l_1281);
                        l_1306 = (safe_lshift_func_uint8_t_u_u(func_60(l_1271, l_1281), ((g_175 ^ g_337) >= (l_1229 &= (safe_mod_func_int32_t_s_s((g_1305[3][6] &= l_1292), p_38.f1))))));
                        g_604 = func_44((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_743 ^ (((safe_rshift_func_int8_t_s_u(l_1095[6][4], ((p_38.f8 = ((p_40.f8 = p_37) | (+(safe_sub_func_uint8_t_u_u((p_40.f4 | func_47((safe_unary_minus_func_uint64_t_u(g_301.f2)))), ((p_40.f1 == p_40.f6) & ((safe_div_func_int16_t_s_s(0x5AFBL, 65535UL)) < l_1107.f6))))))) & l_1107.f8))) || p_40.f5) > g_337)) != l_1291), l_1282)), p_38.f0)));
                    }
                    if (((g_883 >= (!(safe_sub_func_uint8_t_u_u((((+(g_604.f5 && g_885)) != p_37) ^ (~(safe_lshift_func_int8_t_s_s((l_1281 >= g_250[2]), 2)))), (safe_rshift_func_uint16_t_u_s((func_66(p_40.f6, func_66((l_1332 ^= (((g_335 = 0x4531L) != (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(0xFCL, g_7)) || l_1306), p_40.f6)), (-1L)))) ^ l_820)), p_38.f8, l_1333[1][1][0], p_40.f2, g_659), g_728, g_485[0][0], g_604.f3) > 0xC4F9L), 1)))))) > l_1281))
                    {
                        return l_798[6][7][0];
                    }
                    else
                    {
                        unsigned long long l_1337[10][9][2] = {{{18446744073709551607UL,0xEF9746A99D66560ELL},{18446744073709551615UL,0x9643C5C5833898E7LL},{18446744073709551612UL,0xAF185555519EF8F1LL},{18446744073709551613UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{2UL,18446744073709551615UL},{0x5C61AF7BE50D1FD0LL,0xBCAF67F0F3CA0833LL},{0x6B093B6206108F14LL,0xB16886289C0C0E14LL},{0xAF185555519EF8F1LL,0x8FDD27AD6476A1F3LL}},{{0xEF9746A99D66560ELL,0x8FDD27AD6476A1F3LL},{0xAF185555519EF8F1LL,0xB16886289C0C0E14LL},{0x6B093B6206108F14LL,0xBCAF67F0F3CA0833LL},{0x5C61AF7BE50D1FD0LL,18446744073709551615UL},{2UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551613UL,0xAF185555519EF8F1LL},{18446744073709551612UL,0x9643C5C5833898E7LL},{18446744073709551615UL,0xEF9746A99D66560ELL}},{{18446744073709551607UL,18446744073709551612UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL},{18446744073709551615UL,0x5C61AF7BE50D1FD0LL},{0xAF185555519EF8F1LL,0x6B093B6206108F14LL},{18446744073709551615UL,0xAF185555519EF8F1LL},{0UL,0xEF9746A99D66560ELL},{0UL,0xAF185555519EF8F1LL},{18446744073709551615UL,0x6B093B6206108F14LL}},{{0xAF185555519EF8F1LL,0x5C61AF7BE50D1FD0LL},{18446744073709551615UL,2UL},{0x9643C5C5833898E7LL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL},{0xEC532E6FECA970C6LL,18446744073709551612UL},{18446744073709551615UL,18446744073709551615UL},{18446744073709551613UL,18446744073709551607UL},{0xB16886289C0C0E14LL,18446744073709551615UL},{0x0C258B1425478945LL,18446744073709551615UL}},{{0x3EE8D824989B9773LL,18446744073709551615UL},{0xBCAF67F0F3CA0833LL,18446744073709551615UL},{0xB6B2009B1A55A34ELL,18446744073709551615UL},{18446744073709551607UL,0x5AC7EDB98EF377AFLL},{18446744073709551612UL,0x5AC7EDB98EF377AFLL},{18446744073709551607UL,18446744073709551615UL},{0xB6B2009B1A55A34ELL,18446744073709551615UL},{0xBCAF67F0F3CA0833LL,18446744073709551615UL},{0x3EE8D824989B9773LL,18446744073709551615UL}},{{0x0C258B1425478945LL,18446744073709551615UL},{0xB16886289C0C0E14LL,18446744073709551607UL},{18446744073709551613UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551612UL},{0xEC532E6FECA970C6LL,18446744073709551613UL},{18446744073709551615UL,18446744073709551615UL},{0x9643C5C5833898E7LL,2UL},{18446744073709551615UL,0x5C61AF7BE50D1FD0LL},{0xAF185555519EF8F1LL,0x6B093B6206108F14LL}},{{18446744073709551615UL,0xAF185555519EF8F1LL},{0UL,0xEF9746A99D66560ELL},{0UL,0xAF185555519EF8F1LL},{18446744073709551615UL,0x6B093B6206108F14LL},{0xAF185555519EF8F1LL,0x5C61AF7BE50D1FD0LL},{18446744073709551615UL,2UL},{0x9643C5C5833898E7LL,18446744073709551615UL},{18446744073709551615UL,18446744073709551613UL},{0xEC532E6FECA970C6LL,18446744073709551612UL}},{{18446744073709551615UL,18446744073709551615UL},{18446744073709551613UL,18446744073709551607UL},{0xB16886289C0C0E14LL,18446744073709551615UL},{0x0C258B1425478945LL,18446744073709551615UL},{0x3EE8D824989B9773LL,18446744073709551615UL},{0xBCAF67F0F3CA0833LL,18446744073709551615UL},{0x3EE8D824989B9773LL,0xB6B2009B1A55A34ELL},{0xEF9746A99D66560ELL,18446744073709551615UL},{0UL,18446744073709551615UL}},{{0xEF9746A99D66560ELL,0xB6B2009B1A55A34ELL},{0x3EE8D824989B9773LL,0UL},{0x5AC7EDB98EF377AFLL,0xAF185555519EF8F1LL},{0x9643C5C5833898E7LL,0x5C61AF7BE50D1FD0LL},{18446744073709551615UL,18446744073709551607UL},{0x6B093B6206108F14LL,0xEF9746A99D66560ELL},{0xAC9B3B4973787F3BLL,18446744073709551615UL},{0xAF185555519EF8F1LL,0UL},{18446744073709551612UL,0xAC9B3B4973787F3BLL}},{{0xEC532E6FECA970C6LL,0xEC532E6FECA970C6LL},{0xBCAF67F0F3CA0833LL,18446744073709551615UL},{18446744073709551607UL,0x8FDD27AD6476A1F3LL},{6UL,2UL},{0x5C61AF7BE50D1FD0LL,6UL},{18446744073709551615UL,0x0C258B1425478945LL},{18446744073709551615UL,6UL},{0x5C61AF7BE50D1FD0LL,2UL},{6UL,0x8FDD27AD6476A1F3LL}}};
                        struct S0 l_1344 = {18446744073709551615UL,0,-1L,0x1B222CF9L,0xE4L,5L,18446744073709551609UL,-5L,0x643C65D0L};
                        int i, j, k;
                        l_1229 = (safe_div_func_int32_t_s_s((p_40.f8 & ((safe_unary_minus_func_uint64_t_u((p_38.f6 = (p_40.f6 = (l_1338 = func_66((!((0xF6E6B784L || ((p_38.f3 |= (1UL || l_1107.f0)) != g_174[0][1])) < ((l_1271 != ((l_835 = g_275) & l_838)) && func_60(l_1337[8][4][0], g_3)))), l_1107.f0, p_40.f0, l_1107.f3, l_1282)))))) == p_40.f7)), g_197));
                        g_146 = (safe_sub_func_uint32_t_u_u((l_1229 = 4294967286UL), (g_301.f3 = ((-1L) == (p_37 == (g_986 = 0x03L))))));
                        l_1344 = l_1343;
                        l_1107.f8 = func_47(l_1345);
                    }
                }
                else
                {
                    short l_1350 = 0xD285L;
                    g_301.f8 = l_1229;
                    l_1107 = func_44((safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(l_1350, g_954[3][7])), (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(7L, 15)), l_1343.f7)))));
                    for (l_1270 = (-9); (l_1270 < 47); l_1270 = safe_add_func_int8_t_s_s(l_1270, 5))
                    {
                        int l_1358[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_1358[i] = (-1L);
                        l_988 = l_1357[2][5][4];
                        p_40.f3 = ((l_1358[4] | g_885) & 65531UL);
                        if (g_451[3][0].f1)
                            continue;
                        if (l_988.f0)
                            break;
                    }
                    for (l_1177 = (-24); (l_1177 > (-27)); l_1177 = safe_sub_func_uint64_t_u_u(l_1177, 8))
                    {
                        l_1107.f3 ^= (p_38.f3 | g_604.f7);
                        l_1333[1][1][0] ^= (((!(((p_38.f3 != (p_38.f6 &= (g_361[5] >= p_40.f3))) != ((safe_sub_func_int32_t_s_s(0x87645775L, ((safe_rshift_func_uint16_t_u_s((p_38.f1 && ((--p_37) >= l_988.f0)), ((safe_lshift_func_int16_t_s_s(g_177, (((g_146 &= g_301.f0) >= 6UL) != g_3))) == 0x58570E092A0EF012LL))) <= g_301.f5))) > 0x4DD8810BAE0BC11FLL)) || 0xE4673553L)) < 0x38L) | l_1306);
                    }
                }
                p_40.f3 = (safe_mod_func_int16_t_s_s((l_1357[2][5][4].f0 >= g_250[0]), g_197));
            }
        }
        for (l_835 = (-14); (l_835 != 11); l_835++)
        {
            unsigned short l_1379 = 1UL;
            int l_1416[10][5] = {{(-5L),1L,1L,(-5L),1L},{(-5L),(-5L),(-1L),(-5L),(-5L)},{1L,(-5L),1L,1L,(-5L)},{(-5L),1L,1L,(-5L),1L},{(-5L),(-5L),(-1L),(-5L),(-5L)},{1L,(-5L),1L,1L,(-5L)},{(-5L),1L,1L,(-5L),1L},{(-5L),(-5L),(-1L),(-5L),(-5L)},{1L,(-5L),1L,1L,(-5L)},{(-5L),1L,1L,(-5L),1L}};
            unsigned l_1451 = 4294967295UL;
            int i, j;
            l_1177 = (safe_div_func_int16_t_s_s((0L | (g_485[0][0] | func_66(func_72(g_604.f2, p_38.f4), (l_1379 > l_797), (+((safe_mod_func_uint8_t_u_u(((((((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint64_t_u(l_1385[3][2][1])) >= (p_40.f4 > 3UL)), l_1379)) < p_40.f6) | l_1386) && 0x72L) == 0x5F5D8610L) >= g_604.f5), l_1145[0])) < g_51)), l_1379, p_39))), 65529UL));
            for (l_988.f2 = 3; (l_988.f2 <= 9); l_988.f2 += 1)
            {
                int i, j;
                return l_1001[l_988.f2][l_988.f2];
            }
            p_38 = func_42((g_301 = l_1387));
            for (g_179 = 0; (g_179 <= 21); g_179 = safe_add_func_int64_t_s_s(g_179, 4))
            {
                int l_1413 = 1L;
                int l_1420[9][9] = {{0x599137D2L,0xB6F730AAL,0x167F38BFL,0xF70A318DL,0xD15AB1AFL,(-1L),0xD15AB1AFL,0xF70A318DL,0x61D2715CL},{0xBF1C3DFCL,0xBF1C3DFCL,(-1L),0xB6F730AAL,0xF963E2E0L,1L,(-5L),6L,(-1L)},{0xBF1C3DFCL,0x4090BCD8L,1L,0x67666C6FL,0x4090BCD8L,0x61D2715CL,0xB6F730AAL,(-7L),0x51A30264L},{6L,0xF70A318DL,(-1L),0x68C6257CL,0x4090BCD8L,0xFF33E906L,0x68C6257CL,0x599137D2L,0L},{0x4090BCD8L,7L,0x61D2715CL,0xD15AB1AFL,0xF963E2E0L,0L,0xB6F730AAL,0xB6F730AAL,0L},{0xD15AB1AFL,0x599137D2L,0x2B207BC7L,0x599137D2L,0xD15AB1AFL,0x352D7BBBL,(-5L),0xBF1C3DFCL,0x51A30264L},{(-5L),7L,0L,0x599137D2L,(-7L),(-1L),0xD15AB1AFL,7L,(-1L)},{0xB6F730AAL,0xF70A318DL,0x167F38BFL,0xD15AB1AFL,0xBF1C3DFCL,0x352D7BBBL,0x4090BCD8L,7L,0x61D2715CL},{0x68C6257CL,0x4090BCD8L,0xFF33E906L,0x68C6257CL,0x599137D2L,0L,6L,0xBF1C3DFCL,0x167F38BFL}};
                unsigned short l_1432 = 0x3E38L;
                int i, j;
                if (g_906)
                {
                    unsigned l_1390 = 18446744073709551615UL;
                    if (l_1390)
                        break;
                    if (p_38.f2)
                    {
                        unsigned long long l_1414 = 1UL;
                        g_604.f3 = p_39;
                        l_1234[2] &= (safe_add_func_uint32_t_u_u(func_60(((safe_rshift_func_uint16_t_u_s(((0x49L && (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(func_66(((((safe_mod_func_int32_t_s_s((g_1415 = (safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((((((safe_div_func_uint16_t_u_u((l_1379 >= g_604.f6), (safe_sub_func_uint64_t_u_u(((-8L) ^ (p_39 & ((p_40.f8 > g_1016) < l_1413))), func_60(func_60(p_38.f2, p_38.f8), g_604.f0))))) & p_38.f1) > p_38.f0) > l_752[2][2]) < l_1414), l_1390)) || 2UL), p_40.f6)), 0x6B22L)), l_1148))), p_38.f8)) || p_38.f8) && l_1413) ^ p_37), p_40.f6, l_1416[3][0], g_1149, g_1417), 2)), l_1413))) < p_38.f4), 13)) < g_636[1][0]), l_988.f1), l_1390));
                        return p_38.f2;
                    }
                    else
                    {
                        l_988.f3 &= ((l_1416[3][0] = p_40.f8) <= 0x0CL);
                        p_38 = g_451[3][0];
                        g_301.f8 ^= (p_40.f1 <= 4294967287UL);
                    }
                }
                else
                {
                    unsigned char l_1421[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1421[i] = 0xACL;
                    for (g_906 = (-25); (g_906 == (-10)); ++g_906)
                    {
                        l_1421[0]--;
                    }
                }
                for (g_111 = (-17); (g_111 > 14); g_111 = safe_add_func_uint16_t_u_u(g_111, 4))
                {
                    char l_1426 = 0x19L;
                    int l_1427 = 1L;
                    int l_1428 = 0x78E6B864L;
                    int l_1429 = 0L;
                    int l_1431 = 0xEB7D4AB2L;
                    for (l_838 = 0; (l_838 <= 0); l_838 += 1)
                    {
                        short l_1430 = (-1L);
                        int i, j;
                        --l_1432;
                        g_451[(l_838 + 3)][l_838] = p_40;
                    }
                    p_40.f3 = (safe_sub_func_int16_t_s_s((((l_843 |= (((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((g_51 < p_37), 5)), (safe_div_func_int64_t_s_s((((safe_add_func_uint64_t_u_u((((!(safe_add_func_uint64_t_u_u(p_38.f2, p_40.f4))) != (safe_lshift_func_int8_t_s_s(g_112, (safe_div_func_int64_t_s_s(l_1451, l_1420[2][8]))))) < p_37), ((safe_sub_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u((l_1420[1][8] || 0x0FL), g_1103)) & p_38.f7), p_38.f4)) && p_38.f1))) < l_1148) >= l_798[8][3][2]), g_784)))) < 0x07L) > p_38.f4)) >= g_251) | l_1416[1][4]), l_1432));
                    for (l_1431 = 0; (l_1431 < (-8)); l_1431--)
                    {
                        return g_1305[3][6];
                    }
                }
                ++g_1459;
                l_1420[4][3] = p_38.f4;
            }
        }
    }
    else
    {
        long long l_1464 = 1L;
        int l_1471 = 0x077A8863L;
        int l_1507 = (-2L);
        struct S0 l_1510 = {0x1B310290L,0,0xF23B23ACA0FDC5CBLL,0L,0x32L,3L,0xD0068AC30720D2CBLL,0x67L,6L};
        l_798[8][3][2] = ((func_72((g_635 = func_47(p_40.f6)), (safe_rshift_func_uint8_t_u_u((!l_1464), (l_1464 > l_1464)))) != (-6L)) > g_604.f3);
        if (((safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((65535UL | (safe_add_func_int16_t_s_s(g_3, (l_1471 &= (p_40.f7 && g_1123))))), (safe_mod_func_uint16_t_u_u((--g_52), l_1464)))) == p_40.f5), (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((g_308 |= p_38.f4), (safe_unary_minus_func_int64_t_s((g_636[1][1] | (g_337 >= g_604.f1)))))), 3)))) > p_38.f5))
        {
            unsigned l_1483 = 18446744073709551615UL;
            g_451[3][0] = func_44((g_451[3][0].f1 ^ l_820));
            l_1483--;
            g_451[3][0] = func_44(g_1415);
            for (g_659 = 0; (g_659 >= 24); g_659 = safe_add_func_int64_t_s_s(g_659, 1))
            {
                struct S0 l_1509 = {18446744073709551615UL,0,0x800345AE38EEA390LL,0x14EFE2EFL,0x6CL,0xCE26303EL,5UL,0xFAL,0xFD1C9353L};
                for (g_146 = 0; (g_146 >= 10); g_146 = safe_add_func_int64_t_s_s(g_146, 3))
                {
                    long long l_1526 = 0x83CC3AA8E1F29F56LL;
                    int l_1538 = 3L;
                    if ((+(safe_add_func_int32_t_s_s((-8L), p_38.f3))))
                    {
                        long long l_1500 = 0x81479DD4DBF5BB24LL;
                        char l_1508 = (-1L);
                        g_177 |= (l_1471 = 0xCAA93FE7L);
                        l_1508 = (l_798[5][0][0] |= (~(safe_sub_func_uint32_t_u_u((func_66((safe_add_func_uint8_t_u_u((l_1471 = 0UL), (0UL & ((l_1464 > (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967294UL, (g_451[3][0].f6 != (1UL & 1L)))), l_1500))) || ((l_1507 = (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(((safe_div_func_int64_t_s_s((((0xC22986920D5DFEE4LL != 18446744073709551613UL) < p_40.f3) & 0xF5571119L), p_38.f4)) < l_1483), l_1483)) <= p_40.f5), p_38.f8))) || 4UL))))), g_728, g_604.f5, l_1483, g_174[3][1]) && 0L), g_308))));
                        l_1509 = p_40;
                        p_38 = (g_604 = l_1510);
                    }
                    else
                    {
                        return l_824;
                    }
                    g_301 = l_988;
                    for (l_988.f4 = 0; (l_988.f4 <= 52); l_988.f4 = safe_add_func_int64_t_s_s(l_988.f4, 1))
                    {
                        unsigned l_1536 = 0x0D0B3A44L;
                        g_604.f3 = (func_66(g_884, (safe_lshift_func_int8_t_s_s(((((safe_unary_minus_func_uint32_t_u((safe_add_func_int16_t_s_s((((g_275 <= ((~(p_40.f4 |= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(g_362, 0)), (safe_mod_func_int32_t_s_s((((p_40.f5 && (safe_sub_func_int64_t_s_s(l_1526, (((safe_add_func_int32_t_s_s((p_38.f3 = (((g_111 ^ (((safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((g_1533[1] ^= (p_38.f4 ^= 1UL)), (((safe_mod_func_int16_t_s_s((g_146 < l_1483), g_604.f7)) != 0xE893A06AL) >= 0xC33B9E38679894ABLL))) != l_1483), l_798[4][3][1])) || p_40.f1) <= g_174[5][0])) > g_361[1]) >= 0L)), g_362)) && g_1198) > g_301.f0)))) & 0x6CBB60E1L) && g_743), l_1509.f4)))) || 0xF1L))) >= p_40.f1)) == l_1509.f1) & p_39), l_1536)))) && l_1536) && g_179) == l_1537[0]), p_39)), l_1483, p_40.f1, g_1200) || 0x6FCFL);
                        if (l_1526)
                            continue;
                        l_1538 &= (l_1526 != g_275);
                        p_38 = (g_604 = g_301);
                    }
                    for (l_1510.f0 = (-30); (l_1510.f0 > 29); ++l_1510.f0)
                    {
                        p_38 = p_40;
                        p_38.f8 = g_361[3];
                    }
                }
            }
        }
        else
        {
            int l_1541 = 0xF61B6EF6L;
            return l_1541;
        }
    }
    l_1542[0]--;
    return p_40.f6;
}







static struct S0 func_42(struct S0 p_43)
{
    struct S0 l_621 = {0UL,0,0xCCAE58D9E537ECC2LL,0xD7833546L,0x58L,0L,0xCEC7EF2868E0A0AELL,4L,0xEB26E528L};
    for (g_46 = 7; (g_46 < 0); g_46 = safe_sub_func_uint8_t_u_u(g_46, 1))
    {
        struct S0 l_622 = {0UL,0,2L,0xF6CF5F48L,0x0CL,0xD2948A81L,1UL,5L,-8L};
        g_451[3][0] = (l_622 = l_621);
        for (p_43.f7 = 0; (p_43.f7 <= 1); p_43.f7 += 1)
        {
            if (p_43.f1)
                break;
        }
    }
    if (func_60((((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((l_621.f8 = func_60((g_301.f5 |= (-1L)), (g_177 >= p_43.f3))), 18446744073709551611UL)), (g_636[1][0] ^= (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint32_t_u_u(p_43.f2, (safe_lshift_func_int16_t_s_s((g_635 = (safe_add_func_int8_t_s_s(((0x51D6D5EEL < p_43.f5) || p_43.f5), l_621.f6))), p_43.f8)))) != p_43.f4), 5))))) ^ 0x2FL) | g_251), p_43.f5))
    {
        unsigned char l_643 = 248UL;
        int l_652 = (-7L);
        int l_657 = (-1L);
        struct S0 l_689 = {0UL,0,1L,0x79E5B64DL,250UL,0xD85E9E89L,18446744073709551615UL,0x54L,0x73ADFF9FL};
        char l_696 = 6L;
        char l_722 = 0xB0L;
        for (g_604.f7 = (-7); (g_604.f7 >= 4); g_604.f7++)
        {
            char l_644 = 1L;
            unsigned long long l_647 = 0x983A842D108698EELL;
            int l_653 = 0x7C090127L;
            int l_654 = 9L;
            int l_655 = 0x4F031C7BL;
            int l_656 = 0x45322BE8L;
            int l_658 = (-10L);
            l_647 = (g_301.f2 | (safe_add_func_uint32_t_u_u((((((safe_add_func_int32_t_s_s((l_643 <= 0x351FA0E2L), ((((((l_644 > (((p_43.f1 || (g_636[1][4] || (safe_div_func_uint16_t_u_u(l_644, g_250[2])))) == p_43.f4) > 0xC98EL)) != 0L) == p_43.f1) | l_643) && g_337) != 1L))) == 0x69510AC73DC76226LL) ^ g_301.f8) < (-1L)) < 0x60E540168C480A17LL), g_604.f4)));
            g_451[3][0].f3 = (p_43.f5 >= ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_301.f0, l_621.f3)), (l_621.f7 <= g_250[2]))) | (g_335 | (l_652 = p_43.f1))));
            g_659--;
        }
        for (g_301.f3 = 29; (g_301.f3 == 29); g_301.f3++)
        {
            unsigned short l_686 = 1UL;
            int l_688 = 0xDD97FDD9L;
            for (g_46 = 0; (g_46 != (-28)); g_46--)
            {
                unsigned long long l_687[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_687[i] = 0UL;
                l_688 &= (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u(4294967295UL, (safe_mod_func_uint16_t_u_u((l_652 = 0x1925L), l_643)))), ((0x6793L > ((safe_lshift_func_int8_t_s_u(((0xFA251B30L >= ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(0xC3B5FEBBL, (safe_rshift_func_uint8_t_u_s((g_197 && g_485[0][0]), (((g_52 & g_146) != l_686) != p_43.f6))))) & g_301.f2), 0UL)) != g_301.f6)) ^ l_687[0]), g_604.f5)) | 0x2500L)) <= l_621.f4))), l_687[0])), 4)), 13));
            }
        }
        p_43 = l_689;
        for (g_276 = 0; (g_276 <= 0); g_276 += 1)
        {
            unsigned short l_701 = 0x1AB7L;
            int l_724[2][10] = {{(-1L),(-1L),0x257F6632L,(-1L),(-1L),0x257F6632L,(-1L),(-1L),0x257F6632L,(-1L)},{(-1L),0x7AEB9C64L,0x7AEB9C64L,(-1L),0x7AEB9C64L,0x7AEB9C64L,(-1L),0x257F6632L,0x257F6632L,0x7AEB9C64L}};
            int i, j;
            l_689.f3 = (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((0xF7FCL == (p_43.f8 & ((safe_add_func_uint16_t_u_u(func_66(p_43.f2, g_335, l_696, (g_301.f7 = p_43.f3), p_43.f8), (safe_lshift_func_int8_t_s_u((-1L), 5)))) && 2UL))), 5)) & g_197), g_604.f2)) > g_175) && 4294967295UL);
            for (l_689.f4 = 0; (l_689.f4 <= 0); l_689.f4 += 1)
            {
                int l_720[9][6] = {{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L},{0x69D80428L,0L,0x69D80428L,0x69D80428L,0L,0x69D80428L}};
                int i, j;
                g_604.f8 = (safe_mod_func_int32_t_s_s((l_701 ^ (p_43.f1 &= p_43.f2)), (l_621.f5 || g_131)));
                for (l_689.f5 = 0; (l_689.f5 <= 0); l_689.f5 += 1)
                {
                    unsigned char l_721 = 0x3BL;
                    int l_723[6][9][4] = {{{(-5L),0x78B7C1C4L,(-8L),(-8L)},{(-3L),0L,(-8L),(-4L)},{(-5L),(-1L),(-1L),(-1L)},{0x9C31B20BL,0x9C31B20BL,0x78B7C1C4L,(-3L)},{0x78B7C1C4L,(-3L),(-5L),(-1L)},{(-1L),(-1L),0x9C31B20BL,(-5L)},{0L,(-1L),0x5A2622F2L,(-1L)},{(-1L),(-3L),0x85803C37L,(-3L)},{1L,0x9C31B20BL,(-8L),(-1L)}},{{0x85803C37L,(-1L),0L,0x9C31B20BL},{(-1L),(-1L),0x78B7C1C4L,0x30770175L},{(-1L),(-5L),(-1L),(-1L)},{0L,0x30770175L,0x30770175L,0L},{(-8L),0x48C107FDL,0L,0x5A2622F2L},{0x78B7C1C4L,(-1L),0L,(-4L)},{(-1L),0x9C31B20BL,(-5L),(-4L)},{0x48C107FDL,(-1L),0x85803C37L,0x5A2622F2L},{(-5L),0x48C107FDL,(-5L),0L}},{{(-5L),0x30770175L,(-1L),(-1L)},{(-4L),(-5L),0x5A2622F2L,0x30770175L},{1L,(-1L),0x5A2622F2L,0x9C31B20BL},{(-4L),(-8L),(-1L),(-1L)},{(-5L),(-5L),(-5L),1L},{(-5L),1L,0x85803C37L,0x48C107FDL},{0x48C107FDL,0x78B7C1C4L,(-5L),0x85803C37L},{(-1L),0x78B7C1C4L,0L,0x48C107FDL},{0x78B7C1C4L,1L,0L,1L}},{{(-8L),(-5L),0x30770175L,(-1L)},{0L,(-8L),(-1L),0x9C31B20BL},{(-1L),(-1L),0x78B7C1C4L,0x30770175L},{(-1L),(-5L),(-1L),(-1L)},{0L,0x30770175L,0x30770175L,0L},{(-8L),0x48C107FDL,0L,0x5A2622F2L},{0x78B7C1C4L,(-1L),(-1L),(-8L)},{0x48C107FDL,0x5A2622F2L,0L,(-8L)},{0L,(-5L),(-1L),(-1L)}},{{1L,0L,1L,0x78B7C1C4L},{0L,0x9C31B20BL,0x85803C37L,(-5L)},{(-8L),1L,(-1L),0x9C31B20BL},{(-8L),(-5L),(-1L),0x5A2622F2L},{(-8L),(-4L),0x85803C37L,0x85803C37L},{0L,0L,1L,(-8L)},{1L,(-8L),(-1L),0L},{0L,(-3L),0L,(-1L)},{0x48C107FDL,(-3L),(-1L),0L}},{{(-3L),(-8L),0x78B7C1C4L,(-8L)},{0x30770175L,0L,0x9C31B20BL,0x85803C37L},{0x78B7C1C4L,(-4L),(-5L),0x5A2622F2L},{0x85803C37L,(-5L),(-3L),0x9C31B20BL},{0x85803C37L,1L,(-5L),(-5L)},{0x78B7C1C4L,0x9C31B20BL,0x9C31B20BL,0x78B7C1C4L},{0x30770175L,0L,0x78B7C1C4L,(-1L)},{(-3L),(-5L),(-1L),(-8L)},{0x48C107FDL,0x5A2622F2L,0L,(-8L)}}};
                    int i, j, k;
                    l_724[0][8] = (func_66((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((l_723[4][1][1] = func_66(func_66(l_643, g_174[3][0], p_43.f5, (p_43.f1 >= ((safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(func_66((l_621.f8 = (l_701 && (p_43.f8 = ((safe_rshift_func_int8_t_s_u((p_43.f7 = (safe_sub_func_uint64_t_u_u(((3L | ((-3L) < ((((safe_div_func_uint64_t_u_u(g_276, (safe_rshift_func_int8_t_s_s((l_720[7][4] | p_43.f2), l_721)))) > l_701) & p_43.f3) <= p_43.f0))) > p_43.f8), 5UL))), l_689.f0)) == 0xFF52L)))), p_43.f6, p_43.f5, g_339, g_361[7]), l_722)), p_43.f5)) != 0L)), g_174[0][0]), p_43.f5, l_701, g_7, p_43.f0)), g_146)), l_621.f2)), l_721, l_720[7][4], l_701, g_604.f1) && 0x3FL);
                    l_723[4][1][1] = (safe_add_func_int8_t_s_s(l_720[7][4], g_301.f3));
                    for (l_657 = 0; (l_657 >= 0); l_657 -= 1)
                    {
                        int i, j;
                        g_604.f8 = (p_43.f6 <= p_43.f3);
                        g_451[(l_689.f5 + 3)][l_657] = g_451[l_689.f5][g_276];
                        ++g_728;
                        g_451[3][0].f3 |= (65534UL == (safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((0x90L | (safe_div_func_uint32_t_u_u((l_689.f7 <= (g_301.f2 != ((g_52 = (safe_unary_minus_func_uint64_t_u((l_724[1][0] = g_727)))) | 0xA80AL))), (-7L)))), l_643)) >= 6L), g_301.f7)));
                    }
                }
            }
        }
    }
    else
    {
        unsigned long long l_738 = 0x5D71007EA5881B49LL;
        p_43.f8 = func_60(l_621.f8, l_738);
    }
    return g_301;
}







static struct S0 func_44(short p_45)
{
    char l_612 = 0xF5L;
    int l_616 = 0x49F2DCD9L;
    int l_617 = (-9L);
    struct S0 l_618 = {7UL,0,-1L,-8L,249UL,0x2F4BDB6BL,0xB5CF3B5D366A88EALL,1L,0xA6BB1B38L};
    if (g_46)
    {
        short l_613 = (-1L);
        l_617 = (((l_612 = func_47(p_45)) < (l_616 = (((p_45 < l_613) < p_45) ^ ((safe_div_func_int64_t_s_s((0L | p_45), 0x6B126A61E3B67159LL)) >= (p_45 <= g_419))))) != g_604.f4);
    }
    else
    {
        return g_451[0][0];
    }
    return l_618;
}







static char func_47(char p_48)
{
    int l_49[10][3][8] = {{{0L,0x1C9AC719L,(-3L),0L,0x6BC5A181L,0L,0xF40F8590L,0xCA4024FFL},{0x96026DF2L,0x30CE7443L,0x72C13769L,0x1C9AC719L,1L,0x48F27069L,(-1L),0L},{0xCAC19DAAL,0x8B3CF740L,(-2L),6L,0x3317083DL,1L,0L,0x07283BD0L}},{{0x67EE7A74L,0L,0xF0E761D3L,(-1L),0L,0L,0x2D5F2ABAL,0x6BC5A181L},{2L,0xF19166C0L,0L,2L,0xB2B9CE03L,0L,0xAAC5DA29L,(-1L)},{2L,(-5L),(-4L),0x1BF70E0EL,1L,7L,2L,0L}},{{0xB2B9CE03L,(-1L),0xF0E761D3L,0x51A330C1L,0x6BCC6B82L,1L,(-1L),0x96026DF2L},{0x0D08F1B1L,5L,1L,(-1L),(-1L),(-1L),(-1L),1L},{(-1L),(-1L),2L,0x92FD598CL,0x96026DF2L,0L,0x6BCC6B82L,0x1BF70E0EL}},{{0xF19166C0L,0xCA4024FFL,0xB3E519B9L,0x63F3D54CL,6L,0xF40F8590L,1L,0x1BF70E0EL},{0xCA4024FFL,8L,1L,0x92FD598CL,0x72093AA6L,0xF0E761D3L,0x8B3CF740L,1L},{1L,0xF4E4D73BL,0x74211FA8L,(-1L),0L,0L,2L,0x96026DF2L}},{{0L,0L,0xF40F8590L,0x51A330C1L,0x8B3CF740L,0x2F019D46L,0L,0L},{0L,0x30CE7443L,(-5L),0x1BF70E0EL,0x0DA2B3C2L,0xF974433FL,0x529C6F6BL,0L},{0L,1L,0x99E8488EL,1L,0x51A330C1L,(-6L),(-5L),0x22AA1FE0L}},{{0L,(-5L),0x0CAA6600L,0L,0x30CE7443L,0L,0L,(-5L)},{5L,0x60138ADDL,0L,0x0DA2B3C2L,(-2L),7L,0xB2B9CE03L,(-2L)},{0x72C13769L,0x63F3D54CL,0xF4E4D73BL,0x72C13769L,0xE4941AE2L,0x179D740FL,0x2D5F2ABAL,0xF40F8590L}},{{(-1L),0L,0x8FF69710L,2L,0x0DA2B3C2L,0x60138ADDL,(-4L),0L},{0x2F019D46L,0x5D51B5D7L,0x74211FA8L,0xF19166C0L,1L,0x3FDF2DC1L,(-3L),0xCDF33783L},{(-1L),0x63F3D54CL,0x1C9AC719L,0L,0xF0E761D3L,0x99E8488EL,0x51A330C1L,0x48F27069L}},{{(-3L),0x72093AA6L,0x3FDF2DC1L,0L,0x67EE7A74L,0L,0x3FDF2DC1L,0x72093AA6L},{7L,(-3L),1L,(-5L),0x9E5145DBL,0x9887233EL,0L,0xEF6617FAL},{1L,1L,0x92FD598CL,0x67EE7A74L,7L,0xD67D5F25L,0L,0xE4941AE2L}},{{2L,0x67EE7A74L,1L,0x9887233EL,0xB2B9CE03L,7L,0x3FDF2DC1L,0xF0E761D3L},{0xB2B9CE03L,7L,0x3FDF2DC1L,0xF0E761D3L,(-3L),0xB79D8757L,0x22AA1FE0L,0x8FF69710L},{0x30CE7443L,(-1L),1L,0L,(-1L),0x6BCC6B82L,0xB3E519B9L,0x2F019D46L}},{{0L,0x2787FF9EL,0x5FC64312L,0x5CE9E3C4L,0x2F019D46L,0x0CAA6600L,7L,0L},{0x22AA1FE0L,0x717EFFEBL,0x0C119CD2L,7L,(-1L),(-3L),0x2787FF9EL,(-4L)},{1L,0xF0E761D3L,(-1L),0L,0x72C13769L,0x8B3CF740L,7L,0x22AA1FE0L}}};
    char l_50 = (-5L);
    char l_57 = 0x6FL;
    int l_63[8][1][9] = {{{0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,0xBDB14249L}},{{8L,0xA0F805AAL,8L,0x3D230C2CL,(-5L),0x3D230C2CL,8L,0xA0F805AAL,8L}},{{0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,0xBDB14249L}},{{8L,0xA0F805AAL,8L,0x3D230C2CL,(-5L),0x3D230C2CL,8L,0xA0F805AAL,8L}},{{0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,0xBDB14249L}},{{8L,0xA0F805AAL,8L,0x3D230C2CL,(-5L),0x3D230C2CL,8L,0xA0F805AAL,8L}},{{0xBDB14249L,2L,0xBDB14249L,0xBDB14249L,2L,(-10L),(-10L),0xBDB14249L,(-10L)}},{{0xC936627CL,0x3D230C2CL,0xC936627CL,7L,8L,7L,0xC936627CL,0x3D230C2CL,0xC936627CL}}};
    int l_400 = 0x857AF2B6L;
    int i, j, k;
    g_52++;
    l_63[5][0][3] = (((-9L) <= (safe_rshift_func_uint8_t_u_s((g_46 ^ l_57), (safe_mod_func_int8_t_s_s(p_48, func_60((~l_63[1][0][5]), ((safe_lshift_func_uint8_t_u_u((l_63[1][0][5] != func_66(l_49[2][0][3], p_48, (l_400 = func_72(g_7, l_49[6][0][4])), p_48, g_139)), p_48)) && g_419))))))) ^ p_48);
    l_49[2][2][7] = ((l_63[1][0][5] = (safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(g_174[5][1], l_63[1][0][5])), func_60(g_179, (l_49[6][0][4] &= (safe_sub_func_uint64_t_u_u(((g_485[0][0] = ((g_308 | (-1L)) > (g_276 = (!p_48)))) == g_419), (l_400 & (safe_unary_minus_func_int32_t_s(p_48)))))))))) && p_48);
    return g_250[1];
}







static char func_60(int p_61, unsigned p_62)
{
    unsigned l_447 = 0xC5774106L;
    int l_449 = 0x4653E7B2L;
    struct S0 l_452 = {0xF9BC42BCL,0,0x7FED63F579506923LL,-6L,0x77L,0L,1UL,5L,-1L};
    int l_489 = 0x0EFABA7EL;
    int l_490 = 0xEA69118AL;
    for (g_52 = 2; (g_52 <= 9); g_52 += 1)
    {
        unsigned l_424 = 4294967293UL;
        int l_448 = 8L;
        struct S0 l_450 = {0x5544DB41L,0,-2L,5L,0xC9L,0x16A23AA0L,0xE9654DBD5B03048ALL,0xC7L,1L};
        long long l_532[4][5] = {{2L,2L,2L,2L,2L},{0x65C42B6846B129EFLL,0x65C42B6846B129EFLL,0x65C42B6846B129EFLL,0x65C42B6846B129EFLL,0x65C42B6846B129EFLL},{2L,2L,2L,2L,2L},{0x65C42B6846B129EFLL,0x65C42B6846B129EFLL,0x65C42B6846B129EFLL,0x65C42B6846B129EFLL,0x65C42B6846B129EFLL}};
        unsigned l_541 = 0x3E1CB3C1L;
        short l_542 = (-1L);
        char l_549 = 0x74L;
        unsigned long long l_565[1][8] = {{18446744073709551606UL,2UL,2UL,18446744073709551606UL,2UL,2UL,18446744073709551606UL,2UL}};
        int l_566[8][2] = {{0xA586AA11L,0xA586AA11L},{0xA586AA11L,(-1L)},{0xA586AA11L,0xA586AA11L},{0xA586AA11L,(-1L)},{0xA586AA11L,0xA586AA11L},{0xA586AA11L,(-1L)},{0xA586AA11L,0xA586AA11L},{0xA586AA11L,(-1L)}};
        int l_567 = 0x089FF5C0L;
        int i, j;
        if (((l_449 = (safe_lshift_func_uint16_t_u_s(g_361[g_52], ((safe_mod_func_uint32_t_u_u((g_131 && 0x62CFD0A33601DB38LL), (l_424 || (1L | (p_61 & ((safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(func_66((((safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((!(l_448 = ((safe_div_func_int32_t_s_s(g_301.f7, (safe_mod_func_uint32_t_u_u(((((p_62 = (safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u((g_301.f1 != g_251), 0UL)) ^ 4294967295UL) && l_447), 1L)) <= g_126) < g_250[2]), g_362)), l_447)), p_61))) < 8UL) <= g_361[g_52]) < 0xF607F173E63592C0LL), l_447)))) == l_447))), l_424)) && g_7), 7)) > 0xAFL) | 0x687A0620666B44E9LL), g_301.f7, g_301.f0, g_337, l_424), 1L)), p_61)) > 5UL)))))) && g_301.f0)))) == g_361[g_52]))
        {
            if (p_62)
                break;
            g_451[3][0] = (g_301 = l_450);
            l_452 = g_301;
        }
        else
        {
            unsigned long long l_453 = 0x0AEE655662789262LL;
            int l_488 = 0xAEFB2DAAL;
            int l_491 = (-6L);
            long long l_497[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int l_543 = (-1L);
            int i;
            l_449 = ((((l_449 == 0x8D0448252815FAD8LL) < ((p_62 || (0xD3B3L | (l_453 ^ g_451[3][0].f7))) > (l_452.f3 = p_61))) == ((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_u(g_46, (g_362 = p_62))) > l_453) | g_339) != 0x24EAL), l_452.f8)) | (-1L))) && l_452.f8);
            for (g_112 = 1; (g_112 <= (-27)); g_112 = safe_sub_func_uint8_t_u_u(g_112, 1))
            {
                int l_462 = 0x0CF64BA9L;
                int l_484 = 0x6DFE086DL;
                l_449 ^= (l_462 | ((((safe_unary_minus_func_uint32_t_u(l_453)) ^ (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_251, (safe_rshift_func_int8_t_s_s(((((g_301.f7 >= ((g_3 != (safe_rshift_func_int8_t_s_u(l_452.f4, 6))) < (l_452.f8 <= (safe_div_func_int32_t_s_s(p_61, ((0xB6F23BF5L && g_52) ^ l_453)))))) ^ 0xC7E8403ED3FD90FBLL) & 0x31L) == p_61), 0)))), l_453))) || 0x128351B1CD861BEFLL) >= g_301.f2));
                for (l_452.f8 = (-7); (l_452.f8 != 1); ++l_452.f8)
                {
                    unsigned char l_492 = 1UL;
                    long long l_500[5];
                    int l_503[9][8][3] = {{{3L,0x6E2D0F3BL,7L},{0x27C76F70L,0x4ABFE40AL,0x5993B894L},{(-1L),0x2A38BE7FL,0xB25A58B6L},{0x42FD4012L,0x97B196A9L,0x5BEE93BFL},{0x5D9E4BD8L,(-1L),3L},{0x4E566E28L,0x95ED0A79L,(-2L)},{0xB25A58B6L,(-1L),0xC79DF4E6L},{7L,0x97B196A9L,1L}},{{0L,0x2A38BE7FL,0x6029E203L},{(-4L),0x4ABFE40AL,0x97B196A9L},{2L,0x6E2D0F3BL,2L},{(-5L),0x5993B894L,0x5BEE93BFL},{0L,(-1L),0xEF117549L},{1L,0x4E566E28L,0x1204BD9BL},{1L,0x2A38BE7FL,0x5BDC5913L},{1L,0L,(-2L)}},{{0L,(-1L),7L},{0xC4C0D3ADL,(-4L),(-9L)},{(-1L),0x94C43F4EL,0xC79DF4E6L},{(-4L),(-2L),0x5BC600FDL},{0x6029E203L,(-1L),4L},{0x4E566E28L,0x27C76F70L,0xC13EC112L},{0x58FF2DBAL,0x2A38BE7FL,0xDAA92C57L},{(-5L),0x2BFFFA3EL,0xC13EC112L}},{{(-1L),(-1L),4L},{7L,0x4ABFE40AL,0x5BC600FDL},{0x5BDC5913L,0L,0xC79DF4E6L},{0x3638E8E9L,(-9L),(-9L)},{0xEFF1CD20L,(-2L),7L},{7L,5L,(-2L)},{0xC106953BL,0L,0x5BDC5913L},{(-5L),0x5BC600FDL,0x1204BD9BL}},{{7L,0L,0xEF117549L},{0x4E566E28L,5L,0x5BEE93BFL},{2L,(-2L),(-1L)},{(-4L),(-9L),0x6581619EL},{0x5D9E4BD8L,0L,0x5D9E4BD8L},{0xC4C0D3ADL,0x4ABFE40AL,0x5BEE93BFL},{0x83472CDAL,(-1L),1L},{1L,0x2BFFFA3EL,0x1204BD9BL}},{{(-1L),0x2A38BE7FL,0xEFF1CD20L},{1L,0x27C76F70L,(-2L)},{0x83472CDAL,(-1L),0x58FF2DBAL},{5L,0x1204BD9BL,0L},{(-1L),0x6E2D0F3BL,0xEF117549L},{0x95ED0A79L,0x95ED0A79L,0x93CE4832L},{(-1L),(-1L),0x58FF2DBAL},{(-5L),1L,0x97B196A9L}},{{0x35EA5D80L,(-2L),3L},{0xC4C0D3ADL,(-5L),0x97B196A9L},{0xDAA92C57L,0x2A38BE7FL,0x58FF2DBAL},{0x4E566E28L,(-9L),0x93CE4832L},{0xA8FFE937L,0xA6D681E3L,0xEF117549L},{(-4L),0x27C76F70L,0L},{0L,0L,0xC79DF4E6L},{0x4E566E28L,0x5993B894L,0x1204BD9BL}},{{(-10L),6L,0xA8FFE937L},{0xC4C0D3ADL,7L,0x5BC600FDL},{0xC79DF4E6L,6L,0x83472CDAL},{(-5L),0x5993B894L,(-2L)},{0x5D9E4BD8L,0L,(-1L)},{0x95ED0A79L,0x27C76F70L,0x5993B894L},{0xC106953BL,0xA6D681E3L,0xC106953BL},{5L,(-9L),(-2L)}},{{0x6029E203L,0x2A38BE7FL,0L},{0x27C76F70L,(-5L),0x5BC600FDL},{0xB25A58B6L,(-2L),0L},{0x27C76F70L,1L,0x1204BD9BL},{0x6029E203L,(-1L),0x35EA5D80L},{5L,0x95ED0A79L,0L},{0xC106953BL,0x6E2D0F3BL,1L},{0x95ED0A79L,0x1204BD9BL,0x93CE4832L}}};
                    unsigned char l_525[4] = {0x75L,0x75L,0x75L,0x75L};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_500[i] = 0x20FE6A10C121528BLL;
                    for (p_61 = 0; (p_61 == (-8)); --p_61)
                    {
                        return l_452.f3;
                    }
                    if (p_61)
                    {
                        l_484 ^= ((g_46 == ((p_61 != (l_449 = (safe_mod_func_int8_t_s_s(p_62, l_462)))) < (safe_lshift_func_int16_t_s_u(((g_52 != func_66((safe_lshift_func_int16_t_s_u((l_448 = l_462), 14)), p_62, p_61, p_61, l_452.f7)) | p_62), p_61)))) != p_61);
                        g_485[0][0]++;
                        return p_62;
                    }
                    else
                    {
                        char l_517[8][5][6] = {{{0xAFL,8L,8L,0xAFL,0x4CL,0xD3L},{0xAFL,0xC5L,0xA4L,0xC7L,0xE9L,7L},{0xA4L,0x51L,8L,1L,0xE9L,1L},{0xA7L,0xC5L,0xA7L,0L,0x4CL,0x51L},{0xD3L,0x07L,(-4L),7L,0xAFL,0x4CL}},{{0xC7L,1L,0L,7L,7L,0L},{0xD3L,0xD3L,0xC5L,0L,(-4L),0xA7L},{0xA7L,0xE9L,0xD3L,1L,0x07L,0xC5L},{0xA4L,0xA7L,0xD3L,0xC7L,0xD3L,0xA7L},{0xAFL,0xC7L,0xC5L,6L,0xF3L,0L}},{{6L,0xF3L,0L,0xD3L,8L,0x4CL},{0x51L,0xF3L,(-4L),(-4L),0xF3L,0x51L},{0xF3L,0xC7L,0xA7L,0xE9L,0xD3L,1L},{(-4L),0xA7L,8L,0xA4L,0x07L,7L},{(-4L),0xE9L,0xA4L,0xE9L,(-4L),0xD3L}},{{0xF3L,0xD3L,0x07L,(-4L),7L,0xAFL},{0x51L,1L,7L,0xD3L,0xF3L,0xF3L},{0L,7L,7L,0L,1L,0xC7L},{0xF3L,0x51L,6L,0xAFL,0xA4L,0xA7L},{6L,0xD3L,(-4L),0xE9L,0xA4L,0xE9L}},{{0xC5L,0x51L,0xC5L,0x07L,1L,0xD3L},{0xC7L,7L,0x4CL,0xA7L,0xF3L,1L},{0xAFL,0xE9L,0x07L,0xA7L,0xA7L,0x07L},{0xC7L,0xC7L,0x51L,0x07L,0x4CL,0xC5L},{0xC5L,0xA4L,0xC7L,0xE9L,7L,0x51L}},{{6L,0xC5L,0xC7L,0xAFL,0xC7L,0xC5L},{0xF3L,0xAFL,0x51L,0L,8L,0x07L},{0L,8L,0x07L,0xC7L,(-4L),1L},{0xD3L,8L,0x4CL,0x4CL,8L,0xD3L},{8L,0xAFL,0xC5L,0xA4L,0xC7L,0xE9L}},{{0x4CL,0xC5L,(-4L),6L,7L,0xA7L},{0x4CL,0xA4L,6L,0xA4L,0x4CL,0xC7L},{8L,0xC7L,7L,0xA7L,(-4L),0L},{0xE9L,0x51L,(-4L),0xA4L,0L,0L},{0xAFL,8L,8L,0xAFL,0xC5L,0xA4L}},{{0L,1L,0xC7L,6L,0xD3L,(-4L)},{0xC7L,0xE9L,7L,0x51L,0xD3L,0x51L},{0x4CL,1L,0x4CL,0xF3L,0xC5L,0xE9L},{0xA4L,8L,0xA7L,(-4L),0L,0xC5L},{6L,0x51L,0xF3L,(-4L),(-4L),0xF3L}}};
                        int l_518 = 1L;
                        int i, j, k;
                        --l_492;
                        l_491 &= func_66(func_66(func_66((l_450.f1 > (g_335 &= (safe_add_func_uint64_t_u_u((p_62 && 0xB0632252L), 0x8C4CC30519C9EE2FLL)))), l_497[2], g_111, (l_450.f8 = (g_250[2] = (l_503[4][6][2] = (safe_add_func_uint16_t_u_u(((((l_500[1] ^ (safe_div_func_int32_t_s_s(l_492, g_46))) <= 1L) != g_276) < p_61), p_62))))), g_451[3][0].f1), g_451[3][0].f0, g_362, g_112, g_361[8]), g_51, p_62, p_62, g_7);
                        g_146 &= ((0x78F5L >= func_66((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(1L, ((safe_lshift_func_uint8_t_u_u((((((g_139 = 0x73B2E8B8F3544FFCLL) < (0xAD2AL <= l_500[1])) == ((safe_sub_func_uint32_t_u_u(g_485[0][0], (safe_unary_minus_func_uint16_t_u(((safe_mod_func_int64_t_s_s((g_362 < (++g_301.f6)), (p_62 ^ (l_448 = ((g_111 = (l_491 |= (((g_177 = ((g_174[2][0] || p_61) | (-4L))) >= l_450.f7) == 1UL))) <= g_301.f3))))) < 0UL))))) > l_517[5][0][5])) == g_485[0][0]) == g_126), 2)) != 1L))), l_484)), p_62, g_175, p_61, g_46)) | g_308);
                        l_484 ^= (l_518 = (l_450.f3 |= g_276));
                    }
                    if (l_490)
                    {
                        if (p_62)
                            break;
                        return p_61;
                    }
                    else
                    {
                        unsigned l_519 = 18446744073709551610UL;
                        int l_523 = 0x85A7A833L;
                        int l_524 = 0x5B48ECBEL;
                        l_525[1] = ((l_519 = 65535UL) == (l_450.f5 && func_66((p_61 <= ((((safe_mod_func_int16_t_s_s((g_275 = (l_462 ^ (safe_unary_minus_func_uint16_t_u(g_126)))), (0xF646L & g_451[3][0].f4))) == ((((l_523 = (~l_523)) > (l_497[4] | 0x4030DF8A52660BC4LL)) > p_61) < l_500[1])) == g_485[0][0]) && 0xA96362C81C657936LL)), l_484, p_62, l_524, l_462)));
                        l_484 = ((l_524 = ((safe_add_func_int64_t_s_s((-1L), ((g_335 = (((((l_524 < 0xCD82L) < (safe_sub_func_int16_t_s_s(p_61, (func_66(((+p_61) ^ ((g_131 <= g_174[1][0]) < p_61)), func_66((p_61 ^ p_61), g_339, g_451[3][0].f7, g_451[3][0].f6, g_301.f2), g_451[3][0].f5, g_361[g_52], g_451[3][0].f0) == 0xF9E7L)))) && l_503[4][6][2]) >= g_451[3][0].f6) & l_452.f2)) | 7UL))) & p_61)) != p_62);
                    }
                }
            }
            l_450.f3 &= ((safe_mod_func_uint64_t_u_u((p_62 == (p_61 >= func_66(l_532[0][2], p_62, (safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(l_491, (g_361[4] = ((((safe_mod_func_int64_t_s_s(1L, (safe_lshift_func_int16_t_s_u(l_541, ((((l_542 & p_62) ^ g_361[g_52]) <= p_61) && l_450.f8))))) & l_543) > 0xB176L) ^ 0UL)))), 10)), l_488, g_131))), g_451[3][0].f2)) || l_453);
        }
        for (g_139 = 19; (g_139 <= (-20)); g_139 = safe_sub_func_uint16_t_u_u(g_139, 1))
        {
            char l_546 = 0x22L;
            int l_547 = 1L;
            int l_548 = (-3L);
            int l_601 = 9L;
            if (func_66((l_547 |= (l_546 = 0x06E5L)), l_548, (l_489 = g_111), (l_549 < g_3), (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(p_61, g_146)) <= l_452.f3), (g_451[3][0].f4 = (((g_250[2] |= p_61) > l_548) <= g_485[0][0])))) & l_490), 0))))
            {
                if ((func_66((l_448 = (l_452.f8 ^= ((safe_lshift_func_int8_t_s_u(g_485[0][0], 7)) <= g_362))), (((p_61 || l_548) && ((safe_add_func_uint64_t_u_u((l_567 = ((g_361[9] && (l_566[7][0] = (g_276 &= (l_424 == ((l_565[0][1] = ((!((safe_mod_func_uint32_t_u_u(((l_450.f8 &= p_62) <= ((safe_unary_minus_func_uint64_t_u(g_112)) | (safe_sub_func_int16_t_s_s(((l_450.f3 = l_489) ^ l_450.f6), 0xA74AL)))), g_335)) <= p_61)) > 0x169EAC0995157E5CLL)) & g_174[3][1]))))) ^ p_61)), g_131)) & 0xD91629A9BD6233F2LL)) != 1UL), p_61, g_451[3][0].f7, l_546) != p_61))
                {
                    unsigned short l_584[1];
                    int l_585 = 0x444D520FL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_584[i] = 7UL;
                    for (g_275 = 21; (g_275 > (-14)); g_275 = safe_sub_func_int16_t_s_s(g_275, 4))
                    {
                        g_451[3][0].f3 |= ((l_585 = (safe_rshift_func_int16_t_s_s((p_61 != g_362), ((p_61 > (safe_add_func_uint64_t_u_u((l_452.f4 ^ (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_3, 3)), p_61))), g_275))) == ((safe_mul_func_uint8_t_u_u(g_174[2][0], ((safe_sub_func_int8_t_s_s(((safe_div_func_int64_t_s_s(p_61, 0x88970501C0D650BELL)) != g_362), l_584[0])) >= 0xCEL))) | p_61))))) | g_111);
                        return p_61;
                    }
                }
                else
                {
                    unsigned char l_600 = 0x98L;
                    l_601 ^= func_66((l_547 &= (l_452.f8 != func_66(p_62, l_447, ((safe_rshift_func_int16_t_s_u((((safe_sub_func_uint64_t_u_u((((p_61 || (((l_532[3][0] > (func_66(((safe_lshift_func_int16_t_s_u(g_451[3][0].f4, (l_452.f3 = (~(safe_add_func_int16_t_s_s(l_548, (safe_unary_minus_func_int16_t_s(((((safe_div_func_int32_t_s_s((-10L), (safe_unary_minus_func_uint8_t_u(g_111)))) ^ g_197) != p_62) <= p_62))))))))) != l_548), g_46, l_600, g_485[0][0], g_301.f4) > g_250[0])) <= 0xD399L) == p_62)) || l_600) == p_62), 0xCF8D4C4B62808F35LL)) >= l_452.f4) & p_61), 6)) ^ 0x25D9D69FL), p_62, p_61))), l_489, l_600, p_61, g_251);
                    for (l_452.f3 = 0; (l_452.f3 <= 1); l_452.f3 += 1)
                    {
                        int i, j;
                        if (l_532[l_452.f3][(l_452.f3 + 2)])
                            break;
                        if (l_532[(l_452.f3 + 2)][l_452.f3])
                            continue;
                    }
                }
                for (g_301.f4 = 0; (g_301.f4 <= 1); g_301.f4 += 1)
                {
                    int l_602 = (-4L);
                    int i, j;
                    g_177 = (~(g_174[g_301.f4][g_301.f4] ^ 0x95L));
                    l_602 |= (-4L);
                }
            }
            else
            {
                g_177 |= g_250[1];
                if (l_546)
                    break;
                return l_450.f4;
            }
        }
        for (l_450.f0 = 0; (l_450.f0 <= 0); l_450.f0 += 1)
        {
            short l_603 = (-1L);
            int i, j;
            if (l_603)
                break;
            g_451[(l_450.f0 + 3)][l_450.f0] = g_604;
        }
    }
    return l_490;
}







static char func_66(unsigned short p_67, unsigned p_68, char p_69, char p_70, char p_71)
{
    long long l_401 = 0L;
    struct S0 l_402[7] = {{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L},{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L},{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L},{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L},{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L},{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L},{18446744073709551613UL,0,0xE215A9680D9EBC63LL,0x31AD5319L,255UL,-7L,0x61E57F8364DB2E43LL,0xBFL,0x4F4D9183L}};
    short l_417 = 0x50EBL;
    int i;
    l_401 &= p_69;
    l_402[0] = l_402[0];
    for (g_111 = 0; (g_111 >= 48); g_111 = safe_add_func_int8_t_s_s(g_111, 1))
    {
        char l_418 = 0xA3L;
        l_418 = (p_70 || ((g_275 = (l_402[0].f3 = ((safe_sub_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(p_70, g_308)), (l_402[0].f4 || ((0x197E051DF730857CLL || (safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(1UL, (l_402[0].f8 = (safe_mod_func_int64_t_s_s((l_402[0].f0 ^ 0UL), (l_417 | 1UL)))))) || p_70), 0x2BL))) ^ (-3L))))) & 0xE6L))) == 9UL));
        g_301 = g_301;
        if (g_301.f6)
            break;
    }
    return p_68;
}







static char func_72(long long p_73, long long p_74)
{
    long long l_77[6] = {0xD19B671196D9F78ELL,3L,0xD19B671196D9F78ELL,0xD19B671196D9F78ELL,3L,0xD19B671196D9F78ELL};
    unsigned long long l_80 = 8UL;
    int l_82 = 0xA8A9104CL;
    int l_85 = 0L;
    unsigned l_97 = 18446744073709551610UL;
    int l_98[1];
    unsigned long long l_194 = 0UL;
    char l_213[5];
    unsigned l_223 = 4294967295UL;
    unsigned char l_323 = 0xA0L;
    char l_336[6] = {0x3FL,1L,0x3FL,0x3FL,1L,0x3FL};
    struct S0 l_372 = {0xD7C7D947L,0,0L,-8L,0xDEL,0x15C3F8E3L,0xD842D5FE883C5B11LL,9L,0x9ED4B8BEL};
    int l_399 = 0x36FF42A2L;
    int i;
    for (i = 0; i < 1; i++)
        l_98[i] = (-1L);
    for (i = 0; i < 5; i++)
        l_213[i] = 0xB3L;
    for (p_73 = 0; (p_73 < 13); p_73++)
    {
        unsigned long long l_96 = 18446744073709551607UL;
        int l_125 = 0xAC27A575L;
        int l_178 = 0x6079C38AL;
        unsigned short l_184 = 0x27CEL;
        unsigned long long l_185 = 0xB82BABF4834D8CA7LL;
        long long l_188 = (-1L);
        if (((g_3 || (((p_74 <= l_77[4]) ^ ((g_3 >= g_51) >= p_73)) <= ((p_73 && (safe_add_func_uint8_t_u_u(g_7, g_52))) < 0L))) != l_80))
        {
            unsigned char l_81[6] = {0x7FL,0x2CL,0x7FL,0x7FL,0x2CL,0x7FL};
            int l_99 = 0xBA2E113FL;
            int i;
            l_81[3] &= g_7;
            if (l_82)
                continue;
            l_99 = (safe_div_func_uint64_t_u_u((l_98[0] = (((l_85 = g_3) >= (safe_rshift_func_uint16_t_u_u(((0x6986L || (((((safe_add_func_int64_t_s_s((((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(9UL, 1)) == ((65527UL >= ((((g_3 || ((g_51 > (l_81[2] != (safe_div_func_int32_t_s_s(((l_96 ^= p_74) ^ l_81[3]), l_81[3])))) & g_52)) == p_73) < g_51) == p_73)) > l_81[0])), 3)) == p_74) < 65531UL), g_7)) > 0UL) & p_74) | l_97) ^ p_73)) || g_7), p_73))) & g_3)), g_52));
            l_99 = (p_74 | ((p_74 >= 1UL) & (safe_div_func_int8_t_s_s(g_52, 0xA5L))));
        }
        else
        {
            unsigned short l_106 = 65528UL;
            int l_134 = (-4L);
            int l_172 = 0x960850B4L;
            for (l_82 = 0; (l_82 < 16); l_82 = safe_add_func_int32_t_s_s(l_82, 3))
            {
                unsigned l_119 = 0x01A0C7C7L;
                int l_120 = (-4L);
                g_112 &= (((safe_lshift_func_uint8_t_u_s((l_85 = l_106), 1)) > (g_3 > ((safe_lshift_func_int8_t_s_u(g_52, 4)) > (p_73 > 0x9178996BAC349C08LL)))) && ((g_111 = l_96) <= (p_73 == (-1L))));
                for (p_74 = 3; (p_74 <= 23); p_74 = safe_add_func_int32_t_s_s(p_74, 8))
                {
                    unsigned long long l_121 = 1UL;
                    int l_122 = 0x725CFA70L;
                    int l_123[6] = {0L,0L,0L,0L,0L,0L};
                    int i;
                    for (l_85 = 0; (l_85 < (-7)); l_85 = safe_sub_func_int64_t_s_s(l_85, 1))
                    {
                        int l_124[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_124[i] = 1L;
                        l_120 &= ((safe_div_func_int32_t_s_s(l_106, (l_119 &= g_7))) < p_74);
                        if (l_121)
                            break;
                        --g_126;
                        if (g_3)
                            break;
                    }
                    for (l_96 = (-14); (l_96 >= 3); l_96++)
                    {
                        g_131 = g_7;
                        return l_125;
                    }
                    l_85 &= ((-9L) != 0xAB6E628875917A22LL);
                    if (g_7)
                        continue;
                }
            }
            l_125 = (safe_sub_func_int8_t_s_s(l_98[0], (1L | (+((l_134 &= p_73) >= (safe_lshift_func_uint8_t_u_s(p_73, 0)))))));
            if ((l_125 = ((~g_52) < (l_134 & g_126))))
            {
                unsigned l_140[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_140[i] = 0x9CFB4F43L;
                l_134 |= (safe_add_func_uint64_t_u_u((++l_140[3]), g_111));
            }
            else
            {
                short l_145 = 0x3F81L;
                int l_176 = 0x58A3B074L;
                if ((l_134 = (((-1L) | (g_146 |= (safe_rshift_func_int8_t_s_u((l_145 <= g_7), l_145)))) != (safe_add_func_int16_t_s_s((!(((p_74 = 0L) >= l_134) >= 0xD5D7125CL)), l_96)))))
                {
                    unsigned l_153 = 0xAB542556L;
                    int l_154 = 0x89E0A6E6L;
                    l_154 &= (safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0L, (p_74 > l_153))), g_139));
                    g_146 &= (p_74 ^ (2UL || 4UL));
                }
                else
                {
                    unsigned long long l_169 = 0xC00C78AF0DFD19A3LL;
                    int l_173 = 4L;
                    if ((l_98[0] && (safe_div_func_int64_t_s_s(p_73, ((p_73 < 0UL) || (safe_lshift_func_uint8_t_u_u(((l_173 = (l_172 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((((0x3CFAL != (~(--g_52))) ^ ((l_145 && (safe_add_func_int16_t_s_s((l_134 = (safe_lshift_func_int16_t_s_s((l_169 = p_73), l_98[0]))), (safe_mod_func_int32_t_s_s(g_111, g_111))))) < 0x8DL)) & 0x53L) ^ 0xE58AL) | 4294967291UL) || g_126), p_73)), l_82)))) ^ 0L), 2)))))))
                    {
                        l_98[0] = p_73;
                        g_179++;
                        if (l_145)
                            continue;
                        if (g_52)
                            break;
                    }
                    else
                    {
                        l_172 ^= p_73;
                    }
                    l_98[0] = (safe_sub_func_int16_t_s_s(l_184, (((l_185 < (l_98[0] && 7UL)) == 0UL) && ((g_146 == (l_80 ^ ((l_178 ^= (safe_lshift_func_int16_t_s_u(l_188, 4))) || ((g_177 || g_3) >= p_73)))) > g_51))));
                }
                for (g_175 = 5; (g_175 >= 0); g_175 -= 1)
                {
                    for (g_112 = 0; g_112 < 6; g_112 += 1)
                    {
                        l_77[g_112] = 0x2479E7278546D85FLL;
                    }
                }
                if (g_52)
                    break;
            }
        }
    }
    l_85 = (l_77[4] > ((p_73 & p_74) != (g_139 > ((((((((!l_85) > l_77[0]) <= g_112) > l_98[0]) <= g_51) < l_98[0]) < p_73) ^ 0x9AB8L))));
    for (g_111 = 0; (g_111 <= 5); g_111 += 1)
    {
        short l_189 = 0xA108L;
        int l_190 = 0x6F503D31L;
        int l_191 = 0xA8AAE3D8L;
        int l_192 = 0xCC4FDDAEL;
        int l_193 = 0x82719CDBL;
        --l_194;
    }
    if ((l_98[0] = g_197))
    {
        unsigned short l_200 = 0x4033L;
        int l_201 = 0x9D8B4DDBL;
        int l_220 = 0x9F7DF0B7L;
        int l_271 = 0xD68D3CEBL;
        struct S0 l_294 = {0xE4512E56L,0,0x7829FDDACF115DCBLL,-1L,0x8AL,-1L,0xF60CF77D2F1C1144LL,0xB9L,-3L};
        unsigned char l_329 = 0x0FL;
        unsigned char l_355 = 0x51L;
        if ((safe_lshift_func_int16_t_s_s((((l_200 = p_74) | (1L == g_131)) == l_201), (safe_mod_func_uint64_t_u_u((g_175 < (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(l_98[0], l_201)), ((65535UL & (safe_mod_func_uint32_t_u_u(((l_85 = 0L) | l_98[0]), g_179))) == g_177)))), 9L)))))
        {
            short l_224 = 0x039AL;
            for (l_85 = 0; (l_85 != (-13)); --l_85)
            {
                int l_212 = 1L;
                l_212 = p_73;
                if (g_131)
                    continue;
            }
            l_98[0] |= ((g_131 > l_213[0]) & (p_74 ^ (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((g_139 != 9UL), (l_201 ^= p_73))), (65530UL && ((l_220 = p_73) == (((l_85 ^= ((safe_sub_func_uint64_t_u_u(p_73, l_223)) < 0xBEAFL)) != l_224) < l_80)))))));
        }
        else
        {
            return g_197;
        }
        for (l_223 = 0; (l_223 <= 4); l_223 += 1)
        {
            char l_264 = 0x6EL;
            int l_266 = 0x5F59FAD4L;
            struct S0 l_295[10][9][2] = {{{{0x31674906L,0,0x9404D5112FE5A6F2LL,0x2C39E34AL,0UL,0xF7DD5602L,0x6DFC7E60BC753603LL,2L,0xF0976038L},{18446744073709551615UL,0,0xE664F176A564B125LL,4L,3UL,0x94342D37L,0x20F75E01E494C05BLL,1L,3L}},{{0xDF0E0FF5L,0,2L,6L,0xE0L,0x873CDE5CL,0x21F5260697335239LL,0xE9L,0x8DBAE1EFL},{0UL,0,-9L,0x8F9594F6L,8UL,-1L,0xCF15C61B0C0A89FBLL,1L,1L}},{{3UL,0,0x8CBCF12418ACEA6FLL,1L,0xCAL,0xE5EF2AA0L,0xD725E3DA1E99B258LL,-1L,0xD4536AE6L},{0xEAA3F01EL,0,0x91E4BA6C3AF94921LL,1L,0x5CL,0L,0UL,0xF6L,6L}},{{6UL,0,0x3D029DA0CBD0F30ALL,-6L,1UL,-6L,0x106F14D4A0A185A4LL,-1L,0x1123631DL},{0xED0AED94L,0,-3L,0xFF14AEFDL,0x36L,-1L,0xAD68520351A9EF4CLL,0x23L,-6L}},{{2UL,0,1L,0xF5CB3850L,0x1BL,0L,0x2368AEAEA2844BE8LL,0x9EL,-10L},{0xFAE2E042L,0,0xF694B0D4290D7AD2LL,0x072602DFL,255UL,0xC9C755FAL,18446744073709551609UL,-3L,0x210143FDL}},{{0xDC7A7DE5L,0,0x967E6AB817C311D1LL,1L,249UL,-1L,0x785AC9E4394CAB00LL,0x47L,-1L},{18446744073709551615UL,0,-1L,-2L,0x7DL,0xDF11D21EL,18446744073709551615UL,-10L,-1L}},{{0xDF0E0FF5L,0,2L,6L,0xE0L,0x873CDE5CL,0x21F5260697335239LL,0xE9L,0x8DBAE1EFL},{0x2F9BF1B5L,0,0x702151D62543D657LL,-1L,0x7DL,0x729DA96AL,18446744073709551615UL,0xBEL,0x4B26791BL}},{{0x353BF5C4L,0,-1L,1L,0UL,0x1B233FA9L,0xAFF6A0F1A0B109EELL,-1L,0xDFC2FBD0L},{0x2031F29BL,0,0x53A32646635DCA35LL,1L,0x1EL,0xF49778D7L,18446744073709551615UL,1L,0xA5E1613AL}},{{0UL,0,-9L,0x8F9594F6L,8UL,-1L,0xCF15C61B0C0A89FBLL,1L,1L},{0xE22EB2A6L,0,-1L,0x02F784C0L,1UL,0x2DAACF49L,0xBCD600607C4CD595LL,0x60L,0xC24788FBL}}},{{{0xCAF97B9BL,0,5L,1L,0xC4L,1L,0xE1BA66277D689E26LL,-1L,1L},{0x019B404AL,0,0x96700F83C97DC504LL,0xCA22450FL,0xEEL,0x5107FC32L,18446744073709551615UL,1L,0L}},{{0xE490E6C0L,0,7L,-3L,0x00L,0L,0x8B93748A7D6011E4LL,-2L,-8L},{7UL,0,0L,2L,1UL,0x4B5B738DL,18446744073709551607UL,0x4BL,0L}},{{0UL,0,0xD2B4CA8E427DB72CLL,0x95E7EA1DL,0x7CL,-10L,0xCC9AF1DE974F8D43LL,0x57L,0x745939E3L},{18446744073709551608UL,0,0L,0xCB4687D5L,1UL,-4L,18446744073709551615UL,0x3EL,0xFDA686F1L}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L}},{{0x0D7AD1C5L,0,0L,0x62F7F560L,1UL,0L,18446744073709551614UL,1L,0x96106FD9L},{18446744073709551610UL,0,-2L,-3L,0xDEL,0x6892B8C9L,0xFD1D01273C4C20A3LL,9L,1L}},{{18446744073709551615UL,0,1L,3L,0x9EL,0x3A678C51L,0x4AD924322C28FF8BLL,0x7DL,0x859F1C5DL},{0UL,0,0L,0x38A76134L,0x4CL,4L,18446744073709551615UL,2L,0x62D4CC2BL}},{{4UL,0,-1L,0x2E9B0BE5L,255UL,-1L,0x7CA8C57EA85A4167LL,0xF9L,0x2CC45B12L},{0xE22EB2A6L,0,-1L,0x02F784C0L,1UL,0x2DAACF49L,0xBCD600607C4CD595LL,0x60L,0xC24788FBL}},{{4UL,0,1L,0L,255UL,0x833B5928L,0x803EDB0BF49BC353LL,1L,0x5EE233FAL},{0x154922CBL,0,0xF01FED1F277D8DE5LL,0xFF869411L,0x75L,7L,0xFEF7487D3886A773LL,0x56L,1L}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL}}},{{{18446744073709551615UL,0,0xE664F176A564B125LL,4L,3UL,0x94342D37L,0x20F75E01E494C05BLL,1L,3L},{0UL,0,0x6BAF50E186AC2539LL,-10L,0x75L,0xC8985D28L,1UL,0xC4L,9L}},{{6UL,0,0x3D029DA0CBD0F30ALL,-6L,1UL,-6L,0x106F14D4A0A185A4LL,-1L,0x1123631DL},{0x019B404AL,0,0x96700F83C97DC504LL,0xCA22450FL,0xEEL,0x5107FC32L,18446744073709551615UL,1L,0L}},{{0x2031F29BL,0,0x53A32646635DCA35LL,1L,0x1EL,0xF49778D7L,18446744073709551615UL,1L,0xA5E1613AL},{0x2031F29BL,0,0x53A32646635DCA35LL,1L,0x1EL,0xF49778D7L,18446744073709551615UL,1L,0xA5E1613AL}},{{0xE490E6C0L,0,7L,-3L,0x00L,0L,0x8B93748A7D6011E4LL,-2L,-8L},{0x31674906L,0,0x9404D5112FE5A6F2LL,0x2C39E34AL,0UL,0xF7DD5602L,0x6DFC7E60BC753603LL,2L,0xF0976038L}},{{0x2F9BF1B5L,0,0x702151D62543D657LL,-1L,0x7DL,0x729DA96AL,18446744073709551615UL,0xBEL,0x4B26791BL},{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL}},{{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L},{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L}},{{9UL,0,-1L,0x4B79847BL,0xFEL,3L,0x7C9A296DCEA92A1DLL,0xCDL,0L},{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L}},{{4UL,0,-1L,0x2E9B0BE5L,255UL,-1L,0x7CA8C57EA85A4167LL,0xF9L,0x2CC45B12L},{1UL,0,3L,0x2857CCBFL,0xE9L,4L,0x75B8925916D4BF3CLL,0x4CL,0L}},{{4UL,0,-1L,0x2E9B0BE5L,255UL,-1L,0x7CA8C57EA85A4167LL,0xF9L,0x2CC45B12L},{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L}}},{{{9UL,0,-1L,0x4B79847BL,0xFEL,3L,0x7C9A296DCEA92A1DLL,0xCDL,0L},{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L}},{{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L},{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL}},{{0x2F9BF1B5L,0,0x702151D62543D657LL,-1L,0x7DL,0x729DA96AL,18446744073709551615UL,0xBEL,0x4B26791BL},{0x31674906L,0,0x9404D5112FE5A6F2LL,0x2C39E34AL,0UL,0xF7DD5602L,0x6DFC7E60BC753603LL,2L,0xF0976038L}},{{0xE490E6C0L,0,7L,-3L,0x00L,0L,0x8B93748A7D6011E4LL,-2L,-8L},{0x2031F29BL,0,0x53A32646635DCA35LL,1L,0x1EL,0xF49778D7L,18446744073709551615UL,1L,0xA5E1613AL}},{{0x2031F29BL,0,0x53A32646635DCA35LL,1L,0x1EL,0xF49778D7L,18446744073709551615UL,1L,0xA5E1613AL},{0x019B404AL,0,0x96700F83C97DC504LL,0xCA22450FL,0xEEL,0x5107FC32L,18446744073709551615UL,1L,0L}},{{6UL,0,0x3D029DA0CBD0F30ALL,-6L,1UL,-6L,0x106F14D4A0A185A4LL,-1L,0x1123631DL},{0UL,0,0x6BAF50E186AC2539LL,-10L,0x75L,0xC8985D28L,1UL,0xC4L,9L}},{{18446744073709551615UL,0,0xE664F176A564B125LL,4L,3UL,0x94342D37L,0x20F75E01E494C05BLL,1L,3L},{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{0x154922CBL,0,0xF01FED1F277D8DE5LL,0xFF869411L,0x75L,7L,0xFEF7487D3886A773LL,0x56L,1L}},{{4UL,0,1L,0L,255UL,0x833B5928L,0x803EDB0BF49BC353LL,1L,0x5EE233FAL},{0xE22EB2A6L,0,-1L,0x02F784C0L,1UL,0x2DAACF49L,0xBCD600607C4CD595LL,0x60L,0xC24788FBL}}},{{{4UL,0,-1L,0x2E9B0BE5L,255UL,-1L,0x7CA8C57EA85A4167LL,0xF9L,0x2CC45B12L},{0UL,0,0L,0x38A76134L,0x4CL,4L,18446744073709551615UL,2L,0x62D4CC2BL}},{{18446744073709551615UL,0,1L,3L,0x9EL,0x3A678C51L,0x4AD924322C28FF8BLL,0x7DL,0x859F1C5DL},{18446744073709551610UL,0,-2L,-3L,0xDEL,0x6892B8C9L,0xFD1D01273C4C20A3LL,9L,1L}},{{0x0D7AD1C5L,0,0L,0x62F7F560L,1UL,0L,18446744073709551614UL,1L,0x96106FD9L},{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{18446744073709551608UL,0,0L,0xCB4687D5L,1UL,-4L,18446744073709551615UL,0x3EL,0xFDA686F1L}},{{0UL,0,0xD2B4CA8E427DB72CLL,0x95E7EA1DL,0x7CL,-10L,0xCC9AF1DE974F8D43LL,0x57L,0x745939E3L},{7UL,0,0L,2L,1UL,0x4B5B738DL,18446744073709551607UL,0x4BL,0L}},{{0xE490E6C0L,0,7L,-3L,0x00L,0L,0x8B93748A7D6011E4LL,-2L,-8L},{0x019B404AL,0,0x96700F83C97DC504LL,0xCA22450FL,0xEEL,0x5107FC32L,18446744073709551615UL,1L,0L}},{{0UL,0,-1L,8L,0x3BL,0x9A8C30F7L,1UL,0x23L,0x7CC21128L},{18446744073709551608UL,0,0x9356C6CD4D1F397BLL,0x78D9F81DL,0x6FL,0x8F734D98L,0UL,0xEEL,0xFE5E05E8L}},{{0x154922CBL,0,0xF01FED1F277D8DE5LL,0xFF869411L,0x75L,7L,0xFEF7487D3886A773LL,0x56L,1L},{0UL,0,0x6BAF50E186AC2539LL,-10L,0x75L,0xC8985D28L,1UL,0xC4L,9L}},{{0x2F9BF1B5L,0,0x702151D62543D657LL,-1L,0x7DL,0x729DA96AL,18446744073709551615UL,0xBEL,0x4B26791BL},{18446744073709551608UL,0,0L,0xCB4687D5L,1UL,-4L,18446744073709551615UL,0x3EL,0xFDA686F1L}}},{{{0xE22EB2A6L,0,-1L,0x02F784C0L,1UL,0x2DAACF49L,0xBCD600607C4CD595LL,0x60L,0xC24788FBL},{0xE490E6C0L,0,7L,-3L,0x00L,0L,0x8B93748A7D6011E4LL,-2L,-8L}},{{4UL,0,1L,0L,255UL,0x833B5928L,0x803EDB0BF49BC353LL,1L,0x5EE233FAL},{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L}},{{18446744073709551615UL,0,1L,3L,0x9EL,0x3A678C51L,0x4AD924322C28FF8BLL,0x7DL,0x859F1C5DL},{0xB78213E1L,0,0xF17BE2347F5DD222LL,-3L,0xABL,0xB80B1608L,0x3C33400544009106LL,-1L,0L}},{{0xDC7A7DE5L,0,0x967E6AB817C311D1LL,1L,249UL,-1L,0x785AC9E4394CAB00LL,0x47L,-1L},{18446744073709551610UL,0,-2L,-3L,0xDEL,0x6892B8C9L,0xFD1D01273C4C20A3LL,9L,1L}},{{9UL,0,-1L,0x4B79847BL,0xFEL,3L,0x7C9A296DCEA92A1DLL,0xCDL,0L},{0x154922CBL,0,0xF01FED1F277D8DE5LL,0xFF869411L,0x75L,7L,0xFEF7487D3886A773LL,0x56L,1L}},{{0xE22EB2A6L,0,-1L,0x02F784C0L,1UL,0x2DAACF49L,0xBCD600607C4CD595LL,0x60L,0xC24788FBL},{0xED0AED94L,0,-3L,0xFF14AEFDL,0x36L,-1L,0xAD68520351A9EF4CLL,0x23L,-6L}},{{0UL,0,0xD2B4CA8E427DB72CLL,0x95E7EA1DL,0x7CL,-10L,0xCC9AF1DE974F8D43LL,0x57L,0x745939E3L},{0x31674906L,0,0x9404D5112FE5A6F2LL,0x2C39E34AL,0UL,0xF7DD5602L,0x6DFC7E60BC753603LL,2L,0xF0976038L}},{{6UL,0,0x3D029DA0CBD0F30ALL,-6L,1UL,-6L,0x106F14D4A0A185A4LL,-1L,0x1123631DL},{18446744073709551608UL,0,0x9356C6CD4D1F397BLL,0x78D9F81DL,0x6FL,0x8F734D98L,0UL,0xEEL,0xFE5E05E8L}},{{0x019B404AL,0,0x96700F83C97DC504LL,0xCA22450FL,0xEEL,0x5107FC32L,18446744073709551615UL,1L,0L},{18446744073709551608UL,0,0x9356C6CD4D1F397BLL,0x78D9F81DL,0x6FL,0x8F734D98L,0UL,0xEEL,0xFE5E05E8L}}},{{{6UL,0,0x3D029DA0CBD0F30ALL,-6L,1UL,-6L,0x106F14D4A0A185A4LL,-1L,0x1123631DL},{0x31674906L,0,0x9404D5112FE5A6F2LL,0x2C39E34AL,0UL,0xF7DD5602L,0x6DFC7E60BC753603LL,2L,0xF0976038L}},{{0UL,0,0xD2B4CA8E427DB72CLL,0x95E7EA1DL,0x7CL,-10L,0xCC9AF1DE974F8D43LL,0x57L,0x745939E3L},{0xED0AED94L,0,-3L,0xFF14AEFDL,0x36L,-1L,0xAD68520351A9EF4CLL,0x23L,-6L}},{{0xE22EB2A6L,0,-1L,0x02F784C0L,1UL,0x2DAACF49L,0xBCD600607C4CD595LL,0x60L,0xC24788FBL},{0x154922CBL,0,0xF01FED1F277D8DE5LL,0xFF869411L,0x75L,7L,0xFEF7487D3886A773LL,0x56L,1L}},{{0UL,0,0x6BAF50E186AC2539LL,-10L,0x75L,0xC8985D28L,1UL,0xC4L,9L},{18446744073709551608UL,0,0L,0xCB4687D5L,1UL,-4L,18446744073709551615UL,0x3EL,0xFDA686F1L}},{{0xF5532DAAL,0,1L,0x209BB8CCL,252UL,7L,18446744073709551609UL,0x6EL,1L},{0x0D7AD1C5L,0,0L,0x62F7F560L,1UL,0L,18446744073709551614UL,1L,0x96106FD9L}},{{18446744073709551608UL,0,0x9356C6CD4D1F397BLL,0x78D9F81DL,0x6FL,0x8F734D98L,0UL,0xEEL,0xFE5E05E8L},{2UL,0,-1L,-7L,246UL,0xAD0FF3DFL,18446744073709551613UL,-4L,-5L}},{{18446744073709551611UL,0,-10L,2L,0UL,0x52AF1B3BL,0xF82F0E3FB895A399LL,0x8EL,-6L},{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L}},{{0xFDDEAE75L,0,0x34C04760FD3A3C41LL,9L,9UL,0x28EB46ABL,0x4D604C6C6E6C73E7LL,0x29L,-1L},{3UL,0,0x8CBCF12418ACEA6FLL,1L,0xCAL,0xE5EF2AA0L,0xD725E3DA1E99B258LL,-1L,0xD4536AE6L}},{{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L},{18446744073709551615UL,0,-1L,-2L,0x7DL,0xDF11D21EL,18446744073709551615UL,-10L,-1L}}},{{{0xCAF97B9BL,0,5L,1L,0xC4L,1L,0xE1BA66277D689E26LL,-1L,1L},{0UL,0,0L,0x38A76134L,0x4CL,4L,18446744073709551615UL,2L,0x62D4CC2BL}},{{0xB78213E1L,0,0xF17BE2347F5DD222LL,-3L,0xABL,0xB80B1608L,0x3C33400544009106LL,-1L,0L},{0xA4C5BDC9L,0,0xAF24BCD46B94CA93LL,0x172D3BC9L,255UL,1L,0xFABE88D637EBF149LL,-1L,0x20FB379CL}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{0UL,0,-9L,0x8F9594F6L,8UL,-1L,0xCF15C61B0C0A89FBLL,1L,1L}},{{6UL,0,0x3D029DA0CBD0F30ALL,-6L,1UL,-6L,0x106F14D4A0A185A4LL,-1L,0x1123631DL},{3UL,0,0x8CBCF12418ACEA6FLL,1L,0xCAL,0xE5EF2AA0L,0xD725E3DA1E99B258LL,-1L,0xD4536AE6L}},{{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL},{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L}},{{0x353BF5C4L,0,-1L,1L,0UL,0x1B233FA9L,0xAFF6A0F1A0B109EELL,-1L,0xDFC2FBD0L},{18446744073709551608UL,0,0L,0xCB4687D5L,1UL,-4L,18446744073709551615UL,0x3EL,0xFDA686F1L}},{{18446744073709551608UL,0,0x9356C6CD4D1F397BLL,0x78D9F81DL,0x6FL,0x8F734D98L,0UL,0xEEL,0xFE5E05E8L},{1UL,0,0x03F32B09EA1879BDLL,1L,255UL,0xEB3A67F1L,1UL,0x70L,1L}},{{0UL,0,-1L,8L,0x3BL,0x9A8C30F7L,1UL,0x23L,0x7CC21128L},{0xFDDEAE75L,0,0x34C04760FD3A3C41LL,9L,9UL,0x28EB46ABL,0x4D604C6C6E6C73E7LL,0x29L,-1L}},{{18446744073709551611UL,0,-10L,2L,0UL,0x52AF1B3BL,0xF82F0E3FB895A399LL,0x8EL,-6L},{0xCAF97B9BL,0,5L,1L,0xC4L,1L,0xE1BA66277D689E26LL,-1L,1L}}},{{{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL},{0xDC7A7DE5L,0,0x967E6AB817C311D1LL,1L,249UL,-1L,0x785AC9E4394CAB00LL,0x47L,-1L}},{{2UL,0,1L,0xF5CB3850L,0x1BL,0L,0x2368AEAEA2844BE8LL,0x9EL,-10L},{18446744073709551615UL,0,-1L,-2L,0x7DL,0xDF11D21EL,18446744073709551615UL,-10L,-1L}},{{18446744073709551610UL,0,-2L,-3L,0xDEL,0x6892B8C9L,0xFD1D01273C4C20A3LL,9L,1L},{0xA4C5BDC9L,0,0xAF24BCD46B94CA93LL,0x172D3BC9L,255UL,1L,0xFABE88D637EBF149LL,-1L,0x20FB379CL}},{{0UL,0,1L,0x90A3EB4FL,0xC9L,-9L,1UL,0xBCL,0L},{0UL,0,1L,0x90A3EB4FL,0xC9L,-9L,1UL,0xBCL,0L}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{0UL,0,1L,-4L,0xCEL,0x86A8BDDCL,6UL,-1L,3L}},{{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L},{0xDC7A7DE5L,0,0x967E6AB817C311D1LL,1L,249UL,-1L,0x785AC9E4394CAB00LL,0x47L,-1L}},{{2UL,0,-1L,-7L,246UL,0xAD0FF3DFL,18446744073709551613UL,-4L,-5L},{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L}},{{0UL,0,0x6BAF50E186AC2539LL,-10L,0x75L,0xC8985D28L,1UL,0xC4L,9L},{2UL,0,-1L,-7L,246UL,0xAD0FF3DFL,18446744073709551613UL,-4L,-5L}},{{0UL,0,-1L,8L,0x3BL,0x9A8C30F7L,1UL,0x23L,0x7CC21128L},{9UL,0,-1L,0x4B79847BL,0xFEL,3L,0x7C9A296DCEA92A1DLL,0xCDL,0L}}},{{{0UL,0,-1L,8L,0x3BL,0x9A8C30F7L,1UL,0x23L,0x7CC21128L},{2UL,0,-1L,-7L,246UL,0xAD0FF3DFL,18446744073709551613UL,-4L,-5L}},{{0UL,0,0x6BAF50E186AC2539LL,-10L,0x75L,0xC8985D28L,1UL,0xC4L,9L},{18446744073709551608UL,0,0xC395D0388B1D5A46LL,0xA609C0ABL,0xC0L,6L,8UL,0x83L,0x02527ED6L}},{{2UL,0,-1L,-7L,246UL,0xAD0FF3DFL,18446744073709551613UL,-4L,-5L},{0xDC7A7DE5L,0,0x967E6AB817C311D1LL,1L,249UL,-1L,0x785AC9E4394CAB00LL,0x47L,-1L}},{{18446744073709551615UL,0,-1L,0x10A179D6L,0UL,1L,0xFDD93EADBCF66C92LL,-1L,0x965CA663L},{0UL,0,1L,-4L,0xCEL,0x86A8BDDCL,6UL,-1L,3L}},{{0xD4FCC94AL,0,0L,0x58C91931L,1UL,1L,0xDCDA6C5632800E8FLL,0x10L,0L},{0UL,0,1L,0x90A3EB4FL,0xC9L,-9L,1UL,0xBCL,0L}},{{0UL,0,1L,0x90A3EB4FL,0xC9L,-9L,1UL,0xBCL,0L},{0xA4C5BDC9L,0,0xAF24BCD46B94CA93LL,0x172D3BC9L,255UL,1L,0xFABE88D637EBF149LL,-1L,0x20FB379CL}},{{18446744073709551610UL,0,-2L,-3L,0xDEL,0x6892B8C9L,0xFD1D01273C4C20A3LL,9L,1L},{18446744073709551615UL,0,-1L,-2L,0x7DL,0xDF11D21EL,18446744073709551615UL,-10L,-1L}},{{2UL,0,1L,0xF5CB3850L,0x1BL,0L,0x2368AEAEA2844BE8LL,0x9EL,-10L},{0xDC7A7DE5L,0,0x967E6AB817C311D1LL,1L,249UL,-1L,0x785AC9E4394CAB00LL,0x47L,-1L}},{{0x5392C4ABL,0,1L,0x0BFF936EL,0x21L,0x4F02E37AL,0x10A31BF18520669BLL,0x4CL,0x6625C39CL},{0xCAF97B9BL,0,5L,1L,0xC4L,1L,0xE1BA66277D689E26LL,-1L,1L}}}};
            int l_305 = 0xAD7370EEL;
            int i, j, k;
            if ((safe_add_func_uint32_t_u_u(8UL, (l_213[l_223] < (safe_lshift_func_int8_t_s_u(g_179, (l_220 |= ((safe_add_func_int8_t_s_s((p_74 ^ p_73), g_112)) < l_200))))))))
            {
                short l_243 = 0x8E07L;
                int l_247 = 0L;
                int l_354[8][8][4] = {{{0L,(-10L),(-1L),0x43B8A4E3L},{0L,1L,0x3C9B72CFL,0xAA1D81B0L},{(-1L),0xC96C7BE4L,0x872CF653L,0x068A1056L},{0x04E4ED97L,0x2DE0D5E9L,0xF935C776L,(-1L)},{0x6BA6F488L,1L,1L,(-10L)},{0xE44E0550L,0xB149C955L,1L,(-1L)},{0x5B746D05L,0xAA1D81B0L,0x330A7F29L,0x82E65580L},{0x8F6FAFF0L,(-4L),0L,0x250B63EFL}},{{0L,6L,0x1D43A7ABL,0x872CF653L},{0x9BA58EC1L,0L,3L,0x50E780B2L},{1L,0x872CF653L,1L,0x4555B17CL},{(-1L),0xE86E7364L,0xB278A555L,1L},{6L,0x5B746D05L,0xABB2BDB5L,0xABB2BDB5L},{0x4555B17CL,0x4555B17CL,(-10L),0xB149C955L},{0x250B63EFL,1L,1L,0xD4A7A37DL},{0x7266BDEAL,(-1L),(-4L),1L}},{{0L,(-1L),0xFEC5D074L,0xD4A7A37DL},{(-1L),1L,0x3555016AL,0xB149C955L},{0xDAF2A16EL,0x4555B17CL,0xD8928E7DL,0xABB2BDB5L},{0xD58D1894L,0x5B746D05L,0x8F6FAFF0L,1L},{(-2L),0xE86E7364L,1L,0x4555B17CL},{0x3555016AL,0x872CF653L,6L,0x50E780B2L},{0x43B8A4E3L,0L,0x068A1056L,0x872CF653L},{0x22D0028AL,6L,(-1L),0x250B63EFL}},{{(-4L),0xB149C955L,6L,3L},{1L,1L,0x2DE0D5E9L,0x43B8A4E3L},{(-2L),(-4L),0L,0L},{(-1L),0x250B63EFL,0xD8928E7DL,(-1L)},{0x06FB521FL,0xD4A7A37DL,0x6BA6F488L,1L},{(-1L),0L,(-1L),1L},{1L,0x04E4ED97L,(-4L),0x1D43A7ABL},{0xC96C7BE4L,0x330A7F29L,(-4L),0x82E65580L}},{{0x4555B17CL,(-1L),0xDAF2A16EL,0xC96C7BE4L},{(-1L),0x4555B17CL,(-1L),0xB08AA401L},{1L,0L,0x2DE0D5E9L,0L},{0xD4A7A37DL,0L,0x3555016AL,0x43B8A4E3L},{0x343886A9L,0x5610E7EFL,(-4L),0xFC93D087L},{1L,1L,1L,0L},{1L,0x1D43A7ABL,(-4L),0x04E4ED97L},{0x343886A9L,0L,0x3555016AL,(-1L)}},{{0xD4A7A37DL,0xC71DCDE1L,0x2DE0D5E9L,0x250B63EFL},{1L,1L,(-1L),0xD58D1894L},{(-1L),0xCC798346L,0xDAF2A16EL,3L},{0x4555B17CL,(-1L),(-4L),0x872CF653L},{0x06FB521FL,0xABB2BDB5L,1L,(-1L)},{0x1D43A7ABL,0xF935C776L,0x7266BDEAL,(-1L)},{0xF935C776L,(-1L),2L,0x5610E7EFL},{0x7ADC6A9DL,(-1L),0xFC93D087L,0xD58D1894L}},{{0x7266BDEAL,(-2L),6L,0xD8928E7DL},{(-1L),0xC71DCDE1L,0L,0xCC798346L},{0x250B63EFL,0xE86E7364L,0x50E780B2L,0x04E4ED97L},{1L,1L,0x9BA58EC1L,0xE86E7364L},{0x5B746D05L,1L,(-7L),0x4555B17CL},{0L,3L,0x50E780B2L,0x43B8A4E3L},{0xD8928E7DL,0x22D0028AL,5L,1L},{(-1L),0L,0x04E4ED97L,0x3C9B72CFL}},{{0L,(-7L),(-7L),0L},{0xA9A6FEB2L,1L,0x068A1056L,0L},{0x7266BDEAL,0x343886A9L,0x7ADC6A9DL,1L},{0xB278A555L,(-10L),1L,1L},{1L,0x343886A9L,0xFEC5D074L,0L},{0x9BA58EC1L,1L,0x330A7F29L,0L},{0xB08AA401L,(-7L),0xE44E0550L,0x3C9B72CFL},{0x6BA6F488L,0L,0xE74484EAL,1L}}};
                int i, j, k;
                if (((g_177 &= p_74) & 0xF7C02C53L))
                {
                    if (g_126)
                        break;
                    return g_139;
                }
                else
                {
                    int l_263 = 0xD06F51EBL;
                    int l_267 = 0x7DD19256L;
                    if (((g_46 && (safe_mod_func_uint16_t_u_u((g_177 >= g_146), ((safe_rshift_func_int16_t_s_s(((g_174[3][1] = (p_73 = (safe_rshift_func_int16_t_s_u(1L, 11)))) ^ (safe_add_func_int32_t_s_s(p_74, ((6L != 0xF1DB39C2C3B88169LL) ^ ((safe_sub_func_uint32_t_u_u((((g_179 = g_131) || ((p_74 && 1UL) <= 0x8710B7D7F6A1A75BLL)) != l_243), l_243)) < l_201))))), g_46)) ^ g_197)))) < l_243))
                    {
                        long long l_244 = 0xFBD567D7ABB9593ELL;
                        int l_248 = 0x4241E0B0L;
                        l_85 ^= l_244;
                        l_247 &= (safe_div_func_int64_t_s_s((~p_73), p_74));
                        g_251++;
                    }
                    else
                    {
                        unsigned short l_265[6] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                        int i;
                        if (l_85)
                            break;
                        l_267 = (p_74 <= (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((g_174[3][1] < ((p_74 == (safe_unary_minus_func_int32_t_s(p_74))) > (safe_lshift_func_uint16_t_u_s(g_51, 1)))), (l_266 = (safe_sub_func_int64_t_s_s(l_263, ((l_213[l_223] >= (g_177 = (l_264 | (l_265[4] && 0L)))) && 1L)))))), g_46)));
                    }
                    if ((safe_unary_minus_func_uint64_t_u(l_213[0])))
                    {
                        char l_272[10][6] = {{5L,0xB0L,0xB0L,5L,0x57L,0L},{0x57L,5L,0xB0L,0xB0L,5L,0x57L},{0x57L,0xB0L,0L,5L,5L,0L},{5L,5L,0L,0xB0L,0x57L,0x57L},{5L,0xB0L,0xB0L,5L,0x57L,0L},{0x57L,5L,0xB0L,0xB0L,5L,0x57L},{0x57L,0xB0L,0L,5L,5L,0L},{5L,5L,0L,0xB0L,0x57L,0x57L},{5L,0xB0L,0xB0L,5L,0x57L,0L},{0x57L,5L,0xB0L,0xB0L,5L,0x57L}};
                        int l_273 = 0L;
                        int l_274[9][7] = {{(-7L),0xDC08B3C0L,0L,0xDC08B3C0L,(-7L),0x4E6EA635L,0xDC08B3C0L},{1L,2L,0x3A83041FL,0xDC08B3C0L,(-1L),0x3A83041FL,0x523AABD7L},{(-1L),0x523AABD7L,(-7L),(-7L),0x523AABD7L,(-1L),2L},{1L,0xDC08B3C0L,0L,1L,0x523AABD7L,(-1L),0xDC08B3C0L},{(-7L),1L,(-1L),0x209ACC29L,(-1L),1L,(-7L)},{1L,0xDC08B3C0L,(-7L),(-1L),(-7L),1L,(-1L)},{1L,0x523AABD7L,(-1L),0xDC08B3C0L,0xDC08B3C0L,(-1L),0x523AABD7L},{0xDC08B3C0L,2L,(-7L),0x209ACC29L,2L,(-1L),0x523AABD7L},{0x3A83041FL,0xDC08B3C0L,(-1L),0x3A83041FL,0x523AABD7L,0x3A83041FL,(-1L)}};
                        int i, j;
                        l_266 |= (safe_lshift_func_uint16_t_u_s((!p_74), p_73));
                        --g_276;
                        if (g_126)
                            continue;
                        g_146 = l_82;
                    }
                    else
                    {
                        char l_281[1][9] = {{(-1L),1L,(-1L),1L,(-1L),1L,(-1L),1L,(-1L)}};
                        int i, j;
                        l_85 = (safe_add_func_uint8_t_u_u(l_247, l_281[0][8]));
                        l_201 = (0x9FE0L || p_74);
                        g_177 = (safe_add_func_uint16_t_u_u(g_126, (safe_div_func_uint32_t_u_u(((-4L) ^ (g_174[0][1] = ((l_247 ^= (g_179 = ((0xDA9B5F79306F493ALL & g_179) != (-4L)))) & (g_251 = ((g_174[0][1] | (safe_add_func_uint64_t_u_u(g_174[0][0], (safe_unary_minus_func_int32_t_s((((safe_rshift_func_uint8_t_u_s((l_85 = (0x11L != ((safe_div_func_uint16_t_u_u((((l_201 != p_73) >= 0xED9A8A87L) <= g_7), l_267)) > p_74))), g_249)) <= 0x2304L) | p_74)))))) <= (-1L)))))), l_281[0][8]))));
                    }
                    if (p_73)
                        break;
                    for (l_80 = 0; (l_80 <= 4); l_80 += 1)
                    {
                        unsigned l_293 = 0UL;
                        l_267 = (l_293 &= p_73);
                    }
                }
                l_295[1][5][1] = l_294;
                if (g_175)
                {
                    unsigned l_296 = 0x22A53195L;
                    int l_299 = 0L;
                    char l_304[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_304[i] = (-1L);
                    g_177 = l_294.f3;
                    if (p_74)
                        break;
                    for (g_197 = 0; (g_197 <= 4); g_197 += 1)
                    {
                        long long l_300 = 6L;
                        int l_302 = (-2L);
                        int l_303 = 0x1A1063FFL;
                        int l_306 = (-2L);
                        int l_307 = 0xCB26E2E9L;
                        l_98[0] = (l_296 >= ((l_299 = (safe_div_func_uint16_t_u_u(g_249, g_174[1][0]))) != g_249));
                        l_300 = (+p_74);
                        g_301 = g_301;
                        g_308++;
                    }
                    g_301.f8 = ((g_3 ^ (l_77[2] && (safe_div_func_int32_t_s_s(g_250[0], (-1L))))) ^ (safe_add_func_uint8_t_u_u((+(p_74 <= g_301.f7)), ((safe_mod_func_int8_t_s_s(p_73, (g_301.f8 ^ (safe_sub_func_uint8_t_u_u(g_146, g_301.f6))))) && g_301.f5))));
                }
                else
                {
                    struct S0 l_326 = {1UL,0,0x6DFB4D513ECCE02CLL,-1L,0x7BL,-1L,0x8662B628FBCA930CLL,0xB7L,0xB4C6E2BDL};
                    int i;
                    if ((safe_add_func_int16_t_s_s((l_294.f1 != (safe_lshift_func_uint8_t_u_s((p_74 < l_323), 0))), ((safe_sub_func_int8_t_s_s((l_213[l_223] = g_301.f2), l_200)) || 0x6928EF8292C22B09LL))))
                    {
                        short l_327 = 0xEF35L;
                        int l_328 = (-6L);
                        l_326 = g_301;
                        g_301.f3 = (+(l_327 &= l_271));
                        l_329--;
                    }
                    else
                    {
                        g_146 = g_52;
                        if (g_126)
                            continue;
                        l_305 = 1L;
                    }
                    for (l_264 = (-17); (l_264 > (-15)); l_264 = safe_add_func_int64_t_s_s(l_264, 8))
                    {
                        long long l_334 = 1L;
                        int l_338 = 0x9BC05BFCL;
                        g_301.f8 |= p_74;
                        l_98[0] &= p_73;
                        --g_339;
                    }
                    l_85 ^= ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((0xDADD2AD04589D9BELL == (!(p_74 != (g_3 ^ (safe_mod_func_int16_t_s_s(((safe_div_func_int64_t_s_s((l_98[0] ^= 0x96D7EAB7ACE29125LL), l_326.f1)) <= (((l_294.f3 <= (g_197 & (safe_rshift_func_int8_t_s_u((((g_301.f5 >= ((safe_mod_func_uint32_t_u_u(l_82, g_51)) >= 0xE61EL)) | g_301.f3) >= 0xFB614299L), g_337)))) | 0x6623E423L) > l_271)), l_201)))))), 9)), 1)) & 0x396881C8L);
                    l_355--;
                }
                if (l_243)
                    break;
            }
            else
            {
                int l_358[9] = {0L,0L,0x8FD4B3F3L,0L,0L,0x8FD4B3F3L,0L,0L,0x8FD4B3F3L};
                struct S0 l_375 = {18446744073709551611UL,0,0L,0x9A064169L,252UL,1L,0xAC08E1C68E808999LL,-1L,1L};
                struct S0 l_376 = {18446744073709551615UL,0,3L,0x3F11F2B1L,0xD7L,7L,0UL,0L,-1L};
                int i;
                if (g_301.f7)
                {
                    int l_359 = 0L;
                    int l_360 = 0xB6067CA7L;
                    if (l_358[5])
                        break;
                    ++g_362;
                }
                else
                {
                    unsigned l_365[6][5][8] = {{{0UL,0UL,18446744073709551615UL,0xD0C776CEL,9UL,18446744073709551607UL,0x1F85D707L,18446744073709551615UL},{1UL,18446744073709551614UL,0x223959D6L,18446744073709551607UL,0x99FE74D2L,0xDE803797L,18446744073709551615UL,0x3B8AF24DL},{0x568DCC7CL,0x5E154FA8L,0UL,18446744073709551606UL,18446744073709551606UL,0UL,0x5E154FA8L,0x568DCC7CL},{0x3DE64706L,0UL,0x3B8AF24DL,0xDE803797L,0x9BD9B6EDL,18446744073709551615UL,0x8F0EA836L,0xD0C776CEL},{18446744073709551615UL,9UL,0x6D02DDA5L,0xB244248FL,0xDE803797L,18446744073709551615UL,0UL,0UL}},{{0x307492A8L,0UL,18446744073709551606UL,1UL,0x29304A43L,0UL,0x6D02DDA5L,0xDE803797L},{0UL,0x5E154FA8L,0xD0C776CEL,0UL,18446744073709551614UL,0xDE803797L,18446744073709551614UL,0UL},{0x1F85D707L,18446744073709551614UL,0x1F85D707L,0x6D02DDA5L,18446744073709551606UL,0x1C1FCB65L,18446744073709551610UL,0x1F85D707L},{0x9BD9B6EDL,1UL,0x223959D6L,0xDE803797L,0UL,9UL,18446744073709551606UL,0x3B8AF24DL},{0x9BD9B6EDL,0x3DE64706L,0x6D02DDA5L,0x223959D6L,18446744073709551606UL,0x91C9A9BAL,0x3DE64706L,1UL}},{{0x1F85D707L,0UL,1UL,0x307492A8L,18446744073709551614UL,1UL,0x8F0EA836L,0x8F0EA836L},{0UL,0x29304A43L,0xB244248FL,0xB244248FL,0x29304A43L,0UL,18446744073709551615UL,0UL},{0x307492A8L,18446744073709551612UL,0x1C1FCB65L,0UL,0xDE803797L,0UL,18446744073709551610UL,0x5E154FA8L},{18446744073709551615UL,0UL,18446744073709551615UL,0UL,0x1C1FCB65L,0x1F85D707L,0x223959D6L,0UL},{1UL,0x1C1FCB65L,0UL,9UL,0xB244248FL,0UL,0x307492A8L,0UL}},{{18446744073709551615UL,0x223959D6L,0xB244248FL,0x5E154FA8L,1UL,0x5E154FA8L,0xB244248FL,0x223959D6L},{0x223959D6L,0UL,9UL,0x91C9A9BAL,0x6D02DDA5L,18446744073709551607UL,0UL,0UL},{18446744073709551612UL,1UL,18446744073709551615UL,0xD0C776CEL,0x223959D6L,0x99FE74D2L,0UL,18446744073709551612UL},{18446744073709551615UL,0xD0C776CEL,9UL,18446744073709551607UL,0x1F85D707L,18446744073709551615UL,0xB244248FL,0UL},{0x1F85D707L,18446744073709551615UL,0xB244248FL,0UL,0xD0C776CEL,0x307492A8L,0x307492A8L,0xD0C776CEL}},{{0x99FE74D2L,0UL,0UL,0x99FE74D2L,18446744073709551606UL,0x5E154FA8L,0x223959D6L,0UL},{0UL,18446744073709551606UL,18446744073709551615UL,9UL,0x6D02DDA5L,0xB244248FL,0xDE803797L,18446744073709551615UL},{18446744073709551615UL,18446744073709551606UL,18446744073709551610UL,0xD0C776CEL,0x3B8AF24DL,0x5E154FA8L,0x6D02DDA5L,18446744073709551615UL},{0x1C1FCB65L,0UL,9UL,0xB244248FL,0UL,0x307492A8L,0UL,0UL},{1UL,18446744073709551615UL,0x223959D6L,0x3DE64706L,0x223959D6L,18446744073709551615UL,1UL,0x307492A8L}},{{0xD0C776CEL,0UL,0x1C1FCB65L,0x223959D6L,0x91C9A9BAL,0xD0C776CEL,0x568DCC7CL,0x1F85D707L},{0UL,0x3DE64706L,18446744073709551614UL,0x5E154FA8L,0x91C9A9BAL,0x1C1FCB65L,0UL,18446744073709551610UL},{0xD0C776CEL,9UL,18446744073709551607UL,0x1F85D707L,18446744073709551615UL,0xB244248FL,0UL,0xD0C776CEL},{0xDE803797L,18446744073709551615UL,0x29304A43L,0x1C1FCB65L,1UL,1UL,0x1C1FCB65L,0x29304A43L},{1UL,1UL,0x568DCC7CL,18446744073709551610UL,1UL,0x6D02DDA5L,1UL,18446744073709551615UL}}};
                    int i, j, k;
                    --l_365[5][0][0];
                }
                for (l_266 = 0; (l_266 == 9); l_266 = safe_add_func_uint32_t_u_u(l_266, 5))
                {
                    short l_370 = 0xD9BBL;
                    int l_371 = 0x18E0B50CL;
                    l_371 ^= (g_177 &= ((l_295[1][5][1].f3 = (g_175 != (l_294.f4 && g_251))) <= l_370));
                }
                l_295[1][5][1] = l_372;
                if (g_301.f4)
                {
                    if ((g_301.f3 = (safe_rshift_func_uint8_t_u_s((g_111 = (g_308 | ((g_179 = l_358[5]) & (g_301.f3 ^ g_131)))), g_250[2]))))
                    {
                        l_375 = g_301;
                    }
                    else
                    {
                        g_301 = g_301;
                        l_375 = g_301;
                    }
                    l_295[1][5][1] = (l_376 = l_372);
                }
                else
                {
                    struct S0 l_377 = {0x8B54B96FL,0,0L,8L,1UL,0x24EA8E5CL,0x78D276F7462146B1LL,0L,1L};
                    g_301 = l_377;
                    for (l_294.f3 = 0; (l_294.f3 == (-22)); l_294.f3 = safe_sub_func_uint8_t_u_u(l_294.f3, 8))
                    {
                        g_301 = g_301;
                    }
                    l_377.f3 = ((g_250[0] = (l_295[1][5][1].f3 = p_74)) & p_73);
                    l_377.f8 = (safe_rshift_func_int8_t_s_u(0L, 6));
                }
            }
        }
    }
    else
    {
        unsigned char l_398 = 0UL;
        for (l_372.f3 = 28; (l_372.f3 == 2); l_372.f3 = safe_sub_func_int8_t_s_s(l_372.f3, 7))
        {
            l_98[0] |= 0xCB9DB35FL;
        }
        g_177 |= p_73;
        g_301.f8 ^= ((l_213[4] != l_372.f4) <= ((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((g_275 |= (safe_div_func_int16_t_s_s(l_98[0], (l_336[3] && 0x04L)))), (3L < ((g_111++) < (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((((p_74 != (p_73 & ((g_174[5][1] & p_73) >= l_80))) & p_74) && l_372.f5), l_398)), g_276)))))), l_399)), l_399)) > 0x80FBL));
    }
    return l_80;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_174[i][j], "g_174[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_250[i], "g_250[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_301.f0, "g_301.f0", print_hash_value);
    transparent_crc(g_301.f1, "g_301.f1", print_hash_value);
    transparent_crc(g_301.f2, "g_301.f2", print_hash_value);
    transparent_crc(g_301.f3, "g_301.f3", print_hash_value);
    transparent_crc(g_301.f4, "g_301.f4", print_hash_value);
    transparent_crc(g_301.f5, "g_301.f5", print_hash_value);
    transparent_crc(g_301.f6, "g_301.f6", print_hash_value);
    transparent_crc(g_301.f7, "g_301.f7", print_hash_value);
    transparent_crc(g_301.f8, "g_301.f8", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_361[i], "g_361[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_451[i][j].f0, "g_451[i][j].f0", print_hash_value);
            transparent_crc(g_451[i][j].f1, "g_451[i][j].f1", print_hash_value);
            transparent_crc(g_451[i][j].f2, "g_451[i][j].f2", print_hash_value);
            transparent_crc(g_451[i][j].f3, "g_451[i][j].f3", print_hash_value);
            transparent_crc(g_451[i][j].f4, "g_451[i][j].f4", print_hash_value);
            transparent_crc(g_451[i][j].f5, "g_451[i][j].f5", print_hash_value);
            transparent_crc(g_451[i][j].f6, "g_451[i][j].f6", print_hash_value);
            transparent_crc(g_451[i][j].f7, "g_451[i][j].f7", print_hash_value);
            transparent_crc(g_451[i][j].f8, "g_451[i][j].f8", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_485[i][j], "g_485[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_604.f0, "g_604.f0", print_hash_value);
    transparent_crc(g_604.f1, "g_604.f1", print_hash_value);
    transparent_crc(g_604.f2, "g_604.f2", print_hash_value);
    transparent_crc(g_604.f3, "g_604.f3", print_hash_value);
    transparent_crc(g_604.f4, "g_604.f4", print_hash_value);
    transparent_crc(g_604.f5, "g_604.f5", print_hash_value);
    transparent_crc(g_604.f6, "g_604.f6", print_hash_value);
    transparent_crc(g_604.f7, "g_604.f7", print_hash_value);
    transparent_crc(g_604.f8, "g_604.f8", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_636[i][j], "g_636[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_801, "g_801", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_884, "g_884", print_hash_value);
    transparent_crc(g_885, "g_885", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_934, "g_934", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_954[i][j], "g_954[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_986, "g_986", print_hash_value);
    transparent_crc(g_1012, "g_1012", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    transparent_crc(g_1123, "g_1123", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1305[i][j], "g_1305[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1415, "g_1415", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1533[i], "g_1533[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1558, "g_1558", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1609, "g_1609", print_hash_value);
    transparent_crc(g_1610, "g_1610", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1830, "g_1830", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1832[i][j], "g_1832[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1869, "g_1869", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1876, "g_1876", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1916[i][j], "g_1916[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_1936, "g_1936", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1993[i][j], "g_1993[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1994, "g_1994", print_hash_value);
    transparent_crc(g_2012, "g_2012", print_hash_value);
    transparent_crc(g_2110, "g_2110", print_hash_value);
    transparent_crc(g_2114, "g_2114", print_hash_value);
    transparent_crc(g_2118, "g_2118", print_hash_value);
    transparent_crc(g_2187, "g_2187", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2237[i][j][k], "g_2237[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2238, "g_2238", print_hash_value);
    transparent_crc(g_2300, "g_2300", print_hash_value);
    transparent_crc(g_2301, "g_2301", print_hash_value);
    transparent_crc(g_2410, "g_2410", print_hash_value);
    transparent_crc(g_2411, "g_2411", print_hash_value);
    transparent_crc(g_2413, "g_2413", print_hash_value);
    transparent_crc(g_2429, "g_2429", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_2431[i], "g_2431[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2436, "g_2436", print_hash_value);
    transparent_crc(g_2460, "g_2460", print_hash_value);
    transparent_crc(g_2461, "g_2461", print_hash_value);
    transparent_crc(g_2462, "g_2462", print_hash_value);
    transparent_crc(g_2463, "g_2463", print_hash_value);
    transparent_crc(g_2464, "g_2464", print_hash_value);
    transparent_crc(g_2468, "g_2468", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_2469[i][j][k], "g_2469[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2503, "g_2503", print_hash_value);
    transparent_crc(g_2508, "g_2508", print_hash_value);
    transparent_crc(g_2551, "g_2551", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
