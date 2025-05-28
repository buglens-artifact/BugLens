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
   const signed f0 : 9;
   signed f1 : 28;
   unsigned f2 : 15;
   unsigned f3 : 30;
   const unsigned f4 : 23;
   const signed f5 : 20;
   unsigned short f6;
   signed f7 : 2;
};

struct S1 {
   signed f0 : 27;
   signed f1 : 28;
   signed f2 : 8;
   signed f3 : 29;
};


static unsigned short g_6 = 0x3A92L;
static int g_17 = 0x0D0E75D5L;
static short g_61 = 0xADBDL;
static long long g_63 = 0x84502E46A6F4DAD2LL;
static int g_66 = 0x746C20B1L;
static int *g_65 = &g_66;
static long long *g_76 = &g_63;
static long long **g_75 = &g_76;
static unsigned g_80 = 1UL;
static unsigned g_82 = 3UL;
static struct S1 g_83 = {11003,-1151,-0,-18331};
static int *g_125 = &g_66;
static short g_139 = 0x91F7L;
static unsigned g_141 = 0xD005A085L;
static unsigned *g_148 = (void*)0;
static unsigned **g_147 = &g_148;
static char g_157 = 0x30L;
static char g_159 = 1L;
static struct S0 g_194 = {20,-389,176,9941,153,691,0x44D0L,1};
static int g_209 = 0xFB60584BL;
static long long g_242 = 0x912BBB44E860B7F1LL;
static unsigned char g_251 = 255UL;
static char g_276 = 0x44L;
static const struct S1 g_311 = {382,-12857,13,-4916};
static int g_326 = 0xA5B20C79L;
static char g_344 = (-7L);
static struct S0 * const g_371 = &g_194;
static struct S0 * const *g_370 = &g_371;
static struct S0 g_374 = {12,9526,105,144,1266,-347,9UL,1};
static int g_404 = 0xA4A929C1L;
static struct S1 *g_407 = &g_83;
static struct S1 **g_406 = &g_407;
static int g_417 = 0xADBB7581L;
static const unsigned * const *g_501 = (void*)0;
static int *g_538 = &g_326;
static int **g_537 = &g_538;
static const unsigned short *g_554 = &g_374.f6;
static int g_651 = (-4L);
static struct S1 ***g_654 = &g_406;
static struct S1 ****g_653 = &g_654;
static struct S1 ****g_658 = &g_654;
static long long g_678 = 0x0F6E574637615F7CLL;



static int func_1(void);
static struct S1 func_2(unsigned short p_3);
static unsigned long long func_11(int p_12, unsigned short * p_13, unsigned short * p_14);
static const int * func_20(int * p_21);
static int * func_22(const unsigned p_23, int * p_24, const unsigned long long p_25, long long p_26, struct S1 p_27);
static long long func_30(int p_31, long long p_32);
static int func_33(const unsigned short * p_34, int * p_35);
static int * func_36(int * const p_37, long long p_38, int * p_39, unsigned short * const p_40);
static int * func_41(int * p_42, const int * const p_43, int p_44);
static int * func_45(long long p_46, int * p_47, unsigned short * p_48, unsigned p_49, unsigned p_50);
static int func_1(void)
{
    char l_4 = 0xA5L;
    unsigned short *l_5 = &g_6;
    struct S1 l_354 = {-1762,-6554,-2,4701};
    struct S1 *l_355 = &g_83;
    unsigned l_360 = 9UL;
    const struct S0 *l_368 = &g_194;
    const struct S0 **l_367 = &l_368;
    const struct S0 ***l_369 = &l_367;
    struct S0 * const l_373 = &g_374;
    struct S0 * const *l_372 = &l_373;
    unsigned char l_390 = 0x07L;
    unsigned l_394 = 1UL;
    int *l_396 = &g_66;
    struct S1 **l_412 = &g_407;
    int *l_442 = (void*)0;
    unsigned short *l_447 = &g_194.f6;
    unsigned short *l_479 = &g_194.f6;
    unsigned l_652 = 0xDCA3F76AL;
    int *l_675 = &g_66;
    int l_698 = 0L;
    int l_702 = 0x414ABCAFL;
    (*l_355) = (l_354 = func_2(((*l_5) = l_4)));
    if ((g_82 >= ((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s((g_139 < l_360), 3L)), (safe_sub_func_int8_t_s_s(l_354.f3, (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((1UL < (((*l_369) = l_367) == (l_372 = g_370))) | l_354.f3), 6L)), l_354.f3)))))) == 0x67L)))
    {
        char l_395 = 3L;
        unsigned **l_421 = &g_148;
        int *l_427 = &g_404;
        const struct S0 **l_428 = &l_368;
        int l_446 = 0L;
        int *l_464 = &g_417;
        unsigned ***l_474 = (void*)0;
        unsigned ****l_473 = &l_474;
        const unsigned short *l_519 = &g_194.f6;
        const struct S1 *l_533 = &l_354;
        struct S1 *l_541 = &g_83;
        int *l_546 = &g_66;
        int *l_680 = &g_17;
        int **l_701 = &l_546;
        if ((&g_80 != &g_82))
        {
            int *l_375 = &g_66;
            unsigned *l_391 = &l_360;
            int l_405 = 0x2D21EF03L;
            l_375 = &g_66;
            if ((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s((g_194.f1 > (((((((g_311.f2 >= (((((!(((((((safe_lshift_func_int8_t_s_u(0x9AL, 0)) ^ (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_251, (((*l_391) = ((-10L) && l_390)) >= (safe_add_func_int16_t_s_s(0xE8D5L, ((~l_4) && (*l_375))))))), g_63))) || (**g_75)) <= 0xFC73L) & 0xD9C01360093F065FLL) | (*l_375)) && l_394)) | 1L) & 0xA297L) & l_395) || (-1L))) & g_242) || g_194.f0) == (-5L)) == l_395) != l_395) >= (*l_375))), g_139)) > l_354.f3) ^ l_354.f3), 7)) == 8UL), 7)))
            {
                l_396 = l_396;
                return (*l_375);
            }
            else
            {
                int *l_403 = &g_404;
                const struct S1 l_426 = {-10978,13673,12,-14270};
                unsigned **l_437 = &l_391;
                (*l_396) = ((safe_sub_func_int16_t_s_s(func_33(&g_6, &g_66), (0x9EL || (l_390 | ((((safe_lshift_func_int16_t_s_u(g_374.f7, l_395)) > ((*l_403) = (safe_mul_func_uint8_t_u_u(g_374.f4, 1L)))) > (**g_75)) < 0xDDA1A30916D7C74ELL))))) > l_405);
                if ((g_406 == &g_407))
                {
                    struct S0 **l_408 = (void*)0;
                    struct S0 *l_410 = (void*)0;
                    struct S0 **l_409 = &l_410;
                    unsigned **l_420 = (void*)0;
                    (*l_409) = (*g_370);
                    g_65 = (void*)0;
                    if (((*l_403) > g_374.f4))
                    {
                        struct S1 *l_411 = &g_83;
                        struct S1 ***l_413 = (void*)0;
                        struct S1 ***l_414 = &g_406;
                        unsigned ***l_422 = &l_421;
                        int l_423 = 0x2B70E895L;
                        l_411 = (*g_406);
                        (*l_414) = (l_412 = &g_407);
                        (*g_125) = (safe_lshift_func_int16_t_s_u(((*l_375) <= g_417), ((safe_mod_func_uint8_t_u_u(((l_395 | (l_420 == ((*l_422) = l_421))) <= (3L >= (-7L))), (*l_396))) != l_423)));
                    }
                    else
                    {
                        int **l_424 = (void*)0;
                        int **l_425 = &l_396;
                        (*l_425) = &g_66;
                        (*l_355) = l_426;
                        l_427 = &g_404;
                        (*l_369) = l_428;
                    }
                }
                else
                {
                    int **l_443 = &g_65;
                    for (g_66 = 0; (g_66 >= 18); g_66 = safe_add_func_uint8_t_u_u(g_66, 1))
                    {
                        short l_431 = 0x704BL;
                        return l_431;
                    }
                    (*l_427) = (((*l_5) = func_33(&g_6, l_403)) < g_61);
                    for (g_209 = 0; (g_209 <= (-6)); g_209 = safe_sub_func_int8_t_s_s(g_209, 8))
                    {
                        int l_434 = 0x8BC7CD58L;
                        (*g_125) = (l_434 | ((safe_mul_func_uint8_t_u_u(g_374.f6, (l_437 != &l_391))) != (safe_div_func_uint64_t_u_u(((g_276 = (*l_396)) ^ (l_434 & (g_139 != (safe_div_func_uint16_t_u_u(l_434, (*l_375)))))), (*g_76)))));
                        return g_83.f3;
                    }
                    (*l_443) = func_36(l_427, (*g_76), l_442, l_5);
                }
                if ((safe_rshift_func_int8_t_s_s(g_194.f0, 6)))
                {
                    char *l_452 = &g_159;
                    const unsigned *l_457 = &g_80;
                    int **l_462 = &g_65;
                    (*l_462) = func_45((safe_sub_func_uint64_t_u_u((0xACL <= (safe_lshift_func_uint8_t_u_s((*l_427), ((*l_452) = (*l_396))))), ((safe_mul_func_int8_t_s_s((-4L), (safe_mod_func_int8_t_s_s(((*l_396) <= ((void*)0 == l_457)), (g_66 | (safe_lshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s((*g_76), (*l_403))), g_6))))))) <= (*l_427)))), &g_404, &g_6, g_194.f4, g_17);
                }
                else
                {
                    int **l_463 = &l_442;
                    int **l_465 = (void*)0;
                    int *l_466 = &g_66;
                    l_466 = l_464;
                    return (*l_375);
                }
            }
        }
        else
        {
            const unsigned l_488 = 2UL;
            int l_496 = 0x30B84287L;
            unsigned **l_500 = &g_148;
            unsigned short * const l_560 = &g_374.f6;
            unsigned char *l_563 = &g_251;
            short l_583 = 0x23CCL;
            unsigned long long l_679 = 9UL;
            int *l_683 = &g_651;
            if ((*l_464))
            {
                unsigned char l_469 = 1UL;
                int *l_481 = (void*)0;
                long long l_499 = (-1L);
                unsigned l_514 = 0x22716C08L;
                for (l_446 = (-16); (l_446 <= 0); ++l_446)
                {
                    unsigned long long l_470 = 0xD768F0A9841200C9LL;
                    unsigned char l_475 = 0xBBL;
                    int l_494 = (-10L);
                    char *l_506 = &g_157;
                    unsigned char l_508 = 0xA9L;
                }
                (*l_427) = ((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((l_479 == &g_139) | l_514), 10)) | (((**g_75) <= (safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_514, 8L)), (func_33(l_519, func_45((func_33(&g_6, &g_417) >= g_374.f2), &g_417, &g_6, l_514, (*l_427))) >= g_83.f3)))) && l_496)), (-7L))) || (*l_396));
            }
            else
            {
                unsigned short l_528 = 1UL;
                int l_529 = 1L;
                unsigned char *l_530 = &l_390;
                (*l_464) = (*l_396);
                if ((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(l_488, l_528)) >= ((**g_75) = (l_488 != g_194.f3))), (l_529 = ((~0x9EL) > 0UL)))), ((*l_530) = ((*g_406) != (void*)0)))) != g_82) & l_488))
                {
                    int ** const l_536 = &l_442;
                    int **l_539 = &g_125;
                    for (g_17 = 0; (g_17 <= 10); g_17++)
                    {
                        const struct S1 **l_534 = &l_533;
                        int l_535 = 1L;
                        (*l_534) = l_533;
                        if (l_535)
                            continue;
                        (*l_396) = (*g_125);
                    }
                    g_537 = l_536;
                    (*l_539) = l_442;
                }
                else
                {
                    struct S1 *l_542 = (void*)0;
                    short *l_544 = &g_61;
                    short **l_543 = &l_544;
                    if ((safe_unary_minus_func_int32_t_s((!(*g_125)))))
                    {
                        short ***l_545 = &l_543;
                        (*g_406) = (l_542 = l_541);
                        (*g_125) = 0x440296B0L;
                        (*l_412) = (*g_406);
                        (*l_545) = l_543;
                    }
                    else
                    {
                        l_546 = &l_529;
                    }
                    return (*g_538);
                }
                for (g_276 = 0; (g_276 <= (-21)); g_276 = safe_sub_func_uint8_t_u_u(g_276, 5))
                {
                    int l_553 = 4L;
                    char *l_557 = &l_4;
                    char *l_558 = (void*)0;
                    char *l_559 = &g_159;
                    unsigned short * const l_561 = &g_374.f6;
                    int **l_562 = &l_427;
                    (*l_562) = func_36(func_36((*g_537), (safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_u(l_496, ((*l_5) = ((*l_447) = g_374.f7)))) | ((l_553 >= (l_496 > (safe_add_func_int8_t_s_s(((*l_559) = ((*l_557) = ((void*)0 != (*g_75)))), 0x7FL)))) & (-3L))), 13)), (*g_537), l_560), (**g_75), (*g_537), l_561);
                    (*l_541) = (*g_407);
                }
            }
            if (((-8L) || (((*l_563) = g_66) > 0x3BL)))
            {
                int *l_579 = &g_17;
                int l_580 = 1L;
                unsigned l_623 = 0x4C7FEDC7L;
                unsigned short *l_624 = &g_374.f6;
                unsigned ***l_638 = &l_500;
                struct S1 l_681 = {10943,5521,11,-10996};
                for (g_6 = 0; (g_6 <= 31); ++g_6)
                {
                    int **l_566 = &l_546;
                    int **l_567 = &g_125;
                    (*l_567) = ((*l_566) = &l_496);
                    (*l_567) = l_442;
                    for (g_251 = 0; (g_251 >= 22); g_251 = safe_add_func_int64_t_s_s(g_251, 5))
                    {
                        unsigned l_576 = 1UL;
                    }
                    if ((*l_464))
                        continue;
                }
                if (((*l_546) = (safe_mul_func_uint16_t_u_u(((l_580 ^ ((*g_76) = l_583)) & g_17), ((void*)0 == &l_395)))))
                {
                    int *l_584 = &g_404;
                    int **l_585 = &l_546;
                    short l_618 = (-1L);
                    (*l_585) = l_584;
                    (*l_585) = &l_496;
                    for (g_6 = 0; (g_6 > 51); g_6 = safe_add_func_int32_t_s_s(g_6, 4))
                    {
                        unsigned char *l_594 = &l_390;
                        short *l_613 = &g_139;
                        unsigned char l_616 = 0xBBL;
                        unsigned char *l_617 = &l_616;
                        long long *l_619 = &g_242;
                        unsigned short l_620 = 0x1BB3L;
                        unsigned short **l_621 = &l_5;
                        unsigned short **l_622 = &l_447;
                        (*l_428) = (void*)0;
                        (*l_464) = ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(((*l_594) = ((*l_563) = 0x25L)), l_496)) < l_583), g_374.f5)), l_620)) > (*l_396));
                        (*l_585) = func_45((*l_546), &g_404, ((*l_622) = ((*l_621) = &g_6)), g_374.f3, (**l_585));
                    }
                    (*l_396) = l_623;
                }
                else
                {
                    const unsigned short *l_631 = &g_6;
                    int l_635 = (-1L);
                    int **l_647 = (void*)0;
                    unsigned short *l_682 = (void*)0;
                    unsigned *l_686 = &l_652;
                    struct S1 ***l_687 = &g_406;
                    char *l_689 = (void*)0;
                    char **l_688 = &l_689;
                    if (l_623)
                    {
                        unsigned short **l_625 = &l_624;
                        short *l_628 = &l_583;
                        int **l_629 = &l_427;
                        (*l_396) = ((&g_6 != ((*l_625) = l_624)) <= (g_61 = (safe_rshift_func_int16_t_s_u(((*l_628) = g_374.f0), 13))));
                        (*l_629) = &g_66;
                    }
                    else
                    {
                        unsigned *l_630 = &l_360;
                        int l_632 = 0xFF2FEEC0L;
                        (*l_396) = (((l_630 == &g_80) && (l_632 != (safe_sub_func_uint16_t_u_u((*l_464), g_141)))) ^ (-8L));
                        return l_635;
                    }
                    if ((((safe_mod_func_uint8_t_u_u((&g_501 != l_638), (*l_427))) == ((*l_563) = (l_623 >= (safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((-10L), (safe_unary_minus_func_int64_t_s(l_635)))), l_496))))) == (g_374.f5 >= (((*l_464) = (safe_lshift_func_uint8_t_u_u(((*l_546) == g_139), 7))) || l_580))))
                    {
                        int **l_646 = &g_125;
                        int * const l_650 = &g_651;
                        int * const *l_649 = &l_650;
                        int * const **l_648 = &l_649;
                        struct S1 *****l_655 = (void*)0;
                        struct S1 *****l_656 = (void*)0;
                        struct S1 *****l_657 = &g_653;
                        (*l_646) = &l_496;
                        (*l_396) = ((g_139 < (l_652 = (l_647 != ((*l_648) = l_646)))) >= (((*l_657) = g_653) != (g_658 = &g_654)));
                        (***g_654) = (**l_412);
                    }
                    else
                    {
                        int **l_659 = &l_427;
                        const int l_660 = 0L;
                        int *l_671 = (void*)0;
                        const unsigned short *l_674 = (void*)0;
                        long long *l_676 = &g_242;
                        long long *l_677 = &g_678;
                        (*l_659) = (void*)0;
                        l_683 = func_45((*g_76), ((*l_659) = func_22(l_660, func_22(((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((g_374.f6 < (safe_div_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(g_251, l_679)) > (*l_396)), g_80))) || 4294967286UL), 6)), (*l_396))), 0xAB2FL)) != (*l_675)), l_680, l_580, (**g_75), l_681), l_488, (*l_675), (****g_653))), l_682, g_80, (*l_396));
                    }
                    (*l_464) = ((*l_683) = (safe_lshift_func_int8_t_s_u((g_157 = l_623), 2)));
                    if (((((*g_653) = (*g_653)) != l_687) < (((*l_688) = (void*)0) == &g_159)))
                    {
                        int **l_690 = &l_675;
                        (*l_690) = &g_404;
                        (*l_396) = l_623;
                        (*l_396) = l_635;
                    }
                    else
                    {
                        char l_693 = (-1L);
                        int **l_694 = &l_546;
                        (*l_694) = func_41(func_45((*g_76), func_45((*l_396), &l_496, &g_6, g_651, (l_693 = (1UL || (safe_add_func_int16_t_s_s(g_374.f4, l_681.f2))))), &g_6, g_66, (*l_683)), (*g_537), g_83.f3);
                        g_65 = l_680;
                        (*l_694) = &g_651;
                    }
                }
            }
            else
            {
                struct S1 l_695 = {-2777,-3894,0,8260};
                (**g_406) = l_695;
            }
        }
        (*g_407) = (****g_658);
        (*l_701) = func_45((*l_396), ((*l_701) = &g_404), &g_6, g_417, l_702);
    }
    else
    {
        long long l_703 = 5L;
        int *l_706 = &g_66;
        unsigned short **l_707 = &l_479;
        int **l_708 = (void*)0;
        int **l_709 = &g_125;
        (*l_396) = (*g_125);
        (*l_675) = (((~l_703) < (!(safe_sub_func_int32_t_s_s(l_703, func_33(l_447, ((*l_709) = func_45((*l_675), l_706, ((*l_707) = (void*)0), (0x89L >= g_242), ((*l_706) > (*l_675))))))))) > (*l_396));
        (**g_406) = func_2((safe_rshift_func_uint16_t_u_s(func_33(&g_6, func_36((*g_537), ((*g_76) = (*l_706)), (*g_537), (*l_707))), 1)));
    }
    (*l_412) = (*l_412);
    return (*l_675);
}







static struct S1 func_2(unsigned short p_3)
{
    int *l_15 = (void*)0;
    int *l_16 = &g_17;
    char *l_343 = &g_344;
    int l_345 = 0x96026280L;
    int *l_346 = &g_66;
    int *l_347 = &l_345;
    unsigned ** const l_348 = &g_148;
    struct S1 l_349 = {2157,-3942,-7,11675};
    struct S1 *l_350 = (void*)0;
    struct S1 *l_351 = &g_83;
    (*l_347) = (((*l_346) = (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((func_11(((*l_16) = p_3), &g_6, &g_6) ^ (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_194.f0 && (safe_div_func_uint8_t_u_u(p_3, ((*l_343) = g_194.f7)))), g_194.f5)), ((+(-4L)) && l_345)))), g_311.f1)), g_194.f3))) | p_3);
    (*l_346) = ((void*)0 == l_348);
    (*l_351) = l_349;
    for (g_139 = 12; (g_139 < 27); g_139 = safe_add_func_int32_t_s_s(g_139, 6))
    {
        return g_83;
    }
    return (*l_351);
}







static unsigned long long func_11(int p_12, unsigned short * p_13, unsigned short * p_14)
{
    short l_51 = 0xDD4DL;
    int *l_208 = &g_209;
    const int *l_226 = &g_66;
    struct S1 l_227 = {8505,6373,-11,-15998};
    struct S0 *l_280 = &g_194;
    int **l_336 = &g_65;
    for (p_12 = (-6); (p_12 < 10); p_12++)
    {
        int *l_29 = &g_17;
        int **l_28 = &l_29;
        unsigned short *l_59 = &g_6;
        unsigned short **l_58 = &l_59;
        short *l_60 = &g_61;
        long long *l_62 = &g_63;
        int l_64 = 0xB460D54BL;
        unsigned l_67 = 0x6845D487L;
        const int * const l_68 = &g_17;
        struct S1 l_223 = {-7763,9155,8,-102};
        unsigned long long l_314 = 18446744073709551610UL;
        l_226 = func_20(((*l_28) = func_22(p_12, ((*l_28) = &g_17), p_12, ((*l_62) = func_30((+(+func_33(&g_6, func_36(func_41(func_45((l_51 < ((~(safe_lshift_func_uint8_t_u_s((((l_64 = (0x4F9AF3922CBD4DAELL ^ ((*l_62) = (safe_div_func_int32_t_s_s(((-9L) | ((*l_60) = (p_14 != ((*l_58) = p_14)))), l_51))))) <= (*p_14)) < l_51), 5))) > 0x61L)), g_65, &g_6, l_67, g_6), l_68, p_12), l_51, l_208, p_14)))), l_67)), l_223)));
        l_227 = l_223;
        for (g_157 = 14; (g_157 < 6); g_157--)
        {
            struct S1 *l_230 = &l_223;
            const int **l_233 = &l_226;
            int *l_236 = &g_17;
            unsigned char l_278 = 0UL;
            l_227 = g_83;
            (*l_230) = g_83;
            (*g_125) = (safe_rshift_func_uint16_t_u_u((*p_13), g_209));
            if ((l_233 == &l_226))
            {
                int l_240 = 0L;
                struct S1 l_243 = {10318,7760,-2,-13803};
                int *l_254 = &g_209;
                int **l_255 = &g_125;
                char *l_274 = &g_159;
                char *l_275 = &g_276;
                int *l_277 = &l_64;
                unsigned char *l_279 = &g_251;
                struct S0 **l_281 = (void*)0;
                struct S0 **l_282 = (void*)0;
                struct S0 **l_283 = &l_280;
                unsigned *l_288 = &g_82;
                struct S1 *l_315 = &l_223;
                const unsigned short *l_320 = &g_194.f6;
                for (g_194.f6 = 0; (g_194.f6 > 29); g_194.f6++)
                {
                    unsigned char *l_241 = (void*)0;
                    unsigned char *l_249 = (void*)0;
                    unsigned char *l_250 = &g_251;
                    char *l_252 = &g_159;
                    int *l_253 = &l_64;
                    (*g_65) = p_12;
                    (*l_253) = ((*g_65) = (safe_unary_minus_func_uint32_t_u((func_30(p_12, ((**g_75) = ((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((*l_250) = 255UL), ((*l_252) = g_194.f3))), (**l_233))) != 0x64L))) >= (g_194.f7 <= l_223.f3)))));
                }
                (*l_233) = func_22(l_240, l_254, func_33(&g_6, ((*l_255) = l_236)), ((!(safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((((*l_279) = (safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(p_12, (*l_226))) && (((*l_277) = (safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_add_func_int64_t_s_s((g_83.f1 < (safe_mod_func_int8_t_s_s(((*l_275) = ((*l_274) = (**l_233))), (-4L)))), l_64)), (-1L))), 9UL))) > l_278)), p_12))) == 255UL), 65535UL)), 1))) < 0xFFL), l_223);
                (*l_283) = l_280;
                if (func_30((safe_mul_func_int16_t_s_s(((((*l_288) = (safe_mod_func_uint8_t_u_u(func_33(p_14, l_208), ((!p_12) | g_83.f1)))) != (p_12 != (**l_233))) < g_83.f3), g_194.f4)), p_12))
                {
                    struct S1 l_298 = {4796,-11050,-6,22530};
                    const struct S1 *l_310 = &g_311;
                    const struct S1 **l_309 = &l_310;
                    const struct S1 ***l_308 = &l_309;
                    const struct S1 ****l_307 = &l_308;
                    for (g_61 = (-11); (g_61 >= (-2)); g_61++)
                    {
                        unsigned short *l_295 = &g_194.f6;
                        (*l_233) = func_22((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((*p_13), g_82)) & ((**g_75) >= 18446744073709551615UL)), ((*l_295) = (*p_13)))), func_22(p_12, func_36(&p_12, ((**l_255) = (l_64 = (safe_add_func_int16_t_s_s(p_12, (*p_13))))), &g_209, p_14), (**l_233), (**g_75), (*l_230)), p_12, p_12, l_298);
                    }
                    if ((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((void*)0 == l_236), ((**g_75) = (safe_mul_func_int8_t_s_s(((*l_274) = (**l_233)), ((safe_rshift_func_uint16_t_u_u((*l_226), ((((*l_307) = (void*)0) != (void*)0) ^ (safe_lshift_func_uint16_t_u_s((l_298.f0 > func_30(p_12, p_12)), l_314))))) == 0UL)))))), 0xD5L)))
                    {
                        unsigned short l_317 = 0x5115L;
                        int *l_321 = &g_66;
                        (*l_309) = l_315;
                        (*l_277) = (safe_unary_minus_func_int8_t_s(l_317));
                        if ((*l_226))
                            break;
                        (*l_233) = l_321;
                    }
                    else
                    {
                        unsigned **l_323 = &l_288;
                        unsigned ***l_322 = &l_323;
                        (*l_233) = (*l_233);
                        (*l_277) = 0xF06CA2D3L;
                        (*l_322) = (void*)0;
                        return g_141;
                    }
                    if ((safe_sub_func_int8_t_s_s((((((((g_80 < ((0x1A0BL & 0x015CL) != ((*p_14) = g_194.f7))) | (g_326 = ((*l_279) = g_83.f2))) || (2L ^ (((*l_279) = (safe_mul_func_uint16_t_u_u((*p_14), (+((func_33(p_13, l_208) || (-7L)) & p_12))))) <= 1UL))) >= 0x06920802L) || 0xC68921B1L) <= p_12) & 0UL), g_80)))
                    {
                        struct S1 l_329 = {3375,-8134,-6,7253};
                        l_329 = ((*l_315) = g_311);
                        (*l_309) = &l_243;
                    }
                    else
                    {
                        (**l_255) = (safe_mod_func_uint32_t_u_u(1UL, g_326));
                        if ((*g_125))
                            break;
                        return (**l_233);
                    }
                }
                else
                {
                    struct S1 l_334 = {-9011,-2808,2,-1100};
                    struct S1 l_335 = {8500,10004,-13,3236};
                    for (g_276 = 2; (g_276 < (-10)); g_276--)
                    {
                        l_335 = l_334;
                    }
                }
            }
            else
            {
                if (p_12)
                    break;
                if (p_12)
                    continue;
            }
        }
        l_227 = l_227;
    }
    (*l_336) = (void*)0;
    (*l_336) = (void*)0;
    return g_194.f0;
}







static const int * func_20(int * p_21)
{
    unsigned l_225 = 0x47332266L;
    (*g_65) = l_225;
    return &g_66;
}







static int * func_22(const unsigned p_23, int * p_24, const unsigned long long p_25, long long p_26, struct S1 p_27)
{
    int *l_224 = &g_66;
    l_224 = &g_66;
    return p_24;
}







static long long func_30(int p_31, long long p_32)
{
    const int * const l_220 = &g_66;
    const int *l_222 = &g_66;
    const int **l_221 = &l_222;
    for (g_139 = (-13); (g_139 <= 16); g_139 = safe_add_func_uint32_t_u_u(g_139, 1))
    {
        (*g_65) = 0xF2C1B0FFL;
    }
    (*l_221) = l_220;
    return (*l_222);
}







static int func_33(const unsigned short * p_34, int * p_35)
{
    unsigned long long l_217 = 0x26E25B4CBD725CBBLL;
    (*g_125) = (safe_sub_func_uint16_t_u_u(g_66, (safe_add_func_int64_t_s_s((*g_76), (l_217 > g_194.f4)))));
    return l_217;
}







static int * func_36(int * const p_37, long long p_38, int * p_39, unsigned short * const p_40)
{
    int *l_210 = &g_66;
    int **l_211 = &g_125;
    int **l_212 = &g_65;
    (*l_212) = ((*l_211) = l_210);
    return p_39;
}







static int * func_41(int * p_42, const int * const p_43, int p_44)
{
    long long **l_77 = &g_76;
    int l_78 = 0xF207E879L;
    long long l_105 = 0x2B46159332C3216FLL;
    unsigned short *l_106 = &g_6;
    int *l_190 = &l_78;
    if ((*g_65))
    {
        const long long *l_71 = &g_63;
        const long long **l_72 = &l_71;
        unsigned *l_79 = &g_80;
        unsigned *l_81 = &g_82;
        unsigned short *l_85 = (void*)0;
        if (((safe_add_func_int32_t_s_s((((*l_72) = l_71) == (void*)0), p_44)) | (safe_sub_func_int32_t_s_s((((*l_79) = ((g_75 != l_77) < l_78)) && ((*l_81) = ((*l_79) = 0x33E1ABB4L))), (-1L)))))
        {
            struct S1 *l_84 = &g_83;
            (*l_84) = g_83;
        }
        else
        {
            int **l_88 = (void*)0;
            int **l_89 = (void*)0;
            int **l_90 = &g_65;
            (*l_90) = func_45(p_44, &l_78, l_85, g_17, (safe_mod_func_uint64_t_u_u(g_61, p_44)));
        }
        for (g_17 = (-24); (g_17 >= (-16)); ++g_17)
        {
            return p_42;
        }
    }
    else
    {
        int **l_93 = &g_65;
        struct S1 *l_179 = &g_83;
        struct S1 **l_178 = &l_179;
        long long **l_191 = &g_76;
        unsigned l_192 = 0x3D6CB42AL;
        struct S0 *l_193 = &g_194;
        (*l_93) = &g_66;
        for (g_80 = 0; (g_80 > 9); g_80 = safe_add_func_int32_t_s_s(g_80, 5))
        {
            int *l_131 = (void*)0;
            struct S1 l_176 = {3649,-7111,0,2813};
            struct S1 ***l_180 = &l_178;
            unsigned char l_183 = 255UL;
            for (g_17 = 12; (g_17 <= 29); g_17 = safe_add_func_int64_t_s_s(g_17, 1))
            {
                unsigned short *l_104 = &g_6;
                unsigned *l_107 = &g_82;
                int l_108 = 0xEB263489L;
                int *l_122 = &l_108;
                unsigned short *l_132 = (void*)0;
                int * const *l_173 = &g_65;
                int * const **l_172 = &l_173;
            }
            (*l_180) = l_178;
            p_44 = ((**l_93) = (((safe_sub_func_int8_t_s_s((**l_93), l_183)) < (safe_mul_func_int8_t_s_s(((**l_93) | (-4L)), p_44))) == ((0x7F72L >= l_78) == (safe_add_func_int64_t_s_s((((safe_mod_func_uint16_t_u_u(g_139, g_83.f3)) < 0x243D31FC3C61D2E9LL) > p_44), 0x11E249038C886831LL)))));
            g_125 = (void*)0;
        }
        (*l_93) = l_190;
        if ((((p_44 && (&g_76 != l_191)) == 0x2CF6FB23EE19FA1ALL) < l_192))
        {
            struct S0 **l_195 = &l_193;
            const int l_199 = 0x580C8C66L;
            unsigned ** const *l_200 = &g_147;
            (*g_65) = 2L;
            (*l_195) = l_193;
            (*l_178) = &g_83;
            for (g_82 = 0; (g_82 < 52); g_82 = safe_add_func_uint16_t_u_u(g_82, 2))
            {
                unsigned ** const **l_201 = &l_200;
                (**l_93) = (safe_unary_minus_func_int8_t_s((((!g_83.f1) > ((p_44 > g_194.f7) & (l_199 || (&g_147 != ((*l_201) = l_200))))) >= 0xBFFDC485L)));
                if (p_44)
                    continue;
            }
        }
        else
        {
            struct S1 ***l_204 = &l_178;
            struct S1 ****l_205 = &l_204;
            unsigned *l_206 = &g_80;
            int *l_207 = (void*)0;
            g_83.f2 = ((p_44 || 0L) ^ (safe_mul_func_int8_t_s_s((((*g_65) = ((void*)0 != &g_139)) != ((*l_206) = (((*l_205) = l_204) != (void*)0))), g_66)));
            return &g_17;
        }
    }
    return &g_17;
}







static int * func_45(long long p_46, int * p_47, unsigned short * p_48, unsigned p_49, unsigned p_50)
{
    g_65 = p_47;
    return &g_17;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_83.f1, "g_83.f1", print_hash_value);
    transparent_crc(g_83.f2, "g_83.f2", print_hash_value);
    transparent_crc(g_83.f3, "g_83.f3", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_194.f0, "g_194.f0", print_hash_value);
    transparent_crc(g_194.f1, "g_194.f1", print_hash_value);
    transparent_crc(g_194.f2, "g_194.f2", print_hash_value);
    transparent_crc(g_194.f3, "g_194.f3", print_hash_value);
    transparent_crc(g_194.f4, "g_194.f4", print_hash_value);
    transparent_crc(g_194.f5, "g_194.f5", print_hash_value);
    transparent_crc(g_194.f6, "g_194.f6", print_hash_value);
    transparent_crc(g_194.f7, "g_194.f7", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_311.f0, "g_311.f0", print_hash_value);
    transparent_crc(g_311.f1, "g_311.f1", print_hash_value);
    transparent_crc(g_311.f2, "g_311.f2", print_hash_value);
    transparent_crc(g_311.f3, "g_311.f3", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_374.f0, "g_374.f0", print_hash_value);
    transparent_crc(g_374.f1, "g_374.f1", print_hash_value);
    transparent_crc(g_374.f2, "g_374.f2", print_hash_value);
    transparent_crc(g_374.f3, "g_374.f3", print_hash_value);
    transparent_crc(g_374.f4, "g_374.f4", print_hash_value);
    transparent_crc(g_374.f5, "g_374.f5", print_hash_value);
    transparent_crc(g_374.f6, "g_374.f6", print_hash_value);
    transparent_crc(g_374.f7, "g_374.f7", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
