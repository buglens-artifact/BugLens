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
   signed f0 : 6;
};

struct S1 {
   short f0;
   unsigned f1;
};


static char g_5 = 0xF4L;
static int g_7 = (-6L);
static int g_14 = 0L;
static struct S0 g_48 = {-1};
static int *g_63 = &g_14;
static int *g_65 = (void*)0;
static int **g_64 = &g_65;
static struct S1 g_67 = {-7L,0x098B3027L};
static unsigned char g_78 = 0UL;
static struct S1 g_93 = {-6L,0x6A2A5EA8L};
static unsigned g_108 = 7UL;
static unsigned short g_122 = 4UL;
static unsigned short g_126 = 0UL;
static int g_134 = 0L;
static char g_149 = (-10L);
static struct S0 g_165 = {1};
static long long g_174 = 0L;
static char g_190 = 0x6DL;
static unsigned long long g_213 = 3UL;
static unsigned long long **g_273 = (void*)0;
static int g_297 = 0xE57DDAAEL;
static int *g_296 = &g_297;
static struct S0 *g_305 = &g_165;
static struct S0 **g_304 = &g_305;
static long long g_353 = 1L;
static unsigned char g_384 = 0xF7L;
static char *g_399 = &g_5;
static char **g_398 = &g_399;
static short **g_440 = (void*)0;
static short ***g_439 = &g_440;
static short *g_469 = &g_67.f0;
static long long *g_501 = &g_174;
static long long **g_500 = &g_501;
static int *g_550 = &g_14;
static int ***g_615 = &g_64;
static int ****g_614 = &g_615;
static short ****g_631 = (void*)0;
static short *****g_630 = &g_631;
static unsigned long long *g_662 = (void*)0;
static unsigned char *g_703 = &g_384;
static unsigned char **g_702 = &g_703;
static unsigned g_761 = 0UL;
static unsigned g_768 = 0UL;
static unsigned *g_772 = &g_761;
static struct S1 **g_803 = (void*)0;
static long long *g_810 = &g_353;



static int func_1(void);
static int func_8(int * p_9, char p_10, unsigned short p_11, struct S0 p_12);
static char func_15(int * p_16, int * p_17, unsigned long long p_18, unsigned short p_19, int p_20);
static int * func_23(unsigned short p_24);
static int * func_26(unsigned p_27, long long p_28, int * p_29);
static int * func_30(int p_31, int * p_32, int * p_33);
static int * func_36(int * p_37, int p_38);
static short func_43(unsigned p_44, struct S0 p_45, long long p_46, unsigned short p_47);
static unsigned func_53(struct S0 p_54, int ** p_55, struct S0 p_56, int ** p_57);
static int ** func_59(unsigned char p_60, char p_61);
static int func_1(void)
{
    unsigned l_4 = 0x4EE87F6FL;
    int *l_6 = &g_7;
    int *l_13 = &g_14;
    int *l_22 = &g_14;
    int **l_21 = &l_22;
    struct S0 l_691 = {-0};
    unsigned l_804 = 4294967295UL;
    long long *l_809 = &g_174;
    unsigned l_821 = 0x65B646B9L;
    unsigned short l_822 = 65530UL;
    struct S1 l_823 = {0xECD8L,0x16565D28L};
    short l_845 = 0x5BCBL;
    struct S1 *l_856 = (void*)0;
    int **l_861 = &l_13;
    if ((((((65529UL && ((((safe_sub_func_int16_t_s_s((l_4 = 0xABC1L), g_5)) < (((*l_6) = (+0x47706695L)) == func_8(l_13, func_15(((*l_21) = &g_14), func_23(g_5), ((0x70L == g_5) <= g_5), g_5, g_5), g_5, l_691))) ^ g_768) & l_804)) >= (*g_772)) != g_768) ^ 65535UL) == l_804))
    {
        unsigned long long *l_805 = &g_213;
        struct S0 *l_806 = &g_48;
        short ****l_811 = &g_439;
        int *l_813 = &g_7;
        short l_828 = 5L;
        long long l_832 = (-1L);
        int *l_836 = &g_297;
        (*l_22) = ((((*g_501) = (**g_500)) == 7L) != ((*l_805) = (*l_13)));
        (*l_806) = ((*g_305) = (**g_304));
        if (((safe_sub_func_int32_t_s_s((((*g_500) = l_809) != (g_810 = &g_353)), (&g_63 == (void*)0))) && ((*l_805) = (((*g_630) == l_811) == (*l_22)))))
        {
            int *l_812 = (void*)0;
            int l_814 = 0x7B61CBC4L;
            short l_817 = 0x26D0L;
            unsigned short *l_818 = (void*)0;
            unsigned short *l_819 = &g_126;
            int *l_820 = &g_14;
            struct S1 *l_824 = &l_823;
            l_813 = l_812;
            (*l_21) = (*l_21);
            (*g_305) = (*l_806);
            (*l_824) = l_823;
        }
        else
        {
            unsigned char **l_829 = &g_703;
            int *l_831 = &g_134;
            for (g_174 = 0; (g_174 != 13); g_174++)
            {
                long long l_827 = 0xC897FC717717CD6ELL;
                unsigned char ***l_830 = &l_829;
                char *l_833 = (void*)0;
                char *l_834 = &g_190;
                int *l_835 = &g_14;
                if (l_827)
                    break;
                if (l_828)
                    continue;
                (*l_830) = l_829;
                (*l_21) = l_831;
            }
        }
        (*l_21) = l_836;
    }
    else
    {
        int l_846 = 1L;
        unsigned short l_852 = 1UL;
        struct S1 l_853 = {0xA726L,1UL};
        long long l_859 = 0x9B6955554352FBD0LL;
        int **l_860 = &g_550;
        for (l_823.f1 = 0; (l_823.f1 < 21); ++l_823.f1)
        {
            int l_850 = (-4L);
            struct S0 l_851 = {0};
        }
    }
    return (*g_550);
}







static int func_8(int * p_9, char p_10, unsigned short p_11, struct S0 p_12)
{
    unsigned char l_694 = 253UL;
    int *l_696 = &g_297;
    long long **l_708 = &g_501;
    int *l_735 = &g_134;
    struct S0 l_739 = {-1};
    short ****l_749 = &g_439;
    int *l_798 = &g_14;
    for (g_122 = (-25); (g_122 > 27); g_122 = safe_add_func_uint64_t_u_u(g_122, 8))
    {
        char l_695 = 0x63L;
        unsigned char *l_698 = &g_78;
        unsigned char **l_697 = &l_698;
        char **l_719 = &g_399;
        int l_724 = 0xF28882A4L;
        int *l_731 = &g_134;
        struct S0 l_732 = {-0};
        int **l_799 = &g_65;
        struct S1 *l_801 = &g_67;
        struct S1 **l_800 = &l_801;
        struct S1 ***l_802 = &l_800;
    }
    return (*p_9);
}







static char func_15(int * p_16, int * p_17, unsigned long long p_18, unsigned short p_19, int p_20)
{
    int *l_645 = &g_134;
    struct S0 *l_648 = (void*)0;
    int *l_649 = &g_297;
    struct S0 l_650 = {-3};
    struct S1 l_651 = {-1L,0xA5D3D008L};
    short *****l_656 = &g_631;
    unsigned long long *l_660 = (void*)0;
    int ***l_687 = (void*)0;
    unsigned short l_690 = 0xB65AL;
    for (g_353 = (-15); (g_353 > (-14)); ++g_353)
    {
        int **l_646 = &l_645;
        struct S0 *l_647 = &g_165;
        (*l_646) = l_645;
        p_17 = &p_20;
        l_648 = l_647;
    }
    p_17 = l_649;
    if (func_53((*g_305), &l_649, l_650, &l_645))
    {
        struct S1 l_652 = {-1L,18446744073709551615UL};
        struct S1 *l_653 = &l_651;
        (*l_653) = (l_652 = l_651);
        return p_20;
    }
    else
    {
        unsigned l_665 = 1UL;
        unsigned l_675 = 0x6834A6A2L;
        for (p_18 = (-13); (p_18 == 1); ++p_18)
        {
            short ******l_657 = &g_630;
            unsigned long long **l_661 = &l_660;
            struct S1 *l_667 = &g_93;
            struct S1 **l_666 = &l_667;
            short l_668 = 0L;
            struct S0 l_669 = {-7};
            int *l_689 = &g_14;
            (*l_645) = (*p_16);
            (*g_550) = ((l_656 == ((*l_657) = &g_631)) & (((safe_lshift_func_uint8_t_u_s(((g_662 = ((*l_661) = l_660)) != &p_18), (*l_645))) < (safe_div_func_int8_t_s_s(l_665, p_20))) >= ((*g_501) = 0xE24FD4D226B88F64LL)));
            (*l_666) = (void*)0;
        }
    }
    return l_690;
}







static int * func_23(unsigned short p_24)
{
    int *l_25 = &g_14;
    int *l_565 = &g_134;
    short *****l_632 = (void*)0;
    struct S0 l_633 = {3};
    struct S1 l_635 = {0xE2A5L,18446744073709551606UL};
    if (((l_25 == (l_565 = func_26(p_24, p_24, func_30((safe_div_func_int16_t_s_s(g_5, 7L)), func_36(&g_14, (~p_24)), g_296)))) < p_24))
    {
        int ***l_568 = &g_64;
        struct S0 l_569 = {0};
        short ***l_595 = &g_440;
        int l_597 = 0xD2628988L;
        unsigned short l_616 = 65526UL;
        int *l_617 = &g_134;
        for (g_353 = 0; (g_353 <= 13); g_353 = safe_add_func_int16_t_s_s(g_353, 1))
        {
            char **l_573 = (void*)0;
            short ***l_596 = &g_440;
            int ****l_608 = (void*)0;
            struct S0 l_618 = {5};
            short ****l_627 = &g_439;
            short *****l_626 = &l_627;
            if (((void*)0 != l_568))
            {
                unsigned l_574 = 2UL;
                (*g_305) = l_569;
                for (g_108 = 27; (g_108 == 45); g_108 = safe_add_func_uint32_t_u_u(g_108, 4))
                {
                    char **l_572 = &g_399;
                    unsigned char *l_575 = &g_78;
                    unsigned short *l_576 = &g_122;
                    int l_579 = 0xF999A675L;
                    unsigned short *l_580 = &g_126;
                    int *l_581 = &g_134;
                    (*l_581) = ((((*l_25) = (l_572 == l_573)) != ((l_574 == (((*g_501) = 4L) <= (248UL ^ ((*l_575) = (~255UL))))) == ((*l_576) = g_165.f0))) != ((*l_580) = (safe_lshift_func_int8_t_s_u(((((l_579 = 0xD9849C49L) && (1UL > 7UL)) > l_574) || l_579), p_24))));
                }
            }
            else
            {
                long long l_598 = 1L;
                int ****l_613 = &l_568;
                struct S0 *l_619 = &g_48;
                for (g_297 = 9; (g_297 != 0); g_297 = safe_sub_func_int8_t_s_s(g_297, 3))
                {
                    int ****l_612 = &l_568;
                    for (g_93.f0 = 0; (g_93.f0 <= 3); g_93.f0++)
                    {
                        struct S0 l_586 = {-5};
                        unsigned short *l_599 = &g_126;
                        int *****l_609 = &l_608;
                        int ****l_611 = &l_568;
                        int *****l_610 = &l_611;
                        (*l_25) = (((*l_599) = func_43((*l_25), l_586, (safe_rshift_func_int16_t_s_s((p_24 > func_43(p_24, (*g_305), (safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((safe_add_func_int64_t_s_s((**g_500), (l_595 == l_596))), (*l_25))) | 0UL) & l_586.f0), (*l_25))), g_67.f1)), l_597)), l_598)) != 0x73FFL);
                        (*l_25) = ((((*l_25) != ((safe_rshift_func_uint16_t_u_s(1UL, 2)) <= (((0xB7129C4E886D1276LL != (l_586.f0 <= (safe_rshift_func_uint16_t_u_s(g_67.f1, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(65535UL, g_353)), ((l_612 = ((*l_610) = ((*l_609) = l_608))) != (g_614 = l_613)))))))) != g_67.f0) > (*g_550)))) <= l_616) == 0x88L);
                        return l_25;
                    }
                    return l_617;
                }
                l_569 = ((*l_619) = ((**g_304) = l_618));
            }
            if (p_24)
                continue;
            for (p_24 = 0; (p_24 > 6); p_24 = safe_add_func_uint8_t_u_u(p_24, 7))
            {
                long long l_624 = 1L;
                int l_625 = 0x3638F67EL;
                (*l_617) = ((safe_mod_func_uint32_t_u_u((~l_624), 2L)) != func_43(l_624, ((**g_304) = (**g_304)), (**g_500), ((l_625 = ((*g_550) = ((void*)0 == l_573))) & g_67.f0)));
            }
            (*l_565) = (((*l_626) = &l_596) == &g_439);
        }
        (*l_565) = (*l_565);
    }
    else
    {
        int *l_634 = &g_134;
        struct S1 *l_636 = &l_635;
        (*l_25) = (safe_add_func_int32_t_s_s(p_24, ((g_630 = g_630) == l_632)));
        l_565 = l_634;
        (*l_636) = l_635;
    }
    for (g_190 = 0; (g_190 < (-19)); --g_190)
    {
        int *l_639 = &g_297;
        int **l_640 = (void*)0;
        int **l_641 = &g_296;
        int **l_642 = &g_550;
        (*l_642) = ((*l_641) = l_639);
    }
    return l_25;
}







static int * func_26(unsigned p_27, long long p_28, int * p_29)
{
    char l_307 = (-1L);
    int **l_312 = &g_63;
    struct S0 l_325 = {-4};
    unsigned long long *l_328 = &g_213;
    char *l_337 = &g_190;
    struct S1 l_393 = {1L,2UL};
    unsigned l_502 = 0x250192E0L;
    int ***l_560 = &l_312;
    int ****l_559 = &l_560;
    int ***l_562 = &l_312;
    int ****l_561 = &l_562;
    int l_563 = 1L;
    char **l_564 = &g_399;
lbl_474:
    if ((((void*)0 == &g_305) < l_307))
    {
        struct S0 l_313 = {-5};
        unsigned long long *l_314 = &g_213;
        int ***l_315 = &l_312;
        int ****l_316 = &l_315;
        int ***l_318 = &l_312;
        int ****l_317 = &l_318;
        for (g_78 = 0; (g_78 >= 25); ++g_78)
        {
            return p_29;
        }
        if ((safe_mod_func_int16_t_s_s(((func_53(((**g_304) = (**g_304)), l_312, l_313, &g_65) && 8UL) == ((p_27 | ((*l_314) = p_28)) ^ (((*l_317) = ((*l_316) = l_315)) == &g_64))), g_149)))
        {
            unsigned l_319 = 0x7419D225L;
            (**l_318) = p_29;
        }
        else
        {
            (**g_304) = l_313;
        }
    }
    else
    {
        struct S0 *l_326 = (void*)0;
        struct S0 *l_327 = &g_48;
        for (p_27 = 0; (p_27 != 44); p_27 = safe_add_func_int32_t_s_s(p_27, 5))
        {
            int l_324 = 0x1C53814EL;
            (**l_312) = (-1L);
            for (g_67.f0 = (-15); (g_67.f0 <= 23); g_67.f0 = safe_add_func_uint8_t_u_u(g_67.f0, 4))
            {
                return &g_14;
            }
            if ((*p_29))
                break;
            l_324 = 0x261B05F7L;
        }
        (*l_327) = ((*g_305) = l_325);
    }
    if ((((*l_328) = 0UL) < func_43(g_67.f0, l_325, ((p_27 | g_78) || ((safe_rshift_func_int8_t_s_u(((*l_337) = (((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s(g_78, (0x5A2BDC60BFEEDA3DLL ^ (safe_sub_func_uint8_t_u_u(((**l_312) && (((1L ^ (**l_312)) > 0x2EL) ^ 0L)), 0xB6L))))), g_165.f0)) < 0x4022L) | (*p_29))), 5)) & 0x78EE22F686063F79LL)), g_5)))
    {
        unsigned short l_340 = 0UL;
        struct S0 l_354 = {3};
        unsigned long long l_369 = 0x6C420B683A1FF834LL;
        long long *l_370 = &g_353;
        int *l_385 = (void*)0;
        struct S1 *l_397 = (void*)0;
        int **l_423 = (void*)0;
        struct S0 **l_461 = &g_305;
        char *l_509 = &l_307;
        short l_510 = (-1L);
        unsigned short l_519 = 1UL;
        g_296 = (void*)0;
        if ((*g_63))
        {
            short *l_341 = (void*)0;
            short *l_342 = (void*)0;
            short *l_343 = &g_67.f0;
            long long *l_352 = &g_353;
            struct S0 l_355 = {2};
            long long l_356 = 0xA36B09E236CD4D35LL;
            struct S1 *l_357 = &g_93;
            char **l_400 = &g_399;
            struct S0 **l_417 = &g_305;
            int ***l_418 = &g_64;
            unsigned char *l_419 = &g_384;
            struct S0 l_420 = {6};
            int **l_470 = &g_65;
            unsigned char l_491 = 247UL;
            (*g_63) = (p_28 != (**l_312));
        }
        else
        {
            unsigned char l_506 = 0x2FL;
            unsigned l_511 = 18446744073709551612UL;
            struct S0 l_512 = {-1};
            struct S0 *l_513 = (void*)0;
            struct S0 *l_514 = (void*)0;
            unsigned long long l_539 = 0x727425572CC66FCCLL;
            int *l_547 = &g_14;
            if (func_43(((safe_sub_func_int8_t_s_s(func_43(l_506, (*g_305), ((l_510 = (safe_rshift_func_uint8_t_u_u((l_509 != ((*g_398) = l_509)), 1))) & (l_506 > (((*l_337) = (func_43(l_511, (l_354 = l_512), ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u(g_5, (**l_312))), 0xB8344C8DL)) >= p_28), l_511) == p_28)) > 0x58L))), p_28), (-3L))) < (**l_312)), (**g_304), l_519, p_28))
            {
                int *l_520 = &g_297;
                (*l_312) = l_520;
                return l_520;
            }
            else
            {
                unsigned l_532 = 0x7BF2D8E4L;
                int *l_546 = (void*)0;
                unsigned *l_553 = (void*)0;
                unsigned *l_554 = &g_108;
                unsigned *l_555 = (void*)0;
                unsigned *l_556 = &l_532;
                p_29 = func_30(((safe_unary_minus_func_int64_t_s((((0x8AL > ((*l_337) = p_27)) == p_28) >= (*g_399)))) > ((p_27 & p_27) <= (safe_mod_func_int32_t_s_s((*p_29), l_511)))), p_29, p_29);
                for (g_126 = 0; (g_126 >= 21); ++g_126)
                {
                    int *l_528 = (void*)0;
                    unsigned char *l_540 = &g_384;
                    (*l_312) = l_528;
                    if ((safe_unary_minus_func_int16_t_s((((*g_399) = (l_532 = (safe_rshift_func_uint8_t_u_u(p_27, 0)))) || (p_27 == ((safe_div_func_int64_t_s_s(0x9689C453166E1353LL, l_511)) || ((!(*g_469)) >= (safe_div_func_uint8_t_u_u(((*l_540) = func_43(l_539, (**l_461), ((**g_500) = ((*l_370) = (**g_500))), g_48.f0)), 0xBAL)))))))))
                    {
                        int *l_543 = &g_297;
                        (*p_29) = (safe_div_func_int16_t_s_s(((~g_108) >= ((*l_540) = p_27)), 0x8490L));
                        return l_543;
                    }
                    else
                    {
                        (*l_312) = &g_134;
                    }
                }
                for (l_369 = 0; (l_369 > 51); l_369 = safe_add_func_int64_t_s_s(l_369, 3))
                {
                    l_547 = l_546;
                    for (g_353 = 15; (g_353 <= (-24)); --g_353)
                    {
                        (*l_312) = l_547;
                        g_550 = p_29;
                    }
                }
                (*p_29) = ((safe_mod_func_uint32_t_u_u(((*l_556) = ((*l_554) = g_67.f0)), (safe_mod_func_uint64_t_u_u(((func_43(g_67.f1, (**l_461), p_27, p_28) != p_27) ^ p_28), (g_5 & 0x1C3FA0F31A7FE264LL))))) == 0xD2ADL);
            }
        }
    }
    else
    {
        if (l_325.f0)
            goto lbl_474;
        (*l_312) = p_29;
    }
    l_563 = (l_325.f0 = ((*g_550) = (((*l_559) = &g_64) != ((*l_561) = &l_312))));
    l_564 = &l_337;
    return p_29;
}







static int * func_30(int p_31, int * p_32, int * p_33)
{
    unsigned l_301 = 4UL;
    int l_306 = 0xFEA6F251L;
    for (g_108 = 8; (g_108 >= 53); g_108 = safe_add_func_int32_t_s_s(g_108, 3))
    {
        struct S0 *l_300 = &g_48;
        (*l_300) = g_48;
    }
    (*g_63) = l_301;
    g_296 = &p_31;
    l_306 = (safe_div_func_int16_t_s_s((g_304 == (void*)0), g_134));
    return &g_297;
}







static int * func_36(int * p_37, int p_38)
{
    int **l_39 = (void*)0;
    struct S0 l_58 = {-0};
    struct S1 *l_105 = &g_93;
    unsigned *l_107 = &g_108;
    unsigned char *l_181 = &g_78;
    unsigned char *l_184 = &g_78;
    short l_195 = 0x04EBL;
    unsigned l_201 = 0x12C03D88L;
    struct S0 **l_209 = (void*)0;
    struct S0 l_211 = {0};
    unsigned long long *l_229 = &g_213;
    int *l_295 = &g_134;
    if ((((*p_37) = (l_39 == &p_37)) && (safe_unary_minus_func_uint8_t_u(p_38))))
    {
        char l_74 = 0x74L;
        (*p_37) = (((safe_lshift_func_int16_t_s_u(func_43(g_5, g_48, p_38, (~(safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(0x7721CA7BL, (~(func_53(l_58, func_59(g_5, p_38), l_58, g_64) & p_38)))), 0x289665FEC6B039B7LL)))), l_74)) < p_38) > p_38);
    }
    else
    {
        unsigned char *l_77 = &g_78;
        int l_79 = 1L;
        int ***l_80 = (void*)0;
        int ***l_81 = (void*)0;
        int ***l_82 = (void*)0;
        int **l_83 = &g_63;
        struct S0 l_84 = {-6};
        int ***l_85 = &l_39;
        struct S1 *l_96 = &g_93;
        if (func_53(g_48, (l_83 = func_59((safe_div_func_uint8_t_u_u(((*l_77) = p_38), p_38)), l_79)), l_84, ((*l_85) = &g_65)))
        {
            unsigned char l_91 = 0x22L;
            struct S1 *l_95 = &g_67;
            unsigned l_102 = 0xF437236CL;
            struct S0 l_106 = {-3};
            for (g_67.f0 = (-6); (g_67.f0 >= 16); ++g_67.f0)
            {
                unsigned long long l_90 = 0x30C4096A604C9466LL;
                (**l_83) = (p_38 != (safe_div_func_int16_t_s_s(0xCA73L, l_90)));
                if ((*p_37))
                    continue;
                if (l_91)
                {
                    struct S1 *l_92 = &g_93;
                    struct S0 *l_94 = &l_58;
                    (*l_92) = g_67;
                    (*l_94) = l_84;
                    (*l_83) = &p_38;
                    (*p_37) = (p_38 | ((*p_37) > (*p_37)));
                }
                else
                {
                    (**l_83) = (g_67.f0 != func_43(l_90, g_48, p_38, p_38));
                    l_96 = l_95;
                    (**l_83) = (((safe_lshift_func_uint16_t_u_u(l_91, 12)) < p_38) < (*p_37));
                    if (l_91)
                        goto lbl_101;
                }
            }
lbl_101:
            (*g_63) = (65535UL & (safe_add_func_uint8_t_u_u(p_38, p_38)));
            (*p_37) = func_53(l_84, ((*l_85) = func_59(g_78, ((l_102 > (l_91 > (l_105 == &g_93))) != g_67.f0))), l_106, &g_65);
        }
        else
        {
            p_37 = &p_38;
        }
    }
    p_37 = (*g_64);
    if ((((*l_107) = g_93.f1) & (*g_63)))
    {
        int *l_109 = &g_14;
        struct S0 l_119 = {5};
        long long l_120 = 0x243A45608AF67B55LL;
        unsigned short *l_121 = &g_122;
        unsigned char *l_123 = (void*)0;
        unsigned char *l_124 = &g_78;
        unsigned short *l_125 = &g_126;
        struct S1 *l_136 = (void*)0;
        long long l_154 = 0L;
        int *l_159 = &g_14;
        (*g_64) = l_109;
        for (p_38 = 2; (p_38 == 10); ++p_38)
        {
            int *l_118 = (void*)0;
            for (g_78 = 28; (g_78 > 30); g_78 = safe_add_func_int32_t_s_s(g_78, 8))
            {
                (*g_65) = ((!0x40D7ECFCL) ^ p_38);
                p_37 = ((*g_64) = &p_38);
                for (g_14 = 0; (g_14 <= 7); ++g_14)
                {
                    for (g_67.f0 = 15; (g_67.f0 > (-2)); g_67.f0 = safe_sub_func_int32_t_s_s(g_67.f0, 9))
                    {
                        (*g_64) = l_118;
                    }
                }
                return l_118;
            }
        }
        (*g_63) = func_43((*l_109), l_119, (((*l_125) = ((((p_38 > ((l_120 <= (((*l_121) = p_38) & (((*l_124) = g_78) || (func_53(l_58, &l_109, l_119, &g_65) ^ 0xF173L)))) == 0L)) & 0x6E463D7759B496B1LL) == 8UL) | 0xEA2BDD4AL)) && p_38), g_14);
        for (p_38 = 0; (p_38 != 3); p_38++)
        {
            struct S1 l_155 = {0xE67FL,0xE1A6A6FFL};
            (*g_64) = (*g_64);
            for (g_108 = 0; (g_108 >= 41); g_108 = safe_add_func_int32_t_s_s(g_108, 6))
            {
                unsigned short l_133 = 0UL;
                int *l_135 = &g_14;
                if (((safe_div_func_uint32_t_u_u(p_38, l_133)) == g_134))
                {
                    struct S1 **l_137 = &l_105;
                    (*g_64) = l_135;
                    (*l_137) = l_136;
                }
                else
                {
                    int *l_140 = &g_134;
                    for (g_78 = 0; (g_78 > 47); g_78++)
                    {
                        (*g_65) = (~(g_122 | p_38));
                        return l_140;
                    }
                }
                if ((p_38 && (p_38 & p_38)))
                {
                    unsigned char l_147 = 248UL;
                    char *l_148 = &g_149;
                    if (((**g_64) = (18446744073709551615UL >= (1L <= (+((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 5)), p_38)) > (((*l_148) = (safe_add_func_uint16_t_u_u(0x8BCBL, l_147))) != p_38)) <= (((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_67.f1, ((*l_135) >= g_134))), g_5)) && l_147) <= l_154)) | p_38))))))
                    {
                        l_155 = g_67;
                    }
                    else
                    {
                        struct S0 **l_156 = (void*)0;
                        struct S0 *l_158 = &g_48;
                        struct S0 **l_157 = &l_158;
                        (*g_64) = (*g_64);
                        (*l_157) = (void*)0;
                        if ((*l_109))
                            break;
                    }
                    return (*g_64);
                }
                else
                {
                    (*g_64) = (void*)0;
                    (*g_64) = l_159;
                }
                if ((*l_109))
                    break;
            }
            (*g_64) = l_109;
        }
    }
    else
    {
        int ***l_164 = &g_64;
        struct S0 l_175 = {-0};
        struct S1 *l_177 = &g_67;
        unsigned long long *l_224 = (void*)0;
        char l_256 = (-9L);
        struct S1 **l_272 = (void*)0;
        unsigned char *l_282 = &g_78;
        unsigned char *l_284 = &g_78;
        short *l_294 = &l_195;
lbl_219:
        (*g_64) = (*g_64);
        if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(65535UL, func_53((g_48 = l_58), ((*l_164) = &p_37), g_165, &g_63))), 4)))
        {
            int l_171 = 5L;
            long long *l_172 = (void*)0;
            long long *l_173 = &g_174;
            unsigned char *l_176 = &g_78;
            unsigned char *l_183 = &g_78;
            char *l_196 = &g_190;
            for (g_134 = (-25); (g_134 > 18); g_134++)
            {
                int *l_168 = &g_134;
                return l_168;
            }
            if ((p_38 | ((safe_mod_func_int64_t_s_s(func_43((l_171 ^ ((*l_173) = p_38)), l_175, l_171, ((l_176 != &g_78) == ((-1L) != (18446744073709551608UL & g_48.f0)))), g_108)) >= 0UL)))
            {
                int *l_179 = &g_14;
                unsigned char **l_182 = &l_176;
                char *l_189 = &g_190;
                if (l_171)
                {
                    struct S1 **l_178 = &l_177;
                    (*l_178) = l_177;
                    return l_179;
                }
                else
                {
                    struct S0 *l_180 = &g_48;
                    l_58 = ((*l_180) = g_165);
                }
                (**l_164) = (*g_64);
                (*g_63) = (4L == (((((*l_182) = l_181) != (l_184 = l_183)) >= 1UL) >= (safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_38, 0)), ((*l_189) = (g_149 = p_38))))));
            }
            else
            {
                (**l_164) = (**l_164);
            }
            l_201 = (((l_171 <= p_38) ^ l_171) && (safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_u(l_195, 2)) >= ((*l_196) = p_38)) < 0L), (safe_mod_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s((1L == ((g_122 && func_53(g_165, &g_65, l_175, (*l_164))) ^ l_171)), 12)) || g_93.f0) <= 0x4CL), g_134)))));
        }
        else
        {
            struct S0 l_220 = {-5};
            int l_242 = 0xB79DC5B5L;
            int l_245 = 0xE3FAC453L;
            struct S0 l_247 = {-6};
            struct S0 l_258 = {-4};
            unsigned short *l_269 = &g_122;
            struct S0 *l_271 = (void*)0;
            struct S0 **l_270 = &l_271;
            if ((l_105 != &g_93))
            {
                struct S0 l_210 = {4};
                for (g_134 = 0; (g_134 < (-29)); --g_134)
                {
                    unsigned long long *l_212 = &g_213;
                    short *l_214 = &l_195;
                    (*g_63) = (safe_add_func_int16_t_s_s(((*l_214) = ((0xF9961058A052F6DDLL < g_14) != ((*l_212) = (func_43((0x6795E0524414FC2ALL ^ (0x6FF6ADF050D5A8CBLL ^ ((-6L) == (!(safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(g_108)), (l_209 == (void*)0))))))), (l_211 = l_210), g_122, g_165.f0) | p_38)))), p_38));
                }
            }
            else
            {
                for (g_134 = 0; (g_134 != 20); ++g_134)
                {
                    (*g_64) = (*g_64);
                }
                for (p_38 = 0; (p_38 != (-3)); --p_38)
                {
                    (**l_164) = (void*)0;
                    if (g_14)
                        goto lbl_219;
                }
            }
            l_220 = l_175;
            if (func_53((l_220 = l_220), func_59(p_38, g_93.f1), l_175, &p_37))
            {
                unsigned l_221 = 18446744073709551607UL;
                unsigned long long *l_227 = (void*)0;
                unsigned long long **l_228 = &l_227;
                int l_230 = 4L;
                p_38 = p_38;
                (**l_164) = (*g_64);
                (*g_63) = ((l_221 = 1L) != (p_38 <= (((*g_63) == ((void*)0 == l_224)) < (safe_add_func_uint8_t_u_u(((((*l_228) = l_227) == l_229) <= ((l_230 ^ (safe_add_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((((*l_164) = &p_37) != l_39) <= p_38), g_14)) >= l_220.f0), 1L))) > 0xB0L)), g_174)))));
                (*g_63) = (p_38 == (~0xE767L));
            }
            else
            {
                struct S0 *l_236 = &g_48;
                struct S0 **l_235 = &l_236;
                struct S0 *l_246 = &g_165;
                int l_257 = 0L;
                (*l_235) = &l_220;
                p_37 = &p_38;
                for (g_174 = 4; (g_174 >= (-12)); g_174 = safe_sub_func_uint32_t_u_u(g_174, 9))
                {
                    for (l_201 = 0; (l_201 >= 54); l_201 = safe_add_func_uint32_t_u_u(l_201, 1))
                    {
                        struct S1 **l_241 = &l_105;
                        (*g_63) = ((((*l_241) = l_177) == (void*)0) >= (-5L));
                    }
                }
                (**g_64) = func_53(((**l_235) = l_220), func_59(l_242, (safe_rshift_func_uint8_t_u_s(func_43((l_245 = (g_48.f0 <= 0x2152D3ADL)), (l_247 = ((*l_246) = g_165)), l_242, (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((*l_107) = ((3L < ((safe_rshift_func_uint16_t_u_u((func_43(((safe_div_func_int16_t_s_s(((1L & (**g_64)) | l_256), g_78)) & l_257), g_48, g_93.f0, g_93.f1) && (-9L)), p_38)) >= p_38)) ^ (-2L))), (***l_164))), g_149))), p_38))), l_258, &g_65);
            }
            p_38 = (safe_sub_func_uint32_t_u_u(p_38, ((g_108 && (safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(0x81L, (safe_sub_func_uint16_t_u_u(((*l_269) = (~g_78)), func_53(l_220, l_39, g_165, func_59((((*l_270) = &g_48) != (void*)0), g_67.f0)))))), l_220.f0)), (-9L)))) != g_165.f0)));
        }
        l_105 = (void*)0;
        if (l_201)
        {
            unsigned char *l_283 = &g_78;
            int l_285 = 2L;
            char *l_286 = (void*)0;
            (*g_63) = (g_273 != (void*)0);
            (*g_63) = ((safe_sub_func_uint32_t_u_u((p_38 | p_38), (&p_38 == &p_38))) | (((g_190 < (g_149 = (safe_add_func_uint64_t_u_u(g_149, ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((g_67.f0 <= (l_282 != (l_284 = (l_283 = l_184)))), l_285)) & p_38), g_108)) == l_285))))) | g_67.f1) && 0x3429L));
            (*g_64) = (*g_64);
            (*g_64) = (void*)0;
        }
        else
        {
            struct S0 l_287 = {1};
            int *l_288 = &g_134;
            short *l_293 = &g_67.f0;
            (*g_63) = (l_256 || (((p_38 || (func_43(g_149, (g_48 = l_287), (((void*)0 != l_288) ^ ((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((l_293 == l_294), g_108)), p_38)) | p_38)), p_38) || p_38)) >= 1L) == (*g_63)));
        }
    }
    return l_295;
}







static short func_43(unsigned p_44, struct S0 p_45, long long p_46, unsigned short p_47)
{
    struct S0 *l_72 = (void*)0;
    struct S0 **l_71 = &l_72;
    int l_73 = (-1L);
    (*l_71) = &g_48;
    return l_73;
}







static unsigned func_53(struct S0 p_54, int ** p_55, struct S0 p_56, int ** p_57)
{
    struct S1 l_66 = {-9L,0x74CB070FL};
    struct S1 *l_68 = (void*)0;
    struct S1 *l_69 = (void*)0;
    struct S1 *l_70 = &g_67;
    l_66 = l_66;
    (*l_70) = g_67;
    return g_67.f1;
}







static int ** func_59(unsigned char p_60, char p_61)
{
    int *l_62 = &g_14;
    (*l_62) = g_48.f0;
    g_63 = l_62;
    (*l_62) = (*g_63);
    return &g_63;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_48.f0, "g_48.f0", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_67.f1, "g_67.f1", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_165.f0, "g_165.f0", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    transparent_crc(g_297, "g_297", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
