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



static int g_2 = 0x31713B91L;
static unsigned g_32 = 0x39D98273L;
static unsigned short g_36 = 0UL;
static int g_41 = 0x2C920859L;
static unsigned short g_74 = 65527UL;
static unsigned g_76 = 0UL;
static unsigned g_78 = 0xE2D0B182L;
static unsigned *g_98 = &g_78;
static volatile int g_100 = 0x3FC80C52L;
static int g_102 = 0xE61A645CL;
static unsigned char g_139 = 0x23L;
static unsigned g_141 = 4294967291UL;
static char g_144 = 0xBEL;
static unsigned g_147 = 4294967295UL;
static unsigned g_148 = 0x06C8188DL;
static int *g_171 = &g_102;
static unsigned *g_182 = &g_147;
static unsigned **g_181 = &g_182;
static short g_189 = 0x3DF0L;
static unsigned long long g_191 = 0xC33414B7E93FE2A0LL;
static const unsigned char g_203 = 1UL;
static short g_290 = 0xAA1FL;
static int * const g_321 = &g_2;
static int g_323 = 0xBE1D4815L;
static unsigned g_336 = 1UL;
static long long g_380 = 9L;
static int *g_397 = (void*)0;
static int **g_396 = &g_397;
static const int g_424 = 0xC8D7FFE0L;
static unsigned g_428 = 0x6E24EFC4L;
static volatile short g_446 = (-3L);
static volatile short *g_445 = &g_446;
static unsigned short *g_453 = (void*)0;
static unsigned short **g_452 = &g_453;
static long long g_497 = (-1L);
static unsigned char g_502 = 250UL;
static char *g_530 = &g_144;
static char **g_529 = &g_530;
static volatile int g_534 = 0x2105E2EAL;
static unsigned long long g_547 = 0xCD0FF9300FB4A794LL;
static volatile unsigned char g_554 = 0xA5L;
static volatile unsigned char *g_553 = &g_554;
static volatile unsigned char **g_552 = &g_553;
static volatile unsigned char ***g_551 = &g_552;
static const unsigned char *g_563 = &g_203;
static const unsigned char **g_562 = &g_563;
static unsigned char *g_567 = (void*)0;
static unsigned char **g_566 = &g_567;
static char g_569 = (-2L);
static const unsigned short *g_667 = &g_36;
static const unsigned short **g_666 = &g_667;
static const unsigned short ***g_665 = &g_666;
static volatile short g_692 = 0x28CBL;
static unsigned char ****g_716 = (void*)0;
static int *g_759 = &g_41;
static short g_825 = 0x2718L;



static unsigned func_1(void);
static short func_9(short p_10, unsigned short p_11, int ** p_12, int * p_13, int * p_14);
static int ** func_15(char p_16, unsigned short p_17, int ** p_18);
static unsigned func_19(int * p_20, long long p_21, int p_22);
static int * func_23(const unsigned p_24, int * const p_25, const int p_26);
static int * func_33(unsigned short p_34);
static int func_42(unsigned short * p_43, int ** p_44, int ** p_45, int ** p_46);
static unsigned short func_51(int p_52, unsigned p_53, int * p_54, unsigned short * p_55, unsigned short p_56);
static int * func_57(unsigned long long p_58, int * p_59, unsigned p_60);
static char func_61(unsigned short p_62, unsigned short p_63, unsigned * p_64, int * const p_65);
static unsigned func_1(void)
{
    const int l_8 = 0x59B8BC58L;
    unsigned *l_31 = &g_32;
    unsigned short *l_35 = &g_36;
    char l_762 = 0x9EL;
    char l_801 = 0x9BL;
    unsigned char **** const *l_823 = &g_716;
    int l_829 = (-6L);
    int l_830 = 0x259AF4B2L;
    const unsigned l_836 = 0x37DAD2D7L;
    unsigned long long l_855 = 1UL;
    for (g_2 = (-28); (g_2 != (-10)); g_2 = safe_add_func_int16_t_s_s(g_2, 3))
    {
        int **l_5 = (void*)0;
        int *l_7 = &g_2;
        int **l_6 = &l_7;
        (*l_6) = &g_2;
    }
    (*g_321) = (l_8 < func_9(g_2, (0x43L != (-3L)), func_15((func_19(func_23(((safe_rshift_func_int8_t_s_s(g_2, 0)) , ((*l_31) = (safe_lshift_func_uint8_t_u_u(0xA0L, 6)))), func_33(((*l_35) ^= 65527UL)), (safe_add_func_int8_t_s_s(l_762, 0xB5L))), l_762, l_8) , g_424), l_8, &g_759), l_31, l_31));



    if (l_801)
    {
        unsigned char l_804 = 9UL;
        unsigned *l_815 = &g_32;
        unsigned long long *l_816 = &g_191;
        short *l_819 = (void*)0;
        short *l_820 = &g_290;
        short *l_824 = &g_825;
        unsigned char *l_828 = &l_804;
        int **l_831 = &g_171;
        (*g_759) &= (!((0xC524AC47L || (((safe_sub_func_int32_t_s_s(l_804, (*g_321))) & l_804) , func_61((l_804 & (safe_mod_func_int32_t_s_s((l_804 == l_804), l_804))), l_804, l_31, l_31))) <= 0x7B750A0ACA85929BLL));
        (**l_831) &= ((((*l_816) = g_41) ^ func_9(((*l_820) = (g_189 = (safe_rshift_func_int16_t_s_u((-10L), l_762)))), (l_830 &= (((*l_824) = (safe_add_func_int32_t_s_s(0x7460903BL, (l_823 == &g_716)))) > (safe_sub_func_uint32_t_u_u(((func_9((*g_445), (((((*l_828) = l_762) > (l_829 = func_61((**g_666), (**g_666), &g_336, l_31))) && l_804) , l_829), &g_171, l_815, l_31) < 0x48L) && 0L), 1L)))), l_831, &g_323, l_31)) != 5UL);
    }
    else
    {
        unsigned long long *l_834 = &g_191;
        unsigned long long **l_833 = &l_834;
        unsigned long long *** const l_832 = &l_833;
        unsigned l_835 = 0x931D4A4FL;
        long long *l_837 = (void*)0;
        long long *l_838 = &g_497;
        int l_839 = (-1L);
        char *l_840 = &g_144;
        char *l_841 = &l_762;
        unsigned short *l_848 = &g_36;
        unsigned short *l_856 = (void*)0;
        unsigned short *l_857 = &g_74;
        int l_858 = 0x0ABCFF50L;
        int **l_859 = &g_397;
        int l_860 = 0xABCE0D16L;
        (*g_171) ^= (((l_839 = ((((*l_841) ^= ((*l_840) = ((l_832 != (void*)0) <= l_836))) & l_801) | g_189)) > l_835) && l_835);
        l_829 = ((*g_759) ^= ((safe_lshift_func_int16_t_s_u((((((~(safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((l_835 ^ ((g_148 != g_100) ^ l_860)) != 0x94L), (*g_182))), 6))) && l_839) , 246UL) | g_336) , 6L), (*g_667))) & (**g_181)));
        (*g_171) = 0xE21C9C50L;
    }
    return (*g_98);
}







static short func_9(short p_10, unsigned short p_11, int ** p_12, int * p_13, int * p_14)
{
    unsigned l_800 = 1UL;
    (*p_14) = l_800;
    return (*g_445);
}







static int ** func_15(char p_16, unsigned short p_17, int ** p_18)
{
    int * const l_799 = (void*)0;
    (*p_18) = &g_41;
    return p_18;


}







static unsigned func_19(int * p_20, long long p_21, int p_22)
{
    short l_778 = 0x2837L;
    int **l_779 = &g_759;
    char *l_780 = &g_144;
    unsigned short *l_781 = &g_36;
    int l_784 = 0xA94DF306L;
    short l_785 = 0xF28CL;
    unsigned long long l_790 = 18446744073709551608UL;
    (*g_171) ^= (safe_rshift_func_uint16_t_u_u(((*l_781) = (+(((0L >= 1L) , ((*l_780) &= (**l_779))) && 0x6EL))), 8));
    l_785 ^= (l_784 &= (safe_lshift_func_uint8_t_u_u((**l_779), 5)));
    (*g_759) = (**l_779);
    (*g_759) = (safe_add_func_int32_t_s_s((**l_779), (safe_lshift_func_uint8_t_u_u(((l_790 > (safe_lshift_func_uint8_t_u_s((***g_551), 3))) != (((safe_unary_minus_func_int64_t_s((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(0xAB5BL, (**l_779))), (((**l_779) >= (safe_unary_minus_func_uint8_t_u(((**l_779) == p_21)))) || g_32))))) || p_22) != 0x67502073L)), p_21))));
    return (*g_182);
}







static int * func_23(const unsigned p_24, int * const p_25, const int p_26)
{
    unsigned short *l_763 = (void*)0;
    unsigned short *l_764 = &g_74;
    int l_769 = 0L;
    unsigned *l_770 = &g_32;
    int *l_773 = (void*)0;
    (*g_171) = func_61(((*l_764) = (0xB057L > 0xF125L)), (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0x93L, (*g_553))), l_769)), l_770, &l_769);
    for (g_191 = 0; (g_191 > 56); ++g_191)
    {
        (*g_759) = (*p_25);
    }
    return l_773;


}







static int * func_33(unsigned short p_34)
{
    char l_81 = 1L;
    int **l_398 = (void*)0;
    int l_419 = 0x9A4C346CL;
    unsigned *l_459 = &g_148;
    long long *l_504 = &g_497;
    unsigned **l_595 = &g_182;
    unsigned char ***l_610 = &g_566;
    unsigned char ****l_609 = &l_610;
    unsigned short **l_613 = &g_453;
    int *l_680 = (void*)0;
    unsigned l_691 = 0UL;
    unsigned short ***l_737 = &l_613;
    unsigned short ****l_736 = &l_737;
    if ((safe_unary_minus_func_uint16_t_u(g_2)))
    {
        int l_72 = 1L;
        int *l_80 = &g_41;
        const int *l_423 = &g_424;
        unsigned char *l_520 = &g_502;
        unsigned char **l_519 = &l_520;
        unsigned char *** const l_518 = &l_519;
        char *l_528 = &l_81;
        char **l_527 = &l_528;
        const unsigned char **l_565 = &g_563;
        const long long l_589 = (-4L);
        int *l_591 = &l_419;
        unsigned short **l_607 = &g_453;
        if (p_34)
        {
            unsigned *l_77 = &g_78;
            int l_444 = (-8L);
            short *l_447 = &g_189;
            int *l_460 = &l_444;
            int **l_471 = &g_171;
            const unsigned char l_473 = 1UL;
            for (p_34 = 28; (p_34 <= 60); ++p_34)
            {
                int *l_40 = &g_41;
                unsigned short *l_73 = &g_74;
                unsigned *l_75 = &g_76;
                int l_418 = 5L;
                char *l_429 = &l_81;
                int l_472 = 0xF06799D8L;
                unsigned **l_480 = (void*)0;
                long long *l_505 = &g_497;
                unsigned char * const *l_522 = &l_520;
                unsigned char * const **l_521 = &l_522;
                (*l_40) = p_34;
            }
            for (g_497 = (-14); (g_497 <= (-24)); --g_497)
            {
                const unsigned char ***l_564 = (void*)0;
                unsigned char ***l_568 = &g_566;
                unsigned *l_570 = &g_141;
                int **l_571 = &l_460;
                (*l_80) = ((((***l_518) |= (***g_551)) == (**l_471)) >= ((l_565 = g_562) != ((*l_568) = g_566)));
                (*g_171) = ((((*g_182) > ((*l_570) ^= g_569)) , 1L) & ((*l_80) = ((-1L) || (***g_551))));
                (**l_571) ^= (p_34 >= ((((func_42((*g_452), &g_171, &g_397, l_571) == 1L) != func_61(p_34, g_380, l_570, (*g_396))) | p_34) ^ (*l_423)));
            }
            (*g_396) = (*g_396);
        }
        else
        {
            int l_574 = (-3L);
            char *l_592 = &l_81;
            unsigned **l_593 = &g_182;
            unsigned ***l_594 = &g_181;
            unsigned short **l_596 = &g_453;
            short *l_608 = &g_189;
            for (g_547 = (-29); (g_547 >= 46); g_547++)
            {
                unsigned l_588 = 18446744073709551610UL;
                (*l_80) ^= l_574;
                for (g_74 = 0; (g_74 > 39); g_74 = safe_add_func_int16_t_s_s(g_74, 5))
                {
                    unsigned l_581 = 1UL;
                    for (g_323 = 8; (g_323 >= 15); g_323 = safe_add_func_uint16_t_u_u(g_323, 9))
                    {
                        return l_80;




                    }
                    for (g_102 = 0; (g_102 > (-28)); g_102--)
                    {
                        (*g_396) = (void*)0;

                        ;
                    }
                    if (l_581)
                    {
                        unsigned l_586 = 0x81567AE3L;
                        unsigned long long *l_587 = &g_191;
                        int *l_590 = &g_102;
                        (*l_80) = ((((void*)0 != (*g_566)) ^ ((**g_181) ^= (safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(p_34, ((void*)0 == (*g_452)))), (((l_588 = (l_586 , (l_581 , ((*l_587) |= (g_446 , (g_2 | 9L)))))) ^ g_380) != l_589))))) < g_141);
                        l_590 = (*g_396);

                        ;
                    }
                    else
                    {
                        (*g_171) &= 0x08600725L;
                    }
                    (*g_396) = l_591;

                    ;
                }
                if ((*g_171))
                    break;
                (*l_591) = (&l_81 != ((*g_529) = l_592));

                ;
            }

            ;
            ;
            (*l_80) ^= 8L;
            (*g_171) |= p_34;
            (*g_171) |= ((((*l_594) = l_593) == l_595) > ((!(l_596 != &g_453)) , (safe_add_func_uint16_t_u_u((+(safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_s(((*l_608) &= (safe_div_func_int32_t_s_s((&g_453 != ((safe_lshift_func_int16_t_s_u((*g_445), 2)) , l_607)), l_574))), 10)) | (l_609 == (void*)0)), p_34))), g_41))));
        }

        ;
        ;
    }
    else
    {
        unsigned short l_611 = 0x79BBL;
        int *l_612 = &g_2;
        unsigned short ***l_614 = (void*)0;
        unsigned l_617 = 8UL;
        unsigned short *l_621 = &g_36;
        unsigned char **l_703 = &g_567;
        const unsigned long long *l_705 = &g_191;
        const unsigned long long **l_704 = &l_705;
        short l_757 = (-1L);
        (*g_396) = func_57(l_611, ((*g_396) = func_57(p_34, l_612, (*g_182))), (*g_182));

        ;
        l_613 = l_613;
        if ((safe_lshift_func_uint16_t_u_s(l_617, 14)))
        {
            int *l_618 = &l_419;
            (*g_396) = l_618;

            ;
            (**g_396) &= ((*g_171) | (*g_182));
            for (g_189 = 20; (g_189 != (-23)); g_189 = safe_sub_func_int8_t_s_s(g_189, 2))
            {
                unsigned short *l_634 = &l_611;
                int l_635 = (-1L);
                int l_636 = (-1L);
                (*g_171) = p_34;
                if ((*l_612))
                    break;
                l_636 ^= ((((func_61(((*l_634) = ((*l_621) = func_42(l_621, &l_618, (((safe_rshift_func_uint16_t_u_s((*l_618), p_34)) & ((*g_182) |= (((((safe_rshift_func_int16_t_s_s((0xC020F91DL != ((safe_lshift_func_uint16_t_u_u((0x35L && 0x21L), (safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s((*g_321), (*l_618))) ^ (*g_530)), g_203)), 0x3535L)))) | p_34)), 5)) && (*g_445)) > p_34) || (*l_618)) && 0UL))) , &g_397), &g_171))), l_635, &g_148, &l_635) , 1UL) ^ 0L) >= p_34) == l_635);
            }
        }
        else
        {
            int l_654 = 0xC221E961L;
            int l_658 = 0xC62878F1L;
            unsigned short * const *l_670 = &l_621;
            unsigned short * const **l_669 = &l_670;
            int *l_683 = &l_419;
            for (g_148 = 0; (g_148 < 6); g_148++)
            {
                const int l_655 = 0x9E247E2AL;
            }
        }

        ;
        if ((g_692 , (*g_397)))
        {
            unsigned char *l_697 = &g_139;
            unsigned long long *l_698 = &g_547;
            const unsigned long long ***l_706 = (void*)0;
            const unsigned long long ***l_707 = &l_704;
            (*l_707) = ((((((g_446 | (1L | (safe_sub_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((*l_697) = (*g_563)), (*l_612))), ((*l_698) ^= 5UL))))) >= ((***g_665) , (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(0xC7L, (l_703 == (**l_609)))), (*l_612))))) < 1L) , l_697) == l_697) , l_704);
            return l_612;



        }
        else
        {
            unsigned short ** const **l_732 = (void*)0;
            int l_748 = 0L;
            short *l_755 = &g_189;
            unsigned long long *l_756 = &g_191;
            unsigned char *l_758 = &g_502;
            for (g_76 = 18; (g_76 > 33); g_76 = safe_add_func_int64_t_s_s(g_76, 3))
            {
                int l_710 = 0x3662860BL;
                unsigned *l_711 = &l_617;
                unsigned char *****l_717 = &g_716;
                short l_727 = 0xF4DCL;
                short *l_728 = &g_290;
                int *l_729 = &g_41;
                unsigned short ** const ***l_733 = &l_732;
                unsigned short *****l_738 = &l_736;
                int ***l_739 = &g_396;
                (*g_171) = func_61(l_710, ((+p_34) , l_710), l_711, &l_710);
            }
            (*g_171) = (+func_61(l_748, p_34, &g_336, (*g_396)));
            l_748 = p_34;
        }
    }

    ;
    ;
    return g_759;




}







static int func_42(unsigned short * p_43, int ** p_44, int ** p_45, int ** p_46)
{
    unsigned l_399 = 4294967295UL;
    unsigned long long *l_400 = &g_191;
    int l_405 = (-7L);
    unsigned *l_406 = &g_148;
    unsigned **l_407 = (void*)0;
    unsigned **l_408 = &l_406;
    unsigned *l_409 = (void*)0;
    int l_410 = (-1L);
    int *l_411 = &g_102;
    unsigned short *l_412 = (void*)0;
    unsigned short *l_414 = &g_74;
    unsigned short **l_413 = &l_414;
    (*l_411) = (l_410 |= ((l_399 && g_74) <= (((*l_400) = g_323) <= ((safe_sub_func_uint64_t_u_u((l_399 , func_61(l_399, (safe_sub_func_uint32_t_u_u((**g_181), (g_141 = ((l_405 = l_399) , (((*l_408) = l_406) != (g_102 , (void*)0)))))), l_409, (*p_44))), l_399)) > l_399))));
    (*l_411) = (func_61((l_412 != ((*l_413) = p_43)), (*l_411), (*l_408), (*g_396)) | ((*l_411) == (**g_181)));

    ;
    return (*l_411);
}







static unsigned short func_51(int p_52, unsigned p_53, int * p_54, unsigned short * p_55, unsigned short p_56)
{
    int l_157 = (-1L);
    int *l_176 = &g_102;
    unsigned *l_178 = &g_147;
    unsigned **l_177 = &l_178;
    const unsigned char *l_199 = &g_139;
    const unsigned char *l_204 = (void*)0;
    unsigned char *l_210 = (void*)0;
    unsigned char **l_209 = &l_210;
    unsigned *l_270 = &g_78;
    unsigned short l_288 = 0xD36EL;
    unsigned l_348 = 0xC47C4DE9L;
    (*p_54) |= 1L;
    for (p_52 = (-27); (p_52 >= 24); p_52++)
    {
        unsigned l_166 = 0UL;
        int *l_167 = &g_102;
        if ((safe_add_func_int16_t_s_s(((g_76 = l_157) == (!(safe_rshift_func_uint16_t_u_u(65529UL, (safe_add_func_uint32_t_u_u(0x197733A1L, ((*l_167) &= ((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((l_166 && (p_53 | g_36)), (0x54L > 0x0CL))) , ((*p_54) |= 0x328EFC35L)), g_100)) || g_2)))))))), 0xCFFAL)))
        {
            int **l_168 = (void*)0;
            int **l_169 = (void*)0;
            int **l_170 = &l_167;
            if (g_139)
                break;
            g_102 = g_78;
            (*l_170) = l_167;
            g_171 = &g_102;
        }
        else
        {
            int **l_172 = &l_167;
            (*l_172) = (void*)0;

            ;
        }

        ;
        if ((*p_54))
            break;
    }
    if ((*p_54))
    {
        long long l_187 = (-1L);
        unsigned *l_193 = &g_78;
        unsigned char *l_205 = &g_139;
        int l_243 = 0xD6EEAA0BL;
        char *l_332 = &g_144;
        for (g_147 = (-26); (g_147 <= 40); g_147 = safe_add_func_int64_t_s_s(g_147, 7))
        {
            unsigned short l_175 = 0x9BB1L;
            if (l_175)
                break;
            (*p_54) ^= 0x4359D1E7L;
            l_176 = p_54;

            ;
        }

        ;
        if (((void*)0 != l_177))
        {
            unsigned **l_186 = &g_98;
            short *l_188 = &g_189;
            unsigned long long *l_190 = &g_191;
            int l_192 = 0L;
            int **l_194 = &l_176;
            const unsigned char **l_200 = &l_199;
            const unsigned char *l_202 = &g_203;
            const unsigned char **l_201 = &l_202;
            unsigned char **l_208 = &l_205;
            unsigned char ***l_211 = &l_209;
            unsigned char **l_213 = (void*)0;
            unsigned char ***l_212 = &l_213;
            short *l_253 = &g_189;
            (*l_194) = func_57(func_61(((g_139 < (func_61((((safe_add_func_int64_t_s_s(((0x4A4090D02F7E15FDLL & ((*l_190) &= ((g_181 != ((safe_unary_minus_func_int16_t_s(((*l_188) = ((((safe_add_func_uint32_t_u_u(func_61((*l_176), ((*p_55) = (*p_55)), ((*l_186) = l_178), (g_139 , &g_41)), 4294967295UL)) , p_52) && (**g_181)) > l_187)))) , &l_178)) , 0x49663287AF7B95B8LL))) && g_144), (*l_176))) , 255UL) ^ g_74), l_192, l_193, p_54) > (**g_181))) == 1UL), (*l_176), &g_148, &l_192), &g_102, l_187);

            ;
            ;
            if (((safe_add_func_int16_t_s_s((((((l_204 = ((*l_201) = ((*l_200) = (p_52 , l_199)))) == l_205) >= func_61((**l_194), ((*p_55) = (((((safe_lshift_func_uint16_t_u_s(65535UL, 11)) , l_208) != ((*l_212) = ((*l_211) = l_209))) || (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(func_61(((*l_176) , ((safe_div_func_uint64_t_u_u(l_187, g_76)) == 0xB6L)), l_187, &g_78, (*l_194)), (*l_176))), p_56))) > (*g_171))), &g_78, &g_2)) <= 0UL) >= p_56), g_139)) | 1L))
            {
                char *l_237 = &g_144;
                const int l_240 = 0L;
                (*p_54) = (!(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((((l_243 &= (((*l_190) = (*l_176)) != (((*l_178) = (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_int64_t_s(((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((g_76 ^ g_36), 12)) , (+(safe_add_func_int16_t_s_s(g_76, ((((*l_237) = (safe_div_func_uint64_t_u_u(g_74, g_148))) & (+(safe_mod_func_int16_t_s_s(l_240, (safe_div_func_uint8_t_u_u(((-4L) && ((*l_176) , g_203)), 1UL)))))) > p_52))))) > (*l_176)), l_187)), g_100)) == (*l_176)))) | p_56), 0x69BC1C9164872798LL))) | p_53))) , p_55) == &g_189), g_78)), g_36)) == 0x2566L) ^ 0x49L));
                (*l_176) ^= 0L;
                (*g_171) |= 0x363E6906L;
                for (l_192 = 0; (l_192 != 29); ++l_192)
                {
                    short **l_252 = &l_188;
                    (*l_194) = (g_171 = func_57(p_52, p_54, ((**l_194) && (((((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0xCA9B584FL, (p_56 ^ (((*l_252) = &g_189) != ((func_61(g_141, (*p_55), &g_78, p_54) > 0xF32CBD3E61D3DFD4LL) , l_253))))), g_147)) != p_52), 6)) , 0x154AAB11L) <= (**l_194)) > g_191) , (-1L)))));

                    ;
                    ;
                }

                ;
                ;
            }
            else
            {
                char l_260 = 1L;
                unsigned long long l_263 = 8UL;
                (*p_54) &= ((safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u(0x1D1B2C16L, (((**g_181) > (g_100 == (l_243 <= func_61(((*p_55) |= (((((safe_mod_func_uint8_t_u_u(p_56, (+((l_187 != ((*l_176) = (l_260 != (safe_lshift_func_uint16_t_u_u((p_56 , g_148), 8))))) == l_260)))) , (*l_176)) == (-4L)) && (*g_182)) > p_52)), g_74, l_178, &l_243)))) != g_148))), l_263)) | p_52);
            }

            ;
            ;
            ;
            ;
            ;
            for (l_157 = 28; (l_157 == 7); l_157 = safe_sub_func_uint16_t_u_u(l_157, 4))
            {
                for (p_53 = (-24); (p_53 == 4); p_53++)
                {
                    long long l_276 = 4L;
                    int *l_277 = &l_243;
                    g_171 = (void*)0;

                    ;
                    (*l_277) &= (((+g_191) && ((l_270 = func_57((safe_div_func_int64_t_s_s(1L, (**l_194))), &g_102, (*g_182))) != &p_53)) < (safe_lshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(l_276)) || l_187) , g_102), l_276)) , p_53), 3)));
                    (*l_194) = &g_41;

                    ;
                    if ((*p_54))
                        continue;
                }
                if ((*p_54))
                    break;
            }

            ;
            ;
        }
        else
        {
            int **l_278 = &g_171;
            unsigned *l_281 = &g_141;
            int *l_289 = (void*)0;
            unsigned short *l_293 = &l_288;
            unsigned long long l_309 = 18446744073709551615UL;
            (*l_278) = &g_2;

            ;
            g_290 |= ((g_191 &= (((safe_div_func_int32_t_s_s(0L, ((*l_281) ^= (**g_181)))) & (*p_54)) < (p_56 = (((l_187 , ((p_53 || ((safe_rshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s((*l_176), (*l_176))), 9)) > (((((*p_55) = (1L < (safe_rshift_func_int8_t_s_s(1L, 5)))) > g_102) && p_53) || 6L))) <= g_139)) != 0UL) != l_187)))) >= l_288);
            if ((safe_lshift_func_uint8_t_u_s(p_56, (func_61(g_144, ((*l_293) &= g_36), &g_148, p_54) & (safe_lshift_func_uint8_t_u_u((p_52 < (safe_mod_func_uint8_t_u_u(((+g_189) && 0x7C1AL), g_139))), g_2))))))
            {
                const int l_306 = (-1L);
                (*p_54) = (((l_187 , ((*g_171) || (p_52 != g_139))) != (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_243, (safe_div_func_int32_t_s_s((func_61(((*l_293) &= (((*l_176) = (*p_54)) < (l_306 != (0L >= (safe_add_func_uint16_t_u_u(func_61((*p_55), l_243, &g_148, &g_2), 1UL)))))), (*p_55), &g_148, l_178) <= (*g_171)), p_52)))), g_144))) , 0xA8F4C849L);
                (*l_176) = l_309;
                (*l_278) = &g_2;
            }
            else
            {
                const int l_312 = 0xDC7E6EE9L;
                unsigned long long *l_313 = &g_191;
                int * const l_320 = (void*)0;
                int *l_322 = &g_323;
                char **l_333 = &l_332;
                (*p_54) = 0xC96DE086L;
                (*l_322) |= func_61(l_243, (((*l_313) = (safe_div_func_uint32_t_u_u(l_312, p_56))) == (l_243 | func_61(((safe_div_func_int16_t_s_s(g_41, ((safe_sub_func_int32_t_s_s(5L, ((((*p_55) = (((**g_181) , p_56) , (safe_div_func_int64_t_s_s((((((func_61(g_102, (*p_55), &g_78, l_270) > 65527UL) > 255UL) ^ (-4L)) > (*g_182)) == p_52), 0x5AC7D6070DEA0926LL)))) <= p_56) , (*l_176)))) & g_189))) , 0xD40EL), (**l_278), &g_148, l_320))), l_193, g_321);
                g_336 ^= ((((((safe_mod_func_uint16_t_u_u((&g_191 == l_313), (*l_176))) == l_187) , ((void*)0 != &g_182)) ^ (((*p_55) = ((safe_sub_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((&g_144 == ((*l_333) = l_332)), (safe_sub_func_int64_t_s_s(((((*l_313) = (((*l_322) , 0x0A4E89F9L) < (**g_181))) > p_53) , (**l_278)), 0xF6959912A8F30D59LL)))) >= l_243), g_189)) == (*g_182))) >= l_187)) > (*p_54)) && 0xDE3318A3L);
            }
        }

        ;
        ;
        ;
        ;
        for (g_147 = (-28); (g_147 <= 11); ++g_147)
        {
            for (l_187 = 11; (l_187 != 19); l_187++)
            {
                for (g_148 = 0; (g_148 > 31); g_148++)
                {
                    int **l_343 = (void*)0;
                    int **l_344 = &l_176;
                    (*l_344) = &g_102;

                    ;
                    g_171 = &g_102;

                    ;
                }
                if ((*p_54))
                    continue;
            }
        }
        for (l_243 = 7; (l_243 == (-15)); l_243--)
        {
            unsigned char * const l_347 = &g_139;
            int **l_349 = &g_171;
            l_348 = (+(g_139 >= (l_347 == (void*)0)));
            (*l_349) = &g_102;

            ;
        }
    }
    else
    {
        short *l_350 = &g_189;
        int l_361 = 0x9C4B727EL;
        unsigned *l_386 = &g_148;
        if (((*l_176) >= ((*l_350) = ((!18446744073709551615UL) <= g_144))))
        {
            long long l_351 = 0xC352AFB47A10B03DLL;
            (*l_176) = l_351;
        }
        else
        {
            char l_384 = 0xAFL;
            int l_385 = 8L;
            int **l_388 = &l_176;
            unsigned long long *l_393 = &g_191;
            unsigned short *l_394 = &g_74;
            unsigned **l_395 = &l_270;
            for (l_348 = 25; (l_348 <= 7); --l_348)
            {
                int l_362 = 0xD824AE4DL;
                char *l_363 = &g_144;
                int * const l_364 = &g_323;
                int **l_365 = &g_171;
                for (p_53 = (-6); (p_53 == 29); ++p_53)
                {
                    const unsigned l_356 = 1UL;
                    if (l_356)
                        break;
                }
                if ((*g_171))
                    continue;
                if ((*g_171))
                    continue;
                (*l_365) = func_57(((!((*l_176) & (((&g_290 != p_55) >= ((*l_363) = func_61((safe_add_func_uint32_t_u_u((*g_182), (((*l_363) |= ((safe_rshift_func_uint16_t_u_u(0x04D9L, l_361)) & (p_52 < ((l_362 != (-10L)) || 0xFEF44D4CL)))) <= 0L))), g_203, &g_78, l_364))) | p_52))) >= (*l_364)), &g_323, p_52);

                ;
            }

            ;
            for (g_139 = (-18); (g_139 < 50); g_139++)
            {
                int l_378 = 0x34AA2032L;
                long long *l_379 = &g_380;
                unsigned long long *l_383 = &g_191;
                int l_387 = 1L;
                if (func_61((safe_sub_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(p_52, ((safe_sub_func_int64_t_s_s((0x26L < g_74), ((((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(0x0229L, 0)), ((*l_379) = (g_203 || l_378)))) & l_361) && func_61(g_147, ((safe_div_func_uint64_t_u_u(((*l_383) = g_2), 1UL)) < 0UL), &g_336, &g_2)) , l_384))) >= 9UL))) | (*p_54)) > l_385), p_56)), (*p_55), l_386, l_176))
                {
                    (*g_171) = (g_41 >= p_56);
                    l_387 &= (*l_176);
                    return g_41;
                }
                else
                {
                    return (*p_55);
                }
            }
            (*l_388) = p_54;

            ;
            (*l_388) = func_57(((1UL ^ (0x0169L >= (((func_61(((*l_394) |= ((*p_55) = ((0x4F0FL & ((*l_176) > ((*l_393) = (safe_rshift_func_uint8_t_u_s(0x3BL, 4))))) && l_361))), (*l_176), ((*l_395) = l_386), p_54) != (*p_54)) < g_139) <= 0x37B5L))) < p_53), &g_2, (*g_182));

            ;
            ;
        }

        ;
        ;
        ;
        return (*l_176);
    }

    ;
    ;
    ;
    ;
    ;
    return g_2;
}







static int * func_57(unsigned long long p_58, int * p_59, unsigned p_60)
{
    int **l_82 = (void*)0;
    int *l_83 = &g_41;
    int l_90 = (-5L);
    unsigned *l_117 = &g_78;
    unsigned short *l_120 = &g_74;
    int * const l_122 = &g_41;
    l_83 = p_59;


    for (g_76 = 11; (g_76 == 14); ++g_76)
    {
        const int *l_86 = (void*)0;
        const int **l_87 = &l_86;
        unsigned short *l_118 = &g_74;
        unsigned short *l_119 = &g_36;
        int l_121 = 0L;
        int l_125 = 0xD1A1A39BL;
        (*l_87) = l_86;
        for (g_74 = 0; (g_74 >= 56); g_74++)
        {
            const int *l_91 = &g_2;
            int * const l_99 = (void*)0;
            int *l_101 = &g_102;
        }
    }
    (*l_122) ^= g_139;
    return p_59;


}







static char func_61(unsigned short p_62, unsigned short p_63, unsigned * p_64, int * const p_65)
{
    short l_79 = (-1L);
    return l_79;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_534, "g_534", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_825, "g_825", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
