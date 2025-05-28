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



static int g_2[2] = {0xE8CFF0EAL,0xE8CFF0EAL};
static int g_19 = 1L;
static int g_44[7] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
static unsigned g_48 = 0x86173B00L;
static short g_50 = 0x0276L;
static int g_55[4] = {(-4L),(-4L),(-4L),(-4L)};
static volatile short g_86 = (-1L);
static volatile short *g_85 = &g_86;
static volatile short **g_84 = &g_85;
static short *g_95[5][3] = {{&g_50,&g_50,&g_50},{&g_50,&g_50,&g_50},{&g_50,&g_50,&g_50},{&g_50,&g_50,&g_50},{&g_50,&g_50,&g_50}};
static short **g_94 = &g_95[2][1];
static short g_101 = (-3L);
static unsigned short g_126 = 0UL;
static volatile unsigned g_135[1][9] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
static int g_169 = 0L;
static int g_174[9] = {(-3L),(-3L),(-1L),(-3L),(-3L),(-1L),(-3L),(-3L),(-1L)};
static volatile unsigned g_189 = 4294967295UL;
static volatile unsigned *g_188 = &g_189;
static volatile unsigned **g_187 = &g_188;
static int *g_195 = (void*)0;
static char g_207 = 0L;
static unsigned long long g_221 = 0UL;
static unsigned g_239 = 0UL;
static unsigned long long *g_268 = (void*)0;
static unsigned long long **g_267[4] = {&g_268,&g_268,&g_268,&g_268};
static unsigned char g_297 = 0x7FL;
static int * const g_319 = &g_2[1];
static int *g_336[6] = {(void*)0,&g_55[0],&g_55[0],(void*)0,&g_55[0],&g_55[0]};
static char g_370 = 5L;
static char g_372 = 0xC3L;
static const int *g_419 = &g_174[2];
static int **g_435 = (void*)0;
static int ***g_434 = &g_435;
static int ***g_436 = &g_435;



static long long func_1(void);
static int * func_6(int * p_7, const unsigned char p_8);
static int * func_9(unsigned char p_10, int * p_11);
static int * func_13(int * p_14, int p_15);
static int * func_22(short p_23, int * const p_24);
static char func_28(int p_29, int * p_30, int * p_31, int * p_32, unsigned char p_33);
static int * func_34(int * p_35, int p_36, unsigned short p_37, int p_38);
static short func_41(const int * p_42);
static short * const * func_56(unsigned long long p_57, char p_58, int p_59, unsigned long long p_60, int * p_61);
static unsigned long long func_62(int * p_63, short * p_64, unsigned short p_65, unsigned * p_66);
static long long func_1(void)
{
    const unsigned l_5 = 0UL;
    int *l_466 = &g_19;
    int l_478 = 0x24EB3629L;
    for (g_2[1] = (-1); (g_2[1] >= (-17)); g_2[1] = safe_sub_func_uint64_t_u_u(g_2[1], 9))
    {
        unsigned short l_420 = 0x7614L;
        int *l_429 = &g_44[5];
        int **l_432 = (void*)0;
        int ***l_431 = &l_432;
        int ***l_437 = &l_432;
        if (g_2[1])
        {
            if (l_5)
                break;
        }
        else
        {
            int l_12 = 0x4B13281DL;
            int *l_16 = (void*)0;
            unsigned long long ***l_425 = (void*)0;
            int *l_428 = &g_169;
            int **l_430 = &l_429;
            short l_468[7][6] = {{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L},{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L},{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L},{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L},{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L},{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L},{(-1L),0x2243L,0x2243L,(-1L),0x2243L,0x2243L}};
            unsigned long long l_470 = 5UL;
            int i, j;
            l_16 = func_6(func_9(l_12, func_13(l_16, g_2[0])), (g_297 = g_86));
            (*l_430) = func_22(l_420, &g_2[1]);
            for (g_48 = 2; (g_48 <= 8); g_48 += 1)
            {
                int ****l_433[7][3] = {{&l_431,&l_431,&l_431},{(void*)0,(void*)0,(void*)0},{&l_431,&l_431,&l_431},{(void*)0,(void*)0,(void*)0},{&l_431,&l_431,&l_431},{(void*)0,(void*)0,(void*)0},{&l_431,&l_431,&l_431}};
                short *l_447 = (void*)0;
                int l_467 = (-1L);
                int i, j;
            }
            g_419 = &g_2[1];
        }
    }
    for (g_372 = 0; (g_372 <= 3); g_372 += 1)
    {
        int **l_471 = (void*)0;
        int **l_472 = &g_336[2];
        int *l_477[10] = {&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169,&g_169};
        int i;
        (*l_472) = &g_55[g_372];
        g_55[g_372] = (*l_466);
        (*l_472) = func_34(&g_44[4], (l_478 ^= (safe_mul_func_int8_t_s_s((*l_466), (safe_rshift_func_int8_t_s_s(0xBBL, 5))))), g_174[2], (*l_466));
    }
    return g_239;
}







static int * func_6(int * p_7, const unsigned char p_8)
{
    int **l_413 = &g_336[5];
    const int *l_414 = &g_2[0];
    const int **l_415 = (void*)0;
    const int **l_416 = &l_414;
    const int **l_417 = (void*)0;
    const int **l_418 = (void*)0;
    (*l_413) = (void*)0;
    g_419 = ((*l_416) = l_414);
    return (*l_413);
}







static int * func_9(unsigned char p_10, int * p_11)
{
    unsigned l_27 = 0x791A13C5L;
    int *l_307 = &g_19;
    unsigned char *l_312 = (void*)0;
    int *l_351[5] = {&g_169,&g_169,&g_169,&g_169,&g_169};
    int ** const l_350 = &l_351[4];
    int l_358 = 9L;
    unsigned * const *l_367 = (void*)0;
    unsigned * const **l_366 = &l_367;
    int l_376[10][8] = {{0xEFC0FE5FL,0xEFC0FE5FL,(-1L),(-1L),(-1L),0xEFC0FE5FL,0xEFC0FE5FL,(-1L)},{0x6DE635F2L,(-1L),(-1L),0x6DE635F2L,(-1L),0x6DE635F2L,(-1L),(-1L)},{(-1L),(-1L),0xEFC0FE5FL,0xEFC0FE5FL,(-1L),(-1L),(-1L),0xEFC0FE5FL},{0x6DE635F2L,(-1L),0x6DE635F2L,(-1L),(-1L),0x6DE635F2L,(-1L),0x6DE635F2L},{0xD4998C55L,(-1L),0xEFC0FE5FL,(-1L),0xD4998C55L,0xD4998C55L,(-1L),0xEFC0FE5FL},{0xD4998C55L,0xD4998C55L,(-1L),0xEFC0FE5FL,(-1L),0xD4998C55L,0xD4998C55L,(-1L)},{0x6DE635F2L,(-1L),(-1L),0x6DE635F2L,(-1L),0x6DE635F2L,(-1L),(-1L)},{(-1L),(-1L),0xEFC0FE5FL,0xEFC0FE5FL,(-1L),(-1L),(-1L),0xEFC0FE5FL},{0x6DE635F2L,(-1L),0x6DE635F2L,(-1L),(-1L),0x6DE635F2L,(-1L),0x6DE635F2L},{0xD4998C55L,(-1L),0xEFC0FE5FL,(-1L),0xD4998C55L,0xD4998C55L,(-1L),0xEFC0FE5FL}};
    int **l_412[8][5] = {{(void*)0,(void*)0,&g_195,&g_336[2],&l_307},{(void*)0,&g_195,&g_336[2],&g_195,(void*)0},{&l_307,&g_336[2],&g_195,(void*)0,(void*)0},{&g_195,&g_195,&g_195,&g_195,&g_195},{&l_307,(void*)0,&g_336[2],&g_336[2],(void*)0},{(void*)0,&g_195,&g_336[2],&g_195,(void*)0},{(void*)0,&g_336[2],&g_336[2],(void*)0,&l_307},{&g_195,&g_195,&g_195,&g_195,&g_195}};
    int i, j;
    for (g_19 = 24; (g_19 <= 8); g_19 = safe_sub_func_uint16_t_u_u(g_19, 5))
    {
        unsigned *l_47 = &g_48;
        short *l_49[9];
        int l_51 = (-5L);
        int l_52 = 0x9804E64AL;
        int **l_302 = &g_195;
        unsigned long long ***l_364 = &g_267[3];
        const int **l_365 = (void*)0;
        unsigned short l_387 = 9UL;
        int i;
        for (i = 0; i < 9; i++)
            l_49[i] = &g_50;
    }
    p_11 = (void*)0;
    return p_11;
}







static int * func_13(int * p_14, int p_15)
{
    long long l_17[10][10][2] = {{{0x964E48C0C84A4E7FLL,0xBF554C62B4191165LL},{(-4L),0x3DF123EFBB05D094LL},{0x747B1D005767A065LL,0x0AC77ACAEC2B2A8FLL},{(-1L),0x1F64DB2A93F04518LL},{1L,3L},{0x0AC77ACAEC2B2A8FLL,0xBD97C2923F8C0E5CLL},{0L,1L},{0x735653649D95921BLL,0xE4A6B2C4EB0A1172LL},{0xA781B5F7A0D7C8A3LL,(-1L)},{(-1L),0xAD982FC9AEB9D376LL}},{{0xA4A104ACD6BA8DADLL,1L},{0x9E520C3D8D58945CLL,(-1L)},{0L,0x6890C5440874B28ELL},{0x3DF123EFBB05D094LL,(-3L)},{0xE4A6B2C4EB0A1172LL,0x14FF6A91A76A447DLL},{1L,0x73EE76373A4C924BLL},{0x9333C7D24B5E4957LL,6L},{0L,(-1L)},{0x101BC642EE1E3C1DLL,7L},{0xBF554C62B4191165LL,0x3C407858F9C25B05LL}},{{9L,(-9L)},{(-3L),0x02D78BEA8E434042LL},{0xDB80EBBD4856CD83LL,0xA781B5F7A0D7C8A3LL},{0x4A55F07C70AB227DLL,1L},{7L,1L},{0x4A55F07C70AB227DLL,0xA781B5F7A0D7C8A3LL},{0xDB80EBBD4856CD83LL,0x02D78BEA8E434042LL},{(-3L),(-9L)},{9L,0x3C407858F9C25B05LL},{0xBF554C62B4191165LL,7L}},{{0x101BC642EE1E3C1DLL,(-1L)},{0L,6L},{0x9333C7D24B5E4957LL,0x73EE76373A4C924BLL},{1L,0x14FF6A91A76A447DLL},{0xE4A6B2C4EB0A1172LL,(-3L)},{0x3DF123EFBB05D094LL,0x6890C5440874B28ELL},{0L,(-1L)},{0x9E520C3D8D58945CLL,1L},{0xA4A104ACD6BA8DADLL,0xAD982FC9AEB9D376LL},{0x02D78BEA8E434042LL,(-4L)}},{{6L,0x9333C7D24B5E4957LL},{0L,0x9E520C3D8D58945CLL},{0xDB80EBBD4856CD83LL,1L},{1L,0x5199242039CE8566LL},{(-3L),1L},{0x3DF123EFBB05D094LL,1L},{1L,1L},{0x2E809B4AF7BDD484LL,0x14FF6A91A76A447DLL},{0xA781B5F7A0D7C8A3LL,0x7374FD5228033590LL},{0x9C214F1636717B38LL,9L}},{{0x4A55F07C70AB227DLL,(-1L)},{0xA4A104ACD6BA8DADLL,0L},{0xAD982FC9AEB9D376LL,0x101BC642EE1E3C1DLL},{0xF6C5533F2A6ADD33LL,0x14FFD81438367457LL},{(-1L),(-1L)},{0L,(-5L)},{0x73C12D4938140A97LL,0x2E809B4AF7BDD484LL},{0L,0x5161E33ECDC0F1FALL},{(-1L),0L},{(-9L),0x747B1D005767A065LL}},{{(-9L),0L},{(-1L),0x5161E33ECDC0F1FALL},{0L,0x2E809B4AF7BDD484LL},{0x73C12D4938140A97LL,(-5L)},{0L,(-1L)},{(-1L),0x14FFD81438367457LL},{0xF6C5533F2A6ADD33LL,0x101BC642EE1E3C1DLL},{0xAD982FC9AEB9D376LL,0L},{0xA4A104ACD6BA8DADLL,(-1L)},{0x4A55F07C70AB227DLL,9L}},{{0x9C214F1636717B38LL,0x7374FD5228033590LL},{0xA781B5F7A0D7C8A3LL,0x14FF6A91A76A447DLL},{0x2E809B4AF7BDD484LL,1L},{1L,1L},{0x3DF123EFBB05D094LL,1L},{(-3L),0x5199242039CE8566LL},{1L,1L},{0xDB80EBBD4856CD83LL,0x9E520C3D8D58945CLL},{0L,0x9333C7D24B5E4957LL},{6L,(-4L)}},{{0x02D78BEA8E434042LL,0L},{0xEF2F37FC0336AE3DLL,1L},{0x5161E33ECDC0F1FALL,0xF98093AF8EF5D3CCLL},{0x7374FD5228033590LL,3L},{1L,0x98791B167519BA60LL},{0x9333C7D24B5E4957LL,0xF6C5533F2A6ADD33LL},{1L,1L},{0x98791B167519BA60LL,0x0AC77ACAEC2B2A8FLL},{0xE4A6B2C4EB0A1172LL,1L},{9L,0L}},{{0x735653649D95921BLL,1L},{0x2E809B4AF7BDD484LL,1L},{0x14FF6A91A76A447DLL,0x9E520C3D8D58945CLL},{(-1L),0x14FFD81438367457LL},{1L,0x9C214F1636717B38LL},{0L,0x9C214F1636717B38LL},{1L,0x14FFD81438367457LL},{(-1L),0x9E520C3D8D58945CLL},{0x14FF6A91A76A447DLL,1L},{0x2E809B4AF7BDD484LL,1L}}};
    int *l_18 = &g_19;
    int i, j, k;
    (*l_18) = l_17[6][0][0];
    return l_18;
}







static int * func_22(short p_23, int * const p_24)
{
    short *l_117 = &g_50;
    int l_122 = 7L;
    int l_152 = 0x43A2B23CL;
    unsigned char l_166 = 0UL;
    char l_260 = 0L;
    unsigned *l_295 = &g_239;
    unsigned **l_294[5];
    int *l_300[7][10][3] = {{{&g_2[1],&g_19,(void*)0},{(void*)0,&g_2[1],(void*)0},{&g_44[5],&g_44[5],&g_44[3]},{&l_152,&g_174[2],&g_55[2]},{&l_152,&g_174[2],&l_152},{&g_2[1],&g_174[2],&g_174[2]},{&l_152,&g_44[5],&g_19},{&g_2[1],&g_2[1],&l_152},{&g_19,&g_19,&g_2[1]},{&g_2[1],&g_2[1],&l_152}},{{&l_152,&g_2[1],&l_152},{&g_2[1],(void*)0,(void*)0},{&l_152,&l_152,&l_152},{&l_152,&g_55[3],&l_152},{&g_44[5],(void*)0,&g_2[1]},{(void*)0,(void*)0,&l_152},{&g_2[1],(void*)0,&g_19},{&g_2[1],&g_55[3],&g_174[2]},{&l_152,&l_152,&l_152},{(void*)0,(void*)0,&g_55[2]}},{{&l_152,&g_2[1],&g_44[3]},{&g_2[1],&g_2[1],(void*)0},{&g_2[1],&g_19,(void*)0},{(void*)0,&g_55[3],&g_174[8]},{&g_2[1],&l_152,&g_174[2]},{&g_2[1],&l_152,&l_152},{&g_19,&l_152,(void*)0},{&g_2[1],&l_152,&g_55[2]},{&g_44[5],&l_152,&g_2[1]},{&g_174[2],&g_55[3],(void*)0}},{{&g_174[2],&g_174[2],&g_44[3]},{&g_174[2],&g_2[1],&g_174[2]},{&g_44[5],&l_152,&g_19},{&g_2[1],(void*)0,&g_2[1]},{&g_19,&g_44[5],&g_19},{&g_2[1],(void*)0,&g_174[2]},{&g_2[1],&g_44[5],&g_44[3]},{(void*)0,&g_2[1],(void*)0},{&l_152,&g_44[5],&g_2[1]},{&g_55[3],(void*)0,&g_55[2]}},{{(void*)0,&g_44[5],(void*)0},{(void*)0,(void*)0,&l_152},{(void*)0,&l_152,&g_174[2]},{&g_55[3],&g_2[1],&g_174[8]},{&l_152,&g_174[2],&g_174[2]},{(void*)0,&g_55[3],&g_174[8]},{&g_2[1],&l_152,&g_174[2]},{&g_2[1],&l_152,&l_152},{&g_19,&l_152,(void*)0},{&g_2[1],&l_152,&g_55[2]}},{{&g_44[5],&l_152,&g_2[1]},{&g_174[2],&g_55[3],(void*)0},{&g_174[2],&g_174[2],&g_44[3]},{&g_174[2],&g_2[1],&g_174[2]},{&g_44[5],&l_152,&g_44[5]},{&g_174[2],&g_174[2],&l_152},{(void*)0,&g_55[0],&g_44[5]},{&g_2[1],&g_55[0],(void*)0},{&g_2[0],&g_174[2],&g_19},{&g_2[1],&l_152,&g_174[2]}},{{&g_2[1],&g_174[2],&l_152},{(void*)0,&g_55[0],(void*)0},{&g_2[1],&g_55[0],(void*)0},{&g_174[2],&g_174[2],(void*)0},{&g_2[1],&g_2[1],&g_174[2]},{(void*)0,&g_174[2],&l_152},{&g_2[1],&g_2[1],&g_44[5]},{&g_2[1],(void*)0,&l_152},{&g_2[0],(void*)0,&g_174[2]},{&g_2[1],(void*)0,(void*)0}}};
    unsigned char l_301[8] = {0x00L,0x00L,0x00L,0x00L,0x00L,0x00L,0x00L,0x00L};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_294[i] = &l_295;
    if ((*p_24))
    {
        int l_110 = 5L;
        unsigned *l_118 = &g_48;
        int *l_129[5][2][2] = {{{(void*)0,&g_44[5]},{&g_44[5],(void*)0}},{{&g_44[5],&g_44[5]},{(void*)0,&g_44[5]}},{{&g_44[5],(void*)0},{&g_44[5],&g_44[5]}},{{(void*)0,&g_44[5]},{&g_44[5],(void*)0}},{{&g_44[5],&g_44[5]},{(void*)0,&g_44[5]}}};
        int i, j, k;
        g_55[2] = (safe_lshift_func_int16_t_s_u((((safe_unary_minus_func_int8_t_s(((l_110 ^ ((void*)0 == &g_95[2][1])) | ((**g_94) = (l_110 && 0xF8L))))) != (safe_rshift_func_int16_t_s_s((&l_110 == (void*)0), (safe_add_func_int16_t_s_s(p_23, (safe_sub_func_uint64_t_u_u((g_55[0] <= g_44[5]), p_23))))))) && l_110), p_23));
        if (g_50)
        {
            short *l_121 = &g_50;
            int l_123 = (-2L);
            int *l_124 = &l_110;
            (*l_124) = (l_110 >= ((func_62(&g_44[3], l_117, (g_44[5] > p_23), l_118) <= ((safe_lshift_func_int16_t_s_u(((((*g_94) = l_121) == (void*)0) & l_122), l_123)) > g_50)) && 0x7A5B985A9A92C764LL));
        }
        else
        {
            unsigned short l_130 = 0xE64EL;
            for (g_50 = 0; (g_50 <= 3); g_50 += 1)
            {
                unsigned short *l_125 = &g_126;
                int *l_127[7] = {&g_44[6],&g_44[6],&g_44[6],&g_44[6],&g_44[6],&g_44[6],&g_44[6]};
                int **l_128 = &l_127[2];
                int i;
                g_44[5] = (g_55[g_50] = (g_44[g_50] <= ((*l_125) = (g_55[0] | l_110))));
                (*l_128) = (void*)0;
                l_129[1][0][1] = &g_2[1];
            }
            g_55[0] |= func_41(&l_122);
            l_130 = g_2[1];
            g_44[1] |= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_130, 1)), 9));
        }
    }
    else
    {
        long long l_136 = 1L;
        int l_139 = (-1L);
        int *l_163 = &g_2[1];
        unsigned short l_165[2][4] = {{0x0E25L,0UL,0x0E25L,0x0E25L},{0UL,0UL,0x2CE7L,0UL}};
        unsigned l_167 = 0x2626EB52L;
        int l_168 = 8L;
        short *l_194 = &g_50;
        int *l_208[1][7][2] = {{{&g_2[0],&g_2[1]},{&g_2[0],&g_2[0]},{&g_2[1],&g_2[0]},{&g_2[0],&g_2[1]},{&g_2[0],&g_2[0]},{&g_2[1],&g_2[0]},{&g_2[0],&g_2[1]}}};
        int l_227[10] = {0x3AD76B04L,0x3AD76B04L,0xD626AAE3L,0x3AD76B04L,0x3AD76B04L,0xD626AAE3L,0x3AD76B04L,0x3AD76B04L,0xD626AAE3L,0x3AD76B04L};
        unsigned long long *l_266 = &g_221;
        unsigned long long **l_265 = &l_266;
        unsigned *l_293 = &g_48;
        unsigned char *l_296[7][6][5] = {{{&l_166,&l_166,(void*)0,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166},{(void*)0,&l_166,(void*)0,(void*)0,&l_166},{&l_166,&l_166,&l_166,(void*)0,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166}},{{&l_166,(void*)0,&l_166,&l_166,(void*)0},{(void*)0,(void*)0,(void*)0,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,(void*)0,(void*)0,&l_166},{&l_166,(void*)0,&l_166,&l_166,(void*)0},{&l_166,&l_166,&l_166,&l_166,(void*)0}},{{(void*)0,&l_166,(void*)0,(void*)0,(void*)0},{&l_166,&l_166,&l_166,&l_166,(void*)0},{&l_166,(void*)0,&l_166,(void*)0,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166},{(void*)0,(void*)0,(void*)0,&l_166,(void*)0},{&l_166,&l_166,(void*)0,&l_166,&l_166}},{{(void*)0,&l_166,&l_166,(void*)0,(void*)0},{&l_166,&l_166,&l_166,(void*)0,&l_166},{(void*)0,(void*)0,&l_166,&l_166,(void*)0},{&l_166,&l_166,&l_166,&l_166,(void*)0},{&l_166,&l_166,&l_166,&l_166,(void*)0},{&l_166,&l_166,(void*)0,&l_166,(void*)0}},{{(void*)0,&l_166,&l_166,&l_166,&l_166},{(void*)0,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,(void*)0,&l_166,&l_166},{(void*)0,(void*)0,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166}},{{&l_166,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,&l_166,(void*)0,&l_166},{&l_166,(void*)0,&l_166,(void*)0,&l_166},{(void*)0,&l_166,&l_166,(void*)0,&l_166},{&l_166,&l_166,&l_166,(void*)0,&l_166}},{{&l_166,&l_166,&l_166,&l_166,&l_166},{(void*)0,(void*)0,(void*)0,(void*)0,&l_166},{(void*)0,&l_166,&l_166,&l_166,&l_166},{&l_166,&l_166,(void*)0,&l_166,&l_166},{&l_166,&l_166,&l_166,&l_166,(void*)0},{&l_166,&l_166,&l_166,&l_166,(void*)0}}};
        unsigned short *l_298 = &l_165[1][1];
        unsigned short *l_299[6][7][6] = {{{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126}},{{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126},{&g_126,&g_126,&g_126,&g_126,&g_126,&g_126}}};
        int i, j, k;
        if (g_135[0][0])
        {
            int *l_137 = &g_44[5];
            int *l_138 = &g_55[0];
            short *l_140 = &g_101;
            unsigned short *l_164 = &g_126;
            (*l_138) = ((*l_137) |= l_136);
            (*l_138) = (g_169 &= (((((*l_137) ^= (((*l_140) |= (l_139 = ((*l_117) = l_136))) || p_23)) >= (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((-1L), ((safe_unary_minus_func_int64_t_s((safe_sub_func_uint8_t_u_u((func_28((((safe_add_func_uint16_t_u_u((safe_add_func_int8_t_s_s((*l_138), (((l_122 | (l_152 = l_122)) > (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_23, 11)), (((**g_84) || (((*l_164) |= (safe_mod_func_int32_t_s_s((+((safe_add_func_uint32_t_u_u((func_28(g_48, l_163, l_137, &l_122, (*l_138)) ^ 7UL), (-2L))) | (*p_24))), 1L))) == p_23)) <= l_165[1][1]))) < p_23), 8))) | 0UL))), l_166)) ^ l_167) <= g_2[1]), &g_55[0], &g_2[1], &l_122, g_55[0]) >= l_122), 0x50L)))) != l_122))) || 3L), p_23))) < p_23) && l_168));
            for (l_122 = 1; (l_122 >= 1); l_122 = safe_add_func_uint32_t_u_u(l_122, 6))
            {
                char l_183 = (-7L);
                int *l_186[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_186[i] = (void*)0;
                (*l_137) = l_122;
                l_139 |= ((-3L) ^ ((safe_lshift_func_int16_t_s_u(g_174[2], 5)) && ((g_55[1] < ((safe_sub_func_uint8_t_u_u(p_23, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((+(*l_163)), ((*l_140) = (safe_lshift_func_uint16_t_u_s((g_169 || ((((*l_137) = (g_174[2] = (l_183 != 0x4C17L))) >= ((!(safe_sub_func_int64_t_s_s((((l_152 && g_135[0][0]) < p_23) || g_126), p_23))) ^ g_2[1])) != p_23)), (*l_163)))))), l_183)))) != 0xFD8FL)) | 0x93L)));
            }
            (*l_138) ^= (*l_137);
        }
        else
        {
            volatile unsigned ***l_190 = &g_187;
            (*l_190) = g_187;
        }
        for (l_139 = 0; (l_139 == 13); l_139 = safe_add_func_int64_t_s_s(l_139, 6))
        {
            int *l_196 = &g_55[0];
            g_174[8] ^= (safe_unary_minus_func_int16_t_s(((*l_194) = (((*g_94) = l_194) != (*g_84)))));
            g_195 = p_24;
            (*l_196) &= ((void*)0 == (*g_187));
            for (l_166 = 0; (l_166 <= 0); l_166 += 1)
            {
                int **l_197 = (void*)0;
                int **l_198 = &l_163;
                int **l_199 = &l_196;
                int i, j;
            }
        }
        if ((g_174[2] = (safe_lshift_func_int16_t_s_u((!((*l_117) = (safe_sub_func_int32_t_s_s(l_227[1], (safe_lshift_func_uint8_t_u_u((!7UL), 3)))))), 2))))
        {
            int **l_230 = (void*)0;
            int *l_237 = &g_174[2];
            l_152 &= (*p_24);
            g_195 = p_24;
            for (l_152 = (-1); (l_152 > 4); ++l_152)
            {
                int *l_238[2];
                short *l_263 = &g_50;
                unsigned long long **l_271 = &l_266;
                int i;
                for (i = 0; i < 2; i++)
                    l_238[i] = &g_19;
                for (l_122 = 19; (l_122 != 19); l_122 = safe_add_func_uint32_t_u_u(l_122, 5))
                {
                    if ((*g_195))
                        break;
                }
                (*l_237) = func_62(&g_44[6], (*g_94), (g_135[0][1] > (safe_add_func_int16_t_s_s((((p_23 ^ func_28(g_2[1], l_237, l_238[0], &g_174[2], (((((p_23 == 0L) || 0xD72962DCB01C2EB0LL) ^ g_169) <= g_239) <= p_23))) == p_23) < 0xB5896D5BFB38901DLL), 0xA569L))), &g_239);
                (*l_237) ^= (*g_195);
                for (l_166 = 0; (l_166 > 53); ++l_166)
                {
                    long long l_261 = 0x527235E5902A964ELL;
                    int l_262 = (-1L);
                    for (l_167 = 0; (l_167 <= 1); l_167 += 1)
                    {
                        unsigned *l_246 = &g_48;
                        int i;
                        (*l_237) = (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(g_174[(l_167 + 5)], g_86)) ^ ((*l_246) &= 0xA4B138E7L)), (((safe_mod_func_uint8_t_u_u(g_221, (g_174[4] || (safe_sub_func_uint64_t_u_u(g_2[0], l_122))))) && ((*g_84) == (*g_84))) == g_174[(l_167 + 5)])));
                        (*l_237) = (safe_lshift_func_int8_t_s_u((g_2[1] == (((**g_94) = p_23) < g_126)), 4));
                    }
                    for (l_139 = (-3); (l_139 < 17); l_139++)
                    {
                        int **l_257 = (void*)0;
                        l_262 &= ((g_239 != (+(func_28(((p_23 && (safe_sub_func_uint8_t_u_u(g_221, 0L))) >= p_23), &l_122, (l_208[0][6][0] = l_238[0]), func_34(l_238[0], (safe_mul_func_uint16_t_u_u(((l_260 <= 0L) <= l_261), 0x05BEL)), p_23, g_135[0][0]), g_207) | (*g_195)))) >= p_23);
                        return &g_2[1];
                    }
                    if ((0L != 18446744073709551614UL))
                    {
                        if ((*g_195))
                            break;
                        if (l_152)
                            break;
                    }
                    else
                    {
                        unsigned *l_264 = &g_239;
                        unsigned long long ***l_269 = (void*)0;
                        unsigned long long ***l_270[9][8][3] = {{{(void*)0,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,(void*)0}},{{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,(void*)0},{(void*)0,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265}},{{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,(void*)0},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,(void*)0},{(void*)0,&l_265,&l_265},{&l_265,&l_265,&l_265}},{{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,(void*)0},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265}},{{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,(void*)0},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{(void*)0,(void*)0,&l_265},{&l_265,(void*)0,(void*)0},{&l_265,&l_265,&l_265}},{{(void*)0,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265},{&l_265,&l_265,(void*)0},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265}},{{(void*)0,(void*)0,&l_265},{&l_265,(void*)0,(void*)0},{&l_265,&l_265,&l_265},{(void*)0,&l_265,&l_265},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265}},{{&l_265,&l_265,(void*)0},{&l_265,&l_265,&l_265},{&l_265,&l_265,&l_265},{(void*)0,(void*)0,&l_265},{&l_265,(void*)0,(void*)0},{&l_265,&l_265,&l_265},{(void*)0,&l_265,&l_265},{&l_265,&l_265,&l_265}},{{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{&l_265,&l_265,(void*)0},{&l_265,(void*)0,(void*)0},{&l_265,(void*)0,&l_265},{&l_265,&l_265,&l_265},{&l_265,(void*)0,&l_265},{(void*)0,&l_265,(void*)0}}};
                        int l_274[5][9] = {{2L,0xED56E27DL,0x519C0171L,2L,0x519C0171L,0xED56E27DL,2L,(-1L),(-1L)},{7L,0xB79CEA0CL,0xBCBBCD2EL,7L,0xBCBBCD2EL,0xB79CEA0CL,7L,0x42827C69L,0x42827C69L},{2L,0xED56E27DL,0x519C0171L,2L,0x519C0171L,0xED56E27DL,2L,(-1L),(-1L)},{7L,0xB79CEA0CL,0xBCBBCD2EL,7L,0xBCBBCD2EL,0xB79CEA0CL,7L,0x42827C69L,0x42827C69L},{2L,0xED56E27DL,0x519C0171L,2L,0x519C0171L,0xED56E27DL,2L,(-1L),(-1L)}};
                        int i, j, k;
                        g_44[1] = ((*l_237) = func_62(&l_152, l_263, l_262, l_264));
                        l_271 = (g_267[3] = l_265);
                        l_274[2][0] = (safe_sub_func_int16_t_s_s(((*l_194) |= (**g_84)), (l_117 == l_263)));
                        (*l_237) |= (&g_95[4][1] != (void*)0);
                    }
                    (*l_237) = (safe_lshift_func_uint16_t_u_u(l_152, 8));
                }
            }
        }
        else
        {
            unsigned **l_280 = (void*)0;
            unsigned ***l_279 = &l_280;
            const int *l_283 = (void*)0;
            int *l_284 = &l_122;
            short l_286[6][5][7] = {{{(-5L),0L,0x1A7FL,0L,(-5L),0xA95CL,0xB192L},{0x8548L,0x4EFDL,0L,0xA95CL,4L,0xA95CL,0L},{0xB192L,0xB192L,(-4L),0x1A7FL,0x4EFDL,0x9487L,0x8548L},{0x8548L,0x9487L,0L,0L,0x9487L,(-4L),0x8548L},{0xA95CL,0L,0x4EFDL,0x8548L,0x1A7FL,0x1A7FL,0x8548L}},{{0xB192L,(-5L),0xB192L,4L,0x8548L,0xA95CL,(-4L)},{0x4EFDL,0L,0xA95CL,4L,0xA95CL,0L,0x4EFDL},{0L,0x9487L,(-4L),0x8548L,1L,0xA95CL,1L},{0L,1L,1L,0L,0xB192L,0x1A7FL,4L},{0x4EFDL,0x1A7FL,(-4L),0xB192L,0xB192L,(-4L),0x1A7FL}},{{0xB192L,0x4EFDL,0xA95CL,0x9487L,1L,4L,4L},{0xA95CL,0x4EFDL,0xB192L,0x4EFDL,0xA95CL,0x9487L,1L},{(-4L),0x1A7FL,0x4EFDL,0x9487L,0x8548L,0x9487L,0x4EFDL},{1L,1L,0L,0xB192L,0x1A7FL,4L,(-4L)},{(-4L),0x9487L,0L,0L,0x9487L,(-4L),0x8548L}},{{0xA95CL,0L,0x4EFDL,0x8548L,0x1A7FL,0x1A7FL,0x8548L},{0xB192L,(-5L),0xB192L,4L,0x8548L,0xA95CL,0x1A7FL},{1L,0xB192L,0x8548L,0L,0x8548L,0xB192L,1L},{0xB192L,(-4L),0x1A7FL,0x4EFDL,0x9487L,0x8548L,0x9487L},{0xB192L,0x9487L,0x9487L,0xB192L,0xA95CL,(-5L),0L}},{{1L,(-5L),0x1A7FL,0xA95CL,0xA95CL,0x1A7FL,(-5L)},{0xA95CL,1L,0x8548L,(-4L),0x9487L,0L,0L},{0x8548L,1L,0xA95CL,1L,0x8548L,(-4L),0x9487L},{0x1A7FL,(-5L),1L,(-4L),0x4EFDL,(-4L),1L},{0x9487L,0x9487L,0xB192L,0xA95CL,(-5L),0L,0x1A7FL}},{{0x1A7FL,(-4L),0xB192L,0xB192L,(-4L),0x1A7FL,0x4EFDL},{0x8548L,0xB192L,1L,0x4EFDL,(-5L),(-5L),0x4EFDL},{0xA95CL,4L,0xA95CL,0L,0x4EFDL,0x8548L,0x1A7FL},{1L,0xB192L,0x8548L,0L,0x8548L,0xB192L,1L},{0xB192L,(-4L),0x1A7FL,0x4EFDL,0x9487L,0x8548L,0x9487L}}};
            int **l_288[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_288[i] = (void*)0;
            for (g_50 = 4; (g_50 >= 2); g_50 -= 1)
            {
                unsigned short *l_285 = &l_165[1][0];
                int **l_287[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_287[i][j] = &l_163;
                }
                g_55[3] = (g_44[g_50] || (g_44[g_50] = (safe_lshift_func_uint8_t_u_s((((void*)0 != l_279) ^ (**g_84)), (safe_mod_func_int64_t_s_s((((*p_24) && (*p_24)) < func_28(g_44[5], &g_174[2], &g_44[g_50], &g_44[5], p_23)), g_221))))));
                l_208[0][6][0] = func_34(l_284, (*l_284), ((*l_285) = g_55[1]), (l_166 < (l_286[4][4][4] | p_23)));
            }
            g_195 = func_34(l_284, g_2[0], ((void*)0 == (*g_187)), g_44[2]);
        }
        l_152 &= (safe_mod_func_uint16_t_u_u((l_122 |= ((*l_298) ^= (safe_add_func_int8_t_s_s((((!(&g_267[3] != (void*)0)) || ((*l_163) >= ((*g_188) ^ ((*l_293) = g_239)))) < (g_44[4] > (g_297 &= ((p_23 <= ((~(l_294[3] == &g_188)) <= 18446744073709551615UL)) >= p_23)))), p_23)))), 3L));
    }
    l_301[2] = (*p_24);
    g_44[5] = (*p_24);
    return &g_2[1];
}







static char func_28(int p_29, int * p_30, int * p_31, int * p_32, unsigned char p_33)
{
    return g_2[1];
}







static int * func_34(int * p_35, int p_36, unsigned short p_37, int p_38)
{
    int *l_53 = &g_44[5];
    int *l_54 = &g_55[0];
    short *l_67 = &g_50;
    short * const l_100 = &g_101;
    short * const *l_99 = &l_100;
    short * const **l_98 = &l_99;
    short * const *l_103 = &l_67;
    short * const **l_102 = &l_103;
    int *l_104 = (void*)0;
    (*l_53) = (*p_35);
    (*l_54) |= (*l_53);
    (*l_102) = ((*l_98) = func_56(func_62(&g_2[1], l_67, (*l_53), p_35), g_2[1], (*l_53), ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(0x9A65L, (l_53 == p_35))), 3)) >= g_19), l_54));
    return l_104;
}







static short func_41(const int * p_42)
{
    int *l_43 = &g_44[5];
    (*l_43) ^= (*p_42);
    return g_2[0];
}







static short * const * func_56(unsigned long long p_57, char p_58, int p_59, unsigned long long p_60, int * p_61)
{
    unsigned l_75 = 0UL;
    unsigned l_90 = 0xD8B2F8DCL;
    int *l_91 = &g_55[0];
    short *l_93 = &g_50;
    short **l_92 = &l_93;
    short ***l_96 = &l_92;
    short ***l_97 = &g_94;
    if (((safe_rshift_func_uint16_t_u_s(g_44[2], 0)) && l_75))
    {
        short *l_83 = &g_50;
        short **l_82 = &l_83;
        for (g_48 = 0; (g_48 <= 11); ++g_48)
        {
            int *l_78 = (void*)0;
            int **l_79 = &l_78;
            unsigned l_89 = 9UL;
            (*l_79) = l_78;
            (*p_61) = (((safe_add_func_uint32_t_u_u(((((g_48 >= (l_82 == g_84)) > ((void*)0 != p_61)) && ((safe_rshift_func_uint16_t_u_u(func_62(&g_55[0], (*l_82), g_48, p_61), l_89)) && 0x83L)) > g_2[1]), 0xF8205C77L)) | l_90) && l_90);
            l_91 = p_61;
            if ((*p_61))
                break;
        }
    }
    else
    {
        (*p_61) = (g_55[0] <= (l_92 == &l_93));
    }
    (*l_97) = ((*l_96) = g_94);
    return &g_95[2][1];
}







static unsigned long long func_62(int * p_63, short * p_64, unsigned short p_65, unsigned * p_66)
{
    int *l_68 = &g_55[0];
    (*l_68) &= 0x74122609L;
    return g_44[5];
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_19, "g_19", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_44[i], "g_44[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_55[i], "g_55[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_135[i][j], "g_135[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_174[i], "g_174[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_370, "g_370", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
