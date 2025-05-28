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
   signed f0 : 12;
   unsigned f1 : 19;
   signed f2 : 10;
   signed f3 : 13;
   signed f4 : 10;
   signed f5 : 27;
   signed f6 : 14;
   signed f7 : 9;
   signed f8 : 8;
};

struct S1 {
   unsigned f0;
   unsigned char f1;
   struct S0 f2;
   int f3;
};

union U2 {
   int f0;
   signed f1 : 13;
   int f2;
   unsigned f3 : 20;
};


static unsigned char g_4 = 0xE5L;
static struct S0 g_64 = {-29,402,-30,87,4,-9377,49,-10,-14};
static int g_70 = 0x2CF014A1L;
static struct S1 g_76 = {0x447D5CE9L,1UL,{20,551,15,77,17,8917,-28,-17,3},0x0D171E9DL};
static struct S1 *g_79 = &g_76;
static int g_81 = 0xA8626FBEL;
static struct S0 g_88 = {-47,205,21,56,3,-2667,-40,9,-1};
static struct S1 g_90 = {4294967295UL,2UL,{61,431,6,-5,-3,-4265,24,-15,1},0x58E765C7L};
static int g_126 = (-1L);
static unsigned short g_180 = 65529UL;
static short g_189 = 0L;
static int g_199 = 0x7DC17694L;
static union U2 g_210 = {-1L};
static int *g_223 = (void*)0;
static int **g_222 = &g_223;
static union U2 g_269 = {1L};
static union U2 *g_268 = &g_269;
static struct S0 g_282 = {-42,376,14,-6,16,-1390,30,1,8};
static struct S1 g_290 = {4294967295UL,253UL,{19,214,-10,51,-21,2227,44,-16,3},0x9C9CAAB5L};
static char g_301 = 0x02L;
static char g_313 = 0x70L;
static unsigned g_314 = 0x499AB779L;
static struct S1 *g_337 = &g_76;
static struct S0 *g_341 = &g_290.f2;
static struct S0 **g_340 = &g_341;
static short g_358 = 0xE2A2L;
static unsigned short *g_360 = &g_180;
static unsigned short **g_359 = &g_360;
static unsigned short g_407 = 1UL;



static union U2 func_1(void);
static char func_19(union U2 p_20);
static union U2 func_21(int p_22, struct S1 p_23);
static unsigned func_28(union U2 p_29);
static union U2 func_30(unsigned char p_31, int p_32);
static int func_34(char p_35, short p_36);
static char func_37(unsigned char p_38, int p_39);
static int func_42(unsigned short p_43, int p_44, unsigned p_45, int p_46, union U2 p_47);
static unsigned char func_48(struct S0 p_49, struct S0 p_50, struct S0 p_51, struct S1 p_52);
static struct S0 func_53(char p_54);
static union U2 func_1(void)
{
    unsigned l_33 = 18446744073709551613UL;
    struct S0 l_89 = {6,155,26,-77,-30,3375,58,-3,8};
    union U2 l_93 = {9L};
    int *l_328 = (void*)0;
    struct S0 l_333 = {21,542,26,87,-29,1704,92,-21,-7};
    struct S1 **l_334 = &g_79;
    if ((safe_lshift_func_uint16_t_u_s(65535UL, g_4)))
    {
        char l_63 = 0x7FL;
        struct S0 *l_65 = &g_64;
        char *l_71 = &l_63;
        unsigned short *l_91 = (void*)0;
        int l_92 = 0x7B726758L;
        int l_162 = 1L;
        short l_163 = 1L;
        unsigned char *l_164 = (void*)0;
        unsigned char *l_165 = &g_4;
        int l_289 = 5L;
        short *l_357 = &g_358;
        unsigned *l_361 = (void*)0;
        unsigned *l_362 = (void*)0;
        unsigned *l_363 = &g_76.f0;
        int *l_364 = &l_92;
        if (((safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((((((((safe_add_func_int8_t_s_s((-1L), (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(func_19(func_21((l_289 = (((*l_165) = (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(func_28(func_30(l_33, func_34(func_37(((*l_165) = ((safe_sub_func_uint32_t_u_u(((func_42((l_89.f5 = (func_48(func_53(((*l_71) = (g_4 >= ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((l_63 || (((*l_65) = g_64) , (l_33 , (~g_64.f7)))), ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((g_70 = (g_4 ^ 0x37L)), 6)) ^ 248UL), l_63)) >= g_4))) > l_63), 3)), 4)) < l_63)))), g_88, l_89, g_90) == 255UL)), g_90.f1, l_92, l_33, l_93) <= (-1L)) < g_88.f4), l_162)) > l_163)), g_88.f1), l_89.f4))), 0xED2BC827L)) & l_162), 12))) > g_88.f3)), g_290)), g_282.f3)), g_282.f2)) != l_93.f1) || l_289) >= g_88.f7), g_290.f3)), l_162)))) & l_162) <= g_290.f2.f6) & l_89.f7) == l_163) , l_89.f3) , 4294967293UL), g_282.f0)) & g_88.f6), 0x72L)) & g_290.f2.f0))
        {
            int l_329 = 0x7C427C19L;
            int *l_330 = (void*)0;
            int *l_331 = (void*)0;
            int *l_332 = &g_269.f2;
            unsigned char l_346 = 0x9DL;
            (*g_222) = l_328;
            if ((l_63 && ((((*l_332) = l_329) , g_76.f3) | (g_76.f1 != ((l_333 , g_90.f2) , ((void*)0 != l_334))))))
            {
                char l_335 = 0x15L;
                int *l_336 = &l_93.f0;
                (*g_222) = ((((*l_165) = func_19(((*g_268) = func_30(((0UL == l_335) , l_335), l_63)))) | g_88.f7) , l_336);

                ;
                                (*g_222) = (*g_222);
                (*l_334) = g_337;

                ;
                (*g_222) = l_332;

                ;
            }
            else
            {
                union U2 l_342 = {0x0CC6078AL};
lbl_343:
                (*l_332) = ((!((~(0x55L != ((safe_rshift_func_uint16_t_u_s((0x5911L && ((~((*l_71) = (((*g_337) , g_340) != &g_341))) == func_19(l_342))), l_342.f1)) >= 0UL))) || 255UL)) ^ l_333.f3);
                (*g_222) = &l_289;

                ;
                if (g_90.f0)
                    goto lbl_343;
                (*g_341) = (**g_340);
            }

            ;
        }
        else
        {
            l_328 = (*g_222);
        }


                ;
        (*l_364) = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_92, 6)), ((*l_363) = (safe_sub_func_int32_t_s_s(func_34(l_289, (safe_rshift_func_int16_t_s_s(g_282.f7, 6))), ((g_313 != ((l_163 != ((*l_357) = l_162)) , ((void*)0 != g_359))) < (**g_359)))))));

        ;
    }
    else
    {
        if (g_88.f8)
        {
            (**l_334) = (**l_334);
            for (l_93.f0 = 0; (l_93.f0 == (-9)); --l_93.f0)
            {
                (*g_222) = (*g_222);
                return l_93;

                            }
        }
        else
        {
            unsigned l_391 = 4294967295UL;
            for (l_93.f2 = 0; (l_93.f2 <= 2); l_93.f2 = safe_add_func_uint32_t_u_u(l_93.f2, 6))
            {
                unsigned char l_371 = 253UL;
                int *l_372 = &g_126;
                union U2 l_375 = {8L};
                if ((safe_add_func_int32_t_s_s(l_371, ((*l_372) = (-9L)))))
                {
                    unsigned l_388 = 1UL;
                    int l_393 = 0x6B7FFBDEL;
                    struct S0 **l_394 = &g_341;
                    for (l_371 = 0; (l_371 <= 49); l_371 = safe_add_func_uint32_t_u_u(l_371, 7))
                    {
                        return l_375;

                                            }
                    for (l_375.f0 = 8; (l_375.f0 == 9); l_375.f0 = safe_add_func_int8_t_s_s(l_375.f0, 3))
                    {
                        char *l_384 = &g_313;
                        int l_387 = 0xF8AABB8FL;
                        unsigned char *l_392 = (void*)0;
                        struct S0 ***l_395 = &g_340;
                        g_290.f2.f8 = 1L;
                        (*l_372) = ((safe_mod_func_uint8_t_u_u((*l_372), (safe_add_func_uint16_t_u_u((**g_359), (+(safe_rshift_func_int8_t_s_u(((*l_384) = 0x72L), (safe_div_func_uint32_t_u_u(l_387, (g_88.f8 , func_37(l_388, l_387))))))))))) , (((l_393 = (safe_sub_func_int32_t_s_s((l_391 & g_90.f2.f6), 0x6D1FA869L))) ^ l_388) & 0x99103560L));
                        (*l_395) = l_394;
                    }
                }
                else
                {
                    int l_404 = 0x4CB59A95L;
                    struct S1 *l_410 = &g_290;
                    for (l_371 = 0; (l_371 >= 21); l_371 = safe_add_func_uint16_t_u_u(l_371, 4))
                    {
                        unsigned short l_400 = 0x5249L;
                        short *l_401 = &g_189;
                        unsigned short *l_405 = (void*)0;
                        unsigned short *l_406 = &g_407;
                        unsigned *l_408 = &g_314;
                        struct S1 **l_409 = &g_337;
                    }
                }
            }

                        (**g_340) = (**g_340);
            (**g_340) = func_53((g_313 = g_88.f2));


        }


        return (*g_268);

            }



    return (*g_268);

    }







static char func_19(union U2 p_20)
{
    struct S0 l_317 = {40,666,-30,-30,-0,-10387,-120,4,9};
    struct S0 *l_318 = &g_90.f2;
    struct S1 l_321 = {0x8AE1D0E7L,0UL,{16,711,22,-86,13,-477,68,-21,4},-1L};
    int *l_322 = (void*)0;
    int *l_323 = &g_210.f2;
    int **l_327 = &l_323;
    p_20.f0 = (-1L);
    (*l_323) = (g_88.f1 | ((((g_282 , (((((6L && p_20.f2) <= (((*l_318) = l_317) , l_317.f1)) || (g_88.f8 , (safe_lshift_func_uint16_t_u_s(func_48((*l_318), g_282, g_88, l_321), g_90.f3)))) >= g_64.f2) >= 0x20L)) & g_64.f2) != l_317.f5) > g_290.f2.f0));

    for (g_301 = (-16); (g_301 < 6); ++g_301)
    {
        int *l_326 = &g_81;
        if (p_20.f0)
            break;
        (*g_222) = l_326;

        ;
    }


    (*l_327) = ((*g_222) = l_322);

    ;
    ;
    return p_20.f3;
}







static union U2 func_21(int p_22, struct S1 p_23)
{
    unsigned short l_291 = 1UL;
    char *l_300 = &g_301;
    int *l_302 = &g_81;
    char *l_311 = (void*)0;
    char *l_312 = &g_313;
    unsigned *l_315 = &g_90.f0;
    int *l_316 = &g_269.f0;
    (*g_222) = (l_291 , (*g_222));
    (*l_316) = (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(p_23.f2.f5, (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((*l_300) = g_269.f1), (((*l_302) = p_23.f2.f5) & ((safe_rshift_func_uint16_t_u_u(((((*l_315) = ((g_314 = (safe_div_func_int16_t_s_s((0x5B5CL && ((p_23.f2.f8 <= (safe_div_func_uint32_t_u_u((func_37(l_291, p_23.f2.f0) & (((*l_312) = p_23.f1) != 0L)), 0x8FD73BD4L))) == p_23.f0)), 0x5417L))) > g_88.f6)) || l_291) || 4294967292UL), g_76.f2.f0)) != g_199)))), p_23.f1)))), p_23.f0));

        (*l_302) = ((*l_316) = p_23.f3);
    return (*g_268);

    }







static unsigned func_28(union U2 p_29)
{
    struct S1 l_284 = {0x787A77D2L,0xB2L,{37,280,-27,-70,4,-11539,-0,16,-1},-7L};
    struct S0 *l_286 = &g_90.f2;
    struct S0 **l_285 = &l_286;
    int *l_287 = (void*)0;
    int *l_288 = &g_210.f0;
    l_284 = l_284;
    (*l_285) = &g_88;

    ;
    (*l_288) = l_284.f3;

    return g_90.f2.f4;
}







static union U2 func_30(unsigned char p_31, int p_32)
{
    int *l_278 = &g_210.f2;
    struct S0 l_281 = {-48,239,10,22,-19,1575,67,16,7};
    union U2 l_283 = {1L};
    g_269.f1 = ((*l_278) = (0xBD4E2FBBL ^ p_32));

    (*l_278) = ((safe_rshift_func_int16_t_s_s((&p_31 != &p_31), func_48(l_281, g_64, g_282, g_90))) & (*l_278));
    return l_283;

    }







static int func_34(char p_35, short p_36)
{
    int l_175 = 8L;
    struct S1 l_183 = {0UL,0xDBL,{-19,19,-18,-62,-13,-7709,-93,19,-1},-1L};
    int *l_198 = (void*)0;
    unsigned short *l_206 = (void*)0;
    unsigned short **l_205 = &l_206;
    unsigned short ***l_204 = &l_205;
    unsigned short l_214 = 0UL;
    int l_224 = 1L;
    struct S0 l_235 = {1,77,-22,43,-12,2645,50,10,-10};
    struct S1 l_239 = {1UL,1UL,{-29,583,-23,46,3,6537,-27,-18,-10},-2L};
    if ((g_64 , p_35))
    {
        int *l_174 = &g_126;
        int **l_173 = &l_174;
        unsigned short *l_203 = &g_180;
        unsigned short **l_202 = &l_203;
        unsigned short ***l_201 = &l_202;
        int l_213 = (-9L);
        struct S0 l_231 = {35,592,11,23,-8,7190,11,-4,-3};
        int *l_253 = &g_81;
        struct S1 l_264 = {0x833479E1L,248UL,{54,3,-28,-29,-18,503,-100,-17,3},0x3E8016A9L};
        (*l_173) = &g_81;

        ;
        l_175 = (!((*l_174) = 0xA50289E9L));
        if ((safe_rshift_func_uint16_t_u_s(g_64.f1, (&g_4 == &g_4))))
        {
            int *l_178 = &g_81;
            unsigned short *l_179 = &g_180;
            unsigned short **l_181 = &l_179;
            char l_182 = 0x59L;
            (*l_173) = l_178;
            (*l_178) = (l_182 = (((*l_181) = l_179) != (void*)0));
        }
        else
        {
            short *l_188 = &g_189;
            int l_190 = 0L;
            int *l_195 = (void*)0;
            int **l_196 = &l_195;
            int l_197 = 9L;
            unsigned char *l_200 = (void*)0;
            short l_207 = 0xE387L;
            struct S1 *l_208 = &g_76;
            struct S1 **l_209 = &g_79;
            (*l_173) = &g_81;
            l_207 = ((*l_174) = (l_183 , (((l_197 = ((safe_rshift_func_uint8_t_u_u(((((*l_188) = (safe_lshift_func_uint16_t_u_u((246UL <= 0x52L), 0))) != ((((l_190 = g_70) < func_37((((safe_div_func_int8_t_s_s(l_183.f2.f4, (+(safe_rshift_func_int16_t_s_u((((*l_196) = l_195) != &g_70), ((l_197 || g_180) >= 1L)))))) , (void*)0) != l_198), (**l_173))) ^ g_76.f3) , l_197)) && g_199), 1)) || g_88.f4)) , l_201) == l_204)));
            (*l_209) = l_208;

            ;
        }
        if (((func_42(p_35, ((**l_173) = ((void*)0 != &l_205)), g_64.f5, g_76.f2.f0, g_210) , (l_183.f2.f1 , (safe_div_func_int8_t_s_s((*l_174), l_213)))) == l_214))
        {
            (*l_174) = g_90.f1;
            (*l_173) = l_198;

            ;
        }
        else
        {
            struct S1 **l_215 = &g_79;
            struct S0 l_230 = {17,581,-11,2,26,267,-30,10,-2};
            int *l_254 = &g_81;
            union U2 l_256 = {0L};
            (*l_173) = (*l_173);
            g_76.f2.f0 = p_36;
            (*l_215) = &l_183;

            ;
            for (g_210.f2 = (-21); (g_210.f2 > (-6)); g_210.f2++)
            {
                short l_225 = 2L;
                struct S0 *l_232 = (void*)0;
                struct S0 *l_233 = &l_183.f2;
                struct S0 *l_234 = &g_90.f2;
                union U2 l_238 = {0x5F16A319L};
                struct S1 *l_245 = &g_76;
                int *l_248 = &g_126;
                unsigned char *l_255 = &g_4;
                l_225 = (((safe_mul_func_uint8_t_u_u(p_35, (func_37(g_64.f1, (safe_lshift_func_int16_t_s_u((-2L), 11))) == ((void*)0 != g_222)))) >= (g_90.f1 = l_224)) <= g_76.f2.f0);
                if (((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(func_48(l_230, ((*l_234) = ((*l_233) = l_231)), (l_235 , g_76.f2), l_239), p_35)), l_230.f6)) ^ 0xCED4EB88L))
                {
                    struct S0 l_240 = {-52,174,-28,31,9,11400,87,12,7};
                    (*l_233) = l_240;
                    if ((**l_173))
                        break;
                }
                else
                {
                    (**l_173) = 0x47AE80A5L;
                }
            }

                    }


        ;
    }
    else
    {
        struct S1 l_270 = {0xE0738532L,246UL,{53,657,8,-14,20,-10657,-81,-15,1},-10L};
        struct S1 *l_271 = &g_90;
        int *l_274 = &g_210.f2;
        (*l_271) = l_270;
        for (g_269.f0 = (-19); (g_269.f0 > 5); g_269.f0++)
        {
            short l_275 = 0x87DCL;
            (*g_222) = l_274;

            ;
            if (l_275)
                break;
        }


        (*g_222) = (*g_222);
        if ((p_35 >= (safe_lshift_func_int8_t_s_u(g_88.f2, 3))))
        {
            return p_36;
        }
        else
        {
            l_198 = &l_224;

            ;
        }

        ;
    }


    ;

    return p_36;


}







static char func_37(unsigned char p_38, int p_39)
{
    int l_166 = 0x5DC94D4DL;
    struct S0 *l_167 = &g_90.f2;
    struct S0 *l_168 = &g_64;
    int *l_171 = &g_126;
    int **l_172 = &l_171;
    (*l_168) = ((*l_167) = g_88);
    l_167 = &g_88;

    ;
    for (g_90.f3 = 0; (g_90.f3 > 24); g_90.f3 = safe_add_func_int16_t_s_s(g_90.f3, 5))
    {
        return l_166;
    }
    (*l_172) = l_171;
    return p_38;
}







static int func_42(unsigned short p_43, int p_44, unsigned p_45, int p_46, union U2 p_47)
{
    unsigned short l_103 = 1UL;
    short l_104 = (-7L);
    struct S1 l_113 = {9UL,255UL,{-45,14,-2,-44,-18,10574,-53,4,14},-2L};
    short l_128 = 1L;
    struct S0 l_132 = {-54,501,12,-37,1,4536,1,-14,15};
    int *l_134 = &g_81;
    struct S0 l_135 = {-19,342,1,-73,-6,7450,37,3,-11};
    for (g_76.f0 = 0; (g_76.f0 >= 33); g_76.f0 = safe_add_func_int16_t_s_s(g_76.f0, 4))
    {
        int l_98 = 0x619C5867L;
        struct S0 l_99 = {6,183,-5,-4,31,3913,-70,-1,-4};
        struct S1 l_100 = {4294967295UL,0UL,{-39,628,-9,-7,24,9222,118,-7,-5},0x27B06419L};
        int *l_105 = &g_81;
        int *l_106 = &l_98;
        unsigned l_127 = 0xDB4BB63CL;
        struct S0 l_129 = {5,222,-15,-69,-27,-10752,69,-11,-12};
        struct S1 **l_146 = &g_79;
        unsigned short *l_160 = &l_103;
        unsigned short **l_159 = &l_160;
        unsigned short ***l_161 = &l_159;
        (*l_106) = ((*l_105) = (safe_add_func_int16_t_s_s((l_98 == g_90.f2.f1), ((func_48(g_88, l_99, l_99, l_100) >= (safe_lshift_func_int8_t_s_s((l_103 , (((l_103 && p_44) , (void*)0) != (void*)0)), 3))) ^ l_104))));
        for (p_45 = 0; (p_45 <= 42); ++p_45)
        {
            unsigned *l_121 = &l_113.f0;
            struct S1 l_124 = {0x1A230859L,1UL,{22,562,2,-52,22,-8134,17,20,15},0x8D7B099BL};
            char *l_125 = (void*)0;
            for (g_4 = 12; (g_4 > 4); g_4--)
            {
                for (p_44 = 0; (p_44 <= 13); p_44 = safe_add_func_uint8_t_u_u(p_44, 2))
                {
                    struct S1 *l_114 = &g_90;
                    struct S1 *l_115 = &l_100;
                    int **l_116 = &l_106;
                    (*l_115) = ((*l_114) = l_113);
                    (*l_105) = (*l_106);
                    (*l_116) = &p_44;

                    ;
                }
                (*l_106) = p_47.f2;
            }
            if ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(((*l_121) = g_76.f2.f2), (safe_sub_func_int8_t_s_s((l_127 = (g_126 = (g_90.f2 , func_48(g_76.f2, g_88, g_88, l_124)))), l_128)))), func_48(l_113.f2, l_99, l_129, l_100))))
            {
                int **l_130 = (void*)0;
                int *l_131 = &l_98;
                (*l_105) = g_90.f2.f8;
                l_131 = l_121;

                ;
                (*l_105) = g_88.f1;
                if (l_124.f0)
                    break;
            }
            else
            {
                int **l_133 = (void*)0;
                (*l_105) = ((*l_106) = func_48(l_113.f2, l_124.f2, (l_132 = g_90.f2), l_124));
                l_134 = &l_98;

                ;
                if ((l_135 , ((l_124.f2.f7 = g_76.f2.f2) || g_88.f6)))
                {
                    unsigned char *l_140 = &l_100.f1;
                    struct S0 l_143 = {18,128,-14,-25,5,6195,100,15,-13};
                    struct S0 *l_144 = &l_113.f2;
                    struct S0 *l_145 = &g_64;
                    (*l_105) = (safe_lshift_func_int16_t_s_s(g_76.f2.f0, (((safe_lshift_func_uint16_t_u_s((((((*l_134) = ((*l_140) = p_45)) >= (safe_mod_func_int16_t_s_s(p_47.f2, func_48(l_100.f2, ((((p_47.f0 , (&g_70 != (void*)0)) != p_43) > (g_64.f4 || 3L)) , l_124.f2), l_143, l_113)))) > p_46) & g_76.f2.f2), g_64.f3)) <= p_47.f0) , p_43)));
                    l_100.f2 = ((*l_145) = ((*l_144) = l_129));
                    if (l_143.f7)
                    {
                        (*l_134) = ((*l_105) = (l_146 == &g_79));
                    }
                    else
                    {
                        struct S1 *l_147 = &g_90;
                        int l_154 = 0xFFA4CDD5L;
                        l_134 = (l_135 , &g_81);

                        ;
                        (*l_147) = l_113;
                        (*l_105) = ((((((safe_unary_minus_func_uint8_t_u((l_143.f7 | (((*l_147) = l_124) , (((safe_unary_minus_func_int8_t_s((+(safe_sub_func_uint16_t_u_u(g_88.f8, (safe_rshift_func_int16_t_s_u(((((*l_140) = l_154) == (&l_98 != &g_126)) | (*l_134)), (safe_sub_func_int32_t_s_s(9L, ((safe_mod_func_int16_t_s_s((((*l_134) >= (*l_134)) <= p_44), g_76.f0)) > 1L)))))))))) | p_47.f3) & (*l_106)))))) && p_47.f1) | 0xC0L) ^ 0xBBF3L) , g_64.f4) >= 0xDE9BL);
                    }

                    ;
                }
                else
                {
                    if (p_46)
                        break;
                }

                ;
            }
            (*l_105) = (*l_105);
        }


        ;
        (*l_161) = l_159;
    }


    l_134 = &p_44;

    ;
    (*l_134) = 0x1CCCAE95L;
    return p_44;
}







static unsigned char func_48(struct S0 p_49, struct S0 p_50, struct S0 p_51, struct S1 p_52)
{
    return p_52.f2.f5;
}







static struct S0 func_53(char p_54)
{
    struct S1 l_72 = {0x294BA750L,255UL,{-59,288,9,56,17,-1569,13,13,-1},-7L};
    struct S1 *l_73 = (void*)0;
    struct S1 *l_74 = &l_72;
    struct S1 *l_75 = &g_76;
    int *l_77 = &l_72.f3;
    (*l_75) = ((*l_74) = l_72);
    if ((((*l_77) = 0x0D2C1345L) , l_72.f2.f4))
    {
        struct S1 **l_78 = (void*)0;
        g_79 = &l_72;

        ;
    }
    else
    {
        int *l_80 = &g_81;
        (*l_80) = p_54;
        for (l_72.f1 = 0; (l_72.f1 == 41); l_72.f1++)
        {
            struct S1 l_84 = {4294967295UL,2UL,{-1,506,-12,-43,-25,3062,-7,-6,3},0L};
            l_84 = l_84;
        }
        for (l_72.f1 = 17; (l_72.f1 <= 14); l_72.f1 = safe_sub_func_int8_t_s_s(l_72.f1, 1))
        {
            unsigned *l_87 = &g_76.f0;
            l_72.f2.f8 = (~((l_72.f2.f2 == ((*l_87) = 0xEC415B45L)) ^ g_76.f2.f2));
        }
    }


    (*l_74) = (*g_79);
    return g_76.f2;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6, "g_64.f6", print_hash_value);
    transparent_crc(g_64.f7, "g_64.f7", print_hash_value);
    transparent_crc(g_64.f8, "g_64.f8", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2.f0, "g_76.f2.f0", print_hash_value);
    transparent_crc(g_76.f2.f1, "g_76.f2.f1", print_hash_value);
    transparent_crc(g_76.f2.f2, "g_76.f2.f2", print_hash_value);
    transparent_crc(g_76.f2.f3, "g_76.f2.f3", print_hash_value);
    transparent_crc(g_76.f2.f4, "g_76.f2.f4", print_hash_value);
    transparent_crc(g_76.f2.f5, "g_76.f2.f5", print_hash_value);
    transparent_crc(g_76.f2.f6, "g_76.f2.f6", print_hash_value);
    transparent_crc(g_76.f2.f7, "g_76.f2.f7", print_hash_value);
    transparent_crc(g_76.f2.f8, "g_76.f2.f8", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_88.f3, "g_88.f3", print_hash_value);
    transparent_crc(g_88.f4, "g_88.f4", print_hash_value);
    transparent_crc(g_88.f5, "g_88.f5", print_hash_value);
    transparent_crc(g_88.f6, "g_88.f6", print_hash_value);
    transparent_crc(g_88.f7, "g_88.f7", print_hash_value);
    transparent_crc(g_88.f8, "g_88.f8", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2.f0, "g_90.f2.f0", print_hash_value);
    transparent_crc(g_90.f2.f1, "g_90.f2.f1", print_hash_value);
    transparent_crc(g_90.f2.f2, "g_90.f2.f2", print_hash_value);
    transparent_crc(g_90.f2.f3, "g_90.f2.f3", print_hash_value);
    transparent_crc(g_90.f2.f4, "g_90.f2.f4", print_hash_value);
    transparent_crc(g_90.f2.f5, "g_90.f2.f5", print_hash_value);
    transparent_crc(g_90.f2.f6, "g_90.f2.f6", print_hash_value);
    transparent_crc(g_90.f2.f7, "g_90.f2.f7", print_hash_value);
    transparent_crc(g_90.f2.f8, "g_90.f2.f8", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_210.f2, "g_210.f2", print_hash_value);
    transparent_crc(g_210.f3, "g_210.f3", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_269.f1, "g_269.f1", print_hash_value);
    transparent_crc(g_269.f2, "g_269.f2", print_hash_value);
    transparent_crc(g_269.f3, "g_269.f3", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_282.f3, "g_282.f3", print_hash_value);
    transparent_crc(g_282.f4, "g_282.f4", print_hash_value);
    transparent_crc(g_282.f5, "g_282.f5", print_hash_value);
    transparent_crc(g_282.f6, "g_282.f6", print_hash_value);
    transparent_crc(g_282.f7, "g_282.f7", print_hash_value);
    transparent_crc(g_282.f8, "g_282.f8", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2.f0, "g_290.f2.f0", print_hash_value);
    transparent_crc(g_290.f2.f1, "g_290.f2.f1", print_hash_value);
    transparent_crc(g_290.f2.f2, "g_290.f2.f2", print_hash_value);
    transparent_crc(g_290.f2.f3, "g_290.f2.f3", print_hash_value);
    transparent_crc(g_290.f2.f4, "g_290.f2.f4", print_hash_value);
    transparent_crc(g_290.f2.f5, "g_290.f2.f5", print_hash_value);
    transparent_crc(g_290.f2.f6, "g_290.f2.f6", print_hash_value);
    transparent_crc(g_290.f2.f7, "g_290.f2.f7", print_hash_value);
    transparent_crc(g_290.f2.f8, "g_290.f2.f8", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
