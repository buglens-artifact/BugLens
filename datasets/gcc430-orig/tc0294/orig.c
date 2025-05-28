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



static unsigned g_5 = 4294967293UL;
static unsigned short g_24 = 0xF1E2L;
static int g_30[10][4] = {{0x90C63B88L,1L,1L,0x90C63B88L},{1L,0x90C63B88L,(-1L),0xFE0C2378L},{1L,(-1L),1L,0xB4CF22A1L},{0x90C63B88L,0xFE0C2378L,0xB4CF22A1L,0xB4CF22A1L},{(-1L),(-1L),0x9339B884L,0xFE0C2378L},{0xFE0C2378L,0x90C63B88L,0x9339B884L,0x90C63B88L},{(-1L),1L,0xB4CF22A1L,0x9339B884L},{0x90C63B88L,1L,1L,0x90C63B88L},{1L,0x90C63B88L,(-1L),0xFE0C2378L},{1L,(-1L),1L,0xB4CF22A1L}};
static int g_39 = 0xD0FE1F23L;
static unsigned char g_60 = 255UL;
static int g_67 = 0x0C16569DL;
static char g_69 = (-7L);
static int g_72 = 2L;
static unsigned short g_84 = 65531UL;
static unsigned short *g_83[4] = {&g_84,&g_84,&g_84,&g_84};
static unsigned short g_96 = 0x6ED2L;
static short g_103 = 0L;
static int g_108 = 0xCC16C414L;
static short g_114 = 0x91F1L;
static long long g_116 = 0x43E6CB93649196E2LL;
static int *g_119 = (void*)0;
static int **g_118 = &g_119;
static char g_126 = (-1L);
static unsigned g_135 = 1UL;
static unsigned short *g_137 = &g_96;
static unsigned g_154[3][1][10] = {{{1UL,1UL,1UL,5UL,1UL,0x6C68AEACL,0x6C68AEACL,1UL,5UL,1UL}},{{0x6C68AEACL,0x6C68AEACL,1UL,5UL,1UL,0x6C68AEACL,0x6C68AEACL,1UL,5UL,1UL}},{{0x6C68AEACL,0x6C68AEACL,1UL,5UL,1UL,0x6C68AEACL,0x6C68AEACL,1UL,5UL,1UL}}};
static short g_210 = 0xF7E5L;
static unsigned long long g_230 = 0x02DE0BA1BEB00083LL;
static long long g_277 = (-5L);
static unsigned char g_296 = 0UL;
static unsigned char g_324 = 0x8FL;
static unsigned **g_356 = (void*)0;
static unsigned char ** const g_374 = (void*)0;
static int ***g_395[10] = {&g_118,(void*)0,(void*)0,&g_118,(void*)0,(void*)0,&g_118,(void*)0,(void*)0,&g_118};
static unsigned ***g_398[10] = {(void*)0,(void*)0,&g_356,&g_356,&g_356,(void*)0,(void*)0,&g_356,&g_356,&g_356};
static unsigned long long g_406 = 6UL;
static unsigned g_414 = 1UL;
static volatile int g_424 = 0L;
static volatile long long **g_455 = (void*)0;
static long long g_476 = 7L;
static const unsigned g_517 = 0xBFB16999L;
static volatile short g_521 = 1L;



static unsigned func_1(void);
static int func_2(long long p_3, unsigned p_4);
static unsigned func_6(unsigned char p_7);
static unsigned char func_11(short p_12, char p_13, short p_14);
static int func_31(int * p_32);
static int * func_33(unsigned short * p_34, const short p_35);
static int * const func_42(unsigned short * p_43, const int p_44, unsigned p_45, int * p_46);
static unsigned short * func_47(unsigned p_48, int p_49, int * p_50, int p_51, long long p_52);
static char func_61(long long p_62);
static int func_78(int ** p_79);
static unsigned func_1(void)
{
    unsigned l_10 = 4294967295UL;
    unsigned short *l_23[4] = {&g_24,&g_24,&g_24,&g_24};
    int l_25 = 1L;
    long long l_478[5];
    unsigned *l_481 = &g_5;
    unsigned **l_480 = &l_481;
    long long l_485[2];
    int **l_488[7][3][4] = {{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,(void*)0,&g_119},{&g_119,&g_119,(void*)0,(void*)0},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119,&g_119}}};
    short l_497 = (-5L);
    int *l_512 = (void*)0;
    long long l_513 = 0x0B1D1FD69C1DC576LL;
    unsigned l_514 = 4294967295UL;
    const unsigned *l_516 = &g_517;
    const unsigned **l_515 = &l_516;
    unsigned *l_518 = &g_135;
    unsigned long long l_522 = 0xE553622543C3A60BLL;
    unsigned char *l_523[7][4] = {{&g_296,&g_60,&g_60,&g_296},{&g_60,&g_296,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_324},{(void*)0,&g_60,(void*)0,(void*)0},{&g_60,&g_324,&g_60,(void*)0},{&g_296,&g_324,(void*)0,(void*)0},{&g_324,&g_60,&g_60,&g_324}};
    unsigned long long l_524[5];
    const int l_525 = 0x812F9467L;
    int l_526 = 0x44FA47F7L;
    int *l_527 = (void*)0;
    unsigned short l_528 = 0x7888L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_478[i] = 0L;
    for (i = 0; i < 2; i++)
        l_485[i] = 1L;
    for (i = 0; i < 5; i++)
        l_524[i] = 0x136C637AD3B3413ALL;
    if (func_2(g_5, func_6((safe_rshift_func_int8_t_s_u(((l_10 & ((func_11(((g_5 ^ (((l_25 = (safe_sub_func_int64_t_s_s(g_5, (+(safe_rshift_func_int16_t_s_u(((((safe_mod_func_int32_t_s_s((l_10 | 0xE5B14F4E79753589LL), ((((safe_mod_func_uint32_t_u_u(0x4E80031AL, g_5)) , (g_5 || l_10)) , l_10) ^ g_5))) , g_5) <= l_10) , g_5), 6)))))) >= l_10) != l_10)) , 0xE13CL), l_10, l_10) , 0x2104996DL) , l_10)) >= g_210), l_10)))))
    {
        unsigned char *l_479 = &g_324;
        unsigned ***l_482 = &l_480;
        int l_489 = 0L;
        unsigned * const l_492[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned * const *l_491 = &l_492[0];
        unsigned * const **l_490 = &l_491;
        short *l_498 = &g_114;
        int *l_502 = &g_108;
        int i;
        l_489 = (+(l_25 > (l_478[4] != ((((*l_479) = g_476) == l_478[2]) ^ (((*l_482) = l_480) == ((*l_490) = ((safe_rshift_func_int8_t_s_s((l_485[1] <= ((safe_mul_func_uint16_t_u_u(l_489, (g_72 <= l_489))) != l_489)), g_135)) , &l_481)))))));

        ;
        l_489 = ((!((safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(g_30[3][3], (~((*l_479) = l_489)))), (l_489 & l_497))) & ((*l_498) |= (g_72 < g_84)))) && 0x77296D60L);
        for (g_277 = 19; (g_277 > 12); g_277 = safe_sub_func_uint64_t_u_u(g_277, 9))
        {
            int *l_501 = (void*)0;
            int l_510 = 0L;
            l_502 = l_501;

            ;
            for (g_324 = 16; (g_324 < 49); g_324 = safe_add_func_int16_t_s_s(g_324, 9))
            {
                int **l_507 = (void*)0;
                for (g_108 = 1; (g_108 < (-9)); g_108 = safe_sub_func_int16_t_s_s(g_108, 3))
                {
                    short l_508 = 0x9214L;
                    int l_509 = 1L;
                    l_501 = l_501;
                    l_509 = l_508;
                }
                if (l_510)
                    continue;
            }
        }

        ;
    }
    else
    {
        int *l_511 = &l_25;
        l_511 = l_511;
        l_512 = l_511;

        ;
        return l_513;
    }



    ;
    ;
    l_522 ^= ((l_514 <= ((((*l_515) = l_481) != (g_154[2][0][5] , l_518)) | (((safe_lshift_func_uint16_t_u_u((*g_137), (*g_137))) , g_414) | 0x27DEL))) & g_521);

    ;
    l_526 = (g_24 || (((void*)0 == l_523[6][1]) <= (l_524[1] <= l_525)));
    l_527 = (void*)0;
    return l_528;
}







static int func_2(long long p_3, unsigned p_4)
{
    unsigned char l_436 = 4UL;
    int *l_437 = &g_67;
    unsigned short *l_438 = (void*)0;
    unsigned *l_449 = &g_414;
    unsigned **l_448 = &l_449;
    unsigned l_462 = 1UL;
    int l_477 = 0x2F7DF20CL;
    for (g_116 = 0; (g_116 >= 2); g_116 = safe_add_func_uint32_t_u_u(g_116, 1))
    {
        unsigned l_431 = 1UL;
        unsigned short **l_439 = &l_438;
        int *l_441 = &g_39;
        (*l_437) = ((l_431 < (((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(0x2BL, l_436)), (((((*l_439) = l_438) == (void*)0) & 0xC7A5L) && 0xC9L))) == g_72) == (*l_437))) <= (-1L));
        if ((l_437 != (void*)0))
        {
            int **l_440 = (void*)0;
            l_441 = l_437;

            ;
        }
        else
        {
            long long *l_473 = &g_277;
            int l_474 = 0xC78B865EL;
            long long *l_475 = &g_476;
            for (l_431 = 15; (l_431 > 42); l_431 = safe_add_func_int16_t_s_s(l_431, 1))
            {
                for (g_5 = 0; (g_5 > 41); g_5 = safe_add_func_uint8_t_u_u(g_5, 5))
                {
                    long long *l_458 = &g_277;
                    int l_461 = 0xF2B72378L;
                    for (g_277 = 0; (g_277 > (-20)); --g_277)
                    {
                        unsigned ***l_450 = &l_448;
                        (*l_450) = l_448;
                    }
                    (*l_441) = ((p_4 || ((safe_add_func_int64_t_s_s(((0L && (g_324 = (safe_sub_func_int8_t_s_s((+((void*)0 != g_455)), ((0x55L && func_61(((safe_sub_func_uint64_t_u_u(((func_61(((*l_458) = (-1L))) != (p_3 && (((safe_mod_func_int8_t_s_s((p_4 , g_30[6][1]), g_126)) <= l_461) < p_3))) != p_3), p_3)) > (*l_441)))) < p_3))))) > p_3), l_462)) , p_3)) >= p_3);
                }
                for (l_462 = 0; (l_462 != 60); l_462 = safe_add_func_int16_t_s_s(l_462, 2))
                {
                    (*l_441) = ((!(&g_135 == &g_135)) & (((safe_add_func_uint16_t_u_u(0x3BF6L, g_69)) >= g_60) & p_3));
                    (*l_437) = func_61((*l_437));
                }
                (*l_437) |= (p_4 , p_3);
            }
            l_477 |= (safe_sub_func_uint16_t_u_u((!(safe_mod_func_int32_t_s_s((*l_437), ((**l_448) = (safe_rshift_func_uint16_t_u_u(p_3, (((*l_473) |= (*l_441)) >= ((*l_475) |= l_474)))))))), ((void*)0 == &l_437)));
        }

        ;
    }
    return (*l_437);
}







static unsigned func_6(unsigned char p_7)
{
    int *l_288 = &g_108;
    int l_289 = 0x29227F7AL;
    unsigned char *l_295 = &g_296;
    unsigned char **l_294[8][1][7] = {{{&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295}},{{&l_295,(void*)0,&l_295,&l_295,(void*)0,&l_295,&l_295}},{{(void*)0,&l_295,&l_295,&l_295,(void*)0,(void*)0,&l_295}},{{&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295}},{{&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295}},{{&l_295,&l_295,(void*)0,&l_295,&l_295,(void*)0,&l_295}},{{&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295}},{{&l_295,&l_295,&l_295,&l_295,&l_295,&l_295,&l_295}}};
    int **l_305 = &l_288;
    int l_336 = 0L;
    short l_339 = 0xED1BL;
    int *l_363[9][2][6] = {{{(void*)0,&l_289,&g_39,&g_39,&l_289,(void*)0},{(void*)0,&g_72,&l_336,&l_336,(void*)0,&g_108}},{{&l_289,&g_108,(void*)0,(void*)0,(void*)0,&g_108},{&l_289,&g_108,(void*)0,&l_336,&l_336,&g_72}},{{(void*)0,(void*)0,&l_289,&g_39,&g_39,&l_289},{(void*)0,(void*)0,&g_30[6][2],(void*)0,&l_336,&g_39}},{{&g_108,&g_108,&l_336,&g_30[6][2],(void*)0,&g_30[6][2]},{&l_336,&g_108,&l_336,&g_72,(void*)0,&g_39}},{{&g_30[2][0],&g_72,&g_30[6][2],&g_39,&l_289,&l_289},{&g_39,&l_289,&l_289,&g_39,&g_30[2][0],&l_289}},{{&g_108,&g_72,(void*)0,&l_289,(void*)0,&l_336},{(void*)0,&g_30[2][0],&g_30[6][2],&g_30[2][0],(void*)0,&g_39}},{{&l_336,&g_72,(void*)0,&g_39,&g_30[2][0],(void*)0},{(void*)0,&g_108,&g_72,&g_72,&g_108,(void*)0}},{{&g_39,&l_289,(void*)0,(void*)0,(void*)0,&g_39},{&g_108,&l_336,&g_30[6][2],(void*)0,&g_30[6][2],&l_336}},{{&g_108,&g_39,(void*)0,(void*)0,(void*)0,&l_289},{&g_39,(void*)0,&g_108,&g_72,&g_72,&g_108}}};
    unsigned char l_411 = 1UL;
    const short l_428 = (-1L);
    int i, j, k;
    (*l_288) |= p_7;
    l_289 ^= (((*l_288) = 5L) , ((*l_288) = ((*l_288) >= g_84)));
    if (((safe_add_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((p_7 & (p_7 >= p_7)), (+(*l_288)))) | func_31(&l_289)), (l_294[2][0][2] != (void*)0))) && 0x977314DBC262E34BLL))
    {
        unsigned l_308 = 4294967295UL;
        int l_326 = 0x57DCD744L;
        int l_344 = 0x55992C84L;
        long long *l_387[8] = {&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277,&g_277};
        int *l_401 = &l_326;
        unsigned long long *l_403 = &g_230;
        unsigned long long *l_404 = (void*)0;
        unsigned long long *l_405[1][2][7];
        long long l_410 = 0x8971EB0DDA2389F4LL;
        unsigned *l_412 = &l_308;
        unsigned *l_413 = &g_414;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 7; k++)
                    l_405[i][j][k] = &g_406;
            }
        }
        if ((safe_mod_func_uint64_t_u_u((p_7 < p_7), (safe_sub_func_uint16_t_u_u(((*g_137) = ((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((g_126 ^ g_210) ^ (+(func_78(l_305) == (((safe_mul_func_uint16_t_u_u(p_7, p_7)) , ((((l_308 & p_7) < 0L) > l_308) ^ p_7)) && 0x04AF34483748E387LL)))), 255UL)) == (*g_137)), g_84)) ^ p_7)), p_7)))))
        {
            unsigned l_312 = 1UL;
            char *l_313 = &g_126;
            int l_321 = (-10L);
            int l_323[6] = {1L,1L,1L,1L,1L,1L};
            short l_353 = (-1L);
            unsigned char ***l_358 = (void*)0;
            int i;
            for (g_103 = 3; (g_103 >= 0); g_103 -= 1)
            {
                unsigned long long l_309 = 0x165C230C41529060LL;
                int ***l_314 = &g_118;
                (*l_314) = (((((l_309 < (&g_296 == ((l_295 == (void*)0) , &g_296))) < ((((g_230 || 18446744073709551613UL) , ((*l_288) , ((((safe_sub_func_int64_t_s_s(((0xCBCEE99220F0BB08LL == g_135) <= p_7), (-1L))) > l_312) & l_308) ^ p_7))) || 0x5AL) < 0x68L)) , (void*)0) != l_313) , (void*)0);

                ;
                for (g_72 = 0; (g_72 <= 3); g_72 += 1)
                {
                    long long *l_322[9];
                    int *l_325[1][1][8];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_322[i] = &g_116;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_325[i][j][k] = &l_289;
                        }
                    }
                    l_326 &= (g_324 &= ((g_30[(g_103 + 4)][g_103] <= (+(!(func_61(g_30[(g_72 + 4)][g_103]) , (safe_mod_func_int16_t_s_s(p_7, (((safe_sub_func_int8_t_s_s(1L, (l_309 >= ((l_323[4] &= (65530UL < (((((safe_add_func_int32_t_s_s(l_321, p_7)) == 0L) | 0x9175L) , 0UL) ^ p_7))) <= p_7)))) | 0xC57C53E3L) , 65535UL))))))) > (*l_288)));
                    for (g_69 = 0; (g_69 == 7); g_69 = safe_add_func_uint32_t_u_u(g_69, 8))
                    {
                        unsigned long long l_329 = 0x93986B405DD031ECLL;
                        (*l_305) = (l_329 , (*l_305));
                    }
                    (**l_305) = p_7;
                }
            }

            ;
            if (((l_308 == l_321) && ((g_30[6][1] , p_7) >= p_7)))
            {
                int *l_337 = &g_72;
                int *l_338 = &l_289;
                unsigned char *l_361 = &g_296;
                unsigned char ** const l_360 = &l_361;
                unsigned char ** const *l_359 = &l_360;
                (*l_288) ^= l_323[2];
                if (((*l_338) |= (safe_rshift_func_int16_t_s_u(g_30[7][1], (g_210 < ((*l_337) ^= ((((**l_305) = (((0x82E2L == (l_326 || (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((*g_137) = (func_61((l_323[0] = ((l_321 <= ((((p_7 & 0x06B361E43FC740E4LL) , ((((void*)0 != &g_84) == p_7) >= 0UL)) > 0x73C976F2A4D9E29DLL) <= p_7)) != 1UL))) <= 2UL)), 0x50F8L)), l_336)))) >= l_308) <= l_312)) , &g_69) == &g_126)))))))
                {
                    short *l_354 = &g_114;
                    short *l_355 = &l_353;
                    (*l_337) |= ((*g_137) > (((l_339 & (safe_mod_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(((void*)0 != &g_324), (*l_288))) > (((l_344 <= p_7) || (safe_rshift_func_uint16_t_u_s((*l_288), ((*l_355) = ((*l_354) = (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((func_61((((safe_sub_func_int8_t_s_s((func_61(l_326) ^ l_353), (-5L))) | p_7) , g_296)) || p_7), (*l_338))), 3UL))))))) || l_308)) && 0L), p_7))) != 0xA2L) == p_7));
                }
                else
                {
                    unsigned ***l_357 = &g_356;
                    (*l_357) = g_356;
                    (*l_337) |= ((*l_288) = func_61(g_24));
                }
                (*l_338) &= (l_358 == (l_359 = &l_294[7][0][4]));

                ;
            }
            else
            {
                unsigned long long l_362 = 0UL;
                return l_362;


            }
        }
        else
        {
            int l_371[6][10][4] = {{{(-1L),(-1L),(-1L),1L},{4L,(-1L),(-9L),0xB09DB026L},{(-1L),0L,0L,(-1L)},{(-1L),0xB09DB026L,0L,1L},{(-1L),4L,(-9L),4L},{4L,0L,(-1L),4L},{(-1L),4L,1L,1L},{0xB09DB026L,0xB09DB026L,(-9L),1L},{0L,0x099B38A2L,0L,0L},{(-9L),1L,(-9L),0L}},{{(-1L),1L,(-1L),0L},{1L,0x099B38A2L,0x099B38A2L,1L},{(-9L),0L,0x099B38A2L,0L},{1L,(-1L),(-1L),(-1L)},{(-1L),0x099B38A2L,(-9L),(-1L)},{(-9L),(-1L),0L,0L},{0L,0L,(-1L),1L},{0L,0x099B38A2L,0L,0L},{(-9L),1L,(-9L),0L},{(-1L),1L,(-1L),0L}},{{1L,0x099B38A2L,0x099B38A2L,1L},{(-9L),0L,0x099B38A2L,0L},{1L,(-1L),(-1L),(-1L)},{(-1L),0x099B38A2L,(-9L),(-1L)},{(-9L),(-1L),0L,0L},{0L,0L,(-1L),1L},{0L,0x099B38A2L,0L,0L},{(-9L),1L,(-9L),0L},{(-1L),1L,(-1L),0L},{1L,0x099B38A2L,0x099B38A2L,1L}},{{(-9L),0L,0x099B38A2L,0L},{1L,(-1L),(-1L),1L},{1L,(-9L),0L,1L},{0L,1L,0x099B38A2L,0x099B38A2L},{(-1L),(-1L),0xB09DB026L,0L},{(-1L),(-9L),0x099B38A2L,(-1L)},{0L,0L,0L,0x099B38A2L},{1L,0L,0xB09DB026L,(-1L)},{0L,(-9L),(-9L),0L},{0L,(-1L),(-9L),0x099B38A2L}},{{0L,1L,0xB09DB026L,1L},{1L,(-9L),0L,1L},{0L,1L,0x099B38A2L,0x099B38A2L},{(-1L),(-1L),0xB09DB026L,0L},{(-1L),(-9L),0x099B38A2L,(-1L)},{0L,0L,0L,0x099B38A2L},{1L,0L,0xB09DB026L,(-1L)},{0L,(-9L),(-9L),0L},{0L,(-1L),(-9L),0x099B38A2L},{0L,1L,0xB09DB026L,1L}},{{1L,(-9L),0L,1L},{0L,1L,0x099B38A2L,0x099B38A2L},{(-1L),(-1L),0xB09DB026L,0L},{(-1L),(-9L),0x099B38A2L,(-1L)},{0L,0L,0L,0x099B38A2L},{1L,0L,0L,(-9L)},{0x099B38A2L,(-1L),(-1L),0x099B38A2L},{0xB09DB026L,(-9L),(-1L),4L},{0x099B38A2L,0L,0L,0L},{0L,(-1L),0xB09DB026L,0L}}};
            int l_400 = 0x3FBEE5E2L;
            int i, j, k;
            for (g_126 = 0; (g_126 <= 0); g_126 += 1)
            {
                unsigned char l_377 = 0xD7L;
                int l_389[7] = {0L,0L,0L,0L,0L,0L,0L};
                int l_394 = 0xB72AB8E5L;
                unsigned l_399 = 0x73883698L;
                int i;
                for (g_210 = 0; (g_210 <= 0); g_210 += 1)
                {
                    const unsigned char *l_376 = &g_60;
                    const unsigned char **l_375 = &l_376;
                    long long *l_385 = &g_277;
                    int l_388 = 0xEB84C353L;
                    if (p_7)
                    {
                        unsigned long long *l_370[3];
                        int l_382 = 0x75871132L;
                        long long **l_386 = &l_385;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_370[i] = &g_230;
                        (*l_288) &= ((p_7 & (g_5 <= g_39)) , (l_326 ^ (g_67 ^ (-5L))));
                        (**l_305) ^= (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((void*)0 == &g_324), (safe_rshift_func_uint16_t_u_s(((g_230 &= 18446744073709551608UL) > ((l_371[1][5][2] > g_103) <= ((~(safe_mul_func_int16_t_s_s(((g_374 == l_375) , g_30[6][1]), g_324))) == 0xCD80AD7281909621LL))), 14)))), 0xA1FEL));
                        if (p_7)
                            break;
                        (**l_305) = (func_61(l_377) ^ ((safe_rshift_func_int8_t_s_u(0x64L, (safe_sub_func_uint16_t_u_u(l_344, p_7)))) , (l_382 || (((safe_sub_func_int32_t_s_s(((l_388 = (((*l_386) = l_385) == l_387[3])) > (((*g_137) = (g_154[2][0][5] <= 0x181C5315378EA7FFLL)) == p_7)), 0x5AB44907L)) , 0x0294827DB0E1B310LL) || 18446744073709551615UL))));
                    }
                    else
                    {
                        l_389[6] &= g_108;
                    }
                    if ((p_7 != (safe_sub_func_uint8_t_u_u((func_61(((((*g_137) = (safe_lshift_func_int16_t_s_u(g_135, 11))) && (p_7 , func_61(l_394))) , ((l_394 < p_7) , ((g_395[3] = &g_118) == (((safe_mul_func_int8_t_s_s((((g_398[4] = (void*)0) != (void*)0) & g_324), l_399)) > p_7) , (void*)0))))) , 7UL), p_7))))
                    {
                        (**l_305) ^= l_371[1][5][2];
                        return l_377;


                    }
                    else
                    {
                        l_371[1][9][2] = 7L;
                        if (l_400)
                            continue;
                        return p_7;


                    }
                }
                (*g_118) = &l_389[6];

                ;
                for (l_326 = 0; (l_326 <= 0); l_326 += 1)
                {
                    if (l_344)
                    {
                        return p_7;


                    }
                    else
                    {
                        int *l_402 = &l_371[1][5][2];
                        (**l_305) = (-4L);
                        l_402 = l_401;

                        ;
                        return g_296;


                    }
                }
            }
        }

        ;
        l_344 = (((*l_413) &= ((g_406 ^= ((**l_305) = ((*l_403) |= 0x973EA4A81BAFAF94LL))) <= (safe_unary_minus_func_uint32_t_u(((*l_412) ^= (((*l_295) &= 255UL) , ((safe_mul_func_int8_t_s_s(l_410, g_210)) >= (((((g_154[2][0][5] | g_135) || p_7) | (func_78(&l_401) , l_411)) , g_116) , 0x2F8B824F0A6F1ECELL)))))))) < p_7);
        for (l_410 = 0; (l_410 <= 1); l_410 += 1)
        {
            return p_7;


        }
        (*l_305) = (*l_305);
    }
    else
    {
        const unsigned *l_418 = &g_154[2][0][5];
        const unsigned **l_417 = &l_418;
        unsigned *l_420 = &g_154[2][0][5];
        unsigned **l_419 = &l_420;
        int l_423 = 0xF69825B7L;
        int l_427[3];
        int i;
        for (i = 0; i < 3; i++)
            l_427[i] = 0xAE3CD822L;
        (*l_288) = (safe_add_func_uint8_t_u_u(((l_417 == l_419) <= (func_61(g_96) && (p_7 & (g_116 = ((void*)0 != &l_418))))), p_7));
        (**l_305) |= (((((*l_295) = p_7) ^ p_7) == (l_423 = ((((((!(l_423 < 0x326D035FL)) == g_424) < (((safe_sub_func_uint16_t_u_u(((l_423 , (l_427[0] = 4294967290UL)) && p_7), (*g_137))) , p_7) , g_154[2][0][9])) , &l_294[5][0][3]) == (void*)0) >= l_428))) , l_427[0]);
    }


    ;
    (*l_288) &= p_7;
    return g_210;


}







static unsigned char func_11(short p_12, char p_13, short p_14)
{
    int l_28 = 0xF23E4692L;
    unsigned short *l_36 = (void*)0;
    int l_287 = 0xCE6065E5L;
    for (g_24 = 29; (g_24 > 20); g_24 = safe_sub_func_uint64_t_u_u(g_24, 3))
    {
        int *l_29 = &g_30[6][1];
        if (l_28)
            break;
        (*l_29) &= (0xF1L >= 0L);
    }
    l_287 = func_31(func_33(l_36, g_5));



    ;
    return g_114;
}







static int func_31(int * p_32)
{
    unsigned short l_181 = 1UL;
    unsigned short *l_188 = (void*)0;
    int l_196 = 0xBE829238L;
    int **l_214 = (void*)0;
    unsigned char *l_280 = &g_60;
    for (g_96 = 0; (g_96 >= 47); ++g_96)
    {
        int l_177 = (-9L);
        int **l_178[3];
        unsigned short *l_182 = &g_24;
        unsigned short **l_187[6][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
        long long *l_226 = &g_116;
        long long l_242 = (-6L);
        int l_257[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_178[i] = &g_119;
        if ((safe_mod_func_int8_t_s_s((l_177 >= ((*g_137) | ((safe_lshift_func_uint16_t_u_u(l_181, ((*l_182) = 0xEEAAL))) && (l_181 , (safe_mul_func_uint8_t_u_u(l_181, (((safe_lshift_func_uint16_t_u_u((&l_181 != (l_188 = l_182)), 15)) != g_39) > 0UL))))))), l_181)))
        {
            unsigned l_189[5] = {0xD00FDC0CL,0xD00FDC0CL,0xD00FDC0CL,0xD00FDC0CL,0xD00FDC0CL};
            int *l_199 = &g_39;
            int *l_200[7][7] = {{&g_30[6][0],(void*)0,&g_30[6][0],&g_67,&g_108,&g_108,&g_67},{&g_30[6][1],&g_67,&g_30[6][1],&l_196,&l_196,&l_196,&l_196},{&g_30[6][0],(void*)0,&g_30[6][0],&g_67,&g_108,&g_108,&g_67},{&g_30[6][1],&g_67,&g_30[6][1],&l_196,&l_196,&l_196,&l_196},{&g_30[6][0],(void*)0,&g_30[6][0],&g_67,&g_108,&g_108,&g_67},{&g_30[6][1],&g_67,&g_30[6][1],&l_196,&l_196,&l_196,&l_196},{&g_30[6][0],(void*)0,&g_30[6][0],&g_67,&g_108,&g_108,&g_72}};
            long long *l_225 = &g_116;
            int i, j;
            if (l_189[4])
            {
                int l_192[6][7][4] = {{{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,1L,1L},{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,1L,1L},{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L}},{{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,1L,1L},{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,1L,1L},{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L}},{{1L,0xC33B20C6L,1L,1L},{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,1L,1L},{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,1L,1L}},{{0xC33B20C6L,0xC33B20C6L,8L,0xC33B20C6L},{0xC33B20C6L,1L,1L,0xC33B20C6L},{1L,0xC33B20C6L,8L,8L},{1L,1L,0xC33B20C6L,1L},{1L,8L,8L,1L},{8L,1L,8L,8L},{1L,1L,0xC33B20C6L,1L}},{{1L,8L,8L,1L},{8L,1L,8L,8L},{1L,1L,0xC33B20C6L,1L},{1L,8L,8L,1L},{8L,1L,8L,8L},{1L,1L,0xC33B20C6L,1L},{1L,8L,8L,1L}},{{8L,1L,8L,8L},{1L,1L,0xC33B20C6L,1L},{1L,8L,8L,1L},{8L,1L,8L,8L},{1L,1L,0xC33B20C6L,1L},{1L,8L,8L,1L},{8L,1L,8L,8L}}};
                unsigned char *l_195[7];
                int *l_198 = &g_39;
                unsigned short *l_203 = &g_24;
                short *l_211 = (void*)0;
                short *l_212 = &g_114;
                int l_213 = 0x35E29509L;
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_195[i] = &g_60;
                if ((safe_mul_func_uint8_t_u_u((l_181 >= l_192[0][5][0]), (l_196 = (safe_rshift_func_uint8_t_u_u((g_60 &= g_96), l_181))))))
                {
                    unsigned long long l_197 = 0x1E8D4B36AF559A89LL;
                    return l_197;
                }
                else
                {
                    for (g_103 = 0; (g_103 <= 2); g_103 += 1)
                    {
                        int i;
                        l_198 = p_32;


                        l_200[2][6] = (g_154[2][0][2] , ((*g_118) = l_199));

                        ;
                    }


                    if ((*p_32))
                        break;
                }


                for (g_69 = 11; (g_69 == 21); g_69 = safe_add_func_uint16_t_u_u(g_69, 4))
                {
                    for (g_116 = 3; (g_116 >= 0); g_116 -= 1)
                    {
                        int i, j;
                        return g_30[(g_116 + 5)][g_116];
                    }
                }
                if ((((((0x8982D4E4L | ((&l_181 != l_203) , (*l_198))) < l_181) > 0x9BEFCDEBL) , g_39) , (*p_32)))
                {
                    unsigned *l_227[1][9] = {{&g_5,&g_154[0][0][0],&g_5,&g_154[0][0][0],&g_5,&g_154[0][0][0],&g_5,&g_154[0][0][0],&g_5}};
                    int l_228[3];
                    unsigned long long *l_229 = &g_230;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_228[i] = (-1L);
                    (*g_118) = (((g_30[6][1] , (safe_add_func_uint64_t_u_u(g_39, ((*l_229) = (safe_lshift_func_uint8_t_u_s((g_108 >= (~((0x927F863D7CA0C704LL < func_61(g_84)) & ((safe_mod_func_uint16_t_u_u(((*l_198) < g_210), (safe_sub_func_uint32_t_u_u((l_228[0] = (safe_sub_func_uint64_t_u_u(((l_225 != l_226) | g_24), g_108))), (*p_32))))) >= g_69)))), g_103)))))) < (*l_198)) , (void*)0);

                    ;
                }
                else
                {
                    int l_236 = 0x9810F85DL;
                    for (l_196 = 0; (l_196 != 16); l_196 = safe_add_func_int32_t_s_s(l_196, 4))
                    {
                        long long *l_233 = &g_116;
                        unsigned *l_234 = (void*)0;
                        unsigned *l_235 = &g_135;
                        unsigned char * const **l_237 = (void*)0;
                        unsigned char **l_239 = (void*)0;
                        unsigned char ***l_238 = &l_239;
                        (*l_198) = ((l_233 != (((*l_235) |= g_154[2][0][5]) , l_226)) != (l_236 , ((*l_198) != 0xC8L)));
                        (*l_238) = (void*)0;
                    }
                    if ((*p_32))
                        continue;
                    for (g_84 = 0; (g_84 > 44); g_84 = safe_add_func_uint16_t_u_u(g_84, 4))
                    {
                        (*l_198) = 0xE00818ECL;
                    }
                }
                (*g_118) = p_32;


            }
            else
            {
                const short l_243 = (-1L);
                unsigned long long *l_244 = &g_230;
                int *l_245 = &g_67;
                if (((((func_61(g_114) ^ (1UL | l_242)) , (!func_78(&p_32))) ^ (0x53EBC11B85D3632DLL >= ((*l_244) |= ((((7L | (*g_137)) & 0x4D5CL) , (*g_137)) & l_243)))) ^ l_181))
                {
                    long long l_248 = 0x47C96AD61939E144LL;
                    (*g_118) = l_245;

                    ;
                    for (l_242 = 0; (l_242 < (-7)); l_242 = safe_sub_func_int64_t_s_s(l_242, 7))
                    {
                        (**g_118) = l_248;
                        return (*g_119);
                    }
                    (*g_119) &= (g_154[2][0][5] && 0x974CCA55430AC928LL);
                }
                else
                {
                    (*l_245) |= 0xAEBFF18DL;
                    return (*p_32);
                }

                ;
            }


            (*l_199) = 0x002E6321L;
        }
        else
        {
            int *l_249 = &g_30[6][0];
            unsigned char *l_286 = &g_60;
            l_249 = ((*g_118) = p_32);



            for (g_116 = 0; (g_116 <= (-1)); g_116--)
            {
                (*g_119) = func_78((((*l_249) && 1L) , &p_32));
            }
            for (g_60 = 10; (g_60 != 55); g_60 = safe_add_func_int8_t_s_s(g_60, 1))
            {
                unsigned char l_254 = 2UL;
                int l_270 = (-1L);
                if ((*p_32))
                {
                    (*l_249) &= l_254;
                }
                else
                {
                    int **l_264 = &g_119;
                    int l_273 = 0x1930937FL;
                    unsigned char *l_276[7] = {(void*)0,(void*)0,&l_254,(void*)0,(void*)0,&l_254,(void*)0};
                    int l_283 = (-1L);
                    int i;
                    if (((safe_add_func_int64_t_s_s(8L, l_257[5])) , (safe_mul_func_uint8_t_u_u(((g_83[2] = (void*)0) != ((safe_add_func_int8_t_s_s(((*l_249) || (*g_137)), 0x01L)) , &g_84)), l_254))))
                    {
                        unsigned *l_265 = (void*)0;
                        unsigned *l_266 = &g_154[2][0][5];
                        int l_269 = 0xFFE1010FL;
                        l_270 ^= ((-9L) | ((((*l_266) &= (safe_mod_func_uint8_t_u_u(((void*)0 == p_32), func_78(l_264)))) || (((safe_rshift_func_uint8_t_u_u(g_114, 5)) ^ (l_269 <= ((l_269 <= l_269) , (**l_264)))) >= (*l_249))) ^ l_269));
                        return (*p_32);
                    }
                    else
                    {
                        unsigned long long *l_271 = &g_230;
                        int l_272 = 0x2B0E516BL;
                        int **l_275[5][1];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_275[i][j] = &g_119;
                        }
                        l_196 = ((*p_32) = 0L);
                        l_272 |= (p_32 != (((*l_249) = ((*l_271) = (*l_249))) , l_249));
                        l_273 &= (*l_249);
                        (*l_249) = ((safe_unary_minus_func_uint16_t_u((l_270 > func_78(l_275[4][0])))) && l_196);
                    }
                    l_283 ^= ((g_277 = (**l_264)) , func_61((safe_sub_func_int16_t_s_s(((void*)0 != l_280), (safe_sub_func_uint64_t_u_u(l_270, g_230))))));
                    (**l_264) = (safe_lshift_func_uint16_t_u_s(((void*)0 != l_286), 1));
                }
            }
            return (*p_32);
        }


        l_196 |= (*g_119);
        (*g_118) = p_32;


    }


    ;
    return (*p_32);
}







static int * func_33(unsigned short * p_34, const short p_35)
{
    int l_53 = 0xAEC70140L;
    const unsigned short *l_58[4];
    long long *l_115 = &g_116;
    int **l_117 = (void*)0;
    unsigned char l_168 = 0x67L;
    int *l_172 = &g_30[6][1];
    int i;
    for (i = 0; i < 4; i++)
        l_58[i] = (void*)0;
    for (g_24 = 7; (g_24 >= 57); g_24 = safe_add_func_uint32_t_u_u(g_24, 6))
    {
        long long l_74 = (-6L);
        int *l_98 = &g_30[6][1];
        unsigned short *l_112 = &g_24;
        for (g_39 = 25; (g_39 < 23); g_39 = safe_sub_func_uint8_t_u_u(g_39, 3))
        {
            unsigned char *l_59 = &g_60;
            const int l_63 = 0x106CF363L;
            char *l_68 = &g_69;
            int *l_75 = (void*)0;
            l_98 = func_42(func_47(g_30[2][1], l_53, &g_30[4][0], ((((((safe_lshift_func_int16_t_s_s((((*l_68) ^= ((safe_sub_func_int8_t_s_s(p_35, ((&g_24 == l_58[3]) > ((((*l_59) &= 0x5BL) || func_61((l_63 | (safe_mul_func_int16_t_s_s(g_24, p_35))))) >= 4294967295UL)))) , g_39)) != 0L), g_30[5][3])) & p_35) , p_35) , p_35) == l_53) || 0UL), p_35), g_24, l_74, l_75);
            for (g_84 = 0; (g_84 > 26); g_84 = safe_add_func_int16_t_s_s(g_84, 7))
            {
                long long *l_102[4];
                int l_109 = 0x979765BCL;
                short *l_113 = &g_114;
                int i;
                for (i = 0; i < 4; i++)
                    l_102[i] = &l_74;
                (*l_98) = p_35;
                g_72 = ((g_103 |= (safe_unary_minus_func_int32_t_s(((*l_98) ^= g_72)))) > (safe_add_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_u(((g_108 = (p_35 | g_84)) <= l_109), 6)) && (safe_add_func_int16_t_s_s(((*l_113) = ((l_112 != &g_84) , p_35)), (l_115 != (p_35 , (void*)0))))) <= 0xDB7DL), g_60)));
                (*l_98) = p_35;
            }
        }
        (*l_98) = func_78(g_118);
    }


    for (g_69 = 7; (g_69 < (-6)); --g_69)
    {
        unsigned short **l_122 = &g_83[3];
        char *l_125[10][10][2] = {{{&g_69,&g_126},{&g_126,&g_69},{(void*)0,&g_69},{&g_69,&g_126},{&g_69,&g_126},{&g_126,&g_69},{&g_69,&g_69},{&g_69,&g_126},{&g_69,&g_126},{&g_126,&g_126}},{{&g_126,&g_69},{&g_69,&g_126},{&g_69,&g_126},{&g_69,&g_69},{(void*)0,&g_69},{&g_69,&g_69},{&g_69,&g_69},{&g_69,&g_69},{&g_69,(void*)0},{&g_126,&g_126}},{{&g_126,&g_126},{&g_69,&g_126},{&g_69,&g_126},{&g_126,&g_126},{&g_126,(void*)0},{&g_69,&g_69},{&g_69,&g_69},{&g_69,&g_69},{&g_69,&g_69},{(void*)0,&g_69}},{{&g_69,&g_126},{&g_69,&g_126},{&g_69,&g_69},{&g_126,&g_126},{&g_126,&g_126},{&g_69,&g_126},{&g_69,&g_69},{&g_69,&g_69},{&g_126,&g_126},{&g_69,&g_126}},{{&g_69,&g_69},{&g_126,&g_69},{&g_126,&g_126},{&g_69,&g_126},{&g_69,&g_69},{&g_69,&g_126},{&g_69,&g_126},{&g_126,&g_69},{&g_69,&g_69},{&g_69,&g_69}},{{&g_126,&g_126},{(void*)0,&g_69},{&g_126,&g_69},{&g_69,&g_126},{&g_126,&g_69},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_69},{&g_126,&g_126},{&g_69,&g_69}},{{&g_126,&g_69},{(void*)0,&g_126},{&g_126,&g_126},{&g_69,&g_126},{&g_126,&g_126},{(void*)0,(void*)0},{&g_69,(void*)0},{&g_69,&g_69},{&g_69,&g_69},{&g_69,&g_69}},{{&g_69,&g_126},{(void*)0,&g_126},{&g_69,&g_126},{&g_126,&g_126},{&g_69,(void*)0},{&g_126,&g_69},{&g_69,&g_126},{&g_126,(void*)0},{&g_126,(void*)0},{&g_126,&g_126}},{{&g_69,(void*)0},{&g_126,&g_126},{&g_69,&g_69},{(void*)0,(void*)0},{(void*)0,&g_69},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_69,(void*)0},{&g_69,&g_69}},{{&g_69,&g_126},{&g_69,&g_69},{&g_69,(void*)0},{&g_69,&g_126},{&g_126,&g_126},{&g_126,&g_126},{&g_126,&g_69},{(void*)0,(void*)0},{(void*)0,&g_69},{&g_69,&g_69}}};
        unsigned l_127 = 4294967295UL;
        int *l_128 = &g_67;
        short *l_129 = &g_103;
        int l_148 = (-1L);
        int i, j, k;
        (*g_118) = l_128;

        ;
        if ((p_35 , (((*l_129) = (&g_119 != &g_119)) > (*l_128))))
        {
            unsigned l_130 = 4294967289UL;
            (**g_118) = l_130;
        }
        else
        {
            unsigned short *l_136 = &g_84;
            int *l_138 = &g_108;
            int l_171 = (-6L);
            if (p_35)
                break;
            for (g_72 = 6; (g_72 != 13); g_72 = safe_add_func_uint16_t_u_u(g_72, 1))
            {
                unsigned *l_134[5][6];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_134[i][j] = &g_135;
                }
                (*g_119) &= (safe_unary_minus_func_uint64_t_u((((g_135 = p_35) , ((*l_122) = p_34)) == (g_137 = l_136))));

                ;
                if ((*g_119))
                    continue;
                if ((*g_119))
                    continue;
                (*g_118) = l_138;

                ;
            }

            ;
            for (g_116 = (-25); (g_116 >= (-6)); g_116++)
            {
                unsigned short l_141 = 1UL;
                int *l_169 = (void*)0;
                int *l_170[9][9] = {{&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2]},{&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1]},{&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2]},{&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1]},{&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2]},{&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1]},{&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2]},{&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1],&g_30[6][1]},{&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2],&g_39,&g_30[4][2]}};
                int i, j;
                if (l_141)
                {
                    (*g_119) = 0x0AE147BCL;
                    for (g_84 = (-17); (g_84 > 16); g_84 = safe_add_func_int32_t_s_s(g_84, 8))
                    {
                        (*g_119) = (g_30[6][1] ^ (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(l_141, g_126)), l_148)));
                    }
                    if ((**g_118))
                        continue;
                }
                else
                {
                    for (g_135 = 0; (g_135 <= 3); g_135 += 1)
                    {
                        unsigned *l_151 = &l_127;
                        int l_152[10][7] = {{0xF311E796L,(-3L),(-9L),(-9L),(-3L),0xF311E796L,(-7L)},{0xF311E796L,(-9L),1L,1L,(-8L),0L,(-1L)},{(-5L),(-9L),(-1L),(-7L),(-4L),(-9L),(-8L)},{(-4L),(-5L),0xF309D661L,0L,0L,0xF309D661L,(-5L)},{1L,0xE8018D86L,0xF309D661L,(-9L),0x6F2926A7L,0L,(-1L)},{(-6L),1L,(-1L),0xB83C02C4L,0xAB2586FDL,0xF05BDE44L,(-7L)},{0xF309D661L,0xB83C02C4L,(-1L),(-9L),(-1L),(-1L),(-9L)},{(-9L),(-7L),(-9L),0L,(-1L),(-4L),1L},{1L,0xF05BDE44L,(-3L),(-7L),0xAB2586FDL,0xE8018D86L,0L},{(-7L),(-3L),0xF05BDE44L,1L,0x6F2926A7L,(-4L),(-4L)}};
                        unsigned *l_153 = &g_154[2][0][5];
                        int i, j;
                        g_30[(g_135 + 6)][g_135] = (safe_add_func_uint32_t_u_u(((*l_151) &= p_35), ((*l_153) = l_152[0][1])));
                    }
                    (*g_119) = ((-1L) || 0xFCL);
                }
                for (l_53 = (-9); (l_53 >= 19); l_53 = safe_add_func_int64_t_s_s(l_53, 4))
                {
                    const unsigned char l_161[3] = {0x47L,0x47L,0x47L};
                    int i;
                    for (g_126 = 3; (g_126 >= 0); g_126 -= 1)
                    {
                        int i;
                        (*l_138) |= (-3L);
                        (*g_118) = &l_148;

                        ;
                        if ((*l_128))
                            break;
                    }
                }
                l_171 = ((2UL | (safe_mod_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(((*g_119) = (**g_118)), (safe_mul_func_int8_t_s_s(0x5EL, (0xEFL | 1L))))) != ((((l_168 , (-1L)) , &l_168) == (void*)0) & 0x753228B0L)) & l_141), l_141))) , p_35);
            }

            ;
        }

        ;
    }



    ;
    return l_172;


}







static int * const func_42(unsigned short * p_43, const int p_44, unsigned p_45, int * p_46)
{
    int *l_77[10][4] = {{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67},{&g_30[2][1],&g_67,&g_30[2][1],&g_67}};
    int **l_76 = &l_77[2][3];
    unsigned short *l_95 = &g_96;
    int * const l_97 = &g_30[9][1];
    int i, j;
    (*l_76) = &g_30[8][2];
    g_30[6][1] = g_72;
    g_30[6][1] = (func_78(&l_77[6][1]) , (safe_rshift_func_int8_t_s_s(func_61((((*p_43) == ((*l_95) ^= (g_5 >= (safe_mul_func_uint16_t_u_u((*p_43), ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(func_78(&l_77[2][3]), (0xDFBA6F46L || p_44))), 0xDEL)) , (*p_43))))))) , 0x71DF66360CCD11DCLL)), 2)));
    return l_97;


}







static unsigned short * func_47(unsigned p_48, int p_49, int * p_50, int p_51, long long p_52)
{
    int *l_70 = &g_67;
    int *l_71 = &g_72;
    unsigned short *l_73 = &g_24;
    (*l_71) = ((*p_50) = ((*l_70) &= (*p_50)));
    return l_73;


}







static char func_61(long long p_62)
{
    int *l_66[7][9] = {{&g_39,(void*)0,&g_39,&g_30[6][1],&g_30[6][1],&g_39,(void*)0,&g_39,&g_30[6][1]},{&g_67,&g_67,&g_67,&g_67,&g_39,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_30[6][1],&g_67,&g_30[6][1],&g_67,&g_67,&g_30[6][1],&g_67,&g_30[6][1]},{&g_67,&g_39,&g_30[6][1],&g_30[6][1],&g_39,&g_67,&g_39,&g_30[6][1],&g_30[6][1]},{&g_67,&g_67,&g_30[6][1],&g_67,&g_30[6][1],&g_67,&g_67,&g_30[6][1],&g_67},{&g_67,&g_39,&g_67,&g_67,&g_67,&g_67,&g_39,&g_67,&g_67},{&g_39,&g_30[6][1],&g_30[6][1],&g_39,(void*)0,&g_39,&g_30[6][1],&g_30[6][1],&g_39}};
    int i, j;
    g_67 = g_39;
    return p_62;
}







static int func_78(int ** p_79)
{
    unsigned short *l_85 = &g_24;
    for (g_67 = 8; (g_67 != 7); g_67--)
    {
        int *l_86 = &g_72;
        (*l_86) = (safe_unary_minus_func_int8_t_s(((g_83[0] = &g_24) == l_85)));
        (*p_79) = (*p_79);
        return g_84;
    }
    return g_84;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_30[i][j], "g_30[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_154[i][j][k], "g_154[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
