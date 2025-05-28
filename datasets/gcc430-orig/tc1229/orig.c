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
   short f1;
   const unsigned f2;
};

struct S1 {
   unsigned char f0;
   struct S0 f1;
   unsigned f2;
   short f3;
   const short f4;
   int f5;
};

struct S2 {
   long long f0;
   const int f1;
};

struct S3 {
   unsigned char f0;
   unsigned char f1;
   struct S0 f2;
   struct S2 f3;
   int f4;
   unsigned short f5;
};

struct S4 {
   int f0;
   char f1;
   int f2;
};


static struct S3 g_19 = {0x43L,0x3EL,{0x3AL,0x221EL,0xC5F93BE4L},{-6L,-7L},-3L,0x1BB3L};
static long long g_32 = 0xA862252705104E0BLL;
static int g_33 = (-5L);
static short g_39 = 1L;
static short g_40 = (-1L);
static struct S4 g_78 = {3L,-4L,1L};
static unsigned g_190 = 1UL;
static unsigned long long g_194 = 0x821AC23313194CD0LL;
static int g_230 = (-1L);
static struct S3 g_237 = {1UL,9UL,{0x8AL,0x1F78L,5UL},{1L,0x155B06E9L},-7L,65535UL};
static unsigned g_332 = 18446744073709551615UL;
static int g_333 = 0x36B3A9FCL;
static char g_355 = 3L;
static struct S4 g_428 = {1L,0xF2L,0x848C472AL};
static unsigned g_450 = 0x3844ACF8L;
static long long g_512 = 8L;
static char g_751 = 0x00L;
static const struct S2 g_785 = {0L,7L};
static unsigned g_796 = 4294967295UL;



static const struct S3 func_1(void);
static struct S4 func_2(unsigned char p_3, char p_4, long long p_5, const struct S2 p_6, int p_7);
static unsigned char func_10(const struct S1 p_11);
static const struct S1 func_12(short p_13, struct S4 p_14);
static short func_15(struct S3 p_16, long long p_17, long long p_18);
static struct S4 func_22(short p_23, unsigned long long p_24, unsigned short p_25, short p_26);
static unsigned long long func_50(long long p_51, long long p_52);
static unsigned func_58(unsigned long long p_59, struct S4 p_60, int p_61, struct S3 p_62, int p_63);
static unsigned long long func_68(const struct S3 p_69, unsigned p_70, struct S4 p_71, unsigned char p_72);
static const struct S3 func_73(char p_74, int p_75);
static const struct S3 func_1(void)
{
    int l_27 = 0x76463A47L;
    int l_28 = 1L;
    int l_31 = 0x55A9D45CL;
    int l_34 = 0L;
    struct S4 l_881 = {-1L,0L,0x4B8D4815L};
    unsigned short l_882 = 65535UL;
    const struct S3 l_883 = {0x11L,3UL,{0x19L,-9L,0UL},{0xA2BF4E05D3843BCALL,-1L},0x4F57C437L,4UL};
    l_881 = func_2((safe_add_func_uint8_t_u_u(func_10(func_12(func_15(g_19, g_19.f5, g_19.f2.f1), func_22(l_27, l_27, (l_28 = l_27), ((safe_lshift_func_int8_t_s_s(((g_32 = (l_31 = l_27)) || ((l_27 ^ g_33) & l_27)), l_34)) | l_34)))), (-1L))), g_512, l_27, g_785, l_27);
    g_428.f2 = (1L == (((l_27 > l_882) | g_33) < g_39));
    return l_883;
}







static struct S4 func_2(unsigned char p_3, char p_4, long long p_5, const struct S2 p_6, int p_7)
{
    short l_840 = 0x5C7CL;
    int l_876 = 9L;
    struct S4 l_880 = {0L,9L,1L};
    g_428.f2 = g_355;
    for (g_237.f0 = 13; (g_237.f0 != 15); g_237.f0++)
    {
        short l_788 = 0xD5B7L;
        int l_793 = 1L;
        int l_799 = (-9L);
        struct S4 l_812 = {0x22CE8934L,0x79L,0x54B87B46L};
        p_7 = l_788;
        if (p_6.f0)
        {
            unsigned short l_790 = 0xA368L;
            struct S4 l_813 = {-10L,0L,0xD91BE041L};
            g_78.f0 = (safe_unary_minus_func_uint16_t_u((l_790 || ((p_3 | (safe_sub_func_int16_t_s_s(((l_793 = l_790) >= (~(65535UL >= (((safe_div_func_int16_t_s_s(p_7, g_796)) >= 0xA2L) <= g_237.f2.f1)))), (((safe_mod_func_uint16_t_u_u(l_788, l_790)) != g_19.f0) > l_799)))) <= p_6.f1))));
            p_7 = (safe_mod_func_uint64_t_u_u(g_237.f3.f0, (l_790 & (p_6.f0 | func_68(g_19, (l_799 = (g_237.f5 == (safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(g_332, p_6.f0)), (safe_mod_func_int16_t_s_s(g_19.f3.f1, (safe_rshift_func_uint8_t_u_u(((l_793 > 0xB7EFL) ^ g_751), 0)))))), 3)))), l_812, g_19.f5)))));
            l_813 = g_428;
        }
        else
        {
            struct S3 l_827 = {253UL,255UL,{0x17L,-2L,0UL},{0L,-1L},0L,0x8442L};
            int l_879 = 0xDF70B666L;
            p_7 = (safe_rshift_func_int8_t_s_u(0x6FL, g_355));
            for (g_78.f2 = 0; (g_78.f2 != (-9)); g_78.f2--)
            {
                unsigned l_828 = 4294967295UL;
                int l_851 = (-1L);
                g_428.f2 = 0xDCC7A23FL;
                if (g_512)
                {
                    struct S4 l_818 = {-1L,0L,0x117F3624L};
                    if (p_6.f1)
                        break;
                    return l_818;
                }
                else
                {
                    char l_831 = 0x5DL;
                    g_428 = func_22((safe_div_func_int32_t_s_s(0L, g_19.f3.f1)), p_6.f1, (p_6.f1 & (l_799 = 5UL)), (safe_rshift_func_uint16_t_u_u((l_812.f0 = (p_7 <= ((safe_lshift_func_uint8_t_u_s(((func_15(l_827, l_827.f5, (p_5 = l_793)) >= 0xDA5EL) >= l_828), p_3)) == g_237.f3.f0))), 9)));
                    for (l_827.f0 = 0; (l_827.f0 != 13); l_827.f0 = safe_add_func_int16_t_s_s(l_827.f0, 7))
                    {
                        p_7 = (l_831 <= g_78.f1);
                    }
                    g_428.f2 = (safe_div_func_uint64_t_u_u(7UL, (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(1L, (safe_lshift_func_int16_t_s_s((g_19.f2.f2 < ((0x02E3L ^ l_840) == (safe_mod_func_int32_t_s_s((~(+((g_40 & (g_33 > g_78.f0)) ^ (l_851 = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((g_785.f1 != 0x6A67L), 2)), g_450)), 0x2B649824L)))))), g_190)))), 2)))), 2))));
                }
                g_428.f0 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_851, l_827.f1)), (safe_sub_func_int16_t_s_s((!(safe_lshift_func_int8_t_s_s((g_332 == (safe_sub_func_int32_t_s_s(p_7, (l_840 | ((+((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_78.f2, 4)), l_828)) && (g_751 = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(l_876, 3)) & (safe_add_func_int8_t_s_s(((p_6.f1 ^ p_6.f1) < l_827.f0), l_851))), 9)))) || g_78.f2) ^ l_812.f0), p_6.f0)), p_6.f0)) | p_5), 7)) > l_840)) == g_39))))), g_19.f3.f0))), p_5))));
            }
            l_879 = (l_827.f4 = g_78.f2);
        }
        g_237.f4 = 0L;
        g_78.f2 = g_796;
    }
    return l_880;
}







static unsigned char func_10(const struct S1 p_11)
{
    long long l_568 = (-7L);
    int l_570 = 0xD4BD7CB1L;
    int l_571 = (-4L);
    int l_594 = 1L;
    int l_604 = 1L;
    int l_606 = 6L;
    struct S4 l_633 = {1L,0x49L,0xA6A74A65L};
    const struct S3 l_639 = {1UL,0xC0L,{0xD2L,0xD7E6L,1UL},{-4L,0x59E662BBL},0x4FCC6BF4L,0x3096L};
    unsigned long long l_665 = 5UL;
    for (g_78.f1 = 0; (g_78.f1 == (-19)); g_78.f1 = safe_sub_func_int16_t_s_s(g_78.f1, 4))
    {
        unsigned char l_559 = 1UL;
        int l_569 = 0x49B65213L;
        char l_591 = 0xC8L;
        struct S4 l_638 = {1L,-9L,-4L};
        struct S4 l_644 = {0xC00D0ABAL,1L,-4L};
        struct S3 l_670 = {0xB8L,0x76L,{0xC1L,-2L,0UL},{0x1E98EECDB26DBE55LL,1L},0xDF64A704L,0UL};
        char l_784 = 0x31L;
        for (g_32 = 0; (g_32 > (-16)); g_32 = safe_sub_func_uint8_t_u_u(g_32, 1))
        {
            g_333 = 0xA08C20A7L;
            if (p_11.f1.f2)
                continue;
            if (g_237.f0)
                break;
            return l_559;
        }
        if (((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((l_569 = (safe_add_func_int64_t_s_s((l_568 = 0xD690BDB1B2CE891DLL), g_32))) > l_570), 1)), ((0x417D8653L < (l_570 | (l_571 = 0x6BL))) <= ((g_237.f5 >= (safe_rshift_func_uint16_t_u_u((l_559 >= (g_39 = (((g_19.f0 > l_559) ^ (-10L)) <= g_19.f3.f1))), l_570))) ^ l_559)))), p_11.f3)) && g_237.f1))
        {
            char l_592 = (-9L);
            int l_593 = (-1L);
            struct S4 l_607 = {1L,0x54L,0x0161AB48L};
            const struct S3 l_671 = {1UL,0x1DL,{-1L,0x8214L,1UL},{0x9015836DDEB44E3DLL,-6L},-1L,0xBA8AL};
            struct S4 l_681 = {0L,-8L,0xE2734614L};
            if (l_571)
            {
                struct S3 l_584 = {0x42L,0x2CL,{8L,0x0BD3L,0x6DE2BC61L},{0x807B26FD2F073DC0LL,0x22350376L},0L,1UL};
                g_78.f2 = (safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((65531UL ^ (((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_11.f0, ((func_15(l_584, (safe_lshift_func_int8_t_s_u(0x75L, (l_592 = (0x07AFL >= func_15(g_237, (l_571 = ((((l_571 | ((safe_sub_func_uint8_t_u_u(0xF0L, (l_570 = g_333))) != p_11.f1.f1)) < l_584.f1) == l_591) ^ p_11.f5)), l_569))))), p_11.f5) | l_568) < 0xB3L))), 12)) != l_593) == l_593)) || p_11.f1.f2), g_237.f2.f1)), 11)) == l_594), l_594));
                l_584.f4 = (l_569 = (func_68(func_73((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_559, 7)) & l_592), (((((safe_unary_minus_func_uint16_t_u(l_592)) >= 1L) | func_15(func_73(((safe_add_func_int32_t_s_s(l_604, 1L)) >= ((((safe_unary_minus_func_int16_t_s(l_606)) || (0x6D5FA7A5AD6146F4LL == g_237.f2.f2)) <= 0x67F49F42L) == 0xB5F8CA4A355F0E27LL)), p_11.f1.f1), g_333, l_593)) != 0x562A23A6L) ^ p_11.f1.f0))), g_40), g_19.f3.f1, g_428, l_593) != l_592));
                g_428 = l_607;
            }
            else
            {
                struct S4 l_612 = {0x316F4C34L,-1L,-2L};
                g_237.f4 = (safe_lshift_func_int8_t_s_s(p_11.f0, g_332));
                for (g_33 = 2; (g_33 == 4); ++g_33)
                {
                    l_612 = g_78;
                    l_593 = (safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(9L, (safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s(g_237.f2.f1, g_19.f0)))))) >= (1UL <= g_19.f3.f1)), (0xD6EBL || 0xBF55L))), func_15(g_19, (p_11.f1.f1 >= 0x1BL), g_512)));
                }
                for (g_237.f4 = 0; (g_237.f4 <= 10); g_237.f4 = safe_add_func_int8_t_s_s(g_237.f4, 9))
                {
                    unsigned short l_626 = 0x703AL;
                    int l_631 = 0x325BE226L;
                    struct S4 l_632 = {0x4F378FACL,0xB8L,1L};
                    l_569 = (safe_sub_func_int16_t_s_s(p_11.f2, (l_631 = func_68(g_237, (g_332 = l_606), func_22(l_626, ((g_32 = g_19.f3.f1) == 0x288472955C9B4DF6LL), (safe_mul_func_uint8_t_u_u(g_230, (0xFA295F0477AA763DLL != (safe_rshift_func_uint8_t_u_u((g_237.f3.f0 ^ l_591), 0))))), g_19.f0), g_19.f4))));
                    l_633 = l_632;
                    for (g_428.f0 = 29; (g_428.f0 <= (-18)); g_428.f0 = safe_sub_func_int8_t_s_s(g_428.f0, 5))
                    {
                        unsigned l_636 = 0xBBCEC7ABL;
                        const struct S4 l_637 = {0x7651120CL,0xF3L,8L};
                        if (l_636)
                            break;
                        l_638 = l_637;
                    }
                }
                l_638.f2 = (func_68(l_639, (l_612.f0 = func_68(func_73((((safe_sub_func_uint16_t_u_u(func_15(l_639, g_19.f5, p_11.f5), (((((l_570 = p_11.f3) != (l_612.f1 | (g_194 = 8UL))) < ((~((safe_add_func_int8_t_s_s((l_638.f0 = (p_11.f1.f2 < l_638.f0)), 1L)) ^ l_607.f0)) == g_39)) | l_633.f2) & 0xFC2DE6B489127867LL))) != l_607.f2) ^ 0x1AL), l_591), p_11.f1.f2, l_644, p_11.f1.f1)), g_428, p_11.f5) <= (-5L));
            }
            for (g_237.f0 = 0; (g_237.f0 < 17); g_237.f0++)
            {
                unsigned char l_647 = 0x16L;
                g_19.f4 = func_15(l_639, g_237.f1, p_11.f4);
                g_428 = g_78;
                g_428 = (l_633 = func_22((l_647 = p_11.f3), (g_194 = ((l_607.f1 < g_450) && (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(g_428.f1, g_19.f2.f1)) >= l_638.f0), g_428.f0)), 15)))), (+(safe_sub_func_uint16_t_u_u(g_19.f4, ((p_11.f3 || l_593) != p_11.f0)))), g_332));
                l_570 = 9L;
            }
            if (((safe_div_func_int32_t_s_s(func_68(l_639, (((+0UL) == 0xD0EEL) || g_237.f4), (l_644 = g_78), (safe_mod_func_uint64_t_u_u((l_607.f2 <= 0xA358E148L), p_11.f4))), p_11.f5)) ^ 1L))
            {
                g_78.f0 = p_11.f1.f2;
            }
            else
            {
                struct S4 l_660 = {0xBB3DA56FL,0L,-1L};
                g_428 = g_428;
                g_428 = (l_660 = l_607);
                g_428 = g_78;
            }
            for (g_333 = (-21); (g_333 == (-10)); ++g_333)
            {
                int l_674 = 0x88EAA094L;
                if ((((safe_rshift_func_int8_t_s_s(g_450, 3)) < (-9L)) | (g_19.f2.f1 >= (l_638.f2 = l_665))))
                {
                    l_607.f0 = l_607.f1;
                }
                else
                {
                    unsigned l_679 = 0xF9ED6D21L;
                    int l_680 = 0x3A6A92ACL;
                    struct S4 l_682 = {0x9B1AE5C5L,0x50L,0x34D51881L};
                    for (g_19.f2.f1 = 16; (g_19.f2.f1 >= (-28)); g_19.f2.f1 = safe_sub_func_uint8_t_u_u(g_19.f2.f1, 3))
                    {
                        l_593 = l_607.f1;
                        if (p_11.f2)
                            break;
                        if (l_569)
                            continue;
                    }
                    for (l_607.f2 = 0; (l_607.f2 >= (-3)); l_607.f2 = safe_sub_func_int16_t_s_s(l_607.f2, 7))
                    {
                        l_644 = func_22(func_15(l_670, (l_593 = func_68(l_671, p_11.f3, func_22(l_671.f2.f1, (safe_mod_func_uint16_t_u_u(g_428.f0, func_15(func_73(l_674, (safe_rshift_func_int8_t_s_s(g_237.f4, ((l_671.f3.f0 != ((g_355 = g_78.f1) >= g_230)) >= p_11.f2)))), p_11.f0, l_593))), p_11.f5, g_237.f4), p_11.f1.f2)), g_237.f4), g_428.f1, p_11.f5, l_607.f2);
                        l_681 = func_22(p_11.f1.f0, l_671.f5, ((safe_rshift_func_uint8_t_u_s(g_332, 7)) >= (l_679 = p_11.f4)), (l_638.f2 = l_680));
                        l_682 = l_644;
                        if (p_11.f3)
                            break;
                    }
                }
            }
        }
        else
        {
            int l_684 = 0x580B9F68L;
            const struct S3 l_747 = {249UL,0x9BL,{0xECL,0x371EL,0xCB7CB88FL},{1L,0xC0A46DF9L},0L,0xD750L};
            int l_750 = 1L;
            if ((((safe_unary_minus_func_int64_t_s((-1L))) == l_633.f1) == (l_644.f0 = 0UL)))
            {
                unsigned l_699 = 0UL;
                int l_700 = 0x1F0680E7L;
                l_684 = g_19.f2.f0;
                l_571 = ((p_11.f4 || (-10L)) && (((-5L) | (safe_mod_func_int64_t_s_s(l_670.f2.f2, (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u((l_670.f4 = (l_700 = (g_237.f5 & ((((p_11.f1.f0 ^ ((p_11.f3 == (((+(safe_rshift_func_int16_t_s_s(l_638.f2, (((((g_19.f3.f0 = 0xCCD6D36DF2475DCCLL) <= l_591) || (-7L)) > 7UL) & 0xA462E102CABD1F33LL)))) | 0x78C5D1CE8DF31F3ALL) != 0L)) > p_11.f1.f1)) == l_699) > p_11.f0) != l_684)))), 7)) > g_39), 4))))) < l_684));
            }
            else
            {
                unsigned short l_704 = 0xAE33L;
                short l_713 = 0xC8C8L;
                int l_722 = 0x567FF729L;
                int l_725 = 0L;
                struct S3 l_733 = {250UL,0UL,{0xB9L,-2L,0x14ADE800L},{0x03EDFDB1C3A1BD0ALL,0x67939BEBL},-1L,0x810FL};
                unsigned l_738 = 0x7E7030BFL;
                for (g_237.f2.f0 = 0; (g_237.f2.f0 == 14); g_237.f2.f0 = safe_add_func_uint64_t_u_u(g_237.f2.f0, 1))
                {
                    int l_703 = 0x6243A36DL;
                    g_333 = ((l_703 = g_428.f0) >= (l_704 ^ (((g_355 = func_15(func_73((0xAC3AL <= (0x1EED3894630CB5DALL != ((p_11.f0 <= ((((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(l_704, (g_78.f2 & l_638.f2))) | (safe_sub_func_int64_t_s_s((l_713 < p_11.f2), (-4L)))), 5UL)) & l_684), g_332)) != l_638.f1) <= 0xC8E3C29101CE6886LL) > 0x2CL)) < g_19.f5))), l_684), g_19.f5, l_670.f5)) < l_638.f0) >= 0x4797L)));
                    if ((safe_lshift_func_int8_t_s_s((((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s((-8L), ((((safe_sub_func_int32_t_s_s(((l_722 = p_11.f3) & func_68(l_639, g_237.f2.f2, func_22(((safe_add_func_int8_t_s_s((0x3AL && l_684), l_704)) > (l_725 = g_194)), (safe_sub_func_int16_t_s_s(func_68(l_670, p_11.f0, g_428, l_703), 4UL)), g_19.f1, l_684), g_19.f2.f1)), g_237.f2.f2)) > p_11.f5) <= g_19.f2.f2) | l_684))), l_703)) <= l_570) && l_638.f1), 5)))
                    {
                        unsigned char l_728 = 250UL;
                        int l_734 = (-1L);
                        int l_735 = 1L;
                        struct S3 l_736 = {0x81L,0x09L,{0xF5L,-1L,0x5E488CB8L},{0x63EE397215692D5DLL,0x791CC0AEL},0L,0xE147L};
                        char l_737 = 7L;
                        if (p_11.f3)
                            break;
                        l_569 = ((l_728 = (g_19.f4 < l_639.f2.f2)) & p_11.f3);
                        g_78.f0 = ((safe_lshift_func_uint16_t_u_s(((func_15(func_73(g_19.f0, g_19.f2.f2), ((safe_rshift_func_int16_t_s_s(0x65F8L, func_15(l_733, (((~l_639.f4) != ((l_735 = (l_734 = g_32)) != 0x7A9E28B9L)) != (l_606 = (func_15(l_736, l_733.f2.f0, p_11.f1.f2) == g_428.f2))), l_737))) >= g_19.f2.f1), p_11.f1.f2) & 0xD66AL) || p_11.f4), 7)) > g_19.f2.f2);
                        return l_684;
                    }
                    else
                    {
                        return p_11.f0;
                    }
                }
                g_33 = ((p_11.f5 != l_638.f1) && (l_738 = ((l_722 = l_639.f3.f0) | p_11.f1.f2)));
                l_571 = (safe_mod_func_int64_t_s_s(((g_751 = (l_750 = ((safe_mod_func_uint64_t_u_u((+(g_194 = (~p_11.f2))), (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(func_15(l_733, p_11.f1.f1, (g_237.f3.f0 = func_68(l_747, (l_569 = 3UL), func_22((p_11.f3 >= g_19.f2.f0), ((safe_sub_func_int64_t_s_s((g_237.f0 == g_333), p_11.f1.f0)) != (-10L)), l_594, p_11.f1.f0), p_11.f1.f1))), g_19.f0)), p_11.f1.f1)))) <= p_11.f0))) != 18446744073709551606UL), p_11.f1.f1));
                for (l_713 = 17; (l_713 > (-11)); l_713 = safe_sub_func_uint16_t_u_u(l_713, 8))
                {
                    unsigned long long l_760 = 1UL;
                    int l_761 = 1L;
                    struct S3 l_762 = {0xD0L,7UL,{1L,0x3136L,0xB003DE8CL},{0x0D28004AF8196F3ELL,0xC610E706L},9L,0x0FF0L};
                    if ((func_15(l_670, (((safe_sub_func_uint32_t_u_u((!((g_19.f3.f0 = p_11.f0) <= (g_237.f3.f0 = func_15(l_733, l_569, g_512)))), ((l_722 = (~(1L || ((safe_mul_func_int16_t_s_s(l_747.f4, ((((safe_sub_func_uint64_t_u_u((l_760 = p_11.f3), p_11.f1.f1)) == g_40) == p_11.f2) > l_725))) || g_237.f0)))) < l_670.f2.f1))) >= l_761) > g_33), g_78.f1) >= p_11.f1.f2))
                    {
                        unsigned l_769 = 0x261E21F4L;
                        g_237.f4 = l_644.f2;
                        l_750 = ((func_15(l_762, (safe_lshift_func_uint8_t_u_s(g_355, 5)), ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_769 > func_15(l_639, (l_725 = p_11.f4), g_237.f3.f1)), (((((g_19.f0 <= l_747.f2.f0) != p_11.f2) < p_11.f5) != l_747.f3.f1) & l_747.f3.f1))), (-1L))) < 8UL)) > l_633.f2) ^ p_11.f2);
                    }
                    else
                    {
                        l_725 = (safe_mod_func_uint32_t_u_u((l_670.f4 = (0L == g_237.f2.f1)), (safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((0UL > (~0x67F7L)) > ((l_638.f2 > (safe_add_func_uint32_t_u_u((((p_11.f5 || l_747.f1) | (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_784, func_68(g_19, g_78.f1, g_78, g_512))), p_11.f4)), p_11.f1.f0))) <= p_11.f0), p_11.f4))) && 0L)), g_428.f2)), l_670.f5))));
                    }
                }
            }
            return p_11.f5;
        }
        return p_11.f3;
    }
    return l_639.f2.f0;
}







static const struct S1 func_12(short p_13, struct S4 p_14)
{
    char l_46 = (-5L);
    int l_49 = 4L;
    struct S3 l_101 = {8UL,0UL,{0x58L,-1L,0x5373E3C2L},{0xCCF6335B14A6E1C4LL,-5L},6L,0x61AEL};
    int l_358 = (-3L);
    unsigned long long l_435 = 0xA01AADC9CFD18EFFLL;
    unsigned l_437 = 4294967295UL;
    unsigned l_438 = 0xE8310E1FL;
    unsigned l_471 = 0x8F1E1F36L;
    struct S4 l_476 = {0x548A9DC1L,0xA3L,0x06B2863BL};
    const struct S1 l_554 = {9UL,{7L,-10L,1UL},0x91CECA72L,0x624FL,-7L,1L};
lbl_517:
    if ((g_19.f4 = l_46))
    {
        struct S3 l_53 = {0xA4L,255UL,{0x99L,0x0A08L,0x98031143L},{0x463D90BC214255FALL,0xFFF35779L},-9L,0xFF94L};
        unsigned short l_102 = 0x4D58L;
        int l_357 = (-8L);
        long long l_439 = (-1L);
        int l_463 = 0L;
        p_14.f0 = (safe_div_func_int64_t_s_s(((l_49 = p_14.f2) | func_50((l_358 = ((g_19.f3.f1 & func_15(l_53, g_40, ((p_14.f2 >= (l_101.f4 = (g_19.f4 > (safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_357 = ((p_14.f2 & ((func_58((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u((func_68(func_73((((safe_lshift_func_uint16_t_u_u(p_13, 7)) >= (p_14.f0 | p_14.f1)) || p_14.f1), l_46), g_19.f5, g_78, g_78.f1) | 0x22EFFBD2F48C2FE7LL), 5)) == 0xD5L) ^ g_19.f3.f1), g_19.f0)), p_14, p_14.f1, l_101, l_102) && 0x559C4E1FL) && 0x4828L)) & p_14.f0)), l_53.f2.f2)), p_13))))) & p_14.f2))) > 0L)), l_53.f2.f1)), 0x7E70B852B233D5ACLL));
        l_439 = ((safe_sub_func_int64_t_s_s((l_438 = func_50(p_14.f1, (safe_sub_func_int32_t_s_s((((((safe_sub_func_int8_t_s_s((func_15(l_101, l_101.f4, l_435) == (l_53.f4 | (safe_unary_minus_func_int64_t_s(0x0D48962ACFE7A89DLL)))), ((l_437 = (l_357 = (g_237.f3.f1 && 0x778B136FL))) >= p_14.f2))) <= 0xC1CD9760A1376DC1LL) < g_237.f5) != 1L) || g_237.f2.f0), g_190)))), (-1L))) > 9L);
        for (l_358 = 0; (l_358 != (-13)); --l_358)
        {
            int l_461 = 0xC67D5A09L;
            int l_462 = 0xC2C47D87L;
            char l_464 = 0x5AL;
            l_357 = (safe_lshift_func_int8_t_s_u(((g_237.f1 || (0x0CE7L & g_237.f3.f1)) || (l_101.f4 = ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(0x6CL, 0L)) < ((p_13 & 7UL) >= (safe_add_func_uint32_t_u_u(func_50(g_450, (g_19.f3.f0 = (l_439 >= 0xE5L))), g_355)))), 3)) | 0x6EL))), 5));
            for (g_19.f0 = 0; (g_19.f0 <= 45); g_19.f0 = safe_add_func_uint64_t_u_u(g_19.f0, 6))
            {
                g_19.f4 = p_14.f0;
            }
            l_462 = ((safe_mod_func_uint32_t_u_u((((safe_sub_func_int16_t_s_s((func_58(l_46, p_14, p_14.f2, g_237, l_53.f0) != (g_237.f1 & 1L)), (((safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s((((+g_237.f1) && 3UL) > p_13), g_237.f2.f2)) == l_53.f1), l_461)) < p_14.f2) >= 0x3C3D4229B64416E3LL))) | p_13) > 3UL), g_40)) || 1L);
            g_333 = (((func_68(func_73(l_463, p_14.f2), l_464, g_428, ((safe_lshift_func_int8_t_s_u(0x38L, l_464)) <= (safe_add_func_uint64_t_u_u((!(safe_lshift_func_int8_t_s_s(p_14.f1, 2))), (g_237.f3.f0 = (((g_39 = l_101.f4) ^ 0xDCF3L) >= p_14.f1)))))) && 0xA805L) <= l_463) != p_14.f2);
        }
    }
    else
    {
        unsigned l_472 = 0xF8CB7659L;
        int l_473 = 1L;
        g_78 = p_14;
        l_472 = (g_428.f2 = l_471);
        p_14 = g_428;
        g_78 = func_22((l_473 = p_14.f0), (safe_rshift_func_int8_t_s_s(g_333, 5)), p_14.f1, (l_101.f2.f0 < p_13));
    }
    g_428 = l_476;
    for (g_237.f1 = (-11); (g_237.f1 != 3); ++g_237.f1)
    {
        char l_494 = 0x51L;
        int l_495 = 0x33C04972L;
        int l_496 = 0x9BFD41E4L;
        long long l_539 = 2L;
        int l_553 = 0x5E8F43E1L;
        if (((!5L) || func_68(g_237, g_428.f0, p_14, (g_19.f0 = (0xBC01L < l_101.f1)))))
        {
            unsigned short l_485 = 65528UL;
            g_19.f4 = (l_101.f4 = ((safe_div_func_int8_t_s_s(func_68(func_73(g_355, (safe_mod_func_uint8_t_u_u(g_230, (safe_mod_func_uint32_t_u_u(((g_237.f2.f0 = ((l_358 = p_14.f2) && (g_194 = l_485))) | (!(safe_mod_func_uint32_t_u_u((((l_101.f3.f0 | (((safe_lshift_func_uint16_t_u_u((l_495 = ((safe_add_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(p_14.f1, (0xF378B4259D565244LL > (~l_494)))) < ((((p_14.f0 > g_355) || 0x2CCBL) & 6UL) || l_494)), 0x7418L)) && p_13)), 12)) > 0x64F0L) == l_496)) & l_101.f2.f1) & 0xE80AA86F4DE2BB9ELL), g_19.f5)))), 4L))))), l_494, g_78, l_476.f0), l_476.f2)) >= g_19.f1));
        }
        else
        {
            unsigned char l_497 = 255UL;
            struct S4 l_513 = {0x1747D367L,0x85L,0x474502B8L};
            struct S3 l_516 = {255UL,0x7BL,{1L,0xEA48L,0x71A11426L},{0L,1L},0L,65535UL};
            if (l_497)
            {
                struct S3 l_504 = {2UL,0x09L,{0x80L,0x6627L,0UL},{0L,0xBB62341FL},1L,5UL};
                const struct S1 l_525 = {248UL,{0xDAL,1L,3UL},18446744073709551611UL,0x0D6DL,0L,0L};
                p_14.f2 = ((l_495 = (p_14.f1 = (safe_sub_func_int16_t_s_s((1UL <= l_494), (safe_sub_func_int16_t_s_s(((p_14.f0 = (safe_rshift_func_int16_t_s_u(p_13, (func_15(l_504, p_14.f0, g_237.f3.f0) | ((((l_495 > (!0x2A152F62680E869ELL)) || p_14.f1) <= g_19.f1) <= l_504.f2.f1))))) & l_495), l_495)))))) | l_476.f1);
                for (l_476.f0 = 0; (l_476.f0 != 6); ++l_476.f0)
                {
                    unsigned short l_510 = 0x00E7L;
                    int l_511 = 0x33AFD4C1L;
                    l_504.f4 = func_15(func_73((g_355 = (-1L)), (p_14.f0 = (g_428.f2 = (l_504.f1 != (safe_unary_minus_func_uint8_t_u(g_32)))))), func_15(func_73(((g_194 < (p_14.f1 < (((g_237.f2.f0 || (l_511 = (((safe_div_func_int8_t_s_s(l_510, ((l_510 | 0x4E13L) && g_40))) || g_40) & l_495))) > 4294967294UL) | g_230))) >= (-1L)), p_13), g_512, l_504.f2.f2), p_14.f2);
                }
                if ((+g_78.f2))
                {
                    p_14 = l_513;
                }
                else
                {
                    int l_522 = (-1L);
                    if ((safe_add_func_uint8_t_u_u(l_504.f0, func_58(p_14.f1, p_14, p_13, func_73(((l_513.f2 = (func_58(l_494, func_22((p_13 ^ ((+p_13) <= 0L)), p_14.f2, l_476.f0, p_13), l_435, l_516, p_13) < g_19.f2.f2)) <= l_516.f2.f2), g_450), p_14.f1))))
                    {
                        if (g_428.f1)
                            goto lbl_517;
                        g_428 = (p_14 = func_22(l_504.f4, (g_194 = (((safe_add_func_int32_t_s_s(0x5A00A445L, (safe_rshift_func_int16_t_s_u(l_522, (g_19.f5 = g_237.f2.f1))))) > ((safe_add_func_int32_t_s_s(g_237.f2.f2, (g_32 == ((l_504.f0 ^ (0x9972L && (func_15(l_504, p_14.f1, p_14.f1) != g_230))) == p_13)))) != l_101.f1)) < l_494)), l_504.f0, p_14.f0));
                        if (g_237.f2.f0)
                            break;
                        g_78.f2 = (l_494 || 1UL);
                    }
                    else
                    {
                        return l_525;
                    }
                    for (g_19.f2.f1 = 0; (g_19.f2.f1 <= 27); g_19.f2.f1 = safe_add_func_int32_t_s_s(g_19.f2.f1, 1))
                    {
                        int l_534 = 0x3C461021L;
                        p_14.f2 = (((g_237.f1 <= (0x74084C338C6F31D2LL != func_15(l_504, p_14.f1, (l_534 = (safe_add_func_int8_t_s_s(l_522, (safe_add_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s(l_496, (((func_15(g_19, g_33, l_494) && 0x4814A270EFC12740LL) < p_14.f1) & p_14.f0))) >= 0xF5L) > g_237.f1), p_14.f2)))))))) > l_495) & p_13);
                    }
                }
            }
            else
            {
                unsigned short l_537 = 0xA83EL;
                int l_538 = 0L;
                g_78.f2 = ((((safe_rshift_func_uint8_t_u_u((g_19.f0 = (l_537 != l_496)), 3)) != (l_538 = (l_495 = (+g_237.f3.f1)))) & l_494) >= (l_539 != ((g_237.f3.f0 = ((p_14.f2 < p_13) & l_476.f0)) & (safe_lshift_func_uint16_t_u_s(l_516.f2.f2, g_32)))));
                g_428.f2 = 0xFD9B2D59L;
                for (l_516.f2.f0 = (-10); (l_516.f2.f0 == (-7)); l_516.f2.f0++)
                {
                    const short l_552 = 0x91BAL;
                    g_19.f4 = (((safe_add_func_uint64_t_u_u((l_513.f2 = g_19.f2.f2), p_13)) != (safe_div_func_uint8_t_u_u((((((g_78.f2 && p_14.f0) != g_40) >= (l_538 = ((l_553 = (l_495 = (safe_div_func_uint16_t_u_u((g_332 & (((safe_mod_func_uint32_t_u_u(((g_78.f1 & l_538) != (g_428.f0 >= l_552)), 0x18F45BC1L)) && p_14.f0) ^ g_19.f5)), g_237.f2.f1)))) > g_237.f0))) > 1L) <= p_14.f2), l_494))) && 3UL);
                    if (l_358)
                        goto lbl_517;
                    l_513.f2 = g_333;
                }
            }
        }
        return l_554;
    }
    return l_554;
}







static short func_15(struct S3 p_16, long long p_17, long long p_18)
{
    const struct S4 l_20 = {-9L,1L,5L};
    struct S4 l_21 = {0x040C8E82L,1L,0x4C3DC4D7L};
    l_21 = l_20;
    return p_16.f1;
}







static struct S4 func_22(short p_23, unsigned long long p_24, unsigned short p_25, short p_26)
{
    long long l_37 = 0L;
    struct S3 l_38 = {0UL,9UL,{0x5BL,-2L,0xA12536DEL},{0xEBAC3F408375F08ALL,0xCF5EE2CBL},0x03168F1DL,0x9FA4L};
    int l_41 = 0x746BA864L;
    long long l_42 = 0x39C2D96A127326B3LL;
    int l_43 = 8L;
    int l_44 = 0L;
    struct S4 l_45 = {0xD92507BCL,0x5AL,1L};
    l_44 = ((p_25 = (((l_43 = ((l_42 = ((l_41 = (safe_rshift_func_int16_t_s_s((g_40 = ((-2L) < (g_32 < ((l_37 = (g_19.f2.f0 == g_33)) || (g_39 = (l_38.f4 = ((func_15(l_38, g_33, g_19.f4) != (((func_15(l_38, g_19.f2.f0, l_37) <= 0L) | 8L) & 0xD26016E5DCA5B7F4LL)) == l_38.f0))))))), 3))) | l_38.f2.f1)) >= l_38.f5)) > g_19.f2.f2) <= l_44)) <= g_19.f3.f1);
    return l_45;
}







static unsigned long long func_50(long long p_51, long long p_52)
{
    struct S4 l_364 = {0x943D29F5L,0x5CL,1L};
    struct S3 l_365 = {1UL,250UL,{-1L,3L,4294967291UL},{0xCA008E1B90CF8EDBLL,0xFB30E97AL},-9L,1UL};
    const int l_381 = 0x5B732AD4L;
    unsigned char l_382 = 0x92L;
    long long l_383 = 0x33794DB26A752FACLL;
    const struct S4 l_415 = {-1L,0xBDL,0L};
    long long l_421 = 0x9EA8684DB05A40A2LL;
    for (g_237.f0 = 18; (g_237.f0 == 12); --g_237.f0)
    {
        unsigned l_363 = 4294967295UL;
        int l_375 = 1L;
        const struct S3 l_376 = {0xD4L,0x15L,{0xA1L,0xC7D3L,4294967295UL},{0xDBC3759426AAB505LL,0x8DDE3FCDL},4L,8UL};
        struct S4 l_377 = {0x69B6153CL,0x38L,0L};
        unsigned l_386 = 0x16FD438BL;
        if (((safe_rshift_func_int8_t_s_u(g_237.f1, g_237.f2.f1)) ^ ((l_363 > func_68(g_19, (g_332 = g_237.f3.f1), l_364, p_52)) == func_15(l_365, g_230, p_51))))
        {
            int l_380 = 0xEA5990F0L;
            g_78 = func_22((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(249UL, (l_364.f0 = (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(((l_375 = 6UL) == func_68(l_376, g_39, (l_377 = g_78), (+0x42L))))) || (safe_sub_func_int32_t_s_s(func_68(g_237, g_194, l_364, p_52), 0x3492D31BL))), l_380))))), 2)), l_381)), p_51, l_382, l_383);
            return p_52;
        }
        else
        {
            long long l_384 = 0x0AEB0365C96C0E56LL;
            const struct S3 l_385 = {5UL,0xD1L,{0x7DL,0x27D1L,0UL},{9L,0x0591139DL},0xACD6B561L,0x88BAL};
            struct S4 l_395 = {0xB08D2831L,4L,3L};
            l_377.f2 = 0L;
            l_384 = g_32;
            if (func_68(l_385, l_386, l_364, (g_237.f1 = (((p_52 & ((((l_365.f2.f1 ^ 6UL) ^ ((((l_385.f4 <= (safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(g_40, (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_51, g_40)), g_237.f3.f1)))), p_51))) >= g_19.f0) & 0x5A5FL) != 253UL)) ^ g_40) < p_52)) | g_190) <= 0x62333D65L))))
            {
                unsigned short l_396 = 0x0458L;
                long long l_403 = 0xBDA879B8727A0AC4LL;
                struct S4 l_412 = {0L,-1L,-1L};
                l_377 = l_395;
                if (p_51)
                    break;
                l_377 = (l_364 = func_22(l_396, (l_365.f4 = ((l_381 || g_19.f2.f0) < l_385.f3.f0)), (0x49L == (l_377.f0 = (l_376.f3.f0 > (6L && (safe_div_func_int64_t_s_s(func_68(func_73((safe_sub_func_uint16_t_u_u(1UL, (safe_div_func_int64_t_s_s(p_52, g_194)))), g_19.f2.f1), g_19.f5, l_395, l_403), g_237.f2.f1)))))), p_52));
                l_375 = func_68(func_73(g_237.f3.f0, ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_19.f5, ((safe_sub_func_int32_t_s_s((((p_51 && (safe_sub_func_uint8_t_u_u((g_19.f0 = func_68(g_19, g_78.f1, g_78, p_52)), func_15(l_376, g_237.f2.f2, p_52)))) > p_52) || g_78.f2), 4294967286UL)) != 1L))), 5)) && g_230)), l_383, l_412, p_51);
            }
            else
            {
                int l_414 = 0L;
                l_395.f0 = (((+g_19.f2.f2) == g_32) != (safe_unary_minus_func_int8_t_s(l_414)));
                l_395 = l_415;
            }
            for (l_365.f2.f1 = 0; (l_365.f2.f1 > (-27)); l_365.f2.f1 = safe_sub_func_uint8_t_u_u(l_365.f2.f1, 8))
            {
                struct S4 l_418 = {-1L,0xB0L,0x4A68DBB8L};
                l_377 = l_418;
            }
        }
    }
    l_364.f0 = (safe_lshift_func_int16_t_s_s(l_421, (l_365.f1 < l_415.f0)));
    l_364.f0 = (p_51 | (func_15(l_365, l_415.f2, (p_52 = (safe_mod_func_uint64_t_u_u((((((0x78L > (p_52 || (6L < (((safe_div_func_int8_t_s_s(g_194, ((l_364.f2 = ((func_68(l_365, g_19.f4, l_415, p_52) && g_19.f2.f1) || l_365.f5)) ^ l_365.f2.f0))) || l_365.f5) | p_51)))) > 0xAAA4L) <= p_52) != 0xCA89L) || l_421), (-3L))))) < g_332));
    for (p_51 = 0; (p_51 > (-15)); p_51 = safe_sub_func_uint32_t_u_u(p_51, 4))
    {
        if (l_364.f1)
            break;
        g_428 = (g_78 = l_364);
    }
    return g_428.f1;
}







static unsigned func_58(unsigned long long p_59, struct S4 p_60, int p_61, struct S3 p_62, int p_63)
{
    struct S3 l_107 = {0xECL,0x47L,{0x74L,-5L,0x66551692L},{0x62A8138454CA82F6LL,0L},0x89293DA9L,0xB640L};
    unsigned l_350 = 0x7BDA4903L;
    struct S4 l_351 = {0xE68CFEE6L,1L,1L};
    char l_352 = 0x42L;
    unsigned long long l_356 = 0xF33B5990A5554EDFLL;
    for (g_33 = 0; (g_33 != (-1)); g_33 = safe_sub_func_uint8_t_u_u(g_33, 6))
    {
        int l_112 = (-7L);
        int l_113 = 4L;
        unsigned short l_114 = 0x2B19L;
        struct S3 l_115 = {0UL,0xFBL,{0x80L,0xB927L,2UL},{-1L,0xE2EB9B0FL},4L,0xC1ADL};
        struct S3 l_133 = {255UL,9UL,{0x09L,0x6970L,1UL},{0x3B64E57383A1794BLL,1L},-1L,0x4B4BL};
        unsigned l_171 = 0xCF49A6DFL;
        char l_219 = 0x07L;
        struct S4 l_244 = {-1L,0x87L,-1L};
        char l_338 = 0xD4L;
        if ((safe_sub_func_int8_t_s_s(((0x2F9622FFL ^ (func_15(l_107, (safe_lshift_func_uint16_t_u_s((g_19.f5 = func_15(func_73((l_112 = (safe_lshift_func_uint8_t_u_s(g_19.f3.f0, 4))), p_60.f2), g_78.f2, l_113)), 9)), (g_32 = func_15(l_107, p_63, l_114))) == l_113)) <= 0x8EL), l_107.f2.f1)))
        {
            short l_118 = 0x2EFDL;
            struct S3 l_134 = {0x01L,0x6EL,{0x53L,0x87AEL,3UL},{0x8B384F36AFE77FC2LL,0x52800829L},-4L,65535UL};
            struct S4 l_239 = {1L,0x41L,-1L};
            short l_243 = 0x65D3L;
            if (func_15(p_62, g_32, g_40))
            {
                int l_125 = 0L;
                struct S3 l_166 = {250UL,250UL,{0xC9L,0x0D39L,0xAF9C2886L},{0L,0x10409340L},0x2FB42314L,65532UL};
                unsigned long long l_211 = 0x5B24F8A200C977F8LL;
                if ((func_15(p_62, (9L != (0xAAL >= p_62.f3.f0)), func_15(l_115, (safe_lshift_func_int8_t_s_s(l_118, 3)), (safe_lshift_func_int16_t_s_s((((~((safe_div_func_uint32_t_u_u(p_60.f2, ((safe_div_func_int8_t_s_s(((l_107.f2.f1 || 4294967290UL) >= p_60.f2), l_125)) & l_107.f0))) ^ 18446744073709551609UL)) | 0xE135L) && g_19.f3.f0), g_32)))) | g_19.f4))
                {
                    struct S4 l_126 = {0x4DF67537L,0x09L,0x339252E7L};
                    if (l_107.f2.f2)
                    {
                        g_78 = l_126;
                    }
                    else
                    {
                        int l_141 = 0x00BE36BAL;
                        g_78.f0 = (!((0x7D67L & g_33) > ((g_78.f2 = func_15(p_62, p_59, p_62.f2.f0)) ^ (safe_rshift_func_int16_t_s_u(0x1876L, 10)))));
                        p_60.f2 = (safe_sub_func_uint16_t_u_u(65535UL, (p_62.f5 = 0UL)));
                        g_78.f0 = (((0xB260FA43L > l_118) & (l_125 < (l_125 >= l_115.f0))) & (p_62.f5 = ((~((safe_div_func_uint64_t_u_u(func_15(l_133, ((((func_15(l_134, (safe_sub_func_uint64_t_u_u((p_62.f3.f0 == ((p_62.f0 = (safe_mul_func_int32_t_s_s(((l_113 = (g_19.f5 = (safe_rshift_func_uint8_t_u_u(func_15(p_62, g_32, p_61), l_141)))) >= 1UL), 0L))) < g_19.f2.f2)), l_126.f0)), l_126.f0) || 0xE1L) || p_62.f3.f0) >= l_115.f3.f0) == l_133.f1), p_62.f3.f0), g_19.f2.f1)) == l_133.f2.f1)) || 0L)));
                        g_78.f0 = (safe_rshift_func_uint16_t_u_u((l_113 = 6UL), (safe_rshift_func_uint16_t_u_s((l_115.f2.f0 < ((safe_sub_func_int64_t_s_s(1L, (safe_div_func_uint8_t_u_u((p_62.f2.f2 ^ ((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((0L | (l_133.f4 = (safe_rshift_func_int16_t_s_s(l_112, 7)))), func_15(l_115, l_134.f2.f1, (8UL > p_60.f0)))), (-10L))) <= 4294967295UL)), l_141)))) < 0xC2L)), g_19.f4))));
                    }
                    g_78.f2 = (safe_div_func_uint8_t_u_u(250UL, ((l_133.f5 <= (safe_lshift_func_int8_t_s_s((p_62.f2.f0 = (((0x1B6DA610L ^ p_60.f0) >= (safe_rshift_func_uint16_t_u_s(((g_78.f1 ^ p_61) != ((((safe_lshift_func_uint16_t_u_u(func_15(l_166, l_133.f2.f1, p_62.f5), g_19.f2.f2)) ^ p_62.f3.f1) || 3UL) == 18446744073709551611UL)), g_19.f3.f1))) | 4294967286UL)), l_126.f2))) | l_134.f2.f2)));
                    for (p_63 = (-25); (p_63 <= (-3)); p_63 = safe_add_func_int16_t_s_s(p_63, 9))
                    {
                        return g_78.f2;
                    }
                }
                else
                {
                    short l_180 = 0x1AB0L;
                    struct S4 l_181 = {-8L,0L,0x249F298BL};
                    if (((safe_lshift_func_uint8_t_u_s((l_134.f4 < ((g_39 == ((l_125 < (((l_171 = 0xC9L) == g_19.f2.f2) | (safe_add_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((((safe_add_func_uint16_t_u_u(65535UL, g_39)) <= (l_180 = (safe_div_func_int8_t_s_s((-1L), g_32)))) == 0x21L), (-1L))), p_62.f0)))) < l_107.f2.f0)) > 0x4BL)), p_60.f2)) && p_59))
                    {
                        l_181 = p_60;
                        if (g_39)
                            continue;
                    }
                    else
                    {
                        unsigned l_191 = 0xE9B1BF55L;
                        l_191 = (!(+func_15(g_19, p_60.f1, (safe_sub_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(g_39, (g_190 = ((safe_div_func_int8_t_s_s((-1L), (-1L))) ^ (l_107.f4 = ((safe_lshift_func_int16_t_s_s(g_19.f2.f1, 6)) >= p_62.f1)))))), p_62.f4)))));
                    }
                    g_78 = p_60;
                    p_60.f2 = g_19.f2.f2;
                    l_181.f0 = (safe_add_func_uint64_t_u_u(((((p_62.f3.f0 > 0x5E13L) != g_40) & (g_78.f1 = l_134.f4)) | p_62.f3.f0), (g_194 = 0x9984349FD6D78E63LL)));
                }
                g_78 = g_78;
                p_61 = (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((l_166.f3.f1 >= (l_113 = (safe_rshift_func_int16_t_s_u(((-6L) | 0x6C6B0ADA18132221LL), (safe_lshift_func_uint16_t_u_u(p_62.f2.f2, func_15(func_73((!(safe_lshift_func_uint16_t_u_s((((l_211 = (safe_sub_func_int16_t_s_s((g_19.f2.f1 = ((p_63 || (safe_sub_func_uint16_t_u_u(((g_19.f1 < g_78.f1) ^ (((4294967295UL || func_15(g_19, g_19.f2.f0, g_19.f0)) | l_115.f3.f0) <= 0x13L)), g_19.f2.f0))) || 0x9D2E82F8L)), l_134.f3.f0))) && p_60.f1) & p_62.f2.f1), 11))), g_19.f3.f1), g_19.f3.f1, p_62.f0))))))) == g_194), g_19.f4)), g_19.f1));
            }
            else
            {
                char l_234 = 6L;
                struct S4 l_240 = {0x16F0D455L,0L,0x599E6D18L};
                const int l_251 = 2L;
                if ((safe_lshift_func_uint16_t_u_s(l_133.f0, ((p_62.f2.f0 || g_19.f2.f2) || g_19.f5))))
                {
                    int l_216 = 1L;
                    int l_238 = (-5L);
                    g_78.f0 = (func_15(l_107, g_78.f1, g_19.f3.f1) < ((safe_mod_func_int32_t_s_s(l_216, (safe_lshift_func_int8_t_s_s(l_219, 4)))) && (safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((safe_unary_minus_func_int8_t_s(((g_32 & (safe_add_func_uint32_t_u_u(p_60.f2, (g_19.f0 & g_19.f2.f0)))) == l_107.f2.f1))) >= l_115.f3.f0), g_19.f1)), g_19.f3.f0))));
                    if (g_19.f2.f2)
                        break;
                    if (((-8L) >= (g_230 = func_15(func_73(g_32, l_115.f2.f0), (((safe_unary_minus_func_uint32_t_u(7UL)) == (safe_add_func_int8_t_s_s(l_134.f5, g_78.f2))) >= (p_61 != l_133.f5)), g_33))))
                    {
                        p_60 = p_60;
                        if (p_62.f3.f0)
                            continue;
                    }
                    else
                    {
                        int l_233 = (-1L);
                        l_238 = ((safe_add_func_uint8_t_u_u(((g_19.f5 = l_233) == (l_234 = p_59)), (safe_rshift_func_uint16_t_u_s(func_15(g_237, p_60.f1, (l_107.f4 = g_237.f2.f2)), 5)))) >= ((g_237.f4 ^ func_15(p_62, l_216, p_62.f3.f1)) != 0xC275588FL));
                    }
                    g_78 = g_78;
                }
                else
                {
                    l_107.f4 = (g_19.f5 & (g_19.f0 = 0UL));
                    if (g_33)
                        continue;
                    if (g_19.f0)
                    {
                        l_239 = p_60;
                        p_62.f4 = g_19.f2.f0;
                    }
                    else
                    {
                        l_240 = p_60;
                    }
                    for (g_190 = 0; (g_190 != 4); ++g_190)
                    {
                        p_61 = g_237.f2.f2;
                        p_60 = g_78;
                        p_62.f4 = 0xFD598AE9L;
                        return l_243;
                    }
                }
                l_240 = l_244;
                for (g_19.f1 = 0; (g_19.f1 >= 10); ++g_19.f1)
                {
                    int l_258 = 0L;
                    p_60 = g_78;
                    if (((safe_div_func_int32_t_s_s(func_15(func_73(p_62.f2.f0, g_32), (l_107.f4 = ((p_62.f4 = (safe_div_func_int32_t_s_s((g_237.f4 = g_19.f2.f1), ((0UL != (g_19.f2.f2 || g_19.f3.f0)) || l_251)))) | (safe_rshift_func_int8_t_s_u(((0xF3B490FCL > p_62.f2.f1) | l_239.f1), g_19.f4)))), l_239.f0), 3L)) ^ g_78.f1))
                    {
                        int l_254 = 1L;
                        g_78.f0 = l_107.f3.f1;
                        g_237.f4 = l_254;
                        p_60 = (g_78 = p_60);
                    }
                    else
                    {
                        unsigned long long l_257 = 0UL;
                        p_62.f4 = ((g_237.f5 < (safe_add_func_int8_t_s_s((l_243 || p_59), (p_62.f0 = g_190)))) && l_257);
                        g_78.f0 = l_258;
                    }
                }
                return g_33;
            }
        }
        else
        {
            unsigned char l_265 = 248UL;
            int l_305 = 0xE1086328L;
            struct S4 l_312 = {-6L,0xF5L,-1L};
            p_60.f0 = (p_62.f2.f0 && ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(p_62.f2.f2, (safe_mod_func_int64_t_s_s((l_265 != (safe_mod_func_int16_t_s_s(l_107.f5, 1UL))), (safe_add_func_int8_t_s_s(p_61, ((1L & (-2L)) == (safe_div_func_int16_t_s_s(p_62.f2.f2, l_107.f2.f0))))))))) != g_19.f0), 13)) && g_237.f2.f2));
            g_237.f4 = ((p_62.f3.f0 = ((safe_unary_minus_func_int8_t_s((g_19.f2.f0 = (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((!((safe_div_func_int8_t_s_s((safe_add_func_int32_t_s_s(((l_115.f4 = (-8L)) >= func_15(p_62, (7L && (safe_rshift_func_int8_t_s_s(0x17L, (g_39 == g_40)))), (safe_add_func_int8_t_s_s(((0L != (g_78.f0 <= (-5L))) || 0UL), (-6L))))), l_107.f0)), p_62.f0)) | g_19.f2.f1)), p_62.f2.f2)), l_107.f1))))) || p_62.f1)) ^ p_59);
            l_244 = p_60;
            if (((safe_rshift_func_int8_t_s_u((l_244.f2 = (-3L)), g_237.f5)) == (safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0xF2L, (g_237.f3.f1 & ((safe_add_func_int16_t_s_s((g_78.f0 & l_265), l_107.f2.f0)) && (-1L))))), (p_62.f5 != p_60.f2)))))
            {
                const int l_309 = 1L;
                p_60 = p_60;
                for (g_19.f2.f1 = 0; (g_19.f2.f1 == (-17)); --g_19.f2.f1)
                {
                    g_78 = g_78;
                }
                if ((l_107.f4 = l_107.f2.f2))
                {
                    p_60.f2 = g_19.f2.f1;
                    return g_40;
                }
                else
                {
                    long long l_297 = (-6L);
                    const int l_302 = (-1L);
                    int l_306 = 0x739512A2L;
                    p_60.f0 = (safe_mod_func_uint64_t_u_u((l_297 = 0x66A1822A156F8766LL), (l_133.f3.f1 | (l_306 = (~(l_305 = ((p_60.f2 = (safe_sub_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(((g_40 > (g_237.f0 = (0xAD64265CD0574644LL || p_63))) & 1L), l_302)) & (p_59 = (safe_mod_func_uint16_t_u_u(p_60.f2, (+p_62.f2.f2))))) >= p_61), g_237.f2.f0))) > 0UL)))))));
                    p_60.f2 = (p_62.f3.f0 != func_15(g_237, p_62.f4, func_15(func_73(g_19.f0, (safe_lshift_func_uint8_t_u_s(l_309, 7))), l_309, l_309)));
                }
                if (p_60.f1)
                    continue;
            }
            else
            {
                unsigned l_317 = 0x7C2083D5L;
                int l_327 = 0x5CF4C983L;
                for (g_237.f5 = (-22); (g_237.f5 <= 50); g_237.f5++)
                {
                    p_61 = 0x2A97E7C0L;
                    l_312 = (p_60 = l_312);
                }
                if (l_115.f2.f1)
                {
                    unsigned long long l_326 = 0UL;
                    for (p_62.f4 = 0; (p_62.f4 == 17); ++p_62.f4)
                    {
                        unsigned long long l_334 = 0x9D5F814490910357LL;
                        int l_335 = 3L;
                        p_61 = ((l_327 = (((safe_rshift_func_int8_t_s_s(func_15(l_107, l_317, p_60.f0), 7)) ^ (((safe_lshift_func_int16_t_s_s(((l_107.f0 < (safe_lshift_func_uint16_t_u_u(g_237.f1, ((((safe_sub_func_uint32_t_u_u(l_133.f0, p_62.f2.f0)) < (func_15(func_73((g_237.f2.f0 = (-1L)), g_19.f2.f1), g_237.f4, l_326) == g_19.f3.f1)) ^ 1L) > 0x9CL)))) && p_62.f4), p_63)) || (-1L)) < l_107.f3.f1)) > g_19.f2.f2)) & l_326);
                        p_61 = ((g_78.f1 = (p_59 | (safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(0x619C7830615C79E4LL, ((p_60.f0 = func_15(g_237, l_312.f0, g_39)) ^ ((~(g_332 = (g_19.f2.f1 = g_237.f5))) || func_15(g_19, (((g_333 = g_78.f1) > 0x8116L) || l_334), l_334))))), g_19.f2.f0)))) > l_317);
                        l_335 = (g_333 = (g_78.f0 = (g_78.f2 = g_33)));
                        g_78.f2 = g_19.f3.f1;
                    }
                }
                else
                {
                    for (p_63 = 17; (p_63 != (-18)); p_63 = safe_sub_func_uint8_t_u_u(p_63, 6))
                    {
                        struct S3 l_339 = {0x56L,250UL,{0x24L,9L,4294967286UL},{6L,1L},-6L,0xF750L};
                        l_338 = g_40;
                        l_312.f0 = (p_62.f0 & p_63);
                        p_60.f2 = func_15(l_339, (safe_div_func_int32_t_s_s(((l_115.f3.f0 < (0xFFAFL >= (safe_div_func_uint64_t_u_u(0UL, (l_113 = l_107.f2.f0))))) || (((safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(g_78.f1, (safe_div_func_uint8_t_u_u(0x67L, func_15(p_62, g_237.f0, g_19.f2.f1))))), l_265)) & 0xBFL) != p_62.f2.f2)), g_194)), p_60.f2);
                    }
                    if ((l_244.f0 = (0xF0104374L >= g_237.f4)))
                    {
                        p_60.f2 = (-1L);
                    }
                    else
                    {
                        l_350 = g_237.f0;
                        l_351 = p_60;
                    }
                    if (p_62.f3.f0)
                        continue;
                }
                if (l_352)
                {
                    p_62.f4 = (safe_lshift_func_uint8_t_u_u(g_19.f2.f1, (0x4523L >= ((0xC0L == p_60.f1) && (g_355 >= (g_19.f1 && func_15(l_133, (l_351.f2 = (p_62.f3.f0 = (l_356 & p_62.f5))), l_113)))))));
                }
                else
                {
                    return p_62.f5;
                }
            }
        }
    }
    return l_356;
}







static unsigned long long func_68(const struct S3 p_69, unsigned p_70, struct S4 p_71, unsigned char p_72)
{
    unsigned char l_89 = 0UL;
    int l_90 = (-1L);
    const unsigned l_91 = 0x42F3C5D4L;
    struct S3 l_98 = {1UL,0xADL,{0L,0xF21EL,0x415CA0C0L},{-10L,0xCA3D13A5L},0xB20E94A9L,0x7FCAL};
    for (g_19.f3.f0 = 0; (g_19.f3.f0 > (-14)); g_19.f3.f0 = safe_sub_func_int16_t_s_s(g_19.f3.f0, 8))
    {
        p_71.f2 = (p_71.f0 = p_69.f3.f1);
    }
    g_78.f0 = ((safe_div_func_uint32_t_u_u(((g_78.f2 = (g_33 = g_40)) == p_69.f2.f1), 4294967292UL)) > (0x3EEAL ^ ((((safe_rshift_func_int8_t_s_u(0xCEL, (l_90 = (safe_add_func_int64_t_s_s(l_89, (~(g_32 = 0x79C7D366BA46063ALL))))))) | l_89) > (l_89 || 0x86372135583E1B12LL)) != l_91)));
    l_98.f4 = (246UL | ((((safe_lshift_func_int16_t_s_s((g_19.f0 && (safe_sub_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(0x08413730F596B175LL, 4UL)) < p_69.f3.f1), func_15(l_98, l_89, (func_15(func_73(((safe_lshift_func_int16_t_s_u(((!((g_19.f0 & (2UL ^ l_98.f4)) >= p_70)) != l_98.f1), 4)) || l_98.f1), p_71.f2), l_98.f5, l_98.f1) >= l_98.f2.f1))))), 14)) < l_90) | g_78.f0) <= p_70));
    return p_69.f5;
}







static const struct S3 func_73(char p_74, int p_75)
{
    struct S4 l_79 = {0x8CB29726L,0x95L,-4L};
    struct S3 l_80 = {4UL,253UL,{-1L,2L,0xCC2217A8L},{-10L,1L},0xB3E8CBBEL,1UL};
    l_79 = g_78;
    p_75 = func_15(l_80, g_40, l_79.f2);
    return g_19;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2.f0, "g_19.f2.f0", print_hash_value);
    transparent_crc(g_19.f2.f1, "g_19.f2.f1", print_hash_value);
    transparent_crc(g_19.f2.f2, "g_19.f2.f2", print_hash_value);
    transparent_crc(g_19.f3.f0, "g_19.f3.f0", print_hash_value);
    transparent_crc(g_19.f3.f1, "g_19.f3.f1", print_hash_value);
    transparent_crc(g_19.f4, "g_19.f4", print_hash_value);
    transparent_crc(g_19.f5, "g_19.f5", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_78.f0, "g_78.f0", print_hash_value);
    transparent_crc(g_78.f1, "g_78.f1", print_hash_value);
    transparent_crc(g_78.f2, "g_78.f2", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_237.f2.f0, "g_237.f2.f0", print_hash_value);
    transparent_crc(g_237.f2.f1, "g_237.f2.f1", print_hash_value);
    transparent_crc(g_237.f2.f2, "g_237.f2.f2", print_hash_value);
    transparent_crc(g_237.f3.f0, "g_237.f3.f0", print_hash_value);
    transparent_crc(g_237.f3.f1, "g_237.f3.f1", print_hash_value);
    transparent_crc(g_237.f4, "g_237.f4", print_hash_value);
    transparent_crc(g_237.f5, "g_237.f5", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_751, "g_751", print_hash_value);
    transparent_crc(g_785.f0, "g_785.f0", print_hash_value);
    transparent_crc(g_785.f1, "g_785.f1", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
