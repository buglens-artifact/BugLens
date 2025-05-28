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
   signed f0 : 3;
   unsigned f1 : 12;
   volatile unsigned f2 : 30;
   unsigned f3 : 18;
};

struct S1 {
   long long f0;
   short f1;
   short f2;
};

struct S2 {
   struct S1 f0;
   char f1;
};


static int g_2 = 0xEC79E672L;
static int g_73 = (-6L);
static int *g_72 = &g_73;
static short g_88 = 0xE161L;
static volatile struct S0 g_89 = {-1,63,20245,332};
static int g_92 = 0x6010944BL;
static volatile short g_101 = 0x7570L;
static volatile short *g_100 = &g_101;
static volatile short **g_99 = &g_100;
static int g_106 = (-5L);
static unsigned char g_113 = 0xC7L;
static unsigned g_128 = 4294967288UL;
static volatile struct S1 g_132 = {0L,0x3013L,0x2A43L};
static struct S0 g_140 = {-0,27,21019,359};
static unsigned long long g_147 = 18446744073709551615UL;
static unsigned long long g_156 = 18446744073709551615UL;
static char g_168 = 1L;
static int g_182 = (-1L);
static struct S2 g_186 = {{0xAFDC62DB5C1620E1LL,0x151EL,0x5FF2L},0x42L};
static long long g_205 = 0xCF321D07C0FF9DDBLL;
static char *g_212 = &g_186.f1;
static char **g_211 = &g_212;
static int *g_224 = &g_73;
static unsigned short g_230 = 0x9B99L;
static unsigned short g_240 = 65531UL;
static struct S1 *g_321 = &g_186.f0;
static struct S1 **g_320 = &g_321;
static struct S0 g_405 = {-0,34,6574,255};
static unsigned g_409 = 18446744073709551615UL;
static volatile struct S0 g_416 = {-0,35,16333,296};
static unsigned short g_417 = 0UL;
static volatile struct S0 g_428 = {-1,22,6366,157};
static volatile struct S0 *g_427 = &g_428;
static char **g_448 = (void*)0;
static unsigned *g_453 = &g_128;
static unsigned **g_452 = &g_453;
static unsigned ***g_451 = &g_452;
static volatile struct S0 g_454 = {1,28,10679,402};
static struct S2 *g_487 = &g_186;
static struct S2 **g_486 = &g_487;
static struct S0 g_493 = {1,39,29004,213};
static unsigned char g_557 = 0UL;
static struct S0 g_585 = {-1,19,27526,66};



static struct S0 func_1(void);
static unsigned short func_10(int p_11, unsigned p_12, short p_13);
static unsigned char func_14(unsigned short p_15, short p_16, char p_17, int p_18, unsigned p_19);
static unsigned short func_24(short p_25, struct S2 p_26, unsigned long long p_27);
static int * func_41(long long p_42, int * p_43);
static long long func_46(short p_47, int * p_48);
static int * func_51(char p_52, int * p_53, unsigned short p_54);
static unsigned long long func_56(unsigned long long p_57, unsigned char p_58, unsigned char p_59);
static struct S2 func_60(int * p_61, unsigned short p_62, int * p_63);
static int * func_64(unsigned long long p_65, int * p_66, int * p_67);
static struct S0 func_1(void)
{
    unsigned char l_20 = 0xFDL;
    struct S2 l_36 = {{-9L,0xECCEL,0x05ABL},0x36L};
    unsigned short l_346 = 0UL;
    int *l_365 = &g_73;
    long long *l_384 = &g_205;
    char *l_406 = (void*)0;
    unsigned l_407 = 1UL;
    unsigned l_420 = 18446744073709551606UL;
    struct S1 *l_445 = &g_186.f0;
    unsigned short l_496 = 0xDE85L;
    int *l_510 = &g_182;
    int *l_533 = &g_73;
    unsigned l_556 = 0x948EF92FL;
    if (g_2)
    {
        unsigned short l_9 = 0x2C87L;
        unsigned l_21 = 8UL;
        long long *l_249 = &g_205;
        int *l_332 = &g_73;
        (*l_332) = (+(safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(l_9, func_10((func_14((((+g_2) , 0UL) <= l_20), (l_21 & (g_2 , ((*l_249) = ((safe_lshift_func_int16_t_s_u((l_9 & l_20), func_24((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(0xD423L, 1L)) , g_2), l_20)) , l_20), g_2)) && 0xA3C9E4A0435E45DBLL), 7)), l_36, g_2))) , g_140.f2)))), (*g_212), (*g_72), g_186.f0.f1) && l_9), l_36.f0.f1, l_21))) & l_36.f1), 0x7FCBA1A656AFC290LL)), 0xACL)));

        ;

        ;
    }
    else
    {
        struct S2 *l_333 = (void*)0;
        struct S2 *l_334 = &l_36;
        unsigned *l_341 = &g_128;
        int l_345 = 0xBC33D4B2L;
        short *l_347 = &l_36.f0.f1;
        int *l_348 = &g_182;
        unsigned long long l_349 = 0xB248284AA03B7EA7LL;
        int l_358 = (-3L);
        int *l_367 = &g_106;
        (*l_348) |= (((*l_334) = ((**g_99) , g_186)) , ((*g_224) = ((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((g_240 = 0x706BL), 14)) , ((*l_341) = g_89.f2)), ((safe_unary_minus_func_int64_t_s(((safe_mod_func_int8_t_s_s(((*g_224) < (((*l_347) |= ((l_346 = l_345) , (g_168 ^ ((l_36.f1 || (*g_212)) != 0xDB8C9FC6L)))) || g_106)), l_36.f0.f2)) <= (*g_224)))) < (-3L)))), (*g_212))) || g_113)));
        if (l_349)
        {
            int *l_355 = &g_182;
            unsigned short l_357 = 65533UL;
            short **l_361 = (void*)0;
            int **l_363 = (void*)0;
            int **l_364 = &l_355;
            int **l_366 = &l_348;
            for (g_186.f0.f1 = (-20); (g_186.f0.f1 == 12); g_186.f0.f1 = safe_add_func_int32_t_s_s(g_186.f0.f1, 8))
            {
                char ***l_354 = &g_211;
                int *l_356 = (void*)0;
                for (g_128 = 11; (g_128 <= 34); g_128++)
                {
                    return g_140;
                }
                (*g_224) &= ((((((((*l_347) ^= (func_60(&g_106, (*l_355), &g_182) , l_357)) >= 0x8DE1L) && l_20) || g_101) & l_36.f1) ^ (*l_348)) == 1L);

                ;
                if (l_358)
                    continue;
                for (l_36.f0.f2 = 0; (l_36.f0.f2 != 3); l_36.f0.f2 = safe_add_func_int64_t_s_s(l_36.f0.f2, 8))
                {
                    short ***l_362 = &l_361;
                    (*l_362) = l_361;
                    if ((*g_224))
                        continue;
                }
            }

            ;
            (*l_348) &= 3L;
            (*l_366) = (l_365 = ((*l_364) = (void*)0));

            ;
            ;
            ;
            (*l_364) = &g_182;

            ;
        }
        else
        {
            int **l_368 = &l_348;
            (*l_368) = l_367;

            ;
        }

        ;
        ;
        ;
        for (l_345 = 0; (l_345 >= (-13)); l_345 = safe_sub_func_int64_t_s_s(l_345, 3))
        {
            (*l_334) = func_60(l_365, g_89.f2, l_365);

            ;
        }
    }

    ;

    ;
    ;
    for (g_156 = 0; (g_156 < 22); g_156 = safe_add_func_uint8_t_u_u(g_156, 1))
    {
        unsigned *l_373 = &g_128;
        int l_374 = 0xAB0AF10BL;
        char *l_375 = &l_36.f1;
        unsigned long long *l_376 = &g_147;
        struct S2 l_394 = {{1L,0xF069L,0xE4E0L},7L};
        int l_412 = 4L;
        short l_433 = (-9L);
        unsigned ***l_523 = &g_452;
        unsigned long long l_526 = 0x3357E4F9625D5A57LL;
        struct S2 l_581 = {{-10L,0xEDEDL,0L},1L};
    }
    g_92 = (g_585 , ((*l_510) >= (*l_510)));
    return (*g_427);
}







static unsigned short func_10(int p_11, unsigned p_12, short p_13)
{
    int l_329 = (-9L);
    struct S2 *l_330 = &g_186;
    int l_331 = (-1L);
    l_331 |= (l_329 , (&g_186 == l_330));
    return l_331;
}







static unsigned char func_14(unsigned short p_15, short p_16, char p_17, int p_18, unsigned p_19)
{
    unsigned l_255 = 1UL;
    int *l_258 = (void*)0;
    struct S2 l_289 = {{-1L,0L,0L},0x7EL};
    struct S1 *l_295 = &l_289.f0;
    struct S1 **l_296 = &l_295;
    unsigned long long *l_301 = &g_147;
    unsigned char l_302 = 1UL;
    char *l_303 = &l_289.f1;
    int *l_304 = (void*)0;
    int **l_305 = &g_224;
    for (p_18 = (-27); (p_18 >= (-9)); p_18++)
    {
        unsigned l_252 = 0xE2DA87B3L;
        int l_256 = 0xAFF28C12L;
        unsigned char *l_270 = &g_113;
        int **l_283 = (void*)0;
        struct S2 l_293 = {{0x3A20F636BEBD6530LL,0L,-1L},0xC6L};
        struct S2 *l_294 = &g_186;
    }
    (*l_296) = l_295;
    (*l_305) = func_51(((*l_303) ^= ((**g_211) = (safe_mod_func_uint32_t_u_u((((*g_100) , p_18) == (g_240 ^ ((l_302 = (safe_mod_func_uint32_t_u_u((0x6EC0BB6850A1A16BLL ^ ((((*l_301) |= g_205) , g_205) , ((&g_186 != &g_186) != (((((p_15 , p_17) && g_156) || g_92) & 0xCBL) > 252UL)))), g_156))) & p_17))), 5L)))), l_304, g_205);

    ;

    ;
    if (p_17)
    {
        struct S0 *l_312 = &g_140;
        struct S0 **l_311 = &l_312;
        struct S0 ***l_310 = &l_311;
        struct S0 ***l_314 = &l_311;
        struct S0 ****l_313 = &l_314;
        struct S0 ***l_316 = &l_311;
        struct S0 ****l_315 = &l_316;
        char ***l_317 = &g_211;
        int *l_318 = &g_73;
        (*l_318) = (1UL > (safe_add_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(((*l_301) |= ((l_310 != ((*l_315) = ((*l_313) = &l_311))) || 4294967289UL)), (g_132.f0 > ((l_317 == &g_211) & p_19)))) || p_17), p_18)));
    }
    else
    {
        struct S1 **l_319 = &l_295;
        unsigned char *l_322 = (void*)0;
        unsigned char *l_323 = &l_302;
        int l_326 = 0L;
        unsigned short *l_327 = &g_230;
        int *l_328 = &g_182;
        (*l_328) |= (((((*l_323) = (+(l_319 == g_320))) , &g_113) != (void*)0) >= (((*l_327) = (safe_mod_func_uint8_t_u_u(func_56(l_326, (9L <= p_19), p_17), 1L))) != g_2));
        g_92 &= ((void*)0 != l_328);
    }
    return g_186.f1;
}







static unsigned short func_24(short p_25, struct S2 p_26, unsigned long long p_27)
{
    char l_70 = 0xCCL;
    unsigned char l_104 = 252UL;
    int *l_105 = &g_106;
    struct S2 l_246 = {{0xA1AE95A9EE059EF3LL,0L,0x7880L},0xB5L};
    int **l_248 = &g_224;
    for (p_26.f0.f2 = 0; (p_26.f0.f2 == (-2)); p_26.f0.f2 = safe_sub_func_uint32_t_u_u(p_26.f0.f2, 6))
    {
        int *l_160 = (void*)0;
        for (p_26.f1 = 0; (p_26.f1 > (-8)); p_26.f1 = safe_sub_func_uint64_t_u_u(p_26.f1, 3))
        {
            short l_55 = 8L;
            char *l_71 = &l_70;
            int **l_245 = &g_72;
            struct S2 *l_247 = &l_246;
        }
    }
    (*l_248) = l_105;

    ;
    return (*l_105);
}







static int * func_41(long long p_42, int * p_43)
{
    struct S2 *l_225 = &g_186;
    struct S2 **l_226 = &l_225;
    struct S0 *l_227 = &g_140;
    struct S0 **l_228 = &l_227;
    unsigned short *l_229 = &g_230;
    int l_238 = 4L;
    unsigned short *l_239 = &g_240;
    unsigned *l_243 = &g_128;
    unsigned **l_242 = &l_243;
    unsigned ***l_241 = &l_242;
    int *l_244 = &g_92;
    (*l_226) = l_225;
    (*l_228) = l_227;
    (*l_244) = ((((*l_229) = g_132.f2) ^ (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(0x03L, (safe_rshift_func_uint16_t_u_s(((((((*l_241) = (((*l_239) = ((((g_182 , (void*)0) != &g_128) < (p_42 != (safe_unary_minus_func_int32_t_s((((p_42 >= l_238) != g_156) != g_140.f3))))) , 0xDD9FL)) , (void*)0)) != &l_243) == 255UL) , 1L) || l_238), 4)))), 3))) || p_42);

    ;
    (*l_244) |= 0x26B5A989L;
    return p_43;


}







static long long func_46(short p_47, int * p_48)
{
    short l_215 = 0L;
    int *l_216 = &g_106;
    unsigned long long *l_217 = &g_147;
    unsigned *l_219 = &g_128;
    unsigned **l_218 = &l_219;
    int **l_220 = &l_216;
    (*l_216) = (l_215 | func_56((((g_182 || 4294967290UL) == ((*l_216) = (g_205 == p_47))) , p_47), ((((*l_217) ^= p_47) & p_47) , (((*l_218) = p_48) == (void*)0)), g_186.f0.f2));

    ;
    (*l_220) = p_48;

    ;
    for (p_47 = (-27); (p_47 > 29); p_47 = safe_add_func_int8_t_s_s(p_47, 8))
    {
        int **l_223 = &g_72;
        g_224 = ((*l_223) = ((*l_220) = p_48));

        ;
    }

    ;
    return g_89.f3;
}







static int * func_51(char p_52, int * p_53, unsigned short p_54)
{
    struct S1 l_165 = {0L,-7L,-8L};
    int l_166 = (-3L);
    char *l_167 = &g_168;
    struct S0 *l_178 = &g_140;
    short *l_179 = &g_88;
    int *l_196 = &g_73;
    unsigned char l_201 = 5UL;
    unsigned long long l_204 = 0x4B4B0C768C178462LL;
    l_166 = (safe_add_func_uint64_t_u_u(((func_56((safe_mod_func_uint8_t_u_u(g_89.f2, g_2)), p_54, p_52) , (l_165 , p_53)) != p_53), (l_165.f0 != 4294967291UL)));
    if (((l_167 = l_167) != (p_52 , (void*)0)))
    {
        struct S0 *l_177 = &g_140;
        int *l_180 = (void*)0;
        int *l_181 = &g_182;
        (*l_181) |= (safe_mod_func_int8_t_s_s((func_56((safe_sub_func_int8_t_s_s(g_168, (g_132 , (safe_mod_func_uint64_t_u_u(p_52, ((((l_165.f2 , l_177) != l_178) | ((*g_99) == l_179)) || (l_166 < 0UL))))))), p_52, g_140.f3) <= 0xF1995C1DL), g_2));
        if (((*l_181) = (safe_sub_func_int64_t_s_s((g_140.f3 > (*l_181)), 0xB0B60EEEB2DE1998LL))))
        {
            (*l_181) |= p_54;
            (*l_181) = g_92;
        }
        else
        {
            int *l_185 = &l_166;
            (*l_185) &= g_182;
            (*l_185) = (*l_185);
            (*l_185) = (*l_181);
        }
    }
    else
    {
        short l_192 = 8L;
        int *l_193 = (void*)0;
        char **l_194 = &l_167;
        char ***l_195 = &l_194;
        if ((g_186 , 0x21E60E50L))
        {
            int *l_187 = &g_73;
            struct S0 **l_188 = (void*)0;
            struct S0 ***l_189 = &l_188;
            (*l_187) |= l_166;
            (*l_187) = (!g_140.f0);
            (*l_189) = l_188;
        }
        else
        {
            for (g_92 = 0; (g_92 > 14); ++g_92)
            {
                if (l_192)
                    break;
            }
            return l_193;


        }
        (*l_195) = l_194;
    }
    (*l_196) ^= l_165.f1;
    for (p_54 = 0; (p_54 == 6); p_54 = safe_add_func_uint16_t_u_u(p_54, 7))
    {
        unsigned l_202 = 0x833BBF8EL;
        unsigned char *l_203 = &g_113;
        unsigned long long *l_206 = &l_204;
        (*l_196) = (g_186.f1 , (((safe_rshift_func_int16_t_s_u((p_54 ^ l_201), l_202)) ^ (func_56((0x3195B5E5L > ((((*l_206) = ((0L & ((p_54 , (g_205 ^= ((p_54 <= ((*l_203) = func_56(p_52, (*l_196), p_54))) > l_204))) == p_54)) > (-10L))) != p_52) | l_202)), p_52, g_140.f3) & l_201)) >= l_165.f2));
        for (g_168 = 0; (g_168 > 28); g_168++)
        {
            char **l_210 = (void*)0;
            char ***l_209 = &l_210;
            char **l_214 = (void*)0;
            char ***l_213 = &l_214;
            (*l_213) = (g_211 = ((*l_209) = &l_167));

            ;
            ;
            ;
            (*l_196) |= p_54;
        }
        (*l_196) ^= g_89.f0;
    }

    ;
    return p_53;



}







static unsigned long long func_56(unsigned long long p_57, unsigned char p_58, unsigned char p_59)
{
    char l_110 = 0xA2L;
    short l_111 = (-10L);
    unsigned char *l_112 = &g_113;
    int *l_114 = (void*)0;
    int *l_115 = &g_92;
    int *l_158 = (void*)0;
    int *l_159 = &g_73;
    l_111 = l_110;
    if (((*l_115) = ((l_110 >= (g_88 != p_59)) >= ((*l_112) = 0xD2L))))
    {
        unsigned long long l_120 = 9UL;
        unsigned *l_127 = &g_128;
        unsigned l_131 = 4294967289UL;
        g_132 = ((safe_sub_func_int16_t_s_s(p_57, (func_60(&g_73, g_2, l_127) , (-1L)))) , g_132);

        ;
        for (l_131 = (-22); (l_131 > 6); l_131 = safe_add_func_uint64_t_u_u(l_131, 2))
        {
            struct S1 l_135 = {-2L,0xFFFFL,0xE599L};
            struct S1 *l_136 = (void*)0;
            struct S1 *l_137 = &l_135;
            struct S0 *l_139 = &g_140;
            struct S0 **l_138 = &l_139;
            (*l_137) = l_135;
            (*l_138) = (void*)0;

            ;
        }
        (*l_115) &= (-4L);
        (*l_115) ^= (-1L);
    }
    else
    {
        unsigned l_145 = 8UL;
        unsigned long long *l_146 = &g_147;
        unsigned long long *l_155 = &g_156;
        int *l_157 = &g_73;
        (*l_157) &= (safe_rshift_func_int8_t_s_u(p_58, (((*l_146) |= ((safe_add_func_int8_t_s_s(l_145, ((*l_115) &= (g_89.f2 ^ g_106)))) <= l_145)) < (p_57 >= (safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s(9L, ((*l_155) = (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_u(g_128, l_145)) >= 0x0828E8F0F39A9842LL)))))), g_140.f3))))));
        (*l_115) = g_88;
    }
    (*l_159) |= (*l_115);
    return g_147;
}







static struct S2 func_60(int * p_61, unsigned short p_62, int * p_63)
{
    int *l_107 = (void*)0;
    int **l_108 = &g_72;
    struct S2 l_109 = {{-10L,2L,3L},0x69L};
    (*l_108) = l_107;

    ;
    return l_109;
}







static int * func_64(unsigned long long p_65, int * p_66, int * p_67)
{
    unsigned short l_76 = 0UL;
    int *l_80 = &g_73;
    if (((*p_67) = (*g_72)))
    {
        if ((l_76 ^= ((*g_72) != (safe_lshift_func_uint8_t_u_u(g_2, 2)))))
        {
            unsigned l_79 = 6UL;
            for (g_73 = 0; (g_73 > (-27)); --g_73)
            {
                l_79 |= (*g_72);
            }
            (*g_72) = (*g_72);
        }
        else
        {
            return p_67;


        }
        return l_80;


    }
    else
    {
        short *l_87 = &g_88;
        int l_90 = 9L;
        int *l_91 = &g_92;
        unsigned l_93 = 0x0B5F9D9DL;
        struct S2 l_94 = {{0x634C778C533BF952LL,0L,1L},0x4EL};
        (*l_91) |= (safe_add_func_int16_t_s_s((((*l_87) = (1UL != (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(0x39L, 2)), g_2)))) ^ (((g_73 & 0xFE49608984295AD7LL) , g_89) , (l_90 &= 0xBE05L))), p_65));
        (*l_91) |= (l_93 , ((l_94 , p_65) >= (safe_rshift_func_int16_t_s_u(p_65, 8))));
        if ((*g_72))
        {
            (*p_67) = (safe_add_func_int64_t_s_s(g_73, (!g_2)));
        }
        else
        {
            volatile short ***l_102 = &g_99;
            int **l_103 = &l_91;
            (*l_102) = g_99;
            (*l_103) = ((*l_80) , &g_92);
        }
    }
    return &g_73;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2, "g_89.f2", print_hash_value);
    transparent_crc(g_89.f3, "g_89.f3", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_132.f0, "g_132.f0", print_hash_value);
    transparent_crc(g_132.f1, "g_132.f1", print_hash_value);
    transparent_crc(g_132.f2, "g_132.f2", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_186.f0.f0, "g_186.f0.f0", print_hash_value);
    transparent_crc(g_186.f0.f1, "g_186.f0.f1", print_hash_value);
    transparent_crc(g_186.f0.f2, "g_186.f0.f2", print_hash_value);
    transparent_crc(g_186.f1, "g_186.f1", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_240, "g_240", print_hash_value);
    transparent_crc(g_405.f0, "g_405.f0", print_hash_value);
    transparent_crc(g_405.f1, "g_405.f1", print_hash_value);
    transparent_crc(g_405.f2, "g_405.f2", print_hash_value);
    transparent_crc(g_405.f3, "g_405.f3", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_416.f0, "g_416.f0", print_hash_value);
    transparent_crc(g_416.f1, "g_416.f1", print_hash_value);
    transparent_crc(g_416.f2, "g_416.f2", print_hash_value);
    transparent_crc(g_416.f3, "g_416.f3", print_hash_value);
    transparent_crc(g_417, "g_417", print_hash_value);
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_428.f3, "g_428.f3", print_hash_value);
    transparent_crc(g_454.f0, "g_454.f0", print_hash_value);
    transparent_crc(g_454.f1, "g_454.f1", print_hash_value);
    transparent_crc(g_454.f2, "g_454.f2", print_hash_value);
    transparent_crc(g_454.f3, "g_454.f3", print_hash_value);
    transparent_crc(g_493.f0, "g_493.f0", print_hash_value);
    transparent_crc(g_493.f1, "g_493.f1", print_hash_value);
    transparent_crc(g_493.f2, "g_493.f2", print_hash_value);
    transparent_crc(g_493.f3, "g_493.f3", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_585.f0, "g_585.f0", print_hash_value);
    transparent_crc(g_585.f1, "g_585.f1", print_hash_value);
    transparent_crc(g_585.f2, "g_585.f2", print_hash_value);
    transparent_crc(g_585.f3, "g_585.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
