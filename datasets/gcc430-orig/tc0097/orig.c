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
   unsigned f0;
   char f1;
   char f2;
   unsigned char f3;
   unsigned char f4;
};

struct S1 {
   int f0;
   struct S0 f1;
   unsigned f2;
   unsigned f3;
   char f4;
};

struct S2 {
   char f0;
   unsigned long long f1;
   struct S0 f2;
   unsigned f3;
   unsigned f4;
   char f5;
   unsigned short f6;
};


static unsigned short g_8 = 3UL;
static char g_16 = 0x4DL;
static struct S2 g_21 = {0x28L,18446744073709551612UL,{0xC2E9378FL,0L,0L,255UL,1UL},0x9737E0D1L,0x71362395L,0L,0x4BF7L};
static struct S2 *g_20 = &g_21;
static int *g_33 = (void*)0;
static struct S0 *g_57 = &g_21.f2;
static struct S0 g_60 = {0xA2E34EF9L,0xEAL,1L,250UL,0x90L};
static int g_93 = (-10L);
static unsigned char g_108 = 7UL;
static struct S1 g_147 = {-7L,{0xEF7C0E05L,0xDEL,8L,255UL,0x8CL},0x593A3FB7L,4294967295UL,0L};
static short g_188 = 0x52BFL;
static struct S2 g_213 = {-1L,0x430BB1B28A79E915LL,{0xD21545E0L,0x6AL,0xD9L,248UL,0x21L},18446744073709551606UL,0x055960C2L,0xE3L,0x797FL};
static struct S1 g_268 = {0x45654F3FL,{0x7006516BL,-1L,0x77L,0xC7L,255UL},4294967288UL,0x6EABFEF3L,-4L};
static long long g_291 = 0xFD321A80C49828A8LL;
static long long g_293 = 1L;
static struct S1 *g_326 = &g_147;
static struct S1 **g_325 = &g_326;
static unsigned short g_328 = 0x6165L;
static struct S2 g_330 = {0x14L,18446744073709551610UL,{0x350D1A62L,0x14L,0L,0x9AL,0xD0L},18446744073709551615UL,4294967295UL,-1L,0xCBB3L};
static struct S2 *g_329 = &g_330;
static short g_339 = 1L;
static int g_346 = 1L;
static int g_414 = (-1L);
static struct S2 **g_603 = &g_20;
static struct S2 ***g_602 = &g_603;
static short *g_611 = &g_188;
static short **g_610 = &g_611;
static int g_618 = 7L;
static int *g_627 = &g_414;
static unsigned short *g_632 = &g_330.f6;



static char func_1(void);
static struct S2 * func_2(int p_3, unsigned char p_4);
static unsigned char func_9(char p_10, unsigned long long p_11, struct S2 * p_12, unsigned p_13);
static char func_14(long long p_15);
static int * func_17(unsigned short p_18, struct S2 * p_19);
static struct S1 * func_22(struct S2 * p_23, struct S2 p_24, unsigned char p_25, int * p_26);
static struct S2 func_27(struct S0 p_28, struct S2 * p_29);
static struct S0 func_30(int * p_31, struct S1 * p_32);
static struct S2 ** func_37(unsigned short p_38, short p_39, struct S2 * p_40, unsigned char p_41);
static unsigned func_54(int p_55);
static char func_1(void)
{
    unsigned long long l_7 = 0x7E673292C5EB2006LL;
    unsigned short *l_327 = &g_328;
    int l_633 = 0x0062C2A6L;
    (**g_602) = func_2((safe_add_func_uint64_t_u_u(l_7, g_8)), func_9(func_14(g_16), (8L > (!(((*l_327) = g_60.f0) > ((!g_60.f0) && g_213.f2.f4)))), g_329, g_213.f1));

    ;
    ;
    l_633 = ((*g_33) = (l_327 == (g_632 = &g_8)));

    ;
    return g_60.f3;
}







static struct S2 * func_2(int p_3, unsigned char p_4)
{
    unsigned l_363 = 0UL;
    struct S2 *l_364 = &g_330;
    int **l_366 = &g_33;
    int *l_398 = &g_346;
    unsigned short *l_444 = &g_328;
    unsigned char l_455 = 255UL;
    unsigned char l_457 = 0UL;
    long long l_459 = 0L;
    struct S1 *l_528 = &g_268;
    struct S0 *l_591 = &g_147.f1;
    unsigned short l_597 = 0xE52EL;
    for (g_8 = 0; (g_8 != 51); g_8 = safe_add_func_uint64_t_u_u(g_8, 3))
    {
        int **l_365 = &g_33;
        (*l_365) = &g_93;

        ;
    }
    (*l_366) = &g_346;

    ;
    (**l_366) = (-1L);
    for (g_21.f0 = 0; (g_21.f0 < 14); ++g_21.f0)
    {
        int **l_369 = (void*)0;
        int *l_370 = &g_346;
        char *l_385 = &g_21.f5;
        char *l_388 = &g_268.f1.f2;
        unsigned l_391 = 4294967295UL;
        char *l_392 = &g_60.f2;
        unsigned short l_401 = 0xF984L;
        struct S2 *l_419 = &g_330;
        long long *l_425 = &g_293;
        unsigned char l_437 = 0x06L;
        struct S1 l_453 = {0xE8AE65E8L,{1UL,-1L,0xE4L,0x9EL,0xA4L},0xAD9CA3E4L,0xCBB2C239L,0x5BL};
        struct S1 **l_454 = &g_326;
        long long *l_471 = (void*)0;
        if (p_3)
            break;
    }
    return (*g_603);


}







static unsigned char func_9(char p_10, unsigned long long p_11, struct S2 * p_12, unsigned p_13)
{
    unsigned l_331 = 0x6B5DDD6BL;
    unsigned char l_332 = 1UL;
    char *l_337 = &g_213.f5;
    short *l_338 = &g_339;
    int l_344 = 0xBA6B6870L;
    int *l_345 = &g_346;
    int **l_347 = &l_345;
    unsigned l_351 = 4294967295UL;
    struct S2 *l_353 = &g_330;
    (*l_347) = &l_344;

    ;
    if ((*l_345))
    {
        int *l_348 = &g_346;
        (*l_347) = l_348;

        ;
        (*l_348) = (safe_lshift_func_int8_t_s_s(g_213.f3, 2));
        if (l_351)
        {
            struct S2 **l_352 = &g_329;
            (*l_352) = (void*)0;

            ;
        }
        else
        {
            struct S2 *l_354 = &g_330;
            int l_357 = 4L;
            l_354 = l_353;
            l_357 = (safe_mod_func_int32_t_s_s((*l_348), g_60.f3));
        }
        g_33 = &g_346;

        ;
    }
    else
    {
        int l_358 = (-7L);
        struct S2 *l_359 = &g_330;
        int *l_360 = &g_346;
        (*l_347) = l_360;

        ;
    }

    ;
    return p_10;
}







static char func_14(long long p_15)
{
    int **l_319 = &g_33;
    unsigned char *l_322 = &g_213.f2.f3;
    struct S1 *l_324 = (void*)0;
    struct S1 **l_323 = &l_324;
    (*l_319) = func_17(p_15, g_20);

    ;
    (*l_319) = (void*)0;

    ;
    (*l_323) = (((safe_rshift_func_int8_t_s_u(p_15, ((*l_322) = 0x16L))) <= func_54(p_15)) , &g_147);


    ;
    l_323 = g_325;

    ;
    return g_268.f1.f1;
}







static int * func_17(unsigned short p_18, struct S2 * p_19)
{
    struct S1 *l_34 = (void*)0;
    struct S2 **l_280 = &g_20;
    int l_303 = 0xE6226BADL;
    int *l_304 = &l_303;
    int **l_305 = &l_304;
    struct S1 **l_313 = &l_34;
    (*l_313) = func_22(p_19, ((*p_19) = func_27(func_30(g_33, l_34), ((*l_280) = p_19))), l_303, ((*l_305) = l_304));

    ;
    ;
    (*l_304) = p_18;
    for (g_21.f5 = 0; (g_21.f5 >= 21); g_21.f5++)
    {
        for (g_213.f6 = 0; (g_213.f6 == 13); ++g_213.f6)
        {
            int l_318 = 0L;
            (*l_305) = &g_93;

            ;
            l_318 = (*g_33);
        }
    }

    ;
    return &g_93;



}







static struct S1 * func_22(struct S2 * p_23, struct S2 p_24, unsigned char p_25, int * p_26)
{
    int **l_306 = &g_33;
    (*l_306) = p_26;


lbl_312:
    (*l_306) = (*l_306);
    for (g_293 = 0; (g_293 == (-29)); g_293 = safe_sub_func_uint32_t_u_u(g_293, 7))
    {
        struct S1 l_311 = {-10L,{0UL,1L,0L,255UL,0xEFL},0UL,4294967291UL,0xACL};
        (**l_306) = (safe_rshift_func_uint8_t_u_s((l_311 , p_24.f6), 2));
        if (l_311.f1.f3)
            goto lbl_312;
        (*l_306) = &g_93;

        ;
    }
    return &g_268;


}







static struct S2 func_27(struct S0 p_28, struct S2 * p_29)
{
    struct S1 *l_281 = &g_147;
    struct S1 *l_282 = &g_268;
    int l_289 = (-5L);
    long long *l_290 = &g_291;
    long long *l_292 = &g_293;
    unsigned short l_294 = 0UL;
    short *l_299 = (void*)0;
    short *l_300 = (void*)0;
    char *l_301 = &g_213.f2.f2;
    int *l_302 = &g_93;
    (*l_282) = ((*l_281) = g_147);
    (*l_302) = (((((*l_292) = ((*l_290) = (safe_mod_func_uint8_t_u_u(g_147.f1.f1, (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(p_28.f0, l_289)), 6)))))) == (l_294 , l_294)) & (0x32L != ((*l_301) = (safe_sub_func_uint32_t_u_u(g_213.f0, (safe_lshift_func_int16_t_s_u(l_294, ((l_299 == l_300) >= l_289)))))))) , l_294);
    l_302 = &g_93;
    return (*g_20);
}







static struct S0 func_30(int * p_31, struct S1 * p_32)
{
    short l_56 = (-1L);
    struct S2 *l_212 = &g_213;
    for (g_21.f2.f2 = 29; (g_21.f2.f2 > (-24)); g_21.f2.f2--)
    {
        char l_44 = (-6L);
        unsigned l_45 = 4294967295UL;
        int *l_211 = &g_93;
        long long l_214 = 0x222EA5A7A9068132LL;
        struct S2 **l_277 = &g_20;
        struct S2 ***l_276 = &l_277;
        int **l_278 = (void*)0;
        int **l_279 = &l_211;
    }
    return (*g_57);
}







static struct S2 ** func_37(unsigned short p_38, short p_39, struct S2 * p_40, unsigned char p_41)
{
    int *l_219 = (void*)0;
    unsigned *l_222 = &g_213.f2.f0;
    unsigned **l_221 = &l_222;
    int l_234 = (-1L);
    struct S2 ***l_252 = (void*)0;
    struct S2 ****l_251 = &l_252;
    struct S0 l_258 = {1UL,5L,0x72L,0UL,0xF1L};
    int *l_274 = &g_93;
    int *l_275 = &l_234;
    if (p_38)
    {
        unsigned *l_216 = &g_21.f2.f0;
        unsigned **l_215 = &l_216;
        int l_235 = 0xD27A5EFBL;
        struct S1 l_247 = {0L,{0xE3AB2593L,-4L,1L,0xFCL,0xE7L},0x7BDE0B9FL,0UL,0xB7L};
        struct S2 l_253 = {-10L,0x81D454ED2D85002BLL,{0x2534656BL,0x86L,6L,248UL,0x88L},0x79AED706L,4294967295UL,0x50L,0x2BB8L};
lbl_254:
        if (p_39)
        {
            int *l_217 = &g_93;
            int **l_218 = (void*)0;
            l_215 = l_215;
            l_219 = l_217;

            ;
            if (p_38)
                goto lbl_250;
        }
        else
        {
            unsigned **l_220 = (void*)0;
            struct S2 **l_233 = &g_20;
            struct S2 ***l_232 = &l_233;
            struct S2 ****l_231 = &l_232;
            unsigned long long *l_236 = &g_213.f1;
            unsigned long long *l_237 = &g_21.f1;
            int *l_238 = &l_235;
            int **l_239 = &g_33;
            (*l_238) = (((l_221 = l_220) == (p_39 , &l_216)) <= (((*l_237) = ((*l_236) = (safe_lshift_func_uint8_t_u_s(0xB0L, ((safe_sub_func_int64_t_s_s((&g_16 == (void*)0), (safe_mod_func_uint8_t_u_u(252UL, ((safe_lshift_func_int16_t_s_s((l_231 != (void*)0), l_234)) , l_235))))) >= g_21.f6))))) <= (-8L)));

            ;
            (*l_239) = l_238;

            ;
            for (p_39 = (-24); (p_39 > 2); p_39++)
            {
                struct S2 *l_242 = (void*)0;
                (**l_232) = l_242;

                ;
            }
            g_57 = &g_60;

            ;
        }
lbl_250:
        for (g_21.f2.f1 = 15; (g_21.f2.f1 < (-10)); --g_21.f2.f1)
        {
            int *l_249 = &l_234;
            for (p_41 = (-9); (p_41 < 6); p_41 = safe_add_func_int8_t_s_s(p_41, 1))
            {
                struct S1 *l_248 = &l_247;
                (*l_248) = l_247;
            }
            (*l_249) = p_41;
        }
        if ((l_251 != (void*)0))
        {
            (*p_40) = l_253;
            if (l_253.f2.f0)
                goto lbl_254;
        }
        else
        {
            struct S2 **l_257 = &g_20;
            for (l_253.f2.f0 = 17; (l_253.f2.f0 <= 35); l_253.f2.f0++)
            {
                return &g_20;



            }
            return l_257;



        }
    }
    else
    {
        struct S0 *l_259 = &l_258;
        struct S0 *l_260 = (void*)0;
        struct S0 *l_261 = &g_213.f2;
        int l_262 = 2L;
        char *l_267 = &g_213.f2.f2;
        int *l_273 = &l_262;
        (*l_261) = ((*l_259) = l_258);
        (*l_273) = ((p_41 , ((l_262 , ((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((func_54((((*l_267) = func_54(g_213.f1)) != (l_262 | (g_268 , 5UL)))) , ((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((p_41 = g_21.f3), p_39)), l_258.f1)) <= g_147.f1.f4)), g_213.f4)), g_108)) , 1L)) ^ p_38)) != p_38);
    }

    ;
    ;
    ;
    ;
    (*l_275) = ((*l_274) = p_38);
    return &g_20;


}







static unsigned func_54(int p_55)
{
    struct S0 **l_58 = (void*)0;
    struct S0 *l_59 = &g_60;
    struct S1 l_61 = {0L,{0x48CB42B0L,3L,-1L,0xA5L,0UL},0xDBCC772AL,0x0FB9C0D2L,0x77L};
    struct S1 *l_62 = (void*)0;
    struct S1 *l_63 = &l_61;
    struct S2 **l_70 = &g_20;
    char *l_77 = &g_60.f2;
    unsigned long long *l_78 = &g_21.f1;
    int l_95 = 0xC5FBC386L;
    struct S0 *l_160 = &g_147.f1;
    int *l_169 = &l_95;
lbl_87:
    l_59 = g_57;

    ;
lbl_197:
    (*l_63) = l_61;
    if ((l_61.f1.f4 > ((safe_rshift_func_int8_t_s_s(l_61.f1.f3, ((safe_div_func_int64_t_s_s(l_61.f1.f0, (+(safe_lshift_func_int16_t_s_s(p_55, ((((((l_70 == l_70) ^ g_21.f2.f3) <= ((l_61.f1.f3 & ((safe_mod_func_uint32_t_u_u((((safe_sub_func_int32_t_s_s((((((*l_78) = (+((((*l_77) = (safe_div_func_int16_t_s_s((g_21.f2.f1 , p_55), p_55))) ^ 0x0BL) & p_55))) >= l_61.f1.f4) || 0UL) >= 0xDA773CE5L), 0L)) != p_55) & p_55), p_55)) > 0x16L)) <= 252UL)) & l_61.f1.f2) | 0x4008F4F80CF873A6LL) && 255UL)))))) || p_55))) ^ (-1L))))
    {
        int l_81 = 0xC685A4B5L;
        struct S2 **l_82 = &g_20;
        struct S2 ***l_83 = &l_82;
        unsigned short *l_84 = (void*)0;
        char l_85 = 7L;
        struct S1 l_86 = {-3L,{4294967292UL,0x70L,-1L,255UL,0UL},0UL,0xC52CF448L,-8L};
        if ((p_55 == (((p_55 >= ((l_81 = (safe_add_func_int16_t_s_s(l_81, (((*l_83) = l_82) == (void*)0)))) && l_85)) , 0L) || l_61.f1.f3)))
        {
            l_86 = (*l_63);
            if (l_61.f4)
                goto lbl_87;
        }
        else
        {
            struct S2 *l_90 = &g_21;
            int l_94 = 0L;
            for (l_61.f2 = 6; (l_61.f2 < 3); --l_61.f2)
            {
                int *l_91 = &l_81;
                int *l_92 = &g_93;
                (*l_92) = ((*l_91) = ((void*)0 != l_90));
                if (l_94)
                    break;
            }
        }
        return l_86.f1.f1;


    }
    else
    {
        unsigned char l_100 = 251UL;
        l_95 = l_61.f1.f2;
        for (l_61.f1.f4 = 0; (l_61.f1.f4 != 20); l_61.f1.f4 = safe_add_func_uint32_t_u_u(l_61.f1.f4, 7))
        {
            struct S1 l_103 = {1L,{4294967291UL,3L,0L,8UL,0x5FL},8UL,0xB40CD912L,0xB5L};
            l_100 = (safe_add_func_int16_t_s_s(0L, p_55));
            if (l_61.f0)
                continue;
            for (l_61.f1.f2 = 0; (l_61.f1.f2 != 7); l_61.f1.f2++)
            {
                struct S1 *l_104 = &l_103;
                (*l_104) = l_103;
            }
            for (g_21.f1 = 5; (g_21.f1 > 58); g_21.f1 = safe_add_func_uint64_t_u_u(g_21.f1, 4))
            {
                int **l_107 = &g_33;
                (*l_107) = &g_93;

                ;
                return g_21.f4;
            }
        }
    }
    if (g_108)
    {
        struct S2 ***l_121 = &l_70;
        struct S0 *l_126 = (void*)0;
        int l_141 = 5L;
        struct S1 l_148 = {0x11538544L,{0UL,0L,0xFEL,4UL,0xCCL},0xE89F1BA8L,0x213CC13DL,0x2DL};
        int *l_155 = &l_141;
        int **l_209 = &l_155;
        if ((safe_rshift_func_int16_t_s_s((p_55 , p_55), ((safe_div_func_uint64_t_u_u(((((safe_sub_func_int64_t_s_s(((((safe_lshift_func_uint8_t_u_s(p_55, 2)) | (safe_add_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(g_108, p_55)) != (g_21.f6 ^ (-3L))), 0x83L))) , (2L > 0x2B86D1BDL)) & 4294967295UL), 9UL)) && (-4L)) , 0L) <= 4L), p_55)) == g_21.f5))))
        {
            struct S2 ***l_122 = &l_70;
            struct S2 ****l_123 = &l_122;
            int l_144 = 7L;
            struct S1 **l_145 = &l_63;
            unsigned l_152 = 0x6C52679AL;
            int *l_157 = &l_141;
            int *l_163 = &g_93;
            if (((g_21.f2.f2 , l_121) != ((*l_123) = l_122)))
            {
                int l_142 = (-1L);
                int l_143 = 0x68AB6310L;
                struct S1 ***l_146 = &l_145;
lbl_128:
                for (g_93 = 0; (g_93 != (-23)); g_93 = safe_sub_func_uint32_t_u_u(g_93, 6))
                {
                    struct S0 **l_127 = &l_126;
                    (*l_127) = l_126;
                    if (l_61.f1.f2)
                        goto lbl_128;
                }
                (*l_146) = ((safe_lshift_func_int16_t_s_s(((p_55 || (l_144 = (((g_21.f2.f1 | ((l_143 = ((safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0xA243L, g_21.f5)), p_55)) , ((safe_sub_func_int64_t_s_s(p_55, ((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((+(p_55 == g_21.f3)) <= p_55), l_141)), 4UL)) ^ l_142))) <= 1UL))) & l_61.f1.f2)) >= g_108) > g_60.f1))) , g_21.f2.f0), l_141)) , l_145);
                l_148 = g_147;
            }
            else
            {
                int l_149 = 0x55F32A42L;
                int *l_150 = (void*)0;
                int *l_151 = &l_141;
                struct S2 **l_153 = &g_20;
                if (((*l_151) = l_149))
                {
                    (*l_151) = l_152;
                }
                else
                {
                    if (g_21.f1)
                    {
                        (*l_151) = p_55;
                        (*l_121) = l_153;
                    }
                    else
                    {
                        struct S1 l_154 = {0x9419120DL,{6UL,0xDAL,-8L,0UL,0x15L},4294967295UL,0x06E04528L,-5L};
                        l_148 = l_154;
                        if (l_152)
                            goto lbl_156;
lbl_156:
                        l_155 = &l_141;
                        (*l_70) = (**l_121);
                    }
                }
                l_157 = &g_93;

                ;
            }

            ;
            (*l_155) = ((((***l_121) , 1UL) || ((0L == g_21.f2.f1) , (*l_155))) != (safe_sub_func_uint64_t_u_u(((void*)0 == l_160), (g_60.f1 | ((*l_163) = (((safe_div_func_int32_t_s_s((-1L), g_108)) < 18446744073709551613UL) , (*l_155)))))));
            (**l_145) = (**l_145);
        }
        else
        {
            char l_164 = 0x83L;
            struct S0 l_175 = {0x0C71A7AFL,1L,-1L,1UL,255UL};
            struct S1 l_189 = {-1L,{0x4532C375L,7L,7L,0UL,0x76L},4294967295UL,0x8AF08D79L,-10L};
            if (l_164)
            {
                int **l_165 = &l_155;
                struct S0 *l_173 = &g_147.f1;
                unsigned short *l_186 = &g_21.f6;
                short *l_187 = &g_188;
                (*l_165) = &g_93;

                ;
                if ((p_55 < g_21.f2.f4))
                {
                    (*l_63) = g_147;
lbl_172:
                    (**l_165) = (-1L);
                    g_33 = &l_95;

                    ;
                }
                else
                {
                    struct S1 **l_166 = &l_62;
                    (*l_166) = &l_148;

                    ;
                    for (g_21.f2.f3 = 0; (g_21.f2.f3 <= 54); ++g_21.f2.f3)
                    {
                        l_169 = &l_95;
                    }
                }


                for (g_93 = 3; (g_93 <= (-12)); g_93 = safe_sub_func_uint8_t_u_u(g_93, 8))
                {
                    struct S0 **l_174 = &l_160;
                    if (l_164)
                        goto lbl_172;
                    (*l_165) = &g_93;
                    if (g_21.f5)
                        goto lbl_87;

                    (*l_169) = (((*l_174) = l_173) != ((((void*)0 != &g_8) > ((*l_169) >= (p_55 & p_55))) , (l_175 , &l_175)));
                }
                if ((safe_add_func_uint8_t_u_u(p_55, (g_147 , ((((*l_187) = (safe_lshift_func_uint16_t_u_u((0x7FL != g_21.f4), (p_55 || (((safe_rshift_func_uint8_t_u_s(0x7EL, 7)) ^ (((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(p_55, (*l_169))) <= ((*l_186) = p_55)), 9)) | g_147.f1.f1) , 0x4DD1CC30123A930BLL)) || g_147.f4))))) , g_21.f2.f0) | (**l_165))))))
                {
                    struct S1 *l_190 = &g_147;
                    int l_191 = 0L;
                    (*l_190) = ((*l_63) = l_189);
                    l_189 = g_147;
                    (*l_155) = (l_191 = (**l_165));
                    (*l_155) = g_21.f4;
                }
                else
                {
                    for (g_21.f2.f1 = (-24); (g_21.f2.f1 < 13); ++g_21.f2.f1)
                    {
                        int *l_194 = &l_95;
                        (*l_63) = l_148;
                        (*l_165) = &l_141;

                        ;
                        (*l_165) = l_194;

                        ;
                        (*l_165) = &g_93;

                        ;
                    }
                    (**l_165) = (g_21.f2.f1 != (*l_155));
                    (*l_173) = l_189.f1;
                    for (g_147.f1.f1 = 0; (g_147.f1.f1 <= 18); ++g_147.f1.f1)
                    {
                        return g_21.f1;


                    }
                }
            }
            else
            {
                unsigned *l_206 = &l_148.f3;
                int l_207 = 1L;
                struct S0 l_208 = {1UL,1L,4L,0x86L,0xD8L};
                if (l_189.f4)
                    goto lbl_197;
                if ((safe_lshift_func_int8_t_s_s(((p_55 , (p_55 < (((((0xC0EFL & (l_175.f0 , (1UL != ((safe_lshift_func_uint8_t_u_u((((***l_121) , (((*l_155) <= (((*l_206) = (((*l_78) = 0xD4F5A8E4F4471DAALL) , (safe_lshift_func_uint16_t_u_u(p_55, g_188)))) && 0x89C3F475L)) < l_207)) || 0xDB2FC5B69AEF82AFLL), 3)) == 0x880BL)))) == 0x177C5EBFF8561985LL) < (*l_169)) >= (-9L)) , p_55))) <= 0x0AA8D3F6459BDCCDLL), 2)))
                {
                    return p_55;


                }
                else
                {
                    l_208 = l_208;
                }
            }


            ;
        }


        ;
        (*l_209) = &l_95;

        ;
    }
    else
    {
        int **l_210 = &g_33;
        (*l_210) = &l_95;

        ;
    }
    return g_60.f1;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_21.f0, "g_21.f0", print_hash_value);
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_21.f2.f0, "g_21.f2.f0", print_hash_value);
    transparent_crc(g_21.f2.f1, "g_21.f2.f1", print_hash_value);
    transparent_crc(g_21.f2.f2, "g_21.f2.f2", print_hash_value);
    transparent_crc(g_21.f2.f3, "g_21.f2.f3", print_hash_value);
    transparent_crc(g_21.f2.f4, "g_21.f2.f4", print_hash_value);
    transparent_crc(g_21.f3, "g_21.f3", print_hash_value);
    transparent_crc(g_21.f4, "g_21.f4", print_hash_value);
    transparent_crc(g_21.f5, "g_21.f5", print_hash_value);
    transparent_crc(g_21.f6, "g_21.f6", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_60.f4, "g_60.f4", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1.f0, "g_147.f1.f0", print_hash_value);
    transparent_crc(g_147.f1.f1, "g_147.f1.f1", print_hash_value);
    transparent_crc(g_147.f1.f2, "g_147.f1.f2", print_hash_value);
    transparent_crc(g_147.f1.f3, "g_147.f1.f3", print_hash_value);
    transparent_crc(g_147.f1.f4, "g_147.f1.f4", print_hash_value);
    transparent_crc(g_147.f2, "g_147.f2", print_hash_value);
    transparent_crc(g_147.f3, "g_147.f3", print_hash_value);
    transparent_crc(g_147.f4, "g_147.f4", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_213.f1, "g_213.f1", print_hash_value);
    transparent_crc(g_213.f2.f0, "g_213.f2.f0", print_hash_value);
    transparent_crc(g_213.f2.f1, "g_213.f2.f1", print_hash_value);
    transparent_crc(g_213.f2.f2, "g_213.f2.f2", print_hash_value);
    transparent_crc(g_213.f2.f3, "g_213.f2.f3", print_hash_value);
    transparent_crc(g_213.f2.f4, "g_213.f2.f4", print_hash_value);
    transparent_crc(g_213.f3, "g_213.f3", print_hash_value);
    transparent_crc(g_213.f4, "g_213.f4", print_hash_value);
    transparent_crc(g_213.f5, "g_213.f5", print_hash_value);
    transparent_crc(g_213.f6, "g_213.f6", print_hash_value);
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_268.f1.f0, "g_268.f1.f0", print_hash_value);
    transparent_crc(g_268.f1.f1, "g_268.f1.f1", print_hash_value);
    transparent_crc(g_268.f1.f2, "g_268.f1.f2", print_hash_value);
    transparent_crc(g_268.f1.f3, "g_268.f1.f3", print_hash_value);
    transparent_crc(g_268.f1.f4, "g_268.f1.f4", print_hash_value);
    transparent_crc(g_268.f2, "g_268.f2", print_hash_value);
    transparent_crc(g_268.f3, "g_268.f3", print_hash_value);
    transparent_crc(g_268.f4, "g_268.f4", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_330.f0, "g_330.f0", print_hash_value);
    transparent_crc(g_330.f1, "g_330.f1", print_hash_value);
    transparent_crc(g_330.f2.f0, "g_330.f2.f0", print_hash_value);
    transparent_crc(g_330.f2.f1, "g_330.f2.f1", print_hash_value);
    transparent_crc(g_330.f2.f2, "g_330.f2.f2", print_hash_value);
    transparent_crc(g_330.f2.f3, "g_330.f2.f3", print_hash_value);
    transparent_crc(g_330.f2.f4, "g_330.f2.f4", print_hash_value);
    transparent_crc(g_330.f3, "g_330.f3", print_hash_value);
    transparent_crc(g_330.f4, "g_330.f4", print_hash_value);
    transparent_crc(g_330.f5, "g_330.f5", print_hash_value);
    transparent_crc(g_330.f6, "g_330.f6", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_618, "g_618", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
