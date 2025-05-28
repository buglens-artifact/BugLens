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
   volatile int f0;
   unsigned f1 : 4;
};

union U1 {
   unsigned f0;
};

union U2 {
   char f0;
   volatile unsigned f1 : 23;
   char * f2;
   unsigned f3;
   char f4;
};

union U3 {
   unsigned f0;
   volatile char * f1;
};


static char g_28 = 0L;
static unsigned char g_30 = 2UL;
static int g_56 = (-8L);
static unsigned g_67 = 0x37280DDAL;
static int g_69 = 9L;
static struct S0 g_77 = {-7L,1};
static struct S0 *g_79 = &g_77;
static int *g_88 = &g_56;
static volatile union U2 *g_104 = (void*)0;
static char g_109 = 0L;
static union U1 g_116 = {1UL};
static union U3 g_126 = {18446744073709551615UL};
static unsigned short g_152 = 0x25C7L;
static union U2 g_158 = {0L};
static union U3 *g_165 = &g_126;
static union U3 **g_164 = &g_165;
static int g_184 = 3L;
static int g_186 = 0x040387E0L;
static char g_227 = 0L;
static char *g_226 = &g_227;
static int g_237 = (-1L);
static short g_254 = 0xC8C0L;
static int g_329 = 0x7626E11BL;
static volatile unsigned short g_341 = 0x56C0L;
static volatile unsigned short *g_340 = &g_341;
static volatile unsigned short **g_339 = &g_340;
static volatile unsigned short ***g_338 = &g_339;
static unsigned short g_441 = 0UL;
static volatile unsigned g_450 = 1UL;
static volatile struct S0 g_490 = {-1L,2};
static struct S0 g_508 = {0x14E49BF2L,1};



static union U3 func_1(void);
static struct S0 func_2(union U1 p_3, short p_4);
static union U1 func_5(unsigned char p_6, unsigned char p_7, char * p_8, unsigned p_9);
static int func_10(int p_11, char * p_12, unsigned short p_13, char * p_14);
static int func_17(char * p_18);
static char * func_19(char * p_20, union U1 p_21, char p_22);
static char * func_23(unsigned char p_24, int p_25, unsigned char p_26);
static int func_31(char * p_32, union U1 p_33, char * p_34);
static char * func_35(char p_36, char * p_37, char * p_38, short p_39);
static char func_40(unsigned short p_41);
static union U3 func_1(void)
{
    unsigned l_27 = 4294967295UL;
    unsigned char *l_29 = &g_30;
    union U1 l_190 = {4294967292UL};
    int *l_236 = &g_237;
    struct S0 *l_511 = &g_508;
    int *l_512 = &g_184;
    int *l_513 = (void*)0;
    int **l_514 = (void*)0;
    union U3 l_515 = {3UL};
    (*l_511) = func_2(func_5((func_10(((*l_236) = ((safe_sub_func_int8_t_s_s((func_17(func_19(func_23(l_27, g_28, ((*l_29) = g_28)), l_190, l_27)) >= l_27), g_227)) & 0x7A06FA74L)), &g_227, g_227, l_29) || l_27), g_152, l_29, g_227), g_126.f0);


    (*l_512) &= l_27;
    g_88 = l_513;

    ;
    return l_515;


    }







static struct S0 func_2(union U1 p_3, short p_4)
{
    union U3 *l_486 = &g_126;
    int l_493 = 6L;
    short *l_494 = &g_254;
    int *l_505 = &g_184;
    for (g_109 = 0; (g_109 == 19); g_109 = safe_add_func_uint16_t_u_u(g_109, 7))
    {
        unsigned *l_484 = &g_116.f0;
        unsigned **l_483 = &l_484;
        unsigned ***l_482 = &l_483;
        int **l_485 = &g_88;
        union U3 **l_487 = &l_486;
        union U3 *l_489 = &g_126;
        union U3 **l_488 = &l_489;
        (*l_482) = (void*)0;

        ;
        (*l_485) = &g_184;

        ;
        (*l_488) = ((*l_487) = ((*g_164) = l_486));
        (*g_79) = g_490;
    }
    if (((safe_add_func_int16_t_s_s(l_493, l_493)) > (((*l_494) = l_493) & l_493)))
    {
        unsigned char l_495 = 0x2CL;
        int *l_496 = &g_69;
        int *l_497 = &g_184;
        int **l_498 = &l_497;
        (*l_496) &= l_495;
        (*l_498) = (g_88 = l_497);

        ;
        (*l_497) &= (-3L);
    }
    else
    {
        int *l_504 = &l_493;
        for (g_237 = 0; (g_237 >= (-10)); g_237 = safe_sub_func_int8_t_s_s(g_237, 2))
        {
            int *l_501 = &g_184;
            (*l_501) ^= p_3.f0;
        }
        (*l_504) &= (safe_add_func_int32_t_s_s(0x815A9018L, 0UL));
    }
    (*l_505) |= (p_4 != p_4);
    if (((safe_add_func_uint8_t_u_u((2UL || ((*l_505) ^= p_3.f0)), func_31(&g_28, g_116, &g_227))) || (!p_4)))
    {
        return g_508;
    }
    else
    {
        int **l_509 = (void*)0;
        int **l_510 = &g_88;
        (*l_510) = &l_493;

        ;
    }

    ;
    return (*g_79);


}







static union U1 func_5(unsigned char p_6, unsigned char p_7, char * p_8, unsigned p_9)
{
    unsigned l_239 = 1UL;
    int *l_240 = &g_56;
    char *l_244 = &g_109;
    unsigned char *l_250 = &g_30;
    unsigned char **l_249 = &l_250;
    union U1 *l_308 = (void*)0;
    int *l_397 = &g_237;
    if (((*l_240) = (g_184 = l_239)))
    {
        unsigned l_241 = 4294967295UL;
        int *l_257 = &g_184;
        union U3 *l_264 = &g_126;
        struct S0 *l_287 = &g_77;
        unsigned l_312 = 1UL;
        (*l_240) = p_6;
        l_241 ^= 0L;
        for (l_239 = 0; (l_239 != 60); l_239 = safe_add_func_uint32_t_u_u(l_239, 2))
        {
            unsigned short *l_251 = (void*)0;
            unsigned short *l_252 = (void*)0;
            unsigned short *l_253 = &g_152;
            int *l_255 = (void*)0;
            int *l_256 = &g_69;
            union U2 *l_266 = &g_158;
            union U2 **l_265 = &l_266;
            char *l_276 = &g_227;
            unsigned short l_277 = 1UL;
            union U1 l_278 = {0x0B94B682L};
            struct S0 *l_285 = &g_77;
            (*l_256) = (((*l_240) = l_241) == func_10(g_109, l_244, (g_254 &= ((*l_253) = (safe_add_func_uint32_t_u_u((p_6 & (safe_mod_func_int16_t_s_s(p_7, g_227))), (l_249 != (void*)0))))), p_8));
            if (((*l_240) = 2L))
            {
                int l_269 = 1L;
                int l_274 = 0x278E0849L;
                (*l_256) = 1L;
                if ((func_17(p_8) & 0xBAL))
                {
                    int **l_258 = &l_256;
                    (*l_258) = l_257;

                    ;
                    if (g_186)
                    {
                        (*l_257) = 0x01647904L;
                    }
                    else
                    {
                        int *l_259 = (void*)0;
                        l_259 = (*l_258);

                        ;
                    }
                }
                else
                {
                    union U2 **l_268 = &l_266;
                    int l_275 = (-6L);
                    if (p_9)
                        break;
                    for (g_237 = 0; (g_237 > (-9)); --g_237)
                    {
                        union U2 ***l_267 = &l_265;
                        if (g_77.f1)
                            break;
                        l_269 |= (((p_7 != (safe_mod_func_int32_t_s_s((p_6 <= (p_9 > (((void*)0 != l_264) >= (((*l_267) = l_265) != l_268)))), (*l_240)))) >= ((-10L) <= (*l_256))) <= (*p_8));
                        (*l_256) = (safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((g_186 <= (g_237 <= l_274)), l_275)) != ((*l_257) = func_31(func_35((*l_257), func_35(func_31(p_8, g_116, func_35((p_6 != 0x45B6L), &g_227, p_8, l_275)), l_276, &g_28, l_277), p_8, p_9), l_278, &g_28))), p_9));

                        ;
                    }
                }


                ;
            }
            else
            {
                int **l_279 = &g_88;
                struct S0 **l_286 = &g_79;
                struct S0 **l_288 = (void*)0;
                struct S0 **l_289 = (void*)0;
                struct S0 **l_290 = &l_287;
                unsigned *l_293 = &g_158.f3;
                union U1 *l_307 = (void*)0;
                (*l_279) = (void*)0;

                ;
                if ((p_7 >= ((safe_unary_minus_func_uint8_t_u(g_227)) & (((*l_257) ^ (!g_116.f0)) && (((safe_mul_func_uint8_t_u_u(p_6, ((((*l_286) = l_285) != ((*l_290) = l_287)) <= ((p_9 & ((*l_293) = (safe_sub_func_int32_t_s_s(((p_6 <= p_6) | g_109), (-7L))))) < 1UL)))) <= p_9) < g_116.f0)))))
                {
                    int l_302 = 4L;
                    char *l_309 = (void*)0;
                    char *l_310 = (void*)0;
                    char *l_311 = &g_28;
                    (*l_240) = ((*l_257) = p_6);
                    g_77.f0 ^= (safe_add_func_int16_t_s_s(((g_152 && (((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_17(&g_227), l_302)), (((g_254 & (0L | (((*l_311) |= ((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((l_307 != l_308) | ((*l_250) = ((l_302 ^ g_152) && 0xB7E62A80L))), p_9)), l_302)) | p_9)) != p_9))) == p_7) & p_6))) == l_312), 6)) < g_77.f1) != 6L)) && g_237), 65528UL));


                    g_88 = &g_184;

                    ;
                    if ((*l_240))
                        continue;
                }
                else
                {
                    int *l_313 = &g_186;
                    (*l_279) = l_313;

                    ;
                }

                ;
                if (((safe_sub_func_uint8_t_u_u((*l_240), (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(0xE24AL, (**l_279))), 6)))) != (*l_240)))
                {
                    return g_116;

                                    }
                else
                {
                    (*l_287) = (*l_285);
                    (**l_279) |= (*l_256);
                }
            }

            ;
        }


        (*l_287) = (*g_79);
    }
    else
    {
        short l_326 = (-1L);
        int *l_333 = &g_69;
        char *l_353 = (void*)0;
        struct S0 *l_364 = &g_77;
        union U1 l_400 = {0xED0B2EA2L};
        union U1 *l_414 = &l_400;
        int **l_478 = (void*)0;
        int **l_479 = &l_333;
        if (((*l_240) = (g_109 || g_227)))
        {
            (*l_240) = (*l_240);
            g_186 = ((*l_240) = p_9);
        }
        else
        {
            char **l_325 = &g_226;
            int l_330 = 0x2C1C6760L;
            short l_348 = 0x107AL;
            unsigned **l_361 = (void*)0;
            union U1 l_363 = {8UL};
            int *l_396 = (void*)0;
            int **l_401 = &g_88;
            int **l_410 = &l_333;
            int ***l_411 = &l_401;
            unsigned char **l_451 = &l_250;
            if ((*l_240))
            {
                char **l_324 = (void*)0;
                int *l_327 = &g_237;
                int *l_328 = &g_329;
                unsigned char **l_335 = &l_250;
                unsigned short **l_337 = (void*)0;
                unsigned short ***l_336 = &l_337;
                int l_345 = 0xC9C791ECL;
                if (((safe_add_func_uint32_t_u_u((((*l_244) = (g_28 &= func_10(((*l_328) = ((*l_327) = (p_7 <= (((g_152 | (safe_rshift_func_int8_t_s_u(func_31(&g_227, g_116, &g_28), g_30))) != ((*g_226) = (!((l_324 == l_325) & g_67)))) <= l_326)))), &g_109, l_326, &g_109))) & g_30), l_330)) && p_7))
                {
                    for (g_28 = 0; (g_28 < 8); g_28++)
                    {
                        int **l_334 = &l_240;
                        (*l_334) = l_333;

                        ;
                        (*g_88) ^= (((void*)0 == l_335) == ((**l_249) = (l_336 == g_338)));
                    }

                    ;
                }
                else
                {
                    int **l_342 = &l_333;
                    (*l_342) = &l_330;

                    ;
                    if ((((g_67 < ((func_10((*l_333), p_8, p_9, p_8) ^ ((0xF161L != (p_6 & (l_345 = (safe_add_func_uint8_t_u_u(p_9, g_77.f1))))) & g_254)) ^ (*g_88))) | 0x7B818E0EL) & 1L))
                    {
                        (*l_342) = (void*)0;

                        ;
                    }
                    else
                    {
                        struct S0 **l_352 = (void*)0;
                        struct S0 ***l_351 = &l_352;
                        int l_354 = 4L;
                        l_354 ^= ((safe_sub_func_uint16_t_u_u((&g_158 == (void*)0), l_348)) >= (~(p_6 || ((**l_342) >= (safe_lshift_func_int16_t_s_s(((+((((*l_351) = &g_79) != &g_79) || ((*g_88) >= func_10(func_10(g_116.f0, l_353, p_6, &g_227), p_8, g_227, &g_109)))) < 0x25A8L), 15))))));

                        ;
                    }

                    ;
                    (*l_342) = &l_330;

                    ;
                    (*l_342) = &g_56;

                    ;
                }

                ;
                ;
                ;
                if (l_330)
                {
                    int *l_355 = (void*)0;
                    int *l_356 = &g_69;
                    (*l_356) &= (*g_88);
                    (*g_88) ^= 0x688D3ECBL;
                }
                else
                {
                    unsigned **l_362 = (void*)0;
                    if (l_345)
                    {
                        int **l_357 = &l_333;
                        union U1 l_358 = {4294967295UL};
                        (*l_357) = &l_345;

                        ;
                        return l_358;

                                            }
                    else
                    {
                        int **l_360 = &g_88;
                        int ***l_359 = &l_360;
                        (*l_359) = &g_88;
                        (***l_359) = (-1L);
                    }
                    l_362 = l_361;
                    return l_363;

                                    }
                g_79 = l_364;
                (*g_88) |= ((!l_345) == l_345);
            }
            else
            {
                char *l_377 = (void*)0;
                int l_378 = 3L;
                unsigned short *l_379 = &g_152;
                (*l_240) = (g_69 <= (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(254UL, 2)), (*p_8))));
                if (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((*g_226), 5)), ((*l_379) &= (p_9 == func_10((func_31(p_8, l_363, func_35((safe_mod_func_int8_t_s_s(((*l_333) & ((*l_333) == func_10(g_30, func_19((l_244 = l_244), g_116, l_330), p_9, p_8))), g_67)), &g_28, &g_227, l_330)) != p_6), l_377, l_378, &g_28))))), (*p_8))) > 0xEBL))
                {
                    union U1 l_382 = {0x526F5999L};
                    union U2 *l_385 = &g_158;
                    for (g_67 = (-28); (g_67 < 23); ++g_67)
                    {
                        (*l_333) = (*g_88);
                        if (p_7)
                            continue;
                        (*l_240) = l_378;
                        return l_382;

                                            }
                    for (g_30 = 0; (g_30 != 3); g_30 = safe_add_func_int32_t_s_s(g_30, 1))
                    {
                        int *l_398 = (void*)0;
                        int *l_399 = &l_378;
                        (*l_399) ^= ((*l_333) = ((l_385 != (void*)0) == (safe_lshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(4294967291UL, p_9)) || ((*g_88) &= l_382.f0)) ^ (safe_sub_func_int8_t_s_s(0L, (safe_lshift_func_int16_t_s_u(p_9, 0))))) == (&g_329 == (l_397 = l_396))), 0x20EAL)), g_237))));

                        ;
                    }

                    ;
                    return l_382;

                                    }
                else
                {
                    return l_400;

                                    }
            }

            ;
            ;
            ;
            (*l_401) = (void*)0;

            ;
            if ((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_28, p_9)), (*l_240))), 0)) && (**g_339)), (((**l_325) = (*p_8)) < ((p_6 | (l_410 != ((*l_411) = l_410))) > p_9)))))
            {
                unsigned short *l_433 = &g_152;
                unsigned l_434 = 18446744073709551607UL;
                char *l_435 = &g_28;
                for (g_67 = 0; (g_67 == 40); ++g_67)
                {
                    (*g_164) = (*g_164);
                    l_414 = &l_400;
                }
                if (func_31(func_35((p_9 || (safe_rshift_func_uint16_t_u_s(((*l_433) = (safe_mod_func_int8_t_s_s((func_10(g_184, l_244, (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((0x05E369B5L < (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_6, (-10L))), (+(+g_67))))) | ((*l_433) = (((safe_sub_func_uint32_t_u_u(0xDCD17E70L, 0xF41F3DB6L)) ^ p_6) >= (*l_333)))), g_77.f1)) < 0x6EL) && (*l_240)), 6)), l_434)), p_8) != 1UL), (*l_333)))), p_9))), l_353, l_435, p_7), l_363, (*l_325)))
                {
                    short l_447 = 0x1152L;
                    int l_449 = 3L;
                    g_441 &= ((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((void*)0 == &g_339) <= g_30), 14)), (l_434 ^ (((*l_333) |= (safe_unary_minus_func_uint16_t_u(p_6))) < 0xB75FD95FL)))) > 0xDADDL);
                    for (g_69 = (-21); (g_69 != 28); g_69 = safe_add_func_int8_t_s_s(g_69, 1))
                    {
                        unsigned short *l_446 = &g_441;
                        int *l_448 = &g_184;
                        (*g_88) = (*g_88);
                        (*l_448) = ((*g_88) = (safe_add_func_uint16_t_u_u(((*l_446) = ((*l_433) = (p_7 < 8UL))), (l_447 && (*p_8)))));
                        l_449 |= (*g_88);
                        (*g_88) &= func_10((g_450 > 0xE8B8L), p_8, p_9, p_8);
                    }
                }
                else
                {
                    int *l_452 = &g_184;
                    (*l_452) |= (g_450 && (g_441 != ((*p_8) = (p_6 >= ((*g_88) = (l_451 != l_451))))));
                    g_69 &= (*g_88);
                    for (g_109 = 0; (g_109 > (-4)); g_109 = safe_sub_func_int8_t_s_s(g_109, 8))
                    {
                        union U1 l_455 = {0xC9A2DE6CL};
                        return l_455;

                                            }
                    (**l_411) = (void*)0;

                    ;
                }

                ;
                ;
            }
            else
            {
                int *l_459 = &g_69;
                union U1 l_473 = {0x382C1A4AL};
                for (g_441 = (-26); (g_441 == 52); g_441++)
                {
                    union U1 l_458 = {0x0C548248L};
                    return l_458;

                                    }
                g_88 = l_459;

                ;
                for (g_69 = 15; (g_69 != (-20)); g_69--)
                {
                    struct S0 **l_462 = &l_364;
                    int l_463 = 1L;
                    unsigned *l_470 = &g_158.f3;
                    unsigned *l_471 = (void*)0;
                    unsigned *l_472 = &l_363.f0;
                    (*l_462) = &g_77;
                    (*l_410) = l_333;
                    if (((l_463 && (safe_lshift_func_uint16_t_u_s(((*l_240) | (*l_240)), 1))) || ((*g_340) && (((safe_rshift_func_int16_t_s_s((((**l_451) = (((*g_88) != p_9) && (((*l_472) ^= (safe_rshift_func_uint16_t_u_u(func_31(p_8, (*l_414), &g_28), 4))) <= 0x100D9878L))) & g_77.f1), p_7)) || (***g_338)) ^ 0x0978L))))
                    {
                        return l_473;

                                            }
                    else
                    {
                        unsigned l_474 = 1UL;
                        union U3 *l_477 = &g_126;
                        (*l_401) = &g_186;

                        ;
                        if (l_474)
                            break;
                        (*l_333) = ((safe_rshift_func_uint8_t_u_s(p_7, 5)) >= (*l_333));
                        (*g_164) = l_477;
                    }

                    ;
                    (*l_333) = l_463;
                }

                ;
                ;
            }

            ;
            ;
            ;
            (*l_410) = (*l_410);
        }


        ;
        ;
        (*l_479) = (void*)0;

        ;
    }


    ;
    return g_116;

    }







static int func_10(int p_11, char * p_12, unsigned short p_13, char * p_14)
{
    int *l_238 = &g_184;
    (*l_238) = p_11;
    return g_77.f0;
}







static int func_17(char * p_18)
{
    unsigned l_209 = 4294967290UL;
    int l_210 = 1L;
    int **l_211 = &g_88;
    int l_235 = 0xBF9ECD52L;
    l_210 &= l_209;
    (*l_211) = &l_210;

    ;
    if ((*g_88))
    {
        unsigned short *l_216 = &g_152;
        unsigned short **l_215 = &l_216;
        char *l_223 = (void*)0;
        char *l_224 = &g_109;
        int l_225 = (-1L);
        int *l_228 = &g_186;
        unsigned char *l_231 = &g_30;
        (*l_228) |= (safe_unary_minus_func_int8_t_s(func_31(&g_28, g_116, func_35((safe_rshift_func_int8_t_s_s((((((*l_224) = (((((*l_215) = &g_152) == (void*)0) >= (4UL | (0x2A429422L > (safe_sub_func_int8_t_s_s(((*p_18) = (safe_rshift_func_int16_t_s_u((**l_211), 14))), ((**l_211) >= ((g_56 >= (**l_211)) > 0x8DL))))))) > 1L)) & (**l_211)) || l_225) >= 5L), (**l_211))), p_18, g_226, g_184))));

        ;
        (*l_228) ^= (*g_88);
    }
    else
    {
        unsigned l_232 = 0x18B1E2C7L;
        char *l_233 = &g_227;
        int *l_234 = &g_186;
        (*l_234) ^= ((l_232 ^ (l_233 == &g_227)) | ((*g_88) = (*g_88)));
    }

    ;
    return l_235;


}







static char * func_19(char * p_20, union U1 p_21, char p_22)
{
    int l_191 = (-5L);
    int *l_197 = &g_56;
    int **l_198 = (void*)0;
    int **l_199 = &g_88;
    struct S0 **l_202 = &g_79;
    struct S0 ***l_203 = (void*)0;
    struct S0 ***l_204 = (void*)0;
    struct S0 ***l_205 = &l_202;
    unsigned l_206 = 0xF53CA78DL;
    unsigned char l_207 = 0xD3L;
    char *l_208 = &g_158.f0;
    if (l_191)
    {
        int *l_192 = &g_56;
        (*l_192) ^= l_191;
    }
    else
    {
        char *l_196 = &g_28;
        for (p_21.f0 = 0; (p_21.f0 == 32); p_21.f0++)
        {
            int *l_195 = &g_184;
            (*l_195) ^= p_21.f0;
        }
        l_191 = p_22;
        (*g_79) = (*g_79);
        return l_196;


    }
    (*l_197) &= l_191;
    l_197 = ((*l_199) = &l_191);

    ;
    ;
    (*l_197) = ((*p_20) || ((*p_20) = ((*g_88) != ((safe_lshift_func_int16_t_s_u((((l_207 = ((((*l_205) = l_202) != &g_79) == (l_206 && (*p_20)))) & (**l_199)) == 4294967295UL), g_77.f1)) || 0x2FL))));
    return l_208;



}







static char * func_23(unsigned char p_24, int p_25, unsigned char p_26)
{
    unsigned l_44 = 0UL;
    char *l_108 = &g_109;
    int *l_183 = &g_184;
    int *l_185 = &g_186;
    union U3 *l_187 = (void*)0;
    (*l_183) |= func_31(func_35(func_40((safe_mod_func_uint8_t_u_u(0UL, l_44))), l_108, &g_109, (g_109 != 1UL)), g_116, l_108);
    (*l_185) &= ((*l_183) ^= func_40(p_24));


    l_187 = l_187;
    for (g_116.f0 = 0; (g_116.f0 == 4); g_116.f0 = safe_add_func_uint8_t_u_u(g_116.f0, 9))
    {
        (*l_185) = p_24;
    }
    return &g_28;


}







static int func_31(char * p_32, union U1 p_33, char * p_34)
{
    int **l_117 = &g_88;
    union U2 *l_179 = (void*)0;
    (*l_117) = &g_56;

    ;
    for (p_33.f0 = (-21); (p_33.f0 > 33); p_33.f0 = safe_add_func_int16_t_s_s(p_33.f0, 3))
    {
        char l_120 = 0xE9L;
        union U3 *l_125 = &g_126;
        (*l_117) = (*l_117);
    }
    (**l_117) |= (-3L);
    return p_33.f0;
}







static char * func_35(char p_36, char * p_37, char * p_38, short p_39)
{
    int l_112 = 0xE042358CL;
    char *l_115 = (void*)0;
    for (g_69 = 0; (g_69 != 23); g_69 = safe_add_func_uint8_t_u_u(g_69, 3))
    {
        unsigned l_113 = 4294967290UL;
        int *l_114 = &g_56;
        l_112 ^= p_39;
        l_113 &= (-1L);
        (*l_114) = l_113;
        (*l_114) = 8L;
    }
    return l_115;


}







static char func_40(unsigned short p_41)
{
    char *l_46 = &g_28;
    char **l_45 = &l_46;
    char ***l_47 = (void*)0;
    char ***l_48 = (void*)0;
    char ***l_49 = &l_45;
    int l_83 = 0xC12A55B9L;
    int l_84 = 4L;
    int *l_103 = &l_83;
    volatile union U2 **l_105 = (void*)0;
    volatile union U2 **l_106 = (void*)0;
    volatile union U2 **l_107 = &g_104;
    (*l_49) = l_45;
    if (g_28)
    {
        unsigned char l_62 = 0x5AL;
        struct S0 *l_76 = &g_77;
        int *l_86 = &l_84;
        int **l_87 = (void*)0;
        for (p_41 = 0; (p_41 <= 7); ++p_41)
        {
            int *l_61 = &g_56;
            for (g_28 = 0; (g_28 < 13); g_28 = safe_add_func_int32_t_s_s(g_28, 1))
            {
                int *l_54 = (void*)0;
                int *l_55 = &g_56;
                (*l_55) = ((void*)0 == &l_45);
                for (g_56 = 0; (g_56 == 0); g_56 = safe_add_func_int8_t_s_s(g_56, 1))
                {
                    if ((safe_sub_func_uint8_t_u_u((&g_56 != l_61), (l_62 == (g_67 ^= (safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_41, g_28)), g_30)))))))
                    {
                        return g_28;
                    }
                    else
                    {
                        int *l_68 = &g_69;
                        (*l_68) = (!p_41);
                    }
                    return p_41;
                }
            }
            (*l_61) = p_41;
        }
        for (g_67 = 28; (g_67 >= 36); g_67 = safe_add_func_int32_t_s_s(g_67, 2))
        {
            int *l_73 = (void*)0;
            int **l_72 = &l_73;
            (*l_72) = (void*)0;
        }
        for (g_56 = 6; (g_56 != 20); ++g_56)
        {
            struct S0 **l_78 = &l_76;
            int l_80 = 4L;
            int *l_85 = &l_83;
            g_79 = ((*l_78) = l_76);
            (*l_85) = ((((1L >= (l_76 != &g_77)) || (l_80 ^ (safe_mod_func_int16_t_s_s(g_28, l_83)))) | (0x58L | (l_84 = ((g_69 && l_80) | 65534UL)))) != g_77.f1);
        }
        g_88 = l_86;

        ;
    }
    else
    {
        unsigned l_97 = 0xFDCAE364L;
        if (p_41)
        {
            unsigned short l_91 = 65535UL;
            unsigned char *l_101 = &g_30;
            unsigned char **l_100 = &l_101;
            unsigned char *l_102 = &g_30;
            (*g_88) = ((safe_sub_func_int8_t_s_s(l_91, (safe_unary_minus_func_uint16_t_u((p_41 > (!(safe_sub_func_int32_t_s_s((!p_41), (safe_sub_func_uint16_t_u_u(((l_97 >= ((l_83 = ((p_41 || (1L != ((safe_sub_func_int16_t_s_s((-1L), (((*l_100) = &g_30) == l_102))) | 1UL))) ^ p_41)) <= 0xB25A596DL)) <= (-1L)), 0L)))))))))) & g_56);
        }
        else
        {
            (*g_88) = (g_69 == g_77.f0);
        }
    }

    ;
    (*l_103) ^= (*g_88);
    (*l_107) = g_104;
    return g_28;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    transparent_crc(g_77.f1, "g_77.f1", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_116.f0, "g_116.f0", print_hash_value);
    transparent_crc(g_126.f0, "g_126.f0", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_490.f0, "g_490.f0", print_hash_value);
    transparent_crc(g_490.f1, "g_490.f1", print_hash_value);
    transparent_crc(g_508.f0, "g_508.f0", print_hash_value);
    transparent_crc(g_508.f1, "g_508.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
