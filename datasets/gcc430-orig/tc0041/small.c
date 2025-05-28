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



static int g_3 = 0L;
static int *g_24 = &g_3;
static int **g_23 = &g_24;
static short g_79 = 0x3771L;
static unsigned short g_80 = 1UL;
static int **g_132 = &g_24;
static int g_138 = 1L;
static int g_200 = 6L;
static unsigned g_203 = 1UL;
static unsigned g_242 = 4294967287UL;
static short g_310 = (-7L);
static unsigned g_312 = 0x812E294EL;
static unsigned short g_327 = 0xD1B8L;
static char g_375 = 0x3FL;
static unsigned char g_381 = 4UL;
static int g_406 = 1L;
static int g_415 = (-5L);
static unsigned short g_436 = 0xEC7DL;
static int g_551 = 0xD5B5BBEEL;
static unsigned short g_562 = 65526UL;
static unsigned g_615 = 4294967295UL;
static int g_617 = 1L;
static int g_688 = 1L;
static unsigned g_690 = 1UL;
static unsigned g_923 = 0xE461B692L;



static unsigned func_1(void);
static short func_8(unsigned char p_9, char p_10, int ** p_11, int p_12);
static int func_83(int p_84, int * p_85, unsigned p_86, unsigned p_87, int * p_88);
static int * func_90(unsigned p_91, int p_92, int * p_93);
static char func_96(int ** p_97, int ** p_98, int p_99, int p_100, int ** p_101);
static int ** func_102(unsigned char p_103, short p_104, int * p_105);
static unsigned short func_106(int * p_107, unsigned p_108, int p_109, int ** p_110);
static int * func_111(unsigned p_112);
static short func_122(short p_123, int ** p_124, unsigned short p_125);
static int ** func_126(int * p_127, short p_128, unsigned p_129, int ** p_130);
static unsigned func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = &l_2;
    int l_971 = 4L;
    int *l_972 = (void*)0;
    int l_973 = 1L;
    (*l_4) = l_2;
    if ((safe_unary_minus_func_uint16_t_u(((safe_add_func_int16_t_s_s(func_8((4294967289UL & ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((1UL || ((g_3 ^ g_3) || ((+(safe_sub_func_int32_t_s_s((*l_2), (**l_4)))) <= g_3))), (0x0A9B27FAL >= ((&l_2 != g_23) ^ (*l_2))))), g_3)), 4)), (*l_2))) >= 0xC14AL)), (**l_4), &l_2, g_3), (-1L))) > 1UL))))
    {
        (*g_24) |= 0xEF6F1AC2L;
    }
    else
    {
        int l_89 = 1L;
        (**l_4) = func_83(g_79, (*g_23), l_89, (*l_2), &l_89);
    }
    l_973 ^= ((safe_div_func_uint8_t_u_u(((((*l_2) || (safe_div_func_uint32_t_u_u(func_96(&g_24, func_102(g_200, g_203, (*l_4)), g_688, l_971, &g_24), g_312))) >= g_200) > g_200), g_551)) || g_923);
    (*l_4) = (*l_4);
    return g_80;
}







static short func_8(unsigned char p_9, char p_10, int ** p_11, int p_12)
{
    int *l_25 = &g_3;
    int *l_26 = &g_3;
    int *l_27 = &g_3;
    int *l_28 = (void*)0;
    int l_29 = 0x66EF3B06L;
    int *l_30 = &l_29;
    int *l_31 = &g_3;
    int *l_32 = &g_3;
    int *l_33 = &l_29;
    int l_34 = 0x8AAC1E0FL;
    int *l_35 = &l_29;
    int *l_36 = &g_3;
    int *l_37 = &l_34;
    int *l_38 = &l_34;
    int *l_39 = (void*)0;
    int *l_40 = (void*)0;
    int *l_41 = &l_34;
    int *l_42 = (void*)0;
    int *l_43 = &l_29;
    int *l_44 = &l_29;
    int *l_45 = &l_29;
    int *l_46 = &l_29;
    int *l_47 = (void*)0;
    int *l_48 = (void*)0;
    int *l_49 = &l_29;
    int l_50 = 1L;
    int *l_51 = (void*)0;
    int l_52 = 0L;
    int *l_53 = &l_52;
    int *l_54 = &l_34;
    int *l_55 = (void*)0;
    int l_56 = 0xFEED1B4BL;
    int *l_57 = &l_29;
    int *l_58 = &g_3;
    int l_59 = 1L;
    int *l_60 = &g_3;
    int *l_61 = (void*)0;
    int *l_62 = &l_59;
    int l_63 = (-6L);
    int *l_64 = &l_29;
    int *l_65 = &l_34;
    int *l_66 = &l_52;
    int *l_67 = &l_56;
    int *l_68 = &l_56;
    int l_69 = 0xA2F725DCL;
    int *l_70 = &l_52;
    int l_71 = 0x77F0A061L;
    int *l_72 = &l_69;
    int *l_73 = &l_69;
    int *l_74 = &l_50;
    int *l_75 = &l_52;
    int *l_76 = &l_34;
    int *l_77 = (void*)0;
    int *l_78 = &l_56;
    g_80++;
    return g_80;
}







static int func_83(int p_84, int * p_85, unsigned p_86, unsigned p_87, int * p_88)
{
    char l_704 = 0xF7L;
    int *l_712 = &g_688;
    short l_742 = 0xE72FL;
    (*g_23) = func_90((safe_lshift_func_int8_t_s_s(func_96(func_102((func_106(func_111(p_87), p_87, l_704, &p_88) & 0L), (g_23 != g_132), l_712), &l_712, l_742, l_704, g_132), p_84)), p_84, p_85);
    return (**g_132);
}







static int * func_90(unsigned p_91, int p_92, int * p_93)
{
    unsigned l_928 = 0UL;
    unsigned l_944 = 1UL;
    int *l_956 = &g_415;
    for (g_375 = 28; (g_375 > (-10)); g_375 = safe_sub_func_int8_t_s_s(g_375, 8))
    {
        unsigned short l_932 = 8UL;
        int **l_939 = &g_24;
        unsigned l_940 = 0xCE2E2E6CL;
        int l_955 = 0xA3EE318FL;
        (*g_24) = (**g_23);
        (*p_93) &= (((((l_928 && l_928) & ((safe_div_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(l_932)), l_932)) > (g_617 < (g_690 || (safe_mul_func_int8_t_s_s(g_551, g_327)))))) != ((safe_add_func_uint8_t_u_u(func_8((safe_sub_func_int32_t_s_s(((void*)0 != l_939), 0L)), p_92, &g_24, (**l_939)), 0x4BL)) < l_940)) || (-9L)) > g_242);
        if (func_96(func_102(((0x086BL < g_381) || (safe_unary_minus_func_uint32_t_u((safe_mul_func_uint16_t_u_u(((((l_944 || l_944) > (safe_mul_func_uint8_t_u_u(l_944, (safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_92, (safe_mul_func_uint16_t_u_u(g_242, ((*g_132) != (void*)0))))), (**g_132))) || p_92), l_955))))) != 0xF95CL) == g_406), 9L))))), p_92, p_93), l_939, p_92, (**l_939), &g_24))
        {
            return l_956;
        }
        else
        {
            int l_965 = 0x755083ACL;
            (*g_24) = (p_91 < ((safe_rshift_func_uint8_t_u_u(g_312, ((-9L) > (safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(((p_92 < g_415) <= ((l_965 <= ((*l_956) < (*l_956))) <= (p_92 == l_965))), g_375)), 0x3B53F3C6L))))) == p_92));
        }
    }
    return (*g_132);
}







static char func_96(int ** p_97, int ** p_98, int p_99, int p_100, int ** p_101)
{
    int *l_743 = &g_688;
    int *l_744 = (void*)0;
    int *l_745 = &g_138;
    int *l_746 = (void*)0;
    int *l_747 = &g_200;
    int *l_748 = (void*)0;
    int *l_749 = &g_138;
    int *l_750 = &g_200;
    int *l_751 = &g_688;
    int *l_752 = (void*)0;
    int *l_753 = &g_200;
    int *l_754 = &g_200;
    int *l_755 = &g_200;
    int *l_756 = &g_200;
    int *l_757 = (void*)0;
    int *l_758 = &g_415;
    int *l_759 = &g_138;
    int *l_760 = &g_617;
    int *l_761 = (void*)0;
    int *l_762 = &g_617;
    int *l_763 = (void*)0;
    int *l_764 = &g_617;
    int *l_765 = &g_3;
    int *l_766 = &g_138;
    int *l_767 = &g_3;
    int *l_768 = &g_406;
    int *l_769 = &g_406;
    int l_770 = 1L;
    int *l_771 = &g_406;
    int *l_772 = &g_688;
    int *l_773 = &g_688;
    int *l_774 = &g_617;
    int *l_775 = &g_138;
    unsigned l_776 = 4294967287UL;
    int *l_779 = &g_138;
    int *l_780 = &g_138;
    int *l_781 = &g_3;
    int *l_782 = (void*)0;
    int *l_783 = &g_688;
    int *l_784 = &g_617;
    int *l_785 = &g_3;
    int *l_786 = &g_406;
    int *l_787 = (void*)0;
    int *l_788 = &g_415;
    int *l_789 = &g_200;
    int *l_790 = &g_415;
    int *l_791 = &g_617;
    int *l_792 = &g_617;
    int *l_793 = &l_770;
    int *l_794 = &g_138;
    int *l_795 = &g_617;
    int *l_796 = (void*)0;
    int *l_797 = &g_688;
    int *l_798 = &g_138;
    int *l_799 = &g_138;
    int *l_800 = &g_415;
    int *l_801 = &g_3;
    int *l_802 = &l_770;
    int *l_803 = &g_406;
    int *l_804 = &g_406;
    int *l_805 = &g_617;
    int *l_806 = &g_3;
    int *l_807 = &g_406;
    int *l_808 = (void*)0;
    int *l_809 = &l_770;
    int *l_810 = (void*)0;
    int *l_811 = &g_200;
    int *l_812 = &l_770;
    int *l_813 = &g_200;
    int *l_814 = &g_688;
    int l_815 = (-1L);
    int *l_816 = (void*)0;
    int *l_817 = &g_3;
    int *l_818 = &g_3;
    int l_819 = 0x1C129C33L;
    int *l_820 = &g_3;
    int *l_821 = &l_770;
    int *l_822 = (void*)0;
    int *l_823 = (void*)0;
    int *l_824 = &g_688;
    int *l_825 = &l_819;
    int *l_826 = &g_688;
    int *l_827 = &g_406;
    int *l_828 = &g_3;
    int l_829 = 0xD6E51601L;
    int *l_830 = &g_3;
    int *l_831 = &g_406;
    int *l_832 = (void*)0;
    int *l_833 = &g_688;
    int l_834 = 0xB1ACD26AL;
    int *l_835 = (void*)0;
    int l_836 = 1L;
    int *l_837 = &l_815;
    int *l_838 = &l_834;
    int *l_839 = &l_770;
    int *l_840 = &g_200;
    int *l_841 = (void*)0;
    int *l_842 = &l_834;
    int *l_843 = (void*)0;
    int l_844 = 9L;
    int *l_845 = &g_406;
    int *l_846 = (void*)0;
    int *l_847 = &g_415;
    int *l_848 = &g_415;
    int *l_849 = &g_138;
    int *l_850 = &l_834;
    int *l_851 = &g_415;
    int *l_852 = &g_415;
    int *l_853 = &g_3;
    int *l_854 = (void*)0;
    int *l_855 = (void*)0;
    int *l_856 = &l_829;
    int *l_857 = &l_770;
    short l_858 = 0x5091L;
    int l_859 = 0xB93EAB8DL;
    int *l_860 = &g_415;
    int *l_861 = &g_138;
    int *l_862 = (void*)0;
    int l_863 = 0L;
    int *l_864 = &l_834;
    int *l_865 = &l_844;
    int *l_866 = &g_138;
    int *l_867 = &l_834;
    int l_868 = (-2L);
    int *l_869 = &l_829;
    int *l_870 = (void*)0;
    int *l_871 = &g_3;
    int *l_872 = (void*)0;
    int *l_873 = &l_834;
    int *l_874 = (void*)0;
    int *l_875 = (void*)0;
    int *l_876 = (void*)0;
    int l_877 = (-6L);
    int *l_878 = &l_859;
    int *l_879 = &l_877;
    int *l_880 = &l_770;
    int *l_881 = &l_819;
    int *l_882 = &l_859;
    int *l_883 = &g_200;
    int *l_884 = (void*)0;
    int *l_885 = (void*)0;
    int l_886 = 0xF8167146L;
    int *l_887 = &l_834;
    int *l_888 = &l_844;
    int l_889 = 0L;
    int *l_890 = (void*)0;
    int *l_891 = &l_819;
    int *l_892 = (void*)0;
    int *l_893 = &l_819;
    int *l_894 = (void*)0;
    int *l_895 = &g_688;
    int l_896 = 0x0DB132F7L;
    int *l_897 = &g_406;
    int *l_898 = &l_863;
    int l_899 = 0x8B33212FL;
    int *l_900 = &l_877;
    int *l_901 = &g_688;
    int *l_902 = (void*)0;
    int *l_903 = &l_815;
    int *l_904 = (void*)0;
    int *l_905 = &g_200;
    int *l_906 = &l_829;
    int l_907 = 0x908F47E5L;
    int *l_908 = &l_877;
    int *l_909 = &l_907;
    int l_910 = (-1L);
    int *l_911 = &g_3;
    int *l_912 = &l_819;
    int *l_913 = (void*)0;
    int *l_914 = &l_834;
    int *l_915 = &l_907;
    int *l_916 = (void*)0;
    int *l_917 = &l_815;
    int *l_918 = &l_910;
    int *l_919 = &l_907;
    int *l_920 = &l_859;
    int *l_921 = (void*)0;
    int l_922 = 1L;
    l_776++;
    ++g_923;
    (*g_132) = (*p_98);
    return g_79;
}







static int ** func_102(unsigned char p_103, short p_104, int * p_105)
{
    short l_713 = 0xE8ADL;
    int l_714 = (-8L);
    int l_715 = 0x01A70457L;
    char l_716 = 0L;
    int l_717 = 0x5C516F00L;
    int *l_718 = &g_688;
    int *l_719 = &g_617;
    int *l_720 = &g_617;
    int l_721 = (-1L);
    int *l_722 = (void*)0;
    int *l_723 = &g_688;
    int *l_724 = &g_406;
    int *l_725 = &l_717;
    int *l_726 = &g_688;
    int *l_727 = &l_715;
    int *l_728 = &g_3;
    int *l_729 = &l_721;
    int l_730 = 1L;
    int *l_731 = &l_714;
    int l_732 = 1L;
    int *l_733 = &l_730;
    int *l_734 = (void*)0;
    int *l_735 = &l_730;
    int *l_736 = &l_717;
    int l_737 = (-1L);
    int *l_738 = &l_737;
    unsigned short l_739 = 65534UL;
    (*p_105) = (p_104 ^ l_713);
    --l_739;
    return &g_24;
}







static unsigned short func_106(int * p_107, unsigned p_108, int p_109, int ** p_110)
{
    unsigned l_707 = 0x0D65FEBDL;
    int *l_710 = &g_138;
    int **l_711 = (void*)0;
    (**p_110) &= (safe_rshift_func_uint16_t_u_s((0x11D7L && l_707), (safe_mul_func_uint8_t_u_u(p_108, (g_375 != (g_242 || p_108))))));
    (**p_110) ^= ((&g_24 != &p_107) ^ (*l_710));
    return g_562;
}







static int * func_111(unsigned p_112)
{
    char l_119 = 0x4EL;
    int *l_131 = &g_3;
    int *l_616 = &g_617;
    unsigned short l_637 = 0x73B8L;
    int l_641 = 0xBB163505L;
    int l_658 = 0x44A4B080L;
    int l_659 = 0x46068BCCL;
    unsigned char l_701 = 1UL;
    (*l_616) ^= (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_79, 1)), (safe_div_func_int32_t_s_s((+l_119), (safe_mod_func_int16_t_s_s(func_122(g_80, func_126(l_131, (&l_131 != g_132), (*l_131), &g_24), p_112), g_200))))));
    (*l_616) = p_112;
    for (g_617 = (-23); (g_617 <= 14); g_617++)
    {
        int l_620 = (-9L);
        g_3 |= l_620;
    }
    for (g_562 = 19; (g_562 == 50); g_562 = safe_add_func_int16_t_s_s(g_562, 1))
    {
        unsigned short l_634 = 0x7243L;
        int l_649 = 2L;
        int l_663 = 0x929365FEL;
        int l_667 = 0x367607D2L;
        int l_670 = 0x4F0B97A4L;
        l_637 &= ((*l_616) | (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(g_242, (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((((+(safe_unary_minus_func_uint8_t_u(0xB7L))) > (!(l_634 <= func_8(p_112, (*l_131), &l_131, (safe_add_func_uint8_t_u_u(0UL, 0x48L)))))) >= 0L) & g_327), p_112)), p_112)))) != 0xAA1E2436L), g_312)), 0xFAFD4301L)));
        if ((*l_131))
        {
            int l_638 = 0xD7828956L;
            int *l_639 = &g_617;
            int *l_640 = &g_415;
            int *l_642 = &l_641;
            int *l_643 = &l_638;
            int *l_644 = &g_138;
            int *l_645 = &g_415;
            int *l_646 = &l_641;
            int *l_647 = &g_617;
            int *l_648 = &g_415;
            int *l_650 = &g_617;
            int *l_651 = &g_406;
            int *l_652 = &l_649;
            int *l_653 = &g_3;
            int *l_654 = (void*)0;
            int *l_655 = (void*)0;
            int *l_656 = &g_200;
            int *l_657 = &l_649;
            int *l_660 = (void*)0;
            int *l_661 = &l_649;
            int *l_662 = (void*)0;
            int *l_664 = &l_659;
            int *l_665 = &g_138;
            int *l_666 = &g_138;
            int *l_668 = (void*)0;
            int *l_669 = &l_667;
            int *l_671 = (void*)0;
            int *l_672 = &l_667;
            int *l_673 = &l_649;
            int *l_674 = &g_415;
            int *l_675 = &l_659;
            int *l_676 = &l_670;
            int *l_677 = &l_658;
            int *l_678 = &l_658;
            int *l_679 = &l_658;
            int *l_680 = &l_638;
            int *l_681 = &g_617;
            int *l_682 = &g_406;
            int *l_683 = &l_638;
            int *l_684 = (void*)0;
            int *l_685 = &g_3;
            int *l_686 = (void*)0;
            int *l_687 = &l_663;
            int *l_689 = &l_649;
            if (l_638)
                break;
            g_690++;
        }
        else
        {
            char l_699 = (-9L);
            short l_700 = 1L;
            for (l_658 = 0; (l_658 >= (-29)); l_658 = safe_sub_func_int16_t_s_s(l_658, 9))
            {
                (*g_23) = (void*)0;
                if (p_112)
                    break;
            }
            (*l_131) &= 0x45276D52L;
            (*l_616) ^= (safe_mul_func_int16_t_s_s(g_327, 0L));
            (*l_131) = ((safe_div_func_uint8_t_u_u(l_701, p_112)) > (l_663 == ((((safe_rshift_func_uint16_t_u_s((g_242 <= g_310), p_112)) || p_112) ^ l_700) ^ (*l_131))));
        }
    }
    return (*g_132);
}







static short func_122(short p_123, int ** p_124, unsigned short p_125)
{
    int l_166 = 0L;
    int **l_173 = &g_24;
    int l_219 = 0x6DA80F5DL;
    int l_226 = (-1L);
    int l_294 = 0x3F8B2FE2L;
    int l_315 = (-1L);
    unsigned char l_336 = 0xDDL;
    short l_352 = 0L;
    if (func_8(((l_166 || (p_125 && (safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_3 ^ l_166), 4)), 1UL)))) & p_123), g_80, l_173, p_125))
    {
        unsigned char l_174 = 0x5CL;
        return l_174;
    }
    else
    {
        int *l_176 = &g_138;
        int *l_177 = &g_138;
        int *l_178 = &g_3;
        int *l_179 = (void*)0;
        int *l_180 = &g_138;
        int *l_181 = &g_3;
        int *l_182 = &g_3;
        int *l_183 = &g_3;
        int *l_184 = &g_138;
        int l_185 = 0x7F92971DL;
        int *l_186 = &g_3;
        int *l_187 = &g_138;
        int *l_188 = &g_138;
        int *l_189 = &l_185;
        int *l_190 = (void*)0;
        int *l_191 = &g_138;
        int *l_192 = &g_3;
        int *l_193 = &g_138;
        int *l_194 = (void*)0;
        int *l_195 = &g_3;
        int *l_196 = (void*)0;
        int *l_197 = &l_185;
        int *l_198 = &l_185;
        int *l_199 = &g_138;
        int *l_201 = (void*)0;
        int l_202 = 0L;
        unsigned char l_446 = 0UL;
        int l_552 = (-1L);
        unsigned short l_583 = 0UL;
        unsigned l_585 = 0UL;
        (*g_24) = (safe_unary_minus_func_uint8_t_u(g_3));
        g_203++;
        if ((**p_124))
        {
            int *l_206 = &l_185;
            int *l_207 = &g_3;
            int *l_208 = &l_202;
            int *l_209 = &g_200;
            int *l_210 = &l_185;
            int *l_211 = &l_202;
            int *l_212 = &l_202;
            int *l_213 = &l_185;
            int *l_214 = &l_202;
            int *l_215 = &g_200;
            int *l_216 = (void*)0;
            int *l_217 = &l_185;
            int *l_218 = &g_3;
            int *l_220 = &g_3;
            int *l_221 = &l_219;
            int *l_222 = &g_3;
            int *l_223 = &g_138;
            int *l_224 = &g_3;
            int *l_225 = &g_200;
            int l_227 = 0x751B8D99L;
            int *l_228 = &g_3;
            int *l_229 = &l_226;
            int *l_230 = (void*)0;
            int *l_231 = &l_227;
            int *l_232 = &l_202;
            int *l_233 = (void*)0;
            int *l_234 = &g_3;
            int *l_235 = &l_219;
            int *l_236 = &g_3;
            int *l_237 = &l_227;
            int *l_238 = (void*)0;
            int *l_239 = &g_138;
            int *l_240 = (void*)0;
            int *l_241 = &l_219;
            --g_242;
        }
        else
        {
            int l_254 = 0x285608B9L;
            int l_255 = 0x98692F7AL;
            int l_305 = 0x140D4900L;
            int l_316 = 0xB6903EB4L;
            int *l_342 = &l_202;
            unsigned char l_343 = 0xC5L;
            unsigned l_447 = 0UL;
            if ((safe_rshift_func_int16_t_s_u(((*g_24) > (safe_mul_func_int16_t_s_s(0x59F1L, (safe_mul_func_int16_t_s_s(((void*)0 != (*g_23)), g_3))))), (safe_lshift_func_uint8_t_u_u(((**l_173) >= (((void*)0 == p_124) | (g_242 == 0xA1L))), g_138)))))
            {
                int *l_253 = (void*)0;
                int *l_256 = (void*)0;
                int *l_257 = &g_3;
                int *l_258 = &g_3;
                int *l_259 = &g_200;
                int *l_260 = &g_200;
                int l_261 = 0xBCBAD6A7L;
                int *l_262 = &g_3;
                int *l_263 = &l_261;
                int *l_264 = &l_261;
                int *l_265 = &g_3;
                int *l_266 = &l_255;
                int *l_267 = &l_226;
                int *l_268 = (void*)0;
                int *l_269 = &l_261;
                int *l_270 = (void*)0;
                int *l_271 = &l_219;
                int *l_272 = (void*)0;
                int *l_273 = &l_261;
                int *l_274 = &g_3;
                int *l_275 = &g_200;
                int l_276 = 0xB67B2045L;
                int *l_277 = &g_200;
                int *l_278 = &l_219;
                int *l_279 = (void*)0;
                int *l_280 = &g_138;
                int *l_281 = &l_185;
                int *l_282 = (void*)0;
                int *l_283 = &l_255;
                int *l_284 = &l_202;
                int *l_285 = (void*)0;
                int *l_286 = &l_185;
                int *l_287 = (void*)0;
                int *l_288 = (void*)0;
                int *l_289 = &g_200;
                int *l_290 = (void*)0;
                int *l_291 = &g_138;
                int *l_292 = (void*)0;
                int *l_293 = &l_276;
                int *l_295 = &g_3;
                int *l_296 = &l_294;
                int *l_297 = &l_219;
                int *l_298 = &l_255;
                int *l_299 = &g_200;
                int *l_300 = &g_138;
                int *l_301 = (void*)0;
                int *l_302 = &l_185;
                int *l_303 = &l_185;
                int *l_304 = (void*)0;
                int l_306 = 0xE95A862BL;
                int *l_307 = &l_306;
                int *l_308 = (void*)0;
                int *l_309 = (void*)0;
                int *l_311 = &g_3;
                int *l_317 = &g_3;
                int *l_318 = &l_202;
                int *l_319 = &l_202;
                int *l_320 = &l_315;
                int *l_321 = &l_219;
                int *l_322 = &l_276;
                int *l_323 = (void*)0;
                int *l_324 = &l_219;
                int *l_325 = &g_3;
                int *l_326 = &l_226;
                (*p_124) = l_253;
                --g_312;
                (*l_173) = (*l_173);
                g_327++;
            }
            else
            {
                for (l_315 = 0; (l_315 <= 25); ++l_315)
                {
                    (*l_192) = ((safe_mul_func_uint16_t_u_u(65535UL, (**l_173))) <= (-9L));
                    for (l_166 = (-15); (l_166 >= 21); l_166 = safe_add_func_uint16_t_u_u(l_166, 3))
                    {
                        l_336++;
                    }
                    if ((**p_124))
                    {
                        (*l_176) = (p_125 >= (**l_173));
                        return p_125;
                    }
                    else
                    {
                        return p_123;
                    }
                }
                (*g_132) = (*g_132);
            }
            for (l_294 = (-11); (l_294 < 1); l_294 = safe_add_func_uint32_t_u_u(l_294, 8))
            {
                short l_355 = 7L;
                int l_387 = 0x47D80A4BL;
                int l_486 = (-7L);
                int l_527 = 0xEC56E480L;
            }
            for (g_375 = 0; (g_375 != 25); g_375 = safe_add_func_uint16_t_u_u(g_375, 7))
            {
                int **l_594 = &l_197;
                (*l_177) ^= func_8((safe_rshift_func_int8_t_s_s(((void*)0 == (*l_173)), p_125)), (+(safe_rshift_func_int8_t_s_s(0x3FL, 5))), p_124, (safe_mod_func_uint32_t_u_u((p_125 | p_123), func_8((*l_186), p_125, l_594, (**l_594)))));
                (*l_192) = l_352;
                (*l_181) ^= (safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((**l_594), (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(0xA2L, 2)), g_551)))), (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_8((p_125 >= ((safe_mod_func_uint16_t_u_u(0x61AEL, (*l_342))) > (safe_rshift_func_uint16_t_u_s(((func_8((*l_342), g_415, &l_342, g_615) > 0x34D324B5L) >= 0x95L), 13)))), p_123, &g_24, (*l_342)), p_125)), g_200)), 3)))), 1UL));
            }
        }
        return g_406;
    }
}







static int ** func_126(int * p_127, short p_128, unsigned p_129, int ** p_130)
{
    char l_135 = 0x59L;
    int l_160 = 0x0E41E6F7L;
    unsigned short l_162 = 0xAF00L;
    int **l_165 = &g_24;
    if ((safe_div_func_uint16_t_u_u(g_3, l_135)))
    {
        int l_136 = 0xE1F6DC3DL;
        int *l_137 = &g_138;
        (*l_137) ^= (l_136 || (l_135 == g_3));
        (*p_130) = (*p_130);
        (*l_137) &= ((safe_lshift_func_uint8_t_u_s(p_129, 2)) > (**p_130));
    }
    else
    {
        int *l_141 = &g_138;
        int *l_142 = &g_3;
        int *l_143 = &g_3;
        int *l_144 = &g_3;
        int *l_145 = &g_3;
        int *l_146 = &g_138;
        int *l_147 = &g_3;
        int *l_148 = (void*)0;
        int *l_149 = (void*)0;
        int *l_150 = &g_3;
        int *l_151 = (void*)0;
        int *l_152 = (void*)0;
        int *l_153 = &g_138;
        int *l_154 = &g_138;
        int *l_155 = &g_138;
        int *l_156 = &g_3;
        int *l_157 = &g_138;
        int *l_158 = (void*)0;
        int *l_159 = &g_138;
        int *l_161 = &l_160;
        l_162--;
        return l_165;
    }
    return l_165;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_551, "g_551", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_615, "g_615", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_923, "g_923", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
