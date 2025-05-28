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


struct S0 {
   short f0;
   unsigned f1;
   unsigned f2;
};

union U1 {
   char f0;
};


static unsigned char g_7 = 0xD6L;
static union U1 g_26 = {-8L};
static int g_39 = 0x56CD8339L;
static unsigned short g_49 = 0xB38EL;
static unsigned char g_52 = 4UL;
static struct S0 g_57 = {1L,0UL,1UL};
static int **g_60 = (void*)0;
static int g_78 = 0x8020C288L;
static unsigned char g_83 = 1UL;
static int g_110 = 0L;
static int *g_109 = &g_110;
static char g_150 = 0x35L;
static struct S0 *g_166 = &g_57;
static struct S0 **g_165 = &g_166;
static unsigned short *g_196 = &g_49;
static unsigned short **g_195 = &g_196;
static union U1 *g_199 = &g_26;
static short g_201 = 0x592CL;
static short *g_206 = &g_201;
static short **g_205 = &g_206;
static char g_219 = 0x0CL;
static unsigned *g_276 = &g_57.f1;
static unsigned **g_275 = &g_276;
static unsigned ***g_274 = &g_275;
static unsigned short g_279 = 0x232EL;
static char *g_434 = &g_219;
static char **g_433 = &g_434;
static int g_472 = (-1L);
static int *g_478 = &g_110;
static struct S0 g_517 = {0xA183L,4294967291UL,18446744073709551615UL};
static union U1 g_529 = {0x12L};
static int g_579 = 0x5097E263L;
static char g_618 = (-1L);
static unsigned char g_632 = 1UL;
static int *g_677 = &g_472;
static unsigned ***g_737 = (void*)0;
static int g_754 = 1L;



static struct S0 func_1(void);
static int func_2(short p_3, union U1 p_4, unsigned p_5, unsigned char p_6);
static union U1 func_8(char p_9, int p_10, union U1 p_11, int p_12);
static char func_13(unsigned char p_14, short p_15, unsigned char p_16);
static int func_21(unsigned p_22);
static unsigned func_23(union U1 p_24, short p_25);
static int * func_28(int * p_29, int * p_30, int * p_31);
static int * func_32(unsigned short p_33, int * p_34, unsigned p_35, int p_36, int * p_37);
static int * func_40(char p_41, int * p_42);
static unsigned short func_45(unsigned char p_46);
static struct S0 func_1(void)
{
    int l_17 = 6L;
    unsigned l_27 = 4UL;
    unsigned *l_522 = &g_517.f2;
    union U1 l_587 = {1L};
    char *l_592 = &g_26.f0;
    int *l_601 = &g_39;
    char l_631 = 1L;
    unsigned char l_702 = 0xA5L;
    unsigned short **l_714 = &g_196;
    struct S0 l_731 = {0xD178L,0x39FF6B90L,0UL};
    unsigned ***l_734 = &g_275;
    char ***l_768 = &g_433;
    short l_770 = (-1L);
    struct S0 *l_772 = &g_517;
    l_17 = func_2(g_7, func_8(func_13(g_7, l_17, l_17), func_13((safe_lshift_func_int16_t_s_s((func_21(((*l_522) = func_23(g_26, l_27))) , (**g_205)), 10)), l_27, l_17), g_529, l_27), l_17, g_529.f0);
    if (l_17)
    {
        unsigned l_573 = 4294967295UL;
        struct S0 l_598 = {4L,0x0FDBCB59L,9UL};
        int ***l_608 = (void*)0;
        int l_616 = 0x491CC74AL;
        unsigned short l_646 = 0xA52FL;
        char l_664 = 0x27L;
        int *l_683 = (void*)0;
        for (l_17 = 18; (l_17 < (-10)); l_17 = safe_sub_func_int16_t_s_s(l_17, 9))
        {
            short l_584 = (-1L);
            unsigned short l_586 = 65526UL;
            int l_620 = 0L;
            union U1 l_643 = {0xFCL};
            int l_682 = 0xDED5D887L;
            struct S0 l_684 = {0x30A7L,0UL,6UL};
            for (g_57.f1 = 0; (g_57.f1 <= 13); g_57.f1 = safe_add_func_uint32_t_u_u(g_57.f1, 2))
            {
                int *l_574 = &g_39;
                struct S0 l_585 = {0x3687L,4294967295UL,0xA10CC8CFL};
                union U1 l_588 = {8L};
                int ***l_609 = &g_60;
                unsigned short l_619 = 1UL;
                int l_644 = 0x8F8CD498L;
                unsigned char *l_645 = &g_83;
                if ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(func_2(((safe_lshift_func_int16_t_s_u(((1UL | (5L || ((*l_574) = l_573))) < (safe_mod_func_uint16_t_u_u(g_472, (safe_mod_func_uint32_t_u_u((l_573 == 0UL), g_579))))), 14)) , (func_2(((g_517 = ((((safe_rshift_func_int16_t_s_u(0xCA12L, 7)) , (func_13((safe_sub_func_uint16_t_u_u((!(g_49 = l_573)), 0x476AL)), l_17, l_584) ^ g_7)) | l_573) , l_585)) , l_586), l_587, l_573, l_17) != (*l_574))), l_588, (*g_276), g_7), (*g_206))), l_573)))
                {
                    int *l_599 = &g_472;
                    int ****l_610 = (void*)0;
                    int ****l_611 = &l_609;
                    unsigned short l_617 = 65535UL;
                    for (g_57.f0 = (-9); (g_57.f0 < (-22)); g_57.f0--)
                    {
                        union U1 **l_591 = &g_199;
                        (*l_591) = &g_529;
                    }
                    if (func_21(g_57.f0))
                    {
                        char **l_593 = &g_434;
                        char *l_595 = &g_219;
                        char **l_594 = &l_595;
                        (*l_574) = (((*l_593) = l_592) != ((*l_594) = (void*)0));
                        if (l_27)
                            continue;
                        return (**g_165);
                    }
                    else
                    {
                        struct S0 l_596 = {-1L,0UL,5UL};
                        struct S0 *l_597 = &g_517;
                        int **l_600 = &l_599;
                        (*l_597) = l_596;
                        (*l_597) = l_598;
                        (*l_600) = l_599;
                        l_601 = &l_17;
                    }
                    l_620 = ((*l_574) = (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((**g_205), ((safe_mul_func_uint16_t_u_u((l_608 != ((*l_611) = l_609)), (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_584, (l_616 > (((*g_199) = (*g_199)) , ((*l_599) = (!(*l_574))))))) | l_617), func_21(((g_618 && 2UL) , 0xE37CEB4EL)))))) == l_619))), l_620)));
                }
                else
                {
                    int *l_621 = &g_472;
                    int **l_622 = (void*)0;
                    int **l_623 = &g_109;
                    (*l_623) = l_621;
                }
            }
            l_601 = l_683;
            return l_684;
        }
        return (**g_165);
    }
    else
    {
        unsigned l_689 = 1UL;
        struct S0 *l_692 = &g_517;
        unsigned short *l_693 = &g_49;
        union U1 **l_694 = (void*)0;
        union U1 ***l_695 = &l_694;
        int *l_703 = &g_472;
        int **l_704 = &g_109;
        unsigned short l_705 = 0UL;
        unsigned l_708 = 18446744073709551615UL;
        short ***l_709 = &g_205;
        unsigned short ***l_712 = (void*)0;
        unsigned short ***l_713 = &g_195;
        int ***l_723 = &l_704;
        int ****l_722 = &l_723;
        (*l_601) = ((*g_677) = (((*g_276) , (safe_mul_func_uint8_t_u_u(g_57.f2, (((*l_592) = ((safe_sub_func_uint32_t_u_u((l_689 && ((safe_sub_func_int32_t_s_s(((func_2((((((*l_692) = (*g_166)) , l_693) != ((func_45((((*l_695) = l_694) != (void*)0)) | 0UL) , l_693)) == (*l_601)), (*g_199), (**g_275), g_150) , (*g_165)) != (void*)0), (*l_601))) < 0x338CB86DL)), 0x3387C044L)) > g_78)) || 9UL)))) ^ 0xED9DA02DL));
        (*l_704) = l_703;
        (*g_109) = func_45(((func_2(l_705, func_8((*g_434), func_45((((safe_sub_func_uint16_t_u_u(1UL, l_708)) , ((&g_206 != ((*l_709) = &g_206)) != ((*g_109) < (safe_mul_func_uint8_t_u_u(((*g_199) , (*l_601)), 0x53L))))) , g_279)), (*g_199), (*l_601)), (*l_703), (*l_601)) || (**l_704)) ^ (*g_434)));
        if (((((((*l_713) = &g_196) != l_714) && (safe_rshift_func_uint16_t_u_u((!((*l_693) = 0UL)), ((((**g_205) , func_8((*g_434), (*g_677), func_8(((*l_592) = (*g_434)), (!9L), l_587, g_39), g_52)) , (*l_601)) >= (*l_601))))) , (*l_703)) , (-1L)))
        {
            int ***l_721 = (void*)0;
            int ****l_720 = &l_721;
            struct S0 *l_729 = &g_57;
            struct S0 l_730 = {0x471CL,4UL,0xED9F8CC0L};
            unsigned char l_736 = 0xC1L;
            struct S0 l_742 = {0xE801L,0x77F682C8L,0xD13165EEL};
            for (g_201 = 14; (g_201 != 23); g_201 = safe_add_func_int32_t_s_s(g_201, 3))
            {
                unsigned short l_719 = 0xC5E3L;
                union U1 **l_725 = &g_199;
                int *l_748 = (void*)0;
            }
        }
        else
        {
            short l_751 = 0xC6E5L;
            int l_769 = 0x41FF7B15L;
            struct S0 *l_771 = &l_731;
            (**l_723) = &l_17;
            for (l_587.f0 = 0; (l_587.f0 != 11); l_587.f0 = safe_add_func_uint16_t_u_u(l_587.f0, 8))
            {
                int l_760 = 9L;
                struct S0 l_763 = {7L,4294967295UL,0x5030C408L};
            }
            (*g_677) = ((*l_601) = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((((**l_704) == func_2((**l_704), (*g_199), (((*l_703) = (***l_723)) <= ((**g_275) = func_13((&g_433 != ((((***l_709) = l_751) && 0x7818L) , l_768)), ((func_8(((*l_601) <= (*g_109)), (**l_704), l_587, l_751) , g_52) ^ (***l_723)), (*l_601)))), g_517.f2)) | (*l_601)) == 1L), 1UL)) == l_769), l_770)));
            l_771 = (void*)0;
        }
    }
    (*l_772) = ((*g_166) = (**g_165));
    return (*g_166);
}







static int func_2(short p_3, union U1 p_4, unsigned p_5, unsigned char p_6)
{
    int ***l_555 = &g_60;
    int ****l_556 = (void*)0;
    int ****l_557 = &l_555;
    int ***l_558 = &g_60;
    int ****l_559 = (void*)0;
    int ****l_560 = (void*)0;
    int ****l_561 = &l_558;
    int *l_562 = &g_110;
    (*l_562) = (g_472 = (safe_unary_minus_func_uint32_t_u((((*l_557) = l_555) == (g_201 , ((*l_561) = l_558))))));
    return p_6;
}







static union U1 func_8(char p_9, int p_10, union U1 p_11, int p_12)
{
    int *l_530 = &g_472;
    int **l_531 = &l_530;
    unsigned short *l_538 = &g_49;
    unsigned char *l_551 = &g_52;
    int l_552 = 1L;
    int **l_553 = &g_478;
    (*l_531) = &p_10;
    (*l_553) = ((*l_531) = &p_10);
    return p_11;
}







static char func_13(unsigned char p_14, short p_15, unsigned char p_16)
{
    unsigned l_18 = 18446744073709551613UL;
    return l_18;
}







static int func_21(unsigned p_22)
{
    unsigned l_523 = 0x3D4998C5L;
    union U1 l_526 = {0xD5L};
    int l_527 = (-8L);
    int l_528 = (-1L);
    l_528 = (l_527 = (l_523 , (safe_div_func_int32_t_s_s((l_526 , 0xC14E789EL), 0x65B7B6F8L))));
    return l_528;
}







static unsigned func_23(union U1 p_24, short p_25)
{
    int *l_38 = &g_39;
    unsigned l_47 = 0x752E4A6BL;
    unsigned short *l_48 = &g_49;
    unsigned short *l_50 = (void*)0;
    unsigned short *l_51 = (void*)0;
    int **l_479 = &g_478;
    int **l_484 = (void*)0;
    struct S0 *l_485 = &g_57;
    (*l_479) = func_28(func_32(((void*)0 != l_38), func_40(((0xAF7BL <= (safe_rshift_func_int8_t_s_s((func_45(func_13(((l_47 | 0x4EL) && ((p_24.f0 & (g_52 = ((*l_48) = 0x4F16L))) == g_7)), p_25, g_26.f0)) < p_24.f0), g_26.f0))) ^ p_24.f0), &g_39), p_24.f0, g_150, l_38), g_276, g_276);
    (*l_479) = (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(p_25, 8)), 11)) >= (*g_276)) , (*l_479));
    if ((*g_478))
    {
        struct S0 **l_486 = &l_485;
        int l_493 = 0L;
        unsigned l_500 = 0UL;
        short l_501 = 0x5DE4L;
        (*l_486) = ((*g_165) = l_485);
        if (((*g_478) = (p_25 , (safe_rshift_func_int16_t_s_u(((p_24.f0 > 0x19D0L) && (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((&l_486 != (g_57.f0 , &g_165)) | l_493) != (p_24.f0 & (((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_uint8_t_u_u(l_500, 5)) > (**g_205)) >= l_501), (*l_38))), g_57.f0)) == 1UL) || (*g_206)))), p_24.f0)), (**g_205)))), 0)))))
        {
            unsigned char l_502 = 2UL;
            unsigned char *l_503 = &l_502;
            (*l_479) = (((*l_503) = (l_502 , (l_485 != (void*)0))) , &l_493);
            (*l_479) = &l_493;
        }
        else
        {
            g_165 = &g_166;
        }
    }
    else
    {
        int l_514 = 0xDD1ABF67L;
        struct S0 *l_515 = (void*)0;
        struct S0 *l_516 = &g_517;
        for (g_78 = 6; (g_78 <= (-2)); g_78 = safe_sub_func_uint8_t_u_u(g_78, 3))
        {
            char l_506 = 0x82L;
            unsigned short **l_507 = &l_50;
            unsigned short **l_508 = &l_51;
            struct S0 l_511 = {0x75F2L,4294967295UL,0xDDF15BD0L};
            (*l_38) = ((g_52 , ((&g_60 == &g_60) != (l_506 & (((*l_507) = l_50) != ((*l_508) = l_51))))) & ((l_506 >= (~((safe_rshift_func_int8_t_s_u(((l_511 , (safe_rshift_func_int16_t_s_u((((*g_206) = (p_25 ^ l_506)) || l_514), 7))) < p_25), 3)) <= 0x301228ECL))) , p_25));
        }
        (*l_516) = ((*g_166) = (*g_166));
        (*l_479) = (void*)0;
        (*l_479) = (*l_479);
    }
    for (g_279 = 0; (g_279 <= 30); g_279++)
    {
        int *l_520 = &g_110;
        unsigned l_521 = 18446744073709551615UL;
        (*l_479) = l_520;
        (*l_38) = l_521;
    }
    return p_25;
}







static int * func_28(int * p_29, int * p_30, int * p_31)
{
    unsigned char l_462 = 252UL;
    union U1 l_467 = {-3L};
    int l_473 = 0L;
    int **l_474 = &g_109;
    (*p_31) = ((*g_109) <= ((l_462 , ((safe_div_func_int32_t_s_s((*p_30), (safe_sub_func_uint32_t_u_u((l_473 = (+(func_13(l_462, l_462, (7UL ^ (l_467 , (safe_add_func_uint32_t_u_u(l_462, (g_472 = (safe_div_func_uint16_t_u_u(0xE653L, l_467.f0)))))))) != (**g_205)))), (*g_109))))) | (*g_206))) ^ 255UL));
    (*l_474) = &l_473;
    for (g_39 = 9; (g_39 <= 11); g_39++)
    {
        char l_477 = (-1L);
        (*l_474) = p_30;
        if (func_45(l_477))
        {
            return p_30;
        }
        else
        {
            return (*l_474);
        }
    }
    return g_478;
}







static int * func_32(unsigned short p_33, int * p_34, unsigned p_35, int p_36, int * p_37)
{
    int *l_203 = &g_39;
    int **l_204 = &l_203;
    short ***l_207 = &g_205;
    int ***l_209 = &g_60;
    union U1 *l_210 = &g_26;
    unsigned short l_224 = 0xFF5EL;
    struct S0 l_234 = {0x5B12L,0xC52EBE5BL,3UL};
    unsigned l_261 = 0xDD9B939DL;
    unsigned *l_273 = &l_234.f1;
    unsigned **l_272 = &l_273;
    unsigned ***l_271 = &l_272;
    unsigned char l_285 = 0xD0L;
    short l_318 = 0xAA54L;
    char *l_368 = &g_150;
    int l_413 = (-10L);
    char **l_450 = &g_434;
    int l_460 = 0L;
    (*l_204) = l_203;
    (*l_207) = g_205;
    (*l_204) = func_40((*l_203), (*l_204));
    if ((*p_37))
    {
        struct S0 l_208 = {-8L,4294967288UL,5UL};
        if (((l_208 , (l_209 = &g_60)) == (void*)0))
        {
            union U1 **l_211 = &l_210;
            int l_218 = 0x283B4B79L;
            char *l_220 = &g_219;
            unsigned char *l_221 = (void*)0;
            unsigned char *l_222 = &g_83;
            unsigned char *l_223 = &g_52;
            int *l_225 = (void*)0;
            int *l_226 = &g_110;
            struct S0 l_227 = {0xF005L,7UL,0x0336C129L};
            struct S0 *l_228 = &l_208;
            (*l_211) = l_210;
            (*l_203) = func_45((safe_mod_func_int32_t_s_s((0UL >= g_26.f0), g_39)));
            (*l_226) = ((safe_add_func_uint16_t_u_u((((*p_34) = ((*g_199) , (safe_lshift_func_uint8_t_u_u((func_13(l_218, ((((*l_223) = ((*l_222) = (((*l_210) , func_13(p_36, (**g_205), g_57.f2)) <= ((*l_220) = g_219)))) <= (*l_203)) && 0x50024F6DL), p_36) != 0UL), p_36)))) & (-8L)), (*g_206))) | l_224);
            (*l_228) = ((**g_165) = l_227);
        }
        else
        {
            int *l_229 = &g_110;
            int l_241 = (-1L);
            unsigned char *l_248 = (void*)0;
            unsigned char *l_249 = &g_83;
            (*l_204) = func_40(p_36, l_229);
            (*l_203) = ((((safe_mul_func_uint8_t_u_u((g_52 = ((*l_249) = (safe_mod_func_int16_t_s_s((func_45((l_234 , (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((+0x0D85L), (safe_sub_func_int8_t_s_s(p_35, (+func_45((l_241 != ((g_57.f0 != ((g_39 , 0xF3L) & (safe_mul_func_uint16_t_u_u(((**g_195) = (((!g_49) && ((safe_sub_func_int32_t_s_s((((safe_sub_func_int32_t_s_s(((*g_109) & (**l_204)), (*l_229))) <= (*p_37)) || g_83), (**l_204))) < p_33)) | 0x65A91684L)), p_33)))) ^ l_208.f1)))))))) && (-1L)), p_36)))) , 0x4543L), (*g_206))))), 0x96L)) < l_208.f1) ^ 0L) || 0xA178L);
        }
    }
    else
    {
        unsigned short l_258 = 0xCD0DL;
        unsigned l_316 = 0x65BCB941L;
        struct S0 l_388 = {0x169BL,4294967288UL,0x4A68FEA3L};
        int *l_391 = &g_39;
        unsigned l_448 = 0xE71CDC07L;
        int l_461 = 0L;
        if ((*p_37))
        {
            short l_252 = (-1L);
            int *l_284 = &g_39;
            for (l_234.f2 = 0; (l_234.f2 <= 20); l_234.f2 = safe_add_func_uint8_t_u_u(l_234.f2, 5))
            {
                if (l_252)
                    break;
                if ((*p_37))
                    break;
            }
            for (g_39 = 0; (g_39 <= 19); g_39 = safe_add_func_uint8_t_u_u(g_39, 6))
            {
                int l_255 = 1L;
                unsigned char *l_264 = (void*)0;
                unsigned char *l_265 = &g_83;
                if ((l_252 , (func_45(l_255) ^ (safe_mod_func_uint32_t_u_u(l_258, ((safe_div_func_int8_t_s_s(((l_252 != func_45(p_33)) <= (l_261 = (*p_37))), ((*l_265) = (g_52 = (safe_mod_func_int8_t_s_s(func_45((((*g_196) = ((*g_109) <= g_7)) , l_258)), 0x85L)))))) , g_52))))))
                {
                    unsigned l_268 = 18446744073709551613UL;
                    int *l_280 = (void*)0;
                    if (((safe_sub_func_uint16_t_u_u(func_45(l_268), (safe_mul_func_uint16_t_u_u(((*g_109) == (*g_109)), ((l_271 == g_274) < 0x25L))))) > (safe_div_func_uint8_t_u_u(((**g_275) , ((*g_166) , g_279)), p_33))))
                    {
                        return l_280;
                    }
                    else
                    {
                        return p_37;
                    }
                }
                else
                {
                    int **l_281 = &g_109;
                    p_37 = ((*l_281) = ((*l_204) = p_34));
                    for (p_36 = (-16); (p_36 <= 11); ++p_36)
                    {
                        (*l_281) = p_34;
                        return l_284;
                    }
                    return l_284;
                }
            }
        }
        else
        {
            struct S0 **l_313 = &g_166;
            int l_315 = (-6L);
            int *l_414 = &g_110;
            if (l_285)
            {
                struct S0 ***l_312 = &g_165;
                int l_314 = 0xBA556991L;
                short l_317 = 0x2126L;
                int *l_383 = (void*)0;
                int *l_384 = &g_110;
                unsigned short **l_385 = &g_196;
                (*g_109) = (!((safe_sub_func_int8_t_s_s(func_45((p_33 < (!(func_45(g_7) > (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_316 = ((safe_sub_func_uint16_t_u_u(0UL, ((**g_205) = (safe_lshift_func_int16_t_s_s(func_13(p_35, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((void*)0 == &g_60), ((((safe_mod_func_int16_t_s_s((3L >= ((void*)0 == l_312)), (**g_205))) , (*l_312)) == l_313) < 65535UL))), (-1L))), 5)), l_314)) && p_36) , (*l_203)), l_315)) | (-10L)), p_35)), 0)), l_258), l_314))))) , 0x32L)), p_36)) & l_317), p_33)))))), p_35)) ^ 0xB62AL));
                if (((l_318 , (**l_204)) <= l_317))
                {
                    (*p_37) = (*g_109);
                }
                else
                {
                    unsigned short l_319 = 1UL;
                    int l_339 = (-1L);
                    short l_341 = 1L;
                    unsigned char *l_346 = (void*)0;
                    unsigned char *l_347 = &l_285;
                    unsigned char *l_348 = &g_83;
                    int l_365 = 0x0A20FC24L;
                    char **l_369 = &l_368;
                    unsigned l_370 = 0x403408B0L;
                    (*l_313) = (*l_313);
                    if ((*p_34))
                    {
                        unsigned short ***l_322 = &g_195;
                        unsigned short **l_323 = &g_196;
                        short *l_338 = (void*)0;
                        int l_340 = (-1L);
                        (*g_109) = ((l_315 | (((l_319 & (safe_rshift_func_int8_t_s_s((**l_204), (((*l_322) = (void*)0) != (l_315 , l_323))))) , (*g_206)) != (safe_mul_func_uint16_t_u_u((*g_196), func_45(l_314))))) , 0x23480300L);
                        (*l_204) = (*l_204);
                        (*g_109) = ((func_13(((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_div_func_int8_t_s_s(func_13(((-9L) ^ ((**g_205) >= (*g_206))), (((*l_203) = func_45((((*p_37) = (*p_37)) , (safe_sub_func_int32_t_s_s((p_35 || p_36), (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((l_339 = ((((**g_165) , l_338) != l_338) , 255UL)) > g_49), (**l_204))), g_57.f0))))))) <= l_314), l_340), l_341)) , p_33) , (*p_37)), l_314)), 65535UL)) ^ (*g_196)), l_315, g_150) , 0x48EDL) , (*g_109));
                    }
                    else
                    {
                        g_109 = &g_39;
                    }
                    (*l_204) = func_40((safe_lshift_func_int16_t_s_s((p_35 != ((safe_div_func_uint16_t_u_u(((((*l_348) = ((*l_347) = (&l_210 != (void*)0))) , ((*l_209) = &p_34)) == &g_109), (safe_sub_func_uint16_t_u_u(((p_36 > (safe_lshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((*g_196) = (~(l_315 != (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((*l_203), (func_13(((safe_mod_func_int32_t_s_s(l_319, 8L)) && g_49), p_33, l_339) >= 0xC358AB34L))), 4294967295UL))))), p_35)), p_35)), l_317))) == 6UL), p_33)))) , l_365)), l_315)), &g_39);
                    (*p_34) = func_13((((**l_313) , (p_35 , ((*g_206) = (safe_rshift_func_uint16_t_u_u((*g_196), l_315))))) <= (((*l_369) = l_368) == (void*)0)), (l_370 = 0x2092L), (**l_204));
                }
                p_34 = func_40(((*p_37) <= (safe_mul_func_int16_t_s_s(p_36, func_45((func_45(g_279) & (safe_sub_func_uint8_t_u_u((g_83 = (((*l_385) = ((((((*l_384) = (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_33, (p_35 ^ l_258))), ((safe_rshift_func_int8_t_s_u(g_279, 5)) , (safe_sub_func_int32_t_s_s(((*l_203) , (-3L)), (*p_37))))))) <= p_35) | l_315) , (*g_199)) , &p_33)) != (void*)0)), p_36))))))), (*l_204));
                for (p_35 = (-5); (p_35 < 5); p_35 = safe_add_func_uint8_t_u_u(p_35, 6))
                {
                    short ***l_405 = &g_205;
                    l_388 = (**g_165);
                    for (l_317 = 10; (l_317 == (-11)); --l_317)
                    {
                        return l_391;
                    }
                    if ((*g_109))
                        break;
                    for (l_234.f1 = (-12); (l_234.f1 > 13); ++l_234.f1)
                    {
                        struct S0 l_394 = {0x2D91L,0x5A29D448L,18446744073709551615UL};
                        int l_412 = 1L;
                        (**l_313) = l_394;
                        l_315 = ((*g_109) = (((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_33, ((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((-2L), 0x20B9359FL)) > (safe_lshift_func_int16_t_s_s((l_405 != (g_78 , &g_205)), ((((safe_sub_func_int16_t_s_s(0x46ECL, l_315)) ^ (safe_add_func_uint8_t_u_u((l_412 = (!((safe_add_func_int16_t_s_s((*g_206), p_33)) != 0x3435L))), p_33))) , g_7) , 9L)))), 0)) != (**g_205)))), l_413)) >= 65535UL) || (-1L)));
                    }
                }
            }
            else
            {
                (*l_204) = l_414;
            }
            return p_37;
        }
lbl_447:
        (*l_204) = (*l_204);
        for (l_234.f1 = 0; (l_234.f1 > 59); ++l_234.f1)
        {
            int l_440 = 0x3669113FL;
            int *l_449 = &g_39;
            for (g_26.f0 = 0; (g_26.f0 < (-28)); g_26.f0--)
            {
                int *l_419 = &g_110;
                (*l_204) = l_419;
                (*l_204) = l_419;
            }
            if ((safe_rshift_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((~p_35), (safe_sub_func_int8_t_s_s(p_33, p_35)))) != g_57.f0), (((safe_mod_func_uint32_t_u_u(p_33, (safe_lshift_func_uint8_t_u_u(g_110, ((safe_unary_minus_func_int8_t_s(g_110)) > ((((safe_mod_func_int32_t_s_s((-4L), (*g_109))) ^ g_57.f2) , (void*)0) != g_433)))))) > (-3L)) | p_35))))
            {
                (*g_166) = (**g_165);
                for (g_57.f2 = (-12); (g_57.f2 == 18); g_57.f2 = safe_add_func_uint8_t_u_u(g_57.f2, 4))
                {
                    struct S0 l_439 = {0x7546L,4294967292UL,0UL};
                    unsigned short *l_446 = &g_279;
                    (*l_204) = p_34;
                    p_34 = (p_37 = ((safe_lshift_func_uint16_t_u_s(((l_439 , (((((g_83 , l_440) | (safe_mod_func_uint16_t_u_u((**g_195), ((***l_207) = l_440)))) != (safe_unary_minus_func_int16_t_s(l_439.f0))) & 65533UL) > ((*l_446) = (0x10L && (safe_mod_func_int32_t_s_s((-8L), (**g_275))))))) == l_440), 12)) , p_37));
                    (*l_391) = (func_13(g_219, p_36, p_36) ^ (*l_391));
                }
                if ((p_36 , (*p_37)))
                {
                    (**l_204) = l_440;
                }
                else
                {
                    if (l_234.f2)
                        goto lbl_447;
                    if (l_448)
                        continue;
                }
                g_109 = l_449;
            }
            else
            {
                char ***l_451 = &g_433;
                l_461 = ((*g_109) = ((l_450 == ((**g_165) , ((*l_451) = (void*)0))) , (safe_add_func_uint32_t_u_u(((*g_109) || (*p_34)), ((((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(func_45(l_460), p_36)) & (**g_275)), 7)) ^ (*l_449)), 250UL)) > 0x20L) , &g_26) == (void*)0)))));
            }
        }
    }
    return &g_110;
}







static int * func_40(char p_41, int * p_42)
{
    unsigned char l_69 = 1UL;
    int l_80 = (-8L);
    struct S0 *l_163 = &g_57;
    int *l_172 = &g_110;
    int l_189 = 0xDC81AE91L;
    for (p_41 = (-16); (p_41 == (-5)); ++p_41)
    {
        struct S0 l_59 = {0L,0xC3D8D589L,0x5CB296ADL};
        unsigned short *l_84 = (void*)0;
        int l_114 = 0x89FA4E93L;
        unsigned char *l_187 = &g_7;
        union U1 *l_198 = &g_26;
        for (g_39 = 24; (g_39 != 14); g_39--)
        {
            struct S0 *l_58 = &g_57;
            int l_68 = 0x0AC80EABL;
            short l_92 = 4L;
            int l_104 = (-1L);
            unsigned l_123 = 0UL;
            unsigned **l_133 = (void*)0;
            union U1 l_147 = {0x82L};
            int l_151 = (-1L);
            (*l_58) = g_57;
            if (g_52)
            {
                int ***l_61 = &g_60;
                unsigned short *l_72 = &g_49;
                int l_77 = 0x9421A0E5L;
                unsigned char *l_79 = &g_52;
                int *l_81 = &l_77;
                g_57 = l_59;
                (*l_61) = g_60;
                (*l_81) = ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((g_26.f0 = ((((((((safe_lshift_func_uint16_t_u_s(func_45(l_68), 5)) , (p_41 , (g_39 || (+(l_69 = (-1L)))))) == func_13(((*l_79) = (safe_div_func_int8_t_s_s(((l_72 == ((g_78 = ((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((0xE4L != p_41) , g_57.f2), 3)) , 0x7BL) == 0xF1L), l_77)) <= l_59.f2)) , l_72)) , 0L), 3L))), g_57.f2, l_80)) == 65535UL) > p_41) ^ 0L) || l_59.f1) < g_7)) , p_41), l_68)), 0UL)) && p_41);
            }
            else
            {
                unsigned l_82 = 0x79CFD24BL;
                unsigned short *l_85 = &g_49;
                unsigned short **l_86 = &l_85;
                unsigned char *l_91 = &l_69;
                unsigned l_97 = 18446744073709551606UL;
                int l_117 = 0xC0CBF820L;
                int *l_118 = (void*)0;
                union U1 l_120 = {2L};
                struct S0 l_131 = {0xA911L,0x91DCBA93L,18446744073709551613UL};
                if (l_82)
                    break;
                g_83 = (*p_42);
                if (g_26.f0)
                    break;
                if (func_13((l_84 != ((*l_86) = l_85)), g_83, (p_41 , (((((!(safe_mul_func_int8_t_s_s((((!(g_26.f0 > func_13((safe_mul_func_uint8_t_u_u(((*l_91) = ((((0x2F27L > 5L) < g_83) ^ l_69) != g_57.f1)), 0xF5L)), l_59.f1, l_92))) || 65535UL) , p_41), p_41))) > p_41) < p_41) >= l_80) > 4294967295UL))))
                {
                    char *l_115 = &g_26.f0;
                    unsigned short **l_116 = (void*)0;
                    int **l_119 = &l_118;
                    for (g_52 = 0; (g_52 < 22); g_52++)
                    {
                        return p_42;
                    }
                    if ((safe_mul_func_int8_t_s_s((((0x7245L == (g_57.f0 || func_45((l_97 & (*p_42))))) <= l_69) , l_68), func_45(g_7))))
                    {
                        unsigned *l_98 = &g_57.f1;
                        char *l_101 = &g_26.f0;
                        int l_102 = 1L;
                        int *l_103 = &l_68;
                        int **l_105 = &l_103;
                        int *l_106 = (void*)0;
                        int *l_107 = (void*)0;
                        int *l_108 = &l_104;
                        l_104 = ((*l_103) = (((*l_98) = (l_80 && p_41)) ^ (l_102 = (safe_div_func_uint8_t_u_u(((void*)0 == &p_42), ((*l_101) = p_41))))));
                        (*l_105) = &g_39;
                        (*l_108) = 0xBFF9F6C9L;
                    }
                    else
                    {
                        int **l_111 = &g_109;
                        g_109 = p_42;
                        (*l_111) = p_42;
                        if ((*g_109))
                            break;
                    }
                    l_117 = (l_59.f1 == (1UL ^ (safe_lshift_func_uint8_t_u_u((((*p_42) >= (g_7 || (((l_114 = (*p_42)) <= l_68) > (((*l_115) = p_41) == p_41)))) ^ (((void*)0 != l_116) || 0xC377822EL)), p_41))));
                    (*l_119) = l_118;
                }
                else
                {
                    union U1 *l_121 = (void*)0;
                    union U1 *l_122 = &g_26;
                    if (((func_45((((*l_122) = l_120) , (g_26.f0 , ((*l_91) = l_123)))) >= (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_41 , 0xB816L), (((safe_unary_minus_func_int16_t_s((safe_mod_func_int8_t_s_s(0x56L, g_78)))) <= p_41) < (-7L)))), l_80))) <= p_41))
                    {
                        unsigned ***l_132 = (void*)0;
                        int **l_134 = &l_118;
                        (*l_58) = l_131;
                        l_133 = (void*)0;
                        (*l_134) = p_42;
                        return p_42;
                    }
                    else
                    {
                        l_118 = &l_114;
                    }
                }
            }
            for (g_83 = 0; (g_83 > 30); g_83 = safe_add_func_int16_t_s_s(g_83, 4))
            {
                unsigned char *l_145 = &l_69;
                short *l_146 = &l_92;
                unsigned *l_148 = (void*)0;
                unsigned *l_149 = &l_123;
                int l_153 = 0x04891CAFL;
                struct S0 *l_164 = (void*)0;
                int *l_169 = &l_114;
                int *l_170 = (void*)0;
                int *l_171 = &l_153;
                if (func_45((((((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(l_59.f2, (((*l_149) = (safe_add_func_int16_t_s_s(((*l_146) = func_13(((*l_145) = 0x5EL), p_41, p_41)), ((-1L) < (l_80 = ((l_147 , (g_57.f1 == 0xA3L)) != l_123)))))) & (*p_42)))), g_150)), g_110)) , l_59.f0) >= 0xD522L) >= l_151) && 0xB985A9A9L)))
                {
                    unsigned short *l_152 = &g_49;
                    unsigned *l_154 = &l_59.f2;
                    char *l_161 = &g_26.f0;
                    short l_162 = 1L;
                    struct S0 ***l_167 = &g_165;
                    l_80 = ((((*l_152) = l_69) , ((0UL ^ l_153) , ((g_150 | (((*l_154) = (g_57.f2 = p_41)) , (safe_div_func_int16_t_s_s((((l_153 = (l_162 = (((*l_161) = (((g_57 = g_57) , (0x114FAD7DL < ((p_41 > ((safe_div_func_int32_t_s_s((safe_div_func_int32_t_s_s(l_114, l_114)), l_69)) , l_68)) , l_59.f2))) == g_49)) >= 0xB0L))) , p_41) , g_39), g_7)))) >= 0xB8L))) , (*p_42));
                    l_164 = l_163;
                    (*l_167) = g_165;
                }
                else
                {
                    struct S0 l_168 = {6L,4294967292UL,18446744073709551615UL};
                    (*g_166) = l_168;
                    if ((*p_42))
                        break;
                }
                if (l_59.f0)
                    break;
                (*l_171) = ((*l_169) = ((!(g_57.f1 = (((*l_146) = g_150) > (-9L)))) || l_153));
            }
            l_172 = p_42;
        }
        (*p_42) = ((*l_172) && g_49);
        for (g_57.f2 = 5; (g_57.f2 < 30); ++g_57.f2)
        {
            unsigned char l_186 = 0x50L;
            short l_194 = 0x503DL;
            struct S0 *l_202 = &l_59;
            for (l_114 = 18; (l_114 > 9); l_114--)
            {
                int l_179 = 7L;
                unsigned *l_188 = &l_59.f1;
                unsigned short ***l_197 = &g_195;
                int **l_200 = &l_172;
                (*g_109) = (safe_rshift_func_uint16_t_u_s((((g_49 > l_179) ^ (safe_mod_func_int16_t_s_s((0xA667L >= (((*l_188) = func_13(p_41, (safe_sub_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((g_49 && func_45(p_41)), l_186)) | (((void*)0 != l_187) , 0x8A6BL)), p_41)), p_41)) , 0xF336L)), 0xD909L))) >= l_189), g_57.f1));
            }
            (*l_202) = ((g_201 = ((*g_196) = (*g_196))) , (*l_163));
        }
    }
    return p_42;
}







static unsigned short func_45(unsigned char p_46)
{
    if (p_46)
    {
        return p_46;
    }
    else
    {
        return p_46;
    }
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_57.f0, "g_57.f0", print_hash_value);
    transparent_crc(g_57.f1, "g_57.f1", print_hash_value);
    transparent_crc(g_57.f2, "g_57.f2", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_517.f0, "g_517.f0", print_hash_value);
    transparent_crc(g_517.f1, "g_517.f1", print_hash_value);
    transparent_crc(g_517.f2, "g_517.f2", print_hash_value);
    transparent_crc(g_529.f0, "g_529.f0", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
