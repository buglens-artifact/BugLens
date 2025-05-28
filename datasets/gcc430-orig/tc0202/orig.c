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



static short g_6 = (-1L);
static unsigned short g_23 = 0UL;
static int g_78 = (-3L);
static unsigned g_93 = 0xD242EC21L;
static char g_105 = 0xF5L;
static unsigned char g_127 = 254UL;
static unsigned short g_154 = 4UL;
static char *g_156 = (void*)0;
static unsigned g_160 = 0x9C988215L;
static unsigned short g_162 = 0x5B46L;
static int g_223 = (-5L);
static int *g_259 = (void*)0;
static int **g_258 = &g_259;
static unsigned g_275 = 0x93AF6F3CL;
static unsigned char g_313 = 0x3AL;
static unsigned g_322 = 0x3528B51CL;
static unsigned short g_359 = 65533UL;
static int g_367 = 0L;
static const unsigned short g_423 = 0xB18BL;
static int g_435 = 0L;
static short g_470 = 0xBD96L;
static unsigned char * const g_499 = &g_127;
static unsigned char * const *g_498 = &g_499;
static unsigned char g_502 = 0xBAL;
static short g_593 = 8L;
static unsigned short *g_618 = &g_359;
static char **g_664 = &g_156;
static char ***g_663 = &g_664;
static const int *g_719 = &g_367;
static const volatile char g_721 = 0x10L;
static volatile int g_723 = 0x1D4B1048L;
static unsigned short *g_738 = &g_359;
static int g_763 = 0x1255259EL;
static const unsigned char g_780 = 0x89L;
static int g_823 = 9L;
static int g_846 = (-1L);
static int ** const g_881 = (void*)0;
static int g_901 = 6L;



static char func_1(void);
static int func_2(unsigned char p_3, unsigned short p_4, short p_5);
static unsigned char func_16(unsigned p_17, unsigned p_18, unsigned short p_19, unsigned p_20, unsigned char p_21);
static int func_24(const unsigned short p_25, short p_26, int p_27, unsigned p_28, unsigned short * p_29);
static char func_38(const char p_39, unsigned p_40, unsigned short * p_41, int p_42, short p_43);
static unsigned short func_46(unsigned short * p_47, unsigned short * p_48);
static unsigned short * func_49(short p_50, unsigned char p_51);
static unsigned short * func_55(unsigned p_56);
static short func_66(unsigned short * p_67, const unsigned char p_68, const unsigned p_69, unsigned short p_70, unsigned p_71);
static unsigned short * func_73(const unsigned short * p_74);
static char func_1(void)
{
    unsigned char l_12 = 1UL;
    int l_13 = 0x552BF338L;
    unsigned short *l_22 = &g_23;
    int *l_900 = &g_901;
    int * const l_902 = &g_367;
    int **l_903 = &g_259;
    unsigned short l_916 = 0x1959L;
    (*l_900) &= (((func_2(g_6, ((((safe_div_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((-1L))), ((l_12 = g_6) & l_13))) , (0x15546710L >= (safe_sub_func_int16_t_s_s(0xBC04L, (func_16(((0x2735L && l_12) <= ((*l_22) = l_12)), l_13, g_6, l_12, g_6) , 0x27A9L))))), (-5L))) > g_6) | l_13) >= g_435), g_435) != 5L) | l_13) >= l_13);
    (*l_903) = l_902;
    (*g_259) = ((safe_mod_func_uint32_t_u_u((!(safe_rshift_func_int8_t_s_u(0x09L, 7))), ((((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((-1L), (safe_rshift_func_uint16_t_u_u(((*g_618) ^= (((**l_903) < (**g_498)) >= (((**l_903) > ((*l_22) = ((+(func_38((**l_903), (g_322 = (*l_900)), func_73(&g_154), (**l_903), (*l_900)) , (-1L))) == (*l_900)))) , l_916))), (**l_903))))) , (*l_902)), (*g_499))) && 0L) && g_78) , 0xF45F0988L))) > g_470);
    return (*l_902);
}







static int func_2(unsigned char p_3, unsigned short p_4, short p_5)
{
    int *l_884 = &g_763;
    int **l_883 = &l_884;
    int ***l_882 = &l_883;
    char ****l_890 = &g_663;
    char *****l_889 = &l_890;
    int l_891 = (-1L);
    int *l_898 = (void*)0;
    int *l_899 = &l_891;
    (*l_882) = g_881;
    (*l_899) = (((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((((((*l_889) = &g_663) == (void*)0) > l_891) == ((safe_mod_func_uint16_t_u_u(((*g_618) = p_5), 2L)) , (*g_719))), (func_38((safe_add_func_int8_t_s_s((!(safe_sub_func_uint8_t_u_u(func_38(l_891, g_6, &g_23, p_4, g_823), (*g_499)))), p_4)), g_593, &g_162, p_5, l_891) & l_891))), p_3)) | p_4) , p_3);
    return (*g_719);
}







static unsigned char func_16(unsigned p_17, unsigned p_18, unsigned short p_19, unsigned p_20, unsigned char p_21)
{
    unsigned l_52 = 0UL;
    unsigned short *l_782 = &g_359;
    int l_786 = 0xB68C28CFL;
    int l_787 = 0xF0F328F2L;
    int *l_844 = (void*)0;
    int *l_845 = &g_846;
    char l_876 = 8L;
    unsigned short **l_877 = &l_782;
    int *l_880 = &g_846;
    if (((*l_845) ^= func_24(g_6, ((void*)0 == &g_23), (((((l_786 &= (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((1UL | (~((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(0x3765L, ((func_38(((((safe_sub_func_int16_t_s_s((((g_23 && 1L) ^ func_46(func_49(l_52, l_52), &g_359)) && 0x4BEAC0CDL), 0UL)) > p_19) || g_162) , 0x09L), l_52, l_782, g_435, p_19) <= (-1L)) < 0x2FE71DF8L))), l_52)) , (*g_618)))), l_52)), g_423))) , l_52) || 6UL) ^ g_435) , p_17), l_787, &g_359)))
    {
        int *l_861 = (void*)0;
        int *l_862 = &g_763;
        unsigned short *l_863 = &g_154;
        unsigned short **l_864 = &l_782;
        int l_865 = (-1L);
        int l_868 = 0xF4D39C2DL;
        unsigned l_869 = 1UL;
        (*l_845) = ((p_19 >= (safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((((l_868 ^= (safe_add_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((*l_862) = 0x6905982FL) , (l_865 && (*g_719))), ((*l_845) & (safe_rshift_func_int16_t_s_u(func_38(l_865, p_20, &g_154, p_18, (*l_845)), p_20))))), (*g_738))) && (*l_845)) , p_18), (*l_845)))) , &l_868) == &l_865), 0xB8E7DEECL)), p_21)) | 0x6A75B5E4L), 7)) >= l_869), 4294967293UL))) , p_18);
        return (*l_845);
    }
    else
    {
        (*g_258) = &l_787;
    }
    (*g_259) = (safe_mod_func_uint32_t_u_u((g_322 = (~(((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((((((+p_21) == (*g_618)) < (1L != p_21)) > (~(g_162 ^= (*l_845)))) | (p_21 || func_38(p_17, g_78, ((*l_845) , l_782), g_367, (*l_845)))), l_876)), p_17)) , 6UL) <= p_17))), 0x263F13B1L));
    l_845 = (*g_258);
    (*l_880) = ((*l_845) = (p_20 || (safe_div_func_int32_t_s_s(func_46(&p_19, &g_162), 0x7D9A2666L))));
    return (*l_880);
}







static int func_24(const unsigned short p_25, short p_26, int p_27, unsigned p_28, unsigned short * p_29)
{
    int *l_790 = (void*)0;
    int *l_791 = &g_78;
    unsigned short *l_792 = &g_359;
    unsigned char *l_799 = &g_313;
    unsigned char **l_798 = &l_799;
    unsigned char ***l_797 = &l_798;
    unsigned short *l_802 = &g_23;
    const int l_813 = 0xC07C09C4L;
    char *l_833 = &g_105;
    (*l_791) |= ((safe_lshift_func_uint8_t_u_u(p_28, (*g_499))) > ((-7L) ^ (*p_29)));
    if (((((*l_791) , (1L < (~(((safe_rshift_func_uint16_t_u_s((*l_791), 8)) , ((*g_499) = ((0xD2L != (((l_797 = l_797) == (void*)0) != ((*l_802) ^= ((safe_add_func_uint16_t_u_u((*p_29), (*p_29))) , (*g_738))))) != 1UL))) >= 250UL)))) < p_28) >= (*g_719)))
    {
        int *l_803 = &g_223;
        char *l_811 = &g_105;
        char **l_812 = &l_811;
        int *l_814 = &g_367;
        l_803 = ((*g_258) = (l_791 = l_803));
        (*l_814) ^= ((0x9EL <= ((safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_u(p_25, (safe_rshift_func_uint16_t_u_u((((p_26 = (1UL != 0x90L)) < (((((*l_803) = p_27) & (((((*g_499) = 0x9EL) , p_28) == (255UL != (((*l_812) = l_811) == l_799))) , (*g_499))) > 0x68453B83L) != g_162)) ^ p_27), l_813)))))) == g_435)) <= p_28);
    }
    else
    {
        unsigned l_819 = 0UL;
        int * const l_822 = &g_823;
        int * const *l_821 = &l_822;
        int * const **l_820 = &l_821;
        int l_824 = 0x86B30EAFL;
        (*l_791) = p_28;
        for (g_78 = (-15); (g_78 < 13); g_78 = safe_add_func_uint8_t_u_u(g_78, 1))
        {
            unsigned short l_817 = 65528UL;
            int **l_818 = &l_791;
            p_27 |= l_817;
            (*l_818) = ((*g_258) = &g_223);
            (*g_258) = (void*)0;
            if (l_819)
                continue;
        }
        if (((*l_791) = ((&g_259 == ((*l_820) = &l_791)) != (l_824 && 0x17L))))
        {
            (*g_258) = &p_27;
        }
        else
        {
            int *l_827 = &g_823;
            char *l_834 = &g_105;
            if ((safe_sub_func_uint32_t_u_u((~g_502), (*g_719))))
            {
                char *l_832 = &g_105;
                int l_835 = 1L;
                (*g_258) = l_827;
                (*l_791) = ((*l_822) = (safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((g_502 != (l_835 = (l_832 == (l_834 = l_833)))), p_26)), (safe_lshift_func_uint16_t_u_u(((*l_802) = ((*g_738) = ((p_26 , ((1L & func_46(&g_162, p_29)) , (***l_820))) || p_28))), 11)))));
            }
            else
            {
                unsigned short *l_840 = (void*)0;
                unsigned char ****l_841 = &l_797;
                int l_842 = 0xC8AA3ACEL;
                unsigned short *l_843 = &g_154;
                (***l_820) = func_38(((p_27 , ((safe_rshift_func_int16_t_s_s((~g_780), (*l_791))) > (*g_499))) < (*l_791)), g_160, p_29, p_28, g_723);
            }
        }
    }
    return p_27;
}







static char func_38(const char p_39, unsigned p_40, unsigned short * p_41, int p_42, short p_43)
{
    const int *l_783 = &g_435;
    const int *l_784 = (void*)0;
    int *l_785 = &g_223;
    l_784 = l_783;
    (*l_785) = (+(*g_719));
    return p_39;
}







static unsigned short func_46(unsigned short * p_47, unsigned short * p_48)
{
    char l_549 = (-1L);
    int l_632 = (-1L);
    char ***l_678 = &g_664;
    int l_691 = 0x125EB47CL;
    int l_734 = 0x306BCA2BL;
    unsigned l_749 = 4294967294UL;
    int l_750 = 8L;
    int *l_751 = &g_367;
    unsigned short *l_766 = &g_162;
    int l_769 = (-2L);
    short *l_778 = (void*)0;
    short *l_779 = &g_470;
    int *l_781 = &l_691;
    if (l_549)
    {
        short *l_551 = &g_6;
        short **l_550 = &l_551;
        const int l_574 = 0L;
        char *l_586 = &g_105;
        char **l_588 = &l_586;
        char ***l_587 = &l_588;
        short *l_589 = &g_470;
        short *l_590 = (void*)0;
        short *l_591 = (void*)0;
        short *l_592 = &g_593;
        unsigned char l_594 = 251UL;
        int *l_595 = &g_435;
        int *l_596 = &g_223;
        int *l_597 = &g_367;
        int *l_598 = &g_78;
    }
    else
    {
        volatile int *l_722 = &g_723;
        int l_728 = (-4L);
        char l_729 = 0x1CL;
        unsigned *l_730 = (void*)0;
        unsigned *l_731 = &g_322;
        int l_735 = 0x9EC6F0FBL;
        (*l_722) = g_721;
        (*l_722) = ((safe_lshift_func_uint16_t_u_s((*l_722), (safe_div_func_int16_t_s_s(((((*l_731) = (((0x2555L || ((*p_48) >= g_367)) , g_154) | l_729)) , (-2L)) , l_729), l_632)))) || l_691);
        (*g_258) = (((*l_722) , ((**g_498) = (((safe_lshift_func_uint8_t_u_s(((g_313 , (l_734 == g_359)) != l_691), 3)) && 0xD1B3L) > l_735))) , (*g_258));
        (*g_258) = (void*)0;
    }
    if (((safe_sub_func_uint16_t_u_u(l_734, (((func_66(g_738, ((l_734 <= ((*l_751) = ((((*g_499) = (l_632 | l_734)) == ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((l_734 == (l_632 == ((safe_lshift_func_uint8_t_u_s(((l_691 ^= (*g_719)) ^ ((l_750 = (safe_rshift_func_int8_t_s_s(l_734, l_749))) & 0xDC08434AL)), 6)) && l_549))), g_313)), l_734)), 0)) , l_750)) && 5UL))) , (*g_499)), g_435, (*p_47), l_549) && (*l_751)) , (*l_751)) > 0x7648CBB0L))) ^ 0x0E41L))
    {
        (*l_751) = (*l_751);
    }
    else
    {
        short l_752 = 0xC31DL;
        int ** const l_753 = &l_751;
        unsigned short **l_758 = (void*)0;
        unsigned char *l_759 = &g_313;
        int l_760 = 0x99F832D6L;
        char *l_761 = &g_105;
        char *l_762 = &l_549;
        (**l_753) = (((*l_751) & 4294967295UL) < (*g_499));
        return (**l_753);
    }
    (*l_781) |= (safe_lshift_func_uint8_t_u_s((((*l_766) ^= ((*l_751) && 0xB7F9L)) | (*l_751)), 2));
    return (*g_738);
}







static unsigned short * func_49(short p_50, unsigned char p_51)
{
    unsigned char l_63 = 0xCEL;
    const unsigned short *l_72 = &g_23;
    int *l_534 = &g_435;
    unsigned short *l_537 = &g_23;
    char l_548 = 0x93L;
    for (p_50 = 8; (p_50 == (-24)); p_50 = safe_sub_func_int8_t_s_s(p_50, 5))
    {
        unsigned short *l_82 = &g_23;
        int l_368 = (-5L);
        unsigned short **l_530 = (void*)0;
        unsigned short **l_531 = &l_82;
        int *l_532 = &g_435;
        char *l_533 = &g_105;
    }
    (*g_258) = (((((((p_51 & func_66(l_537, (safe_sub_func_int8_t_s_s(((g_223 != (*l_534)) | (safe_sub_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((*g_499), 7)) <= (~(**g_498))), (((**g_498) , ((safe_add_func_int8_t_s_s(p_50, (p_51 , g_502))) , (*l_534))) > 0x198DL))) == (*l_534)), g_502))), (*g_499))), p_51, (*l_534), (*l_534))) , (*l_534)) != l_548) | (*l_534)) & p_50) && g_105) , &g_78);
    (*g_258) = (*g_258);
    (*g_258) = (void*)0;
    return l_537;
}







static unsigned short * func_55(unsigned p_56)
{
    unsigned char l_369 = 0x5AL;
    char l_436 = 1L;
    char l_443 = 0xC8L;
    const int *l_466 = &g_78;
    const unsigned short *l_477 = &g_154;
    int l_486 = (-9L);
    unsigned short * const l_523 = &g_154;
    char **l_527 = (void*)0;
    int *l_528 = &g_223;
    unsigned short *l_529 = &g_23;
    if (l_369)
    {
        unsigned short *l_380 = &g_359;
        for (l_369 = 0; (l_369 > 52); ++l_369)
        {
            unsigned short *l_374 = &g_154;
            int *l_375 = (void*)0;
            int *l_376 = &g_78;
            int *l_377 = (void*)0;
            int *l_378 = (void*)0;
            int *l_379 = &g_223;
            (*l_379) = ((*l_376) = (g_127 < (safe_div_func_uint16_t_u_u(0xB099L, ((*l_374) = (~0xA21FL))))));
            (*g_258) = l_375;
        }
        return l_380;
    }
    else
    {
        int l_385 = 1L;
        int l_405 = 0x8ADA6E78L;
        unsigned char *l_419 = &g_313;
        int *l_420 = &g_223;
        char l_428 = 0x27L;
        int l_482 = 1L;
        unsigned *l_484 = (void*)0;
        char *l_526 = &l_443;
        for (g_223 = 19; (g_223 >= 27); g_223 = safe_add_func_int16_t_s_s(g_223, 4))
        {
            char **l_390 = &g_156;
            int l_399 = (-10L);
            unsigned char *l_402 = &g_313;
            unsigned char *l_403 = &l_369;
            unsigned short *l_404 = &g_359;
            int *l_406 = (void*)0;
            int *l_407 = &g_367;
            (*l_407) = ((safe_sub_func_int32_t_s_s((l_405 &= ((((p_56 == g_127) , l_385) <= (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((void*)0 == l_390), ((safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u((~((*l_404) = (((((*l_403) = ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_399, l_369)), ((*l_402) = (((safe_lshift_func_int8_t_s_u((0UL > l_385), 4)) >= l_369) > g_127)))) , l_399)) , l_399) || p_56) <= l_385))), l_385)), l_385)) , l_399))), 0x4CL))) || g_223)), l_385)) , 0xF0B41B17L);
        }
        if (((*l_420) = (g_78 && (safe_div_func_uint32_t_u_u(((g_367 & (safe_unary_minus_func_int32_t_s(g_223))) >= ((*l_419) = ((p_56 > ((safe_sub_func_uint16_t_u_u(((void*)0 == &p_56), (safe_rshift_func_int16_t_s_u(l_405, (safe_rshift_func_uint16_t_u_s(l_405, p_56)))))) != p_56)) & g_162))), p_56)))))
        {
            const unsigned short *l_422 = &g_423;
            const unsigned short **l_421 = &l_422;
            unsigned *l_444 = &g_93;
            int l_445 = 0xBBBA7349L;
            (*l_420) &= (l_436 , (-10L));
            (*l_420) = (((*l_444) |= ((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s((&g_322 != ((g_359 == (&g_259 != &g_259)) , &p_56)), 1)) ^ ((safe_sub_func_int32_t_s_s(p_56, p_56)) ^ l_443)) > g_6), g_6)) < (-8L))) , l_445);
            for (g_322 = 19; (g_322 == 40); g_322++)
            {
                (*l_420) &= 0L;
                (*l_420) |= (safe_mod_func_int8_t_s_s((~p_56), p_56));
            }
        }
        else
        {
            char **l_450 = &g_156;
            int *l_451 = &g_78;
            unsigned char l_460 = 0x26L;
            int l_514 = 0xE9CB992BL;
            (*l_451) = (((l_450 != (void*)0) , l_451) == &g_78);
            for (g_162 = (-3); (g_162 != 43); g_162 = safe_add_func_int16_t_s_s(g_162, 9))
            {
                int *l_465 = &g_78;
                short *l_479 = &g_470;
                unsigned *l_485 = &g_275;
                unsigned char * const l_501 = &g_502;
                unsigned char * const *l_500 = &l_501;
                short *l_513 = &g_470;
                for (g_359 = 0; (g_359 == 9); g_359++)
                {
                    const int **l_467 = &l_466;
                    int l_468 = 0xD9A1E7A3L;
                    short *l_469 = &g_470;
                    unsigned *l_471 = &g_275;
                    short **l_492 = &l_479;
                    char *l_493 = (void*)0;
                    char *l_494 = (void*)0;
                    char *l_495 = &l_436;
                    int *l_496 = &l_405;
                    int *l_497 = &l_486;
                    unsigned char * const **l_503 = &g_498;
                    if ((((!(safe_sub_func_int16_t_s_s((((*l_471) ^= ((((safe_sub_func_int8_t_s_s((g_154 != l_460), (safe_add_func_int16_t_s_s(((*l_469) = ((safe_rshift_func_uint8_t_u_u((p_56 < (l_468 = (l_465 != ((*l_467) = l_466)))), (*l_451))) == 1L)), ((*l_465) , (*l_465)))))) ^ p_56) & p_56) || (*l_466))) >= 0x93F2EAD4L), 65531UL))) < 0UL) & p_56))
                    {
                        short **l_478 = &l_469;
                        int l_483 = (-1L);
                        (*l_467) = &g_223;
                        (*l_467) = (((!((((249UL && (-1L)) , ((((*l_451) > (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(0xECL)), (p_56 | (p_56 || ((*l_469) = p_56)))))) <= g_275) | (p_56 , g_367))) | 0x54FB94F2L) , p_56)) >= 255UL) , (*l_467));
                        (*l_451) = (safe_div_func_int16_t_s_s(((((*l_478) = func_73(func_73(l_477))) != l_479) | ((+(safe_add_func_uint32_t_u_u(l_482, (!(p_56 , (l_483 != ((l_484 = &p_56) == l_485))))))) <= g_23)), g_322));
                        (*l_467) = (*l_467);
                    }
                    else
                    {
                        unsigned short l_487 = 2UL;
                        l_486 = ((void*)0 != &g_275);
                        g_367 &= ((*l_420) = l_487);
                    }
                    (*l_497) &= ((*l_496) |= (safe_rshift_func_int16_t_s_u((((*l_451) = ((safe_rshift_func_int8_t_s_u((*l_451), (*l_465))) < (((*l_495) = (((0UL > (**l_467)) , l_477) == ((*l_492) = (void*)0))) , ((**l_467) | g_127)))) > l_443), g_275)));
                    (*l_465) = ((void*)0 == l_451);
                    (*l_503) = (l_500 = g_498);
                }
                (*l_420) = (l_514 &= ((~(*l_420)) | (safe_rshift_func_int16_t_s_s(p_56, (((g_423 ^ (+((*l_513) ^= ((*l_465) , (safe_add_func_int32_t_s_s(((g_359 , p_56) || (safe_add_func_uint32_t_u_u((*l_466), ((((p_56 , (safe_unary_minus_func_uint32_t_u(((safe_div_func_int32_t_s_s(((0x1FDEC486L & 0x4773F131L) <= 0x5D14L), 0x2B3ADCD4L)) != 0x1D188F84L)))) < p_56) ^ (*l_451)) <= p_56)))), 0xED4D990BL)))))) && 0x0FL) <= 0x3536DD34L)))));
                (*g_258) = ((safe_rshift_func_uint16_t_u_u((p_56 | ((*l_451) ^ (*l_420))), p_56)) , &l_405);
            }
        }
        (*l_420) = ((safe_div_func_int32_t_s_s(((*l_466) >= ((g_470 , (*l_420)) <= (g_423 , (safe_mod_func_uint32_t_u_u((((*l_466) , l_523) == (((safe_lshift_func_uint16_t_u_s((&g_162 == (((*l_526) = p_56) , l_477)), 12)) ^ g_223) , (void*)0)), g_160))))), g_127)) , p_56);
    }
    (*l_528) = ((*l_466) && ((void*)0 != l_527));
    (*l_528) = 0xBD49BB3FL;
    return l_529;
}







static short func_66(unsigned short * p_67, const unsigned char p_68, const unsigned p_69, unsigned short p_70, unsigned p_71)
{
    int l_91 = 0L;
    unsigned *l_92 = (void*)0;
    unsigned short *l_96 = &g_23;
    int l_98 = 1L;
    int *l_145 = &g_78;
    char *l_155 = &g_105;
    int l_199 = 0x78255715L;
    int l_220 = 0x2AB72F02L;
    char **l_338 = &l_155;
    char ***l_337 = &l_338;
    unsigned char l_366 = 0xEFL;
    if (((((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_div_func_int32_t_s_s(((&g_78 == (void*)0) > ((safe_mod_func_uint32_t_u_u((g_93 = l_91), (safe_div_func_int32_t_s_s(l_91, ((*p_67) && (*p_67)))))) >= p_68)), (-10L))) , 4294967295UL), 5L)), 0x0C5262C0L)) ^ 0x0227CDBAL) , g_78) <= 0x8243C00EL))
    {
        int l_97 = 0xDFA37A4CL;
        int *l_99 = &g_78;
        l_98 &= ((l_96 != &g_23) < (g_23 & l_97));
        (*l_99) = 0xA59A115EL;
        for (l_91 = (-14); (l_91 > (-22)); l_91 = safe_sub_func_int8_t_s_s(l_91, 2))
        {
            char *l_104 = &g_105;
            int l_109 = 0L;
            int l_128 = 8L;
            if ((safe_rshift_func_int8_t_s_u(((*l_104) = (!p_70)), g_23)))
            {
                const int l_125 = (-1L);
                for (g_78 = 19; (g_78 < (-29)); --g_78)
                {
                    int *l_108 = &l_97;
                    (*l_108) &= g_78;
                    if (p_70)
                        break;
                    if (l_109)
                        continue;
                }
                for (p_70 = 9; (p_70 < 60); p_70 = safe_add_func_uint32_t_u_u(p_70, 5))
                {
                    int *l_117 = &l_109;
                    unsigned char l_120 = 0UL;
                    unsigned char *l_126 = &g_127;
                    int *l_129 = &l_97;
                    (*l_99) &= (safe_div_func_int32_t_s_s((&g_93 == l_92), 0x589AA37CL));
                    (*l_129) &= (((l_98 = g_78) >= (safe_unary_minus_func_int8_t_s((((((*l_117) = (l_109 | (*p_67))) != (((((safe_mod_func_uint32_t_u_u(p_69, 4294967288UL)) != (((*l_104) = (l_120 | ((((((safe_div_func_uint8_t_u_u(((*l_126) ^= ((safe_div_func_uint32_t_u_u(g_105, g_105)) != l_125)), p_70)) <= g_93) <= g_105) != p_71) , 247UL) || 0xCFL))) | (-10L))) >= l_128) , p_70) > g_6)) || p_68) ^ 0UL)))) == g_78);
                    (*l_129) = (safe_rshift_func_uint16_t_u_s(((*l_99) >= (+(safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(l_91, l_125)), (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((p_69 == 0xC1L), 0xEABEL)), g_93)))))), 12));
                }
            }
            else
            {
                int **l_140 = &l_99;
                (*l_140) = &l_98;
                (*l_99) = (!((*p_67) , g_105));
                if (g_105)
                    continue;
                for (l_128 = 0; (l_128 == (-24)); l_128--)
                {
                    (*l_140) = &l_97;
                }
            }
            if (g_78)
                continue;
        }
    }
    else
    {
        int *l_143 = (void*)0;
        int **l_144 = &l_143;
        (*l_144) = l_143;
    }
    (*l_145) ^= 0L;
    if (p_68)
    {
        int **l_146 = &l_145;
        unsigned short *l_153 = &g_154;
        int *l_157 = &l_98;
        int l_188 = 0x5B946158L;
        unsigned l_302 = 18446744073709551615UL;
        char **l_316 = &l_155;
        (*l_146) = &g_78;
        (*l_157) |= ((!((safe_mod_func_uint8_t_u_u(((((*l_145) != g_78) < (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(p_71, g_105)), (((*l_153) = (*p_67)) != (g_23 & (((!g_127) > ((*l_145) ^ ((g_156 = l_155) != (void*)0))) == 0x643A3154L)))))) | (*l_145)), g_23)) < (*p_67))) | 6L);
        if ((*l_157))
        {
            char l_170 = 0xD1L;
            int l_177 = 0xB08B8FBAL;
            int l_187 = (-3L);
            unsigned l_195 = 4UL;
            unsigned l_247 = 0x248B4876L;
            if (p_68)
            {
                unsigned l_161 = 1UL;
                for (p_71 = 0; (p_71 == 34); p_71++)
                {
                    l_161 &= ((~g_160) , (((*l_146) = &l_98) == (void*)0));
                    g_162 &= g_78;
                }
                (**l_146) ^= 0x0CA50A4BL;
            }
            else
            {
                int *l_171 = &g_78;
                int l_201 = 0L;
                char *l_209 = &g_105;
                char **l_232 = &g_156;
                unsigned *l_248 = &g_93;
                for (g_160 = 0; (g_160 >= 16); g_160 = safe_add_func_uint16_t_u_u(g_160, 4))
                {
                    unsigned l_167 = 0xD1E7CDF6L;
                    int * const l_172 = &l_98;
                    int l_200 = (-8L);
                    if ((safe_add_func_uint32_t_u_u((p_68 ^ (((*l_155) = p_69) , (l_167 , (safe_add_func_uint32_t_u_u(0x1EC27738L, l_170))))), (((((**l_146) , l_171) == l_172) == (*l_171)) & 4294967288UL))))
                    {
                        unsigned char *l_176 = &g_127;
                        int l_178 = 0x48C28241L;
                        (*l_157) |= (safe_lshift_func_uint16_t_u_s(((*l_153) = (((safe_unary_minus_func_int32_t_s(0x911152ACL)) || (((*l_176) = l_170) >= (**l_146))) != (l_177 | l_178))), 5));
                        (*l_145) = ((((((((-1L) == ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(g_6, ((((*l_176) = 251UL) & ((&l_170 == (void*)0) && ((*l_172) & g_105))) == (safe_rshift_func_uint8_t_u_s((0x9DL && (((safe_add_func_uint8_t_u_u(1UL, g_23)) , 247UL) ^ (*g_156))), (*l_145)))))), g_93)) ^ 1L)) || l_187) == (-1L)) || 9L) ^ 65526UL) && l_188) > p_68);
                        (*l_172) ^= g_105;
                    }
                    else
                    {
                        int *l_189 = (void*)0;
                        l_189 = l_189;
                        (**l_146) = (*l_171);
                        if ((*l_171))
                            continue;
                    }
                    for (p_71 = 25; (p_71 > 52); p_71 = safe_add_func_uint8_t_u_u(p_71, 5))
                    {
                        unsigned char l_192 = 0UL;
                        l_192 = p_68;
                        (*l_172) = p_68;
                        (*l_146) = &g_78;
                        (**l_146) = p_68;
                    }
                    l_201 |= ((((safe_sub_func_int32_t_s_s(((**l_146) &= ((void*)0 == &g_127)), l_195)) != ((*g_156) = ((((safe_mod_func_int8_t_s_s(p_70, g_162)) ^ (safe_unary_minus_func_int8_t_s(l_187))) | (g_154 ^ (((*p_67) || (p_70 <= l_199)) <= p_70))) <= l_200))) != g_162) , (-1L));
                }
                for (l_98 = (-29); (l_98 < (-18)); l_98 = safe_add_func_int8_t_s_s(l_98, 2))
                {
                    unsigned char *l_208 = &g_127;
                    unsigned char **l_207 = &l_208;
                    int *l_229 = &l_199;
                    for (l_188 = 0; (l_188 <= (-30)); l_188 = safe_sub_func_uint16_t_u_u(l_188, 1))
                    {
                        int *l_206 = &l_201;
                        (*l_146) = &g_78;
                        l_171 = (p_68 , ((*l_146) = &l_201));
                        (*l_146) = l_206;
                    }
                }
                (**l_146) = (safe_lshift_func_uint16_t_u_u(((*l_145) <= ((l_209 == ((*l_232) = &l_170)) || (safe_mod_func_uint16_t_u_u(((*l_153) = (safe_lshift_func_uint8_t_u_s(((p_71 = (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((*p_67), (safe_lshift_func_int16_t_s_u((*l_157), ((((((((*g_156) < (((*l_248) = (safe_mod_func_int32_t_s_s(((void*)0 != &l_170), (safe_mod_func_uint16_t_u_u(((void*)0 == &g_127), l_247))))) <= 0x6DE6BA9EL)) , g_154) , g_160) && l_177) >= 65533UL) | (*l_145)) < g_105))))), 2)) && g_162) && p_69)) && (*l_171)), (**l_146)))), (*p_67))))), l_187));
                (**l_146) &= (-1L);
            }
        }
        else
        {
            const unsigned char l_262 = 2UL;
            unsigned short **l_280 = &l_153;
            int l_284 = 0xF13E21F9L;
            int l_309 = 0x1E9C62E2L;
            for (g_160 = (-29); (g_160 == 60); ++g_160)
            {
                unsigned l_255 = 0x73D7E6F4L;
                int **l_260 = &g_259;
                if (((*l_157) = ((*l_157) , (p_71 && p_71))))
                {
                    unsigned char *l_256 = (void*)0;
                    unsigned char *l_257 = &g_127;
                    int *l_261 = &g_223;
                    (*l_146) = &g_223;
                    (*l_146) = &g_78;
                    (*l_261) |= (safe_rshift_func_int16_t_s_u(g_78, (p_69 <= (p_69 >= (((*l_157) |= (((void*)0 == &g_105) , (((safe_sub_func_uint8_t_u_u(((*l_257) = l_255), (l_255 == p_70))) | (g_258 != l_260)) != 0x0FL))) >= p_70)))));
                }
                else
                {
                    unsigned l_265 = 18446744073709551608UL;
                    int **l_270 = &l_145;
                    (*l_157) &= l_262;
                    (*l_260) = ((*l_146) = ((safe_lshift_func_uint16_t_u_u((g_78 <= ((((*l_145) && g_162) , (*p_67)) ^ (g_223 , (-1L)))), g_127)) , ((+p_69) , &l_199)));
                    (**l_260) |= l_265;
                    if ((((p_71 , (1L | g_93)) != (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((((p_69 <= (**l_260)) >= 0x6AL) < ((*l_153) = l_265)), l_262)) | ((void*)0 != l_270)), p_70))) || g_154))
                    {
                        int l_273 = 0x8D49564CL;
                        unsigned char *l_274 = (void*)0;
                        unsigned short *l_278 = &g_154;
                        (**l_260) |= ((g_23 | (g_162 ^= g_93)) < (safe_add_func_uint8_t_u_u((g_275 = l_273), ((safe_lshift_func_uint16_t_u_u(((void*)0 == l_278), 6)) <= g_23))));
                        return p_69;
                    }
                    else
                    {
                        (*g_259) = (**g_258);
                        if ((**l_270))
                            break;
                        if (l_262)
                            goto lbl_334;
                        (*g_258) = (*g_258);
                    }
                }
            }
lbl_334:
            if ((l_284 = (((safe_unary_minus_func_int16_t_s(((*l_145) | (((p_68 , ((*l_280) = (l_96 = &p_70))) != ((*l_145) , &g_162)) > (((((safe_div_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s((*l_157))) >= (&p_68 != (void*)0)), (+l_262))) , (*g_156)) ^ (*g_156)) & g_78) || (-7L)))))) && (*p_67)) && 4294967294UL)))
            {
                unsigned short l_291 = 65535UL;
                unsigned char *l_312 = &g_313;
                unsigned short l_325 = 1UL;
                unsigned *l_328 = &g_93;
                unsigned short *l_333 = &g_154;
                if (p_69)
                {
                    (*g_258) = &l_199;
                    (*l_157) ^= (*g_259);
                    (*l_146) = &l_284;
                }
                else
                {
                    unsigned char *l_287 = (void*)0;
                    unsigned char *l_288 = &g_127;
                    int l_294 = 0L;
                    unsigned *l_295 = &g_93;
                    (*l_145) = ((((*l_288) = ((safe_div_func_int8_t_s_s(p_69, l_262)) < 0L)) > ((l_291 < (p_68 <= ((*l_295) = (((*l_145) , l_291) && ((safe_add_func_int32_t_s_s(((((l_294 , g_223) && l_291) < g_223) & 0x51721C39L), (-1L))) , (*l_145)))))) , 0x9FL)) < 250UL);
                    return g_78;
                }
                for (l_91 = 0; (l_91 > (-27)); --l_91)
                {
                    (**g_258) = (safe_mul_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((*l_145), (*p_67))) & (*l_145)) && (*l_157)), ((**g_258) >= (((l_302 && (p_70 < (g_93 >= p_68))) <= p_69) , 0L))));
                    (*l_157) ^= (*g_259);
                }
                if ((((safe_add_func_uint16_t_u_u((((*l_157) != (safe_sub_func_int16_t_s_s(g_160, (safe_sub_func_int32_t_s_s(((g_127 ^ ((*l_155) &= l_309)) , ((**l_146) = (*l_145))), (l_199 , (safe_add_func_uint8_t_u_u(((*l_312) |= 0xADL), (g_154 | (((l_309 , (void*)0) != (void*)0) < 1L)))))))))) , 0x58EDL), p_71)) || 3UL) && l_262))
                {
                    (*l_157) &= (*g_259);
                    (**l_146) = 0xF6F4CCFCL;
                }
                else
                {
                    char ***l_317 = &l_316;
                    for (g_93 = 0; (g_93 < 11); g_93 = safe_add_func_uint32_t_u_u(g_93, 1))
                    {
                        (*g_258) = (void*)0;
                        return p_68;
                    }
                    (*l_317) = l_316;
                }
                (**l_146) = (safe_mod_func_uint16_t_u_u(((**l_280) &= g_275), (safe_mod_func_uint8_t_u_u((g_313 & ((((l_291 , (g_322 = l_291)) <= (safe_div_func_uint32_t_u_u(l_325, (safe_lshift_func_uint16_t_u_s(((l_262 , ((*l_328) = 4294967293UL)) && (((*l_145) != ((*l_333) = (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(p_68, 0x7DL)), 2)))) | 0xAAL)), 5))))) && 5L) | l_262)), 0x4DL))));
            }
            else
            {
lbl_353:
                (*l_157) = 0xEF44D4CAL;
            }
            (*l_146) = (*g_258);
            for (g_162 = 0; (g_162 != 52); g_162 = safe_add_func_int8_t_s_s(g_162, 7))
            {
                char ***l_339 = &l_316;
                unsigned l_349 = 18446744073709551615UL;
                int *l_356 = &l_284;
                (*l_157) |= (0x5AE937EEL < (g_154 == (*g_156)));
                if (l_309)
                {
                    (*l_157) ^= p_69;
                }
                else
                {
                    (*g_258) = (*l_146);
                }
                if (p_69)
                {
                    unsigned char l_348 = 0xB6L;
                    (*g_258) = &l_284;
                    (*l_157) &= p_68;
                    if ((l_337 == l_339))
                    {
                        unsigned char l_352 = 0x2BL;
                        (*g_259) = (0x5A86L & (p_69 <= (-4L)));
                        (*l_157) &= (safe_mod_func_uint8_t_u_u(((((safe_add_func_uint32_t_u_u((p_71 = g_322), 0xF09860C6L)) != ((p_69 >= ((**g_258) = (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_348, (l_349 , g_322))), 0xB8L)))) | (safe_rshift_func_int16_t_s_u(p_70, l_352)))) | (*g_156)) , p_70), (*g_156)));
                        if (l_352)
                            goto lbl_353;
                        (*l_146) = (*g_258);
                    }
                    else
                    {
                        unsigned short l_354 = 0x4AABL;
                        int l_355 = 0xBA408216L;
                        if (p_68)
                            break;
                        g_223 |= (**g_258);
                        (*l_157) = ((*g_259) = 1L);
                        l_355 = l_354;
                    }
                }
                else
                {
                    l_356 = &l_284;
                }
            }
        }
    }
    else
    {
        for (g_105 = 0; (g_105 == (-11)); g_105 = safe_sub_func_uint16_t_u_u(g_105, 5))
        {
            (*l_145) |= g_359;
            if (p_71)
                continue;
        }
        (*g_258) = (*g_258);
    }
    g_367 &= (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((0xC8CDL >= (safe_rshift_func_uint16_t_u_s((*p_67), 6))), ((l_366 != p_69) , 255UL))) || p_70), 2));
    return g_275;
}







static unsigned short * func_73(const unsigned short * p_74)
{
    char l_75 = 0x76L;
    int *l_76 = (void*)0;
    int *l_77 = &g_78;
    unsigned short *l_79 = &g_23;
    (*l_77) = l_75;
    return l_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_359, "g_359", print_hash_value);
    transparent_crc(g_367, "g_367", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    transparent_crc(g_901, "g_901", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
