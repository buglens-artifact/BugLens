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



static const unsigned g_2 = 0xCA631852L;
static int g_4 = 0x439BEB06L;
static int g_38 = 0x99040C3FL;
static unsigned g_52[1] = {1UL};
static unsigned short g_57 = 65528UL;
static short g_58 = 0x2FAFL;
static unsigned char g_60 = 3UL;
static char g_62 = 0x86L;
static unsigned short g_64[10][1] = {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}};
static int * const g_67 = &g_4;
static int * const * const g_66 = &g_67;
static unsigned g_98 = 5UL;
static unsigned char g_111 = 0x55L;
static unsigned g_117 = 4294967292UL;
static int *g_145 = (void*)0;
static int *g_183[8] = {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4};
static short g_194 = (-1L);
static unsigned char ***g_198 = (void*)0;
static char *g_218 = (void*)0;
static char **g_217 = &g_218;
static const int *g_261 = &g_4;
static int g_279 = 1L;
static int *g_278 = &g_279;
static int **g_277 = &g_278;
static unsigned g_310[9] = {1UL, 1UL, 0UL, 1UL, 1UL, 0UL, 1UL, 1UL, 0UL};
static const int *g_353 = &g_4;
static unsigned g_434 = 1UL;
static int g_472 = 0x6D915655L;
static int *g_471 = &g_472;
static int **g_470 = &g_471;
static unsigned g_506 = 0UL;
static unsigned *g_505 = &g_506;



static char func_1(void);
static int func_5(int * p_6, char p_7, int p_8);
static int * func_9(int * p_10);
static int * func_11(int p_12);
static int * const * func_13(int p_14);
static int func_19(short p_20, int p_21);
static int * func_22(unsigned char p_23, unsigned char p_24, int ** p_25);
static unsigned short func_30(unsigned p_31, int p_32, unsigned short p_33, int * p_34, const int ** p_35);
static unsigned char func_39(unsigned char p_40, int p_41, short p_42);
static char func_43(unsigned short p_44, int * const p_45, const char p_46);
static char func_1(void)
{
    int *l_3[6][4][9] = {{{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}, {{&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4, &g_4}}};
    unsigned **l_504[7][1][1];
    unsigned l_508 = 0xBE76DD2CL;
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_504[i][j][k] = (void*)0;
        }
    }
    g_4 = g_2;
    (**g_66) = func_5(func_9(func_11(g_2)), (safe_mul_func_uint16_t_u_u((g_472 <= 0xDAL), 0xBB5DL)), ((&g_434 == (g_505 = &g_434)) != 0xA2L));
    return l_508;
}







static int func_5(int * p_6, char p_7, int p_8)
{
    short l_507 = 1L;
    return l_507;
}







static int * func_9(int * p_10)
{
    unsigned short l_496 = 0xB141L;
    (**g_66) = (((*g_217) != (void*)0) == l_496);
    for (g_98 = 0; (g_98 < 4); g_98 = safe_add_func_uint32_t_u_u(g_98, 6))
    {
        for (g_194 = 0; (g_194 != 28); g_194 = safe_add_func_int16_t_s_s(g_194, 1))
        {
            int *l_501[10][7] = {{&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}, {&g_4, &g_472, &g_472, &g_4, &g_4, &g_4, &g_4}};
            int i, j;
            return l_501[8][1];
        }
    }
    return p_10;
}







static int * func_11(int p_12)
{
    short l_477 = 1L;
    char **l_478 = &g_218;
    int ***l_480 = &g_470;
    int ****l_479 = &l_480;
    int l_481 = 0x49FF2264L;
    int * const *l_495 = &g_145;
    int * const **l_494 = &l_495;
    (*l_494) = func_13((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((l_481 = (func_19(p_12, g_4) | ((safe_mul_func_int8_t_s_s(l_477, (l_478 == l_478))) && (((*l_479) = (void*)0) == (void*)0)))) & (safe_mod_func_int8_t_s_s(l_477, p_12))), 0xAEL)), 0x75L)));
    return (*g_470);
}







static int * const * func_13(int p_14)
{
    char l_484[9][9] = {{0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}, {0x0BL, 3L, 0x82L, 0L, 0x6BL, (-6L), (-1L), (-1L), (-6L)}};
    unsigned char *l_489[5][8][6] = {{{&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}}, {{&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}}, {{&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}}, {{&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}}, {{&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}, {&g_60, &g_111, &g_60, (void*)0, (void*)0, &g_60}}};
    int l_490 = 6L;
    int **l_493[4][3][3] = {{{&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}}, {{&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}}, {{&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}}, {{&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}, {&g_471, &g_145, &g_471}}};
    int i, j, k;
    (**g_470) = ((0x28B0L & ((l_484[7][6] = p_14) == (safe_rshift_func_uint16_t_u_s(65535UL, 12)))) & 4294967292UL);
    (*g_470) = func_22(p_14, (safe_add_func_uint8_t_u_u((l_490 = p_14), (~(safe_rshift_func_int8_t_s_s((-5L), (g_62 = (p_14 <= (**g_66)))))))), l_493[2][0][0]);
    return l_493[2][0][0];
}







static int func_19(short p_20, int p_21)
{
    unsigned char l_36 = 4UL;
    int *l_37 = &g_38;
    int l_47 = 0xD058BBE5L;
    int l_441[7][7] = {{(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}, {(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}, {(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}, {(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}, {(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}, {(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}, {(-6L), 0x07B3F76FL, 0x07B3F76FL, (-6L), (-3L), 0x284F1512L, (-7L)}};
    unsigned short *l_469 = &g_57;
    int i, j;
    (*g_470) = func_22((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(0xE974L, ((*l_469) = func_30(l_36, ((*l_37) = 0L), ((l_441[6][0] = func_39(p_20, l_36, (g_4 && func_43((l_47 = l_36), l_37, (safe_sub_func_uint16_t_u_u(6UL, 0xD2DAL)))))) | 0x21L), g_278, &g_353)))), p_21)), l_36, g_470);
    return (*g_471);
}







static int * func_22(unsigned char p_23, unsigned char p_24, int ** p_25)
{
    int **l_473 = &g_471;
    int *l_474 = &g_4;
    (*l_473) = (*g_66);
    (*p_25) = l_474;
    return (*p_25);
}







static unsigned short func_30(unsigned p_31, int p_32, unsigned short p_33, int * p_34, const int ** p_35)
{
    unsigned *l_446 = &g_310[2];
    const int l_447[3] = {0xE579D2D7L, 0xE579D2D7L, 0xE579D2D7L};
    int l_448 = 8L;
    short *l_464 = &g_194;
    unsigned char *l_467 = &g_111;
    int *l_468 = &g_4;
    int i;
    (*p_34) = (((0UL || (safe_mul_func_uint16_t_u_u(((0x061BA899L | ((*l_446) = p_33)) == l_447[2]), l_447[2]))) | (g_117 = ((*g_277) != (*g_277)))) & (p_33 & ((l_448 = l_447[2]) < p_32)));
    (*g_67) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_4, 14)), ((safe_sub_func_int32_t_s_s((**p_35), 0UL)) > (safe_unary_minus_func_int8_t_s((p_33 | 0x59EEL)))))), 0)), ((safe_lshift_func_uint8_t_u_u(p_33, (safe_sub_func_uint8_t_u_u((p_33 >= ((*l_464) = g_4)), ((*l_467) = (safe_mul_func_int8_t_s_s((-6L), 0xF2L))))))) | l_447[1])));
    l_468 = (*g_66);
    return (*l_468);
}







static unsigned char func_39(unsigned char p_40, int p_41, short p_42)
{
    unsigned l_437 = 0x8557FB40L;
    int *l_438 = &g_4;
    int **l_439 = (void*)0;
    int *l_440 = &g_4;
    for (g_57 = 11; (g_57 != 35); g_57++)
    {
        (**g_66) = (!l_437);
    }
    l_440 = l_438;
    return (*l_438);
}







static char func_43(unsigned short p_44, int * const p_45, const char p_46)
{
    int *l_51 = (void*)0;
    int **l_50 = &l_51;
    int l_70 = 0x4CEC8E44L;
    const char l_153 = (-3L);
    unsigned char ***l_200 = (void*)0;
    unsigned char l_234 = 7UL;
    unsigned short l_266 = 2UL;
    int **l_272 = (void*)0;
    int *l_317[6] = {&l_70, &l_70, &l_70, &l_70, &l_70, &l_70};
    unsigned l_336[3][1][3] = {{{1UL, 0x02C50F9EL, 1UL}}, {{1UL, 0x02C50F9EL, 1UL}}, {{1UL, 0x02C50F9EL, 1UL}}};
    int **l_432 = (void*)0;
    int **l_433 = &l_317[1];
    int i, j, k;
    (*l_50) = &g_4;
    if ((**l_50))
    {
        int l_53 = 1L;
        for (p_44 = 0; p_44 < 1; p_44 += 1)
        {
            g_52[p_44] = 0x33933B83L;
        }
        for (g_4 = 0; (g_4 >= 0); g_4 -= 1)
        {
            unsigned short *l_56 = &g_57;
            unsigned char *l_59 = &g_60;
            char *l_61 = &g_62;
            unsigned short *l_63 = &g_64[2][0];
            int **l_65 = &l_51;
            int i;
            g_58 = (((((g_52[g_4] | g_2) > g_52[g_4]) | l_53) > 4294967295UL) || (((safe_sub_func_uint16_t_u_u(g_4, g_4)) < (g_2 | ((((*l_56) = (((**l_50) > 65530UL) ^ (*l_51))) != g_52[g_4]) & g_4))) > p_44));
            l_53 = (((*l_63) = (((*l_59) = 1UL) || ((((*l_56) = p_44) || p_46) || (((*l_61) = (&g_4 != p_45)) | p_44)))) > (l_65 == g_66));
            l_70 = (safe_mul_func_int8_t_s_s((((**l_65) || 0L) || 0x19L), g_64[6][0]));
        }
    }
    else
    {
        char l_80 = 0xFDL;
        short l_105 = (-1L);
        unsigned *l_110 = (void*)0;
        unsigned char *l_135[9][6] = {{(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}, {(void*)0, &g_111, (void*)0, &g_111, &g_60, (void*)0}};
        unsigned char ** const l_134 = &l_135[5][4];
        int l_182 = 0x97D859D8L;
        int i, j;
        if (((-4L) <= (p_45 == (*g_66))))
        {
            (**l_50) = (*l_51);
        }
        else
        {
            (**g_66) = (*l_51);
            if ((**g_66))
            {
                int *l_92 = (void*)0;
                for (g_57 = (-23); (g_57 <= 18); ++g_57)
                {
                    for (g_60 = 0; (g_60 <= 31); g_60 = safe_add_func_int8_t_s_s(g_60, 4))
                    {
                        (*g_67) = p_44;
                    }
                }
                for (l_70 = 0; (l_70 > 28); l_70 = safe_add_func_uint8_t_u_u(l_70, 8))
                {
                    short l_79 = 0x4EFFL;
                    int *l_95 = &l_70;
                    for (g_60 = 23; (g_60 < 32); g_60 = safe_add_func_int8_t_s_s(g_60, 2))
                    {
                        int **l_81[5] = {&l_51, &l_51, &l_51, &l_51, &l_51};
                        int **l_82 = &l_51;
                        int i;
                        l_80 = l_79;
                        (**l_50) = (**g_66);
                        (*l_82) = (*g_66);
                    }
                    for (l_79 = (-19); (l_79 != (-13)); ++l_79)
                    {
                        unsigned char *l_91 = &g_60;
                        int l_93 = (-3L);
                        (*g_67) = (((safe_mod_func_int32_t_s_s((**g_66), g_58)) && ((((g_57 >= g_62) == (safe_mul_func_uint16_t_u_u(65534UL, (g_64[2][0] = 0UL)))) & (safe_sub_func_int8_t_s_s((((*l_91) = g_62) != (l_93 = (((p_45 == l_92) & 0x9C2354C0L) == g_57))), g_62))) ^ g_4)) >= p_44);
                        return p_46;
                    }
                    for (l_80 = 0; (l_80 >= 0); l_80 -= 1)
                    {
                        int **l_94 = &l_51;
                        int i, j;
                        (*l_94) = (*g_66);
                        (*l_94) = l_95;
                        return g_64[(l_80 + 8)][l_80];
                    }
                    if ((**g_66))
                    {
                        int **l_96 = &l_95;
                        (*l_96) = (*g_66);
                    }
                    else
                    {
                        return g_2;
                    }
                }
            }
            else
            {
                int l_97[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_97[i] = 0L;
                return l_97[3];
            }
        }
        (**l_50) = g_98;
        if ((!(safe_sub_func_int16_t_s_s(p_46, (safe_sub_func_uint16_t_u_u((8UL && (safe_mod_func_int32_t_s_s((*g_67), (g_111 = (l_105 ^ (0x85EFL ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*l_51) >= p_44), ((((1UL | g_64[2][0]) < (**l_50)) & (-1L)) | (*l_51)))), 3UL)))))))), (-1L)))))))
        {
            int *l_120 = &g_4;
            for (l_80 = 0; (l_80 < (-19)); l_80 = safe_sub_func_uint32_t_u_u(l_80, 1))
            {
                unsigned *l_116 = &g_117;
                int l_133[6][4][6] = {{{0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}}, {{0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}}, {{0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}}, {{0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}}, {{0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}}, {{0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}, {0x98765FAFL, 0x98765FAFL, 0xA2C9F03BL, (-1L), 0L, (-1L)}}};
                int i, j, k;
                if ((((p_46 >= (g_64[2][0] <= 0xC871CFEEL)) > ((*l_116) = (p_46 ^ (safe_rshift_func_uint8_t_u_u((*l_51), 4))))) || p_44))
                {
                    unsigned char **l_137 = &l_135[5][4];
                    unsigned char ***l_136 = &l_137;
                    for (l_70 = 0; (l_70 > (-27)); l_70--)
                    {
                        (*l_50) = l_120;
                    }
                    if (((*g_67) = (safe_lshift_func_uint8_t_u_s((l_110 == (void*)0), 1))))
                    {
                        int **l_123[10] = {(void*)0, &l_120, (void*)0, &l_120, (void*)0, &l_120, (void*)0, &l_120, (void*)0, &l_120};
                        int **l_124 = &l_120;
                        int i;
                        (*l_124) = (*g_66);
                        l_133[5][2][4] = (safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*g_67) = 0x27B072BDL), (safe_rshift_func_int16_t_s_s((!(safe_mod_func_int16_t_s_s(0x26AEL, 0x08C9L))), p_46)))), (0UL || g_60)));
                        return g_2;
                    }
                    else
                    {
                        (**g_66) = (-6L);
                    }
                    (*l_136) = l_134;
                }
                else
                {
                    unsigned l_138 = 0x33B60433L;
                    (*g_67) = 0x1FAE61DEL;
                    if ((*g_67))
                    {
                        if ((**g_66))
                            break;
                        (*l_50) = (*l_50);
                        (*l_50) = l_120;
                    }
                    else
                    {
                        unsigned l_139 = 0x14779B98L;
                        (**l_50) = l_138;
                        (*g_67) = (g_4 && p_44);
                        l_139 = l_133[5][2][4];
                    }
                }
            }
            (*l_50) = (void*)0;
            for (l_105 = 3; (l_105 > (-29)); l_105 = safe_sub_func_int16_t_s_s(l_105, 1))
            {
                for (g_58 = 24; (g_58 == (-22)); g_58 = safe_sub_func_int16_t_s_s(g_58, 6))
                {
                    int **l_144 = &l_51;
                    (*l_50) = (*l_50);
                    (*l_144) = p_45;
                    g_145 = (*g_66);
                }
                (*l_50) = l_110;
            }
            for (g_4 = 0; (g_4 <= 23); g_4 = safe_add_func_uint32_t_u_u(g_4, 1))
            {
                char l_148 = 0x61L;
                l_148 = (*g_67);
            }
        }
        else
        {
            short l_181 = 0xB3D1L;
            int **l_190 = &g_183[5];
            if ((**g_66))
            {
                for (g_117 = 0; (g_117 <= 0); g_117 += 1)
                {
                    return p_46;
                }
                (**g_66) = (!(**g_66));
                for (g_4 = 0; (g_4 <= (-6)); g_4 = safe_sub_func_uint16_t_u_u(g_4, 6))
                {
                    for (g_57 = 0; (g_57 >= 6); ++g_57)
                    {
                        if ((**g_66))
                            break;
                        if (l_153)
                            break;
                    }
                }
            }
            else
            {
                (**l_50) = (0x6C84E0FFL < p_46);
                (*l_51) = ((void*)0 != &p_45);
            }
            for (g_60 = 0; (g_60 != 46); ++g_60)
            {
                int **l_156 = (void*)0;
                int **l_157 = &g_145;
                g_145 = p_45;
                (*l_157) = (*g_66);
                for (g_58 = 17; (g_58 > (-5)); g_58 = safe_sub_func_uint16_t_u_u(g_58, 1))
                {
                    short l_180 = 0x36ACL;
                    l_182 = (safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(0x98EAL, (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(l_105, ((**l_157) = p_44))), (p_44 ^ 4294967292UL))), (safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_58, 5)), 1L)), l_105)))), 1)))) <= (safe_mul_func_int8_t_s_s((!(((void*)0 == (*g_66)) == l_180)), g_60))) | g_52[0]), l_181));
                    (*l_157) = g_183[3];
                    (**l_50) = (*g_67);
                }
                for (g_98 = 0; (g_98 != 51); ++g_98)
                {
                    int **l_188 = (void*)0;
                    int *l_189 = &g_4;
                    for (l_182 = (-7); (l_182 <= (-6)); l_182 = safe_add_func_uint16_t_u_u(l_182, 3))
                    {
                        return (**l_50);
                    }
                    l_189 = (*g_66);
                }
            }
            (*l_190) = (*g_66);
            (*l_190) = &l_182;
        }
    }
    for (g_62 = 0; (g_62 >= 0); g_62 -= 1)
    {
        unsigned char *l_203 = &g_60;
        unsigned char **l_202 = &l_203;
        unsigned char ***l_201[8][1] = {{&l_202}, {&l_202}, {&l_202}, {&l_202}, {&l_202}, {&l_202}, {&l_202}, {&l_202}};
        int l_211 = (-2L);
        const int *l_259 = (void*)0;
        unsigned l_268 = 0x1A15CE65L;
        int **l_284 = &g_183[3];
        short *l_295 = (void*)0;
        short *l_296[2];
        int *l_297 = &l_70;
        char l_409 = 0L;
        unsigned char l_416 = 1UL;
        char **l_425 = &g_218;
        int i, j;
        for (i = 0; i < 2; i++)
            l_296[i] = (void*)0;
    }
    (*l_433) = ((*l_50) = (*l_50));
    return g_434;
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_64[i][j], "g_64[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_310[i], "g_310[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_434, "g_434", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
