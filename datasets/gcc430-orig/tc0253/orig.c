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



static volatile unsigned g_10 = 7UL;
static unsigned g_26 = 4294967294UL;
static volatile int *g_69 = (void*)0;
static int g_77 = (-2L);
static int g_92 = 7L;
static int g_98 = 0x65315FA7L;
static int *g_122 = &g_77;
static int * const *g_121 = &g_122;
static const unsigned g_215 = 1UL;
static const char g_239 = 0x9AL;
static unsigned char g_298 = 3UL;
static short g_320 = 0xADA8L;
static int g_390 = 0x9A78E21CL;
static unsigned g_636 = 0x7D4A8593L;
static int g_732 = (-5L);
static int * const g_731 = &g_732;
static int g_946 = 0xF03908BBL;
static unsigned short g_976 = 1UL;
static const unsigned g_1109 = 0x63C4AFABL;
static int g_1251 = (-5L);



static int func_1(void);
static int func_2(short p_3, unsigned char p_4, unsigned short p_5, short p_6, const short p_7);
static const short func_11(unsigned p_12, const int p_13, int p_14, unsigned p_15, unsigned short p_16);
static unsigned short func_21(unsigned p_22, const char p_23, short p_24, char p_25);
static char func_35(int p_36, char p_37, char p_38, unsigned p_39);
static unsigned char func_40(unsigned short p_41, short p_42, int p_43);
static int * const func_45(unsigned p_46, unsigned char p_47, const unsigned short p_48, unsigned p_49);
static short func_54(unsigned p_55, int * const p_56, unsigned char p_57, int * p_58, char p_59);
static int * const func_61(const unsigned p_62);
static unsigned short func_65(int p_66);
static int func_1(void)
{
    unsigned short l_44 = 0x2E6CL;
    int l_141 = 8L;
    int **l_1234 = &g_122;
    char l_1237 = 0L;
    short l_1250 = (-1L);
    (*g_731) = func_2(((safe_lshift_func_uint16_t_u_s(0xDDD3L, 4)) == g_10), (func_11((safe_mod_func_int32_t_s_s((!(safe_mod_func_uint16_t_u_u(0x82D8L, (+func_21(g_26, (((safe_sub_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((((func_35(((g_26 == (func_40(g_26, l_44, g_26) == l_44)) , 0x54EC59EAL), l_141, l_44, l_141) == g_26) & l_141) , (*g_122)) , l_141), 4)), 0xC8C47D00L)) > g_26), l_44)) != 4294967295UL) <= g_26), (-1L))) | l_44) , l_44), g_26, g_26))))), g_215)), l_44, l_44, g_239, g_215) , 248UL), l_44, l_141, g_239);



    (*g_731) = (&g_122 != l_1234);
    (*g_731) |= l_141;
    for (g_98 = 0; (g_98 != (-19)); g_98--)
    {
        int l_1247 = 0x01CA3F40L;
        if (func_2(g_26, l_1237, g_215, ((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(0xC0L, (safe_rshift_func_uint16_t_u_u((1UL & ((((func_2(((*g_731) , 0x8D61L), l_1247, (safe_add_func_uint32_t_u_u(l_1247, (-5L))), g_946, g_298) == 1L) >= g_1109) > l_1250) == 4294967292UL)), g_77)))) , g_10) <= 0xF256L), 3)))) || (*g_731)), l_1247))
        {
            return g_732;
        }
        else
        {
            (*g_731) |= (l_1247 || (-5L));
            (*l_1234) = &g_77;

            ;
        }

        ;
        (**l_1234) = l_1247;
    }
    return g_1251;
}







static int func_2(short p_3, unsigned char p_4, unsigned short p_5, short p_6, const short p_7)
{
    const char l_1231 = (-1L);
    (*g_731) &= l_1231;
    return l_1231;
}







static const short func_11(unsigned p_12, const int p_13, int p_14, unsigned p_15, unsigned short p_16)
{
    int l_1111 = 1L;
    int *l_1114 = (void*)0;
    int * const **l_1126 = &g_121;
    int *l_1138 = &g_946;
    char l_1139 = (-1L);
    int l_1140 = 0x567FF6CEL;
    unsigned short l_1158 = 0x6982L;
    unsigned l_1204 = 0xD19A2C7AL;
    (*g_731) = 0x24B18091L;
    if ((*g_731))
    {
        unsigned l_1112 = 18446744073709551615UL;
        int **l_1115 = &g_122;
        int l_1116 = 0x1716742CL;
        (*l_1115) = l_1114;

        ;
        l_1116 = 1L;
        if ((&l_1114 != &g_122))
        {
            unsigned char l_1119 = 0UL;
            unsigned short l_1125 = 65535UL;
            p_14 = (-1L);
            (*g_731) &= (safe_sub_func_uint16_t_u_u(((p_16 , p_12) > p_13), 0x0A63L));
            (*l_1115) = (void*)0;
        }
        else
        {
            p_14 = p_13;
            (*l_1115) = l_1114;
        }
    }
    else
    {
        int l_1131 = (-6L);
        const int *l_1133 = (void*)0;
        const int **l_1132 = &l_1133;
        int l_1145 = 0x9B4B074BL;
        int l_1163 = (-1L);
        short l_1175 = 0xEA40L;
        int l_1181 = 0xBA73E71DL;
        (*g_731) = p_16;
        (*l_1132) = &p_13;

        ;
        if ((((p_15 | ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_215 , ((((void*)0 != &l_1133) || (p_16 && func_65(((g_298 , (*g_731)) | (0x11DAL == (l_1138 != &p_13)))))) >= l_1139)), (**l_1132))), l_1140)) == p_16)) ^ 0xE3F0L) ^ g_1109))
        {
            int **l_1148 = &l_1114;
            (*l_1148) = func_61((safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((void*)0 != (*l_1132)), l_1145)), (safe_add_func_uint16_t_u_u(p_15, p_13)))));

            ;
            (*l_1126) = l_1148;

            ;
            (*l_1132) = (*l_1132);
        }
        else
        {
            int *l_1149 = (void*)0;
            int **l_1190 = &l_1138;
            int ***l_1189 = &l_1190;
            int * const l_1207 = &g_732;
            unsigned short l_1210 = 0x01A0L;
            int * const l_1212 = (void*)0;
            unsigned char l_1213 = 0x0CL;
            int *l_1215 = &l_1181;
            (*l_1132) = l_1149;

            ;
            for (l_1139 = 0; (l_1139 != (-23)); l_1139--)
            {
                unsigned l_1176 = 0UL;
                unsigned short l_1191 = 3UL;
                int *l_1200 = &g_98;
                for (p_14 = 0; (p_14 > (-28)); p_14--)
                {
                    int l_1174 = 1L;
                    for (g_390 = 0; (g_390 <= (-9)); g_390--)
                    {
                        (*g_731) = (safe_add_func_int16_t_s_s((p_14 , l_1158), (safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((p_16 , (l_1163 | (((p_13 >= p_15) || ((safe_sub_func_uint16_t_u_u((&g_731 == &l_1133), ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(0xB79265A2L, p_14)) & g_732), l_1174)), 4)) == 1L), l_1175)) >= g_98))) , p_14)) && p_16))), g_320)) < p_12), (-9L)))));
                    }
                }
                (*g_731) = l_1176;
                for (l_1175 = 0; (l_1175 <= (-8)); l_1175 = safe_sub_func_uint8_t_u_u(l_1175, 3))
                {
                    unsigned short l_1179 = 0x533FL;
                    char l_1201 = 0xD1L;
                    short l_1220 = 0x8B99L;
                }
            }
        }


        ;
        ;
    }


    ;
    return g_26;


}







static unsigned short func_21(unsigned p_22, const char p_23, short p_24, char p_25)
{
    int **l_157 = &g_122;
    int l_160 = 7L;
    short l_248 = 0x4C53L;
    short l_366 = 0xAD86L;
    int ***l_427 = &l_157;
    int l_441 = 0xFBA4E74FL;
    int * const l_456 = &l_160;
    int l_472 = (-1L);
    const int l_516 = 0x63396944L;
    char l_616 = (-3L);
    short l_982 = 0x8006L;
    if ((safe_rshift_func_int16_t_s_s(0xDB8EL, ((((l_157 == &g_69) > (!(((func_35((**l_157), g_26, g_98, g_98) == (safe_mod_func_uint8_t_u_u(l_160, p_22))) == g_26) , (**l_157)))) > 4294967288UL) >= p_25))))
    {
        int * const l_167 = &g_77;
        int *l_168 = &g_77;
        short l_189 = 0xBFB4L;
        unsigned l_214 = 0xF8D8BDE8L;
        for (g_98 = 0; (g_98 >= 28); g_98 = safe_add_func_uint16_t_u_u(g_98, 8))
        {
            unsigned short l_165 = 1UL;
            int *l_166 = &l_160;
            (*l_166) = (p_24 , (safe_rshift_func_uint8_t_u_s(l_165, l_165)));
            l_168 = l_167;
            (*l_168) = p_24;
            (*l_166) ^= ((safe_rshift_func_int8_t_s_s(0xE3L, ((((((*l_167) > (g_92 , ((void*)0 != (*l_157)))) <= (g_92 >= (*l_167))) && (((g_92 & (((g_98 <= 0xE8L) >= 0x701CCAA1L) == 0x6633CC6EL)) || p_24) || g_98)) , 9L) > p_25))) & 65535UL);
        }
        for (g_92 = (-27); (g_92 >= (-4)); g_92 = safe_add_func_int32_t_s_s(g_92, 8))
        {
            int **l_177 = &g_122;
            (**l_157) = (safe_lshift_func_uint8_t_u_u((g_92 <= ((l_177 != (void*)0) , (0xB9C9A99DL & p_23))), 0));
            if ((((safe_sub_func_uint8_t_u_u((p_24 || 0UL), (p_25 < (g_26 & (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((g_77 | ((g_26 <= g_98) != (safe_mod_func_int8_t_s_s(0x40L, (safe_mod_func_int16_t_s_s(((((void*)0 != &g_69) | (-9L)) ^ g_98), 0x43A8L)))))))), 0x590D9D04L)))))) != p_22) != g_98))
            {
                (*l_167) &= (*g_122);
            }
            else
            {
                short l_192 = 0xC41FL;
                int *l_195 = &g_98;
                if ((((g_92 > 4294967288UL) , (((safe_mod_func_int8_t_s_s(l_189, ((g_26 , p_23) & (((safe_rshift_func_int8_t_s_u(g_92, l_192)) & ((*l_168) < (**l_157))) > (*g_122))))) | 254UL) , p_22)) >= g_98))
                {
                    for (l_192 = (-6); (l_192 >= 10); l_192 = safe_add_func_uint32_t_u_u(l_192, 3))
                    {
                        short l_196 = 0xFA89L;
                        if (p_22)
                            break;
                        (*l_157) = l_195;

                        ;
                        if (p_23)
                            continue;
                        (*l_157) = ((l_196 && p_23) , (((p_25 , 0x4DL) , ((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(p_24, 1L)), 4)) , (p_24 | ((*g_122) < (p_22 >= (-1L)))))) , (void*)0));

                        ;
                    }

                    ;
                    (*l_167) = (!(1UL <= p_25));
                    g_122 = l_167;

                    ;
                }
                else
                {
                    char l_209 = 0x8FL;
                    int *l_216 = &g_98;
                    const int *l_218 = &l_160;
                    (*g_122) |= (*l_167);
                    (*l_157) = (void*)0;

                    ;
                    for (g_77 = 28; (g_77 >= 11); --g_77)
                    {
                        unsigned char l_217 = 0x1CL;
                        (*l_195) ^= (safe_sub_func_int16_t_s_s(g_92, (((((*l_168) & (g_92 , (safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(l_209, (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((&l_168 != ((*l_167) , ((2L ^ (((l_209 , (g_26 ^ 7L)) & l_214) | 0xF029L)) , (void*)0))) && p_24), g_92)) & 0xA6CA7198L), 12)))) && 3L), p_22)))) ^ p_25) , p_22) > g_215)));
                        (*l_216) ^= (l_216 != (l_217 , l_218));
                        (*l_195) = p_25;
                        (*l_216) ^= p_22;
                    }
                }

                ;
                return g_215;
            }
        }
    }
    else
    {
        int *l_246 = &l_160;
        unsigned char l_285 = 1UL;
        int l_476 = 0xF00133E1L;
        unsigned char l_502 = 248UL;
        int *l_592 = (void*)0;
        int * const **l_695 = &g_121;
        unsigned l_704 = 0xA72167E2L;
        int l_730 = 6L;
        unsigned char l_764 = 9UL;
        unsigned l_892 = 0UL;
        char l_904 = (-4L);
        int **l_937 = &l_246;
        if ((**l_157))
        {
            int l_221 = 0x8073F352L;
            int * const *l_226 = &g_122;
            unsigned char l_227 = 248UL;
            unsigned char l_261 = 0xBFL;
            unsigned short l_264 = 0x5E76L;
            unsigned l_310 = 0x2C0FE8FBL;
            if ((+((**l_157) == (((((safe_rshift_func_uint16_t_u_s(l_221, 7)) < l_221) | l_221) , 0x014DL) != (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u(g_98, (g_98 , (l_226 == (((+(p_24 | l_227)) , g_77) , &g_69))))) | p_22), 1))))))
            {
                unsigned l_231 = 0x9BFBAFD8L;
                int *l_238 = &l_221;
                int **l_311 = &g_122;
                char l_331 = 0x6CL;
                if ((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((((((l_231 >= (!(safe_sub_func_int8_t_s_s((((((g_92 | g_26) , (*l_157)) != (void*)0) == g_92) & (**l_157)), g_92)))) != g_239) , g_26) < 0xFFL) , g_77) > g_77))), g_239)))
                {
                    const unsigned char l_247 = 255UL;
                    int *l_262 = &l_221;
                    short l_275 = (-10L);
                    (*l_238) ^= (safe_mod_func_uint16_t_u_u((+g_239), ((((p_25 && ((safe_add_func_int32_t_s_s(((((void*)0 == (*l_226)) == (**l_157)) || p_25), g_98)) , 2L)) & (**l_226)) == g_215) , p_24)));
                    (*l_238) = (((((*l_238) ^ ((g_239 ^ ((((safe_add_func_int8_t_s_s(((p_24 , (p_23 <= ((*l_238) , 4294967292UL))) > ((l_246 == ((((void*)0 == (*l_226)) && l_247) , l_246)) != 0xA9L)), 9L)) & p_22) != p_25) <= 2UL)) == g_215)) | (**l_157)) >= g_92) & l_248);
                    for (l_160 = 0; (l_160 >= (-29)); --l_160)
                    {
                        int l_260 = 0x163B8269L;
                        int l_263 = (-1L);
                        int **l_265 = &l_246;
                        (*l_265) = func_45(p_24, p_24, ((*l_238) , g_215), g_98);

                        ;
                        (**l_157) |= (*l_238);
                    }

                    ;
                    if ((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_u((((safe_sub_func_int8_t_s_s(p_25, (((*l_157) != ((safe_rshift_func_uint8_t_u_s((((8L | (safe_add_func_uint8_t_u_u((g_239 != g_77), (((0x2B35L && (**l_157)) ^ p_22) != (**l_157))))) , p_25) > 0x02D8L), g_26)) , (*l_226))) , p_22))) && l_275) , 1L), 4)))))
                    {
                        unsigned l_276 = 18446744073709551608UL;
                        const int * const l_282 = &g_98;
                        const int * const *l_281 = &l_282;
                        (*l_157) = (func_40(g_215, l_276, (func_65((safe_add_func_uint32_t_u_u((((((!(safe_sub_func_uint32_t_u_u((l_281 == (void*)0), (*g_122)))) & g_92) > p_25) <= (safe_sub_func_int32_t_s_s(l_285, p_22))) , (**l_226)), (*l_262)))) , p_22)) , l_262);

                        ;
                    }
                    else
                    {
                        (*l_157) = (void*)0;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned char l_309 = 0x61L;
                    int **l_330 = &g_122;
                    for (l_261 = 0; (l_261 > 49); l_261 = safe_add_func_int8_t_s_s(l_261, 7))
                    {
                        int ***l_312 = &l_311;
                        (*g_122) = ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((!((safe_add_func_uint32_t_u_u(((((void*)0 == (*l_226)) || g_298) > (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((**l_226), 9)), 10))), ((-8L) >= ((l_238 != (*l_226)) ^ (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s((p_25 || (p_25 , 0UL)), l_309)), (*l_238))), l_310)))))) <= p_24)) ^ p_23), l_309)), (**l_157))), p_23)), p_22)) , (**l_157));
                        if (p_24)
                            continue;
                        (**l_157) = p_22;
                        (*l_312) = l_311;
                    }
                    if (((safe_lshift_func_int16_t_s_s(1L, (safe_add_func_uint8_t_u_u((**l_157), g_239)))) == (!g_239)))
                    {
                        (**l_226) = (*g_122);
                    }
                    else
                    {
                        unsigned l_319 = 0xCB47C0F1L;
                        int *l_329 = &l_160;
                        g_320 ^= ((l_309 && g_298) , func_35((((((*l_238) == ((**l_226) <= (-10L))) | g_239) & ((func_65((safe_sub_func_int32_t_s_s(((0x0637L == l_319) , (g_215 > p_22)), 0xC9C83B8CL))) < (*l_246)) ^ 4294967295UL)) , (*g_122)), p_24, g_239, g_298));
                        g_122 = (*l_226);
                        l_221 |= (safe_add_func_int16_t_s_s(((l_319 >= (func_65(((safe_add_func_int32_t_s_s((**l_226), p_25)) ^ p_22)) < ((void*)0 == &g_122))) & (p_25 , ((*g_122) > 2UL))), (-1L)));
                        (*l_157) = ((((~(func_65(l_309) ^ l_319)) | l_319) > (safe_mod_func_uint32_t_u_u((p_24 <= ((safe_sub_func_uint16_t_u_u(g_298, (**l_157))) , ((void*)0 != l_329))), 0xDCB55B69L))) , (void*)0);

                        ;
                    }

                    ;
                    if (((void*)0 == (*l_157)))
                    {
                        (*l_246) = ((0xFCL <= (p_25 < 0x70AAFF5BL)) , p_22);
                        return g_77;
                    }
                    else
                    {
                        (*l_246) = ((p_22 , g_92) ^ 0x9CL);
                    }
                    for (p_24 = 0; (p_24 == 9); p_24 = safe_add_func_int32_t_s_s(p_24, 6))
                    {
                        int l_334 = (-1L);
                        int **l_335 = &g_122;
                        (*l_246) = (*l_246);
                        if (l_334)
                            break;
                        if ((*l_246))
                            continue;
                        (*l_335) = func_61((g_92 , 0UL));

                        ;
                    }
                }

                ;
                ;
                for (l_331 = 0; (l_331 > (-13)); l_331 = safe_sub_func_uint16_t_u_u(l_331, 2))
                {
                    int l_346 = 0x2957DA97L;
                    for (l_310 = 0; (l_310 != 15); ++l_310)
                    {
                        (*l_238) |= 0x3EEF19BAL;
                    }
                    if ((((g_215 , (((((0L <= g_77) == g_215) >= ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_22, (safe_mod_func_int8_t_s_s(((l_346 , (func_54((p_23 , 0x93650C61L), &l_346, p_25, l_246, p_25) & 0x7CAFL)) >= g_215), g_320)))), g_239)) || p_24)) | g_26) || g_92)) != p_23) ^ p_23))
                    {
                        int l_353 = (-1L);
                        int **l_358 = &l_246;
                        (*l_157) = func_61((p_24 > ((((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((~l_346) <= g_77), p_24)), l_346)) != (safe_rshift_func_int16_t_s_u((l_346 < ((*l_246) < (~(0x42D6L != (((((void*)0 != &l_246) != g_298) > 0x47L) > l_353))))), g_26))) , 0xDBL) >= l_346)));

                        ;
                        (*l_358) = func_45(((g_98 , &g_121) != &g_121), (**l_157), (safe_rshift_func_uint16_t_u_u((func_65((*l_246)) | ((-6L) < ((safe_lshift_func_int16_t_s_s(((*l_246) >= g_215), 9)) != (*l_246)))), p_22)), g_320);

                        ;
                        if ((**l_358))
                            continue;
                    }
                    else
                    {
                        int **l_359 = (void*)0;
                        (*l_157) = (*l_226);
                    }
                }
                for (l_227 = 28; (l_227 >= 59); l_227 = safe_add_func_int32_t_s_s(l_227, 8))
                {
                    if (p_24)
                        break;
                    return p_22;


                }
                return g_92;


            }
            else
            {
                int *l_367 = (void*)0;
                unsigned char l_370 = 0xA3L;
                int l_371 = 0x0DF19C7CL;
                (*l_246) |= (**l_157);
                l_371 = ((((safe_add_func_uint16_t_u_u(((g_92 , (safe_sub_func_uint16_t_u_u(func_35(p_22, (((safe_rshift_func_uint8_t_u_u((g_26 >= l_370), 1)) , &l_226) != (void*)0), p_25, p_22), (*l_246)))) & g_239), (*l_246))) > g_26) < 0xECL) | 9L);
            }
            if (((*l_246) > ((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_239, 7)), ((func_40((func_35(((safe_mod_func_int8_t_s_s(p_23, g_320)) >= ((((**l_226) > ((**l_226) && g_298)) || ((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*l_246) | (safe_add_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(g_390, g_98)) || g_298), p_25))), (**l_157))), 0xEEL)) && (*l_246))) & 1UL)), (**l_226), p_22, g_239) , p_25), g_320, p_24) , 65530UL) < p_22))) < p_23), 3)), g_390)) <= g_390)))
            {
                short l_403 = 0x766AL;
                int ***l_411 = &l_157;
                for (l_261 = 0; (l_261 > 21); l_261 = safe_add_func_uint32_t_u_u(l_261, 3))
                {
                    int **l_404 = &g_122;
                    int l_405 = 0x5B8F6BA0L;
                    int *l_406 = (void*)0;
                    int *l_407 = (void*)0;
                    int *l_408 = &l_221;
                    (*l_404) = func_61((g_26 < ((((((((((safe_rshift_func_uint16_t_u_s(p_23, 15)) <= ((~(safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(65535UL, (safe_add_func_uint8_t_u_u((*l_246), (((((p_22 , (**l_226)) | 0L) , &g_122) != l_226) , g_92))))), 0xE982L))) && p_25)) ^ p_23) > p_23) || l_403) , (**l_226)) < 0xCAL) , 0UL) , p_24) <= 65532UL)));
                    (*l_408) ^= ((((*l_246) != (p_22 ^ (**l_404))) , ((**l_157) == ((*l_226) != (void*)0))) > ((**l_157) != func_65(l_405)));
                    (**l_157) = (safe_lshift_func_int8_t_s_s(((p_22 || ((g_239 != 0UL) <= (*l_408))) >= 0x9976L), 1));
                    (**l_404) = (*g_122);
                }
                l_221 = ((1L <= (!func_40((**l_157), (&l_246 == (void*)0), g_98))) >= g_215);
                if ((func_65((0xE2648E4CL != func_65((l_403 , (((((((&g_121 == l_411) , (*g_122)) , (g_77 ^ p_25)) | 0x7AFDE392L) > (safe_mod_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((~p_22) , p_24), 0x50BAL)) , g_26), g_298))) >= g_239) && (-6L)))))) ^ g_298))
                {
                    int *l_416 = &l_221;
                    l_416 = func_61(g_77);

                    ;
                    (**l_411) = (**l_411);
                }
                else
                {
                    int *l_417 = (void*)0;
                    (*g_122) = ((***l_411) >= (-1L));
                    (**l_411) = l_417;

                    ;
                }

                ;
                for (g_320 = 0; (g_320 > (-26)); --g_320)
                {
                    unsigned short l_424 = 6UL;
                    (*l_246) = ((safe_mod_func_uint8_t_u_u(((g_298 <= g_320) , g_92), 0xE3L)) & ((p_23 <= (l_424 | 0xFDL)) , (&l_226 == (void*)0)));
                    (*l_246) = l_403;
                    for (g_298 = 0; (g_298 >= 48); ++g_298)
                    {
                        (*l_157) = l_246;

                        ;
                        (*l_157) = (**l_411);
                        (***l_411) = (((0xC4L == (l_411 == l_427)) != p_22) & ((safe_sub_func_uint16_t_u_u(0xBF1DL, (func_54(((g_98 >= g_298) || ((!((safe_rshift_func_uint8_t_u_u(0xDBL, (safe_add_func_int8_t_s_s((0UL ^ (*g_122)), (***l_427))))) == p_24)) > g_92)), (**l_411), g_26, &g_98, p_24) == p_22))) & l_424));
                    }
                }

                ;
            }
            else
            {
                (**l_427) = l_246;

                ;
            }

            ;
            for (l_221 = 0; (l_221 <= (-16)); l_221 = safe_sub_func_int8_t_s_s(l_221, 2))
            {
                unsigned char l_438 = 255UL;
                (*l_246) = (*l_246);
                (*l_246) = (safe_lshift_func_uint8_t_u_u(0xAAL, 1));
            }
            return p_22;


        }
        else
        {
            int *l_460 = &g_98;
            unsigned short l_461 = 1UL;
            int l_497 = (-1L);
            const int l_549 = 0x1757D152L;
            int **l_585 = &g_122;
            if (((safe_mod_func_int16_t_s_s((g_92 && ((safe_add_func_int32_t_s_s(((func_40(func_65(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((func_35(((((safe_unary_minus_func_uint32_t_u(((safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_u(p_22, 12)) <= (func_54(p_23, l_456, ((safe_mod_func_int32_t_s_s(0x9ACDED3CL, g_77)) == p_22), l_460, g_239) & p_22)))) == 0x2FFEL))) == g_215) , 1UL) < 0x570848E8L), p_23, g_215, g_77) , l_461) == g_239) && 1UL), g_298)), 0)) , 0x43423BE5L)), g_320, g_239) >= 0L) | 0xE6L), g_390)) > 0xA8ECL)), g_298)) , (*g_122)))
            {
                int * const l_473 = &g_98;
                unsigned l_477 = 1UL;
                int * const * const *l_487 = &g_121;
                (*g_122) |= 0L;
                (*l_473) = (safe_mod_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(g_298, ((*l_246) , ((safe_mod_func_uint8_t_u_u(0xA7L, ((safe_rshift_func_int16_t_s_u(g_215, 9)) , l_472))) ^ ((l_473 != (void*)0) || (*l_246)))))) >= (func_54(g_298, l_460, p_23, &g_98, p_23) > 0xD768535EL)), g_77)) ^ 0x1BE027A8L) | p_22), p_23));
                if (((0UL <= ((safe_mod_func_int16_t_s_s(func_65((((*l_246) | (+func_65(((1UL || (((p_22 ^ 4294967292UL) , func_65((*l_456))) | g_26)) | (*l_473))))) >= (*l_473))), 0xA013L)) , l_476)) ^ l_477))
                {
                    unsigned short l_486 = 0UL;
                    int *l_488 = &g_98;
                    int l_489 = 0xF8AEFEFDL;
                    (*l_456) ^= (g_98 , (func_35(p_22, g_215, (func_65((safe_rshift_func_uint8_t_u_s(0x4CL, 0))) & g_26), (*l_473)) , (*g_122)));
                    if ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_s(g_92, 4)) > g_320) <= (*l_488)) || g_98), g_320)) & (*l_460)), p_24)))
                    {
                        (*l_456) ^= l_489;
                        (***l_427) ^= (g_215 == ((0x46F8L || g_26) && 1L));
                        return g_298;
                    }
                    else
                    {
                        unsigned char l_494 = 0xAAL;
                        (*l_460) = (((safe_add_func_uint8_t_u_u((p_25 , p_25), (g_92 , (safe_mod_func_uint32_t_u_u((l_494 < p_24), p_25))))) <= 0UL) > ((safe_mod_func_uint16_t_u_u(((p_22 != (~l_494)) | 0xA9L), l_497)) , 0xC7L));
                    }
                    (*l_456) &= (safe_add_func_uint32_t_u_u(((void*)0 != &l_460), ((((safe_mod_func_int8_t_s_s((((func_35((*g_122), (((*l_488) , func_65(((func_65((*l_488)) & p_24) || func_65((*g_122))))) ^ (-1L)), g_390, g_298) <= g_298) | 1UL) <= g_320), 0x0EL)) ^ g_298) ^ g_239) > p_25)));
                }
                else
                {
                    return g_215;
                }
            }
            else
            {
                unsigned l_517 = 0x97414766L;
                int *l_518 = &l_472;
                if (l_502)
                {
                    int ***l_514 = &l_157;
                    unsigned l_515 = 4294967290UL;
                    for (l_502 = 6; (l_502 >= 2); l_502 = safe_sub_func_uint16_t_u_u(l_502, 1))
                    {
                        int l_505 = 0x2C2133D7L;
                        if (l_505)
                            break;
                        return p_23;
                    }
                    (*l_456) = (((+((((safe_lshift_func_int8_t_s_s(g_390, ((***l_427) < (((safe_add_func_int8_t_s_s(func_65(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((0x8E72L & (((void*)0 != l_514) == 5UL)) , (((0x06E1L <= (~((((func_65((((l_515 , (*l_246)) && p_24) > g_215)) ^ g_239) , p_24) <= (***l_427)) == (***l_514)))) && l_516) == 6L)), (*l_246))), 0x36L)) , (*l_246))), g_98)) & p_23) == 0xC317L)))) , g_239) != l_517) ^ g_320)) <= p_25) | p_23);
                }
                else
                {
                    int *l_523 = &l_160;
                    unsigned l_540 = 8UL;
                    (*l_157) = l_518;

                    ;
                    (*l_460) |= ((((*l_518) != ((((((safe_rshift_func_int8_t_s_u(((*g_122) || p_25), g_390)) > 0xF0L) == (*l_523)) ^ p_25) || g_26) , g_298)) ^ p_23) && 0x8D0CL);
                    (*l_523) = (func_40((safe_sub_func_uint32_t_u_u((**l_157), (((*l_460) && (g_26 <= (safe_rshift_func_int8_t_s_u(((0xC56BL == (safe_rshift_func_int16_t_s_u(((safe_add_func_int32_t_s_s((-3L), (safe_mod_func_uint8_t_u_u(p_24, (safe_lshift_func_uint16_t_u_u(((p_25 ^ (safe_add_func_int8_t_s_s(0xE9L, (safe_rshift_func_int8_t_s_u((g_239 & 0x4B2EL), (*l_246)))))) == l_540), (*l_518))))))) || g_320), 15))) , 6L), p_25)))) | 0xA672L))), (**l_157), p_23) & p_23);

                    ;
                }
            }
            if ((((safe_rshift_func_uint16_t_u_s(func_35((*g_122), (((((safe_add_func_uint16_t_u_u(1UL, ((p_22 != func_65(((0xACL > (func_65(((*l_456) , (((p_24 , p_23) && ((*l_460) | l_549)) | p_25))) != 0UL)) , (*l_456)))) >= p_23))) >= 0x059075F0L) && (*g_122)) | 1UL) || (-1L)), p_25, (***l_427)), 7)) ^ p_23) || g_239))
            {
                const int *l_551 = &l_516;
                const int **l_550 = &l_551;
                int l_556 = 1L;
                if ((l_550 != ((g_92 != (*l_551)) , &l_460)))
                {
                    short l_552 = 0L;
                    int *l_553 = (void*)0;
                    (*l_550) = (void*)0;

                    ;
                    (*g_122) ^= l_552;
                    (*l_550) = l_553;
                    (**l_427) = l_460;
                }
                else
                {
                    (*g_122) &= (safe_rshift_func_uint8_t_u_u(g_390, 2));
                }

                ;
                l_556 ^= p_24;
            }
            else
            {
                short l_569 = (-5L);
                if ((safe_rshift_func_uint8_t_u_s(g_215, 4)))
                {
                    unsigned l_579 = 0x5D3F1F18L;
                    int **l_580 = &l_460;
                    (*l_580) = func_45((((g_215 , (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((((((safe_mod_func_uint8_t_u_u(((l_569 <= (*l_460)) >= ((safe_unary_minus_func_int32_t_s((g_77 == ((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((*l_246), (p_23 > (p_22 , g_320)))) >= ((safe_sub_func_int32_t_s_s((g_26 >= (**l_157)), p_23)) < p_23)), 4)) > 1L)))) <= 251UL)), (-9L))) , (void*)0) == l_460) > 7UL) != 0xD96EL) > l_569), p_24)) , p_23), (*l_460))) > l_579), 1L)), p_22))) && 65535UL) != g_98), p_25, g_77, p_22);
                    (***l_427) = (g_320 >= ((g_92 != ((g_320 >= ((safe_add_func_uint8_t_u_u(((((((5UL & ((0x92L | (safe_lshift_func_int16_t_s_u(p_25, 7))) >= (l_585 == &g_122))) , g_320) && g_320) , p_22) < 0xBFL) >= (*l_460)), 0x77L)) , p_25)) || p_24)) , p_23));
                    (*l_580) = &g_98;
                }
                else
                {
                    unsigned l_590 = 18446744073709551611UL;
                    int *l_591 = &g_98;
                    int l_605 = (-1L);
                    (*l_460) &= p_24;
                    if (((p_22 || l_569) , ((((**l_585) , (((!(*g_122)) <= (safe_add_func_uint32_t_u_u((*l_246), ((g_390 & ((~((p_25 < (safe_lshift_func_int16_t_s_u((g_26 , 0x47BFL), 15))) != 0L)) || l_590)) , g_390)))) == (**l_157))) == (*l_246)) || g_390)))
                    {
                        g_69 = (void*)0;
                    }
                    else
                    {
                        (*l_246) = ((void*)0 == l_591);
                        return g_98;
                    }
                    l_592 = (void*)0;
                    for (l_461 = (-2); (l_461 > 44); l_461++)
                    {
                        const int **l_596 = (void*)0;
                        const int ***l_595 = &l_596;
                        (*l_456) = (g_26 , ((l_595 == &l_596) ^ (func_35(func_35(l_569, (((*l_246) != (&l_460 == &g_69)) , (safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((func_65(((safe_rshift_func_int8_t_s_s((func_40(((((&l_591 == (l_569 , (*l_427))) == 0x69L) ^ 0x1FD94D90L) > 65535UL), p_24, p_22) > g_320), g_239)) >= g_320)) == 0x8852L), l_605)) | g_320), 0x09B8L)), 0x5506340CL))), g_298, g_26), g_298, g_26, p_25) ^ 0x5F4EL)));
                    }
                }
                (*l_246) ^= p_22;
            }
            (**l_157) &= p_24;
        }
        if (((252UL < ((safe_rshift_func_uint16_t_u_u(g_320, 2)) && (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((p_22 ^ g_98), (safe_mod_func_uint32_t_u_u(g_390, p_25)))) , (0x9006L && ((*l_456) > ((*l_157) != &g_98)))), 3)), l_616)))) > p_23))
        {
            int *l_628 = &l_160;
            char l_676 = 0x86L;
            int * const l_677 = &l_160;
            int ***l_687 = &l_157;
            int l_705 = 1L;
            for (l_476 = 0; (l_476 != (-17)); l_476 = safe_sub_func_uint8_t_u_u(l_476, 8))
            {
                int l_625 = 0x10CDD6D6L;
                int l_650 = 0xE377AA4BL;
                short l_658 = 9L;
                for (l_248 = 29; (l_248 == (-5)); --l_248)
                {
                    int l_634 = (-1L);
                    short l_635 = (-1L);
                    if ((((p_25 , func_65((0x5AEB7DCFL & (*l_456)))) != (((((-1L) != (safe_lshift_func_uint8_t_u_s(p_25, (safe_mod_func_int8_t_s_s(0L, (((g_320 == (g_298 || 0xAEA2C408L)) > p_25) ^ g_298)))))) | 1UL) <= 0L) , 0xFD3FL)) , p_25))
                    {
                        unsigned l_633 = 0xD3462601L;
                        l_628 = func_45(l_625, (safe_lshift_func_int16_t_s_s((((g_92 , p_25) , &g_121) == (void*)0), 15)), p_23, g_320);

                        ;
                        (*l_456) &= (((g_98 && 0x56C4L) | (safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((p_24 , 0xD398F1CFL) < (***l_427)), l_625)) == ((l_633 != l_634) != ((l_635 <= 0x0FL) >= g_636))), p_22))) != 0xC4642A13L);
                        (*l_246) = (safe_lshift_func_int8_t_s_s(l_634, 6));
                    }
                    else
                    {
                        short l_649 = 0x6388L;
                        (*l_628) &= func_40((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0x203AL, g_636)), g_390)), 2)), (safe_mod_func_int16_t_s_s(l_635, g_215)))), g_26, g_26);
                    }

                    ;
                    return g_77;
                }
                if (l_650)
                {
                    return p_25;
                }
                else
                {
                    (**l_427) = (*l_157);
                }
                (*l_456) = (safe_mod_func_uint32_t_u_u(((***l_427) , ((((safe_sub_func_int8_t_s_s(func_65((~(((((!(l_650 & 3UL)) , &g_121) == (func_40((*l_456), ((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(func_65((*g_122)), p_25)))) ^ g_636), p_24) , (void*)0)) , &l_628) == &l_628))), p_25)) && p_23) ^ l_658) && g_98)), 0xD3EB2F1BL));
                g_122 = (**l_427);
            }
            if (((func_40((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((-7L) || 0xFD69L), g_390)) , (*l_628)), (((0xD7706008L > func_35((safe_mod_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((((safe_lshift_func_int16_t_s_u(g_636, p_22)) , (void*)0) == &g_98) , 1L) | p_25), 0xBE92B278L)), p_25)) && (**l_157)), (*l_677))), g_298, p_23, p_24)) , (*l_246)) & p_22))), p_25, g_239) | p_25) != (*l_677)))
            {
                int **l_694 = &l_246;
                if ((safe_sub_func_int8_t_s_s((*l_677), ((void*)0 != l_246))))
                {
                    unsigned l_682 = 0xFE013C73L;
                    int l_723 = 0x5E25FE52L;
                    (*g_122) = (safe_add_func_int8_t_s_s((g_298 <= (p_25 , (((l_682 && (safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((((void*)0 == l_687) >= p_23), ((((safe_rshift_func_int8_t_s_s((255UL <= ((p_24 <= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((((func_65((*g_122)) , (void*)0) != l_694) , 65531UL), g_215)), 10))) ^ p_25)), 4)) , l_695) == &l_694) || p_23))), (*l_246)))) <= g_215) & 0x2264L))), 0x3DL));
                    if (p_24)
                    {
                        (**l_427) = (*l_694);

                        ;
                    }
                    else
                    {
                        unsigned char l_702 = 1UL;
                        int **l_703 = &l_246;
                        (**l_687) = (void*)0;

                        ;
                        (*l_694) = &g_98;

                        ;
                        (*l_694) = &g_77;

                        ;
                        (*l_677) = func_65((p_25 , ((**l_703) , p_23)));
                    }

                    ;
                    ;
                    for (g_92 = 24; (g_92 >= (-26)); g_92 = safe_sub_func_int32_t_s_s(g_92, 6))
                    {
                        int *l_714 = &l_472;
                        (*l_694) = (g_98 , l_714);

                        ;
                        l_723 &= ((safe_sub_func_int32_t_s_s(p_24, ((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(g_636, (safe_mod_func_uint32_t_u_u(g_636, ((!(*l_628)) | (l_694 != (void*)0)))))) || 0x400230C9L) , (&l_694 == l_695)), 5)) != (*l_714)))) != 0x66BEL);
                        (*l_157) = (**l_427);
                        (*l_694) = &g_98;

                        ;
                    }

                    ;
                }
                else
                {
                    const int l_724 = 0x6046629EL;
                    int ***l_727 = (void*)0;
                    (*l_628) |= (g_77 < (((*l_694) == (void*)0) != l_724));
                    if ((+((~((safe_lshift_func_uint16_t_u_u((l_727 == (void*)0), (safe_rshift_func_int16_t_s_s(func_40((g_26 >= 0x332143F3L), (l_730 , func_54(((func_40(p_24, g_98, g_77) , (**l_687)) == (*l_694)), g_731, g_298, &g_732, p_25)), g_298), 5)))) > (**l_694))) >= p_25)))
                    {
                        (***l_687) = (**l_157);
                        return g_298;
                    }
                    else
                    {
                        int *l_733 = &l_705;
                        (*l_694) = (**l_687);

                        ;
                        (*l_694) = l_733;

                        ;
                        (**l_427) = (*l_694);

                        ;
                        (**l_694) |= (0UL >= g_390);
                    }

                    ;
                    ;
                    (*l_677) ^= (*g_122);
                }

                ;
                ;
                if (((p_22 <= (safe_sub_func_uint16_t_u_u((**l_694), ((g_215 | ((~(0x2CL > 0UL)) >= (+((safe_rshift_func_int16_t_s_u((0x44L && g_92), 4)) ^ ((safe_add_func_int16_t_s_s((p_24 != ((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s((l_694 != l_694), 0)) == 0x59L) || p_24), 7)), p_23)))) , g_298)), p_24)) > p_23))))) & 0UL)))) , (*g_731)))
                {
                    int *l_755 = &l_160;
                    if (((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u((g_98 || ((g_98 , (safe_rshift_func_uint8_t_u_u((**l_694), (**l_694)))) > 1UL)), ((safe_rshift_func_uint8_t_u_u((p_23 , p_25), (((((p_24 < ((l_694 != &g_731) != 1L)) == p_23) , g_239) && (**l_694)) && (-10L)))) , p_25))) | p_24) & p_22), g_636)) >= g_636))
                    {
                        (*l_456) = 1L;
                        (**l_427) = (**l_687);
                        (*g_731) ^= (-4L);
                        return p_23;


                    }
                    else
                    {
                        (**l_427) = l_246;

                        ;
                        g_122 = l_755;

                        ;
                        return g_320;


                    }
                }
                else
                {
                    (*l_456) = p_25;
                }
            }
            else
            {
                int * const l_765 = &g_732;
                int **l_766 = (void*)0;
                int **l_767 = &l_592;
                (**l_157) = 0x67A904EAL;
                (*l_157) = (**l_427);
                (**l_157) = ((g_98 == p_25) < 0x063315A8L);
                (*l_767) = l_765;

                ;
            }

            ;
            ;
            ;
            (**l_687) = (*l_157);
            (*l_157) = &g_732;

            ;
        }
        else
        {
            (*l_157) = (**l_427);
        }

        ;

        ;
        for (l_285 = 0; (l_285 > 55); l_285++)
        {
            short l_793 = 0xB90FL;
            unsigned l_855 = 5UL;
            int *l_858 = (void*)0;
            unsigned l_859 = 1UL;
            int ***l_861 = &l_157;
            int l_873 = (-1L);
        }
        if ((((safe_sub_func_int32_t_s_s(l_704, ((*l_157) == (((p_23 , (g_92 & g_215)) , (safe_sub_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_24, p_23)), 0x0F4FL)) , g_215) < 0x9E18L), 0x4F061337L))) , (void*)0)))) == 0x64FFL) != 0x91C7L))
        {
            const int *l_928 = &l_472;
            for (g_320 = 0; (g_320 < 29); g_320 = safe_add_func_int16_t_s_s(g_320, 9))
            {
                const int **l_929 = &l_928;
                (*l_929) = (g_298 , l_928);
            }
            (***l_427) = p_22;
            (*g_731) = ((((**l_427) != l_928) , (safe_sub_func_uint8_t_u_u((*l_456), (-1L)))) >= 65535UL);
        }
        else
        {
            int l_934 = (-10L);
            int *l_938 = &l_160;
            const int *l_955 = &g_77;
            int ***l_956 = (void*)0;
            const int l_969 = 0x2B899D25L;
            if (((((safe_lshift_func_int8_t_s_u((((((func_40(func_54(l_934, (*l_157), (~(g_239 , func_65(((((safe_lshift_func_uint16_t_u_s((((((l_934 , ((g_390 <= 0x8C82L) || p_23)) == ((void*)0 == &g_121)) <= g_320) >= 0x475BL) , p_24), 12)) , (*l_427)) == l_937) <= p_25)))), l_938, p_23), p_24, l_934) >= p_22) != g_239) , p_23) && (**l_157)) ^ p_24), p_23)) < g_239) , g_215) || p_25))
            {
                const unsigned l_943 = 5UL;
                int *l_949 = &g_98;
                unsigned short l_957 = 6UL;
                (*l_938) &= (*g_122);
                for (g_77 = 0; (g_77 == 26); g_77 = safe_add_func_uint16_t_u_u(g_77, 6))
                {
                    int l_950 = 0xBF7F6FBAL;
                    (*g_122) |= (*g_731);
                    (*l_938) ^= (l_950 <= 5UL);
                }
                if ((((!func_35(func_54(func_35(((((g_732 < (safe_rshift_func_int8_t_s_s((l_938 != l_938), ((safe_sub_func_int16_t_s_s(((p_22 && (g_298 >= g_26)) ^ 0xE6L), g_320)) && func_65((l_955 != l_949)))))) > 0x70L) , &l_157) == l_956), l_957, p_25, p_24), l_949, g_298, l_949, g_215), g_239, p_24, g_946)) != 0xEDL) , (*l_456)))
                {
                    int **l_958 = &l_246;
                    (*l_958) = (p_24 , func_61((*l_949)));

                    ;
                    (*l_246) = (func_54((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(func_35((*l_938), (0xA23EL > ((**l_958) & ((void*)0 == l_949))), g_215, (***l_427)), p_23)), g_946)), (*l_958), p_23, &g_946, g_946) | p_24);
                }
                else
                {
                    (*g_122) = (*g_731);
                    (*g_122) = ((p_23 & p_22) <= ((void*)0 != &l_949));
                }
            }
            else
            {
                int *l_970 = &g_732;
                if ((((safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((0x0316L != p_24) != (g_98 || 0xD4L)) , l_969), ((void*)0 == l_970))) , (func_35(p_22, g_98, p_24, (*l_955)) == 0x2E9CL)), (-1L))), (-2L))) , (***l_427)) && g_215))
                {
                    int *l_981 = &l_472;
                    (**l_157) = (*g_122);
                    for (g_98 = (-21); (g_98 < (-1)); g_98++)
                    {
                        int l_975 = (-1L);
                        unsigned char l_977 = 251UL;
                        int *l_978 = &g_946;
                        (*l_978) ^= func_65((((g_92 , (*l_427)) == (*l_427)) >= (((p_23 != (safe_rshift_func_int8_t_s_u((*l_970), g_77))) != (((l_975 | (*g_731)) , (((*l_938) > g_976) & l_977)) < p_23)) == p_22)));
                        (*l_978) = (safe_add_func_int32_t_s_s(0xEC80C70BL, (*g_731)));
                    }
                    (*l_937) = l_981;

                    ;
                    (*l_246) = (g_390 == ((l_982 , (((safe_add_func_uint32_t_u_u(((p_24 != (~(p_25 >= p_24))) , (g_215 && (g_636 && (**l_937)))), (func_54(g_26, l_970, (*l_970), (*l_157), (**l_157)) , g_976))) && 0x944859FEL) && (*l_938))) & p_25));
                }
                else
                {
                    char l_995 = 0x9EL;
                    int *l_1010 = &l_472;
                    (***l_427) = (((safe_mod_func_int16_t_s_s(p_24, (safe_mod_func_int32_t_s_s(((l_970 != ((*l_970) , &g_946)) || 0xEAL), ((safe_mod_func_uint8_t_u_u(func_65(((safe_mod_func_int16_t_s_s(0x025BL, ((((((((((safe_lshift_func_uint8_t_u_s((p_23 || 1UL), 5)) , (-6L)) <= l_995) , g_946) < g_77) & (**l_157)) & 0x0CL) || 5L) , 2L) , g_98))) , p_22)), p_23)) ^ g_298))))) ^ 0xDFL) < (*l_456));
                    g_122 = func_45(g_77, (p_25 & (safe_add_func_int8_t_s_s(p_24, 255UL))), (*l_970), ((safe_sub_func_int8_t_s_s(((p_22 == (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(g_98, p_22)), (-1L)))) <= 4294967286UL), (**l_157))) >= (*l_955)));
                    (*l_1010) |= ((((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(p_23, g_239)), 4)) , (((func_65(l_995) >= (g_390 , p_25)) || ((safe_add_func_uint32_t_u_u(p_24, (*l_456))) | (*l_970))) , (*l_456))) & (*l_970)) < g_98);
                }


                g_122 = (*l_157);
                (**l_157) &= (safe_rshift_func_uint8_t_u_u((*l_456), (safe_add_func_int32_t_s_s(p_24, (safe_unary_minus_func_int32_t_s((*g_731)))))));
            }

            ;

        }


    }

    ;
    (**l_427) = (**l_427);
    for (l_616 = (-14); (l_616 < 6); l_616 = safe_add_func_uint8_t_u_u(l_616, 7))
    {
        char l_1018 = (-5L);
        int **l_1019 = &g_122;
        unsigned short l_1038 = 0xDB5EL;
        unsigned l_1090 = 0x4FAC8B8DL;
        unsigned l_1093 = 4294967295UL;
        int *l_1110 = &l_472;
        if (((**l_1019) ^ (**l_1019)))
        {
            const int *l_1045 = &g_77;
            int *l_1056 = &l_472;
            int ***l_1064 = &l_157;
            (***l_427) &= p_24;
            for (g_636 = (-8); (g_636 >= 3); g_636++)
            {
                int **l_1054 = &g_122;
                if ((safe_sub_func_uint8_t_u_u(g_92, ((65533UL < (g_320 , (safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((((safe_sub_func_uint8_t_u_u(g_976, g_946)) , (p_23 > ((((safe_sub_func_uint8_t_u_u(g_946, (safe_mod_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s((((void*)0 != (*l_1019)) , (***l_427)), p_22)) , 0x71DEL) <= p_22) && p_24) , (**l_1019)), (*l_456))))) , g_390) && 0UL) & (-1L)))) , 4294967295UL) && p_24), 2)) >= (*l_456)), 0x7AEC10AEL)), g_92)))) > l_1038))))
                {
                    (***l_427) = p_22;
                    (*l_456) = (-7L);
                    if (p_22)
                        continue;
                    if (p_22)
                        break;
                }
                else
                {
                    int * const l_1055 = &l_160;
                    if (func_54((safe_lshift_func_int16_t_s_u((g_239 > (g_77 && p_24)), 3)), (*l_1054), (**l_1054), l_1056, p_24))
                    {
                        int *l_1057 = &l_472;
                        l_1057 = l_1055;

                        ;
                    }
                    else
                    {
                        (**l_1019) = (safe_mod_func_int32_t_s_s((*g_122), (p_24 , (safe_rshift_func_uint16_t_u_u((g_77 >= p_22), (g_946 ^ (**l_1019)))))));
                    }
                    (**l_1054) = (*l_1055);
                    (*l_1056) &= 0L;
                }
                (*l_1056) = (safe_rshift_func_uint16_t_u_s((&g_121 != (((((*l_1045) , g_26) > g_320) && 3UL) , l_1064)), (safe_sub_func_int8_t_s_s(func_54((*l_1045), (*l_1054), p_25, &g_732, (**l_1054)), p_24))));
                for (g_98 = 0; (g_98 == 16); ++g_98)
                {
                    unsigned char l_1075 = 0x79L;
                    (*g_731) = 0xDE4106A1L;
                    if ((**l_1019))
                        break;
                    (*l_1056) ^= func_65((g_298 , (((func_65((safe_add_func_int32_t_s_s(((((func_65(((safe_lshift_func_int16_t_s_s(g_946, (safe_mod_func_int16_t_s_s((p_24 , (**l_1019)), (0xC2A1D464L ^ (func_65((0x5216L & func_65((((-1L) && (g_77 ^ g_320)) < (**l_1054))))) != l_1075)))))) , p_24)) <= 3L) == l_1075) && p_23) , (*g_731)), (**l_1019)))) , 0UL) <= (*g_122)) | 0xCD44L)));
                    (*l_1056) = (((((*l_1045) , (void*)0) != (g_92 , func_61(p_23))) , (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_946, func_65((**l_1054)))), 0x3EL)), (***l_427)))) > p_24);
                }
            }
            return p_22;
        }
        else
        {
            int l_1089 = 2L;
            int l_1102 = 0x140CBDB3L;
            (**l_1019) = (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_98 < ((safe_add_func_int8_t_s_s((p_25 < (safe_unary_minus_func_int8_t_s((l_1089 | (1UL & (**l_1019)))))), 4L)) ^ l_1090)), (((safe_lshift_func_uint8_t_u_s(((0xBAEFL | p_25) , 248UL), (**l_1019))) , p_23) & g_298))), 0L));
            if ((**l_1019))
                break;
            (*l_456) ^= (l_1093 != (p_25 != ((safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((((g_636 >= p_23) == g_732) >= (***l_427)) || g_215), g_298)) , l_1102), g_390)) >= g_636)));
        }
        (*l_1019) = (**l_427);
        (*l_1110) &= func_54(((safe_rshift_func_int16_t_s_u((*l_456), (((safe_lshift_func_uint16_t_u_s(g_26, (**l_1019))) == (((***l_427) != (*l_456)) | (l_1019 != (void*)0))) && ((((((safe_sub_func_int32_t_s_s((((((p_25 | (p_22 <= 0x4C162548L)) >= p_23) , g_1109) , (*g_731)) , 0x6BA6DF31L), (*g_731))) > p_24) , (void*)0) == (*l_427)) , 0xC2FEL) , (**l_1019))))) & (**l_1019)), (**l_427), p_24, (**l_427), p_23);
    }
    return p_23;
}







static char func_35(int p_36, char p_37, char p_38, unsigned p_39)
{
    int *l_142 = &g_77;
    int **l_153 = &g_122;
    unsigned short l_154 = 65535UL;
    l_142 = &p_36;

    ;
    (*l_153) = func_45((safe_sub_func_uint16_t_u_u(0xDE48L, ((*g_122) != g_77))), (*l_142), p_37, (p_36 < (p_39 , (safe_add_func_uint8_t_u_u(g_98, ((((safe_rshift_func_uint8_t_u_u((!(safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((*l_142), p_37)), 250UL))), 0)) != p_36) || 0L) , 0x97L))))));
    return l_154;
}







static unsigned char func_40(unsigned short p_41, short p_42, int p_43)
{
    int l_60 = (-1L);
    int *l_97 = &g_98;
    int **l_96 = &l_97;
    int **l_131 = &g_122;
    (*l_131) = func_45((~((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(func_54(l_60, func_61(((safe_lshift_func_int16_t_s_u(((((g_26 | ((0x47F9L != func_65((safe_rshift_func_int16_t_s_u(g_26, 6)))) & p_43)) <= g_26) == ((safe_lshift_func_uint8_t_u_s((l_96 == (void*)0), g_98)) , g_26)) <= 0xF528L), p_42)) <= p_43)), p_42, &g_98, (**l_96)), p_42)), g_26)) , (**l_96))), p_43, g_26, l_60);

    ;
    if ((p_41 , 0x1B8E030CL))
    {
        return g_98;
    }
    else
    {
        int *l_132 = &g_98;
        g_122 = l_132;
    }
    (**l_131) = ((g_92 , p_41) && func_65(((safe_add_func_int16_t_s_s((g_98 != ((**l_131) && (((~func_65((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(1L, (p_42 <= g_26))), p_42)))) , p_43) , 4294967295UL))), p_43)) >= 8UL)));
    (**l_131) = (&g_98 == (func_65(((**l_131) , (*g_122))) , func_45((safe_sub_func_uint8_t_u_u(((**l_131) || (**l_131)), (0x1EL > ((p_43 , g_92) >= g_26)))), (**l_96), p_43, p_41)));
    return (**l_96);
}







static int * const func_45(unsigned p_46, unsigned char p_47, const unsigned short p_48, unsigned p_49)
{
    const unsigned l_128 = 0x78237234L;
    int *l_129 = &g_98;
    int **l_130 = (void*)0;
    (*g_122) = 3L;
    l_129 = ((p_47 != func_65((0x30L && (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((l_128 , p_46))), p_48))))) , l_129);
    return &g_98;


}







static short func_54(unsigned p_55, int * const p_56, unsigned char p_57, int * p_58, char p_59)
{
    unsigned short l_108 = 0xFFF6L;
    for (g_92 = 0; (g_92 > (-21)); g_92 = safe_sub_func_uint32_t_u_u(g_92, 5))
    {
        unsigned l_109 = 4294967292UL;
        if (g_26)
        {
            if (g_26)
                break;
            (*p_58) = g_92;
        }
        else
        {
            unsigned short l_114 = 0x19A8L;
            if (((((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_108, (l_109 ^ (safe_mod_func_int8_t_s_s(p_57, (((void*)0 == p_56) | p_55)))))), (safe_sub_func_int16_t_s_s((l_114 < ((0x68L || ((-4L) != 0L)) & l_108)), p_57)))) , &p_56) == &p_56) <= p_55))
            {
                int *l_116 = (void*)0;
                int **l_115 = &l_116;
                (*l_115) = (void*)0;
                (*p_56) = (&g_98 != (void*)0);
                for (p_57 = (-4); (p_57 <= 50); p_57 = safe_add_func_uint32_t_u_u(p_57, 3))
                {
                    int **l_119 = (void*)0;
                    int **l_120 = &l_116;
                    (*l_120) = func_61(p_57);

                    ;
                }

                ;
            }
            else
            {
                g_121 = &p_56;

                ;
            }
            (*p_56) = ((safe_sub_func_int32_t_s_s((g_92 | 65535UL), ((void*)0 != p_58))) & (*p_56));
        }
    }


    return p_57;


}







static int * const func_61(const unsigned p_62)
{
    int l_99 = 0x289F16C4L;
    int *l_100 = &g_77;
    int **l_101 = &l_100;
    l_99 = 1L;
    (*l_101) = l_100;
    return &g_98;


}







static unsigned short func_65(int p_66)
{
    volatile int **l_70 = &g_69;
    int *l_89 = &g_77;
    int l_93 = 0L;
    (*l_70) = g_69;
    (*l_70) = (*l_70);
    if ((safe_lshift_func_uint8_t_u_s(0xE5L, 0)))
    {
        for (p_66 = 0; (p_66 <= 6); p_66 = safe_add_func_uint8_t_u_u(p_66, 1))
        {
            int *l_76 = &g_77;
            int **l_75 = &l_76;
            (*l_75) = &p_66;

            ;
        }
    }
    else
    {
        int *l_84 = &g_77;
        int **l_83 = &l_84;
        for (p_66 = (-17); (p_66 < (-13)); p_66 = safe_add_func_uint32_t_u_u(p_66, 5))
        {
            unsigned l_87 = 0UL;
            int * const *l_88 = &l_84;
            (**l_88) = (((safe_mod_func_uint16_t_u_u((g_26 && (((safe_unary_minus_func_int32_t_s((((void*)0 != l_83) , (((safe_mod_func_uint8_t_u_u(((g_26 >= g_26) || 255UL), (g_26 , l_87))) , l_88) != l_88)))) > g_77) == 0xE3A1L)), 0xD7AFL)) & g_77) ^ g_77);
        }
        l_89 = (*l_83);
        g_92 &= (((((((g_26 != (0x87L < 0x93L)) && ((safe_lshift_func_int16_t_s_s((g_77 == g_77), ((void*)0 == &g_77))) != (*l_89))) > (*l_89)) , p_66) && (*l_89)) , (void*)0) != &g_77);
        l_93 &= (*l_89);
    }
    return p_66;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_636, "g_636", print_hash_value);
    transparent_crc(g_732, "g_732", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_1109, "g_1109", print_hash_value);
    transparent_crc(g_1251, "g_1251", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
