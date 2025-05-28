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



static const short g_19 = 6L;
static int g_26 = 0L;
static int *g_25[8][9][1] = {{{&g_26},{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{&g_26},{(void*)0}},{{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{(void*)0}},{{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{&g_26}},{{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26}},{{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26}},{{&g_26},{&g_26},{&g_26},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{&g_26}},{{&g_26},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26},{&g_26},{&g_26},{&g_26}},{{(void*)0},{&g_26},{&g_26},{&g_26},{&g_26},{&g_26},{(void*)0},{&g_26},{&g_26}}};
static int g_75 = 0x5C4471F2L;
static int **g_80[3][1][1] = {{{&g_25[3][7][0]}},{{&g_25[3][7][0]}},{{&g_25[3][7][0]}}};
static volatile unsigned short g_101 = 0xE8DBL;
static char g_181[9] = {0xD2L,0x59L,0xD2L,0xD2L,0x59L,0xD2L,0xD2L,0x59L,0xD2L};
static int *g_264 = (void*)0;
static volatile char g_315[2][4] = {{0x69L,0x69L,0x69L,0x69L},{0x69L,0x69L,0x69L,0x69L}};
static int * const *g_396 = &g_264;
static int **g_540 = &g_25[3][7][0];
static const int *g_560 = &g_75;
static int *g_687 = &g_75;
static unsigned g_765 = 18446744073709551615UL;
static int *g_939 = &g_75;
static int g_1267 = 0L;
static int *g_1266 = &g_1267;
static int * const g_1339 = (void*)0;



static short func_1(void);
static int * func_2(short p_3, int * p_4, const unsigned p_5, unsigned p_6, unsigned short p_7);
static unsigned char func_20(int p_21, int * p_22, unsigned char p_23, unsigned p_24);
static int * func_28(const int * p_29);
static int * func_30(int * p_31);
static int * func_32(int p_33, const short p_34, unsigned short p_35);
static char func_40(int * const p_41);
static int * func_42(unsigned char p_43, int p_44);
static unsigned short func_49(int p_50, int * p_51);
static unsigned func_57(short p_58);
static short func_1(void)
{
    char l_16 = 0x35L;
    int l_1183 = (-1L);
    (*g_540) = func_2((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(l_16, (safe_rshift_func_int16_t_s_u((g_19 >= (g_19 < (func_20((g_19 != l_16), g_25[3][7][0], g_19, l_16) , l_16))), 14)))), l_16)), g_181[1])), g_19)), (*g_540), l_16, g_315[1][0], l_1183);
    return l_1183;
}







static int * func_2(short p_3, int * p_4, const unsigned p_5, unsigned p_6, unsigned short p_7)
{
    unsigned short l_1184 = 0xDD98L;
    int *l_1185 = &g_26;
    char l_1268 = 0L;
    unsigned short l_1314 = 1UL;
    (*g_540) = func_32((l_1184 <= (func_49((*g_687), func_30(func_30(l_1185))) ^ p_6)), (((1L || ((void*)0 == &p_4)) <= g_765) <= 4294967293UL), g_26);
    for (p_6 = 0; (p_6 <= 1); p_6 += 1)
    {
        unsigned l_1191 = 0UL;
        int *l_1193 = &g_75;
        int ***l_1212 = &g_540;
        int *l_1315[8][3][5] = {{{&g_75,&g_75,&g_26,&g_26,&g_75},{&g_75,&g_75,&g_1267,&g_75,&g_26},{&g_26,&g_75,(void*)0,&g_75,&g_26}},{{&g_75,&g_75,&g_1267,&g_26,&g_26},{&g_26,&g_75,&g_75,&g_26,(void*)0},{&g_75,&g_26,&g_75,&g_75,&g_75}},{{&g_75,&g_26,&g_75,&g_26,&g_75},{&g_1267,&g_1267,&g_75,&g_26,(void*)0},{&g_26,(void*)0,&g_1267,&g_26,&g_1267}},{{(void*)0,&g_26,(void*)0,&g_1267,&g_1267},{&g_1267,&g_26,&g_75,&g_1267,&g_26},{&g_1267,(void*)0,(void*)0,&g_26,&g_26}},{{&g_1267,(void*)0,(void*)0,&g_1267,&g_26},{&g_26,&g_26,&g_26,&g_1267,&g_26},{&g_1267,&g_26,(void*)0,&g_26,(void*)0}},{{&g_26,&g_75,&g_26,&g_1267,(void*)0},{(void*)0,&g_26,&g_1267,&g_1267,&g_75},{&g_75,(void*)0,&g_75,&g_26,&g_26}},{{&g_75,&g_75,&g_75,&g_1267,&g_75},{(void*)0,&g_75,&g_26,&g_26,(void*)0},{&g_26,&g_26,&g_75,&g_26,&g_1267}},{{&g_1267,&g_75,&g_26,(void*)0,&g_75},{&g_26,&g_75,&g_75,(void*)0,&g_75},{&g_1267,&g_75,&g_75,&g_26,&g_75}}};
        unsigned short l_1316 = 8UL;
        unsigned char l_1321[3];
        short l_1330 = (-2L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1321[i] = 0xC0L;
        (*g_540) = (void*)0;
        (*g_939) = (*g_560);
    }
    return (*g_540);
}







static unsigned char func_20(int p_21, int * p_22, unsigned char p_23, unsigned p_24)
{
    int *l_38 = &g_26;
    for (g_26 = 0; (g_26 <= 0); g_26 += 1)
    {
        unsigned l_27 = 0x28F3B8C1L;
        int *l_77 = &g_26;
        const unsigned char l_1097 = 0xAEL;
        unsigned l_1120 = 0xEC9A7A44L;
        int *l_1135[4][4][3] = {{{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75}},{{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75}},{{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75}},{{(void*)0,&g_75,&g_75},{&g_75,&g_75,&g_75},{(void*)0,(void*)0,&g_75},{&g_75,&g_75,&g_75}}};
        int l_1141 = 0xB314AA7DL;
        unsigned char l_1158 = 5UL;
        int i, j, k;
    }
    return p_21;
}







static int * func_28(const int * p_29)
{
    unsigned short l_454 = 0x331FL;
    int *l_455 = &g_75;
    int l_527 = 8L;
    int *l_565 = (void*)0;
    unsigned short l_587 = 0UL;
    int l_609 = (-3L);
    const int **l_645 = &g_560;
    const unsigned l_650 = 1UL;
    unsigned l_654 = 8UL;
    unsigned l_676[1][3][4] = {{{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL},{18446744073709551608UL,18446744073709551608UL,18446744073709551608UL,18446744073709551608UL}}};
    int *l_681 = &g_75;
    int l_698 = 0xD3D12421L;
    unsigned l_788 = 18446744073709551608UL;
    unsigned char l_789[7][7] = {{248UL,2UL,0UL,2UL,248UL,255UL,0xB0L},{0xD5L,0x5FL,0UL,255UL,2UL,0x1AL,0x05L},{255UL,0x5EL,0xE0L,0x1AL,0x1AL,0xE0L,0x5EL},{0xD5L,255UL,0x5FL,0xB0L,246UL,0xE0L,255UL},{248UL,0x8EL,0x3EL,0UL,0UL,0x1AL,0UL},{0xB0L,0UL,0UL,0xB0L,0x8AL,255UL,0UL},{255UL,0UL,248UL,0x1AL,0xD5L,0x8AL,2UL}};
    unsigned l_790 = 0UL;
    char l_945 = 3L;
    int *l_975[5] = {&g_26,&g_26,&g_26,&g_26,&g_26};
    int *l_976 = &l_698;
    short l_980[9] = {(-3L),0xB3EAL,0xB3EAL,(-3L),0xB3EAL,0xB3EAL,(-3L),0xB3EAL,0xB3EAL};
    unsigned l_986 = 0x3725E846L;
    int **l_992 = &g_25[7][1][0];
    unsigned char l_1011 = 0x60L;
    int *l_1025 = &l_609;
    int *l_1074 = &l_609;
    int *l_1075 = &g_75;
    int i, j, k;
    if ((+(safe_unary_minus_func_uint8_t_u((safe_add_func_int32_t_s_s((((l_454 , l_455) == (void*)0) , ((((((l_455 != (void*)0) > (safe_div_func_int16_t_s_s((((*l_455) | (*l_455)) , (*l_455)), 0xD686L))) >= (*l_455)) , (*l_455)) , (void*)0) != &g_80[2][0][0])), (*p_29)))))))
    {
        int l_462 = 3L;
        unsigned l_544 = 0UL;
        int l_547 = 0L;
        int l_603 = 3L;
        unsigned l_607[6];
        int *l_659 = &g_75;
        int l_713 = 0L;
        int i;
        for (i = 0; i < 6; i++)
            l_607[i] = 0x7ACAC6C2L;
        if (func_57(((0x5F804B06L ^ ((-3L) | (*p_29))) , (safe_lshift_func_uint16_t_u_s(0x3869L, ((safe_add_func_uint8_t_u_u(func_49((g_315[0][0] , (((l_462 || l_462) , (l_462 , (safe_add_func_int32_t_s_s((-3L), 0UL)))) == l_462)), l_455), 0UL)) || (-7L)))))))
        {
            int * const l_471 = &l_462;
            unsigned l_484 = 0x4B038B14L;
            int *l_564[8][5] = {{&g_26,&g_75,&g_75,&g_26,&g_75},{(void*)0,(void*)0,&l_547,(void*)0,(void*)0},{&g_75,&g_26,&g_75,&g_75,&g_26},{(void*)0,&l_547,&l_547,(void*)0,&l_547},{&g_26,&g_26,&l_547,&g_26,&g_26},{&l_547,(void*)0,&l_547,&l_547,(void*)0},{&g_26,&g_75,&g_75,&g_26,&g_75},{(void*)0,(void*)0,&l_547,(void*)0,(void*)0}};
            int i, j;
            (*l_455) = (func_49((((safe_lshift_func_int8_t_s_u(0L, 0)) & (l_462 , ((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u((func_49((((*p_29) ^ ((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(g_315[1][1], g_181[1])), (-10L))) >= l_462)) , 0x41951C1EL), l_455) || 0xEABE24B7L), g_19)), (-1L))) , (*p_29)))) , (*p_29)), &g_26) > l_462);
            if ((safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((65528UL > ((safe_sub_func_int32_t_s_s((*l_471), (safe_lshift_func_uint16_t_u_u(((*l_455) & (~0x6144L)), 10)))) <= ((g_181[1] || (0L >= (safe_add_func_uint8_t_u_u(g_75, 0x41L)))) != (*l_471)))) != (*l_471)), l_462)), (*l_455))))
            {
                int *l_489[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_489[i] = &g_26;
                for (l_462 = 0; (l_462 <= 1); l_462 += 1)
                {
                    int i;
                    (*l_455) = g_181[l_462];
                    return l_489[2];
                }
                for (l_454 = 0; (l_454 <= 37); l_454 = safe_add_func_int8_t_s_s(l_454, 9))
                {
                    char l_502 = 4L;
                    int *l_503 = &g_75;
                    if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((func_49((!(l_462 | (((g_315[1][1] <= (safe_sub_func_int8_t_s_s(g_181[1], 7L))) , ((*l_455) < (*l_455))) != (safe_sub_func_int8_t_s_s((((*l_471) >= 0xF2L) != (safe_rshift_func_int16_t_s_u(((*l_455) <= l_502), 0))), (*l_455)))))), l_503) || 0L) > g_26), 2)), 5UL)))
                    {
                        const int l_513 = (-6L);
                        int *l_526 = &g_26;
                        l_455 = func_32(func_49(((safe_unary_minus_func_int8_t_s((!(*l_455)))) ^ (g_19 != ((safe_div_func_int16_t_s_s(g_315[1][1], ((&g_264 != &p_29) , ((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((l_455 == (void*)0) <= ((safe_div_func_uint8_t_u_u(((void*)0 == p_29), 8L)) & 0L)), g_181[1])), l_513)) || (*l_471))))) , 4294967288UL))), &l_462), g_181[6], g_181[5]);
                        l_527 = (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((&g_80[0][0][0] == (void*)0), (safe_div_func_uint32_t_u_u(func_49((safe_sub_func_uint32_t_u_u((func_49((*p_29), &l_462) == (safe_div_func_int32_t_s_s((g_315[1][0] , (0x9CCD45A1L & (safe_lshift_func_int8_t_s_u((l_503 != l_455), 6)))), l_462))), l_513)), l_526), l_462)))), (*l_526)));
                    }
                    else
                    {
                        (*l_455) = (((*l_471) && g_26) || 0x17L);
                        return l_503;
                    }
                }
                (*l_455) = (0xCBL && ((func_49((*p_29), l_489[1]) || 4294967295UL) >= (((((void*)0 == &p_29) & (*l_471)) | (l_462 <= g_181[1])) , l_462)));
                for (l_527 = 7; (l_527 >= 0); l_527 -= 1)
                {
                    unsigned short l_543[10] = {0xC086L,0x30B0L,0xC086L,0x30B0L,0xC086L,0x30B0L,0xC086L,0x30B0L,0xC086L,0x30B0L};
                    unsigned short l_558[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_558[i] = 65535UL;
                    if (((safe_lshift_func_uint16_t_u_u(((*l_471) != ((safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*p_29) < (*p_29)), ((g_540 == ((~(safe_mul_func_uint16_t_u_u((l_543[6] < (p_29 == (((l_544 > (safe_mul_func_uint8_t_u_u(l_547, l_543[6]))) , 0xEF61FB4EL) , p_29))), (*l_455)))) , &g_264)) == (*l_455)))), (*l_471))), (*l_471))), 0x28394563L)), g_181[1])) , g_181[2])), g_75)) , (*l_471)))
                    {
                        char l_559[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_559[i] = (-1L);
                        g_560 = p_29;
                    }
                    else
                    {
                        int i;
                        l_489[l_527] = (void*)0;
                    }
                    for (l_544 = 0; (l_544 <= 0); l_544 += 1)
                    {
                        int *l_561 = &l_462;
                        const int **l_562 = &g_560;
                        (*g_540) = l_561;
                        (*g_540) = (void*)0;
                        (*l_562) = p_29;
                        if ((*g_560))
                            break;
                    }
                }
            }
            else
            {
                int *l_563 = (void*)0;
                return l_563;
            }
            for (l_462 = 6; (l_462 >= 0); l_462 -= 1)
            {
                return l_565;
            }
        }
        else
        {
            unsigned l_571[3][7] = {{0x86137561L,0x3C868FA7L,0UL,0x3C868FA7L,0x86137561L,0UL,1UL},{1UL,0x4DE3C349L,4294967291UL,1UL,4294967291UL,0x4DE3C349L,1UL},{6UL,1UL,0x4DE3C349L,4294967291UL,1UL,4294967291UL,0x4DE3C349L}};
            int *l_593[4];
            short l_643 = 0x7297L;
            unsigned short l_675 = 0UL;
            int l_712 = 3L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_593[i] = &g_75;
            for (l_462 = 0; (l_462 <= 25); ++l_462)
            {
                int l_577 = 0xC0082D24L;
                for (l_547 = 0; (l_547 > 12); l_547 = safe_add_func_uint16_t_u_u(l_547, 2))
                {
                    int l_570 = (-2L);
                    l_571[2][2] = l_570;
                    for (l_527 = 0; (l_527 != (-20)); --l_527)
                    {
                        int *l_574 = &g_26;
                        (*g_540) = func_30(&l_462);
                        return l_574;
                    }
                }
                for (l_527 = 2; (l_527 >= 0); l_527 -= 1)
                {
                    int *l_575 = &l_547;
                    int i, j;
                    if (l_571[l_527][(l_527 + 1)])
                        break;
                    for (g_75 = 2; (g_75 >= 0); g_75 -= 1)
                    {
                        int *l_576[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_576[i] = (void*)0;
                        return l_576[1];
                    }
                }
                if ((*p_29))
                    continue;
                if (l_577)
                    break;
            }
            for (g_75 = 13; (g_75 <= 3); g_75--)
            {
                int **l_586 = &g_264;
                int l_588 = 0L;
                unsigned l_653 = 0x6152829EL;
                unsigned l_656 = 0xDA7BC83DL;
                for (l_454 = 7; (l_454 >= 52); l_454 = safe_add_func_int16_t_s_s(l_454, 4))
                {
                    int l_591[6][7] = {{0x72144281L,0x72144281L,0x62FA012DL,0xBE103C84L,(-7L),(-7L),0xBE103C84L},{(-1L),1L,(-1L),(-1L),(-1L),1L,(-1L)},{0x72144281L,0xBE103C84L,0xBE103C84L,0x72144281L,(-7L),0x62FA012DL,0x62FA012DL},{1L,1L,0x50591CA6L,1L,1L,1L,0x50591CA6L},{(-7L),0x72144281L,0xBE103C84L,0xBE103C84L,0x72144281L,(-7L),0x62FA012DL},{(-1L),(-1L),(-1L),1L,(-1L),(-1L),(-1L)}};
                    int i, j;
                    for (l_544 = 1; (l_544 <= 8); l_544 += 1)
                    {
                        const int **l_583 = &g_560;
                        const int ***l_582 = &l_583;
                        int i;
                        (*l_582) = &g_560;
                        l_587 = (safe_lshift_func_uint8_t_u_u(0x54L, (l_586 == (void*)0)));
                        if (g_181[l_544])
                            continue;
                    }
                    l_588 = (*p_29);
                    if ((safe_mod_func_uint32_t_u_u((l_591[3][2] , l_462), (*p_29))))
                    {
                        (*g_540) = l_565;
                        if ((*l_455))
                            continue;
                    }
                    else
                    {
                        (*g_540) = (*l_586);
                        (*g_540) = (*l_586);
                    }
                }
                if ((0x94L < g_315[0][3]))
                {
                    int l_592[4][3][3] = {{{8L,8L,8L},{0xD91861E6L,0xD91861E6L,0xD91861E6L},{8L,8L,8L}},{{0xD91861E6L,0xD91861E6L,0xD91861E6L},{8L,8L,8L},{0xD91861E6L,0xD91861E6L,0xD91861E6L}},{{8L,8L,8L},{0xD91861E6L,0xD91861E6L,0xD91861E6L},{8L,8L,8L}},{{0xD91861E6L,0xD91861E6L,0xD91861E6L},{8L,8L,8L},{0xD91861E6L,0xD91861E6L,0xD91861E6L}}};
                    int i, j, k;
                    for (l_544 = 0; (l_544 <= 8); l_544 += 1)
                    {
                        l_592[0][0][1] = 0L;
                        return l_593[1];
                    }
                    if ((*p_29))
                        break;
                    for (l_527 = 0; (l_527 >= 0); ++l_527)
                    {
                        const int **l_596 = &g_560;
                        (*l_596) = p_29;
                    }
                }
                else
                {
                    short l_606 = 0xD208L;
                    (*l_586) = func_30(((((0x73C9A607L && (((((g_315[0][0] , ((((safe_div_func_uint32_t_u_u(l_547, (*p_29))) , (0xEFL != g_181[1])) != (safe_div_func_int16_t_s_s(l_603, (safe_mul_func_int8_t_s_s((-1L), (((((((((void*)0 != &g_80[1][0][0]) ^ 5L) , (-1L)) < g_19) , g_181[6]) != g_181[1]) ^ 0L) , l_547)))))) || (*l_455))) | 0x28L) < l_462) | g_26) >= l_606)) , 2UL) , 0x3D5467F3L) , (void*)0));
                    if (l_544)
                        break;
                    if ((*p_29))
                    {
                        int l_608 = 0x53679921L;
                        (*g_540) = l_565;
                        (*l_586) = (*l_586);
                        l_609 = ((l_607[1] || (~((!l_547) | 0x91F941D0L))) & l_608);
                    }
                    else
                    {
                        int l_612 = 0x23C3CEABL;
                        int l_613 = 0xF87C9BA6L;
                        l_613 = (safe_div_func_int16_t_s_s((l_612 || (g_19 , g_19)), (-3L)));
                        l_613 = (safe_add_func_int16_t_s_s(l_612, g_101));
                    }
                }
                if (((safe_lshift_func_uint8_t_u_s(g_181[1], 6)) ^ g_75))
                {
                    char l_618 = 0x68L;
                    int l_642 = 0x35699DFEL;
                    (*l_586) = func_32(g_19, (&g_80[0][0][0] == (void*)0), l_618);
                    if (((safe_lshift_func_int16_t_s_s(l_547, ((*p_29) , (((safe_div_func_uint16_t_u_u(0x6B62L, (**l_586))) , (**l_586)) < (safe_rshift_func_int16_t_s_u(g_101, (safe_rshift_func_int8_t_s_s((**l_586), 2)))))))) >= (((*l_455) | ((g_181[1] , g_181[1]) > 1UL)) , (*g_560))))
                    {
                        short l_641 = (-4L);
                        (*g_540) = func_32((safe_rshift_func_int8_t_s_u((l_618 != ((safe_div_func_int16_t_s_s((safe_mul_func_int8_t_s_s((1UL && (((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(g_181[1], l_618)) && (((safe_mod_func_int32_t_s_s(((g_315[1][1] < (g_181[4] <= g_75)) > 0x0A1CC50CL), (safe_lshift_func_uint16_t_u_u((*l_455), (*l_455))))) == g_181[2]) , (*g_264))) > 0x0BL), 65533UL)) , &g_80[2][0][0]) == (void*)0)), 0L)), 65531UL)) ^ l_544)), g_19)), (*l_455), g_19);
                        l_641 = (**l_586);
                        l_642 = (*p_29);
                    }
                    else
                    {
                        const int ***l_644[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_644[i] = (void*)0;
                        (*l_586) = func_32(l_643, g_26, g_181[1]);
                        l_645 = &p_29;
                        if ((*g_560))
                            continue;
                    }
                }
                else
                {
                    int **l_655 = &l_593[2];
                    l_656 = (safe_mod_func_int32_t_s_s((*p_29), (safe_add_func_int8_t_s_s((l_650 >= (safe_lshift_func_uint16_t_u_s(((g_315[1][0] || ((*p_29) < (((g_315[1][1] | ((**l_645) <= (l_653 , l_654))) , l_655) != &g_560))) > l_607[4]), 10))), (*l_455)))));
                }
            }
            for (l_654 = 26; (l_654 != 57); ++l_654)
            {
                int * const l_673 = &l_547;
                int *l_678 = &g_75;
                short l_711 = 0L;
                if (((void*)0 != l_659))
                {
                    const unsigned l_674 = 0x90ECBF04L;
                    for (l_547 = 3; (l_547 <= 8); l_547 += 1)
                    {
                        int *l_670 = &g_26;
                        unsigned short l_677 = 0xB059L;
                        int i;
                        (*l_659) = ((((safe_lshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(0xC93D1613L, (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((g_181[l_547] || (((void*)0 == l_670) , ((+((*l_659) || (((safe_add_func_uint16_t_u_u((*l_455), (l_674 , (6L < 0xCA37L)))) , g_315[1][1]) <= l_675))) != 4294967295UL))) == (*l_670)) > 1L), 2)), (*l_673))))), g_19)) < l_676[0][0][0]) || 0x77L) != l_677), (*l_659))) , 0UL) , 0xAEE9L) , 0x02114792L);
                        if ((*l_673))
                            continue;
                        (*g_540) = func_30(l_593[2]);
                    }
                    return l_678;
                }
                else
                {
                    char l_686 = (-1L);
                    for (l_609 = 11; (l_609 > 9); --l_609)
                    {
                        p_29 = &l_547;
                        return l_681;
                    }
                    (*l_645) = ((((((*g_560) && ((((*l_678) , l_686) < l_686) , 0x2D2B395FL)) , &g_540) != (void*)0) > 0L) , g_687);
                }
                if ((g_26 | func_57(g_101)))
                {
                    int *l_688 = &l_462;
                    for (l_675 = 0; (l_675 <= 3); l_675 += 1)
                    {
                        int i;
                        l_593[l_675] = l_688;
                        (*l_681) = (safe_div_func_int8_t_s_s(g_181[5], g_26));
                    }
                }
                else
                {
                    unsigned l_697[2];
                    int **l_709 = &g_25[3][7][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_697[i] = 0xA86D685AL;
                    if (((func_57((*l_678)) & (!((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(((g_101 , ((safe_lshift_func_uint16_t_u_s(l_697[1], (((((g_315[1][1] >= (l_697[1] , (g_19 , g_26))) && (g_315[1][1] ^ l_697[0])) != l_697[1]) >= 0x539EL) || 0x9DL))) , g_101)) & (*l_673)), 3)) < 6L) != g_181[1]), l_698)) < 0xC94BL))) , (*l_659)))
                    {
                        (*l_645) = (*l_645);
                    }
                    else
                    {
                        (*l_645) = p_29;
                    }
                    (*l_645) = func_32((*l_659), (&l_462 != (void*)0), (((0L == ((*l_673) , ((**l_645) , g_101))) , (safe_rshift_func_uint8_t_u_s(((*p_29) <= (*l_659)), l_697[1]))) , g_101));
                    for (l_643 = 0; (l_643 != 23); l_643 = safe_add_func_uint32_t_u_u(l_643, 4))
                    {
                        (*g_540) = (void*)0;
                    }
                    (*l_678) = ((1L && func_49(((((safe_sub_func_int8_t_s_s(((((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((0xD2FF7E08L > ((l_709 == (void*)0) , (*p_29))), g_75)), (*l_673))) > (((*l_678) || (safe_unary_minus_func_int8_t_s((&l_462 != p_29)))) & g_19)) , l_697[1]) , l_711), l_712)) || 0x73062E26L) , l_713) | g_315[1][1]), &l_462)) && 0xCFL);
                }
            }
        }
        (*l_645) = p_29;
        (*l_645) = p_29;
    }
    else
    {
        const int ***l_714 = (void*)0;
        const int ***l_715 = &l_645;
        int *l_748 = &g_75;
        int l_772[8][4] = {{0x3BB87A53L,0x3BB87A53L,9L,0x3BB87A53L},{0x3BB87A53L,0L,0L,0x3BB87A53L},{0L,0x3BB87A53L,0L,0L},{0x3BB87A53L,0x3BB87A53L,9L,0x3BB87A53L},{0x3BB87A53L,0L,0L,0x3BB87A53L},{0L,0x3BB87A53L,0L,0L},{0x3BB87A53L,0x3BB87A53L,9L,0x3BB87A53L},{0x3BB87A53L,0L,0L,0x3BB87A53L}};
        char l_787 = 0xB6L;
        int *l_831[6][4][5] = {{{&l_698,&l_609,&l_772[5][2],&l_698,&l_698},{&l_698,&l_698,&g_26,&g_75,&l_772[7][0]},{&l_698,&l_609,&l_772[7][0],(void*)0,&l_772[7][0]},{&g_75,&g_75,&l_609,&g_26,&l_698}},{{&l_772[7][0],&g_26,&l_772[7][0],(void*)0,&l_772[7][0]},{&l_698,&l_698,&g_75,&l_698,&g_75},{&g_75,&g_26,&l_772[7][0],&l_772[7][0],&l_698},{&l_609,&g_75,(void*)0,&g_26,&l_698}},{{&l_772[7][0],&l_609,&g_26,&g_26,&l_609},{&l_772[7][0],&l_698,&l_698,&l_772[7][0],&g_75},{&l_772[7][0],&l_772[7][0],&l_698,&l_698,&g_26},{&l_698,&l_772[7][0],&l_772[6][2],(void*)0,&l_772[7][0]}},{{&l_772[7][0],&g_26,(void*)0,&g_26,&l_772[7][0]},{&l_772[7][0],&l_772[5][2],&l_609,(void*)0,&l_772[7][0]},{&l_772[7][0],&g_75,&l_609,&g_75,&l_772[7][0]},{&l_609,&l_772[7][0],(void*)0,&g_75,&g_75}},{{&g_75,&l_698,&l_772[6][2],&l_698,&l_609},{&l_698,&l_772[7][0],&l_698,&l_772[7][0],&g_75},{&l_772[7][0],&l_698,&l_698,&g_75,&l_772[7][0]},{&g_75,(void*)0,&g_26,&l_698,&l_772[7][0]}},{{&l_698,(void*)0,&l_772[6][2],&l_609,&l_772[7][0]},{&g_75,&l_698,&l_698,(void*)0,&l_698},{&l_772[7][0],&l_698,&l_698,&g_26,&l_609},{&l_772[7][0],&l_698,&l_698,(void*)0,&l_698}}};
        unsigned l_858 = 0x6B729611L;
        int l_948 = 0L;
        int i, j, k;
        (*l_645) = p_29;
        (*l_715) = &p_29;
        (*l_681) = (func_57(g_101) <= g_26);
        for (g_75 = 0; (g_75 == 9); g_75++)
        {
            int l_724[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int * const l_743 = &g_26;
            int *l_766 = (void*)0;
            int l_771 = 0x069E0CE7L;
            char l_820 = 7L;
            int ***l_868 = &g_540;
            const int *l_892[9];
            int *l_978 = &g_26;
            int i;
            for (i = 0; i < 9; i++)
                l_892[i] = &l_698;
        }
    }
lbl_1029:
    for (g_75 = 0; (g_75 <= 6); g_75 += 1)
    {
        unsigned char l_985 = 0x55L;
        int l_988 = 0L;
        (*l_976) = (((safe_sub_func_int16_t_s_s(0x5F2CL, (*l_455))) , (((l_985 || l_985) < l_986) > (((((*p_29) != (g_315[0][3] > (((*l_645) != (void*)0) & (*p_29)))) <= l_985) ^ l_985) > (*g_687)))) == (*l_455));
        for (l_985 = 0; (l_985 <= 1); l_985 += 1)
        {
            const int *l_987 = (void*)0;
            int i, j;
            l_987 = ((0x2EL >= g_315[l_985][l_985]) , (*l_645));
            l_988 = (g_315[l_985][l_985] & (l_985 == 0xACL));
        }
    }
    for (l_527 = 18; (l_527 > 29); l_527++)
    {
        int ***l_991[5] = {&g_540,&g_540,&g_540,&g_540,&g_540};
        int l_1045 = 0x220E497AL;
        int i;
        l_992 = &g_25[3][7][0];
        if (((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u((g_75 > (p_29 != (void*)0)), g_26)) & (*l_681)) || g_101), 0)), g_19)) || g_315[1][1]))
        {
            char l_1008 = (-4L);
            int * const l_1009 = &g_75;
            int l_1014 = 0xC487AB3FL;
            int *l_1031 = &l_1014;
            int *l_1033 = (void*)0;
            for (g_765 = 0; (g_765 >= 13); g_765 = safe_add_func_int16_t_s_s(g_765, 3))
            {
                const int ***l_1007[1][9][6] = {{{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,&l_645,&l_645},{&l_645,(void*)0,&l_645,(void*)0,(void*)0,&l_645},{&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645},{(void*)0,&l_645,(void*)0,&l_645,(void*)0,(void*)0},{&l_645,(void*)0,(void*)0,&l_645,&l_645,&l_645},{&l_645,&l_645,(void*)0,&l_645,&l_645,&l_645},{&l_645,&l_645,&l_645,&l_645,&l_645,&l_645},{(void*)0,&l_645,&l_645,&l_645,&l_645,&l_645}}};
                int **l_1010 = &g_264;
                int i, j, k;
                for (l_945 = (-19); (l_945 >= (-12)); l_945++)
                {
                    (*g_540) = ((safe_rshift_func_uint8_t_u_s((246UL >= (safe_div_func_int8_t_s_s((g_26 & func_57(((g_315[1][1] & g_75) < (((g_181[1] > (g_26 & 0x4EL)) >= (&g_396 == l_1007[0][2][2])) || 0x22L)))), g_26))), l_1008)) , (void*)0);
                }
                (*l_1010) = l_1009;
            }
            if (l_1011)
            {
                int *l_1023 = &l_1014;
                int *l_1026 = &g_75;
                (*l_645) = p_29;
                for (l_986 = 0; (l_986 >= 8); l_986 = safe_add_func_int8_t_s_s(l_986, 3))
                {
                    int *l_1022 = &l_1014;
                    int *l_1024 = &l_609;
                    (*l_1009) = (safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((((safe_unary_minus_func_uint16_t_u((*l_1009))) ^ g_26) < 0x2F50L), (*l_455))), 5));
                    return l_1026;
                }
            }
            else
            {
                int *l_1032[1][5][5] = {{{&g_75,&g_75,&l_1014,&g_75,&g_75},{&g_75,(void*)0,&g_75,&g_75,(void*)0},{&g_75,&l_609,&g_26,&g_75,&g_26},{(void*)0,(void*)0,&l_609,(void*)0,(void*)0},{&g_26,&g_75,&g_26,&l_609,&g_75}}};
                int i, j, k;
                for (l_654 = 0; (l_654 > 30); l_654 = safe_add_func_uint8_t_u_u(l_654, 1))
                {
                    if (l_698)
                        goto lbl_1029;
                    (*l_1025) = (safe_unary_minus_func_uint16_t_u(0x94B2L));
                }
                return l_1033;
            }
        }
        else
        {
            unsigned l_1038[2];
            int l_1041 = 0x22D65BAFL;
            int **l_1061 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1038[i] = 4294967293UL;
            if ((safe_div_func_int16_t_s_s(g_315[1][1], (*l_681))))
            {
                int l_1053[9] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
                unsigned l_1056 = 4294967292UL;
                int i;
                for (g_765 = 0; (g_765 == 55); g_765 = safe_add_func_int16_t_s_s(g_765, 1))
                {
                    (*g_687) = l_1038[0];
                }
                for (g_75 = 0; (g_75 >= (-25)); g_75 = safe_sub_func_uint8_t_u_u(g_75, 2))
                {
                    int *l_1048 = &g_26;
                    l_1041 = (*p_29);
                    for (l_986 = 0; (l_986 <= 0); l_986 += 1)
                    {
                        int i, j, k;
                        (*l_976) = l_676[l_986][l_986][l_986];
                        g_25[l_986][(l_986 + 2)][l_986] = &l_1041;
                        p_29 = func_32((&g_540 == &g_80[2][0][0]), ((l_676[l_986][(l_986 + 2)][(l_986 + 3)] , 0L) , (safe_mod_func_uint16_t_u_u(0UL, g_75))), (l_1038[0] < (safe_unary_minus_func_uint8_t_u(l_1045))));
                    }
                    (*l_976) = (safe_div_func_int16_t_s_s(((((void*)0 != l_1048) < (safe_sub_func_uint32_t_u_u(6UL, (g_101 ^ g_181[7])))) || ((*p_29) , (((safe_mod_func_int16_t_s_s((**l_645), (l_1053[8] , (safe_lshift_func_uint16_t_u_u(65535UL, l_1056))))) && g_181[5]) | 0x9FB72F6EL))), l_1053[4]));
                }
                (*l_976) = (*p_29);
            }
            else
            {
                (*l_645) = p_29;
            }
            (*l_455) = (*p_29);
            (*l_976) = ((((-2L) != (safe_sub_func_int16_t_s_s((*l_681), (safe_div_func_uint32_t_u_u((l_1061 == (((safe_sub_func_int8_t_s_s(g_181[8], (+(**l_645)))) || 1UL) , &p_29)), g_19))))) , (*l_681)) < 1L);
        }
        (*g_939) = (((~((((*g_687) & 0x2627BCDBL) > (safe_div_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_u((*l_681), 4)) , (((*p_29) & g_765) == g_19)) == (**l_645)), (safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(g_315[1][2], (*l_1025))), g_181[7]))))) , 0xF1L)) , 0L) || (*p_29));
        for (l_654 = (-2); (l_654 <= 24); l_654++)
        {
            if (g_75)
                goto lbl_1029;
        }
    }
    return l_1075;
}







static int * func_30(int * p_31)
{
    return p_31;
}







static int * func_32(int p_33, const short p_34, unsigned short p_35)
{
    unsigned l_448 = 0UL;
    int *l_449 = &g_75;
    int **l_450 = &g_25[0][4][0];
    (*l_450) = l_449;
    return l_449;
}







static char func_40(int * const p_41)
{
    int l_274 = (-1L);
    unsigned l_277 = 0x11AFA2E2L;
    int *l_278 = &g_26;
    int ***l_310 = &g_80[2][0][0];
    unsigned char l_311 = 0x38L;
    int l_348 = 0x6F344222L;
    int l_387 = (-9L);
    int l_446 = (-1L);
    if ((l_274 < ((safe_rshift_func_uint16_t_u_u(g_26, 5)) == func_49(l_277, l_278))))
    {
        int *l_281 = &g_75;
        int l_312 = 0L;
        int *** const l_359[1][2] = {{&g_80[2][0][0],&g_80[2][0][0]}};
        int l_371 = 0x0D239F8EL;
        short l_372 = 1L;
        int *l_385 = &g_26;
        int i, j;
lbl_362:
        l_278 = p_41;
lbl_365:
        for (l_277 = 0; (l_277 <= 0); l_277 += 1)
        {
            int l_279 = (-6L);
            int **l_280 = &g_264;
            (*l_280) = p_41;
            (*l_280) = l_281;
            for (l_279 = 0; (l_279 >= 0); l_279 -= 1)
            {
                int ***l_286[7] = {&l_280,&l_280,&l_280,&l_280,&l_280,&l_280,&l_280};
                const int l_323 = 1L;
                int l_356 = 0x266FC46FL;
                int i;
                if ((((((((safe_add_func_int32_t_s_s((*l_281), ((*g_264) == g_19))) , 0x1282641BL) , (safe_div_func_int8_t_s_s(((void*)0 != l_286[6]), (**l_280)))) , (**l_280)) & (*l_281)) , (void*)0) == (void*)0))
                {
                    int **l_288[5] = {&g_264,&g_264,&g_264,&g_264,&g_264};
                    int i;
                    for (l_274 = 0; (l_274 <= 0); l_274 += 1)
                    {
                        unsigned l_287 = 6UL;
                        (*l_280) = l_281;
                    }
                    if (((*l_281) || ((l_288[1] != &g_264) & (1UL ^ (*l_281)))))
                    {
                        int **l_291 = &l_278;
                        (**l_280) = 4L;
                        (*l_291) = ((func_49(func_49((*g_264), l_278), &g_26) ^ (safe_mod_func_uint16_t_u_u(g_26, 0x016AL))) , p_41);
                        (**l_280) = (safe_sub_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(((*l_281) ^ 0x5F3BL), g_75)) , ((safe_lshift_func_uint8_t_u_s((g_26 | (*l_281)), 5)) || ((*l_281) ^ g_181[1]))) , (*l_281)), ((((safe_div_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*l_281), 0x4F48L)), l_274)) >= g_75) , 0x56L) >= (*l_281))));
                    }
                    else
                    {
                        short l_302 = 4L;
                        int *l_305[9][10][2] = {{{(void*)0,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_26,&g_26},{&g_26,&g_75},{(void*)0,&g_26},{&g_26,&g_75},{&g_75,&g_26},{&g_75,&g_75},{&g_26,&g_26}},{{(void*)0,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_75,&g_75},{(void*)0,&g_26},{&g_26,&g_75},{&g_75,&g_26},{&g_75,&g_75},{&g_26,&g_26},{(void*)0,&g_75}},{{&g_26,&g_26},{&g_26,&g_75},{(void*)0,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_26,&g_26},{&g_26,&g_75},{(void*)0,&g_26},{&g_26,&g_75},{(void*)0,&g_75}},{{&g_26,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_75,&g_75},{&g_26,&g_75},{(void*)0,&g_75}},{{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_26,&g_75}},{{&g_75,&g_75},{(void*)0,&g_75},{&g_26,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_75,&g_75}},{{&g_26,&g_75},{(void*)0,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75}},{{&g_75,&g_75},{&g_26,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_26,&g_75},{&g_75,&g_75},{(void*)0,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_75,&g_75}},{{&g_26,&g_75},{&g_26,&g_75},{(void*)0,&g_75},{&g_75,&g_26},{&g_26,&g_75},{&g_26,&g_75},{&g_26,&g_75},{&g_75,&g_75},{&g_75,&g_75},{&g_75,&g_75}}};
                        int **l_324[6][4][5] = {{{&l_305[8][0][0],&l_281,&g_264,&l_281,&l_305[8][0][0]},{&l_281,(void*)0,&l_278,&g_25[3][7][0],&l_281},{&g_25[7][6][0],&l_281,&g_264,&l_281,&g_25[7][6][0]},{&l_281,&g_25[3][7][0],&l_278,(void*)0,&l_281}},{{&l_305[8][0][0],&l_281,&g_264,&l_281,&l_305[8][0][0]},{&l_281,(void*)0,&l_278,&g_25[3][7][0],&l_281},{&g_25[7][6][0],&l_281,&g_264,&l_281,&g_25[7][6][0]},{&l_281,&g_25[3][7][0],&l_278,(void*)0,&l_281}},{{&l_305[8][0][0],&l_281,&g_264,&l_281,&l_305[8][0][0]},{&l_281,(void*)0,&l_278,&g_25[3][7][0],&l_281},{&g_25[7][6][0],&l_281,&g_264,&l_281,&g_25[7][6][0]},{&l_281,&g_25[3][7][0],&l_278,(void*)0,&l_281}},{{&l_305[8][0][0],&l_281,&g_264,&l_281,&l_305[8][0][0]},{&l_281,(void*)0,&l_278,&g_25[3][7][0],&g_264},{&g_25[7][1][0],(void*)0,&l_281,(void*)0,&g_25[7][1][0]},{&g_264,&l_281,&l_305[0][7][0],&g_264,&g_264}},{{&l_305[8][0][1],(void*)0,&l_278,(void*)0,&l_305[8][0][1]},{&g_264,&g_264,&l_305[0][7][0],&l_281,&g_264},{&g_25[7][1][0],(void*)0,&l_281,(void*)0,&g_25[7][1][0]},{&g_264,&l_281,&l_305[0][7][0],&g_264,&g_264}},{{&l_305[8][0][1],(void*)0,&l_278,(void*)0,&l_305[8][0][1]},{&g_264,&g_264,&l_305[0][7][0],&l_281,&g_264},{&g_25[7][1][0],(void*)0,&l_281,(void*)0,&g_25[7][1][0]},{&g_264,&l_281,&l_305[0][7][0],&g_264,&g_264}}};
                        int **l_325 = (void*)0;
                        int **l_326 = (void*)0;
                        int **l_327 = (void*)0;
                        int **l_328 = &g_25[3][7][0];
                        int i, j, k;
                        (*l_281) = l_302;
                        (*l_280) = p_41;
                        (*l_328) = p_41;
                        return g_315[1][1];
                    }
                    if ((((safe_div_func_int32_t_s_s(((**l_280) || (safe_add_func_int8_t_s_s((*l_281), ((((safe_lshift_func_uint8_t_u_s((*l_281), 3)) , ((((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((&l_288[4] != &g_80[1][0][0]), (((safe_mul_func_int8_t_s_s((**l_280), 0xB7L)) || (((+((safe_sub_func_int32_t_s_s((&g_25[3][7][0] != &p_41), 8L)) >= (*g_264))) , g_101) , (**l_280))) , g_315[1][1]))) | 0x10223C2FL), 0)) >= (**l_280)) >= (**l_280)) > 0UL)) > 255UL) == 0x46DC47DAL)))), g_181[1])) ^ (**l_280)) >= (-1L)))
                    {
                        if ((*l_281))
                            break;
                    }
                    else
                    {
                        const char l_343 = 0xEDL;
                        int **l_346 = (void*)0;
                        int *l_347 = &g_75;
                        l_347 = p_41;
                    }
                    for (g_75 = 0; (g_75 <= 0); g_75 += 1)
                    {
                        int *l_349 = &g_75;
                        int i, j, k;
                        (**l_310) = (void*)0;
                        l_348 = (&g_80[2][0][0] == (void*)0);
                        (**l_310) = l_349;
                        l_348 = ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((~(+(1L || (*l_349)))) >= ((safe_mul_func_uint16_t_u_u(((*l_349) , ((~g_315[1][3]) , g_75)), 0x58CAL)) & ((**l_280) , (*g_264)))) < l_356), 13)), g_181[0])) && 1UL);
                    }
                }
                else
                {
                    char l_357 = 0x1DL;
                    int *** const l_358 = &g_80[1][0][0];
                    (*l_280) = (*l_280);
                    for (l_348 = 0; (l_348 != 17); ++l_348)
                    {
                        if (g_19)
                            goto lbl_362;
                    }
                    for (l_311 = 0; (l_311 != 40); l_311 = safe_add_func_int16_t_s_s(l_311, 8))
                    {
                        (**l_358) = (*l_280);
                    }
                    if (l_274)
                        goto lbl_365;
                }
            }
        }
        for (g_75 = 0; (g_75 <= (-22)); --g_75)
        {
            int *l_384 = &g_26;
            unsigned char l_388 = 0x1FL;
            unsigned l_404[1][8][10] = {{{4UL,4294967294UL,4UL,4294967294UL,4UL,4294967294UL,4UL,4294967294UL,4UL,4294967294UL},{0UL,4294967294UL,0UL,0x1F7F17DAL,0UL,4294967294UL,0UL,0x1F7F17DAL,0UL,4294967294UL},{4UL,0x1F7F17DAL,4UL,0x1F7F17DAL,4UL,0x1F7F17DAL,4UL,0x1F7F17DAL,4UL,0x1F7F17DAL},{0UL,0x1F7F17DAL,0UL,4294967294UL,0UL,0x1F7F17DAL,0UL,4294967294UL,0UL,0x1F7F17DAL},{4UL,4294967294UL,4UL,4294967294UL,4UL,4294967294UL,4UL,4294967294UL,4UL,4294967294UL},{0UL,4294967294UL,0UL,0x1F7F17DAL,0UL,4294967294UL,0UL,0x1F7F17DAL,0UL,4294967294UL},{4UL,0x1F7F17DAL,4UL,0x1F7F17DAL,4UL,0x1F7F17DAL,4UL,0x1F7F17DAL,4UL,0x1F7F17DAL},{0UL,0x1F7F17DAL,0UL,4294967294UL,0UL,0x1F7F17DAL,0UL,4294967294UL,0UL,0x1F7F17DAL}}};
            int l_409 = 1L;
            short l_429 = 0x4B44L;
            int i, j, k;
            for (l_312 = 0; (l_312 < (-21)); --l_312)
            {
                int l_370 = 0L;
                int **l_386 = &l_278;
                if (l_370)
                {
                    return l_371;
                }
                else
                {
                    int l_375 = 0xB9EF9E92L;
                    if (l_370)
                        break;
                    l_375 = (~(l_372 != (safe_rshift_func_uint16_t_u_u(l_370, 4))));
                    for (l_371 = 0; (l_371 <= 0); l_371 += 1)
                    {
                        return l_375;
                    }
                }
                l_388 = ((((safe_rshift_func_int8_t_s_u(l_370, ((((safe_sub_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_370, (safe_rshift_func_int16_t_s_s((l_384 != ((*l_384) , l_385)), 13)))), (l_386 == (*l_310)))) , &g_80[2][0][0]) != (void*)0) , l_387))) , g_315[1][1]) > (*l_384)) <= g_181[7]);
            }
            for (l_274 = 0; l_274 < 2; l_274 += 1)
            {
                for (l_311 = 0; l_311 < 4; l_311 += 1)
                {
                    g_315[l_274][l_311] = 0xAAL;
                }
            }
            l_348 = (g_181[2] == (*l_384));
            for (l_387 = 0; (l_387 >= 9); l_387 = safe_add_func_int16_t_s_s(l_387, 1))
            {
                int *l_405 = &g_75;
                int l_434 = 0x574EB19AL;
                for (l_388 = 0; (l_388 >= 46); l_388 = safe_add_func_int16_t_s_s(l_388, 1))
                {
                    unsigned l_397 = 0UL;
                    int * const l_411 = (void*)0;
                    for (l_277 = (-29); (l_277 < 23); l_277 = safe_add_func_uint32_t_u_u(l_277, 1))
                    {
                        int **l_395 = &l_278;
                        (*l_395) = p_41;
                        g_396 = &p_41;
                        return g_75;
                    }
                    if (((g_101 == (l_397 < ((safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_404[0][7][8], 2)), (g_26 , g_19))), ((void*)0 != l_405))) < (*l_281)))) , (safe_mod_func_uint8_t_u_u(((g_315[1][1] == g_181[0]) ^ g_26), 0x02L))))
                    {
                        int **l_408 = &l_405;
                        int **l_410 = &g_264;
                        (*l_408) = p_41;
                        l_409 = ((*l_310) == &p_41);
                        (*l_410) = (*g_396);
                    }
                    else
                    {
                        int **l_412[6] = {&l_385,&l_384,&l_385,&l_385,&l_384,&l_385};
                        int **l_413 = &g_25[0][4][0];
                        int **l_414 = &g_264;
                        int i;
                        (*l_413) = l_411;
                        l_348 = (*l_281);
                        (*l_414) = (*g_396);
                        if (g_26)
                            goto lbl_365;
                    }
                    for (l_397 = 0; (l_397 >= 55); l_397 = safe_add_func_uint32_t_u_u(l_397, 3))
                    {
                        if ((*l_281))
                            break;
                    }
                    l_409 = (safe_sub_func_int8_t_s_s((g_26 >= l_397), (safe_mul_func_int8_t_s_s(0x26L, ((safe_mod_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_u((*l_384), 6)) , (0x6BL == (safe_div_func_int32_t_s_s((((g_315[1][1] , l_310) != (void*)0) & (safe_rshift_func_uint16_t_u_s((g_26 && (*l_384)), (*l_384)))), (*l_384))))) , l_429) , g_75) < (*l_385)), (*l_281))) & (*l_281))))));
                }
                l_434 = (safe_rshift_func_uint8_t_u_s(((void*)0 != &g_80[2][0][0]), (safe_div_func_uint16_t_u_u(g_181[1], (*l_385)))));
            }
        }
    }
    else
    {
        int *l_435 = (void*)0;
        int *l_436 = &g_75;
        int l_440 = 7L;
lbl_441:
        (*l_436) = (-1L);
        for (l_348 = 0; (l_348 != (-27)); l_348 = safe_sub_func_uint32_t_u_u(l_348, 5))
        {
            const unsigned l_439[6] = {0xF1A25314L,0xF1A25314L,0xF1A25314L,0xF1A25314L,0xF1A25314L,0xF1A25314L};
            int l_447 = 0xFF0E41DDL;
            int i;
            for (g_75 = 0; (g_75 >= 0); g_75 -= 1)
            {
                int *l_444 = &g_75;
                unsigned l_445[7] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int i;
                l_440 = l_439[5];
                if (g_19)
                    goto lbl_441;
                for (l_274 = 0; (l_274 <= 0); l_274 += 1)
                {
                    int i, j, k;
                    l_446 = (safe_rshift_func_uint8_t_u_u((((g_315[1][1] > ((void*)0 == l_444)) | l_445[4]) || (g_315[1][1] && (*l_436))), 6));
                    if (l_439[5])
                        break;
                    if ((*l_278))
                        continue;
                    l_447 = (*l_436);
                }
            }
            return l_439[5];
        }
        for (l_446 = 0; l_446 < 3; l_446 += 1)
        {
            for (l_387 = 0; l_387 < 1; l_387 += 1)
            {
                for (l_348 = 0; l_348 < 1; l_348 += 1)
                {
                    g_80[l_446][l_387][l_348] = &g_25[1][5][0];
                }
            }
        }
    }
    return g_181[1];
}







static int * func_42(unsigned char p_43, int p_44)
{
    unsigned char l_86 = 0x6EL;
    int *l_87 = &g_75;
    int l_104 = 0xA5CB8EC4L;
    int l_138[6];
    int l_149[4][5] = {{0x1D46D758L,0xBA63E4CEL,0x95517ECDL,0x95517ECDL,0xBA63E4CEL},{0L,1L,1L,1L,1L},{0x1D46D758L,0xBA63E4CEL,0x95517ECDL,0x95517ECDL,0xBA63E4CEL},{0L,1L,1L,1L,1L}};
    int *l_240 = (void*)0;
    const unsigned char l_262[1][10] = {{0UL,0xEFL,255UL,255UL,0xEFL,0UL,0xEFL,255UL,255UL,0xEFL}};
    int *l_272 = &l_149[3][1];
    int *l_273 = &g_26;
    int i, j;
    for (i = 0; i < 6; i++)
        l_138[i] = (-8L);
    (*l_87) = l_86;
    for (g_75 = 0; (g_75 >= 0); g_75 -= 1)
    {
        int *l_88[7];
        int ***l_91 = &g_80[2][0][0];
        int l_94[3];
        const int *l_128 = &l_104;
        const int **l_127 = &l_128;
        int *l_135 = &l_104;
        int i;
        for (i = 0; i < 7; i++)
            l_88[i] = &g_26;
        for (i = 0; i < 3; i++)
            l_94[i] = 0x631A0D17L;
        for (l_86 = 0; (l_86 <= 0); l_86 += 1)
        {
            return l_88[6];
        }
        for (p_44 = 0; (p_44 <= 0); p_44 += 1)
        {
            int l_96[4][6] = {{(-1L),(-1L),4L,(-1L),(-1L),4L},{(-1L),(-1L),4L,(-1L),0x5A8626FBL,(-1L)},{0x5A8626FBL,0x5A8626FBL,(-1L),0x5A8626FBL,0x5A8626FBL,(-1L)},{0x5A8626FBL,0x5A8626FBL,(-1L),0x5A8626FBL,0x5A8626FBL,(-1L)}};
            int ** const l_140 = &l_88[6];
            int l_156 = 0x7B0EC45AL;
            int i, j;
            l_94[0] = (safe_mul_func_int16_t_s_s((((0x77L & (0x70294BA7L > (((p_44 >= p_44) | p_43) || (*l_87)))) , (void*)0) != l_91), ((((safe_add_func_int32_t_s_s(((p_43 != g_75) , p_44), g_19)) , g_19) , p_43) >= p_44)));
            l_87 = &p_44;
            for (p_43 = 0; (p_43 <= 0); p_43 += 1)
            {
                int *l_95 = (void*)0;
                int l_130[5];
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_130[i] = 0x734BBECAL;
                (**l_91) = (**l_91);
                for (l_86 = 0; (l_86 <= 0); l_86 += 1)
                {
                    return l_95;
                }
            }
        }
    }
    if ((*l_87))
    {
        char l_161 = 0x2CL;
        int *l_167 = &l_149[0][3];
        int *l_253 = &g_26;
        (*l_87) = p_44;
        for (l_104 = 0; (l_104 > 22); l_104 = safe_add_func_int16_t_s_s(l_104, 7))
        {
            unsigned short l_162 = 0x2F8BL;
            if (((((func_57((g_26 != p_43)) , (safe_add_func_uint16_t_u_u((0x427E704FL < 0xF0F885C3L), l_161))) || (-1L)) > (p_44 || g_19)) != l_162))
            {
                int *l_165 = &g_26;
                int **l_166 = &l_87;
                int *l_168 = &g_26;
                (*l_166) = (func_49((safe_lshift_func_int8_t_s_s((p_44 != p_44), 6)), l_165) , &p_44);
                return l_168;
            }
            else
            {
                (*l_167) = (((((*l_87) < ((safe_mod_func_uint16_t_u_u(g_26, (*l_87))) > (((g_101 != ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_43, p_44)), ((((void*)0 == &g_80[0][0][0]) > (safe_lshift_func_int16_t_s_s(p_44, (*l_167)))) , p_43))) , p_44)) & p_43) , g_26))) <= 8UL) , &g_25[3][5][0]) == (void*)0);
            }
            (*l_167) = (-7L);
        }
        if (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((*l_87), p_44)), g_101)) , (-1L)))
        {
            g_181[1] = p_43;
        }
        else
        {
            char l_186 = 0L;
            int *l_195 = &l_149[0][3];
            int *l_198 = &l_149[1][0];
            int *l_256 = &g_75;
            (*l_195) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((func_49((l_186 && ((safe_lshift_func_uint16_t_u_u((((l_186 > (-3L)) >= ((((*l_87) ^ p_44) == ((*l_167) <= p_44)) , (((((g_26 | (!(((safe_rshift_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(func_57((safe_mul_func_int16_t_s_s((&p_44 != l_195), (*l_87)))), 0xEBF8EEF4L)) , (*l_167)) & 7UL), p_43)) | (*l_195)) , p_44))) != (*l_195)) , p_43) , p_43) >= 0x57L))) | g_181[5]), (*l_195))) <= p_44)), l_167) ^ g_26), (*l_195))), 5L));
            if (p_44)
            {
                int *l_196 = &l_149[0][3];
                int **l_197 = &l_195;
                int *l_199 = &g_75;
                int *l_200 = &g_26;
                (*l_197) = l_196;
                if ((g_181[1] == 0x768AC21EL))
                {
                    (*l_197) = l_195;
                    return l_199;
                }
                else
                {
                    (*l_197) = &p_44;
                    return l_200;
                }
            }
            else
            {
                char l_209[6];
                const int **l_228 = (void*)0;
                int *l_252[7];
                int i;
                for (i = 0; i < 6; i++)
                    l_209[i] = 0x49L;
                for (i = 0; i < 7; i++)
                    l_252[i] = &l_149[0][3];
                (*l_198) = (safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((p_44 != g_19), ((safe_sub_func_uint16_t_u_u(((~(safe_lshift_func_uint8_t_u_s(l_209[3], 3))) > ((g_181[1] > (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((func_57(l_209[3]) < (((((safe_mul_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(g_101, (safe_lshift_func_int16_t_s_s((*l_195), 12)))), 1)), ((*l_195) >= g_26))), g_19)) ^ p_44), g_19)) , g_101) <= l_209[2]) <= g_181[1]) > p_44)), 0x7CF7601CL)), g_19))) > p_44)), 0xBEDBL)) == (*l_167)))), p_44));
                if (((*l_167) || (((safe_add_func_int32_t_s_s((l_228 != (void*)0), (((*l_87) > (((safe_lshift_func_uint8_t_u_s(((((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((*l_195), g_181[1])) && (p_44 && (*l_87))), ((*l_87) <= (*l_87)))) , p_44) <= 0xF0L) ^ p_44), 2)) | (*l_198)) ^ 0x6C4FL)) && 0x575FL))) && (*l_198)) , 0x50838B68L)))
                {
                    int *l_239 = (void*)0;
                    int *l_242 = (void*)0;
                    if ((p_44 == (safe_sub_func_uint32_t_u_u((((func_49(p_44, l_198) , p_43) >= ((0x4032L < p_44) || p_43)) , g_101), g_26))))
                    {
                        int *l_237 = &g_26;
                        int **l_238[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_238[i] = &l_237;
                        (*l_87) = 0xEEB9DB9AL;
                        l_239 = l_237;
                    }
                    else
                    {
                        int **l_241[10][1] = {{&g_25[0][3][0]},{&g_25[0][3][0]},{(void*)0},{&g_25[0][3][0]},{&g_25[0][3][0]},{(void*)0},{&g_25[0][3][0]},{&g_25[0][3][0]},{(void*)0},{&g_25[0][3][0]}};
                        int i, j;
                        l_242 = l_240;
                    }
                }
                else
                {
                    int *l_251 = &l_149[0][3];
                    for (l_186 = (-17); (l_186 <= 25); l_186 = safe_add_func_int16_t_s_s(l_186, 8))
                    {
                        int **l_245[4][7] = {{&l_198,&l_240,&l_240,&l_198,&l_240,&l_240,&l_198},{&l_195,(void*)0,&l_195,&l_195,(void*)0,&l_195,&l_195},{&l_198,&l_198,&l_87,&l_198,&l_198,&l_87,&l_198},{(void*)0,&l_195,&l_195,(void*)0,&l_195,&l_195,(void*)0}};
                        int i, j;
                        l_195 = &p_44;
                    }
                    for (l_86 = 0; (l_86 <= 0); l_86 += 1)
                    {
                        int **l_248 = &g_25[7][1][0];
                        (*l_198) = (*l_87);
                        (*l_195) = func_57((safe_rshift_func_int16_t_s_u(0x1096L, p_44)));
                        (*l_248) = &p_44;
                        p_44 = p_44;
                    }
                    for (l_86 = (-11); (l_86 == 23); l_86 = safe_add_func_int32_t_s_s(l_86, 3))
                    {
                        return l_253;
                    }
                }
                p_44 = (~(p_44 && (0UL >= ((0L < (*l_253)) == func_49(((*l_195) , (p_44 & (&g_80[1][0][0] == &g_80[0][0][0]))), l_256)))));
            }
        }
        for (g_75 = (-22); (g_75 <= 21); g_75 = safe_add_func_int8_t_s_s(g_75, 6))
        {
            for (p_44 = 17; (p_44 <= (-20)); p_44 = safe_sub_func_uint8_t_u_u(p_44, 1))
            {
                int **l_261 = &g_25[3][7][0];
                (*l_261) = (void*)0;
                (*l_261) = &p_44;
            }
            if (p_43)
            {
                int *l_263 = &l_104;
                (*l_167) = (l_262[0][0] == g_181[0]);
                return g_264;
            }
            else
            {
                for (p_44 = 28; (p_44 == (-23)); --p_44)
                {
                    for (l_161 = (-6); (l_161 <= (-1)); ++l_161)
                    {
                        (*l_167) = 0L;
                        (*l_167) = (safe_lshift_func_uint8_t_u_u(p_44, 5));
                    }
                }
            }
        }
    }
    else
    {
        int *l_271 = &g_75;
        return l_271;
    }
    return l_273;
}







static unsigned short func_49(int p_50, int * p_51)
{
    int ***l_78 = (void*)0;
    int ***l_79[3][1][3];
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_79[i][j][k] = (void*)0;
        }
    }
    g_80[2][0][0] = &g_25[3][7][0];
    for (g_75 = (-11); (g_75 > (-23)); g_75 = safe_sub_func_int16_t_s_s(g_75, 6))
    {
        for (p_50 = 0; (p_50 < (-22)); p_50--)
        {
            p_51 = &p_50;
        }
    }
    return g_19;
}







static unsigned func_57(short p_58)
{
    int *l_65 = &g_26;
    short l_66 = 0x0B36L;
    int l_67 = (-6L);
    int *l_74 = &g_75;
    int **l_76[6] = {&l_74,&g_25[3][7][0],&l_74,&l_74,&g_25[3][7][0],&l_74};
    int i;
    l_67 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(8L, (l_65 != (void*)0))) && (*l_65)), ((l_66 || ((((!((void*)0 != &g_26)) , (*l_65)) , l_65) != (void*)0)) ^ p_58)));
    (*l_74) = (safe_mod_func_int32_t_s_s((*l_65), (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((void*)0 != l_65), 7)), (*l_65)))));
    g_25[3][6][0] = l_65;
    return p_58;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_181[i], "g_181[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_315[i][j], "g_315[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_1267, "g_1267", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
