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



static unsigned g_8 = 0x759951EAL;
static unsigned g_61 = 0xB5BDDDD5L;
static char g_71 = 0x5DL;
static int g_73 = 0x564FCBDFL;
static int *g_72 = &g_73;
static unsigned short g_83 = 9UL;
static char g_88 = 0x4FL;
static char g_128 = (-1L);
static char *g_127 = &g_128;
static unsigned char g_134 = 0UL;
static unsigned g_144 = 4294967289UL;
static unsigned **g_167 = (void*)0;
static unsigned char *g_190 = &g_134;
static int g_192 = 1L;
static int g_217 = 0xE7944019L;
static short g_225 = 0x10CEL;
static int g_243 = (-7L);
static unsigned g_347 = 0x85100DBDL;
static unsigned *g_346 = &g_347;
static int g_385 = 0xC7D68735L;
static unsigned char g_402 = 0xC3L;
static int *g_414 = &g_73;
static short g_425 = 0x6BC5L;
static int g_484 = 0x250D2479L;
static int g_503 = 1L;
static unsigned short g_549 = 0x9CF4L;
static char **g_564 = &g_127;
static char ***g_563 = &g_564;
static unsigned short **g_609 = (void*)0;
static unsigned short ***g_608 = &g_609;



static unsigned char func_1(void);
static unsigned short func_2(unsigned short p_3, int p_4, unsigned p_5);
static unsigned char func_9(short p_10, unsigned short p_11, unsigned short p_12);
static char func_13(unsigned char p_14, short p_15, unsigned short p_16, unsigned short p_17);
static unsigned char func_18(int p_19, unsigned char p_20, unsigned char p_21);
static unsigned char func_25(unsigned short p_26, char p_27, int p_28);
static unsigned short func_29(unsigned p_30, unsigned p_31, unsigned short p_32, unsigned char p_33, int p_34);
static unsigned short func_41(unsigned short p_42, unsigned char p_43);
static unsigned char func_47(unsigned char p_48);
static int * func_49(unsigned p_50, unsigned short p_51, short p_52, int p_53, int * p_54);
static unsigned char func_1(void)
{
    unsigned l_22 = 18446744073709551615UL;
    short l_431 = 0L;
    unsigned short l_437 = 0xFA9EL;
    int l_441 = 0x55AF744EL;
    int l_449 = (-2L);
    int l_472 = 0x6E100546L;
    unsigned l_506 = 0x28E9E6C3L;
    unsigned *l_515 = &g_144;
    unsigned **l_514 = &l_515;
    int l_516 = 0L;
    unsigned char *l_523 = (void*)0;
    unsigned short l_547 = 6UL;
    char **l_562 = &g_127;
    char ***l_561 = &l_562;
    int *l_575 = &g_73;
    int l_592 = 0x5B6A7193L;
    unsigned l_610 = 0x8D26F967L;
    if (((((func_2((((safe_sub_func_uint8_t_u_u(g_8, func_9((g_225 = (!((g_8 , (-1L)) , (func_13(func_18(l_22, (safe_add_func_uint8_t_u_u(func_25(func_29(g_8, l_22, ((safe_rshift_func_uint8_t_u_s(l_22, (0xB2C593C8L > (((g_8 & l_22) , g_8) >= 1UL)))) , g_8), g_8, l_22), l_22, l_22), l_22)), l_22), g_217, g_347, l_22) >= l_22)))), l_22, g_243))) , 0x6EL) > l_22), l_22, (*g_346)) || l_431) < 0UL) && (-1L)) , (*g_414)))
    {
        int *l_432 = (void*)0;
        unsigned char l_464 = 0x28L;
        int l_491 = 0xEC0147E3L;
        unsigned char l_532 = 254UL;
        char ***l_584 = (void*)0;
        (*g_72) = 0x0544A2A8L;
        if (l_22)
        {
            int **l_433 = &g_414;
            int *l_434 = &g_217;
            (*l_433) = l_432;

            ;
            (*g_72) = (*g_72);
            (*l_434) = ((*g_72) = 0x5F06F36EL);
            (*l_434) = 0x7C73B28DL;
        }
        else
        {
            unsigned l_446 = 0x5F4FC46EL;
            int *l_493 = &g_192;
            unsigned *l_494 = &l_446;
            unsigned *l_495 = &g_144;
            unsigned short l_530 = 65535UL;
            int *l_533 = &l_516;
            int l_548 = 0x6B761A98L;
            int l_589 = 0xA744A128L;
            if ((*g_414))
            {
                short *l_435 = &g_225;
                int l_436 = 0x1C35E09FL;
                (*g_414) = (l_437 = (((*g_414) , ((*g_72) = (((func_18(((*g_414) = ((g_144 = g_88) <= 4294967295UL)), (0x0399L && (&g_402 != &g_134)), (g_347 && ((g_128 & ((*l_435) = g_8)) , g_225))) & 1UL) , l_436) , (*g_72)))) && 0xFBEB689CL));
            }
            else
            {
                unsigned l_440 = 4294967295UL;
                unsigned *l_444 = &g_61;
                unsigned *l_445 = &l_440;
                short *l_447 = &l_431;
                int **l_448 = &l_432;
                unsigned short l_460 = 0x9F9BL;
                (*l_448) = ((safe_lshift_func_int16_t_s_u(((*l_447) = (+((g_83 , ((((l_437 , l_440) , ((*g_414) = l_441)) || (safe_lshift_func_int16_t_s_u((-7L), ((l_437 , ((*l_444) = l_441)) & ((*l_445) = g_83))))) , ((l_446 = l_440) , l_22))) , 0x0030L))), 5)) , (void*)0);
                (*l_448) = (((((*g_127) = ((~l_449) <= l_446)) > l_441) , (((g_134 >= (((g_425 >= (safe_mod_func_uint32_t_u_u((0x31L == (*g_127)), l_441))) , g_192) , 0x811CL)) < 0xD78A4ADEL) != 0x37L)) , (*l_448));
                if (((*g_72) = (g_347 , 0x03E088F4L)))
                {
                    unsigned l_454 = 0xE4A5B41AL;
                    short *l_456 = &g_425;
                    unsigned short *l_457 = &g_83;
                    (*g_414) = (g_71 < (((safe_rshift_func_uint16_t_u_u(l_449, 15)) || func_25(((*l_457) = ((l_454 , func_18((*g_72), ((g_217 , ((*g_190) = (0xAA10BEBCL >= 0L))) == (safe_unary_minus_func_int8_t_s(0x7DL))), ((void*)0 == l_456))) & 0x104AL)), l_446, l_446)) == l_446));

                    ;
                    return (*g_190);
                }
                else
                {
                    int l_461 = 0x3ACE5067L;
                    unsigned l_489 = 0UL;
                    char l_490 = 0x1EL;
                    if ((~(((*g_190) = (safe_mod_func_int8_t_s_s((func_18(l_440, (*g_190), l_460) ^ ((*l_444) = l_461)), (*g_190)))) , (((*g_72) = (&g_8 == (void*)0)) , ((*g_414) = ((*g_72) = (safe_lshift_func_uint16_t_u_s((!l_464), l_461))))))))
                    {
                        unsigned short *l_465 = &l_460;
                        int l_473 = (-1L);
                        int **l_474 = (void*)0;
                        int **l_475 = &g_72;
                        (*l_475) = ((*l_448) = &g_73);

                        ;
                        ;
                        (*l_475) = ((*l_448) = (void*)0);

                        ;
                        ;
                        (*l_448) = &l_449;

                        ;
                        g_72 = &g_217;

                        ;
                    }
                    else
                    {
                        unsigned l_492 = 4294967288UL;
                        l_492 = 1L;
                        l_432 = l_493;

                        ;
                    }

                    ;
                    ;
                    (**l_448) = (-10L);
                }

                ;
                ;
            }

            ;
            ;
            if (((*g_72) = (((*l_495) = ((*l_494) = ((247UL ^ (*g_190)) <= (*g_190)))) || (safe_sub_func_uint8_t_u_u((+(*g_190)), (*g_190))))))
            {
                (*g_72) = (*g_72);
            }
            else
            {
                unsigned char l_498 = 0xA6L;
                unsigned char l_507 = 8UL;
                int l_556 = 0x00C2D0E3L;
                short l_588 = 0x5FE1L;
                if ((+(l_498 ^ (*g_414))))
                {
                    int *l_508 = (void*)0;
                    if ((*g_414))
                    {
                        int **l_499 = &g_72;
                        l_493 = &l_449;

                        ;
                        (*g_414) = (*g_414);
                        (*l_499) = &g_217;

                        ;
                        (*l_499) = &l_491;

                        ;
                    }
                    else
                    {
                        unsigned short l_500 = 6UL;
                        short *l_501 = &g_425;
                        short *l_502 = &g_225;
                        (*g_414) = (((*g_190) = (+0x93L)) ^ ((((*g_127) = l_500) & (((0x731D5282L >= ((((g_503 = ((*l_502) = ((*l_501) = g_8))) , (((-1L) && ((g_217 <= g_192) > ((*l_494) = l_506))) , (*g_346))) , (*g_346)) , l_22)) >= 0xC7A6E155L) && l_507)) >= 0xE518L));
                        l_493 = l_508;

                        ;
                    }

                    ;
                    ;
                    for (l_498 = 0; (l_498 != 20); l_498 = safe_add_func_uint8_t_u_u(l_498, 1))
                    {
                        int *l_511 = (void*)0;
                        int *l_512 = &l_441;
                        (*l_512) = ((*g_72) = (*g_72));
                        return l_498;


                    }
                    if ((*g_72))
                    {
                        unsigned ***l_513 = (void*)0;
                        l_514 = (void*)0;

                        ;
                        (*g_72) = l_516;
                        (*g_72) = 0L;
                        (*g_414) = (*g_414);
                    }
                    else
                    {
                        return (*g_190);


                    }

                    ;
                }
                else
                {
                    unsigned char **l_522 = (void*)0;
                    int l_529 = 0xAD4423FDL;
                    short *l_531 = &g_425;
                    int **l_534 = &l_432;
                    int **l_535 = (void*)0;
                    int **l_536 = &g_72;
                    int **l_539 = &l_432;
                    char **l_558 = &g_127;
                    char ***l_557 = &l_558;
                    (*l_536) = ((*l_534) = l_533);

                    ;
                    ;
                    for (l_431 = 0; (l_431 <= 28); ++l_431)
                    {
                        int **l_540 = &l_432;
                        short *l_543 = (void*)0;
                        short *l_544 = &g_225;
                        unsigned short *l_545 = (void*)0;
                        unsigned short *l_546 = &l_530;
                        l_548 = (((*l_546) = (((*g_414) != ((!(((l_539 = &g_414) != l_540) , ((*l_533) = ((*l_493) = (-1L))))) , (safe_sub_func_int8_t_s_s((((((*g_190) >= (g_402 = (!func_9(((*l_544) = ((*l_531) = g_225)), g_73, g_217)))) >= g_385) , (*g_72)) , (*g_127)), (**l_540))))) || (*g_190))) | l_547);

                        ;
                        ;
                        (*l_533) = ((((-1L) || (((void*)0 != g_167) == (*g_127))) , g_549) , (((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(0x56DAL, 12)) >= (g_425 , (safe_add_func_uint8_t_u_u(((func_25(g_484, (*g_127), l_22) > g_225) ^ (**l_540)), (*l_533))))), g_503)) || 0xF60EE6D7L) & l_556));

                        ;
                    }

                    ;
                    ;
                    (*l_539) = (g_72 = &g_503);

                    ;
                    ;
                    ;
                    if (func_9(((*l_531) = ((((*l_557) = &g_127) != (void*)0) > (~((safe_mod_func_int16_t_s_s((*l_432), (~g_347))) | (*g_414))))), (!func_9(g_549, (**l_534), (*l_432))), g_503))
                    {
                        unsigned char l_574 = 0x14L;
                        (*l_536) = &g_484;

                        ;
                        (**l_534) = ((((((((l_561 != g_563) , 0xE7C9L) < (safe_rshift_func_uint8_t_u_u(((0x0AE0L < (safe_rshift_func_int8_t_s_u(((*g_72) == (safe_lshift_func_int8_t_s_u((safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s((g_167 == g_167), (((*l_432) != (*l_533)) & (*g_190)))))), 4))), (*l_432)))) > g_402), (*g_190)))) , 0L) & l_574) , (*g_346)) , (*l_432)) && (**l_536));
                    }
                    else
                    {
                        short l_585 = 0x5376L;
                        unsigned char *l_586 = &l_507;
                        short l_587 = 0xD81BL;
                        (*l_536) = (l_575 = &g_192);

                        ;
                        ;
                        (*l_539) = func_49((safe_rshift_func_int8_t_s_u(((***g_563) = (((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((((**l_539) = (((*l_586) = ((*g_190) = (((***g_563) , (((&g_564 != (((*l_432) | 0x997FAA61L) , l_584)) ^ g_61) , &g_8)) == (void*)0))) || (***g_563))) != g_88), l_498)) == g_347) & 0xF280L), l_587)) < 0x0111L) <= g_225)), l_588)), g_144, (*l_575), (*g_72), &l_491);


                        ;
                    }


                    ;
                    ;
                }


                ;
                ;
                ;
                ;
                ;
                (*g_414) = (*g_414);
            }


            ;
            ;
            ;
            ;
            ;
            return l_589;


        }

        ;
    }
    else
    {
        int *l_590 = (void*)0;
        int **l_591 = &l_575;
        (*l_591) = l_590;

        ;
        (*g_414) = (*g_72);
lbl_595:
        l_592 = 0x157148F4L;
        for (g_549 = 18; (g_549 <= 54); g_549++)
        {
            if (g_83)
                goto lbl_595;
        }
    }

    ;
    ;
    ;
    for (g_402 = 6; (g_402 > 21); ++g_402)
    {
        unsigned char l_601 = 0x46L;
        int l_611 = (-8L);
        int *l_612 = &g_73;
        for (g_217 = 0; (g_217 >= 15); ++g_217)
        {
            int **l_600 = &g_72;
            (*l_600) = (void*)0;

            ;
        }
        (*l_612) = (l_611 = (l_449 = (!((l_601 | l_610) , l_601))));
        if (g_225)
            break;
    }

    ;
    return (*g_190);
}







static unsigned short func_2(unsigned short p_3, int p_4, unsigned p_5)
{
    unsigned short l_422 = 0xCC46L;
    int l_426 = 0x9E7B17E9L;
    for (g_61 = (-11); (g_61 > 14); g_61 = safe_add_func_int8_t_s_s(g_61, 6))
    {
        int **l_421 = &g_414;
        short *l_423 = &g_225;
        short *l_424 = &g_425;
        (*g_414) = (-6L);
        (*l_421) = &g_217;

        ;
        (**l_421) = ((l_426 = ((*l_424) = (((**l_421) ^ (**l_421)) , ((*l_423) = ((**l_421) , l_422))))) , (**l_421));
        for (g_144 = 0; (g_144 >= 10); g_144 = safe_add_func_uint16_t_u_u(g_144, 8))
        {
            (*l_421) = &g_73;

            ;
        }

        ;
    }

    ;
    (*g_414) = (safe_add_func_uint32_t_u_u(l_426, 0xEF26658BL));
    return g_217;
}







static unsigned char func_9(short p_10, unsigned short p_11, unsigned short p_12)
{
    char l_406 = 0x38L;
    unsigned short l_411 = 65534UL;
    int *l_412 = &g_217;
    unsigned *l_413 = &g_61;
    int **l_415 = (void*)0;
    int **l_416 = &g_72;
    l_412 = l_413;

    ;
    (*l_416) = l_412;

    ;
    for (g_71 = 0; (g_71 > 24); g_71 = safe_add_func_uint32_t_u_u(g_71, 4))
    {
        return (**l_416);
    }
    return (*g_190);
}







static char func_13(unsigned char p_14, short p_15, unsigned short p_16, unsigned short p_17)
{
    unsigned char **l_393 = &g_190;
    int l_394 = 0x41E80539L;
    unsigned l_395 = 0xEC100D98L;
    int *l_396 = &g_192;
    unsigned **l_397 = &g_346;
    int l_398 = 0x2CA984F8L;
    unsigned char *l_401 = &g_402;
    char *l_403 = (void*)0;
    char *l_404 = &g_71;
    int **l_405 = &g_72;
    (*l_396) = (safe_add_func_uint16_t_u_u(((+p_14) <= p_16), ((((*l_393) = &g_134) != &g_134) ^ l_395)));
    (*l_405) = &l_394;

    ;
    return (*l_396);


}







static unsigned char func_18(int p_19, unsigned char p_20, unsigned char p_21)
{
    char *l_181 = &g_88;
    int *l_182 = (void*)0;
    int *l_183 = &g_73;
    int *l_191 = &g_192;
    unsigned short l_193 = 1UL;
    unsigned l_309 = 18446744073709551615UL;
    int l_312 = 7L;
    char l_336 = 1L;
    char l_358 = 0xA1L;
    unsigned short l_382 = 0x7CBEL;
    int l_390 = 0x65B1FA44L;
    return (*g_190);
}







static unsigned char func_25(unsigned short p_26, char p_27, int p_28)
{
    int l_152 = 0x9076CEBAL;
    char *l_157 = &g_71;
    int *l_158 = &g_73;
    unsigned char **l_163 = (void*)0;
    unsigned char *l_165 = &g_134;
    unsigned char **l_164 = &l_165;
    unsigned short l_166 = 1UL;
    unsigned short *l_177 = &l_166;
    unsigned short **l_176 = &l_177;
    char l_180 = 0x65L;
    l_152 = 0x0D562ED7L;
    (*l_158) = (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u((l_157 == (void*)0), l_152)) != g_71), 11));
    if ((*l_158))
    {
        unsigned ***l_168 = &g_167;
        unsigned ***l_169 = (void*)0;
        unsigned *l_172 = &g_8;
        unsigned **l_171 = &l_172;
        unsigned ***l_170 = &l_171;
        unsigned **l_174 = &l_172;
        unsigned ***l_173 = &l_174;
        (*l_173) = ((*l_170) = ((*l_168) = g_167));

        ;
        ;
        return g_71;
    }
    else
    {
        int **l_175 = &l_158;
        unsigned short ***l_178 = &l_176;
        int l_179 = (-10L);
        (*l_175) = (void*)0;

        ;
        g_72 = l_158;

        ;
        (*l_178) = l_176;
        l_179 = (-9L);
    }

    ;
    ;
    l_158 = ((~p_27) , &g_73);

    ;
    return l_180;
}







static unsigned short func_29(unsigned p_30, unsigned p_31, unsigned short p_32, unsigned char p_33, int p_34)
{
    unsigned short l_44 = 0UL;
    int l_129 = (-3L);
    int *l_130 = &g_73;
    unsigned short l_151 = 0UL;
    if (((*l_130) = (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((func_41(p_33, l_44) < g_8) && 1UL), (65533UL < (l_44 , (((l_129 = (safe_add_func_int32_t_s_s(g_8, ((void*)0 != g_127)))) <= 0xE94FA078L) , g_128))))) , p_32), p_31))))
    {
        char *l_131 = (void*)0;
        char *l_132 = &g_71;
        unsigned char *l_133 = &g_134;
        unsigned *l_141 = &g_61;
        unsigned *l_142 = (void*)0;
        unsigned *l_143 = &g_144;
        int l_145 = 0xA5F1CA18L;
        (*l_130) = ((l_132 = l_131) == (void*)0);

        ;
        l_130 = &p_34;

        ;
        return p_31;
    }
    else
    {
        int **l_146 = &g_72;
        p_34 = 9L;
        (*l_146) = (void*)0;

        ;
        for (g_128 = 0; (g_128 == (-28)); g_128 = safe_sub_func_uint16_t_u_u(g_128, 1))
        {
            (*l_130) = ((void*)0 == &g_73);
        }
        (*l_146) = &l_129;

        ;
    }

    ;
    (*l_130) = ((safe_add_func_uint32_t_u_u((*l_130), (p_31 = ((0x2479L ^ ((*l_130) | p_33)) > p_34)))) , l_151);
    return (*l_130);


}







static unsigned short func_41(unsigned short p_42, unsigned char p_43)
{
    unsigned char l_97 = 0x58L;
    unsigned char l_100 = 0x65L;
    int *l_105 = (void*)0;
    int *l_113 = &g_73;
    int **l_114 = &l_113;
    char *l_123 = &g_88;
    char *l_124 = &g_71;
    if ((g_8 != (((safe_mod_func_uint8_t_u_u(func_47(p_43), (~(0xCD8D4AE9L & (((l_97 && (safe_add_func_uint16_t_u_u((g_8 <= (l_97 & (g_8 == l_100))), l_97))) > g_8) < g_8))))) >= g_8) , 8L)))
    {
        int *l_101 = (void*)0;
        unsigned l_104 = 0x44068BD6L;
        l_101 = l_101;
        (*g_72) = (safe_sub_func_uint8_t_u_u(g_61, (l_104 , g_73)));
    }
    else
    {
        int **l_106 = &l_105;
        (*l_106) = (g_72 = l_105);

        ;
        for (g_88 = 0; (g_88 <= 13); g_88 = safe_add_func_int8_t_s_s(g_88, 9))
        {
            l_105 = l_105;
        }
    }

    ;
    (*l_113) = (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(g_71, 1UL)), 0L));
    (*l_114) = &g_73;
    (**l_114) = ((safe_mod_func_int16_t_s_s((**l_114), g_88)) , 0L);
    return p_42;
}







static unsigned char func_47(unsigned char p_48)
{
    unsigned short l_55 = 0x83DEL;
    unsigned *l_60 = &g_61;
    int **l_96 = &g_72;
    (*l_96) = func_49(((!p_48) & g_8), g_8, l_55, ((l_55 >= (l_55 > l_55)) | (safe_sub_func_int8_t_s_s((((((*l_60) = ((safe_add_func_int32_t_s_s(l_55, (p_48 & l_55))) == p_48)) ^ 7L) || p_48) || p_48), p_48))), l_60);
    return p_48;
}







static int * func_49(unsigned p_50, unsigned short p_51, short p_52, int p_53, int * p_54)
{
    int l_66 = 0xED309061L;
    unsigned *l_69 = &g_61;
    char *l_70 = &g_71;
    int l_74 = 0xCA74B80CL;
    int **l_95 = &g_72;
    (*g_72) = (((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(l_66, (l_66 , l_66))), ((p_53 == (safe_add_func_int8_t_s_s((!((((*l_69) = l_66) == l_66) | ((((*l_70) = g_8) , &p_53) == g_72))), l_66))) , p_51))) , g_61) >= 0x54L);
    if (l_66)
    {
        int l_81 = (-4L);
        char *l_87 = &g_88;
        char **l_89 = &l_70;
        int *l_90 = &g_73;
        int **l_91 = &g_72;
        int **l_92 = &l_90;
        if (((*p_54) = (*g_72)))
        {
            unsigned l_75 = 4294967295UL;
            if ((*g_72))
            {
                l_74 = (*p_54);
            }
            else
            {
                (*p_54) = (*p_54);
                (*p_54) = (((&g_73 != &l_74) , l_75) && (safe_sub_func_int8_t_s_s((g_8 <= (safe_rshift_func_int8_t_s_s(l_74, (&g_61 == (void*)0)))), p_52)));
            }
        }
        else
        {
            short l_80 = 0xE68AL;
            unsigned short *l_82 = &g_83;
            int **l_84 = &g_72;
            p_53 = (((*p_54) = ((*g_72) = (((void*)0 == l_70) | l_80))) ^ ((((((l_66 , &g_8) != (void*)0) | l_66) <= ((*l_82) = l_81)) == g_8) > g_8));
            (*l_84) = &g_73;

            ;
            (**l_84) = 0x8B6467BEL;
        }
        (*p_54) = l_74;
        (*g_72) = ((safe_lshift_func_int16_t_s_u((l_74 , (g_71 == ((*l_87) = (g_8 , p_50)))), (&g_71 == ((*l_89) = l_87)))) <= l_74);

        ;
        (*l_92) = ((*l_91) = l_90);

        ;
    }
    else
    {
        int **l_93 = &g_72;
        int *l_94 = &l_74;
        (*l_93) = &p_53;

        ;
        (*l_93) = &p_53;
        (*l_93) = l_94;

        ;
    }

    ;
    ;
    (*l_95) = &p_53;

    ;
    return &g_73;



}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_402, "g_402", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_503, "g_503", print_hash_value);
    transparent_crc(g_549, "g_549", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
