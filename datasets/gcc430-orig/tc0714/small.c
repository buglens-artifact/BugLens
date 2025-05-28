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



static unsigned g_6 = 4294967292UL;
static const int g_27 = (-1L);
static const int *g_26 = &g_27;
static int g_29 = 0L;
static unsigned g_91 = 0xDB56EC41L;
static char g_96 = 2L;
static unsigned g_109 = 0x30044FF4L;
static short g_111 = 0x366BL;
static unsigned g_113 = 0xB9C4F6A9L;
static unsigned g_116 = 6UL;
static int g_235 = 0xE00178F1L;
static int *g_234 = &g_235;
static int **g_334 = &g_234;
static int ** const *g_333 = &g_334;
static unsigned short g_477 = 0xE84DL;
static char g_492 = 0x9BL;
static int g_518 = 0x5EAEA5ACL;
static int *g_517 = &g_518;



static unsigned func_1(void);
static int * func_2(int * p_3);
static short func_9(unsigned char p_10, int * p_11, char p_12);
static unsigned char func_13(unsigned char p_14, const int * p_15);
static unsigned func_19(int * p_20, int * p_21);
static short func_34(int * p_35, int * p_36);
static int * func_37(unsigned short p_38, short p_39, int * p_40, int * p_41, unsigned char p_42);
static int func_45(int * p_46, unsigned char p_47, int * p_48, unsigned p_49, const unsigned p_50);
static int * func_51(unsigned p_52, char p_53);
static int * const func_55(unsigned p_56, int * p_57, int * p_58, int * p_59);
static unsigned func_1(void)
{
    unsigned l_18 = 9UL;
    int *l_24 = (void*)0;
    const unsigned char l_25 = 250UL;
    unsigned char l_534 = 0xC8L;
    (**g_333) = func_2(((safe_add_func_uint8_t_u_u((g_6 ^ ((((((((((safe_mod_func_int16_t_s_s(func_9(func_13((+(safe_sub_func_int8_t_s_s((l_18 || func_19(((((g_6 < (l_18 <= (g_6 ^ (safe_mul_func_uint16_t_u_u((((l_24 == (void*)0) & 0x79L) < 4L), g_6))))) && l_18) >= l_25) , l_24), l_24)), 0x81L))), g_26), l_24, g_492), 65535UL)) != g_6) | g_492) , 254UL) & g_27) < l_534) && 0x5A14L) ^ 0x26L) ^ l_25) , g_27)), 3L)) , (*g_334)));
    (*g_517) = 0xE1205CD7L;
    return g_6;
}







static int * func_2(int * p_3)
{
    short l_537 = 8L;
    int l_542 = 0x2ACC9149L;
    int ***l_545 = &g_334;
    int *** const l_546 = &g_334;
    (*g_517) = ((((safe_mul_func_int8_t_s_s(((-1L) && (l_537 & (&g_334 != (void*)0))), l_537)) , g_109) >= l_537) , (safe_sub_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((l_537 ^ ((((l_537 > 0L) >= g_116) < l_537) >= l_542)), l_542)) & g_116), 0xD9299BDAL)));
    (*g_517) = ((((((safe_mod_func_int8_t_s_s(((l_545 != l_546) | 0x73D7L), ((((safe_sub_func_int16_t_s_s(g_29, ((*g_517) >= (*g_26)))) , (((*g_517) & (((*g_334) == p_3) <= 0xB9L)) , l_537)) != g_91) , g_96))) >= l_542) , g_116) , g_477) != 5UL) > g_111);
    return (*g_334);
}







static short func_9(unsigned char p_10, int * p_11, char p_12)
{
    char l_533 = 6L;
    return l_533;
}







static unsigned char func_13(unsigned char p_14, const int * p_15)
{
    int *l_28 = &g_29;
    int ***l_532 = &g_334;
    (*l_28) = (*g_26);
    if (((void*)0 != l_28))
    {
        short l_43 = 0x3CBFL;
        int *l_44 = &g_29;
        (*g_517) = ((safe_mod_func_int8_t_s_s((((0UL & ((p_14 < (p_15 != p_15)) , (+(safe_rshift_func_int16_t_s_u(func_34(func_37(l_43, l_43, &g_29, l_28, func_19(&g_29, l_44)), g_517), 15))))) & 0x6664L) == l_43), g_27)) | p_14);
    }
    else
    {
        int *l_531 = &g_29;
        (**g_333) = func_37((*l_28), g_96, l_28, l_28, g_518);
        (*g_517) = ((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((g_116 , (void*)0) != (void*)0), 1)), (safe_mul_func_uint8_t_u_u(((*g_517) == (p_14 <= p_14)), g_113)))) & g_113);
    }
    (**g_333) = (*g_334);
    (*l_28) = ((l_532 == &g_334) < func_19((**g_333), (**l_532)));
    return g_29;
}







static unsigned func_19(int * p_20, int * p_21)
{
    return g_6;
}







static short func_34(int * p_35, int * p_36)
{
    char l_519 = 0x35L;
    int *l_520 = &g_518;
    (*l_520) = ((l_519 > func_19(p_36, l_520)) && (g_27 , ((g_109 != g_113) & (*l_520))));
    return g_492;
}







static int * func_37(unsigned short p_38, short p_39, int * p_40, int * p_41, unsigned char p_42)
{
    int *l_54 = &g_29;
    int l_230 = 0L;
    unsigned l_233 = 18446744073709551610UL;
    int ***l_351 = &g_334;
    unsigned l_354 = 0x7E9080B2L;
    int l_418 = 1L;
    unsigned char l_440 = 0xA9L;
    char l_450 = 0xFAL;
    if (func_45(func_51((((l_54 == ((0x5774D2ADL < (g_29 | g_27)) , func_55((((*l_54) != ((g_29 >= (((((*l_54) == func_19(l_54, p_41)) ^ 0x1ABDL) != (*g_26)) > g_27)) && g_27)) || g_29), &g_29, p_41, p_40))) > 0xEE0F3894L) , p_38), l_230), l_233, g_234, p_38, g_235))
    {
        unsigned char l_267 = 1UL;
        int **l_277 = &g_234;
        int ***l_276 = &l_277;
        const unsigned short l_310 = 0UL;
        if (func_19(func_51((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s(p_39, 5)) && (!0xE49BL)), (&p_41 == (void*)0))), (((safe_mod_func_uint8_t_u_u(g_116, l_267)) < (safe_sub_func_int32_t_s_s(((*l_54) == (&g_27 != p_41)), 0x03F70A1BL))) > g_91)), &l_230))
        {
            const int **l_270 = (void*)0;
            const int **l_271 = &g_26;
            unsigned short l_286 = 65529UL;
            int **l_305 = (void*)0;
            int **l_306 = &g_234;
            (*l_271) = &g_27;
            (*p_41) = ((safe_mod_func_uint32_t_u_u(p_39, (((((safe_mod_func_int32_t_s_s((((void*)0 == l_276) || p_38), (p_42 , (safe_div_func_int16_t_s_s(g_91, (safe_add_func_int8_t_s_s(g_96, ((func_45(((~g_29) , ((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s((p_38 ^ g_235), (*l_54))) ^ (**l_277)), 0x5EL)) , (void*)0)), p_42, &g_29, g_96, g_27) == g_109) != p_42)))))))) , l_286) & p_42) < p_38) , 0x953DAA23L))) ^ 0x8EL);
            (*l_306) = func_55((safe_lshift_func_int8_t_s_u(((g_116 >= (&p_41 != (void*)0)) || (+(0x18L && (safe_lshift_func_int8_t_s_u(p_38, (safe_mod_func_int16_t_s_s((-1L), (safe_sub_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(g_27, (((*l_54) || ((*p_40) & (*g_26))) <= (**l_277)))), 4294967295UL)), (-1L))), g_6)), 0xF3ED05CFL))))))))), 5)), &g_235, &g_235, p_40);
        }
        else
        {
            int *l_309 = &g_235;
            (**l_277) = (**l_277);
            (*l_309) = ((func_19(((g_111 >= (**l_277)) , func_51(g_6, (*l_54))), &g_235) , ((func_19(&g_235, (((safe_add_func_int32_t_s_s(((void*)0 == l_309), (-10L))) == l_310) , &g_29)) || (**l_277)) , 65535UL)) <= g_27);
        }
    }
    else
    {
        const int l_335 = 0xC2E93F13L;
        int **l_352 = (void*)0;
        short l_379 = (-1L);
        int * const l_388 = &g_235;
        int l_399 = 0L;
        if ((*p_40))
        {
            int **l_311 = &l_54;
            (*l_311) = &g_235;
            (*l_311) = (void*)0;
            (*l_311) = (void*)0;
            (*l_311) = &g_235;
        }
        else
        {
            int *l_323 = &g_235;
            (*p_41) = ((safe_sub_func_uint32_t_u_u(p_42, (((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(0xC5L)), ((void*)0 != &l_54))) >= (safe_add_func_int16_t_s_s(g_96, ((safe_mod_func_uint32_t_u_u(((((g_111 , func_19(p_40, p_40)) & (*l_54)) == p_42) == (*p_41)), (*g_234))) <= (*p_40))))) <= p_42))) < (*l_54));
            if ((g_91 && (safe_rshift_func_uint16_t_u_u((func_19(&g_235, l_323) == (0xC667L | 0x88B6L)), 8))))
            {
                int **l_324 = &g_234;
                int ***l_325 = &l_324;
                const int **l_326 = (void*)0;
                const int **l_327 = (void*)0;
                const int **l_328 = (void*)0;
                const int *l_329 = &g_29;
                (*l_324) = p_41;
                (*l_325) = &l_323;
                l_329 = &g_27;
                (*p_41) = 0x16523478L;
            }
            else
            {
                const int **l_330 = &g_26;
                (*l_330) = &g_27;
                if ((*g_26))
                {
                    for (g_113 = 21; (g_113 < 32); g_113 = safe_add_func_int32_t_s_s(g_113, 9))
                    {
                        (*p_40) = (*g_26);
                        return &g_29;
                    }
                    (**g_334) = (&l_330 == g_333);
                }
                else
                {
                    int l_340 = 0x084947FFL;
                    int * const *l_353 = &l_54;
                    (*p_40) = l_335;
                    l_340 = ((**l_330) , (safe_add_func_uint8_t_u_u((1L < (p_42 , 4294967287UL)), ((**l_330) <= (p_42 > p_38)))));
                    (*l_323) = ((safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((*l_323), 12)) , (1L && ((func_45((((((l_323 == (void*)0) != ((safe_rshift_func_uint16_t_u_u(p_42, 9)) | g_27)) , ((((((*l_323) == (g_96 , (g_235 , (***g_333)))) && g_235) , &g_334) == l_351) , (void*)0)) == l_352) , (void*)0), g_113, (*g_334), p_38, (*l_54)) , (*g_333)) == l_353))), l_354)) , g_27) , 0x70L), (**l_330))) == 0x8FL), p_42)) == p_38);
                    (*l_330) = (**g_333);
                }
                (*p_40) = (*p_40);
            }
        }
        if ((safe_lshift_func_uint8_t_u_u(((~(((((safe_lshift_func_uint8_t_u_s(0x33L, (***l_351))) && (safe_div_func_int8_t_s_s(0xF3L, (*l_54)))) & (safe_rshift_func_uint8_t_u_u(g_235, 5))) , (((void*)0 == &l_352) , (safe_add_func_uint8_t_u_u(p_39, ((safe_rshift_func_uint8_t_u_u(p_39, 0)) || p_39))))) , 0x6A9A2554L)) , 1UL), (*l_54))))
        {
            unsigned short l_382 = 0x01A8L;
            if ((((((safe_lshift_func_uint16_t_u_s((*l_54), 6)) < l_335) | g_6) , (*g_334)) != (*g_334)))
            {
                (**l_351) = p_41;
                (**g_333) = func_55((255UL > ((((+((safe_sub_func_uint32_t_u_u((g_111 < (safe_lshift_func_int16_t_s_s(0L, 9))), p_38)) < (*l_54))) , 0xC31A090BL) > ((((((p_42 >= 1L) && g_116) > g_27) , 0xBDCB30B1L) | l_379) != g_235)) , p_42)), (**l_351), (*g_334), p_41);
            }
            else
            {
                unsigned short l_385 = 0x10A5L;
                int **l_389 = &l_54;
                (***g_333) = ((safe_add_func_int16_t_s_s(((l_382 >= (p_40 == p_40)) <= g_235), (((safe_lshift_func_uint16_t_u_u(((l_385 || (((*g_334) == (void*)0) == (safe_div_func_uint32_t_u_u(0x47B12D53L, g_96)))) > g_109), 7)) == (*g_26)) , g_29))) , 0xA6D0E269L);
                (*l_389) = l_388;
            }
        }
        else
        {
            int *l_398 = &g_235;
            for (p_39 = 0; (p_39 >= 1); p_39++)
            {
                p_41 = func_51((((*g_234) , (*l_388)) ^ (safe_rshift_func_int16_t_s_u((safe_div_func_int8_t_s_s(((*l_54) <= (safe_rshift_func_int8_t_s_u(((void*)0 == (*l_351)), func_19(l_398, (*g_334))))), g_116)), (*l_398)))), l_399);
                return l_398;
            }
            (**l_351) = ((((p_38 > 254UL) <= func_19(func_51((((((func_19((g_27 , func_51(((((p_42 ^ ((g_111 >= 1L) , (g_109 && g_111))) < ((safe_mul_func_uint16_t_u_u((p_42 & 0L), g_27)) , g_109)) < (*g_26)) && 2UL), p_38)), p_41) , p_39) , 0xFB8EE500L) != p_38) , g_29) <= p_39), p_42), p_40)) && p_38) , (void*)0);
            (*p_41) = (*p_41);
            return (*g_334);
        }
        if ((*g_26))
        {
            int *l_404 = &g_235;
            for (l_379 = (-22); (l_379 != (-8)); l_379 = safe_add_func_int8_t_s_s(l_379, 5))
            {
                int ***l_405 = &l_352;
                int **l_406 = &g_234;
                (*l_406) = func_55(p_39, l_404, (*g_334), ((func_19((**g_333), (**g_333)) == ((func_19(l_404, p_41) , l_405) == &g_334)) , (**l_351)));
            }
        }
        else
        {
            return p_41;
        }
        (*l_388) = (*p_40);
    }
    if ((((func_19((**g_333), (**l_351)) > ((-1L) & (((safe_sub_func_int16_t_s_s(p_38, ((((*g_333) != (void*)0) , 0UL) <= (p_38 <= p_42)))) <= p_39) , p_39))) && 0xD0A0L) || 0xAD66C60CL))
    {
        unsigned char l_409 = 0x96L;
        int ***l_425 = &g_334;
        unsigned l_458 = 0x27B77027L;
        int *l_485 = &g_29;
        (**l_351) = func_51(((g_113 > ((((-1L) | (~l_409)) ^ g_6) && (safe_div_func_uint8_t_u_u(g_109, (func_19(func_51(((***g_333) || (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((l_409 , ((0x6FA6L == (&p_40 == (void*)0)) ^ g_113)) != 1L), p_39)), g_91)), g_111))), p_38), (*g_334)) && l_409))))) , 18446744073709551607UL), l_418);
        p_40 = func_51(((0x65AE9129L > (((*l_54) & (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((~(safe_div_func_uint16_t_u_u(((func_19((p_38 , p_40), (*g_334)) , (void*)0) != l_425), 1L))) , 0xAE98L) >= g_27), 0xF7L)), p_38))) | (*l_54))) , p_39), p_38);
        (*p_41) = (g_91 | (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_96, ((void*)0 == &g_334))), ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(g_96, ((safe_sub_func_uint32_t_u_u((p_39 , ((safe_lshift_func_uint16_t_u_s(((*g_26) >= (safe_div_func_uint16_t_u_u(p_42, (l_440 && 0xDB9DL)))), p_42)) & l_409)), (*g_26))) && 0x2212L))), 0xC0AF5386L)) ^ p_42))));
        if (((*l_54) & p_38))
        {
            char l_451 = 0xC1L;
            (*l_54) = ((safe_div_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u(g_27, (p_39 & ((safe_add_func_uint16_t_u_u(((l_450 ^ l_451) <= (((safe_sub_func_int32_t_s_s((((((((((safe_mod_func_uint8_t_u_u(p_38, (g_96 ^ (g_29 == ((safe_mul_func_uint16_t_u_u(g_111, (((g_235 != l_451) || 0x71L) | 0xFBL))) && l_458))))) > p_38) , 8L) != 0x95L) | g_109) , p_38) , 2L) , (void*)0) == (void*)0), 0xE45C6188L)) , (void*)0) != (void*)0)), 4L)) && p_39)))))), p_42)) >= 0xA23D61B8L) , 1UL), 65535UL)) ^ p_42);
        }
        else
        {
            const int l_476 = 9L;
            int *** const l_484 = &g_334;
            int l_488 = 1L;
            if ((*p_41))
            {
                (*p_41) = (*p_41);
                (*p_41) = (*g_26);
            }
            else
            {
                int l_459 = 0xFFEC495DL;
                const unsigned l_473 = 0x9127CFA7L;
                int ***l_489 = &g_334;
                (*p_41) = l_459;
                for (g_111 = (-6); (g_111 > 29); ++g_111)
                {
                    unsigned char l_470 = 1UL;
                    (*l_54) = (func_19(func_51((((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((((safe_lshift_func_int8_t_s_s(p_38, (g_109 | g_111))) , 0x8CL) , g_113) , p_38) | p_38) & l_470), 2)), 0x21L)) , l_458) , 9UL), g_109), (**g_333)) && g_29);
                    if ((*p_41))
                    {
                        (*g_334) = func_51((safe_rshift_func_int16_t_s_s((((p_38 , 0L) > l_473) <= (((((p_39 , (-8L)) , (void*)0) != (void*)0) == ((((safe_mod_func_int32_t_s_s((*l_54), l_473)) != g_6) != g_477) & l_476)) <= l_470)), 4)), g_6);
                        (*l_54) = l_476;
                        (*p_41) = (l_470 , (*p_41));
                        (**l_425) = l_485;
                    }
                    else
                    {
                        (*l_54) = 0L;
                        (**l_425) = (void*)0;
                        (*p_41) = (safe_rshift_func_int8_t_s_u(l_488, 7));
                        (**l_484) = func_51(l_470, (((void*)0 == l_489) , p_38));
                    }
                    return (**l_425);
                }
                (**l_351) = (void*)0;
                if ((*g_26))
                {
                    return p_41;
                }
                else
                {
                    return (**l_425);
                }
            }
        }
    }
    else
    {
        short l_495 = 0L;
        const int l_496 = (-1L);
        unsigned char l_512 = 0UL;
        if ((((((safe_sub_func_uint32_t_u_u(g_91, (~p_42))) , ((0UL <= ((g_91 , g_492) & (safe_add_func_uint8_t_u_u(((p_42 | g_91) , (((l_495 > (g_6 > 0xE0D7L)) , 0xABL) < g_116)), l_496)))) & g_113)) , g_96) && g_96) , (*p_40)))
        {
            (***g_333) = (safe_div_func_int8_t_s_s(g_29, g_235));
            (*g_334) = p_40;
            (**g_333) = p_41;
        }
        else
        {
            int *l_501 = &g_29;
            int ***l_503 = &g_334;
            for (g_96 = 7; (g_96 >= (-14)); g_96--)
            {
                int *l_502 = &l_230;
                (*p_40) = func_19(l_501, (**l_351));
                (*p_40) = (func_19(p_40, l_502) ^ (((void*)0 == l_503) , (~(safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((safe_add_func_uint16_t_u_u((255UL & l_495), (l_512 >= (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((g_111 <= (*l_501)), l_495)), g_6))))), (*p_41))), p_39)), g_235)))));
            }
        }
    }
    return (**l_351);
}







static int func_45(int * p_46, unsigned char p_47, int * p_48, unsigned p_49, const unsigned p_50)
{
    int l_240 = 0x8ABCB274L;
    int *l_251 = (void*)0;
    const char l_258 = 0x49L;
    int l_259 = (-4L);
    int **l_260 = &l_251;
    for (g_113 = 6; (g_113 >= 45); ++g_113)
    {
        if (((safe_rshift_func_int16_t_s_s(0L, 13)) && (l_240 == p_49)))
        {
            int **l_241 = &g_234;
            (*l_241) = p_46;
            g_235 = (*p_48);
            (*l_241) = ((p_49 , 0x6BD8L) , &g_29);
        }
        else
        {
            if ((*p_48))
                break;
        }
    }
    (*p_48) = (safe_unary_minus_func_int32_t_s(((*g_234) , 0x329BCD8DL)));
    (*l_260) = ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_50, (0xD8L & ((l_240 && (safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u((func_19(&g_29, (l_240 , l_251)) < (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_111, l_258)), (*g_234))), p_47))), l_259)) != l_258), 6L))) ^ p_50)))), l_259)) , &l_259);
    return (*g_26);
}







static int * func_51(unsigned p_52, char p_53)
{
    char l_231 = 0L;
    int *l_232 = &g_29;
    (*l_232) = (l_231 != (!g_111));
    l_232 = (void*)0;
    return l_232;
}







static int * const func_55(unsigned p_56, int * p_57, int * p_58, int * p_59)
{
    int *l_66 = &g_29;
    int l_81 = 4L;
    int ***l_178 = (void*)0;
    short l_198 = 0xF8DCL;
    int **l_229 = &l_66;
    for (g_29 = 1; (g_29 <= (-18)); g_29 = safe_sub_func_uint32_t_u_u(g_29, 6))
    {
        int l_67 = 1L;
        int *l_76 = &g_29;
        unsigned l_79 = 0UL;
        unsigned char l_112 = 0x72L;
        if ((func_19(((safe_add_func_uint16_t_u_u((((1UL && ((((g_27 , p_56) == 0UL) && (l_66 == p_59)) , p_56)) , (((g_29 >= (-1L)) < p_56) | p_56)) , 65535UL), 1UL)) , (void*)0), p_57) | l_67))
        {
            char l_68 = 0xBFL;
            if (l_68)
                break;
        }
        else
        {
            int **l_69 = &l_66;
            (*l_69) = (void*)0;
            if (((safe_unary_minus_func_uint8_t_u((safe_div_func_int32_t_s_s(func_19((((safe_rshift_func_int16_t_s_u((g_29 > 0x8DL), (safe_unary_minus_func_uint8_t_u(func_19(l_76, l_66))))) != (safe_rshift_func_int8_t_s_s((((((((*p_57) < (p_56 || (g_29 || 0xB612L))) , 0xC2F6A78CL) != l_79) && 4294967286UL) || g_6) , p_56), 2))) , p_58), p_59), p_56)))) && g_29))
            {
                int *l_80 = &g_29;
                l_81 = func_19(l_80, &g_29);
            }
            else
            {
                (*l_69) = p_59;
                for (l_67 = 0; (l_67 == (-20)); l_67--)
                {
                    int *l_84 = (void*)0;
                    int *l_85 = (void*)0;
                    int *l_86 = (void*)0;
                    int *l_87 = &l_81;
                    (*l_87) = ((0xF3DDL < (**l_69)) <= func_19(l_84, p_59));
                    (*l_69) = p_57;
                    (*l_69) = &l_81;
                    g_26 = p_58;
                }
            }
        }
        if ((safe_lshift_func_int8_t_s_s(l_81, 4)))
        {
            const int **l_90 = &g_26;
            p_59 = p_58;
            (*l_90) = &g_27;
            g_91 = func_19(&g_29, p_59);
            if ((*g_26))
            {
                return &g_29;
            }
            else
            {
                p_59 = l_76;
            }
        }
        else
        {
            int *l_92 = &l_81;
            int **l_93 = &l_92;
            int l_107 = 0x03BCFB6DL;
            (*l_93) = l_92;
            (*l_93) = &g_29;
            for (g_91 = 0; (g_91 != 33); g_91++)
            {
                const short l_108 = 1L;
                g_96 = (-1L);
                l_107 = (safe_sub_func_uint32_t_u_u(g_91, (func_19((*l_93), &l_81) ^ (((func_19(p_59, ((((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((p_56 <= ((safe_mul_func_uint16_t_u_u(0UL, func_19(l_76, l_76))) , (-1L))), p_56)), (-1L))), 0x97L)) | g_96) , (*p_59)) , (*l_93))) | g_6) && 0UL) == 248UL))));
                g_109 = (((p_56 & (l_108 , (((((0xC3L == p_56) == func_19(&g_29, &g_29)) <= (*l_76)) , &p_59) != &l_92))) != 0UL) <= g_96);
                g_111 = (1UL && ((((void*)0 == &l_76) , (p_56 || (p_57 == (((void*)0 != &g_26) , p_58)))) | (safe_unary_minus_func_int16_t_s(((+((void*)0 != p_57)) || 0UL)))));
            }
            g_113 = l_112;
        }
        g_116 = ((0x42EEL == (*l_76)) & (safe_mul_func_uint16_t_u_u(((void*)0 != &p_58), p_56)));
        if ((*p_57))
            break;
    }
    for (p_56 = 0; (p_56 <= 6); p_56 = safe_add_func_int32_t_s_s(p_56, 2))
    {
        unsigned l_135 = 0UL;
        if ((((safe_lshift_func_int8_t_s_s((((p_56 , ((((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(p_56, g_29)) , ((void*)0 != p_59)), g_6)) , ((&p_58 == (void*)0) && g_29)) == 0xAC75L) == 0UL)) <= g_111) & 0x1A3DBB83L), p_56)) , g_116) , 2L))
        {
            int *l_125 = &l_81;
            (*p_58) = ((func_19(&g_29, &g_29) , l_81) | ((func_19(p_59, l_125) ^ (p_56 >= (-6L))) ^ 0x464C473EL));
            (*l_125) = (safe_rshift_func_uint8_t_u_s(p_56, 7));
            for (g_116 = (-3); (g_116 != 40); ++g_116)
            {
                int *l_130 = &g_29;
                int **l_131 = &l_66;
                const int **l_132 = &g_26;
                int *l_148 = &g_29;
                l_130 = p_59;
                (*l_131) = &g_29;
                (*l_132) = &g_27;
                if ((func_19(&g_29, p_59) > (((*l_130) || (safe_mul_func_uint16_t_u_u(((((p_57 == (func_19(((*l_125) , &g_29), p_59) , p_58)) != g_27) , 0x08C9EE7AL) <= l_135), l_135))) >= 0xF1E1A577L)))
                {
                    (*l_132) = &g_27;
                }
                else
                {
                    if ((safe_mod_func_uint8_t_u_u(func_19(p_59, p_57), 0x60L)))
                    {
                        if ((*g_26))
                            break;
                    }
                    else
                    {
                        (*p_58) = (func_19(p_59, p_58) != (((safe_mod_func_int32_t_s_s((p_56 , 0xFF7D8875L), (safe_add_func_uint8_t_u_u(g_96, p_56)))) && ((safe_lshift_func_int16_t_s_u(((safe_mul_func_int8_t_s_s(((((*l_125) , (func_19((((safe_rshift_func_int8_t_s_s((((void*)0 == &p_57) <= (*l_125)), (*l_66))) >= 0xA8A3L) , l_148), &g_29) != (*l_125))) == 0xC51AB325L) != g_29), 0xCAL)) > 0xC3L), p_56)) & g_109)) <= l_135));
                    }
                }
            }
            return &g_29;
        }
        else
        {
            int *l_149 = &g_29;
            l_149 = l_149;
            (*p_58) = (((&l_81 != (void*)0) , p_57) == (void*)0);
        }
    }
    if (((safe_mul_func_int8_t_s_s(0x67L, l_81)) || (((safe_mod_func_uint8_t_u_u((0x0DA0L | (((safe_mul_func_int8_t_s_s(g_96, ((safe_mod_func_int32_t_s_s((*g_26), func_19(p_57, &g_29))) == ((&p_59 != &p_58) & (*g_26))))) < l_81) < (*g_26))), l_81)) || (*p_57)) || (*p_57))))
    {
        const int *l_177 = &g_29;
        int * const l_189 = &g_29;
        int *l_216 = (void*)0;
        for (g_109 = 0; (g_109 != 54); g_109 = safe_add_func_uint16_t_u_u(g_109, 7))
        {
            int **l_161 = &l_66;
            int ***l_160 = &l_161;
            l_66 = p_59;
            (*l_160) = &p_58;
        }
        if ((safe_rshift_func_int16_t_s_s(0L, g_29)))
        {
            (*p_59) = func_19(&g_29, p_57);
        }
        else
        {
            unsigned l_176 = 0UL;
            const int * const *l_180 = &l_177;
            const int * const **l_179 = &l_180;
            int *l_188 = &l_81;
            if ((safe_sub_func_int8_t_s_s((g_29 >= ((safe_add_func_int8_t_s_s(func_19(&l_81, p_59), (g_109 & (((safe_rshift_func_int8_t_s_s((&g_29 != (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(1UL, g_109)), 4)) , (safe_lshift_func_int8_t_s_u((0x62ACL <= p_56), p_56))) , (void*)0)), 6)) > g_29) != p_56)))) > l_176)), (-1L))))
            {
                l_177 = &g_27;
                (*p_59) = (*l_177);
            }
            else
            {
                const char l_185 = 1L;
                if ((g_91 == (l_178 == l_179)))
                {
                    for (g_29 = 0; (g_29 < (-8)); g_29 = safe_sub_func_uint16_t_u_u(g_29, 7))
                    {
                        int *l_183 = (void*)0;
                        int *l_184 = &l_81;
                        (*l_184) = (**l_180);
                        (*l_184) = l_185;
                        (*l_184) = (p_56 < g_6);
                    }
                    g_26 = &g_27;
                    for (g_111 = 0; (g_111 >= (-7)); g_111 = safe_sub_func_uint16_t_u_u(g_111, 6))
                    {
                        (*p_57) = func_19(p_59, l_188);
                        return l_189;
                    }
                }
                else
                {
                    int **l_192 = &l_66;
                    p_57 = p_58;
                    (*l_189) = ((p_56 <= (*g_26)) <= (safe_mul_func_uint16_t_u_u(0x5C3BL, g_113)));
                    (*l_192) = (void*)0;
                }
                return p_57;
            }
            for (g_29 = (-18); (g_29 != 27); g_29++)
            {
                int l_203 = 0L;
                int **l_215 = &l_66;
                for (l_176 = 13; (l_176 == 49); ++l_176)
                {
                    int **l_197 = &l_188;
                    int l_210 = (-2L);
                    (*l_197) = p_59;
                    if (l_198)
                        break;
                    l_210 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(0x95L, l_203)), (0xCE18L || (((safe_lshift_func_uint8_t_u_s(248UL, 6)) , l_203) && (g_91 & ((248UL != (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s((0x6FL & (**l_197)), p_56)), (*p_57))) , 0x564FL) , (*l_189))) , p_56))))));
                }
                (*l_215) = ((((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(func_19(p_58, p_57), 7)), (p_56 && (p_56 , ((((g_109 == func_19(p_59, p_59)) ^ (*l_177)) >= p_56) , 0xF4D0L))))) && l_203) || g_113) , (void*)0);
            }
        }
        (*p_59) = func_19(l_216, (p_56 , p_59));
    }
    else
    {
        unsigned char l_228 = 0x76L;
        g_29 = (g_116 > ((p_56 , (*g_26)) , (safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((((safe_div_func_int8_t_s_s(g_91, (safe_unary_minus_func_int16_t_s(((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((&g_27 != &g_29), 1UL)) & (0x3AABBA4AL > (func_19(&g_29, &g_29) && g_29))), 0x4AL)) , (-5L)))))) , l_228) >= 0x53L), (*g_26))), l_228))));
    }
    (*l_229) = (void*)0;
    return &g_29;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
