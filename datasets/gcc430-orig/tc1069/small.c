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



static short g_3 = 0x4F84L;
static int g_10 = (-4L);
static int *g_9 = &g_10;
static int g_12 = 2L;
static unsigned g_27 = 0UL;
static unsigned g_37 = 0x05243B9CL;
static int g_76 = 0x33B8FBA3L;
static int g_147 = 0L;
static unsigned char g_179 = 0x1EL;
static short g_210 = 0L;
static unsigned long long g_212 = 0UL;
static unsigned *g_244 = &g_27;
static unsigned **g_243 = &g_244;
static volatile short g_259 = 0x9A50L;
static volatile short *g_258 = &g_259;
static volatile short **g_257 = &g_258;
static volatile short ***g_256 = &g_257;
static int *g_260 = &g_147;
static unsigned short g_296 = 0x9CE4L;
static volatile long long **g_309 = (void*)0;
static volatile long long g_312 = 0x45D53B164AEADB58LL;
static long long g_321 = 1L;
static unsigned char g_333 = 255UL;
static short g_371 = 2L;
static char g_407 = 0x07L;
static char g_420 = (-4L);
static volatile long long *g_422 = &g_312;
static volatile long long **g_421 = &g_422;
static short g_453 = 1L;
static unsigned long long g_476 = 0x1C2B145ED04191B9LL;
static char *g_545 = &g_420;
static char **g_544 = &g_545;
static unsigned char *g_550 = &g_333;
static unsigned char **g_549 = &g_550;
static unsigned char ***g_548 = &g_549;
static long long *g_561 = &g_321;
static long long **g_560 = &g_561;
static unsigned short g_667 = 0xD26BL;
static int g_686 = 0x8EBB5A9DL;
static int ***g_714 = (void*)0;
static unsigned g_764 = 18446744073709551615UL;
static int ****g_791 = &g_714;
static int *g_834 = &g_76;
static char g_878 = 0x9BL;
static char g_880 = 2L;
static int g_902 = 0xEFA9CAE8L;
static volatile char g_914 = 1L;
static unsigned g_920 = 0xB5610BE7L;
static unsigned short g_940 = 0xE144L;
static volatile int g_984 = (-1L);



static char func_1(void);
static int * func_4(int * p_5, short p_6, char p_7, int * p_8);
static unsigned char func_13(int p_14, int p_15, int * p_16);
static unsigned short func_17(short p_18, char p_19, int * p_20, char p_21);
static int func_28(unsigned p_29);
static char func_38(long long p_39, unsigned short p_40, long long p_41);
static int * func_46(unsigned long long p_47);
static long long func_50(unsigned short p_51, int * p_52, unsigned * p_53, long long p_54, unsigned * p_55);
static unsigned short func_56(int * p_57, int p_58, int * p_59);
static int * func_60(int p_61, int * p_62, unsigned char p_63, char p_64);
static char func_1(void)
{
    unsigned char l_2 = 0xC1L;
    int *l_11 = &g_12;
    int **l_979 = &l_11;
    short l_987 = 0x1B16L;
    int l_988 = 0x43F21498L;
    g_3 = (!((~l_2) < 7UL));
    (*l_979) = func_4(g_9, (((*l_11) = ((*g_9) = (*g_9))) > ((g_3 , func_13(l_2, l_2, (func_17(l_2, g_3, l_11, ((safe_add_func_uint32_t_u_u(g_3, l_2)) && l_2)) , l_11))) ^ 0x0CL)), l_2, l_11);
    (*l_979) = func_60(((*g_834) = func_38((l_987 | (*g_9)), l_988, (*g_422))), &g_686, (**l_979), (**g_544));
    (*l_979) = (*l_979);
    return (*g_545);
}







static int * func_4(int * p_5, short p_6, char p_7, int * p_8)
{
    return p_8;
}







static unsigned char func_13(int p_14, int p_15, int * p_16)
{
    short **l_798 = (void*)0;
    short ***l_797 = &l_798;
    int *l_801 = &g_147;
    unsigned long long *l_812 = (void*)0;
    int *l_841 = &g_686;
    int *l_861 = &g_686;
    unsigned l_919 = 0xBBAE9F0BL;
    int l_951 = 0x6FF85E4DL;
    int *l_963 = &g_147;
    int *l_974 = &g_147;
    unsigned long long *l_975 = &g_476;
    unsigned short l_976 = 2UL;
    int **l_977 = (void*)0;
    int **l_978 = &g_260;
    for (g_667 = 10; (g_667 > 11); g_667++)
    {
        unsigned char l_782 = 0UL;
        int ****l_790 = &g_714;
        char ***l_810 = &g_544;
        int *l_840 = &g_76;
        short *l_885 = &g_210;
        unsigned long long **l_906 = (void*)0;
        unsigned short *l_961 = (void*)0;
        unsigned short *l_962 = &g_940;
        if ((((**g_549) = (safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(0L, p_14)) <= p_15), l_782))) && l_782))
        {
            int **l_783 = &g_260;
            int l_799 = 0x30E68A2BL;
            unsigned long long l_800 = 0x02B3E3C60A51EEE1LL;
            int l_836 = (-3L);
            unsigned ***l_838 = &g_243;
            (*l_783) = &g_147;
            for (g_27 = 0; (g_27 >= 49); g_27 = safe_add_func_uint8_t_u_u(g_27, 5))
            {
                short ***l_796 = (void*)0;
                int l_829 = 2L;
                unsigned char l_835 = 1UL;
            }
            (*l_838) = &g_244;
        }
        else
        {
            int l_839 = 0xCCFE0451L;
            int **l_842 = &l_841;
            l_839 = func_28(l_782);
            l_840 = (void*)0;
            (*g_834) = 1L;
            (*l_842) = l_841;
        }
    }
    (*l_978) = func_60((*l_841), l_963, (+((safe_mod_func_int16_t_s_s((p_15 <= ((((*g_545) = p_14) <= ((*l_841) > (safe_add_func_int64_t_s_s((((p_15 <= ((safe_div_func_uint8_t_u_u(((**g_549) = 0xACL), ((*l_801) = (((*l_975) = ((((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((g_407 && p_15), 65533UL)) ^ (*l_841)), p_15)) , (void*)0) != &g_243) || 0x16F6L)) & p_14)))) != p_14)) , g_147) ^ 0x3934L), 0x404E3DC51645CD2FLL)))) ^ 1UL)), (*l_841))) != l_976)), p_15);
    return (***g_548);
}







static unsigned short func_17(short p_18, char p_19, int * p_20, char p_21)
{
    int *l_26 = (void*)0;
    int l_695 = (-4L);
    int ***l_716 = (void*)0;
    int l_728 = 1L;
    char **l_739 = &g_545;
    int l_742 = (-9L);
    int l_745 = 0x80BC6047L;
    unsigned long long *l_773 = &g_212;
    unsigned short l_774 = 4UL;
    int *l_775 = &g_76;
    if ((g_27 = ((safe_lshift_func_int16_t_s_u((((void*)0 == l_26) >= g_3), 15)) , 0x7F51EF99L)))
    {
        int l_34 = 3L;
        unsigned *l_35 = (void*)0;
        unsigned *l_36 = &g_37;
        l_695 = func_28(((safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(l_34, g_27)) && 0xC8L), ((*l_36) = l_34))) > (g_27 , func_38((safe_sub_func_uint64_t_u_u((&g_27 != (void*)0), l_34)), (safe_sub_func_uint32_t_u_u((p_21 , p_19), g_3)), l_34))));
        g_686 = l_34;
    }
    else
    {
        int **l_696 = &l_26;
        int l_699 = 0x6A2A1B8CL;
        (*l_696) = (void*)0;
        for (g_333 = 13; (g_333 > 51); g_333++)
        {
            unsigned l_702 = 1UL;
            int l_719 = (-1L);
            long long **l_721 = (void*)0;
            unsigned *l_741 = (void*)0;
            unsigned l_748 = 0UL;
            unsigned char **l_755 = &g_550;
            unsigned char ***l_756 = &l_755;
            unsigned char *l_765 = &g_179;
            int *l_766 = &l_695;
            int *l_767 = &l_719;
            int l_768 = (-1L);
        }
    }
    (*l_775) = ((p_18 < p_18) & (***g_548));
    return p_19;
}







static int func_28(unsigned p_29)
{
    long long l_490 = 1L;
    char l_491 = 0xA9L;
    unsigned char *l_492 = &g_179;
    unsigned char *l_493 = (void*)0;
    unsigned char *l_494 = &g_333;
    unsigned short *l_495 = &g_296;
    int *l_496 = &g_76;
    int l_497 = 5L;
    long long *l_511 = &l_490;
    unsigned long long *l_516 = &g_212;
    short l_566 = 0x078DL;
    unsigned long long l_590 = 0x4A02CCA80E5810E2LL;
    char **l_636 = &g_545;
    int *l_685 = &g_686;
    (*l_496) = (safe_add_func_int16_t_s_s(((((0x1C42388AL || p_29) , (((*l_494) = ((*l_492) = ((g_260 = (l_490 , &g_147)) == (void*)0))) != 0x93L)) , (void*)0) != l_495), l_491));
    l_497 = 0xC93415A6L;
    (*l_496) = func_56(&l_497, ((*g_260) , (safe_mod_func_uint32_t_u_u(2UL, ((safe_sub_func_int32_t_s_s(func_56(&l_497, (p_29 < (*l_496)), (g_260 = &l_497)), (safe_div_func_uint8_t_u_u(p_29, p_29)))) & g_420)))), l_496);
    if ((((0L == ((*l_516) = ((safe_mul_func_int16_t_s_s((*l_496), (**g_257))) != (safe_mul_func_int16_t_s_s(p_29, ((safe_div_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u(0x2DL)), ((*l_511) = g_453))) || (safe_rshift_func_int16_t_s_s(0x7EABL, ((*l_496) >= (safe_rshift_func_uint16_t_u_u((((*l_496) ^ g_371) , 0x779CL), (*l_496)))))))))))) , p_29) > (*l_496)))
    {
        unsigned short l_523 = 4UL;
        int **l_524 = &g_260;
        unsigned long long *l_551 = &g_212;
        long long **l_569 = &g_561;
        unsigned short l_584 = 0UL;
        short l_628 = 0xE585L;
        int *l_631 = &l_497;
        int l_633 = (-1L);
        unsigned **l_639 = &g_244;
        char l_684 = 1L;
        int **l_687 = &l_685;
        (*l_524) = &l_497;
        for (g_296 = 0; (g_296 >= 33); g_296 = safe_add_func_int8_t_s_s(g_296, 9))
        {
            int **l_533 = (void*)0;
            unsigned *l_556 = &g_27;
            int l_557 = 1L;
            int *l_577 = &g_147;
            int ***l_587 = &l_524;
            int *l_652 = &l_497;
            unsigned l_669 = 0x33A353D0L;
        }
        (*l_496) = ((((~(**g_544)) & (func_50(g_407, ((*l_524) = func_60((((*l_551) = p_29) , (((*l_631) = func_38((*l_631), l_684, ((**l_569) = 0x263075C3B7B662EELL))) & p_29)), ((*l_687) = l_685), l_490, (*g_545))), l_496, p_29, l_496) , p_29)) & p_29) || p_29);
    }
    else
    {
        for (g_476 = 0; (g_476 <= 56); ++g_476)
        {
            unsigned ***l_692 = &g_243;
            short *l_693 = &g_453;
            int l_694 = 0xA5608BF1L;
            (*l_685) = ((l_694 = ((g_296 = (safe_lshift_func_uint16_t_u_s((((**g_243) = 0UL) != (l_692 != (void*)0)), (***g_256)))) != (&l_566 == l_693))) , (func_56(&l_497, ((*g_260) = (((*l_685) = p_29) != 7UL)), l_685) , 2L));
        }
    }
    return (*l_685);
}







static char func_38(long long p_39, unsigned short p_40, long long p_41)
{
    unsigned long long l_72 = 0xE4A53E8AF80453D4LL;
    int *l_75 = &g_76;
    int l_77 = 0L;
    int **l_318 = &l_75;
    int l_319 = 0L;
    long long *l_320 = &g_321;
    char l_322 = 0x47L;
    int *l_327 = (void*)0;
    int *l_329 = &l_77;
    char l_334 = (-1L);
    unsigned *l_382 = &g_27;
    unsigned l_437 = 1UL;
    short ***l_451 = (void*)0;
    char l_455 = 0x7FL;
    long long l_456 = (-1L);
    (*l_318) = func_46(((safe_rshift_func_uint16_t_u_u(((func_50(func_56(func_60(((safe_rshift_func_uint8_t_u_u(g_27, 5)) && (((safe_unary_minus_func_int16_t_s((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((p_39 & 6L), l_72)), (((g_27 == ((((safe_sub_func_int16_t_s_s((l_75 == l_75), (g_27 , (!(p_41 || l_77))))) & 0L) , (*l_75)) || g_3)) , p_40) < (*l_75)))))) , (*l_75)) < 2UL)), &l_77, p_39, (*l_75)), (*l_75), &g_76), g_9, l_75, g_3, &g_27) ^ g_27) == 0x89L), p_41)) , 0x47A8F7DD28A493C9LL));
    if ((((*l_320) = ((**l_318) | l_319)) & (l_322 || g_27)))
    {
        int l_328 = (-1L);
        unsigned char *l_332 = &g_179;
        int *l_335 = &l_319;
        int l_428 = 0L;
        long long l_448 = (-1L);
        short ****l_452 = &l_451;
        short *l_454 = &g_371;
        unsigned long long l_483 = 0xA8EE133C43EEAD4BLL;
        unsigned char **l_485 = &l_332;
        unsigned char ***l_486 = &l_485;
        if ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(p_39, 10)) >= ((l_327 != ((((**l_318) = (g_333 = ((((*l_320) = 0L) < g_27) , ((g_210 >= func_56(l_329, (p_39 , (safe_sub_func_uint32_t_u_u((l_332 == &g_179), 0xA750F617L))), &g_76)) & l_328)))) , l_334) , l_335)) & (*l_335))), p_40)))
        {
            int l_343 = (-5L);
            int l_401 = 0xB9644757L;
            if ((safe_lshift_func_int16_t_s_s((***g_256), 13)))
            {
                int *l_338 = &g_76;
                short *l_360 = &g_3;
                l_338 = (*l_318);
                for (p_40 = 0; (p_40 <= 36); p_40 = safe_add_func_uint32_t_u_u(p_40, 7))
                {
                    if ((*l_335))
                        break;
                    for (g_321 = (-8); (g_321 >= 5); ++g_321)
                    {
                        (*l_318) = &g_76;
                        if (l_343)
                            continue;
                    }
                    (*l_318) = &l_343;
                }
                (**l_318) = ((safe_div_func_uint32_t_u_u(p_39, ((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_296, p_40)), g_210)) | (safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((-9L), func_56(l_335, g_27, ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((((*l_360) = (safe_sub_func_uint16_t_u_u((((((-1L) & (l_343 > (*l_329))) && p_40) , g_259) <= p_40), g_3))) == p_41) , g_296), 3)), p_40)) , l_335)))) >= 0x23CEL), g_212))))) < 0x841CB193L);
            }
            else
            {
                int l_366 = 0x13692EB2L;
                int *l_418 = &g_76;
                l_335 = ((*l_318) = (void*)0);
                for (l_343 = (-29); (l_343 < 28); l_343++)
                {
                    short *l_363 = &g_3;
                    int *l_376 = &g_147;
                    short **l_380 = &l_363;
                    short ***l_379 = &l_380;
                    (*l_318) = (*l_318);
                    (*l_329) = (((*l_363) = ((**g_257) != p_41)) , (safe_lshift_func_int16_t_s_s((l_366 != 255UL), 14)));
                    for (p_40 = 13; (p_40 >= 54); p_40 = safe_add_func_uint64_t_u_u(p_40, 5))
                    {
                        unsigned *l_369 = &g_27;
                        char *l_370 = (void*)0;
                        short ***l_381 = &l_380;
                        if (l_343)
                            break;
                        (*l_376) = ((g_27 , p_40) | 0x2235L);
                        return g_312;
                    }
                }
                for (g_371 = (-25); (g_371 > 9); g_371 = safe_add_func_int8_t_s_s(g_371, 1))
                {
                    unsigned char l_406 = 7UL;
                    long long **l_423 = &l_320;
                    for (p_39 = (-24); (p_39 >= 12); p_39 = safe_add_func_uint64_t_u_u(p_39, 1))
                    {
                        unsigned short *l_402 = &g_296;
                        int l_403 = 0x9FDA80F4L;
                        unsigned long long *l_416 = (void*)0;
                        unsigned long long *l_417 = &g_212;
                        int **l_419 = &l_327;
                        (*l_318) = &g_147;
                        (*l_329) = (safe_sub_func_uint16_t_u_u(l_406, g_210));
                        if (g_407)
                            break;
                        (**l_318) = (safe_mul_func_uint64_t_u_u(l_403, (((((((func_56(&g_76, ((safe_add_func_uint8_t_u_u(p_39, (safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(p_39, (p_39 <= l_406))) & 0x5DL), l_406)))) | (*l_418)), (*l_318)) | 0x54L) < g_420) , g_421) == l_423) , 18446744073709551615UL) < g_333) <= p_40)));
                    }
                }
            }
            l_428 = (safe_sub_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(p_39, ((!p_39) || g_212))) == p_40), g_210));
            (*l_318) = (*l_318);
        }
        else
        {
            unsigned l_429 = 4294967294UL;
            int l_430 = 0L;
            l_430 = l_429;
            (**l_318) = ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(p_41, 6)), p_41)) > (-4L)), p_41)) , (*l_335));
            (*l_335) = g_76;
        }
        for (l_328 = 0; (l_328 >= (-5)); l_328 = safe_sub_func_uint32_t_u_u(l_328, 5))
        {
            char *l_442 = &l_322;
            int l_445 = (-4L);
            l_445 = ((safe_sub_func_uint64_t_u_u(0x299ABA915A7FF40ALL, (p_39 & ((*l_442) = p_39)))) | (p_39 >= (safe_mul_func_int8_t_s_s(0xB4L, (-2L)))));
        }
        if (l_328)
        {
            unsigned short l_471 = 2UL;
            unsigned long long *l_477 = &g_476;
            unsigned long long **l_478 = (void*)0;
            unsigned long long **l_479 = (void*)0;
            unsigned long long **l_480 = &l_477;
            for (g_76 = (-12); (g_76 < 19); g_76 = safe_add_func_uint64_t_u_u(g_76, 9))
            {
                int l_465 = (-3L);
                int l_474 = 0L;
                int l_475 = 0x86F47031L;
                g_476 = ((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((l_475 = ((*l_329) = (g_147 = ((safe_sub_func_int32_t_s_s(0xC876800FL, l_465)) ^ ((safe_div_func_uint16_t_u_u(g_212, g_76)) ^ (safe_unary_minus_func_uint8_t_u((safe_sub_func_int64_t_s_s((l_471 == (l_474 = (safe_add_func_uint32_t_u_u((p_40 <= l_465), (g_371 | (((p_39 && 0xCFL) == 0x55L) ^ l_471)))))), p_40))))))))) , 250UL) , 0x6C2E0F3EA85F2594LL), g_27)), p_40)) , l_471);
                return p_39;
            }
            (*l_329) = ((((void*)0 == l_477) , ((*l_480) = l_477)) == (void*)0);
            return l_471;
        }
        else
        {
            short l_484 = 0x6785L;
            (*l_318) = (g_407 , &l_428);
            (*l_318) = &g_147;
            for (l_72 = (-28); (l_72 != 17); ++l_72)
            {
                (**l_318) = (l_483 ^ l_484);
            }
        }
        (*l_486) = l_485;
    }
    else
    {
        char *l_487 = (void*)0;
        (*l_329) = ((void*)0 == l_487);
    }
    return (**l_318);
}







static int * func_46(unsigned long long p_47)
{
    short **l_164 = (void*)0;
    short ***l_165 = &l_164;
    int l_171 = (-1L);
    unsigned *l_175 = (void*)0;
    int l_297 = 0xE52BEC05L;
    (*l_165) = l_164;
    for (g_3 = 0; (g_3 >= 8); ++g_3)
    {
        unsigned long long *l_168 = (void*)0;
        int *l_169 = &g_147;
        int **l_170 = &l_169;
        unsigned **l_193 = (void*)0;
        unsigned long long l_214 = 1UL;
        int l_232 = (-4L);
        short ***l_255 = &l_164;
        volatile long long *l_311 = &g_312;
        volatile long long **l_310 = &l_311;
        g_76 = (!(((void*)0 != l_168) || (p_47 >= ((*l_169) = (0xF2A67DBEL | (-1L))))));
        (*l_170) = l_169;
        (*l_169) = (**l_170);
        if (l_171)
        {
            long long l_172 = 0x4936DCCDC5626D82LL;
            unsigned **l_176 = (void*)0;
            unsigned **l_177 = &l_175;
            unsigned char *l_178 = &g_179;
            int *l_196 = &g_147;
            unsigned **l_242 = &l_175;
            unsigned ***l_261 = &l_176;
            int l_283 = (-1L);
            if (((**l_170) >= ((*l_178) = (l_172 && (safe_sub_func_uint64_t_u_u((l_172 == l_172), (((*l_177) = l_175) != l_169)))))))
            {
                int *l_186 = &l_171;
                if ((l_176 == ((safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u(0xEE9CF0C6C1D74413LL, func_56(l_186, l_172, l_186))) == (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((0UL ^ (-1L)) || 1L), l_172)), 11)), 1UL))), p_47)), 4)) , l_193)))
                {
                    return &g_147;
                }
                else
                {
                    short *l_207 = (void*)0;
                    short *l_208 = (void*)0;
                    short *l_209 = &g_210;
                    unsigned long long *l_211 = &g_212;
                    int l_213 = 0x17D6C01FL;
                    (*l_196) = (safe_add_func_int64_t_s_s(g_212, l_171));
                }
                return l_196;
            }
            else
            {
                unsigned long long l_218 = 0x657CA1C3D12EEB9FLL;
                int l_231 = (-6L);
                unsigned char l_250 = 0x47L;
                (*l_170) = func_60(l_214, &l_171, (safe_lshift_func_uint16_t_u_u((l_218 = (safe_unary_minus_func_uint32_t_u(l_171))), ((safe_sub_func_uint64_t_u_u((!g_210), p_47)) <= (((safe_mod_func_uint16_t_u_u((((0L >= (safe_rshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(p_47, (((void*)0 != &g_210) , l_231))) <= 0L), p_47)), 4))) < 252UL) > p_47), l_171)) , l_232) >= p_47)))), g_3);
                for (l_214 = (-22); (l_214 >= 18); l_214++)
                {
                    unsigned ***l_245 = (void*)0;
                    unsigned ***l_246 = (void*)0;
                    unsigned ***l_247 = &l_176;
                    unsigned long long *l_248 = &g_212;
                    unsigned long long *l_249 = &l_218;
                    (*l_169) = (safe_div_func_uint64_t_u_u(((*l_248) = (g_212 > ((l_242 = (((safe_rshift_func_int8_t_s_s((!0xE4L), (safe_unary_minus_func_int8_t_s(((*l_169) & p_47))))) , g_210) , l_177)) == ((*l_247) = g_243)))), ((*l_249) = ((*l_196) = 0x2B4722CCF1A2F3BFLL))));
                    (*l_196) = (p_47 && ((l_250 , &l_231) != (g_260 = func_60(p_47, (g_147 , &l_231), ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((*l_196) , (((((l_171 , &g_179) == &g_179) , l_255) == g_256) , p_47)) && (**g_243)), 5)), l_171)) , g_179), g_179))));
                }
                if ((*g_260))
                    break;
                (*l_170) = &l_231;
            }
            (*l_261) = &l_175;
            for (p_47 = 0; (p_47 > 42); p_47++)
            {
                unsigned l_280 = 4294967290UL;
                long long *l_281 = &l_172;
                int l_282 = 0x52EFB72AL;
                (*l_170) = (void*)0;
                (*l_170) = &g_147;
                (*g_260) = ((((((p_47 , (safe_sub_func_int16_t_s_s(func_56(&g_76, (l_175 != (void*)0), ((*l_170) = ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((((*l_261) = &g_244) != (void*)0) <= (l_282 = ((safe_sub_func_int64_t_s_s(((*l_281) = (safe_lshift_func_int16_t_s_u(((*l_196) = (p_47 , (l_280 || 0xAED3L))), p_47))), g_212)) , 0xC878C84C85056C85LL))), 0x49E90ACFBF7B5BDBLL)) | p_47), (***g_256))) ^ 8UL), 9)) , &g_147))), l_283))) & p_47) , g_179) || g_27) < p_47) , (*l_169));
            }
        }
        else
        {
            unsigned **l_298 = &l_175;
            int *l_306 = &g_76;
            for (g_76 = 17; (g_76 < 1); --g_76)
            {
                int l_286 = 0xDD033310L;
                unsigned short *l_295 = &g_296;
                unsigned **l_299 = (void*)0;
                int *l_305 = (void*)0;
                if (((((-4L) || ((l_171 || l_286) , 18446744073709551610UL)) <= (safe_add_func_int16_t_s_s(0L, ((safe_lshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((*g_258) != 0x9145L) < 0x08L), (((((safe_add_func_int16_t_s_s(((l_297 = (((*l_295) = (l_286 != 0x7CL)) == l_286)) >= (**g_243)), 0x5535L)) ^ g_3) , p_47) , l_298) == l_299))) == 3L), l_171)) != l_171)))) < p_47))
                {
                    long long *l_301 = (void*)0;
                    long long **l_300 = &l_301;
                    long long ***l_302 = &l_300;
                    (*l_302) = l_300;
                    for (l_297 = 0; (l_297 < (-8)); --l_297)
                    {
                        l_305 = &l_286;
                        (**l_170) = p_47;
                        (*l_170) = &l_286;
                    }
                }
                else
                {
                    (*l_170) = &l_286;
                }
                return l_306;
            }
            (**l_170) = (safe_lshift_func_int8_t_s_s(1L, 1));
            l_310 = g_309;
        }
    }
    for (l_171 = (-1); (l_171 == (-27)); --l_171)
    {
        int *l_315 = (void*)0;
        int **l_316 = &l_315;
        int **l_317 = &g_260;
        (*l_317) = ((*l_316) = l_315);
    }
    return &g_76;
}







static long long func_50(unsigned short p_51, int * p_52, unsigned * p_53, long long p_54, unsigned * p_55)
{
    unsigned long long l_89 = 0x1FD024CA9A92ED16LL;
    int *l_90 = (void*)0;
    unsigned l_91 = 1UL;
    int l_96 = 0xE4AA2297L;
    unsigned l_132 = 0x1ECF37D8L;
    int l_145 = (-1L);
    short *l_160 = (void*)0;
    short *l_161 = &g_3;
    int *l_162 = &g_147;
    int l_163 = 0x93B66AF9L;
    if ((func_56(&g_76, g_27, func_60((l_91 = (safe_rshift_func_uint16_t_u_s((g_3 & l_89), 8))), func_60(l_89, ((safe_div_func_int8_t_s_s(p_54, p_51)) , func_60(((((*p_53) = g_76) , ((safe_mod_func_int64_t_s_s(((l_90 == (void*)0) ^ 0x7A79L), p_51)) | g_27)) , p_54), p_53, p_51, p_51)), l_89, g_3), p_54, p_51)) | l_96))
    {
        int l_97 = 0x72037C87L;
        int *l_98 = (void*)0;
        int *l_99 = &g_76;
        int **l_104 = (void*)0;
        (*l_99) = l_97;
        l_99 = (p_52 = &g_76);
        l_99 = ((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(p_54, (*l_99))), g_76)) , l_90);
    }
    else
    {
        int **l_105 = &l_90;
        unsigned short l_106 = 1UL;
        int ***l_127 = &l_105;
        unsigned long long *l_128 = (void*)0;
        unsigned long long *l_129 = &l_89;
        int *l_143 = &g_76;
        unsigned l_144 = 0x5516B95FL;
        int *l_146 = &g_147;
        (*l_105) = l_90;
        (*l_105) = func_60((((l_106 , (safe_mod_func_int16_t_s_s((~(safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s(5L, g_27)), g_27))), g_76))) >= p_51) , p_51), &g_76, g_3, g_3);
        (*l_105) = p_55;
        (*l_146) = (((l_145 = (((***l_127) && (((**l_105) , (safe_mod_func_uint8_t_u_u((p_54 || (((*l_143) = (l_132 >= ((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u((((*l_90) , ((***l_127) , (safe_mod_func_int32_t_s_s(0x08D222C0L, 0x70B01AA1L)))) > p_54), 0xBCL)), 5)) , (*l_90)), 1L)), (**l_105))) , g_3))) & 18446744073709551612UL)), p_54))) , 65535UL)) , 0L)) || (***l_127)) & g_27);
    }
    for (g_76 = 0; (g_76 < (-24)); g_76--)
    {
        return g_27;
    }
    p_52 = func_60(((g_27 > ((*l_162) = (safe_div_func_int16_t_s_s(((*l_161) = ((g_27 | (p_51 <= p_51)) || (((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_51, g_147)), g_27)) > g_76) && p_51))), 65533UL)))) || l_163), &g_76, g_76, p_54);
    (*p_52) = (~0xB4D8F4AAL);
    return g_76;
}







static unsigned short func_56(int * p_57, int p_58, int * p_59)
{
    int *l_85 = (void*)0;
    int **l_86 = &l_85;
    (*p_57) = (*p_59);
    (*l_86) = l_85;
    return p_58;
}







static int * func_60(int p_61, int * p_62, unsigned char p_63, char p_64)
{
    unsigned char l_80 = 251UL;
    int *l_83 = &g_76;
    int **l_84 = &l_83;
    (*p_62) = (p_63 , (safe_rshift_func_int8_t_s_u((l_80 , (safe_div_func_int16_t_s_s((g_27 >= p_61), g_27))), (p_61 , p_61))));
    (*l_84) = l_83;
    return &g_76;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_667, "g_667", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_878, "g_878", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_902, "g_902", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_920, "g_920", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
