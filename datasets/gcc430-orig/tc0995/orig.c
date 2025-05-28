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
   short f0;
   short f1;
};

union U1 {
   unsigned short f0;
   const unsigned short f1;
   char f2;
   volatile unsigned f3;
   unsigned f4;
};

union U2 {
   const volatile unsigned f0;
   int f1;
   volatile int f2;
   volatile short f3;
};

union U3 {
   volatile int f0;
   volatile unsigned char f1;
   const volatile int f2;
   volatile int f3;
};


static unsigned char g_14 = 247UL;
static unsigned short g_29 = 0UL;
static union U0 g_40 = {1L};
static union U3 g_48 = {0x085FFFF3L};
static short g_95 = 1L;
static char g_97 = 0x51L;
static union U0 g_100 = {0x2FFEL};
static int g_129 = (-5L);
static unsigned char g_201 = 0xC7L;
static unsigned g_205 = 18446744073709551615UL;
static unsigned g_211 = 0UL;
static unsigned short g_228 = 0UL;
static short g_269 = 5L;
static unsigned g_342 = 4294967288UL;
static union U0 g_343 = {1L};
static short g_445 = 0x2808L;
static int g_594 = (-5L);
static short g_599 = (-10L);
static union U0 g_643 = {2L};
static unsigned g_719 = 0x3FF57AF3L;
static int g_811 = (-9L);
static short g_829 = 0L;
static int g_846 = 0L;
static unsigned g_847 = 18446744073709551615UL;
static unsigned short g_878 = 3UL;
static short g_893 = 0x602DL;
static char g_927 = (-8L);
static union U1 g_950 = {0x8714L};
static union U1 g_957 = {0x43A2L};
static union U1 g_996 = {0x8C95L};
static union U1 g_1022 = {0x9E10L};
static int g_1088 = 1L;
static volatile union U2 g_1140 = {3UL};
static union U3 g_1151 = {-1L};
static int g_1204 = 0x9D34FB3FL;



static union U3 func_1(void);
static unsigned char func_7(const unsigned p_8, int p_9, const unsigned p_10, unsigned p_11);
static unsigned short func_20(char p_21, unsigned char p_22);
static int func_30(short p_31, unsigned short p_32, unsigned short p_33);
static unsigned func_34(unsigned short p_35, union U0 p_36, short p_37, char p_38, const short p_39);
static const unsigned short func_41(unsigned char p_42, short p_43, const short p_44, union U0 p_45, short p_46);
static short func_55(unsigned p_56, unsigned char p_57, unsigned short p_58);
static unsigned short func_64(unsigned p_65, union U0 p_66, int p_67, int p_68);
static short func_71(int p_72, unsigned p_73, union U0 p_74, int p_75);
static unsigned char func_79(union U0 p_80, unsigned p_81, short p_82, short p_83);
static union U3 func_1(void)
{
    unsigned l_4 = 0x9822CB3AL;
    unsigned l_19 = 0UL;
    int l_1184 = 0x6119CED9L;
    int l_1185 = 0xBAC314C1L;
    int l_1201 = 0x7F0DBC31L;
    unsigned l_1202 = 0UL;
    const char l_1203 = 0x5BL;
    g_1204 = (((safe_mod_func_uint8_t_u_u((l_4 < ((safe_sub_func_uint16_t_u_u(((func_7(((safe_sub_func_uint32_t_u_u((!g_14), (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((l_19 & g_14), 9)), ((l_1201 = func_20(l_19, ((safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_4 ^ (g_29 = l_4)), (l_1185 = (l_1184 = func_30(g_14, ((func_34((((~253UL) , g_14) > l_19), g_40, g_40.f0, g_14, g_40.f1) ^ 0xAA64E025L) ^ 4294967295UL), l_19))))), g_957.f1)), g_14)) != 0x25E1L))) && g_950.f2))))) & g_1088), l_1202, l_1203, g_957.f1) < l_1202) , l_1202), g_957.f0)) == g_996.f2)), g_996.f1)) && l_4) ^ l_19);
    return g_48;
}







static unsigned char func_7(const unsigned p_8, int p_9, const unsigned p_10, unsigned p_11)
{
    return g_846;
}







static unsigned short func_20(char p_21, unsigned char p_22)
{
    int l_1186 = 0x0CFF5652L;
    char l_1193 = 0x54L;
    int l_1194 = (-2L);
    int l_1197 = 0xCBD05453L;
    int l_1198 = 0x575E2EB1L;
    unsigned char l_1199 = 7UL;
    int l_1200 = 0x67B606A1L;
    l_1186 = ((func_30(l_1186, (l_1186 || ((safe_sub_func_uint16_t_u_u(l_1186, (g_40.f1 = g_48.f2))) != 0x2AL)), (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_1198 = (((((~((l_1197 = (l_1186 & (0L ^ (((l_1194 = (l_1193 = p_22)) <= (safe_sub_func_int16_t_s_s(l_1186, 0xC953L))) == l_1186)))) && l_1197)) , g_211) <= p_22) | l_1186) && p_21)), g_893)), l_1186)) , 4294967295UL) != p_21)) <= 1UL) != l_1199);
    return l_1200;
}







static int func_30(short p_31, unsigned short p_32, unsigned short p_33)
{
    int l_1168 = (-1L);
    union U0 l_1171 = {0xF7DDL};
    int l_1176 = 0x305293BDL;
    int l_1177 = 0xD0B0DC5AL;
    int l_1178 = 1L;
    int l_1179 = 0x0C46A0CCL;
    int l_1180 = 5L;
    unsigned char l_1183 = 246UL;
    g_1140.f1 = ((((l_1179 = (safe_add_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((l_1178 = (safe_div_func_int8_t_s_s((l_1168 = g_1140.f2), ((safe_rshift_func_uint8_t_u_s(g_878, 1)) | (l_1177 = (p_31 = (func_64((g_100.f0 <= 5UL), g_643, ((g_1022.f2 = func_79(l_1171, (((safe_add_func_uint32_t_u_u((g_97 , ((((((safe_sub_func_int32_t_s_s((l_1171.f0 & ((l_1176 = (g_957.f1 , g_846)) <= g_811)), p_32)) ^ 0x8A682AADL) | p_32) , 0xF8L) | l_1171.f0) >= 0xEDD16A75L)), g_996.f0)) , g_996.f2) > 0x475CL), p_32, l_1171.f1)) & p_32), l_1171.f0) || p_32))))))), p_33)) != p_33), (-4L)))) >= 1UL) , p_32) != l_1171.f0);
    l_1183 = (l_1180 , (l_1180 = (!((p_33 = (safe_rshift_func_uint16_t_u_s(0x643EL, 5))) | p_32))));
    l_1176 = g_594;
    return p_33;
}







static unsigned func_34(unsigned short p_35, union U0 p_36, short p_37, char p_38, const short p_39)
{
    unsigned char l_47 = 0UL;
    unsigned l_61 = 4294967290UL;
    union U0 l_84 = {1L};
    int l_99 = 1L;
    int l_101 = 1L;
    const int l_809 = 0xBB90C01FL;
    unsigned l_810 = 0xB3968B45L;
    const unsigned char l_928 = 0x1CL;
    unsigned l_997 = 18446744073709551610UL;
    int l_1000 = (-8L);
    int l_1093 = (-1L);
    unsigned l_1123 = 0x32CE1E3CL;
    int l_1139 = 0x6E25AA42L;
    int l_1150 = 0x00E1BBECL;
    char l_1154 = 1L;
    int l_1155 = 0L;
    if (((func_41(l_47, ((g_48 , (safe_rshift_func_int16_t_s_s((g_893 = (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((g_40.f1 = g_48.f0), func_55((((0x8390A341L ^ (g_811 = (l_810 = (255UL & (safe_rshift_func_int16_t_s_u((((((l_61 && (g_14 , (p_37 = (safe_div_func_uint16_t_u_u(func_64((safe_sub_func_uint16_t_u_u(p_37, (func_71((((safe_unary_minus_func_uint32_t_u(((safe_sub_func_uint8_t_u_u((l_99 = func_79(l_84, p_39, p_36.f1, p_36.f0)), g_14)) | l_84.f1))) ^ p_35) > l_84.f1), p_37, g_100, l_101) < 0L))), p_36, p_36.f1, g_14), l_809))))) == l_101) , l_84.f0) != 0xDEL) || l_84.f1), 2)))))) >= 0xF1414624L) >= 0x6EL), p_38, l_61))) <= g_893), 0xA6ADL))), l_928))) , 0x4D02L), g_14, l_84, g_719) , p_36.f1) && g_719))
    {
        short l_975 = 0xF9BBL;
        int l_986 = 0xE5592034L;
        int l_987 = (-3L);
        union U0 l_988 = {-1L};
        g_846 = (safe_div_func_uint8_t_u_u(((func_71((((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_975 == 0x4CL), (safe_mod_func_int16_t_s_s(((p_36 , (safe_rshift_func_uint8_t_u_s((((l_99 = func_79(g_40, (l_987 = (l_975 && (safe_div_func_uint16_t_u_u((l_986 = ((safe_add_func_int16_t_s_s((p_36.f1 = 0x64BAL), ((p_37 & (p_35 = (safe_sub_func_uint16_t_u_u(func_71(((l_975 == 2L) , g_343.f0), g_228, l_84, l_975), (-7L))))) && 1UL))) , 0x90D8L)), p_38)))), g_878, l_809)) ^ l_84.f1) & l_809), l_84.f0))) == p_39), g_878)))), p_39)) || 0xF0L) ^ p_38), l_928, l_988, p_37) != g_599) & p_38), g_48.f1));
        return l_988.f0;
    }
    else
    {
        unsigned char l_991 = 0x32L;
        int l_1011 = 0L;
        union U0 l_1016 = {0xE779L};
        unsigned char l_1021 = 1UL;
        unsigned l_1076 = 0x23ED48CAL;
        unsigned l_1122 = 0x8CBA89D2L;
        l_99 = (g_129 = (safe_rshift_func_uint8_t_u_s(((((((l_991 && l_810) && (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x29L, (g_996 , p_38))), l_997))) <= (g_846 = 7L)) >= ((safe_sub_func_int8_t_s_s((((g_847 ^ (g_927 = func_71(g_594, l_1000, l_84, l_99))) & g_950.f1) || g_14), (-1L))) , p_39)) <= g_893) ^ 4294967295UL), 5)));
        for (g_599 = 0; (g_599 == 3); g_599 = safe_add_func_uint32_t_u_u(g_599, 4))
        {
            unsigned l_1007 = 0xDCEDB202L;
            int l_1017 = (-3L);
            union U0 l_1018 = {0x4BA8L};
            l_99 = 0xAAF66566L;
            g_846 = 0x1D23B275L;
            l_1011 = ((safe_add_func_int16_t_s_s(g_48.f3, (safe_add_func_int32_t_s_s(l_1007, func_79(g_40, (g_878 & l_84.f1), (safe_unary_minus_func_uint8_t_u(p_39)), (((safe_lshift_func_int16_t_s_u((p_37 = 0L), p_36.f1)) | p_36.f0) < 65527UL)))))) & g_228);
            l_1011 = func_41((safe_div_func_int8_t_s_s(func_71((l_1007 || (!(safe_div_func_int32_t_s_s(1L, p_38)))), p_39, l_1016, g_48.f0), ((g_893 = (l_1017 = (g_847 | l_1007))) , 8L))), p_37, p_38, l_1018, p_35);
        }
        l_1011 = ((safe_lshift_func_uint16_t_u_u((l_99 = (func_55(g_97, l_1016.f1, (l_1011 , func_41(l_809, (1UL < ((l_1016.f1 , g_643) , g_950.f0)), p_36.f0, l_1016, l_1016.f0))) < l_1021)), 8)) ^ 1L);
        if (((l_99 = l_1011) , (g_1022 , ((safe_sub_func_uint16_t_u_u((((((safe_div_func_uint16_t_u_u(0x52C5L, 0xBF3CL)) && (((func_55((l_1000 , (g_847 = (safe_add_func_int8_t_s_s((l_1021 >= (l_99 = (g_97 | 0UL))), ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_41((l_1011 = (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(func_41((func_41((4294967292UL >= (-6L)), p_38, l_47, p_36, p_39) != l_1021), g_996.f0, g_950.f1, g_643, l_101), p_37)), 0x25841A29L))), p_36.f1, g_269, p_36, g_893), p_36.f1)), g_14)) != 0L))))), g_14, g_1022.f0) <= l_991) < g_1022.f0) || 0x5CL)) == g_996.f1) ^ g_40.f0) , g_205), l_991)) || g_957.f0))))
        {
            union U0 l_1047 = {0x14C4L};
            if (g_643.f1)
            {
                g_129 = g_100.f0;
                g_846 = (-2L);
            }
            else
            {
                char l_1057 = 0xF2L;
                int l_1070 = (-1L);
                int l_1071 = (-9L);
                int l_1072 = 0xAC8119E5L;
                int l_1074 = 0x3590F456L;
                l_1011 = ((((safe_add_func_uint32_t_u_u((g_211 ^ g_1022.f2), p_36.f1)) != (g_205 >= ((g_829 = (safe_sub_func_uint8_t_u_u(func_71(((0x3B218BB1L == (safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((g_846 = p_39), 4294967295UL)) < ((((safe_add_func_uint16_t_u_u(func_71(g_957.f1, ((func_71(g_950.f2, g_957.f1, g_40, p_35) < p_35) | p_36.f1), l_1047, l_1016.f1), 0UL)) & p_39) <= g_996.f1) , 0x23CAL)), 4294967288UL))) >= 7UL), g_957.f1, l_84, l_1011), g_643.f1))) == 0xE45DL))) || g_129) , l_1047.f1);
                g_846 = p_39;
                if ((p_35 < (p_38 = g_1022.f2)))
                {
                    unsigned l_1054 = 1UL;
                    int l_1073 = 0x745239B1L;
                    for (g_342 = (-1); (g_342 <= 48); g_342 = safe_add_func_int32_t_s_s(g_342, 5))
                    {
                        l_1074 = ((l_1073 = ((safe_mod_func_uint8_t_u_u((((g_201 = (((~(safe_lshift_func_uint16_t_u_u(g_1022.f0, (l_1054 > (((safe_div_func_int32_t_s_s((l_1057 = 0x2EA484B8L), (safe_rshift_func_int8_t_s_u((g_950.f2 = g_48.f1), (safe_mod_func_uint32_t_u_u(((func_79(((safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_u((g_846 || l_1021), 0)) && (l_1011 , (~(safe_rshift_func_int16_t_s_s((func_71((func_71((((((~p_39) == (l_1070 = (((p_36.f1 ^ p_36.f1) , l_1054) , g_211))) ^ l_99) & l_1071) > 0UL), g_878, p_36, l_1072) > l_1047.f1), l_1047.f1, p_36, p_39) <= 0UL), p_36.f1))))) == g_996.f2) , g_269), p_35)) , g_40), l_1047.f1, l_47, g_343.f0) < g_1022.f1) , p_36.f1), l_1016.f0)))))) && 0x4BL) < 1L))))) != p_37) , l_991)) && p_38) && l_1054), l_1071)) | 0x9B1AL)) || p_37);
                    }
                }
                else
                {
                    unsigned char l_1075 = 255UL;
                    l_1075 = (g_847 || g_847);
                }
                l_1070 = p_38;
            }
            l_1076 = l_1016.f0;
            g_129 = 1L;
        }
        else
        {
            unsigned l_1077 = 8UL;
            l_1077 = 0x1C4664C9L;
            l_1011 = (safe_add_func_uint16_t_u_u(l_1077, g_847));
            if (l_101)
            {
                const int l_1094 = 1L;
                l_1093 = (l_99 = (safe_sub_func_int32_t_s_s(g_950.f2, func_55((safe_sub_func_uint16_t_u_u(p_37, (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((g_445 == ((g_1088 , (l_809 > ((p_36.f0 || (safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(g_228, p_37)), 7))) > 8L))) , p_35)), g_40.f1)), g_719)))), p_37, l_1077))));
                l_99 = l_1094;
                for (g_97 = 0; (g_97 >= (-8)); g_97 = safe_sub_func_uint8_t_u_u(g_97, 9))
                {
                    return p_39;
                }
            }
            else
            {
                unsigned char l_1105 = 0xD0L;
                short l_1106 = 0xF511L;
                int l_1107 = (-10L);
                int l_1136 = (-1L);
                if ((safe_sub_func_uint8_t_u_u((p_37 == (safe_lshift_func_int16_t_s_u(func_64(g_14, (g_643 = p_36), p_38, p_35), 9))), (safe_rshift_func_int8_t_s_s((p_37 || ((((safe_rshift_func_uint16_t_u_s(l_1105, (+((l_1016.f1 < 0x5AL) && 249UL)))) >= l_1105) , l_1077) && 4294967295UL)), 0)))))
                {
                    l_1107 = l_1106;
                }
                else
                {
                    g_846 = (safe_sub_func_int32_t_s_s(g_996.f1, (!((safe_div_func_int8_t_s_s(((g_40.f1 , (1L ^ (safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(p_36.f1, p_35)), (safe_sub_func_uint16_t_u_u(func_79(p_36, ((l_1011 = (!(8L || (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_950.f1 && ((p_38 ^ 0xCBD1195AL) == l_1122)), 1)), g_445))))) , 0xBDDF8319L), g_129, p_39), 0xB837L)))))) > g_48.f3), g_1022.f0)) == 1L))));
                }
                g_846 = ((l_1123 > (safe_div_func_uint16_t_u_u(((p_35 = (l_1011 = (safe_div_func_uint8_t_u_u((!5UL), l_1107)))) & (l_1093 = ((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(g_95, (safe_sub_func_uint8_t_u_u((~((((g_996.f1 | (((safe_lshift_func_uint16_t_u_u(((l_1136 && (safe_mod_func_uint8_t_u_u((g_893 , ((p_37 <= 0xFDL) == g_957.f0)), p_38))) == l_1107), 4)) > g_211) , l_1105)) ^ p_36.f0) & 0x3A4EL) ^ 0x49610DBEL)), p_36.f1)))) >= l_1136), g_228)) & l_1136))), 0xA6A6L))) >= p_37);
            }
        }
    }
    l_1150 = func_55((((l_99 = (l_1093 = ((l_1139 = (l_84.f0 < (l_810 != p_39))) >= l_84.f0))) , g_1140) , ((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_40.f1, 7)), (!((safe_sub_func_int32_t_s_s((l_99 = (g_846 = ((safe_unary_minus_func_int16_t_s((((g_927 <= (safe_sub_func_int8_t_s_s(p_38, l_809))) < l_997) , l_84.f1))) != g_48.f1))), l_84.f0)) || p_37)))) , g_445)), l_1123, p_35);
    l_1150 = (l_99 = ((g_1151 , (l_101 , (((safe_lshift_func_uint16_t_u_s(0x343AL, 6)) == g_1151.f0) <= (l_1155 = (l_1093 = l_1154))))) > ((p_36.f1 != (safe_add_func_int8_t_s_s(g_927, ((safe_sub_func_int32_t_s_s(l_809, ((func_64(((safe_add_func_uint8_t_u_u((((p_38 && g_211) >= g_950.f2) , l_997), p_35)) , p_39), g_40, l_84.f0, l_928) && p_35) || p_38))) < g_1022.f2)))) || l_1154)));
    g_1140.f1 = g_846;
    return l_101;
}







static const unsigned short func_41(unsigned char p_42, short p_43, const short p_44, union U0 p_45, short p_46)
{
    short l_946 = 0xC7D0L;
    int l_947 = 0xA59C9630L;
    int l_948 = 0xC4272899L;
    unsigned l_964 = 0x0D2562A7L;
    for (g_95 = 0; (g_95 == 3); g_95 = safe_add_func_uint16_t_u_u(g_95, 1))
    {
        char l_933 = (-5L);
        int l_949 = 0x4D992F00L;
        g_846 = ((!(g_719 = (safe_div_func_uint16_t_u_u(l_933, g_228)))) , (l_949 = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((0x5388L < p_45.f1), ((g_129 = (safe_add_func_int16_t_s_s(p_46, ((l_933 , ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s((g_48.f2 , (l_947 = (l_946 = p_42))), l_933)), l_948)), 2)) || g_201)) & p_46)))) >= g_95))), g_201))));
        if (g_48.f0)
        {
            l_947 = (g_950 , (safe_rshift_func_uint16_t_u_s(l_933, 12)));
        }
        else
        {
            short l_958 = 4L;
            int l_961 = 0x6EDA7554L;
            l_961 = (safe_sub_func_int16_t_s_s(((g_95 | (g_957 , (+(l_958 = (p_45.f0 | p_44))))) > ((safe_add_func_uint32_t_u_u(l_961, (l_947 & (p_43 <= ((0UL >= (l_946 , 0x83L)) <= g_599))))) == (-8L))), l_933));
            g_129 = ((safe_mod_func_int8_t_s_s(g_847, l_947)) , (g_846 = p_44));
        }
        if ((l_947 || ((-7L) != l_964)))
        {
            const short l_965 = 0x616AL;
            int l_966 = (-1L);
            l_966 = l_965;
            g_846 = 0xFBB06526L;
            g_846 = (safe_unary_minus_func_int32_t_s(g_211));
            if (l_965)
                break;
        }
        else
        {
            unsigned l_968 = 0x84378FD0L;
            l_968 = g_205;
        }
        l_949 = g_643.f0;
    }
    g_846 = l_948;
    return p_44;
}







static short func_55(unsigned p_56, unsigned char p_57, unsigned short p_58)
{
    unsigned short l_824 = 0x49AEL;
    union U0 l_827 = {0xCBC9L};
    int l_828 = 0x393D4851L;
    int l_830 = 9L;
    int l_926 = 0xC242329CL;
    if (((g_211 , (safe_lshift_func_int8_t_s_s(p_58, (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_343.f0 <= (l_830 = (safe_rshift_func_uint8_t_u_s(((func_71(l_824, (g_211 = (func_71(l_824, ((safe_lshift_func_uint16_t_u_u(((g_342 = ((l_827 , l_827) , (l_828 = ((g_343.f0 > g_811) , p_56)))) || p_56), g_643.f0)) > l_824), g_643, l_824) , 0UL)), l_827, g_811) <= g_829) != 0x3D6A18E8L), 6)))), 0x10CAL)), p_58)), 0x4CBBL)), g_829))))) , l_828))
    {
        unsigned char l_833 = 255UL;
        g_129 = l_824;
        l_833 = (safe_lshift_func_uint16_t_u_u(p_57, 5));
    }
    else
    {
        int l_834 = 0L;
        union U0 l_845 = {-1L};
        int l_848 = (-1L);
        int l_851 = 0x234326B5L;
        short l_874 = 0x13F6L;
        const int l_875 = 0xE9B2B5DCL;
        short l_912 = 0xEBCDL;
        l_834 = (g_343.f0 , 0xF536D517L);
        l_848 = (g_847 = ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_824 >= (p_57 == l_834)), 8)), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((g_846 = ((safe_mod_func_uint8_t_u_u(p_57, (0L || (p_57 , (func_64((l_828 = l_824), l_845, (func_79((g_643 = (g_100 = g_343)), l_845.f0, p_56, g_342) && g_228), l_845.f1) , g_343.f1))))) || l_828)), l_830)), p_57)))) < 0x4EB04BF4L));
        l_828 = (l_828 >= (l_851 = func_79(l_827, func_71((safe_rshift_func_int16_t_s_u(((l_830 = ((((func_79(l_827, p_58, (p_58 , ((func_79(l_845, l_830, l_824, ((l_848 = p_57) || g_201)) <= p_56) || g_719)), g_594) > p_58) > p_57) && l_851) <= g_343.f1)) < 1UL), p_58)), l_824, l_827, l_824), g_599, g_343.f1)));
        for (p_57 = 0; (p_57 != 33); p_57 = safe_add_func_uint8_t_u_u(p_57, 5))
        {
            unsigned l_854 = 0UL;
            union U0 l_876 = {1L};
            int l_877 = (-2L);
            if (l_854)
            {
                unsigned l_864 = 0x0882550AL;
                union U0 l_871 = {1L};
                int l_896 = 8L;
                int l_897 = 2L;
                g_878 = (g_846 = (!(g_129 = (((~g_100.f0) > g_846) , (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((g_228 = (func_71(((l_877 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((((g_445 = p_57) || (((((l_864 && (safe_mod_func_uint32_t_u_u((g_211 = (g_342 = (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((p_57 >= func_79(l_871, (safe_rshift_func_int16_t_s_u((((l_830 = func_71((l_830 , ((l_874 > (l_848 = (p_57 == l_875))) ^ g_100.f1)), l_864, l_876, g_846)) && p_58) ^ g_205), p_58)), g_211, l_871.f1)), 1)) , g_95) | 0xE4F4L), p_58)))), 0x46931487L))) ^ 0xFBL) || (-1L)) ^ 65527UL) != g_201)) < 1L))), 5)), 7))) <= p_57), g_343.f0, g_343, p_56) > p_56)), 0L)) && 4294967287UL), l_864))))));
                g_846 = (p_58 | ((safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(l_827.f0)), 5UL)) != (safe_unary_minus_func_uint32_t_u(g_599))));
                l_897 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((l_830 = ((safe_mod_func_uint32_t_u_u(l_871.f0, g_643.f0)) <= g_893)), 3)), ((l_871.f0 , (l_848 = (l_828 = (l_896 = (safe_div_func_uint32_t_u_u(func_71(func_79(l_876, (!g_847), p_58, func_79(l_876, l_828, p_56, l_824)), p_58, l_876, p_56), p_58)))))) != g_811))), 6)), g_829));
            }
            else
            {
                l_877 = l_845.f1;
            }
            if (((l_828 = ((l_848 = (((safe_rshift_func_int8_t_s_u((l_851 = ((!0UL) & (safe_mod_func_uint16_t_u_u(((l_830 = ((safe_lshift_func_uint16_t_u_s(((p_57 != (~(safe_mod_func_uint8_t_u_u((g_343.f1 , (safe_lshift_func_int8_t_s_s((p_56 ^ func_79(l_827, l_834, l_876.f0, p_57)), g_269))), g_342)))) || 8UL), 10)) <= (-6L))) && 1UL), p_58)))), p_57)) <= l_828) , g_829)) ^ p_57)) != 0x73L))
            {
                l_848 = ((g_129 = (safe_rshift_func_int8_t_s_u(p_56, 0))) & ((func_79(((g_201 = (safe_mod_func_int16_t_s_s((p_58 & g_228), (-5L)))) , l_845), g_342, l_912, ((((((safe_rshift_func_int8_t_s_u((0L == 0x13L), 3)) & p_56) != p_57) == l_854) && 1UL) , l_828)) >= 1UL) , g_643.f0));
            }
            else
            {
                unsigned l_917 = 0x0D8ADE1EL;
                l_917 = ((l_876.f1 , (+(func_64(l_830, l_876, p_56, l_875) , (safe_sub_func_int8_t_s_s(p_58, (g_95 > g_445)))))) != 0L);
            }
            return p_57;
        }
    }
    g_846 = (p_56 < (g_342 = (l_827.f1 || (g_100.f0 == g_97))));
    g_927 = (safe_lshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s((l_926 = (l_830 = (((g_129 = (func_71(g_599, l_827.f0, l_827, (0x4CD8415DL < g_129)) == (safe_mod_func_int32_t_s_s((g_846 = (((l_827.f1 || p_57) || l_824) <= p_58)), 0xA4A8366DL)))) && g_829) & 7L))), g_205)), l_828));
    l_830 = (g_846 = g_269);
    return g_211;
}







static unsigned short func_64(unsigned p_65, union U0 p_66, int p_67, int p_68)
{
    int l_120 = 0x547B12BFL;
    union U0 l_121 = {0L};
    int l_128 = 7L;
    char l_130 = (-7L);
    int l_131 = (-1L);
    unsigned l_202 = 0xD8B5C60BL;
    unsigned short l_212 = 1UL;
    const unsigned short l_242 = 0UL;
    unsigned l_303 = 7UL;
    unsigned l_362 = 18446744073709551613UL;
    unsigned l_376 = 0xE5BA7650L;
    short l_414 = 0x8DC7L;
    short l_443 = 5L;
    unsigned l_517 = 4294967295UL;
    unsigned short l_566 = 65535UL;
    unsigned char l_593 = 1UL;
    char l_635 = (-2L);
    char l_708 = (-4L);
    union U0 l_718 = {0x92CCL};
    char l_732 = 0x47L;
    l_131 = ((g_129 = (l_120 = func_79(((p_65 != l_120) , (g_100 = l_121)), (safe_add_func_uint8_t_u_u((p_65 < (((((safe_lshift_func_int8_t_s_u((0L != func_79(l_121, l_121.f0, (safe_sub_func_int8_t_s_s(0L, (((l_128 = ((g_95 | g_14) , l_120)) , p_66.f1) <= p_68))), g_14)), 7)) && 9UL) >= p_66.f0) > p_66.f0) || 1UL)), 0xD1L)), p_68, g_14))) ^ l_130);
    if ((g_14 || (g_129 , p_66.f0)))
    {
        short l_132 = 0xBCBDL;
        int l_141 = 0x48E76B2DL;
        int l_148 = 1L;
        union U0 l_153 = {-1L};
        union U0 l_154 = {1L};
        short l_227 = 0x5180L;
        int l_243 = 0L;
        short l_285 = 0x54FBL;
        unsigned l_341 = 0xC85C767CL;
        g_129 = l_132;
        p_68 = (safe_sub_func_uint8_t_u_u((p_66.f0 | ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((l_141 = (safe_add_func_int32_t_s_s(p_67, l_132))), (safe_sub_func_int32_t_s_s(((p_65 = l_132) != (safe_div_func_uint8_t_u_u((func_71(g_100.f1, g_14, g_100, ((safe_add_func_uint8_t_u_u(l_148, (safe_mod_func_uint32_t_u_u(g_129, p_66.f1)))) , 0L)) < g_129), l_148))), 0xA8204F9FL)))) & g_129), p_66.f1)) < p_67)), g_14));
        if ((g_129 == 6UL))
        {
            int l_157 = 0x1133990FL;
            int l_210 = 0L;
            if ((((l_131 = 0x0674L) , ((safe_sub_func_int32_t_s_s(func_79(l_153, p_66.f0, func_79((l_154 = l_153), p_66.f1, ((safe_mod_func_uint16_t_u_u(65529UL, func_79((l_121 = p_66), ((p_65 != g_97) , 0UL), p_66.f0, l_157))) >= p_65), p_68), l_131), l_157)) ^ p_65)) >= p_66.f0))
            {
                int l_179 = (-3L);
                g_129 = p_66.f0;
                for (l_141 = 9; (l_141 == 3); l_141--)
                {
                    unsigned l_170 = 0x807BFFB9L;
                    int l_189 = 7L;
                    int l_190 = 1L;
                    for (l_120 = (-14); (l_120 != 1); l_120 = safe_add_func_int32_t_s_s(l_120, 9))
                    {
                        return g_129;
                    }
                    g_129 = (p_66.f0 > (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(0xF65D561EL, ((safe_lshift_func_int16_t_s_u(0x54EFL, 1)) || (l_157 < 1L)))), (g_129 <= (((p_68 = (l_120 = 0x03803073L)) & (safe_rshift_func_uint8_t_u_s((func_79(g_100, l_170, p_67, p_66.f0) >= p_67), 1))) > p_67)))));
                    l_190 = (safe_rshift_func_int16_t_s_u((g_95 < (3UL > (safe_div_func_uint32_t_u_u((((((g_100.f0 || g_95) != g_100.f1) & (((l_189 = (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_66.f0 = (((l_179 == (l_128 = (safe_rshift_func_int8_t_s_u(p_65, (safe_lshift_func_int16_t_s_u(1L, 2)))))) > (safe_unary_minus_func_int16_t_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_97, g_100.f0)), 6)) | 1L)))) < g_129)), l_121.f0)), p_67))) < (-1L)) , 0x7FL)) , 247UL) , g_95), l_170)))), 10));
                }
                g_129 = (g_97 , g_129);
                g_129 = ((l_157 && (l_128 = (safe_lshift_func_uint8_t_u_u(p_66.f0, ((l_121.f0 >= (l_179 = ((p_68 = ((g_100.f1 = (~((func_79(p_66, (safe_rshift_func_uint16_t_u_u((~1UL), 5)), (l_121.f1 , ((((l_130 , (((g_201 = (!(safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_95 == (g_100.f0 && 65535UL)), p_68)), l_157)) , p_66.f0) ^ p_66.f0), 0UL)))) | 0L) && 255UL)) ^ p_66.f0) & 0x9E36F560L) && p_66.f0)), p_67) <= g_100.f1) > p_66.f1))) < g_129)) & l_121.f1))) , g_100.f0))))) && l_202);
            }
            else
            {
                g_129 = p_66.f0;
            }
            p_68 = ((g_129 = g_201) & (safe_add_func_int32_t_s_s((func_71((g_205 = l_121.f1), l_153.f1, g_100, (g_211 = (((safe_rshift_func_int16_t_s_u(p_68, (safe_div_func_int8_t_s_s((~0x16L), (l_210 = g_97))))) , (p_65 = (((l_131 <= g_95) <= 0x9C7B4ADEL) || g_97))) <= 0x08CA6926L))) , p_67), 0x6CD6A9AAL)));
            p_68 = func_79(((l_128 , p_66.f0) , p_66), (l_212 = g_205), (safe_rshift_func_int8_t_s_s((l_141 = ((safe_rshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((-3L), (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((0xA19DL & ((~g_95) < ((p_65 | g_205) > g_100.f1))), 0x5BL)), g_100.f1)))) , p_67), 0)) ^ 0x9C37AF40L)), 3)), g_201);
            l_210 = ((g_100.f1 <= (p_68 = 0x4C8B0953L)) == (p_65 | 0UL));
        }
        else
        {
            int l_229 = 0xF16BE140L;
            g_129 = (2L <= (safe_div_func_int32_t_s_s(l_227, ((g_228 ^ p_66.f0) & 0x6AE1L))));
            l_229 = g_201;
        }
        if (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u((func_79(p_66, l_212, (l_131 = (g_228 == (safe_sub_func_int8_t_s_s((l_243 = (0UL > ((func_71(g_14, (p_66.f1 <= (safe_mul_func_uint16_t_u_u(p_66.f1, ((((l_141 = p_67) >= (((safe_lshift_func_int16_t_s_s(p_67, 11)) | l_130) == l_242)) <= 0UL) < g_129)))), g_100, g_100.f0) <= g_211) == 0x65L))), p_67)))), g_228) , p_66.f1), p_65)) >= 0xF8L), g_14)), 7)) , l_120))
        {
            char l_265 = (-1L);
            int l_266 = 0xF36540E6L;
            int l_268 = 0xE35C1252L;
            int l_272 = 0xA75C7A0FL;
            short l_284 = 0x61C1L;
            int l_379 = 0xF1453EFBL;
            for (l_131 = 0; (l_131 <= 11); ++l_131)
            {
                int l_246 = 9L;
                int l_267 = 0x75001E59L;
                l_246 = g_205;
                p_68 = (safe_add_func_uint16_t_u_u(65531UL, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((l_246 <= (safe_mod_func_int8_t_s_s((func_71(p_68, (p_68 && (safe_add_func_int32_t_s_s(((0x52L == ((+((g_211 = (l_266 = ((((0xE4B5L < ((l_265 = ((((safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(p_66.f1, 9)) & (((3UL == (-1L)) >= p_66.f1) , (-1L))), 0xB740B137L)), 13)) && l_246) != 1L) ^ p_66.f0)) > g_129)) > p_65) & p_66.f0) ^ 0x5A78L))) , 0x46L)) >= l_267)) & l_120), 0x6097ED01L))), p_66, l_243) ^ g_129), (-7L)))), p_65)) == g_201) == l_268), g_205)) , l_202), l_243))));
            }
            if ((g_269 = (g_129 = p_66.f1)))
            {
                int l_282 = 1L;
                const int l_283 = 0x4732960EL;
                int l_295 = (-9L);
                const unsigned short l_296 = 0xA55CL;
                int l_350 = (-1L);
                g_129 = (safe_rshift_func_int16_t_s_u(func_79(g_100, func_79(g_100, (!l_268), ((l_272 & (safe_unary_minus_func_int8_t_s(0xFDL))) && (safe_add_func_int8_t_s_s(((p_68 ^ (safe_mod_func_uint8_t_u_u(0x45L, (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_282 = p_68), g_211)), l_268))))) , p_66.f0), l_283))), l_284), p_65, l_285), 5));
                for (g_95 = (-14); (g_95 > 15); g_95 = safe_add_func_uint16_t_u_u(g_95, 2))
                {
                    unsigned l_306 = 1UL;
                    union U0 l_307 = {8L};
                    l_141 = (((l_128 = (l_285 , 0UL)) , (l_283 , g_95)) && g_201);
                    g_129 = l_243;
                    p_68 = (safe_mod_func_int16_t_s_s(p_65, (l_202 && (p_65 > (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_269, ((g_95 | ((((safe_unary_minus_func_int32_t_s((l_131 = (l_128 >= g_95)))) <= ((g_97 < l_284) != l_295)) < g_129) <= l_296)) < 0xE32EA369L))), l_121.f0))))));
                    for (l_212 = 0; (l_212 > 27); ++l_212)
                    {
                        short l_314 = 9L;
                        char l_315 = (-1L);
                        int l_316 = (-1L);
                        g_129 = (safe_sub_func_uint32_t_u_u(((((p_66.f0 = (safe_lshift_func_uint16_t_u_u((l_303 = ((l_120 > l_295) ^ g_97)), ((~(safe_add_func_int32_t_s_s(g_100.f0, g_269))) , ((l_306 = ((l_148 , p_66.f1) , 7L)) , p_66.f0))))) , 0x329BA1BEL) | l_212) >= g_201), l_268));
                        l_316 = (p_68 = (g_129 = ((((((l_295 = ((g_228 < ((l_307 , (((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s(p_66.f0, p_66.f0)) ^ (p_65 , l_307.f1)) && (((g_97 != ((g_201 = 0x18L) < (l_314 = p_66.f1))) && (-1L)) < g_95)), l_315)), p_66.f1)) < g_14) , p_66.f1)) > 0xC71066C9L)) | p_66.f0)) && l_314) >= l_315) | p_67) >= l_153.f0) , g_211)));
                    }
                }
                l_128 = (safe_lshift_func_uint16_t_u_u(g_201, ((safe_add_func_uint16_t_u_u(l_295, (safe_mod_func_int32_t_s_s(l_227, (l_131 = l_282))))) > (safe_add_func_uint16_t_u_u(func_71(func_71((safe_rshift_func_int16_t_s_s(g_201, (((safe_rshift_func_int8_t_s_s(func_79(p_66, (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((!(safe_div_func_int8_t_s_s((g_14 & (safe_add_func_uint8_t_u_u(g_95, (safe_div_func_uint16_t_u_u((((((safe_sub_func_uint32_t_u_u(p_68, 8UL)) >= p_66.f1) , g_100.f1) | l_341) == l_242), (-1L)))))), l_282))), l_268)), l_272)), g_100.f1, l_154.f0), g_342)) > g_205) & g_342))), g_129, l_154, l_341), g_211, g_343, p_68), g_343.f0)))));
                g_129 = (l_141 = (l_350 = ((l_295 = (+1L)) & (((g_95 > g_269) != 9L) , (safe_sub_func_uint16_t_u_u(0x1327L, ((((p_68 = ((safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(l_128, g_129)) ^ g_205), (((((((func_71(((255UL == 0UL) | g_343.f1), l_303, g_343, p_66.f1) , p_68) , l_285) != 1UL) > l_283) != 0x6FD7L) == 0xEEL) || l_282))) <= p_66.f1)) == p_66.f0) && p_68) != p_66.f1)))))));
            }
            else
            {
                unsigned short l_361 = 1UL;
                int l_365 = 0x955CC557L;
                g_129 = (((((safe_add_func_uint8_t_u_u((((~(~((0xE8L || g_343.f1) & p_66.f0))) , ((g_100.f1 , (l_268 = (p_67 && (safe_rshift_func_uint16_t_u_u(g_228, 6))))) && 0x3DL)) < (safe_rshift_func_int16_t_s_u((p_67 != p_66.f1), g_100.f1))), (-2L))) <= g_95) && g_343.f0) & g_100.f0) != g_100.f0);
                p_68 = (p_68 ^ (safe_mod_func_uint16_t_u_u(((l_272 > (safe_lshift_func_uint16_t_u_u((l_362 = l_361), 0))) , g_343.f0), (safe_lshift_func_uint8_t_u_u(252UL, 2)))));
                l_365 = l_153.f1;
                g_129 = ((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((~(safe_div_func_int8_t_s_s(((l_141 = 4294967291UL) , (safe_div_func_uint32_t_u_u(((func_79(p_66, (safe_add_func_uint16_t_u_u((func_71(p_66.f0, l_376, g_343, (safe_mod_func_int16_t_s_s(l_379, ((((l_212 || (safe_sub_func_uint32_t_u_u(((g_95 > (safe_rshift_func_int16_t_s_s((l_243 = (safe_rshift_func_int8_t_s_s(l_154.f0, g_269))), 14))) | 2L), 0x4725BD99L))) ^ g_14) , 0x14L) & l_361)))) | 0xA3DA3759L), g_343.f0)), l_265, g_129) > g_228) && g_343.f0), 4294967293UL))), l_266))), l_365)), p_68)) >= 0xDE70E6D6L);
            }
            g_129 = (safe_mod_func_int8_t_s_s((+0L), (g_97 = (safe_sub_func_int8_t_s_s(l_268, (l_121 , ((g_211 >= (p_65 | p_66.f1)) && (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((g_100.f1 | ((safe_mod_func_int16_t_s_s((p_66.f1 = (safe_mod_func_uint8_t_u_u((g_95 ^ ((safe_rshift_func_uint16_t_u_s((l_242 && 0x5A4BL), l_341)) && g_205)), g_129))), l_303)) & p_67)), 0x17L)), 4294967292UL)))))))));
            l_243 = 0L;
        }
        else
        {
            unsigned char l_400 = 0x2BL;
            int l_401 = (-9L);
            g_129 = p_67;
            if (l_400)
            {
                g_129 = g_129;
                p_68 = (0xA60AF580L || (p_68 < g_211));
                l_401 = g_205;
            }
            else
            {
                unsigned l_404 = 0x26210A3DL;
                p_68 = (g_100 , (safe_lshift_func_uint8_t_u_u(l_121.f0, 0)));
                l_404 = p_65;
            }
            g_129 = 0x8C1580B8L;
        }
    }
    else
    {
        short l_407 = 0xA4B4L;
        int l_420 = (-6L);
        int l_421 = 0xBBEEDE6CL;
        int l_457 = 1L;
        union U0 l_464 = {0x3743L};
        unsigned l_465 = 0x438D2ED1L;
        unsigned l_568 = 4294967290UL;
        union U0 l_569 = {-1L};
        union U0 l_604 = {0x66D8L};
        unsigned char l_618 = 0x4BL;
        const unsigned l_623 = 0xF788F537L;
        unsigned l_648 = 0UL;
        l_407 = (l_242 || (safe_rshift_func_uint16_t_u_u(l_242, 6)));
        if (((safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(p_66.f0, l_407)), (g_97 = l_414))) == (l_407 == (l_421 = (l_420 = (((+((g_201 == 255UL) > (p_67 , (((safe_add_func_int8_t_s_s(p_65, ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((((p_65 , l_130) != l_407) , l_407) ^ 0x091BL))), p_66.f0)) , g_129))) <= p_66.f1) > g_205)))) & g_201) == l_120))))))
        {
            unsigned short l_441 = 0x7AFCL;
            int l_448 = 0x42DC938AL;
            union U0 l_451 = {1L};
            short l_454 = 1L;
            for (g_228 = 1; (g_228 >= 35); ++g_228)
            {
                unsigned short l_428 = 0x7282L;
                char l_442 = 0x93L;
                for (p_68 = 0; (p_68 > (-2)); p_68 = safe_sub_func_uint16_t_u_u(p_68, 9))
                {
                    int l_429 = 0x9F1FF219L;
                    int l_444 = 0x5D71E60BL;
                    g_129 = (safe_div_func_int8_t_s_s(l_428, l_429));
                    if ((65527UL | (g_269 == (safe_sub_func_uint16_t_u_u((((p_66.f1 , (g_211 || (p_65 & l_428))) , (1UL >= (0x9CDAL >= (g_100.f1 = g_343.f0)))) > l_242), 0x014BL)))))
                    {
                        unsigned char l_432 = 255UL;
                        int l_436 = 0xF508AB53L;
                        l_436 = (func_71(g_100.f0, (g_211 = (p_66 , (g_342 = (p_65 = (g_342 || ((((l_432 > (safe_unary_minus_func_uint32_t_u((p_66.f1 > (safe_rshift_func_int16_t_s_s((l_420 != (g_14 != (g_129 = (+l_362)))), 12)))))) , func_79(g_343, l_421, l_429, l_429)) , p_65) , g_95)))))), g_100, g_343.f0) | g_228);
                    }
                    else
                    {
                        return p_66.f1;
                    }
                    g_129 = (safe_lshift_func_int8_t_s_s(g_201, (l_428 & (p_66.f0 < ((g_445 = func_79(g_100, g_269, (g_343.f0 = (l_441 = g_269)), ((((l_443 = ((g_201 , (p_68 , ((((l_429 = (((p_68 <= 0x53L) , 0x44L) && l_429)) >= 4L) > 0x62L) != l_442))) , 0x1903L)) >= l_444) == l_414) | 0UL))) ^ p_65)))));
                    l_444 = p_65;
                }
                for (l_121.f0 = 24; (l_121.f0 == (-7)); l_121.f0--)
                {
                    g_129 = g_205;
                    g_129 = 0x9B5A2691L;
                    return p_66.f0;
                }
                l_448 = l_441;
            }
            g_129 = (l_420 = (safe_mod_func_uint8_t_u_u((p_66 , func_79(l_451, g_97, (safe_rshift_func_int16_t_s_u((l_454 = l_130), 4)), g_100.f1)), (g_201 = g_445))));
            g_129 = l_407;
        }
        else
        {
            l_128 = p_68;
            p_68 = g_211;
            g_129 = g_205;
        }
        if ((safe_rshift_func_int16_t_s_s(((((p_65 = (p_66.f1 >= (l_457 , 0UL))) ^ 1L) != ((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((func_79(g_343, func_79(l_464, l_121.f1, ((5UL | (((0x3951L & p_67) & g_211) > 0xBE80L)) != l_242), g_343.f1), l_121.f0, p_66.f1) <= 0xC53933C4L), l_465)), g_342)), 0xD2L)) < p_66.f1)) >= p_66.f1), l_376)))
        {
            int l_477 = 0x22852FF6L;
            union U0 l_501 = {-1L};
            if (g_201)
            {
                l_421 = (g_129 = (~0xFCFFB79BL));
                return l_212;
            }
            else
            {
                char l_490 = 0x95L;
                int l_511 = 1L;
                for (p_66.f1 = 0; (p_66.f1 >= 1); p_66.f1 = safe_add_func_uint16_t_u_u(p_66.f1, 9))
                {
                    unsigned l_476 = 1UL;
                    int l_491 = 0xB00099B8L;
                    g_129 = (+(safe_mod_func_int8_t_s_s((g_14 && (65531UL != 5L)), ((-4L) ^ ((l_491 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(g_445, (((safe_sub_func_int8_t_s_s((l_476 ^ ((g_201 = ((l_477 = p_66.f1) != p_65)) && (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(l_477, 0L)), 0x245CL)) & g_205) , g_211), p_65)) <= p_67), 7)), l_490)), 0x9CL)))), g_211)) , 7L) <= p_67))), p_65))) != 0x80DC45C5L)))));
                    if ((safe_div_func_int32_t_s_s(l_490, (l_490 & func_79(g_100, l_414, (+((func_79(p_66, l_120, p_67, p_67) || 0xAFL) | g_205)), g_14)))))
                    {
                        short l_496 = 0L;
                        l_496 = (safe_rshift_func_int16_t_s_u(0L, 13));
                    }
                    else
                    {
                        union U0 l_510 = {-1L};
                        int l_512 = 0xC2D6B6B8L;
                        if (l_465)
                            break;
                        l_457 = g_95;
                        l_512 = ((safe_rshift_func_uint8_t_u_s((((safe_mod_func_int8_t_s_s((+(l_501 , (l_511 = ((p_68 || l_477) != ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((func_79(p_66, (safe_mod_func_int8_t_s_s((l_120 = (-9L)), p_68)), (safe_sub_func_uint16_t_u_u(func_71(func_79(g_343, (l_510 , (g_14 == l_501.f1)), g_100.f0, l_490), g_205, g_343, g_211), g_445)), g_201) , p_68) > l_376) <= l_490), 1L)), l_420)) & p_65))))), l_510.f0)) , p_67) ^ l_491), 4)) != 2L);
                    }
                }
                return g_342;
            }
        }
        else
        {
            int l_516 = 0x9A7D0FC8L;
            union U0 l_574 = {0xA512L};
            unsigned short l_603 = 0x2B55L;
            unsigned l_636 = 2UL;
            int l_685 = 0xCCDF164EL;
            int l_710 = (-1L);
            int l_717 = 3L;
            unsigned l_753 = 3UL;
            for (g_205 = 12; (g_205 != 11); --g_205)
            {
                unsigned l_519 = 0x073E4375L;
                int l_520 = (-1L);
                union U0 l_528 = {1L};
                unsigned l_544 = 4294967294UL;
                unsigned short l_616 = 0x7860L;
                short l_644 = 0L;
                if ((l_464 , (!((l_421 = ((0xDFA4L && (l_457 = ((l_128 = ((+(l_517 = (l_414 < func_79(g_343, ((p_67 != (g_97 = p_68)) , ((1L > (safe_unary_minus_func_int16_t_s((l_464.f1 , ((g_269 == l_516) , 1L))))) > (-1L))), p_66.f1, l_202)))) >= 0x06588674L)) >= g_445))) , g_100.f1)) , 1L))))
                {
                    unsigned short l_523 = 0x8261L;
                    if (g_342)
                        break;
                    p_68 = (-1L);
                    l_516 = (l_520 = ((l_457 = ((((~p_66.f0) | (l_465 & g_100.f0)) || (-1L)) <= (l_420 = (p_67 != 1L)))) == (((((p_65 & ((safe_unary_minus_func_int8_t_s(p_65)) ^ (l_519 , l_519))) <= l_516) >= p_65) | p_66.f0) > p_65)));
                    l_523 = (l_520 = (safe_lshift_func_uint8_t_u_s(g_14, 6)));
                }
                else
                {
                    int l_531 = 0x79576AB0L;
                    int l_567 = (-1L);
                    if (((safe_div_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u((l_528 , (((safe_add_func_uint8_t_u_u(g_228, l_531)) || (safe_lshift_func_int16_t_s_u(g_211, 14))) <= (l_376 == l_528.f0))), 3)) , p_67) , (safe_lshift_func_uint16_t_u_s(((g_100.f0 == (g_343.f1 >= l_531)) < p_65), 3))), l_519)) != 0xFFL))
                    {
                        g_129 = (((g_228 & ((g_95 , (safe_div_func_uint16_t_u_u(func_79(g_100, (p_68 && g_211), l_443, (g_205 | (safe_rshift_func_uint8_t_u_s((((l_128 = l_362) | ((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((l_520 <= 1UL), 4294967295UL)), l_531)) > (-1L))) < l_528.f1), 5)))), g_211))) != l_544)) && 0x873CL) ^ l_516);
                    }
                    else
                    {
                        char l_555 = 0L;
                        p_68 = ((p_65 = func_79(g_100, (safe_rshift_func_uint8_t_u_u((l_520 >= ((l_303 < g_201) < l_531)), 7)), (!(safe_add_func_int8_t_s_s((g_97 = (safe_mod_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((g_343 , (p_68 || p_65)), ((safe_mod_func_uint32_t_u_u(0xF3B4F3A1L, l_555)) > p_66.f0))) > l_202), g_100.f1))), 0xB0L))), g_14)) >= 0xBA57A7EDL);
                        return p_68;
                    }
                    l_520 = ((safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s((~((l_567 = ((p_66.f0 ^ (((((~(safe_rshift_func_uint8_t_u_u(func_79(g_100, (((p_65 = func_79(g_100, (safe_div_func_uint32_t_u_u(p_68, (l_531 ^ (l_516 = (safe_lshift_func_int8_t_s_s(((l_121 , 0xA34E4B48L) , 0x71L), 5)))))), func_79(g_100, g_211, l_128, l_566), p_67)) != p_67) >= g_342), l_531, p_66.f0), l_465))) < 0xD0L) >= p_66.f1) == 0xE2DBFF06L) || g_14)) <= 0xBAF4L)) > l_568)), l_303)), 0x24L)) <= p_66.f0);
                    p_68 = ((((((func_79(l_569, (safe_mul_func_int16_t_s_s(func_79(p_66, (((safe_mod_func_int32_t_s_s(p_68, (l_516 = g_445))) != (func_79(l_574, l_574.f0, p_65, l_574.f1) ^ p_66.f1)) >= p_65), g_342, l_531), 0UL)), l_528.f0, p_66.f0) < 0x8EAFF37AL) && g_14) == g_14) >= g_129) && g_95) || l_544);
                }
                if (p_68)
                {
                    unsigned short l_577 = 1UL;
                    char l_611 = 0x94L;
                    int l_634 = 0x61473327L;
                    int l_640 = 0xCF7D4871L;
                    unsigned char l_645 = 255UL;
                    if (p_67)
                        break;
                    for (l_520 = 0; (l_520 != (-6)); l_520 = safe_sub_func_uint8_t_u_u(l_520, 5))
                    {
                        unsigned l_588 = 1UL;
                        g_129 = (l_577 == (((((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((p_68 > l_574.f1), (l_516 = (safe_add_func_int16_t_s_s(0xE972L, (p_66.f1 = (((safe_lshift_func_uint16_t_u_u(p_66.f0, g_211)) >= g_343.f0) > l_588))))))), (safe_sub_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((g_343 , g_269) && 65535UL), l_593)) == 0x3ED9L) < g_228), 248UL)))), l_574.f0)) | p_65) != g_445) , p_65) >= l_569.f0));
                    }
                    if (func_71(func_71(l_577, p_66.f0, g_100, l_121.f0), ((g_594 = (g_211 || l_577)) || ((g_599 = ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_421, g_343.f0)), 255UL)) > p_66.f0)) >= g_228)), p_66, g_269))
                    {
                        union U0 l_600 = {5L};
                        int l_617 = (-1L);
                        g_129 = func_79(l_600, (safe_div_func_uint32_t_u_u(0x71252823L, (l_603 , g_129))), (func_71((p_68 = func_79(l_604, (l_457 = (l_617 = ((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((((l_574.f1 && (!((g_599 , (safe_add_func_int8_t_s_s((((l_611 ^ (safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_int16_t_s_u(l_544, p_68)) & 0x1E299AFCL) | l_544) | 0x09L), g_228))) && g_211) ^ 1L), p_66.f1))) , l_577))) , 248UL) >= l_616) <= 0xBDABL) >= g_342), g_211)), g_100.f0)) , l_577))), g_100.f0, l_574.f0)), l_618, p_66, g_599) >= l_202), p_66.f0);
                        l_635 = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(l_623, (safe_mod_func_int16_t_s_s(p_68, (((safe_div_func_int8_t_s_s(((safe_div_func_int32_t_s_s((((safe_add_func_int8_t_s_s(p_66.f1, 246UL)) , ((safe_mod_func_int16_t_s_s(0xD02AL, p_68)) , (func_71((l_528.f0 < ((func_71(p_68, g_594, p_66, g_269) > l_634) < l_464.f1)), p_66.f0, g_343, p_65) , p_67))) , (-1L)), p_65)) | p_66.f0), 1L)) , 255UL) || p_67))))), p_67));
                    }
                    else
                    {
                        union U0 l_639 = {0x362CL};
                        g_129 = (l_636 <= p_67);
                        g_129 = g_342;
                        g_129 = (((((safe_div_func_uint8_t_u_u(1UL, (l_420 = func_79(l_639, l_640, p_67, func_79(p_66, (0x7A51L && (g_14 > ((!g_594) ^ func_71((safe_rshift_func_uint8_t_u_s(g_205, l_636)), g_445, g_643, l_644)))), p_66.f1, g_269))))) , l_645) <= l_574.f0) <= 1L) && 0xC9A85D74L);
                        g_129 = (!p_67);
                    }
                }
                else
                {
                    for (l_465 = 0; (l_465 != 55); l_465 = safe_add_func_int32_t_s_s(l_465, 1))
                    {
                        p_68 = p_65;
                    }
                }
                if (l_648)
                    break;
                l_457 = (safe_rshift_func_int16_t_s_u(((g_228 = p_67) < (safe_mod_func_uint8_t_u_u(((func_71(((safe_div_func_uint16_t_u_u(p_65, g_445)) < ((safe_rshift_func_int16_t_s_s((p_66.f1 || l_516), 10)) > (((safe_add_func_uint16_t_u_u((l_414 ^ (func_79(g_343, (func_71(g_445, (l_520 = (9UL != l_202)), p_66, l_414) ^ (-1L)), g_594, g_343.f1) , g_343.f0)), p_66.f1)) != 4294967293UL) >= g_342))), l_519, l_121, p_67) < 0x6DL) || 0x6EL), l_120))), 12));
            }
            p_68 = (func_71(g_643.f1, p_67, l_121, p_67) < g_205);
            for (g_343.f1 = 0; (g_343.f1 > (-22)); g_343.f1 = safe_sub_func_uint32_t_u_u(g_343.f1, 8))
            {
                unsigned l_689 = 0xB8862474L;
                int l_697 = 0L;
                char l_709 = 0xD5L;
                union U0 l_738 = {9L};
                char l_752 = 9L;
                if ((safe_sub_func_int8_t_s_s((p_66.f1 | p_66.f1), (((l_128 = (g_599 ^ (p_66.f1 ^ (l_457 = (p_68 = (func_79(p_66, (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(2L, 14)), 4)), p_67, p_67) || l_603)))))) , p_68) < p_66.f0))))
                {
                    unsigned l_696 = 0UL;
                    l_420 = ((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((p_66.f1 == (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((l_516 = g_342) > (safe_sub_func_uint32_t_u_u(p_68, ((((~(safe_rshift_func_int16_t_s_u(((l_120 = (safe_add_func_uint16_t_u_u(0x9F19L, g_599))) || (safe_sub_func_uint8_t_u_u(func_71((g_129 = ((p_65 > (safe_sub_func_int8_t_s_s(g_201, (((l_685 = l_202) || g_643.f0) & g_643.f1)))) < p_66.f1)), p_66.f1, g_343, g_201), p_66.f0))), l_648))) & 7UL) , l_574.f0) != p_66.f0)))), 0x03L)), l_574.f0))), 0x1BL)), 1UL)) <= 65534UL);
                    p_68 = (func_79(g_100, p_66.f1, (safe_unary_minus_func_int32_t_s(((((func_79(g_100, p_66.f1, (l_120 != (safe_div_func_int8_t_s_s(g_594, l_689))), ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint32_t_u_u(((g_97 = (l_516 = 0x09L)) < l_303), g_95)) >= p_66.f0), l_689)) >= l_696) >= 0x03L), 5L)) <= p_67)) == l_517) >= l_696) == l_574.f0) == 0x9932D405L))), p_65) < 0L);
                    g_129 = (l_120 = p_66.f0);
                }
                else
                {
                    unsigned short l_706 = 65535UL;
                    union U0 l_707 = {0x4B7BL};
                    l_697 = 5L;
                    l_697 = (safe_add_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u(((l_603 ^ func_79(l_121, (0x57881B9DL || (l_689 != (((((g_97 ^ (p_68 = (246UL | (safe_mod_func_int32_t_s_s(p_65, (2UL & (safe_add_func_int16_t_s_s(0x74D9L, 1L)))))))) >= g_201) || g_205) <= g_342) | 4294967291UL))), p_66.f0, g_97)) <= 4294967292UL), 9)) && g_205) ^ g_445), 0x9AC2L));
                    if (g_129)
                        break;
                    l_710 = func_79(g_643, (((l_708 = ((g_100 , (l_566 || (((l_706 = l_689) <= func_71(p_67, l_636, (l_569 = l_707), g_129)) , l_516))) & p_67)) , g_342) , 18446744073709551615UL), l_566, l_709);
                }
                l_697 = l_689;
                p_68 = ((((func_71(p_67, (l_421 = (((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(l_689, g_445)), (l_710 = (g_97 ^ (0x5FL != g_445))))) ^ (safe_add_func_uint32_t_u_u(l_516, g_343.f0))) , (p_65 = l_717))), l_718, g_719) >= l_697) != l_121.f1) >= p_68) , 0x8FB2E47BL);
                for (l_464.f0 = 28; (l_464.f0 < 29); l_464.f0 = safe_add_func_int32_t_s_s(l_464.f0, 9))
                {
                    int l_737 = 0L;
                    union U0 l_741 = {0xF970L};
                    for (l_303 = 0; (l_303 < 35); l_303 = safe_add_func_int16_t_s_s(l_303, 6))
                    {
                        return g_342;
                    }
                    g_129 = (g_14 , (((safe_rshift_func_uint8_t_u_s(func_71((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(func_79(l_574, ((safe_add_func_int8_t_s_s(0L, ((func_71(l_732, l_457, p_66, ((-1L) || ((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((((func_71(l_717, (l_604.f1 != g_594), l_574, l_689) != 0xFCL) < l_709) & l_737), p_66.f1)), p_68)) != g_201))) != p_67) >= p_66.f1))) , p_67), p_66.f1, l_120), p_65)), l_737)), p_66.f1, l_738, l_738.f0), g_445)) == p_66.f0) & (-6L)));
                    g_129 = ((((g_594 , (p_67 == (safe_div_func_uint8_t_u_u((l_737 >= func_79(l_741, g_643.f0, g_269, (safe_add_func_int8_t_s_s((!(safe_mod_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_add_func_uint8_t_u_u(func_71(((l_718.f0 > p_67) | (p_68 == p_65)), l_603, g_100, p_68), 255UL)), l_242)), l_752)) | l_603), p_66.f0))), 0x01L)))), g_445)))) || 5UL) | l_738.f1) <= l_753);
                }
            }
            g_129 = 0x65666A65L;
        }
    }
    if (g_100.f0)
    {
        short l_766 = 0xA452L;
        const unsigned l_775 = 18446744073709551615UL;
        union U0 l_780 = {6L};
        int l_781 = 0xC036BF5AL;
        g_129 = (l_131 = 0xC1B4F73DL);
        p_68 = ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((p_65 & (g_599 = l_128)) == (((safe_rshift_func_uint16_t_u_s(((safe_div_func_int16_t_s_s((+(safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(func_79(p_66, (p_66.f1 | (g_97 = (g_201 ^ p_68))), p_66.f0, p_67), g_343.f1)) != g_228), l_766))), 0x5381L)) , l_121.f1), l_376)) , g_95) || l_362)), l_732)), 0)) & 255UL) <= p_68) <= g_205);
        p_68 = ((1L | func_71(((l_781 = ((((((safe_div_func_uint16_t_u_u((func_71(p_66.f1, (p_65 = 6UL), (((safe_add_func_uint32_t_u_u(p_68, (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_120 = (l_775 && (safe_mod_func_int32_t_s_s(l_517, (g_129 = ((safe_lshift_func_int16_t_s_u((g_599 < p_66.f1), 10)) , func_79(p_66, l_775, g_129, p_66.f1))))))), p_68)), g_211)))) < l_593) , l_780), g_643.f0) <= 7UL), g_342)) <= l_566) , p_66.f0) && l_775) , l_202) , 0x1DL)) || p_68), l_708, g_343, p_68)) & g_211);
        p_68 = func_79(l_121, ((safe_sub_func_uint8_t_u_u(g_100.f0, (((0UL < p_68) == func_79(g_643, p_66.f1, g_643.f0, (l_781 = p_65))) || p_65))) ^ 9UL), l_718.f0, p_66.f0);
    }
    else
    {
        union U0 l_795 = {0L};
        int l_796 = 3L;
        p_68 = ((safe_div_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(4UL, (5UL | (safe_rshift_func_int16_t_s_s(g_343.f0, 14))))) | (((+(safe_unary_minus_func_uint8_t_u((3L || p_67)))) > g_14) < l_732)) | (((l_131 = (safe_mod_func_int32_t_s_s(p_66.f1, (safe_mod_func_uint32_t_u_u(func_79(l_795, l_795.f0, g_201, p_67), 0x1B3E8127L))))) == 0x1AL) == g_343.f0)), 8L)) || l_795.f0);
        l_796 = p_66.f1;
        for (g_643.f0 = 0; (g_643.f0 != (-22)); g_643.f0--)
        {
            union U0 l_807 = {0L};
            unsigned l_808 = 0x73DD1F67L;
            p_68 = g_445;
            l_808 = (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(l_131, (safe_sub_func_int16_t_s_s((p_66.f1 = ((func_79(((l_807 = ((~(l_120 = (((g_14 < (l_128 = 0x75F2L)) | g_643.f0) || (g_594 <= g_228)))) , (g_97 , g_643))) , p_66), g_343.f1, g_343.f0, g_599) ^ g_100.f1) != (-6L))), 0x434EL)))), 0)), 3)) && g_594) & 0x38L);
        }
    }
    return g_643.f1;
}







static short func_71(int p_72, unsigned p_73, union U0 p_74, int p_75)
{
    union U0 l_104 = {0xB248L};
    short l_115 = (-1L);
    char l_118 = 1L;
    short l_119 = 0xC627L;
    l_119 = ((safe_rshift_func_int8_t_s_s(func_79(l_104, func_79((p_73 , l_104), (safe_rshift_func_uint16_t_u_s(65531UL, ((g_100 = g_100) , (safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(l_115, 0)), 2UL)) , (g_100.f1 & ((func_79(p_74, g_100.f0, p_74.f1, l_104.f0) , g_97) < l_115))) > l_115), p_75)), g_100.f0))))), l_104.f1, l_104.f1), l_118, p_75), 6)) , 2L);
    return l_104.f0;
}







static unsigned char func_79(union U0 p_80, unsigned p_81, short p_82, short p_83)
{
    unsigned short l_87 = 0x8BE3L;
    int l_94 = 1L;
    int l_96 = 0xACF6402DL;
    int l_98 = 6L;
    l_87 = (safe_rshift_func_uint8_t_u_u(p_82, 6));
    l_98 = ((g_97 = ((safe_rshift_func_uint16_t_u_u(((p_81 < 1L) == p_80.f1), g_14)) , (((~g_14) , ((safe_sub_func_uint8_t_u_u((l_96 = (g_95 = (((l_94 = (g_14 , ((p_80.f1 > (safe_rshift_func_uint8_t_u_s((!g_14), (((g_14 <= g_14) < l_87) & l_87)))) , 0x05572BF2L))) <= 1L) && 65535UL))), 0x7DL)) >= g_14)) & p_83))) , g_14);
    return l_96;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    transparent_crc(g_40.f1, "g_40.f1", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_48.f1, "g_48.f1", print_hash_value);
    transparent_crc(g_48.f2, "g_48.f2", print_hash_value);
    transparent_crc(g_48.f3, "g_48.f3", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_343.f0, "g_343.f0", print_hash_value);
    transparent_crc(g_343.f1, "g_343.f1", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_643.f0, "g_643.f0", print_hash_value);
    transparent_crc(g_643.f1, "g_643.f1", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_893, "g_893", print_hash_value);
    transparent_crc(g_927, "g_927", print_hash_value);
    transparent_crc(g_950.f2, "g_950.f2", print_hash_value);
    transparent_crc(g_957.f0, "g_957.f0", print_hash_value);
    transparent_crc(g_957.f1, "g_957.f1", print_hash_value);
    transparent_crc(g_957.f2, "g_957.f2", print_hash_value);
    transparent_crc(g_996.f0, "g_996.f0", print_hash_value);
    transparent_crc(g_996.f1, "g_996.f1", print_hash_value);
    transparent_crc(g_996.f2, "g_996.f2", print_hash_value);
    transparent_crc(g_1022.f2, "g_1022.f2", print_hash_value);
    transparent_crc(g_1088, "g_1088", print_hash_value);
    transparent_crc(g_1140.f0, "g_1140.f0", print_hash_value);
    transparent_crc(g_1140.f1, "g_1140.f1", print_hash_value);
    transparent_crc(g_1140.f2, "g_1140.f2", print_hash_value);
    transparent_crc(g_1140.f3, "g_1140.f3", print_hash_value);
    transparent_crc(g_1151.f0, "g_1151.f0", print_hash_value);
    transparent_crc(g_1151.f1, "g_1151.f1", print_hash_value);
    transparent_crc(g_1151.f2, "g_1151.f2", print_hash_value);
    transparent_crc(g_1151.f3, "g_1151.f3", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
