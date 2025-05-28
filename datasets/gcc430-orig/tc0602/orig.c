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



static int g_2 = (-2L);
static unsigned char g_18 = 1UL;
static long long g_20 = 0x01D1B9849B76EEA5LL;
static unsigned char g_30 = 0x27L;
static unsigned char *g_29 = &g_30;
static int g_77 = 0xAB92A1DDL;
static unsigned long long g_86 = 2UL;
static volatile unsigned char g_90 = 2UL;
static volatile unsigned char *g_89 = &g_90;
static volatile unsigned long long g_94 = 0UL;
static volatile unsigned long long *g_93 = &g_94;
static unsigned long long g_96 = 0x434BB1B2B1506F57LL;
static unsigned short g_99 = 0x84A8L;
static int *g_104 = &g_77;
static char g_110 = 4L;
static char g_112 = 0xFAL;
static long long *g_132 = &g_20;
static long long **g_131 = &g_132;
static char *g_145 = (void*)0;
static char **g_144 = &g_145;
static short g_156 = (-5L);
static char g_166 = 0x4CL;
static long long ***g_167 = &g_131;
static short g_201 = 0x1FB7L;
static int g_206 = (-2L);
static unsigned g_223 = 0x89C721D3L;
static volatile unsigned char **g_250 = (void*)0;
static volatile unsigned char ***g_249 = &g_250;
static long long g_353 = 0x4CEFB8E5B17DAC2CLL;
static short *g_403 = &g_201;
static short **g_402 = &g_403;
static int g_434 = 1L;
static unsigned short g_507 = 0xB97EL;
static int g_533 = 0xD7122663L;
static long long g_538 = (-1L);
static long long ****g_550 = &g_167;
static long long *****g_549 = &g_550;
static long long *****g_553 = &g_550;
static volatile int g_579 = (-1L);
static volatile int *g_578 = &g_579;
static volatile int **g_577 = &g_578;
static volatile int ***g_576 = &g_577;
static unsigned char **g_637 = &g_29;
static unsigned char ***g_636 = &g_637;
static unsigned short *g_659 = &g_99;
static unsigned short **g_658 = &g_659;
static volatile int g_821 = 1L;
static int g_827 = 0x8B13864FL;
static int g_857 = 1L;
static unsigned g_887 = 0xE15CC3A1L;
static unsigned g_890 = 6UL;
static int g_915 = (-1L);
static int g_1085 = 0x69D6CD46L;
static unsigned short g_1149 = 0UL;



static unsigned short func_1(void);
static char func_7(unsigned long long p_8, short p_9, short p_10, unsigned p_11, unsigned p_12);
static unsigned char * func_22(unsigned long long p_23, unsigned long long p_24, unsigned char p_25, unsigned p_26, unsigned p_27);
static unsigned long long func_32(short p_33);
static short func_40(long long * p_41, unsigned short p_42, long long p_43);
static unsigned short func_46(unsigned char * p_47);
static long long func_51(unsigned char p_52, int p_53, long long * p_54, unsigned short p_55, unsigned p_56);
static int func_60(long long * p_61, int p_62);
static long long * func_63(unsigned char * p_64, int p_65, long long p_66, char p_67, char p_68);
static unsigned long long func_69(short p_70);
static unsigned short func_1(void)
{
    long long l_28 = 1L;
    char l_918 = 0x33L;
    int **l_936 = &g_104;
    unsigned l_971 = 0x5144A779L;
    long long **l_986 = (void*)0;
    unsigned char *l_988 = &g_30;
    short **l_1010 = &g_403;
    long long l_1088 = 0xEFA1EDA9AE242392LL;
    char l_1090 = (-1L);
    long long ****l_1102 = &g_167;
    unsigned short l_1123 = 4UL;
    char **l_1131 = &g_145;
    char ***l_1132 = &g_144;
    unsigned char l_1150 = 0UL;
    int l_1151 = 0x101CC9A7L;
    unsigned l_1152 = 0x4AF8F2BCL;
    for (g_2 = 0; (g_2 > 18); g_2 = safe_add_func_int32_t_s_s(g_2, 2))
    {
        unsigned char *l_17 = &g_18;
        long long *l_19 = &g_20;
        int l_21 = (-1L);
        unsigned char *l_31 = &g_30;
        int *l_912 = (void*)0;
        int *l_913 = (void*)0;
        int *l_914 = &g_915;
        (*l_914) ^= ((safe_rshift_func_int8_t_s_s(func_7(g_2, (g_2 && (+((safe_lshift_func_uint16_t_u_s(g_2, 9)) > (((*l_19) = (safe_sub_func_uint8_t_u_u(((*l_17) = 0x45L), g_2))) && l_21)))), ((g_2 & ((l_31 = func_22(l_28, g_2, l_28, l_21, g_2)) != l_17)) != l_28), g_30, l_28), l_28)) | 0L);
        return (**g_658);
    }
    (**g_577) = (safe_add_func_uint64_t_u_u(l_918, (safe_lshift_func_int16_t_s_u((**g_402), (safe_rshift_func_int8_t_s_s(l_918, l_28))))));
    if ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_28, 2)), g_86)))
    {
        unsigned l_930 = 0xFA680D8AL;
        short l_933 = (-4L);
        long long **l_987 = (void*)0;
        int l_1002 = 0x167BED33L;
        unsigned char l_1023 = 255UL;
        long long *l_1051 = &g_20;
        long long *l_1121 = &g_20;
        for (g_857 = (-13); (g_857 < 15); g_857++)
        {
            volatile int *l_929 = &g_821;
            long long *l_945 = &g_20;
            int l_970 = (-1L);
            int l_1025 = 0x6EBB65F4L;
            l_929 = (**g_576);
            (*g_578) = l_930;
            for (g_110 = 0; (g_110 < 25); g_110++)
            {
                char l_949 = 6L;
                long long ***l_969 = &g_131;
                short l_993 = 0x645AL;
                unsigned long long l_1042 = 18446744073709551615UL;
            }
            for (g_18 = 0; (g_18 <= 32); g_18 = safe_add_func_int64_t_s_s(g_18, 1))
            {
                (*g_104) |= 0x519B99C6L;
            }
        }
        if ((safe_sub_func_int8_t_s_s((0UL || ((safe_sub_func_int8_t_s_s((l_1002 || (**g_658)), 0xE5L)) != (((-1L) | ((safe_unary_minus_func_uint64_t_u((func_40((****g_553), (**l_936), (***g_167)) <= l_1023))) >= l_1023)) && (**l_936)))), l_1002)))
        {
            int *l_1061 = &g_827;
            long long *l_1070 = &l_28;
            unsigned l_1107 = 0UL;
            short *l_1114 = &l_933;
            if (((*l_1061) &= (**l_936)))
            {
                long long *l_1071 = &g_538;
                char *l_1072 = (void*)0;
                char *l_1073 = &l_918;
                int l_1074 = (-9L);
                unsigned long long *l_1075 = &g_96;
                unsigned long long *l_1076 = &g_86;
                int *l_1077 = &g_857;
                (*l_1077) &= (((*l_1076) |= ((*l_1075) ^= (safe_sub_func_int64_t_s_s((g_890 > (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((((*g_93) | (safe_mod_func_uint32_t_u_u(0xE639B5CBL, ((**l_936) ^ (*l_1061))))) | func_40(((****g_549) = l_1070), (((*l_1073) = func_40(l_1071, ((*g_636) != (*g_636)), (**l_936))) && 7L), l_1074)) && 0x76DED29AECBD21FDLL), l_1074)), 7))), g_30)))) && l_930);
            }
            else
            {
                char ***l_1078 = &g_144;
                int l_1086 = 0xEED6F818L;
                long long **l_1087 = &l_1070;
                int l_1089 = 0x6F3FCA93L;
                (*l_1078) = &g_145;
                if (((((safe_rshift_func_int16_t_s_u((((**g_658) < 1L) | (**l_936)), (safe_lshift_func_uint8_t_u_u((!0x1EL), 0)))) && g_579) & ((safe_mod_func_uint16_t_u_u(((~((l_1086 = g_1085) != func_40((**g_167), (**g_658), (func_40(((*l_1087) = (**g_167)), l_930, (**g_131)) == (**g_402))))) && (-1L)), (*g_659))) & l_1088)) & (**g_658)))
                {
                    long long *****l_1093 = &g_550;
                    (**g_576) = (*g_577);
                    (**g_576) = (**g_576);
                    l_1090 &= l_1089;
                    (*g_578) |= (safe_mul_func_uint8_t_u_u((**l_936), ((l_1093 != &g_550) < ((*****g_553) && (((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((~(safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_1086, l_1002)), func_40((***g_550), ((**g_658) = (((*g_549) == l_1102) >= 1L)), (**g_131))))), 6)), (**l_936))) != (**g_402)) >= g_887)))));
                }
                else
                {
                    for (l_971 = 0; (l_971 > 4); l_971++)
                    {
                        int l_1108 = 7L;
                        if ((*g_104))
                            break;
                        l_1108 |= (safe_sub_func_int8_t_s_s((l_1107 = (*l_1061)), 0x45L));
                        (**g_577) &= (safe_add_func_int32_t_s_s((*l_1061), func_69((*g_403))));
                        (**l_936) ^= ((*l_1061) &= (***g_576));
                    }
                }
                (*g_578) = l_933;
            }
            (***g_576) = (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u((l_1114 == ((*g_402) = l_1114)))), 2));
        }
        else
        {
            short *l_1115 = &g_156;
            long long ******l_1120 = &g_553;
            int l_1122 = 0x7323E806L;
            l_1122 |= ((l_1115 == ((*g_402) = (void*)0)) != (safe_add_func_int16_t_s_s(((*l_1115) = func_40((***l_1102), (**l_936), (safe_mul_func_int8_t_s_s(((((&l_1102 == ((*l_1120) = (void*)0)) | ((func_40(l_1121, (**g_658), (func_40((***g_550), (*g_659), (*****g_549)) <= 246UL)) && (*g_93)) >= 0x5DL)) & (**l_936)) <= (**l_936)), 0x58L)))), 0x43C3L)));
            (**g_577) &= (*g_104);
            (*g_104) = ((**l_936) || 0xB004L);
        }
    }
    else
    {
        char l_1124 = 0L;
        (**g_577) = (**l_936);
        (*g_578) = l_1124;
    }
    (*g_104) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((l_1131 == ((*l_1132) = l_1131)) == ((*****g_549) != (safe_sub_func_uint32_t_u_u((func_40((***g_550), (safe_lshift_func_int8_t_s_s(g_579, (safe_add_func_int64_t_s_s(func_69(((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((g_201 ^ (safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s((**l_936), (safe_mul_func_int16_t_s_s(func_40((***g_550), g_1149, (*g_132)), (**l_936))))), (**l_936)))), 1)) < (**l_936)) >= 0xF4B45BCE5E34C24ELL), l_1150)) != (***g_167))), (***g_167))))), (**g_131)) && l_1151), 2UL)))), 1)), l_1152)), g_223));
    return (**g_658);
}







static char func_7(unsigned long long p_8, short p_9, short p_10, unsigned p_11, unsigned p_12)
{
    unsigned l_36 = 1UL;
    long long *l_39 = &g_20;
    unsigned char *l_48 = (void*)0;
    unsigned short *l_606 = &g_507;
    int *l_855 = &g_533;
    int *l_856 = &g_857;
    int l_870 = (-10L);
    char *l_871 = &g_110;
    unsigned l_910 = 18446744073709551615UL;
    int **l_911 = (void*)0;
    (*l_856) ^= ((*l_855) = (4UL == func_32((safe_mul_func_int8_t_s_s(0x28L, (g_20 ^ (l_36 == ((safe_add_func_uint8_t_u_u(((((l_39 == &g_20) < func_40(l_39, ((*l_606) = ((18446744073709551615UL & (safe_mul_func_uint16_t_u_u(func_46(l_48), l_36))) < 0xAB553806L)), l_36)) >= 0x096FDA9DA4EFBFECLL) <= 0x9DC035A220A624B7LL), p_12)) ^ 255UL))))))));
    if ((p_8 != (safe_sub_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((**g_402) = 1L), 14)), ((((*l_855) &= ((void*)0 != &g_93)) <= (((*l_871) = func_40(l_39, ((**g_658) = ((*g_659) && (((*l_856) & (safe_lshift_func_uint8_t_u_s(((0L ^ (safe_rshift_func_int16_t_s_u(l_870, 8))) ^ (**g_637)), 0))) | 1UL))), p_8)) >= 0x90L)) < p_11))), 0xB7L)) || (*l_855)) & 0xB9L), (*l_856)))))
    {
        char l_882 = 1L;
        int l_883 = 7L;
        for (g_507 = (-29); (g_507 == 26); g_507 = safe_add_func_int8_t_s_s(g_507, 5))
        {
            unsigned *l_884 = &g_223;
            unsigned *l_885 = (void*)0;
            unsigned *l_886 = &g_887;
            unsigned *l_888 = (void*)0;
            unsigned *l_889 = &g_890;
            unsigned long long *l_893 = &g_96;
            unsigned long long *l_894 = &g_86;
            int **l_895 = &l_856;
            (*l_855) = (p_8 <= func_40(l_39, ((**g_658) ^= (safe_mul_func_int16_t_s_s((((*l_894) = ((safe_add_func_uint32_t_u_u(((*l_884) = (safe_mul_func_uint8_t_u_u(((**g_637) = (safe_add_func_int64_t_s_s((l_882 = (**g_131)), (*l_856)))), l_883))), ((*l_889) = ((*l_886) = g_2)))) || func_40((*g_131), (safe_sub_func_uint64_t_u_u(p_8, ((*l_894) = ((*l_893) = l_883)))), l_882))) > p_8), l_883))), p_10));
            (*l_895) = l_855;
        }
    }
    else
    {
        unsigned l_898 = 1UL;
        unsigned *l_907 = &g_887;
        l_910 |= (((!(g_96 = ((safe_sub_func_uint32_t_u_u(p_11, (((l_898 == l_898) > p_11) != (safe_sub_func_int16_t_s_s((*l_855), (((*l_871) |= ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_898 < (safe_sub_func_uint32_t_u_u(((*l_907) = 5UL), g_827))), (((*l_856) = (safe_sub_func_uint8_t_u_u(func_40(l_39, p_10, (*g_132)), (*l_856)))) != g_533))), p_12)) >= (**g_402))) != p_12)))))) <= l_898))) < p_10) < p_8);
    }
    l_856 = l_856;
    return (*l_856);
}







static unsigned char * func_22(unsigned long long p_23, unsigned long long p_24, unsigned char p_25, unsigned p_26, unsigned p_27)
{
    return g_29;
}







static unsigned long long func_32(short p_33)
{
    unsigned char **l_614 = &g_29;
    unsigned char ***l_613 = &l_614;
    unsigned char ****l_615 = (void*)0;
    unsigned char ***l_617 = &l_614;
    unsigned char ****l_616 = &l_617;
    int l_618 = 4L;
    int l_619 = 0L;
    long long *l_620 = &g_353;
    long long ******l_672 = (void*)0;
    unsigned long long l_675 = 5UL;
    unsigned short l_705 = 0xBE20L;
    unsigned char l_713 = 0x78L;
    unsigned l_778 = 0xEB5E281CL;
    unsigned char l_791 = 0UL;
    int **l_796 = &g_104;
    int ***l_795 = &l_796;
    long long l_798 = (-10L);
    long long **l_801 = &l_620;
    long long l_809 = (-1L);
    unsigned long long l_811 = 18446744073709551613UL;
    int l_843 = 0xBC142F49L;
    int l_846 = 0x4D6EA847L;
    int *l_853 = &g_827;
    unsigned l_854 = 0x42415D33L;
    if ((l_619 = ((0xD97E93E1E0561682LL == ((((**l_614) = func_40(l_620, g_99, p_33)) != l_619) >= (-1L))) <= (*g_403))))
    {
        int l_629 = 0x5EA09C1CL;
        unsigned char *l_630 = &g_30;
        int *l_651 = &g_77;
        int l_676 = 0xBC0C030AL;
        long long *l_692 = &g_20;
        unsigned char ***l_719 = &l_614;
        unsigned long long *l_725 = (void*)0;
        unsigned long long **l_724 = &l_725;
        for (g_206 = (-27); (g_206 > 0); g_206 = safe_add_func_int16_t_s_s(g_206, 2))
        {
            int *l_633 = &g_434;
            long long *l_638 = &g_353;
            unsigned *l_639 = &g_223;
            short l_652 = 0xEEE6L;
            int l_653 = 1L;
            unsigned char l_712 = 0x54L;
            unsigned long long **l_726 = (void*)0;
            int *l_730 = &g_77;
            (*l_633) = (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((l_629 != p_33), p_33)), (65535UL != (**g_402)))), (safe_lshift_func_int16_t_s_s(0xF8EAL, 11))));
            if ((safe_add_func_uint64_t_u_u((l_629 | ((*l_639) = ((&g_250 == ((*l_616) = g_636)) ^ p_33))), 0x2243E4F2F7B22E9ELL)))
            {
                short l_640 = 0x7790L;
                (*l_633) |= l_640;
                return (*g_93);
            }
            else
            {
                unsigned long long l_683 = 1UL;
                int *l_687 = (void*)0;
                if (func_69(p_33))
                {
                    for (l_619 = 0; (l_619 == 20); l_619++)
                    {
                        (*l_633) = p_33;
                        (*l_633) = p_33;
                    }
                    return l_629;
                }
                else
                {
                    short l_645 = 1L;
                    for (g_20 = 0; (g_20 != (-1)); --g_20)
                    {
                        return (*g_93);
                    }
                    if (l_645)
                    {
                        int **l_646 = &g_104;
                        (*l_646) = l_633;
                        return (*g_93);
                    }
                    else
                    {
                        int *l_647 = &g_2;
                        int **l_648 = (void*)0;
                        int **l_649 = &g_104;
                        int *l_650 = (void*)0;
                        (*l_649) = (l_633 = l_647);
                        g_579 = (*g_104);
                        l_651 = l_651;
                        l_653 = l_652;
                    }
                }
                for (g_110 = (-15); (g_110 != 23); ++g_110)
                {
                    short l_665 = (-8L);
                    char l_673 = (-2L);
                    int *l_677 = &g_77;
                    (*g_577) = (**g_576);
                    for (p_33 = 26; (p_33 >= (-16)); --p_33)
                    {
                        unsigned short **l_660 = (void*)0;
                        volatile int *l_661 = &g_579;
                        (*l_651) = (g_658 != l_660);
                        l_661 = (*g_577);
                    }
                    (*l_651) = (((safe_sub_func_uint32_t_u_u((((*l_617) = (*g_636)) == (void*)0), (*l_633))) >= ((*g_93) < ((*l_638) = (safe_unary_minus_func_uint32_t_u((0x6CL & (l_665 ^= p_33))))))) < 0x6118E1C4L);
                    if (((*l_651) = p_33))
                    {
                        long long *l_674 = &g_538;
                        (*l_651) = func_69((((safe_mul_func_uint16_t_u_u(6UL, (safe_mod_func_uint32_t_u_u(func_51((*g_29), (((safe_rshift_func_uint8_t_u_u((((void*)0 != l_672) == ((*g_132) & p_33)), 5)) > p_33) || l_673), l_674, (*l_633), g_90), p_33)))) <= l_675) >= 0xD1CA73F8L));
                    }
                    else
                    {
                        int **l_678 = &l_651;
                        int l_686 = 0L;
                        (*l_651) = l_676;
                        (*l_678) = l_677;
                        (**g_576) = (*g_577);
                        l_686 ^= (safe_add_func_uint8_t_u_u((4UL > (((((safe_rshift_func_int8_t_s_s((*l_677), l_683)) == p_33) > (**l_678)) == (g_86 = (safe_rshift_func_int16_t_s_u(((**g_402) = p_33), 13)))) && ((**l_678) = 0x6A24C980L))), p_33));
                    }
                }
                if (p_33)
                {
                    long long l_689 = 0x3BC2A8D072CA4206LL;
                    int *l_701 = &g_434;
                    unsigned l_704 = 0xD587CBCEL;
                    unsigned char *l_722 = &g_18;
                    int *l_723 = &l_619;
                    if ((!p_33))
                    {
                        unsigned char *l_688 = &g_30;
                        long long *l_690 = (void*)0;
                        l_687 = l_651;
                        (*l_651) = (func_40(l_690, (*g_659), p_33) ^ p_33);
                        (**g_576) = (**g_576);
                    }
                    else
                    {
                        unsigned l_691 = 0xC08347A9L;
                        return l_691;
                    }
                    if (func_40(((*g_131) = l_692), (safe_mul_func_uint8_t_u_u((((*l_639) = (((*l_651) = (safe_add_func_uint16_t_u_u((*g_659), ((safe_sub_func_uint64_t_u_u((*l_687), ((g_99 || ((*l_701) ^= 2L)) == p_33))) > (p_33 != (func_40(l_620, (*l_651), p_33) < l_618)))))) & 0L)) && p_33), l_618)), p_33))
                    {
                        (*l_701) = ((safe_rshift_func_int16_t_s_s(((*l_651) |= l_619), 0)) || (*l_651));
                        if (l_704)
                            break;
                        if (l_705)
                            break;
                    }
                    else
                    {
                        unsigned short *l_714 = &l_705;
                        (*l_651) = 0xE68C7595L;
                        (*l_687) |= (((*l_714) &= ((safe_lshift_func_uint8_t_u_s(l_619, (safe_mul_func_uint16_t_u_u(((**g_658) = ((void*)0 != &g_93)), ((*g_403) = (((**g_402) && p_33) < func_40((*g_131), l_619, ((safe_sub_func_int32_t_s_s(l_712, (l_713 & 1UL))) ^ p_33)))))))) && 0x4968207FL)) || 0x7D27L);
                        (*l_687) = ((**g_402) | ((void*)0 != &g_636));
                        (*l_651) ^= p_33;
                    }
                    (*l_723) &= (safe_add_func_uint16_t_u_u((!(safe_mul_func_uint8_t_u_u((((void*)0 == l_719) | (safe_lshift_func_int16_t_s_s(((((+(func_69(p_33) && p_33)) && 0x1E73L) == ((!(*l_701)) > ((*l_722) = l_618))) ^ p_33), 6))), p_33))), 0x21D1L));
                }
                else
                {
                    l_726 = l_724;
                }
                if (p_33)
                    break;
            }
            for (g_110 = 0; (g_110 < 15); ++g_110)
            {
                unsigned char l_729 = 4UL;
                (*l_651) |= (l_729 = p_33);
                g_579 &= (*l_633);
            }
            l_730 = l_730;
        }
        for (g_156 = 0; (g_156 != 2); g_156 = safe_add_func_int16_t_s_s(g_156, 6))
        {
            (**g_576) = (void*)0;
        }
    }
    else
    {
        int l_737 = 0x75C69EFBL;
        char l_747 = 0xA5L;
        short *l_760 = &g_201;
        int ***l_816 = &l_796;
        char l_819 = 0xF8L;
        long long ****l_828 = &g_167;
        int *l_850 = &l_737;
        for (l_675 = 16; (l_675 != 10); --l_675)
        {
            int *l_740 = &g_434;
            long long *l_771 = &g_538;
            int *l_810 = &l_618;
            int ***l_814 = (void*)0;
            (*l_740) = (safe_add_func_uint32_t_u_u((l_675 >= (l_737 & l_675)), (safe_lshift_func_int8_t_s_s(0xD8L, 1))));
            for (l_737 = 7; (l_737 == 26); l_737 = safe_add_func_uint32_t_u_u(l_737, 6))
            {
                char l_762 = 0x69L;
                (*g_577) = (*g_577);
                for (g_223 = (-8); (g_223 < 30); g_223++)
                {
                    unsigned long long l_761 = 0x80D1316C65B21084LL;
                    int l_763 = (-1L);
                    if ((((((((safe_mul_func_int8_t_s_s(l_747, p_33)) < ((l_763 = (safe_mul_func_int16_t_s_s((p_33 | (safe_lshift_func_uint16_t_u_s((**g_658), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(0x53L, ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(((&g_93 != &g_93) != (*g_93)), ((*g_402) == l_760))), 5)) <= l_761))), 0xCEL))))), l_762))) != (**g_131))) >= 0L) && 0x1DF8527255BE5C41LL) | (*g_403)) | (**g_402)) > l_705))
                    {
                        char l_764 = 5L;
                        int *l_779 = &g_533;
                        int l_780 = 1L;
                        int **l_781 = &g_104;
                        if (p_33)
                            break;
                        l_780 = ((*l_779) = ((*l_740) ^= ((func_69((*g_403)) != l_764) <= (safe_sub_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((func_40(l_771, (safe_mul_func_int16_t_s_s((p_33 <= (safe_add_func_int64_t_s_s(l_737, l_763))), (safe_rshift_func_uint8_t_u_u(p_33, 1)))), (((*g_89) || (-1L)) >= p_33)) ^ p_33), 0x8C39DE9701788AECLL)), l_618)) < (-4L)) == g_2), l_778)))));
                        (*l_781) = &l_763;
                    }
                    else
                    {
                        return p_33;
                    }
                }
                (*g_577) = (*g_577);
            }
            for (l_705 = 8; (l_705 != 12); l_705++)
            {
                int *l_784 = &l_618;
                char *l_806 = &g_110;
                if (l_747)
                    break;
                (*l_740) = p_33;
                g_104 = l_784;
                for (g_110 = 24; (g_110 <= (-2)); --g_110)
                {
                    short l_792 = 0x6AB9L;
                    if (func_51(p_33, (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(l_705, 2)) > (l_791 && (*g_659))), ((p_33 || 0x2CL) && l_792))), l_771, (safe_mod_func_uint16_t_u_u((((((*g_132) = p_33) <= l_792) && 0xD3C9E120DF14950DLL) & (*g_403)), (-1L))), l_705))
                    {
                        unsigned short l_797 = 0xDEF3L;
                        long long **l_802 = &g_132;
                        (*l_784) &= (l_795 == &l_796);
                        (*l_740) = (((~func_40(l_771, ((*g_659) = p_33), ((**l_802) = (p_33 ^ ((((+l_797) > l_798) < ((*l_784) |= p_33)) < (safe_mul_func_int16_t_s_s((*l_740), (l_801 != l_802)))))))) ^ p_33) > (*g_93));
                    }
                    else
                    {
                        char *l_805 = &l_747;
                        char **l_807 = &g_145;
                        int l_808 = 0xF0D7B034L;
                        (*l_740) &= (((*l_784) ^= ((safe_lshift_func_int16_t_s_u(0xFCDAL, 6)) & (((((*l_805) |= func_69((0UL ^ 0x2DL))) | func_40((*g_131), ((*g_659) = (*g_659)), (l_806 == ((*l_807) = l_806)))) == 0L) != l_808))) ^ 4294967289UL);
                        if (p_33)
                            break;
                        (*l_796) = l_740;
                    }
                }
            }
            if (((*l_740) ^= l_809))
            {
                (*g_577) = (**g_576);
            }
            else
            {
                int ****l_815 = &l_814;
                long long *l_820 = &g_20;
                short **l_836 = &g_403;
                g_104 = l_810;
                if ((l_811 & (safe_rshift_func_int8_t_s_s(((((*l_815) = l_814) == l_816) < (func_51(((((**g_402) > ((**l_796) |= (*g_659))) & (safe_lshift_func_int16_t_s_u((*g_403), p_33))) > p_33), l_819, l_820, p_33, g_223) && g_821)), p_33))))
                {
                    for (l_618 = (-3); (l_618 <= (-29)); --l_618)
                    {
                        (**l_795) = (void*)0;
                    }
                    if (p_33)
                        continue;
                }
                else
                {
                    int l_833 = 0xFA1D816EL;
                    short **l_837 = (void*)0;
                    short l_842 = 7L;
                    (*l_810) = ((*l_740) = ((p_33 = ((*l_760) = ((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_s((**g_658), 4)))) != p_33))) < func_40(l_820, g_827, (**g_131))));
                    (*l_810) = func_69((((l_843 = (((((void*)0 != l_828) >= (safe_mul_func_uint8_t_u_u(((0x1B5A68D4L | p_33) <= 7UL), (safe_mod_func_uint8_t_u_u(((l_833 > (safe_rshift_func_int16_t_s_u((l_836 == l_837), (((safe_rshift_func_uint8_t_u_s(((safe_mul_func_int16_t_s_s(((**l_836) = p_33), 1L)) == p_33), 5)) > 9L) && (**g_658))))) || 0xD08AL), l_842))))) < p_33) != l_842)) <= 255UL) != 0x062341A7L));
                    (*l_740) ^= l_833;
                }
                (*l_810) = (safe_sub_func_int32_t_s_s((~p_33), (l_846 && p_33)));
                for (l_811 = (-23); (l_811 != 25); ++l_811)
                {
                    int *l_849 = &g_434;
                    (*l_796) = l_849;
                    (*g_577) = (*g_577);
                    (**l_796) = (-1L);
                }
            }
        }
        (*g_577) = (*g_577);
        (*l_850) |= p_33;
        (*l_850) |= (65535UL < (*g_403));
    }
    (*l_853) |= (safe_lshift_func_int8_t_s_s(p_33, g_96));
    return l_854;
}







static short func_40(long long * p_41, unsigned short p_42, long long p_43)
{
    int *l_607 = (void*)0;
    int **l_608 = &l_607;
    (*l_608) = l_607;
    return p_43;
}







static unsigned short func_46(unsigned char * p_47)
{
    unsigned char l_57 = 0x84L;
    unsigned long long *l_84 = (void*)0;
    unsigned long long *l_85 = &g_86;
    unsigned char *l_92 = &g_18;
    unsigned char **l_91 = &l_92;
    unsigned long long *l_95 = &g_96;
    int *l_352 = (void*)0;
    int *l_508 = &g_77;
    unsigned char l_541 = 0x2FL;
    (*l_508) = (safe_add_func_int64_t_s_s(func_51(l_57, ((g_353 |= ((safe_add_func_int32_t_s_s(func_60(func_63(func_22(((*l_85) = (+func_69(g_20))), (safe_mul_func_uint16_t_u_u((g_89 == ((*l_91) = p_47)), (g_93 == (void*)0))), (l_57 == ((*l_95) ^= (!l_57))), l_57, g_94), l_57, l_57, l_57, l_57), l_57), 5UL)) && l_57)) == l_57), l_85, g_112, g_2), 18446744073709551612UL));
    if (((*l_508) = (*l_508)))
    {
        long long l_513 = 2L;
        int *l_516 = &g_434;
        (*l_516) &= (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_513 >= l_513), ((safe_lshift_func_int16_t_s_s(l_513, (*g_403))) || ((*l_508) <= (l_513 == (l_513 & l_513)))))), l_513));
    }
    else
    {
        unsigned long long l_517 = 0xBE60C62E70A77F8ELL;
        int *l_518 = &g_77;
        short l_530 = 1L;
        long long *l_539 = &g_353;
        int l_540 = 1L;
        int *l_573 = &g_533;
        long long *****l_599 = &g_550;
        if ((1L ^ l_517))
        {
            int **l_519 = &g_104;
            (*l_519) = l_518;
            for (g_223 = 0; (g_223 != 26); g_223 = safe_add_func_uint64_t_u_u(g_223, 4))
            {
                unsigned l_524 = 0x0CE5974AL;
                unsigned short *l_527 = (void*)0;
                unsigned short *l_528 = &g_507;
                int *l_529 = &g_434;
                int *l_531 = (void*)0;
                int *l_532 = &g_533;
                (*g_104) = ((*g_403) == ((*l_528) = (((safe_mod_func_uint16_t_u_u(func_69(((**l_519) | (*g_403))), l_524)) > (safe_mod_func_uint32_t_u_u(l_524, l_524))) == ((l_524 && l_524) <= g_20))));
                (*l_532) &= (l_530 &= ((*l_529) |= (*l_518)));
            }
        }
        else
        {
            return g_201;
        }
        if (((+0x2B50L) >= ((safe_add_func_int8_t_s_s((*l_518), (*g_89))) && (((*l_539) &= (g_538 = (safe_mod_func_int16_t_s_s(0x8ACCL, (**g_402))))) & (*l_508)))))
        {
            unsigned l_543 = 0UL;
            int l_571 = 0x04761E1FL;
            int l_572 = 0L;
            unsigned char *l_598 = (void*)0;
            (*l_518) |= 0L;
            (*l_518) |= (l_540 != (0xBD1524B6L < 0UL));
            if (l_541)
            {
                unsigned l_542 = 18446744073709551609UL;
                l_542 &= ((*l_508) = (-5L));
            }
            else
            {
                short l_548 = 0L;
                short l_589 = 7L;
                if (l_543)
                {
                    int *l_544 = &g_434;
                    int **l_564 = &l_544;
                    g_104 = (l_544 = l_508);
                    if ((*l_518))
                    {
                        int *l_545 = &g_533;
                        long long ******l_551 = (void*)0;
                        long long ******l_552 = &g_549;
                        (*l_518) = (-9L);
                        (*l_545) |= ((-1L) > ((*l_544) = (*g_93)));
                        (*l_545) = (safe_sub_func_uint16_t_u_u(((l_548 ^ (*g_93)) && g_2), (*l_518)));
                    }
                    else
                    {
                        int *l_560 = &g_77;
                        int **l_561 = &l_560;
                        (*l_561) = l_560;
                        (*g_104) = (safe_lshift_func_int16_t_s_u(((*g_403) = (**g_402)), 9));
                    }
                    (*l_564) = &g_2;
                }
                else
                {
                    int **l_565 = (void*)0;
                    int **l_566 = &g_104;
                    (*l_566) = l_508;
                    (**l_566) ^= l_548;
                    l_572 |= ((*l_518) & ((*l_85) = (l_548 < (l_571 ^= (safe_mod_func_uint16_t_u_u((*l_518), (safe_mod_func_uint32_t_u_u(1UL, g_507))))))));
                    (*l_508) = ((*g_93) >= l_548);
                }
                l_573 = (void*)0;
                for (g_18 = 0; (g_18 < 16); g_18 = safe_add_func_uint32_t_u_u(g_18, 6))
                {
                    int *l_590 = &g_2;
                    int **l_591 = &l_573;
                    if (((!(g_576 != (void*)0)) == (safe_rshift_func_int16_t_s_s((**g_402), (*g_403)))))
                    {
                        char l_582 = 0x79L;
                        if (l_548)
                            break;
                        (*g_104) = l_571;
                        (*l_508) = ((void*)0 != &g_250);
                        (*l_518) = (((*l_85) ^= ((g_96 = (func_69((*l_508)) != (l_582 ^ (g_90 > g_166)))) <= ((((((**g_402) ^= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((void*)0 != &p_47), 7)), (safe_sub_func_int32_t_s_s(l_543, g_538))))) || (*g_403)) < 0x089DC33BL) == l_589) >= l_589))) == l_582);
                    }
                    else
                    {
                        return g_533;
                    }
                    if (l_572)
                        break;
                    (*l_591) = l_590;
                }
                (*g_577) = (*g_577);
            }
            if ((safe_lshift_func_uint8_t_u_u(l_572, ((*g_29) = l_572))))
            {
                int *l_594 = &g_77;
                l_352 = l_594;
            }
            else
            {
                unsigned char *l_597 = &l_57;
                long long ******l_600 = &l_599;
                long long *****l_601 = &g_550;
                (*g_578) = (1UL ^ (func_69(((**g_402) = ((l_597 != l_598) || 0x95460780E834FC07LL))) ^ (((*l_600) = l_599) != l_601)));
                (**g_576) = (void*)0;
            }
        }
        else
        {
            (*g_104) = (-5L);
        }
        for (l_57 = 11; (l_57 > 53); ++l_57)
        {
            if ((*g_104))
                break;
        }
        (*l_508) = (safe_add_func_uint16_t_u_u((0x0DB3L ^ 2UL), 0x6A56L));
    }
    return (*l_508);
}







static long long func_51(unsigned char p_52, int p_53, long long * p_54, unsigned short p_55, unsigned p_56)
{
    int **l_354 = (void*)0;
    int **l_355 = &g_104;
    unsigned long long *l_362 = &g_86;
    long long ***l_373 = &g_131;
    long long ***l_378 = (void*)0;
    char **l_380 = &g_145;
    int l_500 = 1L;
    short l_505 = 0L;
    unsigned long long l_506 = 18446744073709551607UL;
    (*l_355) = &p_53;
    if ((safe_mul_func_uint16_t_u_u(((*g_104) <= (*g_104)), (((*l_362) ^= (8UL < ((safe_lshift_func_uint16_t_u_s(p_56, (safe_mod_func_int32_t_s_s((func_69((**l_355)) & p_53), p_55)))) <= ((**l_355) | 252UL)))) >= (**l_355)))))
    {
        unsigned long long l_414 = 1UL;
        for (g_30 = 0; (g_30 < 7); g_30++)
        {
            char l_377 = (-3L);
            for (g_223 = (-21); (g_223 >= 23); g_223 = safe_add_func_uint32_t_u_u(g_223, 8))
            {
                short *l_369 = (void*)0;
                short *l_370 = (void*)0;
                short *l_371 = &g_201;
                long long ****l_372 = &g_167;
                int *l_374 = &g_77;
                (*l_374) ^= (safe_sub_func_int16_t_s_s(((*l_371) = (**l_355)), (((*l_372) = &g_131) != l_373)));
                (*g_104) = (1UL < p_56);
                (*l_374) = (&g_131 != (void*)0);
            }
            for (p_56 = 0; (p_56 > 11); ++p_56)
            {
                long long *l_379 = &g_353;
                int l_390 = 0x3A07E616L;
                int *l_399 = &g_77;
                if ((((*l_362) = (&g_223 != (void*)0)) & ((l_377 == ((*l_379) = (&g_131 != (g_167 = l_378)))) == (**l_355))))
                {
                    (**l_355) = 0x6711D07BL;
                    (*l_355) = &p_53;
                    return (**g_131);
                }
                else
                {
                    char ***l_381 = (void*)0;
                    char ***l_382 = &l_380;
                    int l_383 = 0x10C94A9AL;
                    (*l_382) = l_380;
                    (**l_355) = p_55;
                    (*g_104) = l_383;
                    for (g_201 = 0; (g_201 < 11); g_201++)
                    {
                        return (**g_131);
                    }
                }
                (*l_399) &= ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((**l_355) &= ((((~(l_390 | (7L < (&p_52 == (void*)0)))) & (0xB764B855L | ((*g_89) | 0xC9L))) == (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((-4L), (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(0UL, l_377)), l_390)))), 4))) != g_96)), 6)), g_2)) || l_390);
                (*g_104) = (+(safe_mod_func_uint64_t_u_u(((void*)0 != g_402), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_56, ((*g_403) = 0xCCECL))), 14)))));
            }
            (*l_355) = &p_53;
        }
        (*g_104) |= (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_414 = 6L), 7)), func_69((**g_402)))), 249UL));
    }
    else
    {
        int *l_417 = &g_2;
        int l_427 = (-1L);
        for (g_201 = 15; (g_201 < (-30)); g_201--)
        {
            (*l_355) = l_417;
        }
        if ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((**l_355), 6)), (*l_417))))
        {
            return (*p_54);
        }
        else
        {
            unsigned l_426 = 18446744073709551615UL;
            l_427 = ((((**l_355) >= (*l_417)) <= ((safe_mod_func_uint8_t_u_u(p_55, 2L)) && (safe_add_func_uint16_t_u_u(l_426, (-5L))))) < p_53);
        }
        return (*l_417);
    }
    for (g_156 = 25; (g_156 >= 0); g_156 = safe_sub_func_int64_t_s_s(g_156, 3))
    {
        unsigned l_442 = 4294967292UL;
        short *l_482 = (void*)0;
        unsigned char *l_493 = &g_18;
        for (g_166 = 16; (g_166 == (-7)); g_166--)
        {
            int *l_432 = &g_77;
            int *l_433 = &g_434;
            (*l_433) |= ((*l_432) |= (*g_104));
        }
        for (g_77 = 0; (g_77 < 24); g_77 = safe_add_func_int8_t_s_s(g_77, 6))
        {
            char ***l_437 = &g_144;
            char **l_439 = &g_145;
            char ***l_438 = &l_439;
            int l_444 = 0x641E57EBL;
            (**l_355) &= (l_380 == ((*l_438) = ((*l_437) = (void*)0)));
            for (p_52 = 1; (p_52 < 12); p_52 = safe_add_func_int8_t_s_s(p_52, 6))
            {
                unsigned l_443 = 0UL;
                int l_449 = 0x41C217ABL;
                unsigned long long l_472 = 0x49BE085A8B14A206LL;
                long long ***l_478 = &g_131;
            }
        }
        (*g_104) = ((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*l_493) = ((*g_29) |= (*g_89))), (**l_355))), (((p_56 > 0x58D30C1E78EC6E61LL) >= p_53) ^ (safe_rshift_func_int16_t_s_u(((*g_403) &= (safe_sub_func_uint8_t_u_u((**l_355), p_53))), 8))))) && (safe_mul_func_int8_t_s_s(((*g_93) ^ (**g_131)), 0x7EL)));
    }
    (**l_355) &= g_507;
    return (*p_54);
}







static int func_60(long long * p_61, int p_62)
{
    int *l_224 = &g_77;
    short *l_231 = &g_201;
    int l_280 = 1L;
    long long ***l_283 = &g_131;
    unsigned l_327 = 4UL;
    char *l_349 = &g_110;
    int *l_351 = &l_280;
    l_224 = l_224;
    if ((safe_mod_func_int8_t_s_s((*l_224), p_62)))
    {
        unsigned l_240 = 0x1B4666DCL;
        unsigned char l_242 = 250UL;
        unsigned short *l_253 = (void*)0;
        int *l_254 = &g_2;
        char l_277 = 0x01L;
        int **l_319 = &g_104;
        for (g_223 = (-2); (g_223 <= 24); ++g_223)
        {
            short *l_232 = &g_156;
            int l_243 = 0xD0575CF6L;
            unsigned char ***l_258 = (void*)0;
            unsigned *l_261 = &l_240;
            int *l_317 = &l_243;
            for (g_110 = 0; (g_110 < 15); ++g_110)
            {
                short **l_233 = &l_232;
                int l_241 = (-10L);
                int **l_244 = &g_104;
            }
        }
        (*l_319) = l_254;
        (*l_319) = (void*)0;
    }
    else
    {
        int l_322 = 0xBC1734ECL;
        long long ****l_326 = (void*)0;
        long long *****l_325 = &l_326;
        int *l_331 = &g_77;
        short **l_346 = &l_231;
        int *l_350 = &l_280;
        if (((*l_224) & (safe_mod_func_uint16_t_u_u((l_322 < 0x3FL), (safe_add_func_uint32_t_u_u(l_322, (((((0xB17145919A834AAALL < (0x4BL && l_322)) <= 6L) <= (((*l_325) = &l_283) == &l_283)) != 0UL) <= (*l_224))))))))
        {
            (*g_104) = ((*l_224) == (l_327 | (-8L)));
        }
        else
        {
            int *l_328 = &l_280;
            unsigned char ***l_334 = (void*)0;
            if (p_62)
            {
                int **l_329 = (void*)0;
                int **l_330 = &g_104;
                l_331 = ((*l_330) = l_328);
                (*l_328) = (246UL == (func_69(p_62) != (((void*)0 == (*g_167)) != (((l_334 == (void*)0) == (((*l_330) = l_328) != &l_280)) != (*g_93)))));
                for (g_96 = 0; (g_96 == 8); g_96 = safe_add_func_uint64_t_u_u(g_96, 1))
                {
                    unsigned l_341 = 0x81A482B2L;
                    (*l_331) &= (safe_add_func_uint16_t_u_u(g_112, g_112));
                    (*g_104) = (safe_sub_func_uint32_t_u_u((((*l_331) | (l_341 = (*l_331))) < g_94), (safe_add_func_uint64_t_u_u((g_96 && (*l_331)), (safe_rshift_func_uint16_t_u_s((g_96 ^ g_201), 14))))));
                }
                (*l_224) &= p_62;
            }
            else
            {
                short **l_347 = (void*)0;
                l_347 = l_346;
                (*l_331) = (*l_331);
            }
        }
        (*l_350) &= func_69((safe_unary_minus_func_uint8_t_u(((*g_144) == l_349))));
    }
    (*l_351) |= func_69(((p_62 != (*l_224)) <= p_62));
    return p_62;
}







static long long * func_63(unsigned char * p_64, int p_65, long long p_66, char p_67, char p_68)
{
    unsigned long long l_97 = 1UL;
    unsigned short *l_98 = &g_99;
    int *l_100 = &g_77;
    long long *l_116 = &g_20;
    long long **l_115 = &l_116;
    long long ***l_168 = &g_131;
    long long l_214 = 0x05A668A6424E8482LL;
    (*l_100) = ((!((*l_98) |= l_97)) && (p_66 | ((*p_64) == (*g_89))));
    for (p_65 = (-5); (p_65 <= 11); p_65++)
    {
        int *l_103 = &g_77;
        unsigned short *l_105 = &g_99;
        unsigned short **l_106 = &l_98;
        unsigned char l_120 = 0x3FL;
        unsigned char **l_185 = &g_29;
        g_104 = l_103;
    }
    if (((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(g_201, p_67)), ((safe_add_func_int8_t_s_s(l_214, ((*g_29) = (func_69(((safe_sub_func_int32_t_s_s((*l_100), p_65)) | (*g_104))) | p_68)))) & p_67))) != l_214))
    {
        int *l_217 = &g_77;
        int **l_218 = &l_100;
        (*l_218) = l_217;
        (*l_218) = (*l_218);
        (*l_218) = &g_77;
    }
    else
    {
        int **l_219 = &l_100;
        int **l_220 = (void*)0;
        int **l_221 = &g_104;
        unsigned *l_222 = &g_223;
        (*l_221) = ((*l_219) = l_100);
        (**l_219) |= ((&p_66 == ((**g_167) = (*g_131))) ^ ((*l_222) = p_67));
        return (**l_168);
    }
    g_104 = l_100;
    return (**l_168);
}







static unsigned long long func_69(short p_70)
{
    long long *l_73 = &g_20;
    long long *l_75 = &g_20;
    long long **l_74 = &l_75;
    int *l_76 = &g_77;
    (*l_76) = ((*g_29) && (safe_rshift_func_uint8_t_u_s(((*g_29) ^= (g_20 >= (l_73 == ((*l_74) = &g_20)))), 5)));
    for (p_70 = 8; (p_70 == 14); p_70 = safe_add_func_uint8_t_u_u(p_70, 5))
    {
        (*l_76) |= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(g_2, g_30)), 9UL));
    }
    return g_20;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_827, "g_827", print_hash_value);
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1149, "g_1149", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
