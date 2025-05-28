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
   signed f1 : 30;
};


static volatile unsigned short g_21 = 0xD3ECL;
static unsigned g_26 = 1UL;
static unsigned short g_28 = 1UL;
static int g_30 = (-1L);
static unsigned g_68 = 4294967295UL;
static unsigned *g_67 = &g_68;
static int g_73 = 0x7E8F8848L;
static int g_75 = 3L;
static unsigned g_84 = 3UL;
static unsigned char g_92 = 0x9FL;
static unsigned char g_96 = 0x0EL;
static unsigned char g_98 = 0x19L;
static short g_115 = (-6L);
static volatile struct S0 g_120 = {0x054819E5L,19662};
static unsigned g_132 = 0x75ADB6E2L;
static volatile unsigned short g_133 = 65529UL;
static struct S0 g_147 = {0xE0413CF2L,18663};
static char g_156 = (-1L);
static char g_158 = 0L;
static struct S0 g_160 = {0L,-29763};
static char g_188 = 0x75L;
static struct S0 g_198 = {0x6F187A65L,861};
static struct S0 g_207 = {1L,30454};
static volatile struct S0 g_218 = {0xE7CF41E0L,-5006};
static unsigned short g_229 = 0x6F59L;
static volatile struct S0 g_237 = {0xF489C560L,10505};
static struct S0 g_239 = {-1L,-23055};
static struct S0 g_259 = {0L,3842};
static struct S0 g_260 = {-1L,10261};
static int g_285 = 0x56D3FD83L;
static unsigned short *g_286 = (void*)0;
static short g_299 = 6L;
static char g_300 = 3L;
static unsigned g_320 = 0xDE3B2CC0L;
static char **g_337 = (void*)0;
static char ***g_336 = &g_337;
static volatile unsigned short g_344 = 0UL;
static unsigned short g_352 = 0x5AA3L;
static int *g_369 = (void*)0;
static int **g_368 = &g_369;
static volatile unsigned char g_409 = 0xE6L;
static volatile unsigned char *g_408 = &g_409;
static volatile unsigned char **g_407 = &g_408;
static int *g_420 = &g_75;
static unsigned char **g_432 = (void*)0;
static volatile struct S0 g_440 = {1L,-10940};
static volatile unsigned short g_443 = 0x6212L;
static int g_451 = 0xE712EA60L;
static int *g_454 = &g_75;
static volatile struct S0 g_496 = {0xEBC49D13L,12557};
static int g_533 = 0xEE1D4F1EL;
static struct S0 g_538 = {1L,27428};
static volatile struct S0 g_568 = {0x28D9628EL,-15361};
static unsigned char g_592 = 1UL;
static unsigned char g_593 = 0x6CL;
static int ***g_622 = (void*)0;
static int g_624 = (-1L);
static volatile unsigned g_638 = 0x8D3022D8L;
static struct S0 g_659 = {-10L,-12728};



static char func_1(void);
static unsigned func_6(unsigned p_7, unsigned p_8, unsigned p_9, unsigned short p_10, unsigned p_11);
static short func_12(unsigned char p_13, int p_14, int p_15, char p_16, int p_17);
static unsigned func_37(int p_38, short p_39, unsigned p_40);
static int func_41(short p_42, int p_43, unsigned short p_44);
static unsigned char func_45(unsigned p_46, short p_47, unsigned short * p_48, unsigned short * p_49, unsigned char p_50);
static unsigned short * func_55(unsigned short * p_56, char p_57, unsigned * p_58);
static unsigned short * func_59(short p_60, unsigned short * p_61, int p_62);
static char func_63(unsigned short * p_64, unsigned * p_65);
static struct S0 func_76(unsigned * p_77);
static char func_1(void)
{
    char l_18 = 0xFBL;
    unsigned short *l_27 = &g_28;
    unsigned *l_29 = &g_26;
    int l_31 = (-1L);
    int l_551 = 0x97539E3BL;
    int l_591 = 0x54C023ECL;
    if (((!(safe_sub_func_uint32_t_u_u((4294967295UL >= (((safe_mod_func_int8_t_s_s(((func_6((func_12(l_18, (safe_sub_func_int16_t_s_s((0x92C6L <= l_18), g_21)), (safe_add_func_int32_t_s_s((((*l_29) = (safe_add_func_int32_t_s_s((0L == (-1L)), ((((*l_27) ^= (4294967290UL | g_26)) == 0x172DL) == 4L)))) ^ g_30), l_31)), g_30, l_31) == 0xA57FL), l_31, l_31, l_18, l_31) | 0xBFFC5ACDL) | l_18), 0x4BL)) != l_31) | l_31)), l_31))) != 0xB311L))
    {
        unsigned l_477 = 1UL;
        unsigned short *l_482 = &g_28;
        int l_483 = (-5L);
        unsigned short *l_532 = &g_229;
        short *l_552 = (void*)0;
        short *l_553 = (void*)0;
        short *l_554 = &g_299;
        int l_577 = 0L;
        int **l_584 = &g_420;
        short l_634 = 0L;
        int *l_662 = (void*)0;
        int *l_663 = (void*)0;
        int *l_664 = &l_483;
lbl_575:
        for (g_92 = (-28); (g_92 == 10); g_92 = safe_add_func_uint32_t_u_u(g_92, 1))
        {
            int **l_455 = &g_454;
            unsigned short *l_473 = &g_229;
            unsigned short *l_475 = &g_229;
            unsigned short *l_481 = &g_28;
            unsigned short l_512 = 0UL;
            (*l_455) = g_454;
            for (g_73 = 0; (g_73 > 3); ++g_73)
            {
                int l_469 = 0x394DDC96L;
                unsigned short *l_472 = (void*)0;
                unsigned short **l_474 = &l_27;
                unsigned short l_476 = 1UL;
                unsigned char l_478 = 0x31L;
                int *l_479 = &g_451;
                char *l_490 = (void*)0;
                char **l_489 = &l_490;
                int l_495 = 0x69239156L;
                unsigned short *l_509 = &g_352;
            }
            return g_133;
        }
        g_239 = g_538;
        if ((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((((0xA0F9L & 1UL) | ((0UL == (l_483 = l_551)) , 0UL)) , 250UL), 0x4AL)) | 0UL) , 0x9BL), 0xE8L)), l_31)))
        {
            unsigned short l_576 = 0xC426L;
            if (((*g_420) = (*g_454)))
            {
                unsigned l_555 = 0x15795398L;
                int l_567 = 0x751CF396L;
                volatile struct S0 *l_569 = (void*)0;
                unsigned short *l_579 = (void*)0;
                int **l_583 = (void*)0;
                unsigned short **l_585 = (void*)0;
                unsigned short **l_586 = &l_579;
                if ((~1L))
                {
                    return l_555;
                }
                else
                {
                    int *l_558 = (void*)0;
                    int **l_563 = &g_454;
                    int ***l_562 = &l_563;
                    unsigned *l_566 = &g_320;
                    for (g_84 = 0; (g_84 == 17); ++g_84)
                    {
                        volatile struct S0 *l_559 = &g_440;
                        l_558 = (void*)0;
                        (*l_559) = g_496;
                    }
                    l_567 |= (((safe_lshift_func_int8_t_s_u((((l_562 != (void*)0) , ((g_28 & (l_31 = ((&g_115 == (void*)0) < l_477))) > ((safe_lshift_func_int8_t_s_u(7L, (**g_407))) < ((((***l_562) = (((*g_67) = (((*l_566) ^= 0xBE2FEDE1L) , (*g_67))) == (*g_454))) , l_551) >= 0x67L)))) == 251UL), 3)) | l_18) , l_31);
                }
                g_160 = g_568;
                for (g_115 = 0; (g_115 == 25); g_115++)
                {
                    unsigned char ***l_572 = &g_432;
                    int l_578 = 0x99F172A4L;
                    (*l_572) = (void*)0;
                    (*g_420) = (*g_454);
                    for (g_320 = 0; (g_320 == 32); ++g_320)
                    {
                        int *l_580 = &l_551;
                        if (g_259.f1)
                            goto lbl_575;
                        (*l_580) |= (l_567 & (~(((l_576 & (l_577 || ((*g_286) , func_45(l_483, g_30, func_55(func_55(func_55(&g_229, l_18, &g_26), l_578, &g_84), l_567, &g_68), l_579, l_18)))) >= (*g_286)) , g_237.f0)));
                    }
                }
                (**l_584) = ((safe_rshift_func_uint16_t_u_u(l_31, (*g_286))) & (((l_583 == l_584) , 0UL) <= (((*g_454) && func_45(l_551, l_551, ((*l_586) = func_55(l_579, l_567, &g_68)), l_552, l_551)) | l_576)));

                ;
            }
            else
            {
                return l_576;
            }
        }
        else
        {
            unsigned short l_594 = 65533UL;
            int *l_606 = (void*)0;
            unsigned char l_623 = 254UL;
            char l_626 = 1L;
            unsigned char l_650 = 0x8BL;
            for (g_352 = 0; (g_352 <= 55); g_352 = safe_add_func_uint32_t_u_u(g_352, 8))
            {
                unsigned short *l_589 = &g_352;
                int l_590 = 0x2B202181L;
                short l_613 = 0x3A65L;
                unsigned char l_635 = 0xDFL;
            }
            if (g_115)
                goto lbl_661;
            if ((*g_420))
            {
                short l_656 = (-1L);
lbl_655:
                (*l_584) = &g_73;
                for (g_533 = 5; (g_533 < 6); ++g_533)
                {
                    if (g_28)
                        goto lbl_655;
                }
                l_656 &= (!(*g_420));
                (*l_584) = &g_451;

                ;
            }
            else
            {
lbl_661:
                for (l_31 = 0; (l_31 != 25); l_31++)
                {
                    struct S0 *l_660 = &g_260;
                    (*l_660) = g_659;
                    return g_239.f0;
                }
                (*g_420) = 0x0B7027E7L;
                (**l_584) = (*g_420);
            }

            ;
        }

        ;
        (*l_664) ^= (func_37((*g_420), (**l_584), (**l_584)) >= ((g_593 < l_591) || g_26));
    }
    else
    {
        return g_259.f0;
    }

    ;
    ;
    return g_300;
}







static unsigned func_6(unsigned p_7, unsigned p_8, unsigned p_9, unsigned short p_10, unsigned p_11)
{
    int **l_438 = &g_420;
    int *l_439 = &g_73;
    unsigned short l_448 = 65535UL;
    unsigned char l_449 = 0xEEL;
    int *l_450 = &g_451;
    (*l_450) ^= func_37((p_7 , ((safe_add_func_uint16_t_u_u((((*l_438) = &g_73) != l_439), (((+(g_440 , (safe_lshift_func_uint8_t_u_u(g_443, 0)))) == func_45(((safe_lshift_func_uint8_t_u_s(p_10, ((void*)0 == l_439))) , (safe_sub_func_uint8_t_u_u((l_448 ^ 0x853BCCBEL), 0xB0L))), g_132, &l_448, &l_448, p_9)) >= 255UL))) ^ l_449)), g_207.f1, p_8);

    ;
    (*l_439) &= p_9;
    return (*g_67);
}







static short func_12(unsigned char p_13, int p_14, int p_15, char p_16, int p_17)
{
    unsigned *l_36 = &g_26;
    int l_53 = (-1L);
    int l_54 = 0x3CA30775L;
    unsigned short *l_275 = &g_28;
    unsigned short **l_276 = (void*)0;
    unsigned short **l_277 = (void*)0;
    unsigned short *l_278 = &g_28;
    unsigned short *l_282 = (void*)0;
    int *l_284 = &g_285;
    int *l_423 = &l_54;
    struct S0 *l_424 = &g_207;
    unsigned **l_435 = &l_36;
    unsigned ***l_434 = &l_435;
    (*l_423) = (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(((*l_36) = ((void*)0 == &g_26)), func_37(func_41(g_30, ((*l_284) ^= ((6L | ((func_45((safe_sub_func_uint8_t_u_u((l_53 = l_53), (p_15 == l_54))), (+g_30), func_55((l_278 = (l_275 = func_59(p_15, &g_28, g_28))), p_14, l_36), l_282, l_54) , 2UL) , g_160.f0)) , 0x7B58E865L)), g_30), l_54, l_54))), 0x776FC20AL));

    ;
    ;
    ;
    (*l_424) = func_76(l_284);
    for (g_98 = 0; (g_98 < 27); g_98 = safe_add_func_int32_t_s_s(g_98, 3))
    {
        int *l_429 = &l_54;
        for (g_188 = 0; (g_188 >= (-25)); g_188--)
        {
            unsigned char *l_431 = &g_92;
            unsigned char **l_430 = &l_431;
            unsigned char ***l_433 = &g_432;
            l_429 = l_429;
            (*l_423) &= (l_430 == ((*l_433) = g_432));
        }
    }
    (*l_434) = &l_36;
    return g_320;
}







static unsigned func_37(int p_38, short p_39, unsigned p_40)
{
    int *l_355 = &g_75;
    int **l_370 = &g_369;
    unsigned char l_415 = 0xCBL;
    int l_416 = 0x85136B3AL;
    unsigned short *l_419 = &g_229;
    int *l_421 = &l_416;
    int **l_422 = &l_421;
lbl_403:
    (*l_355) &= 0L;
    for (g_92 = (-2); (g_92 >= 57); g_92 = safe_add_func_uint32_t_u_u(g_92, 8))
    {
        int *l_373 = &g_30;
        int l_374 = 0xC367E731L;
        int l_383 = 1L;
        int l_392 = 8L;
        unsigned short *l_417 = &g_28;
        unsigned short **l_418 = &l_417;
        if (((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((*l_355), (g_260.f1 & (((safe_add_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((((g_120.f0 , (void*)0) != (l_370 = g_368)) || (0x29A65140L != (p_40 = (safe_mod_func_uint16_t_u_u((p_38 , (l_373 != (p_39 , l_373))), (*g_286)))))), (*g_286))) != 0L) ^ 0xF6L), 0)) | p_39) ^ (*g_67)) & 1L), l_374)) == (*g_67)) == 1UL)))), p_39)) == 0x0029L))
        {
            short l_396 = 1L;
            unsigned short *l_397 = (void*)0;
            int *l_402 = &l_383;
            int l_404 = (-1L);
            for (g_156 = 22; (g_156 <= 12); --g_156)
            {
                struct S0 *l_378 = &g_259;
                struct S0 **l_377 = &l_378;
                unsigned *l_389 = &g_320;
                unsigned short *l_390 = &g_229;
                unsigned *l_391 = &g_132;
                unsigned short l_393 = 0x2736L;
                short *l_394 = &g_115;
                unsigned char *l_395 = &g_96;
                (*l_377) = (void*)0;

                ;
                (*l_355) = ((safe_add_func_int8_t_s_s(p_39, p_39)) > func_45(((safe_mod_func_uint8_t_u_u((g_98 = (((*g_286) & ((l_374 = 0xB0L) == p_40)) ^ ((l_383 , 1UL) , ((*l_395) = ((0xF4F7L ^ (((*l_394) = (safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((((safe_add_func_int16_t_s_s((((((*l_391) |= (func_45(((*l_389) |= g_68), g_147.f1, &g_352, l_390, g_147.f0) , 0UL)) || g_147.f0) > 0x03C69E96L) >= p_39), l_392)) > l_393) < 0x52F4L))), p_40))) == g_352)) >= 6L))))), l_396)) , p_39), p_39, l_397, &g_28, g_352));
                for (g_28 = (-2); (g_28 >= 4); g_28 = safe_add_func_int16_t_s_s(g_28, 9))
                {
                    int *l_400 = &l_374;
                    int **l_401 = (void*)0;
                    l_402 = l_400;

                    ;
                    if (g_320)
                        goto lbl_403;
                    if (p_39)
                        continue;
                    return (*g_67);
                }
            }

            ;
            l_404 &= l_374;
            (*l_355) |= (safe_lshift_func_int8_t_s_u((l_373 != (void*)0), 6));
        }
        else
        {
            char *l_412 = &g_300;
            l_416 &= (((((*g_67) ^ ((*l_355) = ((g_407 != &g_408) , 0x39703B16L))) <= (safe_lshift_func_int16_t_s_u(((l_392 > ((((*l_412) = p_38) >= p_39) , (safe_mod_func_uint8_t_u_u((~((l_392 || l_415) & 0xEEL)), (**g_407))))) && p_38), 7))) == g_158) & p_38);
        }
        (*l_355) = func_45(p_40, (*l_355), ((*l_418) = l_417), l_419, (*g_408));
        g_420 = &g_73;

        ;
    }
    (*l_421) ^= (*g_420);
    (*l_422) = &l_416;
    return (*g_67);
}







static int func_41(short p_42, int p_43, unsigned short p_44)
{
    unsigned short l_291 = 5UL;
    int *l_292 = &g_30;
    unsigned char *l_293 = (void*)0;
    unsigned char *l_294 = &g_92;
    short *l_295 = &g_115;
    unsigned char l_296 = 3UL;
    short *l_297 = (void*)0;
    short *l_298 = &g_299;
    unsigned short **l_301 = &g_286;
    int l_330 = 0x1D4E9A3BL;
    if (((((func_63(((*l_301) = func_55(g_286, (g_68 < (safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((((((*l_292) = l_291) , (((g_300 |= (p_42 = ((*l_298) &= ((((((*l_295) = (((*l_294) = p_44) >= l_291)) != func_45(l_291, func_45((l_291 & g_96), l_291, &l_291, &g_229, p_42), &g_229, &l_291, l_296)) & 0x16B4L) > 0x2F1D4519L) , 0xF583L)))) , 7UL) != l_291)) & p_43) < 0x84L), g_198.f0)), g_260.f1))), l_292)), l_292) != g_28) ^ p_43) ^ p_44) && l_296))
    {
        int *l_304 = &g_75;
        unsigned short *l_308 = &g_28;
        for (g_98 = 0; (g_98 == 23); ++g_98)
        {
            int **l_305 = &l_304;
            unsigned l_321 = 2UL;
            (*l_305) = l_304;
            for (p_44 = 0; (p_44 > 57); p_44++)
            {
                unsigned short *l_317 = &g_229;
                int l_318 = 0xB90D2ED5L;
                int *l_319 = &g_73;
                (*l_319) |= (((func_45(g_21, ((*l_295) = ((g_299 = p_43) , 0L)), &p_44, l_308, (g_96 = (safe_lshift_func_uint16_t_u_u((func_45((((**l_305) && 0x44L) && ((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((*l_294) &= func_45(g_84, g_28, &g_28, l_317, p_42)), g_30)), l_318)), p_44)) || 1UL)), g_28, &g_229, &g_229, p_43) < g_68), 5)))) < p_44) ^ g_198.f1) >= 65533UL);
                if (g_132)
                    break;
            }
            if (g_320)
                break;
            if (l_321)
                continue;
        }
        (*l_304) = ((((*g_286) , l_292) == ((p_43 <= (*g_67)) , l_304)) < (((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((*l_304), (safe_mod_func_int16_t_s_s((-3L), p_43)))) , func_45(((l_330 |= (safe_add_func_int8_t_s_s(((*g_67) & p_44), p_43))) , p_42), g_160.f0, &g_28, l_308, p_43)), p_42)) & g_92) && (-2L)));
    }
    else
    {
        char *l_335 = &g_156;
        char **l_334 = &l_335;
        char ***l_333 = &l_334;
        int l_340 = (-1L);
        int *l_341 = &g_75;
        int *l_351 = &g_30;
        (*l_341) |= ((((safe_mod_func_uint16_t_u_u((((p_44 && (((l_333 != (l_330 , g_336)) != (~(3L == (p_42 >= l_296)))) , 1UL)) <= l_340) > p_44), 0x0DC5L)) > p_43) >= l_340) & (*g_67));
        for (g_188 = 0; (g_188 == (-27)); g_188 = safe_sub_func_uint32_t_u_u(g_188, 1))
        {
            volatile unsigned l_345 = 0x2A619F6EL;
            int **l_350 = (void*)0;
            int *l_353 = &g_73;
            int *l_354 = &l_340;
            l_345 = g_344;
            (*l_354) |= (safe_add_func_uint32_t_u_u(((*g_67) = ((*l_341) , (((*l_341) < ((l_292 = &p_43) == (l_351 = &p_43))) && ((**l_301) = (&p_43 == (((((*l_353) = (g_147.f1 |= g_352)) || (*l_341)) & p_43) , &g_30)))))), l_330));

            ;
            ;
        }

        ;
        ;
    }

    ;
    ;
    return g_237.f1;
}







static unsigned char func_45(unsigned p_46, short p_47, unsigned short * p_48, unsigned short * p_49, unsigned char p_50)
{
    int *l_283 = &g_75;
    (*l_283) |= g_28;
    return (*l_283);
}







static unsigned short * func_55(unsigned short * p_56, char p_57, unsigned * p_58)
{
    int *l_279 = &g_73;
    int **l_280 = &l_279;
    unsigned short *l_281 = &g_28;
    (*l_279) = p_57;
    (*l_279) &= (g_98 | g_198.f0);
    (*l_280) = &g_73;
    return l_281;


}







static unsigned short * func_59(short p_60, unsigned short * p_61, int p_62)
{
    unsigned short *l_66 = &g_28;
    int *l_213 = &g_75;
    char *l_220 = &g_158;
    char **l_219 = &l_220;
    if ((g_21 && func_63(l_66, g_67)))
    {
        char ***l_221 = &l_219;
        int l_250 = 0x3732750AL;
        unsigned short *l_261 = (void*)0;
        int l_274 = 0x782C05ECL;
        for (g_73 = 29; (g_73 > 16); g_73--)
        {
            int **l_214 = &l_213;
            int **l_215 = (void*)0;
            int *l_217 = &g_75;
            int **l_216 = &l_217;
            (*l_214) = l_213;
            (*l_216) = ((*l_214) = l_213);
            (*l_213) &= (g_218 , 0x190DBC92L);
        }
        (*l_221) = l_219;
        for (g_158 = 17; (g_158 == (-26)); g_158 = safe_sub_func_uint32_t_u_u(g_158, 1))
        {
            unsigned short *l_228 = &g_229;
            int *l_231 = &g_75;
            if ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((*l_228) = (!((*l_66) = 4UL))), 9)) >= 8L), 11)))
            {
                unsigned char l_230 = 249UL;
                (*l_213) = 0L;
                l_231 = (l_230 , &g_73);

                ;
                (*l_231) = (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((*g_67), (*g_67))), 3));
            }
            else
            {
                int *l_236 = &g_73;
                volatile struct S0 *l_238 = &g_237;
                (*l_236) ^= (*l_231);
                (*l_238) = g_237;
                (*l_238) = g_239;
                for (g_156 = (-23); (g_156 < (-28)); g_156 = safe_sub_func_int16_t_s_s(g_156, 3))
                {
                    unsigned char *l_251 = &g_96;
                    int l_262 = 0x70EC7795L;
                    for (g_132 = 25; (g_132 != 43); g_132++)
                    {
                        int l_252 = 0x0785E97AL;
                        short *l_257 = (void*)0;
                        short *l_258 = &g_115;
                        l_252 &= (safe_add_func_int8_t_s_s(p_62, (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_21, 0x69L)), 6)) > (((((l_250 = g_156) , g_207.f1) , ((*p_61) , ((((void*)0 == l_251) | ((p_62 , 4294967293UL) < 4294967295UL)) & (-3L)))) && g_147.f1) ^ (*g_67))) > g_98)));
                        g_260 = ((((l_220 == (g_147.f0 , ((g_160.f1 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_252 || ((~((1UL >= p_60) == l_250)) ^ g_229)), ((*l_258) = (g_239.f1 == g_237.f1)))), p_62))) , (void*)0))) , (*p_61)) ^ 65535UL) , g_259);
                        return l_261;


                    }
                    if ((l_262 || (safe_rshift_func_uint16_t_u_u(7UL, ((*l_228) = (safe_sub_func_int8_t_s_s((!g_260.f1), g_218.f1)))))))
                    {
                        int **l_267 = &l_231;
                        (*l_267) = &g_73;

                        ;
                        if (g_21)
                            break;
                        g_147.f1 &= g_259.f1;
                    }
                    else
                    {
                        short *l_270 = &g_115;
                        (*l_231) = ((((((((safe_sub_func_int16_t_s_s((p_60 = ((*l_270) = g_68)), 0xF4F4L)) , (safe_rshift_func_uint16_t_u_u((*p_61), 14))) && ((safe_unary_minus_func_uint32_t_u((*g_67))) > l_274)) , (g_207.f1 == g_259.f1)) && g_239.f0) | (l_261 != (void*)0)) >= g_147.f1) ^ (*p_61));
                        return &g_28;


                    }

                    ;
                }

                ;
            }

            ;
        }
    }
    else
    {
        (*l_213) = p_60;
    }
    return p_61;


}







static char func_63(unsigned short * p_64, unsigned * p_65)
{
    int *l_71 = (void*)0;
    int *l_72 = &g_73;
    int *l_74 = &g_75;
    struct S0 *l_210 = &g_198;
    (*l_72) = (safe_lshift_func_int8_t_s_s(0x3CL, 7));
    (*l_74) &= ((*l_72) = (~(g_73 < (*p_64))));
    (*l_210) = ((*p_64) , func_76(p_65));
    return (*l_72);
}







static struct S0 func_76(unsigned * p_77)
{
    unsigned *l_90 = (void*)0;
    int l_94 = 0xC3E505CEL;
    unsigned short *l_100 = &g_28;
    unsigned short *l_105 = (void*)0;
    unsigned char *l_144 = &g_92;
    struct S0 *l_193 = &g_147;
    for (g_68 = 7; (g_68 >= 3); g_68--)
    {
        unsigned short l_82 = 0xD714L;
        unsigned *l_83 = &g_84;
        int l_85 = 0x52A55CCBL;
        unsigned char *l_91 = &g_92;
        int *l_93 = (void*)0;
        unsigned char *l_95 = &g_96;
        unsigned char *l_97 = &g_98;
        int *l_99 = &g_75;
        unsigned short **l_101 = &l_100;
        unsigned short **l_104 = (void*)0;
        unsigned l_110 = 0x9822E7BBL;
        int *l_113 = &l_85;
        short *l_114 = &g_115;
        unsigned l_127 = 0UL;
        (*l_99) = ((safe_mod_func_uint8_t_u_u(((*l_97) = ((*l_95) = (0L > ((l_94 &= ((g_68 && l_82) , ((l_85 = (g_30 & (~(0xC132L ^ ((*p_77) >= (!((*l_83) &= (!(p_77 == &g_68))))))))) != (safe_add_func_uint8_t_u_u(((*l_91) = (safe_mod_func_uint32_t_u_u(((void*)0 != l_90), g_75))), 0x85L))))) <= 0UL)))), g_21)) , g_30);
        (*l_99) = (((*l_101) = l_100) != ((safe_add_func_uint16_t_u_u(((+(*l_99)) >= ((l_105 = &g_28) != (void*)0)), ((((*l_113) = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((l_110 < (*l_99)), 6)) , (((((*l_99) , (*p_77)) ^ (+(safe_add_func_int16_t_s_s(l_94, 0x4922L)))) == (*l_99)) , (*l_99))), 4))) && 0x8F9E473BL) < g_96))) , l_105));

        ;
        if ((*l_113))
            break;
        if (((&l_105 != (void*)0) != ((~0xB034L) != ((*l_114) &= ((g_75 || (*g_67)) || ((void*)0 == &g_28))))))
        {
            unsigned short l_131 = 7UL;
            int l_159 = (-1L);
            unsigned *l_175 = &g_68;
            int **l_182 = &l_93;
            int **l_192 = &l_113;
            struct S0 *l_195 = &g_147;
            struct S0 **l_194 = &l_195;
            if (g_30)
                break;
            for (g_73 = 0; (g_73 != 16); g_73++)
            {
                unsigned char *l_137 = &g_98;
                int l_145 = 0x6C064F7AL;
                char *l_176 = (void*)0;
                char *l_177 = &g_156;
                unsigned short *l_180 = (void*)0;
                unsigned short *l_181 = &l_82;
                int ***l_183 = &l_182;
                unsigned char **l_184 = &l_91;
            }
            (*l_192) = ((*l_182) = &g_73);

            ;
            ;
            (*l_113) = ((l_193 == ((*l_194) = &g_160)) == ((*l_99) = g_120.f1));

            ;
        }
        else
        {
            for (g_158 = 0; (g_158 > (-11)); g_158 = safe_sub_func_uint32_t_u_u(g_158, 1))
            {
                if (l_94)
                    break;
                return g_198;
            }
            (*l_113) |= (&g_115 != (void*)0);
            for (g_98 = 0; (g_98 == 7); g_98 = safe_add_func_int8_t_s_s(g_98, 4))
            {
                int *l_201 = (void*)0;
                int **l_202 = &l_113;
                unsigned char **l_204 = &l_97;
                unsigned char ***l_203 = &l_204;
                (*l_202) = l_201;

                ;
                (*l_203) = (void*)0;

                ;
                (*l_202) = &l_94;

                ;
                for (g_132 = 0; (g_132 <= 9); g_132 = safe_add_func_uint32_t_u_u(g_132, 7))
                {
                    if (((void*)0 == &g_75))
                    {
                        return g_207;
                    }
                    else
                    {
                        int **l_208 = (void*)0;
                        int **l_209 = &l_201;
                        (*l_209) = ((*l_202) = &g_73);

                        ;
                        ;
                    }

                    ;
                    ;
                    if ((*l_113))
                        continue;
                    l_99 = ((*l_202) = (void*)0);

                    ;
                    ;
                    (*l_202) = &g_75;

                    ;
                }

                ;
                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
    }

    ;
    return g_147;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_120.f0, "g_120.f0", print_hash_value);
    transparent_crc(g_120.f1, "g_120.f1", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_147.f0, "g_147.f0", print_hash_value);
    transparent_crc(g_147.f1, "g_147.f1", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_198.f0, "g_198.f0", print_hash_value);
    transparent_crc(g_198.f1, "g_198.f1", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_237.f0, "g_237.f0", print_hash_value);
    transparent_crc(g_237.f1, "g_237.f1", print_hash_value);
    transparent_crc(g_239.f0, "g_239.f0", print_hash_value);
    transparent_crc(g_239.f1, "g_239.f1", print_hash_value);
    transparent_crc(g_259.f0, "g_259.f0", print_hash_value);
    transparent_crc(g_259.f1, "g_259.f1", print_hash_value);
    transparent_crc(g_260.f0, "g_260.f0", print_hash_value);
    transparent_crc(g_260.f1, "g_260.f1", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    transparent_crc(g_440.f0, "g_440.f0", print_hash_value);
    transparent_crc(g_440.f1, "g_440.f1", print_hash_value);
    transparent_crc(g_443, "g_443", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_496.f0, "g_496.f0", print_hash_value);
    transparent_crc(g_496.f1, "g_496.f1", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_538.f0, "g_538.f0", print_hash_value);
    transparent_crc(g_538.f1, "g_538.f1", print_hash_value);
    transparent_crc(g_568.f0, "g_568.f0", print_hash_value);
    transparent_crc(g_568.f1, "g_568.f1", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_638, "g_638", print_hash_value);
    transparent_crc(g_659.f0, "g_659.f0", print_hash_value);
    transparent_crc(g_659.f1, "g_659.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
