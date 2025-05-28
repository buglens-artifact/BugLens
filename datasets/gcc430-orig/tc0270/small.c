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
   signed f0 : 17;
   signed f1 : 2;
   signed f2 : 28;
   signed f3 : 24;
   const signed f4 : 7;
   signed f5 : 2;
};

struct S1 {
   int f0;
   struct S0 f1;
   int f2;
   const char f3;
   short f4;
   int f5;
   char f6;
   const int f7;
};

struct S2 {
   unsigned f0;
   unsigned f1;
   struct S1 f2;
};


static short g_4 = 0x33E3L;
static short g_7 = 2L;
static short g_9 = (-3L);
static unsigned char g_10 = 0xEEL;
static short g_25 = 0x8A8CL;
static short *g_24 = &g_25;
static int g_28 = 0x44FB66C1L;
static struct S2 g_29 = {0x57720F84L,0x0F4F2D89L,{-6L,{19,-0,2284,-1209,-9,-0},-2L,0x75L,0x7F77L,0x71FDA660L,-4L,0L}};
static const short g_102 = (-1L);
static unsigned short g_104 = 1UL;
static struct S1 g_115 = {-1L,{-232,-1,3458,-1800,6,-0},0L,2L,0xD343L,0x42109203L,0xF1L,6L};
static int *g_120 = &g_115.f2;
static unsigned short g_139 = 1UL;
static unsigned long long g_151 = 1UL;
static unsigned short *g_157 = (void*)0;
static unsigned short **g_156 = &g_157;
static struct S2 *g_197 = &g_29;
static struct S2 * const *g_196 = &g_197;
static long long g_211 = 0x9919D5E5635D66E9LL;
static unsigned long long *g_220 = &g_151;
static unsigned long long **g_219 = &g_220;
static const unsigned char *g_227 = (void*)0;
static const unsigned char **g_226 = &g_227;
static unsigned short g_262 = 65535UL;
static struct S0 *g_267 = &g_115.f1;
static char g_288 = 0x34L;
static int g_391 = 4L;
static const struct S0 g_463 = {112,0,-12713,1870,-8,1};
static unsigned char g_465 = 0x10L;
static const short **g_473 = (void*)0;
static struct S2 g_495 = {0xECBB81FFL,0x6D592E75L,{-6L,{-146,-1,-15674,1533,-6,-1},-9L,7L,-9L,0x5F6F0DBFL,0x0FL,1L}};
static long long ** const g_504 = (void*)0;
static short *g_505 = (void*)0;
static unsigned char g_512 = 255UL;
static struct S1 g_519 = {0x768BD463L,{32,-1,-8183,-3399,-1,-0},-9L,0x28L,1L,0L,0x09L,0xE3838A26L};
static struct S2 **g_541 = &g_197;
static struct S2 ***g_540 = &g_541;
static const struct S0 *g_607 = &g_29.f2.f1;
static const struct S0 **g_606 = &g_607;
static long long *g_719 = &g_211;
static long long **g_718 = &g_719;
static unsigned long long g_739 = 0x5F054BA17D3BC300LL;
static unsigned long long *g_738 = &g_739;
static int g_841 = (-1L);
static unsigned long long g_846 = 18446744073709551615UL;
static long long g_875 = 0L;
static struct S1 **g_880 = (void*)0;
static unsigned long long ***g_882 = &g_219;
static unsigned long long ****g_881 = &g_882;
static struct S0 ** const *g_903 = (void*)0;
static struct S0 ** const ** const g_902 = &g_903;
static char *g_915 = &g_495.f2.f6;
static char **g_914 = &g_915;
static unsigned g_944 = 9UL;
static unsigned g_979 = 0xC5C9BD6EL;
static int g_1177 = 0x8278B88CL;



static unsigned func_1(void);
static unsigned char func_15(int p_16, short * p_17, struct S2 p_18);
static int * func_30(struct S2 p_31, struct S1 p_32, struct S2 p_33, int * const p_34, unsigned p_35);
static struct S2 func_36(int * p_37, int p_38, int p_39, short * p_40);
static int * func_41(int * p_42, short * p_43, unsigned long long p_44);
static struct S2 func_46(int p_47, unsigned long long p_48);
static short func_55(int * p_56, const short * p_57);
static int * func_58(short * p_59, int * p_60, short * p_61, const int * p_62, short * p_63);
static short * func_64(unsigned char p_65, long long p_66, short p_67);
static int * func_82(long long p_83, short * p_84, unsigned p_85, int p_86, int p_87);
static unsigned func_1(void)
{
    char l_2 = 8L;
    short *l_3 = &g_4;
    short *l_5 = (void*)0;
    short *l_6 = &g_7;
    short *l_8 = &g_9;
    struct S0 l_23 = {-350,1,9596,-371,-7,-1};
    int *l_26 = (void*)0;
    int *l_27 = &g_28;
    unsigned *l_1192 = &g_979;
    (*l_27) = ((0x8819L < ((*l_8) = ((*l_6) = (~((*l_3) = l_2))))) >= ((g_10 && ((*l_1192) = ((safe_lshift_func_uint16_t_u_s((248UL < g_10), 12)) , ((safe_rshift_func_uint8_t_u_s(func_15(((safe_rshift_func_uint16_t_u_u(0x14BAL, (safe_mod_func_int32_t_s_s((((*l_27) = (((l_23 , (g_10 , g_10)) , g_24) == (void*)0)) == g_25), l_23.f1)))) & g_10), &g_25, g_29), 4)) >= 0x53L)))) > 5UL));

    ;



    ;

    ;
    return g_391;
}







static unsigned char func_15(int p_16, short * p_17, struct S2 p_18)
{
    unsigned long long l_45 = 4UL;
    const short *l_68 = &g_25;
    int *l_77 = (void*)0;
    char l_966 = (-1L);
    struct S1 l_1053 = {0L,{-250,0,15754,1339,3,1},0L,0x63L,0L,1L,2L,0x2D9BDA0CL};
    struct S2 l_1054 = {7UL,0xEC5C6A97L,{-1L,{85,0,14571,-3150,9,1},0xDAB27B10L,0L,0x163CL,0x374422F4L,0x8FL,0x56375C65L}};
    int *l_1191 = &l_1054.f2.f2;
    if ((p_18.f2.f2 = g_29.f2.f1.f4))
    {
        int *l_390 = &g_391;
        short *l_960 = &g_495.f2.f4;
        int l_961 = (-1L);
        int **l_1187 = &l_77;
        (*l_1187) = func_30(func_36(func_41(((l_45 , func_46((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((*p_17), (safe_rshift_func_int16_t_s_u(func_55(func_58(func_64((p_17 != l_68), (safe_add_func_uint16_t_u_u(p_16, (safe_rshift_func_int16_t_s_u((!8L), 7)))), (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((l_77 == l_77), (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((g_29.f2 , p_18.f2.f1) , (*g_24)) > 1L), p_18.f2.f0)), 11)))), p_18.f2.f1.f0))), l_390, &g_25, l_77, p_17), l_68), p_18.f2.f2)))) , (*l_390)), 5)), p_18.f2.f6)) , l_390), l_960, l_961), g_495.f1, l_966, g_505), l_1053, l_1054, &l_961, g_463.f1);

        ;
        ;



        ;

        ;
    }
    else
    {
        struct S0 *l_1190 = &l_1053.f1;
        for (g_29.f1 = 0; (g_29.f1 != 35); g_29.f1 = safe_add_func_uint64_t_u_u(g_29.f1, 9))
        {
            (*g_606) = l_1190;

            ;
            (*g_120) = 0x8B481FB9L;
        }

        ;
        (*g_120) = 0x2CD4AB77L;
    }

    ;
    ;



    ;

    ;
    (*l_1191) = g_519.f1.f2;
    return p_16;


}







static int * func_30(struct S2 p_31, struct S1 p_32, struct S2 p_33, int * const p_34, unsigned p_35)
{
    unsigned char l_1055 = 249UL;
    int *l_1065 = &g_29.f2.f2;
    struct S2 * const **l_1069 = &g_196;
    long long l_1077 = (-1L);
    char ** const l_1094 = (void*)0;
    struct S2 l_1114 = {4294967294UL,18446744073709551608UL,{-1L,{-204,0,5638,-2597,5,-0},1L,0xA8L,1L,0x310C1975L,0x3FL,-5L}};
    short l_1145 = 0xC78EL;
    struct S0 * const l_1164 = &g_29.f2.f1;
    if (l_1055)
    {
        int l_1056 = 0L;
        char *l_1057 = (void*)0;
        int l_1058 = 1L;
        int l_1061 = 0x32389025L;
        char *l_1062 = &g_29.f2.f6;
        (*p_34) = ((l_1056 | ((l_1056 ^ (((*g_24) = ((**g_718) > (*g_719))) >= ((((l_1058 = ((*g_915) = 1L)) <= ((safe_rshift_func_uint8_t_u_s(1UL, ((*l_1062) = l_1061))) | l_1055)) || (safe_sub_func_uint8_t_u_u(p_32.f7, l_1055))) <= 1L))) , 1UL)) | p_32.f1.f4);
    }
    else
    {
        int **l_1066 = (void*)0;
        int **l_1067 = &g_120;
        int **l_1068 = &l_1065;
        struct S2 ***l_1074 = &g_541;
        const struct S0 l_1075 = {30,0,-6592,3125,-8,0};
        char ***l_1078 = &g_914;
        struct S1 *l_1079 = &g_29.f2;
        const short *l_1083 = (void*)0;
        unsigned short l_1186 = 0x0606L;
        (*l_1068) = ((*p_34) , ((*l_1067) = l_1065));

        ;
        (*l_1067) = &g_391;

        ;
        if (((((&g_914 != (((((*l_1065) < (l_1075 , (safe_unary_minus_func_int16_t_s(l_1077)))) && (p_31.f2.f3 ^ p_32.f1.f5)) & ((+8L) <= (*l_1065))) , l_1078)) , (****g_881)) , 1UL) & (*l_1065)))
        {
            unsigned char l_1080 = 248UL;
            const struct S1 *l_1081 = (void*)0;
            const struct S1 **l_1082 = &l_1081;
            (*l_1065) = ((0xACL != (((~(((void*)0 == l_1079) & (*p_34))) && l_1080) < 252UL)) , (&g_519 == ((*l_1082) = l_1081)));
        }
        else
        {
            short l_1095 = 1L;
            (*l_1065) = ((*p_34) | (((safe_sub_func_uint64_t_u_u((***g_882), (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((-1L), (safe_lshift_func_uint8_t_u_s((*l_1065), (1UL < ((p_32.f1.f3 , (safe_add_func_int8_t_s_s(((void*)0 == l_1094), 3L))) >= l_1095)))))), p_31.f2.f6)))) , &g_915) != &g_915));
            (*l_1068) = &g_391;

            ;
            for (g_25 = (-23); (g_25 > 0); g_25 = safe_add_func_uint32_t_u_u(g_25, 6))
            {
                struct S1 l_1105 = {0x45ACBF98L,{281,-0,12546,2810,2,-1},1L,0xE4L,0xD0BCL,1L,-2L,0x871D0E76L};
                for (g_875 = (-28); (g_875 >= 26); ++g_875)
                {
                    struct S2 ***l_1104 = (void*)0;
                    unsigned *l_1106 = &g_495.f0;
                    (*l_1067) = &g_28;

                    ;
                    l_1105.f1.f1 = (((*l_1106) = ((safe_rshift_func_uint8_t_u_s(((p_32.f1 , (safe_rshift_func_int16_t_s_u((0x2754L == 0L), 9))) , ((((*g_220) = (***g_882)) & (*g_719)) || ((void*)0 != l_1104))), (p_32.f1 , ((((l_1105 , (*l_1065)) == 0x98DB17FDL) <= 0x1785C8FDL) && 0x53B6A70CL)))) , p_32.f7)) , 0L);
                    for (g_29.f0 = 0; (g_29.f0 >= 24); ++g_29.f0)
                    {
                        return l_1106;


                    }
                }

                ;
                return &g_391;


            }
        }

        ;
        if ((*p_34))
        {
            char l_1111 = 0x9AL;
            struct S0 l_1119 = {41,0,-4188,2291,3,1};
            unsigned short *l_1120 = &g_139;
            (*l_1065) = ((*l_1065) > (((safe_add_func_int16_t_s_s((-9L), (l_1111 , (0x75FCB794L ^ ((*p_34) = ((l_1114 , p_31.f2.f1.f0) >= (safe_rshift_func_uint8_t_u_u(p_33.f2.f0, 7)))))))) , ((*l_1120) = ((safe_lshift_func_int8_t_s_u((p_32 , ((p_32.f1.f3 , l_1119) , (*l_1065))), (*l_1065))) > p_31.f2.f1.f5))) && l_1119.f3));
        }
        else
        {
            long long l_1125 = 0x57966CF724B12302LL;
            unsigned short * const l_1132 = &g_104;
            unsigned l_1144 = 0x581ABC9CL;
            int *l_1173 = &g_29.f2.f2;
            long long l_1180 = 1L;
            for (g_979 = (-1); (g_979 > 52); g_979 = safe_add_func_int16_t_s_s(g_979, 8))
            {
                struct S2 ***l_1135 = &g_541;
                int l_1149 = 0x1FED2E64L;
                struct S0 *l_1163 = &g_115.f1;
            }
        }
    }


    ;
    return l_1065;


}







static struct S2 func_36(int * p_37, int p_38, int p_39, short * p_40)
{
    struct S2 l_969 = {0x7659DD5BL,0x196B3C6CL,{1L,{-175,0,-12354,-2301,9,0},0xC2ED1C59L,0xE6L,-1L,-1L,0x78L,0L}};
    const short *l_972 = &g_29.f2.f4;
    struct S0 *l_993 = &l_969.f2.f1;
    unsigned l_1005 = 18446744073709551614UL;
    for (g_495.f2.f4 = (-20); (g_495.f2.f4 >= (-4)); g_495.f2.f4 = safe_add_func_int64_t_s_s(g_495.f2.f4, 5))
    {
        return l_969;
    }
    if (((func_55(&g_28, l_972) > ((**g_914) = ((!(l_969.f2.f5 | 0x8C13L)) , ((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((((**g_196) , 0xCE55L) || l_969.f2.f4), 6)) & 0x5EL), 0xC192L)) >= (*g_220)) | p_38) , (**g_914))))) ^ 0xB641A88CL))
    {
        struct S1 l_988 = {-6L,{344,-1,5355,2104,-0,-0},-1L,1L,0xCF70L,5L,3L,0x79DE7AC3L};
        struct S0 **l_989 = &g_267;
        l_969.f2.f1.f0 = (((p_38 && (p_39 , (safe_mod_func_uint16_t_u_u(0x1D26L, 65533UL)))) < (g_979 <= 0UL)) < ((***g_540) , 0xE4L));
        (*g_606) = ((*l_989) = (void*)0);

        ;
        ;
        return l_969;
    }
    else
    {
        unsigned l_990 = 0x432BA0BEL;
        struct S1 *l_994 = &g_29.f2;
        if ((l_990 < (safe_sub_func_uint32_t_u_u(g_495.f2.f0, (-1L)))))
        {
            (*g_606) = l_993;

            ;
        }
        else
        {
            struct S1 **l_995 = &l_994;
            (*l_995) = l_994;
            (*p_37) = l_969.f1;
        }

        ;
    }

    ;
    if ((p_38 ^ (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((*p_37), (*p_37))), l_969.f2.f3))))
    {
        unsigned long long l_1004 = 0xFA64EF787D55DFFELL;
        l_969.f2.f1.f2 = 0xABF0043EL;
        g_115.f1.f3 = (((((((safe_lshift_func_uint8_t_u_u((g_512 || (((safe_rshift_func_uint8_t_u_u(l_969.f2.f0, 5)) , p_39) != 0xE0L)), l_1004)) , 65528UL) < p_39) && p_39) ^ (p_39 != l_1005)) && l_969.f0) , l_1004);
    }
    else
    {
        unsigned long long l_1024 = 0x94D684A8D8A4D7ADLL;
        for (g_28 = 0; (g_28 < 17); g_28 = safe_add_func_int32_t_s_s(g_28, 9))
        {
            struct S0 l_1012 = {-53,0,-9612,-2021,3,0};
            struct S2 *l_1037 = &l_969;
            const struct S0 ***l_1049 = &g_606;
            int *l_1052 = &g_495.f2.f2;
            for (g_25 = 17; (g_25 < 3); g_25 = safe_sub_func_int16_t_s_s(g_25, 8))
            {
                struct S2 l_1013 = {0x316F0F9AL,1UL,{-1L,{-170,0,11227,3691,4,-1},0x8F20CD13L,6L,0L,0xD95038ADL,0xB8L,0L}};
                unsigned long long *l_1034 = (void*)0;
                unsigned long long *l_1035 = &g_846;
                int *l_1036 = &g_495.f2.f2;
                for (g_10 = 22; (g_10 > 50); ++g_10)
                {
                    int l_1025 = (-1L);
                    int *l_1026 = (void*)0;
                    int *l_1027 = &l_1013.f2.f2;
                    int **l_1029 = &l_1026;
                    int ***l_1028 = &l_1029;
                    (*l_1027) = ((l_1012 , l_1013) , (((*g_915) > p_39) & ((safe_add_func_int64_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((**g_914), 2)), (safe_lshift_func_int16_t_s_u(((p_38 || ((safe_lshift_func_uint16_t_u_s(0xEE64L, 8)) , l_1024)) & l_1013.f0), l_1025)))), l_1012.f4)) , 0x6090L)));
                    (*l_1028) = (void*)0;

                    ;
                }
                (*l_1036) = ((0x6AL || (safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((*g_24), p_38)) , ((l_1012.f1 , ((*p_37) & p_39)) > ((****g_881) = l_1013.f2.f5))), (l_969.f2.f1.f2 = ((*l_1035) = l_969.f2.f1.f2))))) | p_38);
            }
            (*g_541) = l_1037;

            ;
            if (l_969.f2.f1.f1)
            {
                short l_1045 = 0x3F68L;
                int *l_1050 = (void*)0;
                int *l_1051 = &g_495.f2.f2;
                for (g_115.f2 = (-16); (g_115.f2 == 18); g_115.f2 = safe_add_func_uint32_t_u_u(g_115.f2, 6))
                {
                    for (g_115.f4 = 0; (g_115.f4 != (-26)); g_115.f4--)
                    {
                        int **l_1042 = &g_120;
                        (*l_1042) = p_37;

                        ;
                    }
                }
                (*g_606) = &l_1012;

                ;
                for (l_1005 = (-16); (l_1005 <= 13); l_1005 = safe_add_func_int8_t_s_s(l_1005, 9))
                {
                    int *l_1046 = &g_841;
                    int **l_1047 = (void*)0;
                    int **l_1048 = &l_1046;
                    l_1045 = ((void*)0 == &g_979);
                    (*l_1046) = (-1L);
                    (*l_1048) = (void*)0;

                    ;
                }
                (*l_1051) = (p_39 , ((*g_902) != l_1049));
            }
            else
            {
                g_120 = (g_495.f2.f3 , p_37);

                ;
            }


            (*l_1052) = (*p_37);
        }

        ;

    }

    ;

    return l_969;



}







static int * func_41(int * p_42, short * p_43, unsigned long long p_44)
{
    unsigned l_962 = 2UL;
    unsigned *l_963 = &g_495.f0;
    unsigned char **l_964 = (void*)0;
    unsigned char ***l_965 = &l_964;
    g_29.f2.f2 = (((*p_42) > ((+0xF2L) | p_44)) , ((((*l_963) = ((**g_219) | (!(g_739 = l_962)))) | p_44) && 9L));
    (*p_42) = (*p_42);
    (*l_965) = l_964;
    return &g_28;


}







static struct S2 func_46(int p_47, unsigned long long p_48)
{
    int l_398 = 0x34354BBBL;
    unsigned l_399 = 4294967286UL;
    short *l_400 = &g_29.f2.f4;
    const int *l_402 = (void*)0;
    long long *l_414 = (void*)0;
    int l_417 = 0xB7DF1405L;
    struct S2 l_437 = {0UL,2UL,{0x4FDC0475L,{-182,-0,4240,1074,1,-1},2L,0xE5L,0x65FBL,-2L,0x75L,0L}};
    short l_446 = 0x8275L;
    struct S2 * const **l_467 = &g_196;
    struct S2 * const ***l_466 = &l_467;
    int *l_510 = &g_495.f2.f2;
    unsigned l_532 = 18446744073709551608UL;
    struct S0 *l_533 = &g_495.f2.f1;
    unsigned long long *** const l_574 = &g_219;
    unsigned short l_640 = 0UL;
    struct S1 *l_643 = &g_495.f2;
    char *l_686 = &g_519.f6;
    unsigned short l_734 = 9UL;
    unsigned long long *l_741 = (void*)0;
    unsigned char l_744 = 0x21L;
    const short *l_873 = &g_25;
    unsigned l_904 = 1UL;
    short *l_956 = &g_29.f2.f4;
    int *l_957 = &g_115.f2;
    short *l_958 = &g_25;
    if (((safe_rshift_func_uint8_t_u_s(l_398, 1)) | p_47))
    {
        int *l_401 = &g_391;
        int **l_403 = &l_401;
        unsigned char ***l_404 = (void*)0;
        int *l_407 = (void*)0;
        const unsigned long long *l_410 = &g_151;
        const unsigned long long **l_409 = &l_410;
        const unsigned long long ***l_408 = &l_409;
        struct S2 l_413 = {0UL,8UL,{0L,{-211,1,-6878,3930,-3,0},0x2AB1E9F3L,5L,6L,1L,0x76L,0xC31A9D30L}};
        long long *l_418 = &g_211;
        struct S0 *l_441 = (void*)0;
        unsigned short *l_453 = &g_139;
        short *l_456 = &l_446;
        struct S2 ***l_542 = &g_541;
        const struct S2 * const *l_549 = (void*)0;
        struct S1 **l_644 = &l_643;
        struct S0 * const *l_762 = &g_267;
        struct S0 * const **l_761 = &l_762;
        const short *l_797 = &l_413.f2.f4;
        unsigned l_808 = 18446744073709551615UL;
        if (((*g_120) = (l_399 <= func_55(((*l_403) = func_58(l_400, l_401, (g_29.f2 , &g_25), l_402, &g_25)), &g_25))))
        {
            unsigned char ****l_405 = &l_404;
            int l_406 = 0L;
            long long **l_415 = (void*)0;
            long long **l_416 = &l_414;
            struct S2 *l_426 = &g_29;
            short *l_438 = &l_437.f2.f4;
            struct S0 l_449 = {118,1,5793,-3325,-9,0};
            l_406 = (&g_226 == ((*l_405) = l_404));
            (**l_403) = p_47;
            if (((((p_47 , l_418) != (void*)0) , 0UL) || (**g_219)))
            {
                (*l_403) = (void*)0;

                ;
            }
            else
            {
                unsigned char l_424 = 1UL;
                int *l_427 = &l_406;
                struct S0 **l_442 = (void*)0;
                struct S0 **l_443 = &g_267;
                struct S0 **l_444 = (void*)0;
                struct S0 **l_445 = &l_441;
                struct S1 l_447 = {-4L,{-220,1,-6179,4053,0,1},0L,1L,0x6D06L,0xA26BFCB9L,-7L,1L};
                struct S2 *l_448 = &g_29;
                unsigned *l_450 = &l_437.f0;
                int **l_451 = &l_407;
                unsigned char *l_452 = &l_424;
                short *l_457 = &l_437.f2.f4;
                for (g_29.f2.f5 = 0; (g_29.f2.f5 != 29); g_29.f2.f5 = safe_add_func_uint16_t_u_u(g_29.f2.f5, 3))
                {
                    int l_423 = (-3L);
                    struct S2 *l_425 = (void*)0;
                    unsigned short l_432 = 65529UL;
                    if ((**l_403))
                    {
                        return (*g_197);
                    }
                    else
                    {
                        const short *l_428 = &g_102;
                        unsigned *l_431 = &l_399;
                        (**l_403) = (safe_sub_func_int8_t_s_s(l_423, l_424));
                        (*l_403) = &g_391;

                        ;
                        (*l_403) = &l_417;

                        ;
                    }

                    ;
                    return l_437;
                }
                (*l_403) = &g_28;

                ;
                (*l_451) = ((*l_403) = &l_406);

                ;
                ;
                (*l_403) = func_58(((p_47 & 5UL) , l_456), &l_406, l_457, &g_28, &l_446);

                ;
            }

            ;
            ;
        }
        else
        {
            unsigned long long l_458 = 0xDE7E58345F794976LL;
            const unsigned long long ***l_459 = &l_409;
            int *l_489 = &l_413.f2.f2;
            const short *l_490 = (void*)0;
            struct S0 **l_498 = &g_267;
            struct S2 l_513 = {0xA9BB5F4DL,7UL,{0L,{10,0,9781,2623,-1,1},-2L,0x17L,-9L,0x1F35FD18L,6L,0xF62EF876L}};
            unsigned long long ***l_568 = &g_219;
            unsigned long long l_575 = 0x2FC89B09F8D3022DLL;
            long long *l_580 = &g_211;
            unsigned long long l_618 = 0x90E3CE15F5926D70LL;
            short **l_624 = &l_400;
            short ***l_623 = &l_624;
            if (((l_458 , &l_409) != (((*g_120) = (*g_120)) , l_459)))
            {
                long long l_462 = 0x7A87111CFF33B2ACLL;
                int *l_481 = &g_29.f2.f2;
                short *l_493 = &l_446;
                struct S2 *l_494 = &g_495;
                char l_501 = (-1L);
                struct S1 *l_515 = &g_29.f2;
                struct S2 **l_538 = &g_197;
                struct S2 ***l_537 = &l_538;
lbl_470:
                for (l_413.f2.f0 = 22; (l_413.f2.f0 == (-8)); --l_413.f2.f0)
                {
                    unsigned char *l_464 = &g_465;
                    (*l_401) = ((((g_10 = (l_462 , (p_47 < l_462))) | ((l_437.f2.f1 , g_463) , ((*l_464) = p_48))) == ((((*l_453) = l_458) , (((void*)0 != (*g_226)) , l_466)) != (void*)0)) >= (-6L));
                }
                for (l_399 = (-9); (l_399 == 2); l_399 = safe_add_func_uint8_t_u_u(l_399, 6))
                {
                    const short *l_475 = &g_102;
                    const short **l_474 = &l_475;
                    long long l_480 = (-7L);
                    int l_491 = 0xDEB9FCCEL;
                    if (l_437.f0)
                        goto lbl_470;
                    if (((safe_mod_func_uint8_t_u_u((p_48 ^ (&g_24 != (l_474 = g_473))), (func_55(l_481, &l_446) , l_458))) & p_48))
                    {
                        int *l_482 = &g_28;
                        (*l_403) = l_482;

                        ;
                        (*l_401) = (2L > p_47);
                        (*g_120) = (safe_rshift_func_int16_t_s_s(p_48, ((*g_24) | 0xFCE8L)));
                        if (g_463.f3)
                            goto lbl_470;
                    }
                    else
                    {
                        unsigned char *l_492 = &g_465;
                        (*g_120) = 0xF643539FL;
                        if ((*g_120))
                            continue;
                        l_489 = func_58(((safe_lshift_func_int16_t_s_u((((l_491 = (safe_rshift_func_uint16_t_u_s(p_48, 8))) , ((*l_492) = ((0x27L & 7UL) || p_47))) | p_47), 10)) , &g_25), ((*l_403) = l_489), &g_25, l_481, &g_25);

                        ;
                        ;
                        l_494 = &l_413;

                        ;
                    }

                    ;
                    if ((*g_120))
                        break;
                }
                (*l_401) = ((&g_267 == ((safe_add_func_int16_t_s_s(0x6957L, p_47)) , l_498)) ^ (safe_add_func_int16_t_s_s(l_501, (safe_mul_func_uint16_t_u_u(((((void*)0 != g_504) == 8L) >= (**l_403)), (*l_401))))));
                if (func_55(l_481, &l_446))
                {
                    struct S0 l_511 = {187,-1,-10512,-3997,1,-0};
                    int *l_543 = &l_413.f2.f2;
                    struct S2 **l_548 = &l_494;
                    l_510 = &g_28;

                    ;
                    (*l_403) = (l_511 , l_489);

                    ;
                    if (g_512)
                    {
                        struct S2 **l_514 = &l_494;
                        struct S1 **l_516 = &l_515;
                        struct S1 **l_517 = (void*)0;
                        struct S1 *l_518 = &g_519;
                        int **l_521 = (void*)0;
                        (*l_514) = (l_513 , (void*)0);

                        ;
                        l_518 = ((*l_516) = l_515);

                        ;
                        (*l_510) = ((*l_481) = ((p_48 = (safe_unary_minus_func_int64_t_s(0x25A25E03C7CD151ALL))) > (&l_481 != l_521)));
                    }
                    else
                    {
                        int *l_522 = &l_437.f2.f2;
                        int *l_529 = &g_391;
                        short *l_534 = (void*)0;
                        struct S2 ****l_539 = &l_537;
                        const struct S2 * const **l_550 = &l_549;
                        unsigned *l_551 = (void*)0;
                        unsigned *l_552 = &l_399;
                        unsigned long long *l_559 = &l_458;
                        struct S2 **l_560 = &l_494;
                        (*l_489) = (((**l_403) , (p_47 , 4L)) , p_47);
                        (*l_403) = l_543;

                        ;
                        (*g_120) = (safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((!((~((*l_552) = (l_548 != ((*l_550) = ((*l_510) , l_549))))) < ((safe_sub_func_int16_t_s_s(((((**g_219) != ((*l_559) = (((**l_498) , &l_418) != (((*l_489) = (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((*l_543), 0xDB5EL)) >= (0x4089L ^ (*g_24))), p_48))) , (void*)0)))) > (*l_522)) <= g_519.f1.f4), 0L)) | p_48))), 0xAE7F23507526F2B3LL)), (**g_219)));
                        (*l_560) = (***l_466);

                        ;
                    }

                    ;
                    (*g_120) = func_55(l_481, l_456);
                }
                else
                {
                    unsigned long long l_565 = 1UL;
                    unsigned *l_566 = &g_495.f0;
                    int l_567 = 1L;
                    unsigned long long ****l_569 = &l_568;
                    int l_589 = 0xF55BF525L;
                    (*l_489) = (((((func_55(&l_417, l_493) <= p_48) != l_565) ^ 9L) , &g_267) == l_498);
                    (*l_403) = &g_28;

                    ;
                    if (((*g_197) , ((p_48 ^ p_48) , l_575)))
                    {
                        return (**g_541);
                    }
                    else
                    {
                        (*l_403) = (void*)0;

                        ;
                        (*l_403) = l_481;

                        ;
                    }

                    ;
                    for (l_413.f0 = 0; (l_413.f0 == 14); l_413.f0 = safe_add_func_int16_t_s_s(l_413.f0, 5))
                    {
                        unsigned long long l_578 = 0UL;
                        const long long *l_579 = &g_211;
                        if (l_578)
                            break;
                        (*l_403) = (void*)0;

                        ;
                        (*g_120) = (l_579 != (l_513.f2 , l_580));
                        (*l_489) = ((**g_219) > ((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((*l_481) = (*g_120)), 0x09D5741AL)), (l_589 | (**g_219)))), (*l_489))), 4)) > g_29.f2.f1.f0));
                    }

                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                unsigned l_593 = 0x1B78876DL;
                int *l_595 = (void*)0;
                int l_641 = 0L;
                if ((p_47 , (*g_120)))
                {
                    unsigned l_592 = 0xDD5B7979L;
                    short **l_594 = &l_456;
                    char *l_611 = &g_288;
                    for (g_29.f2.f6 = 0; (g_29.f2.f6 < 23); g_29.f2.f6 = safe_add_func_int32_t_s_s(g_29.f2.f6, 6))
                    {
                        (*l_403) = &l_417;

                        ;
                        (*l_401) = (*l_489);
                    }

                    ;
                    (*l_403) = l_595;

                    ;
                    if ((g_463.f5 < ((*l_489) , p_47)))
                    {
                        const struct S0 *l_597 = &g_463;
                        const struct S0 **l_596 = &l_597;
                        const struct S0 ***l_608 = &l_596;
                        int l_609 = 0x8DAF15B8L;
                        (*l_596) = &g_463;
                        (*l_510) = (safe_mod_func_uint16_t_u_u((p_48 >= ((safe_mul_func_uint16_t_u_u((*l_510), (safe_mod_func_int8_t_s_s(((((*g_220) = 0xAEFFAAB6FD1A23C9LL) && 0xAFE2C6A5E0B7027ELL) , (p_48 , ((safe_mul_func_int16_t_s_s((*g_24), ((+(((*l_608) = g_606) != ((g_29.f2.f1.f5 > (l_609 , (*g_120))) , &l_441))) , 0xC2C8L))) , g_29.f2.f1.f5))), l_592)))) != g_211)), (*g_24)));

                        ;
                    }
                    else
                    {
                        char l_610 = (-4L);
                        char *l_613 = &g_495.f2.f6;
                        char **l_612 = &l_613;
                        (*g_120) = ((*l_489) , (l_610 = p_47));
                        (*l_403) = &g_28;

                        ;
                        return (***l_542);
                    }
                    for (g_512 = (-29); (g_512 != 52); ++g_512)
                    {
                        const short *l_621 = &g_25;
                        unsigned short ***l_622 = &g_156;
                        (*g_120) = (7L || p_48);
                        (*l_489) = func_55(((*g_220) , &g_28), l_621);
                        (*l_622) = &l_453;

                        ;
                    }

                    ;
                }
                else
                {
                    int *l_629 = &g_495.f2.f2;
                    unsigned char *l_642 = &g_512;
                    (*g_120) = ((void*)0 != l_623);
                    (*g_120) = (((*l_642) = ((0x43D6L & (safe_rshift_func_int8_t_s_s(((~(safe_lshift_func_uint8_t_u_s((func_55(l_629, (**l_623)) , (1L ^ ((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((p_47 ^ (safe_mul_func_uint8_t_u_u(p_47, (safe_lshift_func_int16_t_s_s(p_48, 9))))), 3)) , (safe_mod_func_int8_t_s_s((p_48 == l_640), (*l_629)))), l_641)) <= p_47))), p_47))) | g_29.f2.f7), g_151))) >= (*l_489))) | (*l_401));
                }

                ;
                ;
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;

        ;
        (*l_403) = (*l_403);
lbl_675:
        (*l_644) = l_643;
        if ((*g_120))
        {
            const short *l_658 = &g_102;
            int l_666 = 0x0B996E9CL;
            struct S2 l_667 = {1UL,18446744073709551615UL,{5L,{-68,-0,-9024,2869,-7,-1},-5L,0x73L,0x0C62L,0x8CD8AD79L,0x37L,0xF28D7F4BL}};
            const long long *l_721 = &g_211;
            const long long **l_720 = &l_721;
            unsigned long long l_755 = 18446744073709551615UL;
            int *l_775 = &g_495.f2.f2;
            short **l_786 = &l_400;
            short **l_787 = &g_24;
            short **l_788 = &g_505;
            short **l_789 = (void*)0;
            short *l_791 = (void*)0;
            short **l_790 = &l_791;
            const int *l_792 = &g_29.f2.f7;
            for (g_10 = 0; (g_10 >= 31); ++g_10)
            {
                char *l_657 = &g_495.f2.f6;
                int l_659 = 1L;
                struct S2 l_665 = {1UL,8UL,{-1L,{-45,-0,12601,1159,-0,-1},1L,0L,0x5B10L,0x9478469EL,3L,0x0BA9D071L}};
                (*g_120) = (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((func_55((((0x3525C1F6L <= (safe_lshift_func_int8_t_s_u(((*l_657) = (safe_lshift_func_uint8_t_u_s((+(safe_lshift_func_int8_t_s_u(g_104, 2))), (p_48 >= 0x47A34AC26EF13718LL)))), 2))) == p_47) , &g_28), l_658) & l_659) != p_48) ^ g_115.f2), p_47)), 0xEFL));
                for (g_495.f0 = 27; (g_495.f0 != 51); g_495.f0++)
                {
                    char l_662 = (-4L);
                    unsigned *l_663 = (void*)0;
                    unsigned *l_664 = &g_29.f0;
                    (*l_403) = (*l_403);
                    if ((((*l_664) = (p_48 >= l_662)) != (((*l_453) = p_48) || p_48)))
                    {
                        return l_665;


                    }
                    else
                    {
                        (*l_403) = &g_28;

                        ;
                        if (l_666)
                            continue;
                        if ((*g_120))
                            break;
                        return l_667;


                    }
                }
                for (g_25 = 9; (g_25 < 23); g_25++)
                {
                    (*g_120) = p_47;
                }
            }
            if ((*g_120))
            {
                unsigned char l_670 = 252UL;
                char *l_685 = &g_288;
                int *l_689 = &l_413.f2.f2;
                const short *l_708 = &g_519.f4;
                if (l_670)
                {
                    long long *l_673 = &g_211;
                    long long **l_674 = &l_418;
                    (*g_606) = ((safe_lshift_func_int8_t_s_s((l_673 != ((*l_674) = l_673)), 7)) , l_533);

                    ;
                    (*l_403) = &l_417;

                    ;
                }
                else
                {
                    unsigned short l_688 = 0xE193L;
                    char *l_699 = &l_437.f2.f6;
                    short *l_707 = (void*)0;
                    if (g_463.f5)
                        goto lbl_675;
                    if (((*l_510) = ((*g_120) == p_47)))
                    {
                        char **l_687 = &l_686;
                        int l_701 = 0x44DF5712L;
                        (*l_510) = (p_48 | p_48);
                        (*l_403) = l_689;

                        ;
                        (*l_401) = (safe_unary_minus_func_uint16_t_u(((((*g_120) = (0x74353DB959A32829LL <= (1L < ((safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_699 != ((*l_687) = &g_288)), 7)), l_688)), 0x09L)), ((g_29.f2 , p_47) | (g_10 = (safe_unary_minus_func_uint8_t_u((65533UL == (**l_403)))))))) & (-1L))))) == l_667.f1) & l_701)));

                        ;
                        (*l_403) = &l_417;

                        ;
                    }
                    else
                    {
                        const short **l_706 = &l_658;
                        unsigned *l_711 = &l_413.f0;
                        (*l_403) = &g_391;

                        ;
                        (**l_403) = ((*g_120) = (((safe_mul_func_uint8_t_u_u(p_48, (safe_sub_func_int64_t_s_s(p_47, (&g_120 != (void*)0))))) != func_55(l_689, l_453)) & (*g_120)));
                        (*l_689) = (g_29.f2.f6 > ((*l_686) = ((((safe_rshift_func_int8_t_s_s(((void*)0 == l_711), 0)) <= (-9L)) >= p_48) , p_47)));
                    }

                    ;
                    ;
                    (*l_403) = l_689;

                    ;
                }

                ;
                ;
                ;
                (**l_542) = (**g_540);
                (**l_403) = 0L;
            }
            else
            {
                unsigned l_725 = 1UL;
                struct S2 l_752 = {0xF2905774L,18446744073709551615UL,{0x08926F77L,{-226,1,-10263,1959,7,-1},1L,3L,-10L,9L,-7L,0xFC32A4DEL}};
                struct S0 **l_758 = (void*)0;
                struct S0 ***l_757 = &l_758;
                const struct S0 ***l_763 = &g_606;
                int **l_768 = &l_510;
                const short *l_772 = (void*)0;
                short *l_773 = &g_519.f4;
                if (((**g_219) , ((g_718 = g_718) != (g_102 , l_720))))
                {
                    unsigned long long l_724 = 0xA00D2F99CA2027F2LL;
                    int *l_735 = &g_29.f2.f2;
                    l_725 = (safe_lshift_func_uint8_t_u_s(l_724, ((*l_686) = 0x17L)));
                    (*l_735) = ((*g_120) = ((((p_48 || (safe_add_func_int8_t_s_s(g_519.f5, (l_667.f2 , (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((*l_456) = p_47), ((*g_24) = p_47))), ((safe_rshift_func_int8_t_s_u((g_115.f0 , ((l_724 & ((***l_574) = (*g_220))) || (g_139 ^ 0xF6L))), p_48)) == p_48))))))) || l_734) | p_48) ^ 0x1906L));
                }
                else
                {
                    unsigned l_736 = 0x75744F19L;
                    int l_747 = 0x2C11E371L;
                    if ((l_736 || l_725))
                    {
                        unsigned *l_737 = &g_495.f0;
                        unsigned long long **l_740 = (void*)0;
                        int l_745 = 0L;
                        (*l_510) = ((((void*)0 != &l_667) ^ ((l_667.f2.f1.f5 = ((***l_574) = (*g_220))) != (p_47 ^ ((((*l_737) = g_115.f7) & 0x4784C0AAL) >= (l_725 , ((g_738 = (**l_574)) == (l_741 = &p_48))))))) >= l_736);

                        ;
                        ;
                        if (g_211)
                            goto lbl_756;
                        (*g_120) = (p_47 , (l_745 = ((l_725 | (((safe_rshift_func_uint16_t_u_u((l_667.f2.f3 , ((*l_453) = (((*l_737) = (g_25 & (*g_120))) || (g_519 , l_666)))), l_744)) , ((*g_220) == (**g_718))) < 6UL)) | (-3L))));
                        (*g_120) = (l_745 & ((g_102 != ((l_747 = (safe_unary_minus_func_int16_t_s(((*g_197) , 0L)))) != p_47)) ^ ((**g_718) = ((p_47 == (((*g_606) != (void*)0) != (safe_rshift_func_uint16_t_u_s(p_48, 8)))) <= 0x8BL))));
                    }
                    else
                    {
                        (*l_644) = (void*)0;

                        ;
                        (*g_606) = (*g_606);
                        (*l_403) = &g_391;

                        ;
                        return (**g_196);


                    }

                    ;
                    ;
                    (*g_120) = 0x3CB6FFEAL;
                    for (l_667.f2.f6 = 29; (l_667.f2.f6 > (-27)); l_667.f2.f6 = safe_sub_func_uint8_t_u_u(l_667.f2.f6, 3))
                    {
                        if (l_667.f2.f2)
                            break;
                        (*l_403) = &g_28;

                        ;
                    }
                    (*l_403) = &l_666;

                    ;
                }

                ;
                ;
                ;
lbl_756:
                (*l_403) = ((*l_533) , &g_28);

                ;
                (*l_757) = &l_533;

                ;
                for (l_417 = 14; (l_417 <= (-17)); --l_417)
                {
                    const struct S0 ****l_764 = &l_763;
                    int l_770 = (-1L);
                    struct S2 *l_779 = &g_29;
                }
            }

            ;
            ;
            ;
            ;
            ;
            (*l_403) = func_58(l_456, &l_666, &g_25, &l_417, (*l_790));

            ;
        }
        else
        {
            int l_802 = 0x12FC46B5L;
            const short *l_807 = &l_413.f2.f4;
            unsigned char *l_813 = &g_512;
            int l_818 = 8L;
            (*g_120) = (4294967291UL > (*l_510));
            (*l_510) = (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((func_55(&g_391, l_797) || 1L), ((0xF6L < ((safe_add_func_int64_t_s_s(p_47, ((safe_sub_func_int8_t_s_s((*l_510), ((((**g_541) , (p_47 , 0xFCL)) & p_48) != p_47))) && g_495.f2.f6))) || l_802)) < (*g_24)))) & g_262), p_48));
            (*l_403) = &l_417;

            ;
            if ((6L && (p_47 | (safe_sub_func_uint64_t_u_u(((l_802 == (safe_sub_func_int8_t_s_s(((void*)0 == l_813), p_48))) ^ (safe_lshift_func_uint16_t_u_s(p_48, (*l_401)))), 0xBA5BA72A7F3C630FLL)))))
            {
                (**l_542) = (**l_542);
                (*l_403) = &g_391;

                ;
            }
            else
            {
                l_818 = (p_47 , ((*g_120) = (safe_add_func_uint16_t_u_u(0x5C38L, p_48))));
            }

            ;
        }

        ;
        ;
        ;
        ;
        ;
    }
    else
    {
        unsigned long long l_819 = 1UL;
        int l_820 = 0xF95D5A1DL;
        const char *l_844 = &g_288;
        const char **l_843 = &l_844;
        const short *l_860 = &g_102;
        unsigned char *l_912 = &g_10;
        unsigned char **l_911 = &l_912;
        struct S0 l_949 = {-341,1,9532,1078,4,1};
        int *l_950 = &g_29.f2.f2;
        unsigned *l_951 = (void*)0;
        unsigned *l_952 = &l_532;
        short *l_953 = &g_495.f2.f4;
        int **l_954 = &g_120;
        short **l_955 = &g_24;
        short **l_959 = &l_958;
lbl_889:
        l_820 = ((*g_120) = (l_819 | p_47));
        for (g_115.f0 = 0; (g_115.f0 <= (-5)); g_115.f0 = safe_sub_func_int16_t_s_s(g_115.f0, 3))
        {
            short *l_825 = (void*)0;
            struct S2 l_833 = {4294967286UL,0x9FDCC05EL,{0xDE240CCBL,{285,-0,2829,3003,-1,-1},1L,0x39L,0xF66DL,-10L,0xE2L,0xD52023B6L}};
            short l_847 = 0x3970L;
            if (((safe_rshift_func_int8_t_s_s(p_47, 6)) > p_47))
            {
                const int **l_826 = &l_402;
                (*l_826) = func_58(&g_25, &l_820, l_825, ((*l_826) = &l_820), &g_25);

                ;
            }
            else
            {
                short *l_840 = &l_446;
                char **l_842 = &l_686;
                int l_845 = 0xE640121EL;
                char l_864 = 0x8AL;
                unsigned char l_865 = 0xF9L;
                struct S2 *l_877 = &l_833;
                if (((safe_mod_func_int16_t_s_s((l_845 = (((((*l_510) = ((((*l_400) = (safe_sub_func_uint32_t_u_u(g_115.f3, ((*g_120) = (safe_lshift_func_int16_t_s_u((l_833 , (safe_mul_func_int16_t_s_s((*g_24), (safe_rshift_func_uint16_t_u_u(p_48, l_833.f2.f6))))), 14)))))) || ((*l_840) = (((*l_643) , l_820) ^ (safe_mul_func_int8_t_s_s((&l_446 == l_840), g_841))))) > p_47)) , l_842) != l_843) , p_48)), (*g_24))) <= p_48))
                {
                    (*g_120) = (~(p_48 > g_495.f2.f0));
                    (*g_120) = p_47;
                    (*g_120) = 1L;
                    return (***g_540);
                }
                else
                {
                    unsigned char l_855 = 0x25L;
                    if (((g_846 & func_55(&g_841, &l_446)) | (l_847 = (-5L))))
                    {
                        return l_833;
                    }
                    else
                    {
                        unsigned *l_850 = (void*)0;
                        unsigned *l_851 = &l_833.f0;
                        const int **l_852 = &l_402;
                        const int *l_854 = (void*)0;
                        const int **l_853 = &l_854;
                        (*l_853) = ((0x82C75CAFL & ((*l_851) = (safe_sub_func_int64_t_s_s((*g_719), l_833.f2.f1.f3)))) , ((*l_852) = &g_841));

                        ;
                        ;
                        if (p_47)
                            continue;
                    }

                    ;
                    if (((l_833.f2.f1.f3 = l_855) , p_48))
                    {
                        const short **l_861 = &l_860;
                        int *l_866 = &g_519.f0;
                        long long *l_874 = &g_875;
                        unsigned *l_876 = &l_532;
                        (*l_510) = (((*l_866) = (safe_rshift_func_uint16_t_u_s((&l_840 == (((safe_mod_func_int64_t_s_s((func_55(&g_391, ((*l_861) = l_860)) , ((0x1806L == (((p_47 , (safe_lshift_func_int16_t_s_s((p_48 ^ func_55(&g_841, ((*l_861) = (l_855 , l_860)))), 14))) < l_855) == 65535UL)) ^ l_864)), (*g_220))) || (*l_510)) , &g_24)), l_865))) , l_819);
                        (*l_510) = (l_833.f2.f4 > (((*g_220) = 0UL) || (safe_lshift_func_int8_t_s_u((p_47 > 0L), (((p_47 ^ 5UL) | (func_55(&l_845, l_873) != l_864)) < (**g_718))))));
                        (*g_120) = (((0xA3E56C6E81CA4F6ALL < ((*l_874) = (l_820 = ((*g_719) = (-1L))))) ^ ((*l_686) = (((((*l_876) = (!p_47)) , l_877) != (void*)0) < func_55(&g_391, &l_847)))) <= (-2L));
                    }
                    else
                    {
                        int **l_883 = &g_120;
                        (*g_120) = (((safe_mul_func_uint16_t_u_u(9UL, p_48)) , (void*)0) != (((void*)0 != g_880) , g_881));
                        (*g_120) = ((*l_510) = 0x8CB3B407L);
                        (*l_883) = &l_417;

                        ;
                        (**l_883) = (*g_120);
                    }

                    ;
                    return (**g_541);


                }
            }

            ;
            for (l_437.f1 = (-30); (l_437.f1 > 56); l_437.f1++)
            {
                for (g_846 = 0; (g_846 == 5); ++g_846)
                {
                    struct S2 **l_888 = &g_197;
                    (*l_888) = (*g_196);
                    if (l_437.f2.f1.f4)
                        goto lbl_889;
                }
            }
            for (l_446 = 0; (l_446 >= 7); ++l_446)
            {
                int l_894 = (-2L);
                unsigned l_899 = 0x55506763L;
                short *l_920 = &l_437.f2.f4;
                int l_921 = 0xEA1FB376L;
                (*l_510) = (*l_402);
                if (((safe_lshift_func_uint16_t_u_u(g_288, 12)) & l_894))
                {
                    unsigned char **l_913 = &l_912;
                    int *l_923 = &g_391;
                    l_833.f2.f1.f3 = (safe_mul_func_int16_t_s_s((((((*g_220) != (((!(*g_120)) || l_899) >= (safe_lshift_func_uint8_t_u_s((((p_47 <= (((g_519.f5 == ((**g_606) , (((((*l_686) = (0L == 0UL)) , ((((0L < l_899) , g_29.f2) , p_47) != p_47)) | l_833.f2.f2) == l_899))) | l_894) , p_48)) != p_48) <= g_495.f2.f5), 2)))) , (void*)0) == g_902) , l_833.f2.f6), p_48));
                    if ((((*g_719) = (*g_719)) < l_904))
                    {
                        char ***l_916 = &g_914;
                        char ***l_917 = (void*)0;
                        char **l_919 = &l_686;
                        char ***l_918 = &l_919;
                        int **l_922 = &g_120;
                        (*g_120) = (7UL == ((*g_738) = (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((g_115.f0 <= (l_911 != l_913)) , (*l_510)), l_847)) > p_47) || ((void*)0 != l_414)), 0xB8F7L)), p_47))));
                        (*l_918) = ((*l_916) = g_914);

                        ;
                        (*l_922) = func_58(l_920, &g_841, &g_25, &l_820, &l_446);

                        ;
                    }
                    else
                    {
                        struct S2 l_940 = {8UL,0x81B79C7CL,{0x971479CBL,{-311,1,-12452,1515,-3,1},0x1C4F3AEBL,9L,0x0719L,0x8798D428L,0xF3L,1L}};
                        unsigned *l_941 = &l_833.f1;
                        if ((*l_402))
                            break;
                        l_923 = &l_921;

                        ;
                        if ((*g_120))
                            continue;
                        (*g_120) = (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((+(safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(p_48, 4)), (safe_add_func_int16_t_s_s(p_47, ((**g_196) , ((*l_920) = ((*g_738) < (((!l_847) < (((((**g_718) = (safe_add_func_int16_t_s_s((*l_510), (((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((l_940 , ((*l_941) = l_819)) , ((safe_lshift_func_uint16_t_u_s(0UL, p_47)) || (*g_738))), 0UL)), 0xF1L)) != (-7L)) | l_940.f2.f7)))) > 0x23DCEEAAF5AAF89DLL) ^ (*l_923)) == g_944)) , l_820))))))))) <= g_104), p_47)), (*l_923)));
                    }

                    ;
                }
                else
                {
                    if (g_29.f2.f1.f4)
                        goto lbl_889;
                }
            }
        }

        ;
        (*l_954) = func_58((((*l_952) = (func_55(((*g_267) , l_950), &l_446) & 0UL)) , l_953), &l_417, &g_25, &l_820, l_953);

        ;
        (*l_954) = func_58(((*l_955) = (l_400 = l_953)), &g_841, ((*l_959) = l_958), &l_417, &g_25);

        ;
        ;
    }

    ;
    ;

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    return (***l_467);
}







static short func_55(int * p_56, const short * p_57)
{
    (*p_56) = (*p_56);
    return (*p_57);
}







static int * func_58(short * p_59, int * p_60, short * p_61, const int * p_62, short * p_63)
{
    int *l_395 = &g_115.f2;
    for (g_29.f2.f6 = (-10); (g_29.f2.f6 < 12); ++g_29.f2.f6)
    {
        unsigned long long l_394 = 18446744073709551615UL;
        (*g_120) = ((*p_60) = l_394);
    }
    return l_395;


}







static short * func_64(unsigned char p_65, long long p_66, short p_67)
{
    char l_88 = 0x5EL;
    struct S0 l_97 = {77,-1,3385,-1680,7,1};
    const short *l_98 = &g_29.f2.f4;
    const short **l_99 = &l_98;
    const short *l_101 = &g_102;
    const short **l_100 = &l_101;
    unsigned short *l_103 = &g_104;
    unsigned char *l_105 = &g_10;
    int **l_386 = &g_120;
    short *l_389 = &g_115.f4;
    (*l_386) = func_82(l_88, &g_25, (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_66, g_29.f2.f1.f0)), p_66)), ((safe_mod_func_uint8_t_u_u(((*l_105) = ((safe_sub_func_int64_t_s_s(((l_97 , (*g_24)) && ((*l_103) = (l_97.f2 = (((*l_99) = l_98) != ((*l_100) = &p_67))))), g_29.f2.f0)) , 0xEBL)), g_29.f2.f1.f3)) < p_65), g_29.f2.f1.f4);

    ;
    ;
    for (g_211 = 0; (g_211 == 19); g_211++)
    {
        (*g_120) = p_67;
        if (p_67)
            continue;
    }
    (*g_120) = (**l_386);
    return l_389;


}







static int * func_82(long long p_83, short * p_84, unsigned p_85, int p_86, int p_87)
{
    unsigned l_108 = 4294967294UL;
    short **l_113 = &g_24;
    unsigned char *l_114 = &g_10;
    int l_118 = 3L;
    int *l_124 = &g_29.f2.f2;
    const int l_125 = 0xDDFB24A3L;
    unsigned short *l_154 = &g_104;
    unsigned short **l_153 = &l_154;
    int l_188 = 3L;
    short l_193 = 3L;
    unsigned char *l_208 = (void*)0;
    int *l_212 = &g_29.f2.f2;
    struct S2 **l_236 = &g_197;
    unsigned long long * const l_260 = &g_151;
    struct S0 *l_289 = &g_115.f1;
    const struct S1 l_299 = {6L,{123,-0,561,1284,9,-0},1L,0L,0x4982L,0x0E208611L,0x48L,0L};
    unsigned char * const *l_314 = &l_208;
    unsigned char * const **l_313 = &l_314;
    unsigned char **l_347 = &l_208;
    unsigned char ***l_346 = &l_347;
    char l_371 = 0L;
    int **l_385 = &l_212;
    if (((safe_rshift_func_uint8_t_u_u(((l_108 & (((l_118 = (l_108 ^ ((safe_mul_func_int16_t_s_s((g_29.f2.f4 = (safe_add_func_int64_t_s_s((&g_24 == l_113), l_108))), (((*l_114) = 255UL) > g_25))) ^ (g_115 , (safe_add_func_uint16_t_u_u(g_115.f1.f2, (*g_24))))))) , (*l_113)) != &g_25)) && 0xE4L), g_115.f1.f5)) | (-1L)))
    {
        int *l_119 = &g_29.f2.f2;
        short **l_131 = &g_24;
        short **l_132 = &g_24;
        struct S1 l_142 = {0xAB8F0384L,{228,1,-14213,-384,-5,-1},-1L,-10L,0x2115L,0L,0xB1L,-7L};
        struct S2 *l_192 = &g_29;
        struct S2 **l_191 = &l_192;
        unsigned long long *l_218 = (void*)0;
        unsigned long long **l_217 = &l_218;
        unsigned long long ***l_221 = &g_219;
        long long l_232 = 0xB264947CCC286839LL;
        int **l_240 = &g_120;
        g_120 = l_119;

        ;
        if (l_108)
        {
            (*g_120) = (*g_120);
        }
        else
        {
            int *l_123 = &g_115.f2;
            int *l_180 = (void*)0;
            for (g_104 = (-24); (g_104 != 5); g_104 = safe_add_func_uint16_t_u_u(g_104, 5))
            {
                unsigned long long l_133 = 1UL;
                short **l_143 = &g_24;
                int l_144 = 7L;
                int *l_152 = &g_29.f2.f2;
                unsigned l_163 = 1UL;
                struct S2 *l_213 = &g_29;
                struct S1 l_214 = {0x486D1CC4L,{-13,1,11569,-2146,-5,-0},2L,0x13L,-2L,-6L,0L,6L};
            }
        }
        if ((l_217 != ((*l_221) = g_219)))
        {
            int **l_222 = &l_119;
            (*l_222) = &g_28;

            ;
        }
        else
        {
            unsigned char ***l_223 = (void*)0;
            unsigned char **l_225 = &l_208;
            unsigned char ***l_224 = &l_225;
            const int l_228 = 0xDBC68AE5L;
            char *l_229 = (void*)0;
            char *l_230 = (void*)0;
            char *l_231 = &g_29.f2.f6;
            if ((((*l_231) = (!(((((*l_224) = &l_208) == g_226) ^ l_228) >= l_228))) && (g_10 = (!l_232))))
            {
                int **l_233 = &l_119;
                const int *l_235 = &l_142.f7;
                const int **l_234 = &l_235;
                (*l_233) = l_119;
                (*l_234) = &l_228;

                ;
            }
            else
            {
                struct S2 **l_237 = &l_192;
                struct S2 ***l_238 = &l_191;
                int **l_239 = &l_119;
                (*g_120) = (l_236 != l_237);
                (*l_238) = &g_197;

                ;
                (*l_239) = &g_28;

                ;
            }

            ;
            ;
        }

        ;
        ;
        (*l_240) = &g_28;

        ;
    }
    else
    {
        unsigned char l_243 = 0xAEL;
        unsigned long long l_249 = 18446744073709551615UL;
        int l_253 = 0xD1AFC2CCL;
        int l_263 = (-1L);
        struct S2 **l_300 = &g_197;
        int **l_317 = &l_124;
        if ((safe_sub_func_uint8_t_u_u(p_85, l_243)))
        {
            int **l_244 = &l_124;
            unsigned short *l_251 = &g_139;
            unsigned short **l_250 = &l_251;
            unsigned short *l_252 = &g_139;
            unsigned short *l_261 = &g_262;
            (*l_244) = &g_28;

            ;
            (*l_124) = ((*g_120) = (((**l_153) = 0x0F78L) <= (l_263 = (safe_mod_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((**l_244) < (g_29.f2.f4 = (*g_24))) , l_249), (((*l_261) = ((l_253 = ((*l_252) = (((*g_156) != ((*l_250) = (*g_156))) < l_249))) && (((*l_114) = (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s(0L, 5)) > ((*g_219) != l_260)), (*l_124))), p_83))) >= (-10L)))) | (*g_24)))) && l_243), p_85)))));

            ;
        }
        else
        {
            int *l_273 = &l_263;
            struct S2 *l_304 = &g_29;
            if (((safe_sub_func_int64_t_s_s(((*g_120) < p_87), 1L)) && (*g_120)))
            {
                int **l_266 = &l_212;
                struct S0 **l_268 = &g_267;
lbl_271:
                (*l_266) = &g_28;

                ;
                (*l_268) = g_267;
                (*g_120) = 0xD0D3D268L;
                for (g_115.f4 = 0; (g_115.f4 >= (-2)); g_115.f4--)
                {
                    if (g_115.f2)
                        goto lbl_271;
                }
            }
            else
            {
                char l_272 = (-1L);
                short ***l_282 = (void*)0;
                int **l_292 = &l_124;
                char l_301 = 0x5EL;
                long long *l_302 = &g_211;
                struct S2 *l_303 = &g_29;
lbl_293:
                if (l_272)
                {
                    int **l_274 = &g_120;
                    (*l_274) = l_273;

                    ;
                    if (p_87)
                        goto lbl_293;
                    if (p_87)
                        goto lbl_291;
                    for (p_83 = 0; (p_83 < (-4)); --p_83)
                    {
                        unsigned long long *l_279 = &l_249;
                        short ***l_283 = &l_113;
                        long long *l_286 = &g_211;
                        int l_287 = 5L;
                        struct S0 **l_290 = &l_289;
                        (*l_274) = (*l_274);
                        (*l_290) = ((g_288 = (safe_sub_func_uint32_t_u_u((((*l_279) = (!(p_85 , ((*g_220) = (*l_124))))) & (safe_sub_func_uint32_t_u_u(((**l_274) == (((l_282 = l_282) == l_283) || ((safe_mul_func_uint8_t_u_u(p_85, (((*l_286) = (!g_115.f1.f5)) > l_287))) && (p_86 >= (*l_212))))), g_29.f2.f7))), l_243))) , l_289);
                        return &g_28;



                    }
                    (*l_273) = (*g_120);
                }
                else
                {
lbl_291:
                    (*l_124) = ((*l_273) = 0x1E4ACED0L);
                    (*l_273) = (-4L);
                    (*l_292) = &g_28;

                    ;
                    return &g_28;



                }

                ;
                (*l_236) = (*l_236);
                (**l_292) = (safe_lshift_func_uint16_t_u_s(((*l_154) = 0xA980L), (safe_unary_minus_func_uint16_t_u((((((*g_220) = (!(~((p_87 , ((0UL & (safe_lshift_func_uint8_t_u_u(0xD9L, 0))) , (l_299 , (void*)0))) != l_300)))) != ((l_301 >= ((((*l_302) = ((*l_273) = ((*g_267) , (*l_273)))) <= (*l_212)) != 0x4CE6L)) & p_87)) && (*g_24)) & 7L)))));
                if ((g_115 , (g_115.f4 , ((g_197 = l_303) != l_304))))
                {
                    struct S2 ***l_312 = &l_236;
                    struct S2 ****l_311 = &l_312;
                    short *l_315 = &g_29.f2.f4;
                    int l_316 = (-1L);
                    l_316 = (safe_lshift_func_int8_t_s_s(((*g_120) , ((l_249 >= (safe_mul_func_int8_t_s_s((**l_292), (((*l_315) = (((**g_219) = (((((*l_212) & ((*l_300) != (void*)0)) , ((((*l_311) = (void*)0) == (void*)0) != (&g_226 == l_313))) > 0UL) , 6UL)) ^ 0x81E0D7E1F17AFA52LL)) != p_85)))) <= l_253)), g_115.f5));

                    ;
                    (*l_212) = p_83;
                    (*l_292) = (*l_292);
                    (*l_273) = (*g_120);
                }
                else
                {
                    int ***l_318 = (void*)0;
                    int ***l_319 = &l_292;
                    (*l_319) = l_317;
                }
            }

            ;
            ;
            (**l_317) = (((*g_120) = (*l_124)) < g_151);
            (*l_317) = &g_28;

            ;
        }

        ;
        ;
        ;
        (*l_317) = (void*)0;

        ;
        for (g_28 = (-4); (g_28 < (-28)); g_28 = safe_sub_func_uint32_t_u_u(g_28, 5))
        {
            (*g_120) = (safe_rshift_func_int8_t_s_s((((*g_24) <= (((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(0x0D59L, ((safe_add_func_uint32_t_u_u((&l_118 != (void*)0), p_87)) == ((*l_260) = (*g_220))))) > p_86), 0)) , (*p_84)) & ((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(0x03L, (*l_212))), (*p_84))) < g_28))) & (*g_120)), g_29.f2.f5));
        }
    }


    ;
    ;
    if (g_29.f2.f1.f1)
    {
        int *l_334 = &g_28;
        return l_334;


    }
    else
    {
        unsigned char ***l_344 = (void*)0;
        const unsigned char *l_351 = &g_10;
        int l_374 = 0L;
        int *l_384 = &l_374;
        (*l_212) = (safe_rshift_func_int8_t_s_u(p_87, (((*l_154) = ((*g_267) , 0UL)) & (*g_24))));
        if (((l_299 , &g_120) == (void*)0))
        {
            int *l_337 = &l_118;
            int **l_338 = &l_337;
            int **l_339 = (void*)0;
            l_212 = l_337;

            ;
            l_212 = ((*l_338) = &l_118);
        }
        else
        {
            struct S1 l_350 = {2L,{87,1,-9711,-192,3,0},6L,0x28L,0L,0x9722A27FL,1L,0xFA8B02A4L};
            if (p_87)
            {
                int **l_340 = &l_124;
                int **l_341 = &g_120;
                unsigned char ****l_345 = &l_344;
                char *l_356 = &g_115.f6;
                char *l_357 = &g_288;
                char *l_358 = &g_29.f2.f6;
                int l_381 = 0x09D9CE96L;
                (*l_341) = ((*l_340) = &g_28);

                ;
                ;
                if ((safe_sub_func_int32_t_s_s(((**l_341) = (*l_124)), ((((*l_345) = l_344) != l_346) > ((safe_mul_func_uint16_t_u_u(((l_350 , (((l_351 != (void*)0) & ((*l_358) = ((!(((*l_357) = ((*l_356) = (p_83 == (p_87 , ((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(0x20L, p_86)), 0x07L)) < p_85) , l_350.f6) , 0x46E239703B1655B8LL))))) < 0xBCL)) != 1L))) | l_125)) == p_85), 0L)) & (-7L))))))
                {
                    (*l_212) = l_350.f1.f3;
                    for (p_83 = 0; (p_83 > (-22)); p_83 = safe_sub_func_int32_t_s_s(p_83, 9))
                    {
                        struct S2 **l_361 = &g_197;
                        (*l_361) = (*g_196);
                    }
                }
                else
                {
                    unsigned *l_369 = &l_108;
                    int l_370 = 0x20A5E3A9L;
                    int *l_382 = &l_374;
                    for (g_288 = 6; (g_288 > (-22)); g_288 = safe_sub_func_uint32_t_u_u(g_288, 4))
                    {
                        (*g_120) = ((**l_341) | (safe_add_func_uint32_t_u_u(g_29.f2.f1.f1, p_86)));
                        (*l_212) = (safe_unary_minus_func_uint32_t_u((&p_83 == (void*)0)));
                        (*l_341) = &g_28;
                    }
                    (*l_382) = (((void*)0 != &g_28) != (safe_mul_func_int16_t_s_s(((((*l_369) = 1UL) && ((l_371 = ((*l_212) = l_370)) & ((safe_sub_func_uint8_t_u_u(((*p_84) <= l_374), (safe_sub_func_int16_t_s_s(((l_370 ^ (((((safe_rshift_func_uint8_t_u_s((((*l_114) = (safe_lshift_func_int16_t_s_s(((0xF744903FL | (g_10 ^ p_83)) < l_350.f5), 7))) > 0x94L), 3)) , p_86) || 0x05F7048AL) , p_87) && 0x1AL)) && (*g_24)), (*p_84))))) <= (*p_84)))) ^ l_370), l_381)));
                }
            }
            else
            {
                int **l_383 = &g_120;
                (*l_383) = &g_28;

                ;
                (**l_383) = 4L;
            }

            ;
            ;
        }

        ;
        ;
        g_120 = &l_118;

        ;
        l_384 = &l_374;
    }

    ;
    ;
    ;
    (*l_385) = &g_28;

    ;
    return &g_28;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29.f0, "g_29.f0", print_hash_value);
    transparent_crc(g_29.f1, "g_29.f1", print_hash_value);
    transparent_crc(g_29.f2.f0, "g_29.f2.f0", print_hash_value);
    transparent_crc(g_29.f2.f1.f0, "g_29.f2.f1.f0", print_hash_value);
    transparent_crc(g_29.f2.f1.f1, "g_29.f2.f1.f1", print_hash_value);
    transparent_crc(g_29.f2.f1.f2, "g_29.f2.f1.f2", print_hash_value);
    transparent_crc(g_29.f2.f1.f3, "g_29.f2.f1.f3", print_hash_value);
    transparent_crc(g_29.f2.f1.f4, "g_29.f2.f1.f4", print_hash_value);
    transparent_crc(g_29.f2.f1.f5, "g_29.f2.f1.f5", print_hash_value);
    transparent_crc(g_29.f2.f2, "g_29.f2.f2", print_hash_value);
    transparent_crc(g_29.f2.f3, "g_29.f2.f3", print_hash_value);
    transparent_crc(g_29.f2.f4, "g_29.f2.f4", print_hash_value);
    transparent_crc(g_29.f2.f5, "g_29.f2.f5", print_hash_value);
    transparent_crc(g_29.f2.f6, "g_29.f2.f6", print_hash_value);
    transparent_crc(g_29.f2.f7, "g_29.f2.f7", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1.f0, "g_115.f1.f0", print_hash_value);
    transparent_crc(g_115.f1.f1, "g_115.f1.f1", print_hash_value);
    transparent_crc(g_115.f1.f2, "g_115.f1.f2", print_hash_value);
    transparent_crc(g_115.f1.f3, "g_115.f1.f3", print_hash_value);
    transparent_crc(g_115.f1.f4, "g_115.f1.f4", print_hash_value);
    transparent_crc(g_115.f1.f5, "g_115.f1.f5", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_115.f3, "g_115.f3", print_hash_value);
    transparent_crc(g_115.f4, "g_115.f4", print_hash_value);
    transparent_crc(g_115.f5, "g_115.f5", print_hash_value);
    transparent_crc(g_115.f6, "g_115.f6", print_hash_value);
    transparent_crc(g_115.f7, "g_115.f7", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_463.f0, "g_463.f0", print_hash_value);
    transparent_crc(g_463.f1, "g_463.f1", print_hash_value);
    transparent_crc(g_463.f2, "g_463.f2", print_hash_value);
    transparent_crc(g_463.f3, "g_463.f3", print_hash_value);
    transparent_crc(g_463.f4, "g_463.f4", print_hash_value);
    transparent_crc(g_463.f5, "g_463.f5", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_495.f0, "g_495.f0", print_hash_value);
    transparent_crc(g_495.f1, "g_495.f1", print_hash_value);
    transparent_crc(g_495.f2.f0, "g_495.f2.f0", print_hash_value);
    transparent_crc(g_495.f2.f1.f0, "g_495.f2.f1.f0", print_hash_value);
    transparent_crc(g_495.f2.f1.f1, "g_495.f2.f1.f1", print_hash_value);
    transparent_crc(g_495.f2.f1.f2, "g_495.f2.f1.f2", print_hash_value);
    transparent_crc(g_495.f2.f1.f3, "g_495.f2.f1.f3", print_hash_value);
    transparent_crc(g_495.f2.f1.f4, "g_495.f2.f1.f4", print_hash_value);
    transparent_crc(g_495.f2.f1.f5, "g_495.f2.f1.f5", print_hash_value);
    transparent_crc(g_495.f2.f2, "g_495.f2.f2", print_hash_value);
    transparent_crc(g_495.f2.f3, "g_495.f2.f3", print_hash_value);
    transparent_crc(g_495.f2.f4, "g_495.f2.f4", print_hash_value);
    transparent_crc(g_495.f2.f5, "g_495.f2.f5", print_hash_value);
    transparent_crc(g_495.f2.f6, "g_495.f2.f6", print_hash_value);
    transparent_crc(g_495.f2.f7, "g_495.f2.f7", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_519.f0, "g_519.f0", print_hash_value);
    transparent_crc(g_519.f1.f0, "g_519.f1.f0", print_hash_value);
    transparent_crc(g_519.f1.f1, "g_519.f1.f1", print_hash_value);
    transparent_crc(g_519.f1.f2, "g_519.f1.f2", print_hash_value);
    transparent_crc(g_519.f1.f3, "g_519.f1.f3", print_hash_value);
    transparent_crc(g_519.f1.f4, "g_519.f1.f4", print_hash_value);
    transparent_crc(g_519.f1.f5, "g_519.f1.f5", print_hash_value);
    transparent_crc(g_519.f2, "g_519.f2", print_hash_value);
    transparent_crc(g_519.f3, "g_519.f3", print_hash_value);
    transparent_crc(g_519.f4, "g_519.f4", print_hash_value);
    transparent_crc(g_519.f5, "g_519.f5", print_hash_value);
    transparent_crc(g_519.f6, "g_519.f6", print_hash_value);
    transparent_crc(g_519.f7, "g_519.f7", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_979, "g_979", print_hash_value);
    transparent_crc(g_1177, "g_1177", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
