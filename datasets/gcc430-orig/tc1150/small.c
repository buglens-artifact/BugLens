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


union U2 {
   unsigned f0 : 7;
   const int f1;
};

union U3 {
   unsigned f0;
   volatile unsigned char f1;
   volatile char f2;
   int f3;
};

union U4 {
   const char f0;
   char f1;
};

union U6 {
   int f0;
   volatile short f1;
   const unsigned char f2;
   const volatile short f3;
   volatile char * const f4;
};


static int g_7 = 0xC28CAE2FL;
static volatile union U3 g_12 = {0x3062A4B1L};
static volatile union U3 *g_11 = &g_12;
static char g_23 = 0x83L;
static volatile short g_35 = 0xE2EFL;
static int g_45 = 0x3B00B722L;
static volatile short g_67 = 0xA4D2L;
static unsigned short g_136 = 0x6BDEL;
static int g_176 = 0xC1C42294L;
static int *g_175 = &g_176;
static volatile char g_223 = 0x6BL;
static char g_226 = 0L;
static volatile unsigned g_252 = 18446744073709551607UL;
static char g_272 = (-1L);
static unsigned short g_305 = 0UL;
static unsigned short g_378 = 0xE21AL;
static union U3 g_400 = {0x268E8976L};
static union U3 *g_399 = &g_400;
static union U2 g_421 = {0xC6B7E16AL};
static union U2 *g_420 = &g_421;
static unsigned g_446 = 0x29B53F0AL;
static union U4 g_452 = {0xD5L};
static unsigned g_491 = 6UL;
static short g_511 = 0L;
static int g_534 = 0x3E01D697L;
static int g_536 = 0L;
static int g_542 = 1L;
static unsigned g_544 = 0x5634F043L;
static volatile unsigned g_624 = 9UL;
static volatile unsigned char g_796 = 0xD8L;
static union U4 *g_802 = &g_452;
static union U4 **g_801 = &g_802;
static unsigned char g_827 = 0x45L;
static unsigned char g_844 = 255UL;
static unsigned g_1039 = 2UL;
static unsigned short g_1042 = 0x0D3BL;
static char g_1095 = (-7L);
static char g_1097 = 0L;
static unsigned char g_1101 = 0UL;
static int g_1180 = 1L;
static char g_1186 = 1L;
static volatile short g_1192 = 0L;
static int g_1197 = 0L;
static unsigned char g_1206 = 0x21L;



static char func_1(void);
static union U3 * func_2(union U3 * p_3, int p_4);
static union U3 * func_5(unsigned p_6);
static unsigned func_15(unsigned p_16, int p_17, int p_18, int p_19);
static unsigned func_20(unsigned p_21);
static short func_143(int p_144, const char * p_145, unsigned p_146, char p_147);
static int * func_151(int * p_152, union U3 * p_153);
static int * func_154(char * p_155, int * const p_156, char p_157, int * p_158);
static char * func_159(union U2 p_160, unsigned p_161, const int p_162, unsigned char p_163);
static unsigned func_165(const char * p_166);
static char func_1(void)
{
    unsigned char l_1108 = 0xFFL;
    union U3 *l_1124 = &g_400;
    int *l_1129 = &g_534;
    int *l_1130 = &g_176;
    int *l_1131 = &g_7;
    int *l_1132 = &g_176;
    int *l_1133 = (void*)0;
    int *l_1134 = &g_176;
    int *l_1135 = &g_176;
    int *l_1136 = &g_176;
    int l_1137 = 2L;
    int *l_1138 = &g_176;
    int *l_1139 = (void*)0;
    int *l_1140 = &l_1137;
    int *l_1141 = (void*)0;
    int *l_1142 = &l_1137;
    int *l_1143 = &g_7;
    int *l_1144 = &g_176;
    int *l_1145 = (void*)0;
    int *l_1146 = &l_1137;
    int *l_1147 = &g_534;
    int *l_1148 = &g_7;
    int *l_1149 = &g_7;
    int *l_1150 = (void*)0;
    int *l_1151 = &l_1137;
    int *l_1152 = &g_534;
    int *l_1153 = (void*)0;
    int *l_1154 = &g_7;
    int *l_1155 = &g_176;
    int *l_1156 = &g_534;
    int *l_1157 = &g_7;
    short l_1158 = (-1L);
    int *l_1159 = &l_1137;
    int *l_1160 = &l_1137;
    int *l_1161 = &l_1137;
    int *l_1162 = &l_1137;
    int *l_1163 = &g_534;
    int *l_1164 = &g_534;
    int l_1165 = 4L;
    int *l_1166 = &g_534;
    int *l_1167 = &g_7;
    int *l_1168 = (void*)0;
    int *l_1169 = (void*)0;
    int *l_1170 = &l_1165;
    int *l_1171 = &g_534;
    int *l_1172 = &g_176;
    int *l_1173 = &g_7;
    int *l_1174 = &l_1137;
    int *l_1175 = &l_1165;
    int l_1176 = 0L;
    int *l_1177 = &l_1137;
    int *l_1178 = &l_1137;
    int *l_1179 = &l_1137;
    int *l_1181 = &l_1165;
    int *l_1182 = &g_1180;
    int l_1183 = 0x87AEB9A5L;
    int *l_1184 = (void*)0;
    int *l_1185 = &l_1165;
    int *l_1187 = &l_1183;
    int *l_1188 = &l_1165;
    int *l_1189 = &l_1165;
    int *l_1190 = &l_1137;
    int l_1191 = 0L;
    int *l_1193 = &g_176;
    int *l_1194 = &g_7;
    int *l_1195 = (void*)0;
    int *l_1196 = &l_1183;
    int *l_1198 = &l_1165;
    int *l_1199 = &l_1137;
    int *l_1200 = &g_7;
    int *l_1201 = &g_1180;
    int *l_1202 = (void*)0;
    int *l_1203 = &g_7;
    int *l_1204 = &g_176;
    int *l_1205 = &l_1137;
    l_1124 = func_2(func_5(g_7), l_1108);
    (*g_175) |= (safe_mod_func_int32_t_s_s((func_20(g_7) == (g_1039 ^ (safe_rshift_func_int8_t_s_s(g_544, l_1108)))), 2L));
    --g_1206;
    return (*l_1167);
}







static union U3 * func_2(union U3 * p_3, int p_4)
{
    union U2 *l_1109 = &g_421;
    union U2 **l_1110 = &l_1109;
    const int l_1117 = 0L;
    short l_1118 = 1L;
    union U4 *l_1121 = &g_452;
    unsigned short l_1122 = 65535UL;
    union U3 *l_1123 = &g_400;
    (*g_801) = (*g_801);
    (*l_1110) = l_1109;
    (*g_175) ^= func_20((safe_rshift_func_int8_t_s_s((((g_544 && (safe_mod_func_int32_t_s_s(0x7B0DCED3L, (safe_sub_func_uint16_t_u_u(((&g_12 != p_3) <= 0UL), 0xCB3AL))))) >= (l_1117 <= (~l_1118))) >= 4294967295UL), p_4)));
    (*g_175) = (((~p_4) > (((safe_sub_func_int32_t_s_s(((((l_1121 != (void*)0) == p_4) < ((g_400.f1 && ((void*)0 == (*g_801))) ^ g_542)) == l_1117), p_4)) < l_1122) >= l_1117)) != g_827);
    return l_1123;
}







static union U3 * func_5(unsigned p_6)
{
    int l_8 = 9L;
    char *l_22 = &g_23;
    unsigned l_148 = 0x513D9644L;
    l_8 = ((l_8 != (safe_add_func_int8_t_s_s((g_11 == (void*)0), (safe_add_func_uint32_t_u_u(func_15(func_20((l_22 != (void*)0)), (safe_rshift_func_uint16_t_u_s((l_8 < l_8), 6)), (safe_mod_func_int16_t_s_s(func_143(l_8, l_22, l_148, p_6), l_8)), g_12.f3), l_148))))) <= p_6);
    (*g_175) = (*g_175);
    (*g_175) |= (0xC4DBEDE3L >= ((safe_lshift_func_int16_t_s_u((1L && func_20((~g_400.f0))), 5)) ^ p_6));
    return &g_400;
}







static unsigned func_15(unsigned p_16, int p_17, int p_18, int p_19)
{
    union U2 l_164 = {1UL};
    const char *l_167 = &g_23;
    int * const l_174 = (void*)0;
    int **l_1105 = &g_175;
    (*l_1105) = func_151(func_154(func_159(l_164, func_165(l_167), l_164.f0, g_35), l_174, (g_136 ^ p_19), g_175), g_399);
    return p_16;
}







static unsigned func_20(unsigned p_21)
{
    int l_24 = 1L;
    int *l_25 = &g_7;
    int *l_26 = &l_24;
    int l_27 = (-3L);
    int *l_28 = &l_24;
    int *l_29 = &g_7;
    int *l_30 = &l_24;
    int *l_31 = (void*)0;
    int *l_32 = &g_7;
    int *l_33 = &g_7;
    int *l_34 = &l_27;
    int *l_36 = &l_24;
    int l_37 = 5L;
    int *l_38 = &l_37;
    int *l_39 = &l_37;
    int *l_40 = (void*)0;
    int *l_41 = &g_7;
    int *l_42 = &l_37;
    int *l_43 = &l_24;
    int *l_44 = &l_37;
    int *l_46 = &g_7;
    int l_47 = 0L;
    int *l_48 = (void*)0;
    int *l_49 = &l_24;
    int *l_50 = &l_37;
    int l_51 = 0x45D44756L;
    int *l_52 = &l_47;
    int *l_53 = &l_37;
    int *l_54 = &l_51;
    int *l_55 = &l_27;
    int *l_56 = &l_37;
    int *l_57 = &l_27;
    int l_58 = 0xC32619C8L;
    int l_59 = 0xA4B44041L;
    int *l_60 = (void*)0;
    int *l_61 = &g_7;
    int *l_62 = &l_51;
    int *l_63 = (void*)0;
    int *l_64 = (void*)0;
    int *l_65 = &l_59;
    int *l_66 = (void*)0;
    int *l_68 = &l_59;
    int *l_69 = &l_51;
    int *l_70 = &l_51;
    int *l_71 = &l_47;
    int *l_72 = &g_7;
    int *l_73 = &l_51;
    int *l_74 = &g_7;
    int *l_75 = &l_27;
    int *l_76 = (void*)0;
    int *l_77 = &l_51;
    int *l_78 = &l_59;
    int *l_79 = (void*)0;
    int *l_80 = (void*)0;
    int *l_81 = &l_27;
    int *l_82 = &l_27;
    int *l_83 = &l_47;
    int *l_84 = &l_51;
    int l_85 = 0xA3B2B4B2L;
    int *l_86 = &l_85;
    int *l_87 = &l_59;
    int *l_88 = &l_47;
    int *l_89 = (void*)0;
    int *l_90 = &l_27;
    int *l_91 = (void*)0;
    int *l_92 = (void*)0;
    int *l_93 = &g_7;
    int *l_94 = &g_7;
    int *l_95 = &l_24;
    int *l_96 = &l_85;
    int *l_97 = &l_51;
    int *l_98 = &l_27;
    int *l_99 = &l_58;
    int *l_100 = &l_27;
    int *l_101 = &l_24;
    int *l_102 = &l_27;
    int *l_103 = &g_7;
    int *l_104 = &l_58;
    int *l_105 = &l_59;
    int *l_106 = &l_59;
    int *l_107 = &l_85;
    int *l_108 = &l_51;
    int l_109 = (-5L);
    int *l_110 = &l_37;
    int *l_111 = &l_59;
    int *l_112 = &l_27;
    int *l_113 = &l_59;
    int *l_114 = &l_59;
    int *l_115 = (void*)0;
    int *l_116 = &l_51;
    int *l_117 = (void*)0;
    int *l_118 = &l_27;
    int l_119 = (-8L);
    int *l_120 = &l_47;
    int *l_121 = (void*)0;
    int *l_122 = (void*)0;
    int *l_123 = &l_47;
    int l_124 = 0xC18638AAL;
    int *l_125 = &g_7;
    int *l_126 = (void*)0;
    int *l_127 = (void*)0;
    int *l_128 = &l_85;
    int *l_129 = &g_7;
    int *l_130 = (void*)0;
    int *l_131 = &l_58;
    int *l_132 = (void*)0;
    int *l_133 = &l_109;
    int l_134 = 1L;
    int l_135 = 0xD1428A3AL;
    --g_136;
    return g_136;
}







static short func_143(int p_144, const char * p_145, unsigned p_146, char p_147)
{
    int *l_150 = &g_7;
    (*l_150) = (safe_unary_minus_func_uint32_t_u((&g_7 == l_150)));
    return p_144;
}







static int * func_151(int * p_152, union U3 * p_153)
{
    int l_406 = (-1L);
    union U4 *l_455 = &g_452;
    union U2 l_496 = {4294967295UL};
    const union U4 *l_508 = &g_452;
    const union U4 **l_507 = &l_508;
    int l_566 = (-1L);
    unsigned l_576 = 0UL;
    const int l_627 = 0xFD80D04DL;
    union U6 *l_635 = (void*)0;
    int l_756 = 0x5D83151CL;
    union U3 *l_804 = &g_400;
    int l_962 = 0x06E17C6BL;
    int l_990 = 0x56BE9B4CL;
    int l_1002 = 0L;
    int l_1053 = 0x2915EA31L;
    int l_1079 = 0x36209BC1L;
lbl_1104:
    for (g_226 = 0; (g_226 == 8); g_226 = safe_add_func_int16_t_s_s(g_226, 5))
    {
        int **l_403 = &g_175;
        const char *l_419 = (void*)0;
        union U2 l_456 = {0xD15DD58FL};
        const char *l_466 = (void*)0;
        int l_512 = 0x5062A834L;
        int l_559 = 8L;
        int l_563 = 0x6749929EL;
        int l_778 = 0x15CEF59AL;
        (*g_175) = 0xC52370E7L;
        (*l_403) = &g_176;
        if (func_143(((safe_lshift_func_int8_t_s_u(((l_406 | l_406) && (safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(5L, ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(func_20((**l_403)), 6)) == ((safe_sub_func_uint8_t_u_u(0xDFL, l_406)) & g_35)), 5)) && (~((safe_add_func_int32_t_s_s((((1L || g_400.f1) != (*g_175)) & 0x0C5BB409L), l_406)) != g_45))))) <= g_400.f0), (**l_403)))), (**l_403))) == l_406), l_419, l_406, (**l_403)))
        {
            union U2 **l_422 = &g_420;
            int l_423 = 1L;
            const char *l_424 = &g_272;
            int *l_425 = &l_423;
            int *l_426 = (void*)0;
            int *l_427 = (void*)0;
            int *l_428 = &l_423;
            int *l_429 = &l_406;
            int *l_430 = &g_176;
            int *l_431 = &l_406;
            int *l_432 = &g_7;
            int *l_433 = &l_406;
            int *l_434 = (void*)0;
            int *l_435 = &g_7;
            int *l_436 = &l_423;
            int *l_437 = &g_7;
            int *l_438 = &l_423;
            int *l_439 = &g_7;
            int *l_440 = &l_406;
            int *l_441 = &g_7;
            int *l_442 = (void*)0;
            int *l_443 = &l_406;
            int *l_444 = &g_176;
            int *l_445 = &l_423;
            (*l_422) = g_420;
            (*l_403) = p_152;
            (**l_403) = (3L | func_143((l_423 != (**l_403)), l_424, l_406, l_423));
            g_446++;
        }
        else
        {
            union U4 *l_451 = &g_452;
            union U4 **l_450 = &l_451;
            union U4 ***l_449 = &l_450;
            int l_465 = 0x4534E8C1L;
            short l_548 = (-6L);
            int l_763 = 0x3DD09485L;
            int l_767 = 5L;
            (*l_449) = (void*)0;
            if (((!l_406) <= l_406))
            {
                unsigned char l_468 = 250UL;
                int l_521 = 0x31C5A12AL;
                int *l_549 = &g_534;
                int *l_550 = &l_521;
                int *l_551 = &g_7;
                int *l_552 = (void*)0;
                int *l_553 = &l_465;
                int *l_554 = &l_406;
                int *l_555 = &l_406;
                int *l_556 = &l_465;
                int *l_557 = (void*)0;
                int *l_558 = &g_7;
                int *l_560 = &g_176;
                int *l_561 = &g_176;
                int *l_562 = &l_406;
                int *l_564 = &g_7;
                int *l_565 = (void*)0;
                int *l_567 = &g_7;
                int *l_568 = &l_465;
                int *l_569 = &l_465;
                int *l_570 = (void*)0;
                int *l_571 = (void*)0;
                int *l_572 = &l_406;
                int *l_573 = &g_534;
                int *l_574 = &l_406;
                int *l_575 = &l_406;
                int l_584 = 0x9773CC98L;
                if (l_406)
                {
                    int *l_453 = (void*)0;
                    int *l_454 = &l_406;
                    int l_467 = 0xE336DEEBL;
                    (*l_454) ^= (*g_175);
                    if ((*p_152))
                        break;
                    if ((((void*)0 == l_455) | func_165(func_159(l_456, ((safe_add_func_uint8_t_u_u((**l_403), ((0UL ^ func_143((((g_378 >= g_421.f0) < (safe_lshift_func_int8_t_s_u(0x56L, 5))) != (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(func_20((g_305 >= (*l_454))), 12)), 5)) >= 0UL) == l_465)), l_466, l_406, l_467)) || (-1L)))) & g_226), g_272, l_468))))
                    {
                        if ((*g_175))
                            break;
                    }
                    else
                    {
                        int *l_469 = &g_7;
                        int *l_470 = &g_7;
                        int *l_471 = &g_7;
                        int *l_472 = (void*)0;
                        int *l_473 = &g_176;
                        int *l_474 = &g_176;
                        int *l_475 = &l_467;
                        int *l_476 = (void*)0;
                        int *l_477 = &l_465;
                        int *l_478 = &l_465;
                        int *l_479 = &l_406;
                        int *l_480 = &g_7;
                        int *l_481 = (void*)0;
                        int *l_482 = &l_406;
                        int *l_483 = &l_465;
                        int *l_484 = &l_465;
                        int l_485 = (-1L);
                        int *l_486 = (void*)0;
                        int *l_487 = &g_176;
                        int *l_488 = (void*)0;
                        int *l_489 = (void*)0;
                        int *l_490 = &g_7;
                        ++g_491;
                    }
                }
                else
                {
                    unsigned l_497 = 0x1258D5DCL;
                    int *l_498 = &l_465;
                    int l_528 = (-1L);
                    if ((*p_152))
                        break;
                    (*l_498) &= (safe_add_func_uint16_t_u_u(func_165(func_159(l_496, ((((void*)0 != &g_452) || (*p_152)) != l_468), ((l_497 == 0L) < func_20(g_446)), l_406)), g_252));
                    (*p_152) = (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((l_468 == (safe_mod_func_uint32_t_u_u(0x997D2CA9L, g_378))) && (l_507 == &l_455)) >= (0x4BL & (((((l_468 >= (**l_403)) ^ ((safe_rshift_func_int16_t_s_s(func_20(g_511), l_406)) == g_400.f0)) & g_12.f1) ^ l_496.f0) || (*l_498)))), l_512)), (*p_152))), g_452.f1));
                    for (g_45 = 8; (g_45 > (-20)); g_45--)
                    {
                        int *l_519 = &g_7;
                        int *l_520 = &g_7;
                        int *l_522 = &l_521;
                        int *l_523 = &l_406;
                        int *l_524 = &l_406;
                        int *l_525 = (void*)0;
                        int *l_526 = &g_7;
                        int *l_527 = &l_521;
                        int *l_529 = &l_528;
                        int *l_530 = &l_465;
                        int *l_531 = &g_176;
                        int *l_532 = (void*)0;
                        int *l_533 = &g_7;
                        int *l_535 = &l_528;
                        int *l_537 = &g_176;
                        int *l_538 = &l_406;
                        int *l_539 = (void*)0;
                        int *l_540 = &g_7;
                        int *l_541 = &l_521;
                        int *l_543 = &g_7;
                        int l_547 = 0L;
                        (*l_519) |= ((safe_add_func_uint16_t_u_u((l_406 | l_406), (0L <= g_446))) > ((*l_498) == (~((safe_mod_func_int16_t_s_s(l_406, ((0xC82AA07DL < ((*g_175) > 0x43A0884BL)) && l_406))) & (-10L)))));
                        --g_544;
                        (*l_531) = l_547;
                    }
                }
                ++l_576;
                for (g_136 = 1; (g_136 >= 34); g_136++)
                {
                    int l_583 = (-10L);
                    for (g_446 = 0; (g_446 > 5); g_446 = safe_add_func_uint8_t_u_u(g_446, 3))
                    {
                        int *l_585 = &l_584;
                        int *l_586 = &l_584;
                        int *l_587 = &l_566;
                        int *l_588 = &l_584;
                        int *l_589 = (void*)0;
                        int *l_590 = &g_534;
                        int *l_591 = &l_406;
                        int *l_592 = &l_406;
                        int *l_593 = (void*)0;
                        int *l_594 = &l_584;
                        int *l_595 = &l_559;
                        int *l_596 = &l_584;
                        int *l_597 = &g_176;
                        int *l_598 = &g_176;
                        int *l_599 = &l_521;
                        int *l_600 = &l_406;
                        int *l_601 = &g_7;
                        int *l_602 = (void*)0;
                        int *l_603 = &l_559;
                        int *l_604 = &l_563;
                        int *l_605 = (void*)0;
                        int *l_606 = &l_465;
                        int *l_607 = (void*)0;
                        int *l_608 = &l_406;
                        int *l_609 = (void*)0;
                        int l_610 = 0xD482241DL;
                        int *l_611 = &l_521;
                        int *l_612 = &l_465;
                        int *l_613 = &l_406;
                        int *l_614 = &l_610;
                        int *l_615 = &l_563;
                        int *l_616 = &g_534;
                        int *l_617 = &l_465;
                        int *l_618 = &g_534;
                        int *l_619 = &l_559;
                        int *l_620 = (void*)0;
                        int *l_621 = &l_563;
                        int *l_622 = &l_566;
                        int *l_623 = (void*)0;
                        g_624++;
                        (**l_403) |= l_627;
                    }
                    for (g_378 = 0; (g_378 != 8); g_378++)
                    {
                        const union U4 *l_634 = &g_452;
                        union U6 **l_636 = &l_635;
                        (*l_560) = ((((safe_lshift_func_int8_t_s_s(l_406, ((void*)0 != l_634))) | g_534) && (*l_551)) != (l_406 > g_226));
                        (*l_560) = (-5L);
                        (*l_636) = l_635;
                    }
                    return &g_534;
                }
                g_175 = &l_584;
            }
            else
            {
                unsigned l_661 = 0x5C90A439L;
                int l_666 = 0x394E038DL;
                int l_678 = 1L;
                int l_680 = 3L;
                int l_718 = 0xB7DB3398L;
                int l_726 = 0xAEF53CF7L;
                union U4 ***l_834 = (void*)0;
                if ((g_305 | func_20(g_272)))
                {
                    int *l_637 = &g_176;
                    int *l_638 = (void*)0;
                    int *l_639 = &g_534;
                    int *l_640 = (void*)0;
                    int *l_641 = &l_465;
                    int *l_642 = &l_566;
                    int *l_643 = (void*)0;
                    int *l_644 = &g_7;
                    int *l_645 = &l_566;
                    int *l_646 = (void*)0;
                    int *l_647 = &g_534;
                    int *l_648 = &l_465;
                    int *l_649 = &l_559;
                    int *l_650 = &l_559;
                    int *l_651 = &g_534;
                    int *l_652 = &g_534;
                    int *l_653 = &l_465;
                    int *l_654 = &l_563;
                    int *l_655 = &l_563;
                    int *l_656 = &g_176;
                    int *l_657 = (void*)0;
                    int *l_658 = &l_566;
                    int *l_659 = &l_559;
                    int l_660 = 0x48A6A7DBL;
                    --l_661;
                }
                else
                {
                    int l_667 = 0xF8DBB819L;
                    int l_695 = (-9L);
                    int l_700 = 0x84BEE72BL;
                    union U4 **l_803 = &l_455;
                    int *l_806 = &l_756;
                    int *l_807 = &g_176;
                    int *l_808 = &l_465;
                    int *l_809 = &l_767;
                    int *l_810 = &l_763;
                    int *l_811 = &l_559;
                    int *l_812 = &l_465;
                    int *l_813 = (void*)0;
                    int *l_814 = &g_534;
                    int *l_815 = &l_680;
                    int *l_816 = &l_406;
                    int *l_817 = &l_756;
                    int *l_818 = &l_778;
                    int *l_819 = &l_718;
                    int *l_820 = &l_756;
                    int *l_821 = &l_566;
                    int *l_822 = &l_406;
                    int *l_823 = &g_176;
                    int *l_824 = &l_678;
                    int *l_825 = &g_7;
                    int *l_826 = &l_700;
                    for (l_512 = 0; (l_512 > (-17)); l_512 = safe_sub_func_uint32_t_u_u(l_512, 7))
                    {
                        int *l_668 = &l_465;
                        int *l_669 = &l_559;
                        int *l_670 = &l_406;
                        int *l_671 = &l_666;
                        int *l_672 = (void*)0;
                        int *l_673 = &l_563;
                        int *l_674 = &l_566;
                        int *l_675 = &l_563;
                        int *l_676 = &l_559;
                        int *l_677 = (void*)0;
                        int *l_679 = &g_534;
                        int *l_681 = &l_559;
                        int *l_682 = &l_678;
                        int *l_683 = &l_465;
                        int *l_684 = &l_680;
                        int *l_685 = (void*)0;
                        int *l_686 = &l_680;
                        int *l_687 = &g_7;
                        int *l_688 = &l_566;
                        int *l_689 = &l_666;
                        int *l_690 = &l_666;
                        int *l_691 = &l_563;
                        int *l_692 = &l_559;
                        int *l_693 = &g_534;
                        int *l_694 = &l_465;
                        int *l_696 = &l_559;
                        int l_697 = 0xC200E4AEL;
                        int *l_698 = &g_534;
                        int *l_699 = &l_563;
                        int *l_701 = &l_465;
                        int *l_702 = &l_559;
                        int *l_703 = &g_7;
                        int l_704 = 0xF0FD0DADL;
                        int *l_705 = &l_559;
                        int *l_706 = &l_704;
                        int *l_707 = (void*)0;
                        int *l_708 = &l_704;
                        int *l_709 = (void*)0;
                        int *l_710 = &l_695;
                        int *l_711 = &l_566;
                        int *l_712 = &l_666;
                        int *l_713 = &l_697;
                        int l_714 = 4L;
                        int *l_715 = &l_697;
                        int *l_716 = &l_465;
                        int *l_717 = &l_465;
                        int *l_719 = &g_176;
                        int *l_720 = (void*)0;
                        int *l_721 = (void*)0;
                        int *l_722 = &l_718;
                        int *l_723 = &l_704;
                        int *l_724 = &l_465;
                        int *l_725 = &l_718;
                        int l_727 = 0x2DD15559L;
                        int *l_728 = (void*)0;
                        int *l_729 = &l_680;
                        int *l_730 = &l_678;
                        int *l_731 = &l_666;
                        int *l_732 = (void*)0;
                        int *l_733 = &g_7;
                        int *l_734 = &l_406;
                        int *l_735 = &l_718;
                        int *l_736 = &l_465;
                        int *l_737 = &l_704;
                        int *l_738 = &l_465;
                        int *l_739 = &l_718;
                        int *l_740 = &g_7;
                        int *l_741 = &l_718;
                        int *l_742 = &l_695;
                        int *l_743 = &l_666;
                        int *l_744 = &l_718;
                        int *l_745 = (void*)0;
                        int *l_746 = &l_566;
                        int *l_747 = &l_465;
                        int *l_748 = &l_697;
                        int *l_749 = &l_678;
                        int *l_750 = &l_700;
                        int *l_751 = &l_718;
                        int *l_752 = &l_680;
                        int *l_753 = &l_714;
                        int *l_754 = &g_534;
                        int *l_755 = &l_566;
                        int *l_757 = (void*)0;
                        int *l_758 = (void*)0;
                        int *l_759 = &l_566;
                        int *l_760 = &l_704;
                        int *l_761 = &l_718;
                        int *l_762 = (void*)0;
                        int *l_764 = &l_726;
                        int *l_765 = &l_697;
                        int l_766 = 0x20E17994L;
                        int *l_768 = &l_767;
                        int *l_769 = (void*)0;
                        int *l_770 = (void*)0;
                        int *l_771 = &l_756;
                        int *l_772 = &l_767;
                        int *l_773 = &g_7;
                        int *l_774 = &g_534;
                        int *l_775 = &g_534;
                        int *l_776 = &l_697;
                        int *l_777 = &l_566;
                        int *l_779 = (void*)0;
                        int l_780 = 0x613B3005L;
                        int *l_781 = &l_406;
                        int *l_782 = &l_406;
                        int *l_783 = (void*)0;
                        int *l_784 = &g_534;
                        int *l_785 = &l_406;
                        int *l_786 = (void*)0;
                        int *l_787 = &l_704;
                        int *l_788 = &l_704;
                        int *l_789 = &l_465;
                        int *l_790 = (void*)0;
                        int *l_791 = &g_534;
                        int *l_792 = &l_406;
                        int *l_793 = (void*)0;
                        int *l_794 = &l_680;
                        int *l_795 = (void*)0;
                        union U3 **l_805 = &g_399;
                        if ((*p_152))
                            break;
                        g_796++;
                        (**l_403) = (safe_sub_func_int8_t_s_s((g_801 != l_803), ((*l_775) ^ g_796)));
                        (*l_805) = l_804;
                    }
                    (*l_403) = p_152;
                    ++g_827;
                    (*l_818) &= ((((safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s(g_534, (&g_801 == l_834))) < (**l_403)) && (safe_rshift_func_int16_t_s_u(0xBAFEL, g_534))), 0x09L)) || 0x403E42DCL) > g_67) & l_767);
                }
            }
            (*l_403) = &l_406;
            if (l_763)
            {
                (*p_152) |= (*g_175);
            }
            else
            {
                int l_839 = 0L;
                (**l_403) = (0xE3F50998L & (safe_rshift_func_int8_t_s_s((!(((*p_152) <= g_378) || ((((l_839 >= g_305) < l_839) > ((safe_rshift_func_int8_t_s_s(l_756, 5)) && (safe_rshift_func_uint8_t_u_u((g_827 || 0UL), g_844)))) <= 8L))), g_23)));
            }
        }
    }
    for (l_406 = 0; (l_406 > (-13)); --l_406)
    {
        int **l_847 = &g_175;
        (*l_847) = &g_534;
        if ((*p_152))
            continue;
    }
    if ((*g_175))
    {
        unsigned l_848 = 0xEFC9F5F1L;
        char l_862 = 5L;
        int l_918 = 0x10296D85L;
        int l_924 = 0L;
        char l_956 = (-1L);
        int *l_1050 = &l_924;
        int *l_1051 = &l_756;
        int *l_1052 = (void*)0;
        int *l_1054 = &l_990;
        int *l_1055 = &l_990;
        int *l_1056 = (void*)0;
        int *l_1057 = (void*)0;
        int *l_1058 = &g_176;
        int *l_1059 = &l_1002;
        int *l_1060 = (void*)0;
        int *l_1061 = &g_7;
        int *l_1062 = &l_566;
        int *l_1063 = &g_534;
        int *l_1064 = &l_990;
        int *l_1065 = &l_1053;
        int *l_1066 = (void*)0;
        int *l_1067 = &l_406;
        int *l_1068 = &g_7;
        int *l_1069 = &l_1053;
        int *l_1070 = (void*)0;
        int *l_1071 = &l_1053;
        int *l_1072 = &l_1053;
        int *l_1073 = &l_1002;
        int *l_1074 = &g_176;
        int *l_1075 = &g_176;
        int *l_1076 = &l_566;
        int *l_1077 = (void*)0;
        int *l_1078 = (void*)0;
        int *l_1080 = &l_566;
        int *l_1081 = (void*)0;
        int *l_1082 = &g_176;
        int *l_1083 = &g_176;
        int *l_1084 = &l_566;
        int *l_1085 = &g_534;
        int *l_1086 = &g_7;
        int *l_1087 = &l_756;
        int *l_1088 = (void*)0;
        int *l_1089 = &l_756;
        int *l_1090 = &g_7;
        int *l_1091 = (void*)0;
        int *l_1092 = &g_7;
        int *l_1093 = &l_1053;
        int *l_1094 = &g_7;
        int *l_1096 = (void*)0;
        int *l_1098 = &l_990;
        int *l_1099 = &l_1079;
        int l_1100 = 7L;
lbl_852:
        l_848 = (-1L);
        for (g_491 = 0; (g_491 >= 10); g_491++)
        {
            unsigned l_853 = 1UL;
            int *l_854 = &g_534;
            unsigned l_861 = 18446744073709551610UL;
            int l_900 = 7L;
            short l_903 = 0x06FAL;
            int l_919 = (-10L);
            int l_958 = 0xFC2743BCL;
            int **l_1045 = &g_175;
            if ((*g_175))
            {
                unsigned l_851 = 0UL;
                int *l_856 = &l_406;
                (*g_175) |= l_851;
                if (l_406)
                    goto lbl_852;
                if ((*g_175))
                    break;
                if (((p_153 != &g_12) == l_853))
                {
                    unsigned l_874 = 0xFA707527L;
                    (*g_175) = (*g_175);
                    p_152 = l_854;
                    if ((g_35 >= l_848))
                    {
                        const unsigned l_855 = 3UL;
                        int **l_857 = &g_175;
                        (*p_152) = (*p_152);
                        (*l_857) = l_856;
                    }
                    else
                    {
                        int **l_858 = &g_175;
                        int *l_863 = (void*)0;
                        int *l_864 = (void*)0;
                        int *l_865 = &l_406;
                        int *l_866 = &l_406;
                        int *l_867 = &g_7;
                        int *l_868 = &l_406;
                        int *l_869 = &g_534;
                        int *l_870 = &g_7;
                        int l_871 = 0x20B48B30L;
                        int *l_872 = &l_406;
                        int *l_873 = &l_871;
                        (*l_858) = &g_7;
                        (*l_854) ^= (safe_add_func_int8_t_s_s(l_861, (l_862 > g_827)));
                        l_874--;
                    }
                    if ((*g_175))
                        continue;
                }
                else
                {
                    int **l_879 = &l_856;
                    (*p_152) = (safe_mod_func_uint16_t_u_u(g_421.f0, (*l_856)));
                    (*l_879) = &l_566;
                }
            }
            else
            {
                char l_884 = 0L;
                int l_894 = (-1L);
                int l_912 = 0x61B0E702L;
                int l_933 = 0xF2F8CF58L;
                int l_970 = 0x11DDC483L;
                int l_984 = 2L;
                int l_991 = 0x9F41A8DCL;
                int l_1005 = 0x88783B51L;
                for (l_862 = 0; (l_862 == 19); ++l_862)
                {
                    int *l_882 = &g_7;
                    int *l_883 = &l_756;
                    int l_885 = 3L;
                    int *l_886 = &l_406;
                    int *l_887 = &l_406;
                    int *l_888 = &l_756;
                    int *l_889 = (void*)0;
                    int *l_890 = (void*)0;
                    int *l_891 = &l_885;
                    int *l_892 = (void*)0;
                    int *l_893 = &l_756;
                    int *l_895 = &l_885;
                    int *l_896 = &l_756;
                    int *l_897 = &l_756;
                    int l_898 = (-1L);
                    int *l_899 = &g_7;
                    int *l_901 = &g_176;
                    int *l_902 = &l_406;
                    int *l_904 = &l_406;
                    int *l_905 = &l_406;
                    int *l_906 = &g_534;
                    int *l_907 = &l_406;
                    int *l_908 = &g_176;
                    int *l_909 = &l_894;
                    int *l_910 = &l_898;
                    int *l_911 = &l_894;
                    int *l_913 = &l_912;
                    int *l_914 = (void*)0;
                    int l_915 = 0xE323A8BBL;
                    int *l_916 = &l_912;
                    int *l_917 = (void*)0;
                    int *l_920 = (void*)0;
                    int *l_921 = &l_898;
                    int *l_922 = &l_894;
                    int *l_923 = &l_566;
                    int *l_925 = (void*)0;
                    int *l_926 = &l_919;
                    int *l_927 = &l_406;
                    int *l_928 = &l_912;
                    int *l_929 = (void*)0;
                    int *l_930 = &l_406;
                    int *l_931 = &l_566;
                    int *l_932 = &l_924;
                    int *l_934 = &l_918;
                    int *l_935 = &l_915;
                    int *l_936 = &l_885;
                    int *l_937 = &l_919;
                    int *l_938 = &g_176;
                    int *l_939 = &l_933;
                    int *l_940 = (void*)0;
                    int *l_941 = &l_894;
                    int *l_942 = &l_756;
                    int *l_943 = &l_885;
                    int *l_944 = (void*)0;
                    int *l_945 = &g_534;
                    int *l_946 = &l_915;
                    int *l_947 = &l_898;
                    int *l_948 = &l_919;
                    int *l_949 = (void*)0;
                    int *l_950 = (void*)0;
                    int *l_951 = (void*)0;
                    int *l_952 = &l_912;
                    int *l_953 = (void*)0;
                    int *l_954 = &l_885;
                    int *l_955 = (void*)0;
                    int *l_957 = &l_566;
                    int *l_959 = &l_912;
                    int *l_960 = &l_756;
                    int *l_961 = &l_912;
                    int *l_963 = (void*)0;
                    int *l_964 = &l_933;
                    int *l_965 = (void*)0;
                    int *l_966 = &l_915;
                    int *l_967 = (void*)0;
                    int *l_968 = &l_933;
                    int *l_969 = &l_958;
                    int *l_971 = &l_912;
                    int *l_972 = &g_534;
                    int *l_973 = &l_915;
                    int *l_974 = &l_912;
                    int *l_975 = &l_900;
                    int *l_976 = (void*)0;
                    int *l_977 = (void*)0;
                    int *l_978 = (void*)0;
                    int *l_979 = &l_406;
                    int *l_980 = &l_885;
                    int *l_981 = (void*)0;
                    int *l_982 = &l_924;
                    int *l_983 = &l_962;
                    int *l_985 = (void*)0;
                    int *l_986 = (void*)0;
                    int *l_987 = &l_933;
                    int *l_988 = &l_918;
                    int *l_989 = (void*)0;
                    int *l_992 = &g_176;
                    int *l_993 = &l_912;
                    int l_994 = 0x93328005L;
                    int *l_995 = &l_912;
                    int *l_996 = &g_7;
                    int *l_997 = &l_994;
                    int *l_998 = &g_7;
                    int *l_999 = &l_918;
                    int l_1000 = 0L;
                    int *l_1001 = (void*)0;
                    int *l_1003 = &l_894;
                    int *l_1004 = (void*)0;
                    int *l_1006 = &l_984;
                    int *l_1007 = &l_970;
                    int *l_1008 = (void*)0;
                    int *l_1009 = &l_894;
                    int *l_1010 = &l_885;
                    int *l_1011 = &l_990;
                    int *l_1012 = &g_534;
                    int *l_1013 = &l_994;
                    int l_1014 = 9L;
                    int *l_1015 = &l_991;
                    int *l_1016 = &l_900;
                    int *l_1017 = &l_885;
                    int *l_1018 = (void*)0;
                    int *l_1019 = &l_1000;
                    int *l_1020 = &l_994;
                    int *l_1021 = &l_990;
                    int *l_1022 = &l_984;
                    int *l_1023 = &l_933;
                    int *l_1024 = &l_919;
                    int *l_1025 = &l_984;
                    int *l_1026 = &l_406;
                    int *l_1027 = &l_1002;
                    int *l_1028 = &l_958;
                    int *l_1029 = &l_885;
                    int *l_1030 = &l_912;
                    int *l_1031 = &l_984;
                    int *l_1032 = &l_918;
                    int *l_1033 = &l_894;
                    int *l_1034 = &l_894;
                    int *l_1035 = &l_756;
                    int *l_1036 = &l_915;
                    int *l_1037 = &l_885;
                    int *l_1038 = &l_898;
                    g_1039++;
                    g_1042++;
                }
            }
            (*l_1045) = &l_918;
            (**l_1045) |= l_627;
        }
        (*g_175) = ((safe_rshift_func_uint8_t_u_u(l_756, (l_627 > ((*p_152) && (l_862 ^ ((safe_rshift_func_uint16_t_u_s((func_143(g_176, func_159((*g_420), l_576, (1L ^ g_226), l_990), l_918, l_924) <= (-1L)), 8)) > l_956)))))) | g_421.f0);
        ++g_1101;
    }
    else
    {
        if (g_272)
            goto lbl_1104;
    }
    return &g_534;
}







static int * func_154(char * p_155, int * const p_156, char p_157, int * p_158)
{
    int *l_179 = &g_7;
    int l_206 = 0xE0461AF4L;
    int l_230 = 0x2A09A2E5L;
    int l_231 = 0x4EA79E41L;
    int l_267 = 0x96825659L;
    int l_285 = 0xC185281CL;
    int l_287 = 0x3918EFA3L;
    int l_288 = 0x46B7FD68L;
    int l_294 = 0x0744711EL;
    int l_296 = 0x334A2236L;
    union U2 l_319 = {0xD2F77A17L};
    unsigned char l_334 = 0xDBL;
    const char *l_387 = (void*)0;
    if (((safe_rshift_func_uint8_t_u_u(((void*)0 == l_179), 5)) >= 0x53L))
    {
        int *l_180 = (void*)0;
        int *l_181 = &g_7;
        int l_182 = 0L;
        int *l_183 = &l_182;
        int *l_184 = (void*)0;
        int *l_185 = &g_7;
        int *l_186 = &g_7;
        int *l_187 = &l_182;
        int *l_188 = &g_7;
        int l_189 = 1L;
        int *l_190 = &g_7;
        int *l_191 = &g_7;
        int *l_192 = &g_7;
        int *l_193 = &g_7;
        int *l_194 = &l_182;
        int *l_195 = &g_176;
        int *l_196 = &l_182;
        int *l_197 = &g_176;
        int *l_198 = &l_182;
        int *l_199 = &g_7;
        int *l_200 = &l_182;
        int *l_201 = &l_182;
        int *l_202 = (void*)0;
        int *l_203 = &l_189;
        int *l_204 = (void*)0;
        int *l_205 = &l_189;
        int *l_207 = &l_189;
        int *l_208 = &g_7;
        int *l_209 = &l_206;
        int *l_210 = &g_7;
        int l_211 = 0xDE7BC92AL;
        int *l_212 = &l_182;
        int *l_213 = &g_176;
        int *l_214 = &l_206;
        int *l_215 = (void*)0;
        int *l_216 = &l_189;
        int *l_217 = &g_7;
        int *l_218 = &l_206;
        int *l_219 = &l_189;
        int *l_220 = &l_206;
        int *l_221 = &l_189;
        int *l_222 = (void*)0;
        int *l_224 = (void*)0;
        int *l_225 = &l_182;
        int l_227 = 9L;
        int *l_228 = &l_182;
        int *l_229 = &g_176;
        int *l_232 = &l_211;
        int *l_233 = &g_7;
        int *l_234 = (void*)0;
        int l_235 = (-1L);
        int *l_236 = &l_230;
        int *l_237 = &g_176;
        int l_238 = 7L;
        int l_239 = 0x5965D045L;
        int *l_240 = &l_211;
        int l_241 = 1L;
        int *l_242 = &l_238;
        int *l_243 = &l_239;
        int *l_244 = &l_227;
        int *l_245 = &l_231;
        int l_246 = 0L;
        int *l_247 = &l_239;
        int *l_248 = &l_235;
        int *l_249 = &g_7;
        int *l_250 = &l_235;
        int *l_251 = &l_241;
        ++g_252;
        return &g_7;
    }
    else
    {
        int *l_255 = &g_176;
        int *l_256 = &l_206;
        int *l_257 = &l_206;
        int *l_258 = &l_230;
        int *l_259 = &l_230;
        int *l_260 = &l_206;
        int *l_261 = (void*)0;
        int *l_262 = &g_7;
        int *l_263 = &g_7;
        int *l_264 = (void*)0;
        int *l_265 = &l_230;
        int *l_266 = &l_206;
        int l_268 = 0L;
        int *l_269 = &l_231;
        int *l_270 = (void*)0;
        int *l_271 = &g_7;
        int *l_273 = (void*)0;
        int *l_274 = (void*)0;
        int *l_275 = &g_7;
        int *l_276 = &g_176;
        int *l_277 = &l_268;
        int *l_278 = &g_176;
        int *l_279 = (void*)0;
        int *l_280 = &g_176;
        int *l_281 = (void*)0;
        int *l_282 = (void*)0;
        int *l_283 = &l_231;
        int *l_284 = &l_268;
        int *l_286 = &l_285;
        int *l_289 = &l_268;
        int *l_290 = &l_285;
        int *l_291 = (void*)0;
        int l_292 = 0xEC180189L;
        int *l_293 = &l_231;
        int *l_295 = &l_230;
        int *l_297 = &l_230;
        int *l_298 = &l_292;
        int *l_299 = &l_287;
        int *l_300 = &l_296;
        int *l_301 = &l_268;
        int *l_302 = &l_267;
        int l_303 = 0xBFEBFBDAL;
        int *l_304 = (void*)0;
        union U4 *l_308 = (void*)0;
        union U4 **l_309 = &l_308;
        g_305--;
        (*l_309) = l_308;
        (*l_299) &= (*g_175);
    }
    for (l_230 = (-9); (l_230 >= 28); l_230++)
    {
        int **l_312 = &l_179;
        (*l_312) = p_158;
        (*g_175) = 0x6D68B9C3L;
        if ((*p_158))
            continue;
        for (g_136 = 0; (g_136 < 52); g_136 = safe_add_func_int8_t_s_s(g_136, 6))
        {
            (*g_175) = (*g_175);
        }
    }
    if ((safe_lshift_func_int16_t_s_u((func_20(g_252) ^ ((safe_add_func_uint32_t_u_u(((p_157 != g_272) == 0x3F38L), func_165(func_159(l_319, p_157, p_157, (*l_179))))) < p_157)), g_226)))
    {
        unsigned short l_320 = 65534UL;
        int *l_325 = &l_267;
        (*l_325) ^= (((*l_179) < l_320) & (g_12.f2 && ((g_12.f2 >= ((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_226, 1)), (g_45 || (*l_179)))) == (g_45 | func_20(p_157)))) == 0x73A1L)));
        if (g_45)
            goto lbl_335;
lbl_335:
        (*l_325) = func_143(g_305, &g_272, g_12.f3, ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(l_334, func_165(&g_23))), (*p_155))), p_157)) <= ((0xD4L <= g_176) == p_157)));
        (*l_325) |= (*l_179);
    }
    else
    {
        int *l_336 = &l_206;
        int *l_337 = &l_206;
        int *l_338 = (void*)0;
        int *l_339 = &g_176;
        int *l_340 = &l_267;
        int *l_341 = &l_287;
        int *l_342 = &l_285;
        int *l_343 = &l_267;
        int *l_344 = &l_285;
        int *l_345 = (void*)0;
        int *l_346 = &l_288;
        int *l_347 = &l_206;
        int *l_348 = &g_176;
        int *l_349 = (void*)0;
        int *l_350 = (void*)0;
        int *l_351 = &l_285;
        int *l_352 = (void*)0;
        int *l_353 = &l_288;
        int *l_354 = &l_288;
        int *l_355 = &l_231;
        int *l_356 = &l_230;
        int *l_357 = &l_287;
        int *l_358 = (void*)0;
        int *l_359 = &l_230;
        int *l_360 = &g_176;
        int *l_361 = &l_206;
        int *l_362 = &l_230;
        int *l_363 = &l_296;
        int *l_364 = &l_206;
        int *l_365 = (void*)0;
        int *l_366 = &l_287;
        int *l_367 = &l_267;
        int *l_368 = &l_287;
        int *l_369 = &l_294;
        int *l_370 = &l_231;
        int *l_371 = &l_288;
        int *l_372 = (void*)0;
        int *l_373 = &l_231;
        int *l_374 = &l_288;
        int *l_375 = &l_294;
        int *l_376 = &g_176;
        int *l_377 = &l_230;
        union U4 *l_384 = (void*)0;
        unsigned l_394 = 0x11E99CA7L;
        (*l_179) |= (g_12.f2 | (*p_155));
        if (l_230)
            goto lbl_381;
lbl_381:
        --g_378;
        (*l_355) = ((((&g_175 != (void*)0) != (safe_mod_func_int32_t_s_s((l_384 != (void*)0), (*g_175)))) ^ (safe_mod_func_uint16_t_u_u(func_143(p_157, l_387, g_23, g_12.f1), g_378))) < (-4L));
        (*l_355) &= (safe_lshift_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(1UL, ((0x24L < (*p_155)) | l_394))), 4)) >= 0x5EL) ^ p_157) > ((safe_sub_func_int16_t_s_s(p_157, (safe_rshift_func_int16_t_s_s((((((*l_179) <= ((p_157 || g_12.f1) && 8L)) >= 0x42L) < 250UL) == p_157), (*l_179))))) >= (*l_348))), 15));
    }
    return p_158;
}







static char * func_159(union U2 p_160, unsigned p_161, const int p_162, unsigned char p_163)
{
    int l_172 = 0x8F2AEC61L;
    for (g_23 = (-19); (g_23 != 26); g_23 = safe_add_func_int8_t_s_s(g_23, 6))
    {
        int *l_173 = &g_7;
        (*l_173) &= (+(l_172 == 0UL));
        if (p_160.f0)
            break;
    }
    return &g_23;
}







static unsigned func_165(const char * p_166)
{
    unsigned short l_168 = 0x6562L;
    int l_169 = (-10L);
    l_169 |= l_168;
    return l_168;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_400.f0, "g_400.f0", print_hash_value);
    transparent_crc(g_400.f1, "g_400.f1", print_hash_value);
    transparent_crc(g_400.f2, "g_400.f2", print_hash_value);
    transparent_crc(g_400.f3, "g_400.f3", print_hash_value);
    transparent_crc(g_421.f0, "g_421.f0", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_452.f0, "g_452.f0", print_hash_value);
    transparent_crc(g_452.f1, "g_452.f1", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_536, "g_536", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_844, "g_844", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1095, "g_1095", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1180, "g_1180", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
