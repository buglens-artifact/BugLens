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
   unsigned f0 : 4;
   signed f1 : 11;
   signed f2 : 2;
   short f3;
   signed f4 : 14;
   unsigned f5 : 4;
   signed f6 : 23;
   unsigned f7 : 21;
   signed f8 : 16;
};

struct S1 {
   signed f0 : 23;
   signed f1 : 23;
   unsigned f2 : 16;
   unsigned f3 : 3;
   unsigned f4 : 7;
   unsigned f5 : 5;
};


static int g_15 = 0xBDAC842FL;
static unsigned g_50 = 0x9656D292L;
static unsigned g_54 = 5UL;
static unsigned *g_53 = &g_54;
static int g_56 = 0x12551AD0L;
static unsigned g_58 = 0x961F9DA9L;
static unsigned short g_65 = 0x1C33L;
static struct S1 g_73 = {135,34,6,1,8,0};
static char g_98 = (-1L);
static long long g_104 = 5L;
static struct S0 g_114 = {0,21,1,0x5A68L,106,1,-323,1091,71};
static unsigned ***g_153 = (void*)0;
static struct S1 *g_173 = &g_73;
static struct S1 **g_172 = &g_173;
static int *g_179 = &g_15;
static int **g_178 = &g_179;
static int ***g_177 = &g_178;
static unsigned char g_188 = 0x2AL;
static struct S0 g_213 = {3,-1,-0,0x78BCL,-99,2,-2316,967,87};
static unsigned short **g_226 = (void*)0;
static unsigned long long g_274 = 0x9010A9E941CCE74ELL;
static unsigned long long *g_273 = &g_274;
static unsigned g_279 = 4294967295UL;
static unsigned g_280 = 0x454084CDL;
static int *g_328 = (void*)0;
static struct S0 *g_345 = &g_213;
static struct S0 **g_344 = &g_345;
static long long g_363 = (-1L);
static unsigned short g_413 = 65534UL;
static unsigned g_450 = 4294967295UL;
static unsigned **g_497 = &g_53;
static unsigned **g_498 = &g_53;



static unsigned char func_1(void);
static int * func_2(char p_3, int * p_4, unsigned char p_5, int * p_6, struct S0 p_7);
static unsigned char func_8(int * p_9, unsigned char p_10, int * p_11, int * p_12, unsigned p_13);
static int * func_18(int * p_19);
static int * func_20(int p_21, int * p_22);
static int * func_24(int * p_25, int p_26, struct S0 p_27, unsigned p_28);
static int * func_29(long long p_30, struct S0 p_31, char p_32, struct S1 p_33, unsigned p_34);
static struct S1 func_40(unsigned p_41);
static int * func_43(unsigned p_44, int * p_45, unsigned char p_46, int * p_47);
static int * func_51(unsigned * p_52);
static unsigned char func_1(void)
{
    int *l_14 = &g_15;
    long long *l_362 = &g_363;
    int l_364 = 0x57CD9FBBL;
    int *l_367 = &l_364;
    struct S0 l_368 = {3,43,1,1L,-23,0,2160,514,246};
    int **l_369 = &l_14;
    short l_370 = 1L;
    unsigned char *l_381 = &g_188;
    int l_384 = 0x6B793D8EL;
    char l_404 = 0x34L;
    struct S1 l_453 = {1487,2411,167,1,0,2};
    unsigned short *l_476 = &g_65;
    unsigned short **l_475 = &l_476;
    unsigned **l_496 = &g_53;
    struct S0 l_505 = {3,5,0,-1L,-89,2,2071,1358,-162};
    struct S1 l_506 = {-1304,1738,242,0,1,3};
    int l_509 = 1L;
    int *l_526 = &l_364;
    unsigned ****l_529 = &g_153;
    unsigned *****l_528 = &l_529;
    int *l_532 = &g_15;
    struct S0 l_533 = {3,-41,-0,-6L,82,0,2329,704,132};
    int *l_534 = (void*)0;
    unsigned *l_535 = &g_50;
    (*l_369) = ((*g_178) = func_2((func_8(l_14, (safe_add_func_int64_t_s_s((((((**g_177) = func_18(&g_15)) != l_14) == (!(((*l_362) = (safe_unary_minus_func_uint64_t_u((*g_273)))) <= (*g_273)))) | l_364), (0x657B57F08318B369LL >= (safe_sub_func_uint16_t_u_u(g_213.f2, g_213.f5))))), &l_364, &l_364, l_364) == l_364), &l_364, g_213.f8, l_367, l_368));

    ;
    ;
    ;
    ;
    if (l_370)
    {
        int l_385 = 0xACDF0841L;
        unsigned *l_386 = &g_280;
        short *l_387 = &g_213.f3;
        unsigned *l_394 = &g_50;
        unsigned **l_395 = &g_53;
        int l_442 = 0L;
        unsigned short l_447 = 0xB489L;
        int *l_448 = &g_15;
        struct S0 l_451 = {3,-44,-0,-4L,-120,3,-2597,497,231};
        int *l_477 = &g_56;
        (*l_367) = (((*l_387) = (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(func_8(func_20((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((1UL ^ ((+(*l_367)) ^ ((*l_386) = (((&g_188 == l_381) != (safe_mul_func_uint8_t_u_u(g_73.f3, ((l_384 & (((*g_273) = (*g_273)) == 0xD5B540CACAE96CF2LL)) != (l_385 != 0xB7L))))) && g_213.f8)))) ^ g_114.f5), l_385)), (*l_367))), (**g_177)), g_213.f2, (*l_369), (*l_369), l_385), 9)), g_114.f0)), l_385))) || 0x35C6L);
        if (func_8((*g_178), (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_add_func_int64_t_s_s((&g_50 == ((*l_395) = l_394)), (safe_mul_func_int8_t_s_s((g_98 = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0xAEL, g_73.f5)), ((*l_387) = ((g_213.f8 | (g_114.f2 < g_114.f7)) == g_213.f1)))) | 0x9A69BFDA5EEBCE1ELL), l_404))), 1UL)))), l_385)), l_385)), (**g_177), l_394, g_73.f5))
        {
            char l_411 = (-1L);
            unsigned *l_431 = (void*)0;
            unsigned l_434 = 0x4A733F86L;
            struct S0 *l_452 = &l_451;
            struct S1 *l_454 = &g_73;
            int *l_455 = &l_364;
            int **l_456 = &l_448;
            unsigned short *l_474 = &g_413;
            unsigned short **l_473 = &l_474;
            for (g_65 = 0; (g_65 <= 57); g_65 = safe_add_func_uint8_t_u_u(g_65, 3))
            {
                long long l_407 = 1L;
                int *l_408 = &g_15;
                struct S1 ***l_427 = &g_172;
                if (l_407)
                {
                    unsigned short *l_412 = &g_413;
                    int l_426 = 0x5948C765L;
                    int *l_428 = &g_15;
                    struct S0 l_429 = {3,36,-1,0xBC06L,-77,0,41,1015,162};
                    unsigned **l_430 = &l_386;
                    (*l_367) = ((func_8(l_408, (safe_lshift_func_uint8_t_u_u((((*l_412) = l_411) != (((*l_430) = func_2((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(g_114.f4, (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(((*g_273) == (safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u(l_411, g_65)), (l_426 > ((*l_362) = l_426))))), (l_427 == (void*)0))), 0xB9657CA7L)))) >= 0x0EL), (*l_408))), l_428, g_114.f0, l_428, l_429)) != l_431)), 7)), l_394, l_394, (*g_53)) ^ g_73.f2) > 1UL);

                    ;
                    (*g_172) = (void*)0;

                    ;
                    if ((safe_mul_func_int16_t_s_s(l_434, (g_213.f3 = (*l_408)))))
                    {
                        (**g_177) = (*g_178);
                        if ((*l_428))
                            break;
                    }
                    else
                    {
                        struct S0 *l_435 = &g_213;
                        (*l_408) = l_411;
                        (*l_435) = l_429;
                    }
                    if ((*l_428))
                        break;
                }
                else
                {
                    (*l_369) = (void*)0;
                }

                ;
                ;
                for (l_385 = 0; (l_385 != (-29)); l_385 = safe_sub_func_uint64_t_u_u(l_385, 9))
                {
                    int *l_445 = &g_56;
                    int l_449 = 0L;
                    (*l_408) = 0xC9F9C56EL;
                    if ((((safe_mul_func_int8_t_s_s(g_56, g_213.f6)) & (safe_sub_func_uint64_t_u_u(((l_442 = 18446744073709551611UL) && ((*l_367) ^ ((safe_sub_func_uint32_t_u_u((func_8(l_445, ((safe_unary_minus_func_uint8_t_u((l_447 >= g_50))) >= (*l_445)), (l_448 = (*g_178)), (*g_178), (*g_53)) != 65533UL), l_449)) || g_54))), g_114.f0))) ^ (-1L)))
                    {
                        (**g_177) = func_51(l_445);

                        ;
                        (***g_177) = 1L;
                        (*g_178) = l_408;

                        ;
                    }
                    else
                    {
                        (**g_177) = &l_442;

                        ;
                        l_448 = l_408;

                        ;
                    }

                    ;
                    ;
                    return g_213.f3;


                }
                return g_450;
            }

            ;
            ;
            (*l_452) = l_451;
            (*l_454) = l_453;
            if (func_8((**g_177), func_8((*g_178), l_434, l_455, l_455, ((-7L) == 0xE411B5E07C7A1D85LL)), l_431, (*l_369), (*l_448)))
            {
                return g_73.f1;
            }
            else
            {
                int ****l_470 = &g_177;
                (*g_172) = (*g_172);
                (*g_177) = l_456;

                ;
                for (g_54 = 0; (g_54 != 45); g_54 = safe_add_func_uint64_t_u_u(g_54, 5))
                {
                    char l_463 = 1L;
                    for (g_188 = 0; (g_188 < 39); g_188 = safe_add_func_int32_t_s_s(g_188, 4))
                    {
                        (*l_452) = l_451;
                        (*l_367) = ((**g_178) = (safe_sub_func_uint32_t_u_u(l_463, g_114.f0)));
                    }
                    if ((***g_177))
                        break;
                }
                for (l_434 = (-8); (l_434 > 38); l_434 = safe_add_func_uint8_t_u_u(l_434, 1))
                {
                    int ****l_469 = &g_177;
                    int *****l_468 = &l_469;
                    unsigned char l_478 = 0xC7L;
                }
            }

            ;
        }
        else
        {
            struct S0 l_499 = {1,-42,0,0xECDEL,7,0,1341,846,-183};
            struct S1 l_500 = {1229,1540,110,0,1,4};
            unsigned long long l_511 = 0x9031822C5AD507E4LL;
            for (g_50 = (-15); (g_50 == 18); g_50++)
            {
                int l_485 = 0x6DDACA1BL;
                int *l_488 = &l_442;
                (**g_177) = func_2(g_413, (*g_178), ((safe_add_func_uint8_t_u_u(l_485, (func_8((*g_178), g_114.f4, ((*l_369) = (void*)0), func_51(&g_54), (safe_lshift_func_uint16_t_u_u(func_8(l_488, g_73.f4, &l_442, (**g_177), (*l_448)), g_213.f3))) ^ 0UL))) < (-8L)), (**g_177), g_213);

                ;
                for (l_364 = 21; (l_364 == (-4)); l_364 = safe_sub_func_uint8_t_u_u(l_364, 4))
                {
                    unsigned short l_493 = 65535UL;
                    (*l_488) = (l_493 ^ ((safe_lshift_func_int16_t_s_u(l_493, (*l_488))) >= g_73.f4));
                }
                (*l_369) = func_29(func_8((*g_178), g_363, ((*l_369) = func_51(func_29((l_496 == (g_498 = (g_497 = l_496))), l_499, l_499.f8, l_500, (safe_lshift_func_int16_t_s_s(g_114.f8, (safe_lshift_func_int16_t_s_u(((g_58 != 2L) > (*l_488)), g_213.f0))))))), &l_364, g_363), l_505, (*l_488), l_506, g_413);

                ;
            }

            ;
            ;
            for (g_279 = 0; (g_279 > 53); g_279++)
            {
                unsigned char l_510 = 0xDCL;
                (**g_172) = (**g_172);
                (*l_448) = ((*l_477) = (-8L));
                (*l_477) = (!((l_509 != g_450) && l_510));
                if (l_511)
                    continue;
            }
        }

        ;
        ;
        ;
        ;
        ;
        (*g_178) = (**g_177);

        ;
        ;
    }
    else
    {
        unsigned long long l_523 = 0x306D8AB56FD0D4BCLL;
        char *l_524 = (void*)0;
        char *l_525 = &g_98;
        int l_527 = 0L;
        (**g_177) = (*g_178);
        for (g_274 = 0; (g_274 < 7); ++g_274)
        {
            unsigned l_514 = 5UL;
            int *l_515 = (void*)0;
            (*l_367) = (l_514 > g_274);
            (*g_178) = func_51(((*g_497) = &l_514));

            ;
            ;
            for (l_509 = 15; (l_509 == 17); l_509 = safe_add_func_int32_t_s_s(l_509, 7))
            {
                short l_518 = 3L;
                return l_518;



            }
        }



        g_73.f1 = ((*l_367) = (safe_lshift_func_uint16_t_u_u((l_527 = (safe_mod_func_int8_t_s_s((l_523 ^ ((((*l_525) = (*l_367)) | func_8(l_526, g_213.f8, (*l_369), func_24((*l_369), g_213.f2, l_505, l_523), l_523)) | (*l_367))), g_213.f8))), l_523)));
        (*l_369) = &g_15;

        ;
    }

    ;

    ;


    (*l_367) = (((l_528 != (void*)0) | (((safe_mul_func_int16_t_s_s(func_8((*l_369), func_8(func_51(l_14), g_73.f1, func_24(l_532, (*l_526), l_533, (*l_367)), (*l_369), (*l_532)), l_534, (*l_369), (*l_367)), (*l_526))) | (*l_526)) < 18446744073709551615UL)) && 0x03L);
    g_328 = func_24(func_51(l_535), g_213.f2, l_505, (*l_532));
    return g_363;
}







static int * func_2(char p_3, int * p_4, unsigned char p_5, int * p_6, struct S0 p_7)
{
    (*g_178) = (void*)0;

    ;
    return (**g_177);


}







static unsigned char func_8(int * p_9, unsigned char p_10, int * p_11, int * p_12, unsigned p_13)
{
    return p_13;
}







static int * func_18(int * p_19)
{
    unsigned short l_23 = 0xAAFBL;
    struct S0 l_39 = {1,-16,0,-1L,-16,2,592,785,-250};
    int l_42 = 1L;
    int l_121 = 0xD4FFBABFL;
    short l_357 = 0xF60FL;
    struct S1 l_358 = {-458,-658,162,1,1,4};
    (**g_177) = func_20(l_23, func_24(func_29((safe_mul_func_int8_t_s_s(g_15, (safe_lshift_func_uint16_t_u_u(l_23, 9)))), l_39, l_39.f6, func_40(l_42), l_39.f5), l_121, l_39, l_39.f5));

    ;
    (**g_177) = func_29(((safe_sub_func_uint8_t_u_u(9UL, l_357)) <= g_73.f4), l_39, g_274, l_358, g_114.f4);

    ;
    for (l_39.f3 = 9; (l_39.f3 >= 0); l_39.f3 = safe_sub_func_int16_t_s_s(l_39.f3, 8))
    {
        (*p_19) = (*p_19);
    }
    (*g_344) = (void*)0;

    ;
    return (**g_177);


}







static int * func_20(int p_21, int * p_22)
{
    long long l_331 = 5L;
    struct S0 **l_346 = &g_345;
    int *l_349 = (void*)0;
    unsigned short l_352 = 65535UL;
    short *l_353 = &g_114.f3;
    unsigned *l_354 = &g_280;
    (**g_177) = (*g_178);
    (*g_173) = (**g_172);
    return (**g_177);


}







static int * func_24(int * p_25, int p_26, struct S0 p_27, unsigned p_28)
{
    unsigned short *l_123 = &g_65;
    unsigned short **l_122 = &l_123;
    int *l_124 = &g_56;
    int **l_125 = &l_124;
    int *l_127 = (void*)0;
    int **l_126 = &l_127;
    char l_140 = 0xEDL;
    unsigned **l_151 = &g_53;
    unsigned ***l_150 = &l_151;
    unsigned long long l_204 = 0xB9BFD79EB32EB6C4LL;
    unsigned long long *l_235 = &l_204;
    int *l_241 = &g_56;
    struct S1 l_253 = {2581,-2474,137,0,6,1};
    char l_287 = (-1L);
    int *l_291 = (void*)0;
    l_122 = l_122;
    (*l_126) = ((*l_125) = l_124);

    ;
    for (g_50 = 0; (g_50 <= 18); g_50++)
    {
        struct S1 l_130 = {1866,-1047,254,1,9,0};
        l_130 = l_130;
    }
    for (p_27.f3 = 28; (p_27.f3 > (-25)); p_27.f3--)
    {
        unsigned long long l_144 = 0x1E7103E2EA94D18ALL;
        int l_149 = (-1L);
        struct S0 *l_212 = &g_213;
        struct S0 **l_218 = (void*)0;
        struct S0 **l_219 = &l_212;
        int ****l_228 = &g_177;
        int *****l_227 = &l_228;
        short *l_229 = (void*)0;
        short *l_230 = &g_213.f3;
        unsigned char *l_231 = (void*)0;
        unsigned char *l_232 = &g_188;
        unsigned long long *l_236 = &l_204;
        unsigned *l_242 = (void*)0;
        struct S1 *l_263 = &g_73;
    }
    return g_328;


}







static int * func_29(long long p_30, struct S0 p_31, char p_32, struct S1 p_33, unsigned p_34)
{
    unsigned short *l_87 = &g_65;
    unsigned short **l_86 = &l_87;
    int **l_90 = (void*)0;
    int l_101 = 0x5521BE81L;
    unsigned **l_117 = &g_53;
    unsigned *l_118 = &g_50;
    int *l_120 = (void*)0;
    int **l_119 = &l_120;
    for (p_30 = (-8); (p_30 != 5); ++p_30)
    {
        unsigned l_80 = 0x0B4C8B43L;
        int *l_89 = (void*)0;
        for (g_56 = 7; (g_56 <= 8); ++g_56)
        {
            unsigned short l_92 = 0xF84DL;
            char *l_97 = &g_98;
            char *l_99 = (void*)0;
            int l_100 = 5L;
            long long *l_102 = (void*)0;
            long long *l_103 = &g_104;
            int *l_105 = &l_101;
            if (p_31.f5)
            {
                int ***l_91 = &l_90;
                if (l_80)
                {
                    struct S1 *l_81 = (void*)0;
                    struct S1 *l_82 = &g_73;
                    int *l_83 = &g_15;
                    (*l_82) = p_33;
                    (*l_82) = g_73;
                    (*l_83) = (7UL <= p_34);
                    for (p_32 = 0; (p_32 >= 26); ++p_32)
                    {
                        unsigned short ***l_88 = &l_86;
                        (*l_88) = l_86;
                        return l_89;


                    }
                }
                else
                {
                    return &g_56;


                }
                (*l_91) = l_90;
                p_31 = p_31;
                l_92 = g_73.f2;
            }
            else
            {
                g_73 = p_33;
            }
            p_31.f4 = (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_100 = ((*l_97) = l_92)), l_101)), (g_50 == (((*l_103) = l_92) || (l_92 || g_73.f2)))));
            (*l_105) = p_31.f3;
            if (g_104)
                continue;
        }
    }
    if ((!((g_56 != (((void*)0 != &l_87) || (safe_add_func_uint16_t_u_u(((p_33.f3 ^ (~(safe_mul_func_int16_t_s_s(p_31.f6, (p_31.f8 <= g_54))))) != 1UL), (l_90 == l_90))))) ^ l_101)))
    {
        unsigned **l_110 = (void*)0;
        unsigned ***l_111 = (void*)0;
        unsigned ***l_112 = &l_110;
        int *l_113 = &g_56;
        struct S0 *l_115 = &g_114;
        int **l_116 = (void*)0;
        (*l_112) = l_110;
        l_113 = l_113;
        (*l_115) = g_114;
        l_113 = (void*)0;

        ;
    }
    else
    {
        return &g_56;


    }
    (*l_119) = func_43((((*l_117) = (void*)0) == l_118), &l_101, l_101, &l_101);

    ;
    ;
    return &g_15;


}







static struct S1 func_40(unsigned p_41)
{
    int *l_48 = &g_15;
    unsigned *l_49 = &g_50;
    struct S1 l_75 = {-1337,1374,1,1,3,2};
    l_48 = func_43(((*l_49) = (&g_15 == l_48)), func_51(g_53), (*l_48), l_49);

    ;
    for (g_58 = (-22); (g_58 < 21); ++g_58)
    {
        struct S1 *l_74 = &g_73;
        (*l_74) = g_73;
    }
    return l_75;
}







static int * func_43(unsigned p_44, int * p_45, unsigned char p_46, int * p_47)
{
    int l_61 = 0x34D7F484L;
    unsigned short *l_64 = &g_65;
    if (((*p_45) = ((((safe_unary_minus_func_uint32_t_u(0UL)) & (l_61 || ((*l_64) = (l_61 > (safe_add_func_uint64_t_u_u(g_15, l_61)))))) < (safe_sub_func_int32_t_s_s(g_56, p_46))) || 0L)))
    {
        long long l_68 = (-6L);
        (*p_47) = l_68;
    }
    else
    {
        struct S1 l_69 = {-1618,-2559,78,0,7,4};
        struct S1 *l_70 = &l_69;
        (*l_70) = l_69;
        (*p_45) = ((+l_69.f4) <= l_69.f4);
    }
    return p_45;


}







static int * func_51(unsigned * p_52)
{
    int *l_55 = &g_56;
    int l_57 = (-2L);
    int **l_59 = &l_55;
    g_58 = (l_57 = ((*l_55) = (((void*)0 == p_52) && 0x8264L)));
    (*l_59) = &g_15;

    ;
    return p_52;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_73.f0, "g_73.f0", print_hash_value);
    transparent_crc(g_73.f1, "g_73.f1", print_hash_value);
    transparent_crc(g_73.f2, "g_73.f2", print_hash_value);
    transparent_crc(g_73.f3, "g_73.f3", print_hash_value);
    transparent_crc(g_73.f4, "g_73.f4", print_hash_value);
    transparent_crc(g_73.f5, "g_73.f5", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_114.f0, "g_114.f0", print_hash_value);
    transparent_crc(g_114.f1, "g_114.f1", print_hash_value);
    transparent_crc(g_114.f2, "g_114.f2", print_hash_value);
    transparent_crc(g_114.f3, "g_114.f3", print_hash_value);
    transparent_crc(g_114.f4, "g_114.f4", print_hash_value);
    transparent_crc(g_114.f5, "g_114.f5", print_hash_value);
    transparent_crc(g_114.f6, "g_114.f6", print_hash_value);
    transparent_crc(g_114.f7, "g_114.f7", print_hash_value);
    transparent_crc(g_114.f8, "g_114.f8", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_213.f1, "g_213.f1", print_hash_value);
    transparent_crc(g_213.f2, "g_213.f2", print_hash_value);
    transparent_crc(g_213.f3, "g_213.f3", print_hash_value);
    transparent_crc(g_213.f4, "g_213.f4", print_hash_value);
    transparent_crc(g_213.f5, "g_213.f5", print_hash_value);
    transparent_crc(g_213.f6, "g_213.f6", print_hash_value);
    transparent_crc(g_213.f7, "g_213.f7", print_hash_value);
    transparent_crc(g_213.f8, "g_213.f8", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
