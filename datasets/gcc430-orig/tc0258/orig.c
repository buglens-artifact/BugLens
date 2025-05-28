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
   char f0;
   short f1;
   volatile unsigned short f2;
   unsigned f3;
   const signed : 0;
};

struct S1 {
   unsigned f0;
   int f1;
   short f2;
};

struct S2 {
   signed f0 : 22;
   unsigned f1 : 14;
   volatile signed f2 : 20;
   const unsigned f3 : 19;
   unsigned f4 : 29;
   signed : 0;
   const unsigned f5 : 16;
   unsigned f6 : 25;
   signed f7 : 17;
   volatile unsigned f8 : 29;
};


static volatile struct S2 g_14 = {986,14,413,65,2591,160,4302,-166,9294};
static unsigned char g_15 = 255UL;
static int g_49 = 1L;
static unsigned short g_59 = 1UL;
static unsigned g_61 = 4294967295UL;
static unsigned char g_64 = 0x53L;
static struct S1 g_88 = {0UL,1L,1L};
static int *g_92 = &g_88.f1;
static struct S2 g_102 = {1914,41,-902,258,22586,126,5561,90,8277};
static int *g_112 = &g_49;
static int g_116 = 0x4679F786L;
static int *g_115 = &g_116;
static struct S1 *g_118 = &g_88;
static struct S1 **g_117 = &g_118;
static struct S0 g_205 = {0L,-1L,2UL,0x2A32DB51L};
static struct S0 g_209 = {0x1BL,0x3C69L,65530UL,0xCD7AFF63L};
static char g_285 = (-3L);
static unsigned char g_288 = 3UL;
static unsigned g_292 = 0UL;
static const int *g_295 = &g_88.f1;
static struct S2 g_306 = {-8,21,-881,613,9369,87,5189,54,18339};
static volatile unsigned * const g_317 = (void*)0;
static volatile struct S2 g_336 = {510,109,450,522,14203,59,3760,-295,2222};
static const struct S0 g_347 = {3L,7L,6UL,0x0E84E5F2L};
static const struct S2 g_348 = {-1576,119,217,283,15876,209,5783,42,21798};
static int *g_361 = &g_116;
static volatile struct S0 g_392 = {0xA6L,0xF70DL,0UL,0x8279E18DL};
static volatile struct S2 g_404 = {-332,89,-342,272,15730,174,3519,-118,759};
static volatile struct S2 *g_403 = &g_404;
static short *g_417 = &g_209.f1;
static unsigned g_422 = 0xFF508AB5L;
static struct S2 g_425 = {976,121,-17,238,14274,229,2013,-107,8506};
static volatile struct S0 g_437 = {-9L,0x84B3L,0x84CDL,18446744073709551614UL};
static struct S0 *g_496 = &g_205;
static struct S0 **g_495 = &g_496;
static short g_512 = 0x4BF4L;
static volatile struct S2 g_541 = {-766,108,-581,483,12399,152,1804,-223,7844};
static volatile unsigned *g_579 = (void*)0;
static volatile unsigned **g_578 = &g_579;
static volatile unsigned ***g_577 = &g_578;
static unsigned *g_641 = &g_88.f0;
static unsigned g_676 = 0UL;



static int func_1(void);
static int * func_2(unsigned p_3, int * p_4, int p_5, int p_6);
static int * func_8(int p_9, int p_10, unsigned p_11, int * p_12, char p_13);
static int * func_16(int * const p_17, int p_18);
static int * func_19(unsigned short p_20, char p_21, int p_22, unsigned char p_23);
static unsigned short func_24(unsigned p_25, char p_26, int * p_27);
static unsigned short func_28(unsigned p_29, int * p_30, int * p_31);
static short func_38(int * p_39, unsigned short p_40, int p_41);
static const int * func_42(int * p_43, int * p_44, unsigned p_45, unsigned p_46, int * const p_47);
static unsigned func_50(const unsigned char p_51);
static int func_1(void)
{
    int l_7 = 0x93DDA37BL;
    unsigned short l_296 = 0x108CL;
    int **l_698 = &g_112;
    unsigned l_699 = 0x740F606FL;
    (*l_698) = func_2(l_7, func_8((g_14 , g_14.f3), g_15, l_7, func_16(func_19(func_24(((func_28((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(func_38(&l_7, g_15, l_7), g_102.f5)), 6)), 10)), &l_7, &l_7) != l_7) != (-1L)), g_15, g_115), l_7, g_102.f7, g_102.f7), g_15), l_296), g_102.f6, g_205.f1);


    ;
    ;

    ;
    ;
    return l_699;
}







static int * func_2(unsigned p_3, int * p_4, int p_5, int p_6)
{
    struct S1 l_300 = {0UL,0L,3L};
    struct S1 *l_301 = &g_88;
    unsigned char l_313 = 0x5EL;
    int l_345 = 8L;
    int *l_362 = &g_116;
    int *l_406 = &g_49;
    short *l_444 = (void*)0;
    int l_455 = 0x545CEC79L;
    int **l_471 = &l_406;
    const unsigned char l_472 = 0UL;
    int l_482 = 1L;
    struct S1 l_515 = {9UL,0L,4L};
    unsigned l_574 = 0x631C8ADBL;
    unsigned *l_587 = (void*)0;
    int *l_589 = &g_49;
    struct S0 * const *l_604 = &g_496;
    struct S0 * const **l_603 = &l_604;
    unsigned **l_661 = &g_641;
    struct S2 *l_673 = &g_306;
    struct S2 **l_672 = &l_673;
    unsigned l_695 = 0x1C57B8EEL;
    (*l_301) = l_300;
    if ((*g_112))
    {
        unsigned l_314 = 0x1DE8A2C7L;
        unsigned *l_316 = (void*)0;
        unsigned **l_315 = &l_316;
        char *l_318 = &g_209.f0;
        short l_363 = 0xA35CL;
        int l_379 = 0xEFAE8F2CL;
        int l_380 = 0x822E5146L;
        const int l_389 = 0x674C49AFL;
        struct S0 *l_484 = &g_205;
        struct S2 *l_493 = (void*)0;
        int *l_525 = &l_455;
        unsigned l_531 = 18446744073709551615UL;
        struct S1 l_545 = {0xD6CAF3B4L,0x3A10CC3BL,-1L};
        if ((((((l_300.f0 == 0xC5L) != (*g_115)) >= (((safe_add_func_uint16_t_u_u((g_306 , ((safe_lshift_func_uint8_t_u_u((((*l_318) = (safe_rshift_func_int16_t_s_u((func_50(func_38(&g_116, (g_59 = (g_306.f7 <= g_306.f4)), (((*l_315) = func_19(g_209.f1, ((safe_add_func_int8_t_s_s(l_313, 0x83L)) && (-1L)), g_288, l_314)) == g_317))) , g_88.f1), 6))) && 2UL), g_292)) < l_300.f0)), g_205.f3)) <= g_306.f7) <= g_292)) == l_314) , (*p_4)))
        {
            int **l_319 = &g_112;
            unsigned short *l_328 = (void*)0;
            unsigned short *l_329 = (void*)0;
            unsigned short *l_330 = &g_59;
            struct S1 *l_338 = &l_300;
            struct S1 *l_339 = &g_88;
            (*l_319) = &g_116;

            ;
            if ((safe_sub_func_int16_t_s_s(0xFB80L, (safe_mul_func_uint16_t_u_u(p_5, (!((**l_319) <= ((*l_330) = (safe_rshift_func_int8_t_s_u(((**l_319) == func_50((safe_lshift_func_uint8_t_u_u(0x18L, g_88.f0)))), g_102.f5))))))))))
            {
                char l_335 = 5L;
                int l_337 = 0xD450CAA9L;
                int *l_368 = &l_337;
                for (l_314 = 0; (l_314 >= 51); l_314 = safe_add_func_int8_t_s_s(l_314, 9))
                {
                    const short l_346 = (-1L);
                    int *l_359 = &g_88.f1;
                    (**l_319) = (((g_102.f4 = l_335) >= ((((((g_336 , l_337) && 0UL) , (((l_338 != ((*g_117) = l_339)) & ((*p_4) ^ (*g_112))) | (safe_add_func_uint32_t_u_u(p_6, 0x119678BDL)))) , 0x86AE788CL) , l_314) < g_285)) == g_205.f3);

                    ;
                    if (l_337)
                        break;
                    if ((l_300.f1 = (safe_unary_minus_func_uint16_t_u((~(safe_mul_func_int16_t_s_s(g_14.f2, p_3)))))))
                    {
                        return &g_49;


                    }
                    else
                    {
                        char l_349 = 0xEBL;
                        unsigned short l_352 = 0x88D9L;
                        int *l_360 = (void*)0;
                        char *l_366 = (void*)0;
                        const int **l_367 = &g_295;
                        (*l_339) = ((l_345 || ((l_346 | (g_347 , (g_348 , (func_38(func_8(l_349, (*g_115), p_5, func_19((safe_lshift_func_int16_t_s_s(p_6, 0)), g_348.f7, p_6, l_352), l_314), g_205.f2, l_314) <= p_5)))) || p_5)) , (*l_339));
                        (*g_115) = (safe_rshift_func_uint8_t_u_u((l_346 & l_314), (safe_mod_func_int8_t_s_s(g_61, ((-6L) & func_28(func_28(l_314, l_360, &g_116), g_361, l_362))))));
                        (*l_338) = (**g_117);
                        (*l_367) = func_42(((*l_319) = func_16((*l_319), (0x70L | (l_363 == ((g_205.f0 = ((l_314 | ((**l_315) = g_348.f2)) > (p_3 ^ (safe_rshift_func_uint16_t_u_u((g_205.f1 , (p_6 == ((*l_318) = g_64))), 2))))) | l_363))))), g_361, p_5, p_6, l_362);

                        ;
                        ;
                    }

                    ;
                    ;
                    l_368 = &g_49;

                    ;
                }

                ;
                ;
                (*g_92) = ((g_209.f0 && ((safe_unary_minus_func_uint8_t_u((p_6 , (safe_rshift_func_uint8_t_u_u(p_3, (p_5 , ((safe_unary_minus_func_uint32_t_u(p_5)) , (safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((l_379 = ((*l_368) == ((0x92L ^ (safe_sub_func_uint32_t_u_u(((*l_362) = ((*l_338) , 5UL)), g_209.f2))) , (*p_4)))), g_205.f3)), p_5))))))))) | l_380)) ^ 0xBC83731AL);
            }
            else
            {
                short **l_381 = (void*)0;
                short ***l_382 = (void*)0;
                short ***l_383 = &l_381;
                l_379 = (!1L);
                (*l_319) = &l_379;

                ;
                (*l_383) = l_381;
            }

            ;
            (*g_112) = (0x4F2DL ^ g_288);
            for (g_205.f1 = 21; (g_205.f1 == (-21)); g_205.f1 = safe_sub_func_int32_t_s_s(g_205.f1, 4))
            {
                int *l_386 = &g_49;
                unsigned l_393 = 0x4C5BB9B2L;
                (*l_319) = func_8(p_3, func_28(p_5, l_386, &g_49), g_205.f2, &p_5, ((safe_mod_func_int32_t_s_s(((0x2BL ^ (5L & g_348.f7)) >= l_389), g_306.f7)) == (-1L)));

                ;
                (*l_319) = ((func_28(l_380, func_19((0x854FA965L >= (&g_292 == (void*)0)), ((((safe_div_func_int16_t_s_s(func_28((((l_379 = (g_392 , 1L)) , (-2L)) & g_102.f7), (p_4 = l_316), l_316), l_363)) ^ l_393) || g_209.f2) | p_6), (*l_362), l_314), &g_116) && 0xB2EBC687L) , l_362);
            }

            ;
        }
        else
        {
            unsigned short l_394 = 1UL;
            unsigned *l_405 = &g_292;
            unsigned * const *l_428 = (void*)0;
            struct S1 l_434 = {18446744073709551612UL,-2L,1L};
            unsigned char *l_439 = &g_288;
            short ***l_477 = (void*)0;
            struct S1 l_514 = {18446744073709551606UL,-1L,0L};
            if (((l_394 , (safe_add_func_int32_t_s_s(func_28((safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((((p_3 , l_405) == p_4) , (*l_362)), (*g_112))) , l_394), 1L)), l_362, l_406), (*g_361)))) , (-5L)))
            {
                short **l_418 = &g_417;
                short *l_420 = (void*)0;
                short **l_419 = &l_420;
                unsigned short *l_421 = &g_59;
                int l_426 = 6L;
                const int **l_427 = &g_295;
                unsigned * const **l_429 = &l_428;
                (*g_115) = ((~g_336.f7) > (safe_add_func_uint32_t_u_u((((l_394 >= ((g_205.f0 , (safe_div_func_int16_t_s_s(func_38(func_8((((safe_mul_func_int16_t_s_s(p_5, (g_422 = ((*l_421) = (~(safe_div_func_uint32_t_u_u((0UL ^ (safe_add_func_uint32_t_u_u((((~(((*l_362) | ((((p_6 ^ ((g_102.f4 = ((&l_363 == ((*l_419) = ((*l_418) = g_417))) && 0x4036086FL)) | g_116)) == (-1L)) || 1L) , g_102.f5)) >= p_3)) , p_3) & p_3), (*p_4)))), (*l_406)))))))) > (*g_92)) <= 0x85L), (*g_361), p_6, &l_379, p_5), g_306.f0, l_380), p_5))) <= p_5)) , (*g_295)) && 1L), (*g_112))));

                ;
                (*l_427) = func_42(l_405, &g_116, l_426, ((*l_405) = ((0x275723CCL == (*l_406)) | l_426)), &g_116);

                ;
                (*l_429) = l_428;
            }
            else
            {
                unsigned l_458 = 0UL;
                struct S1 l_463 = {9UL,-1L,0xE79FL};
                for (l_313 = (-18); (l_313 <= 2); l_313 = safe_add_func_uint16_t_u_u(l_313, 3))
                {
                    unsigned *l_446 = &g_88.f0;
                    unsigned l_464 = 4294967289UL;
                    for (l_345 = 0; (l_345 == 17); ++l_345)
                    {
                        short **l_438 = &g_417;
                        const int l_442 = 0xAD2B3EF3L;
                        int *l_443 = &l_300.f1;
                        unsigned short *l_445 = &l_394;
                        l_434 = ((*l_301) = g_88);
                        (*g_361) = (0x766AL != ((safe_sub_func_uint32_t_u_u(0xC4F10885L, ((g_348.f4 , (l_434.f1 , 0xE80FF807L)) | 0xCAE76482L))) & 0UL));
                        (*l_406) = (((l_446 = (p_5 , &g_292)) == p_4) , (safe_add_func_int16_t_s_s(((**l_438) = ((*g_115) && g_306.f0)), 0x7B81L)));

                        ;
                    }

                    ;
                    (*l_362) = (*g_92);
                }
            }
            if (((*g_361) = (safe_mod_func_uint8_t_u_u(((l_434.f1 = 1UL) != (((safe_sub_func_uint16_t_u_u(func_28(l_380, &l_455, &g_116), (safe_add_func_uint8_t_u_u(g_392.f2, (&g_295 == (l_471 = &p_4)))))) == (g_348.f1 >= (*l_362))) > l_472)), 0xC9L))))
            {
                struct S0 *l_473 = (void*)0;
                struct S0 **l_474 = (void*)0;
                struct S0 **l_475 = (void*)0;
                struct S0 **l_476 = &l_473;
                const int l_483 = 0x078E50A1L;
                struct S2 *l_494 = (void*)0;
                int *l_505 = &l_345;
                unsigned *l_506 = &l_314;
                int **l_507 = &g_92;
                unsigned char *l_508 = &g_288;
                unsigned char *l_509 = &l_313;
                (*l_476) = l_473;
                if ((((p_6 , l_477) != l_477) || ((*l_318) = (l_379 = ((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(func_50(g_102.f5), p_5)), (l_434.f1 = l_482))) == (((g_49 < g_102.f6) > l_483) >= p_3))))))
                {
                    struct S0 ***l_497 = &l_476;
                    short *l_502 = (void*)0;
                    short *l_503 = &g_205.f1;
                    (*l_476) = l_484;

                    ;
                    (*p_4) = (safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((((*l_318) = ((((((safe_lshift_func_uint8_t_u_u(0xA8L, 6)) && p_5) | (l_493 != l_494)) && (((*l_497) = g_495) == &g_496)) , ((*g_417) = (safe_lshift_func_uint16_t_u_s(l_483, (*g_417))))) > (safe_div_func_int16_t_s_s(((*l_503) = 0x1172L), (*l_406))))) , l_483), p_5)) >= 0xAAL), 0)), 0xCA90L));

                    ;
                    p_4 = &g_116;
                }
                else
                {
                    struct S1 l_504 = {1UL,8L,0xBC5AL};
                    (*l_301) = l_504;
                }

                ;
                ;
                (*l_507) = ((*l_471) = func_8(((*l_505) = func_38(&l_379, l_394, ((0x3CL || l_434.f0) , l_394))), (p_5 , (p_6 > ((*l_506) = (g_347.f3 , p_3)))), p_6, (*l_471), l_483));

                ;
                if (func_50(((*l_509) = ((*l_508) = (**l_471)))))
                {
                    int *l_513 = &l_434.f1;
                    (**l_471) = (*g_295);
                    for (l_300.f1 = 0; (l_300.f1 > (-20)); --l_300.f1)
                    {
                        return &g_49;


                    }
                    (*l_507) = func_8(g_512, (g_306.f7 = ((*l_513) = ((*g_115) = l_434.f2))), l_434.f2, (l_514 , g_112), g_102.f3);

                    ;
                    (*l_301) = l_434;
                }
                else
                {
                    (*l_301) = l_515;
                }

                ;
            }
            else
            {
                unsigned l_524 = 0x95769ECBL;
                const int **l_526 = &g_295;
                (*l_526) = func_42(func_16(func_19((safe_div_func_int32_t_s_s((*g_115), (p_3 , ((safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_439 == (l_524 , &g_288)), 12)), 0xE321L)) != ((((l_318 != (void*)0) && (-1L)) | l_524) == l_314)) <= 9L), l_379)) && l_389)))), g_102.f3, l_514.f2, p_6), g_102.f4), l_525, p_3, l_434.f2, g_361);

                ;
                for (p_6 = 0; (p_6 < 0); p_6++)
                {
                    unsigned **l_532 = (void*)0;
                    unsigned **l_533 = &l_405;
                    int *l_542 = (void*)0;
                    for (l_482 = 0; (l_482 <= (-5)); l_482 = safe_sub_func_uint32_t_u_u(l_482, 4))
                    {
                        (*g_495) = (*g_495);
                    }
                    if ((((((**l_526) ^ ((((65534UL == l_531) , ((*l_533) = &g_422)) != (void*)0) , p_6)) & (safe_mul_func_int8_t_s_s((p_5 || func_38(&g_49, p_3, p_6)), 9L))) >= 0L) >= 254UL))
                    {
                        int *l_536 = &g_116;
                        (*l_301) = l_514;
                        (*l_526) = l_536;

                        ;
                        (*g_112) = (safe_mod_func_uint16_t_u_u((l_434.f0 < (safe_sub_func_uint8_t_u_u(((*l_439) = 0UL), (g_541 , (*l_362))))), 6UL));
                        (*l_471) = &g_116;

                        ;
                    }
                    else
                    {
                        (*l_526) = (g_361 = ((*l_471) = l_405));

                        ;
                        ;
                        ;
                        if ((*p_4))
                            break;
                        return &g_49;


                    }

                    ;
                    ;
                    ;
                    (*l_471) = l_542;

                    ;
                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        ;
        ;
        ;
        l_545 = ((safe_div_func_uint32_t_u_u(((*l_316) = p_3), 1L)) , l_545);
    }
    else
    {
        struct S2 *l_547 = &g_306;
        struct S2 **l_546 = &l_547;
        int l_564 = 6L;
        int *l_571 = &g_88.f1;
        struct S0 ***l_605 = (void*)0;
        unsigned short l_665 = 0x6D65L;
        short *l_677 = &g_209.f1;
        (*l_546) = &g_306;
        for (g_205.f0 = 0; (g_205.f0 > 5); g_205.f0++)
        {
            for (g_116 = 24; (g_116 == 4); g_116 = safe_sub_func_uint32_t_u_u(g_116, 1))
            {
                int *l_552 = &l_515.f1;
                return &g_116;


            }
        }
        for (g_61 = 9; (g_61 != 2); --g_61)
        {
            const int l_557 = 0x7DF791E5L;
            int *l_569 = &l_482;
            unsigned *l_582 = &l_574;
            unsigned **l_581 = &l_582;
            unsigned ***l_580 = &l_581;
            short **l_597 = &l_444;
            unsigned l_606 = 0UL;
            struct S2 *l_617 = &g_102;
            struct S1 *l_632 = (void*)0;
            if ((safe_mod_func_uint16_t_u_u(((l_557 ^ (*l_362)) | (safe_lshift_func_int8_t_s_s(((*l_301) , (safe_mod_func_int32_t_s_s((&g_425 == &g_541), (safe_div_func_uint16_t_u_u(((*g_361) == (l_564 < (0x6A34E4B4L & ((((*l_569) <= (-1L)) != 0xFF066346L) > 0xA5L)))), (*g_417)))))), g_205.f3))), p_3)))
            {
                int **l_570 = (void*)0;
                unsigned ****l_583 = &l_580;
                unsigned short *l_584 = &g_59;
                char *l_588 = &g_209.f0;
                l_571 = ((*l_471) = &g_116);

                ;
                ;
                (*l_569) = (*p_4);
                (*l_569) = (safe_lshift_func_int8_t_s_u(g_102.f6, ((*l_571) != (((**l_471) , g_404.f8) , 7UL))));
                (*g_361) = (*l_571);
            }
            else
            {
                for (g_422 = 0; (g_422 > 41); g_422 = safe_add_func_uint32_t_u_u(g_422, 3))
                {
                    int l_592 = 0x225BBED9L;
                    char *l_602 = &g_209.f0;
                    (*g_361) = (*p_4);
                    if (l_592)
                        break;
                    (*l_569) = (((safe_mul_func_int8_t_s_s(l_592, p_6)) > (((((0UL || (safe_mul_func_int16_t_s_s(p_5, 65531UL))) , g_14.f1) < 0UL) || 0xE1L) , (*p_4))) != 0UL);
                    if ((*g_115))
                        break;
                }
                g_112 = l_569;

                ;
                (*l_571) = (*g_115);
                if ((*g_115))
                    continue;
            }

            ;
            ;
            if ((l_603 != l_605))
            {
                struct S0 **l_607 = &g_496;
                char *l_614 = (void*)0;
                char *l_615 = &g_285;
                int l_616 = 0xB946C837L;
                if (l_606)
                    break;
                (*l_546) = (g_425.f7 , l_617);

                ;
                return &g_49;



            }
            else
            {
                unsigned short l_622 = 0xA4B4L;
                unsigned short *l_623 = &l_622;
                struct S1 l_624 = {0x1EDD02A2L,-1L,0L};
                int *l_645 = &g_116;
                const struct S2 *l_653 = (void*)0;
                const struct S2 **l_652 = &l_653;
                struct S0 *l_668 = &g_205;
                unsigned *l_675 = &g_676;
                if (((*l_406) = (g_306.f6 && (safe_mul_func_uint16_t_u_u((((((*g_417) == (g_306.f0 <= 9UL)) , l_622) > p_6) || (*l_362)), p_6)))))
                {
                    const int * const l_630 = (void*)0;
                    (*l_301) = l_624;
                    for (l_515.f1 = 10; (l_515.f1 <= (-27)); l_515.f1 = safe_sub_func_int16_t_s_s(l_515.f1, 4))
                    {
                        g_361 = (void*)0;

                        ;
                    }

                    ;
                    for (g_205.f0 = 0; (g_205.f0 != 25); g_205.f0 = safe_add_func_int32_t_s_s(g_205.f0, 8))
                    {
                        char l_629 = (-1L);
                        const int **l_631 = &g_295;
                        if (l_629)
                            break;
                        (*l_631) = l_630;

                        ;
                        (*g_117) = l_632;

                        ;
                        if ((*p_4))
                            continue;
                    }

                    ;
                    return &g_116;



                }
                else
                {
                    if ((*p_4))
                    {
                        if ((*l_589))
                            break;
                    }
                    else
                    {
                        return l_645;



                    }
                }
                for (g_116 = 0; (g_116 != 24); g_116++)
                {
                    unsigned l_654 = 4294967295UL;
                    int l_662 = 0L;
                    struct S0 *l_674 = (void*)0;
                    if ((*p_4))
                    {
                        (*l_589) = (*p_4);
                        if ((*p_4))
                            break;
                        return &g_116;



                    }
                    else
                    {
                        if ((*p_4))
                            break;
                        g_295 = (void*)0;

                        ;
                    }

                    ;
                    for (l_654 = 0; (l_654 < 49); ++l_654)
                    {
                        struct S2 ***l_669 = &l_546;
                        struct S2 ***l_670 = (void*)0;
                        struct S2 **l_671 = (void*)0;
                        (*g_495) = l_668;
                        (*l_471) = (void*)0;

                        ;
                        l_674 = (((l_671 = ((*l_669) = &l_547)) != l_672) , l_668);

                        ;
                        ;
                        (*l_471) = &l_662;

                        ;
                    }


                    ;
                    (*g_495) = l_668;
                }

                ;

                (*l_569) = ((g_306.f4 <= ((*l_569) || (*l_645))) , (p_5 < (&g_512 != l_677)));
                return &g_116;



            }
        }

        ;
        ;
        ;
        if (((void*)0 != &g_495))
        {
            short l_678 = 0x957AL;
            (*l_362) = l_678;
            (*l_406) = (*p_4);
        }
        else
        {
            int * const l_679 = &l_482;
            int **l_680 = &g_92;
            int *l_697 = &l_345;
            int **l_696 = &l_697;
            (*l_680) = l_679;

            ;
            (*g_577) = ((&l_345 != ((*l_696) = func_8(p_6, ((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((((*l_362) , l_661) == (void*)0), ((*l_679) = (safe_mul_func_int8_t_s_s(((**l_471) == (safe_div_func_uint16_t_u_u(2UL, ((*g_417) = (**l_471))))), (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((*l_301) , 1L), (**l_471))), (*l_589)))))))), (**l_471))), l_695)) == (**l_471)), (*l_571), &g_49, p_3))) , (*g_577));

            ;
        }

        ;
    }

    ;

    ;
    ;
    ;
    ;
    ;
    (*l_471) = &p_6;

    ;
    ;
    (*g_117) = &l_300;

    ;
    return &g_116;





}







static int * func_8(int p_9, int p_10, unsigned p_11, int * p_12, char p_13)
{
    struct S0 *l_297 = &g_205;
    int *l_298 = &g_88.f1;
    int **l_299 = (void*)0;
    (*l_298) = ((*p_12) = ((void*)0 == l_297));
    l_298 = &p_10;

    ;
    return &g_116;


}







static int * func_16(int * const p_17, int p_18)
{
    unsigned short l_156 = 0xA115L;
    int l_166 = 0x5ECE1F0CL;
    short l_167 = (-10L);
    struct S1 l_169 = {18446744073709551611UL,0x1A19A74BL,0x0380L};
    int *l_173 = &l_169.f1;
    const short l_214 = 0x2F40L;
    int **l_293 = &g_92;
    const int **l_294 = (void*)0;
    for (g_88.f2 = 0; (g_88.f2 != 7); ++g_88.f2)
    {
        const struct S2 *l_151 = (void*)0;
        const struct S2 **l_150 = &l_151;
        unsigned short *l_157 = &l_156;
        int l_160 = 8L;
        struct S1 l_165 = {18446744073709551613UL,-1L,-8L};
        (*g_117) = (*g_117);
        for (g_88.f0 = 0; (g_88.f0 >= 11); ++g_88.f0)
        {
            (*g_117) = (*g_117);
            (*g_112) = (-1L);
            (*g_115) = (*g_92);
            return &g_49;


        }
        if ((safe_lshift_func_int8_t_s_s((+(safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((l_150 != (void*)0), 6)), 2))), ((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(((l_156 || p_18) , (((((((*l_157) = g_102.f0) >= (safe_lshift_func_uint16_t_u_u(l_160, (((safe_mod_func_int8_t_s_s(l_160, g_102.f4)) != (safe_rshift_func_uint16_t_u_s((l_165 , g_15), 15))) ^ g_102.f1)))) , &g_61) != p_17) == g_88.f1) && l_165.f2)), g_102.f1)) <= l_166), l_167)) >= p_18))))
        {
            char l_168 = 6L;
            int *l_172 = &g_88.f1;
            int **l_174 = &l_173;
            (*g_112) = 0x5EAEA331L;
            (*g_112) = ((void*)0 == &g_15);
            (*l_174) = func_19(l_168, ((((((g_61 = ((l_169 , func_28((&l_151 != (void*)0), func_19(((*l_157) = func_28((((safe_add_func_uint16_t_u_u(l_160, p_18)) < func_28((0x44B5L == g_102.f3), func_19(g_49, l_165.f0, g_49, g_102.f6), l_172)) ^ 4UL), &g_116, &l_166)), p_18, (*l_172), l_165.f1), l_173)) , (*l_172))) && g_64) , (*l_173)) >= 0x835EL) | 65532UL) && 0UL), p_18, g_102.f0);

            ;
        }
        else
        {
            return &g_116;


        }

        ;
    }

    ;
    for (l_156 = (-30); (l_156 == 20); l_156 = safe_add_func_int16_t_s_s(l_156, 7))
    {
        short l_192 = (-1L);
        struct S1 l_198 = {1UL,-8L,0x7DE4L};
        struct S0 *l_204 = &g_205;
        int *l_216 = (void*)0;
        const int *l_236 = &g_88.f1;
        struct S1 **l_274 = &g_118;
        int **l_286 = &l_216;
        short *l_287 = (void*)0;
        int **l_291 = &l_173;
        for (g_116 = 0; (g_116 >= (-18)); g_116--)
        {
            int *l_182 = &l_166;
            unsigned *l_183 = &g_61;
            int *l_197 = &g_88.f1;
            for (g_49 = 0; (g_49 == (-14)); g_49 = safe_sub_func_int32_t_s_s(g_49, 1))
            {
                int *l_181 = &l_166;
                (*l_181) = (*g_112);
                return &g_49;


            }
            (*g_117) = (void*)0;

            ;
            if (((((*l_183) = p_18) , (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((((safe_div_func_int8_t_s_s(((+(*l_173)) <= ((*l_182) <= ((-1L) ^ 0x81D8L))), p_18)) == func_38(&g_49, (((*l_197) = (safe_mul_func_uint8_t_u_u((l_192 && (safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((*l_182), g_102.f1)), 2L))), (*l_173)))) < (*l_173)), g_49)) ^ g_102.f6), p_18)), g_102.f7))) > p_18))
            {
                struct S1 *l_199 = &l_198;
                int l_200 = (-1L);
                (*l_199) = l_198;
                l_200 = func_38(&l_166, p_18, l_200);
            }
            else
            {
                int **l_201 = (void*)0;
                struct S0 *l_208 = &g_209;
                unsigned char *l_212 = &g_64;
                char *l_213 = &g_209.f0;
                int **l_215 = &l_182;
                const int **l_217 = (void*)0;
                const int *l_218 = (void*)0;
                g_112 = (void*)0;

                ;
                for (l_192 = 27; (l_192 != 23); --l_192)
                {
                    struct S0 **l_206 = (void*)0;
                    struct S0 **l_207 = (void*)0;
                    l_208 = l_204;

                    ;
                }

                ;
                (*g_117) = (void*)0;
                l_218 = func_42(((*l_215) = func_19(((((p_18 ^ (safe_lshift_func_int8_t_s_u(((*l_213) = (((g_88.f0 != ((void*)0 != &g_15)) || (((*l_212) = (p_18 >= (p_18 , 0x83L))) , (*g_92))) , (g_102.f4 , p_18))), g_61))) , l_192) ^ l_214) | (-1L)), (*l_173), p_18, p_18)), l_216, p_18, g_61, p_17);

                ;
                ;
                ;
            }

            ;
            ;
        }
        if (l_198.f0)
        {
            struct S1 l_219 = {0x52837081L,-3L,0L};
            l_198 = l_219;
        }
        else
        {
            int l_220 = 0x4213D0C7L;
            struct S1 l_227 = {3UL,0L,1L};
            char l_256 = 0x47L;
            int *l_264 = (void*)0;
            if (((~func_38(&g_116, l_220, (~(((0xBFDCL | p_18) , (*g_115)) && (*p_17))))) || (g_49 | g_59)))
            {
                int *l_231 = &g_116;
                int **l_241 = &g_115;
                if ((g_102.f0 = (((0UL & l_220) , p_18) ^ (safe_div_func_uint8_t_u_u((((((*p_17) && ((*g_112) = (((safe_mod_func_int16_t_s_s(0L, (safe_mul_func_uint16_t_u_u(func_50(l_220), g_209.f1)))) & ((-10L) & 0x6C3B223AL)) || 0x1808E25EL))) && 0xF2B9AB53L) != 1L) , p_18), 0xB5L)))))
                {
                    struct S1 *l_228 = &l_227;
                    int *l_237 = &g_116;
                    (*l_228) = l_227;
                    for (g_209.f1 = 0; (g_209.f1 <= (-18)); --g_209.f1)
                    {
                        unsigned *l_234 = &g_88.f0;
                        int **l_235 = &g_115;
                        l_236 = func_42(l_231, &g_49, (safe_rshift_func_int16_t_s_u((-9L), 7)), ((*l_234) = 1UL), ((*l_235) = &g_49));

                        ;
                        ;
                        return l_237;


                    }
                    return l_237;


                }
                else
                {
                    int **l_238 = &g_115;
                    (*l_238) = p_17;
                    for (l_198.f1 = (-27); (l_198.f1 < (-21)); ++l_198.f1)
                    {
                        if (l_227.f0)
                            break;
                        return l_231;


                    }
                }
                (*l_241) = l_231;

                ;
                return &g_116;


            }
            else
            {
                const unsigned l_257 = 0xBE461883L;
                short *l_278 = &g_88.f2;
                struct S1 l_279 = {18446744073709551615UL,0x21FC9478L,-9L};
                for (g_61 = 0; (g_61 >= 4); ++g_61)
                {
                    unsigned l_262 = 0x047494BAL;
                    int **l_263 = (void*)0;
                    for (g_209.f1 = (-13); (g_209.f1 == (-18)); g_209.f1 = safe_sub_func_int8_t_s_s(g_209.f1, 9))
                    {
                        unsigned l_252 = 18446744073709551612UL;
                        char *l_255 = &g_209.f0;
                        int **l_258 = &g_112;
                        short *l_261 = &l_167;
                    }
                    g_92 = (void*)0;

                    ;
                    l_264 = (void*)0;
                }

                ;
                for (l_198.f0 = (-3); (l_198.f0 == 25); l_198.f0++)
                {
                    struct S1 l_267 = {18446744073709551611UL,0x525A7838L,0x601AL};
                    int *l_284 = &l_279.f1;
                    l_227 = l_267;
                    for (p_18 = (-17); (p_18 >= (-15)); p_18++)
                    {
                        char l_272 = 0x2DL;
                        unsigned short *l_273 = &g_59;
                        unsigned *l_277 = &g_61;
                        struct S1 *l_280 = &g_88;
                        unsigned char *l_281 = (void*)0;
                        unsigned char *l_282 = (void*)0;
                        unsigned char *l_283 = &g_64;
                        (*l_280) = ((safe_lshift_func_int8_t_s_s(p_18, g_205.f3)) , (*l_280));
                        (*l_280) = (*l_280);
                    }
                }
                l_198 = (g_88 = l_227);
            }
            if (g_285)
                break;
            l_286 = &g_92;

            ;
        }

        ;
        (*l_173) = (((((p_18 | (((p_17 != ((*l_286) = (*l_286))) , ((g_288 = p_18) || ((g_59 = (*l_173)) != (((void*)0 == &l_216) <= (safe_mul_func_uint8_t_u_u(0xF2L, (l_287 == &l_156))))))) < 253UL)) != 1UL) ^ 0x9A8AC27FL) <= (*l_173)) | g_64);

        ;
        (*l_291) = p_17;

        ;
    }

    ;
    g_295 = func_42(&l_166, &l_166, (g_209.f3 | g_292), g_15, ((*l_293) = p_17));

    ;
    ;
    return &g_49;


}







static int * func_19(unsigned short p_20, char p_21, int p_22, unsigned char p_23)
{
    int **l_137 = &g_112;
    (*l_137) = &g_116;

    ;
    for (g_64 = 15; (g_64 > 11); g_64 = safe_sub_func_int32_t_s_s(g_64, 2))
    {
        (*l_137) = &g_49;

        ;
    }

    ;
    return (*l_137);


}







static unsigned short func_24(unsigned p_25, char p_26, int * p_27)
{
    struct S1 **l_119 = &g_118;
    struct S1 l_120 = {2UL,0xB8E2A662L,0x841BL};
    unsigned short *l_136 = (void*)0;
    l_119 = g_117;
    (**g_117) = l_120;
    (*g_112) = (*p_27);
    for (g_49 = (-1); (g_49 <= 12); g_49 = safe_add_func_int16_t_s_s(g_49, 6))
    {
        struct S1 l_123 = {1UL,0x42C7241AL,-6L};
        l_123 = l_123;
        (*p_27) = ((p_26 = 0xC1L) >= (safe_add_func_uint32_t_u_u(p_25, (0xB2L >= (((0x6AL ^ (safe_mod_func_int16_t_s_s(((p_25 < (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(0xB6C30C22L, l_123.f0)), (((safe_add_func_int8_t_s_s(((void*)0 != l_136), l_123.f0)) != 5L) || g_102.f6)))) != (-1L)), g_15))) , g_102.f1) == g_102.f5)))));
    }
    return l_120.f0;
}







static unsigned short func_28(unsigned p_29, int * p_30, int * p_31)
{
    unsigned l_109 = 0x28949F0EL;
    int l_110 = 0x4A2D56ABL;
    struct S0 *l_111 = (void*)0;
    int **l_113 = (void*)0;
    int **l_114 = &g_112;
    (*g_92) = (l_110 = l_109);
    l_111 = l_111;
    (*l_114) = (l_109 , g_112);
    return (**l_114);
}







static short func_38(int * p_39, unsigned short p_40, int p_41)
{
    int *l_48 = &g_49;
    int *l_53 = &g_49;
    int **l_52 = &l_53;
    int *l_54 = &g_49;
    int *l_56 = &g_49;
    int **l_55 = &l_56;
    int l_57 = 0xA4D2C643L;
    unsigned short *l_58 = &g_59;
    unsigned *l_60 = &g_61;
    unsigned char *l_62 = (void*)0;
    unsigned char *l_63 = &g_64;
    const int *l_108 = &g_49;
    const int **l_107 = &l_108;
    (*l_107) = func_42(p_39, l_48, ((void*)0 == p_39), ((func_50(((*l_63) = ((-1L) && ((*l_60) = ((((*l_52) = l_48) == ((*l_55) = (l_54 = &g_49))) < ((*l_58) = l_57)))))) , (**l_55)) , p_40), &g_49);

    ;
    return g_88.f1;
}







static const int * func_42(int * p_43, int * p_44, unsigned p_45, unsigned p_46, int * const p_47)
{
    struct S2 *l_101 = &g_102;
    struct S2 **l_103 = &l_101;
    int *l_104 = &g_49;
    int **l_105 = (void*)0;
    int **l_106 = &g_92;
    (*l_103) = l_101;
    (*l_106) = l_104;

    ;
    return &g_49;


}







static unsigned func_50(const unsigned char p_51)
{
    int l_79 = 0x8187147DL;
    int l_80 = 0x9C24175CL;
    struct S2 *l_94 = (void*)0;
    struct S2 **l_97 = &l_94;
    struct S1 l_98 = {18446744073709551614UL,0x2FB51225L,0x947DL};
    struct S1 *l_99 = &l_98;
    int **l_100 = &g_92;
    for (g_64 = 9; (g_64 <= 5); --g_64)
    {
        unsigned l_77 = 0xEAFCA19AL;
        short *l_78 = (void*)0;
        int *l_89 = &g_49;
        if (((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((0x718AL | 0L), ((l_80 = (l_79 = ((safe_mul_func_uint16_t_u_u((((g_15 , p_51) && (((0xB06F8616L <= g_64) , &p_51) == (void*)0)) | ((safe_sub_func_uint32_t_u_u(p_51, p_51)) < l_77)), g_15)) > p_51))) , 0xE30C1ABDL))), g_59)) ^ g_59))
        {
            int *l_82 = (void*)0;
            int **l_81 = &l_82;
            struct S1 l_87 = {18446744073709551613UL,0xDF555A6FL,0xED5CL};
            (*l_81) = &l_79;

            ;
            if (g_59)
                continue;
            for (g_61 = (-4); (g_61 == 11); g_61 = safe_add_func_uint8_t_u_u(g_61, 9))
            {
                (**l_81) = g_61;
                for (l_77 = 0; (l_77 > 14); l_77 = safe_add_func_int32_t_s_s(l_77, 2))
                {
                    g_88 = l_87;
                    return g_49;
                }
            }
            (*l_82) = 0xACB48866L;
        }
        else
        {
            int **l_90 = (void*)0;
            int **l_91 = &l_89;
            int **l_93 = &g_92;
            struct S2 **l_95 = (void*)0;
            struct S2 **l_96 = &l_94;
            (*l_91) = l_89;
            g_92 = ((*l_91) = &l_80);

            ;
            ;
            (*l_93) = ((*l_91) = &g_49);

            ;
            ;
            (*l_96) = l_94;
        }
    }
    (*l_97) = l_94;
    (*l_99) = l_98;
    (*l_100) = &g_49;

    ;
    return (**l_100);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
    transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
    transparent_crc(g_14.f5, "g_14.f5", print_hash_value);
    transparent_crc(g_14.f6, "g_14.f6", print_hash_value);
    transparent_crc(g_14.f7, "g_14.f7", print_hash_value);
    transparent_crc(g_14.f8, "g_14.f8", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_88.f0, "g_88.f0", print_hash_value);
    transparent_crc(g_88.f1, "g_88.f1", print_hash_value);
    transparent_crc(g_88.f2, "g_88.f2", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    transparent_crc(g_102.f3, "g_102.f3", print_hash_value);
    transparent_crc(g_102.f4, "g_102.f4", print_hash_value);
    transparent_crc(g_102.f5, "g_102.f5", print_hash_value);
    transparent_crc(g_102.f6, "g_102.f6", print_hash_value);
    transparent_crc(g_102.f7, "g_102.f7", print_hash_value);
    transparent_crc(g_102.f8, "g_102.f8", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_205.f0, "g_205.f0", print_hash_value);
    transparent_crc(g_205.f1, "g_205.f1", print_hash_value);
    transparent_crc(g_205.f2, "g_205.f2", print_hash_value);
    transparent_crc(g_205.f3, "g_205.f3", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f1, "g_209.f1", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_306.f0, "g_306.f0", print_hash_value);
    transparent_crc(g_306.f1, "g_306.f1", print_hash_value);
    transparent_crc(g_306.f2, "g_306.f2", print_hash_value);
    transparent_crc(g_306.f3, "g_306.f3", print_hash_value);
    transparent_crc(g_306.f4, "g_306.f4", print_hash_value);
    transparent_crc(g_306.f5, "g_306.f5", print_hash_value);
    transparent_crc(g_306.f6, "g_306.f6", print_hash_value);
    transparent_crc(g_306.f7, "g_306.f7", print_hash_value);
    transparent_crc(g_306.f8, "g_306.f8", print_hash_value);
    transparent_crc(g_336.f0, "g_336.f0", print_hash_value);
    transparent_crc(g_336.f1, "g_336.f1", print_hash_value);
    transparent_crc(g_336.f2, "g_336.f2", print_hash_value);
    transparent_crc(g_336.f3, "g_336.f3", print_hash_value);
    transparent_crc(g_336.f4, "g_336.f4", print_hash_value);
    transparent_crc(g_336.f5, "g_336.f5", print_hash_value);
    transparent_crc(g_336.f6, "g_336.f6", print_hash_value);
    transparent_crc(g_336.f7, "g_336.f7", print_hash_value);
    transparent_crc(g_336.f8, "g_336.f8", print_hash_value);
    transparent_crc(g_347.f0, "g_347.f0", print_hash_value);
    transparent_crc(g_347.f1, "g_347.f1", print_hash_value);
    transparent_crc(g_347.f2, "g_347.f2", print_hash_value);
    transparent_crc(g_347.f3, "g_347.f3", print_hash_value);
    transparent_crc(g_348.f0, "g_348.f0", print_hash_value);
    transparent_crc(g_348.f1, "g_348.f1", print_hash_value);
    transparent_crc(g_348.f2, "g_348.f2", print_hash_value);
    transparent_crc(g_348.f3, "g_348.f3", print_hash_value);
    transparent_crc(g_348.f4, "g_348.f4", print_hash_value);
    transparent_crc(g_348.f5, "g_348.f5", print_hash_value);
    transparent_crc(g_348.f6, "g_348.f6", print_hash_value);
    transparent_crc(g_348.f7, "g_348.f7", print_hash_value);
    transparent_crc(g_348.f8, "g_348.f8", print_hash_value);
    transparent_crc(g_392.f0, "g_392.f0", print_hash_value);
    transparent_crc(g_392.f1, "g_392.f1", print_hash_value);
    transparent_crc(g_392.f2, "g_392.f2", print_hash_value);
    transparent_crc(g_392.f3, "g_392.f3", print_hash_value);
    transparent_crc(g_404.f0, "g_404.f0", print_hash_value);
    transparent_crc(g_404.f1, "g_404.f1", print_hash_value);
    transparent_crc(g_404.f2, "g_404.f2", print_hash_value);
    transparent_crc(g_404.f3, "g_404.f3", print_hash_value);
    transparent_crc(g_404.f4, "g_404.f4", print_hash_value);
    transparent_crc(g_404.f5, "g_404.f5", print_hash_value);
    transparent_crc(g_404.f6, "g_404.f6", print_hash_value);
    transparent_crc(g_404.f7, "g_404.f7", print_hash_value);
    transparent_crc(g_404.f8, "g_404.f8", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_425.f0, "g_425.f0", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_425.f2, "g_425.f2", print_hash_value);
    transparent_crc(g_425.f3, "g_425.f3", print_hash_value);
    transparent_crc(g_425.f4, "g_425.f4", print_hash_value);
    transparent_crc(g_425.f5, "g_425.f5", print_hash_value);
    transparent_crc(g_425.f6, "g_425.f6", print_hash_value);
    transparent_crc(g_425.f7, "g_425.f7", print_hash_value);
    transparent_crc(g_425.f8, "g_425.f8", print_hash_value);
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_437.f1, "g_437.f1", print_hash_value);
    transparent_crc(g_437.f2, "g_437.f2", print_hash_value);
    transparent_crc(g_437.f3, "g_437.f3", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_541.f1, "g_541.f1", print_hash_value);
    transparent_crc(g_541.f2, "g_541.f2", print_hash_value);
    transparent_crc(g_541.f3, "g_541.f3", print_hash_value);
    transparent_crc(g_541.f4, "g_541.f4", print_hash_value);
    transparent_crc(g_541.f5, "g_541.f5", print_hash_value);
    transparent_crc(g_541.f6, "g_541.f6", print_hash_value);
    transparent_crc(g_541.f7, "g_541.f7", print_hash_value);
    transparent_crc(g_541.f8, "g_541.f8", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
