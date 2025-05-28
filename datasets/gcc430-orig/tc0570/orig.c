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
   unsigned long long f0;
   int f1;
   unsigned char f2;
   unsigned f3;
   unsigned char f4;
   unsigned f5;
   unsigned long long f6;
   unsigned f7;
   int f8;
   char f9;
};


static unsigned long long g_8 = 8UL;
static int g_102 = 0xB093197CL;
static struct S0 g_105 = {0x9A8027267125BDF0LL,0x7C7E6801L,0x04L,0x643A5642L,0xEDL,0UL,0x6A5050E7A76403ECLL,1UL,-4L,-1L};
static int *g_129 = (void*)0;
static int g_247 = 0x1D2320A0L;
static int g_254 = 1L;
static struct S0 **g_279 = (void*)0;
static struct S0 ***g_278 = &g_279;
static int ***g_292 = (void*)0;
static int g_304 = (-6L);
static int g_375 = 0x9427902DL;
static struct S0 g_477 = {18446744073709551610UL,-10L,1UL,0x2365E5FDL,0xF0L,0x133E1C00L,1UL,0x9F746088L,-1L,1L};
static int g_516 = 0xE4863396L;



static char func_1(void);
static short func_2(unsigned p_3, unsigned short p_4, long long p_5, unsigned p_6);
static short func_9(unsigned long long p_10, unsigned long long p_11, unsigned p_12, unsigned p_13, unsigned p_14);
static long long func_15(unsigned char p_16, char p_17, unsigned long long p_18, int p_19, short p_20);
static char func_21(int p_22, long long p_23, char p_24, unsigned long long p_25);
static unsigned char func_28(unsigned long long p_29, int p_30, unsigned char p_31);
static char func_32(unsigned long long p_33);
static int func_34(unsigned short p_35, long long p_36, unsigned short p_37, struct S0 p_38, short p_39);
static long long func_42(unsigned p_43, unsigned short p_44, unsigned char p_45, unsigned short p_46, int p_47);
static unsigned char func_63(struct S0 p_64, unsigned p_65);
static char func_1(void)
{
    long long l_7 = (-3L);
    struct S0 l_150 = {0UL,0L,255UL,0x6D5B1292L,255UL,9UL,0xB2449837FEA80240LL,0x7FB8437FL,0xE8780870L,0xCCL};
    int l_217 = 0L;
    struct S0 ***l_302 = &g_279;
    int *l_314 = &l_150.f1;
    unsigned char l_454 = 1UL;
    unsigned char l_471 = 0xA7L;
    unsigned l_490 = 0x9444DDF1L;
    if (((func_2(l_7, g_8, ((func_9(((func_15(l_7, func_21((safe_rshift_func_uint8_t_u_u((~func_28((func_32((((func_34((safe_add_func_int64_t_s_s(func_42(l_7, (l_7 | (-1L)), l_7, (l_7 <= g_8), l_7), 1UL)), g_8, g_8, l_150, g_8) >= g_8) & 65528UL) && g_105.f3)) != 0xE5L), g_8, g_8)), l_217)), g_8, g_8, g_8), g_8, l_150.f8, g_8) && 18446744073709551615UL) ^ 0xC1L), l_150.f4, g_8, g_8, l_7) ^ l_150.f0) && l_7), l_150.f3) || 1L) < g_8))
    {
        char l_255 = 0x5EL;
        struct S0 l_263 = {0x8EACDA75E78B5091LL,0L,0x17L,1UL,255UL,0UL,18446744073709551615UL,0x97AFACD9L,-3L,0x25L};
        int *l_264 = &l_217;
        int **l_265 = &g_129;
        (*l_264) ^= (l_255 && (safe_add_func_int64_t_s_s(func_32(((l_150.f5 | g_254) < ((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(func_63(l_263, (((l_150.f9 ^ g_105.f7) && (g_254 == l_150.f6)) != 0UL)), l_150.f6)))) > g_247))), (-10L))));
        (*l_265) = &g_247;

        ;
    }
    else
    {
        unsigned l_275 = 0xA303FCA0L;
        char l_306 = (-7L);
        int *l_313 = &l_217;
        unsigned char l_350 = 6UL;
        if (l_150.f4)
        {
            int **l_291 = &g_129;
            for (g_105.f6 = 0; (g_105.f6 != 60); ++g_105.f6)
            {
                int *l_268 = &l_217;
                int **l_269 = (void*)0;
                int **l_270 = &l_268;
                (*l_270) = l_268;
                if (g_105.f4)
                    break;
                if (g_105.f0)
                    break;
                for (l_150.f0 = 0; (l_150.f0 != 21); l_150.f0 = safe_add_func_uint8_t_u_u(l_150.f0, 8))
                {
                    struct S0 l_273 = {0x25883E4B16275ACELL,-1L,6UL,0UL,7UL,4294967295UL,1UL,9UL,1L,0x02L};
                    struct S0 *l_274 = &l_273;
                    (*l_274) = l_273;
                }
            }
            if (l_275)
            {
                struct S0 **l_277 = (void*)0;
                struct S0 ***l_276 = &l_277;
                int *l_280 = &g_254;
                (*l_280) = func_32((l_276 != g_278));
                (*l_280) = (~0xC2FFF6BBL);
            }
            else
            {
                int l_297 = 0xE3AF3374L;
                int *l_303 = &g_254;
                for (g_105.f9 = (-30); (g_105.f9 > (-1)); g_105.f9 = safe_add_func_int32_t_s_s(g_105.f9, 6))
                {
                    short l_283 = 3L;
                    if (l_150.f8)
                        break;
                    if (l_283)
                        break;
                }
                for (g_102 = (-10); (g_102 < (-27)); g_102--)
                {
                    short l_290 = 0x6EE4L;
                    int *l_298 = &l_150.f1;
                    (*l_298) = (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_290, ((func_21((&g_129 != l_291), ((0L != (g_292 != g_292)) & (((safe_sub_func_int8_t_s_s(0x0DL, func_28((safe_lshift_func_int8_t_s_s(((g_105.f7 >= (g_292 == (void*)0)) <= l_217), 7)), l_297, l_150.f4))) >= 7L) <= 0L)), g_102, g_8) | g_247) == 0x70D4B94C9C09685FLL))), g_102));
                    for (l_275 = 0; (l_275 < 32); l_275 = safe_add_func_uint64_t_u_u(l_275, 1))
                    {
                        int *l_301 = &l_217;
                        (*l_291) = l_301;

                        ;
                    }
                }

                ;
                (*l_303) &= func_63(l_150, (l_302 != &g_279));

                ;
                g_304 ^= func_2((**l_291), (*l_303), g_247, l_275);
            }
            (*l_291) = (*l_291);
        }
        else
        {
            int **l_305 = &g_129;
            (*l_305) = &g_254;

            ;
            (*l_305) = (*l_305);
        }

        ;
        g_254 = func_34(func_15((0x832EED427E3807DBLL >= func_28(l_306, l_150.f6, l_275)), l_275, l_275, (g_304 && 1L), l_306), g_8, l_7, l_150, l_306);
        for (g_102 = 0; (g_102 < 8); ++g_102)
        {
            int *l_309 = (void*)0;
            int **l_310 = &l_309;
            (*l_310) = l_309;
            return g_247;
        }
        if (((safe_lshift_func_int8_t_s_s(1L, 7)) & 251UL))
        {
            l_314 = l_313;

            ;
        }
        else
        {
            int l_317 = (-1L);
            struct S0 ***l_320 = &g_279;
            int l_332 = 9L;
            int l_398 = 0L;
            int *l_399 = (void*)0;
            int *l_400 = &g_304;
            if ((safe_add_func_int16_t_s_s((-1L), func_9(((l_317 > (safe_lshift_func_int8_t_s_u(((g_105.f8 == func_21(g_105.f8, g_105.f4, (*l_313), (l_302 != l_320))) >= 0xCC61L), 3))) != (*l_313)), (*l_314), g_105.f6, (*l_314), (*l_314)))))
            {
                struct S0 **l_342 = (void*)0;
                int l_343 = 0x146E2101L;
                for (l_150.f5 = 9; (l_150.f5 <= 40); l_150.f5 = safe_add_func_uint32_t_u_u(l_150.f5, 8))
                {
                    unsigned l_323 = 0x25317257L;
                    struct S0 *l_335 = &l_150;
                    (*l_313) = l_323;
                    (*l_314) |= (&g_105 == (void*)0);
                    (*l_314) |= (0x04D0B8DAL | (g_105.f3 && (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u((*l_313), ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(l_332, (((void*)0 == l_335) <= (safe_lshift_func_uint8_t_u_s(0x00L, 5))))), 3)) & (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_342 != (*g_278)), (-3L))), 0x70L))))), g_304))));
                    if (l_323)
                        break;
                }
                (*l_313) = (g_8 < ((l_343 || (safe_add_func_int64_t_s_s((((safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((g_105.f7 == ((*l_313) <= ((l_332 == g_105.f2) | (((((*l_314) < func_9(((8UL & g_105.f9) != l_350), l_332, (*l_314), g_105.f9, (*l_313))) != 0L) || (*l_313)) & 18446744073709551613UL)))), (-1L))), 0xBDD194FD1D8052F2LL)) == g_8) < 0x39BA4C86FCE4B269LL), (*l_314)))) & 0xF38C22F9L));
            }
            else
            {
                g_105 = g_105;
            }
            for (g_105.f4 = 29; (g_105.f4 >= 1); g_105.f4--)
            {
                int **l_379 = &g_129;
                for (g_105.f8 = 0; (g_105.f8 < 7); g_105.f8 = safe_add_func_int16_t_s_s(g_105.f8, 2))
                {
                    int *l_378 = &g_247;
                    for (l_317 = 5; (l_317 < (-18)); l_317 = safe_sub_func_uint64_t_u_u(l_317, 9))
                    {
                        int **l_357 = (void*)0;
                        int **l_358 = &l_314;
                        (*l_358) = l_313;

                        ;
                        (**l_358) |= (safe_sub_func_uint8_t_u_u(0x8AL, 0UL));
                    }
                    (*l_378) &= (safe_add_func_int64_t_s_s((g_105.f0 == (func_21((*l_313), (((safe_mod_func_uint64_t_u_u(((g_105.f6 | (safe_rshift_func_uint16_t_u_u((g_254 != ((safe_add_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_102, 6)), 0x79D939C0L)), (safe_mod_func_int32_t_s_s(((func_21(g_8, g_375, func_21(func_21((safe_rshift_func_uint16_t_u_u(((*l_313) == (*l_313)), 12)), g_254, g_105.f8, (*l_314)), (*l_313), g_254, g_105.f2), g_105.f5) != 0x320C1507L) < g_105.f4), (-5L))))) > g_105.f1)), g_102))) < g_105.f3), g_105.f0)) > g_105.f6) < (*l_313)), (*l_314), g_254) > g_375)), g_105.f9));
                }
                (*l_379) = &l_332;

                ;
            }

            ;
            ;
            (*l_400) &= (safe_mod_func_uint32_t_u_u(((l_317 != (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(func_15(((((safe_mod_func_uint64_t_u_u((g_247 | (*l_313)), ((((g_8 ^ (4294967295UL < ((safe_lshift_func_int8_t_s_u(((l_313 != &g_102) <= g_105.f8), (safe_mod_func_int16_t_s_s(l_317, (*l_313))))) && g_105.f6))) <= 0x94L) | 0x5FL) & g_254))) <= g_105.f6) == (*l_314)) != (*l_314)), l_398, l_332, g_247, (*l_314)), 0xC2L)) || g_105.f9), 0x5B8F6BA0L)), g_247)) || l_332) < (*l_314)), (*l_314))), (*l_313)))) >= g_254), (*l_314)));
            for (l_150.f0 = 21; (l_150.f0 <= 27); l_150.f0++)
            {
                char l_403 = 0x6BL;
                int l_407 = 0xF579C8DCL;
                (*l_313) = l_403;
                for (g_105.f2 = (-4); (g_105.f2 >= 11); g_105.f2 = safe_add_func_int16_t_s_s(g_105.f2, 1))
                {
                    long long l_406 = 0xA862AB6F65395134LL;
                    if (l_403)
                    {
                        if (l_406)
                            break;
                    }
                    else
                    {
                        unsigned l_410 = 0x7242D300L;
                        l_407 = (l_403 > g_102);
                        g_254 |= (!(func_9((safe_rshift_func_uint8_t_u_s((*l_314), 3)), (*l_314), g_105.f3, l_410, g_102) <= (safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((g_105.f2 || (0xB001480DL & (-4L))), l_410)), g_304))));
                        (*l_400) &= (*l_314);
                    }
                    if ((*l_314))
                        break;
                    return g_8;


                }
                for (g_8 = 27; (g_8 > 54); ++g_8)
                {
                    int l_421 = 5L;
                    (*l_314) = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(func_32(l_421), ((g_8 && (&l_314 != (void*)0)) && (*l_400)))) >= (g_254 > (*l_314))), g_375));
                    return g_105.f8;


                }
                (*l_314) = ((void*)0 == g_292);
            }
        }


        ;
    }


    ;
    if ((g_304 >= (&l_150 == &l_150)))
    {
        int l_426 = 0xAE5C08FBL;
        struct S0 l_428 = {0x7E45DD3DAC444CB2LL,7L,253UL,2UL,0UL,0UL,3UL,1UL,0x6BC45FCBL,0L};
        for (l_217 = 25; (l_217 < (-8)); l_217--)
        {
            unsigned long long l_427 = 0x864756BCE59C2AA1LL;
            for (g_105.f7 = (-2); (g_105.f7 < 9); g_105.f7 = safe_add_func_uint16_t_u_u(g_105.f7, 4))
            {
                l_427 ^= l_426;
            }
        }
        l_428 = l_428;
        return l_428.f5;
    }
    else
    {
        int l_431 = 4L;
        unsigned long long l_432 = 0x41B244C71C0AFDA3LL;
        char l_435 = 0x8EL;
        if ((((((safe_lshift_func_int16_t_s_u((0x560C9A0500A41F3ALL & g_105.f9), g_105.f1)) & (l_431 >= l_432)) > l_431) && func_9(g_105.f3, (*l_314), (safe_rshift_func_uint8_t_u_u(l_431, l_432)), g_105.f8, g_105.f6)) ^ l_435))
        {
            struct S0 l_436 = {0x5D9CB1DAB4E5C12BLL,-10L,0xB1L,0x181DDB77L,0x6FL,7UL,0x476ADC625F9D7833LL,1UL,-1L,0xD6L};
            struct S0 *l_437 = &l_436;
            (*l_437) = l_436;
        }
        else
        {
            unsigned long long l_438 = 0x28B3160A0A59EF8ELL;
            int l_442 = (-1L);
            (*l_314) |= (l_438 <= g_105.f3);
            l_442 ^= ((safe_mod_func_uint8_t_u_u(0x8EL, 9UL)) ^ (safe_unary_minus_func_int8_t_s(g_102)));
        }
    }
    for (g_247 = 14; (g_247 == (-10)); g_247 = safe_sub_func_uint16_t_u_u(g_247, 6))
    {
        short l_459 = (-1L);
        struct S0 *l_474 = &l_150;
        struct S0 l_475 = {0xB4D768535E8020F5LL,0L,1UL,0x805AE64BL,0x1FL,4294967295UL,1UL,0x8815A51BL,0xF4B3580DL,-1L};
        unsigned char l_491 = 0xD3L;
        short l_495 = 0x0A93L;
        if ((*l_314))
        {
            struct S0 *l_453 = &g_105;
            int l_476 = 0xA8126CA8L;
            if (((-8L) || (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*l_314), ((&l_314 != (void*)0) < g_105.f7))), ((void*)0 != l_453))), func_21(l_454, (safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((*l_314), (*l_314))), l_459)), g_105.f7, g_105.f6))), g_105.f6))))
            {
                (*l_314) |= (g_8 <= (safe_rshift_func_int8_t_s_s(l_459, 7)));
                l_314 = &l_217;

                ;
            }
            else
            {
                struct S0 l_462 = {18446744073709551613UL,1L,0UL,0x4CC1B72AL,252UL,4294967287UL,0x20F999477BB3A240LL,5UL,0x10DE1079L,0x8DL};
                long long l_484 = 1L;
                int *l_498 = &l_476;
                l_462 = l_462;
                if (func_21((safe_sub_func_uint16_t_u_u(func_34((*l_314), ((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_471, ((safe_mod_func_int16_t_s_s(l_459, 1L)) || func_34(g_105.f7, l_459, (((void*)0 == l_474) && (g_247 != 0xD26A85871FE35749LL)), l_475, g_247)))) <= g_375), g_375)), l_476)) & 0L), g_375, g_477, (*l_314)), l_476)), g_254, (*l_314), l_475.f1))
                {
                    unsigned long long l_489 = 1UL;
                    (*l_314) &= ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0xEAL, ((0x2AC03485B17A3259LL ^ (safe_add_func_int64_t_s_s((g_105.f8 ^ func_21((l_484 ^ ((safe_mod_func_uint16_t_u_u(0UL, func_21(l_476, l_462.f3, (((g_477.f8 >= (safe_rshift_func_uint16_t_u_s((0L && l_476), g_247))) != l_489) >= l_462.f9), g_477.f4))) ^ l_490)), l_475.f4, l_489, l_491)), l_462.f9))) >= g_304))) <= g_477.f7), l_475.f1)) || 0xA3C33D08F65F2EC5LL);
                }
                else
                {
                    long long l_494 = 0x97AF023F1CE54241LL;
                    int **l_499 = &g_129;
                    (*l_314) = (safe_add_func_int16_t_s_s(((g_254 != (func_34(l_494, func_21(g_477.f7, l_495, l_475.f6, l_476), ((safe_mod_func_uint32_t_u_u((g_105.f7 | l_494), l_475.f2)) & 0x21L), l_462, l_495) & 0x03B91AA9L)) || g_247), 6L));
                    (*l_499) = l_498;

                    ;
                }


            }


        }
        else
        {
            int **l_500 = &g_129;
            struct S0 l_505 = {18446744073709551615UL,0x35175629L,0x49L,2UL,0x54L,0x906E9632L,3UL,18446744073709551615UL,0x409F8CBEL,9L};
            l_475.f1 ^= 3L;
            (*l_500) = &l_217;

            ;
            for (l_150.f7 = 0; (l_150.f7 < 58); ++l_150.f7)
            {
                char l_512 = (-1L);
                int *l_515 = &l_475.f1;
                (*l_500) = &g_247;

                ;
                for (l_459 = 0; (l_459 <= 17); l_459 = safe_add_func_uint8_t_u_u(l_459, 1))
                {
                    l_505 = (*l_474);
                }
                (*l_515) &= (g_8 && ((((safe_lshift_func_uint16_t_u_u(g_477.f3, func_34(g_477.f0, (safe_sub_func_int32_t_s_s((((+(*l_314)) > func_32((safe_lshift_func_uint8_t_u_u(l_512, (((safe_lshift_func_uint8_t_u_u((0xDE72570FL <= func_63(l_505, g_477.f0)), 7)) & 5L) != 0x0F93FE5C3C306D34LL))))) == l_491), g_477.f1)), g_477.f6, l_150, l_512))) || (**l_500)) == g_304) & 0x68L));

                ;
            }

            ;
            (*l_314) ^= 0x48AB64A8L;
        }
        (*l_314) &= g_516;
    }


    return g_102;


}







static short func_2(unsigned p_3, unsigned short p_4, long long p_5, unsigned p_6)
{
    unsigned long long l_248 = 0UL;
    int *l_253 = &g_254;
    (*l_253) &= func_42(p_4, l_248, p_5, (l_248 < (+(safe_sub_func_int16_t_s_s((g_105.f2 ^ ((func_9(l_248, ((p_6 ^ p_6) > (safe_lshift_func_uint16_t_u_u(g_105.f8, 0))), g_105.f9, l_248, l_248) >= p_5) != l_248)), 0x6CCCL)))), g_105.f6);
    return p_5;
}







static short func_9(unsigned long long p_10, unsigned long long p_11, unsigned p_12, unsigned p_13, unsigned p_14)
{
    int *l_227 = &g_105.f1;
    struct S0 *l_234 = &g_105;
    struct S0 **l_233 = &l_234;
    struct S0 ***l_232 = &l_233;
    int **l_242 = (void*)0;
    int ***l_241 = &l_242;
    (*l_227) |= 0xA0988E54L;
    g_102 ^= ((*l_227) | (safe_mod_func_uint8_t_u_u(p_14, ((65535UL & ((safe_rshift_func_uint16_t_u_u((l_232 == (void*)0), 6)) > ((((g_105.f6 ^ (((&g_102 == (void*)0) >= (safe_lshift_func_uint8_t_u_u((((*l_227) != p_12) | p_13), 3))) || (-5L))) < (*l_227)) | p_10) <= g_105.f3))) || 1L))));
    g_247 ^= func_21(g_105.f2, (safe_lshift_func_int8_t_s_s(((0L == (safe_add_func_int64_t_s_s(((void*)0 == l_241), g_105.f0))) ^ (g_105.f9 | (func_21((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(g_105.f0, func_21((g_105.f0 != p_14), p_13, (*l_227), (*l_227)))), 0xDAD00C46L)), p_12, g_105.f9, g_105.f5) >= g_105.f8))), p_13)), (*l_227), g_105.f0);
    return g_105.f5;
}







static long long func_15(unsigned char p_16, char p_17, unsigned long long p_18, int p_19, short p_20)
{
    int *l_223 = &g_102;
    struct S0 l_224 = {18446744073709551615UL,0x6D48F99CL,0x2AL,0x956A4831L,0xFEL,0x01F0A48DL,0x4B5F3555BB47FFCALL,0xF29AA79EL,0x77B5E051L,2L};
    struct S0 *l_225 = (void*)0;
    struct S0 *l_226 = &g_105;
    (*l_223) |= ((safe_unary_minus_func_uint16_t_u(65535UL)) <= 255UL);
    (*l_226) = l_224;
    return p_17;
}







static char func_21(int p_22, long long p_23, char p_24, unsigned long long p_25)
{
    int *l_220 = &g_102;
    for (p_23 = (-12); (p_23 != (-15)); p_23--)
    {
        int **l_221 = &l_220;
        (*l_221) = l_220;
    }
    return (*l_220);
}







static unsigned char func_28(unsigned long long p_29, int p_30, unsigned char p_31)
{
    struct S0 l_215 = {18446744073709551610UL,-1L,1UL,4294967286UL,0x54L,0x791F8131L,6UL,1UL,0xF2D10044L,-1L};
    struct S0 *l_216 = &g_105;
    (*l_216) = l_215;
    return l_215.f4;
}







static char func_32(unsigned long long p_33)
{
    int *l_175 = &g_102;
    int **l_176 = (void*)0;
    int **l_177 = &l_175;
    int *l_178 = &g_102;
    struct S0 *l_214 = &g_105;
    (*l_177) = l_175;
    (*l_177) = l_178;
    if ((*l_178))
    {
        int *l_179 = &g_102;
        (*l_177) = l_179;
        (**l_177) = (~p_33);
        (*l_177) = l_179;
    }
    else
    {
        int ***l_180 = &l_176;
        struct S0 **l_198 = (void*)0;
        int l_199 = 0L;
        struct S0 *l_212 = &g_105;
        struct S0 **l_213 = &l_212;
        if (((((void*)0 != l_180) == ((safe_sub_func_int64_t_s_s((+g_105.f3), g_105.f5)) <= (&g_129 == (*l_180)))) ^ (p_33 <= (safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((g_105.f6 <= ((((safe_add_func_int32_t_s_s((**l_177), 0x5427B448L)) & 8UL) == p_33) || p_33)), p_33)), g_105.f5)), 0x9686L)))))
        {
            struct S0 l_195 = {0UL,0xA87EFD3BL,0xD2L,0xB55C4BC6L,0xF4L,0x53DE24A4L,4UL,0UL,0x653626FDL,0xA4L};
            for (g_105.f2 = (-18); (g_105.f2 > 45); ++g_105.f2)
            {
                if (p_33)
                    break;
            }
            l_199 ^= (safe_mod_func_int32_t_s_s(func_63(l_195, l_195.f6), (safe_lshift_func_uint8_t_u_s(((l_198 == l_198) && g_8), 7))));

            ;
            (*g_129) ^= ((g_105.f3 != (((*l_180) == (*l_180)) ^ g_105.f3)) ^ g_105.f3);
            (*g_129) = (*g_129);
        }
        else
        {
            unsigned l_211 = 0UL;
            (*l_177) = &g_102;
            (*l_175) = (safe_unary_minus_func_uint32_t_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((((0x73L >= ((p_33 & ((p_33 | 0x199BFBAFD8273AD2LL) | g_105.f5)) < g_105.f4)) ^ (((safe_sub_func_uint8_t_u_u(((**l_177) || g_102), (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((**l_177), g_102)), g_105.f8)))) || p_33) != g_105.f3)) >= g_105.f6) | g_105.f0), g_105.f1)), p_33))));
            l_211 = 0xB980044AL;
        }
        (*l_213) = l_212;
        (*l_178) = func_34((*l_178), g_105.f1, ((void*)0 == l_214), g_105, g_105.f9);
    }
    return g_105.f5;
}







static int func_34(unsigned short p_35, long long p_36, unsigned short p_37, struct S0 p_38, short p_39)
{
    struct S0 l_151 = {18446744073709551615UL,5L,251UL,4294967295UL,255UL,4294967294UL,7UL,0xCC8F446CL,0L,0x42L};
    struct S0 *l_152 = &g_105;
    int *l_153 = &g_102;
    int **l_154 = &l_153;
    unsigned l_165 = 0x9DF1BF41L;
    (*l_152) = l_151;
    (*l_152) = (*l_152);
    (*l_154) = l_153;
    if ((safe_add_func_uint64_t_u_u(((void*)0 != (*l_154)), func_42((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_105.f0, ((*l_153) | (p_38.f9 && (p_38.f8 | ((safe_lshift_func_int8_t_s_s(p_38.f9, ((**l_154) & (safe_lshift_func_uint8_t_u_s((0x23590D9D044D412DLL >= 1L), l_165))))) | g_105.f7)))))) | 0xE65761482281F5AFLL), (*l_153))), (*l_153), p_39, p_38.f0, g_105.f4))))
    {
        struct S0 **l_167 = &l_152;
        struct S0 ***l_166 = &l_167;
        (*l_154) = (*l_154);
        (*l_166) = &l_152;
        (*l_154) = &g_102;
    }
    else
    {
        unsigned l_170 = 0UL;
        p_38.f1 ^= ((((func_63((*l_152), (**l_154)) | (safe_mod_func_int16_t_s_s((l_170 <= p_37), (l_170 ^ (safe_mod_func_uint16_t_u_u((g_8 || ((!1L) == ((safe_rshift_func_int8_t_s_u(g_8, p_38.f3)) == 6L))), 0x4A36L)))))) || (*g_129)) >= p_37) & g_8);

        ;
        return l_170;
    }
    return (**l_154);
}







static long long func_42(unsigned p_43, unsigned short p_44, unsigned char p_45, unsigned short p_46, int p_47)
{
    int l_50 = (-1L);
    struct S0 l_66 = {0x2349124C6E12CDFDLL,1L,5UL,0x9752EE8BL,2UL,6UL,18446744073709551612UL,4UL,0x0A7B48FEL,1L};
    unsigned long long l_132 = 0xC7F2D8A91DCC1457LL;
    struct S0 *l_149 = &l_66;
    for (p_47 = 15; (p_47 == (-2)); --p_47)
    {
        return l_50;
    }
    for (p_44 = 0; (p_44 < 6); p_44 = safe_add_func_int8_t_s_s(p_44, 6))
    {
        int l_81 = 0xD2A6A8E4L;
        int *l_146 = &g_102;
        struct S0 l_147 = {0x5EFA8D4CD45573ACLL,0xB988980CL,1UL,0xDDA28263L,5UL,0x28C3FF06L,0xEF2C45E82407D1D3LL,0xCE05B3D2L,0x23408E39L,1L};
        struct S0 *l_148 = &l_66;
        for (p_43 = 3; (p_43 == 42); p_43++)
        {
            long long l_133 = 0x9145EC307D3DBF9DLL;
            unsigned long long l_140 = 0x6939548CC8C47D00LL;
            int *l_141 = &l_66.f1;
            l_133 = (safe_rshift_func_int16_t_s_u((0x5FL && l_50), (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((func_63(l_66, (((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(g_8, ((((g_8 == (safe_add_func_int32_t_s_s(g_8, (safe_lshift_func_int16_t_s_u(9L, ((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((l_81 == l_81) != p_44), l_66.f6)) != l_66.f4), g_8)), p_43)) | 9L)))))) | p_47) <= 0L) <= g_8))), g_8)) == g_8) < 0xE05992E4L)) & l_81), l_132)), (-1L))), 0x19C01F84L))));

            ;
            (*l_141) ^= (((((0x6465E51FL != (safe_add_func_uint64_t_u_u((p_46 || p_44), (safe_rshift_func_uint16_t_u_s(g_105.f4, (5L >= g_105.f6)))))) <= g_105.f1) || ((safe_add_func_int8_t_s_s((~l_140), g_102)) ^ g_105.f2)) ^ 1UL) | (*g_129));
            (*l_141) = (l_81 | (safe_sub_func_int16_t_s_s((-1L), (((~p_46) || g_105.f5) & g_105.f0))));
        }
        (*l_146) ^= ((0L > ((g_105.f0 & (p_47 | (&g_102 == (void*)0))) != p_46)) ^ (safe_sub_func_int8_t_s_s(((4294967294UL && 0UL) != (g_105.f6 || l_81)), l_66.f7)));
        (*l_148) = l_147;
    }
    (*l_149) = l_66;
    return g_105.f7;
}







static unsigned char func_63(struct S0 p_64, unsigned p_65)
{
    char l_88 = 1L;
    int *l_130 = &g_102;
    if ((safe_lshift_func_uint16_t_u_s(0x73DDL, (safe_mod_func_int32_t_s_s(p_64.f0, (safe_add_func_int8_t_s_s(l_88, ((((0UL && l_88) < (l_88 == (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((g_8 & ((g_8 == ((!l_88) != 2UL)) ^ g_8)) >= 0x5C26FF55L), g_8)), p_64.f6)), (-2L))))) < p_64.f3) >= l_88))))))))
    {
        long long l_100 = 0x2E8F98891C1AAD5ELL;
        int *l_117 = &g_102;
        int **l_116 = &l_117;
        struct S0 l_125 = {1UL,0x5D16F988L,1UL,4294967286UL,0UL,1UL,0UL,8UL,7L,7L};
        for (l_88 = 7; (l_88 != (-21)); l_88 = safe_sub_func_uint8_t_u_u(l_88, 2))
        {
            unsigned long long l_97 = 0UL;
            if (l_97)
            {
                short l_98 = (-4L);
                struct S0 *l_104 = &g_105;
                int *l_112 = &g_102;
                if ((l_98 | p_64.f2))
                {
                    int l_99 = 0xD69BDFBFL;
                    int *l_101 = &g_102;
                    if (l_99)
                        break;
                    (*l_101) |= l_100;
                }
                else
                {
                    int *l_103 = (void*)0;
                    g_102 &= 0x4AD0BC07L;
                }
                (*l_104) = p_64;
                (*l_112) &= (p_64.f6 < (g_105.f2 || (safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((l_100 | (safe_rshift_func_uint8_t_u_u((l_112 != (void*)0), 7))), 5)) > p_64.f2), 0x947F7088L))));
            }
            else
            {
                int **l_113 = (void*)0;
                int *l_115 = (void*)0;
                int **l_114 = &l_115;
                int ***l_118 = &l_113;
                (*l_114) = &g_102;

                ;
                (*l_118) = l_116;

                ;
                (*l_117) |= ((4294967295UL ^ (((-1L) <= (g_105.f8 <= g_105.f5)) && (0x501D8DD584760612LL ^ ((+(safe_lshift_func_uint16_t_u_u(g_105.f2, (p_64.f4 && (0xDCAF5201L <= ((7UL != p_64.f8) > 0xF246F767204C5B33LL)))))) && p_64.f0)))) >= 0xE886BE4BL);
            }
        }
        for (g_105.f3 = (-15); (g_105.f3 != 7); ++g_105.f3)
        {
            (**l_116) &= (safe_rshift_func_int8_t_s_u(p_65, 3));
            l_125 = p_64;
        }
        for (p_65 = 0; (p_65 >= 4); ++p_65)
        {
            unsigned l_128 = 0x947AAB45L;
            g_102 = ((void*)0 != &g_102);
            (*l_117) &= l_128;
        }
        g_129 = &g_102;

        ;
    }
    else
    {
        int **l_131 = &g_129;
        (*l_131) = l_130;

        ;
        return p_64.f1;
    }

    ;
    (*g_129) ^= p_64.f5;
    return p_64.f0;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_105.f5, "g_105.f5", print_hash_value);
    transparent_crc(g_105.f6, "g_105.f6", print_hash_value);
    transparent_crc(g_105.f7, "g_105.f7", print_hash_value);
    transparent_crc(g_105.f8, "g_105.f8", print_hash_value);
    transparent_crc(g_105.f9, "g_105.f9", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_477.f0, "g_477.f0", print_hash_value);
    transparent_crc(g_477.f1, "g_477.f1", print_hash_value);
    transparent_crc(g_477.f2, "g_477.f2", print_hash_value);
    transparent_crc(g_477.f3, "g_477.f3", print_hash_value);
    transparent_crc(g_477.f4, "g_477.f4", print_hash_value);
    transparent_crc(g_477.f5, "g_477.f5", print_hash_value);
    transparent_crc(g_477.f6, "g_477.f6", print_hash_value);
    transparent_crc(g_477.f7, "g_477.f7", print_hash_value);
    transparent_crc(g_477.f8, "g_477.f8", print_hash_value);
    transparent_crc(g_477.f9, "g_477.f9", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
