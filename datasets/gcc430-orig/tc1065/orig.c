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
   long long f0;
   char f1;
   unsigned long long f2;
   int f3;
   int f4;
   short f5;
   unsigned f6;
   unsigned long long f7;
   signed f8 : 25;
};

struct S1 {
   unsigned f0 : 18;
   unsigned f1 : 20;
   signed f2 : 17;
   unsigned f3 : 16;
   signed f4 : 26;
   unsigned f5 : 13;
   unsigned f6 : 24;
   unsigned f7 : 13;
};

struct S2 {
   unsigned f0;
   char f1;
   char f2;
   struct S1 f3;
   struct S1 f4;
   char f5;
   struct S0 f6;
   char f7;
};

struct S3 {
   unsigned f0;
   unsigned f1;
   struct S0 f2;
};


static int g_13 = 0L;
static int *g_12 = &g_13;
static struct S3 g_50 = {4294967288UL,0xEB92859FL,{-5L,0xECL,1UL,0L,-1L,7L,18446744073709551615UL,18446744073709551614UL,5535}};
static struct S2 g_77 = {0x45CBE742L,-1L,0x66L,{440,763,178,174,1829,84,2993,31},{277,836,180,36,-4750,4,880,69},2L,{-1L,0x9AL,18446744073709551612UL,0xC0EDBB19L,0x5435D577L,-1L,9UL,0x4216E3A478E545B7LL,-3854},1L};
static struct S1 *g_125 = &g_77.f3;
static int ***g_177 = (void*)0;
static struct S3 *g_179 = &g_50;
static int *g_209 = (void*)0;
static unsigned char g_221 = 0x39L;
static char g_258 = 0x41L;
static struct S0 *g_296 = &g_50.f2;
static unsigned g_317 = 0x488B7F67L;
static struct S2 g_363 = {4294967290UL,0L,-9L,{90,497,159,122,-3861,29,3420,81},{250,992,-30,240,5996,3,28,37},0xB3L,{0x3F73EAE890B1CABDLL,0xCEL,18446744073709551609UL,-5L,-5L,0xBA29L,18446744073709551610UL,0xD32308416EDC2020LL,-162},0x55L};
static int g_386 = 0x3DB2A0F0L;
static int *g_385 = &g_386;



static struct S3 func_1(void);
static int * func_2(int * p_3, int * p_4, int p_5, char p_6);
static int * func_7(int * p_8, int * p_9, unsigned p_10, unsigned long long p_11);
static char func_14(struct S0 p_15, int p_16);
static struct S0 func_17(unsigned p_18, unsigned char p_19, unsigned p_20);
static struct S1 func_21(long long p_22, int p_23, int * p_24, int * p_25);
static char func_27(int p_28, int * p_29, unsigned short p_30, unsigned char p_31, struct S2 p_32);
static long long func_33(unsigned p_34, struct S3 p_35, int p_36);
static struct S3 func_37(int * p_38, int * p_39, int * p_40, int p_41);
static unsigned func_42(int * p_43, int p_44);
static struct S3 func_1(void)
{
    short l_26 = (-9L);
    int *l_45 = &g_13;
    int **l_395 = &g_385;
    long long l_398 = 0x98B40CA7EAAE5EC1LL;
    struct S2 l_405 = {4294967295UL,1L,0x2FL,{305,8,160,54,-6829,72,3981,13},{363,498,124,27,-1282,24,3480,65},0L,{0x8A893D41E17ECC15LL,0xEDL,0x6774A5BB8BBE3ED3LL,-7L,-6L,-1L,0xCB06B6E7L,0x94DFDF1D6039D178LL,1804},0x43L};
    struct S3 *l_410 = &g_50;
    unsigned char l_414 = 0x66L;
    l_45 = func_2(func_7(g_12, (func_14(func_17((func_21(l_26, (l_26 || (((func_27((0x3330F6BB026EBB4DLL || func_33(g_13, func_37(((l_26 && func_42(l_45, g_13)) , (void*)0), &g_13, &g_13, (*g_12)), (*l_45))), l_45, l_26, g_50.f2.f5, g_77) , (*l_45)) ^ 6L) <= g_50.f2.f1)), g_12, l_45) , 0UL), g_77.f4.f6, l_26), g_221) , &g_13), g_221, g_221), g_385, g_386, g_317);



    ;
    ;

    (*g_385) = (*l_45);
    (*l_395) = l_45;

    ;
    (*l_395) = func_2(func_7((*l_395), (*l_395), g_77.f4.f3, g_50.f2.f1), (*l_395), l_405.f6.f7, g_77.f6.f4);
    return (*l_410);
}







static int * func_2(int * p_3, int * p_4, int p_5, char p_6)
{
    struct S0 l_387 = {0x44778557BB839751LL,0x02L,9UL,0x7D234256L,0L,-2L,18446744073709551615UL,9UL,-167};
    struct S0 *l_388 = &g_77.f6;
    struct S3 l_391 = {4294967295UL,0x1120A02FL,{0x5D3B40E072FC4A86LL,-1L,0x198EDF2AB933BC6BLL,0x690D0928L,-1L,0xA178L,0xAA2D01DEL,18446744073709551615UL,-2893}};
    int *l_392 = (void*)0;
    int **l_393 = (void*)0;
    int **l_394 = &l_392;
    (*l_388) = (p_6 , l_387);
    (*l_388) = (*l_388);
    (*l_394) = &g_13;

    ;
    return &g_13;


}







static int * func_7(int * p_8, int * p_9, unsigned p_10, unsigned long long p_11)
{
    int **l_231 = &g_12;
    struct S0 l_234 = {0xEE6B793D8E8B0EF3LL,0L,0x5C3CAEEFD5B540CALL,0xAE96CF2EL,0xE8A0E8BDL,0x33C8L,0x3ACDF084L,0x2EB7225A164C548DLL,-1718};
    struct S2 l_250 = {0x545F2232L,-1L,0x22L,{359,184,-170,92,1425,36,2696,25},{22,453,-285,32,-6320,73,927,6},0x05L,{0x5F0EF499A69BFDA5LL,0L,0xE1E51FCC5D80700ELL,0xCF96D034L,0xDB6063B8L,-3L,18446744073709551610UL,0xBDCE8783995F0F2FLL,5583},1L};
    struct S1 *l_268 = &l_250.f4;
    unsigned l_273 = 0x3EA80FC0L;
    long long l_274 = (-1L);
    struct S3 *l_295 = &g_50;
    (*l_231) = p_8;

    ;
    (*p_9) = (p_8 != (*l_231));
    if (((7UL < (safe_sub_func_int32_t_s_s((func_14(((g_50.f2.f3 & p_11) , l_234), (p_10 > (safe_mul_func_int16_t_s_s(p_11, p_11)))) >= (safe_lshift_func_int16_t_s_s((**l_231), 0))), p_11))) > (*p_8)))
    {
        unsigned short l_243 = 0x680EL;
        int *l_251 = (void*)0;
        struct S0 l_261 = {9L,1L,0UL,0x9D369416L,-1L,2L,18446744073709551614UL,18446744073709551614UL,-5036};
        (**l_231) = ((g_50.f2.f6 == 0UL) < (((**l_231) <= (safe_div_func_uint8_t_u_u((**l_231), (safe_add_func_int64_t_s_s(l_243, (safe_lshift_func_uint16_t_u_u((**l_231), ((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((l_250 , g_77.f4.f3) || (g_77.f6 , (**l_231))) , (**l_231)), 4294967292UL)), g_50.f2.f5)) || p_10)))))))) , (-1L)));
        l_251 = &g_13;

        ;
        (*p_9) = (safe_mul_func_uint16_t_u_u((((g_50.f2.f6 || (safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_50.f2.f7 , 6L), g_258)), (safe_lshift_func_uint8_t_u_u(func_14(l_261, (((safe_add_func_int32_t_s_s((**l_231), ((safe_add_func_int16_t_s_s((((((+(((safe_lshift_func_int16_t_s_u(g_13, 13)) , (((void*)0 == l_268) && (*l_251))) >= (**l_231))) && p_10) > 18446744073709551613UL) ^ 0x6339FD3CL) < (*l_251)), p_10)) || (-1L)))) > p_11) < (**l_231))), 3))))) != 9L) , p_10), g_77.f7));
    }
    else
    {
        unsigned long long l_270 = 1UL;
        struct S0 *l_275 = &g_50.f2;
        (**l_231) = func_33(g_50.f2.f5, (g_258 , g_50), ((safe_unary_minus_func_int32_t_s((l_270 & l_270))) & ((((safe_rshift_func_uint8_t_u_u((!func_42(p_8, l_273)), 2)) | ((((g_77.f4.f7 || 0x5023L) & 0xEF86L) > g_77.f3.f3) > p_10)) || p_10) , (*p_9))));
        l_274 = (*p_9);
        (*l_275) = g_50.f2;
    }
    if ((0x745581D9E5358199LL || g_50.f2.f4))
    {
        struct S3 l_282 = {8UL,4294967289UL,{0x46F08C4554F6FE8ELL,0xBFL,0xA2126E9C743024CELL,0xB5562628L,0L,0L,0x25E379C5L,9UL,-4036}};
        int l_283 = (-1L);
        struct S1 *l_284 = &l_250.f3;
        int *l_291 = &l_282.f2.f4;
        struct S2 l_316 = {2UL,0x69L,0xA7L,{413,798,-342,159,3227,36,1499,32},{371,472,361,107,5115,37,2551,81},-3L,{0L,1L,1UL,1L,1L,0xB3AAL,18446744073709551608UL,0xDF78A9A023C1FA16LL,-202},0x4AL};
        struct S0 *l_352 = &l_250.f6;
        if (((0x5DCFFCC7L | (*p_9)) > (((safe_lshift_func_uint16_t_u_s((((l_234 , (((safe_add_func_uint16_t_u_u(p_11, ((0xE52FC0732C857945LL >= (p_10 & ((safe_div_func_int32_t_s_s(0x70662817L, (l_282 , (*p_8)))) ^ p_10))) & (-9L)))) ^ p_11) < p_11)) && (*p_8)) || l_282.f2.f6), l_283)) != 18446744073709551608UL) , (**l_231))))
        {
            struct S1 **l_285 = (void*)0;
            struct S1 **l_286 = &l_268;
            g_125 = l_284;

            ;
            (*l_286) = g_125;

            ;
        }
        else
        {
            int **l_292 = &g_209;
            struct S0 l_293 = {5L,7L,0UL,0x0132B518L,0xC3195D9DL,-1L,0xC3A7848CL,18446744073709551609UL,1866};
            struct S3 *l_294 = &g_50;
            struct S2 l_337 = {4UL,-1L,0x2CL,{101,667,-168,59,4621,78,3406,61},{133,586,189,6,-4338,0,1207,39},9L,{0L,0x61L,18446744073709551608UL,0x0A5AD7FEL,0xDB638585L,0x7406L,0x7E2FAA7EL,0xF07BE547BDA157F7LL,5168},0x31L};
            (*l_231) = p_9;
            (*g_12) = (((&p_9 == ((*l_284) , ((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(func_42(l_291, g_50.f2.f5), ((((!((((void*)0 != l_292) != (((l_293 , l_294) != l_295) >= g_50.f2.f6)) | g_77.f4.f5)) != g_77.f3.f4) < (*l_291)) > p_11))), (*g_12))) , &p_8))) , 0x87F81E8DL) | (**l_231));
            g_296 = &l_234;

            ;
            if ((safe_sub_func_int16_t_s_s(p_10, (**l_231))))
            {
                unsigned char l_315 = 0x34L;
                int *l_322 = &g_50.f2.f4;
                (*p_9) = func_14(l_282.f2, (0UL <= (&l_250 == ((*g_296) , (void*)0))));
                (*l_231) = &l_283;

                ;
                for (l_282.f2.f2 = 0; (l_282.f2.f2 > 33); l_282.f2.f2 = safe_add_func_int8_t_s_s(l_282.f2.f2, 5))
                {
                    int *l_303 = &l_293.f4;
                    int l_306 = 0x6BD14FECL;
                    if ((*p_8))
                        break;
                    (*l_231) = p_8;

                    ;
                    (*l_292) = ((func_37(l_303, p_8, (*l_231), ((safe_add_func_int32_t_s_s(l_306, (safe_lshift_func_uint16_t_u_u(((9L > (safe_lshift_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(func_27((safe_rshift_func_uint16_t_u_u((0xF69C2A56L & ((*l_295) , l_315)), 14)), &l_283, p_11, l_315, l_316), g_50.f1)) | p_11) && (*l_303)), g_317))) < p_11), 10)))) , (*p_8))) , (*l_291)) , p_8);

                    ;
                }

                ;
                if ((((safe_add_func_int16_t_s_s((*l_291), func_33(((safe_rshift_func_uint8_t_u_u(p_10, 3)) < func_14(l_293, (l_315 < func_27(l_315, l_322, (*l_322), ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(func_27((((safe_sub_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s((func_42(l_322, g_50.f2.f6) != 1L), 0)) < 0UL), 0x8A214FB84C776095LL)), 1L)) > (*l_322)) | (*l_322)), &g_13, g_77.f3.f6, g_77.f3.f3, l_316), g_77.f3.f7)), 5)) , 0x9C04L), p_11)) >= g_77.f4.f3), l_337)))), l_282, (*p_8)))) == 0x6E283BBBL) | (*l_291)))
                {
                    struct S3 **l_338 = &g_179;
                    g_179 = l_294;

                    ;
                    (*l_338) = &g_50;
                }
                else
                {
                    for (l_316.f6.f1 = 29; (l_316.f6.f1 > (-15)); l_316.f6.f1 = safe_sub_func_uint32_t_u_u(l_316.f6.f1, 3))
                    {
                        int *l_343 = &l_282.f2.f4;
                        struct S2 l_348 = {0UL,-1L,0xF9L,{456,452,120,141,7145,46,1623,34},{447,985,174,53,-7950,41,962,72},1L,{9L,-2L,0x965590DCB62E0574LL,3L,0xD2158A77L,0x300EL,4UL,0x1A105BE2C7D1E4DALL,-2254},0x5DL};
                        if ((*p_9))
                            break;
                        (**l_231) = ((func_27((safe_rshift_func_uint8_t_u_u((**l_231), 2)), l_343, ((*l_284) , (&p_8 == &p_9)), (((*p_9) < func_27(func_14((*g_296), (g_77.f4.f3 | (safe_div_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((((p_11 && p_11) & 0x506B0E170F516726LL) , p_10), 0x7D91A805E8074731LL)) >= p_10), (*l_291))))), l_343, g_50.f1, (*l_291), l_348)) , g_50.f2.f1), g_77) != g_77.f2) == p_10);
                        if ((*g_12))
                            break;
                    }
                    for (g_77.f1 = (-26); (g_77.f1 <= (-6)); g_77.f1++)
                    {
                        return &g_13;




                    }
                }
            }
            else
            {
                int *l_351 = &g_77.f6.f4;
                l_351 = &l_283;

                ;
            }

            ;
        }

        ;

        ;

        l_352 = &l_234;

        ;
    }
    else
    {
        if ((safe_mod_func_uint64_t_u_u((255UL <= (**l_231)), p_10)))
        {
            struct S3 *l_364 = (void*)0;
            for (l_234.f1 = 0; (l_234.f1 != 22); l_234.f1 = safe_add_func_uint64_t_u_u(l_234.f1, 5))
            {
                unsigned long long l_357 = 0xFD3D04868CA1A934LL;
                if (l_357)
                    break;
                for (l_250.f0 = 0; (l_250.f0 != 1); l_250.f0++)
                {
                    for (g_77.f6.f2 = 0; (g_77.f6.f2 != 56); ++g_77.f6.f2)
                    {
                        struct S2 l_362 = {0UL,0x4FL,0x29L,{430,902,89,30,-8003,86,2422,57},{117,980,308,227,-780,29,1096,36},-3L,{0x38C9D4DB42A1F671LL,0xF5L,18446744073709551610UL,0x8CA980FCL,0L,0x5212L,0x44F648BAL,0x4CE0D4B4474AD7A4LL,-2603},0x27L};
                        g_363 = l_362;
                    }
                }
                l_364 = (void*)0;
                return p_8;


            }
        }
        else
        {
            unsigned long long l_367 = 0xABD6932D8ED64D7ALL;
            int *l_381 = &l_234.f4;
            struct S3 l_384 = {1UL,4294967295UL,{1L,0L,18446744073709551608UL,0x60649746L,0xD9AEC518L,0x4352L,8UL,6UL,-646}};
            for (l_234.f0 = 0; (l_234.f0 > 17); l_234.f0 = safe_add_func_int16_t_s_s(l_234.f0, 3))
            {
                long long l_377 = 0xA5CB6D90B0239231LL;
                int *l_382 = (void*)0;
                struct S3 l_383 = {0UL,0x70D557E9L,{0xCBBCAAEAFA38DCCDLL,4L,0x9A57191B84ED3822LL,0x204859E3L,0L,1L,0xF308C83EL,0UL,92}};
            }
        }
    }



    ;

    return p_8;




}







static char func_14(struct S0 p_15, int p_16)
{
    char l_222 = (-1L);
    int *l_223 = (void*)0;
    int *l_224 = &g_50.f2.f4;
    struct S2 *l_228 = (void*)0;
    struct S2 l_229 = {0xCF16949AL,0x53L,0xE1L,{319,170,67,238,-6076,73,2617,83},{399,102,343,208,7480,86,3522,49},0x54L,{0x27D104157AFE2B71LL,0x09L,0UL,0x460EA3A9L,0x293F61F6L,0x4FD7L,18446744073709551610UL,6UL,-304},-10L};
    unsigned long long l_230 = 0x465EA45427E14B07LL;
    if (l_222)
    {
        l_224 = l_223;

        ;
    }
    else
    {
        int l_225 = 0x0493E7D0L;
        (*l_224) = (func_42(l_224, l_225) < func_42(&l_225, (safe_rshift_func_int8_t_s_u(g_50.f2.f0, 1))));
    }

    ;
    l_229 = g_77;
    l_224 = l_224;
    return l_230;
}







static struct S0 func_17(unsigned p_18, unsigned char p_19, unsigned p_20)
{
    unsigned l_104 = 1UL;
    int **l_116 = &g_12;
    unsigned l_122 = 0x2E9BE69EL;
    struct S3 l_145 = {0x455D1EC5L,0UL,{0xED09C0B3F9B22F94LL,0L,0x1FD85A3CD4DB03F7LL,0L,6L,0L,0x5E8C49B0L,5UL,3677}};
    struct S1 *l_150 = &g_77.f4;
    unsigned char l_157 = 1UL;
    int *l_208 = (void*)0;
    for (g_77.f6.f1 = 0; (g_77.f6.f1 >= 19); ++g_77.f6.f1)
    {
        struct S3 *l_96 = (void*)0;
        struct S3 **l_95 = &l_96;
        int l_107 = 3L;
        int **l_117 = (void*)0;
        unsigned short l_120 = 65535UL;
        struct S3 l_121 = {4294967294UL,4294967295UL,{5L,0x54L,0x25C2B004275F2EE7LL,0x83AFE1A9L,2L,0x0792L,0x82777045L,0x9182FBE421836AFDLL,4975}};
        (*l_95) = &g_50;

        ;
        (*g_12) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((l_104 ^ (safe_mul_func_uint8_t_u_u((l_107 , ((((safe_mul_func_int16_t_s_s(func_33((p_18 , ((-8L) || func_42(&l_107, (safe_lshift_func_int16_t_s_s((safe_sub_func_int64_t_s_s(func_42((((safe_sub_func_int64_t_s_s((l_116 != l_117), ((safe_sub_func_int64_t_s_s((!l_120), (p_19 , g_77.f3.f1))) <= p_18))) && (**l_116)) , &g_13), g_77.f5), (**l_116))), (**l_116)))))), l_121, (*g_12)), 0x9067L)) == p_20) , l_116) != &g_12)), p_19))), l_122)))), 2)), 5));
    }
    for (l_104 = 0; (l_104 >= 52); l_104 = safe_add_func_uint16_t_u_u(l_104, 5))
    {
        struct S1 **l_126 = &g_125;
        int l_134 = 0L;
        int *l_144 = &g_77.f6.f4;
        int **l_147 = &l_144;
        (*l_126) = g_125;
        for (g_13 = (-7); (g_13 == (-8)); g_13--)
        {
            struct S2 l_129 = {1UL,0x0EL,0x05L,{52,531,-11,179,-7655,66,373,88},{374,646,139,32,1898,61,3762,0},0x8CL,{0xD5F11A4D7BC6382ALL,-1L,0x001831556D0B45DCLL,-1L,0x36BB8EA1L,-7L,0xB8B1DA9AL,0x2547F478804CAD57LL,-5151},0x7DL};
            struct S2 *l_130 = &g_77;
            (*l_130) = ((*g_12) , l_129);
            g_77.f4.f4 = (safe_div_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s((l_134 , ((((safe_div_func_int8_t_s_s(g_77.f6.f4, (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(g_77.f2, 8UL)), (func_27((*g_12), (*l_116), p_18, (((void*)0 != &g_50) , g_77.f0), g_77) && p_18))))) <= p_20) && g_77.f6.f7) | p_20)))) >= 5UL), (*g_12)));
            for (l_129.f6.f1 = 13; (l_129.f6.f1 <= (-21)); --l_129.f6.f1)
            {
                int *l_143 = &g_13;
                struct S3 *l_146 = &g_50;
                (*l_146) = func_37((*l_116), (g_77.f3.f1 , l_143), l_144, ((l_145 , (~(-6L))) >= g_50.f2.f8));
            }
        }
        (*l_147) = (*l_116);

        ;
    }
    (*g_12) = (((void*)0 == &g_77) , 7L);
    if ((g_77.f4.f2 <= ((safe_mul_func_int16_t_s_s(((**l_116) == ((l_150 != (void*)0) || ((**l_116) <= (safe_rshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s(0L, 18446744073709551613UL)) , p_20), 15))))), ((safe_lshift_func_int16_t_s_u((-1L), g_77.f4.f4)) >= g_77.f3.f6))) | l_157)))
    {
        int l_160 = 0x329A422DL;
        int *l_165 = (void*)0;
        unsigned l_166 = 0UL;
        struct S2 l_167 = {9UL,0L,0x5AL,{267,576,-243,69,-4716,83,3666,64},{245,824,347,175,-7311,5,2227,16},0x97L,{0L,0x8CL,0x3ECF061B8DCB77C4LL,1L,1L,-9L,18446744073709551611UL,0xDBB873132987EEEALL,2998},1L};
        int **l_168 = &l_165;
        int ***l_169 = &l_168;
        (*l_168) = ((safe_mul_func_int8_t_s_s((0L & (func_42(&g_13, l_160) , ((safe_rshift_func_uint16_t_u_u(p_19, 8)) != (p_18 >= 7L)))), func_27(((0L != ((((safe_lshift_func_uint8_t_u_u(l_160, 6)) || 0x5A5D139EL) ^ p_20) , l_160)) == 1UL), l_165, l_166, g_50.f2.f5, l_167))) , (void*)0);
        (*l_168) = (*l_168);
        (*l_169) = (void*)0;

        ;
        (*g_12) = (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((&l_145 != (void*)0) , g_77.f4.f1), g_77.f3.f0)), 5L));
    }
    else
    {
        int *l_174 = &l_145.f2.f4;
        int **l_175 = (void*)0;
        int **l_176 = &l_174;
        struct S3 l_186 = {0xE9E399F4L,4294967292UL,{0x94985C0450BFEAB7LL,0x9CL,0x65363CA09B53E802LL,0xC767E1A3L,4L,0x1CA5L,0x90268371L,0xFD57E78918540E81LL,-328}};
        int ***l_197 = &l_176;
        short l_206 = 0x8589L;
        int *l_210 = &l_186.f2.f4;
        struct S2 l_215 = {0x67B9D2F2L,4L,0x23L,{506,960,-176,136,2551,8,2897,67},{234,869,-337,221,-6921,5,2788,43},0L,{0L,-1L,7UL,0x1EFC81CAL,0x231BC1E3L,7L,0UL,0x91B572109CD27E3ELL,-1152},0xD2L};
        (*l_176) = l_174;
        if (((void*)0 != g_177))
        {
            struct S3 *l_178 = (void*)0;
            g_179 = l_178;

            ;
        }
        else
        {
            int *l_184 = &g_77.f6.f4;
            struct S2 l_207 = {4294967291UL,0L,-5L,{467,47,-40,69,-3308,83,96,40},{321,43,322,150,4793,48,2692,81},-1L,{0xAD47CF242F41EC3FLL,0x03L,0x65F441561CB252DFLL,-5L,0x7954B233L,0xB234L,18446744073709551615UL,0UL,5642},0x18L};
            for (g_77.f6.f1 = 4; (g_77.f6.f1 != 26); g_77.f6.f1 = safe_add_func_uint16_t_u_u(g_77.f6.f1, 5))
            {
                for (g_77.f6.f7 = (-14); (g_77.f6.f7 >= 30); g_77.f6.f7++)
                {
                    (**l_116) = func_42((*l_176), (**l_116));
                    if ((**l_116))
                    {
                        struct S0 l_185 = {0x5D3E32F4612B06F0LL,0x57L,1UL,0L,-7L,9L,2UL,0x9010A9E941CCE74ELL,5217};
                        l_184 = (*l_176);

                        ;
                        (*l_176) = (*l_116);

                        ;
                        return l_185;
                    }
                    else
                    {
                        (*l_176) = l_184;

                        ;
                        (*l_176) = (l_186 , l_184);
                        (**l_176) = (*g_12);
                    }

                    ;
                }
            }

            ;
            (*g_12) = ((((-1L) ^ ((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((*l_184) > ((func_33((safe_div_func_uint8_t_u_u((((l_197 != g_177) >= (p_19 <= func_27((safe_mod_func_int16_t_s_s(g_77.f3.f6, g_77.f4.f4)), (((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((l_145.f2 , (safe_sub_func_int8_t_s_s(g_77.f1, l_206))), 0x7803C6ADL)), 11)) ^ (-1L)) , (*l_116)), (**l_176), (*l_184), l_207))) & p_18), p_20)), l_186, (*l_184)) , (void*)0) != (void*)0)), (*l_184))), p_18)) & 0x9C9ED5B9L), 7)) > (-10L))) < 0L) & p_19);
            g_209 = l_208;
            if (func_42((func_37(l_184, l_184, (*l_116), p_19) , (*l_116)), ((l_210 == (((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(g_77.f3.f2, g_77.f6.f2)) >= 0xE22E2028L), 10)) , l_215) , l_184)) ^ p_18)))
            {
                int ***l_220 = &l_176;
                for (p_19 = 0; (p_19 <= 11); ++p_19)
                {
                    l_145.f2 = (g_50.f2.f4 , l_145.f2);
                    return g_50.f2;
                }
                (**l_220) = ((((g_77.f3.f0 | p_19) == (7L ^ func_42((*l_116), (safe_div_func_uint8_t_u_u(254UL, 0x0CL))))) ^ g_50.f2.f3) , (((((void*)0 != l_220) < (*l_184)) > p_18) , (**l_220)));
            }
            else
            {
                (*l_174) = p_20;
            }
        }

        ;
        ;
    }

    ;
    return l_145.f2;
}







static struct S1 func_21(long long p_22, int p_23, int * p_24, int * p_25)
{
    int *l_82 = &g_13;
    int **l_91 = &l_82;
    struct S1 l_92 = {502,788,182,13,-2543,54,1869,3};
    (**l_91) = (safe_add_func_uint32_t_u_u(((void*)0 == l_82), ((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(p_23, (p_23 < g_77.f0))) == ((void*)0 != l_82)), (safe_rshift_func_uint8_t_u_s(((&g_12 != l_91) != (*l_82)), g_77.f6.f1)))) | p_22)));
    return l_92;
}







static char func_27(int p_28, int * p_29, unsigned short p_30, unsigned char p_31, struct S2 p_32)
{
    int *l_78 = &g_13;
    int **l_79 = &l_78;
    (*l_79) = l_78;
    return g_77.f3.f7;
}







static long long func_33(unsigned p_34, struct S3 p_35, int p_36)
{
    unsigned long long l_59 = 0xE469C6BC52267D0ELL;
    int *l_70 = &g_13;
    if ((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_35.f2 , (safe_mul_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(g_50.f2.f7, 3)) > (l_59 > ((g_50 , ((0xCA390A41L != 0xF40280C1L) && (((safe_sub_func_int32_t_s_s((-1L), ((*g_12) ^ g_50.f2.f5))) >= l_59) ^ 0x50L))) != 0x60DC513BL))) || (-4L)), l_59))), 4294967291UL)), p_35.f2.f1)))
    {
        unsigned l_62 = 0x375A68AAL;
        int *l_66 = &g_50.f2.f4;
        int **l_69 = &l_66;
        (*g_12) = l_62;
        for (p_34 = (-15); (p_34 >= 50); p_34 = safe_add_func_int8_t_s_s(p_34, 7))
        {
            unsigned l_65 = 0xDF95FD10L;
            if (l_65)
                break;
            l_66 = (void*)0;

            ;
            for (g_50.f2.f0 = 0; (g_50.f2.f0 == (-14)); g_50.f2.f0 = safe_sub_func_uint64_t_u_u(g_50.f2.f0, 4))
            {
                return p_35.f2.f2;
            }
            return l_59;
        }
        (*l_69) = &g_13;

        ;
    }
    else
    {
        (*g_12) = (l_70 == (void*)0);
    }
    for (p_36 = 1; (p_36 > (-4)); p_36 = safe_sub_func_uint16_t_u_u(p_36, 8))
    {
        (*l_70) = (safe_lshift_func_int16_t_s_s((*l_70), 4));
    }
    (*l_70) = ((safe_rshift_func_uint8_t_u_u(p_35.f2.f8, p_34)) , func_42(l_70, (*l_70)));
    return g_50.f2.f1;
}







static struct S3 func_37(int * p_38, int * p_39, int * p_40, int p_41)
{
    unsigned l_46 = 0x3B252958L;
    int l_47 = 0x88241607L;
    int *l_49 = (void*)0;
    int **l_48 = &l_49;
    l_47 = l_46;
    p_40 = &g_13;

    ;
    (*l_48) = &p_41;

    ;
    (*l_48) = &p_41;
    return g_50;
}







static unsigned func_42(int * p_43, int p_44)
{
    return g_13;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    transparent_crc(g_50.f1, "g_50.f1", print_hash_value);
    transparent_crc(g_50.f2.f0, "g_50.f2.f0", print_hash_value);
    transparent_crc(g_50.f2.f1, "g_50.f2.f1", print_hash_value);
    transparent_crc(g_50.f2.f2, "g_50.f2.f2", print_hash_value);
    transparent_crc(g_50.f2.f3, "g_50.f2.f3", print_hash_value);
    transparent_crc(g_50.f2.f4, "g_50.f2.f4", print_hash_value);
    transparent_crc(g_50.f2.f5, "g_50.f2.f5", print_hash_value);
    transparent_crc(g_50.f2.f6, "g_50.f2.f6", print_hash_value);
    transparent_crc(g_50.f2.f7, "g_50.f2.f7", print_hash_value);
    transparent_crc(g_50.f2.f8, "g_50.f2.f8", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_77.f2, "g_77.f2", print_hash_value);
    transparent_crc(g_77.f3.f0, "g_77.f3.f0", print_hash_value);
    transparent_crc(g_77.f3.f1, "g_77.f3.f1", print_hash_value);
    transparent_crc(g_77.f3.f2, "g_77.f3.f2", print_hash_value);
    transparent_crc(g_77.f3.f3, "g_77.f3.f3", print_hash_value);
    transparent_crc(g_77.f3.f4, "g_77.f3.f4", print_hash_value);
    transparent_crc(g_77.f3.f5, "g_77.f3.f5", print_hash_value);
    transparent_crc(g_77.f3.f6, "g_77.f3.f6", print_hash_value);
    transparent_crc(g_77.f3.f7, "g_77.f3.f7", print_hash_value);
    transparent_crc(g_77.f4.f0, "g_77.f4.f0", print_hash_value);
    transparent_crc(g_77.f4.f1, "g_77.f4.f1", print_hash_value);
    transparent_crc(g_77.f4.f2, "g_77.f4.f2", print_hash_value);
    transparent_crc(g_77.f4.f3, "g_77.f4.f3", print_hash_value);
    transparent_crc(g_77.f4.f4, "g_77.f4.f4", print_hash_value);
    transparent_crc(g_77.f4.f5, "g_77.f4.f5", print_hash_value);
    transparent_crc(g_77.f4.f6, "g_77.f4.f6", print_hash_value);
    transparent_crc(g_77.f4.f7, "g_77.f4.f7", print_hash_value);
    transparent_crc(g_77.f5, "g_77.f5", print_hash_value);
    transparent_crc(g_77.f6.f0, "g_77.f6.f0", print_hash_value);
    transparent_crc(g_77.f6.f1, "g_77.f6.f1", print_hash_value);
    transparent_crc(g_77.f6.f2, "g_77.f6.f2", print_hash_value);
    transparent_crc(g_77.f6.f3, "g_77.f6.f3", print_hash_value);
    transparent_crc(g_77.f6.f4, "g_77.f6.f4", print_hash_value);
    transparent_crc(g_77.f6.f5, "g_77.f6.f5", print_hash_value);
    transparent_crc(g_77.f6.f6, "g_77.f6.f6", print_hash_value);
    transparent_crc(g_77.f6.f7, "g_77.f6.f7", print_hash_value);
    transparent_crc(g_77.f6.f8, "g_77.f6.f8", print_hash_value);
    transparent_crc(g_77.f7, "g_77.f7", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    transparent_crc(g_363.f1, "g_363.f1", print_hash_value);
    transparent_crc(g_363.f2, "g_363.f2", print_hash_value);
    transparent_crc(g_363.f3.f0, "g_363.f3.f0", print_hash_value);
    transparent_crc(g_363.f3.f1, "g_363.f3.f1", print_hash_value);
    transparent_crc(g_363.f3.f2, "g_363.f3.f2", print_hash_value);
    transparent_crc(g_363.f3.f3, "g_363.f3.f3", print_hash_value);
    transparent_crc(g_363.f3.f4, "g_363.f3.f4", print_hash_value);
    transparent_crc(g_363.f3.f5, "g_363.f3.f5", print_hash_value);
    transparent_crc(g_363.f3.f6, "g_363.f3.f6", print_hash_value);
    transparent_crc(g_363.f3.f7, "g_363.f3.f7", print_hash_value);
    transparent_crc(g_363.f4.f0, "g_363.f4.f0", print_hash_value);
    transparent_crc(g_363.f4.f1, "g_363.f4.f1", print_hash_value);
    transparent_crc(g_363.f4.f2, "g_363.f4.f2", print_hash_value);
    transparent_crc(g_363.f4.f3, "g_363.f4.f3", print_hash_value);
    transparent_crc(g_363.f4.f4, "g_363.f4.f4", print_hash_value);
    transparent_crc(g_363.f4.f5, "g_363.f4.f5", print_hash_value);
    transparent_crc(g_363.f4.f6, "g_363.f4.f6", print_hash_value);
    transparent_crc(g_363.f4.f7, "g_363.f4.f7", print_hash_value);
    transparent_crc(g_363.f5, "g_363.f5", print_hash_value);
    transparent_crc(g_363.f6.f0, "g_363.f6.f0", print_hash_value);
    transparent_crc(g_363.f6.f1, "g_363.f6.f1", print_hash_value);
    transparent_crc(g_363.f6.f2, "g_363.f6.f2", print_hash_value);
    transparent_crc(g_363.f6.f3, "g_363.f6.f3", print_hash_value);
    transparent_crc(g_363.f6.f4, "g_363.f6.f4", print_hash_value);
    transparent_crc(g_363.f6.f5, "g_363.f6.f5", print_hash_value);
    transparent_crc(g_363.f6.f6, "g_363.f6.f6", print_hash_value);
    transparent_crc(g_363.f6.f7, "g_363.f6.f7", print_hash_value);
    transparent_crc(g_363.f6.f8, "g_363.f6.f8", print_hash_value);
    transparent_crc(g_363.f7, "g_363.f7", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
