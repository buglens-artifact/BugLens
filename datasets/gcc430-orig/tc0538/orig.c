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



static short g_3 = (-2L);
static int g_24 = 0xB15D3E99L;
static int g_67 = 2L;
static const unsigned g_73 = 18446744073709551615UL;
static long long g_75 = (-5L);
static short g_103 = (-4L);
static const int *g_122 = &g_24;
static const int **g_121 = &g_122;
static const int ***g_120 = &g_121;
static long long g_125 = 0xAF826611625F1A37LL;
static unsigned g_136 = 0UL;
static unsigned g_140 = 0x3184BC67L;
static char g_158 = 0L;
static char g_186 = 0L;
static unsigned g_192 = 2UL;
static unsigned long long g_201 = 0x9F12A095ECA5D8F8LL;
static int g_207 = 9L;
static short g_216 = 6L;
static unsigned g_233 = 0x6FC2D246L;
static unsigned short g_244 = 9UL;
static unsigned short g_247 = 65535UL;
static long long g_279 = (-1L);
static const unsigned *g_287 = &g_192;
static const unsigned **g_286 = &g_287;
static unsigned short *g_310 = (void*)0;
static unsigned short **g_309 = &g_310;
static unsigned long long g_331 = 0xC2EA9A851CDA068ALL;
static int g_347 = 0x3A55A67DL;
static unsigned char g_379 = 254UL;
static unsigned **g_416 = (void*)0;
static const char g_421 = 0xACL;
static char *g_426 = &g_186;
static char **g_425 = &g_426;
static unsigned g_448 = 0UL;
static int *g_476 = (void*)0;
static unsigned char g_525 = 0x04L;
static int g_529 = 1L;
static unsigned char *g_562 = (void*)0;
static unsigned char **g_561 = &g_562;
static unsigned char ***g_560 = &g_561;
static const unsigned short g_589 = 65533UL;
static unsigned short ***g_618 = (void*)0;
static unsigned short ***g_619 = &g_309;
static unsigned long long * const g_622 = (void*)0;
static unsigned *g_703 = (void*)0;
static unsigned **g_702 = &g_703;
static unsigned long long ** const *g_720 = (void*)0;
static short g_721 = (-1L);



static unsigned long long func_1(void);
static unsigned long long func_10(char p_11);
static char func_12(unsigned short p_13, char p_14, const unsigned p_15, short p_16);
static int * func_27(char p_28, unsigned short p_29, unsigned short p_30, const char p_31);
static short func_36(const unsigned short p_37, int p_38, int * p_39);
static int * func_41(int * p_42, unsigned p_43, unsigned long long p_44, long long p_45);
static unsigned char func_57(int * p_58, const int p_59);
static const int func_60(int p_61, int * p_62, int p_63);
static long long func_83(char p_84, unsigned p_85, long long p_86);
static short func_87(int * p_88);
static unsigned long long func_1(void)
{
    long long l_2 = 1L;
    unsigned char l_22 = 255UL;
    unsigned short ** const l_603 = &g_310;
    unsigned short ***l_617 = (void*)0;
    int *l_649 = &g_347;
    int *l_651 = (void*)0;
    unsigned short *l_657 = &g_244;
    unsigned l_693 = 0x4A31783AL;
    int l_708 = 7L;
    char l_748 = 0xB5L;
    short l_763 = (-4L);
    unsigned l_764 = 0x02E2588CL;
    int **l_777 = &l_651;
    int ***l_776 = &l_777;
    int ****l_775 = &l_776;
    const unsigned short *l_781 = &g_589;
    const unsigned short **l_780 = &l_781;
    const unsigned short ***l_779 = &l_780;
    int *l_790 = &l_708;
    int l_794 = 0xECDC1E5BL;
    if (l_2)
    {
        unsigned short l_17 = 0x3161L;
        unsigned long long l_588 = 1UL;
        int l_599 = 0xC0B949E8L;
        unsigned short **l_602 = (void*)0;
        int *l_633 = &g_24;
        unsigned long long *l_719 = &g_331;
        unsigned long long **l_718 = &l_719;
        unsigned long long ***l_717 = &l_718;
        const int ****l_772 = &g_120;
        if (l_2)
        {
            const unsigned char l_18 = 0xADL;
            int *l_23 = &g_24;
            unsigned *l_564 = &g_192;
            int l_565 = 0xE62FC5E8L;
            if (((((*l_564) = (((g_3 ^ (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((g_201 = func_10(((*g_426) = (g_3 , (func_12((((-1L) || l_17) & l_18), (safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_s((l_22 || (((*l_23) = (((0L == (l_17 == l_17)) != 0x72L) != l_22)) || l_17)), 2)))), l_17, l_17) <= l_18))))) != g_103), 0)), l_17)), g_207))) >= l_17) ^ 0xF668L)) & l_565) & 4294967295UL))
            {
                unsigned long long *l_570 = (void*)0;
                unsigned long long *l_571 = &g_331;
                int l_586 = 0xAA94B103L;
                unsigned char *l_587 = &g_379;
                (*l_23) = (*g_122);
                if ((((((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((((func_36(l_2, ((((*l_571) = g_529) != ((func_60((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((((*l_23) && ((((safe_lshift_func_uint16_t_u_s((((((*l_587) = (((safe_add_func_uint64_t_u_u(g_247, (0xCB3AB518L & (*g_287)))) , (((safe_sub_func_uint16_t_u_u(func_10(l_586), (func_60((*l_23), &g_67, g_529) != 248UL))) != 0L) && g_186)) == l_17)) , g_347) < 65535UL) | g_244), 5)) , (*l_23)) ^ 0x37C43D732907074ALL) < l_17)) & l_17) , (*l_23)) < 0x3E7ECED4DCE4CCBDLL), g_73)), l_22)), g_201)), (*l_23))), &g_347, l_588) ^ g_589) , 0x66BDF84D0554B130LL)) | (*l_23)), l_23) , l_586) || (**g_425)) != l_17), 0)), (*l_23))) , (*l_23)) & (*l_23)) == 0xD658BA745A544FD8LL) < (-1L)))
                {
                    long long *l_594 = &g_125;
                    int l_597 = (-5L);
                    unsigned short *l_598 = (void*)0;
                    (*l_23) = (safe_mod_func_int16_t_s_s((l_17 != (func_12((l_599 = ((((((safe_sub_func_int8_t_s_s((((((*g_426) = (-1L)) , (*l_23)) , ((((*l_571) = 0x83F45E6CEF504DFFLL) < ((void*)0 != &g_309)) <= (((*l_594) = l_586) , (safe_mod_func_int32_t_s_s((l_597 <= l_2), 1UL))))) || l_597), g_279)) & l_597) <= (-4L)) , l_594) != &g_201) <= 0x26C1L)), l_17, (**g_286), g_103) ^ (-1L))), g_140));
                    l_599 = (((safe_rshift_func_uint16_t_u_s(l_22, (func_12(((((**g_286) ^ (((*l_594) = (func_36(((l_602 == l_603) , (safe_mod_func_uint16_t_u_u((((l_586 <= 0x19L) < (safe_lshift_func_uint16_t_u_s(((((void*)0 != &g_331) || (l_586 > 0x168A674CL)) > l_588), 3))) , l_2), (*l_23)))), l_586, &g_24) ^ 0xBB774B55E0C45A79LL)) , (*g_287))) & (-5L)) , g_140), (**g_425), (**g_286), g_589) & g_379))) < 0L) | 0x5E86A3BEL);
                    (*l_23) = 0xBE7F7B45L;
                    for (g_3 = 0; (g_3 != (-30)); g_3--)
                    {
                        int l_610 = 0x9DFE5B9BL;
                        (**g_120) = &l_597;
                        (*l_23) = 0xCBD4FF24L;
                        (*l_23) = (l_610 = ((void*)0 != &g_560));
                    }
                }
                else
                {
                    return l_22;
                }
            }
            else
            {
                (*l_23) = (*g_122);
            }
        }
        else
        {
            unsigned *l_611 = &g_140;
            int l_612 = (-1L);
            long long *l_614 = &g_279;
            long long **l_613 = &l_614;
            int l_643 = 3L;
            int **l_650 = &l_649;
            int **l_652 = &g_476;
            unsigned short *l_655 = &g_247;
            unsigned short *l_656 = &l_17;
            unsigned char *l_658 = (void*)0;
            unsigned char *l_659 = &l_22;
            int *l_660 = &l_643;
            unsigned short *l_661 = &g_244;
            unsigned short *l_662 = &l_17;
            unsigned l_663 = 1UL;
            short *l_664 = (void*)0;
            short *l_665 = &g_103;
            unsigned l_678 = 0UL;
            int l_679 = 0x035A4B7DL;
            short l_689 = 1L;
            int *l_692 = &g_347;
            unsigned long long l_705 = 0UL;
            int l_722 = (-4L);
            int l_733 = 0xDAF6D792L;
            char l_762 = 0xABL;
            unsigned *l_768 = &g_233;
            unsigned **l_767 = &l_768;
            if (((((*l_613) = ((func_12((+((0UL == l_22) != g_525)), l_599, ((*l_611) = (**g_286)), l_612) || (&g_309 == (void*)0)) , (void*)0)) == &g_125) , (***g_120)))
            {
                char l_620 = 0x5BL;
                int *l_621 = &l_612;
                unsigned long long *l_636 = (void*)0;
                (*l_621) = (l_612 != (((safe_sub_func_uint64_t_u_u((g_421 && (l_588 != ((g_618 = l_617) != (g_619 = &g_309)))), (l_588 != ((***g_120) > ((*l_611) = (l_17 | (l_599 , l_599))))))) , l_620) , 0xC5L));
                if (((void*)0 == g_622))
                {
                    unsigned short l_625 = 1UL;
                    unsigned short *l_630 = &l_17;
                    (*l_621) = (l_599 || (safe_mod_func_uint16_t_u_u(((((&g_561 != (void*)0) == l_625) & (**g_286)) > (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((**g_425) && l_22), ((*l_630) = func_60((*g_122), &g_67, l_612)))), l_625))), g_525)));
                    for (g_244 = 0; (g_244 <= 58); g_244++)
                    {
                        (*g_619) = l_602;
                        (*l_621) = l_625;
                    }
                    (*g_121) = l_633;
                }
                else
                {
                    unsigned long long * const *l_635 = &g_622;
                    unsigned long long * const **l_634 = &l_635;
                    (*l_634) = &g_622;
                }
                (*l_621) = func_10((0x35C56880B5BB0940LL > (g_331 = 0xDD29E5A147518C3ELL)));
                for (g_331 = (-28); (g_331 <= 1); g_331 = safe_add_func_int64_t_s_s(g_331, 6))
                {
                    unsigned char *l_644 = &l_22;
                    (*g_121) = (((*l_644) = ((((safe_add_func_uint64_t_u_u((*l_633), (safe_add_func_int64_t_s_s(g_233, (*l_633))))) ^ ((*l_633) <= ((l_612 != (*l_621)) == ((*l_621) | (l_643 = (((*l_621) ^ func_10((*g_426))) , 0x1B39L)))))) && 0x26A3796FL) , 6UL)) , (*g_121));
                    (*g_121) = (**g_120);
                    (*g_121) = (*g_121);
                    return g_589;
                }
            }
            else
            {
                (*l_633) = 0x648D43D2L;
            }
            if (((*l_633) & (safe_lshift_func_int16_t_s_s(((*l_665) = (func_36(((*l_662) = ((*l_661) = ((safe_sub_func_uint64_t_u_u((*l_633), (func_87(((*l_650) = l_649)) | ((*l_633) != ((~((*l_660) = (func_36(((((l_651 != ((*l_652) = &g_347)) && (((((*l_659) = (safe_sub_func_int8_t_s_s((l_655 == (l_657 = (l_656 = ((*l_603) = (void*)0)))), (**g_425)))) == (**g_425)) , (**g_425)) < (**l_652))) > 0x3CA48F505825EE8ELL) , g_421), g_201, l_651) , (*g_476)))) | 0x7325EE1CL))))) <= (**g_286)))), l_663, &g_24) | g_589)), (*l_633)))))
            {
                int *l_666 = &g_529;
                int l_669 = 0xC0BCC96DL;
                unsigned short *l_670 = &g_247;
                unsigned *l_674 = &g_136;
                unsigned l_686 = 0xBE8A96D1L;
                (*l_652) = l_651;
                (**l_650) = ((safe_sub_func_int64_t_s_s(0xB31E688197EBCE1CLL, (*l_633))) == ((**g_286) == (((*l_674) = ((*l_611) = (**g_286))) != (l_679 = (func_36((0xBF9CL && (((((*l_662) = ((**l_650) = (safe_add_func_int16_t_s_s((((*l_665) = (*l_633)) , g_448), (((*l_661) = ((*l_670) = (safe_unary_minus_func_int32_t_s(l_669)))) | (*l_649)))))) , (*l_649)) >= l_669) , l_669)), l_678, &g_24) == g_448)))));
                l_693 = ((safe_mod_func_int32_t_s_s((*l_649), func_36((((**l_650) , (safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((func_10((*l_649)) && (l_686 || ((safe_rshift_func_uint8_t_u_u(l_689, 4)) , (g_140 > (safe_mod_func_uint16_t_u_u((*l_649), g_140)))))) & l_686), (*l_660))), 0x59L))) && (*l_649)), (*l_633), l_692))) ^ l_669);
            }
            else
            {
                unsigned l_697 = 0x71835A04L;
                int l_709 = 0x91F61F6BL;
                int l_710 = 0xFB6AB543L;
                unsigned char l_715 = 255UL;
                (*g_476) = (*l_649);
                if ((*l_633))
                {
                    const int l_700 = 0x70D7651CL;
                    for (g_186 = 0; (g_186 == 0); ++g_186)
                    {
                        unsigned ***l_696 = &g_416;
                        (*l_633) = (&g_589 == (void*)0);
                        (*l_696) = g_416;
                    }
                    if (((func_10(l_697) && ((0xAEC113647E2D973FLL < (safe_rshift_func_uint8_t_u_s((*l_633), l_700))) , ((*l_633) & (*l_633)))) < l_700))
                    {
                        unsigned ***l_704 = &g_702;
                        (*l_649) = ((*l_692) <= (**l_652));
                        (*l_633) = ((*l_633) , 0xC8889654L);
                        (*l_649) = (((*l_704) = g_702) == (void*)0);
                    }
                    else
                    {
                        (**g_120) = (**g_120);
                        return l_697;
                    }
                    if ((l_697 | l_705))
                    {
                        (*l_650) = l_649;
                        (*l_652) = (void*)0;
                    }
                    else
                    {
                        return (*l_633);
                    }
                    (*l_692) = (1UL == (0x9F31L & ((safe_add_func_uint64_t_u_u(l_708, (l_709 = 0x27569AED1C048714LL))) > (func_36(l_697, l_710, &g_347) && ((safe_add_func_int64_t_s_s(func_10((safe_sub_func_int32_t_s_s(0x374C3874L, l_715))), g_589)) && g_379)))));
                }
                else
                {
                    unsigned l_716 = 0x790E6CE5L;
                    (*g_121) = &l_709;
                }
                (**g_120) = (*g_121);
                for (l_599 = 0; (l_599 < (-30)); --l_599)
                {
                    unsigned short l_725 = 0UL;
                    (*l_692) = l_725;
                    if (l_709)
                        break;
                    if (((((*g_619) != &l_655) == (**l_650)) == (*l_633)))
                    {
                        return (**l_650);
                    }
                    else
                    {
                        short l_726 = 0x3605L;
                        (*g_121) = (l_726 , (*g_121));
                    }
                }
            }
            (**l_650) = (*l_633);
            if (((*l_633) = (l_733 > (*l_633))))
            {
                unsigned l_738 = 0x6F10F9BAL;
                unsigned **l_741 = (void*)0;
                char *l_760 = &l_748;
                char l_761 = 0x0BL;
                int *l_771 = &l_679;
                for (g_529 = 5; (g_529 == 5); g_529 = safe_add_func_int8_t_s_s(g_529, 5))
                {
                    unsigned ***l_742 = &g_702;
                    int l_747 = 0x92476015L;
                    unsigned *l_752 = &l_678;
                    unsigned **l_751 = &l_752;
                    (*l_692) = (((safe_rshift_func_int8_t_s_s((((*l_665) = g_216) , l_738), ((*g_426) = (((*l_649) == g_448) && (safe_rshift_func_uint8_t_u_s(0x07L, (l_741 != ((*l_742) = &g_703)))))))) , ((safe_sub_func_int32_t_s_s(((g_125 , (safe_sub_func_int8_t_s_s((**g_425), l_747))) == (**g_286)), 0L)) ^ l_747)) ^ 0xC431974BL);
                    (*l_650) = func_41(((*l_652) = &g_24), (*l_660), l_747, g_186);
                }
                (*l_650) = ((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(func_12((*l_692), (**g_425), func_36((((((**g_425) ^ ((*l_760) = 0x4EL)) & ((((l_761 | (**g_425)) || ((*l_633) , 0L)) && (*l_633)) & (*l_692))) , 1L) , (*l_649)), l_762, &g_67), l_763), g_136)) & l_738), (*l_660))), l_764)) , &l_599);
                (*l_660) = (safe_mod_func_uint16_t_u_u(((((((void*)0 != l_767) != (((safe_rshift_func_int16_t_s_u((&g_120 != (((*l_771) = g_136) , l_772)), 14)) < (g_721 = ((*l_665) = ((l_761 < (safe_sub_func_uint32_t_u_u((g_331 ^ (((~(****l_772)) , l_775) != &g_120)), l_761))) >= 0L)))) , 3L)) && (****l_772)) < g_24) & (**g_425)), (*l_692)));
            }
            else
            {
                unsigned l_778 = 0xF8CAA5D0L;
                return l_778;
            }
        }
    }
    else
    {
        unsigned short ****l_782 = &l_617;
        int l_783 = 0x1D685D0DL;
        (*g_121) = func_27((**g_425), (l_779 == ((*l_782) = &g_309)), ((l_783 , g_24) == ((safe_rshift_func_int8_t_s_s((*l_649), 7)) & (~((!g_186) >= ((safe_mod_func_int16_t_s_s((func_60((safe_sub_func_int64_t_s_s(((l_783 | l_783) == l_783), l_783)), &l_783, (*g_122)) ^ l_783), g_347)) != l_783))))), (*g_426));
    }
    (*l_790) = ((l_22 , (l_708 < g_421)) , l_763);
    for (g_529 = 0; (g_529 != (-26)); g_529 = safe_sub_func_int32_t_s_s(g_529, 7))
    {
        int *l_793 = &g_24;
        (*l_777) = l_793;
        l_793 = (void*)0;
        (**l_777) = (*l_651);
    }
    (*l_790) = 0xA0A2D238L;
    return l_794;
}







static unsigned long long func_10(char p_11)
{
    (*g_121) = (*g_121);
    return g_103;
}







static char func_12(unsigned short p_13, char p_14, const unsigned p_15, short p_16)
{
    int *l_46 = &g_24;
    unsigned char *l_559 = &g_379;
    unsigned char ** const l_558 = &l_559;
    unsigned char ** const * const l_557 = &l_558;
    unsigned char ****l_563 = &g_560;
    for (p_14 = (-2); (p_14 != 5); p_14 = safe_add_func_int64_t_s_s(p_14, 7))
    {
        unsigned long long l_40 = 18446744073709551615UL;
        int *l_64 = (void*)0;
        unsigned char *l_454 = &g_379;
        unsigned *l_455 = &g_233;
        int **l_456 = &l_64;
        unsigned *l_457 = (void*)0;
        unsigned *l_458 = (void*)0;
        unsigned *l_459 = &g_140;
    }
    if ((*l_46))
    {
        (*l_46) = p_15;
    }
    else
    {
        unsigned char **l_554 = (void*)0;
        unsigned char ***l_555 = (void*)0;
        unsigned char ***l_556 = &l_554;
        (*l_556) = l_554;
    }
    (*l_46) = ((((p_15 < (((*l_46) != 4294967295UL) ^ ((func_36(p_14, (l_46 != ((l_557 == ((*l_563) = g_560)) , l_46)), &g_24) , (**g_425)) ^ p_13))) , (*l_46)) != 0x15L) <= (*l_46));
    (**g_120) = func_41(l_46, (*l_46), p_16, p_13);
    return p_15;
}







static int * func_27(char p_28, unsigned short p_29, unsigned short p_30, const char p_31)
{
    char l_515 = 0x12L;
    const int **l_516 = &g_122;
    int *l_530 = (void*)0;
    for (g_233 = 26; (g_233 < 22); g_233 = safe_sub_func_uint16_t_u_u(g_233, 4))
    {
        unsigned char l_519 = 4UL;
        int *l_526 = &g_67;
        int *l_527 = &g_347;
        int *l_528 = &g_529;
        unsigned l_531 = 1UL;
        unsigned short *l_538 = &g_247;
        unsigned long long *l_549 = &g_201;
        int **l_551 = &l_530;
        int ***l_550 = &l_551;
        (*l_526) = ((l_515 & ((void*)0 != l_516)) , ((*l_527) = ((func_60((safe_add_func_uint64_t_u_u(p_31, g_207)), func_41(&g_24, p_31, (*l_527), g_75), p_30) && p_30) < l_531)));
        (*l_527) = (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((*l_538) = (safe_lshift_func_int8_t_s_s((((p_28 , 0x809D37F6176D4EB4LL) , (*g_309)) != (void*)0), (*l_527)))), ((g_421 , (p_28 < g_140)) , ((p_30 , (*g_426)) != p_31)))), p_28));
        for (l_515 = 0; (l_515 == 26); l_515 = safe_add_func_int32_t_s_s(l_515, 2))
        {
            for (g_186 = 2; (g_186 > (-23)); g_186 = safe_sub_func_uint8_t_u_u(g_186, 3))
            {
                return &g_24;
            }
            if (p_31)
                break;
            (**g_120) = l_528;
            if (p_28)
                break;
        }
        (*l_526) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((((((*l_549) = (safe_mod_func_uint16_t_u_u((g_207 != p_31), p_30))) != ((void*)0 == l_550)) , &p_28) != &g_158) != g_379), (safe_lshift_func_int8_t_s_u((*g_426), p_31)))), (*l_527)));
    }
    return l_530;
}







static short func_36(const unsigned short p_37, int p_38, int * p_39)
{
    char l_512 = 0x49L;
    for (g_244 = (-2); (g_244 != 13); g_244++)
    {
        return g_201;
    }
    return l_512;
}







static int * func_41(int * p_42, unsigned p_43, unsigned long long p_44, long long p_45)
{
    unsigned long long l_464 = 0x3A858D1DCFF5157DLL;
    int *l_472 = &g_67;
    unsigned l_477 = 4294967295UL;
    int *l_481 = &g_24;
    int *l_490 = (void*)0;
    int *l_491 = &g_347;
    unsigned short *l_496 = &g_247;
    for (g_448 = 0; (g_448 != 59); ++g_448)
    {
        int *l_465 = (void*)0;
        int **l_475 = &l_465;
        short l_478 = (-8L);
        (*p_42) = (safe_add_func_uint8_t_u_u(2UL, l_464));
        (*l_472) = (p_43 && (*g_426));
        (*l_472) = (safe_mod_func_int16_t_s_s(((p_44 , (*g_426)) , 0xB0AFL), 1L));
    }
    (*l_491) = ((*l_472) = ((*p_42) = ((func_60((p_43 , (p_44 , ((p_45 & g_24) < func_60((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u(((*g_426) = ((*l_472) > (safe_lshift_func_uint8_t_u_u(((*l_481) > (((safe_sub_func_uint8_t_u_u(p_44, 0x14L)) || (*l_472)) > 0x6D85F688L)), 3)))), 3)) || (*p_42)), (*l_472))), l_481, (*l_481))))), &g_347, (*l_481)) <= (*l_481)) != 0x7B87533BL)));
    if ((safe_add_func_int16_t_s_s(g_331, ((*l_496) = ((*l_481) = (0xA693D1BCL != 0UL))))))
    {
        (*l_491) = (safe_lshift_func_uint8_t_u_s((*l_481), (*g_426)));
    }
    else
    {
        const short l_503 = (-1L);
        for (p_45 = 0; (p_45 == 4); p_45 = safe_add_func_uint32_t_u_u(p_45, 5))
        {
            char *l_502 = &g_186;
            int l_505 = 0x0110AAADL;
            int *l_507 = &g_347;
            if (((*l_472) = (*l_481)))
            {
                const int l_501 = 0xD3F3A4E2L;
                unsigned l_504 = 0xAC75DE7FL;
                if (func_60((*p_42), (((((*g_426) && ((l_501 | 0xE48FC274L) & ((l_502 == l_502) | ((!((*l_472) & (*p_42))) || (l_503 <= p_43))))) < l_503) <= l_504) , (void*)0), l_505))
                {
                    int *l_506 = &g_347;
                    l_507 = l_506;
                    (*g_121) = p_42;
                }
                else
                {
                    (*g_121) = p_42;
                }
                (*l_472) = (*g_122);
            }
            else
            {
                return p_42;
            }
            for (l_477 = 0; (l_477 > 26); ++l_477)
            {
                return &g_347;
            }
            (*g_121) = (void*)0;
        }
        (**g_120) = l_490;
    }
    return &g_347;
}







static unsigned char func_57(int * p_58, const int p_59)
{
    const int *l_82 = (void*)0;
    const int **l_81 = &l_82;
    short *l_215 = &g_216;
    long long *l_217 = &g_125;
    char *l_423 = &g_158;
    char ** const l_422 = &l_423;
    char ***l_424 = (void*)0;
    unsigned short *l_427 = &g_244;
    int *l_433 = &g_24;
    (*l_81) = ((((*l_217) = (safe_sub_func_int8_t_s_s(p_59, ((l_81 != ((func_83(p_59, (((func_87(p_58) ^ ((*l_215) = g_201)) , l_217) == ((((safe_mod_func_uint64_t_u_u(p_59, (((void*)0 == &l_82) , g_201))) == 0x95L) , 0L) , (void*)0)), g_201) || p_59) , (void*)0)) != g_331)))) < 0xCC1D93898DC6CC55LL) , (void*)0);
    g_425 = l_422;
    if (((*g_426) >= (((0xE4EDL ^ p_59) && ((g_379 < ((*l_427) = (((*g_425) = (*l_422)) == (void*)0))) , g_103)) != g_192)))
    {
        int *l_432 = &g_67;
        unsigned char *l_449 = &g_379;
        for (g_136 = 23; (g_136 == 12); g_136--)
        {
            int *l_431 = &g_67;
            int **l_430 = &l_431;
            unsigned short l_437 = 65535UL;
            if (((func_60((*p_58), &g_24, (*p_58)) , func_60((*p_58), ((*l_430) = &g_347), ((func_60(func_60((*p_58), (p_59 , l_432), (*p_58)), l_433, (*p_58)) >= g_216) && 0x2AL))) , 0x63609E74L))
            {
                (**l_430) = (*p_58);
                (**g_120) = p_58;
                (*l_432) = (safe_lshift_func_uint16_t_u_u(func_60((**g_121), p_58, (l_432 != p_58)), 8));
                (*l_430) = (*l_430);
            }
            else
            {
                int l_436 = 0x01A90A6CL;
                (*l_431) = l_436;
            }
            return l_437;
        }
        (*l_432) = (((*l_449) = (((&l_217 != (void*)0) == (safe_mod_func_int8_t_s_s(((l_432 == l_82) >= ((*g_426) < (safe_lshift_func_uint8_t_u_u((func_60((*p_58), l_433, ((safe_rshift_func_int16_t_s_s((!((+((*l_215) = (p_59 || (safe_add_func_int64_t_s_s(((*l_217) = (safe_mod_func_int32_t_s_s((((p_59 || p_59) | g_448) != 0xBFL), (*p_58)))), 0x3288FD659FC3AFE4LL))))) < p_59)), 12)) , (*p_58))) != (*g_426)), g_186)))), (-9L)))) < 0UL)) <= (*g_426));
        (*l_432) = (((*l_215) = (*l_433)) == (((*l_217) = ((func_60((65535UL < (safe_rshift_func_uint8_t_u_s(0UL, 6))), p_58, ((((**g_425) | func_60((*l_432), l_432, (*l_432))) ^ (*p_58)) , (*l_433))) == (*p_58)) , (-1L))) < 18446744073709551615UL));
    }
    else
    {
        return g_379;
    }
    return g_125;
}







static const int func_60(int p_61, int * p_62, int p_63)
{
    int *l_65 = (void*)0;
    int *l_66 = &g_67;
    long long *l_74 = &g_75;
    int ***l_76 = (void*)0;
    int **l_78 = &l_66;
    int ***l_77 = &l_78;
    (*l_66) = (p_63 = g_3);
    g_67 = (((safe_add_func_int8_t_s_s(g_67, p_63)) == (safe_unary_minus_func_int32_t_s(g_24))) ^ ((*l_74) = (safe_sub_func_int64_t_s_s((&g_67 == &g_67), g_73))));
    (*l_77) = (void*)0;
    return p_63;
}







static long long func_83(char p_84, unsigned p_85, long long p_86)
{
    unsigned long long *l_253 = &g_201;
    int l_254 = 0xDB045812L;
    int *l_324 = &g_67;
    char l_340 = (-4L);
    int l_351 = (-1L);
    int *l_352 = &g_347;
    int *l_355 = (void*)0;
    int *l_356 = (void*)0;
    int l_357 = (-1L);
    unsigned short *l_358 = &g_244;
    unsigned char *l_381 = &g_379;
    int l_400 = 0xC066BD95L;
    if (p_84)
    {
        int * const l_220 = &g_24;
        int *l_222 = &g_67;
        int **l_221 = &l_222;
        int *l_328 = &g_24;
        unsigned *l_332 = &g_233;
        long long l_333 = 0x10828A7E7CD90A56LL;
        int *l_334 = &l_254;
        (*l_221) = l_220;
        if (p_86)
        {
            char l_242 = 0xC9L;
            int l_290 = 0x8E1EF68BL;
            int *l_307 = &l_254;
            unsigned short ** const l_312 = &g_310;
            (*l_221) = (*l_221);
            for (g_186 = 10; (g_186 != (-24)); g_186 = safe_sub_func_uint32_t_u_u(g_186, 4))
            {
                int *l_225 = &g_67;
                int ***l_251 = &l_221;
                int ****l_250 = &l_251;
                unsigned short *l_273 = &g_247;
                char *l_278 = (void*)0;
                unsigned *l_292 = &g_192;
                unsigned ** const l_291 = &l_292;
                (*l_225) = ((void*)0 == &g_125);
                for (g_75 = (-16); (g_75 <= (-19)); --g_75)
                {
                    long long l_252 = 2L;
                    if (p_85)
                    {
                        (*l_221) = l_225;
                        (*g_121) = (**g_120);
                        (**g_120) = (**g_120);
                        (**l_221) = p_86;
                    }
                    else
                    {
                        unsigned *l_232 = &g_233;
                        unsigned *l_235 = &g_233;
                        unsigned **l_234 = &l_235;
                        unsigned short *l_243 = &g_244;
                        unsigned short *l_245 = (void*)0;
                        unsigned short *l_246 = &g_247;
                        g_67 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(p_85, ((((void*)0 != &g_73) , (l_232 = (void*)0)) == ((*l_234) = l_225)))), 7));
                        l_254 = ((0x2AE1L < ((((((*l_246) = ((*l_243) = ((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s(g_186, 0x46C8L)), 0x0EB5DC200BE11D5CLL)) || l_242))) >= ((safe_rshift_func_uint8_t_u_s(0UL, (((((((!4294967291UL) , l_250) != (void*)0) , g_192) , g_140) & g_186) && l_252))) || p_84)) , l_242) , l_253) != &g_201)) , 0L);
                    }
                    (*l_225) = l_242;
                }
            }
        }
        else
        {
            int l_323 = 9L;
            unsigned *l_325 = &g_136;
            for (p_86 = 0; (p_86 < 22); p_86 = safe_add_func_int32_t_s_s(p_86, 2))
            {
                (*g_121) = &l_254;
            }
            (*l_324) = ((~(((*g_287) == (safe_sub_func_uint16_t_u_u((((safe_add_func_int64_t_s_s(((*g_287) >= (p_85 , ((*l_325) = ((safe_add_func_int8_t_s_s((g_186 = l_323), g_73)) , ((g_207 , (((0x2EL > (*l_324)) != l_323) == l_323)) > g_201))))), (*l_220))) | g_233) || 0xEB92BCF94D503745LL), 0x57F9L))) , 0xE6L)) >= g_201);
        }
        (*l_334) = (0x1929319AL > (safe_add_func_int32_t_s_s(p_86, ((*l_324) = ((p_84 , g_24) > ((*l_253) = (((((((*l_332) = func_60(p_85, l_328, (safe_add_func_uint8_t_u_u(g_67, g_331)))) , 0x2254L) != p_85) >= g_125) || (*l_324)) , l_333)))))));
    }
    else
    {
        long long *l_345 = &g_75;
        int l_346 = 0L;
        int *l_348 = &g_347;
        (*l_324) = p_86;
        (*l_348) = ((*l_324) = (((*l_253) = (safe_rshift_func_int8_t_s_s((g_67 , (p_85 > (*l_324))), (*l_324)))) || (safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint64_t_u(l_340)) <= 0x99L), ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((*l_324) & (((((((g_247 ^ ((((*l_345) = 0xA8C57C3C3130D0C7LL) & p_84) && g_331)) >= 0xD28FF046L) , l_346) && 65527UL) | p_84) >= p_85) != (*l_324))), p_84)) , p_84), p_84)) ^ g_347)))));
    }
    (*l_324) = ((((((safe_rshift_func_uint8_t_u_u((func_60(l_351, &l_254, (*l_324)) || ((*l_324) | (l_254 = (((*l_352) = p_85) == (safe_sub_func_uint16_t_u_u(((l_253 != &p_86) < (*g_287)), 65535UL)))))), g_3)) | l_357) | 6L) & g_24) & p_85) != p_86);
    if ((*l_324))
    {
        (**g_120) = (**g_120);
        (*l_324) = 0L;
    }
    else
    {
        unsigned long long l_367 = 0UL;
        const int *l_374 = &g_24;
        int l_377 = (-10L);
        unsigned char *l_382 = (void*)0;
        unsigned long long l_383 = 3UL;
        int *l_384 = &g_347;
        if ((l_358 == l_358))
        {
            int *l_368 = &g_67;
            int l_369 = (-2L);
            const int *l_370 = &g_347;
            (*l_352) = 1L;
            l_369 = (p_86 || (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(g_140, (safe_mod_func_int32_t_s_s((((*l_368) = (safe_mod_func_int64_t_s_s(0xACEF2413EBC94F9BLL, func_60(l_367, l_368, p_84)))) == (g_279 , p_84)), 0xB27C4B1FL)))), g_186)));
            l_370 = (**g_120);
        }
        else
        {
            int *l_371 = (void*)0;
            unsigned char *l_378 = &g_379;
            unsigned *l_415 = &g_233;
            unsigned **l_414 = &l_415;
            (**g_120) = l_371;
            (*g_121) = (void*)0;
            if ((safe_add_func_uint8_t_u_u((((void*)0 != l_374) , ((*l_374) >= p_86)), (p_86 | ((*l_378) = (p_86 < ((l_377 , 0x910D2C7DL) > (**g_286))))))))
            {
                short l_380 = 0xB819L;
                (*l_352) = ((l_380 > (l_381 != ((~0x1D4FL) , l_382))) != l_383);
                (**g_120) = l_384;
            }
            else
            {
                unsigned l_392 = 0x86A017D1L;
                int l_393 = 1L;
                if ((0x53L & p_84))
                {
                    int *l_387 = (void*)0;
                    for (g_158 = 10; (g_158 != (-30)); --g_158)
                    {
                        (*l_352) = (*l_374);
                    }
                    (**g_120) = l_387;
                }
                else
                {
                    unsigned *l_396 = (void*)0;
                    unsigned *l_397 = &g_192;
                    int *l_398 = &g_347;
                    unsigned char l_399 = 250UL;
                    long long *l_402 = &g_279;
                    long long **l_401 = &l_402;
                    const char *l_420 = &g_421;
                    const char **l_419 = &l_420;
                    (*l_398) = (p_84 == (0x4911L & ((((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((*l_374) >= p_84) | (p_85 != ((((l_393 = l_392) < (safe_sub_func_uint32_t_u_u(((*l_397) = ((void*)0 == &g_3)), ((l_399 > (*l_398)) || 0xE6L)))) , 1UL) , 0xFA0B42B693B70FBFLL))), l_400)), (*l_398))) , 8UL) < p_86) > p_85)));
                    (*l_324) = ((*l_398) = (((*l_401) = &p_86) != ((p_85 == (safe_unary_minus_func_int32_t_s((((safe_lshift_func_int8_t_s_s(((g_3 | (g_125 , (safe_mod_func_uint32_t_u_u((**g_286), (safe_sub_func_uint32_t_u_u((*g_287), p_84)))))) == p_84), 2)) >= ((((!(safe_sub_func_int32_t_s_s((p_85 == 0x45CBL), p_85))) >= 0x8B3D67D6L) >= 65535UL) , p_85)) >= (*l_374))))) , (void*)0)));
                    (*l_398) = (safe_lshift_func_int16_t_s_s((l_414 != g_416), (0x0663DD09485683FCLL & ((g_24 > ((*l_381) = 0xF0L)) <= (&p_84 != ((*l_419) = ((g_73 > (safe_rshift_func_uint16_t_u_s(((0xA6L > g_103) < p_86), 5))) , (void*)0)))))));
                }
            }
        }
    }
    return (*l_352);
}







static short func_87(int * p_88)
{
    unsigned l_89 = 0x1E611887L;
    int *l_90 = &g_67;
    long long *l_101 = &g_75;
    unsigned short l_147 = 0x4809L;
    int **l_151 = &l_90;
    int ***l_150 = &l_151;
    const int *l_214 = (void*)0;
    (*l_90) = l_89;
    if (((safe_rshift_func_int16_t_s_u((*l_90), (*l_90))) == (safe_add_func_int8_t_s_s((*l_90), (*l_90)))))
    {
        int **l_95 = &l_90;
        int *l_97 = &g_24;
        int **l_96 = &l_97;
        long long *l_100 = (void*)0;
        short *l_102 = &g_103;
        (*l_96) = ((*l_95) = l_90);
        if ((safe_rshift_func_int8_t_s_u((((((*l_102) = func_60(((**l_96) = (l_100 == (((void*)0 == &p_88) , l_101))), l_90, g_3)) < g_3) >= l_89) || g_75), l_89)))
        {
            int l_108 = (-7L);
            int ***l_109 = &l_95;
            const int ****l_123 = &g_120;
            long long *l_124 = &g_125;
            int *l_126 = &l_108;
            int *l_208 = &g_67;
            (*l_126) = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((g_75 | l_108), 4)) | (l_109 != l_109)), (safe_rshift_func_int16_t_s_s((g_67 && ((((*l_124) = ((*l_90) = ((((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s(2UL, (***l_109))), g_3)), 5)) && (((*l_123) = g_120) != &g_121)) , (*l_123)) != &g_121))) , g_75) != (-1L))), 8)))) > (*p_88));
            for (l_108 = 25; (l_108 >= 19); l_108 = safe_sub_func_uint64_t_u_u(l_108, 5))
            {
                unsigned *l_135 = &g_136;
                unsigned *l_139 = &g_140;
                int l_152 = 4L;
                (**l_95) = (*p_88);
                (*l_97) = ((0x2643L & func_60((safe_sub_func_int8_t_s_s(((****l_123) ^ ((*l_139) = ((-9L) != ((***l_109) , (((safe_sub_func_uint32_t_u_u(((*l_135) = ((*p_88) < g_73)), 0xFB3F51EDL)) , (safe_sub_func_int32_t_s_s(func_60((*p_88), (*l_95), (**g_121)), (*p_88)))) , 0xA6A967D4L))))), 0x2AL)), &g_24, (**g_121))) ^ l_89);
                for (g_136 = (-8); (g_136 == 37); g_136++)
                {
                    int *l_148 = &g_24;
                    unsigned *l_149 = &l_89;
                    if (((((void*)0 != &g_120) != 1L) , (safe_lshift_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((((func_60(l_147, (p_88 = l_148), (((*l_123) != (((*l_149) = ((&g_3 == &g_103) <= ((**l_123) != (void*)0))) , l_150)) <= g_3)) != l_152) < 1UL) > 0x1AL), 1L)) < (*l_148)) , (***l_150)), 7))))
                    {
                        (**l_150) = (*l_96);
                        if ((*l_148))
                            continue;
                    }
                    else
                    {
                        unsigned **l_155 = &l_135;
                        int l_156 = 0x5E8128C2L;
                        char *l_157 = &g_158;
                        (*l_90) = (safe_rshift_func_int16_t_s_u(g_73, 0));
                        (**g_120) = (***l_123);
                        (***l_150) = (func_60((((*l_155) = p_88) != (void*)0), &g_24, (**l_95)) != (((g_103 , l_156) | ((*l_157) = l_152)) <= (safe_add_func_uint16_t_u_u(g_73, l_152))));
                    }
                    return (*l_148);
                }
            }
            if (func_60(((*l_97) ^ (((((g_67 , (g_136 < (((safe_add_func_int16_t_s_s(g_136, ((*l_126) < (*l_126)))) <= (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((*l_90), (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((void*)0 != &p_88) != (*l_90)), g_103)), (**l_96))))) == 0x2CE2L) , (*l_97)) , 252UL), 6)), (*l_97)))) & (-9L)))) != 5UL) != (*l_90)) <= (**l_96)) < 0x46489DC94FE33C04LL)), (**l_109), (*p_88)))
            {
                g_67 = (g_158 & 0x2897L);
            }
            else
            {
                unsigned short l_182 = 0xA0CCL;
                (**g_120) = (p_88 = (((*l_97) != (**l_96)) , ((**l_150) = &g_24)));
                for (l_108 = (-29); (l_108 == (-24)); ++l_108)
                {
                    int l_193 = (-1L);
                }
                (*g_121) = l_208;
            }
            (**l_109) = p_88;
        }
        else
        {
            return g_67;
        }
    }
    else
    {
        const int *l_211 = &g_67;
        for (g_125 = 0; (g_125 <= (-12)); g_125 = safe_sub_func_int32_t_s_s(g_125, 1))
        {
            l_211 = (**g_120);
            (*l_90) = (((safe_rshift_func_uint16_t_u_s(func_60((*p_88), &g_67, (0x40BBL != func_60((**g_121), ((***l_150) , p_88), (**g_121)))), g_158)) == (-1L)) < (*l_211));
        }
    }
    (*g_121) = (void*)0;
    l_214 = (**g_120);
    return (*l_90);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_347, "g_347", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_721, "g_721", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
