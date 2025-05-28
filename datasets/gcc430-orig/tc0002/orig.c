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
   const int f0;
   int f1;
};


static unsigned short g_13 = 0x2C25L;
static int g_66 = (-1L);
static const int *g_75 = &g_66;
static char g_76 = (-1L);
static long long g_77 = 1L;
static int *g_127[3] = {&g_66, &g_66, &g_66};
static int **g_126 = &g_127[0];
static int ***g_125[1] = {&g_126};
static union U0 g_163 = {-1L};
static const int g_172 = 2L;
static int ***g_204 = &g_126;
static union U0 *g_322 = &g_163;
static union U0 **g_321 = &g_322;
static short g_335 = 1L;
static short g_422[1] = {0x5175L};
static unsigned g_440 = 0xC3F7FB4BL;
static union U0 g_565 = {0x642A1327L};
static unsigned g_691[9] = {2UL, 4294967290UL, 2UL, 4294967290UL, 2UL, 4294967290UL, 2UL, 4294967290UL, 2UL};
static const int **g_719 = &g_75;
static const long long g_816[7] = {0x93A3AB1355EA6066LL, 0x35BC5F33692F8584LL, 0x93A3AB1355EA6066LL, 0x35BC5F33692F8584LL, 0x93A3AB1355EA6066LL, 0x35BC5F33692F8584LL, 0x93A3AB1355EA6066LL};



static unsigned short func_1(void);
static int func_2(unsigned short p_3, short p_4, int p_5);
static unsigned func_15(const unsigned p_16);
static unsigned func_17(union U0 p_18, unsigned p_19, int p_20, int p_21);
static char func_30(long long p_31, const char p_32, char p_33, char p_34);
static char func_38(unsigned long long p_39, long long p_40, unsigned p_41, const int p_42);
static unsigned long long func_43(long long p_44, unsigned long long p_45, long long p_46, short p_47);
static char func_58(const unsigned p_59, union U0 p_60, unsigned char p_61, unsigned long long p_62);
static const char func_63(int p_64);
static int func_68(int * p_69, short p_70, unsigned char p_71, const unsigned p_72);
static unsigned short func_1(void)
{
    unsigned long long l_12 = 6UL;
    union U0 l_22[4][9][3] = {{{{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}}, {{{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}}, {{{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}}, {{{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}, {{0x83303773L}, {-7L}, {-8L}}}};
    int *l_938 = &g_163.f1;
    unsigned short l_948 = 0xCC75L;
    int *l_975[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_975[i] = (void*)0;
    if (func_2((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s((l_12 || g_13), (safe_unary_minus_func_uint32_t_u(func_15(func_17(l_22[3][4][0], (safe_lshift_func_int8_t_s_u(g_13, 1)), g_13, g_13)))))) & (safe_div_func_uint32_t_u_u(g_691[4], l_12))), 3)), g_816[6])), l_22[3][4][0].f0, l_22[3][4][0].f1))
    {
        unsigned short l_933 = 2UL;
        int *l_934 = &g_163.f1;
        union U0 l_967 = {0L};
        for (g_76 = 0; (g_76 >= (-27)); --g_76)
        {
            unsigned long long l_932[4][10][2] = {{{3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}}, {{3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}}, {{3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}}, {{3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}, {3UL, 18446744073709551615UL}}};
            const int *l_977 = (void*)0;
            int i, j, k;
            if (l_932[3][5][0])
            {
                int *l_939 = &g_163.f1;
                int *l_970 = &g_565.f1;
                if (l_933)
                {
                    int *l_935 = &g_66;
                    l_935 = l_934;
                    (*l_938) = (((safe_sub_func_uint32_t_u_u(((l_938 != l_939) < ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(g_691[4], (*l_934))), 1UL)), g_422[0])), l_948)) >= (*l_938))), (0xB0B79265A2F52E5CLL <= g_440))) != g_422[0]) != 0xC343L);
                    return (*l_935);
                }
                else
                {
                    unsigned l_958 = 1UL;
                    char l_968[10][4][2] = {{{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}, {{0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}, {0x31L, 8L}}};
                    int *l_969 = &l_967.f1;
                    int i, j, k;
                    for (g_565.f1 = 0; (g_565.f1 == 25); ++g_565.f1)
                    {
                        short l_959 = 1L;
                        l_968[4][3][0] ^= (safe_rshift_func_int8_t_s_u(g_440, func_58((safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u(l_932[2][3][0], ((l_958 > ((l_959 >= (safe_div_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(1L, 1)), (safe_add_func_uint32_t_u_u((func_38(l_932[3][5][0], ((l_959 ^ g_691[0]) > func_38((safe_unary_minus_func_uint64_t_u(2UL)), g_691[0], g_565.f0, (*l_934))), l_959, l_959) >= 4294967289UL), 0xBE005E7CL))))) == 0x84F6C600L)) <= (-1L)))))) ^ (*l_939)) <= 0xBBL), 1)), l_967, g_13, g_13)));
                        if ((*l_938))
                            break;
                        (*g_126) = l_969;
                        if ((*l_938))
                            break;
                    }
                    (*g_126) = l_970;
                    for (l_12 = (-1); (l_12 <= 5); l_12 = safe_add_func_int8_t_s_s(l_12, 3))
                    {
                        const int *l_973[8] = {&g_66, &g_163.f1, &g_66, &g_163.f1, &g_66, &g_163.f1, &g_66, &g_163.f1};
                        const int **l_974 = &l_973[4];
                        int *l_976[3][7] = {{&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}};
                        int i, j;
                        (*l_974) = l_973[4];
                        (*l_969) ^= (g_816[6] > ((l_975[0] == l_976[0][1]) && 18446744073709551606UL));
                        (*l_974) = l_977;
                    }
                    (*l_969) = (*l_934);
                }
                if ((*l_939))
                    break;
                (**g_204) = l_975[1];
                for (g_565.f1 = 0; (g_565.f1 > (-23)); --g_565.f1)
                {
                    return (*l_934);
                }
            }
            else
            {
                int l_980[3][5] = {{1L, 0x03A7B38DL, (-9L), 0x03A7B38DL, 1L}, {1L, 0x03A7B38DL, (-9L), 0x03A7B38DL, 1L}, {1L, 0x03A7B38DL, (-9L), 0x03A7B38DL, 1L}};
                int i, j;
                (*l_938) = l_980[1][3];
            }
        }
        l_967.f1 = (*l_934);
    }
    else
    {
        union U0 *l_983 = &g_565;
        const int l_984 = 0x8D6A4A1BL;
        unsigned l_985 = 18446744073709551615UL;
        l_985 &= (func_38((safe_rshift_func_int8_t_s_u((&g_163 == l_983), 2)), g_76, func_58((&g_322 == &l_983), g_565, func_38(g_66, g_422[0], g_77, l_984), (*l_938)), l_984) > g_335);
    }
    return g_816[1];
}







static int func_2(unsigned short p_3, short p_4, int p_5)
{
    long long l_817 = 0x466310BEFDDA931ELL;
    int *l_818 = (void*)0;
    int l_819 = 0x61B78E7FL;
    union U0 *l_820[9][4] = {{&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}, {&g_163, &g_163, &g_565, &g_565}};
    int l_821[6][9][4] = {{{0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}}, {{0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}}, {{0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}}, {{0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}}, {{0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}}, {{0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}, {0xDC456D17L, (-10L), 0xD767EEACL, 0xC45F7A22L}}};
    union U0 **l_822 = (void*)0;
    unsigned char l_902 = 0x34L;
    short l_905 = 0L;
    char l_917 = 0L;
    int i, j, k;
    l_821[3][7][3] &= (l_817 == (((((g_172 > (l_818 == l_818)) > g_163.f0) & ((((void*)0 != &g_322) & (l_819 | (l_820[0][2] == l_820[7][1]))) & g_691[4])) < 18446744073709551615UL) && l_817));
    l_822 = &g_322;
    for (l_819 = 15; (l_819 >= (-12)); --l_819)
    {
        int *l_825 = &g_565.f1;
        union U0 *l_826 = &g_163;
        (*l_825) = 0x1BCAE5ACL;
        (*l_825) ^= (l_826 != l_826);
    }
    for (g_335 = 0; (g_335 <= 3); g_335 += 1)
    {
        int ** const l_833[7] = {&g_127[1], &g_127[1], &g_127[1], &g_127[1], &g_127[1], &g_127[1], &g_127[1]};
        unsigned char l_836 = 0x23L;
        union U0 *l_845 = &g_565;
        union U0 *l_846 = (void*)0;
        unsigned short l_871 = 1UL;
        const int l_879 = 0x8A421AD9L;
        unsigned l_915 = 0x6327228EL;
        int i;
        if ((safe_add_func_uint8_t_u_u(((p_4 | (safe_div_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((0x4135E67201704CB6LL >= (&l_819 == (void*)0)) >= (l_833[6] != (*g_204))), ((+g_335) || (safe_mod_func_uint8_t_u_u((~((&l_833[0] == (void*)0) ^ g_691[5])), 0x9DL))))) || p_3), 4294967288UL))) > 0x57L), l_836)))
        {
            int ***l_863[9][7] = {{&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}, {&g_126, &g_126, &g_126, &g_126, &g_126, &g_126, &g_126}};
            int i, j;
            if (p_4)
            {
                int l_844 = 0L;
                if ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(((&g_163 == l_820[1][0]) ^ (((func_38((safe_sub_func_uint16_t_u_u(l_844, (g_422[0] < ((l_845 != l_846) ^ g_77)))), (safe_add_func_int32_t_s_s(p_5, 4294967295UL)), g_172, p_3) & g_163.f0) <= (-8L)) & 0UL)))), 3)))
                {
                    l_821[3][7][3] = p_3;
                }
                else
                {
                    int *l_849 = &g_163.f1;
                    for (g_77 = 3; (g_77 >= 0); g_77 -= 1)
                    {
                        const short l_860[6][5][4] = {{{0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}}, {{0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}}, {{0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}}, {{0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}}, {{0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}}, {{0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}, {0xF0F5L, 0xF0F5L, 1L, 1L}}};
                        int i, j, k;
                        l_849 = l_849;
                        (*l_849) = (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(0x0BL, (safe_add_func_uint16_t_u_u(((l_860[1][0][3] && (safe_lshift_func_int16_t_s_u((l_863[2][5] == &g_126), (0UL && (((~p_3) || 0x4859FEA2L) <= (safe_rshift_func_uint8_t_u_s((l_820[g_77][g_335] != &g_565), l_844))))))) ^ g_77), g_335)))) < p_3) < 2L), g_335)) < p_3), g_816[1])), g_66));
                    }
                    return (*l_849);
                }
            }
            else
            {
                const long long l_870[6][10][4] = {{{0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}}, {{0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}}, {{0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}}, {{0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}}, {{0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}}, {{0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}, {0x513528442B177FB3LL, 0x74D7175B2CDD0E5CLL, (-9L), (-1L)}}};
                int l_872 = (-5L);
                int i, j, k;
                for (p_3 = 0; (p_3 <= 2); p_3 += 1)
                {
                    unsigned l_866 = 18446744073709551610UL;
                    int *l_869 = &g_163.f1;
                    l_872 &= ((func_30(p_3, (((g_816[6] | l_866) > (safe_rshift_func_int16_t_s_s(g_422[0], p_5))) != func_38(((((func_68(l_869, g_163.f1, p_4, l_870[5][5][3]) < 0x1B2C9BABL) ^ l_870[5][3][0]) == p_3) <= g_816[6]), p_5, g_691[4], p_5)), g_440, g_816[6]) == (-6L)) ^ l_871);
                    (*l_869) |= p_3;
                    for (p_4 = 6; (p_4 >= 0); p_4 -= 1)
                    {
                        unsigned l_875 = 0x37D8A6C3L;
                        l_875 ^= (safe_sub_func_uint16_t_u_u(0UL, (+(l_870[1][9][2] || p_3))));
                        if ((*l_869))
                            break;
                    }
                    for (p_5 = 3; (p_5 >= 0); p_5 -= 1)
                    {
                        int i;
                        (*l_869) = p_5;
                        (*l_869) &= 0xA5FDA471L;
                    }
                }
            }
        }
        else
        {
            int *l_883 = &l_819;
            unsigned char l_908 = 0x17L;
            if (p_5)
            {
                unsigned l_876[9][1][5] = {{{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}, {{4294967295UL, 0x5C0F8874L, 4294967295UL, 4294967295UL, 0xB3EC3E32L}}};
                int i, j, k;
                l_876[0][0][4] = (p_4 ^ p_4);
            }
            else
            {
                union U0 l_880[7][5][7] = {{{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}, {{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}, {{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}, {{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}, {{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}, {{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}, {{{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}, {{0L}, {0L}, {1L}, {-8L}, {0x13A6FD50L}, {1L}, {0xE6C5240EL}}}};
                int **l_884 = &g_127[0];
                int i, j, k;
                if (p_3)
                {
                    int *l_877[7][3] = {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}};
                    int i, j;
                    (**g_204) = l_877[1][1];
                    for (g_77 = 3; (g_77 >= 0); g_77 -= 1)
                    {
                        return p_3;
                    }
                }
                else
                {
                    long long l_878 = (-9L);
                    l_878 |= (-1L);
                    l_819 = func_58(l_879, l_880[0][1][6], (((safe_sub_func_uint16_t_u_u(l_880[0][1][6].f0, (&l_819 != l_883))) >= ((void*)0 != l_884)) == (safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((-1L), 8UL)), g_335))), g_77);
                    (*l_883) &= ((-6L) <= l_878);
                }
            }
            if (p_5)
            {
                const int *l_889 = &g_66;
                union U0 l_906[4][10] = {{{0x4780C073L}, {0xD739A608L}, {0x46995673L}, {0L}, {1L}, {0L}, {0xFE1AA865L}, {8L}, {0x9AB8A353L}, {1L}}, {{0x4780C073L}, {0xD739A608L}, {0x46995673L}, {0L}, {1L}, {0L}, {0xFE1AA865L}, {8L}, {0x9AB8A353L}, {1L}}, {{0x4780C073L}, {0xD739A608L}, {0x46995673L}, {0L}, {1L}, {0L}, {0xFE1AA865L}, {8L}, {0x9AB8A353L}, {1L}}, {{0x4780C073L}, {0xD739A608L}, {0x46995673L}, {0L}, {1L}, {0L}, {0xFE1AA865L}, {8L}, {0x9AB8A353L}, {1L}}};
                char l_907 = (-1L);
                int i, j;
                if (func_63((~g_172)))
                {
                    const int **l_890 = &g_75;
                    (*l_890) = l_889;
                    if (((safe_add_func_uint8_t_u_u(((p_3 == ((**l_890) ^ 65535UL)) | func_38((*l_883), (safe_mod_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u(g_440, p_3)) ^ (safe_lshift_func_uint8_t_u_u(p_5, 1))), ((g_422[0] >= (**l_890)) & p_5))), p_3, p_4)), (*l_889))) > 0xB28A2229L))
                    {
                        (*l_890) = (*l_890);
                    }
                    else
                    {
                        (*l_883) = (0xA8L < (!(-6L)));
                    }
                    return p_3;
                }
                else
                {
                    unsigned short l_901 = 0xE1F9L;
                    int **l_904 = &l_883;
                    for (l_871 = 0; (l_871 <= 3); l_871 += 1)
                    {
                        int **l_903[6] = {&g_127[2], &g_127[2], &g_127[0], &g_127[2], &g_127[2], &g_127[0]};
                        int i;
                        (*l_883) = l_901;
                        (**g_204) = &l_821[5][3][3];
                        (*l_883) |= l_902;
                        (*l_883) = (l_903[3] != l_904);
                    }
                    l_905 |= p_5;
                    (*l_883) ^= (p_3 && func_58(g_816[1], l_906[0][4], p_5, l_907));
                    return p_4;
                }
            }
            else
            {
                if (l_908)
                    break;
                (*l_883) = 1L;
                for (p_3 = 0; (p_3 <= 3); p_3 += 1)
                {
                    return p_5;
                }
                return p_4;
            }
        }
        for (p_5 = 3; (p_5 >= 0); p_5 -= 1)
        {
            unsigned l_916[2][3][7] = {{{0x947FC749L, 1UL, 0xAD926821L, 1UL, 0x947FC749L, 0x3A8D80A3L, 0x947FC749L}, {0x947FC749L, 1UL, 0xAD926821L, 1UL, 0x947FC749L, 0x3A8D80A3L, 0x947FC749L}, {0x947FC749L, 1UL, 0xAD926821L, 1UL, 0x947FC749L, 0x3A8D80A3L, 0x947FC749L}}, {{0x947FC749L, 1UL, 0xAD926821L, 1UL, 0x947FC749L, 0x3A8D80A3L, 0x947FC749L}, {0x947FC749L, 1UL, 0xAD926821L, 1UL, 0x947FC749L, 0x3A8D80A3L, 0x947FC749L}, {0x947FC749L, 1UL, 0xAD926821L, 1UL, 0x947FC749L, 0x3A8D80A3L, 0x947FC749L}}};
            int i, j, k;
            l_917 ^= (safe_lshift_func_int8_t_s_u((-10L), ((safe_div_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_4, (l_915 && (((l_916[1][0][2] & (g_76 && p_4)) & g_440) != g_691[8])))), p_5)) != p_5)));
            (**g_204) = (void*)0;
        }
        for (l_915 = 0; (l_915 <= 3); l_915 += 1)
        {
            unsigned char l_920[2][4] = {{0UL, 1UL, 0UL, 1UL}, {0UL, 1UL, 0UL, 1UL}};
            int *l_929 = &g_66;
            int i, j;
            (*l_929) = (g_691[4] && (safe_lshift_func_int8_t_s_u((l_920[0][2] < ((+(p_5 || l_920[0][2])) && (safe_rshift_func_uint16_t_u_u(p_3, 1)))), (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(255UL, (safe_add_func_uint8_t_u_u(g_76, (!(0x6188L <= (func_68(l_929, p_3, g_172, g_422[0]) <= 0xE18BL))))))), 0x3E725975L)))));
        }
    }
    return p_5;
}







static unsigned func_15(const unsigned p_16)
{
    union U0 **l_471[10];
    int l_480[2];
    int * const *l_483 = &g_127[2];
    long long l_525[3];
    const int *l_636 = &g_66;
    union U0 l_768[7] = {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}};
    union U0 l_776 = {0xF245A0E3L};
    unsigned l_799 = 18446744073709551615UL;
    int *l_812 = (void*)0;
    int *l_813 = &l_480[1];
    int i;
    for (i = 0; i < 10; i++)
        l_471[i] = &g_322;
    for (i = 0; i < 2; i++)
        l_480[i] = 9L;
    for (i = 0; i < 3; i++)
        l_525[i] = 1L;
    for (g_76 = 0; (g_76 <= 2); g_76 += 1)
    {
        long long l_467 = 1L;
        int ** const l_470 = (void*)0;
        union U0 **l_472 = &g_322;
        int *l_473 = &g_66;
        int **l_498 = &g_127[0];
        const unsigned l_510 = 0x71D121B4L;
        union U0 l_542 = {0x244D53A7L};
        unsigned l_628[4][7][6] = {{{0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}}, {{0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}}, {{0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}}, {{0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}, {0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL, 0x4F33619AL, 4294967295UL}}};
        union U0 **l_647 = &g_322;
        unsigned l_681 = 0x6BFA3CB3L;
        int i, j, k;
        for (g_77 = 0; (g_77 <= 2); g_77 += 1)
        {
            return l_467;
        }
        (*l_473) = (safe_sub_func_int16_t_s_s(((l_467 <= p_16) | ((l_470 != l_470) ^ (l_471[4] != l_472))), 0L));
    }
    if (p_16)
    {
        int *l_684 = (void*)0;
        char l_695 = 0xB8L;
        int *l_696 = &l_480[1];
        for (g_440 = 29; (g_440 <= 28); g_440 = safe_sub_func_int32_t_s_s(g_440, 9))
        {
            int l_692 = 1L;
            union U0 **l_693 = &g_322;
            int *l_694 = &g_565.f1;
            (*l_694) = func_68(l_684, (safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(g_422[0], g_77)), 6)), (safe_lshift_func_uint8_t_u_s(func_38(g_565.f0, func_63(g_691[4]), (func_38(l_692, ((&g_322 == l_693) < g_172), g_77, p_16) != 0xD9FA71C5L), p_16), g_13)), p_16);
        }
        (*l_696) = l_695;
        return g_565.f0;
    }
    else
    {
        const int **l_708 = &g_75;
        const int ***l_707[2];
        int l_770 = (-1L);
        unsigned long long l_773 = 0xF1B9B9F177F5BF3CLL;
        int l_774[4][4][9] = {{{0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}}, {{0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}}, {{0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}}, {{0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}, {0xD4B8D9FDL, (-7L), 0x954B57CFL, 8L, (-1L), 1L, 0x381688F9L, 1L, 0xB97D1043L}}};
        int *l_809 = (void*)0;
        int *l_810[6];
        char l_811 = 0xADL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_707[i] = &l_708;
        for (i = 0; i < 6; i++)
            l_810[i] = &l_768[0].f1;
        if (p_16)
        {
            int * const l_697 = (void*)0;
            int *l_698 = &l_480[1];
            union U0 *l_699 = &g_565;
            char l_716 = 0x5DL;
            const long long l_725 = 1L;
            int l_732 = (-6L);
            (*l_698) = (l_697 != l_697);
            l_480[1] = ((func_58((l_699 == (void*)0), (*l_699), g_77, (!2UL)) >= g_163.f1) == (safe_sub_func_uint8_t_u_u(p_16, (func_38((safe_sub_func_int8_t_s_s(p_16, 1UL)), g_691[4], g_422[0], (*l_698)) < p_16))));
            (*l_698) &= (-1L);
            if (p_16)
            {
                int *l_706[6][1] = {{&g_66}, {&g_66}, {&g_66}, {&g_66}, {&g_66}, {&g_66}};
                const unsigned short l_755[8] = {0x02FAL, 0x02FAL, 0x02FAL, 0x02FAL, 0x02FAL, 0x02FAL, 0x02FAL, 0x02FAL};
                union U0 *l_760 = &g_565;
                int i, j;
                for (g_440 = (-21); (g_440 >= 10); g_440 = safe_add_func_uint16_t_u_u(g_440, 1))
                {
                    unsigned long long l_713 = 0xD0FAD6BA3565D66BLL;
                    int *l_720 = &l_480[1];
                    (*l_698) &= 0x370DAEDAL;
                    for (g_565.f1 = 0; (g_565.f1 <= 2); g_565.f1 += 1)
                    {
                        int i;
                        (*l_698) ^= l_525[g_565.f1];
                        (*g_126) = l_706[4][0];
                        (*l_698) &= p_16;
                    }
                    for (l_716 = (-13); (l_716 < 1); l_716++)
                    {
                        (*l_698) = p_16;
                    }
                    for (l_716 = 0; (l_716 <= 0); l_716 += 1)
                    {
                        int i;
                        g_719 = &l_636;
                        (**g_204) = l_720;
                        if (g_422[l_716])
                            continue;
                        (*l_698) = (((g_422[l_716] <= (&g_126 == (void*)0)) || (safe_lshift_func_uint8_t_u_s((p_16 >= (p_16 != 0x162A220369FD8E7CLL)), (safe_lshift_func_uint16_t_u_u(((l_698 != (void*)0) && (((*g_719) == (void*)0) >= p_16)), p_16))))) && g_172);
                    }
                }
                l_698 = l_706[1][0];
                if (((p_16 && 8L) < l_725))
                {
                    int l_726 = 0x28773A42L;
                    union U0 **l_737 = &l_699;
                    if (l_726)
                    {
                        long long l_729 = (-6L);
                        (*l_698) |= p_16;
                        (*l_698) = ((+(p_16 <= 0UL)) != (g_335 | (safe_mod_func_int8_t_s_s(func_63(g_440), (~((func_38(p_16, ((l_729 & (&l_708 == (void*)0)) && 0x46F9L), l_726, p_16) | g_440) & p_16))))));
                        l_726 = ((safe_lshift_func_uint16_t_u_s(0xFA18L, 11)) == (l_732 <= (safe_rshift_func_uint8_t_u_s(g_422[0], (safe_add_func_int16_t_s_s(((&g_322 != l_737) || (g_691[4] || (((safe_rshift_func_uint16_t_u_s((&g_322 == (void*)0), (safe_mod_func_uint8_t_u_u(((*l_708) == (*l_708)), l_729)))) > g_172) | 0xFAL))), l_729))))));
                    }
                    else
                    {
                        int * const l_742 = &g_66;
                        (*l_742) = (l_706[2][0] != l_742);
                        (**g_204) = l_698;
                        (*l_698) = ((void*)0 != (*g_204));
                    }
                    (*l_698) = (safe_add_func_uint16_t_u_u((l_726 < p_16), (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(g_77, ((&l_706[4][0] == &l_706[4][0]) | p_16))), func_38(((safe_mod_func_int16_t_s_s(0x359DL, (p_16 ^ g_163.f1))) | 1L), p_16, g_691[4], l_726)))));
                    if ((safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(((0xA45ADFE4B127EE5BLL || (9UL & 0x17EDL)) & (!(8UL | l_755[7]))), g_163.f1)), 0)))
                    {
                        int **l_756 = &l_706[4][0];
                        (*l_698) = l_726;
                        l_726 &= ((void*)0 == l_756);
                    }
                    else
                    {
                        int *l_757 = (void*)0;
                        l_757 = l_706[4][0];
                        l_726 |= 0L;
                        l_726 = ((g_422[0] != p_16) >= p_16);
                    }
                    (**g_204) = &l_480[1];
                }
                else
                {
                    for (g_77 = 0; (g_77 == (-29)); g_77 = safe_sub_func_int32_t_s_s(g_77, 1))
                    {
                        long long l_763 = 3L;
                        (*g_321) = l_760;
                        l_763 |= (safe_sub_func_int32_t_s_s(((*g_321) != (*g_321)), (1L | ((*l_698) < p_16))));
                        return l_763;
                    }
                    l_480[1] ^= ((safe_div_func_int8_t_s_s(((p_16 ^ g_565.f1) ^ ((safe_div_func_int16_t_s_s((((func_58(p_16, l_768[0], (!(((*g_719) == (void*)0) < (&g_719 != (void*)0))), p_16) < g_163.f0) && p_16) < p_16), 1UL)) || g_422[0])), p_16)) != 0x2FL);
                }
            }
            else
            {
                unsigned l_769 = 4294967295UL;
                int *l_771 = &g_66;
                int l_775 = 0x0B793118L;
                (*l_698) ^= l_769;
                l_770 &= p_16;
                for (l_770 = 0; (l_770 <= 9); l_770 += 1)
                {
                    long long l_772[10] = {0x5A2ACE3E702DC33FLL, 0L, 0x479C7B07A6A5EC76LL, 0x479C7B07A6A5EC76LL, 0L, 0x5A2ACE3E702DC33FLL, 0L, 0x479C7B07A6A5EC76LL, 0x479C7B07A6A5EC76LL, 0L};
                    int * const **l_777 = &l_483;
                    int i;
                    for (g_335 = 0; (g_335 <= 8); g_335 += 1)
                    {
                        (*l_708) = (void*)0;
                    }
                    l_775 |= func_30(func_58(func_68(l_771, ((p_16 && p_16) | (l_772[8] < g_66)), p_16, ((~(func_68(l_771, l_773, g_691[4], (*l_698)) || l_774[1][2][2])) > 0xBF54051E635DCD58LL)), (*l_699), (*l_771), l_772[8]), g_335, g_13, g_163.f0);
                    (*l_771) = (p_16 > (g_422[0] < p_16));
                    for (l_775 = 8; (l_775 >= 3); l_775 -= 1)
                    {
                        int i;
                        (*l_771) ^= g_691[l_775];
                    }
                }
                (*l_708) = l_698;
            }
        }
        else
        {
            int **l_780 = &g_127[0];
            int l_785 = (-3L);
            int l_800 = (-9L);
            l_770 |= (safe_div_func_int16_t_s_s((((void*)0 != l_780) == ((safe_rshift_func_int16_t_s_u(((65534UL >= g_172) != ((p_16 | ((*l_636) < (safe_lshift_func_uint16_t_u_u((p_16 == g_66), (func_38(((p_16 >= p_16) & l_785), g_77, p_16, p_16) && g_440))))) ^ g_77)), g_163.f0)) < 1L)), 3UL));
            for (l_785 = (-11); (l_785 == 12); l_785++)
            {
                unsigned long long l_790[7] = {18446744073709551606UL, 2UL, 18446744073709551606UL, 2UL, 18446744073709551606UL, 2UL, 18446744073709551606UL};
                int *l_791[3];
                int *l_808 = &l_480[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_791[i] = &g_66;
                l_770 = (((void*)0 != &g_322) < ((safe_rshift_func_uint16_t_u_u((~(l_790[4] > g_691[7])), 12)) <= p_16));
                if (((p_16 & g_163.f0) >= (safe_lshift_func_uint8_t_u_u(253UL, (safe_div_func_int32_t_s_s(p_16, func_68(&l_480[1], g_172, (1L == g_440), p_16)))))))
                {
                    for (g_77 = (-5); (g_77 >= (-12)); g_77 = safe_sub_func_int16_t_s_s(g_77, 2))
                    {
                        short l_798 = 0x654CL;
                        int l_801 = 1L;
                        l_770 = l_798;
                        l_800 |= (1L != l_799);
                        l_801 &= p_16;
                        l_770 &= ((safe_add_func_int8_t_s_s(((p_16 & (p_16 > l_801)) ^ p_16), (g_422[0] < func_63(l_801)))) != l_798);
                    }
                    l_770 |= (safe_add_func_int8_t_s_s(p_16, (safe_div_func_int32_t_s_s(p_16, g_76))));
                    l_480[1] = func_63(p_16);
                }
                else
                {
                    (*g_719) = l_808;
                }
                (*l_808) = p_16;
            }
            (*l_708) = &l_785;
        }
        l_811 = (*l_636);
        (**g_204) = &l_480[1];
    }
    (*l_813) ^= p_16;
    return g_422[0];
}







static unsigned func_17(union U0 p_18, unsigned p_19, int p_20, int p_21)
{
    unsigned char l_37[10][5][3] = {{{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}, {{0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}, {0x6FL, 0x07L, 0x6FL}}};
    long long l_446 = 1L;
    const unsigned l_447[9] = {0xAAF6DE81L, 0xAAF6DE81L, 3UL, 0xAAF6DE81L, 0xAAF6DE81L, 3UL, 0xAAF6DE81L, 0xAAF6DE81L, 3UL};
    int l_452 = (-1L);
    union U0 ** const l_459 = &g_322;
    int *l_466 = &l_452;
    int i, j, k;
    p_18.f1 = (safe_rshift_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((func_30((safe_add_func_int8_t_s_s(l_37[7][1][0], func_38(func_43(((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(l_37[5][3][2], (safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(func_58((0xB1L || func_63(g_13)), p_18, g_77, l_37[7][1][0]), 0xDCL)) >= l_37[7][1][0]), l_37[2][3][1])), g_163.f0)))), p_18.f1)) > p_20), p_18.f0, g_13, p_21), l_37[7][1][0], g_13, p_21))), g_172, g_172, g_77) != p_20))), 4294967295UL)) && l_446) ^ 0x1AL), 4));
    l_452 ^= l_446;
    (*l_466) ^= (safe_rshift_func_uint16_t_u_s((p_19 <= ((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s((l_459 == &g_322), ((p_19 && (safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(func_63((p_19 ^ g_77)), p_20)) && (safe_lshift_func_int16_t_s_u((l_447[1] ^ (-6L)), l_447[4]))) < p_19), l_447[1]))) && 1L))), 0L)) >= l_446)), p_21));
    return p_18.f0;
}







static char func_30(long long p_31, const char p_32, char p_33, char p_34)
{
    unsigned l_432 = 18446744073709551607UL;
    for (g_76 = 0; (g_76 <= 0); g_76 += 1)
    {
        unsigned char l_430[2];
        int *l_433 = &g_66;
        int i;
        for (i = 0; i < 2; i++)
            l_430[i] = 253UL;
        for (g_163.f1 = 0; (g_163.f1 >= 0); g_163.f1 -= 1)
        {
            int ***l_428 = &g_126;
            int *l_429[10];
            union U0 *l_431 = &g_163;
            int i;
            for (i = 0; i < 10; i++)
                l_429[i] = &g_66;
            l_430[1] ^= ((void*)0 == l_428);
            (*g_321) = l_431;
        }
        (*l_433) = l_432;
        for (p_33 = 0; (p_33 <= 0); p_33 += 1)
        {
            unsigned long long l_443[8][3] = {{0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}, {0x5C9488A89E097414LL, 0UL, 0x5C9488A89E097414LL}};
            const int *l_444 = &g_66;
            const int **l_445 = &l_444;
            int i, j;
            (*l_433) = func_68(l_433, (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_34 < (safe_rshift_func_int8_t_s_u((*l_433), (g_440 | func_38(p_34, (g_66 || (safe_add_func_uint64_t_u_u(p_34, ((*l_433) > l_443[0][1])))), g_422[0], p_32))))), 0x59L)), (*l_433))), g_422[0], p_31);
            (*l_445) = l_444;
        }
    }
    return g_440;
}







static char func_38(unsigned long long p_39, long long p_40, unsigned p_41, const int p_42)
{
    for (p_41 = 9; (p_41 == 12); p_41++)
    {
        (*g_126) = (void*)0;
    }
    return p_40;
}







static unsigned long long func_43(long long p_44, unsigned long long p_45, long long p_46, short p_47)
{
    int ** const l_242 = &g_127[0];
    int l_254 = 0xEF0DF067L;
    union U0 l_290 = {0L};
    unsigned l_297 = 0x2BA813C4L;
    unsigned short l_311 = 65530UL;
    const unsigned short l_348 = 0x82ADL;
    unsigned l_354[5][4] = {{4294967292UL, 0xBF29F10EL, 4294967292UL, 0xBF29F10EL}, {4294967292UL, 0xBF29F10EL, 4294967292UL, 0xBF29F10EL}, {4294967292UL, 0xBF29F10EL, 4294967292UL, 0xBF29F10EL}, {4294967292UL, 0xBF29F10EL, 4294967292UL, 0xBF29F10EL}, {4294967292UL, 0xBF29F10EL, 4294967292UL, 0xBF29F10EL}};
    unsigned long long l_374 = 0UL;
    const int l_402 = (-1L);
    int i, j;
    if (((void*)0 == l_242))
    {
        return p_46;
    }
    else
    {
        unsigned long long l_256 = 0x0ACF49D64FC424E7LL;
        unsigned short l_258 = 0x1C01L;
        int l_269 = 7L;
        union U0 *l_275 = &g_163;
        (*l_242) = (void*)0;
        for (g_163.f1 = 0; (g_163.f1 <= 2); g_163.f1 += 1)
        {
            unsigned l_243 = 0UL;
            int *l_246 = &g_66;
            union U0 *l_257 = (void*)0;
            for (p_45 = 0; (p_45 <= 2); p_45 += 1)
            {
                union U0 l_277 = {0x347272B2L};
                int i;
                (*l_242) = g_127[p_45];
                if (l_243)
                {
                    unsigned char l_253[6][1] = {{0xE3L}, {0xE3L}, {0xE3L}, {0xE3L}, {0xE3L}, {0xE3L}};
                    int *l_255[7] = {(void*)0, &l_254, (void*)0, &l_254, (void*)0, &l_254, (void*)0};
                    int i, j;
                    l_254 &= (((safe_sub_func_int8_t_s_s(((8L <= 0x71L) && (p_47 ^ ((void*)0 == l_246))), (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(g_13, ((l_253[3][0] == (((p_46 || (7UL && p_47)) >= (-2L)) == 0L)) == l_253[3][0]))), 14)), g_163.f1)))) > g_13) < g_76);
                    l_256 ^= (*l_246);
                    for (p_46 = 0; (p_46 <= 0); p_46 += 1)
                    {
                        int i;
                        l_258 &= func_68((*l_242), p_47, ((void*)0 == l_257), g_13);
                        l_269 = (((((((void*)0 != (*g_204)) ^ ((0L >= (safe_add_func_int64_t_s_s(p_47, (&g_127[p_45] != l_242)))) | (safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(0x5A11C1BFL, 0x6D8AFBEAL)), ((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(g_66, 0xFAL)), p_44)) && g_163.f0))))) != p_44) && 0xA3E77EADL) & p_47) > l_258);
                    }
                }
                else
                {
                    unsigned short l_270 = 65534UL;
                    int *l_271 = &l_269;
                    union U0 *l_276 = &g_163;
                    if ((p_46 || l_270))
                    {
                        int l_272 = 0x2D36866BL;
                        (*l_271) = func_68(l_271, (+0x4210L), l_272, (g_163.f1 | ((safe_lshift_func_int16_t_s_s((((l_275 == l_276) > func_58((+((*l_271) <= (((void*)0 == l_275) > p_47))), l_277, l_272, g_163.f1)) > p_44), p_44)) <= g_163.f1)));
                        return g_66;
                    }
                    else
                    {
                        return g_76;
                    }
                }
                if ((+(safe_div_func_uint32_t_u_u(((void*)0 != (*l_242)), (((l_246 != g_127[p_45]) > g_163.f1) & ((*l_246) && (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u(func_68((*l_242), p_45, (*l_246), g_76), 1)) | 0x52F2593E8A339BA4LL), p_46)), (*l_246)))))))))
                {
                    for (l_277.f1 = 0; (l_277.f1 >= 0); l_277.f1 -= 1)
                    {
                        int *l_291 = &l_254;
                        (*l_291) |= func_58((p_44 || ((g_13 > (((!((safe_rshift_func_uint8_t_u_u(g_77, g_66)) | (*l_246))) ^ (safe_add_func_uint64_t_u_u(0x32734244330DC026LL, (p_45 & ((void*)0 == g_127[p_45]))))) | p_45)) != g_66)), l_290, p_45, p_45);
                        return g_77;
                    }
                }
                else
                {
                    for (g_66 = 0; (g_66 <= 0); g_66 += 1)
                    {
                        return l_269;
                    }
                    if (p_46)
                        break;
                }
            }
        }
        (*l_242) = (*l_242);
        l_254 ^= ((void*)0 == (*l_242));
    }
    for (g_66 = 8; (g_66 != (-25)); g_66--)
    {
        int *l_294 = &l_254;
        (*g_126) = l_294;
        (*g_126) = (*l_242);
    }
    if ((((l_290.f0 ^ l_297) ^ (g_13 < ((void*)0 != &g_126))) & func_58(p_46, g_163, (l_254 || g_66), p_47)))
    {
        int l_304 = 0xAD6CBAB8L;
        int **l_314 = &g_127[2];
        const union U0 *l_320 = &g_163;
        const union U0 **l_319 = &l_320;
        l_290.f1 = (((p_46 | g_172) >= ((1UL <= 1UL) <= g_76)) > (safe_div_func_int64_t_s_s(g_163.f0, (p_45 && ((safe_sub_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u(g_172, p_45)) ^ l_304) > 65534UL), 4294967286UL)) && g_13)))));
        if ((!((((void*)0 == &g_163) != func_58((((safe_lshift_func_uint16_t_u_u(l_304, 5)) & (safe_lshift_func_int16_t_s_u(g_77, 12))) ^ (safe_mod_func_int8_t_s_s((func_58(p_44, l_290, l_311, ((safe_rshift_func_int16_t_s_u(((l_314 == (*g_204)) && p_45), 6)) >= p_45)) < (-10L)), 0xC8L))), g_163, p_47, g_13)) <= 0x4CA5DCCD833A2189LL)))
        {
            int ***l_318 = &l_314;
            int *l_323[3][7] = {{&l_254, (void*)0, &l_290.f1, (void*)0, &l_254, &g_66, &l_254}, {&l_254, (void*)0, &l_290.f1, (void*)0, &l_254, &g_66, &l_254}, {&l_254, (void*)0, &l_290.f1, (void*)0, &l_254, &g_66, &l_254}};
            int i, j;
            l_304 ^= (safe_unary_minus_func_uint64_t_u(((safe_sub_func_uint32_t_u_u(((void*)0 == l_318), ((void*)0 == l_319))) <= (g_321 == &g_322))));
            for (p_45 = (-25); (p_45 == 25); p_45++)
            {
                l_304 = (safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(255UL)), 0UL)) < (safe_add_func_int8_t_s_s(((((safe_div_func_uint8_t_u_u((g_335 & (l_314 == (*l_318))), g_13)) <= p_47) >= func_63((((*l_242) != (**l_318)) > p_45))) > p_46), 0UL))), 7));
            }
            for (g_66 = 0; (g_66 > (-10)); g_66--)
            {
                for (l_297 = (-13); (l_297 != 41); l_297++)
                {
                    (*g_126) = (*g_126);
                }
            }
        }
        else
        {
            char l_353[1][3];
            int l_355 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_353[i][j] = (-4L);
            }
            l_354[3][0] = (((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(g_163.f1, (safe_lshift_func_uint16_t_u_u(func_58(l_348, (*l_320), g_163.f1, p_47), (g_77 <= ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 == &l_314), p_44)), l_353[0][1])) < g_163.f0)))))), 6UL)) & 0x36D3L), p_47)) <= g_13) ^ 0xAE5C08FB90210760LL);
            l_355 = p_47;
        }
        if (func_58(g_163.f0, l_290, l_348, (0x69L <= g_163.f1)))
        {
            int *l_356 = &g_66;
            (**g_204) = l_356;
            (*g_321) = (*g_321);
            for (l_304 = 0; (l_304 != 20); ++l_304)
            {
                short l_371 = 1L;
                int l_376 = 0xA8701B48L;
                for (g_335 = 0; (g_335 >= 6); g_335 = safe_add_func_int64_t_s_s(g_335, 9))
                {
                    return g_163.f0;
                }
                for (g_66 = 0; (g_66 <= 25); ++g_66)
                {
                    const unsigned short l_375 = 1UL;
                    for (l_290.f1 = 0; (l_290.f1 <= 2); l_290.f1 += 1)
                    {
                        int i;
                        l_376 |= (p_46 & (safe_rshift_func_int8_t_s_s(g_172, ((safe_lshift_func_int16_t_s_s((0L && ((g_77 | ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((+(0xCA025045L ^ (l_371 != p_45))), 10)), (4294967289UL ^ (safe_sub_func_uint64_t_u_u((g_335 && l_374), l_371))))) <= 18446744073709551609UL)) || l_375)), g_335)) == l_375))));
                    }
                }
                if (p_46)
                    continue;
                (*g_321) = &l_290;
            }
            (*l_356) = 0L;
        }
        else
        {
            int l_377 = 0L;
            union U0 l_390 = {-1L};
            union U0 ** const l_405[3] = {&g_322, &g_322, &g_322};
            int i;
            if (l_377)
            {
                int l_391 = 0xC1B72A66L;
                int l_401 = 1L;
                for (l_297 = 0; (l_297 <= 3); l_297 += 1)
                {
                    unsigned l_387[6];
                    int *l_394 = &l_390.f1;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_387[i] = 0x5670C95AL;
                    for (l_254 = 0; (l_254 >= 0); l_254 -= 1)
                    {
                        int *l_382 = (void*)0;
                        int *l_383 = (void*)0;
                        int *l_384 = &l_290.f1;
                        int i;
                        (*l_384) = (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((65529UL < 65534UL) == 0xE24DE9E411ACD932LL) && 2UL), p_44)), l_377));
                        (*g_126) = (void*)0;
                        (*l_384) ^= (safe_add_func_uint8_t_u_u(l_387[1], (((((p_47 || (func_58((safe_rshift_func_int8_t_s_u(g_163.f1, (g_13 != 0x127AL))), l_390, p_44, p_46) < l_390.f0)) == g_163.f0) >= 0UL) || l_391) <= l_377)));
                    }
                    (*l_394) ^= ((safe_add_func_int16_t_s_s((g_76 == p_46), (g_77 ^ p_46))) && p_47);
                    (*l_394) = ((safe_rshift_func_int16_t_s_s(g_13, p_47)) || (0x4993E6F2L >= (g_335 && ((~(safe_add_func_uint8_t_u_u(p_45, 0x09L))) == (func_58(g_163.f1, (**l_319), g_76, p_47) >= p_45)))));
                    if (p_45)
                    {
                        int *l_403 = &l_401;
                        (*l_394) |= (0x3C5B79D9L || (p_46 >= (0UL == (p_47 > p_47))));
                        (*l_394) = ((l_394 != l_394) || ((&l_314 == &g_126) < l_401));
                        (*l_403) = ((l_402 & ((*l_242) == l_403)) | g_13);
                        (*g_321) = &l_390;
                    }
                    else
                    {
                        (*l_394) = p_44;
                        l_401 = p_47;
                    }
                    for (l_390.f1 = 0; (l_390.f1 <= 3); l_390.f1 += 1)
                    {
                        (*g_126) = (**g_204);
                        if (l_401)
                            continue;
                        (*g_126) = (**g_204);
                    }
                }
            }
            else
            {
                char l_404 = 0xFDL;
                int *l_407 = (void*)0;
                for (l_304 = 2; (l_304 >= 0); l_304 -= 1)
                {
                    union U0 **l_406[6][9][4] = {{{&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}}, {{&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}}, {{&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}}, {{&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}}, {{&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}}, {{&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}, {&g_322, &g_322, &g_322, &g_322}}};
                    int l_413[9] = {(-1L), 0xE5D797AFL, (-1L), 0xE5D797AFL, (-1L), 0xE5D797AFL, (-1L), 0xE5D797AFL, (-1L)};
                    int i, j, k;
                    l_404 ^= (0x9DF1DB105F560CEDLL != p_44);
                    for (p_47 = 0; (p_47 <= 2); p_47 += 1)
                    {
                        int i;
                        g_127[p_47] = g_127[l_304];
                    }
                    for (l_290.f1 = 2; (l_290.f1 >= 0); l_290.f1 -= 1)
                    {
                        int i;
                        g_127[l_290.f1] = g_127[l_304];
                    }
                    if (((l_405[1] == l_406[3][1][0]) ^ ((p_46 & (l_407 != (void*)0)) >= 0x5EBDA3EFL)))
                    {
                        int *l_408 = &l_377;
                        l_390.f1 &= (func_68(l_408, g_77, ((safe_sub_func_int8_t_s_s((p_44 | (safe_sub_func_int64_t_s_s(7L, 0xB845BA051EA069F6LL))), (((((*l_408) >= (-1L)) & p_44) <= g_76) || p_46))) && l_377), p_46) > l_413[3]);
                        if (p_46)
                            continue;
                    }
                    else
                    {
                        (**g_204) = &l_377;
                    }
                }
                g_422[0] &= (((p_47 < g_77) ^ (((void*)0 != (*l_319)) != (g_172 & (!(safe_sub_func_uint8_t_u_u((((-1L) ^ ((void*)0 == l_314)) || (safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u((0UL ^ g_77), 0x0ABBC545F15F8857LL)), p_44))), 0xEAL)))))) < g_163.f1);
                return g_422[0];
            }
        }
        l_304 = p_44;
    }
    else
    {
        int *l_425 = &l_290.f1;
        for (p_45 = 0; (p_45 == 53); p_45 = safe_add_func_uint32_t_u_u(p_45, 6))
        {
            l_425 = l_425;
        }
        (**g_204) = (*g_126);
        (*l_425) &= 0x7C98A9FDL;
    }
    return p_45;
}







static char func_58(const unsigned p_59, union U0 p_60, unsigned char p_61, unsigned long long p_62)
{
    int *l_78 = &g_66;
    int l_82[5] = {(-8L), 0xD2A6A8E4L, (-8L), 0xD2A6A8E4L, (-8L)};
    int ** const l_124 = &l_78;
    int ** const *l_123 = &l_124;
    union U0 *l_199 = &g_163;
    const int **l_212 = (void*)0;
    const int ***l_211 = &l_212;
    int l_234[1];
    int i;
    for (i = 0; i < 1; i++)
        l_234[i] = 0x9E4BBC02L;
    (*l_78) = (-1L);
    for (p_60.f1 = 26; (p_60.f1 > 21); --p_60.f1)
    {
        short l_81 = 0xBA5CL;
        int *l_90[10][8] = {{(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}, {(void*)0, &g_66, &g_66, &g_66, (void*)0, &g_66, &g_66, &g_66}};
        unsigned long long l_105[5][10][5] = {{{18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}}, {{18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}}, {{18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}}, {{18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}}, {{18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}, {18446744073709551615UL, 18446744073709551612UL, 18446744073709551615UL, 0x4D3BE1F678D19747LL, 0x88A1598D8379A378LL}}};
        short l_160 = (-1L);
        int *l_171[5][3][4] = {{{&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}}, {{&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}}, {{&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}}, {{&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}}, {{&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}, {&g_163.f1, &g_163.f1, &g_163.f1, &g_163.f1}}};
        int l_185 = 0x3AE5F8D8L;
        int i, j, k;
    }
    return g_66;
}







static const char func_63(int p_64)
{
    int *l_65[8][5] = {{(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}, {(void*)0, (void*)0, &g_66, (void*)0, &g_66}};
    int i, j;
    g_66 |= 3L;
    for (p_64 = 0; (p_64 <= 4); p_64 += 1)
    {
        unsigned l_67[6] = {18446744073709551615UL, 18446744073709551615UL, 0x0A7B48FEL, 18446744073709551615UL, 18446744073709551615UL, 0x0A7B48FEL};
        int i;
        for (g_66 = 0; (g_66 <= 4); g_66 += 1)
        {
            int i, j;
            l_67[3] &= ((+(p_64 || (l_65[(g_66 + 3)][g_66] == (void*)0))) || g_66);
            if (p_64)
                continue;
        }
        for (g_66 = 0; (g_66 <= 4); g_66 += 1)
        {
            return g_13;
        }
    }
    g_76 &= func_68(l_65[1][1], p_64, p_64, g_13);
    return g_66;
}







static int func_68(int * p_69, short p_70, unsigned char p_71, const unsigned p_72)
{
    const int *l_73 = (void*)0;
    const int **l_74[1][7] = {{&l_73, &l_73, (void*)0, &l_73, &l_73, (void*)0, &l_73}};
    int i, j;
    g_75 = l_73;
    return g_66;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_163.f0, "g_163.f0", print_hash_value);
    transparent_crc(g_163.f1, "g_163.f1", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_422[i], "g_422[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_440, "g_440", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_691[i], "g_691[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_816[i], "g_816[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
