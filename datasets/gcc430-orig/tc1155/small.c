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


union U0 {
   unsigned short f0;
};

union U1 {
   int f0;
   unsigned f1;
   unsigned char f2;
};

union U2 {
   short f0;
   unsigned long long f1;
   int f2;
   unsigned char f3;
};


static int g_21 = 1L;
static union U0 g_27 = {0xB6A7L};
static int g_52 = 7L;
static unsigned long long g_79 = 2UL;
static unsigned long long g_81 = 0xB93497140DA8F9E1LL;
static union U0 g_83 = {0UL};
static int **g_98 = (void*)0;
static char g_104 = 0xEAL;
static int g_105 = 0x94618C45L;
static int g_113 = 1L;
static union U0 g_117 = {0UL};
static union U0 *g_116 = &g_117;
static union U1 g_139 = {0x2BDF33D8L};
static union U1 *g_138 = &g_139;
static int *g_165 = &g_113;
static short g_183 = 0x8B87L;
static int g_205 = (-7L);
static unsigned g_272 = 0UL;
static union U0 g_275 = {0x02B2L};
static union U0 *g_274 = &g_275;
static char *g_285 = &g_104;
static union U2 g_292 = {1L};
static char g_352 = 0x06L;
static union U2 ***g_365 = (void*)0;
static unsigned *g_370 = (void*)0;
static unsigned **g_369 = &g_370;
static union U0 g_424 = {1UL};
static long long g_435 = 0x04985C1A0240F325LL;
static unsigned char *g_441 = &g_292.f3;
static unsigned char **g_440 = &g_441;
static unsigned long long ***g_522 = (void*)0;
static unsigned long long ****g_521 = &g_522;
static unsigned long long ****g_524 = &g_522;
static unsigned g_590 = 4294967288UL;
static union U2 *g_682 = &g_292;



static unsigned func_1(void);
static union U0 * func_2(char p_3);
static union U0 * func_12(int p_13, union U0 * p_14, int p_15);
static unsigned char func_16(union U1 p_17);
static union U0 * func_29(union U2 p_30, union U0 * p_31, union U0 * p_32, unsigned short p_33);
static union U0 * func_35(unsigned short p_36, int p_37, union U0 p_38);
static unsigned short func_39(unsigned short p_40);
static union U0 * func_43(short p_44, union U0 * p_45);
static union U0 * func_47(int p_48, int p_49);
static short func_58(int * p_59, union U0 * p_60, unsigned char p_61, union U0 * p_62);
static unsigned func_1(void)
{
    unsigned l_4 = 0UL;
    union U0 **l_711 = &g_116;
    (*l_711) = func_2(l_4);
    return g_104;
}







static union U0 * func_2(char p_3)
{
    unsigned char l_5 = 0UL;
    union U1 l_18 = {0xB1B6FD43L};
    int *l_265 = (void*)0;
    int *l_266 = &l_18.f0;
    int ***l_267 = &g_98;
    unsigned char l_270 = 0UL;
    unsigned *l_271 = &g_272;
    unsigned char l_273 = 254UL;
    union U0 *l_423 = &g_424;
    unsigned char **l_444 = &g_441;
    union U0 *l_456 = (void*)0;
    union U1 l_468 = {3L};
    unsigned l_481 = 0xF64507E3L;
    long long *l_482 = &g_435;
    unsigned long long ***l_535 = (void*)0;
    short l_542 = 0xA810L;
    union U1 l_553 = {0xA022ACAEL};
    union U2 **l_598 = (void*)0;
    unsigned short *l_604 = (void*)0;
    unsigned short *l_607 = &g_275.f0;
    unsigned l_708 = 0x3F7E1A8BL;
    if ((l_5 < ((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(((g_274 = func_12(((((*l_266) = (l_5 != func_16(l_18))) < (l_267 == (void*)0)) | (65535UL > (((p_3 | ((safe_add_func_uint8_t_u_u((((*l_271) = ((p_3 | l_270) && g_183)) < l_273), p_3)) || p_3)) & g_183) < g_205))), g_274, p_3)) != l_423), 7)) > 1L), 4)) < 0UL)))
    {
        int *l_427 = &g_52;
        char *l_436 = &g_352;
        union U0 *l_438 = (void*)0;
        unsigned char **l_442 = &g_441;
        unsigned char ***l_443 = (void*)0;
        unsigned char ***l_445 = (void*)0;
        unsigned char ***l_446 = &l_442;
        for (g_83.f0 = 10; (g_83.f0 > 37); g_83.f0 = safe_add_func_int16_t_s_s(g_83.f0, 4))
        {
            int **l_428 = &l_266;
            long long *l_433 = (void*)0;
            long long *l_434 = &g_435;
            char *l_437 = &g_352;
            unsigned char *l_439 = &l_270;
            (*l_428) = l_427;
            if (p_3)
            {
                return &g_117;
            }
            else
            {
                if (p_3)
                    break;
            }
            (*l_266) = (safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u((0xE783C7C355B61EB1LL ^ ((*l_434) = 0x585A6EE20DBA3BF4LL)), (((g_285 = &p_3) == (l_437 = l_436)) != ((*l_439) = func_58(l_427, l_438, p_3, l_423))))), p_3));
        }
        (*l_427) = (g_440 == ((*l_446) = (l_444 = l_442)));
        return &g_83;
    }
    else
    {
        union U0 *l_455 = &g_83;
        union U0 **l_457 = &g_116;
        int l_458 = (-5L);
        union U1 *l_467 = &g_139;
        for (g_424.f0 = 0; (g_424.f0 > 25); g_424.f0++)
        {
            union U1 **l_449 = &g_138;
            union U1 **l_450 = (void*)0;
            union U1 *l_452 = &g_139;
            union U1 **l_451 = &l_452;
            (*l_266) = 1L;
            (*l_451) = ((*l_449) = &g_139);
            (*l_266) = (-10L);
        }
        if ((safe_mod_func_uint64_t_u_u(func_58(&g_21, l_455, (*g_441), ((*l_457) = l_456)), ((7UL >= (0xF6C9L & 0xBB3EL)) && (((l_458 & p_3) >= 0xFA37L) >= p_3)))))
        {
            int *l_461 = &g_52;
            for (l_18.f0 = 29; (l_18.f0 <= (-2)); --l_18.f0)
            {
                int **l_462 = (void*)0;
                int *l_463 = (void*)0;
                int **l_464 = &l_461;
                (*l_464) = (l_463 = l_461);
            }
        }
        else
        {
            int **l_465 = &l_265;
            union U0 *l_466 = &g_424;
            (*l_465) = (void*)0;
            return l_466;
        }
        l_467 = (void*)0;
    }
    if ((p_3 < (safe_rshift_func_uint16_t_u_s((((*l_266) = 0x9EB29FBDL) | 8UL), (safe_rshift_func_int8_t_s_u((*g_285), (safe_sub_func_int32_t_s_s((g_113 = 5L), (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((((*l_482) = ((safe_mod_func_uint8_t_u_u((*g_441), (**g_440))) & l_481)) <= g_104) | 8UL), g_183)), p_3))))))))))
    {
        union U0 *l_485 = &g_424;
        int *l_488 = &l_468.f0;
        unsigned char ***l_489 = &l_444;
        unsigned long long ***l_509 = (void*)0;
        union U0 **l_575 = &l_423;
        unsigned long long l_599 = 0x67138265B9F92A26LL;
        unsigned short **l_605 = (void*)0;
        unsigned short **l_606 = &l_604;
        unsigned short **l_608 = &l_607;
        int *l_609 = &g_139.f0;
        union U2 *l_625 = &g_292;
        unsigned **l_643 = &l_271;
        for (l_18.f2 = 0; (l_18.f2 > 47); l_18.f2 = safe_add_func_uint16_t_u_u(l_18.f2, 2))
        {
            unsigned l_487 = 18446744073709551608UL;
            union U0 *l_493 = (void*)0;
            int l_495 = 0x706DE4CBL;
            union U1 l_506 = {0x7F07D8B7L};
            unsigned long long ***l_536 = (void*)0;
            int *l_543 = &g_52;
            unsigned l_578 = 0x853BB084L;
            if ((p_3 | (l_485 != l_456)))
            {
                unsigned char l_486 = 1UL;
                unsigned short l_492 = 5UL;
                union U0 **l_494 = &l_493;
                (*l_488) = ((l_486 | (((*l_482) = ((l_495 = (l_487 | func_58(l_488, l_485, ((void*)0 == l_489), ((*l_494) = func_43((4294967292UL <= (safe_add_func_uint32_t_u_u(l_492, p_3))), l_493))))) == 0L)) != 0xEF8D0AE29910F593LL)) == 0UL);
            }
            else
            {
                int **l_496 = &l_488;
                int **l_497 = &l_265;
                (*l_497) = ((*l_496) = l_488);
                return l_493;
            }
        }
        if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s((((*l_606) = l_604) != ((*l_608) = l_607)), 1)), 13)))
        {
            int l_616 = 0xA8DAC34FL;
            int *l_628 = &l_553.f0;
            union U2 ***l_634 = &l_598;
            if (g_292.f3)
            {
                union U1 l_612 = {0x944E3C0BL};
                union U2 *l_626 = &g_292;
                int *l_629 = &g_139.f0;
                unsigned char ***l_630 = (void*)0;
                union U0 *l_632 = (void*)0;
                l_609 = (l_488 = l_488);
                for (l_553.f0 = 0; (l_553.f0 == (-28)); --l_553.f0)
                {
                    short *l_615 = &g_292.f0;
                    int *l_617 = &g_52;
                    int **l_618 = &l_617;
                    g_165 = &g_21;
                    (*l_266) = (!p_3);
                    l_616 = ((~((!((*l_615) = (safe_lshift_func_int16_t_s_s(p_3, 12)))) < ((-7L) >= (*g_285)))) <= 9UL);
                    (*l_618) = l_617;
                }
                for (g_27.f0 = 5; (g_27.f0 != 41); g_27.f0 = safe_add_func_int64_t_s_s(g_27.f0, 1))
                {
                    int *l_621 = (void*)0;
                    int **l_622 = &l_265;
                    unsigned char ****l_631 = &l_489;
                    (*l_622) = l_621;
                    for (l_481 = 0; (l_481 != 41); l_481++)
                    {
                        unsigned l_627 = 7UL;
                        l_616 = ((*l_609) = (l_627 = (l_625 != l_626)));
                        l_628 = &g_21;
                    }
                    l_629 = (*l_622);
                    (*l_628) = ((p_3 != func_58(&g_113, ((*l_575) = func_43((l_630 != ((*l_631) = &g_440)), &g_117)), (**g_440), l_632)) || 65530UL);
                }
                (*l_609) = ((void*)0 != &l_509);
            }
            else
            {
                unsigned l_633 = 0UL;
                (*l_609) = l_633;
            }
            (*l_634) = (void*)0;
        }
        else
        {
            int *l_637 = &g_21;
            int l_638 = 1L;
            union U0 **l_673 = (void*)0;
            union U2 *l_686 = &g_292;
            if ((safe_rshift_func_uint16_t_u_s((0xEAL | ((**g_440) == func_58(l_637, ((*l_575) = &g_27), (*l_488), &g_424))), func_58(&g_52, l_456, (**g_440), &g_275))))
            {
                unsigned **l_644 = &l_271;
                int *l_656 = (void*)0;
                union U0 *l_665 = &g_83;
                union U0 ***l_674 = &l_673;
                if (p_3)
                {
                    (*l_637) = l_638;
                }
                else
                {
                    unsigned long long *l_641 = (void*)0;
                    unsigned long long *l_642 = &g_79;
                    short *l_655 = &g_292.f0;
                    union U1 *l_658 = &g_139;
                    union U0 *l_666 = &g_27;
                    (*l_637) = (safe_add_func_int8_t_s_s(((*g_285) = p_3), (~func_39(((g_183 >= ((*l_642) = p_3)) <= ((l_644 = l_643) == l_643))))));
                    if ((safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(g_21, (~(safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((*l_655) = (safe_rshift_func_int8_t_s_u(4L, 7))), 0x9954L)), func_58(l_656, &g_275, func_39(p_3), l_456)))))) && (*g_285)), g_275.f0)))
                    {
                        int **l_657 = &g_165;
                        union U1 **l_659 = &l_658;
                        long long *l_660 = &g_435;
                        long long **l_661 = (void*)0;
                        long long **l_662 = &l_482;
                        (*l_657) = &g_21;
                        (*l_659) = l_658;
                        (**l_657) = p_3;
                        (*g_165) = (((*l_662) = l_660) != (void*)0);
                    }
                    else
                    {
                        (*l_609) = ((safe_rshift_func_int16_t_s_s(func_58(l_656, l_665, (g_139.f2 < (*l_637)), l_666), g_113)) >= ((func_58(&l_638, l_456, (**g_440), &g_27) || g_21) > (-2L)));
                    }
                }
                (*l_488) = (((**l_608) = (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint64_t_u_u((((*l_674) = l_673) == &g_116), (p_3 & (safe_sub_func_int64_t_s_s((&g_116 == &l_456), p_3))))), 7)), ((*l_488) & (safe_lshift_func_int16_t_s_u(1L, p_3)))))) & p_3);
            }
            else
            {
                union U1 **l_679 = (void*)0;
                union U1 **l_680 = &g_138;
                union U2 *l_681 = &g_292;
                (*l_488) = 0x5E389417L;
                (*l_680) = &g_139;
                g_682 = l_681;
            }
            for (l_638 = 0; (l_638 <= 29); l_638 = safe_add_func_uint16_t_u_u(l_638, 6))
            {
                union U2 *l_685 = (void*)0;
                int l_688 = (-9L);
                union U1 *l_690 = (void*)0;
                char **l_692 = &g_285;
            }
        }
        (*l_575) = func_47(((p_3 | g_292.f3) != (p_3 & (0xF3A90E59BD8FBE61LL | ((safe_sub_func_int16_t_s_s(g_104, (safe_add_func_uint64_t_u_u(p_3, func_39(((void*)0 != &g_21)))))) > p_3)))), (*l_488));
        (*l_609) = p_3;
    }
    else
    {
        union U1 l_699 = {1L};
        int **l_702 = &l_266;
        union U1 **l_704 = &g_138;
        union U1 ***l_703 = &l_704;
        if (((safe_mod_func_uint64_t_u_u(((g_352 != p_3) >= (((*l_266) | (l_699.f0 = (p_3 ^ p_3))) > (0xCCL && ((void*)0 == &l_598)))), 0x2204B0BD9E3EF17ELL)) || l_699.f2))
        {
            unsigned short l_700 = 0x1488L;
            union U1 **l_701 = &g_138;
            (*l_266) = p_3;
            (*l_266) = (l_699.f0 | l_700);
            g_682 = &g_292;
            (*l_701) = &g_139;
        }
        else
        {
            return l_423;
        }
        (*l_702) = (g_165 = &g_113);
        (*l_702) = &g_52;
        if ((l_703 == (void*)0))
        {
            (**l_702) = ((void*)0 == &l_702);
            (**l_702) = func_16((*g_138));
            return &g_117;
        }
        else
        {
            union U0 *l_705 = &g_117;
            l_705 = (void*)0;
        }
    }
    l_468.f0 = ((*l_266) = (p_3 >= (safe_sub_func_uint8_t_u_u(((void*)0 == l_271), (65535UL | (func_39(((l_708 & ((*l_482) = ((p_3 >= (safe_mod_func_uint64_t_u_u((func_39(func_58(l_271, l_423, (*g_441), l_423)) && 0x6D8AA2BEF531857FLL), p_3))) <= g_105))) ^ 0xDB08BDC09AC1EDD4LL)) & p_3))))));
    return l_423;
}







static union U0 * func_12(int p_13, union U0 * p_14, int p_15)
{
    unsigned l_278 = 1UL;
    union U1 l_296 = {0x397D4F8AL};
    int *l_305 = &l_296.f0;
    union U0 *l_306 = (void*)0;
    unsigned long long *l_348 = &g_81;
    unsigned long long **l_347 = &l_348;
    unsigned long long ***l_346 = &l_347;
    union U2 **l_350 = (void*)0;
    int *l_414 = &g_113;
    if ((safe_add_func_uint64_t_u_u((g_205 ^ l_278), g_275.f0)))
    {
        int *l_279 = &g_113;
        short l_280 = (-7L);
        unsigned char *l_321 = &g_139.f2;
        union U2 ***l_351 = &l_350;
        int *l_355 = &g_21;
        unsigned long long ***l_362 = &l_347;
        unsigned long long ***l_364 = &l_347;
        union U2 ***l_367 = &l_350;
        union U1 *l_419 = (void*)0;
        if (func_58(l_279, p_14, l_278, func_47(p_15, ((0xC464L || l_280) >= l_278))))
        {
            unsigned l_293 = 0UL;
            int *l_298 = &g_21;
            union U1 l_304 = {0xEE29DF94L};
            unsigned *l_311 = &l_304.f1;
            if (l_278)
            {
                int l_286 = 7L;
                union U2 *l_291 = &g_292;
                union U2 **l_290 = &l_291;
                union U2 ***l_289 = &l_290;
                int l_294 = 0L;
                short l_295 = 0xBDB2L;
                int *l_299 = &g_52;
                if ((l_295 = (((safe_add_func_int16_t_s_s(g_104, p_15)) ^ (g_205 ^ (l_294 = ((safe_sub_func_uint64_t_u_u((p_15 && ((l_286 = (g_285 == (void*)0)) >= ((safe_sub_func_uint32_t_u_u(((((*l_289) = (void*)0) == (void*)0) >= 0x3CL), 0UL)) != g_139.f2))), l_293)) || 0x4C28BF45L)))) & 0xC2DCE2F2AA7DFBDDLL)))
                {
                    int *l_297 = &l_294;
                    (*l_297) = ((*l_279) = (((&l_279 == (void*)0) || g_272) && p_13));
                    l_299 = l_298;
                }
                else
                {
                    (*l_279) = (safe_add_func_int16_t_s_s(g_139.f2, (p_15 & p_13)));
                }
                (*g_165) = ((*l_298) = (p_15 == (safe_sub_func_int8_t_s_s((~p_13), func_58((l_305 = l_305), l_306, g_27.f0, func_43((safe_lshift_func_uint8_t_u_u(((*l_298) = g_27.f0), (safe_lshift_func_int8_t_s_s(((p_13 && ((l_278 < g_81) >= 5UL)) | g_27.f0), (*g_285))))), &g_83))))));
                p_14 = p_14;
            }
            else
            {
                return &g_27;
            }
            l_298 = l_305;
            g_138 = &l_296;
            (*l_305) = (((*l_311) = p_15) < (safe_unary_minus_func_uint16_t_u(1UL)));
        }
        else
        {
            int l_314 = 0x0BE34E6FL;
            unsigned long long **l_344 = (void*)0;
            unsigned long long ***l_343 = &l_344;
            if (p_15)
            {
                if (p_13)
                {
                    unsigned *l_313 = &l_296.f1;
                    int **l_315 = (void*)0;
                    unsigned char *l_319 = &g_292.f3;
                    l_314 = ((*l_279) = (((*l_313) = p_13) & (*g_165)));
                    g_165 = &l_314;
                    for (l_296.f0 = 0; (l_296.f0 == (-11)); --l_296.f0)
                    {
                        int *l_318 = &l_314;
                        unsigned char **l_320 = &l_319;
                        unsigned char **l_322 = &l_321;
                        unsigned *l_328 = &g_139.f1;
                        l_318 = l_305;
                        (*l_279) = ((+((*l_328) = (((((((*l_320) = l_319) != ((*l_322) = l_321)) >= (safe_lshift_func_uint16_t_u_u(((func_39((*l_305)) & ((safe_mod_func_uint64_t_u_u(func_39((*l_318)), (*l_279))) != (safe_unary_minus_func_int32_t_s(func_39(g_79))))) & g_81), 4))) == 0L) < g_292.f0) || 0L))) || 0L);
                        return p_14;
                    }
                }
                else
                {
                    for (g_292.f3 = 18; (g_292.f3 < 23); g_292.f3 = safe_add_func_int8_t_s_s(g_292.f3, 4))
                    {
                        union U1 **l_332 = &g_138;
                        union U1 ***l_331 = &l_332;
                        (*l_331) = &g_138;
                    }
                    (*l_279) = (8L >= ((((*l_305) = 0x850A8AACL) > (safe_add_func_int8_t_s_s(((*g_285) = (safe_mod_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(((*g_285) || (~(l_314 & ((*l_321) = p_15)))), func_39(p_15))) <= p_13) == ((*l_279) == g_105)), 1UL))), p_15))) & p_15));
                    l_279 = l_279;
                }
                if ((safe_mod_func_uint64_t_u_u((0x97CB4783B3876E11LL & l_314), 1L)))
                {
                    (*g_165) = 0x5FC2021FL;
                }
                else
                {
                    union U1 **l_342 = &g_138;
                    union U1 ***l_341 = &l_342;
                    unsigned long long ****l_345 = &l_343;
                    unsigned long long ****l_349 = &l_346;
                    (*l_341) = &g_138;
                    (*g_165) = (((*l_345) = l_343) != ((*l_349) = l_346));
                }
                return &g_117;
            }
            else
            {
                return &g_117;
            }
        }
        (*l_351) = l_350;
        (*l_279) = (0x6E8CC18FD0524EEFLL & func_16(l_296));
        if ((((*l_279) = (g_352 || func_58(&g_205, func_43((0UL > ((*l_305) < (((*l_355) = ((*g_165) = (safe_lshift_func_int16_t_s_s(((void*)0 != &g_292), 13)))) < (*l_305)))), &g_27), g_81, &g_275))) | p_13))
        {
            int *l_356 = (void*)0;
            int **l_357 = (void*)0;
            int **l_358 = (void*)0;
            int **l_359 = &g_165;
            unsigned long long ****l_363 = &l_362;
            union U1 l_374 = {0x1898E5B0L};
            unsigned l_398 = 4294967295UL;
            int *l_400 = &l_374.f0;
            union U2 *l_409 = &g_292;
            (*l_359) = l_356;
            if ((4294967289UL >= (safe_add_func_int32_t_s_s((-1L), (((*l_363) = l_362) != l_364)))))
            {
                union U2 ****l_366 = &l_351;
                union U2 ****l_368 = &l_367;
                int *l_372 = &g_21;
                unsigned short l_378 = 0x39B4L;
                unsigned char l_397 = 0UL;
                union U0 *l_401 = &g_27;
                if ((((*l_366) = g_365) != ((*l_368) = l_367)))
                {
                    unsigned ***l_371 = &g_369;
                    union U0 **l_373 = (void*)0;
                    unsigned l_375 = 0x754F78D9L;
                    int *l_379 = &l_296.f0;
                    union U0 **l_394 = &l_306;
                    (*l_371) = g_369;
                    if (func_58(l_372, (p_14 = &g_117), ((*l_372) & l_375), func_47((*l_372), (l_378 = (+(g_105 || (safe_lshift_func_int8_t_s_s((-7L), 4))))))))
                    {
                        (*l_359) = l_379;
                    }
                    else
                    {
                        int *l_380 = &g_52;
                        l_372 = l_372;
                        (*l_359) = l_380;
                    }
                    if (((*l_279) | (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((*l_372), (*l_279))), func_39(((+g_275.f0) >= (**l_359)))))))
                    {
                        int *l_388 = &g_52;
                        unsigned *l_390 = &l_374.f1;
                        short *l_391 = &g_292.f0;
                        (*g_165) = (((safe_unary_minus_func_uint64_t_u(((safe_mod_func_uint32_t_u_u((*l_372), p_13)) && func_58((l_388 = l_355), &g_27, g_183, func_43(((*l_391) = (((*l_390) = (((*l_321) = ((*l_379) = (safe_unary_minus_func_int64_t_s(0x8F6E9EABD20069F1LL)))) || (*g_285))) & 4294967295UL)), p_14))))) ^ g_105) >= 0x11BBB0D9L);
                    }
                    else
                    {
                        union U1 **l_392 = (void*)0;
                        union U1 **l_393 = &g_138;
                        (*l_359) = &g_113;
                        (*l_359) = l_379;
                        (*l_359) = l_305;
                        (*l_393) = &g_139;
                    }
                    if (((((*l_394) = &g_27) != (void*)0) ^ 0xED61L))
                    {
                        l_372 = &g_21;
                    }
                    else
                    {
                        union U1 **l_399 = &g_138;
                        (*l_372) = ((p_13 || (safe_lshift_func_uint8_t_u_u((*l_279), (65534UL | (l_397 & l_398))))) >= g_113);
                        (*l_399) = &g_139;
                        (*g_165) = func_58(l_400, ((*l_394) = &g_27), (*l_355), l_401);
                    }
                }
                else
                {
                    int l_408 = 1L;
                    union U2 **l_410 = &l_409;
                    (*l_279) = ((safe_add_func_int64_t_s_s(p_13, (((*g_285) || 0L) < (0xA8L <= ((((*l_305) <= ((safe_add_func_int32_t_s_s(((*l_400) ^ 0xC921DD54L), l_408)) == (p_15 ^ 0xD667L))) <= (*g_285)) && 0x41D38EBB08DD21E3LL))))) != (*l_355));
                    l_305 = &g_113;
                    (*l_410) = l_409;
                    (*l_359) = l_279;
                }
                for (g_275.f0 = 20; (g_275.f0 <= 6); g_275.f0--)
                {
                    int l_413 = 0L;
                    (*l_359) = (*l_359);
                    (*l_372) = ((*l_305) = (g_272 & l_413));
                }
                g_165 = l_414;
            }
            else
            {
                (*l_414) = p_13;
            }
        }
        else
        {
            int **l_415 = &g_165;
            unsigned short *l_416 = &g_275.f0;
            unsigned short *l_417 = &g_83.f0;
            char l_418 = 0x85L;
            union U1 **l_420 = &l_419;
            l_305 = ((*l_415) = l_305);
            l_418 = (((*l_416) = 1UL) ^ ((p_15 | ((*l_417) = g_105)) || p_13));
            (*l_420) = l_419;
        }
    }
    else
    {
        int *l_421 = (void*)0;
        int *l_422 = &g_52;
        (*l_305) = (((*l_414) = (*l_305)) && ((*l_414) <= 0x73L));
        l_422 = l_421;
    }
    return p_14;
}







static unsigned char func_16(union U1 p_17)
{
    union U0 *l_26 = &g_27;
    int l_46 = 0x95E04A27L;
    int l_118 = 0L;
    char l_262 = 4L;
    union U1 **l_263 = (void*)0;
    union U1 **l_264 = &g_138;
    for (p_17.f1 = (-12); (p_17.f1 < 60); ++p_17.f1)
    {
        union U2 l_34 = {0x3703L};
        union U0 *l_228 = &g_117;
        unsigned short l_237 = 0x4F9EL;
        int *l_253 = &g_52;
        for (g_21 = 0; (g_21 <= 23); g_21++)
        {
            union U0 *l_28 = (void*)0;
            int *l_50 = (void*)0;
            int *l_51 = &g_52;
            union U0 *l_78 = &g_27;
            union U0 **l_77 = &l_78;
            unsigned long long *l_80 = &g_81;
            unsigned short *l_82 = &g_27.f0;
            union U0 *l_249 = &g_27;
            if ((safe_sub_func_uint32_t_u_u((l_26 != (void*)0), (l_28 == ((*l_77) = func_29(l_34, func_35(func_39(((*l_82) = ((((*l_80) = ((safe_mod_func_int64_t_s_s((g_79 = (&g_27 != ((*l_77) = func_43(l_46, func_47(((*l_51) = g_21), (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((l_50 != &l_46), l_46)), 14))))))), 0x668F781BE2FC3C73LL)) ^ p_17.f2)) == g_27.f0) >= p_17.f2))), g_21, g_83), g_116, l_118))))))
            {
                union U2 *l_221 = &l_34;
                union U2 **l_220 = &l_221;
                int l_224 = 0xA97F434AL;
                (*l_220) = (void*)0;
                (*l_51) = (p_17.f0 ^ (func_39(((*l_82) = (safe_lshift_func_int8_t_s_s(l_224, 2)))) & l_224));
                (*g_165) = (safe_mod_func_uint16_t_u_u(4UL, (+(-9L))));
            }
            else
            {
                long long l_227 = 0L;
                int *l_238 = &g_52;
                unsigned short *l_247 = &g_83.f0;
                unsigned char *l_248 = &g_139.f2;
                int ***l_250 = &g_98;
                (*l_77) = func_43(l_227, l_228);
                (*g_165) = (((((((safe_mod_func_uint64_t_u_u((!(safe_mod_func_int64_t_s_s((l_46 = (safe_sub_func_int8_t_s_s(((g_105 | l_118) || (*l_51)), (safe_add_func_uint8_t_u_u(l_237, (((*l_82) = (((*l_247) = func_58(l_238, l_228, (((*l_248) = (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_118, (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((-1L) <= ((void*)0 == l_247)), 3)), p_17.f0)))), 3))) > l_237), l_249)) | p_17.f2)) == 0xA31DL)))))), g_21))), g_113)) & l_118) > 0x994BCA523A4458DFLL) >= p_17.f2) || (*l_238)) >= g_183) || g_113);
                if ((l_250 == l_250))
                {
                    for (g_139.f2 = 24; (g_139.f2 > 19); g_139.f2--)
                    {
                        (*g_165) = p_17.f1;
                        if (p_17.f2)
                            continue;
                        return l_34.f3;
                    }
                }
                else
                {
                    int **l_254 = &g_165;
                    (*l_254) = l_253;
                }
                (*g_165) = (((((*l_80) = (func_39((*l_238)) | (safe_mod_func_uint8_t_u_u((l_46 >= (p_17.f1 | (safe_unary_minus_func_int32_t_s((*l_253))))), (safe_add_func_int64_t_s_s(g_183, ((0UL & (0xAC2ACA09L == func_58(&g_205, l_26, l_262, l_26))) < p_17.f1))))))) && p_17.f2) > 8UL) >= p_17.f1);
            }
        }
    }
    (*l_264) = &p_17;
    return p_17.f0;
}







static union U0 * func_29(union U2 p_30, union U0 * p_31, union U0 * p_32, unsigned short p_33)
{
    unsigned l_120 = 0x618944B8L;
    int *l_146 = &g_52;
    union U0 *l_148 = &g_27;
    int ***l_155 = &g_98;
    char *l_210 = &g_104;
    unsigned l_219 = 1UL;
    if ((safe_unary_minus_func_uint32_t_u(l_120)))
    {
        int *l_126 = &g_21;
        unsigned long long *l_129 = &g_81;
        unsigned long long **l_128 = &l_129;
        int l_143 = (-3L);
        unsigned *l_191 = &g_139.f1;
        unsigned **l_190 = &l_191;
        int **l_196 = &g_165;
        for (g_117.f0 = 0; (g_117.f0 != 44); g_117.f0++)
        {
            int *l_123 = (void*)0;
            int **l_124 = (void*)0;
            int **l_125 = &l_123;
            (*l_125) = l_123;
            return &g_27;
        }
        if (func_58(l_126, p_32, p_30.f3, p_31))
        {
            int *l_127 = &g_52;
            (*l_127) = p_30.f3;
        }
        else
        {
            unsigned long long ***l_130 = &l_128;
            unsigned long long **l_132 = (void*)0;
            unsigned long long ***l_131 = &l_132;
            int l_133 = 0x41B8CD5FL;
            int *l_144 = (void*)0;
            int *l_145 = &l_143;
            (*l_131) = ((*l_130) = l_128);
            l_133 = (0UL ^ p_30.f0);
            for (g_27.f0 = 0; (g_27.f0 < 5); g_27.f0 = safe_add_func_int64_t_s_s(g_27.f0, 8))
            {
                int *l_142 = (void*)0;
                g_52 = p_33;
                for (g_81 = 0; (g_81 < 34); g_81 = safe_add_func_uint8_t_u_u(g_81, 7))
                {
                    union U1 **l_140 = &g_138;
                    int *l_141 = &g_52;
                    (*l_140) = g_138;
                    (*l_141) = func_39(g_52);
                }
                l_143 = p_30.f0;
            }
            if (((*l_145) = p_33))
            {
                int **l_147 = &l_126;
                (*l_147) = l_146;
                (*l_146) = 1L;
            }
            else
            {
                union U0 **l_149 = &g_116;
                long long l_174 = 0xDD4AC9C96BA6EED5LL;
                union U1 *l_177 = &g_139;
                (*l_146) = (*l_126);
                (*l_149) = l_148;
                for (l_133 = (-3); (l_133 < (-2)); l_133 = safe_add_func_int8_t_s_s(l_133, 9))
                {
                    int **l_184 = &l_145;
                    int **l_185 = &l_146;
                    if (p_30.f3)
                        break;
                }
                for (g_139.f0 = 0; (g_139.f0 == (-14)); g_139.f0--)
                {
                    l_126 = &g_52;
                }
            }
        }
        for (g_113 = 0; (g_113 <= 2); ++g_113)
        {
            unsigned ***l_192 = &l_190;
            int *l_195 = (void*)0;
            (*l_192) = l_190;
            (*l_146) = (p_33 >= (safe_mod_func_uint64_t_u_u(18446744073709551615UL, ((*l_129) = (*l_126)))));
            l_126 = (l_195 = &l_143);
            (*l_126) = (!(*l_195));
        }
        (*l_196) = l_146;
    }
    else
    {
        int *l_197 = &g_21;
        int **l_198 = &l_146;
        union U0 *l_211 = (void*)0;
        (*l_198) = l_197;
        if (p_30.f0)
        {
            (*l_198) = (*l_198);
        }
        else
        {
            int *l_206 = (void*)0;
            unsigned char *l_207 = &g_139.f2;
            (*g_165) = (((~((safe_add_func_uint64_t_u_u(p_30.f0, g_27.f0)) ^ (safe_lshift_func_uint8_t_u_u(((*l_207) = (safe_mod_func_uint16_t_u_u(g_205, func_58(l_206, &g_27, (*l_197), p_31)))), ((((safe_rshift_func_uint16_t_u_u(((&g_104 == l_210) | p_30.f3), g_105)) > 0xB1L) == g_183) <= g_79))))) && g_52) ^ 0xDF09L);
            (*l_198) = (*l_198);
            return l_211;
        }
        for (g_139.f2 = (-14); (g_139.f2 >= 54); g_139.f2 = safe_add_func_uint16_t_u_u(g_139.f2, 7))
        {
            unsigned char l_218 = 0x48L;
            (*g_165) = (safe_add_func_uint32_t_u_u(g_27.f0, (-1L)));
            (*g_165) = (safe_sub_func_int8_t_s_s(p_30.f3, l_218));
            return &g_117;
        }
        l_219 = ((p_30.f0 == p_33) & (-1L));
    }
    return &g_27;
}







static union U0 * func_35(unsigned short p_36, int p_37, union U0 p_38)
{
    int *l_84 = &g_52;
    unsigned long long **l_110 = (void*)0;
    int **l_114 = &l_84;
    union U0 *l_115 = &g_27;
    (*l_84) = p_36;
    for (g_52 = 1; (g_52 > 14); g_52++)
    {
        int **l_96 = &l_84;
        int ***l_97 = &l_96;
        unsigned short *l_99 = (void*)0;
        unsigned short *l_100 = (void*)0;
        unsigned short *l_101 = &g_83.f0;
        char *l_102 = (void*)0;
        char *l_103 = &g_104;
        int *l_112 = &g_113;
        g_105 = func_58(&g_52, &g_83, (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((p_37 != ((*l_103) = (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_38.f0, ((*l_101) = (((1UL ^ (safe_lshift_func_uint16_t_u_u(65535UL, 11))) >= (((*l_97) = l_96) != g_98)) & ((g_83.f0 == g_52) < g_27.f0))))), 2)))))), p_38.f0)), &g_27);
        if ((safe_sub_func_uint16_t_u_u(func_58(&p_37, &g_27, g_79, &g_27), (safe_lshift_func_int8_t_s_s((*l_84), 4)))))
        {
            unsigned long long ***l_111 = &l_110;
            (*l_111) = l_110;
        }
        else
        {
            return &g_83;
        }
        (**l_97) = l_84;
        (*l_112) = (**l_96);
    }
    (*l_114) = l_84;
    (*l_114) = &p_37;
    return l_115;
}







static unsigned short func_39(unsigned short p_40)
{
    return g_27.f0;
}







static union U0 * func_43(short p_44, union U0 * p_45)
{
    int *l_71 = &g_52;
    int *l_73 = &g_21;
    int **l_72 = &l_73;
    int *l_74 = (void*)0;
    int *l_75 = &g_52;
    union U0 *l_76 = &g_27;
    (*l_75) = (((*l_72) = (l_71 = l_71)) == l_74);
    return l_76;
}







static union U0 * func_47(int p_48, int p_49)
{
    unsigned l_57 = 0x7C8FA1B4L;
    union U0 *l_63 = &g_27;
    union U0 **l_64 = &l_63;
    int *l_70 = &g_52;
    (*l_70) = (l_57 && ((((!func_58(&g_52, ((*l_64) = l_63), g_21, &g_27)) | (safe_mod_func_int64_t_s_s(((void*)0 != l_64), 0xEC253D5AB883EB99LL))) & 0x1E173482L) || p_49));
    l_70 = &p_49;
    return &g_27;
}







static short func_58(int * p_59, union U0 * p_60, unsigned char p_61, union U0 * p_62)
{
    int **l_65 = (void*)0;
    int *l_67 = &g_52;
    int **l_66 = &l_67;
    (*l_66) = (void*)0;
    return g_52;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83.f0, "g_83.f0", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_275.f0, "g_275.f0", print_hash_value);
    transparent_crc(g_292.f3, "g_292.f3", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
