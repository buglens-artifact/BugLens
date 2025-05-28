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
   const int f2;
};

struct S1 {
   unsigned f0;
   char f1;
   unsigned f2;
   unsigned f3;
   unsigned char f4;
   unsigned f5;
};

struct S2 {
   struct S0 f0;
};


static unsigned short g_2 = 65530UL;
static int g_12 = 0x377CC424L;
static int *g_11 = &g_12;
static int g_46 = (-8L);
static struct S0 g_52 = {0x16D0L,0x46BAC609L,0x820F90F5L};
static struct S0 g_54 = {-3L,0x5A323196L,0xBA053926L};
static struct S1 g_59 = {0xC098B302L,4L,0x37C2B42DL,18446744073709551611UL,0UL,0xC8E9BDCCL};
static struct S2 g_62 = {{-1L,0x9BED5D29L,-1L}};
static int *g_90 = &g_46;
static struct S2 *g_135 = &g_62;
static struct S2 **g_134 = &g_135;
static unsigned short g_150 = 65535UL;
static struct S0 *g_246 = &g_54;
static struct S0 **g_245 = &g_246;
static int g_248 = 0L;
static struct S1 g_265 = {0x0527F5A8L,0xC3L,0x68B0B81AL,1UL,0xBCL,4294967295UL};
static const int *g_316 = (void*)0;
static struct S1 *g_322 = &g_265;
static int g_343 = 0xCE3B4DF4L;
static int g_373 = 0xDAD3AD99L;
static int * const *g_416 = &g_11;
static int * const **g_415 = &g_416;



static unsigned short func_1(void);
static const int * func_3(int * p_4);
static int * func_5(int * p_6, int * p_7, struct S1 p_8, int * p_9, int * p_10);
static int * func_13(unsigned char p_14, unsigned short p_15);
static struct S0 func_18(int * p_19, unsigned char p_20, const unsigned char p_21, int * p_22, unsigned p_23);
static int * func_24(int * p_25);
static int * func_26(unsigned p_27, char p_28, struct S0 p_29, unsigned p_30, int * p_31);
static int func_32(int * p_33);
static int * func_34(unsigned p_35);
static unsigned short func_38(unsigned short p_39, unsigned p_40, int * p_41);
static unsigned short func_1(void)
{
    struct S1 l_17 = {0xCA4E8652L,0xF2L,0x4795ED7CL,0xAE49A2F3L,0x17L,1UL};
    int *l_82 = (void*)0;
    int *l_212 = &g_46;
    unsigned l_220 = 0x1D1813B9L;
    int **l_224 = &g_11;
    char l_229 = 1L;
    struct S0 l_230 = {1L,0x8C01150DL,0xB102D357L};
    short l_231 = 0x98AFL;
    struct S2 l_283 = {{0x4710L,0x51003F28L,0x889F29D5L}};
    unsigned l_296 = 0x3598B103L;
    short l_332 = 0x671FL;
    struct S1 l_340 = {0x32F401D6L,1L,0x5B6543DAL,18446744073709551615UL,3UL,0xE9AB9C9AL};
    int l_344 = (-1L);
    unsigned l_395 = 18446744073709551611UL;
    unsigned char l_410 = 0x75L;
    struct S2 **l_439 = &g_135;
    struct S1 **l_441 = (void*)0;
    struct S0 *l_443 = (void*)0;
    if (g_2)
    {
        short l_44 = 1L;
        int *l_45 = &g_46;
        int l_47 = (-1L);
        struct S0 l_81 = {0x6E91L,0x67212537L,0xA27EA102L};
        const int *l_219 = &l_81.f2;
        const int **l_218 = &l_219;
        (*l_218) = func_3(func_5(g_11, func_13(g_12, g_12), l_17, g_11, (func_18(func_24(func_26(g_2, (func_32(func_34(((((safe_mod_func_uint16_t_u_u((func_38(g_2, (safe_div_func_int8_t_s_s((g_11 != (void*)0), l_44)), l_45) , g_2), (*l_45))) < g_2) && 0L) , l_47))) >= 0UL), l_81, l_17.f2, l_82)), g_54.f1, g_62.f0.f2, g_11, g_54.f0) , l_212)));
        (*g_11) = l_220;
        return g_59.f0;
    }
    else
    {
        int **l_221 = (void*)0;
        int **l_222 = (void*)0;
        int **l_223 = &l_212;
        (*l_223) = (void*)0;
    }
    (*l_224) = (void*)0;
    if (func_32(func_26(g_62.f0.f2, (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_229, 0xC43D89DCL)), l_17.f1)), l_230, g_52.f0, func_24(func_34((1UL ^ l_231))))))
    {
        unsigned short l_247 = 0x7101L;
        struct S1 *l_275 = &g_265;
        int **l_278 = &g_90;
        const struct S0 l_281 = {0x2F01L,0UL,-1L};
        struct S2 l_284 = {{-8L,0x6306A98AL,0x80A01742L}};
        for (g_2 = 0; (g_2 < 4); g_2 = safe_add_func_uint8_t_u_u(g_2, 8))
        {
            int l_234 = 0xC1E8B452L;
            int *l_249 = &g_46;
            struct S1 *l_258 = &l_17;
            struct S1 **l_257 = &l_258;
            struct S2 *l_264 = &g_62;
            struct S0 * const l_273 = &g_52;
            if (((l_234 <= (safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_52.f1, (safe_rshift_func_int8_t_s_u((~(((safe_mod_func_uint16_t_u_u(((void*)0 != &g_135), ((((safe_lshift_func_uint16_t_u_u(((func_38(((g_52.f0 , (((((void*)0 == g_245) , l_247) != ((g_59.f0 , 0xF7L) && g_46)) | g_59.f2)) == l_247), g_248, l_249) , l_247) != (-8L)), l_247)) && (-5L)) < 0x7A65L) || (*l_249)))) == 1L) != (*l_249))), 0)))) , 65531UL), g_59.f3))) , 0x3C3AD9DDL))
            {
                struct S0 ***l_250 = &g_245;
                (*l_250) = &g_246;
                if (g_52.f0)
                    goto lbl_285;
                if ((*l_249))
                    continue;
            }
            else
            {
                short l_253 = 1L;
                int *l_259 = &g_46;
                for (l_17.f3 = 8; (l_17.f3 > 33); l_17.f3 = safe_add_func_uint16_t_u_u(l_17.f3, 2))
                {
                    const int l_255 = (-9L);
                    unsigned short l_256 = 0xE2A4L;
                    (*l_224) = (void*)0;
                    if (l_253)
                    {
                        unsigned short l_254 = 65535UL;
                        (*g_90) = 0x845BBBC3L;
                        g_59 = g_59;
                        (*l_224) = func_34(l_254);
                    }
                    else
                    {
                        if (l_255)
                            break;
                    }
                    if ((*g_90))
                        break;
                    return l_256;
                }
                (*l_259) = func_38(g_150, ((void*)0 == l_257), l_259);
            }
            if (l_247)
            {
                struct S1 *l_260 = &g_59;
                (*g_90) = l_247;
                (*l_224) = l_249;
                (**l_224) = ((+((g_46 , l_260) != (void*)0)) & (((safe_sub_func_uint32_t_u_u(g_59.f3, 0L)) & l_247) == ((0UL != ((&g_59 == &g_59) , g_52.f1)) == 0UL)));
                return g_54.f0;
            }
            else
            {
                int *l_263 = &g_46;
                struct S0 l_266 = {0x126FL,0x5CA27DE4L,0x09EE697CL};
                if ((*l_249))
                    break;
                if (l_247)
                    continue;
                (*l_224) = func_26((func_32(((&g_135 == &g_135) , l_263)) <= ((void*)0 != l_264)), (g_265 , g_52.f1), l_266, l_247, &g_12);
                for (g_59.f0 = 0; (g_59.f0 > 19); g_59.f0++)
                {
                    struct S0 *l_274 = &g_52;
                    (*l_249) = (g_52.f0 , (~(g_248 > ((safe_mod_func_uint32_t_u_u((((*g_135) , 0xC5L) || 0x09L), (safe_add_func_int8_t_s_s((*l_263), 0x30L)))) == (func_38(g_52.f1, ((l_273 != l_274) < (**l_224)), l_263) ^ 0UL)))));
                    l_17 = g_265;
                }
            }
            (*l_224) = &g_46;
        }
        (*l_275) = g_265;
        if ((l_247 || ((safe_rshift_func_uint8_t_u_s((((g_265.f0 == ((g_12 , l_247) > (((((*g_90) , (l_247 & g_265.f1)) , (&l_230 != (*g_245))) , (void*)0) != l_278))) & 0xF06A350FL) < 0x6F2BL), g_62.f0.f1)) && (**l_278))))
        {
            for (g_265.f0 = 0; (g_265.f0 < 52); g_265.f0 = safe_add_func_uint8_t_u_u(g_265.f0, 2))
            {
                unsigned l_282 = 0xEFC9DA71L;
                (**l_278) = ((l_281 , g_52.f0) <= l_282);
                return g_52.f2;
            }
            (*l_278) = ((l_283 , l_284) , (void*)0);
lbl_285:
            (*l_278) = (((void*)0 == &g_12) , &g_12);
lbl_333:
            (**l_278) = 0x214BE4D7L;
        }
        else
        {
            unsigned l_287 = 0xDA0C82F1L;
            unsigned char l_290 = 2UL;
            int **l_302 = &g_90;
            struct S1 l_317 = {4UL,0xA3L,0xFDE2A011L,0x8A7D7928L,0xEBL,0xC0B517CFL};
            unsigned char l_328 = 0x5DL;
            struct S0 l_361 = {0x8A35L,0x81303411L,0x7EE16122L};
            struct S2 **l_368 = &g_135;
            if ((**l_278))
            {
                struct S1 l_286 = {0x3CAC8E35L,0x6EL,0x9E5E3E70L,0x611AE935L,0x78L,4294967295UL};
                (*l_275) = l_286;
                (*l_275) = ((g_52.f1 , g_59) , ((l_287 != l_286.f4) , g_265));
            }
            else
            {
                return (**l_278);
            }
            if ((**l_278))
            {
                char l_295 = 0L;
                unsigned char l_305 = 0xB5L;
                int *l_306 = &g_12;
                short l_314 = (-1L);
                (*g_90) = (g_52.f2 < (((**l_278) >= (**l_278)) < ((safe_mod_func_int8_t_s_s((g_59.f2 & ((l_290 , &g_246) != (void*)0)), (safe_div_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(0UL, ((*g_245) != &l_281))) ^ l_295), l_296)))) , g_265.f2)));
                (*l_224) = &g_12;
                for (g_59.f0 = 8; (g_59.f0 <= 60); g_59.f0 = safe_add_func_int16_t_s_s(g_59.f0, 7))
                {
                    char l_299 = 1L;
                    struct S0 l_309 = {1L,1UL,-5L};
                    if (l_295)
                        break;
                }
            }
            else
            {
                if ((*g_90))
                {
                    (**l_302) = (*g_90);
                    g_90 = &g_12;
                    if ((*g_90))
                    {
                        (*l_275) = g_265;
                        g_316 = func_3(&g_12);
                        (*l_278) = (*l_302);
                    }
                    else
                    {
                        (*l_302) = (*l_302);
                        return g_265.f4;
                    }
                }
                else
                {
                    (*l_275) = l_317;
                }
            }
            if (((((g_59.f4 != (**l_278)) , (*l_275)) , (safe_div_func_uint8_t_u_u(1UL, func_38(g_59.f1, g_265.f0, &g_46)))) ^ (**l_302)))
            {
                unsigned short l_330 = 0xE18FL;
                struct S1 l_336 = {18446744073709551613UL,8L,4294967290UL,0x30CB4F07L,250UL,8UL};
                int *l_357 = &g_46;
                const unsigned char l_360 = 0xD0L;
                struct S2 **l_369 = &g_135;
                if ((*g_90))
                {
                    struct S2 l_331 = {{-1L,0x5B071E49L,0xCA084E21L}};
                    (**l_278) = 0x5D3816BAL;
                    for (l_230.f1 = 18; (l_230.f1 != 31); l_230.f1++)
                    {
                        int l_329 = (-1L);
                        g_322 = &l_317;
                        (*g_90) = (!((safe_rshift_func_int16_t_s_s(func_32(((*g_246) , &g_46)), (+(g_62.f0.f1 < (((safe_div_func_uint32_t_u_u(0x7E91F815L, (safe_unary_minus_func_int16_t_s(l_328)))) <= l_329) != l_330))))) , (((0xC0CFL <= 0x2BA6L) , l_331) , l_332)));
                        if (g_59.f2)
                            goto lbl_333;
                    }
                    l_17 = l_17;
                }
                else
                {
                    int l_337 = 0x65817B17L;
                    for (l_283.f0.f0 = 0; (l_283.f0.f0 == (-13)); --l_283.f0.f0)
                    {
                        (*l_278) = &g_12;
                        (*g_90) = (((-1L) & (g_265.f1 > g_52.f1)) <= (((0x8BL < g_46) | (l_336 , l_337)) | (((((func_38((safe_lshift_func_int16_t_s_s((l_340 , (safe_lshift_func_uint16_t_u_u(g_265.f1, l_336.f1))), 9)), g_343, &g_46) ^ 0xEEL) > l_337) == g_62.f0.f2) & (**l_302)) < g_54.f0)));
                        return l_337;
                    }
                }
                (**l_302) = (l_344 , (((g_52.f1 , (func_38((**l_302), (safe_div_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((((0xCAL ^ g_59.f5) && l_336.f0) >= ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_336.f2, (safe_mod_func_uint8_t_u_u(g_52.f2, g_59.f5)))), 0x59FEL)) < 8L)) , g_52.f1), g_59.f3)) ^ g_62.f0.f0), (**l_302))), &g_46) , g_150)) , 0x0375D8F5L) > l_336.f4));
                (*l_275) = (*g_322);
                if ((*g_90))
                {
                    struct S1 l_362 = {0x56A7DEAFL,0xA8L,8UL,0xCA9E4AF8L,0xC3L,0x8FEE9EADL};
                    int *l_372 = &l_344;
                    if ((safe_add_func_int32_t_s_s((*g_90), ((**l_302) || (-6L)))))
                    {
                        return g_59.f3;
                    }
                    else
                    {
                        (*g_90) = ((0xAF93L || g_248) | (*g_90));
                        g_316 = l_357;
                        (*l_278) = func_5(&g_46, &g_12, l_336, &g_46, &g_46);
                    }
                    for (g_59.f4 = (-14); (g_59.f4 > 15); g_59.f4 = safe_add_func_uint8_t_u_u(g_59.f4, 7))
                    {
                        const int **l_363 = &g_316;
                        (*l_363) = func_3(func_5((*l_302), l_357, l_362, l_357, (*l_278)));
                        (**l_278) = (func_38((((**l_278) , &g_46) != (void*)0), ((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s((((g_59.f1 < (g_46 == ((l_368 == l_369) , (safe_add_func_uint16_t_u_u(0x0571L, ((func_38(func_38((*l_357), l_362.f0, l_372), g_373, &g_46) , (*l_357)) , g_62.f0.f2)))))) < 0xFBL) & (**l_363)), 6)) , &g_135) != l_368), (*l_357))) == (**l_302)), (*l_278)) >= (**l_302));
                        (*l_278) = l_357;
                        g_90 = (l_317 , &g_12);
                    }
                    return g_59.f3;
                }
                else
                {
                    int * const l_378 = (void*)0;
                    int **l_379 = (void*)0;
                    int **l_380 = (void*)0;
                    int **l_381 = &l_212;
                    for (g_265.f0 = (-30); (g_265.f0 <= 13); g_265.f0 = safe_add_func_uint32_t_u_u(g_265.f0, 1))
                    {
                        (*l_302) = &g_46;
                        g_59 = (*g_322);
                    }
                    for (l_317.f3 = 26; (l_317.f3 > 6); l_317.f3 = safe_sub_func_int16_t_s_s(l_317.f3, 3))
                    {
                        (*g_90) = (0x31F4L | g_46);
                    }
                    (*l_381) = l_378;
                }
            }
            else
            {
                (*g_90) = (*g_90);
                for (l_344 = 26; (l_344 <= (-5)); l_344 = safe_sub_func_int8_t_s_s(l_344, 7))
                {
                    struct S1 l_384 = {0x3537D240L,0x4CL,0UL,18446744073709551607UL,247UL,0xD3EEA590L};
                    int * const *l_385 = (void*)0;
                    (*g_90) = (((*g_322) , &g_90) != (l_384 , l_385));
                    return g_265.f1;
                }
            }
        }
        for (l_340.f1 = 0; (l_340.f1 == (-18)); l_340.f1 = safe_sub_func_uint16_t_u_u(l_340.f1, 9))
        {
            struct S1 * const *l_390 = &l_275;
            int l_405 = 0x2777A36CL;
            int l_409 = 0x4B69D266L;
            int **l_440 = &g_11;
        }
    }
    else
    {
        struct S0 *l_442 = &g_54;
        int l_444 = (-2L);
        const struct S2 *l_447 = &g_62;
        (*g_322) = (*g_322);
        l_443 = l_442;
        (*l_439) = (((g_59.f2 , l_444) , ((*g_322) , (*g_246))) , (void*)0);
        (*g_90) = (+(safe_lshift_func_uint8_t_u_s(l_444, ((*g_134) == l_447))));
    }
    return g_52.f1;
}







static const int * func_3(int * p_4)
{
    int **l_215 = &g_90;
    struct S1 *l_216 = (void*)0;
    struct S1 **l_217 = &l_216;
    (*l_215) = &g_12;
    (**l_215) = (**l_215);
    (*l_217) = l_216;
    return (*l_215);
}







static int * func_5(int * p_6, int * p_7, struct S1 p_8, int * p_9, int * p_10)
{
    struct S1 *l_214 = &g_59;
    struct S1 **l_213 = &l_214;
    (*l_213) = &p_8;
    return &g_46;
}







static int * func_13(unsigned char p_14, unsigned short p_15)
{
    int *l_16 = &g_12;
    (*g_11) = (-10L);
    return l_16;
}







static struct S0 func_18(int * p_19, unsigned char p_20, const unsigned char p_21, int * p_22, unsigned p_23)
{
    struct S2 *l_106 = &g_62;
    struct S2 **l_107 = &l_106;
    struct S1 *l_108 = &g_59;
    int **l_109 = &g_90;
    int l_122 = 0x1ED130E4L;
    const char l_140 = (-4L);
    struct S0 l_202 = {1L,4294967288UL,0x691F10E8L};
    (*l_107) = l_106;
    (*l_108) = g_59;
lbl_203:
    (*l_109) = p_22;
    for (g_59.f4 = (-12); (g_59.f4 > 59); g_59.f4 = safe_add_func_int32_t_s_s(g_59.f4, 5))
    {
        struct S1 *l_116 = (void*)0;
        int l_121 = (-1L);
        struct S0 *l_129 = &g_54;
        struct S2 l_141 = {{0x382BL,0xC5AAFB2DL,1L}};
        short l_157 = 0x8370L;
        struct S1 l_162 = {0xDEA70BF6L,1L,0x423B7A21L,0xF81079E1L,248UL,4294967295UL};
        struct S0 *l_169 = &l_141.f0;
        if ((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_38(((l_116 != ((0x0219L >= 0x340CL) , &g_59)) , (g_52.f2 < (safe_div_func_uint8_t_u_u((func_38(p_20, (safe_rshift_func_int16_t_s_u(l_121, 15)), &g_46) > g_52.f1), p_21)))), p_21, &g_46), l_122)), p_20)) || (-9L)) <= g_62.f0.f0))
        {
            int *l_132 = (void*)0;
            struct S2 **l_151 = &l_106;
            struct S1 l_180 = {18446744073709551615UL,0xEDL,0xE4DB81D2L,0x4652B226L,0UL,0x32F98C7CL};
            if ((g_62.f0.f2 | func_38(((func_38(((safe_mod_func_uint32_t_u_u((!(safe_div_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(g_54.f1, func_38(p_20, (l_129 == &g_52), &g_46))) , func_38((safe_mod_func_uint32_t_u_u(p_23, 0x6FFDE101L)), p_21, l_132)), g_62.f0.f0))), g_46)) , 0UL), p_21, &g_46) ^ (-5L)) , g_59.f4), p_20, &g_46)))
            {
                struct S2 **l_133 = (void*)0;
                if ((((l_133 != g_134) && ((((*p_19) == (((func_38(l_121, g_2, &g_46) > (l_121 >= (safe_add_func_uint16_t_u_u((p_21 , g_59.f0), g_2)))) > p_21) < 0x576CL)) > g_59.f1) , g_46)) < 0x9002L))
                {
                    struct S0 l_138 = {0x04F4L,0x1AD9D65DL,0xE4666423L};
                    return l_138;
                }
                else
                {
                    (*l_109) = func_34((0xBEL != ((safe_unary_minus_func_uint32_t_u(l_140)) | (p_20 ^ (l_141 , ((**g_134) , 0xFA16B152L))))));
                    (*l_109) = &g_46;
                }
            }
            else
            {
                struct S2 *l_142 = &l_141;
                struct S0 *l_155 = &g_62.f0;
                int l_156 = 0x50D5A8CBL;
                if ((((*g_134) != ((+((*g_134) == (l_141 , (*g_134)))) , &l_141)) | p_20))
                {
                    int l_148 = 0x39F823E1L;
                    int *l_149 = &g_46;
                    struct S2 * const *l_152 = (void*)0;
                    int l_159 = 0x54FD2FE4L;
                    (*g_134) = l_142;
                    for (g_46 = 0; (g_46 < (-5)); g_46 = safe_sub_func_int8_t_s_s(g_46, 6))
                    {
                        struct S2 l_147 = {{0L,0xCC6504EBL,6L}};
                        int *l_158 = &g_46;
                        g_150 = ((((((*p_19) ^ g_59.f5) | (0x8EL == (safe_mod_func_uint8_t_u_u(((*p_19) || (l_147 , (((((g_46 , ((**l_107) , g_54.f1)) , func_38((g_52.f2 , l_148), l_141.f0.f2, l_149)) <= g_52.f1) , g_59.f5) , (*p_19)))), 0x3FL)))) & (*p_19)) >= g_2) && 0xB12CL);
                        (*l_109) = func_34(((l_151 != l_152) , (safe_div_func_int8_t_s_s(((((p_21 == p_20) , (void*)0) != l_155) == ((func_38(g_62.f0.f0, p_23, func_34(func_38(g_59.f4, l_156, &g_46))) , 4294967287UL) , p_23)), p_21))));
                        l_159 = ((func_38(l_157, g_62.f0.f1, l_158) <= ((func_38(p_20, g_2, &g_46) <= (-1L)) && l_156)) , l_157);
                        if ((*g_90))
                            break;
                    }
                    for (g_59.f1 = 4; (g_59.f1 == 14); ++g_59.f1)
                    {
                        struct S1 *l_163 = &l_162;
                        if ((*p_19))
                            break;
                        (*l_163) = l_162;
                        (*l_149) = (*l_149);
                    }
                }
                else
                {
                    int * const l_164 = &g_46;
                    p_19 = l_164;
                    for (l_157 = 17; (l_157 == 4); l_157 = safe_sub_func_uint32_t_u_u(l_157, 5))
                    {
                        unsigned char l_167 = 255UL;
                        struct S0 l_168 = {0xFEDFL,0xEEC52BA2L,-8L};
                        struct S0 **l_170 = &l_129;
                        if ((*l_164))
                            break;
                        if (l_167)
                            break;
                        (*l_170) = (l_168 , l_169);
                    }
                }
                l_156 = g_46;
                (*p_19) = ((&g_54 == &g_52) > (((func_38((safe_div_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((g_62.f0.f2 || ((*g_134) != (void*)0)) <= (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(l_156, g_59.f3)) , func_38(g_59.f2, p_20, p_22)), 5))))), p_20)), g_59.f5, &g_46) >= g_62.f0.f1) , p_21) >= p_21));
                l_180 = l_180;
            }
            return g_52;
        }
        else
        {
            int l_189 = 0x532398D2L;
            struct S0 *l_196 = &g_62.f0;
            struct S0 **l_197 = &l_196;
            unsigned l_199 = 0x4206CC60L;
            int *l_201 = &l_122;
            for (l_141.f0.f0 = (-13); (l_141.f0.f0 >= (-6)); l_141.f0.f0++)
            {
                const unsigned l_185 = 4294967295UL;
                unsigned short l_186 = 65533UL;
                unsigned char l_198 = 6UL;
                int ***l_200 = &l_109;
                (*p_19) = (safe_add_func_uint16_t_u_u(l_185, (l_186 != (g_150 != (((safe_div_func_uint32_t_u_u(l_189, (safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((g_59.f4 , ((((0x79L <= (safe_mul_func_int16_t_s_s(((void*)0 == l_196), (&l_129 != l_197)))) > 0x7AL) & g_52.f1) == 0L)), l_198)) ^ l_199), l_189)))) >= p_23) & (*p_19))))));
                (*l_200) = &g_11;
                l_201 = &l_189;
                return l_202;
            }
            (*l_109) = (*l_109);
            if (g_46)
                goto lbl_203;
            l_121 = ((((safe_div_func_int16_t_s_s(g_54.f0, g_52.f0)) == p_23) ^ 0UL) >= func_38(func_38(g_62.f0.f2, l_162.f1, func_34(((((*l_129) , g_54.f0) >= (((safe_lshift_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u((((func_38(g_54.f1, g_150, &g_46) && (-1L)) & 0xC5L) ^ 1L), 12)) & p_21) < g_54.f1) || g_62.f0.f0), l_162.f1)) || (*l_201)) , p_21)) && 0x37L))), g_52.f2, &l_121));
        }
        for (g_54.f0 = 0; (g_54.f0 <= 16); g_54.f0++)
        {
            return g_52;
        }
        return l_202;
    }
    return g_62.f0;
}







static int * func_24(int * p_25)
{
    struct S1 l_100 = {0xA4C35ED1L,0x7FL,1UL,18446744073709551606UL,0x25L,0xBBF2B79FL};
    int l_105 = (-7L);
    l_105 = (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((&g_46 != (l_100 , (l_100.f3 , func_34(g_54.f2)))) & l_100.f1) , ((safe_mod_func_uint8_t_u_u(0UL, (safe_sub_func_int8_t_s_s(((-8L) & func_38(g_59.f5, g_46, &g_46)), 0xB9L)))) ^ (*p_25))), 0UL)), l_100.f0));
    return p_25;
}







static int * func_26(unsigned p_27, char p_28, struct S0 p_29, unsigned p_30, int * p_31)
{
    struct S2 *l_84 = &g_62;
    struct S2 **l_83 = &l_84;
    struct S1 l_85 = {18446744073709551615UL,-1L,0x2E325606L,1UL,0xE5L,0x7DF30550L};
    struct S1 *l_86 = &g_59;
    int *l_89 = &g_46;
    int **l_91 = (void*)0;
    int **l_92 = &l_89;
    struct S0 *l_95 = &g_62.f0;
    (*l_83) = &g_62;
    (*l_86) = ((0x02L & g_54.f0) , l_85);
    (*l_92) = func_34(((!((&g_52 == &p_29) , (l_85.f1 < 0x0EL))) , (safe_sub_func_uint8_t_u_u(func_38((l_89 != (void*)0), g_62.f0.f2, g_90), 0x6BL))));
    (**l_92) = (!((safe_rshift_func_int16_t_s_u(g_62.f0.f0, 1)) | ((void*)0 != l_95)));
    return &g_46;
}







static int func_32(int * p_33)
{
    struct S0 *l_51 = &g_52;
    struct S1 l_55 = {18446744073709551609UL,-1L,4294967294UL,0x9EF32124L,1UL,4294967287UL};
    struct S2 * const l_69 = &g_62;
    int *l_80 = (void*)0;
    for (g_46 = (-19); (g_46 == (-2)); g_46 = safe_add_func_uint16_t_u_u(g_46, 1))
    {
        struct S0 *l_53 = &g_54;
        struct S1 *l_56 = (void*)0;
        struct S1 *l_57 = (void*)0;
        struct S1 *l_58 = (void*)0;
        int l_65 = 0xE800BCFDL;
        int *l_66 = &l_65;
        l_53 = l_51;
        g_59 = l_55;
        (*l_66) = func_38((((func_38(l_55.f0, (0UL < (func_38((l_55.f0 , ((((0xAC17B1ABL && ((g_62 , &l_55) == (void*)0)) || ((!func_38((((!l_55.f0) ^ (safe_lshift_func_int8_t_s_s((l_55.f3 <= 1UL), 5))) < l_55.f5), l_55.f4, &g_46)) == 4294967288UL)) , l_65) , l_55.f1)), g_59.f2, p_33) <= g_52.f0)), &g_46) < 1L) != 9L) , l_55.f3), l_65, p_33);
        for (g_59.f2 = (-20); (g_59.f2 > 14); g_59.f2 = safe_add_func_int32_t_s_s(g_59.f2, 6))
        {
            struct S2 *l_71 = &g_62;
            struct S2 **l_70 = &l_71;
            int **l_72 = &l_66;
            (*l_70) = l_69;
            (*l_72) = p_33;
            (*l_70) = &g_62;
        }
    }
    for (g_59.f2 = 0; (g_59.f2 != 5); g_59.f2 = safe_add_func_int32_t_s_s(g_59.f2, 3))
    {
        unsigned short l_75 = 65535UL;
        return l_75;
    }
    (*p_33) = ((((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_59.f1, ((l_55.f1 , (l_55.f5 || 0xECL)) ^ ((0xEB82DDC7L <= (*p_33)) ^ l_55.f1)))), (func_38(g_46, l_55.f2, l_80) , g_52.f2))) && (*p_33)) , g_52.f2) > l_55.f2);
    return g_59.f1;
}







static int * func_34(unsigned p_35)
{
    int *l_48 = &g_46;
    return l_48;
}







static unsigned short func_38(unsigned short p_39, unsigned p_40, int * p_41)
{
    return g_46;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_54.f1, "g_54.f1", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_59.f0, "g_59.f0", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_59.f3, "g_59.f3", print_hash_value);
    transparent_crc(g_59.f4, "g_59.f4", print_hash_value);
    transparent_crc(g_59.f5, "g_59.f5", print_hash_value);
    transparent_crc(g_62.f0.f0, "g_62.f0.f0", print_hash_value);
    transparent_crc(g_62.f0.f1, "g_62.f0.f1", print_hash_value);
    transparent_crc(g_62.f0.f2, "g_62.f0.f2", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f1, "g_265.f1", print_hash_value);
    transparent_crc(g_265.f2, "g_265.f2", print_hash_value);
    transparent_crc(g_265.f3, "g_265.f3", print_hash_value);
    transparent_crc(g_265.f4, "g_265.f4", print_hash_value);
    transparent_crc(g_265.f5, "g_265.f5", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
