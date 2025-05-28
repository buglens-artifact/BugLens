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



static unsigned g_18 = 0x9B950315L;
static short g_26 = 0xCE6BL;
static unsigned char g_41 = 0xB0L;
static unsigned char g_43 = 8UL;
static unsigned char *g_42 = &g_43;
static unsigned g_87 = 0x20604811L;
static char g_88 = (-5L);
static int g_90 = (-10L);
static int *g_89 = &g_90;
static unsigned * const *g_106 = (void*)0;
static int g_116 = 0x192D0F56L;
static char g_139 = 0xFDL;
static short g_151 = 0x78BFL;
static int g_170 = 5L;
static int g_174 = (-7L);
static unsigned g_176 = 0x874D0840L;
static const unsigned *g_175 = &g_176;
static unsigned *g_177 = &g_176;
static char *g_189 = (void*)0;
static unsigned g_270 = 0x5A7A0E92L;
static unsigned short g_283 = 0x2F45L;
static const char g_311 = (-1L);
static const int g_321 = 0xEBF1CAD8L;
static const int *g_325 = (void*)0;
static char g_336 = 5L;
static int g_367 = 2L;
static const unsigned g_398 = 18446744073709551614UL;
static unsigned * const *g_406 = &g_177;
static short g_437 = 3L;
static short *g_549 = &g_437;
static short **g_548 = &g_549;
static short ***g_547 = &g_548;
static unsigned char g_561 = 0xB0L;
static char g_578 = 9L;
static unsigned char *g_594 = (void*)0;
static unsigned short g_640 = 0x3B4AL;
static int *g_670 = (void*)0;
static char g_727 = 0xEBL;
static unsigned g_769 = 2UL;
static unsigned char **g_783 = &g_42;
static unsigned char *** const g_782 = &g_783;



static const int func_1(void);
static unsigned short func_8(unsigned p_9, int p_10, unsigned short p_11);
static unsigned char func_13(unsigned p_14, unsigned p_15, char p_16);
static short func_23(unsigned p_24, const unsigned * p_25);
static int func_28(unsigned p_29, unsigned * p_30);
static unsigned * func_32(unsigned char p_33, unsigned p_34, const unsigned * p_35, unsigned * p_36, unsigned short p_37);
static unsigned func_45(unsigned * p_46, unsigned char p_47, unsigned p_48, unsigned p_49);
static short func_50(unsigned * p_51, unsigned char * const p_52);
static unsigned * func_53(unsigned char * p_54, unsigned * p_55, unsigned * p_56, unsigned * p_57, short p_58);
static int func_63(const char p_64, unsigned * p_65, unsigned short p_66, unsigned short p_67);
static const int func_1(void)
{
    char l_12 = 7L;
    unsigned *l_17 = &g_18;
    char l_19 = (-1L);
    int l_22 = 0x9D44C039L;
    short l_27 = (-3L);
    unsigned char l_760 = 0x11L;
    int *l_761 = &g_90;
    int l_778 = 0xFB253C09L;
    unsigned l_791 = 4294967295UL;
    unsigned l_792 = 0x8BF479B5L;
    unsigned char l_793 = 0UL;
    unsigned short l_795 = 0xF555L;
    const unsigned l_827 = 0xF1447B60L;
    (*l_761) = (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(func_8(l_12, ((0L ^ func_13(((*l_17) = 0xBFC4F27DL), l_19, ((safe_sub_func_int32_t_s_s(l_22, l_12)) ^ (l_12 | (l_22 || (func_23((1UL & g_26), l_17) && l_27)))))) <= g_578), l_27), 0xB3D7L)), l_760)), g_561));




    if (func_28(((safe_sub_func_int8_t_s_s((0x5EFC576EL || (*l_761)), func_23((*l_761), l_761))) , (g_437 , ((*l_761) != func_8(((*g_177) = (*l_761)), (*l_761), (*l_761))))), l_761))
    {
        unsigned l_766 = 7UL;
        unsigned *l_768 = &g_769;
        const unsigned char l_770 = 0xB9L;
        unsigned short *l_771 = (void*)0;
        unsigned short *l_772 = &g_640;
        unsigned l_773 = 0UL;
        unsigned l_774 = 18446744073709551611UL;
        char l_788 = 0L;
        int l_789 = (-9L);
        int *l_818 = &g_174;
        const short l_819 = (-3L);
        unsigned char *l_830 = &g_41;
        unsigned **l_833 = (void*)0;
        unsigned **l_834 = &l_768;
        if (((((safe_mod_func_int16_t_s_s((func_28(l_766, &g_18) || (*l_761)), ((*l_772) = (((+((safe_unary_minus_func_int16_t_s(l_766)) < func_23(((*l_768) = g_321), l_17))) > (!(((l_766 , l_766) != l_770) ^ g_640))) , 65532UL)))) > 0x2544L) , l_773) , l_774))
        {
            char l_777 = 0L;
            char *l_781 = &g_139;
            const unsigned *l_790 = (void*)0;
            int l_794 = (-1L);
            unsigned short l_826 = 0xB9DFL;
            (*l_761) = (0x03L < ((safe_sub_func_int32_t_s_s(l_777, (g_116 < (l_778 || (safe_rshift_func_uint8_t_u_u((*g_42), 0)))))) || (((((*l_781) = (l_777 <= ((*g_42) = l_770))) , g_782) != &g_783) , (*l_761))));
            if (g_18)
            {
                l_795 = ((**g_406) > ((*l_17) = (((l_794 = l_793) < 0xD27D34C5L) > l_766)));
            }
            else
            {
                unsigned l_802 = 0xE7E57B27L;
                int l_803 = 0L;
                const unsigned *l_809 = &g_176;
                unsigned char l_814 = 0UL;
                for (g_561 = 0; (g_561 > 24); g_561 = safe_add_func_uint16_t_u_u(g_561, 1))
                {
                    int **l_798 = &g_670;
                    (*l_798) = &g_116;

                    ;
                }

                ;
                for (l_792 = 17; (l_792 > 47); ++l_792)
                {
                    char l_801 = 0xE2L;
                    int **l_804 = &l_761;
                    l_803 = func_8(l_801, (*l_761), l_802);
                    if (l_801)
                        break;
                    (*l_804) = &l_778;

                    ;
                    (*l_761) = (0xDF302686L == (safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(g_43, (l_803 , (((0UL | (func_23((*l_761), l_809) , g_176)) && ((*l_781) = (safe_div_func_int16_t_s_s((***g_547), g_398)))) > l_773)))), 0L)));
                }

                ;
                for (g_88 = 0; (g_88 != (-19)); g_88 = safe_sub_func_int8_t_s_s(g_88, 4))
                {
                    short l_817 = 7L;
                    if ((l_814 <= g_139))
                    {
                        int **l_815 = (void*)0;
                        int **l_816 = &l_761;
                        if ((*l_761))
                            break;
                        (*l_816) = &l_789;

                        ;
                        (**l_816) = (!l_817);
                        g_89 = &l_778;

                        ;
                    }
                    else
                    {
                        l_818 = (void*)0;

                        ;
                        return l_819;
                    }

                    ;
                    ;
                    return g_87;


                }
            }

            ;
            ;
            (*l_818) = (((l_777 >= l_777) , (-2L)) , l_827);
        }
        else
        {
            unsigned *l_828 = &g_18;
            unsigned **l_829 = &l_17;
            unsigned **l_831 = &g_177;
            int **l_832 = &l_761;
            (*l_832) = &g_90;
        }

        ;
        ;
        (*l_761) = (&l_774 != ((*l_834) = &g_769));
    }
    else
    {
        for (l_760 = (-8); (l_760 < 32); l_760 = safe_add_func_uint16_t_u_u(l_760, 3))
        {
            return (*l_761);
        }
    }

    ;
    ;
    return g_88;
}







static unsigned short func_8(unsigned p_9, int p_10, unsigned short p_11)
{
    unsigned *l_621 = &g_87;
    unsigned **l_622 = &l_621;
    unsigned char * const l_623 = &g_561;
    int *l_624 = &g_367;
    unsigned l_627 = 0x40AC47FAL;
    char *l_628 = &g_139;
    short **l_629 = (void*)0;
    unsigned short *l_636 = &g_283;
    unsigned short *l_639 = &g_640;
    unsigned short l_641 = 0xE339L;
    int *l_657 = &g_367;
    short l_743 = 0x209DL;
    char l_759 = 0L;
    return l_759;
}







static unsigned char func_13(unsigned p_14, unsigned p_15, char p_16)
{
    unsigned char l_31 = 0x0FL;
    unsigned char *l_40 = &g_41;
    int l_44 = 0L;
    unsigned *l_59 = (void*)0;
    unsigned *l_60 = &g_18;
    int **l_619 = &g_89;
    int *l_620 = &g_174;
    if (((func_28(l_31, func_32(((l_31 && ((!(l_44 = ((safe_sub_func_uint8_t_u_u(l_31, ((*l_40) = p_16))) | (l_31 | (g_42 != &l_31))))) != (func_45((((l_31 >= func_50(func_53(&g_43, l_59, &g_18, l_60, g_26), &g_43)) , p_15) , &p_15), (*g_42), g_26, l_31) >= 0UL))) != p_16), g_174, g_175, g_177, l_31)) < l_31) , 1L))
    {
        unsigned short l_595 = 0UL;
        int l_596 = 0xC1C85574L;
        int *l_597 = &g_90;
        int **l_598 = &l_597;
        (*l_597) = (((safe_rshift_func_uint8_t_u_s((*g_42), 6)) < (safe_unary_minus_func_int32_t_s(p_16))) || (safe_lshift_func_int16_t_s_u((1UL ^ ((*g_42) = (safe_lshift_func_uint16_t_u_s(p_14, (((((l_596 = ((*g_42) > (p_15 < (safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((l_44 = ((*g_549) || 0xBDB9L)), 1)), 0x9898A9D4L)) , (-1L)), 0x5DB8L)) && p_15), l_595))))) , 251UL) || l_596) & l_31) , 0x31D5L))))), g_170)));
        (*l_598) = &l_596;

        ;
    }
    else
    {
        unsigned char **l_599 = &g_594;
        unsigned char ***l_600 = &l_599;
        unsigned char * const l_610 = &g_43;
        int l_611 = 0x58D98132L;
        (*l_600) = l_599;
        for (g_437 = 27; (g_437 < (-7)); g_437 = safe_sub_func_int8_t_s_s(g_437, 6))
        {
            int *l_603 = &g_174;
            int **l_604 = &g_89;
            (*l_604) = l_603;

            ;
            for (p_14 = 23; (p_14 > 44); ++p_14)
            {
                unsigned char *l_607 = (void*)0;
                short *l_612 = &g_26;
                int l_613 = (-7L);
                (*l_604) = func_53(l_607, ((((*l_612) = (((*g_175) | (safe_rshift_func_int8_t_s_u((+(0xE8B8L | func_50(&p_15, l_610))), 4))) , ((2UL ^ l_611) , (3L && p_14)))) <= l_613) , (void*)0), &g_18, &g_18, p_14);

                ;
                (**l_604) = (*l_603);
                for (l_31 = 5; (l_31 <= 12); ++l_31)
                {
                    unsigned *l_616 = &g_18;
                    (*l_604) = func_53(&l_31, l_60, l_60, l_616, (*l_603));
                    return p_15;
                }
                (**l_604) = 0x5F609A58L;
            }

            ;
            (*l_603) = 0xD2878E20L;
        }
        for (g_26 = 0; (g_26 == (-28)); g_26 = safe_sub_func_uint8_t_u_u(g_26, 8))
        {
            return p_16;


        }
    }




    (*l_619) = &l_44;

    ;
    (*g_89) = 0L;
    (*l_620) = ((**l_619) = p_16);
    return p_15;


}







static short func_23(unsigned p_24, const unsigned * p_25)
{
    return g_26;
}







static int func_28(unsigned p_29, unsigned * p_30)
{
    unsigned char *l_471 = &g_41;
    unsigned *l_474 = (void*)0;
    int l_475 = 0L;
    int l_538 = 1L;
    int l_558 = 0x7A059DEFL;
    for (g_170 = 0; (g_170 <= (-15)); --g_170)
    {
        char l_472 = 0x56L;
        unsigned *l_473 = &g_176;
        unsigned char *l_480 = &g_43;
        short **l_489 = (void*)0;
        int *l_529 = &g_116;
        unsigned char **l_572 = (void*)0;
        unsigned char ***l_571 = &l_572;
        if (func_23(p_29, p_30))
        {
            int *l_476 = &g_170;
            int **l_477 = &l_476;
            short *l_478 = &g_151;
            int *l_479 = &g_367;
            unsigned **l_481 = (void*)0;
            unsigned **l_482 = &l_473;
            int **l_483 = &l_479;
            (*l_479) = p_29;
            (*l_483) = &l_475;

            ;
        }
        else
        {
            unsigned char **l_503 = &l_471;
            int l_511 = 0L;
            int **l_518 = &g_89;
            unsigned l_537 = 18446744073709551615UL;
            if (((*g_175) | 0x6E2AAAEAL))
            {
                short *l_498 = &g_26;
                const int l_517 = 0xC3175788L;
                for (g_270 = (-9); (g_270 >= 30); ++g_270)
                {
                    int **l_486 = &g_89;
                    short *l_493 = (void*)0;
                    short **l_492 = &l_493;
                    (*l_486) = &g_90;

                    ;
                    for (g_283 = 23; (g_283 < 15); g_283 = safe_sub_func_uint32_t_u_u(g_283, 2))
                    {
                        short ***l_490 = (void*)0;
                        short ***l_491 = &l_489;
                        l_492 = ((*l_491) = l_489);

                        ;
                    }

                    ;
                    for (g_367 = 0; (g_367 > 11); g_367++)
                    {
                        short **l_499 = &l_493;
                        unsigned char **l_502 = &g_42;
                        unsigned char ***l_504 = &l_503;
                        int *l_505 = &g_116;
                        (**l_486) = (0xEDL < ((!((((safe_mod_func_int32_t_s_s((((!(l_498 != ((*l_499) = &g_151))) || (*g_177)) , l_472), (safe_mod_func_int16_t_s_s((g_283 < ((l_502 == ((*l_504) = l_503)) , 0xC5BBL)), p_29)))) < l_475) & (*g_177)) || 0x0D65EF18L)) | 4294967295UL));

                        ;
                        (*l_505) = ((**l_486) = (&g_116 == &g_174));
                    }

                    ;
                    for (g_41 = 0; (g_41 <= 54); g_41++)
                    {
                        unsigned short l_512 = 0x4853L;
                        int *l_519 = &g_367;
                        (*l_486) = &g_90;

                        ;
                        (*l_519) = (65529UL < ((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(p_29)) , ((*l_480) = (l_511 ^ (+p_29)))), (((void*)0 != &g_175) < l_512))) ^ (safe_mod_func_uint8_t_u_u((((0x52FFL < ((func_50(((safe_sub_func_int32_t_s_s(func_63((((l_517 , p_29) , &g_89) == l_518), &g_87, l_517, g_90), (-1L))) , p_30), &g_41) && l_475) , p_29)) & p_29) != g_176), l_472))));

                        ;
                        if ((**l_518))
                            continue;
                    }

                    ;
                }
            }
            else
            {
                unsigned l_528 = 0UL;
                unsigned char *l_535 = &g_43;
                short ***l_545 = &l_489;
                unsigned *l_546 = &g_270;
                unsigned short *l_564 = &g_283;
                unsigned **l_567 = (void*)0;
                unsigned **l_568 = &l_473;
                unsigned *l_577 = (void*)0;
                if ((p_29 <= (0xE8F9L >= ((safe_rshift_func_int8_t_s_u(1L, 2)) && p_29))))
                {
                    int *l_522 = &g_367;
                    unsigned char *l_526 = &g_43;
                    unsigned *l_527 = &g_18;
                    (*l_522) = ((l_471 == (void*)0) & (l_472 , p_29));
                    g_89 = p_30;

                    ;
                    for (g_336 = (-24); (g_336 <= (-11)); ++g_336)
                    {
                        short *l_525 = &g_151;
                        (*l_518) = p_30;
                    }
                }
                else
                {
                    unsigned *l_530 = &g_176;
                    unsigned short *l_533 = &g_283;
                    unsigned **l_534 = &l_473;
                    unsigned char **l_536 = (void*)0;
                    int l_544 = 0x764F22F8L;
                    (*l_518) = &l_475;

                    ;
                    (*l_529) = (func_50(func_53(((*l_503) = l_480), func_53(&g_41, l_529, func_53(&g_41, ((*l_534) = &g_176), &g_18, &l_528, l_475), &g_176, l_528), &g_176, &g_176, (*l_529)), l_480) & p_29);

                    ;
                    ;
                    if ((l_538 != (*g_177)))
                    {
                        const int *l_539 = &l_475;
                        const int **l_540 = (void*)0;
                        const int **l_541 = &g_325;
                        (*l_541) = l_539;

                        ;
                    }
                    else
                    {
                        if (p_29)
                            break;
                    }
                    for (g_176 = 0; (g_176 < 7); g_176 = safe_add_func_int32_t_s_s(g_176, 4))
                    {
                        if (l_544)
                            break;
                        return p_29;


                    }
                }

                ;
                (*g_89) = ((((((l_545 != (((*g_177) , ((*l_546) = (g_87 , 18446744073709551610UL))) , g_547)) | 0xC2L) , 0x23L) > l_528) && (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(((***g_547) = (func_23((safe_add_func_int32_t_s_s(((*l_529) = (((safe_rshift_func_int16_t_s_s(p_29, 8)) >= 0x2BL) != (*l_529))), l_558)), l_474) && p_29)), (**l_518))), (*g_177)))) != (-1L));
                (*g_89) = (p_29 && ((l_475 = p_29) != (safe_rshift_func_uint8_t_u_s((p_29 , g_561), ((-7L) == (((+((*l_564) = (safe_mod_func_uint32_t_u_u((((((((*l_529) = (p_29 >= (*l_529))) | (**l_518)) , (*g_175)) | (-1L)) , p_29) , (*p_30)), (**l_518))))) ^ p_29) >= l_528))))));
                (*l_529) = (safe_lshift_func_int8_t_s_s((func_50(((*l_568) = &g_87), &g_41) == ((l_571 == &l_572) | ((((safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_u((g_561 != p_29), 9)) , l_577) == (func_23(l_528, &g_176) , (void*)0)), g_578)) == l_511) | 0x0BL) > 0xEEL))), 4));

                ;
                ;
            }

            ;
        }

        ;
    }


    ;
    return l_538;


}







static unsigned * func_32(unsigned char p_33, unsigned p_34, const unsigned * p_35, unsigned * p_36, unsigned short p_37)
{
    int * const *l_182 = &g_89;
    int **l_183 = &g_89;
    int ***l_184 = &l_183;
    char *l_187 = &g_88;
    char **l_188 = &l_187;
    int *l_192 = &g_116;
    unsigned *l_197 = &g_18;
    unsigned *l_218 = &g_18;
    const unsigned char **l_224 = (void*)0;
    unsigned char l_312 = 0xC3L;
    int l_331 = 0xD7A292EEL;
    const int l_467 = 0L;
lbl_369:
    (*l_192) = ((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((((l_182 != ((*l_184) = l_183)) & p_33) > (safe_rshift_func_uint8_t_u_s(0x80L, 1))), (((*l_188) = l_187) != g_189))), 0xE8C2L)) > ((g_90 != (safe_div_func_uint8_t_u_u(p_33, (*g_42)))) || (*g_42)));
lbl_468:
    if ((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0xED94F1BEL, ((p_37 && ((*p_36) = (g_174 , (*g_175)))) < p_37))), (*l_192))) == p_37) | p_33))
    {
        unsigned char *l_200 = &g_43;
        int l_203 = 0x3A831FEEL;
        unsigned **l_206 = &g_177;
        (**l_184) = &g_174;

        ;
        for (g_139 = 0; (g_139 <= (-25)); g_139 = safe_sub_func_int8_t_s_s(g_139, 4))
        {
            unsigned char l_209 = 0x85L;
            int *l_210 = &g_116;
            (*l_192) = l_209;
            (*l_183) = (*l_183);
            l_210 = &g_116;
        }
        return p_36;


    }
    else
    {
        unsigned char *l_211 = &g_41;
        unsigned *l_212 = &g_87;
        unsigned **l_213 = &l_197;
        unsigned **l_214 = (void*)0;
        unsigned **l_215 = (void*)0;
        unsigned **l_216 = &g_177;
        int l_217 = 0L;
        int *l_219 = &g_90;
lbl_233:
        (*l_219) = ((*l_192) = (((0x79L < p_37) , p_37) <= p_34));
        for (p_37 = 0; (p_37 < 30); p_37 = safe_add_func_uint16_t_u_u(p_37, 4))
        {
            int l_225 = 0x9D1A7C04L;
            int l_230 = 0xC83ECCD7L;
            int l_231 = 0x81A18FF7L;
            int *l_232 = &g_174;
            short *l_242 = &g_26;
            (*l_232) = ((*l_192) = (safe_mod_func_int16_t_s_s((l_231 = (((p_34 || g_176) == (*g_42)) , ((l_224 != (((*l_219) = (*p_36)) , (void*)0)) || ((l_225 = (*l_219)) != (l_230 = (safe_add_func_int16_t_s_s((*l_219), (safe_sub_func_uint8_t_u_u((p_33 ^ p_34), l_230))))))))), l_217)));
            if (g_90)
                goto lbl_233;
            (*l_219) = ((*l_232) = ((((((((safe_rshift_func_int16_t_s_s(((*l_242) = ((safe_sub_func_uint16_t_u_u((g_174 == (*l_232)), (safe_div_func_uint16_t_u_u(g_26, (safe_add_func_int32_t_s_s((((**l_188) = ((&g_88 == &g_88) , 0x02L)) != (*g_42)), ((*l_232) | 0xCBL))))))) == 1UL)), 9)) | p_34) , (-6L)) , 0x96L) & 252UL) , p_37) , g_151) && (*g_177)));
            if (p_34)
                continue;
        }
        if ((*l_219))
        {
            unsigned short l_255 = 0x7712L;
            unsigned *l_269 = &g_270;
            for (g_41 = 0; (g_41 > 22); g_41 = safe_add_func_uint8_t_u_u(g_41, 3))
            {
                int **l_250 = &g_89;
                int ***l_249 = &l_250;
                (*l_183) = p_36;

                ;
                if ((((p_33 | (safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((*l_187) = ((((((*l_184) = &g_89) == ((*l_249) = &g_89)) || 0x2939L) && (((p_37 != p_34) ^ (safe_rshift_func_int16_t_s_u(g_18, 2))) > ((safe_div_func_int32_t_s_s(0x1AB67E06L, p_34)) , l_255))) || 5L)), 4)), p_34))) == l_255) , (*g_89)))
                {
                    unsigned char l_258 = 5UL;
                    (**l_182) = (((safe_div_func_uint32_t_u_u((*p_36), l_258)) <= (safe_mul_func_uint8_t_u_u(((*l_219) = 0x0FL), (3UL <= 1UL)))) == p_34);
                    return &g_176;


                }
                else
                {
                    unsigned short l_263 = 1UL;
                    if (p_34)
                        break;
                    for (g_139 = (-27); (g_139 < 12); g_139 = safe_add_func_uint16_t_u_u(g_139, 8))
                    {
                        if (l_263)
                            break;
                    }
                }
                for (g_88 = 15; (g_88 < 6); g_88--)
                {
                    const int *l_267 = (void*)0;
                    const int **l_266 = &l_267;
                    if ((*g_89))
                    {
                        (**l_184) = p_36;

                        ;
                    }
                    else
                    {
                        return &g_176;


                    }

                    ;
                    (*l_266) = p_35;

                    ;
                    (**l_249) = p_36;
                    if ((g_41 , (***l_249)))
                    {
                        if ((**l_183))
                            break;
                    }
                    else
                    {
                        int *l_268 = &g_116;
                        (*l_250) = l_268;

                        ;
                        if ((*l_219))
                            continue;
                        (**l_182) = (*g_89);
                        (**l_182) = (*l_268);
                    }

                    ;
                }

                ;
            }
            (*l_219) = (((!func_23(((*l_269) = (p_33 && (*g_42))), l_218)) ^ 0UL) <= ((((((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_255, g_170)), (safe_add_func_int8_t_s_s(((p_33 , p_35) != &g_174), 0L)))) | g_170) || 0x3FFFL) < l_255) != p_33) ^ p_34));
            (**l_184) = &g_116;

            ;
        }
        else
        {
            unsigned short *l_282 = &g_283;
            int l_284 = 0x1C094A48L;
            unsigned *l_289 = &g_18;
            char **l_307 = &g_189;
            unsigned short *l_339 = (void*)0;
            int l_353 = 0x01DBE71DL;
            unsigned char *l_408 = &l_312;
            unsigned *l_413 = &g_87;
            unsigned *l_418 = &g_176;
            unsigned char ** const l_452 = &g_42;
            if (((+p_33) , (((safe_unary_minus_func_int32_t_s((((*g_42) = func_23((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((*p_36) < (*l_219)), 6)), p_37)), p_35)) <= l_284))) != 0xF6D6L) > g_26)))
            {
                unsigned char *l_288 = &g_41;
                for (g_26 = (-18); (g_26 <= (-1)); g_26 = safe_add_func_int32_t_s_s(g_26, 8))
                {
                    unsigned char *l_287 = &g_43;
                    short *l_292 = &g_151;
                    unsigned *l_293 = &g_87;
                    unsigned *l_294 = &g_176;
                    const int *l_296 = (void*)0;
                    const int **l_295 = &l_296;
                    const char *l_310 = &g_311;
                    const char **l_309 = &l_310;
                    const char ***l_308 = &l_309;
                    (*l_295) = p_35;

                    ;
                    (*l_295) = ((*l_183) = &g_174);

                    ;
                    ;
                    if (((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((g_90 = (((*l_282) = (((g_88 && (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((***l_184) = func_23(p_37, p_35)), func_23(((((safe_mod_func_uint16_t_u_u(l_284, p_37)) , l_307) != ((*l_308) = (void*)0)) , (((p_34 , 250UL) <= p_34) , 0xFF4E26B6L)), &g_176))), 1))) > p_33) & 0L)) != l_284)), (*g_177))), l_312)) <= p_34))
                    {
                        (*l_219) = (safe_rshift_func_int8_t_s_u(1L, 2));
                        (*l_219) = ((*g_89) = (-1L));
                    }
                    else
                    {
                        if (p_37)
                            break;
                        (*g_89) = p_37;
                        (*l_295) = &g_90;

                        ;
                        if ((*g_89))
                            break;
                    }

                    ;
                    ;
                    for (g_41 = 19; (g_41 >= 19); ++g_41)
                    {
                        return l_294;


                    }
                }
            }
            else
            {
                unsigned char *l_322 = &g_41;
                int l_324 = 0x443CEC6AL;
                unsigned *l_328 = (void*)0;
                (**l_184) = p_36;

                ;
                for (l_217 = 22; (l_217 <= (-23)); l_217 = safe_sub_func_int32_t_s_s(l_217, 9))
                {
                    unsigned short l_340 = 0x21A1L;
                    for (p_34 = 0; (p_34 <= 2); p_34 = safe_add_func_uint16_t_u_u(p_34, 3))
                    {
                        unsigned char **l_323 = &g_42;
                        const int **l_326 = (void*)0;
                        const int *l_327 = &g_116;
                        (*l_183) = &g_90;

                        ;
                        l_327 = (g_325 = func_53(&g_41, func_53(&g_41, p_36, &g_18, &g_176, (func_50(&g_87, (l_324 , (void*)0)) < p_34)), &g_176, l_192, p_37));

                        ;
                        ;
                        ;
                        if (p_37)
                            break;
                        (**l_184) = &g_90;

                        ;
                    }

                    ;
                    (*l_192) = (safe_add_func_uint32_t_u_u(((0x4DBF8910L > (*g_177)) & g_139), ((((*g_175) , (safe_rshift_func_uint16_t_u_u(8UL, 15))) <= func_63(p_34, (((0x9196BF7DL ^ (g_336 , ((safe_add_func_int32_t_s_s(((((((l_339 != &p_37) == 0xBA36L) , p_34) , 0x0B28L) ^ 4UL) , l_324), (*p_35))) || 0xAB43CCFAL))) != 0UL) , p_36), l_340, p_33)) , 0xDC055292L)));

                    ;
                    (**l_184) = &g_116;

                    ;
                    for (g_283 = (-24); (g_283 == 58); ++g_283)
                    {
                        return &g_176;


                    }
                }

                ;
                (*g_89) = (safe_mod_func_int32_t_s_s(((((!((safe_lshift_func_int16_t_s_s(((((*g_42) != (**l_183)) <= (**l_183)) & (safe_sub_func_uint32_t_u_u((&p_33 == ((safe_mod_func_uint16_t_u_u((p_34 < ((((safe_lshift_func_int8_t_s_s(((l_284 = ((void*)0 == &p_35)) > ((*p_35) && 0xBF66D74FL)), 0)) , 2L) , (void*)0) != &g_41)), 0xBC4DL)) , &p_33)), 0x427B9649L))), p_37)) , l_324)) < 0x1B0ABD8EL) < g_283) != l_324), l_353));
                for (p_34 = 0; (p_34 <= 32); p_34++)
                {
                    (*l_183) = (void*)0;

                    ;
                    (*l_219) = func_63(p_37, (*l_216), g_283, g_170);

                    ;
                    g_89 = p_36;

                    ;
                }
            }
            for (p_34 = 0; (p_34 != 22); p_34++)
            {
                char l_368 = 0L;
                unsigned *l_370 = &g_18;
                unsigned short l_383 = 0x4B85L;
                unsigned char *l_411 = (void*)0;
                unsigned *l_412 = &g_87;
                char * const *l_463 = &g_189;
                char * const **l_462 = &l_463;
                if ((0x25A9L <= func_23(p_33, l_289)))
                {
                    unsigned char l_362 = 0UL;
                    (**l_184) = &g_90;

                    ;
                }
                else
                {
                    char l_374 = 0x1DL;
                    int l_391 = 1L;
                    short *l_405 = &g_26;
                    int **l_407 = &g_89;
                    unsigned char *l_415 = &g_43;
                    unsigned *l_417 = &g_176;
                    const int *l_419 = (void*)0;
                    const int *l_422 = &l_284;
                    unsigned char l_434 = 2UL;
                    if ((((void*)0 == &p_37) < 0x66L))
                    {
                        int l_371 = 0xB234A05AL;
                        g_325 = (void*)0;

                        ;
                        if (g_283)
                            goto lbl_369;
                        l_219 = &l_284;

                        ;
                        (*l_219) = l_371;
                    }
                    else
                    {
                        unsigned *l_375 = &g_270;
                        const int **l_376 = &g_325;
                        int *l_390 = &g_170;
                        g_116 = ((((p_33 < (((!(*g_42)) , 0x8ACA68ABL) > (l_370 != (void*)0))) , (((((*l_282) = (((+(*g_42)) > p_34) ^ g_41)) , (func_23(((*l_375) = ((safe_add_func_uint16_t_u_u(((*l_282) = ((l_374 == (*l_219)) || 1UL)), g_90)) ^ (*l_219))), l_375) < g_336)) , 0x69L) != l_368)) != p_33) == p_33);
                        (*l_376) = p_35;

                        ;
                        l_391 = (safe_mod_func_int8_t_s_s((safe_div_func_uint16_t_u_u((**l_376), (safe_sub_func_uint16_t_u_u(p_33, ((0x9F28L ^ l_383) ^ (safe_sub_func_uint32_t_u_u(((*l_218) = ((safe_rshift_func_uint8_t_u_s((*g_42), (p_33 ^ (((*l_390) = ((*p_35) | (safe_add_func_uint32_t_u_u((((*g_42) || (p_37 >= l_374)) <= (*g_42)), (*g_325))))) , (*g_42))))) != 0x19777422L)), (*g_177)))))))), p_37));
                        (*l_376) = &g_174;

                        ;
                    }

                    ;
                    if ((safe_sub_func_uint8_t_u_u(((((*l_187) = (!p_34)) != ((*l_211) = (*g_42))) , ((safe_add_func_int16_t_s_s((&g_89 == ((g_398 , func_23((p_37 & (((p_34 , &p_35) != g_406) || l_374)), p_35)) , l_407)), (-1L))) | l_284)), p_34)))
                    {
                        unsigned char **l_409 = &l_211;
                        unsigned *l_410 = &g_87;
                        unsigned char **l_414 = &g_42;
                        unsigned *l_416 = &g_18;
                        const int **l_420 = &l_419;
                        const int **l_421 = &g_325;
                        l_422 = ((*l_421) = ((*l_420) = l_419));

                        ;
                        ;
                    }
                    else
                    {
                        unsigned char *l_423 = &l_312;
                        unsigned *l_424 = &g_18;
                        const int l_425 = 8L;
                        const int **l_438 = &l_419;
                        (*l_438) = p_35;

                        ;
                    }

                    ;
                    ;
                }
                for (g_26 = (-13); (g_26 == (-30)); g_26--)
                {
                    unsigned char **l_441 = &l_408;
                    char ***l_446 = &l_188;
                    int l_456 = 0xC5A4D294L;
                    int **l_461 = &g_89;
                }
            }

            ;
        }


    }
    (*l_192) = p_34;
    if (l_312)
        goto lbl_468;
    return l_218;


}







static unsigned func_45(unsigned * p_46, unsigned char p_47, unsigned p_48, unsigned p_49)
{
    unsigned *l_125 = &g_87;
    int l_130 = 1L;
    for (g_90 = 0; (g_90 > (-28)); g_90--)
    {
        unsigned * const **l_107 = &g_106;
        int l_117 = 0x62B9925CL;
        (*l_107) = g_106;
        (*g_89) = p_48;
        for (g_88 = (-14); (g_88 < 24); g_88 = safe_add_func_uint8_t_u_u(g_88, 6))
        {
            int *l_115 = &g_116;
            int l_118 = 0x4A23C0F0L;
            const unsigned char *l_123 = &g_43;
            const unsigned char **l_122 = &l_123;
            int *l_129 = &g_116;
            for (g_26 = 0; (g_26 == 24); g_26 = safe_add_func_int8_t_s_s(g_26, 9))
            {
                const unsigned char **l_121 = (void*)0;
                int l_160 = 0xCDD756E6L;
                short *l_169 = &g_151;
                char *l_171 = &g_139;
                unsigned **l_173 = &l_125;
                unsigned ***l_172 = &l_173;
                if (((*g_89) = 0xE631D611L))
                {
                    unsigned l_126 = 18446744073709551612UL;
                    unsigned *l_127 = &l_126;
                    int *l_131 = &l_117;
                    unsigned char * const *l_146 = (void*)0;
                    const int l_156 = (-9L);
                    (*g_89) = 0L;
                    for (p_49 = 17; (p_49 == 34); p_49++)
                    {
                        int **l_114 = (void*)0;
                        l_115 = &g_90;

                        ;
                        (*g_89) = (((l_117 & l_118) , (safe_lshift_func_int16_t_s_s(0xF0E9L, 2))) ^ 0x7FF4CBEBL);
                        l_122 = l_121;

                        ;
                    }
                    if (p_48)
                    {
                        (*g_89) = 0L;
                    }
                    else
                    {
                        int **l_124 = &l_115;
                        (*l_124) = &l_117;

                        ;
                        (*l_124) = &l_117;
                    }
                    if (((&g_87 != l_125) >= (((l_117 = ((*l_125) = (*p_46))) == ((((*g_42) = (p_46 == p_46)) , (func_23(((*l_127) = l_126), &g_18) | 4UL)) ^ g_18)) < p_47)))
                    {
                        int **l_128 = &g_89;
                        (*l_128) = p_46;


                        (*l_128) = &g_116;

                        ;
                        (*l_128) = l_129;
                        (*l_129) = l_130;
                    }
                    else
                    {
                        int **l_132 = &g_89;
                        char *l_137 = (void*)0;
                        char *l_138 = &g_139;
                        int l_147 = 0x3A5C4F2FL;
                        short *l_148 = (void*)0;
                        short *l_149 = (void*)0;
                        short *l_150 = &g_151;
                        unsigned short l_152 = 6UL;
                        unsigned short *l_153 = &l_152;
                        (*l_132) = l_131;

                        ;
                        (**l_132) = (((*l_153) = (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(p_47, (((((*l_138) = g_116) && (**l_132)) > (0L > (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((((void*)0 != &g_88) , (((l_117 < (~((*l_150) = (((((((*g_89) && (&l_123 == l_146)) ^ l_147) || p_47) || (**l_132)) , p_47) | g_26)))) < (*l_115)) != l_117)) , g_43), 6)), g_88)), l_152)))) & p_49))), (*g_42)))) || 0xFF65L);
                        (**l_132) = (l_130 <= (((*p_46) , ((safe_div_func_uint8_t_u_u((~l_156), g_87)) || (&g_139 == (g_88 , l_138)))) , (((l_130 >= (g_88 | g_43)) == 1L) ^ (*p_46))));
                        (*l_132) = p_46;


                    }


                }
                else
                {
                    int *l_157 = &l_130;
                    int **l_158 = &g_89;
                    int **l_159 = &l_115;
                    (*l_159) = ((*l_158) = l_157);

                    ;
                    ;
                    return l_160;



                }


                (*l_107) = ((*l_172) = (((*l_171) = ((4294967287UL ^ (g_18 , (l_117 > g_87))) | (safe_mod_func_uint32_t_u_u((p_47 < ((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((p_48 < (((*l_169) = p_47) , 0L)) ^ 8L), p_48)), 0x5343L)) > g_170)), 0xB5D02C25L)))) , &l_125));

                ;
            }


            ;
            ;
            ;
            return (*l_129);


        }
    }
    return g_174;
}







static short func_50(unsigned * p_51, unsigned char * const p_52)
{
    short l_96 = 0xCB35L;
    unsigned *l_97 = &g_87;
    int *l_100 = &g_90;
    int *l_101 = (void*)0;
    int l_102 = 1L;
    short *l_103 = &l_96;
    (*l_100) = ((p_51 == ((l_96 > 0L) , ((l_96 != func_63(l_96, l_97, (safe_rshift_func_uint16_t_u_s(func_23((l_96 , 0xF089E30CL), &g_18), 6)), l_96)) , p_51))) || l_96);

    ;
    (*l_100) = 0x5FA56760L;
    (*l_100) = ((*l_100) & (l_102 = ((*g_89) = (-1L))));
    (*g_89) = (g_90 != ((*l_103) = g_18));
    return g_18;
}







static unsigned * func_53(unsigned char * p_54, unsigned * p_55, unsigned * p_56, unsigned * p_57, short p_58)
{
    unsigned *l_68 = &g_18;
    int l_79 = 0xF1C8D212L;
    unsigned short l_82 = 0x9233L;
    int l_83 = 1L;
    unsigned short *l_84 = (void*)0;
    unsigned short *l_85 = &l_82;
    unsigned *l_86 = &g_87;
    int *l_92 = (void*)0;
    int *l_93 = &g_90;
    (*l_93) = (safe_lshift_func_int16_t_s_u((-5L), (func_63(p_58, l_68, (g_88 = (safe_add_func_uint32_t_u_u(((*l_86) = ((*p_56) = (((((*l_85) = (safe_div_func_int32_t_s_s(g_26, func_23(g_43, ((g_43 & ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u((((((g_43 | ((+l_79) || (safe_mod_func_int32_t_s_s(0L, 0x7DFAE38EL)))) > 0xC7L) , (-6L)) >= l_82) && 0x991CL), l_83)) == 1L) <= g_26), 5)), l_82)) > g_26)) , l_68))))) <= p_58) <= (*g_42)) < 0xE9L))), l_83))), p_58) , 0x7F47L)));

    ;
    return l_93;


}







static int func_63(const char p_64, unsigned * p_65, unsigned short p_66, unsigned short p_67)
{
    int **l_91 = &g_89;
    g_89 = g_89;
    (*l_91) = p_65;

    ;
    (*l_91) = (*l_91);
    return (*g_89);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_561, "g_561", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_640, "g_640", print_hash_value);
    transparent_crc(g_727, "g_727", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
