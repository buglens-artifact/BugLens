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



static volatile unsigned g_31 = 0x6986D6DBL;
static const char g_44 = (-5L);
static int g_48 = 0x3FDE7504L;
static volatile int *g_74 = (void*)0;
static volatile int **g_73 = &g_74;
static int g_76 = 0L;
static volatile int g_84 = 0x72C6516EL;
static short g_90 = 0x593EL;
static int g_100 = (-1L);
static int *g_158 = &g_100;
static unsigned short g_201 = 65535UL;
static volatile int g_272 = 0xA2AEA371L;
static const char g_303 = 0xA7L;
static int * const *g_379 = &g_158;



static int func_1(void);
static const char func_6(char p_7, unsigned p_8, short p_9, const unsigned short p_10, unsigned p_11);
static unsigned char func_14(int p_15);
static unsigned char func_19(int p_20, int p_21, char p_22, char p_23, unsigned char p_24);
static int func_25(unsigned p_26, int p_27, unsigned short p_28, unsigned short p_29, unsigned char p_30);
static char func_34(int p_35, int p_36, short p_37, int p_38, unsigned p_39);
static short func_40(const unsigned p_41, const unsigned p_42, unsigned short p_43);
static char func_49(char p_50, const int * p_51, unsigned short p_52, int p_53);
static int func_59(int * p_60, char p_61, char p_62, int * p_63, int * const p_64);
static char func_66(int p_67, int * p_68);
static int func_1(void)
{
    unsigned char l_18 = 253UL;
    unsigned char l_411 = 0x55L;
    int **l_443 = &g_158;
    if (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(func_6((((safe_div_func_uint8_t_u_u(func_14((safe_mod_func_uint32_t_u_u((((((253UL <= (l_18 , 0x46L)) || (func_19(((func_25((0L <= g_31), (safe_div_func_uint8_t_u_u(246UL, func_34(l_18, (l_18 || func_40(g_44, l_18, g_44)), g_90, l_18, g_303))), l_18, g_303, g_303) & 0xA90A6C38L) , 0x4B61ED80L), g_201, l_18, l_411, l_18) ^ l_18)) <= l_18) == g_303) && 0xA0L), 4294967295UL))), g_201)) ^ l_18) == l_411), l_411, g_201, g_76, g_201), 2)), 0xE1FDL)) , (-7L)))
    {
        (*g_73) = (void*)0;
    }
    else
    {
        (**g_379) = (g_44 & 5L);
    }
    g_158 = (*g_379);
    (*g_158) = (g_44 || 8L);
    (**l_443) = (func_14((*g_158)) , (((void*)0 != l_443) > ((safe_sub_func_uint16_t_u_u((**l_443), ((**l_443) == (g_303 >= ((void*)0 == l_443))))) < (**l_443))));
    return g_76;
}







static const char func_6(char p_7, unsigned p_8, short p_9, const unsigned short p_10, unsigned p_11)
{
    int *l_420 = &g_48;
    int *l_426 = &g_100;
    int **l_439 = &g_158;
    l_420 = l_420;
    if (((((safe_add_func_int8_t_s_s(g_201, (safe_unary_minus_func_uint32_t_u(((g_84 & p_10) > ((safe_mod_func_int16_t_s_s(((*l_420) & ((((p_9 != func_34(((func_59(l_426, ((g_90 && (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_100, 0x525AA446L)), g_76))) , 0x16L), (*l_420), l_420, l_426) && 0x4B73L) , 0L), (**g_379), g_44, (*l_426), (*l_420))) , &g_73) != &g_73) <= p_8)), p_9)) || 0x94FEL)))))) && g_76) || 0xF8L) && g_84))
    {
        int *l_431 = &g_48;
        int **l_432 = &g_158;
        unsigned short l_433 = 0x44D3L;
        (*l_432) = l_431;
        (*l_426) = l_433;
        return (*l_420);
    }
    else
    {
        int **l_434 = &g_158;
        unsigned l_438 = 0xAD14547AL;
        (*l_434) = (*g_379);
        for (p_8 = (-21); (p_8 > 23); p_8 = safe_add_func_int16_t_s_s(p_8, 4))
        {
            int *l_437 = &g_48;
            (*l_434) = l_437;
            (*l_434) = l_420;
            (*l_434) = (((&g_74 == ((l_437 == ((**l_434) , l_426)) , &g_158)) | l_438) , l_426);
        }
    }
    (*l_439) = l_420;
    for (g_76 = 0; (g_76 != (-14)); g_76 = safe_sub_func_uint16_t_u_u(g_76, 2))
    {
        int **l_442 = &l_426;
        (*l_442) = (*g_379);
        (**l_439) = func_25((**l_442), g_48, p_7, p_7, (**l_439));
        (*l_420) = (**g_379);
    }
    return p_7;
}







static unsigned char func_14(int p_15)
{
    unsigned short l_414 = 0xBD64L;
    int **l_418 = &g_158;
    int ***l_417 = &l_418;
    unsigned l_419 = 1UL;
    for (p_15 = 0; (p_15 >= (-22)); --p_15)
    {
        return l_414;
    }
    (*g_158) = ((safe_rshift_func_int16_t_s_s((-9L), p_15)) <= g_31);
    (*g_158) = ((((void*)0 == l_417) , (p_15 > ((void*)0 == (*g_379)))) || (((g_201 > ((**l_418) >= func_59(&g_100, (**l_418), (**l_418), (**l_417), (*g_379)))) || 65532UL) == l_419));
    return p_15;
}







static unsigned char func_19(int p_20, int p_21, char p_22, char p_23, unsigned char p_24)
{
    return p_22;
}







static int func_25(unsigned p_26, int p_27, unsigned short p_28, unsigned short p_29, unsigned char p_30)
{
    const unsigned l_404 = 0x80204A2BL;
    int *l_407 = &g_48;
    for (g_90 = 0; (g_90 > 7); g_90++)
    {
        int **l_403 = &g_158;
        int **l_408 = (void*)0;
        int **l_409 = (void*)0;
        int **l_410 = &l_407;
        (**g_379) = ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((((*g_158) > (-9L)) >= 0xC46F1B90L), 0x28L)), 3)) < ((((void*)0 != l_403) ^ (8L ^ l_404)) > ((safe_lshift_func_int8_t_s_u(((l_407 == l_407) == 0x0752941AL), (*l_407))) || g_201)));
        (*l_410) = (*g_379);
    }
    return (**g_379);
}







static char func_34(int p_35, int p_36, short p_37, int p_38, unsigned p_39)
{
    short l_387 = 0xE80CL;
    int **l_395 = &g_158;
    unsigned l_396 = 2UL;
    (**g_379) = ((p_35 > p_38) && g_44);
    (**g_379) = 7L;
    return (**l_395);
}







static short func_40(const unsigned p_41, const unsigned p_42, unsigned short p_43)
{
    unsigned l_56 = 0x6AA1DD5CL;
    int *l_65 = (void*)0;
    for (p_43 = (-8); (p_43 >= 28); p_43++)
    {
        int *l_47 = &g_48;
        unsigned l_69 = 0x30E92F9EL;
        (*l_47) = (0xF6A191A8L | (-1L));
    }
    return p_41;
}







static char func_49(char p_50, const int * p_51, unsigned short p_52, int p_53)
{
    unsigned l_282 = 0xB8E888B2L;
    int *l_283 = (void*)0;
    unsigned char l_298 = 0xA0L;
    (*g_158) = (((((((safe_div_func_int16_t_s_s((g_90 , (((void*)0 != &p_51) || (safe_rshift_func_uint8_t_u_u(((p_50 ^ 0xE1L) , l_282), p_53)))), 0x5092L)) == 0L) , 0x8C51L) | 0xE465L) , 0UL) , g_76) , 0L);
    (*g_158) = (-1L);
    if (((void*)0 == &g_74))
    {
        unsigned char l_297 = 246UL;
        int *l_335 = &g_48;
        if ((safe_lshift_func_int16_t_s_s((8UL ^ ((246UL && ((g_76 , p_53) , 0x40L)) , g_100)), 10)))
        {
            int *l_294 = &g_48;
            const int *l_337 = &g_100;
            const int **l_336 = &l_337;
            if ((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint32_t_u(p_50)) , (&g_73 != (void*)0)) | g_48), 12)) == (*l_294)))))
            {
                int l_308 = 1L;
                int ***l_309 = (void*)0;
                int **l_324 = (void*)0;
                int **l_325 = &g_158;
                (*l_294) = (((g_100 , &p_51) != &g_74) || l_298);
                for (g_90 = 0; (g_90 >= (-29)); g_90 = safe_sub_func_int32_t_s_s(g_90, 6))
                {
                    int *l_315 = &g_48;
                    const int *l_323 = &g_48;
                    const int **l_322 = &l_323;
                    if ((*g_158))
                        break;
                    if ((safe_mod_func_int16_t_s_s(g_303, ((safe_mod_func_int16_t_s_s(7L, (safe_rshift_func_int16_t_s_s(l_308, 4)))) & ((void*)0 != l_309)))))
                    {
                        const int *l_311 = (void*)0;
                        const int **l_310 = &l_311;
                        (*g_158) = (*l_294);
                        (*l_310) = p_51;
                        (*l_310) = p_51;
                    }
                    else
                    {
                        int **l_312 = &l_283;
                        (*l_312) = l_294;
                        (*l_294) = (safe_div_func_uint32_t_u_u((((p_52 ^ func_59(&g_100, func_59(l_315, p_52, (*l_294), &g_48, ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((**l_312) == ((safe_mod_func_uint16_t_u_u((*l_294), (**l_312))) , g_90)), 0L)), p_53)) , (void*)0)), (*l_315), &g_48, l_283)) , g_201) || g_303), l_297));
                        (*l_294) = p_52;
                        (*g_73) = (*g_73);
                    }
                    (*l_322) = p_51;
                }
                (*l_294) = (*g_158);
                (*l_325) = l_283;
            }
            else
            {
                int l_332 = (-10L);
                (*g_158) = (safe_rshift_func_int8_t_s_u((p_53 != (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((((l_294 != (void*)0) , 0x4DF4L) && (l_332 > 0xDE0AL)), ((safe_lshift_func_int8_t_s_u((!(g_201 , (*l_335))), g_90)) , l_332))), g_100))), 0));
                (*g_158) = ((+((void*)0 != l_294)) , (*g_158));
            }
            (*l_336) = p_51;
        }
        else
        {
            short l_338 = 0xA2EBL;
            (*l_335) = (p_50 ^ (l_338 != (*l_335)));
        }
        (*l_335) = (*l_335);
    }
    else
    {
        int l_359 = (-10L);
        (*g_73) = (*g_73);
        for (g_90 = (-7); (g_90 <= 2); g_90++)
        {
            int l_347 = 0x25A0D352L;
            int *l_360 = &l_359;
            (*g_158) = ((safe_div_func_int16_t_s_s(l_282, (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(p_52, 0)), l_347)))) , (*g_158));
            if ((*g_158))
            {
                int l_357 = 0x3FDCDEE8L;
                int * const l_363 = &g_48;
                int *l_372 = &g_48;
                if ((safe_rshift_func_uint16_t_u_u(p_50, 2)))
                {
                    (*g_73) = (void*)0;
                    if ((*g_158))
                        continue;
                }
                else
                {
                    int *l_356 = &g_48;
                    unsigned l_371 = 0x72BB2E11L;
                    if ((safe_rshift_func_uint16_t_u_u(0xC6E3L, ((safe_div_func_int16_t_s_s((((((safe_mul_func_int16_t_s_s(func_59(&g_48, p_52, p_50, l_356, l_283), ((0xC915L <= l_357) == 3UL))) , p_52) <= g_44) | 0xE8L) & p_50), (*l_356))) , p_50))))
                    {
                        unsigned l_358 = 0xC90A4398L;
                        const int **l_364 = (void*)0;
                        const int *l_366 = &g_48;
                        const int **l_365 = &l_366;
                        (*l_363) = ((((func_59(&g_48, l_358, l_359, l_360, ((safe_mod_func_int8_t_s_s((func_59(l_360, g_76, g_76, l_283, l_283) , g_303), (*l_356))) , l_363)) | (*g_158)) != (-6L)) || (*l_356)) | p_50);
                        (*g_73) = (void*)0;
                        (*l_365) = p_51;
                        if ((*g_158))
                            continue;
                    }
                    else
                    {
                        const int *l_368 = &g_48;
                        const int **l_367 = &l_368;
                        char l_369 = 1L;
                        int *l_370 = &l_359;
                        (*l_367) = p_51;
                        (*g_73) = (void*)0;
                        (*l_360) = l_369;
                        (*l_372) = ((((p_53 || p_50) | p_50) & l_359) || func_59(l_370, func_59(l_283, ((g_48 ^ ((p_50 & (func_59(l_356, l_359, g_48, &l_359, l_356) , l_371)) && p_52)) | 0x86A0L), g_90, &g_48, l_363), g_76, l_372, l_356));
                    }
                    if ((safe_mod_func_uint8_t_u_u(g_76, (safe_sub_func_uint8_t_u_u(((((g_44 > ((-5L) >= (func_59(&g_48, p_52, (g_303 , 0xB4L), &g_48, l_360) || 4294967295UL))) , &g_158) == (void*)0) , (*l_363)), g_48)))))
                    {
                        int l_382 = 1L;
                        (*l_372) = (~(&g_74 != (g_90 , g_379)));
                        (*l_360) = (((func_59(l_360, g_44, g_90, &g_48, (g_100 , ((safe_div_func_int8_t_s_s(((**g_379) & l_382), l_382)) , &l_359))) >= p_52) , g_100) , 0xEB1FE54FL);
                        (*g_158) = (-6L);
                    }
                    else
                    {
                        int * const l_383 = &g_100;
                        int **l_384 = &g_158;
                        (*l_384) = l_383;
                    }
                }
            }
            else
            {
                return p_53;
            }
        }
    }
    return p_50;
}







static int func_59(int * p_60, char p_61, char p_62, int * p_63, int * const p_64)
{
    unsigned char l_273 = 0xF5L;
    return l_273;
}







static char func_66(int p_67, int * p_68)
{
    int *l_70 = &g_48;
    int **l_71 = &l_70;
    unsigned short l_72 = 0UL;
    unsigned l_93 = 4294967295UL;
    int l_229 = 0x1CA63CD1L;
    unsigned l_249 = 4294967295UL;
    (*l_71) = l_70;
    if ((*p_68))
    {
        int ** const l_75 = (void*)0;
        int l_148 = 0L;
        int * const l_159 = &g_100;
        int **l_164 = &l_70;
        g_76 = (((l_72 , (g_73 == l_75)) , (*g_73)) != p_68);
        for (p_67 = 0; (p_67 < (-14)); --p_67)
        {
            volatile int *l_83 = &g_84;
            int **l_85 = &l_70;
        }
        (*l_71) = (void*)0;
        if (((p_67 , p_67) , (*p_68)))
        {
            unsigned l_124 = 0x19A6A967L;
            int *l_125 = (void*)0;
            (*l_71) = p_68;
            for (g_76 = (-24); (g_76 != (-13)); g_76 = safe_add_func_uint16_t_u_u(g_76, 4))
            {
                char l_95 = 1L;
                int *l_96 = (void*)0;
                (*g_73) = (void*)0;
                g_90 = g_76;
            }
            (*g_73) = (*g_73);
        }
        else
        {
            int *l_129 = &g_100;
            (*l_129) = (safe_div_func_uint16_t_u_u(p_67, g_44));
            for (g_90 = (-5); (g_90 >= 3); ++g_90)
            {
                unsigned char l_136 = 0UL;
                if ((!(safe_mod_func_int8_t_s_s(g_76, p_67))))
                {
                    (*l_71) = (void*)0;
                    return p_67;
                }
                else
                {
                    if (g_44)
                    {
                        g_100 = (*p_68);
                    }
                    else
                    {
                        return p_67;
                    }
                    if (((void*)0 != (*g_73)))
                    {
                        (*g_73) = (*g_73);
                        (*g_73) = (*g_73);
                        (*l_129) = (safe_add_func_uint8_t_u_u((((0xADL <= ((*g_73) == (void*)0)) , (void*)0) == &g_74), g_76));
                    }
                    else
                    {
                        (*l_129) = (*p_68);
                        (*l_129) = (p_67 > p_67);
                        if (g_100)
                            break;
                    }
                    (*g_73) = (*g_73);
                    (*l_129) = (0x36F9L < (l_136 < ((safe_rshift_func_int16_t_s_s(((*l_129) ^ p_67), 8)) || g_76)));
                }
                for (g_76 = 0; (g_76 != (-24)); g_76--)
                {
                    char l_157 = 0xB7L;
                    (*l_71) = p_68;
                    if (((void*)0 == (*g_73)))
                    {
                        if ((*p_68))
                            break;
                    }
                    else
                    {
                        short l_147 = 0xBD7AL;
                        (*l_129) = (((-1L) <= (*l_129)) ^ (safe_sub_func_int16_t_s_s((p_67 != ((((safe_add_func_uint32_t_u_u(l_136, (((((safe_lshift_func_uint16_t_u_s(p_67, 10)) && (((1UL >= (*l_70)) == (((*l_129) ^ ((l_147 == (-1L)) == g_100)) | p_67)) > p_67)) & g_76) , p_67) & l_136))) <= l_148) < g_76) > 0x58L)), 1L)));
                        (*l_129) = (((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(1L, (safe_sub_func_int8_t_s_s((l_147 != ((safe_add_func_int16_t_s_s(p_67, 1L)) == ((((*l_129) | (((void*)0 == p_68) , (0xFC83L < (l_157 | 2L)))) < 0x9575L) == l_147))), 0x18L)))), (*p_68))) != g_90) != p_67);
                        g_158 = l_129;
                    }
                    (*l_71) = l_159;
                    (**l_71) = ((p_67 & (p_67 & l_157)) != (p_68 == (void*)0));
                }
            }
            for (l_72 = 8; (l_72 != 59); l_72++)
            {
                unsigned l_167 = 0UL;
                (*g_73) = (*g_73);
                (*l_129) = (safe_div_func_int8_t_s_s(((&p_68 == l_164) != ((((safe_lshift_func_uint8_t_u_u(l_167, p_67)) , (safe_unary_minus_func_int8_t_s((0x700A2192L >= ((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((((l_129 != (*g_73)) , (safe_rshift_func_int8_t_s_u((((!p_67) , (safe_add_func_uint16_t_u_u(g_48, 0L))) >= 1UL), p_67))) <= p_67), l_167)) < (*p_68)) , g_48), p_67)) && l_167))))) , g_48) , (*p_68))), 0x73L));
            }
            (*l_71) = (*l_71);
        }
    }
    else
    {
        int *l_177 = &g_48;
        int ***l_203 = &l_71;
        (*l_71) = l_177;
        if ((*l_177))
        {
            const int l_184 = 1L;
            int ***l_193 = &l_71;
            if (((safe_div_func_uint16_t_u_u(g_44, 6UL)) , 3L))
            {
                int *l_194 = &g_100;
                for (p_67 = (-19); (p_67 > 7); p_67 = safe_add_func_int8_t_s_s(p_67, 8))
                {
                    (*g_158) = (*g_158);
                    for (g_100 = 18; (g_100 >= 9); --g_100)
                    {
                        (*l_71) = p_68;
                    }
                }
                if ((g_48 > (l_184 || p_67)))
                {
                    volatile int ***l_185 = (void*)0;
                    volatile int ***l_186 = (void*)0;
                    volatile int **l_187 = &g_74;
                    l_187 = &g_74;
                    (*l_71) = p_68;
                    (*g_158) = (0xC2BBL | 0xF131L);
                    (*l_71) = (*l_71);
                }
                else
                {
                    char l_192 = 1L;
                    (*l_71) = ((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_184, 5)), ((*l_70) | (((p_67 != l_192) , (*p_68)) < (*p_68))))) == (l_193 != &g_73)) , (g_76 || g_90)) , l_194);
                    (*l_71) = l_177;
                }
                (*l_193) = &p_68;
                if (((+((((&g_74 != &l_194) || ((((*g_158) & (((&l_194 == (((void*)0 != (*l_71)) , &g_158)) && g_48) > (*l_177))) || g_44) > 0UL)) , (***l_193)) && g_76)) <= (*g_158)))
                {
                    return (*l_177);
                }
                else
                {
                    for (g_100 = 0; (g_100 == 13); g_100 = safe_add_func_int16_t_s_s(g_100, 8))
                    {
                        g_201 = (safe_rshift_func_int8_t_s_s(0x2BL, 1));
                        (*l_193) = &l_70;
                    }
                    if ((*g_158))
                    {
                        int *l_202 = &g_48;
                        (*l_71) = p_68;
                        (**l_193) = l_202;
                        (*l_71) = l_177;
                    }
                    else
                    {
                        g_158 = (**l_193);
                    }
                    (*l_71) = (void*)0;
                }
            }
            else
            {
                unsigned char l_211 = 0xDDL;
                unsigned l_212 = 0x74B2B15EL;
                if (((g_100 >= (~((*p_68) != (*p_68)))) >= ((void*)0 == l_203)))
                {
                    int **l_206 = &l_70;
                    (*g_73) = (*g_73);
                    (*g_73) = (*g_73);
                    (*g_158) = (safe_add_func_uint8_t_u_u((&p_68 == l_206), g_100));
                    if (((((&p_68 == (*l_193)) <= (0UL && (*l_177))) > ((safe_rshift_func_int16_t_s_u(2L, ((**l_206) || ((p_68 == ((&g_73 == (void*)0) , (*l_206))) & p_67)))) , l_211)) <= g_44))
                    {
                        (**l_203) = p_68;
                        return l_212;
                    }
                    else
                    {
                        (*g_158) = (((**l_206) > (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_76, 6)), (safe_add_func_uint32_t_u_u(g_76, (safe_lshift_func_uint16_t_u_s(g_76, 7))))))) & p_67);
                        (*l_71) = p_68;
                    }
                }
                else
                {
                    (*g_158) = (((-1L) && g_201) && (*g_158));
                }
            }
        }
        else
        {
            return (*l_70);
        }
    }
    for (g_201 = 0; (g_201 <= 24); ++g_201)
    {
        int *l_230 = &g_48;
        int l_231 = 0x31C6B7E1L;
        int *l_263 = &g_100;
        int *l_264 = &g_48;
        for (p_67 = 0; (p_67 >= (-7)); p_67--)
        {
            int **l_232 = &l_70;
            int *l_256 = &g_100;
            l_229 = ((((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s((((((((l_229 , l_230) == l_230) | l_231) == ((l_232 != (g_48 , &g_74)) , ((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(p_67, (*l_230))), (*g_158))) > p_67))) | (*l_230)) , 0x3292L) && 0xEC5BL), 0xC3F5D855L)), 4UL)) , (*g_158)) , g_76) || p_67);
            if ((safe_add_func_int16_t_s_s((!(safe_sub_func_int32_t_s_s((&l_70 != &p_68), (*g_158)))), p_67)))
            {
                unsigned char l_245 = 0xFDL;
                int *l_248 = &l_229;
                l_245 = (g_44 <= (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_48, 8)), 1UL)));
                (*l_248) = (safe_add_func_int16_t_s_s(g_100, p_67));
                if (l_249)
                    continue;
            }
            else
            {
                const int * const l_250 = &l_229;
                const int *l_252 = &l_229;
                const int **l_251 = &l_252;
                (*l_251) = l_250;
            }
            (*l_256) = (safe_sub_func_int32_t_s_s((*g_158), (safe_unary_minus_func_uint16_t_u(p_67))));
            (*l_71) = (((void*)0 != (*l_71)) , (*l_71));
        }
        (*l_263) = (p_67 < (safe_add_func_int16_t_s_s(p_67, ((((safe_rshift_func_uint8_t_u_u(g_90, 5)) , 0xD85EE549L) , ((((0x07L >= (0x01L & ((safe_add_func_int16_t_s_s(0x6EDDL, 0xE8C7L)) < g_201))) , g_201) , p_67) <= 1L)) , p_67))));
        (*l_71) = l_264;
        for (l_93 = 20; (l_93 < 25); l_93 = safe_add_func_uint8_t_u_u(l_93, 6))
        {
            volatile int *l_271 = &g_272;
            (*l_263) = ((void*)0 == &g_73);
            for (l_249 = 0; (l_249 > 25); l_249 = safe_add_func_uint32_t_u_u(l_249, 3))
            {
                (*g_73) = (void*)0;
                (*l_71) = p_68;
                for (l_231 = (-23); (l_231 <= 14); l_231 = safe_add_func_uint16_t_u_u(l_231, 6))
                {
                    if (p_67)
                    {
                        (*l_71) = p_68;
                        (*l_263) = (*g_158);
                        if (p_67)
                            continue;
                    }
                    else
                    {
                        (*l_263) = 0x505F07D2L;
                        l_271 = (*g_73);
                        (*l_71) = (void*)0;
                    }
                }
            }
            (*l_263) = 0xFB94FD68L;
        }
    }
    return p_67;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
