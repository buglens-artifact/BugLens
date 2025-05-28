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
   unsigned short f0;
   int f1;
   long long f2;
   unsigned f3;
   unsigned char f4;
   int f5;
   unsigned f6;
   unsigned f7;
   signed f8 : 15;
   unsigned char f9;
};


static unsigned char g_8 = 1UL;
static unsigned g_11 = 1UL;
static unsigned g_34 = 0xEA3D8810L;
static unsigned char g_55 = 0UL;
static int g_60 = (-2L);
static int *g_59 = &g_60;
static struct S0 g_62 = {1UL,0xAFDF115CL,1L,1UL,0x5BL,0xE5BD571EL,0x572AB10EL,18446744073709551615UL,-56,0x7AL};
static struct S0 g_64 = {0x7E70L,0xECB515FEL,0x9BA5CD23E821D2A6LL,4294967292UL,0x9EL,0x226F84B8L,0x9C93506FL,0xA133A5B7L,62,0x93L};
static char g_105 = 1L;
static char g_109 = 0L;
static char g_111 = 0L;
static unsigned *g_118 = &g_62.f3;
static short g_127 = 0xE68CL;
static int g_143 = 0xD7195131L;
static struct S0 *g_154 = &g_62;
static struct S0 g_193 = {65535UL,-1L,0x5A1FB4F793AD1AC5LL,0x717F0BBEL,1UL,-3L,0x4396262BL,18446744073709551611UL,-150,0UL};
static unsigned char *g_239 = (void*)0;
static unsigned char **g_238 = &g_239;
static struct S0 g_270 = {65530UL,0x6DE6D401L,0xD43E14E9EA8A35C7LL,4294967295UL,0x31L,0x5A65D4B9L,0xA1CE282AL,0x58E5FC13L,154,250UL};
static char *g_311 = &g_109;
static char **g_310 = &g_311;



static struct S0 func_1(void);
static int func_2(unsigned p_3, unsigned p_4, struct S0 p_5, char p_6, unsigned p_7);
static unsigned func_14(unsigned long long p_15, unsigned p_16, unsigned short p_17, unsigned long long p_18);
static unsigned char func_20(unsigned * p_21);
static unsigned * func_22(unsigned short p_23);
static unsigned long long func_28(unsigned * p_29, unsigned * p_30, unsigned p_31, unsigned * p_32);
static unsigned * func_35(unsigned * p_36, int p_37);
static unsigned * func_38(unsigned * p_39, unsigned * p_40, unsigned short p_41, short p_42, unsigned p_43);
static unsigned * func_44(unsigned p_45, int p_46, unsigned short p_47, unsigned p_48, long long p_49);
static unsigned func_50(unsigned * p_51, unsigned short p_52, unsigned p_53);
static struct S0 func_1(void)
{
    unsigned *l_9 = (void*)0;
    unsigned *l_10 = &g_11;
    int l_19 = (-1L);
    short l_24 = 0xFA55L;
    unsigned char *l_158 = &g_64.f9;
    char l_159 = 0xEFL;
    unsigned long long l_271 = 18446744073709551614UL;
    struct S0 l_327 = {0x50C6L,0xC01269EAL,0xC1F1D460D4B317CALL,0UL,0x2AL,0L,1UL,0xE054320CL,-115,0x63L};
    unsigned short l_342 = 0x781AL;
    char ***l_343 = &g_310;
    struct S0 **l_362 = (void*)0;
    int **l_407 = &g_59;
    char l_419 = 0x6FL;
    unsigned char ***l_424 = &g_238;
    if (func_2(((*l_10) = g_8), ((safe_add_func_uint32_t_u_u(func_14((65535UL < (l_19 <= ((*l_158) = (func_20(func_22(l_24)) & l_24)))), (l_19 < (l_24 ^ l_19)), l_24, l_159), l_19)) & l_19), g_270, l_271, g_270.f4))
    {
        int **l_320 = (void*)0;
        int **l_321 = &g_59;
        (*l_321) = &g_60;

        ;
    }
    else
    {
        int *l_322 = &g_64.f5;
        struct S0 **l_324 = &g_154;
        struct S0 ***l_323 = &l_324;
        int *l_380 = &g_193.f5;
        (*l_322) = l_19;
        (*l_323) = &g_154;
        for (g_270.f9 = 0; (g_270.f9 >= 32); g_270.f9 = safe_add_func_int64_t_s_s(g_270.f9, 3))
        {
            unsigned *l_335 = &g_270.f3;
            int l_348 = 0xC7848A5FL;
            int *l_349 = &g_62.f1;
            struct S0 *l_373 = &g_193;
            l_327 = g_270;
            for (g_64.f1 = 12; (g_64.f1 != (-17)); g_64.f1--)
            {
                int l_332 = 0xAFBEA2D0L;
                unsigned **l_336 = &l_9;
                int **l_339 = &l_322;
                struct S0 l_374 = {0x1EE8L,0xF59B802BL,-1L,0xC8E43733L,247UL,0xDB344362L,0UL,0x88692B57L,-150,0xC1L};
                struct S0 **l_387 = &g_154;
                char l_408 = 3L;
                (*l_339) = func_35(&g_11, ((safe_add_func_int8_t_s_s((**g_310), l_332)) & (safe_mod_func_uint64_t_u_u((0xCAL > (&g_59 != &g_59)), func_50(((*l_336) = l_335), l_332, ((safe_rshift_func_uint8_t_u_u(l_327.f0, 6)) ^ 0UL))))));

                ;
                ;
                if ((safe_add_func_uint8_t_u_u(l_342, (*g_311))))
                {
                    unsigned short l_352 = 65528UL;
                    int *l_353 = &g_62.f1;
                    unsigned l_372 = 0x6F61382AL;
                    struct S0 *l_375 = (void*)0;
                    struct S0 *l_376 = (void*)0;
                    struct S0 *l_377 = &l_327;
                    if ((0xE0L & ((l_271 < (**l_339)) && (*l_322))))
                    {
                        if (g_62.f0)
                            break;
                        (**l_339) = ((void*)0 != l_343);
                        (**l_339) = (**l_339);
                    }
                    else
                    {
                        unsigned short *l_346 = (void*)0;
                        unsigned *l_347 = (void*)0;
                        l_349 = func_35(func_35(&g_11, g_64.f9), (((func_50(func_35(func_35(&g_11, (((void*)0 != l_346) | ((&g_59 == &g_59) > (l_347 == g_118)))), l_348), g_62.f4, (*g_118)) >= l_348) <= l_348) <= (-3L)));

                        ;
                        (*l_322) = (safe_rshift_func_int8_t_s_u(l_352, 0));
                        l_353 = func_35(l_347, g_62.f1);

                        ;
                    }

                    ;
                    if ((safe_add_func_int8_t_s_s(((((*l_10) = (((((safe_sub_func_uint32_t_u_u(((*g_118) = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((*l_323) = l_362) != (void*)0), 0)), ((((**l_339) && (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((**l_339), l_159)) && g_109), (safe_unary_minus_func_int8_t_s((safe_mod_func_int32_t_s_s(g_64.f3, (safe_rshift_func_int8_t_s_u((((l_327.f9 | 65526UL) | (*l_322)) != 0xE888L), 1))))))))) < g_64.f5) ^ g_193.f8)))), 0xC3B5E432L)) == g_193.f1) | (**l_339)) ^ l_327.f8) > l_372)) <= g_193.f7) <= g_62.f2), l_332)))
                    {
                        l_373 = &g_64;

                        ;
                        g_62 = g_62;
                    }
                    else
                    {
                        g_59 = func_35(&g_11, g_62.f8);

                        ;
                    }

                    ;
                    (*l_377) = l_374;
                    for (l_374.f7 = 0; (l_374.f7 < 35); ++l_374.f7)
                    {
                        (*l_377) = l_374;
                        (*l_339) = l_380;

                        ;
                        if (g_270.f1)
                            continue;
                    }

                    ;
                }
                else
                {
                    (*l_339) = &g_60;

                    ;
                    (**l_339) = (func_50(&g_11, g_270.f1, (*l_349)) <= ((safe_rshift_func_uint8_t_u_u(g_270.f4, 1)) > func_50(&g_11, (safe_lshift_func_uint8_t_u_s(((g_64.f4 || (**l_339)) >= (**l_339)), 0)), (*g_118))));
                    (*l_323) = l_387;

                    ;
                }

                ;
                if (g_62.f6)
                {
                    unsigned l_398 = 1UL;
                    unsigned l_403 = 0xAB85B1BDL;
                    int **l_404 = &l_349;
                    (*l_404) = ((*l_339) = func_35(&g_11, (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_int8_t_s((safe_mod_func_uint64_t_u_u((func_50(((*l_336) = (void*)0), ((safe_div_func_uint32_t_u_u(0x5FF84C86L, (safe_add_func_uint8_t_u_u(((((l_398 ^ (safe_mod_func_int8_t_s_s((&l_398 != (void*)0), (safe_mod_func_uint16_t_u_u(l_342, (((***l_343) = (*g_311)) || ((-8L) ^ 0x231961AEL))))))) | 0x8658150582B65BB6LL) && 0x714B8421330A6877LL) | g_64.f8), l_403)))) > 65532UL), (*g_118)) || g_193.f0), g_62.f4)))))), (*l_322)))));

                    ;
                    ;
                    ;
                    for (l_327.f0 = (-12); (l_327.f0 < 24); l_327.f0 = safe_add_func_uint8_t_u_u(l_327.f0, 9))
                    {
                        (*l_380) = func_50(&g_34, l_24, l_19);
                        (**l_339) = 0xAE2648E4L;
                    }
                }
                else
                {
                    (*l_339) = &g_60;

                    ;
                }

                ;
                ;
                l_408 = (l_407 != &l_380);
            }

            ;
            ;
        }

        ;

        ;
        ;
    }

    ;

    ;

    for (g_270.f0 = 0; (g_270.f0 < 41); g_270.f0 = safe_add_func_uint16_t_u_u(g_270.f0, 4))
    {
        int l_415 = 2L;
        unsigned char l_418 = 0xA8L;
        unsigned long long l_420 = 0x149D98BB1D1395B3LL;
        int *l_425 = &g_193.f1;
        short *l_428 = &g_127;
        short *l_429 = &l_24;
        unsigned short *l_438 = &g_193.f0;
        char *l_444 = &l_159;
        int *l_445 = &g_62.f1;
        (*l_425) = (safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u((l_415 | (safe_mod_func_uint8_t_u_u(((l_418 >= l_419) >= l_420), (safe_sub_func_uint8_t_u_u(((&g_59 != (void*)0) & (safe_unary_minus_func_int32_t_s((l_424 != (void*)0)))), l_420))))), 2)) <= g_62.f6), l_327.f1));
        (*l_407) = &g_60;

        ;
        (*l_445) = ((*l_425) = (safe_div_func_int32_t_s_s((safe_sub_func_int64_t_s_s(g_193.f2, ((((safe_mod_func_uint64_t_u_u((func_50(func_22(g_64.f2), ((*l_438) = (safe_add_func_int8_t_s_s((*l_425), (*l_425)))), (((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_193.f5, ((*l_444) = (!(safe_unary_minus_func_uint32_t_u(0x6BB9B51BL)))))), g_270.f5)) ^ (-6L)) ^ (*l_425))) <= 0x2D7CA3CE02B74560LL), 1UL)) >= (*l_425)) || (*g_118)) == g_193.f4))), (*l_425))));

        ;
    }
    l_327 = g_64;
    return g_193;
}







static int func_2(unsigned p_3, unsigned p_4, struct S0 p_5, char p_6, unsigned p_7)
{
    char l_272 = (-7L);
    unsigned *l_275 = &g_64.f6;
    int l_276 = 0xEF5C302EL;
    long long l_283 = 0x3E4B16275ACE0F7ALL;
    struct S0 l_291 = {0xA037L,1L,0x97BD910637C8973BLL,0xB5CCB47CL,0xF1L,0x302F4F0BL,0x1648138FL,1UL,-55,0xC8L};
    char l_316 = 0x38L;
    unsigned short *l_317 = &g_193.f0;
    if ((p_5.f8 = (l_276 = (((l_272 != (-10L)) || ((safe_rshift_func_uint8_t_u_s(p_3, g_193.f6)) | 0x58D1362EL)) & l_272))))
    {
        unsigned *l_279 = (void*)0;
        int *l_292 = &l_291.f5;
        if (g_109)
        {
            unsigned **l_280 = &g_118;
            int l_284 = 0x78B3AE40L;
            unsigned short *l_285 = &g_64.f0;
            int *l_286 = &g_270.f5;
            int **l_287 = &l_286;
            (*l_286) = (safe_sub_func_uint16_t_u_u(((*l_285) = func_50(l_279, p_6, l_284)), p_7));
            (*l_287) = &l_284;

            ;
        }
        else
        {
            struct S0 *l_288 = (void*)0;
            struct S0 *l_289 = (void*)0;
            struct S0 *l_290 = &g_270;
            (*l_290) = ((*g_154) = (*g_154));
            (*g_154) = l_291;
        }
        p_5.f8 = func_50(&g_34, p_5.f8, l_291.f7);
        (*l_292) = 0xF094154AL;
    }
    else
    {
        int **l_293 = (void*)0;
        int **l_294 = &g_59;
        unsigned *l_304 = (void*)0;
        struct S0 **l_314 = (void*)0;
        struct S0 **l_315 = &g_154;
        (*l_294) = &g_60;

        ;
        for (g_193.f0 = (-16); (g_193.f0 < 37); g_193.f0 = safe_add_func_int16_t_s_s(g_193.f0, 6))
        {
            struct S0 l_297 = {0xF7FEL,0L,0xAC6F9D898FADC044LL,0xE1DC77BEL,0UL,1L,4294967291UL,0xC6D22B69L,178,253UL};
            unsigned char l_309 = 6UL;
            (*g_154) = l_297;
            for (g_8 = 10; (g_8 <= 21); ++g_8)
            {
                short *l_305 = &g_127;
                char *l_308 = &g_109;
                (*l_294) = func_44((0x11L > ((p_5.f7 > (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((*l_305) = func_20(l_304)), 13)), (18446744073709551615UL || p_5.f0)))) && ((*l_308) = ((0x6767L != (safe_add_func_uint16_t_u_u(l_291.f3, (0x1CL < g_60)))) < 18446744073709551612UL)))), p_5.f7, g_193.f3, g_62.f4, p_5.f9);

                ;
            }
            (**l_294) = l_309;
            if (((**l_294) = (*g_59)))
            {
                char **l_312 = &g_311;
                char ***l_313 = &l_312;
                (*g_59) = (g_310 == ((*l_313) = l_312));
            }
            else
            {
                (*l_294) = &g_60;

                ;
            }
        }

        ;
        (*l_315) = &p_5;

        ;
    }

    ;
    if (l_283)
    {
        for (l_291.f3 = (-7); (l_291.f3 != 38); ++l_291.f3)
        {
            (*g_154) = (*g_154);
        }
    }
    else
    {
        return l_291.f7;


    }
    return l_316;


}







static unsigned func_14(unsigned long long p_15, unsigned p_16, unsigned short p_17, unsigned long long p_18)
{
    int *l_164 = (void*)0;
    int l_167 = 0x1C66ACBFL;
    unsigned char *l_171 = &g_8;
    unsigned char **l_170 = &l_171;
    unsigned *l_246 = &g_62.f3;
    unsigned l_249 = 0x902586CCL;
    unsigned long long l_253 = 18446744073709551613UL;
    unsigned char **l_262 = &g_239;
    int *l_264 = &g_64.f5;
    int **l_269 = &l_164;
    if ((((safe_add_func_int64_t_s_s((-1L), 0UL)) ^ (safe_rshift_func_int16_t_s_u(0xE77CL, 11))) && p_16))
    {
        unsigned char l_172 = 0x11L;
        int **l_173 = &g_59;
        l_164 = (void*)0;
        (*l_173) = func_44(((safe_add_func_uint8_t_u_u(g_109, l_167)) & g_62.f6), g_60, func_50(l_164, (p_18 | (safe_mod_func_int32_t_s_s((l_170 != &l_171), (*g_118)))), p_16), l_172, p_15);

        ;
    }
    else
    {
        unsigned *l_174 = &g_64.f6;
        int l_179 = (-9L);
        unsigned short *l_182 = &g_64.f0;
        int *l_213 = &g_64.f1;
        long long *l_247 = &g_62.f2;
        char l_248 = 0xB1L;
        int **l_250 = &l_164;
        long long *l_251 = &g_62.f2;
        long long **l_252 = &l_251;
        if (((0x76L | (1L | g_62.f3)) || 5UL))
        {
            int **l_183 = &g_59;
            int **l_184 = &l_164;
            unsigned char **l_217 = &l_171;
            unsigned **l_226 = &g_118;
            (*g_154) = (*g_154);
            (*l_184) = ((*l_183) = &l_179);

            ;
            ;
            for (g_62.f2 = (-24); (g_62.f2 >= 21); g_62.f2++)
            {
                unsigned l_200 = 0x1307E7D1L;
                int l_207 = 9L;
                char *l_210 = (void*)0;
                char *l_211 = &g_111;
                unsigned short *l_212 = &g_62.f0;
                for (l_179 = 0; (l_179 == (-11)); l_179 = safe_sub_func_uint64_t_u_u(l_179, 1))
                {
                    int l_195 = 0x7198ECC7L;
                    unsigned *l_201 = &g_193.f6;
                    char *l_206 = &g_111;
                    for (g_64.f0 = 0; (g_64.f0 != 48); g_64.f0 = safe_add_func_uint64_t_u_u(g_64.f0, 5))
                    {
                        struct S0 *l_192 = &g_193;
                        int *l_194 = &g_193.f1;
                        g_64.f8 = (p_17 < (safe_unary_minus_func_int64_t_s(g_62.f3)));
                        (*l_192) = (*g_154);
                        l_195 = ((*l_194) = (&g_34 != &p_16));
                        (*l_184) = &l_179;

                        ;
                    }
                    l_164 = &g_60;

                    ;
                    (*l_164) = (((((safe_sub_func_int32_t_s_s(((0xC6C0L > (safe_sub_func_uint64_t_u_u(l_200, func_50(l_201, g_64.f2, p_16)))) <= (g_55 = (safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s((*l_164), 255UL)), p_18)))), p_16)) < 0x0FL) & (*l_164)) > p_16) & 4L);
                    l_207 = (l_206 == (void*)0);
                }
                (*l_183) = &l_179;

                ;
                if (((*l_164) = ((((safe_lshift_func_int8_t_s_s(((*l_211) = (g_109 = l_179)), 2)) | (func_20(l_174) < l_207)) <= (l_179 == ((*l_212) = l_207))) < (0x3C0D7307L && (**l_184)))))
                {
                    unsigned short l_215 = 0xD5EEL;
                    if (l_207)
                    {
                        l_213 = ((*l_183) = &g_60);

                        ;
                        ;
                    }
                    else
                    {
                        struct S0 l_214 = {65527UL,5L,0xAD263BBA08E5E6B2LL,9UL,1UL,0x4781F182L,4294967287UL,18446744073709551614UL,61,255UL};
                        (*g_154) = l_214;
                    }

                    ;
                    return l_215;
                }
                else
                {
                    int *l_216 = &g_143;
                    unsigned char ***l_218 = (void*)0;
                    unsigned char ***l_219 = &l_170;
                    (*l_183) = func_35(&g_34, ((*l_216) = 0xC9AB25B9L));

                    ;
                    (*l_219) = l_217;
                    if ((safe_rshift_func_uint16_t_u_u(((*l_182) = (g_64.f9 < (g_193.f4 <= p_16))), 2)))
                    {
                        long long l_235 = (-1L);
                        g_59 = (*l_184);

                        ;
                        g_64.f1 = (safe_div_func_uint8_t_u_u((g_62.f9 = (safe_mod_func_int64_t_s_s((((*l_164) = (l_226 != &l_174)) || (safe_mod_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(p_15, 7)) || ((*l_164) < l_207)), (safe_rshift_func_uint8_t_u_u(255UL, func_50(&g_34, p_16, (*g_118)))))) == l_235), 0x9E05B609L))), g_193.f4))), l_235));
                        if (p_16)
                            continue;
                        if ((*g_59))
                            break;
                    }
                    else
                    {
                        (*g_59) = (*g_59);
                    }

                    ;
                }

                ;
            }

            ;
            ;
            if (p_16)
            {
                (*g_59) = 0x5547A387L;
                (*l_213) = (safe_sub_func_int32_t_s_s((*g_59), p_15));
            }
            else
            {
                (*l_183) = (void*)0;

                ;
            }

            ;
        }
        else
        {
            unsigned char ***l_240 = (void*)0;
            unsigned char ***l_241 = &g_238;
            (*l_241) = g_238;
        }

        ;
        ;
        (*l_250) = &l_167;

        ;
        (*l_164) = (((*l_213) = (l_247 == ((*l_252) = l_251))) == l_253);
        for (g_62.f5 = 0; (g_62.f5 <= 0); g_62.f5 = safe_add_func_int64_t_s_s(g_62.f5, 1))
        {
            unsigned char l_268 = 255UL;
            if ((1UL & p_17))
            {
                for (g_60 = 20; (g_60 >= (-6)); --g_60)
                {
                    unsigned char **l_263 = &l_171;
                    int l_267 = 0x211C2E64L;
                    (*l_250) = &g_60;

                    ;
                    (*l_250) = func_35(&p_16, p_17);

                    ;
                    if ((safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_262 == l_263), 2)), g_64.f9)))
                    {
                        (*l_250) = &g_60;

                        ;
                        (*l_213) = 4L;
                        l_264 = &g_60;

                        ;
                    }
                    else
                    {
                        (*l_250) = &g_60;

                        ;
                        if (g_111)
                            continue;
                    }

                    ;
                    for (g_193.f1 = 0; (g_193.f1 != (-25)); g_193.f1--)
                    {
                        (*l_213) = func_50(&l_249, l_267, ((*l_174) = ((*g_118) = 0x7A698B2BL)));
                        return (*g_118);


                    }
                }

                ;
            }
            else
            {
                (**l_250) = ((*l_264) = (g_193.f2 < ((p_15 ^ 0x4CL) && ((*g_118) = (l_268 = 0xE3C6850EL)))));
                return p_15;


            }

            ;
            (*l_250) = &l_167;

            ;
        }

        ;
    }


    ;
    ;
    (*l_264) = (p_16 == (0x74L ^ ((g_193.f1 == g_60) & 0xC4407F4EL)));
    (*l_269) = &g_60;

    ;
    return p_16;
}







static unsigned char func_20(unsigned * p_21)
{
    int **l_152 = &g_59;
    struct S0 *l_153 = &g_64;
    int l_157 = 0x4344FC8FL;
    (*l_152) = (void*)0;

    ;
    g_154 = l_153;

    ;
    if (g_62.f6)
    {
        (*g_154) = (*l_153);
    }
    else
    {
        int *l_156 = &g_62.f1;
        int **l_155 = &l_156;
        (*l_155) = ((*l_152) = &g_60);

        ;
        ;
        (*l_155) = p_21;


        (*l_152) = (*l_152);
    }

    ;
    return l_157;
}







static unsigned * func_22(unsigned short p_23)
{
    unsigned l_25 = 18446744073709551615UL;
    unsigned *l_33 = &g_34;
    unsigned char *l_54 = &g_55;
    int *l_149 = &g_62.f1;
    struct S0 l_150 = {0x6B92L,-1L,-6L,0x3AC039BAL,0x48L,0x4F8FBF41L,0xD501287AL,0x1E9EB336L,-36,255UL};
    struct S0 *l_151 = &g_64;
    (*l_149) = (l_25 <= (((+((1L && (safe_rshift_func_int8_t_s_u((func_28(l_33, l_33, p_23, (g_118 = func_35(func_38(&g_34, func_44(func_50(&g_34, (l_25 == ((*l_54) = l_25)), g_8), l_25, g_34, p_23, l_25), p_23, l_25, p_23), g_8))) == l_25), 7))) > 0x33L)) && 1UL) & p_23));

    ;
    (*l_151) = l_150;
    (*l_151) = (*l_151);
    return l_149;


}







static unsigned long long func_28(unsigned * p_29, unsigned * p_30, unsigned p_31, unsigned * p_32)
{
    int *l_119 = &g_62.f5;
    int **l_120 = &l_119;
    struct S0 *l_121 = &g_62;
    unsigned char *l_134 = &g_55;
    unsigned char **l_133 = &l_134;
    struct S0 *l_147 = &g_62;
    struct S0 **l_146 = &l_147;
    (*l_120) = l_119;
    if ((*g_59))
    {
        struct S0 *l_122 = &g_62;
        unsigned *l_123 = &g_64.f3;
        int l_124 = 0xA91DCC14L;
        l_122 = l_121;
        (*l_119) = func_50(func_35(l_123, g_64.f4), (*l_119), l_124);
    }
    else
    {
        unsigned short *l_125 = &g_64.f0;
        short *l_126 = &g_127;
        unsigned *l_132 = &g_62.f7;
        int l_137 = 0x2CBA5F0EL;
        char **l_138 = (void*)0;
        char *l_140 = (void*)0;
        char **l_139 = &l_140;
        int l_141 = 0xE4D89ECEL;
        int *l_142 = &g_143;
        unsigned **l_144 = &g_118;
        int *l_145 = &g_64.f5;
        (*l_120) = func_44(g_64.f6, (+p_31), ((*l_125) = (*l_119)), ((*l_132) = (((*l_126) = ((**l_120) < (**l_120))) > (safe_mod_func_int32_t_s_s((p_31 || g_62.f9), (safe_div_func_int16_t_s_s((((*p_30) | (*g_59)) && p_31), 65534UL)))))), p_31);

        ;
        (*l_120) = func_35(((*l_144) = func_44((l_133 == (void*)0), ((*l_142) = (((safe_sub_func_int64_t_s_s(0xB2524E1215561C65LL, ((func_50(l_132, func_50(&p_31, l_137, ((l_141 = ((!((((*l_139) = l_134) == l_134) & (*g_118))) > 2L)) <= g_62.f7)), (*p_29)) ^ (**l_120)) | 0x273B9243L))) == l_137) && (*p_30))), (**l_120), p_31, (**l_120))), g_55);

        ;
        (*l_121) = (*l_121);
        (*l_145) = ((*g_59) = (p_31 ^ p_31));
    }

    ;
    (*l_146) = (l_121 = l_121);
    if (p_31)
    {
        (*l_147) = g_62;
    }
    else
    {
        struct S0 l_148 = {65535UL,0x797DE492L,0x91EA856C88DE757ALL,0x5BD10381L,7UL,-6L,1UL,0x103C77F6L,-90,0x80L};
        (*l_146) = (*l_146);
        (**l_146) = l_148;
    }
    return g_64.f2;
}







static unsigned * func_35(unsigned * p_36, int p_37)
{
    return p_36;


}







static unsigned * func_38(unsigned * p_39, unsigned * p_40, unsigned short p_41, short p_42, unsigned p_43)
{
    long long l_65 = 0x569FAA33FE686B7DLL;
    int **l_74 = &g_59;
    unsigned char *l_78 = &g_64.f9;
    struct S0 l_87 = {8UL,0x38BC6A50L,0x0E7A76403EC6B4E2LL,1UL,3UL,0xD6F38C13L,1UL,0x61D8FC8FL,-56,1UL};
    short l_88 = 0xEEE5L;
    unsigned short l_103 = 9UL;
    struct S0 *l_116 = &g_64;
    unsigned *l_117 = &l_87.f3;
    if (l_65)
    {
        int l_75 = 0x1A75C26FL;
        int l_79 = 0x0950CF10L;
        int *l_85 = (void*)0;
        int l_86 = (-4L);
        unsigned *l_91 = &g_64.f7;
        int *l_94 = &l_75;
        l_86 = (safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((((**l_74) = ((safe_rshift_func_uint16_t_u_s(((g_64.f2 = (((&g_59 != l_74) < (l_75 <= (safe_add_func_uint16_t_u_u(0x0950L, (l_79 = ((void*)0 == l_78)))))) ^ (**l_74))) || ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(p_43)), (0xE4D72E8F98891C1ALL & 0UL))), 3)) || g_34)), l_75)) > 0UL)) ^ 0xBC0716CFB31DF952LL) & g_62.f9), g_62.f6)), g_62.f9));
        g_62 = l_87;
        (*l_74) = func_44(((*l_91) = (((l_88 != g_64.f8) | func_50(&g_34, (**l_74), g_62.f1)) | (safe_div_func_int32_t_s_s((**l_74), (*g_59))))), ((*l_94) = (((safe_add_func_uint32_t_u_u(g_64.f0, 0x69094389L)) == 254UL) >= 0x3026CBAAD5626523LL)), g_64.f4, (**l_74), p_43);

        ;
    }
    else
    {
        int *l_100 = (void*)0;
        int **l_99 = &l_100;
        char *l_104 = &g_105;
        char *l_108 = &g_109;
        char *l_110 = &g_111;
        int *l_112 = &g_64.f1;
        struct S0 *l_113 = &l_87;
        unsigned char **l_114 = &l_78;
        unsigned char ***l_115 = &l_114;
        (*l_112) = (safe_mod_func_int32_t_s_s(((((((+(+(safe_lshift_func_uint16_t_u_s(((((*p_39) = (((*l_74) = p_39) != ((*l_99) = &g_60))) <= g_64.f9) >= p_43), 11)))) > (safe_sub_func_uint8_t_u_u(248UL, ((*l_104) = l_103)))) < (safe_sub_func_int8_t_s_s(((*l_110) = (p_42 & ((*l_108) = (p_41 != g_55)))), g_64.f0))) <= g_62.f7) >= 2L) & p_43), 0x5D6CB7F0L));

        ;
        ;
        (*l_113) = g_64;
        (*l_115) = l_114;
    }

    ;
    (*l_116) = l_87;
    (*l_116) = (*l_116);
    return &g_34;


}







static unsigned * func_44(unsigned p_45, int p_46, unsigned short p_47, unsigned p_48, long long p_49)
{
    int **l_61 = &g_59;
    struct S0 *l_63 = &g_62;
    (*l_61) = g_59;
    g_64 = ((*l_63) = g_62);
    return &g_34;


}







static unsigned func_50(unsigned * p_51, unsigned short p_52, unsigned p_53)
{
    struct S0 l_56 = {0x101EL,1L,0x3781CDFFA870C387LL,0x7A501900L,255UL,0x49124C6EL,0x2CDFD7F7L,9UL,-58,252UL};
    struct S0 *l_57 = &l_56;
    int *l_58 = &l_56.f1;
    (*l_57) = l_56;
    (*l_58) = 0xF121ADF5L;
    return g_34;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62.f0, "g_62.f0", print_hash_value);
    transparent_crc(g_62.f1, "g_62.f1", print_hash_value);
    transparent_crc(g_62.f2, "g_62.f2", print_hash_value);
    transparent_crc(g_62.f3, "g_62.f3", print_hash_value);
    transparent_crc(g_62.f4, "g_62.f4", print_hash_value);
    transparent_crc(g_62.f5, "g_62.f5", print_hash_value);
    transparent_crc(g_62.f6, "g_62.f6", print_hash_value);
    transparent_crc(g_62.f7, "g_62.f7", print_hash_value);
    transparent_crc(g_62.f8, "g_62.f8", print_hash_value);
    transparent_crc(g_62.f9, "g_62.f9", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    transparent_crc(g_64.f5, "g_64.f5", print_hash_value);
    transparent_crc(g_64.f6, "g_64.f6", print_hash_value);
    transparent_crc(g_64.f7, "g_64.f7", print_hash_value);
    transparent_crc(g_64.f8, "g_64.f8", print_hash_value);
    transparent_crc(g_64.f9, "g_64.f9", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_193.f0, "g_193.f0", print_hash_value);
    transparent_crc(g_193.f1, "g_193.f1", print_hash_value);
    transparent_crc(g_193.f2, "g_193.f2", print_hash_value);
    transparent_crc(g_193.f3, "g_193.f3", print_hash_value);
    transparent_crc(g_193.f4, "g_193.f4", print_hash_value);
    transparent_crc(g_193.f5, "g_193.f5", print_hash_value);
    transparent_crc(g_193.f6, "g_193.f6", print_hash_value);
    transparent_crc(g_193.f7, "g_193.f7", print_hash_value);
    transparent_crc(g_193.f8, "g_193.f8", print_hash_value);
    transparent_crc(g_193.f9, "g_193.f9", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_270.f3, "g_270.f3", print_hash_value);
    transparent_crc(g_270.f4, "g_270.f4", print_hash_value);
    transparent_crc(g_270.f5, "g_270.f5", print_hash_value);
    transparent_crc(g_270.f6, "g_270.f6", print_hash_value);
    transparent_crc(g_270.f7, "g_270.f7", print_hash_value);
    transparent_crc(g_270.f8, "g_270.f8", print_hash_value);
    transparent_crc(g_270.f9, "g_270.f9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
