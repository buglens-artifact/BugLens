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
   const volatile short f0;
   const unsigned f1;
   short f2;
};

union U1 {
   struct S0 f0;
   int f1;
   int f2;
   unsigned f3;
   unsigned char f4;
};


static char g_23 = 0x60L;
static unsigned g_42 = 4294967295UL;
static unsigned g_46 = 4294967286UL;
static unsigned *g_45 = &g_46;
static unsigned g_68 = 4294967290UL;
static unsigned short g_87 = 0xEDE5L;
static int g_91 = 0x71521F00L;
static volatile int g_94 = (-9L);
static volatile int *g_93 = &g_94;
static volatile int **g_92 = &g_93;
static struct S0 g_97 = {-5L,0xABA13E97L,0x0EDEL};
static union U1 g_100 = {{6L,4294967295UL,0L}};
static int *g_113 = &g_91;
static int **g_112 = &g_113;
static struct S0 g_144 = {1L,0x89D7571DL,0x5980L};
static struct S0 *g_143 = &g_144;
static struct S0 g_164 = {1L,4294967292UL,3L};
static struct S0 *g_163 = &g_164;
static int g_182 = (-4L);
static unsigned short g_227 = 0xE382L;
static const int *g_251 = &g_91;
static const int **g_250 = &g_251;
static const int ***g_249 = &g_250;
static const int ***g_252 = &g_250;
static char g_262 = (-2L);
static unsigned *g_265 = &g_42;
static int *g_288 = (void*)0;
static const unsigned * const **g_311 = (void*)0;
static const unsigned g_315 = 0xC7492526L;
static unsigned g_348 = 0x978A9AF8L;
static int g_350 = 4L;
static unsigned g_351 = 0x8AE0BF91L;
static struct S0 **g_368 = &g_163;
static union U1 *g_410 = &g_100;
static union U1 **g_409 = &g_410;
static const char g_419 = 0xB2L;
static struct S0 g_435 = {0xAF91L,0x1AFA2E2DL,0x67BFL};
static const volatile short * const g_443 = &g_435.f0;
static const volatile short * const *g_442 = &g_443;
static unsigned char g_499 = 0xC8L;
static unsigned **g_504 = (void*)0;
static unsigned ***g_503 = &g_504;
static volatile unsigned short g_557 = 0x0DF1L;
static volatile unsigned short *g_556 = &g_557;
static volatile unsigned short **g_555 = &g_556;
static unsigned short g_595 = 65535UL;
static unsigned g_673 = 0x713FAFE3L;



static int func_1(void);
static unsigned char func_4(int p_5, int p_6, unsigned p_7, short p_8);
static int func_9(unsigned p_10);
static char func_16(unsigned char p_17, int p_18, unsigned p_19, const unsigned p_20);
static short func_28(short p_29);
static unsigned func_47(int p_48, unsigned * p_49, unsigned char p_50, unsigned * p_51);
static int * func_54(int * p_55, int * p_56, unsigned p_57, int * const p_58, unsigned short p_59);
static int * func_60(int p_61, const short p_62, unsigned ** p_63, char p_64);
static unsigned ** func_69(unsigned short p_70, const unsigned p_71, char p_72, unsigned short p_73, unsigned short p_74);
static unsigned func_75(unsigned ** const p_76, unsigned ** const p_77, unsigned p_78);
static int func_1(void)
{
    unsigned l_15 = 4294967291UL;
    int *l_181 = &g_182;
    int **l_180 = &l_181;
    short *l_183 = &g_144.f2;
    int *l_349 = &g_350;
    unsigned char *l_473 = &g_100.f4;
    int l_488 = 0x717BF625L;
    unsigned *** const l_507 = &g_504;
    union U1 **l_509 = &g_410;
    struct S0 **l_524 = &g_143;
    unsigned char l_547 = 251UL;
    unsigned short l_638 = 0UL;
    char l_641 = 0xB0L;
    unsigned l_642 = 0x4B65F6D4L;
    unsigned l_657 = 2UL;
    unsigned **l_670 = &g_265;
    unsigned ***l_669 = &l_670;
    int l_671 = (-1L);
    const unsigned l_672 = 4294967291UL;
    if ((safe_lshift_func_uint8_t_u_s(((*l_473) = func_4(((*l_349) = func_9((safe_lshift_func_int8_t_s_u((0x6D6092F6L != (safe_mul_func_uint8_t_u_u(l_15, func_16(((safe_sub_func_uint16_t_u_u((g_23 || (safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(func_28((l_15 == l_15)), ((*l_183) = ((l_180 != (void*)0) >= (&l_180 != (void*)0))))), 2))), (-1L))) && g_164.f1), (*l_181), (**l_180), (*l_181))))), g_164.f1)))), l_15, g_351, g_97.f2)), 0)))
    {
        int *l_482 = &g_350;
        int l_483 = 0xBB404B24L;
        struct S0 *l_495 = (void*)0;
        unsigned ** const l_497 = &g_265;
        unsigned ***l_506 = (void*)0;
        union U1 **l_510 = &g_410;
        int *l_531 = &l_488;
        unsigned * const l_605 = (void*)0;
        for (g_68 = 0; (g_68 < 42); g_68 = safe_add_func_int8_t_s_s(g_68, 2))
        {
            unsigned short l_484 = 1UL;
            unsigned *l_485 = &l_15;
            (**g_92) = 0xE559505AL;
            (**g_92) = (safe_sub_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(((*l_473) = (((**l_180) = 0x5588CD48L) | ((***g_249) && ((safe_mod_func_uint32_t_u_u(((*g_45) = ((*g_45) || ((void*)0 != l_482))), ((func_4(l_483, l_484, ((*l_485) = 0xAD29EC4DL), ((*l_183) = (((safe_sub_func_uint8_t_u_u(g_23, l_488)) || g_97.f0) > 0xDD8CB67FL))) <= 0L) || l_484))) ^ l_483)))), 252UL)) || 6L) > 0x31L), 9UL));
            (**l_180) = (((safe_rshift_func_uint8_t_u_s(g_419, 7)) != 65535UL) && l_484);
            if ((**g_92))
            {
                for (l_15 = 24; (l_15 > 60); l_15 = safe_add_func_int16_t_s_s(l_15, 8))
                {
                }
            }
            else
            {
                if ((**g_250))
                    break;
            }
        }
        if ((***g_249))
        {
            unsigned ** const l_496 = &g_45;
            unsigned char *l_498 = &g_499;
            int l_500 = (-8L);
            unsigned ****l_505 = &g_503;
            int *l_508 = &l_488;
            (*g_93) = ((*l_181) = (((*g_443) < ((func_75(l_496, l_497, l_483) == (*g_45)) && func_75(func_69((g_42 <= (**l_180)), (((*l_498) = ((*l_473) = (**l_180))) == 0x5FL), l_483, g_87, l_500), l_496, l_483))) != l_500));
            (*g_93) = ((safe_rshift_func_uint8_t_u_u(g_435.f1, (l_500 < ((l_506 = ((*l_505) = g_503)) == l_507)))) > ((((**l_180) = (*g_251)) <= (***g_249)) != ((*l_508) = l_500)));

            ;
        }
        else
        {
            const unsigned *l_512 = &g_315;
            const unsigned ** const l_511 = &l_512;
            unsigned short *l_519 = &g_227;
            int l_525 = 0xD415FDBBL;
            char *l_526 = (void*)0;
            char *l_527 = &g_262;
            unsigned ** const l_546 = &g_45;
            unsigned ** const l_565 = &g_265;
            int l_566 = (-9L);
            unsigned short l_596 = 65529UL;
            (**g_252) = (*g_250);
            l_510 = l_509;
            (**g_92) = (***g_249);
            if (((*l_181) = ((l_511 != (*g_503)) | (safe_add_func_uint8_t_u_u((((void*)0 == (*l_511)) != (safe_mul_func_int8_t_s_s(((*l_527) = (((safe_rshift_func_uint16_t_u_s(((*l_519) = g_91), 5)) || (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(((&g_163 == l_524) <= (l_483 >= (0UL | g_100.f4))), l_525)), 0xC5L))) <= 0x714DE6C4L)), g_100.f4))), 0xF6L)))))
            {
                int *l_530 = (void*)0;
                unsigned short l_542 = 0xF58CL;
                for (g_100.f1 = 0; (g_100.f1 == 15); g_100.f1++)
                {
                    (*g_112) = l_530;
                }

                (*g_112) = l_531;

                ;
                (**g_249) = ((*l_180) = func_60(((safe_add_func_uint8_t_u_u(l_525, ((*l_531) ^ ((safe_rshift_func_uint8_t_u_s(g_68, 0)) & ((*l_473) = g_144.f2))))) && (-1L)), (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_519) = g_68), (safe_mod_func_int8_t_s_s(g_144.f2, l_542)))), 0x6208748EL)), (*g_503), (**l_180)));

                ;
                ;
                if ((safe_mul_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(((*g_409) != (*l_509)))) > func_75(l_546, (*g_503), (*g_45))) > (((l_542 || l_525) ^ l_547) == (*l_531))), g_262)))
                {
                    unsigned l_551 = 18446744073709551615UL;
                    int *l_552 = &g_91;
                    unsigned short ** const l_558 = (void*)0;
                    for (g_351 = 0; (g_351 >= 16); ++g_351)
                    {
                        int *l_550 = &l_525;
                        (*g_93) = l_525;
                        (*g_112) = l_552;

                        ;
                        (*l_552) = ((*l_552) <= (~(safe_rshift_func_uint16_t_u_s(((g_555 != l_558) == ((**l_180) != (***g_252))), (*l_550)))));
                        (**g_92) = ((1L && ((**l_546) = (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((**g_555), (((((**g_112) = (safe_rshift_func_uint8_t_u_s(g_351, g_100.f2))) | l_551) != ((*l_519) = func_75(l_565, (*g_503), l_542))) ^ 0xB7C6C937L))) < 1L) & (-1L)), 1L)))) == g_351);
                    }

                    ;
                }
                else
                {
                    (**g_92) = (1L == 0x70L);
                    (*g_288) = l_566;
                    for (l_15 = 5; (l_15 > 59); ++l_15)
                    {
                        (*g_112) = l_530;

                        ;
                        return g_23;
                    }
                }

                ;
            }
            else
            {
                unsigned char l_571 = 0x3EL;
                int l_574 = 1L;
                const struct S0 *l_575 = &g_164;
                const struct S0 **l_576 = &l_575;
                unsigned *l_579 = (void*)0;
                unsigned ** const l_594 = &l_579;
                (*l_181) = (safe_sub_func_uint32_t_u_u(l_571, ((*g_45) = (safe_mul_func_uint8_t_u_u(((l_574 = l_566) && (((*l_524) = (void*)0) != ((*l_576) = l_575))), ((safe_sub_func_uint8_t_u_u(0UL, (~(((void*)0 != l_579) >= 0UL)))) && (safe_mod_func_uint16_t_u_u(((*l_519) = (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((!(((**g_555) && (**g_442)) != g_227)), (-5L))), 2))), (*l_181)))))))));
                (*g_250) = func_60((safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint8_t_u(((*l_473) = func_4((*l_531), (*g_93), (safe_mul_func_int8_t_s_s(((safe_add_func_int8_t_s_s(0xC3L, l_571)) < (safe_mul_func_uint8_t_u_u((func_75(l_594, func_69((*l_531), g_100.f4, ((void*)0 == (*g_368)), g_227, g_42), l_571) && (*l_531)), g_42))), l_574)), g_595)))))), l_571, (*l_507), l_596);

                ;
            }

            ;
            ;
            ;
        }

        ;
        ;
        ;
        for (g_164.f2 = 0; (g_164.f2 == (-5)); g_164.f2--)
        {
            unsigned short l_601 = 0x585AL;
            int l_615 = 0x2A09ED96L;
            unsigned ** const l_617 = &g_265;
        }
    }
    else
    {
        short l_627 = (-8L);
        (*g_93) = ((*g_556) & (safe_sub_func_uint16_t_u_u(((g_91 > l_627) <= ((safe_rshift_func_uint8_t_u_u((*l_181), ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((+g_419), g_144.f1)) ^ (l_627 | ((0x319BL && ((safe_mod_func_int16_t_s_s(0xC3CEL, (*l_181))) && g_144.f1)) == (-1L)))), 254UL)) >= (***g_252)))) <= (***g_249))), g_164.f2)));
        (**g_252) = (*l_180);

        ;
    }

    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    ;
    (*g_93) = (l_488 = (((safe_sub_func_int8_t_s_s(9L, ((((**g_250) || ((*l_181) = (*g_93))) >= l_638) & ((((&l_638 == (void*)0) | (1L & l_488)) || ((safe_sub_func_int8_t_s_s(func_75((*l_507), (*g_503), l_641), g_164.f1)) | g_435.f1)) != l_642)))) | l_641) | 246UL));
    (**g_92) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((*l_473) = (safe_rshift_func_int8_t_s_s((*l_181), (safe_mod_func_int8_t_s_s(0x6EL, ((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_16(g_262, func_4((l_657 > func_16((safe_mul_func_uint8_t_u_u(((((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((**l_180))), (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(func_75((*g_503), (*g_503), ((*g_45) = ((((*l_669) = (*g_503)) != (*l_507)) || (*l_181)))), (**g_442))) | 255UL), 4)))), 247UL)) == (*l_181)) & (*l_181)) > l_671), (*l_181))), (***g_249), (*l_181), (*l_181))), (***g_252), (*l_181), g_97.f1), (*l_181), l_672), (**l_180))), 0xC5L)) ^ 1UL)))))), 6)), g_673)), 0x710CL));

    ;
    ;
    return (**l_180);


}







static unsigned char func_4(int p_5, int p_6, unsigned p_7, short p_8)
{
    int **l_360 = &g_288;
    int ***l_361 = &g_112;
    int **l_362 = &g_113;
    unsigned **l_365 = &g_265;
    struct S0 **l_366 = &g_163;
    struct S0 ***l_367 = &l_366;
    short l_397 = (-1L);
    unsigned l_433 = 4294967295UL;
    int *l_472 = &g_182;
    (*g_93) = (0x07BEB66CL ^ (safe_sub_func_uint32_t_u_u((&p_7 == &p_7), (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((g_97.f2 = (safe_add_func_uint8_t_u_u(0xACL, (((*l_361) = l_360) != (l_362 = l_360))))), 3)), (safe_lshift_func_uint8_t_u_s((p_8 || (&p_7 == ((*l_365) = (void*)0))), 3)))))));

    ;
    ;
    g_368 = ((*l_367) = l_366);
    for (g_100.f4 = 0; (g_100.f4 <= 40); g_100.f4 = safe_add_func_int8_t_s_s(g_100.f4, 6))
    {
        unsigned ** const l_373 = &g_265;
        int l_378 = 0x9A0D01CEL;
        union U1 *l_408 = &g_100;
        union U1 **l_407 = &l_408;
        const char *l_415 = &g_23;
        short **l_440 = (void*)0;
        for (p_7 = (-30); (p_7 <= 30); ++p_7)
        {
            const int *l_374 = &g_91;
            unsigned l_385 = 0x943ADA57L;
            unsigned ** const l_420 = &g_45;
            const unsigned char l_470 = 0x9EL;
            (**g_249) = (**g_249);
        }
        l_472 = &l_378;

        ;
    }


    (*g_409) = (void*)0;

    ;
    return g_435.f2;
}







static int func_9(unsigned p_10)
{
    int l_204 = 0xAF828D7BL;
    unsigned ** const l_213 = &g_45;
    int l_266 = (-6L);
    for (g_164.f2 = (-30); (g_164.f2 > (-16)); g_164.f2 = safe_add_func_int16_t_s_s(g_164.f2, 6))
    {
        unsigned short l_203 = 65529UL;
        unsigned ** const l_241 = (void*)0;
        int *l_244 = &g_182;
        union U1 *l_280 = (void*)0;
        union U1 **l_279 = &l_280;
        const unsigned * const l_314 = &g_315;
        const unsigned * const *l_313 = &l_314;
        const unsigned * const **l_312 = &l_313;
        for (g_100.f4 = 4; (g_100.f4 > 48); ++g_100.f4)
        {
            unsigned l_206 = 18446744073709551608UL;
            int l_214 = 0L;
            unsigned ** const l_219 = &g_45;
            unsigned char l_260 = 251UL;
            unsigned short * const l_270 = &g_87;
            int l_320 = (-1L);
            unsigned **l_322 = &g_265;
            for (g_91 = 0; (g_91 >= 18); g_91 = safe_add_func_int8_t_s_s(g_91, 1))
            {
                int *l_199 = &g_182;
                unsigned short *l_205 = (void*)0;
                unsigned ** const l_254 = (void*)0;
                union U1 **l_281 = &l_280;
                if (((*l_199) = p_10))
                {
                    struct S0 **l_200 = (void*)0;
                    struct S0 **l_201 = &g_143;
                    struct S0 **l_202 = &g_163;
                    (*l_202) = ((*l_201) = &g_97);

                    ;
                    ;
                    return l_203;
                }
                else
                {
                    l_204 = 6L;
                }
            }
            for (g_87 = 0; (g_87 <= 41); g_87 = safe_add_func_int32_t_s_s(g_87, 2))
            {
                char *l_300 = &g_23;
                const int l_309 = 6L;
                unsigned l_310 = 1UL;
                unsigned ***l_321 = (void*)0;
                (**g_92) = ((safe_sub_func_int32_t_s_s(l_214, (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((*l_300) = 0xB2L), (safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((*g_265) = ((**l_213) = (p_10 == (safe_mod_func_int16_t_s_s(((void*)0 != l_270), 65535UL))))), (safe_sub_func_uint8_t_u_u(0UL, (0x6D238DEDL && p_10))))), l_309)))) >= l_310), 7)), (-1L))))))) < 1UL);
                l_322 = func_69((((*g_45) = (*g_45)) < l_214), l_310, l_214, ((*l_244) = ((((l_312 = g_311) == g_311) <= g_164.f2) >= p_10)), (safe_sub_func_uint32_t_u_u((l_320 = ((*g_265) = (safe_lshift_func_int8_t_s_u(g_144.f1, g_262)))), (-1L))));

                ;
                ;
            }

            ;
        }

        ;
        if ((safe_mod_func_int8_t_s_s(g_144.f1, (safe_mul_func_uint8_t_u_u((0L ^ 1UL), (9L | (*l_244)))))))
        {
            (**g_92) = p_10;
        }
        else
        {
            const int **l_327 = &g_251;
            short *l_330 = &g_100.f0.f2;
            char *l_331 = &g_23;
            char *l_332 = (void*)0;
            char *l_333 = &g_262;
            (*l_327) = l_314;

            ;
            (*g_93) = (+(safe_mod_func_int8_t_s_s(((*l_333) = ((*l_331) = (((*l_330) = (**l_327)) >= (p_10 || (*l_244))))), ((*g_45) & (safe_unary_minus_func_int32_t_s((**g_92)))))));
            for (g_182 = 13; (g_182 == 18); g_182 = safe_add_func_uint32_t_u_u(g_182, 1))
            {
                int l_347 = 0x9A38E781L;
                l_266 = (((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s((p_10 > (((0x2E7FL | (g_227 >= func_75(&g_265, l_213, (((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((*l_244), func_16((safe_sub_func_uint8_t_u_u((p_10 & p_10), ((l_347 = ((*l_330) = p_10)) > p_10))), (**g_250), p_10, p_10))), 1)) != g_348) >= p_10)))) > p_10) | l_266)), g_23)) | l_266), (**l_327))) ^ p_10) == 255UL);
                return (*l_244);
            }
        }
        (**g_92) = p_10;
    }

    ;
    return l_204;
}







static char func_16(unsigned char p_17, int p_18, unsigned p_19, const unsigned p_20)
{
    short l_184 = 0xA23BL;
    int l_189 = 0xF491B13FL;
    unsigned **l_190 = (void*)0;
    struct S0 *l_191 = &g_144;
    struct S0 **l_192 = &g_163;
    (*g_93) = 0L;
    (*g_93) = l_184;
    (*g_93) = (**g_92);
    (**g_92) = (p_18 = ((~(p_19 >= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_87, l_189)), l_189)))) == ((*g_45) = ((((void*)0 == l_190) == g_164.f1) | (((((*l_192) = l_191) != &g_97) & (*g_45)) > (*g_93))))));

    ;
    return l_184;
}







static short func_28(short p_29)
{
    unsigned l_36 = 0xFEC46BC2L;
    int l_39 = 0x5C2F1FCCL;
    unsigned *l_41 = &g_42;
    unsigned *l_53 = &g_46;
    unsigned **l_52 = &l_53;
    int l_119 = (-2L);
    int **l_122 = &g_113;
    struct S0 * const l_125 = (void*)0;
    const int l_126 = 0xF380447DL;
    unsigned char l_147 = 1UL;
    unsigned l_152 = 8UL;
    if ((l_119 = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_29 > (safe_add_func_uint32_t_u_u((l_36 || g_23), (safe_add_func_uint8_t_u_u(l_39, (safe_unary_minus_func_uint32_t_u((((*l_41) = 4294967295UL) > ((*g_45) = ((safe_lshift_func_uint16_t_u_u((((void*)0 == g_45) != func_47(g_46, ((*l_52) = l_41), g_23, l_41)), l_39)) == 0x4FB361F3L)))))))))), g_23)), 0x1EL))))
    {
        unsigned short l_123 = 0x4CD9L;
        struct S0 *l_124 = (void*)0;
        const int *l_129 = (void*)0;
        const int **l_130 = &l_129;
        (*g_92) = (*g_92);
        (**g_92) = (safe_sub_func_uint16_t_u_u(((l_122 != (void*)0) >= l_123), (p_29 || ((**l_122) = (!(**g_92))))));
        (*g_112) = func_60((l_124 == l_125), l_126, func_69(((void*)0 != (*l_122)), (((((((*g_45) && (g_100.f1 < (safe_mod_func_int32_t_s_s((p_29 && p_29), (-8L))))) ^ (*g_45)) >= g_100.f2) > (-10L)) ^ (**l_122)) && g_42), g_91, p_29, p_29), p_29);
        (*l_130) = l_129;
    }
    else
    {
        unsigned char l_139 = 0x4FL;
        struct S0 **l_140 = (void*)0;
        struct S0 *l_142 = &g_97;
        struct S0 **l_141 = &l_142;
        (**g_92) = 0x4200C290L;
        (**g_92) = ((safe_sub_func_uint32_t_u_u(((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((void*)0 == (*g_92)), g_97.f2)), 0L)) || p_29) != func_47(g_68, ((*l_52) = (*l_52)), (((p_29 >= (0L != g_97.f0)) < g_87) == (**l_122)), &g_68)) != 0xB3L), (*g_45))) | p_29);
        for (l_36 = 0; (l_36 <= 21); l_36++)
        {
            return l_139;
        }
        g_143 = ((*l_141) = (void*)0);

        ;
        ;
    }

    ;
    ;
    for (l_36 = 26; (l_36 < 51); l_36++)
    {
        unsigned short l_148 = 0x8D4CL;
        int *l_149 = &l_119;
        (*g_112) = (void*)0;

        ;
        (*l_149) = (p_29 || g_94);
    }

    ;
    (*g_93) = (~l_36);
    for (g_42 = 0; (g_42 <= 14); g_42 = safe_add_func_int8_t_s_s(g_42, 8))
    {
        struct S0 *l_161 = (void*)0;
        struct S0 **l_162 = &g_143;
        struct S0 *l_166 = &g_97;
        struct S0 **l_165 = &l_166;
        unsigned **l_167 = &l_53;
        unsigned ***l_168 = &l_52;
        unsigned l_176 = 0x96F98B6AL;
        short *l_179 = &g_164.f2;
        (*l_168) = func_69(l_152, (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(p_29, g_100.f2)), (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(((g_163 = ((*l_162) = l_161)) != ((*l_165) = &g_164)), 1)), (0xC5867953L || 0x36BF4034L))))), g_164.f0, (l_167 != (void*)0), g_164.f2);

        ;
        ;
        ;
        ;
        for (g_46 = (-12); (g_46 <= 46); g_46 = safe_add_func_int8_t_s_s(g_46, 8))
        {
            const struct S0 * const l_174 = &g_144;
            const struct S0 * const *l_173 = &l_174;
            for (g_91 = 0; (g_91 == 10); g_91 = safe_add_func_int32_t_s_s(g_91, 5))
            {
                const struct S0 * const **l_175 = &l_173;
                (*l_175) = l_173;
                if (l_176)
                    break;
            }
            return p_29;
        }
        if (l_176)
            continue;
        (**g_92) = (safe_rshift_func_int16_t_s_s(((*l_179) = 0x41A1L), 3));
    }

    ;
    ;
    return p_29;
}







static unsigned func_47(int p_48, unsigned * p_49, unsigned char p_50, unsigned * p_51)
{
    unsigned *l_67 = &g_68;
    int l_79 = 1L;
    int *l_108 = &l_79;
    int **l_117 = (void*)0;
    int **l_118 = &l_108;
    (*l_118) = func_54(func_60(((g_46 | 0xD004L) & p_48), (safe_mod_func_uint32_t_u_u((*g_45), ((*l_67) = 4294967286UL))), func_69(p_50, func_75(&p_51, &p_51, l_79), g_46, g_46, l_79), g_97.f1), l_108, (*g_45), p_49, g_23);

    ;
    return (*l_108);
}







static int * func_54(int * p_55, int * p_56, unsigned p_57, int * const p_58, unsigned short p_59)
{
    unsigned short l_111 = 3UL;
    int ***l_114 = (void*)0;
    int ***l_115 = (void*)0;
    int ***l_116 = &g_112;
    (**g_92) = ((*g_45) || (safe_lshift_func_uint16_t_u_u((p_59 <= l_111), ((&p_55 != ((*l_116) = g_112)) > ((*g_113) = 0x98E2CF01L)))));
    return p_55;


}







static int * func_60(int p_61, const short p_62, unsigned ** p_63, char p_64)
{
    int *l_104 = &g_100.f2;
    for (g_100.f1 = 0; (g_100.f1 >= 6); g_100.f1 = safe_add_func_int32_t_s_s(g_100.f1, 2))
    {
        int **l_105 = (void*)0;
        int **l_106 = &l_104;
        int *l_107 = &g_91;
        (*l_106) = l_104;
        (*g_93) = ((*l_107) = p_64);
        (**g_92) = (-5L);
    }

    return &g_91;


}







static unsigned ** func_69(unsigned short p_70, const unsigned p_71, char p_72, unsigned short p_73, unsigned short p_74)
{
    volatile int **l_95 = (void*)0;
    struct S0 *l_96 = &g_97;
    unsigned **l_101 = &g_45;
    if (g_46)
    {
        int *l_90 = &g_91;
        struct S0 **l_98 = &l_96;
        (*l_90) = p_72;
        l_95 = g_92;

        ;
        (*l_98) = l_96;
    }
    else
    {
        union U1 *l_99 = &g_100;
        l_99 = l_99;
    }

    ;
    return l_101;


}







static unsigned func_75(unsigned ** const p_76, unsigned ** const p_77, unsigned p_78)
{
    unsigned short *l_86 = &g_87;
    int l_88 = 0x61160DD4L;
    int *l_89 = &l_88;
    (*l_89) = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((*l_86) = g_46) < p_78), (g_23 >= (l_88 < 4L)))), l_88)), 0));
    return g_23;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_100.f4, "g_100.f4", print_hash_value);
    transparent_crc(g_144.f0, "g_144.f0", print_hash_value);
    transparent_crc(g_144.f1, "g_144.f1", print_hash_value);
    transparent_crc(g_144.f2, "g_144.f2", print_hash_value);
    transparent_crc(g_164.f0, "g_164.f0", print_hash_value);
    transparent_crc(g_164.f1, "g_164.f1", print_hash_value);
    transparent_crc(g_164.f2, "g_164.f2", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_435.f0, "g_435.f0", print_hash_value);
    transparent_crc(g_435.f1, "g_435.f1", print_hash_value);
    transparent_crc(g_435.f2, "g_435.f2", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_595, "g_595", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
