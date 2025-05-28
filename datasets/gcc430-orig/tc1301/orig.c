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
   unsigned char f0;
   int f1;
   signed f2 : 26;
   unsigned char f3;
   char f4;
   int f5;
   unsigned f6;
   short f7;
   int f8;
   unsigned short f9;
};

struct S1 {
   unsigned f0 : 27;
   unsigned f1 : 10;
   const unsigned f2 : 26;
   signed f3 : 10;
};

struct S2 {
   unsigned f0 : 4;
   const unsigned short f1;
   int f2;
   unsigned f3;
   unsigned f4;
   struct S1 f5;
   struct S0 f6;
   short f7;
   const short f8;
};

struct S3 {
   short f0;
   unsigned f1;
   struct S1 f2;
   unsigned short f3;
};


static struct S2 g_15 = {0,0x0085L,3L,8UL,0x600BF094L,{8600,23,3911,18},{0x84L,0x0F4F2D89L,-1233,0xB9L,0xBCL,-1L,8UL,0L,0L,1UL},1L,-9L};
static char g_29 = (-3L);
static char *g_43 = &g_15.f6.f4;
static unsigned char g_53 = 0x44L;
static unsigned short g_58 = 0x365BL;
static int g_64 = 0xBC95BC5BL;
static struct S0 g_94 = {4UL,0xACA7285EL,6939,0x36L,0x2CL,1L,4294967295UL,0x7A50L,1L,65526UL};
static const struct S3 g_119 = {0xC02EL,0UL,{7031,22,6700,17},0x1962L};
static const struct S3 *g_118 = &g_119;
static struct S3 g_122 = {0xACFDL,0UL,{5727,19,4730,-28},5UL};
static short *g_127 = &g_15.f7;
static unsigned char *g_139 = &g_15.f6.f0;
static unsigned char **g_138 = &g_139;
static int *g_141 = &g_64;
static struct S0 g_159 = {0x80L,-1L,2065,250UL,0x0DL,0x38C2C0AFL,9UL,6L,0xFDD9DDBCL,0x4C72L};
static unsigned short **g_195 = (void*)0;
static const short g_298 = 0xBEA6L;
static const unsigned char g_309 = 255UL;
static int **g_320 = &g_141;
static int *** const g_319 = &g_320;
static struct S0 g_331 = {0x85L,0L,-1168,255UL,0x38L,4L,0xE4C69024L,1L,3L,0x5114L};
static struct S1 *g_398 = &g_15.f5;
static struct S1 ** const g_397 = &g_398;
static int g_501 = 0xE7ABCD14L;
static struct S1 g_512 = {6133,14,3635,11};



static int func_1(void);
static struct S0 func_2(const unsigned p_3);
static unsigned func_4(struct S3 p_5, unsigned p_6, short p_7, struct S3 p_8);
static struct S3 func_9(int p_10, struct S2 p_11, const unsigned p_12, unsigned p_13);
static unsigned short func_22(struct S1 p_23, const char p_24, unsigned short p_25, unsigned p_26);
static int func_34(struct S1 p_35, unsigned p_36, char * p_37, struct S3 p_38, struct S0 p_39);
static struct S1 func_40(char * p_41, struct S1 p_42);
static unsigned short func_50(unsigned char p_51);
static struct S0 func_83(int * p_84, int p_85, const unsigned char * p_86, struct S0 p_87, int p_88);
static struct S0 func_90(unsigned p_91);
static int func_1(void)
{
    int l_14 = 0x44FB66C1L;
    struct S1 l_27 = {10303,18,7321,-27};
    char *l_28 = &g_29;
    struct S1 l_44 = {1309,9,3106,17};
    struct S0 l_305 = {0UL,0xF4879BB8L,-7178,0UL,0xF9L,0xC09B0707L,0x74140B30L,9L,0x7E33F6FDL,0xB700L};
    unsigned char l_487 = 0UL;
    struct S3 l_488 = {-8L,8UL,{6977,2,343,28},0UL};
    struct S0 *l_517 = &g_15.f6;
    (*l_517) = func_2(func_4(func_9(l_14, g_15, (g_15.f6.f4 > (safe_lshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(0xC7BCL, func_22(l_27, (((((*l_28) = 0xCCL) && (safe_mod_func_uint32_t_u_u(g_15.f5.f0, l_27.f0))) ^ ((safe_sub_func_int32_t_s_s((l_305.f2 = func_34(func_40(g_43, l_44), g_119.f2.f1, l_28, g_119, l_305)), g_298)) < 8L)) || 4294967292UL), l_44.f2, g_15.f3))), g_122.f2.f1)) != l_27.f0), l_44.f1))), g_122.f1), g_15.f6.f8, l_487, l_488));
    l_305.f2 = (+0L);
    (*l_517) = g_94;
    return g_119.f2.f2;
}







static struct S0 func_2(const unsigned p_3)
{
    unsigned short l_489 = 0UL;
    char *l_493 = &g_29;
    struct S1 l_494 = {8009,18,6665,-29};
    struct S0 l_516 = {247UL,0x7B3A5BA1L,3160,0x89L,0x48L,1L,0xB213C149L,-1L,0L,0x9AE4L};
    if (l_489)
    {
        int *l_490 = &g_15.f6.f8;
        l_490 = (*g_320);
    }
    else
    {
        struct S1 l_495 = {6614,30,1896,12};
        struct S1 *l_511 = &g_512;
        struct S0 * const l_514 = &g_94;
        struct S0 * const *l_513 = &l_514;
        struct S0 * const **l_515 = &l_513;
        for (g_15.f4 = 7; (g_15.f4 < 59); g_15.f4++)
        {
            char *l_496 = &g_159.f4;
            struct S0 *l_497 = &g_159;
            struct S1 l_498 = {9038,3,1710,25};
            struct S3 l_508 = {0L,0x4833303DL,{946,12,2965,-20},0x1306L};
            (*l_497) = func_90(((p_3 > (0x65B4DB02L >= func_22(l_495, (*g_43), func_22(l_495, p_3, p_3, g_331.f8), p_3))) != (*g_127)));
            l_498.f3 = (l_494.f3 = func_34(l_498, (((*g_139) = func_50(p_3)) >= (l_494.f3 <= (((l_498.f1 ^ (l_498.f1 != g_501)) & (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(func_50(g_94.f2), l_498.f0)), (*g_43))), p_3))) != p_3))), l_493, l_508, (*l_497)));
        }
        for (g_94.f8 = 2; (g_94.f8 <= (-25)); g_94.f8 = safe_sub_func_int32_t_s_s(g_94.f8, 6))
        {
            l_511 = (void*)0;
        }
        (***g_319) = (**g_320);
        (*l_515) = l_513;
    }
    (**g_319) = (**g_319);
    return l_516;
}







static unsigned func_4(struct S3 p_5, unsigned p_6, short p_7, struct S3 p_8)
{
    return p_5.f0;
}







static struct S3 func_9(int p_10, struct S2 p_11, const unsigned p_12, unsigned p_13)
{
    unsigned char l_472 = 0x4CL;
    unsigned char l_477 = 0xA7L;
    struct S1 l_478 = {5982,11,7693,-14};
    char *l_479 = &g_15.f6.f4;
    struct S3 l_480 = {0x5564L,18446744073709551615UL,{1199,10,6109,8},0x6D06L};
    int *l_481 = &g_94.f8;
    (*l_481) = (l_472 || (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(l_472, 3)) > (l_472 ^ p_11.f5.f1)), ((func_34(p_11.f5, (l_477 > func_34(l_478, g_94.f0, l_479, l_480, p_11.f6)), l_479, l_480, g_15.f6) < (*g_43)) == 0xF294EC9EL))));
    for (g_94.f7 = (-14); (g_94.f7 == 25); ++g_94.f7)
    {
        int *l_486 = &g_159.f8;
        if ((*g_141))
            break;
        (**g_320) = (p_11.f7 < (safe_lshift_func_int8_t_s_s(((-1L) && ((**g_138) = (*g_139))), ((*l_479) = ((*g_320) == (l_486 = l_481))))));
    }
    (*g_397) = &l_478;
    return l_480;
}







static unsigned short func_22(struct S1 p_23, const char p_24, unsigned short p_25, unsigned p_26)
{
    unsigned char l_306 = 0x9EL;
    const unsigned char *l_308 = &g_309;
    const unsigned char **l_307 = &l_308;
    struct S0 l_310 = {0x48L,0xB510A82BL,-3110,255UL,0x81L,1L,5UL,5L,0xD079F7F7L,0x0481L};
    struct S0 *l_311 = &l_310;
    const int *l_323 = (void*)0;
    const int ** const l_322 = &l_323;
    const int ** const *l_321 = &l_322;
    char *l_359 = &g_159.f4;
    struct S1 *l_396 = &g_122.f2;
    struct S1 **l_395 = &l_396;
    unsigned short *l_405 = &g_94.f9;
    const char l_454 = 0xE3L;
    struct S0 *l_458 = &g_331;
    int l_471 = 0x55B524CCL;
    (*l_311) = func_83(&g_64, l_306, ((*l_307) = (void*)0), l_310, (*g_141));
    for (l_310.f6 = 0; (l_310.f6 == 54); l_310.f6 = safe_add_func_int32_t_s_s(l_310.f6, 9))
    {
        unsigned l_316 = 8UL;
        struct S0 *l_350 = &g_94;
        const unsigned char ***l_358 = &l_307;
        int *l_362 = (void*)0;
        int **l_361 = &l_362;
        struct S1 *l_417 = &g_15.f5;
        char ** const l_444 = &g_43;
    }
    l_310.f2 = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(p_23.f3, p_23.f0)) < 0L), (*g_141))), (func_50((l_310.f8 = (safe_rshift_func_uint16_t_u_u(((p_23.f0 != (+p_23.f1)) < (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((func_50(l_471) >= (p_25 >= (-6L))), 11)), p_23.f1))), 3)))) <= 9L))) < (*g_43));
    (**l_321) = (*g_320);
    return p_25;
}







static int func_34(struct S1 p_35, unsigned p_36, char * p_37, struct S3 p_38, struct S0 p_39)
{
    g_141 = &g_64;
    return (*g_141);
}







static struct S1 func_40(char * p_41, struct S1 p_42)
{
    char l_47 = 0x5FL;
    int l_79 = 0xABFABC74L;
    struct S3 *l_81 = (void*)0;
    int *l_163 = &g_94.f8;
    struct S2 *l_167 = &g_15;
    struct S2 **l_166 = &l_167;
    struct S0 *l_175 = &g_94;
    struct S0 **l_174 = &l_175;
    short l_188 = 1L;
    unsigned short **l_193 = (void*)0;
    char l_198 = 0x82L;
    char l_249 = 0x01L;
    const short *l_297 = &g_298;
    char *** const l_303 = (void*)0;
    unsigned char *l_304 = &g_159.f0;
    if ((safe_sub_func_uint32_t_u_u(l_47, l_47)))
    {
        unsigned char *l_52 = &g_53;
        unsigned char l_71 = 0UL;
        if ((safe_rshift_func_uint16_t_u_s(func_50(((*l_52) = (((void*)0 == p_41) <= 1UL))), g_15.f0)))
        {
            int *l_63 = &g_64;
            struct S0 l_158 = {8UL,-3L,2731,0x87L,1L,0x79CE0627L,8UL,0xF5E4L,-1L,0x6885L};
            if (((*l_63) = (safe_lshift_func_uint16_t_u_u(p_42.f3, 0))))
            {
                unsigned l_75 = 0xD2369E1CL;
                int *l_78 = &g_15.f6.f8;
                int l_89 = 0x50BF12BFL;
                struct S2 *l_143 = (void*)0;
                struct S2 **l_142 = &l_143;
                for (g_58 = 0; (g_58 <= 27); g_58++)
                {
                    unsigned short l_80 = 0x7E17L;
                    int *l_137 = &g_15.f6.f8;
                    if ((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(func_50(l_71), 7)) < (safe_mod_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u(4294967293UL)) <= (l_75 > ((safe_sub_func_uint32_t_u_u(g_58, (g_15.f6.f6 == ((((l_79 = (p_42.f3 <= ((void*)0 != l_78))) ^ (*g_43)) || l_80) < (*l_63))))) & 1L))), g_15.f3))), g_15.f6.f1)) || (*l_63)) == g_15.f8))
                    {
                        struct S3 **l_82 = &l_81;
                        int **l_112 = &l_78;
                        int *l_113 = &l_79;
                        struct S0 *l_136 = &g_94;
                        (*l_82) = l_81;
                        (*l_136) = func_83(&l_79, l_89, p_41, func_90(g_15.f5.f0), ((*l_113) = (0x7205L != ((void*)0 == l_112))));
                        (*l_112) = l_137;
                        (*l_63) = l_79;
                    }
                    else
                    {
                        unsigned char ***l_140 = &g_138;
                        (*l_140) = g_138;
                    }
                }
                g_141 = l_63;
                (*l_142) = &g_15;
                return g_119.f2;
            }
            else
            {
                unsigned short l_144 = 1UL;
                struct S0 *l_145 = (void*)0;
                struct S0 *l_146 = &g_94;
                (*l_146) = func_90(func_50(l_144));
                if (func_50(func_50((safe_add_func_int16_t_s_s((*g_127), (safe_mul_func_int16_t_s_s(0x1DECL, (((*l_52) = (((*g_139) ^ (g_94.f4 = (*g_43))) | 4UL)) & l_144))))))))
                {
                    (*l_146) = func_90(((safe_add_func_uint32_t_u_u(p_42.f2, (safe_mul_func_int16_t_s_s(p_42.f0, l_71)))) || (l_71 & p_42.f3)));
                    for (g_94.f6 = (-22); (g_94.f6 < 10); g_94.f6 = safe_add_func_int16_t_s_s(g_94.f6, 2))
                    {
                        int **l_157 = &g_141;
                        (*l_157) = &g_64;
                        g_159 = l_158;
                        if ((*g_141))
                            break;
                    }
                    return g_119.f2;
                }
                else
                {
                    short *l_162 = &g_94.f7;
                    int **l_164 = &g_141;
                    (*g_141) = (safe_lshift_func_int16_t_s_u(((*l_162) = p_42.f1), 14));
                    l_163 = &g_64;
                    (*l_164) = &l_79;
                    return p_42;
                }
            }
        }
        else
        {
            return p_42;
        }
    }
    else
    {
        struct S3 **l_165 = &l_81;
        struct S2 ***l_168 = &l_166;
        int l_171 = 4L;
        unsigned *l_172 = (void*)0;
        unsigned *l_173 = &g_159.f6;
        struct S0 **l_176 = &l_175;
        unsigned short *l_187 = &g_94.f9;
        struct S1 l_243 = {10699,18,2187,-16};
        unsigned char **l_272 = (void*)0;
        (*l_165) = &g_122;
        (*l_168) = l_166;
        if ((((g_159.f4 = (safe_rshift_func_uint16_t_u_s(((1UL && p_42.f3) == l_171), (((*l_173) = func_50((**g_138))) ^ ((*p_41) | (l_174 != l_176)))))) >= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s((+((safe_mod_func_uint16_t_u_u(((*l_187) = (safe_mul_func_int16_t_s_s((*g_127), (*g_127)))), p_42.f3)) == g_15.f0)), l_188)) > (*l_163)) & p_42.f2) <= g_15.f5.f0), 4)), p_42.f1))) <= (*l_163)))
        {
            unsigned char l_211 = 0x58L;
            int l_212 = (-9L);
            unsigned char l_248 = 0xE0L;
            short *l_270 = &g_94.f7;
            for (g_58 = 0; (g_58 >= 49); g_58 = safe_add_func_uint32_t_u_u(g_58, 4))
            {
                unsigned short **l_191 = &l_187;
                int **l_192 = &g_141;
                unsigned short ***l_194 = (void*)0;
                (*l_163) = (((*l_191) = l_187) != &g_58);
                (*l_192) = &g_64;
                g_195 = l_193;
                (*l_192) = &g_64;
            }
            if (func_50(((func_50(((safe_add_func_uint32_t_u_u(l_198, ((*g_43) > (*p_41)))) ^ l_171)) & p_42.f0) & (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s((((safe_add_func_uint16_t_u_u(((*g_127) || (func_50((0xB7A1L <= (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(l_211, 0L)), (*l_163))))) != p_42.f1)), 0xFB8FL)) ^ l_212) < (*g_127)), l_212)) <= (*g_43)), (*p_41))) || (*g_43)) | (*g_127)), 4294967293UL)))))
            {
                int *l_215 = &l_212;
                struct S1 **l_240 = (void*)0;
                struct S1 *l_242 = &g_122.f2;
                struct S1 **l_241 = &l_242;
                if (((*g_141) = ((p_42.f0 < (safe_rshift_func_uint16_t_u_s(func_50(((g_122.f0 = 0x5AFDL) || func_50((**g_138)))), ((void*)0 != g_43)))) < (p_42.f3 >= 0x209FL))))
                {
                    int **l_216 = &l_215;
                    unsigned char *l_225 = &g_94.f3;
                    unsigned char *l_226 = &l_211;
                    (*l_216) = l_215;
                    for (l_171 = 0; (l_171 != (-9)); l_171 = safe_sub_func_uint8_t_u_u(l_171, 4))
                    {
                        char **l_220 = (void*)0;
                        char ***l_219 = &l_220;
                        (*l_219) = &g_43;
                    }
                    (**l_216) = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0L, ((p_42.f1 != func_50(((*l_225) = p_42.f3))) ^ func_50(((*l_226) = p_42.f1))))), 8));
                }
                else
                {
                    struct S2 *l_236 = &g_15;
                    for (l_47 = (-11); (l_47 <= (-8)); l_47 = safe_add_func_uint32_t_u_u(l_47, 1))
                    {
                        char *l_233 = &g_159.f4;
                        int l_237 = 0x4BA64216L;
                        int **l_239 = &l_215;
                        int ***l_238 = &l_239;
                        (*l_215) = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((p_42.f1 = ((((*l_233) = (((*g_141) != p_42.f1) > 1L)) ^ (&g_139 != (void*)0)) != (*g_43))), 0L)), (((*p_41) != (l_237 = ((void*)0 == l_236))) != 0L)));
                        (*l_238) = &g_141;
                    }
                }
                (*l_241) = (void*)0;
                return l_243;
            }
            else
            {
                struct S2 ****l_246 = (void*)0;
                struct S2 ***l_247 = &l_166;
                char *l_252 = &g_94.f4;
                unsigned char *l_253 = &l_248;
                short *l_254 = &g_159.f7;
                struct S1 *l_255 = (void*)0;
                (**l_176) = g_94;
                if (func_50(((((*l_254) = (func_50((safe_add_func_uint8_t_u_u(((+((l_247 = l_168) != l_168)) || ((p_42.f2 || 0xB8L) != func_50(((*l_253) = (l_248 != ((l_249 || (((*l_252) = (safe_mod_func_uint8_t_u_u((p_42.f3 > (&g_122 == &g_122)), p_42.f2))) | (-5L))) >= 0x1DL)))))), (-1L)))) && g_159.f2)) | 0xAC02L) & (-10L))))
                {
                    struct S1 **l_256 = &l_255;
                    int l_261 = 1L;
                    (*l_256) = l_255;
                    (*l_176) = (*l_176);
                    if ((safe_sub_func_uint16_t_u_u(l_212, (safe_lshift_func_uint8_t_u_s(((((-4L) & l_261) != (!(((p_42.f3 != (func_50(((*l_253) = l_211)) >= ((*g_138) != (void*)0))) & p_42.f3) < 1UL))) & (*g_43)), 4)))))
                    {
                        return g_15.f5;
                    }
                    else
                    {
                        struct S0 l_262 = {0xE8L,-1L,-4470,0x4CL,0xD9L,0xDFD70EA1L,0x0A1CF68CL,0xDB16L,0xED1AFC2CL,0xCF63L};
                        int **l_263 = &g_141;
                        (**l_174) = l_262;
                        (*l_263) = &g_64;
                    }
                }
                else
                {
                    struct S0 l_266 = {250UL,-5L,-6294,0xF6L,0xB5L,-1L,0x9338E5F9L,0xD6FDL,-6L,0x2C02L};
                    for (g_94.f6 = 22; (g_94.f6 > 54); g_94.f6++)
                    {
                        int *l_267 = &g_159.f8;
                        l_266 = g_15.f6;
                        (*g_141) = func_50(l_211);
                        g_141 = l_267;
                    }
                }
            }
            (*g_141) = (safe_sub_func_int16_t_s_s(((*l_270) = 0x0336L), p_42.f1));
            p_42.f3 = func_50((**g_138));
        }
        else
        {
            struct S0 l_271 = {255UL,0xC10B8B5BL,-3768,0x2FL,0xE4L,0x0C6EE4B1L,0UL,0x9C2EL,0x44E87E4CL,0x8F7CL};
            unsigned char ***l_273 = &l_272;
            (*l_166) = (**l_168);
            l_271 = (**l_176);
            (*l_273) = l_272;
        }
    }
    for (g_94.f9 = 0; (g_94.f9 >= 51); g_94.f9 = safe_add_func_uint32_t_u_u(g_94.f9, 6))
    {
        struct S0 *l_276 = &g_159;
        struct S3 *l_277 = &g_122;
        struct S3 **l_278 = &l_81;
        unsigned char l_281 = 7UL;
        const short **l_296 = (void*)0;
        (*l_276) = (**l_174);
        (*l_278) = l_277;
        (*l_163) = ((safe_rshift_func_uint16_t_u_u(l_281, 6)) & (safe_rshift_func_uint8_t_u_u((!(*g_139)), (safe_mod_func_uint8_t_u_u((*l_163), (safe_mul_func_uint8_t_u_u((safe_add_func_int8_t_s_s((*l_163), (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((p_42.f2 < ((p_42.f3 = (~(safe_sub_func_uint8_t_u_u(func_50(((l_297 = (void*)0) == &l_188)), p_42.f3)))) != l_281)), (*g_43))), g_119.f2.f3)))), (*p_41))))))));
    }
    p_42.f3 = (((*g_127) && (0x6DL || (((p_42.f2 & p_42.f1) == ((*l_304) = (safe_mod_func_uint16_t_u_u((*l_163), (safe_lshift_func_int8_t_s_s((l_303 != l_303), ((((*l_163) && p_42.f0) <= p_42.f2) <= p_42.f3))))))) <= (*l_163)))) == 0xBFCDL);
    return p_42;
}







static unsigned short func_50(unsigned char p_51)
{
    int *l_54 = &g_15.f6.f8;
    int **l_55 = &l_54;
    (*l_55) = l_54;
    for (p_51 = (-9); (p_51 > 4); ++p_51)
    {
        unsigned short l_60 = 0x6AA5L;
        if (g_58)
        {
            int *l_59 = &g_15.f6.f8;
            (*l_55) = l_59;
        }
        else
        {
            return l_60;
        }
    }
    return g_58;
}







static struct S0 func_83(int * p_84, int p_85, const unsigned char * p_86, struct S0 p_87, int p_88)
{
    struct S0 *l_115 = &g_15.f6;
    struct S0 **l_114 = &l_115;
    struct S1 *l_116 = &g_15.f5;
    struct S1 **l_117 = &l_116;
    const struct S3 **l_120 = &g_118;
    struct S3 *l_121 = &g_122;
    int l_128 = (-2L);
    short l_129 = 0x0268L;
    unsigned *l_130 = (void*)0;
    unsigned *l_131 = &g_94.f6;
    unsigned short *l_132 = (void*)0;
    unsigned short *l_133 = (void*)0;
    unsigned short *l_134 = (void*)0;
    unsigned short *l_135 = &g_122.f3;
    p_87 = func_90(p_87.f1);
    (*l_114) = &g_94;
    (*l_117) = l_116;
    (*p_84) = ((((*l_120) = g_118) != l_121) ^ ((*l_135) = (g_15.f6.f7 & ((*l_131) = (safe_lshift_func_int8_t_s_s(((g_15.f5.f2 | (safe_sub_func_int16_t_s_s((((void*)0 != g_127) & ((((*p_84) ^ g_15.f6.f9) & (l_129 = l_128)) < l_128)), (-6L)))) != g_94.f7), 2))))));
    return (*l_115);
}







static struct S0 func_90(unsigned p_91)
{
    const struct S0 l_92 = {254UL,0x6B7A3D1CL,4302,7UL,0x51L,0x0AF62140L,0x1400369CL,0L,0xC56DE09DL,65535UL};
    struct S0 *l_93 = &g_94;
    int *l_98 = (void*)0;
    int **l_97 = &l_98;
    int l_107 = (-10L);
    unsigned char **l_108 = (void*)0;
    unsigned short *l_110 = (void*)0;
    unsigned short *l_111 = &g_94.f9;
    (*l_93) = l_92;
    (*l_93) = (*l_93);
    if ((safe_mul_func_int16_t_s_s(p_91, (((!g_53) > (0xE030EDB6L >= l_92.f8)) & (((p_91 ^ l_92.f1) < (-9L)) < (l_97 != (void*)0))))))
    {
        short *l_101 = (void*)0;
        short *l_102 = (void*)0;
        short *l_103 = &g_94.f7;
        int * const l_106 = &g_64;
        l_107 = (safe_mod_func_uint8_t_u_u(((g_15.f2 || (g_15.f6.f8 < g_94.f5)) != ((*l_103) = g_94.f9)), (p_91 ^ (p_91 | (safe_add_func_uint8_t_u_u((func_50((l_106 != ((*l_97) = &g_64))) >= (*l_106)), 5L))))));
    }
    else
    {
        unsigned char ***l_109 = &l_108;
        (*l_109) = l_108;
        (*l_97) = (void*)0;
        (*l_97) = &g_64;
    }
    (**l_97) = (((*l_111) = p_91) != (p_91 > (*l_98)));
    return g_15.f6;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15.f0, "g_15.f0", print_hash_value);
    transparent_crc(g_15.f1, "g_15.f1", print_hash_value);
    transparent_crc(g_15.f2, "g_15.f2", print_hash_value);
    transparent_crc(g_15.f3, "g_15.f3", print_hash_value);
    transparent_crc(g_15.f4, "g_15.f4", print_hash_value);
    transparent_crc(g_15.f5.f0, "g_15.f5.f0", print_hash_value);
    transparent_crc(g_15.f5.f1, "g_15.f5.f1", print_hash_value);
    transparent_crc(g_15.f5.f2, "g_15.f5.f2", print_hash_value);
    transparent_crc(g_15.f5.f3, "g_15.f5.f3", print_hash_value);
    transparent_crc(g_15.f6.f0, "g_15.f6.f0", print_hash_value);
    transparent_crc(g_15.f6.f1, "g_15.f6.f1", print_hash_value);
    transparent_crc(g_15.f6.f2, "g_15.f6.f2", print_hash_value);
    transparent_crc(g_15.f6.f3, "g_15.f6.f3", print_hash_value);
    transparent_crc(g_15.f6.f4, "g_15.f6.f4", print_hash_value);
    transparent_crc(g_15.f6.f5, "g_15.f6.f5", print_hash_value);
    transparent_crc(g_15.f6.f6, "g_15.f6.f6", print_hash_value);
    transparent_crc(g_15.f6.f7, "g_15.f6.f7", print_hash_value);
    transparent_crc(g_15.f6.f8, "g_15.f6.f8", print_hash_value);
    transparent_crc(g_15.f6.f9, "g_15.f6.f9", print_hash_value);
    transparent_crc(g_15.f7, "g_15.f7", print_hash_value);
    transparent_crc(g_15.f8, "g_15.f8", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_94.f8, "g_94.f8", print_hash_value);
    transparent_crc(g_94.f9, "g_94.f9", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2.f0, "g_119.f2.f0", print_hash_value);
    transparent_crc(g_119.f2.f1, "g_119.f2.f1", print_hash_value);
    transparent_crc(g_119.f2.f2, "g_119.f2.f2", print_hash_value);
    transparent_crc(g_119.f2.f3, "g_119.f2.f3", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_122.f2.f0, "g_122.f2.f0", print_hash_value);
    transparent_crc(g_122.f2.f1, "g_122.f2.f1", print_hash_value);
    transparent_crc(g_122.f2.f2, "g_122.f2.f2", print_hash_value);
    transparent_crc(g_122.f2.f3, "g_122.f2.f3", print_hash_value);
    transparent_crc(g_122.f3, "g_122.f3", print_hash_value);
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    transparent_crc(g_159.f4, "g_159.f4", print_hash_value);
    transparent_crc(g_159.f5, "g_159.f5", print_hash_value);
    transparent_crc(g_159.f6, "g_159.f6", print_hash_value);
    transparent_crc(g_159.f7, "g_159.f7", print_hash_value);
    transparent_crc(g_159.f8, "g_159.f8", print_hash_value);
    transparent_crc(g_159.f9, "g_159.f9", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f1, "g_331.f1", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    transparent_crc(g_331.f3, "g_331.f3", print_hash_value);
    transparent_crc(g_331.f4, "g_331.f4", print_hash_value);
    transparent_crc(g_331.f5, "g_331.f5", print_hash_value);
    transparent_crc(g_331.f6, "g_331.f6", print_hash_value);
    transparent_crc(g_331.f7, "g_331.f7", print_hash_value);
    transparent_crc(g_331.f8, "g_331.f8", print_hash_value);
    transparent_crc(g_331.f9, "g_331.f9", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_512.f0, "g_512.f0", print_hash_value);
    transparent_crc(g_512.f1, "g_512.f1", print_hash_value);
    transparent_crc(g_512.f2, "g_512.f2", print_hash_value);
    transparent_crc(g_512.f3, "g_512.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
