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
   long long f0;
   short f1;
   short f2;
};

struct S1 {
   int f0;
   char f1;
   int f2;
   unsigned char f3;
   const struct S0 f4;
};


static unsigned g_7 = 0xA20B95AEL;
static int g_12 = 0xCC80FC3AL;
static const int g_42 = 0xD7F285F4L;
static unsigned short g_44 = 0xFF5FL;
static const int *g_70 = (void*)0;
static unsigned short *g_75 = (void*)0;
static unsigned short **g_74 = &g_75;
static unsigned char g_84 = 0xEDL;
static short g_100 = 0x7E08L;
static long long g_136 = (-6L);
static unsigned long long g_140 = 0xF746A6ECCD282601LL;
static unsigned short g_165 = 65535UL;
static int g_168 = 0x7C0B8F99L;
static short g_169 = 4L;
static int g_181 = 0x309E2023L;
static const struct S0 g_189 = {0x85BCF72199219543LL,0x1B6BL,-4L};
static unsigned g_275 = 0x89590F8BL;
static int *g_279 = (void*)0;
static int **g_278 = &g_279;
static struct S1 g_280 = {0L,0xCDL,-1L,0x52L,{-6L,0L,9L}};
static struct S0 g_282 = {0x1E97B72706E003A7LL,0x9F58L,0L};
static short *g_301 = (void*)0;
static short **g_300 = &g_301;
static unsigned long long g_350 = 0x3ED317036850D544LL;
static int g_355 = 0L;
static int *g_354 = &g_355;
static struct S0 g_363 = {0x85C46A8985A425B5LL,0x6331L,0x7A95L};
static char g_404 = 0x61L;
static unsigned char g_429 = 1UL;
static struct S0 g_533 = {0L,-8L,-5L};
static unsigned long long *g_538 = &g_350;
static unsigned long long **g_537 = &g_538;
static unsigned g_597 = 1UL;
static char g_665 = 0xA0L;
static short g_669 = 1L;
static unsigned char g_685 = 0xBAL;



static struct S1 func_1(void);
static int func_2(unsigned p_3, char p_4, unsigned char p_5);
static unsigned short func_17(const int * p_18, int * p_19, const int * p_20, struct S1 p_21);
static const int * func_22(unsigned char p_23, unsigned char p_24, unsigned char p_25);
static unsigned short func_34(short p_35, int p_36, int * p_37, int * p_38, int * p_39);
static char func_52(short p_53);
static unsigned short ** func_63(unsigned p_64, unsigned p_65);
static unsigned func_66(int p_67);
static int func_87(unsigned p_88, int ** p_89, struct S1 p_90, long long p_91, unsigned long long p_92);
static int ** func_93(unsigned short ** p_94, char p_95, unsigned p_96, const unsigned p_97);
static struct S1 func_1(void)
{
    unsigned char l_6 = 7UL;
    int l_435 = 0x27A1FF17L;
    int l_448 = 0L;
    const int *l_604 = &g_355;
    int *l_607 = &l_448;
    unsigned long long l_608 = 0xF2281E60A541CA58LL;
    short l_617 = (-1L);
    unsigned l_700 = 0x7B7ADCC2L;
    if (func_2(l_6, l_6, g_7))
    {
        const int *l_415 = &g_42;
        struct S1 l_416 = {0L,0x88L,-7L,1UL,{-7L,0x8622L,0x4865L}};
        int *l_433 = &g_168;
        unsigned long long *l_434 = &g_350;
        int l_557 = 1L;
        int l_563 = (-8L);
        int l_585 = 0x092DDBB3L;
        int l_618 = 1L;
        struct S0 *l_697 = &g_533;
        for (l_6 = 24; (l_6 != 50); ++l_6)
        {
            int *l_417 = &g_12;
            int *l_418 = &g_181;
            short *l_419 = (void*)0;
            short *l_420 = &g_100;
            (*g_354) &= (safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s((g_136 = (g_136 != 0x78L)), 5UL)), 0x43EA2915L));
            (*g_354) = ((func_66((*g_354)) != ((*l_420) = (((*l_418) = (safe_add_func_int8_t_s_s(((g_169 = ((~(g_280.f4.f0 == l_6)) == ((*l_417) = func_17(l_415, (*g_278), (*g_278), l_416)))) >= 0UL), g_84))) & g_280.f4.f2))) && 0UL);
        }
        for (g_404 = 10; (g_404 < (-12)); g_404 = safe_sub_func_int16_t_s_s(g_404, 2))
        {
            unsigned l_432 = 4294967287UL;
            unsigned l_457 = 0x57F72F92L;
            struct S1 l_500 = {0xBF8E8E59L,-1L,0xD61C2E07L,1UL,{0x705E14E592116FD6LL,0xFE86L,0L}};
            int l_513 = (-1L);
            (*g_278) = (*g_278);
            for (g_140 = 0; (g_140 != 12); g_140 = safe_add_func_int8_t_s_s(g_140, 2))
            {
                int *l_425 = &g_168;
                int *l_426 = &g_355;
                int *l_427 = &g_12;
                int *l_428 = &g_355;
                unsigned l_482 = 0x8C04AD94L;
                const unsigned long long *l_511 = &g_140;
                unsigned *l_512 = &l_432;
                ++g_429;
                (*l_428) = ((func_34(l_432, (*l_415), ((*g_278) = (void*)0), l_433, l_433) >= 0x7C5DL) & g_168);
                if (l_432)
                {
                    int *l_436 = (void*)0;
                    int *l_437 = &l_435;
                    int *l_438 = &g_355;
                    int *l_439 = &g_355;
                    int *l_440 = &g_12;
                    int *l_441 = &g_181;
                    int *l_442 = &g_181;
                    int *l_443 = &g_181;
                    int *l_444 = &g_355;
                    int *l_445 = &g_355;
                    int *l_446 = (void*)0;
                    int *l_447 = (void*)0;
                    int *l_449 = &g_355;
                    int *l_450 = &g_168;
                    int l_451 = 1L;
                    int *l_452 = &l_435;
                    int *l_453 = (void*)0;
                    int *l_454 = &g_181;
                    int *l_455 = &l_451;
                    int *l_456 = &g_12;
                    const unsigned char l_462 = 0x77L;
                    unsigned l_486 = 1UL;
                    unsigned long long ***l_487 = (void*)0;
                    unsigned long long **l_489 = (void*)0;
                    unsigned long long ***l_488 = &l_489;
                    (*g_354) &= (g_44 ^ (g_282.f1 > (l_434 == l_434)));
                    l_457--;
                    for (g_12 = (-15); (g_12 != 7); g_12++)
                    {
                        short l_479 = 6L;
                        short *l_480 = &g_363.f1;
                        short *l_481 = &g_100;
                        unsigned short *l_485 = &g_165;
                        (*l_452) |= (*l_433);
                        if (l_462)
                            continue;
                        (*l_438) = ((safe_sub_func_uint8_t_u_u(((*g_354) | g_282.f1), ((safe_sub_func_uint8_t_u_u((((*l_426) ^ (safe_lshift_func_uint16_t_u_u(65535UL, (*l_437)))) <= ((*l_434) |= (safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((((*l_480) = (safe_rshift_func_uint16_t_u_u(l_479, g_12))) != (((*l_481) = l_479) > ((*l_485) = (l_482++)))), (*l_433))), l_486)), 6UL)))), 0x84L)) != 0x2071430AAFB5A1B6LL))) >= (*l_433));
                    }
                    (*l_488) = (void*)0;
                }
                else
                {
                    long long *l_501 = &g_136;
                    if (func_17((*g_278), (*g_278), &l_435, g_280))
                    {
                        const int **l_490 = &g_70;
                        if ((*g_354))
                            break;
                        (*g_354) |= 0x2C3C599FL;
                        (*g_278) = (*g_278);
                        (*l_490) = l_415;

                        ;
                    }
                    else
                    {
                        struct S0 *l_491 = &g_363;
                        (*l_491) = g_282;
                        (*g_278) = (*g_278);
                    }
                    for (g_429 = 7; (g_429 >= 16); g_429++)
                    {
                        unsigned char l_496 = 0x3EL;
                        short *l_499 = &g_100;
                        struct S0 *l_502 = &g_363;
                        (*g_354) ^= (!(-1L));
                        (*g_354) &= ((((l_496 || (safe_rshift_func_int16_t_s_u(((*l_499) = 1L), func_17((*g_278), l_433, (*g_278), l_500)))) & (l_501 == &g_136)) && g_280.f4.f0) & 1UL);
                        (*l_502) = g_280.f4;
                    }
                }
                (*l_425) |= ((251UL ^ (l_500.f1 >= g_189.f0)) == (safe_rshift_func_uint8_t_u_u((func_87(((*l_512) &= (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s(l_500.f4.f2, (*l_428))) >= ((safe_rshift_func_int8_t_s_s((-6L), ((g_280.f4.f2 && 6L) || (l_511 != (void*)0)))) & 5L)), (*g_354)))), &g_279, g_280, l_435, g_275) <= l_513), (*l_415))));
            }
        }

        ;
        for (g_363.f1 = (-25); (g_363.f1 > (-19)); g_363.f1 = safe_add_func_int8_t_s_s(g_363.f1, 3))
        {
            int *l_524 = (void*)0;
            short *l_525 = &g_363.f2;
            struct S1 l_605 = {-2L,1L,6L,1UL,{1L,1L,0x4C58L}};
            int l_643 = (-1L);
            int l_656 = 0xEB5CE8C2L;
            if ((*g_354))
                break;
            if ((safe_rshift_func_uint8_t_u_s((0xD3B4L >= ((*l_525) &= ((safe_lshift_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((g_12 |= ((func_66(l_435) != ((!((*g_354) = func_34((*l_433), (safe_mod_func_uint16_t_u_u((g_169 & func_87(g_363.f0, &g_279, g_280, g_350, g_84)), l_435)), &g_355, l_433, l_524))) ^ g_42)) >= l_448)), (-1L))) <= 247UL) < g_429), g_280.f4.f2)) < 0xCD57E038L))), 5)))
            {
                struct S1 *l_527 = (void*)0;
                struct S1 **l_526 = &l_527;
                struct S0 l_528 = {0x694CA984D77968AALL,0x93AFL,-1L};
                struct S0 *l_529 = &l_528;
                struct S0 *l_530 = (void*)0;
                struct S0 *l_531 = (void*)0;
                struct S0 *l_532 = &g_533;
                (*l_526) = &l_416;

                ;
                (*l_532) = (g_282 = ((*l_529) = l_528));
                for (g_355 = 27; (g_355 > (-6)); g_355--)
                {
                    int *l_536 = &l_448;
                    unsigned long long **l_540 = &l_434;
                    unsigned long long ***l_539 = &l_540;
                    unsigned long long **l_542 = &g_538;
                    unsigned long long ***l_541 = &l_542;
                    int *l_543 = (void*)0;
                    int *l_544 = &l_435;
                    int *l_545 = &g_168;
                    int *l_546 = &g_12;
                    int *l_547 = &g_12;
                    int *l_548 = &g_12;
                    int *l_549 = &g_168;
                    int *l_550 = &g_12;
                    int *l_551 = &l_435;
                    int *l_552 = &l_448;
                    int *l_553 = &l_435;
                    int *l_554 = (void*)0;
                    int *l_555 = &g_12;
                    int *l_556 = &g_12;
                    int *l_558 = &l_557;
                    int *l_559 = &g_181;
                    int *l_560 = &g_168;
                    int *l_561 = (void*)0;
                    int *l_562 = &l_435;
                    int *l_564 = &g_12;
                    int *l_565 = &g_181;
                    int *l_566 = &g_168;
                    int *l_567 = &g_12;
                    int *l_568 = &g_181;
                    int *l_569 = (void*)0;
                    int *l_570 = &g_12;
                    int *l_571 = &l_563;
                    int *l_572 = &l_435;
                    int *l_573 = &g_168;
                    int *l_574 = &l_435;
                    int *l_575 = &g_181;
                    int *l_576 = &l_435;
                    int *l_577 = &g_181;
                    int *l_578 = &g_168;
                    int *l_579 = &g_181;
                    int *l_580 = &g_168;
                    int *l_581 = &l_557;
                    int *l_582 = &l_448;
                    int *l_583 = &l_435;
                    int *l_584 = &l_448;
                    int *l_586 = &g_181;
                    int *l_587 = (void*)0;
                    int *l_588 = (void*)0;
                    int *l_589 = &g_181;
                    int *l_590 = (void*)0;
                    int *l_591 = &l_563;
                    int *l_592 = &g_181;
                    int *l_593 = &g_168;
                    int *l_594 = (void*)0;
                    int *l_595 = &g_181;
                    int *l_596 = &l_448;
                    char l_602 = 1L;
                    const int *l_603 = &g_12;
                    long long *l_606 = &g_282.f0;
                    char l_615 = 0x15L;
                    (*l_536) &= ((*l_433) = (*g_354));
                    (*l_433) = ((((g_537 = g_537) != ((*l_541) = ((*l_539) = &l_434))) < (&g_75 == &g_75)) | g_168);

                    ;
                    g_597--;
                    if ((safe_add_func_uint64_t_u_u(1UL, func_34(((((l_602 < g_280.f4.f0) || ((*l_606) = (func_66((*g_354)) || func_17(l_603, (*g_278), l_604, l_605)))) >= (*g_538)) || 0x5F3E33FAL), (*l_579), l_607, (*g_278), (*g_278)))))
                    {
                        ++l_608;
                        (*l_576) |= ((safe_rshift_func_int16_t_s_u(((*l_525) = ((*l_415) & ((1L >= l_528.f1) > (*l_604)))), g_168)) && l_615);
                    }
                    else
                    {
                        int l_616 = 0x7304A5D0L;
                        l_616 |= 0xDFCB4B0FL;
                    }
                }
            }
            else
            {
                int *l_619 = &l_618;
                int *l_620 = &g_355;
                int *l_621 = &g_355;
                int *l_622 = (void*)0;
                int *l_623 = &g_181;
                int *l_624 = &g_355;
                int *l_625 = &g_168;
                int *l_626 = (void*)0;
                int *l_627 = &l_585;
                int *l_628 = &g_12;
                int *l_629 = &l_585;
                int *l_630 = &l_435;
                int *l_631 = &g_355;
                int *l_632 = &l_435;
                int *l_633 = &l_557;
                int *l_634 = &g_12;
                int *l_635 = &l_435;
                int *l_636 = &g_181;
                int *l_637 = &l_557;
                int *l_638 = (void*)0;
                int *l_639 = &l_585;
                int *l_640 = &l_585;
                int *l_641 = &l_618;
                int *l_642 = &l_557;
                int *l_644 = &l_557;
                int *l_645 = &g_168;
                int *l_646 = &l_643;
                int *l_647 = (void*)0;
                int *l_648 = &g_168;
                int *l_649 = &l_643;
                int *l_650 = &g_12;
                int *l_651 = &l_643;
                int *l_652 = &g_355;
                int *l_653 = &l_435;
                int *l_654 = (void*)0;
                int *l_655 = &l_563;
                int *l_657 = &l_643;
                int *l_658 = (void*)0;
                int *l_659 = &g_355;
                int *l_660 = (void*)0;
                int *l_661 = (void*)0;
                int *l_662 = &l_656;
                int *l_663 = (void*)0;
                int *l_664 = &g_355;
                int *l_666 = &l_618;
                int *l_667 = &l_643;
                int *l_668 = &l_618;
                int *l_670 = &l_656;
                int *l_671 = (void*)0;
                int *l_672 = &l_563;
                int *l_673 = &l_585;
                int *l_674 = &l_557;
                int *l_675 = &l_656;
                int *l_676 = (void*)0;
                int *l_677 = &g_12;
                int *l_678 = &l_656;
                int *l_679 = (void*)0;
                int *l_680 = &l_656;
                int *l_681 = (void*)0;
                int *l_682 = &l_656;
                int *l_683 = &l_563;
                int *l_684 = (void*)0;
                struct S1 **l_690 = (void*)0;
                struct S1 *l_692 = &g_280;
                struct S1 **l_691 = &l_692;
                struct S1 *l_693 = &l_416;
                unsigned char *l_694 = &g_685;
                (*l_433) = (func_66(((l_617 != (((*g_354) ^ g_181) > func_17((*g_278), &l_585, (*g_278), g_280))) | (*l_607))) && g_280.f4.f2);
                (*g_354) |= ((*l_607) |= 0x6DB96E40L);
                ++g_685;
                if ((safe_lshift_func_uint8_t_u_u(((*l_694) = (((*l_691) = (void*)0) != l_693)), 1)))
                {
                    return g_280;
                }
                else
                {
                    unsigned char l_695 = 249UL;
                    if ((*g_354))
                    {
                        char *l_696 = &g_280.f1;
                        (*g_354) |= (((*l_696) = l_695) & g_282.f0);
                        return l_416;
                    }
                    else
                    {
                        if ((*g_354))
                            break;
                        return l_605;
                    }
                }
            }

            ;
        }
        (*l_697) = g_533;
    }
    else
    {
        (*l_607) ^= (safe_rshift_func_uint16_t_u_s(g_140, l_700));
        (*g_354) &= 0x4796A68EL;
        (*g_278) = &l_448;

        ;
        return g_280;


    }

    ;
    (*g_278) = (*g_278);
    return g_280;
}







static int func_2(unsigned p_3, char p_4, unsigned char p_5)
{
    unsigned l_54 = 0x8CD908FBL;
    int *l_286 = &g_168;
    int l_360 = 0xC1EEC739L;
    struct S1 l_370 = {0x36BD08AEL,0L,0x226BEB42L,0xB7L,{0x25FE38C59D00192FLL,8L,3L}};
    unsigned short l_371 = 0x5F2DL;
    const int *l_403 = &g_355;
    if (g_7)
    {
        int *l_10 = (void*)0;
        int *l_11 = &g_12;
        struct S0 l_379 = {0x29B9CDFA42261996LL,1L,0xFA1EL};
        (*l_11) = (safe_mod_func_uint64_t_u_u(0xEB4C8F0D0714AD38LL, g_7));
        if ((safe_lshift_func_uint8_t_u_u(1UL, 2)))
        {
            const int *l_41 = &g_42;
            const int **l_40 = &l_41;
            unsigned short *l_43 = &g_44;
            int l_45 = 3L;
            int *l_285 = &g_181;
            struct S1 l_356 = {1L,1L,1L,0xEDL,{0x21E8A32C819DA829LL,0x4EBAL,0xC640L}};
            struct S0 *l_361 = &g_282;
            struct S0 *l_362 = &g_363;
            l_360 |= (safe_mod_func_uint64_t_u_u(((*l_285) = (func_17(func_22(p_5, (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((-8L), func_34(((l_45 = ((*l_43) ^= (l_11 != ((*l_40) = &g_12)))) >= (g_7 != ((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(p_3, (safe_lshift_func_int8_t_s_s(func_52(l_54), (g_280.f1 || g_280.f0))))), p_4)) >= 4L))), p_4, l_285, l_286, l_286))) | 1UL) == p_4), p_5)), g_189.f0)), p_4)) && g_282.f2) || (*l_286)), g_280.f4.f0), g_354, l_10, l_356) ^ 0xC4D0L)), p_4));

            ;
            (*l_40) = (*g_278);

            ;
            (*l_361) = g_280.f4;
            (*l_362) = ((*l_361) = (*l_361));
        }
        else
        {
            int l_372 = 0xFC7C3E99L;
            unsigned char *l_373 = &g_280.f3;
            (*g_354) |= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_373) = (safe_lshift_func_int8_t_s_u((func_87(g_280.f0, &g_279, l_370, (l_371 && l_372), (((*l_373) = (*l_286)) && ((*l_373) = (func_52(l_372) | (safe_unary_minus_func_int8_t_s((((safe_sub_func_int8_t_s_s(((*l_286) ^ g_189.f0), p_4)) >= p_5) <= g_363.f1))))))) <= l_372), 5))), 5)), (*l_286)));
        }
        for (l_370.f2 = 0; (l_370.f2 < 27); l_370.f2 = safe_add_func_uint64_t_u_u(l_370.f2, 5))
        {
            struct S0 *l_380 = &g_282;
            int l_383 = 4L;
            const unsigned short *l_396 = (void*)0;
            const unsigned short **l_395 = &l_396;
            const unsigned short ***l_394 = &l_395;
            unsigned short *l_397 = &g_44;
            unsigned short *l_398 = (void*)0;
            int l_399 = 7L;
            short l_400 = 0xFD47L;
            unsigned short *l_401 = &l_371;
            (*l_380) = (l_379 = l_370.f4);
            (*l_11) = ((safe_add_func_uint64_t_u_u(func_52(l_383), (((*l_401) |= ((safe_rshift_func_uint8_t_u_u((p_4 <= (safe_mod_func_uint16_t_u_u((l_399 = (safe_lshift_func_uint8_t_u_u((p_5 ^= 0UL), (safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(0xDBL, (7UL && (((*g_354) = p_3) > g_280.f2)))), (((*l_397) ^= ((void*)0 != l_394)) || (*l_286))))))), p_3))), l_400)) == 0x911529E7L)) & p_3))) >= l_383);
            if ((*l_11))
                break;
            (*g_278) = (*g_278);
        }
    }
    else
    {
        const int **l_402 = &g_70;
        l_403 = ((*l_402) = (*g_278));

        ;
    }

    ;
    l_286 = ((*g_278) = (*g_278));

    ;
    l_360 |= p_3;
    return g_404;
}







static unsigned short func_17(const int * p_18, int * p_19, const int * p_20, struct S1 p_21)
{
    const struct S0 *l_358 = &g_282;
    const struct S0 **l_357 = &l_358;
    int l_359 = 0x6923628DL;
    (*l_357) = &g_189;

    ;
    return l_359;
}







static const int * func_22(unsigned char p_23, unsigned char p_24, unsigned char p_25)
{
    struct S0 *l_289 = &g_282;
    int l_290 = 0xEC57C898L;
    int *l_291 = (void*)0;
    int *l_292 = &g_181;
    unsigned long long *l_297 = &g_140;
    short ***l_302 = &g_300;
    unsigned long long l_307 = 0UL;
    long long *l_308 = &g_136;
    unsigned l_316 = 0xFC8F3135L;
    int l_327 = 0xA2D788D9L;
    char l_353 = 5L;
    (*l_289) = g_282;
    (*l_292) |= l_290;
    l_290 &= (safe_add_func_int64_t_s_s(((((*l_297) = p_25) || (safe_rshift_func_int16_t_s_u((((*l_308) = ((((((p_24 & (((*l_302) = g_300) != (void*)0)) < (g_275 < (((safe_lshift_func_int16_t_s_s((*l_292), 6)) < (*l_292)) && (safe_sub_func_int32_t_s_s(((l_307 & (*l_292)) | g_280.f2), 0x9FD6B0DCL))))) ^ p_24) & 0x2FDF43112E05E156LL) ^ g_280.f4.f2) >= 0x5062BB3BD2D33707LL)) & 0UL), p_24))) != 0xBBBDF83237CEF4F5LL), p_25));
    for (g_280.f3 = 0; (g_280.f3 != 28); g_280.f3++)
    {
        int l_313 = 0L;
        unsigned char *l_321 = (void*)0;
        unsigned char *l_322 = (void*)0;
        const int *l_323 = (void*)0;
        const int **l_324 = &l_323;
        const int **l_325 = &g_70;
        int *l_326 = &g_168;
        int l_344 = (-6L);
        if ((safe_sub_func_uint32_t_u_u(l_313, ((safe_add_func_int8_t_s_s(l_316, func_34((safe_lshift_func_uint8_t_u_s((p_24 < (1UL == (safe_mod_func_uint16_t_u_u(0x2D88L, (-4L))))), (l_313 == ((g_84 = p_23) > (((*l_325) = ((*l_324) = l_323)) != (void*)0))))), p_24, &l_290, l_326, (*g_278)))) | l_327))))
        {
            int *l_328 = &l_290;
            int *l_329 = &g_181;
            int *l_330 = &g_181;
            int *l_331 = &l_290;
            int *l_332 = &g_12;
            int *l_333 = &g_12;
            int *l_334 = &g_181;
            int *l_335 = &l_290;
            int *l_336 = &g_12;
            int *l_337 = (void*)0;
            int *l_338 = (void*)0;
            int *l_339 = &g_168;
            int *l_340 = &g_168;
            int *l_341 = &g_168;
            int *l_342 = &g_181;
            int *l_343 = &l_290;
            int *l_345 = &g_181;
            int *l_346 = (void*)0;
            int *l_347 = &g_12;
            int *l_348 = (void*)0;
            int *l_349 = &l_290;
            g_350--;
            (*l_343) &= ((*l_326) ^= func_52((l_353 == (*l_292))));
        }
        else
        {
            (*g_278) = (*g_278);
        }
    }
    return (*g_278);


}







static unsigned short func_34(short p_35, int p_36, int * p_37, int * p_38, int * p_39)
{
    int *l_287 = &g_168;
    int l_288 = 1L;
    l_287 = (*g_278);

    ;
    return l_288;
}







static char func_52(short p_53)
{
    unsigned short l_60 = 0x2510L;
    int l_77 = 0xB6BA8A7EL;
    unsigned short **l_98 = &g_75;
    short *l_99 = &g_100;
    int *l_104 = &l_77;
    int **l_103 = &l_104;
    int *l_284 = &l_77;
    for (p_53 = 20; (p_53 != 2); p_53 = safe_sub_func_int16_t_s_s(p_53, 9))
    {
        int *l_57 = &g_12;
        int *l_58 = &g_12;
        int *l_59 = &g_12;
        unsigned short ***l_76 = &g_74;
        int *l_78 = &g_12;
        int *l_79 = &l_77;
        int *l_80 = &g_12;
        int *l_81 = &g_12;
        int *l_82 = &g_12;
        int *l_83 = (void*)0;
        --l_60;
        (*l_76) = func_63(func_66(g_7), l_60);
        g_84++;
    }
    (*l_284) = func_87(g_7, func_93(l_98, ((func_66(p_53) >= ((*l_99) &= g_7)) && 1UL), ((safe_add_func_int64_t_s_s(((&l_77 == ((*l_103) = &l_77)) || p_53), p_53)) < p_53), p_53), g_280, l_60, g_169);
    return p_53;
}







static unsigned short ** func_63(unsigned p_64, unsigned p_65)
{
    unsigned l_71 = 4294967290UL;
    --l_71;
    return g_74;


}







static unsigned func_66(int p_67)
{
    const int *l_69 = &g_42;
    const int **l_68 = &l_69;
    g_70 = ((*l_68) = (void*)0);

    ;
    ;
    return p_67;
}







static int func_87(unsigned p_88, int ** p_89, struct S1 p_90, long long p_91, unsigned long long p_92)
{
    struct S0 *l_281 = &g_282;
    int l_283 = 0x052D8D88L;
    (*l_281) = g_189;
    (*g_278) = (*g_278);
    return l_283;
}







static int ** func_93(unsigned short ** p_94, char p_95, unsigned p_96, const unsigned p_97)
{
    int l_105 = 0x384C7B93L;
    int *l_106 = &l_105;
    int *l_107 = &g_12;
    int *l_108 = &l_105;
    int *l_109 = &g_12;
    int *l_110 = (void*)0;
    int l_111 = 0x0DD146F1L;
    int *l_112 = &l_111;
    int *l_113 = &g_12;
    int *l_114 = &l_105;
    int *l_115 = &l_105;
    int *l_116 = &g_12;
    int *l_117 = &g_12;
    int *l_118 = (void*)0;
    int *l_119 = (void*)0;
    int *l_120 = &l_105;
    int *l_121 = (void*)0;
    int *l_122 = &g_12;
    int *l_123 = &g_12;
    int *l_124 = &l_105;
    int *l_125 = &l_111;
    int *l_126 = (void*)0;
    int *l_127 = (void*)0;
    int *l_128 = (void*)0;
    int *l_129 = &l_111;
    int *l_130 = &l_105;
    int *l_131 = &g_12;
    int *l_132 = &g_12;
    int *l_133 = (void*)0;
    int *l_134 = &l_105;
    int *l_135 = (void*)0;
    int *l_137 = &l_111;
    int *l_138 = &l_111;
    int *l_139 = (void*)0;
    unsigned l_143 = 0xDBC33063L;
    int l_148 = 1L;
    int *l_191 = &l_111;
    int *l_192 = &g_168;
    int *l_193 = &l_111;
    int l_194 = 0L;
    int *l_195 = &g_12;
    int *l_196 = &l_194;
    int *l_197 = &l_105;
    int l_198 = 0x53E36E8DL;
    int *l_199 = (void*)0;
    int *l_200 = (void*)0;
    int l_201 = 0xF9289730L;
    int *l_202 = &l_198;
    int *l_203 = &l_201;
    int l_204 = 0xFD6E9342L;
    int *l_205 = &l_194;
    int l_206 = 0x616B5498L;
    int *l_207 = &g_168;
    int *l_208 = &l_201;
    int *l_209 = &g_12;
    int *l_210 = (void*)0;
    int *l_211 = &l_206;
    int *l_212 = (void*)0;
    int *l_213 = &g_168;
    int *l_214 = &g_181;
    int *l_215 = &g_168;
    int *l_216 = &g_12;
    int l_217 = 0x9916B1FFL;
    int *l_218 = &l_111;
    int *l_219 = &l_194;
    int *l_220 = &l_198;
    int *l_221 = &g_168;
    int *l_222 = &l_206;
    int l_223 = 0xBC11C586L;
    int l_224 = 0xD0B17AAFL;
    int l_225 = 0xE502840AL;
    int *l_226 = &l_206;
    int *l_227 = &g_168;
    int *l_228 = &l_201;
    int *l_229 = &g_181;
    int *l_230 = &l_206;
    int *l_231 = &l_105;
    int *l_232 = (void*)0;
    int *l_233 = (void*)0;
    int *l_234 = &l_105;
    int *l_235 = &l_111;
    int *l_236 = &l_111;
    int *l_237 = &l_223;
    int *l_238 = &g_181;
    int *l_239 = &l_105;
    int *l_240 = &g_181;
    int *l_241 = &l_224;
    int l_242 = (-1L);
    int l_243 = 0L;
    int l_244 = 0x2C2F114CL;
    int *l_245 = (void*)0;
    int *l_246 = &l_224;
    int *l_247 = &l_204;
    int *l_248 = &g_168;
    int *l_249 = &l_244;
    int *l_250 = &l_223;
    int *l_251 = &l_194;
    int *l_252 = &l_243;
    int *l_253 = &l_217;
    int *l_254 = (void*)0;
    int *l_255 = (void*)0;
    int *l_256 = &l_224;
    int *l_257 = &l_217;
    int *l_258 = &l_244;
    int *l_259 = (void*)0;
    int *l_260 = (void*)0;
    int *l_261 = &l_244;
    int *l_262 = &l_105;
    int *l_263 = &l_244;
    int *l_264 = &l_224;
    int *l_265 = (void*)0;
    int *l_266 = (void*)0;
    int l_267 = (-8L);
    int *l_268 = &l_243;
    int *l_269 = &l_242;
    int *l_270 = (void*)0;
    int *l_271 = &l_111;
    int *l_272 = (void*)0;
    int *l_273 = &l_194;
    int *l_274 = &l_204;
    --g_140;
    (*l_138) ^= ((*l_132) >= l_143);
    if ((~0xDA0115B5L))
    {
        short *l_145 = &g_100;
        short * const *l_144 = &l_145;
        short * const **l_146 = (void*)0;
        short * const **l_147 = (void*)0;
        l_144 = l_144;
    }
    else
    {
        const char l_164 = 0xE4L;
        int l_166 = 1L;
        int l_167 = 0x642B86B6L;
        int *l_170 = &g_12;
        int *l_171 = (void*)0;
        int *l_172 = &l_111;
        int *l_173 = &g_12;
        int *l_174 = (void*)0;
        int *l_175 = &l_105;
        int *l_176 = &l_111;
        int *l_177 = &g_168;
        int *l_178 = &l_105;
        int *l_179 = &l_167;
        int *l_180 = &l_167;
        int *l_182 = &l_111;
        int *l_183 = &l_166;
        unsigned l_184 = 0xA0A7086DL;
        struct S0 l_190 = {7L,0x5AABL,0x7417L};
        (*l_120) |= (((l_148 >= (safe_lshift_func_uint8_t_u_s(g_42, (((g_136 & p_97) | ((safe_add_func_uint16_t_u_u(65535UL, (p_96 && func_66((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(func_66(((*l_107) |= ((safe_add_func_uint64_t_u_u(func_66(((safe_sub_func_int16_t_s_s(p_96, (safe_lshift_func_int16_t_s_s(g_140, 10)))) < g_7)), (*l_112))) | p_96))))), g_100)), g_100)))))) > 5UL)) == 0L)))) || l_164) >= g_165);
        ++l_184;
        for (g_140 = 0; (g_140 == 57); g_140 = safe_add_func_int8_t_s_s(g_140, 3))
        {
            l_190 = g_189;
        }
    }
    g_275--;
    return g_278;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_189.f0, "g_189.f0", print_hash_value);
    transparent_crc(g_189.f1, "g_189.f1", print_hash_value);
    transparent_crc(g_189.f2, "g_189.f2", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_280.f0, "g_280.f0", print_hash_value);
    transparent_crc(g_280.f1, "g_280.f1", print_hash_value);
    transparent_crc(g_280.f2, "g_280.f2", print_hash_value);
    transparent_crc(g_280.f3, "g_280.f3", print_hash_value);
    transparent_crc(g_280.f4.f0, "g_280.f4.f0", print_hash_value);
    transparent_crc(g_280.f4.f1, "g_280.f4.f1", print_hash_value);
    transparent_crc(g_280.f4.f2, "g_280.f4.f2", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    transparent_crc(g_363.f1, "g_363.f1", print_hash_value);
    transparent_crc(g_363.f2, "g_363.f2", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_533.f0, "g_533.f0", print_hash_value);
    transparent_crc(g_533.f1, "g_533.f1", print_hash_value);
    transparent_crc(g_533.f2, "g_533.f2", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
