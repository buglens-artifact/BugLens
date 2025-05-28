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



static unsigned short g_7 = 0x7D21L;
static int g_16 = 0xBA47C9D5L;
static int g_21 = 1L;
static int *g_20 = &g_21;
static short g_43 = 0L;
static short g_54 = 0x4102L;
static short *g_53 = &g_54;
static char g_75 = 1L;
static char g_81 = (-8L);
static unsigned char g_84 = 1UL;
static unsigned long long g_86 = 0x7828E972CE3C4897LL;
static const int g_87 = 0x3CE724D2L;
static int g_95 = 0L;
static unsigned char g_129 = 0x06L;
static int g_131 = 4L;
static char g_138 = 8L;
static int g_153 = 4L;
static char g_190 = 1L;
static const unsigned char g_212 = 0x10L;
static unsigned g_249 = 0xF33D140EL;
static unsigned long long *g_269 = &g_86;
static int **g_320 = &g_20;
static int ***g_319 = &g_320;
static unsigned short g_339 = 3UL;
static unsigned short g_406 = 0x0828L;
static unsigned long long g_409 = 1UL;
static unsigned short *g_483 = &g_7;
static unsigned short ** const g_482 = &g_483;



static char func_1(void);
static const unsigned long long func_2(int p_3, char p_4, unsigned p_5, unsigned short p_6);
static long long func_10(short p_11, int p_12, unsigned long long p_13);
static int func_17(int * p_18, const unsigned p_19);
static short func_28(int * p_29, unsigned char p_30, int * p_31);
static int * func_32(int * p_33, const int * p_34, int * p_35, unsigned char p_36);
static int * func_37(unsigned short p_38, int * p_39, short p_40, char p_41);
static int * func_44(short * p_45, unsigned p_46, const short p_47, short p_48, short * p_49);
static short * func_50(short * p_51, const int * p_52);
static short func_55(int p_56, int p_57, const short * p_58);
static char func_1(void)
{
    char l_14 = 0xF5L;
    int *l_191 = &g_153;
    int l_473 = 4L;
    int *l_474 = &g_21;
    unsigned l_475 = 0UL;
    unsigned short *l_484 = &g_339;
    unsigned short l_498 = 4UL;
    int *l_499 = (void*)0;
    l_473 &= (((func_2(g_7, (safe_div_func_int8_t_s_s((func_10(l_14, l_14, g_7) >= ((!((*l_191) = func_17(g_20, l_14))) , (l_14 >= g_87))), g_7)), l_14, l_14) & 18446744073709551613UL) || 9UL) < l_14);


    ;
    (*l_474) = (&l_14 != &l_14);
    (*l_474) = (~((((+l_475) ^ ((safe_div_func_int16_t_s_s((*g_53), (safe_lshift_func_uint8_t_u_s((~((*l_474) , (9L || ((*g_269) , g_129)))), g_84)))) == 0xE9L)) > (*l_474)) && 0x98L));
    l_473 |= (((*g_269) = (*g_269)) , ((safe_add_func_int64_t_s_s((((g_482 != (void*)0) ^ (((*l_484) ^= ((*g_483) = (**g_482))) , (safe_div_func_uint8_t_u_u(((((safe_unary_minus_func_int8_t_s(g_16)) <= (safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((((((*l_474) | (safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*l_474), (((*g_53) &= 0x1B62L) >= ((-1L) <= (*l_474))))), 0xCEL)), (*l_474)))) && (**g_482)) <= (*l_474)) & (*g_483)) , (*l_474)) , (*g_269)), 7L)), 0xBF4B3F0954D9DFAALL))) , 1L) , l_498), 1UL)))) != (*l_474)), (*l_474))) >= 0xD9E3838CL));
    return g_54;
}







static const unsigned long long func_2(int p_3, char p_4, unsigned p_5, unsigned short p_6)
{
    unsigned short l_196 = 1UL;
    int *l_201 = &g_153;
    short *l_206 = &g_43;
    const unsigned char *l_211 = &g_212;
    long long l_214 = 0x2E7E9FB3AEF0CFF6LL;
    short l_221 = 0xE7EEL;
    const short *l_225 = &g_54;
    const short **l_224 = &l_225;
    long long l_252 = 8L;
    long long l_298 = (-1L);
    unsigned l_308 = 0xF3D79FE8L;
    int *l_327 = &g_95;
    const unsigned l_366 = 0x4FC0DB7EL;
    unsigned short *l_426 = &g_339;
    unsigned short **l_425 = &l_426;
    unsigned *l_467 = &g_249;
    p_3 |= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(l_196, 3)), 4));
    if (((((g_54 != ((*g_53) ^ 65535UL)) | 18446744073709551615UL) == (safe_sub_func_int64_t_s_s((255UL > (safe_add_func_uint32_t_u_u(p_5, l_196))), p_3))) , 0xA1C6E988L))
    {
        unsigned char *l_210 = &g_129;
        unsigned char **l_209 = &l_210;
        int l_213 = (-6L);
        char *l_215 = (void*)0;
        char *l_216 = (void*)0;
        char *l_217 = &g_138;
        int l_218 = (-1L);
        const short ***l_226 = &l_224;
        short *l_227 = &g_43;
        int **l_228 = &g_20;
        unsigned long long * const l_237 = &g_86;
        int l_301 = (-9L);
        long long l_315 = (-2L);
        int *l_383 = &g_153;
        unsigned long long l_385 = 0x64643FC71EBCF204LL;
        unsigned long long **l_416 = (void*)0;
        unsigned long long **l_417 = (void*)0;
        unsigned long long **l_418 = &g_269;
        long long *l_427 = (void*)0;
        long long *l_428 = &l_315;
        long long *l_429 = (void*)0;
        long long *l_430 = (void*)0;
        long long *l_431 = &l_252;
        int *l_432 = (void*)0;
        (*g_20) = (g_84 , (p_3 | (((*l_209) = ((l_196 | (l_196 && (-1L))) , &g_84)) == (l_211 = &g_129))));

        ;
        ;
        l_218 |= ((((&g_7 != (void*)0) <= l_213) < ((*l_217) &= (p_3 < ((g_54 || (g_21 , l_214)) || l_213)))) <= g_190);
        if (((**l_228) = (((((safe_div_func_uint64_t_u_u(l_221, (safe_rshift_func_uint8_t_u_s(((+((((*l_226) = l_224) == &g_53) > (l_218 || l_221))) == 0xB7L), g_21)))) & (**l_228)) , (**l_228)) , 0x22L) , (*g_20))))
        {
            short *l_229 = (void*)0;
            int l_234 = 0L;
            unsigned short *l_236 = (void*)0;
            unsigned short **l_235 = &l_236;
            unsigned char *l_238 = &g_129;
            unsigned short *l_239 = &g_7;
            (*l_228) = func_44(((p_6 || ((**l_209) = (**l_228))) , l_229), ((safe_unary_minus_func_int64_t_s(func_10(l_196, (((247UL <= (&g_16 == (func_55((safe_unary_minus_func_uint16_t_u((((*l_239) |= (safe_sub_func_int64_t_s_s(l_234, (((*l_235) = &p_6) == (((*l_238) = (&g_86 != l_237)) , &p_6))))) == p_6))), l_196, (*l_224)) , (void*)0))) == p_5) < (*g_20)), g_86))) == g_81), p_5, p_3, l_227);

            ;
        }
        else
        {
            const int *l_241 = &l_213;
            const int **l_240 = &l_241;
            unsigned *l_248 = &g_249;
            int *l_273 = &l_218;
            short *l_299 = &g_43;
            short l_316 = 3L;
            const short *** const l_399 = &l_224;
            unsigned long long *l_412 = (void*)0;
            (*l_240) = &g_87;

            ;
            if ((safe_lshift_func_int16_t_s_s(((*l_206) &= (((**l_240) == ((func_10((safe_add_func_int32_t_s_s((&p_6 != &l_196), (safe_mod_func_int8_t_s_s((p_6 | ((*l_248) = 0x04BDE13CL)), (safe_mod_func_uint64_t_u_u(((l_252 , (func_55(g_21, (!0L), &g_54) & (**l_240))) , 18446744073709551606UL), g_21)))))), p_3, g_212) >= g_95) ^ 0xDBL)) > g_131)), (*g_53))))
            {
                int l_259 = (-5L);
                short l_268 = (-7L);
                const short *l_270 = &l_268;
                unsigned short *l_275 = (void*)0;
                unsigned short **l_274 = &l_275;
                if ((((((func_55(((func_28((l_196 , func_32((*l_228), (*l_228), (((((p_4 & (safe_add_func_uint32_t_u_u((((l_221 > ((*l_237) ^= (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(func_55(l_259, (safe_mod_func_uint16_t_u_u(0UL, ((0x5082C358F46018AELL > (((!(safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0x38L, p_4)), p_4)), 0x42L))) < (*g_20)) || 0x4B8FFC6A774E767BLL)) , p_6))), (*l_224)), p_4)), p_3)))) != 1UL) && (*l_241)), (*l_241)))) || 0xE0FD6618L) < p_4) , (**l_228)) , &g_95), l_268)), g_131, &g_21) , g_269) == (void*)0), p_6, l_270) <= p_5) < p_5) > 4L) && g_212) <= (-5L)))
                {
                    (*l_240) = ((*l_228) = &g_131);

                    ;
                    ;
                }
                else
                {
                    unsigned short l_278 = 0xC028L;
                    unsigned l_281 = 1UL;
                    const short *l_300 = (void*)0;
                    (*l_273) = ((0x9D9835C9L == (func_28(((*l_228) = l_273), g_190, &g_21) > (l_274 == ((p_3 > ((safe_sub_func_int32_t_s_s(l_278, (safe_div_func_int8_t_s_s(((&g_190 != (void*)0) , l_281), 0x4AL)))) | p_6)) , (void*)0)))) || g_129);
                    (*g_20) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_6, (safe_div_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(func_55((safe_mul_func_int16_t_s_s((*g_53), (((**l_209) = (safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u((0L && g_54), p_3)) || (*g_53)), l_278)), p_6))) != p_3))), p_5, &g_54), l_301)) , 65533UL), 0xA03CL)))), g_54));
                    (*g_20) = p_3;
                }

                ;
                ;
                if ((safe_rshift_func_int8_t_s_u((**l_228), 3)))
                {
                    (*l_240) = func_44(l_299, l_196, (safe_rshift_func_int16_t_s_u((*g_53), ((**l_228) = (p_6 , (safe_lshift_func_int16_t_s_u((0x7021L || (l_308 >= 65529UL)), p_3)))))), l_308, &g_54);

                    ;
                }
                else
                {
                    (**l_228) = (*g_20);
                }

                ;
                return (**l_228);
            }
            else
            {
                short l_317 = 0x401EL;
                int *l_371 = (void*)0;
                int *l_372 = &g_153;
                unsigned l_373 = 0x9B39C02DL;
                int l_374 = 0x1680D130L;
                int *l_378 = &l_218;
                (*g_20) &= p_6;
                if (((*g_20) = 0x810FF72CL))
                {
                    int ****l_321 = &g_319;
                    int ***l_323 = &g_320;
                    int ****l_322 = &l_323;
                    int ****l_324 = (void*)0;
                    int ***l_326 = &l_228;
                    int ****l_325 = &l_326;
                    unsigned short l_375 = 1UL;
                    if ((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_s(((**l_228) , (safe_div_func_int64_t_s_s(0x616D2739A248FCCALL, l_315))), (l_221 & ((((*l_248) = (**l_228)) ^ l_316) || p_6)))) <= ((((-2L) & p_5) , (*g_269)) >= (*g_269))), 4)) < g_86) && 7UL))
                    {
                        p_3 = (g_138 , l_317);
                    }
                    else
                    {
                        const unsigned l_318 = 4294967295UL;
                        return l_318;
                    }
                    if (((**l_228) = (((*l_321) = g_319) == ((*l_325) = ((*l_322) = &g_320)))))
                    {
                        char *l_336 = &g_75;
                        int l_352 = 0xDE0DAF64L;
                        char *l_357 = &g_81;
                        l_327 = (**g_319);
                        (**l_326) = (l_327 = (void*)0);

                        ;
                        ;
                        (*l_273) = func_55(g_21, (safe_mul_func_int8_t_s_s(g_7, ((p_5 , (safe_rshift_func_int16_t_s_u(func_55(g_138, ((safe_lshift_func_int8_t_s_s(((*l_336) = (((*l_206) = (l_317 , ((safe_mul_func_uint8_t_u_u(((**l_209) = (g_129 = 254UL)), 246UL)) | (((0xDD988B33L < ((*l_273) >= 0xE9C43DC7393B26D6LL)) >= 0x7BL) || g_131)))) != l_317)), p_6)) == 0xBAL), &g_54), g_16))) , 0x77L))), &g_54);
                        (*l_273) |= (safe_mod_func_int64_t_s_s((g_339 = g_84), ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((g_153 | (safe_mul_func_uint16_t_u_u((g_138 && (safe_mul_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(g_16, (safe_rshift_func_uint8_t_u_u(l_352, 0)))) == 0L), ((*l_336) ^= (safe_rshift_func_int16_t_s_u((*g_53), 11)))))), (safe_sub_func_uint16_t_u_u((((((*l_357) = (g_190 = (p_4 ^= (6UL > ((0xF63DL | (*g_53)) > 5L))))) == 1UL) , g_54) , p_4), p_6))))) >= 0xBADB3697223DDD05LL), 0)), g_16)) || g_153)));
                    }
                    else
                    {
                        char l_376 = 0x63L;
                        int l_377 = (-1L);
                        (*l_240) = ((***l_325) = (void*)0);

                        ;
                        ;
                        l_377 = ((((safe_div_func_uint64_t_u_u(p_4, (l_374 = func_55(g_54, (0xB5DE0DADF907BA93LL == (((safe_sub_func_int16_t_s_s((safe_div_func_int8_t_s_s(0xB2L, ((**l_209) = (safe_mul_func_int16_t_s_s((*g_53), l_366))))), ((func_10((safe_add_func_int32_t_s_s(l_317, (safe_rshift_func_int16_t_s_u(((l_371 != (l_372 = func_32((**g_319), (*l_228), (**g_319), (*l_273)))) >= 0x07L), 6)))), p_6, p_5) >= 4UL) && l_373))) >= p_5) , 9UL)), &l_316)))) , l_375) || l_376) , p_4);

                        ;
                    }

                    ;
                    ;
                    ;
                    ;
                    ;
                    return (*g_269);
                }
                else
                {
                    int *l_384 = (void*)0;
                    int l_386 = 0x4E5EDCD1L;
                    long long *l_404 = &l_214;
                    unsigned l_405 = 18446744073709551615UL;
                    unsigned long long *l_407 = &l_385;
                    unsigned long long *l_408 = &g_409;
                    l_378 = &p_3;

                    ;
                    l_386 &= ((*l_241) >= (safe_sub_func_uint32_t_u_u((((*l_327) = ((func_10(((***g_319) , (safe_add_func_int64_t_s_s(p_4, ((*g_269) < (**l_228))))), ((((*l_217) |= ((void*)0 == l_383)) , l_384) != (void*)0), (*g_269)) || 65535UL) > l_385)) >= p_5), g_153)));
                    (*l_327) = (safe_rshift_func_uint16_t_u_s(g_81, 0));
                    if (((safe_lshift_func_int8_t_s_s((p_4 == ((*g_269) <= ((*l_327) = ((*l_408) = ((*l_407) |= (safe_mul_func_int16_t_s_s(((*g_53) = (safe_add_func_uint16_t_u_u(func_10((safe_mul_func_uint16_t_u_u(((p_6 && (((*g_269) && (g_406 = ((-3L) >= ((**g_320) = (safe_rshift_func_uint8_t_u_u((&l_224 != ((((((((void*)0 == l_399) & (((((safe_mul_func_uint8_t_u_u((((*l_273) = (safe_sub_func_int64_t_s_s((((*l_404) |= p_3) | p_6), p_3))) , p_3), g_129)) || l_405) , 0xF1L) , g_131) > 1L)) == (*l_378)) & p_6) & 0x08L) <= g_54) , (void*)0)), 6)))))) ^ 5L)) == p_3), (**l_240))), p_5, p_3), p_5))), (*l_378)))))))), g_153)) , (*g_20)))
                    {
                        (*l_240) = (*g_320);

                        ;
                        (*l_378) |= p_6;
                    }
                    else
                    {
                        (*l_273) = ((*l_327) = (((*l_404) = p_3) != (l_407 != (((void*)0 == l_412) , g_269))));
                        (*l_240) = ((**g_319) = &p_3);

                        ;
                        ;
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
            (**g_320) |= (*l_273);
        }

        ;
        g_16 |= ((safe_mod_func_uint64_t_u_u(p_4, (safe_unary_minus_func_uint64_t_u(((p_3 , (!(((func_28(l_327, ((((3UL >= (((*l_418) = &g_409) != (void*)0)) & (safe_mul_func_int16_t_s_s((((safe_div_func_int64_t_s_s(((*l_431) = ((*l_428) = (safe_rshift_func_uint8_t_u_u(((*l_210) = (l_425 == (((*l_327) | (((*g_53) <= (**l_228)) & (*g_53))) , (void*)0))), p_3)))), g_153)) ^ 0x6BD7F7FBL) >= p_6), 0x4AC2L))) , 0xD76BB398669CBBF9LL) , p_4), (*g_320)) && (**l_228)) | p_5) > p_5))) == 0xED59L))))) == p_5);

        ;
        ;
    }
    else
    {
        char *l_449 = &g_75;
        int l_453 = 4L;
        for (g_131 = 16; (g_131 <= (-4)); g_131 = safe_sub_func_uint16_t_u_u(g_131, 8))
        {
            unsigned char l_448 = 0x06L;
            (*g_320) = &p_3;

            ;
            (*g_320) = (**g_319);
            for (g_406 = (-29); (g_406 >= 12); g_406 = safe_add_func_int64_t_s_s(g_406, 3))
            {
                char *l_447 = &g_75;
                char **l_446 = &l_447;
                int l_450 = 0xBF83AA05L;
                for (g_75 = (-10); (g_75 == (-18)); g_75 = safe_sub_func_int8_t_s_s(g_75, 3))
                {
                    return p_3;


                }
                if ((p_4 <= l_448))
                {
                    unsigned l_454 = 0x152DC2B9L;
                    unsigned long long *l_455 = &g_409;
                    (*g_320) = (*g_320);
                    (*g_20) = (((l_450 ^ (safe_add_func_uint16_t_u_u(((+(l_453 <= ((*g_269) |= 0xC9369D81151B42EBLL))) <= (**g_320)), 0UL))) ^ l_454) > ((*l_455) = 18446744073709551614UL));
                    (*l_327) |= ((p_5 || (safe_lshift_func_uint8_t_u_u(0x4BL, g_81))) >= ((*g_53) = (safe_div_func_int8_t_s_s((l_450 , 0x91L), ((*l_447) = 0xFFL)))));
                }
                else
                {
                    return p_3;


                }
            }
            (**g_319) = &p_3;
        }

        ;
    }

    ;
    ;
    ;
    (**g_320) = (safe_lshift_func_uint8_t_u_s(((g_95 , g_269) != ((g_212 || (18446744073709551615UL & ((*g_269) = ((safe_sub_func_int32_t_s_s(func_55(((*l_327) > func_10((*g_53), ((safe_unary_minus_func_uint32_t_u(((*l_467) |= ((+(safe_add_func_int16_t_s_s((+p_5), func_10((g_190 || (g_54 & g_406)), p_6, p_5)))) , g_153)))) , p_6), p_3)), (*l_327), (*l_224)), g_43)) & p_5)))) , (void*)0)), 3));
    for (l_221 = 0; (l_221 > (-19)); --l_221)
    {
        const int *l_470 = &g_87;
        int **l_471 = (void*)0;
        int **l_472 = &l_327;
        (*l_472) = ((**g_319) = func_32(l_327, l_470, ((**g_319) = &p_3), g_339));

        ;
        ;
    }

    ;
    ;
    return p_5;


}







static long long func_10(short p_11, int p_12, unsigned long long p_13)
{
    int *l_15 = &g_16;
    (*l_15) = 2L;
    return p_12;
}







static int func_17(int * p_18, const unsigned p_19)
{
    int *l_24 = &g_21;
    short *l_42 = &g_43;
    unsigned short l_61 = 0xCDC1L;
    short *l_63 = &g_54;
    short **l_62 = &l_63;
    char *l_74 = &g_75;
    char *l_76 = (void*)0;
    int l_77 = 0xE05AF849L;
    char *l_78 = (void*)0;
    char *l_79 = (void*)0;
    char *l_80 = &g_81;
    unsigned char *l_82 = (void*)0;
    unsigned char *l_83 = &g_84;
    unsigned long long *l_85 = &g_86;
    int **l_132 = &g_20;
    for (g_21 = 0; (g_21 > 17); g_21 = safe_add_func_uint32_t_u_u(g_21, 7))
    {
        int l_25 = 0L;
        l_25 = (&g_21 == l_24);
    }
    if ((safe_sub_func_int16_t_s_s(func_28(l_24, (*l_24), func_32(func_37((g_21 == ((*l_42) |= (*l_24))), ((*l_132) = func_44(((*l_62) = func_50(g_53, (func_55(((((safe_lshift_func_int8_t_s_s(l_61, 4)) , ((~(((*l_62) = l_42) == (((*l_85) = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((*l_83) = ((safe_rshift_func_uint16_t_u_s((*l_24), 5)) == ((*l_80) &= (l_77 ^= ((*l_74) = (safe_div_func_int16_t_s_s(p_19, g_21))))))) , &g_21) == (void*)0), g_7)), (*g_53))), 5))) , &g_54))) > (*g_53))) , (*l_24)) & g_87), p_19, &g_54) , &g_87))), p_19, p_19, (*g_53), &g_54)), (*l_24), p_19), &g_87, &g_21, g_54)), g_7)))
    {
        int *l_157 = &l_77;
        int *l_158 = &l_77;
        (*p_18) = (~(((safe_mod_func_uint32_t_u_u((g_7 & (((*g_20) = (safe_unary_minus_func_uint8_t_u((*l_24)))) , ((l_157 == (l_158 = (*l_132))) || (safe_mul_func_uint16_t_u_u((((p_18 == (void*)0) >= 0xF0F6L) > (safe_add_func_uint64_t_u_u(func_55(g_86, p_19, (*l_62)), (*l_24)))), (*l_157)))))), (*l_157))) , p_19) ^ (*l_24)));

        ;
    }
    else
    {
        int *l_171 = &g_95;
        short **l_184 = &g_53;
        unsigned char *l_189 = &g_129;
        if (((*p_18) = ((safe_lshift_func_uint16_t_u_u(p_19, 11)) && 0L)))
        {
            int *l_169 = (void*)0;
            int *l_170 = &l_77;
            (*l_170) |= ((safe_add_func_uint16_t_u_u(p_19, (safe_rshift_func_uint8_t_u_u((**l_132), 4)))) <= ((*l_80) = (p_19 , (!(g_21 , p_19)))));
        }
        else
        {
            const short l_174 = (-7L);
            unsigned short *l_177 = &l_61;
            int *l_185 = &l_77;
            unsigned char **l_188 = &l_83;
            (*l_185) = func_28(l_171, ((safe_mod_func_int64_t_s_s(l_174, func_55(l_174, p_19, (*l_184)))) , g_95), l_185);
            (*l_171) = ((*g_53) && (((*l_188) = &g_84) != l_189));
            return (*l_171);
        }
        return g_190;
    }

    ;
    return (*l_24);
}







static short func_28(int * p_29, unsigned char p_30, int * p_31)
{
    unsigned l_135 = 0UL;
    char *l_136 = &g_81;
    char *l_137 = &g_138;
    short *l_143 = &g_43;
    int **l_144 = &g_20;
    int ***l_147 = &l_144;
    int *l_152 = &g_153;
    (*p_31) &= (6UL & l_135);
    (*l_144) = func_44(&g_43, ((g_75 ^= ((*l_136) ^= g_87)) < ((*l_137) |= l_135)), (l_135 ^ ((l_135 <= (safe_add_func_int32_t_s_s(l_135, ((l_135 >= (l_135 < (g_86 = l_135))) , g_131)))) == l_135)), (*g_53), l_143);

    ;
    (*g_20) = (safe_div_func_uint32_t_u_u(((~(((*l_147) = &p_29) == &g_20)) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(g_131, 5)), p_30))), (*g_20)));

    ;
    return (**l_144);
}







static int * func_32(int * p_33, const int * p_34, int * p_35, unsigned char p_36)
{
    int *l_134 = &g_21;
    return l_134;


}







static int * func_37(unsigned short p_38, int * p_39, short p_40, char p_41)
{
    int **l_133 = &g_20;
    (*l_133) = p_39;
    (*l_133) = (*l_133);
    return &g_21;


}







static int * func_44(short * p_45, unsigned p_46, const short p_47, short p_48, short * p_49)
{
    int l_99 = 1L;
    const short *l_100 = &g_54;
    const short **l_101 = (void*)0;
    const short **l_102 = &l_100;
    unsigned l_105 = 0x2BE9700AL;
    int *l_106 = (void*)0;
    int **l_107 = &l_106;
    char *l_124 = &g_75;
    unsigned char *l_125 = &g_84;
    unsigned char *l_128 = &g_129;
    int *l_130 = &g_131;
    (*l_107) = (func_55(l_99, p_46, ((*l_102) = l_100)) , ((safe_mod_func_int16_t_s_s(func_55(g_21, p_46, (*l_102)), l_105)) , l_106));
    (*l_130) &= (func_55((g_21 == (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((0x5A4C4AE3L && (safe_lshift_func_uint8_t_u_s((!((func_55((safe_rshift_func_uint8_t_u_u(((*l_128) = (safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((((((*g_53) ^ (*g_53)) , (((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(7UL, ((*l_125) ^= (&g_81 != (l_124 = l_124))))), 2)) || (*g_53)) == (g_95 = (safe_mul_func_int16_t_s_s(((g_21 , g_7) > p_47), p_46))))) >= p_47) >= 0x9076B3EC5F66244ALL), p_46)) || 0x1DL) , p_48), g_21))), 4)), g_87, &g_54) , 0x0E7FB9BE98DF1E58LL) > p_46)), g_75))), g_86)), p_47))), p_46, (*l_102)) | p_46);
    (*l_107) = (*l_107);
    return &g_95;


}







static short * func_50(short * p_51, const int * p_52)
{
    int *l_94 = &g_95;
    const int *l_97 = &g_21;
    const int **l_96 = &l_97;
    short *l_98 = &g_54;
    (*l_94) ^= (*g_20);
    (*l_94) = (*g_20);
    (*l_96) = p_52;

    ;
    return l_98;


}







static short func_55(int p_56, int p_57, const short * p_58)
{
    unsigned long long * const l_88 = &g_86;
    int l_91 = 0xEA07874DL;
    if (((((p_56 , 1UL) , l_88) != (void*)0) , ((safe_add_func_int8_t_s_s(((p_57 , (l_91 , g_75)) < (safe_mod_func_int32_t_s_s(3L, p_56))), 0x15L)) & p_57)))
    {
        return (*g_53);
    }
    else
    {
        return (*p_58);
    }
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
