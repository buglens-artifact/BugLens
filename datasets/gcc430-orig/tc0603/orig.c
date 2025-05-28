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
   unsigned f0 : 15;
   unsigned f1 : 10;
   unsigned f2 : 5;
   unsigned f3 : 28;
   unsigned f4 : 29;
   signed f5 : 2;
};


static char g_22 = 0xDBL;
static int g_92 = (-1L);
static struct S0 g_100 = {139,6,0,3407,3469,-1};
static int *g_115 = &g_92;
static int **g_114 = &g_115;
static unsigned short g_149 = 65528UL;
static int g_278 = (-1L);
static char g_286 = 4L;
static char g_291 = (-2L);
static unsigned g_294 = 3UL;
static short g_420 = 0x5E80L;
static unsigned g_439 = 4294967289UL;
static int g_483 = 0x53A96FB9L;
static unsigned g_511 = 0x96B34B1CL;
static const int g_635 = 0x0B192E7AL;
static struct S0 *g_641 = &g_100;
static struct S0 ** const g_640 = &g_641;
static int g_707 = 0x1C26E085L;
static unsigned g_788 = 4294967295UL;
static char g_837 = 8L;
static unsigned short g_841 = 0x9E41L;
static unsigned short g_869 = 0UL;
static unsigned g_922 = 0x92513A9EL;
static short g_925 = 0x45DFL;
static unsigned char g_983 = 0x5AL;
static int g_1057 = 9L;
static unsigned char g_1065 = 1UL;
static const struct S0 *g_1075 = &g_100;
static unsigned char g_1118 = 255UL;
static unsigned short g_1235 = 65532UL;
static short g_1341 = 0x42E2L;
static unsigned short g_1354 = 1UL;
static unsigned g_1406 = 0UL;
static unsigned short g_1562 = 1UL;



static struct S0 func_1(void);
static struct S0 func_2(unsigned short p_3);
static unsigned short func_4(unsigned char p_5);
static int func_6(unsigned p_7, unsigned char p_8, short p_9, short p_10, int p_11);
static unsigned char func_13(unsigned short p_14);
static int func_15(short p_16, int p_17, char p_18, int p_19);
static int func_25(char p_26, const unsigned short p_27, int p_28, unsigned char p_29, const unsigned p_30);
static unsigned char func_31(short p_32, unsigned short p_33, int p_34, int p_35);
static unsigned short func_36(unsigned p_37);
static struct S0 func_38(unsigned char p_39, struct S0 p_40, short p_41);
static struct S0 func_1(void)
{
    int l_12 = 0x8900FDB6L;
    unsigned char l_1239 = 247UL;
    unsigned l_1585 = 0UL;
    unsigned short l_1586 = 65530UL;
    int *l_1591 = &g_1057;
    struct S0 l_1592 = {82,8,1,11138,21132,-0};
    (**g_640) = func_2(func_4(((func_6(l_12, func_13((((func_15(((((((((((((safe_mul_func_uint8_t_u_u(g_22, (g_22 & 0x5498L))) <= (safe_rshift_func_uint8_t_u_u((func_25((((func_31(g_22, func_36(g_22), (g_291 <= (((((l_12 , l_12) , l_12) , (*g_115)) != 1L) < g_420)), l_12) | g_420) > 0x43L) < l_12), g_483, l_12, l_12, l_12) != 0xA4379F48L), 3))) != g_149) && l_12) == 0x39D25F00L) , g_869) && l_12) ^ 0x78L) ^ l_12) && l_12) < g_439) != l_12), l_1239, l_1239, l_1239) , l_1239) < l_1239) < g_294)), g_22, g_869, g_1341) , l_1585) < l_1586)));


    l_1591 = l_1591;
    return l_1592;
}







static struct S0 func_2(unsigned short p_3)
{
    unsigned l_1588 = 0x2E3FC3E1L;
    int *l_1589 = (void*)0;
    int *l_1590 = &g_92;
    (*l_1590) |= (l_1588 != l_1588);
    return (*g_1075);
}







static unsigned short func_4(unsigned char p_5)
{
    int *l_1587 = &g_92;
    (*l_1587) &= 0L;
    return p_5;
}







static int func_6(unsigned p_7, unsigned char p_8, short p_9, short p_10, int p_11)
{
    int l_1363 = (-3L);
    int ***l_1391 = &g_114;
    unsigned char l_1464 = 1UL;
    const struct S0 l_1468 = {43,21,2,9429,21968,-0};
    int l_1480 = 0x6B070178L;
    struct S0 * const *l_1481 = &g_641;
    int l_1580 = 0x425BA9FAL;
    short l_1581 = 0x35E5L;
    int *l_1583 = &l_1480;
    short l_1584 = 0xC52BL;
    if ((p_8 != (safe_add_func_int16_t_s_s(l_1363, (-1L)))))
    {
        short l_1369 = (-1L);
        int *l_1408 = (void*)0;
        int l_1450 = (-1L);
        struct S0 l_1463 = {102,28,4,13128,18004,-1};
        int *l_1465 = &l_1363;
        for (g_291 = 0; (g_291 >= 19); g_291 = safe_add_func_int16_t_s_s(g_291, 3))
        {
            int *l_1366 = &g_92;
            struct S0 **l_1389 = &g_641;
            int ***l_1390 = &g_114;
            int l_1407 = (-1L);
            unsigned l_1410 = 0x9087CB41L;
            unsigned char l_1442 = 0xEBL;
            (*l_1366) = 0x2F157B9BL;
        }
        l_1450 = g_922;
        (*l_1465) ^= (((((*g_1075) , p_9) && (!p_9)) , (4UL > (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((p_10 >= ((safe_mul_func_int16_t_s_s(((&g_641 != (void*)0) || (((p_7 & ((safe_lshift_func_int16_t_s_u(((l_1463 , 0L) > 0x33909A30L), 8)) || p_11)) != l_1464) , p_10)), g_1354)) , 0x1D2F4715L)) != p_11), p_11)), (-5L))) , 0xCB5CE177L), g_635)))) || g_100.f1);
        (**g_640) = l_1468;
    }
    else
    {
        int l_1475 = 0xEDD72795L;
        struct S0 *l_1486 = (void*)0;
        int l_1525 = 0xBCB4F22EL;
        int l_1537 = 0x0D301EF4L;
        int l_1549 = (-7L);
        int l_1557 = 1L;
        if ((g_149 , p_7))
        {
            char l_1487 = 0x1EL;
            int l_1509 = 0L;
            if ((((safe_add_func_int8_t_s_s(p_8, p_10)) , l_1475) >= g_278))
            {
                return g_22;
            }
            else
            {
                const struct S0 * const l_1502 = &g_100;
                int l_1565 = 0xB12415AAL;
                unsigned l_1566 = 0UL;
                struct S0 **l_1570 = &g_641;
                struct S0 ***l_1569 = &l_1570;
                for (g_294 = 0; (g_294 != 9); g_294++)
                {
                    for (g_1341 = 27; (g_1341 <= 6); g_1341 = safe_sub_func_int16_t_s_s(g_1341, 5))
                    {
                        if (p_10)
                            break;
                    }
                    return g_635;
                }
                for (p_9 = 15; (p_9 <= (-19)); p_9 = safe_sub_func_int32_t_s_s(p_9, 5))
                {
                    unsigned char l_1496 = 3UL;
                    int l_1504 = 6L;
                    int l_1547 = (-1L);
                    int l_1554 = (-1L);
                    for (g_278 = 0; (g_278 < 19); g_278 = safe_add_func_int8_t_s_s(g_278, 4))
                    {
                        int *l_1501 = &g_92;
                        const struct S0 **l_1503 = &g_1075;
                        int *l_1505 = &l_1504;
                        int *l_1506 = &g_1057;
                        int *l_1507 = &l_1504;
                        int *l_1508 = &g_1057;
                        int *l_1510 = &g_1057;
                        int *l_1511 = &g_1057;
                        int *l_1512 = &g_92;
                        int *l_1513 = (void*)0;
                        int *l_1514 = (void*)0;
                        int *l_1515 = &l_1504;
                        int *l_1516 = (void*)0;
                        int *l_1517 = &l_1480;
                        int *l_1518 = (void*)0;
                        int *l_1519 = &g_1057;
                        int *l_1520 = (void*)0;
                        int *l_1521 = &g_92;
                        int *l_1522 = &g_92;
                        int *l_1523 = &l_1363;
                        int *l_1524 = &l_1509;
                        int *l_1526 = (void*)0;
                        int *l_1527 = &l_1525;
                        int *l_1528 = &l_1509;
                        int *l_1529 = (void*)0;
                        int *l_1530 = &l_1504;
                        int *l_1531 = &l_1525;
                        int *l_1532 = &l_1480;
                        int *l_1533 = &l_1363;
                        int *l_1534 = &l_1509;
                        int *l_1535 = (void*)0;
                        int *l_1536 = &l_1480;
                        int *l_1538 = &g_1057;
                        int *l_1539 = &g_1057;
                        int *l_1540 = (void*)0;
                        int *l_1541 = &l_1525;
                        int *l_1542 = &l_1480;
                        int l_1543 = 0L;
                        int *l_1544 = &g_92;
                        int *l_1545 = (void*)0;
                        int *l_1546 = (void*)0;
                        int *l_1548 = (void*)0;
                        int *l_1550 = &l_1363;
                        int *l_1551 = (void*)0;
                        int *l_1552 = (void*)0;
                        int *l_1553 = &l_1547;
                        int *l_1555 = &l_1554;
                        int *l_1556 = &l_1504;
                        int *l_1558 = &l_1363;
                        int *l_1559 = &l_1525;
                        int *l_1560 = &l_1504;
                        int *l_1561 = &l_1549;
                        (*l_1501) = ((((l_1496 < (0xFA2DL | ((void*)0 != l_1481))) , p_8) | (safe_mul_func_int8_t_s_s((0x141AL ^ (-1L)), (g_707 > func_13(func_13(func_13((((safe_mul_func_int16_t_s_s((p_8 & 0UL), 0x31CBL)) , 1L) > (-6L))))))))) && 4294967287UL);
                        (*l_1503) = l_1502;
                        g_1562++;
                        l_1566++;
                    }
                    return p_11;
                }
                g_100.f5 = (0UL && (l_1569 != (void*)0));
            }
            l_1525 ^= p_9;
        }
        else
        {
            int *l_1573 = &l_1549;
lbl_1582:
            (*l_1573) = (((safe_rshift_func_int8_t_s_u(((((l_1573 == (void*)0) > ((-1L) || ((((((*l_1573) <= 7UL) , l_1580) || p_10) || p_11) | p_7))) , 3UL) > l_1581), 2)) >= 2UL) && (*l_1573));
            (*g_114) = &l_1557;

            ;
            if (l_1468.f0)
                goto lbl_1582;
        }


    }
    (*l_1583) |= (g_1562 <= g_100.f0);
    (*l_1583) = l_1584;
    return p_11;
}







static unsigned char func_13(unsigned short p_14)
{
    int l_1241 = 0x2D395C6BL;
    int *l_1242 = (void*)0;
    int *l_1243 = &g_92;
    int *l_1244 = &g_1057;
    int *l_1245 = (void*)0;
    int *l_1246 = &g_92;
    int l_1247 = 0x5F49D884L;
    int l_1248 = 0L;
    int *l_1249 = &l_1248;
    int *l_1250 = &g_92;
    int *l_1251 = &l_1247;
    int *l_1252 = (void*)0;
    int *l_1253 = &l_1247;
    int *l_1254 = &g_92;
    int l_1255 = 1L;
    int *l_1256 = &l_1247;
    int *l_1257 = &g_92;
    int *l_1258 = &g_92;
    int *l_1259 = &l_1247;
    int *l_1260 = &l_1247;
    int *l_1261 = &g_92;
    int *l_1262 = (void*)0;
    int *l_1263 = &l_1248;
    int *l_1264 = &g_92;
    int *l_1265 = &l_1255;
    int *l_1266 = &g_92;
    int *l_1267 = &l_1255;
    int l_1268 = 0x8747109AL;
    int l_1269 = 0L;
    int *l_1270 = &g_92;
    int *l_1271 = &l_1248;
    int *l_1272 = &g_92;
    int *l_1273 = &g_1057;
    int l_1274 = 0x70E0B90AL;
    int *l_1275 = (void*)0;
    int *l_1276 = &l_1274;
    int *l_1277 = (void*)0;
    int l_1278 = 0x95F7B51EL;
    int *l_1279 = &l_1248;
    int *l_1280 = &l_1255;
    int l_1281 = 1L;
    int *l_1282 = &l_1281;
    int *l_1283 = &l_1268;
    int *l_1284 = &g_1057;
    int *l_1285 = &g_92;
    int *l_1286 = (void*)0;
    int *l_1287 = (void*)0;
    int *l_1288 = (void*)0;
    int *l_1289 = &l_1278;
    int l_1290 = 2L;
    int *l_1291 = &l_1255;
    int *l_1292 = &l_1248;
    int *l_1293 = (void*)0;
    int *l_1294 = &g_1057;
    int *l_1295 = &l_1274;
    int *l_1296 = &l_1268;
    int *l_1297 = &l_1255;
    int *l_1298 = &l_1274;
    int *l_1299 = &g_92;
    int *l_1300 = &l_1278;
    int *l_1301 = &l_1274;
    int *l_1302 = (void*)0;
    int *l_1303 = &g_92;
    int *l_1304 = &l_1247;
    int *l_1305 = &l_1248;
    int *l_1306 = &l_1255;
    int *l_1307 = (void*)0;
    int *l_1308 = &l_1255;
    int *l_1309 = &g_92;
    int *l_1310 = &l_1268;
    int *l_1311 = (void*)0;
    int *l_1312 = (void*)0;
    int *l_1313 = &l_1247;
    int *l_1314 = &l_1290;
    int l_1315 = 0x163E08EEL;
    int l_1316 = 0L;
    int *l_1317 = &g_92;
    int *l_1318 = &l_1315;
    int *l_1319 = &l_1278;
    int *l_1320 = &l_1290;
    int *l_1321 = &l_1268;
    int l_1322 = 0x1F655167L;
    int *l_1323 = &l_1269;
    int *l_1324 = &l_1316;
    int l_1325 = 0x6D52B07BL;
    int *l_1326 = &g_92;
    int l_1327 = 0x8973349AL;
    int *l_1328 = &l_1247;
    int *l_1329 = &l_1269;
    int l_1330 = 0x10D3517CL;
    int *l_1331 = &l_1255;
    int *l_1332 = (void*)0;
    int *l_1333 = (void*)0;
    int *l_1334 = &g_92;
    int l_1335 = 0x0A8AC195L;
    int l_1336 = 0xDFFF1ACFL;
    int *l_1337 = &l_1281;
    int l_1338 = 0x5C5BB1E1L;
    int *l_1339 = &l_1268;
    int l_1340 = 0xA58BD045L;
    int *l_1342 = &l_1278;
    int *l_1343 = &l_1268;
    int *l_1344 = &l_1247;
    int l_1345 = (-1L);
    int *l_1346 = (void*)0;
    int *l_1347 = &l_1274;
    int *l_1348 = &l_1274;
    int *l_1349 = &g_92;
    int l_1350 = (-7L);
    int *l_1351 = &l_1281;
    int *l_1352 = &l_1290;
    int *l_1353 = &l_1274;
    g_1354++;
    for (g_1065 = 0; (g_1065 < 60); g_1065 = safe_add_func_uint32_t_u_u(g_1065, 3))
    {
        const int *l_1360 = (void*)0;
        const int **l_1359 = &l_1360;
        (*l_1359) = &g_635;

        ;
    }
    return g_100.f0;
}







static int func_15(short p_16, int p_17, char p_18, int p_19)
{
    int l_1240 = 0x85337F44L;
    return l_1240;
}







static int func_25(char p_26, const unsigned short p_27, int p_28, unsigned char p_29, const unsigned p_30)
{
    struct S0 l_1121 = {34,21,0,10947,19604,1};
    int *l_1126 = &g_1057;
    int *l_1127 = (void*)0;
    unsigned l_1130 = 0xB5C5F711L;
    unsigned l_1135 = 18446744073709551612UL;
    unsigned char l_1143 = 0x50L;
    int l_1208 = 0xBA7A458FL;
    int l_1218 = (-5L);
    (*g_115) = p_29;
    (**g_640) = l_1121;
    l_1121.f5 ^= (((safe_rshift_func_int16_t_s_s((l_1121.f4 != func_31((func_36(g_483) , ((((((safe_mul_func_uint16_t_u_u(g_100.f2, l_1121.f3)) ^ g_22) > p_27) && p_26) , (func_36(((l_1126 != l_1126) > g_925)) , 1UL)) == 0L)), (*l_1126), p_27, (*l_1126))), 15)) <= 0x2161L) == g_278);
    if ((safe_mod_func_int32_t_s_s(l_1130, ((**g_114) || ((g_149 , ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((!((l_1135 || func_31((*l_1126), (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s((((0xA3105251L | (**g_114)) >= g_841) < (safe_rshift_func_uint8_t_u_u(((((void*)0 != &l_1121) != g_92) & g_100.f5), 0))), p_29)))), g_983)), l_1143, g_149)) >= 0xC448L)), p_28)), p_30)) > (-4L))) <= p_27)))))
    {
        const struct S0 ***l_1144 = (void*)0;
        const struct S0 **l_1146 = &g_1075;
        const struct S0 ***l_1145 = &l_1146;
        (*l_1145) = &g_1075;
        (*g_114) = (void*)0;

        ;
    }
    else
    {
        unsigned short l_1180 = 0x29C6L;
        int *l_1183 = &g_1057;
        int *l_1184 = &g_1057;
        int *l_1185 = (void*)0;
        int *l_1186 = &g_1057;
        int *l_1187 = &g_1057;
        int *l_1188 = &g_1057;
        int *l_1189 = &g_92;
        int *l_1190 = &g_1057;
        int *l_1191 = (void*)0;
        int *l_1192 = &g_92;
        int *l_1193 = &g_92;
        int *l_1194 = (void*)0;
        int *l_1195 = &g_92;
        int *l_1196 = &g_1057;
        int *l_1197 = &g_92;
        int l_1198 = 0xACD1F6ABL;
        int *l_1199 = &g_92;
        int l_1200 = (-1L);
        int *l_1201 = (void*)0;
        int *l_1202 = &l_1200;
        int *l_1203 = &l_1200;
        int *l_1204 = &g_92;
        int *l_1205 = (void*)0;
        int *l_1206 = (void*)0;
        int *l_1207 = (void*)0;
        int *l_1209 = &g_92;
        int *l_1210 = (void*)0;
        int l_1211 = 0L;
        int *l_1212 = &l_1208;
        int *l_1213 = &l_1208;
        int *l_1214 = &g_1057;
        int *l_1215 = &l_1211;
        int *l_1216 = &g_92;
        int *l_1217 = (void*)0;
        int *l_1219 = &l_1211;
        int *l_1220 = &l_1211;
        int *l_1221 = &l_1211;
        int *l_1222 = (void*)0;
        int *l_1223 = &g_92;
        int *l_1224 = &g_1057;
        int *l_1225 = &g_92;
        int *l_1226 = &g_92;
        int *l_1227 = &l_1218;
        int l_1228 = 0x278AAF86L;
        int *l_1229 = &l_1200;
        int *l_1230 = &l_1208;
        int *l_1231 = &l_1208;
        int l_1232 = 0L;
        int *l_1233 = &g_1057;
        int *l_1234 = &g_1057;
        for (g_788 = (-14); (g_788 <= 42); g_788 = safe_add_func_int32_t_s_s(g_788, 2))
        {
            int *l_1149 = (void*)0;
            int *l_1150 = &g_1057;
            int *l_1151 = &g_92;
            int *l_1152 = &g_1057;
            int *l_1153 = &g_1057;
            int *l_1154 = &g_1057;
            int *l_1155 = &g_92;
            int *l_1156 = &g_92;
            int *l_1157 = &g_1057;
            int *l_1158 = (void*)0;
            int l_1159 = 1L;
            int *l_1160 = &l_1159;
            int *l_1161 = &l_1159;
            int *l_1162 = (void*)0;
            int *l_1163 = &g_1057;
            int *l_1164 = (void*)0;
            int *l_1165 = &g_92;
            int *l_1166 = &l_1159;
            int *l_1167 = &g_92;
            int *l_1168 = &g_92;
            int *l_1169 = &l_1159;
            int *l_1170 = &g_1057;
            int *l_1171 = (void*)0;
            int *l_1172 = &l_1159;
            short l_1173 = (-2L);
            int *l_1174 = (void*)0;
            int *l_1175 = (void*)0;
            int *l_1176 = &l_1159;
            int *l_1177 = &g_1057;
            int *l_1178 = &g_1057;
            int *l_1179 = &l_1159;
            l_1180++;
            (*g_114) = &p_28;

            ;
        }

        ;
        if (g_149)
            goto lbl_1238;
lbl_1238:
        g_1235++;
        (*l_1226) |= (&p_28 != (((void*)0 != &l_1127) , (*g_114)));
    }

    ;
    return (*l_1126);


}







static unsigned char func_31(short p_32, unsigned short p_33, int p_34, int p_35)
{
    struct S0 l_1076 = {170,11,1,12114,9783,-0};
    int *l_1079 = &g_1057;
    int *l_1080 = &g_1057;
    int *l_1081 = &g_1057;
    int *l_1082 = &g_92;
    int *l_1083 = &g_92;
    int *l_1084 = &g_92;
    int *l_1085 = &g_92;
    int *l_1086 = &g_92;
    int *l_1087 = &g_92;
    int *l_1088 = &g_1057;
    int *l_1089 = &g_92;
    int *l_1090 = &g_92;
    int *l_1091 = &g_92;
    int *l_1092 = (void*)0;
    int *l_1093 = &g_92;
    int *l_1094 = (void*)0;
    int *l_1095 = &g_92;
    int *l_1096 = &g_92;
    int *l_1097 = &g_1057;
    int *l_1098 = &g_1057;
    int *l_1099 = (void*)0;
    int *l_1100 = &g_92;
    int *l_1101 = &g_92;
    int *l_1102 = &g_92;
    int *l_1103 = (void*)0;
    int *l_1104 = &g_92;
    int *l_1105 = &g_92;
    int *l_1106 = &g_92;
    int *l_1107 = &g_92;
    int *l_1108 = &g_1057;
    int *l_1109 = &g_1057;
    int *l_1110 = (void*)0;
    int *l_1111 = &g_92;
    int *l_1112 = &g_92;
    int *l_1113 = &g_92;
    int *l_1114 = &g_1057;
    int *l_1115 = &g_1057;
    int *l_1116 = &g_1057;
    int *l_1117 = &g_1057;
    (*g_641) = l_1076;
    (*g_115) |= (safe_rshift_func_int8_t_s_u(g_100.f4, 0));
    g_1118--;
    return g_420;
}







static unsigned short func_36(unsigned p_37)
{
    struct S0 l_49 = {110,6,4,9601,18919,-0};
    int l_907 = 1L;
    const struct S0 *l_950 = &l_49;
    const struct S0 * const *l_949 = &l_950;
    int ** const l_960 = &g_115;
    unsigned char l_1019 = 0xE6L;
    unsigned short l_1074 = 65530UL;
    return (**l_960);
}







static struct S0 func_38(unsigned char p_39, struct S0 p_40, short p_41)
{
    unsigned l_54 = 0xD8D4885CL;
    struct S0 l_55 = {123,3,2,13363,22540,-1};
    char l_83 = 0x42L;
    unsigned short l_106 = 65535UL;
    int *l_117 = &g_92;
    unsigned l_162 = 5UL;
    unsigned l_177 = 4294967295UL;
    int l_222 = 0xB32EEC2DL;
    int l_269 = (-4L);
    unsigned l_313 = 4294967295UL;
    char l_334 = 5L;
    short l_398 = 0x9921L;
    int **l_442 = &l_117;
    struct S0 l_634 = {116,3,0,1878,14640,0};
    unsigned l_637 = 1UL;
    struct S0 l_656 = {78,23,2,10334,22721,-0};
    unsigned char l_657 = 9UL;
    int *l_680 = &l_269;
    short l_844 = 0x85CEL;
    unsigned l_853 = 1UL;
    if ((safe_lshift_func_uint16_t_u_s((((g_22 ^ g_22) >= 0x5481L) , (g_22 != (safe_sub_func_uint16_t_u_u(l_54, (l_55 , (g_22 > g_22)))))), ((safe_sub_func_uint32_t_u_u(p_41, (-10L))) >= 0x42L))))
    {
        int l_73 = (-3L);
        int *l_113 = (void*)0;
        int **l_112 = &l_113;
        struct S0 *l_175 = &g_100;
        unsigned char l_189 = 1UL;
        int l_244 = 0x97E8E832L;
        int l_270 = 0x36EEB13FL;
        unsigned l_305 = 0UL;
        if (g_22)
        {
            int l_64 = 0x4A474477L;
            for (p_41 = 0; (p_41 > (-30)); p_41--)
            {
                return p_40;
            }
            if (l_55.f2)
                goto lbl_70;
lbl_70:
            l_55.f5 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((l_64 == p_41) && (safe_rshift_func_int8_t_s_u(l_54, 6))), (g_22 >= (safe_mod_func_uint32_t_u_u(g_22, (safe_unary_minus_func_int32_t_s(g_22))))))), 1));
            return p_40;
        }
        else
        {
            const int l_89 = 0x53C53055L;
            int l_116 = 0x40942222L;
            int l_145 = 0L;
            int l_148 = (-7L);
            short l_233 = 9L;
            int *l_310 = &l_244;
            for (p_39 = 10; (p_39 != 21); ++p_39)
            {
                p_40.f5 |= p_40.f0;
                if (l_73)
                    break;
                return p_40;
            }
        }
        for (g_294 = 0; (g_294 >= 59); g_294 = safe_add_func_uint32_t_u_u(g_294, 4))
        {
            (*l_175) = (((*l_117) || l_313) , g_100);
        }
        return p_40;
    }
    else
    {
        int **l_322 = (void*)0;
        unsigned char l_356 = 2UL;
        int l_364 = 1L;
        int *l_377 = &l_269;
        struct S0 * const l_389 = &l_55;
        int l_428 = (-5L);
        unsigned char l_532 = 0xA8L;
        const int *l_633 = &l_269;
lbl_367:
        for (g_294 = 0; (g_294 > 57); g_294 = safe_add_func_int32_t_s_s(g_294, 9))
        {
            return g_100;


        }
        if ((p_40 , ((safe_mod_func_int16_t_s_s(((void*)0 == &g_100), g_100.f5)) || p_40.f4)))
        {
            int **l_323 = &g_115;
            int l_350 = 1L;
            short l_374 = 0x9378L;
            int l_435 = 0x4F7EEDC5L;
            int l_438 = 3L;
            struct S0 *l_445 = &g_100;
            if ((!(0x43L != (l_55 , (((safe_lshift_func_uint8_t_u_s(((((p_40.f2 , l_322) != l_323) > ((((~(safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(g_100.f1)), 8)), (((void*)0 != (*g_114)) , (g_100.f3 & 4294967290UL))))) && (**l_323)) <= 7UL) , g_149)) && p_40.f1), p_41)) , 0x8806L) >= p_40.f3)))))
            {
                int *l_329 = &l_222;
                (*g_114) = l_329;

                ;
                (*g_114) = &l_222;
            }
            else
            {
                short l_341 = 0xAA24L;
                struct S0 l_376 = {5,22,4,12713,6535,0};
                if ((g_100.f0 <= ((((safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((p_39 , (g_100.f2 > l_334)) < (**l_323)) , (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((+(l_341 , ((+g_92) < g_22))), (&l_269 == (*g_114)))) , 0xC824L), (**l_323))), l_341))), (**l_323))), g_291)) == p_40.f2) != (-1L)) < 0x7692239EL)))
                {
                    char l_363 = 0xAAL;
                    l_350 ^= (0x00L < ((p_40.f5 != ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint32_t_u_u(g_100.f1, ((((safe_mul_func_int8_t_s_s(((*l_117) & (g_100.f4 >= 0x701EL)), (p_40 , (&g_100 != ((safe_mul_func_uint8_t_u_u(247UL, 0x99L)) , (void*)0))))) , 0x6C6DA601L) , (void*)0) != (void*)0))), 0)) , p_39)) < g_149));
                    (**g_114) = (+((g_149 > (((((safe_lshift_func_int8_t_s_u(g_92, 0)) & (safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s(l_356, (safe_mod_func_uint8_t_u_u(((g_100 , (safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(((*l_117) > (l_363 ^ p_40.f3)), ((1L < 4294967295UL) & g_278))) ^ l_364) , p_40.f5), p_40.f2))) , g_278), 6L))))))) <= p_40.f3) == (*l_117)) , g_100.f5)) <= l_341));
                    for (g_286 = 0; (g_286 == 2); g_286 = safe_add_func_int16_t_s_s(g_286, 1))
                    {
                        if (g_291)
                            goto lbl_367;
                    }
                }
                else
                {
                    int l_375 = 0x6D31335AL;
                    for (l_222 = 13; (l_222 > 8); l_222 = safe_sub_func_uint8_t_u_u(l_222, 6))
                    {
                        (**g_114) = (safe_sub_func_int32_t_s_s((((p_40.f3 <= ((safe_add_func_uint8_t_u_u(((void*)0 != (*g_114)), (g_100.f5 == ((*g_114) != (*g_114))))) != (l_374 > (l_375 == (**g_114))))) && g_100.f1) != g_100.f0), g_100.f1));
                        (**g_114) = 1L;
                        return l_376;


                    }
                    (*l_323) = l_377;

                    ;
                }

                ;
                (*l_377) = (-8L);
            }

            ;
            if ((1UL | (((*l_117) && (g_100 , (*l_117))) <= ((safe_lshift_func_int8_t_s_s((-3L), 5)) , (safe_add_func_int32_t_s_s((g_100.f0 != g_22), p_39))))))
            {
                return g_100;


            }
            else
            {
                char l_386 = 0xEAL;
                int *l_399 = &l_350;
                struct S0 l_456 = {81,15,2,4904,14035,-1};
                unsigned l_472 = 0x60CB6A63L;
                if ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((l_386 != g_92), (!(g_100.f4 , (safe_rshift_func_int16_t_s_s((!(1L && (l_389 != (((safe_sub_func_int16_t_s_s((0x7CL || (((g_100.f3 || ((6L & g_286) , p_40.f5)) > p_40.f3) < p_40.f1)), (*l_117))) , (*l_117)) , &l_55)))), (*l_117))))))), g_100.f0)))
                {
                    unsigned short l_395 = 1UL;
                    if (l_386)
                    {
                        short l_392 = 0L;
                        (*l_377) = ((l_392 <= ((safe_lshift_func_uint8_t_u_s((((!((**l_323) | p_41)) != l_395) <= ((65534UL | g_100.f1) < (1UL && (((*l_377) & (1UL ^ (**g_114))) >= 0xC2C2L)))), g_22)) & 0x96L)) && g_278);
                    }
                    else
                    {
                        (*l_323) = (*g_114);
                        return l_55;


                    }
                }
                else
                {
                    for (g_294 = 0; (g_294 == 55); ++g_294)
                    {
                        (*g_114) = (*l_323);
                        (*l_377) ^= l_398;
                    }
                    (*g_114) = l_399;

                    ;
                }

                ;
                if ((**l_323))
                {
                    return g_100;


                }
                else
                {
                    (*g_114) = &l_222;

                    ;
                }

                ;
                if ((((*l_389) , p_40.f3) & p_40.f2))
                {
                    struct S0 l_400 = {156,11,1,12576,18667,-0};
                    (*l_389) = l_400;
                }
                else
                {
                    for (g_92 = 0; (g_92 >= 1); g_92++)
                    {
                        int *l_403 = &l_269;
                        int *l_404 = &l_269;
                        int *l_405 = &l_350;
                        int *l_406 = &l_222;
                        int *l_407 = &l_269;
                        int *l_408 = &l_269;
                        int l_409 = 0x1E8FC48CL;
                        int *l_410 = &l_222;
                        int *l_411 = &l_222;
                        int *l_412 = &l_350;
                        int *l_413 = &l_269;
                        int *l_414 = (void*)0;
                        int *l_415 = &l_222;
                        int *l_416 = &l_350;
                        int *l_417 = &l_350;
                        int *l_418 = &l_409;
                        int *l_419 = &l_269;
                        int *l_421 = &l_222;
                        int *l_422 = &l_269;
                        int *l_423 = &l_350;
                        int *l_424 = &l_350;
                        int *l_425 = &l_222;
                        int *l_426 = &l_222;
                        int *l_427 = &l_222;
                        int *l_429 = &l_428;
                        int *l_430 = &l_350;
                        int *l_431 = &l_350;
                        int *l_432 = &l_428;
                        int *l_433 = &l_350;
                        int *l_434 = &l_222;
                        int *l_436 = (void*)0;
                        int *l_437 = &l_435;
                        --g_439;
                        if ((**g_114))
                            break;
                        l_442 = &g_115;

                        ;
                    }
                }
                if (((void*)0 == &g_100))
                {
                    short l_448 = 0xEDB3L;
                    int **l_466 = &l_117;
                    if ((safe_lshift_func_uint16_t_u_s((((g_100 , p_40) , (&p_40 != l_445)) ^ ((g_100.f5 , ((*l_377) , ((safe_mod_func_uint16_t_u_u((&g_100 == &p_40), (*l_399))) <= l_448))) == g_100.f4)), 12)))
                    {
                        short l_453 = 0L;
                        int l_455 = 2L;
                        l_455 ^= ((**l_323) , ((safe_mod_func_int32_t_s_s((0x800F816AL > (!(safe_mul_func_int16_t_s_s(l_453, (((**l_442) < (safe_unary_minus_func_int32_t_s(l_448))) || 0UL))))), (**l_323))) == g_291));
                        return l_456;


                    }
                    else
                    {
                        int *l_457 = &l_428;
                        l_399 = l_399;
                        (*l_399) &= (*g_115);
                        (*g_114) = l_457;

                        ;
                        (*g_115) = ((&g_115 != (void*)0) >= (p_40.f1 ^ (*l_457)));
                    }

                    ;
                    l_456 = ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(((g_22 <= (safe_lshift_func_int16_t_s_u((0x87721780L <= g_100.f5), p_40.f0))) && (safe_add_func_uint32_t_u_u((0UL || (&l_389 != ((p_40.f4 != (((*l_389) , &l_399) == l_466)) , (void*)0))), p_41))), 7)) < (**l_442)), p_41)) , (*l_389));
                    if (g_149)
                        goto lbl_367;
                }
                else
                {
                    (**l_442) = (safe_lshift_func_uint16_t_u_s((g_100.f1 , (*l_399)), 11));
                    if ((p_40 , (*l_399)))
                    {
                        unsigned char l_484 = 0xBBL;
                        int *l_485 = (void*)0;
                        int *l_486 = (void*)0;
                        int *l_487 = &l_350;
                        int *l_488 = &l_438;
                        int *l_489 = &l_428;
                        int *l_490 = (void*)0;
                        int *l_491 = &l_428;
                        int *l_492 = &l_428;
                        int *l_493 = &l_438;
                        int *l_494 = &l_269;
                        int *l_495 = &g_92;
                        int *l_496 = &l_222;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_350;
                        int *l_499 = &g_92;
                        int *l_500 = &l_438;
                        int *l_501 = &l_438;
                        int *l_502 = &l_428;
                        int *l_503 = (void*)0;
                        int *l_504 = &l_435;
                        int *l_505 = &l_222;
                        int *l_506 = &g_92;
                        int *l_507 = &l_438;
                        int *l_508 = &l_222;
                        int *l_509 = &l_350;
                        int *l_510 = &l_269;
                        (*l_399) &= (safe_mul_func_uint16_t_u_u(g_100.f5, ((p_40.f5 <= ((void*)0 != &g_115)) , (((safe_unary_minus_func_uint8_t_u(p_40.f5)) | p_40.f4) , ((0L < (l_472 , ((safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(p_40.f0, 0x2297F213L)) , g_483) & p_40.f4), g_149)), 0xD8D1ED09L)), l_484)) != g_92), p_40.f1)) > 4294967286UL))) | (**l_442))))));
                        (*l_442) = (*g_114);

                        ;
                        ++g_511;
                    }
                    else
                    {
                        (*l_323) = (*l_442);

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
            }

            ;
            ;
        }
        else
        {
            unsigned l_546 = 0UL;
            int *l_608 = &l_428;
            for (l_334 = 22; (l_334 > 9); --l_334)
            {
                short l_535 = 0x36F8L;
                unsigned l_586 = 4294967287UL;
                unsigned short l_605 = 0xA848L;
            }
            (*l_377) &= (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(8L, ((&g_115 != &g_115) & (safe_sub_func_int32_t_s_s(((((safe_sub_func_int8_t_s_s(((*l_117) & (safe_add_func_int32_t_s_s(p_40.f5, (l_656 , (**g_114))))), (((void*)0 != l_389) , 255UL))) & p_40.f3) <= (*g_115)) | p_41), 0x2AFA1C45L))))) || g_100.f3), (*l_608))), l_657));
            (*l_117) |= (*l_608);
        }

        ;
        ;
    }


    ;
    ;
    for (l_657 = 21; (l_657 < 7); l_657--)
    {
        const unsigned l_660 = 1UL;
        const int *l_666 = (void*)0;
        struct S0 l_678 = {84,15,1,5189,8648,0};
        int l_815 = 0x8B599706L;
        int l_827 = 0x6001585EL;
        int l_828 = 0xE72EDBF3L;
        const struct S0 **l_863 = (void*)0;
        const struct S0 ***l_864 = &l_863;
    }
    return p_40;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_100.f0, "g_100.f0", print_hash_value);
    transparent_crc(g_100.f1, "g_100.f1", print_hash_value);
    transparent_crc(g_100.f2, "g_100.f2", print_hash_value);
    transparent_crc(g_100.f3, "g_100.f3", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_100.f5, "g_100.f5", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_707, "g_707", print_hash_value);
    transparent_crc(g_788, "g_788", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_922, "g_922", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_1057, "g_1057", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1118, "g_1118", print_hash_value);
    transparent_crc(g_1235, "g_1235", print_hash_value);
    transparent_crc(g_1341, "g_1341", print_hash_value);
    transparent_crc(g_1354, "g_1354", print_hash_value);
    transparent_crc(g_1406, "g_1406", print_hash_value);
    transparent_crc(g_1562, "g_1562", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
