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



static char g_4 = 0L;
static int g_24 = 1L;
static int g_37 = (-10L);
static short g_51 = 0x79C9L;
static char g_76 = 1L;
static char g_78 = 8L;
static char g_94 = 1L;
static int g_120 = 0x8A5A2D53L;
static volatile unsigned char g_131 = 0x77L;
static unsigned g_139 = 0x0DA9BE8BL;
static volatile short g_152 = (-10L);
static volatile short *g_151 = &g_152;
static unsigned char g_154 = 0x5DL;
static volatile char g_184 = 0x64L;
static volatile unsigned g_185 = 2UL;
static const int g_190 = 0xFF3E0999L;
static const int *g_189 = &g_190;
static const int *g_191 = &g_37;
static unsigned short g_198 = 0x68F1L;
static volatile unsigned short g_231 = 6UL;
static long long g_247 = 0x5EC2F7F93178D71ALL;
static unsigned long long g_250 = 1UL;
static int g_257 = 0x8DBB9F33L;
static unsigned g_261 = 9UL;
static unsigned **g_270 = (void*)0;
static short g_274 = (-5L);
static volatile unsigned g_276 = 1UL;
static long long g_356 = (-2L);
static int *g_365 = &g_24;
static int *g_370 = (void*)0;
static const unsigned long long g_375 = 0UL;
static unsigned long long *g_378 = &g_250;
static unsigned g_452 = 1UL;
static volatile long long g_477 = 0xFFB9C534AEA6BC37LL;
static volatile short g_479 = 0x30BFL;
static unsigned short g_481 = 0xC57AL;
static char g_488 = 0L;
static volatile unsigned long long g_518 = 0UL;
static volatile unsigned long long *g_517 = &g_518;
static volatile unsigned long long **g_516 = &g_517;
static volatile unsigned long long ** const * const g_515 = &g_516;
static unsigned ***g_520 = &g_270;
static unsigned ****g_519 = &g_520;
static long long g_557 = 0L;
static volatile unsigned g_619 = 0x7C9921F2L;
static unsigned g_719 = 0x1F01BC57L;
static volatile unsigned g_742 = 1UL;
static unsigned ****g_905 = &g_520;
static char *g_977 = &g_488;
static char **g_976 = &g_977;
static char ***g_975 = &g_976;
static unsigned short g_1018 = 0UL;
static int g_1050 = (-4L);
static int g_1061 = 0xF2AC13BBL;
static volatile int g_1085 = 0x729EC944L;
static volatile int *g_1084 = &g_1085;
static volatile int **g_1083 = &g_1084;
static volatile int ***g_1082 = &g_1083;
static unsigned char g_1096 = 0x51L;



static unsigned long long func_1(void);
static unsigned short func_5(short p_6, unsigned long long p_7, unsigned long long p_8, unsigned p_9);
static unsigned long long func_15(const unsigned char p_16);
static char func_19(int p_20);
static int func_27(const short p_28, int p_29, int p_30, unsigned char p_31, int p_32);
static int func_33(int p_34);
static int func_38(const long long p_39);
static unsigned short func_52(const int * p_53, unsigned char p_54);
static int * func_55(int * p_56, int * p_57, unsigned p_58, unsigned p_59, int * p_60);
static int * func_61(const short * p_62, int p_63, unsigned char p_64, short * p_65);
static unsigned long long func_1(void)
{
    unsigned l_12 = 0UL;
    int l_21 = 0xFE6D39C7L;
    unsigned long long **l_633 = (void*)0;
    int l_824 = 0xE0502AB8L;
    int l_1047 = 0xC02810FAL;
    int *l_1048 = (void*)0;
    int *l_1049 = &g_1050;
    unsigned short l_1051 = 0x319DL;
    int * const *l_1057 = (void*)0;
    int * const **l_1056 = &l_1057;
    int * const l_1060 = &g_1061;
    int * const *l_1059 = &l_1060;
    int * const **l_1058 = &l_1059;
    short *l_1070 = &g_51;
    (*l_1049) |= (((safe_div_func_int64_t_s_s(g_4, (((func_5(((safe_sub_func_int64_t_s_s(0xBE39E3CF95751CFDLL, ((l_12++) ^ (func_15((func_19(l_21) ^ (l_633 != l_633))) != l_21)))) || (*g_151)), l_21, l_824, g_719) & l_824) & 0xB562CEDB97325D1DLL) && l_824))) | l_1047) != l_824);




    ;
    ;
    if ((l_1051 <= ((*l_1049) = ((*l_1060) = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(4UL, (&l_1048 == ((*l_1058) = ((*l_1056) = &l_1048))))) <= (9L > (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((((safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*l_1070) = (*l_1060)), ((void*)0 != (*g_905)))), (***g_975))) == 0x43L) & 0L), (*g_151))), (*g_378))))), g_719))))))
    {
        int *l_1073 = &g_24;
        const short *l_1097 = (void*)0;
        char l_1100 = 0x51L;
        short *l_1109 = (void*)0;
        int **l_1110 = (void*)0;
        int **l_1111 = &l_1048;
        int *l_1112 = &g_37;
        for (g_488 = 0; (g_488 <= 2); g_488 = safe_add_func_uint32_t_u_u(g_488, 1))
        {
            int l_1074 = 0xED6A9CD6L;
            unsigned *l_1077 = (void*)0;
            unsigned *l_1078 = (void*)0;
            unsigned *l_1079 = &g_452;
            int **l_1087 = &g_365;
            int ***l_1086 = &l_1087;
            char l_1088 = 5L;
            unsigned long long l_1093 = 8UL;
            int *l_1094 = &g_257;
            unsigned char *l_1095 = &g_1096;
            (*l_1073) = ((0L & func_52(func_55(func_55(&g_1061, l_1073, l_1074, ((l_1074 ^ (safe_sub_func_int32_t_s_s(((*l_1060) >= (l_1074 == ((*l_1079)++))), (((g_1082 == l_1086) || (*l_1073)) || 1UL)))) && (*l_1060)), l_1077), &l_21, g_185, l_1074, &g_1050), g_1018)) <= g_488);
            (*l_1049) ^= (~(g_742 ^ (l_1088 && (safe_sub_func_int8_t_s_s(0x46L, ((*l_1095) &= func_27((*l_1073), (safe_rshift_func_uint8_t_u_s(1UL, (*l_1073))), ((*l_1094) = l_1093), g_120, g_120)))))));
        }
        l_1112 = ((*l_1111) = func_61(l_1097, (*l_1073), (safe_mod_func_uint32_t_u_u(l_1100, (safe_lshift_func_int8_t_s_s(((&g_515 == &g_515) ^ ((g_247 <= (***g_975)) < (safe_add_func_uint32_t_u_u((*l_1073), (safe_add_func_int64_t_s_s(g_120, (*l_1073))))))), (***g_975))))), l_1109));

        ;
        ;
    }
    else
    {
        unsigned l_1113 = 0x9FF46232L;
        (*l_1060) = (*l_1060);
        (*g_1084) |= (0UL >= l_1113);
    }

    ;
    ;
    ;
    return (*g_517);
}







static unsigned short func_5(short p_6, unsigned long long p_7, unsigned long long p_8, unsigned p_9)
{
    unsigned char l_845 = 0x67L;
    int l_922 = 1L;
    unsigned long long **l_933 = &g_378;
    unsigned long long ***l_932 = &l_933;
    unsigned long long l_984 = 9UL;
    unsigned ***** const l_1044 = &g_905;
    int *l_1045 = &l_922;
    int **l_1046 = &l_1045;
    for (g_274 = 2; (g_274 <= 7); g_274++)
    {
        short l_827 = 0L;
        int l_831 = 0xF0E37AB3L;
        char l_846 = 0x32L;
        int *l_918 = &g_24;
        const unsigned long long *l_927 = (void*)0;
        const unsigned long long **l_926 = &l_927;
        const unsigned long long ***l_925 = &l_926;
        unsigned char l_979 = 255UL;
        char l_1029 = 0x68L;
        if (l_827)
        {
            unsigned long long l_830 = 0UL;
            int *l_858 = (void*)0;
            unsigned l_859 = 0x7C3D1454L;
            unsigned l_894 = 0x26B681CEL;
            for (p_6 = (-22); (p_6 == (-30)); p_6 = safe_sub_func_int32_t_s_s(p_6, 1))
            {
                long long l_853 = 1L;
                int *l_854 = &l_831;
                l_830 ^= p_6;
                if ((l_831 = p_8))
                {
                    unsigned long long **l_844 = &g_378;
                    unsigned long long ***l_843 = &l_844;
                    unsigned long long ****l_842 = &l_843;
                    int *l_847 = &l_831;
                    (*l_847) = ((-9L) != (0x5CA36722L > (safe_lshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_uint64_t_u_u((**g_516), p_9)), p_6)) || p_9), (&g_516 == ((*l_842) = (void*)0)))) ^ func_27(g_37, g_250, l_845, l_830, l_846)) <= l_845), g_76))));

                    ;
                    for (g_250 = 0; (g_250 < 1); g_250 = safe_add_func_int64_t_s_s(g_250, 1))
                    {
                        unsigned short l_850 = 65528UL;
                        ++l_850;
                    }
                }
                else
                {
                    return g_375;
                }
                (*l_854) = l_853;
                for (l_853 = 0; (l_853 < 21); l_853 = safe_add_func_uint32_t_u_u(l_853, 1))
                {
                    int *l_857 = &g_24;
                    (*l_857) = ((*l_854) = l_830);
                    if (l_830)
                        break;
                }
            }
            l_859 = p_9;
            if (func_38(l_845))
            {
                for (l_859 = 0; (l_859 > 20); ++l_859)
                {
                    int *l_862 = &l_831;
                    (*l_862) = p_7;
                    l_862 = l_862;
                }
                l_831 ^= p_9;
            }
            else
            {
                unsigned char l_869 = 249UL;
                int *l_889 = (void*)0;
                int *l_921 = &g_24;
                for (p_9 = 10; (p_9 != 55); p_9 = safe_add_func_uint16_t_u_u(p_9, 3))
                {
                    unsigned short *l_870 = (void*)0;
                    unsigned short *l_871 = (void*)0;
                    unsigned short *l_872 = &g_198;
                    int l_873 = 0x41DC3287L;
                    unsigned char *l_876 = &l_845;
                    unsigned short *l_881 = &g_481;
                    unsigned *l_890 = (void*)0;
                    if ((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((l_873 = ((*l_872) |= l_869)) & (safe_sub_func_uint8_t_u_u(((*l_876)++), (safe_lshift_func_int8_t_s_s(0xCFL, 5))))) > g_719), func_38(l_869))), (++(*l_881)))))
                    {
                        int **l_884 = &g_365;
                        (*l_884) = &l_831;

                        ;
                    }
                    else
                    {
                        unsigned **l_891 = (void*)0;
                        unsigned **l_892 = (void*)0;
                        unsigned **l_893 = &l_890;
                        int *l_895 = &g_24;
                        int *l_896 = &l_873;
                        int **l_897 = &l_858;
                        unsigned *****l_904 = &g_519;
                        unsigned char *l_910 = &l_869;
                        (*l_895) |= (safe_mod_func_int64_t_s_s((func_38((safe_mod_func_uint16_t_u_u(((l_873 = l_831) && ((((*l_893) = l_890) != (void*)0) == 5UL)), l_845))) | 0x6DAA739DL), l_894));
                        (*l_897) = l_896;

                        ;
                        (*l_895) |= ((((safe_mod_func_uint64_t_u_u(l_845, g_250)) & (safe_add_func_int8_t_s_s((1UL ^ ((*l_910) = (((0xEF3EL < (l_873 ^ (!p_9))) ^ (~(safe_lshift_func_uint16_t_u_u(((((*l_904) = (void*)0) == (g_905 = &g_520)) | ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_7, 1)), g_131)) ^ g_488)), 12)))) <= 0xE55F8A38D32E372CLL))), 0xA4L))) || p_6) | 0xBAF991DBE7F70618LL);

                        ;
                    }


                    if (p_8)
                        continue;

                    g_24 = (safe_rshift_func_uint8_t_u_s(((g_257 > (&g_184 != (void*)0)) <= 0x18L), 6));
                    for (g_488 = 0; (g_488 <= 9); g_488 = safe_add_func_int16_t_s_s(g_488, 7))
                    {
                        short *l_917 = &g_51;
                        int **l_919 = &l_918;
                        l_918 = func_61(l_881, (func_27(((*l_917) &= (p_7 && p_9)), g_76, l_873, g_356, p_8) || p_9), g_619, &g_274);

                        ;
                        (*l_918) = ((void*)0 == &g_520);
                        (*l_919) = &l_873;

                        ;
                        if (p_8)
                            break;
                    }


                }




                (*l_921) ^= (((safe_unary_minus_func_uint8_t_u(g_250)) >= p_8) != p_9);
            }




        }
        else
        {
            const unsigned long long ****l_928 = (void*)0;
            const unsigned long long ****l_929 = (void*)0;
            const unsigned long long ****l_930 = (void*)0;
            const unsigned long long ****l_931 = &l_925;
            l_922 = ((*l_918) = 1L);
            (*l_918) = ((*l_918) >= 0UL);
            (*l_918) = (safe_mod_func_int16_t_s_s((((((*l_931) = l_925) != l_932) ^ (safe_add_func_uint8_t_u_u((p_9 < (*l_918)), func_38(p_8)))) > g_452), g_139));
        }



        if ((safe_add_func_uint64_t_u_u(p_7, 2L)))
        {
            const int **l_938 = (void*)0;
            int l_939 = 0x79B009DDL;
            int *l_940 = &g_37;
            l_918 = (void*)0;

            ;
            if (((*l_940) = (l_939 = (&l_932 == &g_515))))
            {
                return p_6;


            }
            else
            {
                char *l_957 = &g_76;
                int l_960 = 0L;
                int l_961 = 0L;
                char * const *l_974 = &l_957;
                char * const * const *l_973 = &l_974;
                l_961 |= (safe_mod_func_uint64_t_u_u(p_8, (safe_rshift_func_int16_t_s_u((((safe_lshift_func_uint16_t_u_u((((p_8 > (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((func_27((safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u(((**l_933) = p_8), (safe_sub_func_int32_t_s_s((*l_940), (l_957 != l_957))))), (*l_940))), (safe_sub_func_int32_t_s_s(0xC6D3D1DBL, (+p_9))), g_78, p_8, p_9) | (*g_517)), p_8)) >= 0xA53D724DE3563156LL), g_481))) > p_8) < 1L), p_8)) & l_960) < 0xBF1CL), 12))));
                for (p_9 = 0; (p_9 == 14); p_9 = safe_add_func_int64_t_s_s(p_9, 7))
                {
                    char ***l_978 = &g_976;
                    const unsigned *****l_982 = (void*)0;
                    int l_983 = 1L;
                    long long *l_985 = &g_247;
                    if (((safe_mod_func_uint64_t_u_u((p_9 != p_9), ((*l_985) = (safe_div_func_int16_t_s_s(((p_9 != g_276) <= (safe_rshift_func_int16_t_s_u(4L, ((safe_unary_minus_func_uint64_t_u((~(safe_mod_func_int64_t_s_s(((l_973 == (l_978 = g_975)) >= l_979), (safe_div_func_int64_t_s_s((func_27((+(((l_982 != (void*)0) < l_983) || g_356)), p_9, p_8, g_94, p_8) ^ 0x0C9437B06C57527ALL), g_557))))))) & l_984)))), g_452))))) & p_6))
                    {
                        int *l_986 = &g_37;
                        int *l_987 = &l_983;
                        int *l_988 = (void*)0;
                        int *l_989 = &l_960;
                        int *l_990 = &l_939;
                        int *l_991 = &g_37;
                        int *l_992 = (void*)0;
                        int *l_993 = &l_922;
                        int *l_994 = &l_961;
                        int *l_995 = &l_960;
                        int *l_996 = &l_922;
                        int *l_997 = &g_24;
                        int *l_998 = (void*)0;
                        int *l_999 = &l_983;
                        int *l_1000 = &g_24;
                        int *l_1001 = &l_922;
                        int *l_1002 = (void*)0;
                        int *l_1003 = &l_939;
                        int *l_1004 = (void*)0;
                        int *l_1005 = &g_24;
                        int *l_1006 = &g_37;
                        int *l_1007 = &l_922;
                        int l_1008 = 0x23799F67L;
                        int *l_1009 = (void*)0;
                        int *l_1010 = &l_960;
                        int *l_1011 = &l_922;
                        int *l_1012 = (void*)0;
                        int *l_1013 = &l_983;
                        int *l_1014 = &g_24;
                        int *l_1015 = &l_960;
                        int *l_1016 = &l_922;
                        int *l_1017 = &g_37;
                        g_1018++;
                        if (l_961)
                            break;
                    }
                    else
                    {
                        int *l_1021 = &l_922;
                        int **l_1022 = &l_940;
                        (*l_1022) = l_1021;

                        ;
                        (*l_940) = (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((-3L), (**g_976))), 2));
                        if (p_6)
                            continue;
                    }
                }

                ;
            }

            ;
            (*l_940) |= (((safe_div_func_int16_t_s_s(9L, p_9)) && (**g_976)) < (p_8 < l_1029));
            if (p_6)
                continue;

        }
        else
        {
            int *l_1037 = (void*)0;
            short *l_1040 = &l_827;
            short l_1041 = 0x1809L;
            l_831 = (((l_922 = (safe_div_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u(g_184)), (safe_add_func_int64_t_s_s(p_8, (safe_sub_func_int8_t_s_s(p_9, ((void*)0 != &g_154)))))))) > ((safe_add_func_int16_t_s_s(p_6, (func_27(((*l_1040) = (~g_356)), p_9, (p_9 > 0xD79B805EL), g_481, l_1041) || 0x05L))) ^ l_845)) || 0L);
        }


    }

    ;
    (*l_1045) = ((safe_sub_func_int8_t_s_s(p_6, (+0x2EL))) && (l_1044 == (void*)0));
    (*l_1046) = &l_922;
    return g_4;
}







static unsigned long long func_15(const unsigned char p_16)
{
    unsigned short *l_636 = &g_198;
    int l_643 = 0x61CDED3DL;
    int l_648 = (-1L);
    long long *l_797 = &g_247;
    long long ** const l_796 = &l_797;
    unsigned long long **l_805 = &g_378;
    char *l_815 = &g_76;
    char *l_816 = (void*)0;
    int l_817 = 0x4C1ADD52L;
    int **l_823 = &g_365;
    if ((safe_rshift_func_uint16_t_u_s(((*l_636)--), (((safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((*g_151) || (l_643 <= ((safe_lshift_func_uint8_t_u_s((l_643 & l_643), (((safe_sub_func_uint32_t_u_u(((*g_517) != 0x381538AE9199FA52LL), ((p_16 && func_52(&l_643, (l_648 = g_261))) & p_16))) && 65535UL) < p_16))) ^ g_154))) == 4294967294UL), g_488)), p_16)) != g_247) ^ (*g_365)))))
    {
        return p_16;
    }
    else
    {
        unsigned short l_651 = 0xF9F7L;
        int l_695 = 0xECABB803L;
        short *l_808 = &g_51;
        short *l_809 = (void*)0;
        short *l_810 = &g_274;
        for (g_37 = 17; (g_37 >= (-16)); g_37 = safe_sub_func_int8_t_s_s(g_37, 1))
        {
            unsigned long long l_658 = 18446744073709551609UL;
            int l_663 = 1L;
            char *l_667 = (void*)0;
            int l_700 = (-9L);
            long long *l_755 = &g_356;
            long long **l_754 = &l_755;
        }
        (*g_365) = p_16;
        (*g_365) = (!((safe_lshift_func_uint8_t_u_s((p_16 != (l_805 == l_805)), (safe_lshift_func_int16_t_s_u(((*l_810) = ((*l_808) |= ((-1L) && (-1L)))), ((void*)0 == l_805))))) != ((p_16 && ((8UL != p_16) && l_643)) | p_16)));
    }
    if (g_24)
        goto lbl_822;
lbl_822:
    (*g_365) = ((l_643 || (p_16 && (((**l_796) = 2L) && p_16))) != (safe_sub_func_int8_t_s_s((l_817 = (p_16 != (safe_lshift_func_int8_t_s_u((l_648 = ((*l_815) = l_648)), 6)))), (safe_sub_func_int64_t_s_s(g_481, (safe_add_func_int8_t_s_s(g_274, 0x3DL)))))));
    (*l_823) = &l_648;

    ;
    return (***g_515);


}







static char func_19(int p_20)
{
    int l_494 = (-3L);
    int *l_524 = (void*)0;
    short *l_550 = &g_274;
    int l_605 = 6L;
    int l_609 = 7L;
    unsigned long long l_625 = 5UL;
    for (p_20 = 0; (p_20 >= (-1)); p_20 = safe_sub_func_int64_t_s_s(p_20, 9))
    {
        long long l_493 = (-4L);
        unsigned long long * const *l_530 = &g_378;
        int l_532 = 8L;
        short l_551 = 0x8E3BL;
        int l_611 = (-3L);
        long long *l_628 = &g_356;
        int *l_629 = &l_605;
        int *l_630 = &l_494;
        for (g_24 = 0; (g_24 <= (-25)); g_24 = safe_sub_func_uint8_t_u_u(g_24, 5))
        {
            char *l_484 = &g_4;
            char *l_487 = &g_488;
            int l_521 = 2L;
            long long l_534 = 0xBE0D1BAC34EDC856LL;
            int l_560 = 3L;
            int **l_622 = &g_370;
            if (func_27(g_24, func_33(p_20), ((void*)0 != l_484), (((safe_add_func_int8_t_s_s(((&g_270 != (void*)0) && ((*l_487) = 1L)), (safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(l_493, 255UL)), 8)))) && p_20) ^ p_20), l_494))
            {
                l_521 = (safe_unary_minus_func_int64_t_s((safe_div_func_int64_t_s_s((((safe_div_func_int8_t_s_s(((void*)0 != g_515), p_20)) >= 0UL) || (!(g_519 == (void*)0))), (*g_378)))));
            }
            else
            {
                unsigned long long l_531 = 0xB492015246862467LL;
                int *l_552 = &g_24;
                if (p_20)
                {
                    unsigned *l_539 = (void*)0;
                    int *l_540 = &l_532;
                    short *l_549 = &g_51;
                    int **l_553 = &l_540;
                    int **l_554 = &l_552;
                    for (g_257 = (-27); (g_257 == (-12)); ++g_257)
                    {
                        unsigned short *l_529 = &g_198;
                        int *l_533 = &l_521;
                        l_524 = func_61(&g_274, p_20, (!g_477), &g_274);

                        ;
                        (*l_533) = (func_33((safe_div_func_uint64_t_u_u(((func_38(g_152) < (((g_481 < (~g_4)) >= (safe_add_func_uint16_t_u_u(((*l_529) = g_4), ((void*)0 == l_530)))) ^ p_20)) && ((*l_524) && l_531)), g_274))) < l_532);
                        (*l_533) ^= 0xB3961BCFL;
                    }
                    (*l_540) = (l_534 < (l_532 | (safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((l_539 == (void*)0), 0x5DE5531A4B75B1A3LL)), 0xF825L))));
                    (*l_554) = ((*l_553) = func_55(func_61(&g_274, ((((g_78 &= ((*l_487) ^= ((0x275BE45FL == (((*l_549) = (0xD21FA75AL ^ (((0x86L <= (safe_add_func_uint64_t_u_u(func_52(&g_37, p_20), ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(0xB7L, 0UL)), 0)), p_20)) <= g_76)))) >= p_20) || g_4))) != l_534)) | l_532))) == 0x5FL) | p_20) ^ 0xD0E269AAF8453B7DLL), l_493, l_550), &l_521, p_20, l_551, l_552));

                    ;
                }
                else
                {
                    long long l_588 = (-1L);
                    if ((g_139 < (safe_mod_func_uint16_t_u_u(p_20, func_52(&p_20, g_557)))))
                    {
                        return p_20;
                    }
                    else
                    {
                        unsigned l_558 = 3UL;
                        int **l_559 = &g_370;
                        int *l_561 = (void*)0;
                        int *l_562 = (void*)0;
                        int *l_563 = &g_37;
                        int *l_564 = &l_521;
                        int *l_565 = &l_521;
                        int *l_566 = (void*)0;
                        int *l_567 = &l_494;
                        int *l_568 = &g_37;
                        int *l_569 = &l_532;
                        int *l_570 = &l_560;
                        int *l_571 = &g_37;
                        int *l_572 = &l_560;
                        int *l_573 = &g_37;
                        int *l_574 = &l_494;
                        int *l_575 = &l_560;
                        int *l_576 = &l_521;
                        int *l_577 = &l_560;
                        int *l_578 = &l_521;
                        int *l_579 = &g_37;
                        int *l_580 = &l_532;
                        int *l_581 = &l_521;
                        int *l_582 = &l_494;
                        int *l_583 = &l_560;
                        int *l_584 = (void*)0;
                        int *l_585 = &g_37;
                        int *l_586 = &l_521;
                        int *l_587 = &l_521;
                        int *l_589 = &l_494;
                        int *l_590 = &l_560;
                        int *l_591 = &g_37;
                        int *l_592 = &l_532;
                        int *l_593 = &g_37;
                        int *l_594 = &g_37;
                        int *l_595 = &l_521;
                        int *l_596 = &l_532;
                        int *l_597 = &l_494;
                        int *l_598 = &l_521;
                        int *l_599 = (void*)0;
                        int *l_600 = &l_494;
                        int *l_601 = &g_37;
                        int *l_602 = &l_521;
                        int *l_603 = &l_521;
                        int *l_604 = &l_521;
                        int *l_606 = &l_532;
                        int *l_607 = &l_560;
                        int *l_608 = &l_494;
                        int *l_610 = (void*)0;
                        int *l_612 = &l_560;
                        int *l_613 = &l_494;
                        int *l_614 = &l_611;
                        int l_615 = 0x12A0CDF3L;
                        int *l_616 = &l_494;
                        int *l_617 = (void*)0;
                        int *l_618 = &l_609;
                        l_558 = p_20;
                        (*l_559) = &g_37;

                        ;
                        g_619--;
                    }

                    ;
                    if ((*g_370))
                        break;
                }
            }
            (*l_622) = (void*)0;

            ;
            l_605 &= (safe_lshift_func_int8_t_s_s(((*g_517) & (*g_378)), g_76));
        }
        l_625 &= (0x7EL | 0x6FL);
        (*l_630) &= ((*l_629) |= (safe_lshift_func_uint16_t_u_u((func_38(((*l_628) = func_33(p_20))) & p_20), 1)));
        (*g_365) ^= ((safe_add_func_uint16_t_u_u((*l_629), 0x8ADEL)) > 0xCC95FB7CL);
    }



    ;
    ;
    return g_477;
}







static int func_27(const short p_28, int p_29, int p_30, unsigned char p_31, int p_32)
{
    unsigned short l_495 = 0x52F3L;
    int *l_498 = &g_37;
    char l_499 = 0L;
    unsigned *l_505 = &g_261;
    unsigned **l_504 = &l_505;
    int *l_508 = (void*)0;
    short l_509 = 0x0859L;
    (*l_498) = (l_495 > (safe_lshift_func_uint8_t_u_s(g_481, 0)));
    l_499 = 1L;
    l_509 |= (0UL != ((safe_mod_func_int32_t_s_s((g_270 != l_504), p_31)) < ((*l_498) = (g_37 < (((*l_498) <= ((safe_sub_func_int8_t_s_s(g_154, 9L)) == (g_247 != 1UL))) <= 0x627CL)))));
    return p_31;
}







static int func_33(int p_34)
{
    unsigned char l_35 = 0x66L;
    int *l_36 = &g_37;
    short *l_50 = &g_51;
    unsigned long long *l_66 = (void*)0;
    char *l_75 = &g_76;
    char *l_77 = &g_78;
    int *l_194 = &g_24;
    unsigned short *l_197 = &g_198;
    int l_357 = 0x3E13164FL;
    const int *l_360 = &g_24;
    unsigned long long l_362 = 0x76FF5385E6D03351LL;
    unsigned long long **l_408 = &l_66;
    long long l_455 = 0x88B6B8BDBB942920LL;
    (*l_36) = l_35;
    if (func_38((safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((*l_50) = p_34) | ((*l_197) = func_52(func_55(&g_24, func_61(l_50, g_24, (p_34 && (((*l_36) ^= p_34) && (p_34 != (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(((((*l_77) = ((*l_75) &= ((safe_sub_func_uint32_t_u_u((*l_36), p_34)) >= 0L))) && g_37) >= g_4), 5)), 0)) | p_34), g_24))))), l_50), g_4, p_34, l_194), p_34))) && p_34), p_34)), g_190)) ^ g_190), g_190)), (-6L))) & p_34), 0xB525E98B5088466DLL))))
    {
        long long *l_355 = &g_356;
        const int *l_361 = &l_357;
        int *l_369 = (void*)0;
        l_357 ^= (p_34 && ((*l_355) = ((g_198 &= (safe_add_func_uint32_t_u_u(p_34, (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_int32_t_s((1L == (~((*l_75) |= (safe_unary_minus_func_int64_t_s((g_247 = (&g_274 == l_197))))))))), ((*l_36) <= (*l_194)))), (*l_194)))))) != g_185)));
        (*l_36) = p_34;
        for (g_154 = 6; (g_154 < 51); ++g_154)
        {
            int **l_366 = &g_365;
            (*l_36) = func_52(l_360, (func_52(l_361, l_362) || (safe_rshift_func_int16_t_s_u(((*l_50) = (*g_151)), 4))));
            l_361 = func_55(&p_34, (*l_366), (**l_366), (**l_366), l_369);

            ;
            (*l_366) = (*l_366);
        }

        ;
        for (l_362 = (-19); (l_362 < 51); ++l_362)
        {
            const unsigned long long *l_374 = &g_375;
            const unsigned long long **l_373 = &l_374;
            unsigned long long **l_376 = (void*)0;
            unsigned long long **l_377 = &l_66;
            int l_379 = 0L;
            const int **l_380 = &g_189;
            int *l_383 = (void*)0;
            (*l_36) = (l_379 || (p_34 < func_52(((*l_380) = &l_357), p_34)));


            (*l_36) |= (l_379 = (safe_lshift_func_uint8_t_u_u(g_247, 5)));
            (*l_380) = l_383;

            ;
            return g_139;
        }
    }
    else
    {
        int **l_384 = &g_365;
        (*l_36) = p_34;
        (*l_384) = &g_24;
    }
    g_191 = &p_34;

    ;
    for (g_51 = (-14); (g_51 != (-30)); --g_51)
    {
        long long *l_389 = (void*)0;
        long long *l_390 = &g_356;
        const int **l_391 = &l_360;
        const short *l_410 = &g_51;
        unsigned char l_416 = 250UL;
        unsigned short l_417 = 0x5006L;
        unsigned *l_451 = &g_452;
        l_360 = &g_24;

        ;
        (*l_36) |= (p_34 |= 0L);
        if (((safe_add_func_uint64_t_u_u((((*l_390) |= ((void*)0 == &l_35)) && (0x381760DBL ^ (func_52(&g_37, func_52(((*l_391) = &p_34), (0x92L == (safe_div_func_int16_t_s_s(p_34, (*g_151)))))) && p_34))), (*g_378))) | g_76))
        {
            if ((**l_391))
            {
                return p_34;


            }
            else
            {
                if ((*l_36))
                    break;
            }
        }
        else
        {
            short *l_398 = &g_274;
            const int *l_399 = &g_190;
            (*l_36) = (safe_mod_func_int16_t_s_s(((*l_398) = (safe_mod_func_int16_t_s_s((p_34 | (~p_34)), p_34))), func_52(l_399, (**l_391))));
        }

        ;
        if ((0x4BL > (**l_391)))
        {
            long long l_404 = 0x96EA88E26377905ALL;
            unsigned long long **l_407 = (void*)0;
            unsigned long long ***l_409 = &l_408;
            short *l_415 = (void*)0;
            l_417 = (safe_sub_func_uint64_t_u_u(((*g_378) = (safe_add_func_int8_t_s_s((l_404 < (safe_add_func_int16_t_s_s(0xE188L, (l_407 == ((*l_409) = l_408))))), ((((func_52(func_61(l_410, (*g_365), (safe_rshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(g_375, (**l_391))), 4)), l_415), l_404) || p_34) != 0x2727L) ^ p_34) < l_416)))), p_34));


            return g_190;


        }
        else
        {
            char l_420 = 0xFEL;
            const unsigned ***l_425 = (void*)0;
            (*l_36) ^= 0x36898EC1L;
            (*l_36) = (-1L);
            for (l_35 = 0; (l_35 == 31); l_35 = safe_add_func_int16_t_s_s(l_35, 5))
            {
                return p_34;


            }
            if (((~0xB70AL) < (l_420 > ((*g_151) < l_420))))
            {
                int **l_422 = &g_370;
                int ***l_421 = &l_422;
                const unsigned ****l_426 = &l_425;
                (*l_36) = ((((*l_421) = (void*)0) == &g_365) | (safe_rshift_func_int16_t_s_s((((*l_197) &= (&g_131 == &g_131)) >= (&g_270 != ((*l_426) = l_425))), ((!(*g_378)) == p_34))));

                ;
            }
            else
            {
                unsigned short l_456 = 0UL;
                int l_465 = 0xA0681AF4L;
                if (p_34)
                {
                    unsigned *l_427 = (void*)0;
                    unsigned *l_428 = &g_261;
                    unsigned *** const l_430 = &g_270;
                    unsigned *** const *l_429 = &l_430;
                    short *l_453 = &g_274;
                    long long l_454 = (-1L);
                    l_456 &= ((((((*l_428) = p_34) != (l_429 == (void*)0)) & (4L > (p_34 == (safe_add_func_int32_t_s_s(((*l_36) = ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(((((safe_div_func_uint32_t_u_u(0x0B0FF158L, (safe_lshift_func_uint16_t_u_u(((*g_365) == (l_420 | (((*l_453) |= (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((l_451 == l_451), 3)), l_420))) >= p_34))), g_231)))) == 4L) & (*g_378)) <= (*g_378)), 0)) == p_34) && l_454), g_154)), 0L)), (*l_360))), 4294967289UL)) | (*g_365))), l_455))))) && g_152) & 0xED6D0522A98C11E5LL);
                    (*l_391) = l_428;

                    ;
                }
                else
                {
                    return p_34;


                }

                ;
                for (l_456 = 0; (l_456 <= 23); l_456 = safe_add_func_int16_t_s_s(l_456, 9))
                {
                    int l_459 = 0x21D28F4EL;
                    int l_460 = (-4L);
                    int *l_461 = &l_460;
                    int *l_462 = &l_460;
                    int *l_463 = &l_460;
                    int *l_464 = &g_37;
                    int *l_466 = (void*)0;
                    int *l_467 = &g_37;
                    int *l_468 = &l_465;
                    int *l_469 = (void*)0;
                    int *l_470 = &l_460;
                    int *l_471 = (void*)0;
                    int *l_472 = &l_465;
                    int *l_473 = (void*)0;
                    int *l_474 = &g_37;
                    int *l_475 = &l_465;
                    int *l_476 = &g_37;
                    int *l_478 = &g_37;
                    int *l_480 = &l_460;
                    g_481++;
                    (*l_391) = &p_34;

                    ;
                    if (p_34)
                        break;
                }

                ;
            }

            ;
        }

        ;
    }

    ;
    return p_34;


}







static int func_38(const long long p_39)
{
    int *l_199 = &g_37;
    int *l_200 = &g_37;
    int *l_201 = &g_37;
    int *l_202 = (void*)0;
    int *l_203 = (void*)0;
    int l_204 = 1L;
    int *l_205 = &g_37;
    int *l_206 = &l_204;
    int *l_207 = &l_204;
    int *l_208 = &l_204;
    int *l_209 = &g_37;
    int *l_210 = &g_37;
    int *l_211 = &l_204;
    int l_212 = 0x3EF347DCL;
    int *l_213 = &l_212;
    int *l_214 = &g_37;
    int *l_215 = (void*)0;
    int *l_216 = &g_37;
    int *l_217 = &l_212;
    int *l_218 = &l_204;
    int *l_219 = &l_204;
    int *l_220 = (void*)0;
    int *l_221 = &l_212;
    int *l_222 = &g_37;
    int *l_223 = &g_37;
    int *l_224 = &l_204;
    int *l_225 = (void*)0;
    int *l_226 = (void*)0;
    int *l_227 = &l_212;
    int *l_228 = &l_212;
    int *l_229 = &l_204;
    int l_230 = 1L;
    long long l_262 = 0L;
    char l_311 = 0xACL;
    --g_231;
    for (g_51 = (-27); (g_51 >= (-5)); ++g_51)
    {
        int **l_236 = &l_221;
        (*l_236) = &l_212;
    }
    for (g_120 = (-21); (g_120 >= (-17)); g_120 = safe_add_func_uint16_t_u_u(g_120, 6))
    {
        const int *l_241 = &l_204;
        unsigned char *l_242 = &g_154;
        long long *l_245 = (void*)0;
        long long *l_246 = &g_247;
        unsigned long long *l_248 = (void*)0;
        unsigned long long *l_249 = &g_250;
        int *l_263 = &l_204;
        unsigned char l_290 = 246UL;
        unsigned char l_292 = 255UL;
        unsigned l_308 = 1UL;
        unsigned char l_341 = 0x9AL;
        (*l_205) &= ((*l_206) = p_39);
        (*l_209) |= p_39;
        (*l_228) ^= (safe_sub_func_int64_t_s_s(func_52(l_241, ((*l_242) = (*l_224))), ((((*l_249) &= (0x5E376B2687175307LL & ((*l_246) = (0xD47C0CCAL == (p_39 & (+((((0x51L <= ((safe_add_func_uint16_t_u_u((*l_241), 0x99EAL)) <= g_76)) | p_39) >= p_39) && (*l_241)))))))) | g_190) == g_185)));
        for (g_250 = 13; (g_250 <= 22); g_250++)
        {
            int *l_254 = (void*)0;
            char *l_259 = (void*)0;
            unsigned ***l_333 = &g_270;
            const int l_340 = 0x5FDD1E5FL;
        }
    }
    return p_39;
}







static unsigned short func_52(const int * p_53, unsigned char p_54)
{
    int *l_196 = &g_37;
    (*l_196) = (*p_53);
    return p_54;
}







static int * func_55(int * p_56, int * p_57, unsigned p_58, unsigned p_59, int * p_60)
{
    unsigned short l_195 = 1UL;
    l_195 = (*p_57);
    return p_56;


}







static int * func_61(const short * p_62, int p_63, unsigned char p_64, short * p_65)
{
    int *l_79 = &g_37;
    int *l_80 = &g_37;
    int *l_81 = &g_37;
    int *l_82 = &g_37;
    int *l_83 = &g_37;
    int *l_84 = (void*)0;
    int *l_85 = &g_37;
    int *l_86 = &g_37;
    int *l_87 = &g_37;
    char l_88 = 5L;
    int *l_89 = &g_37;
    int *l_90 = &g_37;
    int *l_91 = &g_37;
    int l_92 = 0x663B8B2EL;
    int *l_93 = &g_37;
    int *l_95 = &l_92;
    int *l_96 = &l_92;
    int *l_97 = &l_92;
    int l_98 = 0L;
    int *l_99 = &g_37;
    int l_100 = 1L;
    int l_101 = 0x08211ABDL;
    int *l_102 = &l_92;
    int *l_103 = &g_37;
    int *l_104 = &l_98;
    int *l_105 = (void*)0;
    int *l_106 = &l_101;
    int *l_107 = (void*)0;
    int *l_108 = &l_100;
    int *l_109 = (void*)0;
    int l_110 = (-5L);
    int *l_111 = &g_37;
    int *l_112 = &l_100;
    int *l_113 = &l_92;
    int *l_114 = &l_92;
    int *l_115 = &l_100;
    int *l_116 = &l_101;
    int *l_117 = &l_92;
    int *l_118 = &l_101;
    int *l_119 = &l_110;
    int l_121 = 0xED5AEC2CL;
    char l_122 = (-3L);
    int *l_123 = (void*)0;
    int *l_124 = (void*)0;
    int *l_125 = &l_101;
    int *l_126 = &l_92;
    int *l_127 = (void*)0;
    int *l_128 = &l_92;
    int *l_129 = &l_98;
    int *l_130 = &l_121;
    unsigned char l_159 = 5UL;
    --g_131;
    for (g_94 = (-15); (g_94 != (-30)); g_94--)
    {
        unsigned char l_142 = 246UL;
        unsigned char *l_153 = &g_154;
        unsigned long long l_168 = 18446744073709551607UL;
        int l_178 = (-1L);
        for (l_101 = 0; (l_101 <= (-19)); l_101 = safe_sub_func_uint64_t_u_u(l_101, 8))
        {
            short l_138 = 0L;
            g_139--;
        }
        l_142--;
        (*l_117) &= ((--p_64) <= (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(p_63, l_142)), ((*l_153) = ((g_151 == (void*)0) >= g_152)))));
        if ((safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((*l_119) = p_63), ((((l_159 || g_76) < (((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_64 && g_24), 4)), 8)) > (safe_div_func_uint8_t_u_u(0xAFL, g_78))) ^ ((safe_sub_func_int32_t_s_s(g_120, g_152)) >= l_168))) != p_64) && 4294967295UL))), g_37)))
        {
            int l_179 = 1L;
            int **l_192 = &l_129;
            for (l_122 = 4; (l_122 == 22); l_122 = safe_add_func_uint16_t_u_u(l_122, 4))
            {
                unsigned char *l_173 = &l_159;
                const int *l_188 = &l_92;
                l_179 ^= ((safe_mod_func_uint32_t_u_u(((void*)0 == &g_4), g_24)) ^ ((((*l_173) = ((*l_153) = (*l_106))) || ((safe_lshift_func_uint8_t_u_s(p_63, (l_178 = (safe_sub_func_uint16_t_u_u(l_142, (p_63 ^ ((((void*)0 == &p_63) ^ p_63) && p_63))))))) ^ p_63)) <= p_64));
                for (l_98 = 0; (l_98 <= (-9)); l_98 = safe_sub_func_int8_t_s_s(l_98, 8))
                {
                    for (g_120 = (-25); (g_120 > (-25)); g_120 = safe_add_func_int32_t_s_s(g_120, 9))
                    {
                        ++g_185;
                    }
                    g_191 = (g_189 = l_188);

                    ;
                    ;
                }
                (*l_79) |= p_64;
            }
            (*l_192) = &l_178;

            ;
        }
        else
        {
            const int **l_193 = &g_191;
            (*l_193) = &g_190;

            ;
        }


    }




    (*l_97) &= p_63;
    return &g_24;




}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_452, "g_452", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_481, "g_481", print_hash_value);
    transparent_crc(g_488, "g_488", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_742, "g_742", print_hash_value);
    transparent_crc(g_1018, "g_1018", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1096, "g_1096", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
