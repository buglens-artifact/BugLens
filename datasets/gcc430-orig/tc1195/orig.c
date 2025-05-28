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
   int f0;
};


static unsigned short g_7 = 0xC7A0L;
static short g_71 = 0x46D9L;
static long long g_91[2] = {0xD39A040D4F663622LL, 0xD39A040D4F663622LL};
static unsigned char g_92 = 255UL;
static unsigned g_104 = 0xF729B201L;
static int g_117[4] = {(-1L), 0x5A05D9C6L, (-1L), 0x5A05D9C6L};
static union U0 g_240 = {0x215A1ACAL};
static unsigned short g_319 = 0x235AL;
static long long g_348 = 8L;
static const unsigned g_377 = 0x8319AAE0L;
static unsigned long long g_555[8][2] = {{18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}, {18446744073709551607UL, 18446744073709551607UL}};
static unsigned short g_575 = 0x8E05L;
static long long g_740 = 0xE23C64BA2EA61CA3LL;
static unsigned g_816 = 0UL;
static unsigned short g_835 = 0x2640L;
static int g_845 = 0L;
static int g_906 = (-1L);



static const union U0 func_1(void);
static const int func_2(unsigned char p_3, const int p_4, int p_5, const unsigned long long p_6);
static short func_14(int p_15);
static unsigned char func_16(unsigned p_17, unsigned long long p_18, char p_19, int p_20, unsigned short p_21);
static long long func_24(long long p_25, unsigned p_26, short p_27, unsigned p_28, union U0 p_29);
static union U0 func_44(const unsigned p_45, int p_46);
static int func_50(unsigned short p_51);
static unsigned short func_52(const short p_53, short p_54, const unsigned short p_55, long long p_56, unsigned p_57);
static short func_58(char p_59);
static char func_64(const char p_65, char p_66);
static const union U0 func_1(void)
{
    unsigned short l_40[10] = {0xF197L, 0UL, 0x44FAL, 0x44FAL, 0UL, 0xF197L, 0UL, 0x44FAL, 0x44FAL, 0UL};
    union U0 l_41 = {-5L};
    const int l_613[3] = {0L, 0L, 0L};
    int l_716 = 0xC1F802F0L;
    unsigned short l_788[6][7][1] = {{{0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}}, {{0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}}, {{0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}}, {{0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}}, {{0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}}, {{0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}, {0xE3CAL}}};
    int l_833 = 7L;
    unsigned long long l_872 = 0x99D3D350C2115225LL;
    unsigned short l_900 = 0x99F2L;
    char l_924 = 0L;
    unsigned char l_933 = 0xC7L;
    unsigned l_951 = 18446744073709551614UL;
    unsigned long long l_988[4] = {0x930DB56300813B1DLL, 1UL, 0x930DB56300813B1DLL, 1UL};
    int i, j, k;
    l_716 = ((func_2(g_7, ((((((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(0x1FC9A57BL, (safe_div_func_int16_t_s_s(func_14((g_7 <= func_16((safe_sub_func_int64_t_s_s(((((~func_24(((((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_7 && g_7), g_7)), g_7)) , (((safe_add_func_int64_t_s_s(0x442628217C7128ABLL, (safe_rshift_func_uint16_t_u_s(((((g_7 == 2UL) < l_40[1]) > g_7) < g_7), g_7)))) || 0xFC78L) ^ g_7)), 1L)) & 0x7673L) & g_7) , 0L), g_7, g_7, l_40[0], l_41)) <= l_40[2]) , l_40[1]) > g_348), g_319)), g_319, g_7, g_7, l_41.f0))), l_40[0])))), l_40[1])) , g_91[0]) == g_7) , g_117[0]) ^ g_319) != g_575), l_40[1], l_613[1]) >= l_41.f0) && g_91[1]);
    for (g_240.f0 = 17; (g_240.f0 <= (-18)); g_240.f0 = safe_sub_func_int32_t_s_s(g_240.f0, 4))
    {
        unsigned l_719 = 18446744073709551614UL;
        int l_757[8][2][9] = {{{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}, {{(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}, {(-2L), 0xF7368ADEL, 6L, 0x61982232L, (-10L), 0x5D2429BDL, 0x3AF015CFL, 0x0BB4CA8CL, 0x61A14283L}}};
        unsigned l_821 = 0x73068856L;
        char l_832 = 0x56L;
        unsigned long long l_837[5][8][6] = {{{5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}}, {{5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}}, {{5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}}, {{5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}}, {{5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}, {5UL, 0x2F9BE310FB81C839LL, 0xC6359BFDF19EDC25LL, 1UL, 0UL, 18446744073709551608UL}}};
        unsigned l_859 = 5UL;
        const unsigned char l_949 = 0UL;
        const unsigned l_987 = 18446744073709551611UL;
        int i, j, k;
        if (l_719)
        {
            short l_728[4];
            int i;
            for (i = 0; i < 4; i++)
                l_728[i] = 0xAD30L;
            l_716 = g_71;
            if (((g_319 & (-10L)) <= ((safe_mod_func_int32_t_s_s(1L, l_613[1])) ^ (safe_mul_func_int8_t_s_s(((!g_575) == (safe_add_func_int64_t_s_s((-1L), g_319))), ((func_50((+(safe_lshift_func_uint8_t_u_u(g_71, 0)))) != l_728[1]) <= g_91[0]))))))
            {
                return g_240;

                            }
            else
            {
                char l_735 = 0L;
                g_117[0] = (safe_add_func_int64_t_s_s(((((safe_add_func_int8_t_s_s((l_735 , g_71), g_7)) ^ (g_240.f0 >= ((((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((g_117[0] , (g_92 || (~(g_740 , (g_319 <= 0L))))) <= 0UL), 8)), g_91[0])) || g_555[1][0]) && g_319) == 0x42F0L))) & g_91[0]) , l_40[1]), g_348));
            }
            if (l_613[1])
                continue;
        }
        else
        {
            unsigned l_745 = 4294967287UL;
            unsigned long long l_752 = 18446744073709551614UL;
            int l_762 = 0x29F91BA7L;
            l_757[4][1][3] = (func_52(l_719, (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(l_745, (func_50((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(0xE2859C7EL, g_117[0])), ((l_719 | l_40[1]) ^ (safe_rshift_func_uint16_t_u_u(l_752, (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(1UL, (((l_40[1] ^ g_555[0][0]) & g_117[1]) >= g_117[0]))), 0xCDD9L)))))))) , l_719))), l_752)), g_555[1][1], l_719, g_92) ^ g_740);
            l_762 = (safe_mod_func_int32_t_s_s(l_752, ((l_757[4][1][3] <= (l_757[7][1][0] && (((l_745 , ((safe_mod_func_int16_t_s_s(l_719, g_7)) <= l_745)) == (((func_16(l_757[0][1][1], (l_745 , g_117[0]), l_40[1], l_719, g_117[2]) <= g_575) ^ g_319) > l_757[6][1][8])) , l_745))) | (-10L))));
            if (g_92)
                continue;
        }
        g_117[0] = 6L;
        if (((safe_add_func_uint16_t_u_u(0x8FA3L, ((safe_add_func_int8_t_s_s(g_91[0], g_92)) , l_757[4][1][3]))) ^ ((((safe_mod_func_uint32_t_u_u(0x1FCD5B2AL, l_40[7])) > (~g_555[0][0])) , (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_757[4][1][3], l_757[4][1][3])), l_757[4][1][3]))) , g_7)))
        {
            union U0 l_777 = {0x1147AAE7L};
            for (g_348 = 0; (g_348 >= (-8)); g_348--)
            {
                const unsigned short l_785 = 0x2946L;
                int l_797 = 0xC590E28FL;
                if (g_117[0])
                {
                    return g_240;

                                    }
                else
                {
                    char l_784 = 0L;
                    g_117[0] = (func_52((g_740 || (safe_div_func_int64_t_s_s((0xCE87L != 1UL), ((g_117[0] , l_777) , ((((g_104 > func_64(((func_64(((g_319 || (g_104 , (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(g_740, l_777.f0)), 2)), 1UL)))) , g_91[1]), l_777.f0) ^ l_784) >= 255UL), l_784)) == 252UL) <= g_575) ^ g_240.f0))))), l_613[1], l_785, g_575, g_117[2]) <= 0xA310E5929F899CCDLL);
                    g_117[0] = l_719;
                    for (l_777.f0 = 0; (l_777.f0 > (-28)); l_777.f0--)
                    {
                        return g_240;

                                            }
                }
                l_757[4][1][3] = (l_777.f0 >= ((l_788[1][4][0] > func_58((l_777.f0 & g_319))) > (safe_mod_func_uint64_t_u_u(g_319, g_7))));
                for (l_777.f0 = 0; (l_777.f0 == (-21)); l_777.f0 = safe_sub_func_uint64_t_u_u(l_777.f0, 5))
                {
                    char l_834 = 7L;
                    int l_836 = 1L;
                    int l_844 = 0x365F88D4L;
                    if ((((safe_sub_func_int64_t_s_s((g_555[0][0] ^ (g_348 | (safe_rshift_func_uint8_t_u_u(g_555[7][0], 6)))), (g_71 & 0UL))) != l_777.f0) <= l_40[1]))
                    {
                        int l_804 = 0xA593BA6CL;
                        l_797 = 0x7B3885B1L;
                        if (l_757[4][1][3])
                            continue;
                        g_117[2] = (g_555[6][1] != ((g_240.f0 >= l_777.f0) , ((g_348 >= l_757[4][0][5]) , (((g_117[0] || (safe_add_func_int8_t_s_s((-5L), (((safe_rshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(0x5B79L, ((l_804 ^ 0x3642D0FB3FC007C9LL) || l_804))), 6)) != g_555[6][0]) | g_555[5][0])))) >= 65529UL) || 0xCF6DBC29L))));
                        g_117[0] = g_377;
                    }
                    else
                    {
                        unsigned char l_813 = 0x35L;
                        g_117[1] = ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((1UL ^ g_555[5][0]), ((safe_rshift_func_int16_t_s_s(func_64((safe_div_func_int8_t_s_s(l_813, ((func_58(((l_40[4] , g_240) , (-10L))) , (safe_lshift_func_int16_t_s_u(((g_816 <= ((safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((0xE141E6DFL | (-6L)) , g_117[3]), 1L)) & g_240.f0) & l_40[8]), g_575)) , g_7)) , l_821), 3))) || l_716))), g_7), g_7)) | 9L))), 6)) | g_555[6][0]);
                        g_117[3] = g_816;
                        g_835 = (!(safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((~l_757[4][1][4]), ((((((safe_lshift_func_int8_t_s_s((g_240.f0 , ((safe_rshift_func_int8_t_s_s((251UL > g_740), 5)) >= g_104)), (safe_sub_func_uint16_t_u_u(func_64(g_555[4][1], l_832), (l_833 , g_575))))) == g_740) == l_834) | g_348) == g_319) | 0x79L))), 0x5E9CF1489C79F568LL)));
                    }
                    if (g_92)
                    {
                        l_716 = l_785;
                    }
                    else
                    {
                        l_836 = l_777.f0;
                        if (g_240.f0)
                            break;
                        if (l_837[3][0][4])
                            continue;
                        g_117[3] = 5L;
                    }
                    g_117[0] = (+func_64(l_777.f0, l_836));
                    for (l_834 = 5; (l_834 > 2); --l_834)
                    {
                        l_844 = (safe_sub_func_int16_t_s_s(l_832, ((safe_rshift_func_int8_t_s_u(l_785, 6)) == (~(0xA97961A7L == 0x76D6113CL)))));
                        g_845 = (-1L);
                    }
                }
                g_845 = ((9UL != ((0x60A4L >= ((safe_rshift_func_int16_t_s_u(g_117[1], (safe_unary_minus_func_uint64_t_u((((-1L) != g_816) != ((safe_mod_func_int64_t_s_s((l_785 , (safe_div_func_int8_t_s_s((0x013E77C5L & func_64((g_575 >= (safe_mod_func_int32_t_s_s((l_821 & 0xC650DE2FL), l_777.f0))), l_613[1])), 9UL))), g_555[0][0])) >= (-4L))))))) < l_777.f0)) == g_240.f0)) && l_821);
            }
        }
        else
        {
            g_845 = g_104;
            for (l_716 = (-2); (l_716 > 27); l_716 = safe_add_func_uint64_t_u_u(l_716, 1))
            {
                l_757[4][1][3] = 0L;
            }
        }
        for (g_7 = 0; (g_7 == 49); ++g_7)
        {
            unsigned short l_878[4] = {0xD076L, 1UL, 0xD076L, 1UL};
            short l_901 = 0x7860L;
            short l_920 = 0x83C3L;
            unsigned short l_948[5];
            int i;
            for (i = 0; i < 5; i++)
                l_948[i] = 0UL;
            l_859 = g_575;
            for (l_716 = (-23); (l_716 >= 29); ++l_716)
            {
                unsigned l_877 = 0x8B59585CL;
                const unsigned l_883 = 4294967295UL;
                const union U0 l_909[7] = {{3L}, {0x21E7D2FCL}, {3L}, {0x21E7D2FCL}, {3L}, {0x21E7D2FCL}, {3L}};
                unsigned l_921[5] = {0x91AF364DL, 4294967295UL, 0x91AF364DL, 4294967295UL, 0x91AF364DL};
                int l_922 = 5L;
                int l_934 = 0x01417452L;
                union U0 l_945[2] = {{0L}, {0L}};
                char l_950 = (-1L);
                int i;
                if ((~func_58((safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s(func_52((safe_mod_func_uint8_t_u_u((g_319 != (safe_mod_func_uint16_t_u_u((l_833 || (0x98L != (safe_mod_func_uint64_t_u_u(((+l_40[2]) & l_872), 0x303F84910EC29FC7LL)))), (safe_rshift_func_uint16_t_u_u(func_64(g_377, ((((((safe_div_func_uint8_t_u_u((l_41.f0 <= g_91[0]), 255UL)) ^ g_319) , 0L) && g_91[1]) != l_877) < g_91[0])), g_7))))), 5UL)), l_832, g_348, l_878[2], l_878[2]), l_40[1])), 12)))))
                {
                    int l_886 = 1L;
                    int l_887[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_887[i] = 0x71E59802L;
                    g_117[0] = l_757[4][1][3];
                    l_887[0] = (1UL & (4294967295UL == (g_845 && ((g_319 <= 252UL) | (safe_lshift_func_int16_t_s_u(((func_52(((safe_rshift_func_uint8_t_u_u(l_883, 3)) ^ (func_50((6UL != ((safe_add_func_int16_t_s_s((((l_883 <= l_833) != 0xACL) == 0xADB4B255L), 65532UL)) < (-1L)))) == l_757[4][1][3])), l_886, l_719, g_845, l_883) >= g_845) | 0x034EL), l_883))))));
                }
                else
                {
                    unsigned long long l_899[1];
                    int l_923 = 0xE48F591DL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_899[i] = 1UL;
                    for (l_41.f0 = 0; (l_41.f0 != 25); ++l_41.f0)
                    {
                        g_117[0] = g_816;
                        g_117[2] = (safe_div_func_uint32_t_u_u(4294967295UL, 0xA313519EL));
                    }
                    for (g_845 = 0; (g_845 <= 1); g_845 += 1)
                    {
                        int i, j;
                        if (g_555[(g_845 + 3)][g_845])
                            break;
                    }
                    g_117[0] = (safe_unary_minus_func_int32_t_s((g_91[0] <= ((0x663AD350L | func_52(((safe_lshift_func_uint8_t_u_u(l_878[2], 1)) != (((safe_mod_func_uint64_t_u_u(g_348, l_899[0])) >= l_900) && (((l_901 || ((safe_add_func_int16_t_s_s(l_883, ((safe_sub_func_int32_t_s_s(g_104, 3L)) , l_883))) , 1L)) ^ g_377) ^ g_7))), l_877, l_899[0], l_878[2], l_878[2])) >= l_821))));
                    l_923 = func_52(l_877, ((g_575 < (((g_906 , g_348) , (g_91[1] >= (((safe_lshift_func_uint16_t_u_u(((((l_909[2] , 0L) | ((safe_sub_func_int64_t_s_s((l_41 , (((safe_lshift_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s(l_899[0], l_899[0])), g_319)) , l_920), l_899[0])), l_899[0])) < 3L) & l_613[1])), 0xC93C3B1881BC74F7LL)) < l_899[0])) & 9UL) | 9UL), 8)) || l_877) , g_845))) != l_921[1])) < 0x2046385932B2852DLL), g_816, l_719, l_922);
                }
                l_934 = (((~l_924) , func_52((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s(0x2B97220C5DEEA1EFLL, (safe_add_func_uint8_t_u_u(func_58((g_377 != (func_58(l_877) == 7L))), ((g_845 > (safe_add_func_int64_t_s_s(l_924, (-8L)))) ^ (-3L)))))), g_835)), g_845, g_555[0][0], l_933, g_740)) >= 0xF1L);
                for (g_740 = 0; (g_740 < 12); ++g_740)
                {
                    unsigned l_952 = 9UL;
                    int l_953[3];
                    int l_954 = 0xEE0EDF8EL;
                    union U0 l_980[6][4] = {{{0x549C4AAAL}, {0x549C4AAAL}, {1L}, {-6L}}, {{0x549C4AAAL}, {0x549C4AAAL}, {1L}, {-6L}}, {{0x549C4AAAL}, {0x549C4AAAL}, {1L}, {-6L}}, {{0x549C4AAAL}, {0x549C4AAAL}, {1L}, {-6L}}, {{0x549C4AAAL}, {0x549C4AAAL}, {1L}, {-6L}}, {{0x549C4AAAL}, {0x549C4AAAL}, {1L}, {-6L}}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_953[i] = 0xBDC73E68L;
                    for (l_920 = 0; (l_920 < (-9)); l_920 = safe_sub_func_uint8_t_u_u(l_920, 4))
                    {
                        g_117[1] = (((0x087AL || g_91[0]) <= ((((safe_sub_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(0xBCL, ((l_945[1] , func_50((safe_lshift_func_int16_t_s_u(((func_16(((((l_883 <= ((g_575 , (g_555[1][0] || (((l_945[1].f0 & l_40[1]) | 4UL) >= l_948[1]))) >= l_949)) < l_950) & g_117[0]) >= l_951), g_117[0], g_835, l_832, g_91[0]) == (-1L)) & g_835), l_832)))) , l_41.f0))), 0UL)) >= 0x4BC88DB6L) ^ 0x9F2FDFDBF73C8DA5LL) , 0x978AL), l_952)) > 0UL) | l_952) != 0x2674270DL)) > 65535UL);
                    }
                    l_954 = l_953[0];
                    for (l_933 = 12; (l_933 >= 39); l_933 = safe_add_func_int32_t_s_s(l_933, 7))
                    {
                        g_117[0] = (safe_lshift_func_uint16_t_u_s(g_91[0], ((g_104 != (l_40[1] > 0UL)) == l_872)));
                        return g_240;

                                            }
                    if ((safe_div_func_uint8_t_u_u(l_859, (safe_add_func_uint32_t_u_u((0xA628L & g_555[0][0]), (l_41.f0 < ((l_948[1] , ((safe_sub_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(g_104, l_837[3][0][4])) ^ ((0x01L <= l_948[0]) != 0x7929FE78L)), 0xC4L)) <= g_555[0][0]), g_835)) && g_104)) < g_740)))))))
                    {
                        g_117[2] = 0xA8B0524DL;
                    }
                    else
                    {
                        int l_979[10][4][6] = {{{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}, {{(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}, {(-10L), 0x1E4BF9EEL, 0x0774D5C5L, 0x8FB25A73L, 5L, 4L}}};
                        int i, j, k;
                        g_117[0] = 0x0857704CL;
                        g_117[2] = (((g_845 , ((-8L) > g_91[0])) != func_50((65535UL || ((g_319 ^ (safe_lshift_func_int16_t_s_u(0xA0DAL, 4))) != ((((safe_lshift_func_int16_t_s_u(((l_945[1].f0 <= (safe_rshift_func_uint8_t_u_s(0xA6L, 7))) ^ (((safe_lshift_func_uint16_t_u_s((((safe_sub_func_uint32_t_u_u((l_719 > g_91[0]), l_979[7][1][4])) , l_980[1][2]) , g_906), 7)) <= l_883) > l_933)), 2)) && l_979[7][1][4]) >= l_953[0]) < g_104))))) & 0x98L);
                        g_845 = ((-2L) | (l_952 , func_58((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((((((((safe_mod_func_int16_t_s_s(((func_16(l_821, g_117[0], l_900, l_878[2], l_979[0][2][1]) == ((g_7 & l_952) ^ g_319)) != g_7), g_555[0][0])) , g_319) || l_948[1]) | g_845) & 1UL) || g_348) <= 0x1981L), g_240.f0)), 6)) && l_883) , g_117[1]))));
                    }
                }
            }
            g_845 = ((0L & (l_987 , g_71)) >= g_7);
            l_833 = l_948[1];
        }
    }
    g_845 = (4294967295UL & (l_988[0] & g_117[3]));
    return g_240;

    }







static const int func_2(unsigned char p_3, const int p_4, int p_5, const unsigned long long p_6)
{
    long long l_618 = 1L;
    unsigned char l_621 = 1UL;
    int l_622 = 0x8A8C131BL;
    union U0 l_642 = {0xD2658F35L};
    short l_643 = 0xE4F9L;
    short l_663 = 0x5C14L;
    long long l_713[9] = {8L, 0x093BC55241C0F733LL, 8L, 0x093BC55241C0F733LL, 8L, 0x093BC55241C0F733LL, 8L, 0x093BC55241C0F733LL, 8L};
    int i;
    l_622 = (safe_rshift_func_uint16_t_u_u(((p_3 < (safe_mul_func_int32_t_s_s(g_117[3], (l_618 == func_64((func_64(g_91[0], ((l_618 <= (g_377 >= p_4)) , ((safe_add_func_uint8_t_u_u((((l_621 , l_618) | 3L) != p_5), l_621)) , l_621))) & l_618), l_618))))) >= 0x8443824B8D63E3C3LL), l_621));
    if (l_621)
    {
        short l_625 = 1L;
        union U0 l_641 = {0L};
        int l_664 = 0xA5D2BC23L;
        l_643 = (safe_div_func_int64_t_s_s((((l_625 > ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_s((((-1L) ^ 0x28C2L) , (safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u(g_7)), func_24((((func_44(l_621, (l_618 , (safe_add_func_int32_t_s_s(func_24(((func_64((0x2AL | (((safe_add_func_uint16_t_u_u(((((((((p_3 > (p_4 != l_618)) ^ l_625) , p_3) != 1L) > g_319) <= l_625) & 0xA7L) == l_625), p_3)) < 1UL) && l_625)), p_5) | g_555[0][0]) == l_618), g_92, l_625, p_6, l_641), p_4)))) , 0xCD0AL) , 0UL) ^ 0x1CL), p_6, p_6, g_348, l_642)))), l_618)) == 0xB72CL), p_4)), 246UL)) , 250UL)) & 4294967290UL) < g_348), 18446744073709551615UL));
        l_664 = ((safe_unary_minus_func_int16_t_s((((l_618 | (safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(l_625, (safe_div_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(((l_643 >= (safe_rshift_func_uint8_t_u_u(l_641.f0, (safe_sub_func_uint8_t_u_u(g_377, (((safe_lshift_func_int8_t_s_s(g_555[3][1], 5)) , (((p_6 ^ (safe_div_func_uint32_t_u_u(p_5, l_663))) , 9UL) < 0xF12C235FL)) & 0xEBC11FA1L)))))) < p_6), 0xEFA69EEBL)), 1L)), 0xAEL)))), (-1L)))) , l_664) , 0xDBAEL))) , p_5);
        l_622 = ((safe_sub_func_uint8_t_u_u((p_5 == 0x7598L), l_618)) < (((p_3 && p_6) == (safe_rshift_func_uint16_t_u_u(g_377, 3))) != (safe_lshift_func_uint16_t_u_u(func_58(p_6), 15))));
        for (g_7 = 0; (g_7 <= 3); g_7 += 1)
        {
            const unsigned char l_677 = 3UL;
            int i;
            g_117[g_7] = (g_117[g_7] , (l_622 ^ (l_643 | 0xE9L)));
            g_117[0] = g_117[g_7];
            l_622 = (!l_664);
            for (l_664 = 1; (l_664 >= 0); l_664 -= 1)
            {
                int i, j;
                g_117[g_7] = (safe_lshift_func_int16_t_s_s(func_24(((safe_div_func_int8_t_s_s((((g_555[(g_7 + 4)][l_664] | (0xD630L < (safe_sub_func_int64_t_s_s(p_5, p_3)))) ^ l_677) , g_377), (safe_mod_func_uint8_t_u_u(func_14(p_3), (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((p_5 , l_663), g_7)) > 65526UL) , g_555[0][0]), g_575)))))) && 0x578D3498L), g_575, p_6, g_575, l_641), g_377));
                g_117[0] = 7L;
                l_622 = l_641.f0;
            }
            for (g_575 = 0; (g_575 <= 1); g_575 += 1)
            {
                int i, j;
                return g_555[(g_575 + 6)][g_575];
            }
        }
    }
    else
    {
        int l_686 = 0x8E64998EL;
        l_686 = (g_377 && func_58((~((safe_div_func_int8_t_s_s(g_104, func_64(p_3, p_4))) < p_4))));
        for (g_240.f0 = 0; (g_240.f0 <= 1); g_240.f0 += 1)
        {
            int l_687 = 0x1CA2F0FAL;
            int i;
            g_117[0] = (18446744073709551615UL < g_91[g_240.f0]);
            for (l_621 = 0; (l_621 <= 1); l_621 += 1)
            {
                int i, j;
                g_117[0] = g_555[(l_621 + 5)][g_240.f0];
                g_117[3] = g_555[(g_240.f0 + 3)][g_240.f0];
                l_687 = (-1L);
            }
            for (g_7 = 0; (g_7 <= 1); g_7 += 1)
            {
                int i, j;
                l_686 = (safe_lshift_func_uint16_t_u_s((g_555[(g_7 + 5)][g_240.f0] < ((safe_div_func_uint64_t_u_u(g_555[(g_7 + 2)][g_7], p_3)) == g_71)), 4));
            }
        }
        g_117[2] = ((g_91[0] & p_4) || l_686);
        for (g_319 = 0; (g_319 >= 36); g_319 = safe_add_func_int8_t_s_s(g_319, 3))
        {
            unsigned l_698 = 5UL;
            g_117[0] = func_64((((((safe_mod_func_uint8_t_u_u(0xC1L, g_7)) != ((0xA26364520E4127C4LL ^ l_698) || (((((g_91[1] , ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_698 & (func_24(l_698, l_686, (((safe_div_func_uint16_t_u_u(0xFCBBL, 0xCA5FL)) , 1L) != g_92), l_686, g_240) , p_4)), g_348)), 15)) , p_5)) && l_621) ^ 0xAEL) && l_621) > l_622))) > p_5) || 0x5372708CE11E874FLL) != g_7), p_6);
            g_117[0] = (l_686 && (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((g_91[0] != (0x46354FD5L > (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((0xDF9EB51FL >= func_52(((((((p_4 < (8L || ((func_16(p_5, func_50(p_4), l_686, p_3, p_5) & g_92) >= p_3))) && g_91[0]) <= l_622) < g_240.f0) ^ p_5) , g_91[0]), g_348, g_91[0], p_6, g_240.f0)), 0x9E83BED47AD74EE1LL)), g_92)))), p_6)), l_713[5])));
            if (g_377)
                continue;
            g_117[0] = (safe_div_func_uint8_t_u_u(0x4BL, p_3));
        }
    }
    return g_71;
}







static short func_14(int p_15)
{
    short l_522 = (-1L);
    int l_525 = 3L;
    long long l_550[3];
    unsigned long long l_552[9] = {18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL, 18446744073709551609UL};
    short l_598 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_550[i] = 0L;
    if ((l_522 < ((l_522 , func_58(l_522)) , ((safe_sub_func_int64_t_s_s(l_525, ((l_522 <= 0L) > p_15))) , (safe_div_func_int16_t_s_s(p_15, l_525))))))
    {
        char l_553[9] = {0x9EL, 0x20L, 0x9EL, 0x20L, 0x9EL, 0x20L, 0x9EL, 0x20L, 0x9EL};
        int l_574[10] = {1L, 0xD5853C68L, (-3L), (-3L), 0xD5853C68L, 1L, 0xD5853C68L, (-3L), (-3L), 0xD5853C68L};
        char l_576 = 0L;
        int i;
        for (g_240.f0 = 13; (g_240.f0 == 20); g_240.f0 = safe_add_func_int16_t_s_s(g_240.f0, 1))
        {
            unsigned short l_542 = 65532UL;
            int l_543 = 2L;
            long long l_556 = 0x68666F780B8A7950LL;
            unsigned l_594 = 0x40E03FC0L;
            g_117[3] = ((safe_div_func_uint16_t_u_u(p_15, func_16(l_525, g_117[0], (g_71 , (((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(func_64(p_15, g_117[2]), 0)), (g_240.f0 > ((g_348 > g_117[0]) && l_542)))), l_542)), 0x841CL)) != 0xC8082633L) != (-4L))), g_319, p_15))) == l_542);
            l_543 = 0xBB75CDF3L;
            if (l_542)
            {
                unsigned short l_551 = 65535UL;
                l_525 = ((safe_rshift_func_int8_t_s_u(p_15, p_15)) | (((((((0x05189CCAD6D7837FLL || ((safe_sub_func_int8_t_s_s(((func_58(l_550[2]) & l_551) < 0xE521L), ((g_377 < l_552[6]) <= g_377))) && l_543)) , 0x9E09767FL) , p_15) , p_15) <= l_553[3]) <= g_377) || 0L));
                if (g_377)
                    break;
                if (g_104)
                    continue;
                l_525 = g_240.f0;
            }
            else
            {
                int l_561[8];
                unsigned l_585 = 0x7467B3FCL;
                int i;
                for (i = 0; i < 8; i++)
                    l_561[i] = 0x475833DCL;
                g_117[0] = (p_15 , (p_15 >= ((~((safe_unary_minus_func_int32_t_s((p_15 != func_58(p_15)))) < g_555[0][0])) <= l_556)));
                for (g_92 = 0; (g_92 <= 60); g_92++)
                {
                    int l_597[10][5][4] = {{{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}, {{(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}, {(-8L), 0x28701616L, 1L, 0L}}};
                    int i, j, k;
                    l_543 = (safe_mod_func_uint64_t_u_u(g_91[0], ((p_15 , (l_561[6] ^ (safe_sub_func_uint16_t_u_u((((((safe_mod_func_int64_t_s_s(((g_7 >= (safe_sub_func_uint16_t_u_u((((((0x98L ^ (~(safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(l_574[6], g_71)), p_15)), p_15)))) ^ l_574[6]) < (-1L)) > g_575) | l_574[6]), p_15))) || 0x5021547878D7DA33LL), p_15)) & g_91[1]) <= p_15) == l_576) , g_91[0]), 0xD941L)))) ^ 0x5C69L)));
                    if (g_240.f0)
                        continue;
                    if (g_71)
                        continue;
                    l_598 = ((func_16(g_377, g_377, p_15, g_575, (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((l_585 >= ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u(((~((0x73L != func_16((safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((l_594 >= (+(safe_rshift_func_int8_t_s_s((-1L), g_92)))), 0x2FD9A32B621F37BALL)), p_15)), g_7, g_104, g_117[1], l_597[9][3][0])) && l_594)) != g_240.f0), l_594)), p_15)) ^ g_575)), 8)) != l_597[4][4][0]), l_597[9][3][0])) > 0xEDF7F081A318F5F9LL) , p_15), 0x21L)), g_240.f0))) < (-7L)) , g_91[0]);
                }
                for (g_348 = 0; (g_348 <= 2); g_348 = safe_add_func_uint64_t_u_u(g_348, 7))
                {
                    g_117[0] = ((((safe_unary_minus_func_uint32_t_u(((safe_div_func_int32_t_s_s(0L, 0x57DE57C9L)) == g_104))) && 2L) | (p_15 , g_240.f0)) , (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((g_377 , func_50(g_91[1])) , p_15) , 0UL), g_7)), 3)));
                    for (l_522 = (-29); (l_522 >= 11); l_522++)
                    {
                        return l_576;
                    }
                }
                g_117[0] = 2L;
            }
        }
    }
    else
    {
        const long long l_612 = 0x26D177BDA8505505LL;
        p_15 = (safe_div_func_uint64_t_u_u(l_612, p_15));
    }
    return l_550[0];
}







static unsigned char func_16(unsigned p_17, unsigned long long p_18, char p_19, int p_20, unsigned short p_21)
{
    unsigned l_507 = 18446744073709551615UL;
    int l_508 = 0L;
    const union U0 l_515[3] = {{-8L}, {-8L}, {-8L}};
    int i;
    l_507 = ((p_21 & p_18) >= (-1L));
    l_508 = func_50(p_19);
    l_508 = ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int8_t_s_s(((!(((safe_unary_minus_func_int8_t_s((g_91[0] < 0x5BAA1E77L))) != (g_71 , ((safe_rshift_func_int8_t_s_u((((((l_515[0] , (((safe_mod_func_uint64_t_u_u((l_507 >= l_507), ((l_515[0].f0 || ((l_508 & (safe_add_func_uint16_t_u_u((!((safe_rshift_func_uint8_t_u_u(g_91[0], 2)) < p_17)), g_348))) > p_19)) ^ p_18))) && 0xA7F52D36L) | l_508)) || p_17) , g_92) != 0x80E0F3BDL) , p_17), g_240.f0)) >= 0xC4C2F215B1D7AA78LL))) & g_71)) == (-9L)), 0)))) , g_117[0]);
    return l_515[0].f0;
}







static long long func_24(long long p_25, unsigned p_26, short p_27, unsigned p_28, union U0 p_29)
{
    unsigned long long l_415[3][3][5] = {{{0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}, {0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}, {0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}}, {{0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}, {0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}, {0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}}, {{0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}, {0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}, {0xEC3051B7049EE28ELL, 9UL, 0x8ACCEB7F38BA8A39LL, 9UL, 0xEC3051B7049EE28ELL}}};
    const unsigned short l_437 = 0xE75FL;
    int l_439 = (-1L);
    char l_462 = 0x7AL;
    unsigned char l_486 = 0xF2L;
    int i, j, k;
    for (p_28 = 0; (p_28 == 54); p_28 = safe_add_func_uint32_t_u_u(p_28, 4))
    {
        int l_47 = 0x9D6C8400L;
        int l_420 = 0L;
        l_420 = (func_44(g_7, l_47) , func_52(g_91[0], g_117[0], (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((l_415[1][1][0] & (l_415[1][0][3] < (6UL && (safe_div_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s(g_91[1], p_29.f0)) > g_92) , p_26), l_47))))) , p_26), g_117[0])) > l_415[1][1][0]), 5L)), l_47, g_348));
        if (func_52((l_420 , (func_64(func_50((1UL != (((safe_add_func_uint16_t_u_u((l_415[1][0][4] && (((((l_415[1][1][0] , ((l_420 , (p_27 >= ((safe_rshift_func_uint16_t_u_u(g_117[0], 2)) || (safe_add_func_uint32_t_u_u(0UL, ((safe_rshift_func_uint8_t_u_s((l_415[2][1][2] <= 0xEBA7E83D15847E23LL), 6)) >= p_29.f0)))))) | g_117[3])) >= p_26) && 0xE52A64A254CF7B1FLL) && g_117[0]) , 18446744073709551606UL)), g_71)) >= p_29.f0) ^ l_415[1][1][0]))), g_240.f0) > 246UL)), p_25, p_29.f0, p_25, p_29.f0))
        {
            int l_438[8][4] = {{(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}, {(-9L), (-9L), 0xE0B96589L, 0x34B71B37L}};
            int i, j;
            l_438[1][3] = (func_64(l_415[1][1][0], (2L != (safe_add_func_uint64_t_u_u((~((0L <= (p_27 ^ (l_415[1][0][3] <= (((((safe_add_func_int32_t_s_s(p_28, ((safe_add_func_uint8_t_u_u((func_52(((((((((((safe_sub_func_int16_t_s_s(l_437, (((g_348 , (func_58(p_25) && g_319)) < g_240.f0) , l_438[5][0]))) & p_26) >= g_7) < g_319) , l_438[5][0]) == g_7) == p_29.f0) | p_29.f0) != g_240.f0) , g_104), p_29.f0, g_240.f0, l_438[7][2], l_420) != g_377), (-1L))) && p_26))) , 0x8B5EL) , p_26) | g_319) > g_319)))) , l_439)), l_438[4][0])))) < 0UL);
            for (g_104 = (-4); (g_104 < 50); ++g_104)
            {
                g_117[0] = 1L;
                return g_240.f0;
            }
        }
        else
        {
            unsigned l_444 = 18446744073709551614UL;
            const int l_461 = 0x64B1D3F4L;
            char l_479 = 1L;
            l_420 = ((g_91[1] <= p_27) , (safe_add_func_int16_t_s_s((l_444 ^ (safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s(g_319, (+(safe_mod_func_int16_t_s_s(g_240.f0, l_415[1][0][3]))))) || g_71), g_91[1])) , ((safe_sub_func_uint8_t_u_u(p_28, g_319)) == p_29.f0)) && 0x765A4977L) | p_26), l_415[1][1][0]))), 65533UL)));
            if (((((l_415[0][0][3] | p_27) >= (6UL <= ((safe_sub_func_uint32_t_u_u(((((((p_28 < (p_25 > (((-8L) >= g_91[0]) && ((func_50((((safe_div_func_int16_t_s_s((+(((safe_add_func_uint8_t_u_u(l_444, (g_377 && l_420))) , 0x7E11L) && p_29.f0)), p_26)) >= l_461) , g_71)) , l_444) >= l_444)))) && l_47) || l_47) & p_25) , l_462) == g_7), 3UL)) , p_26))) || 18446744073709551614UL) , p_25))
            {
                l_420 = p_29.f0;
            }
            else
            {
                if (l_439)
                    break;
                l_420 = (safe_sub_func_int32_t_s_s((((((p_27 || (((safe_rshift_func_int16_t_s_s((g_91[1] ^ (p_29.f0 , (l_47 , (((safe_rshift_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s(g_117[0], (safe_lshift_func_uint8_t_u_u(p_28, 3)))), (safe_div_func_uint64_t_u_u(l_47, (safe_div_func_int16_t_s_s((l_479 && (safe_add_func_int16_t_s_s(((l_444 > p_28) < 0xB3F55CD5EA09C1CFLL), p_27))), 0xDC7EL)))))), p_29.f0)) | g_377) , 0x8FL)))), 14)) <= p_26) < g_7)) , l_420) ^ 6L) | l_420) & 0xE45CL), p_28));
            }
        }
    }
    for (p_27 = 8; (p_27 < 24); p_27++)
    {
        unsigned l_487[1][8] = {{0xB7790068L, 0UL, 0xB7790068L, 0UL, 0xB7790068L, 0UL, 0xB7790068L, 0UL}};
        int i, j;
        g_117[0] = ((safe_sub_func_int8_t_s_s((0xF1CCL | l_415[0][0][3]), g_319)) & (l_415[1][1][0] || ((l_486 , (l_487[0][2] <= l_439)) , (((((safe_unary_minus_func_uint16_t_u(0xE2D1L)) == ((safe_sub_func_uint64_t_u_u((l_439 && p_29.f0), p_29.f0)) , p_28)) , 4UL) & p_27) <= g_92))));
    }
    for (l_486 = 0; (l_486 > 23); l_486 = safe_add_func_int8_t_s_s(l_486, 9))
    {
        long long l_505 = (-1L);
        int l_506[10] = {0xE78F07ABL, 0x186256CEL, 0x6E05EC6BL, 0x6E05EC6BL, 0x186256CEL, 0xE78F07ABL, 0x186256CEL, 0x6E05EC6BL, 0x6E05EC6BL, 0x186256CEL};
        int i;
        l_506[1] = ((safe_add_func_uint16_t_u_u((8UL || ((g_92 , p_25) < (func_52((safe_div_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u(func_50(p_25), ((safe_mod_func_uint32_t_u_u(p_25, g_377)) != (g_319 < (p_26 <= l_505))))) & p_25), g_91[0])), p_27)), l_505)), p_29.f0, l_505, g_91[0], p_25) < g_348))), p_26)) >= 4294967290UL);
    }
    return p_29.f0;
}







static union U0 func_44(const unsigned p_45, int p_46)
{
    unsigned l_60 = 0xC74E2B78L;
    union U0 l_139 = {-3L};
    int l_166[5];
    const int l_204 = 0x574A8081L;
    char l_371 = 0x17L;
    unsigned long long l_392 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 5; i++)
        l_166[i] = 0xF0990B5AL;
    g_117[1] = (safe_div_func_int16_t_s_s((func_50((func_52(func_58(l_60), g_7, p_46, l_60, p_45) , (((safe_div_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_139 , (safe_mod_func_uint32_t_u_u(g_91[0], g_92))), p_45)), g_117[0])) & g_104) || l_139.f0))) && p_46), l_60));
    l_166[4] = ((safe_lshift_func_int16_t_s_s(func_58(g_117[3]), ((l_139.f0 <= l_139.f0) | g_7))) | (safe_div_func_uint16_t_u_u((!l_60), ((((((safe_sub_func_uint32_t_u_u((g_7 , ((safe_sub_func_int32_t_s_s((l_60 , (-1L)), 4294967287UL)) ^ (-1L))), g_7)) ^ g_7) || l_139.f0) ^ p_45) | g_7) , l_60))));
    for (g_71 = 17; (g_71 < 24); g_71 = safe_add_func_uint16_t_u_u(g_71, 6))
    {
        char l_186[4][3][3] = {{{0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}}, {{0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}}, {{0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}}, {{0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}, {0x6CL, 0xAEL, (-1L)}}};
        const unsigned l_190 = 0x3DD6524CL;
        int i, j, k;
        for (g_104 = 0; (g_104 <= 4); g_104 += 1)
        {
            unsigned long long l_187 = 0x62B27B7FBD4062DCLL;
            for (p_46 = 0; (p_46 <= 4); p_46 += 1)
            {
                for (l_60 = 0; (l_60 <= 4); l_60 += 1)
                {
                    unsigned char l_185 = 0xE7L;
                    int i;
                    l_166[g_104] = (safe_lshift_func_int16_t_s_s(l_166[l_60], (safe_mod_func_uint16_t_u_u(0x0615L, (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((l_166[p_46] && (p_46 , ((l_166[3] ^ (safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(p_46, l_185)), 3))) != l_186[3][0][2]))), (g_92 , p_46))) < g_92), 5)) & l_186[3][0][2]), 6))))));
                    l_187 = (253UL > (-5L));
                    g_117[2] = (p_46 <= g_91[0]);
                }
            }
        }
        l_166[1] = (safe_div_func_uint64_t_u_u(((func_52(l_190, l_186[2][0][2], g_91[0], p_45, g_92) | (((p_45 , ((safe_unary_minus_func_uint32_t_u(0x4C3C970CL)) == (safe_rshift_func_int8_t_s_u(((p_46 > p_45) , g_71), p_46)))) < g_91[0]) ^ p_45)) >= 0L), p_46));
        g_117[3] = (safe_div_func_int16_t_s_s((+(!(((safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s(((+(((l_60 && l_166[4]) < p_46) ^ (l_190 != func_52((((p_46 < func_50(p_45)) == (l_190 >= (safe_rshift_func_int8_t_s_s(((((safe_add_func_int64_t_s_s(g_71, 0xEB8E824C827FE777LL)) && 0x6F13F4DB05CABCBALL) > g_7) | p_45), g_92)))) , l_204), g_91[0], g_91[0], p_46, l_190)))) , g_91[1]), g_7)), l_60)) && l_166[4]) == p_45))), l_190));
        l_166[2] = (((func_50(l_186[3][0][2]) && func_52(p_45, (p_46 == ((((safe_rshift_func_uint16_t_u_s(g_92, p_46)) != (g_117[0] > ((safe_div_func_int64_t_s_s(g_92, p_45)) >= g_71))) || l_186[1][1][0]) > 0xE7E03242L)), l_204, g_91[0], p_46)) >= p_45) ^ 18446744073709551615UL);
    }
    if ((safe_lshift_func_int16_t_s_s((func_64(g_91[0], (((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((func_52(func_52(g_91[0], l_166[4], g_91[0], g_104, g_117[0]), p_45, l_166[4], p_46, p_45) <= p_46), (-5L))), p_46)) > l_60) , g_71)) , l_60), 0)))
    {
        unsigned short l_231 = 6UL;
        int l_258 = 0xF6DE33CDL;
        for (p_46 = 0; (p_46 > (-1)); p_46 = safe_sub_func_uint8_t_u_u(p_46, 3))
        {
            unsigned l_225 = 0x1705D988L;
            if ((((g_71 & (safe_div_func_uint16_t_u_u(((p_46 <= (safe_mod_func_uint8_t_u_u(g_91[0], ((p_45 , (safe_mod_func_int16_t_s_s((g_91[0] != 1UL), g_104))) , func_50(l_225))))) , 0x9FEBL), l_204))) && 7L) && 65528UL))
            {
                char l_228 = 0x10L;
                for (l_225 = 0; (l_225 <= 49); l_225 = safe_add_func_uint16_t_u_u(l_225, 3))
                {
                    for (l_139.f0 = 0; l_139.f0 < 5; l_139.f0 += 1)
                    {
                        l_166[l_139.f0] = 0x4EA3BCE0L;
                    }
                    l_228 = l_225;
                    for (g_92 = 0; (g_92 < 43); g_92++)
                    {
                        unsigned char l_232 = 0UL;
                        union U0 l_233 = {0x1CD0E785L};
                        g_117[0] = p_45;
                        g_117[1] = ((l_231 , p_45) | (+g_7));
                        if (l_232)
                            continue;
                        return l_233;

                                            }
                    if (g_92)
                        continue;
                }
                for (l_228 = 0; (l_228 < 8); l_228 = safe_add_func_uint32_t_u_u(l_228, 1))
                {
                    g_117[0] = (safe_div_func_int32_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u(g_117[1], 3))));
                }
            }
            else
            {
                return g_240;

                            }
            if (g_117[1])
                break;
        }
        for (g_240.f0 = 3; (g_240.f0 >= (-16)); g_240.f0 = safe_sub_func_int32_t_s_s(g_240.f0, 1))
        {
            unsigned long long l_257 = 0xEC4028CBF020C033LL;
            int l_286 = 0x04E641A2L;
            char l_320 = 0x46L;
            g_117[1] = p_45;
            for (l_60 = 24; (l_60 == 38); l_60 = safe_add_func_int16_t_s_s(l_60, 4))
            {
                const int l_261[4][4] = {{(-1L), (-1L), 0xA8FFA4A0L, (-1L)}, {(-1L), (-1L), 0xA8FFA4A0L, (-1L)}, {(-1L), (-1L), 0xA8FFA4A0L, (-1L)}, {(-1L), (-1L), 0xA8FFA4A0L, (-1L)}};
                int l_285[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_285[i] = 0x44ABC4ACL;
                if (func_52((g_240 , p_46), g_7, l_204, g_91[0], (safe_div_func_uint8_t_u_u(p_46, (safe_sub_func_uint64_t_u_u((1UL | (g_91[0] ^ g_117[0])), 18446744073709551607UL))))))
                {
                    int l_276 = 0x9DDE0F10L;
                    l_258 = (safe_lshift_func_uint8_t_u_s((func_58((g_117[0] ^ ((safe_add_func_uint8_t_u_u(func_64(g_117[0], p_46), (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(((g_240.f0 || g_117[0]) < 5UL), 2)), ((g_117[0] & g_117[1]) , l_257))))) , 0L))) == l_231), 0));
                    g_117[0] = ((safe_add_func_uint8_t_u_u(g_104, 0xD9L)) ^ (func_64(l_261[2][3], (safe_div_func_uint8_t_u_u((((0x7D206CC4L & g_91[1]) != ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(l_139.f0, (p_45 & p_45))) ^ ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_int16_t_s_u(g_117[1], g_91[1])) > l_257) && l_257) < 0xA4L), 4)), 0x33L)) , 0x621522EEL)), g_92)), 1)) == p_46)) & 0xF0B3B0FEL), 0xE6L))) , g_7));
                    l_258 = (l_276 | p_46);
                }
                else
                {
                    long long l_307 = 3L;
                    if ((safe_div_func_uint8_t_u_u((g_240 , ((safe_rshift_func_uint16_t_u_u(((((func_52((p_45 != ((l_166[4] , p_46) > (l_258 != (safe_lshift_func_int16_t_s_s(g_91[0], 0))))), p_45, p_45, g_240.f0, p_46) , 18446744073709551609UL) , 0xB870L) || g_92) < p_46), 1)) & p_45)), p_46)))
                    {
                        union U0 l_287 = {0x5A9FDFB3L};
                        l_285[0] = (0xB058BA22E2F3D009LL <= ((3L || (!p_45)) | l_231));
                        l_286 = (4UL && l_258);
                        return l_287;

                                            }
                    else
                    {
                        short l_306 = 0x7031L;
                        g_117[0] = ((((safe_add_func_uint32_t_u_u((g_240 , func_50(l_258)), ((0xBBL ^ p_45) , p_45))) > g_7) > (p_46 || p_46)) < g_91[0]);
                        l_258 = (p_45 > (safe_mod_func_uint64_t_u_u((p_46 ^ (g_240.f0 || (+((safe_div_func_int64_t_s_s(p_46, g_91[0])) && (safe_mod_func_int16_t_s_s(func_64(p_46, ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((p_46 <= ((safe_lshift_func_uint16_t_u_s((1L || l_306), 1)) == 1UL)), g_71)) , 0UL), 4294967290UL)) & 255UL) < 0xF8B2L), l_286)), l_307)) , l_261[2][3])), 0x8909L)))))), g_117[0])));
                        return g_240;

                                            }
                }
                if (g_91[0])
                    continue;
                if ((l_257 < ((safe_rshift_func_uint16_t_u_s((p_45 < l_258), 12)) == g_91[1])))
                {
                    char l_316 = (-1L);
                    l_258 = ((g_71 | (safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(g_71, (((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u(((func_50(l_316) | p_45) || (safe_sub_func_uint64_t_u_u(g_319, l_166[4]))), (g_7 & ((p_45 && 5L) == l_231)))))) ^ 0x93338511FF117878LL) , g_91[0])))))) == 0x784BL);
                    if (l_320)
                        break;
                }
                else
                {
                    for (l_139.f0 = (-19); (l_139.f0 != 4); l_139.f0 = safe_add_func_int16_t_s_s(l_139.f0, 7))
                    {
                        return g_240;

                                            }
                }
            }
        }
        for (g_104 = 0; (g_104 <= 4); g_104 += 1)
        {
            int i;
            l_166[g_104] = l_166[g_104];
        }
    }
    else
    {
        int l_323[7] = {0x5BC54D09L, 0x5BC54D09L, 0xC21474B0L, 0x5BC54D09L, 0x5BC54D09L, 0xC21474B0L, 0x5BC54D09L};
        union U0 l_408 = {0x51A5C4E5L};
        int i;
        for (g_240.f0 = 0; (g_240.f0 <= 1); g_240.f0 += 1)
        {
            unsigned short l_339[9] = {0x95A6L, 0x95A6L, 0x620DL, 0x95A6L, 0x95A6L, 0x620DL, 0x95A6L, 0x95A6L, 0x620DL};
            unsigned long long l_347[6] = {0xE0326B2818705D8ALL, 4UL, 0xE0326B2818705D8ALL, 4UL, 0xE0326B2818705D8ALL, 4UL};
            int l_357 = 0xB003C8CEL;
            union U0 l_359 = {0xC443C5AEL};
            int i;
            if ((g_91[g_240.f0] < (((0xCEC343EBL & (g_91[g_240.f0] & (g_91[g_240.f0] & func_50(g_91[1])))) >= l_323[1]) ^ (safe_mod_func_int32_t_s_s(p_46, g_91[g_240.f0])))))
            {
                char l_326 = 0x1CL;
                unsigned long long l_329 = 0x956E728DE7200320LL;
                for (p_46 = 3; (p_46 >= 1); p_46 -= 1)
                {
                    int i;
                    l_166[p_46] = l_326;
                    l_166[(g_240.f0 + 3)] = (safe_div_func_uint32_t_u_u((func_64(l_166[p_46], g_117[0]) & g_117[1]), l_329));
                }
            }
            else
            {
                char l_332[7][9] = {{0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}, {0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}, {0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}, {0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}, {0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}, {0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}, {0x8AL, 0L, (-8L), (-1L), (-8L), 0L, 0x8AL, 0x5BL, 5L}};
                int i, j;
                l_166[(g_240.f0 + 3)] = ((((((safe_rshift_func_int8_t_s_s((g_7 <= ((0xA7A55D1B23D83A05LL == l_332[0][1]) ^ l_139.f0)), 0)) <= (safe_rshift_func_int8_t_s_s(l_166[4], 6))) || (safe_mod_func_int64_t_s_s((p_46 && p_46), l_332[0][2]))) < (safe_add_func_int16_t_s_s((g_91[g_240.f0] <= l_339[0]), 0UL))) && l_339[0]) == g_91[g_240.f0]);
                l_166[g_240.f0] = (func_52(p_45, (((safe_unary_minus_func_int16_t_s((g_91[1] | (safe_mod_func_int64_t_s_s((func_50(((safe_sub_func_int32_t_s_s(((0x3683C729L | l_339[7]) & p_46), func_52((g_117[1] >= (safe_add_func_uint16_t_u_u(((!(l_347[3] && (((0x2C47F08E5E196648LL < g_104) && 0xDBDDA58D9422DCE9LL) & l_332[0][1]))) > g_91[0]), l_60))), p_45, g_319, l_166[(g_240.f0 + 3)], p_46))) , l_332[0][1])) < g_348), 0xD4D060C8F883B221LL))))) & l_347[3]) , p_46), p_45, g_7, g_7) & g_91[0]);
            }
            l_357 = (g_240.f0 || func_64(l_139.f0, (((safe_sub_func_int16_t_s_s(0xFC8CL, (((safe_add_func_int32_t_s_s((~l_323[5]), 1L)) , (safe_mod_func_uint16_t_u_u(((safe_div_func_int8_t_s_s((-6L), 252UL)) || (func_50(g_91[0]) , p_46)), 0x159AL))) == 0x7382C6C0L))) | p_46) > 0xB8B2L)));
            if (g_91[g_240.f0])
            {
                unsigned short l_358 = 65535UL;
                g_117[0] = l_339[6];
                if (l_358)
                    continue;
                return l_359;

                            }
            else
            {
                unsigned long long l_362 = 18446744073709551611UL;
                char l_379[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_379[i] = 0x11L;
                if ((safe_add_func_uint64_t_u_u((g_92 ^ (l_362 >= (((safe_lshift_func_uint8_t_u_u((g_91[1] && (safe_sub_func_int64_t_s_s(g_240.f0, func_64(p_46, p_46)))), 1)) & (-1L)) || l_323[1]))), l_323[4])))
                {
                    char l_378 = (-9L);
                    if ((p_45 <= (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((((l_371 , (safe_lshift_func_uint16_t_u_u(((p_45 ^ (safe_unary_minus_func_uint32_t_u(((((0xE611836DL == ((1L || func_64(g_377, func_58((func_52(func_64(func_50(g_348), l_378), l_357, p_46, p_45, g_319) , 0L)))) != l_323[0])) == g_7) >= 6UL) & g_240.f0)))) <= l_378), 9))) ^ 0xA1735C32043E40C7LL) > p_45), p_45)), 8))))
                    {
                        if (l_379[6])
                            break;
                        l_166[4] = (l_323[4] ^ (safe_mod_func_int32_t_s_s(0L, g_91[0])));
                        l_166[4] = (safe_add_func_uint16_t_u_u((l_323[1] , ((p_45 , (func_52((l_379[4] , (safe_lshift_func_int8_t_s_s(p_46, (safe_div_func_uint64_t_u_u(0x65D306CF536BA488LL, 18446744073709551615UL))))), l_378, p_45, p_46, g_92) & g_91[1])) , 6UL)), 0xA40FL));
                        if (g_91[0])
                            break;
                    }
                    else
                    {
                        g_117[1] = g_117[1];
                        l_166[4] = p_45;
                        return g_240;

                                            }
                }
                else
                {
                    unsigned long long l_401[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_401[i] = 18446744073709551615UL;
                    g_117[2] = (safe_div_func_uint32_t_u_u(0UL, (safe_lshift_func_uint8_t_u_u(l_392, ((safe_div_func_uint32_t_u_u((((safe_sub_func_uint16_t_u_u((0x5214L & 0UL), func_58(func_52(g_91[g_240.f0], (g_7 , ((safe_mod_func_uint64_t_u_u(g_319, (l_379[4] | (!(safe_div_func_uint32_t_u_u(g_91[0], 0x25822FE2L)))))) & 0x6705826AL)), g_104, p_46, g_348)))) | p_45) && l_401[0]), (-9L))) <= (-1L))))));
                    l_357 = 1L;
                    g_117[2] = (safe_add_func_uint16_t_u_u(p_46, ((+p_45) && (g_117[0] , (safe_mod_func_uint16_t_u_u(func_58(p_46), g_7))))));
                }
                g_117[0] = func_64(g_117[0], g_91[g_240.f0]);
            }
        }
        for (g_71 = 22; (g_71 == 0); g_71 = safe_sub_func_int64_t_s_s(g_71, 7))
        {
            return l_408;

                    }
        for (l_139.f0 = 0; (l_139.f0 != (-9)); --l_139.f0)
        {
            g_117[3] = l_408.f0;
        }
    }
    return l_139;

    }







static int func_50(unsigned short p_51)
{
    union U0 l_144 = {4L};
    int l_149[9][6][3] = {{{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}, {{(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}, {(-1L), (-4L), 1L}}};
    int i, j, k;
    if ((safe_add_func_int16_t_s_s((l_144 , 0x3249L), p_51)))
    {
        return g_104;
    }
    else
    {
        for (l_144.f0 = 0; (l_144.f0 == 7); l_144.f0++)
        {
            for (p_51 = (-8); (p_51 == 58); ++p_51)
            {
                g_117[2] = (-1L);
            }
            g_117[3] = l_144.f0;
        }
        l_149[4][4][0] = 0x8A3620CEL;
    }
    l_149[3][5][1] = l_149[4][4][0];
    l_149[4][2][1] = ((safe_sub_func_int8_t_s_s(0x42L, g_71)) != ((l_144 , ((safe_div_func_uint8_t_u_u(0x6CL, 0x8AL)) && (((g_91[0] != (safe_add_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u((((l_149[5][0][0] , (func_52(((-1L) <= g_91[0]), g_91[1], l_149[4][4][0], p_51, g_91[0]) <= p_51)) < g_7) , 247UL), p_51)) == p_51) ^ p_51), g_92))) , p_51) || p_51))) | p_51));
    return p_51;
}







static unsigned short func_52(const short p_53, short p_54, const unsigned short p_55, long long p_56, unsigned p_57)
{
    for (g_104 = 0; g_104 < 4; g_104 += 1)
    {
        g_117[g_104] = (-1L);
    }
    return g_104;
}







static short func_58(char p_59)
{
    long long l_61 = 0xA832A49E864ADB5DLL;
    int l_99 = 0xBFD34DB6L;
    const unsigned char l_100 = 0x96L;
    long long l_110 = 0x2F5F5C31AFCD19E8LL;
    unsigned l_115 = 0x5B30FD8BL;
    int l_118 = 0L;
    unsigned l_133 = 0x8E49B9DBL;
    int l_134 = 0x79C51A53L;
    g_92 = ((l_61 > (((((safe_div_func_uint8_t_u_u((func_64((p_59 >= l_61), ((((safe_lshift_func_int16_t_s_s(l_61, l_61)) ^ p_59) && p_59) > (-3L))) <= 0x6BL), l_61)) < l_61) >= 0xB7L) < 0xC3015DB4C2A7322ELL) ^ l_61)) == l_61);
    if ((func_64((func_64(p_59, g_91[0]) >= (g_7 | (((0x763FF6366113C509LL > (g_7 == l_61)) , (+(safe_rshift_func_uint16_t_u_u(l_61, (safe_add_func_uint32_t_u_u(((p_59 & p_59) ^ l_99), 0xC1CE2A3FL)))))) || 0x39L))), g_92) > l_100))
    {
        char l_103 = (-3L);
        unsigned l_111 = 1UL;
        short l_114 = 1L;
        g_104 = (safe_rshift_func_uint8_t_u_u(l_103, (g_91[1] > (p_59 <= 0xBCC83174L))));
        for (l_61 = 26; (l_61 >= 4); --l_61)
        {
            short l_109[1][1][9] = {{{0x4638L, 0x9EF6L, 0x4638L, 0x9EF6L, 0x4638L, 0x9EF6L, 0x4638L, 0x9EF6L, 0x4638L}}};
            int l_116 = 0xC5DFBC4EL;
            int i, j, k;
            g_117[0] = (65534UL ^ ((g_71 != (!(safe_mod_func_int64_t_s_s(((((((l_109[0][0][5] >= (p_59 > l_110)) == l_103) , p_59) ^ l_111) > (~(((safe_sub_func_uint64_t_u_u((p_59 > 0x41L), l_114)) || p_59) | l_115))) < g_104), (-1L))))) <= l_116));
        }
    }
    else
    {
        l_118 = g_92;
        for (g_92 = 0; (g_92 <= 19); g_92 = safe_add_func_uint64_t_u_u(g_92, 1))
        {
            for (p_59 = 0; (p_59 > 14); ++p_59)
            {
                if (g_91[0])
                    break;
            }
        }
    }
    l_118 = p_59;
    l_118 = (safe_add_func_uint32_t_u_u(g_7, (p_59 < ((g_71 >= ((((safe_sub_func_int64_t_s_s(g_104, l_110)) ^ (((safe_rshift_func_uint8_t_u_s(0xA7L, 1)) != ((safe_rshift_func_int8_t_s_s(g_7, l_110)) | (safe_rshift_func_uint16_t_u_u(((g_117[0] <= 0x9DL) | 0UL), 15)))) , l_133)) && l_115) , l_133)) | l_134))));
    return g_117[0];
}







static char func_64(const char p_65, char p_66)
{
    unsigned char l_72 = 255UL;
    int l_73 = 0L;
    g_71 = (safe_rshift_func_int8_t_s_u(p_66, 3));
    l_73 = (l_72 ^ p_66);
    for (l_72 = 11; (l_72 != 24); ++l_72)
    {
        short l_80 = 0xAB72L;
        g_91[0] = (safe_div_func_int64_t_s_s((0x57L != (((safe_lshift_func_int16_t_s_u(l_80, (safe_sub_func_uint8_t_u_u(0xB8L, (g_7 >= (p_66 != (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(((g_7 || l_80) | (safe_sub_func_uint16_t_u_u((g_7 == (safe_add_func_uint16_t_u_u(g_7, p_66))), p_66))), g_7)), p_66)))))))) != 65528UL) == p_66)), p_66));
        if (p_66)
            break;
    }
    return p_66;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_117[i], "g_117[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_555[i][j], "g_555[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
