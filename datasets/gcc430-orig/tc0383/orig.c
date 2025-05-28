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
   const char f1;
   long long f2;
};

struct S1 {
   const unsigned long long f0;
   char f1;
   int f2;
   const short f3;
   const char f4;
   unsigned char f5;
   const int f6;
};

struct S2 {
   long long f0;
   const long long f1;
   short f2;
   const short f3;
};

struct S3 {
   const unsigned short f0;
};


static short g_2 = 0x121AL;
static struct S2 g_35 = {0xA6ADD33D73C12D49LL,-1L,0x0A97L,0x1F64L};
static long long g_42 = 0L;
static struct S0 g_45 = {-1L,0xC1L,0xC0AC77ACAEC2B2A8LL};
static int g_50 = 1L;
static int g_51 = 0x45039A24L;
static struct S1 g_52 = {0xC53D1739C36DE1F2LL,0xA3L,0x768FB0C4L,0x31BCL,1L,3UL,-8L};
static int g_71 = 1L;
static unsigned long long g_111 = 0x223BFC9F35A7B369LL;
static struct S3 g_124 = {0x5E61L};
static unsigned short g_179 = 0xC460L;
static int g_216 = 0x9903A016L;
static unsigned short g_248 = 1UL;
static unsigned short g_272 = 3UL;
static char g_273 = 0xFAL;
static unsigned short g_305 = 8UL;
static int g_320 = (-1L);
static long long g_328 = 0L;
static int g_339 = 0xC1858084L;
static char g_365 = 0x57L;
static char g_411 = 0x3FL;
static short g_437 = 0x1491L;



static unsigned short func_1(void);
static unsigned short func_5(struct S3 p_6, struct S0 p_7, unsigned long long p_8, struct S1 p_9);
static struct S3 func_10(struct S0 p_11, char p_12);
static int func_15(char p_16, unsigned long long p_17, long long p_18);
static unsigned long long func_28(int p_29, unsigned long long p_30, int p_31, unsigned long long p_32);
static const unsigned func_54(unsigned long long p_55, unsigned p_56);
static struct S1 func_60(char p_61, const struct S1 p_62);
static char func_63(unsigned p_64);
static const int func_77(const long long p_78);
static char func_93(unsigned long long p_94, int p_95);
static unsigned short func_1(void)
{
    struct S0 l_13 = {0x76L,0xBEL,0L};
    int l_481 = (-1L);
    int l_482 = (-1L);
    unsigned l_483 = 1UL;
    l_483 = (l_482 = (g_2 , (((l_481 = (safe_lshift_func_uint8_t_u_u((((func_5(func_10(l_13, g_2), g_45, (g_51 = (((g_50 = (safe_sub_func_int8_t_s_s(g_35.f3, ((l_13.f0 || func_28((l_13.f1 < (safe_sub_func_uint32_t_u_u(((g_45.f2 <= l_13.f0) >= l_13.f1), g_45.f1))), g_45.f1, l_13.f2, l_13.f2)) > 0x88L)))) ^ g_45.f2) || l_13.f1)), g_52) && g_35.f2) , g_216) <= (-2L)), g_45.f2))) & g_35.f1) <= g_35.f1)));
    l_481 = 7L;
    g_216 = (l_482 = g_45.f0);
    return g_52.f1;
}







static unsigned short func_5(struct S3 p_6, struct S0 p_7, unsigned long long p_8, struct S1 p_9)
{
    unsigned char l_53 = 255UL;
    int l_58 = 0xB10F657DL;
    int l_72 = 0L;
    int l_73 = (-9L);
    int l_456 = 0x4982FD1BL;
    char l_459 = (-1L);
    short l_479 = (-7L);
    int l_480 = 1L;
    l_73 = (l_72 = (l_58 = func_28(g_52.f3, (l_53 = g_52.f4), p_7.f2, (func_54(g_35.f2, (18446744073709551607UL | func_15(((safe_unary_minus_func_int32_t_s(2L)) == 18446744073709551609UL), l_58, (safe_unary_minus_func_int8_t_s((func_15(l_58, p_7.f1, g_52.f0) & 0x1986173BL)))))) > g_52.f2))));
    if (g_35.f1)
    {
        unsigned short l_443 = 2UL;
        int l_444 = 1L;
        struct S0 l_453 = {1L,1L,0x7164121E32FFEEB4LL};
        for (g_52.f5 = 0; (g_52.f5 < 15); ++g_52.f5)
        {
            unsigned l_76 = 0UL;
            if (l_76)
                break;
            l_443 = func_77(p_7.f1);
            l_444 = 8L;
        }
        l_73 = (func_63((safe_rshift_func_int16_t_s_u(0x160CL, 11))) || ((safe_add_func_int32_t_s_s(l_443, l_58)) ^ (func_63(p_9.f2) > (((((g_305 = g_35.f3) > (safe_lshift_func_int8_t_s_u(0x62L, (+g_35.f3)))) <= p_9.f5) && g_35.f0) != l_444))));
        l_72 = ((g_365 || ((g_339 = ((p_9.f5 ^ (l_453 , (p_9.f1 = (l_72 && (p_8 = (safe_add_func_int16_t_s_s(0xC6EFL, (((func_15(p_9.f1, g_272, l_53) != l_456) <= g_42) != 0xD313L)))))))) || l_53)) < g_52.f5)) , l_73);
    }
    else
    {
        const unsigned char l_462 = 247UL;
        for (g_248 = 0; (g_248 <= 3); ++g_248)
        {
            g_339 = l_459;
            return p_7.f2;
        }
        g_339 = (0x68L != (g_328 || (((safe_lshift_func_int8_t_s_s(l_462, p_7.f2)) & (safe_rshift_func_uint8_t_u_s((g_52.f6 < g_365), l_456))) , p_9.f6)));
    }
    l_480 = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((((((l_58 = (g_45.f0 , (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_51, (p_7.f0 , p_9.f1))), ((safe_lshift_func_int16_t_s_u((l_73 = (((g_71 = (p_9.f6 , ((l_72 || l_72) && (18446744073709551615UL > (safe_add_func_int32_t_s_s((l_72 = l_479), 0xBA36459BL)))))) , l_456) || p_7.f1)), 2)) | l_459))), 0)))) && g_35.f2) < g_328) != 18446744073709551615UL) || l_72), p_7.f0)) , 0L), g_35.f0));
    return g_339;
}







static struct S3 func_10(struct S0 p_11, char p_12)
{
    unsigned char l_14 = 0x37L;
    int l_40 = 0xE7FB108FL;
    int l_41 = (-1L);
    int l_43 = 0x62B41911L;
    struct S3 l_44 = {0x8101L};
    l_14 = (-7L);
    l_43 = ((func_15(l_14, p_11.f0, p_12) , p_11.f1) || ((safe_rshift_func_int8_t_s_s(g_2, func_15((g_42 = (func_15((safe_rshift_func_int16_t_s_u(func_15(func_15((safe_lshift_func_uint8_t_u_s(((l_41 = ((func_28(((safe_rshift_func_int16_t_s_u((l_40 = (g_35 , ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_35.f0, 9)), 5)) , ((g_2 == p_12) != p_12)))), g_35.f0)) || g_35.f3), g_35.f3, g_2, p_11.f2) != p_11.f1) || 0x47D0L)) == l_14), 2)), p_11.f0, p_11.f0), l_14, l_14), 5)), p_12, l_14) == l_14)), g_2, g_35.f3))) , l_41));
    return l_44;
}







static int func_15(char p_16, unsigned long long p_17, long long p_18)
{
    long long l_21 = 0x0EF2F37FC0336AE3LL;
    l_21 = (safe_rshift_func_uint16_t_u_s(0xA8DBL, 8));
    return p_18;
}







static unsigned long long func_28(int p_29, unsigned long long p_30, int p_31, unsigned long long p_32)
{
    return g_35.f2;
}







static const unsigned func_54(unsigned long long p_55, unsigned p_56)
{
    unsigned long long l_65 = 18446744073709551615UL;
    const struct S1 l_66 = {18446744073709551615UL,0L,-1L,-3L,0x53L,255UL,1L};
    const unsigned long long l_69 = 18446744073709551607UL;
    int l_70 = 0x879556C6L;
    g_71 = (func_60(func_63(l_65), l_66) , (safe_lshift_func_uint16_t_u_s(((l_70 = func_15(l_66.f0, (l_69 != func_63(g_35.f2)), l_66.f2)) >= g_52.f6), 12)));
    return l_66.f3;
}







static struct S1 func_60(char p_61, const struct S1 p_62)
{
    return p_62;
}







static char func_63(unsigned p_64)
{
    g_51 = 0xDD067980L;
    return g_52.f5;
}







static const int func_77(const long long p_78)
{
    unsigned short l_100 = 0x2C37L;
    int l_101 = 0x8431F483L;
    unsigned long long l_102 = 18446744073709551615UL;
    int l_421 = (-1L);
    unsigned short l_422 = 0xAB2CL;
    struct S0 l_423 = {0x8AL,0xD1L,0x66AE4A5FECDD40C5LL};
    unsigned l_424 = 4294967295UL;
    l_424 = func_28((func_10(((p_78 == (safe_add_func_uint64_t_u_u(((((l_422 = (1L >= (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint8_t_u_u(g_50, (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(5L, (safe_sub_func_uint16_t_u_u((g_35 , 0x5DC7L), (l_421 = (func_93(((safe_sub_func_uint8_t_u_u(251UL, ((safe_mod_func_int64_t_s_s((((l_101 = l_100) ^ func_28(l_100, l_100, l_100, l_102)) || p_78), g_52.f1)) | l_100))) && 0UL), l_100) == l_102)))))), 0L)))) & p_78), 0)) < p_78), g_52.f4)))) ^ l_102) , g_111) & l_102), l_102))) , l_423), p_78) , l_101), g_52.f2, p_78, p_78);
    if ((safe_sub_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(p_78, func_63(func_54(p_78, l_422)))) & ((l_421 = 0xA4E8ABC02D9EEF6ELL) && p_78)) , l_101), g_52.f2)))
    {
        unsigned l_429 = 0x26F97436L;
        l_429 = 0x01B90D62L;
        return l_422;
    }
    else
    {
        unsigned char l_432 = 0x44L;
        short l_440 = 0xA9E5L;
        int l_441 = (-1L);
        int l_442 = (-7L);
        l_442 = (safe_lshift_func_uint8_t_u_u(l_432, (safe_rshift_func_uint8_t_u_s((g_305 && ((~(l_441 = (func_28((g_328 , ((p_78 , p_78) >= (l_421 = (g_35.f3 != (l_101 = ((safe_mod_func_uint8_t_u_u((g_437 = func_63(g_272)), ((safe_add_func_int16_t_s_s(func_28(p_78, p_78, p_78, p_78), g_216)) || l_440))) , l_423.f1)))))), g_42, g_50, l_440) && p_78))) > (-1L))), 3))));
    }
    g_51 = g_52.f2;
    return g_179;
}







static char func_93(unsigned long long p_94, int p_95)
{
    unsigned char l_103 = 255UL;
    int l_105 = 1L;
    int l_112 = 0L;
    long long l_130 = (-1L);
    struct S2 l_155 = {8L,-1L,0x25DFL,0xCAE4L};
    struct S1 l_178 = {4UL,0xC9L,0x9D4B5287L,0L,-1L,0x17L,1L};
    unsigned char l_180 = 254UL;
    struct S0 l_213 = {0xE3L,0x9AL,0L};
    struct S3 l_228 = {3UL};
    short l_232 = 0L;
    long long l_249 = 0L;
    char l_308 = (-1L);
    unsigned l_315 = 0xCD78A68BL;
    unsigned long long l_325 = 0xFA754648E5995FA5LL;
    unsigned l_366 = 0x2CE6EC9BL;
    unsigned char l_367 = 248UL;
lbl_184:
    if (l_103)
    {
        char l_104 = 0x32L;
        short l_110 = 0L;
        int l_113 = (-1L);
        l_105 = l_104;
        l_113 = func_54(((safe_add_func_uint8_t_u_u(func_28(p_94, ((((g_52.f2 || (safe_add_func_uint8_t_u_u(p_94, (l_110 <= 0x75AEE60D347FA911LL)))) && (0x3F5AL <= (g_111 = (l_105 < l_104)))) & (l_112 = p_95)) == g_45.f0), p_94, g_35.f2), l_104)) > g_50), g_52.f2);
    }
    else
    {
        unsigned long long l_129 = 0x63A172F119E39778LL;
        struct S0 l_131 = {-5L,-1L,1L};
        int l_132 = 1L;
        int l_156 = (-1L);
        char l_181 = 4L;
        if ((func_54((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_95, 12)), (l_132 = (safe_add_func_uint32_t_u_u(((p_94 , func_63(p_94)) || (safe_add_func_int64_t_s_s(0x57FF43755EC10F06LL, (3L && (((((safe_sub_func_uint8_t_u_u(p_95, ((g_124 , func_63((((func_28((safe_lshift_func_int16_t_s_u((((g_51 = (safe_lshift_func_uint16_t_u_u(l_103, l_129))) | l_129) || g_51), p_94)), p_95, l_129, l_130) == l_129) || l_129) || 1L))) || l_129))) >= 0x7602C2F6D8A0C824LL) , l_131) , p_95) && g_35.f1))))), 4294967288UL))))), g_35.f0) < g_35.f3))
        {
            unsigned short l_133 = 65535UL;
            int l_134 = 0L;
            l_132 = (g_42 , func_28((func_63(l_133) , (l_134 = g_52.f4)), ((safe_add_func_int16_t_s_s(g_50, ((l_112 = (0xD33CEA4AL == 0x9C40DF3FL)) , ((g_35 , (safe_lshift_func_int8_t_s_u((-3L), p_94))) && l_131.f0)))) == l_130), l_130, g_45.f2));
            l_156 = (l_132 = (func_63(((-10L) && l_103)) && ((safe_lshift_func_uint16_t_u_s((l_133 != (((safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(((g_42 > (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((l_133 > (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(g_45.f1, 2)), (l_155 , g_35.f0))) >= p_94), 12))), 4294967295UL)), 1))) ^ 0x6FL), 0xA92FL)) && 0x6786L), 0UL)) && p_95) == g_52.f4)), g_35.f1)) != 4294967295UL)));
        }
        else
        {
            struct S1 l_167 = {18446744073709551610UL,0x03L,6L,0xE1A2L,1L,1UL,0xB2E64DF4L};
            g_51 = (safe_unary_minus_func_int32_t_s((safe_unary_minus_func_uint16_t_u((safe_sub_func_int64_t_s_s(p_95, (0x378A6B184C14C3A4LL & p_94)))))));
            l_180 = (safe_add_func_int16_t_s_s((((((safe_add_func_int8_t_s_s(0x53L, (g_179 = (safe_lshift_func_int16_t_s_s(func_63(((l_167 , l_155.f1) || g_52.f5)), ((safe_add_func_uint64_t_u_u(g_45.f2, (safe_lshift_func_uint16_t_u_s(func_28((((((safe_add_func_int64_t_s_s((l_155.f1 , ((g_111 , (l_156 = (safe_lshift_func_int16_t_s_s((((g_52.f1 = (g_45.f0 = (safe_sub_func_uint32_t_u_u(g_45.f0, l_167.f6)))) > l_167.f5) , g_35.f3), 4)))) <= 65528UL)), l_131.f1)) < g_111) || 0x1781L) , l_178) , 0x79365D8EL), p_95, l_131.f1, g_35.f2), l_167.f1)))) <= g_35.f1)))))) != p_95) & p_95) < 0x67C7D0B8D769405CLL) | 0xBFD8L), 65533UL));
            return l_181;
        }
    }
    for (l_112 = 13; (l_112 < (-28)); l_112--)
    {
        if (l_155.f1)
            goto lbl_184;
    }
lbl_196:
    for (p_94 = 0; (p_94 <= 45); ++p_94)
    {
        char l_187 = 0xC4L;
        return l_187;
    }
    for (l_155.f2 = (-24); (l_155.f2 >= (-26)); l_155.f2 = safe_sub_func_uint32_t_u_u(l_155.f2, 6))
    {
        char l_195 = 0x8CL;
        struct S3 l_207 = {1UL};
        unsigned long long l_215 = 0x0B09D0800E734755LL;
        int l_231 = (-1L);
        short l_269 = 1L;
        const struct S1 l_392 = {18446744073709551614UL,0L,0x84D086CCL,0xAD75L,0x8BL,7UL,0x0B7FCA53L};
        short l_405 = (-9L);
        int l_406 = (-4L);
        int l_407 = 0x22CDDAEFL;
        if ((~l_178.f3))
        {
            unsigned l_194 = 18446744073709551615UL;
            if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((~l_194) < (l_195 = 0x11L)), 0)), g_35.f3)))
            {
                if (p_95)
                    goto lbl_196;
                for (l_112 = 24; (l_112 <= 9); l_112 = safe_sub_func_int64_t_s_s(l_112, 3))
                {
                    unsigned char l_210 = 0x63L;
                    int l_211 = (-4L);
                    unsigned short l_212 = 1UL;
                    int l_214 = 0x3F4F6D35L;
                    for (p_94 = 0; (p_94 != 49); p_94 = safe_add_func_uint32_t_u_u(p_94, 5))
                    {
                        g_51 = g_52.f4;
                        g_51 = (-1L);
                    }
                    if (g_35.f2)
                        goto lbl_196;
                    g_216 = ((func_28(g_50, (safe_mod_func_uint16_t_u_u((0xE1L != (g_52.f6 , (safe_mod_func_int64_t_s_s((l_214 = (safe_sub_func_int64_t_s_s((l_211 = (1UL == (l_207 , func_63((safe_sub_func_int8_t_s_s(((l_210 = g_52.f3) <= l_211), (((l_212 > (l_213 , 4L)) <= 0x15B4L) || p_94))))))), p_95))), p_95)))), 65526UL)), l_215, l_215) , 1UL) <= p_95);
                    g_51 = 1L;
                }
                l_105 = 0x4091520AL;
                if (g_45.f0)
                    continue;
            }
            else
            {
                return l_155.f0;
            }
        }
        else
        {
            unsigned l_225 = 0x8984B9C5L;
            unsigned long long l_247 = 0x77F44A9B1B637EA3LL;
            long long l_250 = (-1L);
            unsigned char l_251 = 0x86L;
            int l_256 = 0L;
            int l_258 = 0xB32BA95DL;
            unsigned long long l_268 = 18446744073709551615UL;
            l_105 = ((l_215 < (g_179 ^ (g_111 = func_54(((g_216 = func_28((safe_add_func_int32_t_s_s(((func_10(g_45, (func_28(p_95, ((safe_sub_func_uint32_t_u_u(0xFB15D496L, (safe_mod_func_uint64_t_u_u(g_52.f4, (p_94 = (safe_lshift_func_int8_t_s_s((((((func_15(((l_225 < (func_15(((safe_rshift_func_int16_t_s_s((((((l_228 , (func_28((l_231 = (safe_mod_func_int16_t_s_s(func_63(p_95), 1L))), p_95, p_94, l_155.f3) | p_95)) & l_178.f3) & 1L) & 0xD7A56A24L) <= (-4L)), 4)) < g_71), g_35.f2, g_52.f3) , 0UL)) >= l_195), g_45.f2, g_216) ^ g_35.f3) <= p_95) != 0x19L) < p_95) , p_95), 7))))))) | g_35.f2), g_71, l_195) && g_52.f2)) , 0xC9L) & p_95), g_35.f2)), l_225, g_35.f1, l_207.f0)) <= l_215), p_95)))) > l_232);
            for (g_216 = (-27); (g_216 >= 24); g_216 = safe_add_func_uint64_t_u_u(g_216, 4))
            {
                const unsigned l_253 = 0x26107CEDL;
                int l_301 = 0xB7679242L;
                long long l_326 = 0xBF148392DC4278F1LL;
                if (func_28((((l_231 = l_225) < g_52.f1) != func_63(((((0x7945E16A52C59D5BLL >= l_207.f0) , (((safe_add_func_int16_t_s_s((func_60((1UL >= (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((g_248 = (((safe_rshift_func_int16_t_s_u(((g_50 > 0xCFL) , (g_2 = ((g_35.f0 != func_28((func_15((((l_105 = func_28(p_95, p_95, g_52.f6, g_52.f1)) , l_178.f3) , g_124.f0), l_225, g_45.f0) <= 0xD75CF964L), p_95, l_225, l_247)) | g_52.f1))), 9)) >= p_95) < 0x5E15L)), 12)), l_249)), 1)), g_124.f0))), g_52) , g_42), l_213.f2)) > 0x321BL) || l_250)) > l_251) && 0xA5L))), l_225, p_94, p_94))
                {
                    long long l_252 = 0x8AB1B66BC57D9547LL;
                    int l_257 = 0L;
                    if (((l_232 < (((g_52.f1 = p_94) == p_95) | (l_258 = ((g_248 = (l_257 = (((l_252 == l_252) || (-7L)) == (l_256 = (l_253 , (safe_add_func_int64_t_s_s(((-1L) > l_253), 18446744073709551614UL))))))) <= 0xBFBDL)))) , 0L))
                    {
                        const unsigned short l_259 = 0x9E67L;
                        g_51 = ((g_52.f5 , l_259) & (((l_269 = ((safe_mod_func_uint32_t_u_u(g_52.f3, l_103)) , (safe_rshift_func_uint16_t_u_u(65531UL, (p_94 == (~(((safe_add_func_int8_t_s_s(g_52.f5, (+0x68L))) == (((safe_sub_func_int32_t_s_s((p_94 != p_94), l_268)) && 7L) >= 0xD9L)) || p_95))))))) > g_124.f0) ^ l_259));
                        g_273 = (((g_52.f2 || (func_54(p_94, (((((func_63(l_259) || func_63((g_272 = (l_253 & (safe_mod_func_int16_t_s_s((g_2 = l_225), (l_213 , (((((0xF0L || (-9L)) < l_231) > l_228.f0) ^ 0x8DF5B645L) , p_94)))))))) || l_252) , g_2) == l_253) >= 1UL)) < p_95)) && 1L) != g_216);
                    }
                    else
                    {
                        const struct S1 l_274 = {0xFF0B44413F615BDBLL,0x7CL,0L,-4L,-2L,255UL,0xB6020A75L};
                        g_51 = g_52.f4;
                        l_231 = ((-9L) <= ((func_60(g_35.f1, l_274) , 0x34AD1ED1595770AFLL) | (safe_rshift_func_int8_t_s_s(l_178.f5, 3))));
                        if (g_52.f2)
                            break;
                        l_112 = p_95;
                    }
                }
                else
                {
                    unsigned char l_291 = 0x04L;
                    int l_300 = 0xF409EA00L;
                    unsigned short l_302 = 0UL;
                    if ((g_51 = p_95))
                    {
                        short l_299 = 1L;
                        l_112 = (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((g_52.f1 = (safe_rshift_func_int16_t_s_u(func_15(g_248, (safe_sub_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((g_45 , ((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((l_250 ^ l_291), (((-1L) || (p_94 ^ (p_94 >= ((0x16DBL | (!((safe_unary_minus_func_int8_t_s(0x8FL)) && g_273))) & p_95)))) > (-7L)))), g_52.f4)) >= g_35.f1)), 0x3F15251FL)), 18446744073709551607UL)), l_250), p_95))), l_291)), g_52.f5));
                        l_300 = (safe_sub_func_int16_t_s_s(g_45.f0, (((safe_sub_func_int32_t_s_s(g_35.f1, (0x90CCB52ADD3FD6EDLL >= p_94))) || (func_28(l_178.f4, ((((safe_sub_func_uint16_t_u_u(((func_60(l_299, g_52) , (l_299 < 0x4BL)) , l_251), p_95)) , p_94) || g_272) , g_52.f3), p_95, g_35.f3) | p_95)) & p_94)));
                        return g_35.f3;
                    }
                    else
                    {
                        char l_306 = 0xF7L;
                        int l_307 = 0xC6B35F5EL;
                        if (g_2)
                            break;
                        l_307 = ((g_273 = (func_54(((func_15((l_301 = g_52.f1), l_302, (g_111 | ((safe_lshift_func_int16_t_s_s(p_94, 10)) , (g_305 = (g_2 = (g_111 != l_256)))))) | (l_105 = ((func_15((func_28((g_272 , 0x62E621D1L), l_306, l_300, l_300) == p_94), l_269, g_52.f0) >= 0UL) , 1UL))) > g_216), l_258) ^ p_95)) <= l_251);
                        l_300 = (((((0x705CB8CD818A9741LL || 0x5748553BB460943DLL) , (l_301 = p_94)) >= g_2) || l_308) < p_95);
                        g_51 = (safe_rshift_func_uint16_t_u_u(g_124.f0, l_253));
                    }
                    l_105 = (-1L);
                    l_256 = (safe_mod_func_uint32_t_u_u(l_253, p_95));
                    l_326 = (l_301 = (!((func_54((((safe_sub_func_int16_t_s_s(func_54(l_315, (g_35.f2 == (l_300 = (safe_rshift_func_uint8_t_u_s(g_248, 3))))), (+(g_320 = (g_2 = ((safe_lshift_func_int16_t_s_u(l_291, 6)) & p_94)))))) && (safe_mod_func_int64_t_s_s((((safe_rshift_func_uint16_t_u_u((+((l_231 = func_15((g_248 | (l_178.f6 && (l_105 = (func_63(g_216) && p_94)))), g_42, g_35.f2)) & 0L)), l_195)) < l_253) || l_231), l_315))) , 0x11AFBF1C9E3581CELL), l_325) <= 0UL) > p_94)));
                }
                g_328 = (l_213 , (func_15(g_52.f5, (safe_unary_minus_func_int16_t_s((65535UL <= (((p_94 <= p_95) > (l_301 = 0x61L)) | ((g_45.f1 | (g_51 = (g_320 = g_124.f0))) < p_94))))), g_111) <= 0L));
            }
        }
        for (l_269 = (-8); (l_269 <= (-14)); --l_269)
        {
            l_112 = 4L;
            g_216 = g_45.f1;
        }
        if (((l_231 | func_15((((safe_add_func_int8_t_s_s((g_45.f0 = p_95), (func_63(((l_112 = p_95) < g_35.f3)) && ((((g_339 = (((g_273 = (safe_add_func_int16_t_s_s((l_178.f1 && p_95), l_231))) ^ (+(safe_lshift_func_uint8_t_u_s((l_178.f5 & g_52.f5), l_231)))) == g_52.f3)) | p_94) > g_179) & 0L)))) == p_94) == 65534UL), l_269, g_2)) <= l_103))
        {
            struct S3 l_345 = {65526UL};
            int l_350 = 2L;
            if ((+(safe_rshift_func_int16_t_s_s(0x3B80L, l_207.f0))))
            {
                unsigned l_351 = 1UL;
                if (p_94)
                {
                    unsigned long long l_342 = 0xC23F51DE6E452DE9LL;
                    int l_348 = (-1L);
                    g_339 = (func_63((func_28((l_342 = l_269), l_231, p_94, l_231) && (p_95 | (((((((safe_sub_func_uint64_t_u_u(func_63((l_345 , (0UL || (l_112 = g_52.f5)))), 0xB4133E579819D070LL)) == p_94) == p_95) | p_95) <= l_345.f0) ^ g_71) && g_328)))) > 0xE4E1L);
                    for (p_95 = (-10); (p_95 <= (-22)); p_95 = safe_sub_func_int8_t_s_s(p_95, 1))
                    {
                        g_339 = p_95;
                        l_112 = 0xC4F91229L;
                        l_348 = g_248;
                        if (g_52.f4)
                            continue;
                    }
                    if (p_95)
                        continue;
                }
                else
                {
                    int l_349 = 0x8A954B93L;
                    l_350 = l_349;
                    g_339 = (-1L);
                    l_350 = (((l_351 <= func_28(p_94, g_320, ((-5L) != (l_231 = 0xD0C8C628L)), l_315)) != (safe_lshift_func_uint16_t_u_s(l_130, ((-1L) >= g_52.f2)))) || l_349);
                }
            }
            else
            {
                struct S1 l_354 = {18446744073709551615UL,0x90L,1L,1L,0xCFL,0xD9L,0x743C3873L};
                int l_355 = 0L;
                l_231 = (l_354 , g_52.f0);
                l_355 = (-10L);
                g_320 = (l_354.f3 > ((!(safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint16_t_u(func_28(p_94, (0x005C5DCF13215F6ALL == (safe_add_func_int64_t_s_s(0xAF887CB2C07887B8LL, l_350))), g_52.f0, (l_215 && (safe_add_func_int8_t_s_s(((g_365 = p_94) != (-2L)), l_231)))))), g_45.f1)) || g_35.f0), p_94))) <= g_42));
            }
            if (l_207.f0)
            {
                int l_368 = (-1L);
                int l_369 = 1L;
                l_369 = ((l_155.f0 < g_35.f0) <= (((((l_366 = (g_320 < 0L)) , (g_2 = (func_28((l_105 = ((l_112 = (l_350 = ((0x75F23333DDF15BD0LL < l_367) || g_45.f0))) >= (l_231 = (g_35.f3 , p_94)))), g_339, g_52.f6, l_368) ^ p_95))) || 0x51EDL) >= p_95) < p_95));
                l_112 = l_112;
                return p_95;
            }
            else
            {
                int l_375 = 0L;
                int l_383 = 0L;
                for (g_42 = 0; (g_42 == (-27)); g_42 = safe_sub_func_uint16_t_u_u(g_42, 2))
                {
                    unsigned l_374 = 1UL;
                    int l_382 = 0L;
                    l_375 = (func_28(((((l_350 = g_216) < 0x402AL) && ((g_339 == ((safe_rshift_func_uint8_t_u_s(0xDDL, (l_374 & g_52.f6))) <= g_52.f4)) & func_63(func_63(p_95)))) & l_345.f0), g_320, l_374, l_374) && g_339);
                    if (p_94)
                        break;
                    g_51 = ((l_375 = ((p_94 <= (g_2 = (((g_45.f0 && 0xC61110A9B9D1EB9ELL) , g_35) , 3L))) || 4294967288UL)) > ((((l_382 = (g_52.f0 < (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_95, ((((safe_sub_func_uint16_t_u_u((p_94 == g_365), 0xD341L)) , 0x1CBC5008L) , 0x35L) | 0x41L))), g_111)))) & l_383) , l_382) != p_94));
                }
            }
            l_112 = (((g_248 ^ (func_15(g_52.f2, ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((func_60(p_95, l_392) , ((func_54(g_42, (safe_mod_func_uint64_t_u_u(0x4840EA7109353299LL, (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((((func_54((l_231 = (!((g_328 || l_155.f1) | p_95))), l_178.f0) , 0x55L) > g_52.f2) , 0xB4DA3A7CL), 4294967289UL)), p_94)) , g_52.f6), 0xF4D44978F3150E26LL))))) , l_155.f3) || 8L)) < g_35.f2), 5)) , g_52.f5), 1)), g_35.f3)) == l_269), p_94) != p_95)) ^ g_328) == l_112);
            l_350 = g_45.f0;
        }
        else
        {
            for (p_94 = 0; (p_94 != 30); ++p_94)
            {
                short l_418 = 0x3687L;
                int l_420 = (-1L);
                for (l_231 = 0; (l_231 > 1); ++l_231)
                {
                    unsigned l_408 = 0x8C486AF5L;
                    g_320 = (l_405 = (0UL < p_94));
                    if ((l_406 = p_95))
                    {
                        if (l_407)
                            break;
                        return g_45.f1;
                    }
                    else
                    {
                        const unsigned l_419 = 0x3E50D748L;
                        g_411 = (g_216 , func_15(l_408, (g_45.f2 , (safe_mod_func_int8_t_s_s(l_408, g_35.f1))), p_94));
                        l_420 = ((0x75L != ((safe_rshift_func_uint16_t_u_u((0xF218528CL && 0x2C75C99BL), 15)) || 0xFE9D9399L)) <= (safe_sub_func_int64_t_s_s((p_95 | ((l_207 , (safe_rshift_func_int8_t_s_u(l_408, ((func_15(l_418, l_408, g_320) <= g_52.f1) , 1UL)))) , l_419)), 0x90F47D597A77BCCCLL)));
                        l_105 = 0xA2A2713DL;
                    }
                }
                l_105 = (~p_95);
            }
        }
    }
    return p_94;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_35.f0, "g_35.f0", print_hash_value);
    transparent_crc(g_35.f1, "g_35.f1", print_hash_value);
    transparent_crc(g_35.f2, "g_35.f2", print_hash_value);
    transparent_crc(g_35.f3, "g_35.f3", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_45.f0, "g_45.f0", print_hash_value);
    transparent_crc(g_45.f1, "g_45.f1", print_hash_value);
    transparent_crc(g_45.f2, "g_45.f2", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
    transparent_crc(g_52.f5, "g_52.f5", print_hash_value);
    transparent_crc(g_52.f6, "g_52.f6", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_124.f0, "g_124.f0", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
