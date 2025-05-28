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
   int f0;
   unsigned char f1;
   int f2;
   volatile unsigned f3;
};


static volatile int g_7 = 4L;
static short g_12 = 0xD9BAL;
static unsigned char g_39 = 5UL;
static volatile int g_49 = 0x9CADCDA6L;
static volatile int *g_48 = &g_49;
static struct S0 g_60 = {0xC3CC8C9FL,255UL,0xB1F05996L,0x698B42DCL};
static unsigned g_92 = 0x5778C4B1L;
static unsigned g_94 = 4294967287UL;
static char g_97 = 0xBDL;
static int g_116 = (-3L);
static volatile struct S0 g_129 = {0L,1UL,0x23B15C07L,1UL};
static volatile struct S0 * volatile g_128 = &g_129;
static volatile struct S0 * volatile * const g_127 = &g_128;
static struct S0 g_150 = {7L,254UL,0L,0x85F46675L};
static unsigned char g_171 = 0x35L;
static short g_176 = 0L;
static short g_179 = 0L;
static int g_194 = 0xB16BE7C8L;
static volatile short * const g_202 = (void*)0;
static volatile short * const *g_201 = &g_202;
static struct S0 g_244 = {0L,0UL,3L,0UL};
static short **g_273 = (void*)0;
static int g_275 = 1L;
static unsigned g_277 = 0UL;
static struct S0 g_300 = {0xC1FDE36DL,0xBFL,0x6EFBBEDDL,1UL};
static unsigned char *g_336 = &g_300.f1;
static struct S0 g_349 = {0x584F748EL,5UL,0x773A31FFL,0UL};
static unsigned short g_362 = 65526UL;
static char g_378 = 0x24L;
static char g_380 = 0xAAL;
static const short ***g_385 = (void*)0;
static unsigned char **g_398 = &g_336;
static unsigned char ***g_397 = &g_398;
static struct S0 g_468 = {1L,0x1AL,-8L,0x5A66E493L};
static unsigned char g_473 = 2UL;
static struct S0 g_494 = {-1L,0x84L,1L,0xD0861988L};
static struct S0 *g_493 = &g_494;
static const struct S0 g_535 = {0x00087E1CL,253UL,-9L,1UL};
static struct S0 g_538 = {0L,0xDBL,0x8FE34A36L,0x620321E0L};
static unsigned short g_556 = 1UL;
static volatile unsigned short **g_569 = (void*)0;
static int *g_615 = (void*)0;
static volatile unsigned g_652 = 4294967295UL;
static volatile unsigned *g_651 = &g_652;
static volatile unsigned **g_650 = &g_651;
static volatile unsigned ***g_649 = &g_650;
static struct S0 g_661 = {0x66832A09L,0x36L,0xE8A3A940L,4294967295UL};
static struct S0 g_680 = {-9L,0xB7L,0x5221C398L,6UL};
static struct S0 g_688 = {0x2FF52500L,0x00L,-1L,0x4570C23EL};
static unsigned g_692 = 0x306B9DCEL;
static const unsigned char ****g_717 = (void*)0;
static short ***g_729 = &g_273;
static short ****g_728 = &g_729;
static unsigned char *****g_735 = (void*)0;
static int g_759 = (-9L);
static struct S0 g_810 = {0xB0216889L,0x1CL,0L,4UL};
static struct S0 g_866 = {0L,252UL,-9L,0x25D52D19L};



static char func_1(void);
static unsigned short func_8(const unsigned p_9, int p_10, short p_11);
static unsigned char func_19(int p_20);
static short func_23(unsigned p_24, int p_25);
static unsigned char func_26(short p_27);
static char func_28(short p_29, unsigned char p_30, unsigned char p_31, char p_32, short p_33);
static int * func_50(const int p_51);
static struct S0 * func_53(int p_54, unsigned char p_55);
static int * func_63(unsigned short p_64, unsigned short p_65, short p_66, int p_67);
static short func_76(struct S0 * p_77, int p_78, short * p_79, int p_80);
static char func_1(void)
{
    unsigned l_6 = 1UL;
    unsigned char *l_38 = &g_39;
    short *l_40 = (void*)0;
    int l_41 = 1L;
    (*g_48) = (safe_sub_func_int32_t_s_s((l_6 > (g_7 < (func_8(l_6, g_12, (safe_sub_func_int32_t_s_s((((g_12 >= (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(func_19((((safe_rshift_func_int16_t_s_s(func_23(l_6, (((func_26((l_41 = (func_28((safe_add_func_uint16_t_u_u(((0L >= l_6) == ((*l_38) = ((((safe_rshift_func_uint16_t_u_u(((4294967295UL ^ 4294967295UL) , 0xBFF5L), g_12)) ^ g_12) , 0xF7L) & g_12))), 6UL)), g_12, g_12, l_6, g_12) , 0L))) == 0xD1L) , l_41) , 0x42E5F0E7L)), l_6)) ^ (***g_397)) > g_494.f2)), g_468.f1)), 0x63L))) , g_688.f2) , g_378), g_661.f2))) && l_6))), 0UL));

    ;

    return g_150.f3;
}







static unsigned short func_8(const unsigned p_9, int p_10, short p_11)
{
    const int **l_830 = (void*)0;
    const int *l_832 = &g_535.f0;
    const int **l_831 = &l_832;
    const int * const l_833 = &g_300.f2;
    int *l_834 = &g_538.f2;
    unsigned **l_838 = (void*)0;
    unsigned ***l_837 = &l_838;
    unsigned ****l_836 = &l_837;
    unsigned *****l_835 = &l_836;
    short l_841 = (-6L);
    short **** const l_844 = (void*)0;
    unsigned char *l_845 = &g_810.f1;
    unsigned char *l_846 = &g_468.f1;
    int *l_847 = &g_810.f2;
    short l_868 = (-1L);
    int l_883 = (-3L);
lbl_896:
    (*l_834) = (((*l_831) = &p_10) != ((l_833 == l_833) , &p_10));

    ;
    if (((*l_834) = func_26((((*l_835) = (void*)0) == ((g_661.f1 || func_26((safe_div_func_uint8_t_u_u(((*l_834) = ((**g_398) = (l_841 || (g_494.f1 , g_688.f2)))), (((*l_847) = ((((((*l_846) = ((*l_845) = (safe_lshift_func_uint8_t_u_s(p_10, ((((((((*l_833) != (*l_833)) , (void*)0) == l_844) > 0x0BE68BC8L) , p_10) || 0x9B73L) > (*l_833)))))) ^ 0x46L) , p_10) , 0x2CL) > p_9)) , (*l_847)))))) , &l_837)))))
    {
        unsigned l_858 = 0UL;
        struct S0 *l_865 = &g_866;
        for (g_468.f1 = 0; (g_468.f1 <= 9); g_468.f1 = safe_add_func_uint32_t_u_u(g_468.f1, 9))
        {
            int l_867 = 4L;
            g_493 = func_53((((((safe_add_func_int8_t_s_s((((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(0L, l_858)) , (safe_lshift_func_uint16_t_u_u((0L ^ (safe_div_func_int16_t_s_s((-1L), (safe_sub_func_uint8_t_u_u(p_10, func_76(l_865, (*l_847), &p_11, l_867)))))), g_535.f0))), g_244.f1)), 65534UL)) != p_11) >= 65534UL), 255UL)) <= 4294967291UL) ^ (-10L)) , 65534UL) , g_866.f1), p_10);

            ;
            return l_867;
        }
    }
    else
    {
        int l_873 = 0xA35AA076L;
        int l_880 = 0xFCE3EFDEL;
        short *l_889 = &l_841;
        char *l_894 = &g_378;
        char *l_895 = &g_97;
        (*l_847) = (65535UL < (g_176 && ((((l_868 = p_10) == ((func_26(((safe_sub_func_uint8_t_u_u(((***g_397) = (safe_rshift_func_uint8_t_u_s((l_873 = p_10), p_9))), (safe_sub_func_int8_t_s_s(func_76(((p_11 , ((safe_div_func_uint32_t_u_u(p_11, (safe_rshift_func_uint8_t_u_u(((((l_880 ^ (safe_add_func_int16_t_s_s((0xF400L >= p_9), 0x7EC9L))) & (*l_834)) != (*l_833)) | g_661.f2), l_883)))) & 0x8328A42DL)) , (void*)0), p_11, &g_176, l_880), (-2L))))) && p_11)) >= 0UL) ^ p_11)) | p_11) , (*l_833))));
        (*l_847) = (safe_lshift_func_uint16_t_u_u(((p_11 , (safe_mod_func_int16_t_s_s((l_880 = (((***g_397) = p_10) == ((*l_895) = (safe_unary_minus_func_uint16_t_u((((*l_889) = (p_10 < g_866.f2)) != (((*l_894) = (((safe_div_func_int8_t_s_s(g_759, (safe_lshift_func_int16_t_s_s((p_10 | (0x00L <= (-10L))), ((l_873 | (-1L)) , p_10))))) , p_10) | p_10)) , 0xCD30L))))))), g_179))) , p_10), 3));
    }

    ;
    if (g_759)
        goto lbl_896;
    return p_10;
}







static unsigned char func_19(int p_20)
{
    unsigned char l_552 = 0x01L;
    short *l_570 = &g_176;
    int *l_574 = &g_300.f2;
    unsigned *l_601 = (void*)0;
    unsigned **l_600 = &l_601;
    unsigned ***l_599 = &l_600;
    int l_614 = 8L;
    struct S0 *l_679 = &g_680;
    unsigned ****l_681 = &l_599;
    unsigned *****l_682 = &l_681;
    short l_683 = 0L;
    int *l_695 = &g_661.f0;
    int **l_694 = &l_695;
    unsigned char ****l_719 = &g_397;
    short *** const *l_760 = &g_729;
    unsigned short l_773 = 0xBDBDL;
    short l_774 = 0L;
    int *l_780 = &g_688.f2;
    for (g_468.f2 = 0; (g_468.f2 <= 10); ++g_468.f2)
    {
        short *l_584 = &g_176;
        unsigned ***l_585 = (void*)0;
        const unsigned ***l_592 = (void*)0;
        const unsigned ****l_591 = &l_592;
        unsigned *l_596 = (void*)0;
        unsigned **l_595 = &l_596;
        unsigned ***l_594 = &l_595;
        unsigned ****l_593 = &l_594;
        int l_602 = 0x1D715F21L;
        struct S0 *l_660 = &g_661;
        if (g_94)
            break;
        for (g_494.f0 = 0; (g_494.f0 != (-27)); g_494.f0 = safe_sub_func_uint32_t_u_u(g_494.f0, 3))
        {
            unsigned l_543 = 18446744073709551611UL;
            unsigned char ***l_562 = &g_398;
            int l_571 = 0L;
            int **l_575 = &l_574;
            unsigned ****l_586 = (void*)0;
            unsigned ****l_587 = &l_585;
            unsigned *****l_597 = (void*)0;
            unsigned *****l_598 = &l_593;
            if (l_543)
            {
                short l_544 = (-7L);
                int *l_546 = &g_468.f2;
                int **l_545 = &l_546;
                (*l_545) = (g_94 , func_63((g_535.f1 <= l_543), p_20, l_543, l_544));

                ;
            }
            else
            {
                struct S0 **l_551 = &g_493;
                unsigned short *l_555 = &g_556;
                int l_559 = 0x0326982EL;
                unsigned char ****l_563 = &g_397;
                unsigned char ***l_565 = &g_398;
                unsigned char ****l_564 = &l_565;
                unsigned *l_566 = (void*)0;
                unsigned *l_567 = (void*)0;
                unsigned *l_568 = &l_543;
                int *l_573 = &g_116;
                int **l_572 = &l_573;
                l_571 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((func_76(((*l_551) = g_493), (((*g_336) = (l_552 & ((((*l_555) = (g_362 = (safe_rshift_func_uint8_t_u_s(0xA1L, g_194)))) != p_20) , ((((safe_div_func_uint8_t_u_u(l_559, (safe_lshift_func_int16_t_s_s((-7L), (~(((*l_568) = (((*l_563) = l_562) != ((*l_564) = &g_398))) , p_20)))))) & 6UL) , g_569) != g_569)))) , 1L), l_570, g_176) && 0UL) | g_179), 10)), p_20));
                (*l_572) = (void*)0;

                ;
            }
            (*l_575) = l_574;
        }
    }
lbl_781:
    if (((safe_add_func_int32_t_s_s(p_20, (((*l_574) = func_76(g_493, (((func_76(((*l_574) , l_679), ((&g_398 == (void*)0) > (*l_574)), ((((&l_599 == ((*l_682) = l_681)) , (*l_574)) > p_20) , (void*)0), (*l_574)) | g_680.f2) <= (*l_574)) , g_60.f2), &g_12, l_683)) ^ g_535.f1))) && g_661.f0))
    {
        int **l_684 = &g_615;
        struct S0 *l_687 = &g_688;
        short **l_691 = &l_570;
        int ***l_696 = &l_694;
        (*l_684) = &l_614;

        ;
        if (l_683)
            goto lbl_693;
lbl_693:
        (*l_574) = (p_20 , func_76(func_53((safe_rshift_func_int8_t_s_s(func_76(l_687, ((((safe_add_func_int16_t_s_s((l_691 != l_691), (~0xCD2DL))) , ((p_20 , (*g_649)) != (void*)0)) != g_692) | (**l_684)), &l_683, p_20), 4)), (***g_397)), (*g_615), &l_683, (**l_684)));
        (*l_696) = l_694;
    }
    else
    {
        short l_697 = 0xFCE6L;
        (*l_574) = l_697;
    }
    if (g_538.f2)
    {
        short l_716 = 0x4D53L;
        int l_721 = 0L;
        short ****l_727 = (void*)0;
        if ((safe_mod_func_int8_t_s_s(g_680.f2, ((***g_397) = 0xD8L))))
        {
            int **l_703 = &l_574;
            const unsigned char *****l_718 = &g_717;
            unsigned *l_720 = &g_692;
            int l_731 = 0xDA9F92D7L;
            for (g_39 = (-28); (g_39 == 55); g_39++)
            {
                int **l_702 = &g_615;
                (*l_702) = &g_275;

                ;
                (*l_702) = &g_275;
            }

            ;
            (*l_703) = &p_20;

            ;
            (*l_574) = (l_721 = ((safe_add_func_uint32_t_u_u(((*l_720) = (g_277 = (safe_div_func_int8_t_s_s(func_76(l_679, (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(p_20, 0L)), (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_uint16_t_u_u(l_716, 15)) > (((*l_718) = g_717) == (l_719 = (((&l_679 != (void*)0) != 1L) , (void*)0)))) & 65535UL) && (*l_574)), p_20)))), &l_716, g_244.f2), (*l_574))))), (*l_574))) , 1L));

            ;
            for (g_150.f0 = (-5); (g_150.f0 < (-23)); --g_150.f0)
            {
                int l_726 = 0L;
                short *l_762 = &g_12;
                const unsigned short l_765 = 0xDF0CL;
                unsigned *l_771 = &g_92;
                for (l_716 = 0; (l_716 < 11); ++l_716)
                {
                    short ****l_730 = &g_729;
                    (*l_703) = func_63(p_20, l_726, p_20, (((***g_397) = p_20) != (l_727 == (l_730 = g_728))));

                    ;
                    if (l_731)
                        continue;
                    if (p_20)
                        continue;
                }
                for (g_349.f0 = 0; (g_349.f0 < (-12)); --g_349.f0)
                {
                    unsigned char *****l_734 = (void*)0;
                    short ***l_738 = &g_273;
                    int *l_741 = &g_538.f2;
                    (**l_703) = ((((*l_570) = (((*l_720) = ((g_735 = l_734) != l_718)) > ((safe_sub_func_uint8_t_u_u((((l_738 != (g_661.f2 , (void*)0)) < p_20) , ((**l_703) & ((((((p_20 >= ((*l_741) = l_716)) | 0UL) , g_378) , 0xDAL) == p_20) , g_349.f1))), p_20)) ^ (*l_574)))) , g_39) & g_661.f2);
                    for (g_300.f2 = 0; (g_300.f2 < (-25)); g_300.f2--)
                    {
                        int ***l_744 = &l_694;
                        short *** const **l_761 = &l_760;
                        unsigned short l_763 = 0x298BL;
                        int l_764 = 0xD4E2116BL;
                        (*l_574) = (((void*)0 != l_744) , p_20);
                        (*l_703) = &g_275;

                        ;
                        l_764 = (((safe_lshift_func_int8_t_s_u((((*l_574) = ((&g_92 != (void*)0) , (**l_703))) || (**g_398)), 4)) <= 0xF7L) & (safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s(6L, (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_76(func_53((p_20 && (safe_div_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_759, ((((*l_761) = l_760) == (void*)0) || (*g_336)))) == 0xDEL), 0xD134L))), (***g_397)), g_60.f0, l_762, g_494.f0), l_763)), p_20)))), p_20)));
                    }
                    (*l_703) = func_50(l_765);

                    ;
                    for (l_731 = (-4); (l_731 != 19); l_731 = safe_add_func_int8_t_s_s(l_731, 5))
                    {
                        int l_768 = 0L;
                        (*l_574) = (l_768 || (l_765 | ((*l_570) = (safe_rshift_func_uint16_t_u_s((l_716 , (&g_92 == l_771)), 3)))));
                        return (*l_574);


                    }
                }
            }

            ;
        }
        else
        {
            int l_777 = 0x548C225DL;
            int *l_778 = &l_721;
            int **l_779 = (void*)0;
            (*l_574) = (safe_unary_minus_func_uint16_t_u((l_774 = l_773)));
            p_20 = ((*l_574) = (safe_add_func_int16_t_s_s((l_777 = p_20), p_20)));
            l_780 = func_50(((*l_778) = 9L));

            ;
        }

        ;
        ;
        ;
        ;
    }
    else
    {
        int * const l_786 = &g_275;
        unsigned char l_789 = 0x86L;
        int **l_829 = &l_780;
        if (g_176)
            goto lbl_781;
        for (g_171 = 0; (g_171 != 14); g_171++)
        {
            volatile int **l_785 = &g_48;
            volatile int ***l_784 = &l_785;
            int **l_787 = &l_574;
            unsigned short l_794 = 0UL;
            char *l_807 = &g_378;
            (*l_784) = &g_48;
            (*l_787) = l_786;

            ;
            if (g_179)
            {
                unsigned l_788 = 0x33237D9CL;
                l_789 = l_788;
                if (g_300.f2)
                    continue;
            }
            else
            {
                int **l_790 = (void*)0;
                int **l_791 = &l_574;
                short *l_812 = &g_176;
                (*l_791) = l_786;
                for (g_39 = 0; (g_39 == 43); g_39++)
                {
                    return l_794;


                }
                for (g_661.f0 = 0; (g_661.f0 == (-10)); g_661.f0--)
                {
                    char **l_808 = &l_807;
                    struct S0 *l_809 = &g_810;
                    int l_811 = 1L;
                    unsigned char *l_819 = (void*)0;
                    unsigned char **l_818 = &l_819;
                    unsigned short *l_820 = &g_556;
                    unsigned short *l_821 = &l_794;
                    int l_822 = 0xA00465BDL;
                    int l_823 = 2L;
                    (*l_786) = (((&g_116 == (void*)0) , ((**l_791) , ((safe_sub_func_uint16_t_u_u(func_23(p_20, func_28(((*l_570) = ((safe_lshift_func_uint16_t_u_s(0x0AFCL, 5)) , (safe_rshift_func_int16_t_s_s((func_23((safe_add_func_int8_t_s_s(func_76((((***g_397) = (((**l_791) <= 0x6831L) >= (((*l_808) = l_807) == (void*)0))) , l_809), l_811, l_812, p_20), (**l_787))), p_20) , 0xC65FL), 6)))), p_20, l_811, p_20, p_20)), p_20)) & (-6L)))) , p_20);
                    (**l_791) = (safe_div_func_int8_t_s_s(((**l_787) <= (safe_div_func_uint16_t_u_u(func_28(p_20, (safe_unary_minus_func_uint32_t_u(p_20)), (*g_336), (((*l_821) = ((*l_820) = (((*l_818) = (**g_397)) == (void*)0))) >= l_811), (l_823 = ((*l_570) = (((*l_786) == (+(l_822 <= p_20))) && (*l_780))))), p_20))), 1L));

                    ;
                    for (g_176 = 0; (g_176 != 12); g_176 = safe_add_func_int8_t_s_s(g_176, 4))
                    {
                        unsigned char l_826 = 6UL;
                        if (l_826)
                            break;
                    }
                    if (p_20)
                        continue;
                }
                (**l_791) = (safe_add_func_uint8_t_u_u(p_20, (0x2F0CL == p_20)));
            }
        }

        ;
        (*l_829) = &l_614;

        ;
        (**l_829) = p_20;
    }

    ;
    ;
    ;
    ;
    return p_20;


}







static short func_23(unsigned p_24, int p_25)
{
    int l_45 = (-6L);
    unsigned char *l_52 = &g_39;
    int *l_409 = &g_244.f2;
    int l_438 = 0x04C170D7L;
    short *l_448 = &g_12;
    short * const *l_447 = &l_448;
    short l_469 = 2L;
    struct S0 **l_488 = (void*)0;
    unsigned char l_497 = 0xC6L;
    int **l_526 = (void*)0;
    int **l_527 = &l_409;
    int *l_532 = &g_60.f2;
    const struct S0 *l_534 = &g_535;
    const struct S0 **l_533 = &l_534;
    const struct S0 *l_537 = &g_538;
    const struct S0 **l_536 = &l_537;
    if ((safe_add_func_int32_t_s_s((0x50L <= p_25), 0xD69B45C7L)))
    {
        int *l_412 = &g_275;
        int *l_462 = &g_244.f2;
        struct S0 *l_467 = &g_468;
        unsigned *l_498 = &g_277;
        int **l_523 = (void*)0;
        int **l_524 = &l_462;
lbl_522:
        if (l_45)
        {
            for (p_25 = 24; (p_25 >= 20); p_25--)
            {
                int *l_411 = &g_349.f2;
                int **l_410 = &l_411;
                (*l_410) = (l_409 = ((&p_25 == g_48) , func_50((!(l_52 != (l_45 , (void*)0))))));

                ;
                ;
            }
        }
        else
        {
            l_412 = &g_116;

            ;
            return g_362;
        }
        for (g_380 = 27; (g_380 <= (-11)); --g_380)
        {
            short l_419 = 1L;
            const short *l_451 = &l_419;
            const short **l_450 = &l_451;
            unsigned *l_485 = &g_94;
            unsigned **l_484 = &l_485;
            unsigned ***l_483 = &l_484;
            unsigned l_505 = 0x77EDE555L;
            for (g_349.f2 = (-6); (g_349.f2 == (-19)); g_349.f2--)
            {
                char *l_422 = &g_378;
                int l_431 = 0x4C374B97L;
                char l_437 = 0xEDL;
                unsigned ****l_486 = &l_483;
                struct S0 **l_487 = &l_467;
                short *l_495 = &g_176;
                int l_496 = 0x5233384AL;
            }
            if (g_171)
                goto lbl_522;
        }
        (*l_524) = &g_275;

        ;
    }
    else
    {
        int *l_525 = &l_438;
        (*l_409) = (p_24 > (0x1DE429D4L || 0xDC0C72F8L));
        l_525 = &g_116;

        ;
        (*l_409) = (*l_525);
    }

    ;
    (*l_527) = &l_438;

    ;
    (*l_532) = ((g_194 ^ (*l_409)) || (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((*l_409) = p_24), 3)), g_194)));
    (*l_536) = ((*l_533) = (void*)0);

    ;
    ;
    return p_25;
}







static unsigned char func_26(short p_27)
{
    short l_42 = 0x6552L;
    return l_42;
}







static char func_28(short p_29, unsigned char p_30, unsigned char p_31, char p_32, short p_33)
{
    return g_12;
}







static int * func_50(const int p_51)
{
    char l_56 = 0xB8L;
    int l_57 = 0x63704BAEL;
    unsigned char *l_58 = &g_39;
    struct S0 *l_62 = (void*)0;
    struct S0 **l_61 = &l_62;
    unsigned short l_90 = 0x9490L;
    unsigned char *l_91 = &g_60.f1;
    unsigned *l_93 = &g_94;
    int l_95 = 0L;
    char *l_96 = &g_97;
    int l_98 = 0x490EB022L;
    short *l_99 = &g_12;
    int *l_381 = &g_300.f2;
    short ***l_389 = (void*)0;
    unsigned char ***l_399 = &g_398;
    (*l_61) = func_53(l_56, ((*l_58) = l_57));

    ;
    l_381 = func_63((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(0x38L, (l_56 >= (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_60.f2 , func_76(((*l_61) = func_53(((p_51 , func_28((0x2BL == (((((*l_96) = ((safe_unary_minus_func_uint32_t_u(0x64A05A9EL)) , (safe_rshift_func_uint16_t_u_s((l_95 = ((safe_mod_func_uint32_t_u_u(((*l_93) = (g_92 = ((g_60.f2 | ((+4L) , ((safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((*l_91) = (((*l_58) = ((l_90 & l_90) & l_90)) , g_39)), g_60.f0)), 0x44E8L)) != g_12))) ^ g_60.f2))), 1UL)) , l_90)), 2)))) | 1UL) , g_39) && 1UL)), l_98, p_51, p_51, p_51)) , l_90), p_51)), g_60.f2, l_99, l_56)), 5)), p_51))))) == 0xFCL), 6UL)), g_244.f2, p_51, p_51);

    ;
    if (func_26((*l_381)))
    {
        int l_384 = 1L;
        const short ****l_386 = (void*)0;
        const short ****l_387 = (void*)0;
        const short ****l_388 = &g_385;
        short ***l_390 = &g_273;
        unsigned short *l_391 = (void*)0;
        unsigned short **l_392 = &l_391;
        unsigned short *l_393 = &g_362;
        short *l_394 = (void*)0;
        short *l_395 = (void*)0;
        short *l_396 = (void*)0;
        int l_400 = (-1L);
        short l_401 = 5L;
        (*l_381) = func_26((safe_div_func_int32_t_s_s(((((*l_388) = (l_384 , g_385)) != (l_390 = l_389)) == ((l_393 = ((*l_392) = l_391)) != (void*)0)), func_28((g_179 = ((*l_381) = (*l_381))), (((l_400 = ((!p_51) | ((l_399 = g_397) == (void*)0))) == l_401) , (*g_336)), p_51, p_51, p_51))));

        ;
        ;
    }
    else
    {
        unsigned short l_402 = 0x62D9L;
        short *l_405 = &g_179;
        const int **l_406 = (void*)0;
        const int *l_408 = &g_300.f2;
        const int **l_407 = &l_408;
        l_402 = p_51;
        l_381 = &l_95;

        ;
        (*l_61) = func_53(((safe_rshift_func_int16_t_s_s(((*l_405) = p_51), 15)) != p_51), (func_26((g_349.f0 , l_402)) , 0x73L));
        (*l_407) = &p_51;

        ;
    }

    ;
    return &g_275;


}







static struct S0 * func_53(int p_54, unsigned char p_55)
{
    struct S0 *l_59 = &g_60;
    return l_59;


}







static int * func_63(unsigned short p_64, unsigned short p_65, short p_66, int p_67)
{
    const unsigned short l_347 = 65535UL;
    int l_352 = 1L;
    int l_363 = 1L;
    unsigned char l_368 = 0x5FL;
    if ((g_176 == (safe_unary_minus_func_int16_t_s(l_347))))
    {
        struct S0 *l_348 = &g_349;
        int *l_350 = (void*)0;
        int *l_351 = (void*)0;
        short *l_353 = &g_179;
        int *l_354 = &g_275;
        unsigned l_359 = 1UL;
        unsigned short *l_360 = (void*)0;
        unsigned short *l_361 = &g_362;
        char *l_377 = &g_378;
        char *l_379 = &g_380;
        g_300.f2 = (l_348 != (void*)0);
        (*l_354) = func_76(func_53(p_66, p_66), l_352, l_353, p_64);
        for (g_179 = (-25); (g_179 == 2); g_179 = safe_add_func_int32_t_s_s(g_179, 2))
        {
            return &g_116;


        }
        (*l_354) = (((g_349.f0 , (safe_add_func_int8_t_s_s(((l_363 = ((*l_361) = l_359)) , ((~((*l_361) = (l_363 = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((~((*l_353) = l_368)) ^ (((*l_379) = ((*l_377) = (g_97 = ((safe_lshift_func_int8_t_s_u(g_300.f1, 0)) ^ (func_26((safe_rshift_func_int8_t_s_u((1L >= (safe_rshift_func_int16_t_s_s(((l_347 == (((*l_361) = (g_171 | (3UL | (safe_sub_func_uint32_t_u_u((p_66 | p_64), 3UL))))) , p_64)) > 0x0C481D80L), 15))), (*g_336)))) , 0x85BDA2F7L))))) < 255UL)), p_64)), (*l_354)))))) & 0x584EL)), p_66))) < 0x3DD2467AL) == 0x0AD468E1L);
    }
    else
    {
        return &g_116;


    }
    return &g_275;


}







static short func_76(struct S0 * p_77, int p_78, short * p_79, int p_80)
{
    int *l_106 = &g_60.f2;
    short *l_111 = &g_12;
    char l_143 = 0L;
    int l_162 = 0x0765CA49L;
    unsigned short l_173 = 3UL;
    unsigned char *l_228 = &g_39;
    unsigned l_270 = 1UL;
    unsigned *l_322 = &g_94;
    for (g_92 = 0; (g_92 != 23); ++g_92)
    {
        int *l_102 = (void*)0;
        unsigned l_103 = 0x2BFFD659L;
        l_102 = &p_78;

        ;
        if (l_103)
            continue;
        (*l_102) = (safe_sub_func_uint16_t_u_u(g_12, (*l_102)));
        if (p_80)
            continue;
    }
    (*l_106) = (p_78 == p_80);
lbl_345:
    for (p_78 = (-13); (p_78 < 23); p_78 = safe_add_func_uint16_t_u_u(p_78, 1))
    {
        const int l_114 = 0xF6120E7AL;
        char l_161 = 1L;
        int l_172 = 0xCFDAD028L;
        char l_204 = (-3L);
        unsigned l_256 = 4294967295UL;
        for (g_92 = 0; (g_92 > 20); g_92++)
        {
            unsigned *l_133 = &g_94;
            unsigned **l_132 = &l_133;
            int l_137 = 7L;
            int l_139 = (-1L);
            char l_148 = 0xDBL;
            struct S0 *l_149 = &g_150;
            short *l_160 = &g_12;
            int l_198 = 1L;
            volatile short * const **l_203 = &g_201;
        }
        if (g_92)
            goto lbl_345;
    }
    (*l_106) = ((void*)0 == &l_106);
    return (*l_106);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    transparent_crc(g_60.f2, "g_60.f2", print_hash_value);
    transparent_crc(g_60.f3, "g_60.f3", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_129.f0, "g_129.f0", print_hash_value);
    transparent_crc(g_129.f1, "g_129.f1", print_hash_value);
    transparent_crc(g_129.f2, "g_129.f2", print_hash_value);
    transparent_crc(g_129.f3, "g_129.f3", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_150.f2, "g_150.f2", print_hash_value);
    transparent_crc(g_150.f3, "g_150.f3", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_244.f0, "g_244.f0", print_hash_value);
    transparent_crc(g_244.f1, "g_244.f1", print_hash_value);
    transparent_crc(g_244.f2, "g_244.f2", print_hash_value);
    transparent_crc(g_244.f3, "g_244.f3", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_300.f0, "g_300.f0", print_hash_value);
    transparent_crc(g_300.f1, "g_300.f1", print_hash_value);
    transparent_crc(g_300.f2, "g_300.f2", print_hash_value);
    transparent_crc(g_300.f3, "g_300.f3", print_hash_value);
    transparent_crc(g_349.f0, "g_349.f0", print_hash_value);
    transparent_crc(g_349.f1, "g_349.f1", print_hash_value);
    transparent_crc(g_349.f2, "g_349.f2", print_hash_value);
    transparent_crc(g_349.f3, "g_349.f3", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_468.f0, "g_468.f0", print_hash_value);
    transparent_crc(g_468.f1, "g_468.f1", print_hash_value);
    transparent_crc(g_468.f2, "g_468.f2", print_hash_value);
    transparent_crc(g_468.f3, "g_468.f3", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_494.f0, "g_494.f0", print_hash_value);
    transparent_crc(g_494.f1, "g_494.f1", print_hash_value);
    transparent_crc(g_494.f2, "g_494.f2", print_hash_value);
    transparent_crc(g_494.f3, "g_494.f3", print_hash_value);
    transparent_crc(g_535.f0, "g_535.f0", print_hash_value);
    transparent_crc(g_535.f1, "g_535.f1", print_hash_value);
    transparent_crc(g_535.f2, "g_535.f2", print_hash_value);
    transparent_crc(g_535.f3, "g_535.f3", print_hash_value);
    transparent_crc(g_538.f0, "g_538.f0", print_hash_value);
    transparent_crc(g_538.f1, "g_538.f1", print_hash_value);
    transparent_crc(g_538.f2, "g_538.f2", print_hash_value);
    transparent_crc(g_538.f3, "g_538.f3", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_652, "g_652", print_hash_value);
    transparent_crc(g_661.f0, "g_661.f0", print_hash_value);
    transparent_crc(g_661.f1, "g_661.f1", print_hash_value);
    transparent_crc(g_661.f2, "g_661.f2", print_hash_value);
    transparent_crc(g_661.f3, "g_661.f3", print_hash_value);
    transparent_crc(g_680.f0, "g_680.f0", print_hash_value);
    transparent_crc(g_680.f1, "g_680.f1", print_hash_value);
    transparent_crc(g_680.f2, "g_680.f2", print_hash_value);
    transparent_crc(g_680.f3, "g_680.f3", print_hash_value);
    transparent_crc(g_688.f0, "g_688.f0", print_hash_value);
    transparent_crc(g_688.f1, "g_688.f1", print_hash_value);
    transparent_crc(g_688.f2, "g_688.f2", print_hash_value);
    transparent_crc(g_688.f3, "g_688.f3", print_hash_value);
    transparent_crc(g_692, "g_692", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_810.f0, "g_810.f0", print_hash_value);
    transparent_crc(g_810.f1, "g_810.f1", print_hash_value);
    transparent_crc(g_810.f2, "g_810.f2", print_hash_value);
    transparent_crc(g_810.f3, "g_810.f3", print_hash_value);
    transparent_crc(g_866.f0, "g_866.f0", print_hash_value);
    transparent_crc(g_866.f1, "g_866.f1", print_hash_value);
    transparent_crc(g_866.f2, "g_866.f2", print_hash_value);
    transparent_crc(g_866.f3, "g_866.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
