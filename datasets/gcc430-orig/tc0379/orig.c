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



static unsigned char g_2 = 0x84L;
static int g_18 = 0xECF4A416L;
static int *g_17 = &g_18;
static int g_98 = 0L;
static int g_189 = 0x28246A68L;
static unsigned g_204 = 0xCB3F44D4L;
static int g_226 = 1L;
static int g_232 = 0xD76EB741L;
static unsigned short g_295 = 0xA467L;
static unsigned char g_364 = 0x2FL;
static int **g_383 = (void*)0;
static int ***g_382 = &g_383;
static char g_478 = 0xC7L;
static short g_483 = 0x18BFL;
static unsigned g_496 = 2UL;
static int g_563 = (-3L);
static unsigned short g_586 = 65530UL;
static int g_588 = 0x1F315237L;
static unsigned g_796 = 0UL;
static char g_1033 = 0L;
static int g_1037 = 9L;
static int g_1050 = 0xA605D97BL;
static int g_1073 = 0xCB732E06L;
static int g_1079 = 0xA45B2F4FL;
static unsigned g_1080 = 0x7E00A72FL;
static unsigned char g_1083 = 0UL;



static unsigned char func_1(void);
static int * func_5(int * p_6, int * p_7);
static int * func_8(unsigned short p_9, char p_10, short p_11);
static short func_13(unsigned short p_14);
static int * func_19(unsigned p_20, int * p_21);
static unsigned char func_37(unsigned p_38);
static int func_39(int * p_40, unsigned char p_41, short p_42);
static int * func_43(short p_44, char p_45);
static short func_55(short p_56, unsigned p_57, unsigned short p_58);
static unsigned char func_61(short p_62, int * p_63);
static unsigned char func_1(void)
{
    unsigned short l_12 = 0xB274L;
    int *l_562 = &g_563;
    int **l_1103 = &g_17;
    g_2++;
    (*l_1103) = func_5(func_8(g_2, l_12, func_13((+(safe_rshift_func_int16_t_s_s((((0x9503L >= ((g_2 , ((g_17 != &g_18) <= g_18)) || 0xFA32A17DL)) , (((g_2 , l_12) | 0L) && l_12)) ^ l_12), 6))))), l_562);
    return g_1073;
}







static int * func_5(int * p_6, int * p_7)
{
    unsigned short l_564 = 1UL;
    int *l_577 = &g_98;
    char l_626 = 0L;
    unsigned char l_629 = 0xEDL;
    int l_688 = 0x89898A9DL;
    int l_696 = 0xC55755A7L;
    int l_733 = (-2L);
    int l_744 = 0x878E20FFL;
    short l_779 = 0x01C5L;
    int **l_794 = &l_577;
    int ***l_954 = &g_383;
    int l_999 = 0xC8124A90L;
    int l_1038 = (-1L);
    int l_1075 = 0xE4DCDC10L;
lbl_642:
    (*p_7) = ((!(l_564 < l_564)) != (safe_sub_func_int16_t_s_s(func_37((g_496 , g_563)), l_564)));
    if (((safe_add_func_uint8_t_u_u(l_564, func_61((safe_add_func_int32_t_s_s((!l_564), (((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_563, 2)), l_564)) , g_98), (((l_564 , l_577) == (void*)0) & 9L))) <= 0x39L) < (*l_577)))), p_7))) , (*p_6)))
    {
        unsigned l_585 = 18446744073709551615UL;
        int *l_587 = &g_588;
        int ***l_593 = &g_383;
        char l_615 = 0x41L;
        int *l_640 = &g_232;
        int *l_641 = &g_18;
        int l_673 = 1L;
        int l_697 = 0xF1ECF283L;
        int l_698 = 0x988E7C59L;
        int l_708 = 0xCB71BED1L;
        int l_724 = 0x58D98132L;
        int l_740 = 0x7BF107B4L;
        (*l_587) |= ((((0x04L <= func_37((safe_add_func_int16_t_s_s(((safe_div_func_int8_t_s_s((*l_577), (safe_unary_minus_func_uint16_t_u(func_39(p_7, g_204, func_39(&g_98, (safe_div_func_uint8_t_u_u((((*l_577) , (void*)0) == p_6), l_585)), g_586)))))) & 0xB673A61BL), l_585)))) , 0x54L) > l_585) & g_295);
        (*g_17) = (*l_577);
        for (g_478 = 0; (g_478 <= 17); g_478++)
        {
            int *l_594 = &g_18;
            unsigned short l_608 = 65535UL;
            int ***l_639 = &g_383;
            int l_668 = 0L;
            int l_674 = 0x8D6AF7FFL;
            int l_746 = 1L;
            (*p_7) = func_55(g_563, g_232, (safe_rshift_func_int16_t_s_s(g_588, 10)));
            (*g_17) = (((l_593 == (void*)0) > (((((func_39(l_594, ((*l_577) & (safe_lshift_func_int8_t_s_u((*l_594), ((&g_383 == &g_383) <= g_295)))), (((safe_div_func_uint32_t_u_u((*l_577), 0xFAD088C5L)) & (*l_577)) , g_98)) , 0xF4L) > 0L) , (*l_577)) == (-4L)) ^ 0x99DB32BBL)) != 0xEFA7L);
            for (g_295 = 0; (g_295 == 31); g_295 = safe_add_func_uint32_t_u_u(g_295, 4))
            {
                unsigned l_627 = 0xD3CE2FF0L;
                int **l_650 = (void*)0;
                int *l_663 = &g_588;
                int *l_664 = &g_232;
                int *l_665 = (void*)0;
                int *l_666 = &g_563;
                int l_667 = 0L;
                int *l_669 = (void*)0;
                int *l_670 = &g_18;
                int *l_671 = &l_668;
                int *l_672 = &l_667;
                int *l_675 = &g_98;
                int *l_676 = &l_673;
                int l_677 = (-4L);
                int *l_678 = (void*)0;
                int *l_679 = &l_667;
                int *l_680 = &g_232;
                int *l_681 = (void*)0;
                int *l_682 = &l_673;
                int *l_683 = (void*)0;
                int *l_684 = &l_674;
                int l_685 = 4L;
                int *l_686 = &g_232;
                int *l_687 = &l_674;
                int *l_689 = &l_688;
                int *l_690 = (void*)0;
                int *l_691 = &g_232;
                int *l_692 = (void*)0;
                int *l_693 = &l_685;
                int *l_694 = (void*)0;
                int *l_695 = &l_667;
                int *l_699 = &l_674;
                int l_700 = (-4L);
                int *l_701 = &l_677;
                int *l_702 = &l_698;
                int *l_703 = &g_98;
                int *l_704 = &l_685;
                int *l_705 = &g_18;
                int *l_706 = &l_698;
                int *l_707 = &l_673;
                int *l_709 = &l_674;
                int *l_710 = (void*)0;
                int *l_711 = &g_18;
                int *l_712 = &l_674;
                int *l_713 = &l_673;
                int *l_714 = &l_697;
                int *l_715 = &l_668;
                int *l_716 = &l_674;
                int *l_717 = &g_98;
                int *l_718 = (void*)0;
                int *l_719 = (void*)0;
                int *l_720 = (void*)0;
                int *l_721 = &l_667;
                int *l_722 = &g_563;
                int *l_723 = &l_677;
                int *l_725 = &g_563;
                int *l_726 = &l_674;
                int *l_727 = &l_677;
                int *l_728 = &g_232;
                int l_729 = (-7L);
                int *l_730 = &l_685;
                int *l_731 = &l_673;
                int *l_732 = &l_685;
                int *l_734 = &l_708;
                int *l_735 = &l_673;
                int *l_736 = (void*)0;
                int *l_737 = (void*)0;
                int *l_738 = &l_696;
                int *l_739 = &g_98;
                int *l_741 = &g_232;
                int *l_742 = &g_588;
                int *l_743 = &l_698;
                int *l_745 = &l_668;
                int *l_747 = &l_729;
                int *l_748 = &l_744;
                int *l_749 = &g_563;
                int *l_750 = &l_729;
                int *l_751 = &g_232;
                int *l_752 = &g_588;
                int *l_753 = &l_724;
                int *l_754 = &l_674;
                int *l_755 = (void*)0;
                int *l_756 = &l_696;
                int *l_757 = (void*)0;
                int *l_758 = &g_563;
                int *l_759 = &l_708;
                int *l_760 = &l_729;
                unsigned l_761 = 18446744073709551615UL;
                for (g_98 = 21; (g_98 != 13); --g_98)
                {
                    unsigned l_603 = 0xCA32DB57L;
                    int *l_638 = &g_98;
                    int ***l_661 = &g_383;
                    (*l_594) &= func_39(p_7, l_603, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((*l_587), (g_189 & (l_608 & (((*l_587) > (*l_587)) & 1L))))), g_98)));
                    for (l_585 = 20; (l_585 < 46); ++l_585)
                    {
                        unsigned short l_628 = 0xB1CBL;
                        l_629 = (g_478 , (safe_div_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((((l_615 && g_364) , 2UL) || 4294967294UL) , (*p_6)), l_628)) , (*l_577)), 247UL)));
                    }
                    (*l_587) = (((safe_sub_func_uint8_t_u_u(func_39(func_43(((*l_577) , (~(((safe_rshift_func_int16_t_s_u(0L, l_603)) > (g_226 && (safe_sub_func_int8_t_s_s((((*l_594) && 0UL) > 0xC1L), (func_39(func_8((((((void*)0 != l_638) < (*l_577)) , g_586) , 0xD025L), g_588, g_586), g_496, g_563) || (*l_594)))))) , (*l_638)))), (*l_577)), g_2, g_18), 0x54L)) == g_226) != l_627);
                    if (((void*)0 == l_639))
                    {
                        int l_647 = 0x845F3664L;
                        l_641 = l_640;
                        if (g_586)
                            goto lbl_642;
                        (*l_587) |= ((safe_mod_func_uint8_t_u_u((func_37((*l_638)) | g_364), (+0xCEL))) != ((safe_div_func_uint8_t_u_u(g_364, l_647)) < (safe_add_func_int32_t_s_s((*p_6), ((l_650 == &p_7) , 0L)))));
                        (*l_640) = func_39(((p_6 == (void*)0) , func_8(((l_638 != (((*p_6) == 0x8227EEC8L) , func_8(g_586, (*l_594), (!0L)))) & 0xBA0803C7L), g_364, (*l_577))), (*l_594), (*l_577));
                    }
                    else
                    {
                        unsigned char l_662 = 255UL;
                        l_662 &= (((safe_mod_func_int16_t_s_s((func_37(((safe_mod_func_int8_t_s_s(((~(safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_478, (4294967294UL | func_61((*l_641), func_43((safe_add_func_int16_t_s_s((*l_640), (g_18 > 65535UL))), g_295))))), 12))) , (*l_638)), 0xB1L)) , g_588)) | g_478), g_189)) , l_661) != l_639);
                        (*l_587) = (*l_594);
                    }
                }
                ++l_761;
            }
        }
        for (g_364 = (-17); (g_364 == 1); g_364 = safe_add_func_int8_t_s_s(g_364, 4))
        {
            int *l_766 = &g_18;
            l_766 = p_7;
        }
    }
    else
    {
        int l_767 = 0xAC74D192L;
        int **l_795 = (void*)0;
        int *l_836 = &g_588;
        int l_893 = 1L;
        int l_896 = 0x1E906697L;
        int l_910 = 0xEB83AAEBL;
        int l_1049 = 1L;
        int l_1094 = 1L;
        if (l_767)
        {
            int l_770 = 0L;
            unsigned char l_780 = 1UL;
            char l_797 = 1L;
            int ***l_802 = &l_794;
            int l_835 = (-5L);
            int l_873 = 7L;
            (*p_6) = (*p_6);
            (*p_6) = l_770;
            if (((g_496 <= (((safe_rshift_func_uint16_t_u_u(((g_232 > (safe_mod_func_uint16_t_u_u(g_483, (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((l_779 == (*l_577)), 13)), l_767))))) < ((*l_577) || (&l_733 != p_7))), 14)) , g_483) | l_770)) , 1L))
            {
                int **l_781 = &g_17;
                int l_828 = 0L;
                (*l_781) = func_43((*l_577), l_780);
lbl_823:
                if ((safe_div_func_int32_t_s_s(((l_780 | ((safe_add_func_int32_t_s_s((*p_6), ((*l_577) , ((((**l_781) , (l_780 ^ ((~(safe_rshift_func_int8_t_s_u(g_232, 0))) , (safe_div_func_uint32_t_u_u((func_37(g_226) != (*l_577)), (*p_6)))))) , l_767) , g_586)))) || 1L)) >= g_586), 0xCE15A026L)))
                {
                    int l_798 = 0L;
                    int ***l_799 = (void*)0;
                    (*l_577) ^= ((~(safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u(g_496, 4)) ^ (g_204 | (((((l_794 != l_795) , (l_780 , ((0x3CF56FD6L & func_39((g_796 , func_43(g_2, (**l_781))), l_797, l_798)) , g_478))) <= 0xD933L) && (*g_17)) > g_364))) , (void*)0) == l_799), g_204))) , 0x89FBC3DDL);
                    if (g_496)
                        goto lbl_823;
                }
                else
                {
                    int l_821 = 0xACE100B6L;
                    unsigned short l_822 = 0UL;
                    for (l_626 = 0; (l_626 == 14); l_626 = safe_add_func_uint8_t_u_u(l_626, 5))
                    {
                        (**l_794) = (g_2 && (-1L));
                        (*g_17) = ((0xA4EEL & ((l_802 == &g_383) == ((*p_6) != (*p_7)))) || (safe_lshift_func_int8_t_s_u((**l_781), 7)));
                    }
                    (*p_7) |= (safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((-1L), func_39(&g_98, ((**l_794) != ((safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((((((safe_sub_func_uint16_t_u_u((g_483 != g_478), g_483)) ^ (safe_mod_func_int32_t_s_s((func_37(l_821) != l_821), (-7L)))) >= 0L) , p_7) == (**l_802)), l_822)) | 0UL) | g_98), 2)) != 9L), (*p_6))) ^ 0x2322D9C9L)), (**l_794)))) , p_6) == (void*)0), g_226));
                }
                (**l_802) = func_19((((-3L) < (***l_802)) || (*p_7)), func_43(((safe_div_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((func_37((*l_577)) < 0x5EL) , ((**l_781) != ((((**l_781) , p_7) == (void*)0) && (*p_7)))), g_588)) ^ g_586), l_828)) < (***l_802)), (***l_802)));
                l_835 ^= (!(safe_sub_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((-7L), (*l_577))) , 1L) < 0x786727EAL), ((safe_add_func_int8_t_s_s((***l_802), func_39((*l_781), (**l_794), ((((p_6 == p_7) & 0xFC32L) ^ 0UL) > g_588)))) | 0x5CD0L))));
            }
            else
            {
                (*l_577) = ((***l_802) >= ((func_37(g_98) & g_496) != l_767));
                (*l_794) = p_7;
                return l_836;
            }
            for (g_496 = (-21); (g_496 != 20); ++g_496)
            {
                int l_841 = (-1L);
                int l_866 = 5L;
                int l_883 = 0x926B2A16L;
                char l_935 = 0xFDL;
                (*p_6) = (g_226 && (&g_383 != &l_794));
                if ((safe_lshift_func_int16_t_s_s(l_841, 13)))
                {
                    int *l_842 = &l_835;
                    int *l_843 = &g_563;
                    int *l_844 = &l_744;
                    int *l_845 = (void*)0;
                    int *l_846 = &l_733;
                    int *l_847 = (void*)0;
                    int *l_848 = &l_733;
                    int *l_849 = (void*)0;
                    int *l_850 = &g_232;
                    int *l_851 = &g_18;
                    int *l_852 = (void*)0;
                    int *l_853 = (void*)0;
                    int *l_854 = &l_696;
                    int *l_855 = (void*)0;
                    int *l_856 = &l_835;
                    int *l_857 = &g_232;
                    int *l_858 = &g_563;
                    int *l_859 = (void*)0;
                    int *l_860 = &l_835;
                    int *l_861 = &g_98;
                    int *l_862 = &l_688;
                    int *l_863 = &l_696;
                    int *l_864 = &g_232;
                    int *l_865 = &l_688;
                    int *l_867 = &l_696;
                    int *l_868 = &g_588;
                    int *l_869 = &g_98;
                    int *l_870 = &l_688;
                    int *l_871 = &l_696;
                    int *l_872 = &g_98;
                    int *l_874 = &g_588;
                    int *l_875 = &l_767;
                    int *l_876 = &l_866;
                    int *l_877 = &l_767;
                    int *l_878 = (void*)0;
                    int *l_879 = &l_688;
                    int *l_880 = (void*)0;
                    int *l_881 = &l_688;
                    int *l_882 = &l_688;
                    int *l_884 = (void*)0;
                    int *l_885 = &l_733;
                    int *l_886 = (void*)0;
                    int *l_887 = &l_883;
                    int *l_888 = (void*)0;
                    int *l_889 = &g_98;
                    int *l_890 = &l_873;
                    int *l_891 = &g_18;
                    int *l_892 = &l_873;
                    int *l_894 = &l_866;
                    int *l_895 = &l_835;
                    int *l_897 = &l_883;
                    int *l_898 = &l_893;
                    int *l_899 = &g_98;
                    int *l_900 = (void*)0;
                    int *l_901 = &g_232;
                    int *l_902 = &g_588;
                    int *l_903 = (void*)0;
                    int *l_904 = &l_767;
                    int *l_905 = &l_873;
                    int *l_906 = &l_688;
                    int *l_907 = (void*)0;
                    int *l_908 = &l_744;
                    int *l_909 = &l_688;
                    int l_911 = 3L;
                    int *l_912 = &l_688;
                    int *l_913 = &g_18;
                    int *l_914 = (void*)0;
                    int *l_915 = (void*)0;
                    int *l_916 = &l_688;
                    int *l_917 = (void*)0;
                    int *l_918 = (void*)0;
                    int *l_919 = &g_18;
                    int *l_920 = &l_910;
                    int *l_921 = &g_563;
                    unsigned short l_922 = 65535UL;
                    if ((*p_6))
                        break;
                    ++l_922;
                    (*l_895) ^= 8L;
                    if (l_883)
                        break;
                }
                else
                {
                    short l_925 = 1L;
                    if (((l_925 && 5L) <= func_37((*l_836))))
                    {
                        char l_934 = 0x7AL;
                        (*l_794) = ((~(safe_lshift_func_uint8_t_u_u(l_866, 4))) , ((safe_div_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((+((safe_sub_func_int16_t_s_s(((void*)0 != &g_383), ((void*)0 == &g_17))) <= ((*g_17) , l_934))) || (*l_836)), func_39(func_8(l_925, l_935, l_934), g_295, l_934))), g_588)) , p_6));
                        if (l_883)
                            continue;
                        (*l_794) = p_6;
                        return p_7;
                    }
                    else
                    {
                        (**l_802) = func_43((*l_577), (safe_add_func_int8_t_s_s((l_866 > ((void*)0 == &g_588)), g_2)));
                    }
                    (*l_836) = ((safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((***l_802), (safe_div_func_int32_t_s_s((safe_div_func_uint16_t_u_u(((!(((g_232 ^ (*p_6)) & (((((0xDF82A035L == (((((~((((g_563 , (func_39(func_8(func_39((*l_794), (*l_836), (((((((***l_802) | (((***l_802) ^ g_483) && (-7L))) <= g_483) <= 1L) == 5L) != 0UL) <= (*l_836))), l_925, g_796), (**l_794), (***l_802)) , g_483)) , &g_383) == &g_383) < 0x48L)) != 1L) , (*l_577)) | 65529UL) , (*p_7))) , l_925) , l_841) < g_478) <= (*g_17))) ^ (**l_794))) ^ g_563), g_563)), (*g_17))))), g_2)) , (-10L));
                    return p_7;
                }
            }
        }
        else
        {
            unsigned char l_961 = 0xEFL;
            int *l_964 = &l_896;
            int *l_965 = &l_696;
            int *l_966 = (void*)0;
            int *l_967 = &l_744;
            int *l_968 = &g_232;
            int *l_969 = &l_696;
            int *l_970 = &l_688;
            int *l_971 = (void*)0;
            int *l_972 = (void*)0;
            int *l_973 = &l_733;
            int *l_974 = &l_896;
            int *l_975 = (void*)0;
            int *l_976 = &l_893;
            int *l_977 = &g_588;
            int *l_978 = &g_98;
            int *l_979 = &l_696;
            int *l_980 = &g_98;
            int *l_981 = (void*)0;
            int *l_982 = &l_896;
            int *l_983 = &g_588;
            int *l_984 = (void*)0;
            int *l_985 = (void*)0;
            int *l_986 = &g_98;
            int *l_987 = &l_910;
            int *l_988 = &l_767;
            int *l_989 = &l_896;
            short l_990 = 0L;
            int *l_991 = &l_733;
            int *l_992 = &g_232;
            int *l_993 = &l_893;
            int *l_994 = (void*)0;
            int l_995 = 6L;
            int *l_996 = (void*)0;
            int *l_997 = (void*)0;
            int *l_998 = &l_896;
            int *l_1000 = &l_733;
            int *l_1001 = &l_688;
            int *l_1002 = (void*)0;
            int *l_1003 = &l_688;
            int *l_1004 = &l_688;
            int *l_1005 = &l_696;
            int *l_1006 = &g_563;
            int *l_1007 = &g_18;
            int *l_1008 = &l_696;
            int *l_1009 = &g_588;
            int *l_1010 = &l_696;
            int *l_1011 = &g_563;
            int *l_1012 = &g_18;
            int *l_1013 = &l_995;
            int *l_1014 = &l_767;
            int *l_1015 = (void*)0;
            int *l_1016 = &l_896;
            int *l_1017 = (void*)0;
            int *l_1018 = &l_896;
            int *l_1019 = &g_588;
            int *l_1020 = (void*)0;
            int *l_1021 = &l_995;
            int *l_1022 = &l_696;
            int *l_1023 = &g_98;
            int *l_1024 = &g_98;
            int *l_1025 = &l_995;
            int *l_1026 = &l_910;
            int *l_1027 = (void*)0;
            int *l_1028 = &l_896;
            int *l_1029 = &l_767;
            int *l_1030 = &l_767;
            int l_1031 = 0x1A6A53C3L;
            int *l_1032 = &g_18;
            int *l_1034 = &l_896;
            int *l_1035 = &g_563;
            int *l_1036 = &g_232;
            int l_1039 = 7L;
            int *l_1040 = &g_563;
            int *l_1041 = &g_18;
            int *l_1042 = &l_767;
            int *l_1043 = &l_896;
            int *l_1044 = &l_896;
            int *l_1045 = &l_910;
            int *l_1046 = &l_910;
            int *l_1047 = &g_98;
            int *l_1048 = &g_1037;
            int *l_1051 = &g_1037;
            int *l_1052 = &g_18;
            int *l_1053 = (void*)0;
            int *l_1054 = &l_1031;
            int *l_1055 = &l_1031;
            int *l_1056 = &l_1038;
            int *l_1057 = (void*)0;
            int *l_1058 = (void*)0;
            int *l_1059 = &g_98;
            int *l_1060 = &l_910;
            int *l_1061 = &l_1038;
            int *l_1062 = &l_1049;
            int *l_1063 = &g_588;
            int *l_1064 = &g_588;
            int *l_1065 = &l_896;
            int *l_1066 = &l_999;
            int *l_1067 = &l_995;
            int *l_1068 = &l_1049;
            int *l_1069 = &g_232;
            int *l_1070 = &l_1031;
            int *l_1071 = &l_733;
            int l_1072 = (-1L);
            int *l_1074 = &l_910;
            int *l_1076 = &l_1075;
            int l_1077 = (-6L);
            int *l_1078 = &l_1038;
            short l_1093 = 1L;
            (*l_836) = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_577) < (l_954 == &l_795)), (safe_div_func_int8_t_s_s(((g_496 ^ ((safe_sub_func_uint16_t_u_u(((&p_6 == (void*)0) , (safe_lshift_func_uint8_t_u_s(l_961, 2))), (safe_sub_func_uint32_t_u_u(l_961, g_483)))) && (**l_794))) , 0x5DL), 249UL)))), 0x9D2CL)) , (*p_7));
            ++g_1080;
            (*l_1046) = ((0UL >= (((void*)0 == &g_383) , g_1083)) ^ ((+(safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s(8L)), (((!(((safe_div_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((func_39((*l_794), l_1093, g_226) <= 1L) | (*l_836)), g_563)), (*l_577))), g_563)) , (void*)0) == (void*)0)) && g_1079) != (*p_7))))) ^ (*g_17)));
        }
        (*p_7) = l_1094;
        for (l_767 = 0; (l_767 >= 2); l_767++)
        {
            int ***l_1100 = (void*)0;
            for (l_999 = 0; (l_999 <= 17); ++l_999)
            {
                unsigned l_1099 = 0UL;
                l_1099 ^= (*p_6);
                (*p_6) = func_61(((l_1100 != (g_189 , &g_383)) | ((void*)0 != p_7)), ((*g_17) , p_7));
                (*l_794) = &g_588;
            }
            for (g_1050 = 23; (g_1050 < 20); g_1050 = safe_sub_func_int32_t_s_s(g_1050, 7))
            {
                return p_6;
            }
        }
    }
    return p_7;
}







static int * func_8(unsigned short p_9, char p_10, short p_11)
{
    int l_561 = (-1L);
    l_561 = (*g_17);
    return &g_98;
}







static short func_13(unsigned short p_14)
{
    int l_22 = 0xDDAC0FAAL;
    int *l_23 = &g_18;
    int **l_333 = (void*)0;
    int **l_334 = &l_23;
    int l_362 = 0x92D5F5ADL;
    int **l_409 = &l_23;
    (*l_334) = func_19(l_22, l_23);
    (*l_334) = (*l_334);
    for (g_204 = (-20); (g_204 >= 9); g_204++)
    {
        int *l_337 = &g_232;
        int *l_338 = &g_232;
        int *l_339 = &g_232;
        int *l_340 = (void*)0;
        int *l_341 = &g_232;
        int *l_342 = &g_232;
        int *l_343 = (void*)0;
        int *l_344 = &g_98;
        int *l_345 = (void*)0;
        int *l_346 = (void*)0;
        int *l_347 = &g_18;
        int *l_348 = &g_232;
        int *l_349 = &g_18;
        int *l_350 = &g_18;
        int *l_351 = &g_18;
        int *l_352 = &g_232;
        int *l_353 = &g_232;
        int *l_354 = &g_18;
        int *l_355 = &g_98;
        int *l_356 = &g_18;
        int *l_357 = &g_232;
        int *l_358 = &g_98;
        int *l_359 = (void*)0;
        int *l_360 = (void*)0;
        int *l_361 = &g_232;
        int l_363 = 0xDBB86844L;
        int ***l_373 = (void*)0;
        int l_378 = 0x70F3B883L;
        int l_456 = 0x4E90C986L;
        unsigned l_499 = 0x3236715AL;
        char l_517 = 1L;
        unsigned l_559 = 0xD05DC4E1L;
        g_364++;
        for (g_364 = (-18); (g_364 <= 57); ++g_364)
        {
            unsigned l_405 = 0UL;
            int l_413 = 0x23E24EC4L;
            int ***l_512 = &l_409;
            int *l_527 = &l_363;
            int *l_548 = (void*)0;
            unsigned char l_560 = 253UL;
            if ((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((g_295 > func_61(g_364, &g_18)), p_14)), (((void*)0 != l_373) <= p_14))))
            {
                int l_379 = 0x905E24F5L;
                int ***l_384 = &l_333;
                int l_410 = 0x78ED7A29L;
                (*l_337) = ((((((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(p_14, l_378)) , l_379), (((safe_add_func_int32_t_s_s((g_382 != (g_98 , l_384)), p_14)) != g_364) , (*l_347)))) == g_295) == g_2) && 0UL) && 0L) , p_14);
                if (((safe_mod_func_uint32_t_u_u(((*l_23) < g_18), (p_14 , (safe_rshift_func_int16_t_s_u(func_39((*l_334), g_226, p_14), 1))))) > (((safe_div_func_uint32_t_u_u((p_14 , g_232), g_189)) ^ p_14) >= 0xCBBADCDCL)))
                {
                    (*l_338) = (-1L);
                    if ((safe_lshift_func_uint8_t_u_s(p_14, 6)))
                    {
                        if ((**l_334))
                            break;
                    }
                    else
                    {
                        return p_14;
                    }
                    (*l_358) = (safe_lshift_func_uint16_t_u_s(p_14, 15));
                    for (g_18 = 28; (g_18 != 25); g_18 = safe_sub_func_int16_t_s_s(g_18, 9))
                    {
                        int **l_408 = &l_339;
                        (*l_409) = func_43((g_232 & (*l_353)), (safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(6L, 5)), p_14)), (safe_mod_func_uint8_t_u_u((l_405 != p_14), ((l_405 , (safe_add_func_uint16_t_u_u(((((l_408 == l_409) && p_14) , 0xC5L) >= 0UL), p_14))) , g_226))))));
                    }
                }
                else
                {
                    (*l_339) = l_410;
                    if ((*g_17))
                        break;
                    return p_14;
                }
            }
            else
            {
                unsigned l_424 = 0xA1D25D30L;
                int l_472 = 0x6B8CC406L;
                int **l_511 = &l_350;
                for (g_295 = 12; (g_295 < 32); g_295++)
                {
                    (*l_353) = (0L && 3UL);
                    l_413 = 0x06EC75F0L;
                }
                (**l_334) = (safe_mod_func_int16_t_s_s((((safe_div_func_int8_t_s_s((((void*)0 == &g_98) ^ ((((safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(((void*)0 != &l_23), 11)) , ((p_14 != l_424) , ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((255UL >= (safe_sub_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((*g_382) == (*g_382)), 1L)) < p_14), g_295))), p_14)), (*l_350))), g_364)) , (*l_349)))) >= p_14) , p_14), p_14)), g_295)) > g_204) ^ g_2) != g_2)), g_2)) && l_424) , 7L), g_364));
                if ((*l_355))
                {
                    return (*l_347);
                }
                else
                {
                    unsigned l_437 = 0x9BE10EBCL;
                    int l_474 = 0L;
                    int l_485 = 0xADD1EA78L;
                    (*l_344) |= (((void*)0 == (*g_382)) , (((((safe_div_func_uint32_t_u_u(((-1L) >= (**l_334)), ((((l_437 > g_18) < (safe_rshift_func_uint16_t_u_u(p_14, (**l_409)))) != (safe_sub_func_int32_t_s_s(((((0x680CL != p_14) , p_14) , 0x9AL) , (-1L)), p_14))) , 4L))) || (*g_17)) , l_437) && p_14) & 0x14B6D742L));
                    (*l_355) = (g_98 >= (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(p_14, (l_437 <= ((g_189 && (func_61((*l_338), &l_413) & (safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(p_14, g_2)) < p_14), p_14)) != g_295), p_14)) > 65535UL), 0x38L)))) == p_14)))) < 0x6B03L), p_14)), l_456)));
                    for (l_363 = 6; (l_363 > (-19)); l_363--)
                    {
                        int **l_465 = &g_17;
                        unsigned short l_473 = 0xE25BL;
                        int *l_475 = &l_474;
                        int *l_476 = (void*)0;
                        int *l_477 = &g_232;
                        int *l_479 = &l_362;
                        int *l_480 = &g_18;
                        int *l_481 = &g_98;
                        int *l_482 = (void*)0;
                        int *l_484 = &l_362;
                        int *l_486 = &l_474;
                        int *l_487 = &g_232;
                        int *l_488 = &l_456;
                        int *l_489 = &l_456;
                        int *l_490 = (void*)0;
                        int *l_491 = &g_18;
                        int *l_492 = &g_232;
                        int *l_493 = &g_98;
                        int *l_494 = &g_98;
                        int *l_495 = &l_362;
                        (*l_355) |= (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u((((void*)0 == l_465) & g_2), (((0L || g_364) , (safe_rshift_func_uint16_t_u_u(g_232, p_14))) >= (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((p_14 || ((g_204 , (**l_465)) , g_204)), l_472)), (-5L)))))) == p_14) , p_14) , l_437), 0)) | l_473), (**l_465)));
                        --g_496;
                        l_499--;
                        (*l_341) ^= l_413;
                    }
                    l_474 ^= (safe_lshift_func_int8_t_s_u(func_61((safe_add_func_int16_t_s_s(((**l_334) , (safe_mod_func_uint8_t_u_u(func_39(&l_472, ((+((safe_unary_minus_func_uint8_t_u(p_14)) , l_437)) != (g_478 >= ((((((g_226 >= ((safe_rshift_func_int8_t_s_s((*l_23), 5)) ^ (((void*)0 != l_511) <= 1UL))) <= p_14) != (*l_341)) , l_512) == l_373) | g_2))), p_14), (**l_334)))), p_14)), &l_485), 5));
                }
                (**l_512) = (((((((**l_334) < ((safe_rshift_func_uint16_t_u_u(func_39((*l_409), (+((!((((-4L) >= 0x4BAC0C6FL) , ((g_204 | (((func_39(&l_456, ((((func_39((p_14 , func_43(((void*)0 != &l_23), g_364)), p_14, (*l_351)) == 0xFCL) < 0x7FL) != p_14) < (*l_348)), p_14) | 0x021AL) < g_295) & (*l_349))) ^ g_478)) , (***l_512))) & l_517)), g_483), p_14)) < g_204)) , g_295) , (*l_511)) == (*l_511)) != g_483) , (*l_511));
            }
            if (p_14)
            {
                int l_522 = 0L;
                if (p_14)
                    break;
                if (p_14)
                    continue;
                for (g_496 = 18; (g_496 > 30); g_496++)
                {
                    unsigned short l_528 = 0x551EL;
                    int *l_533 = &g_232;
                    for (l_517 = 2; (l_517 < 16); l_517 = safe_add_func_int32_t_s_s(l_517, 8))
                    {
                        if ((*l_338))
                            break;
                        (**l_512) = func_43((g_226 , l_522), p_14);
                    }
                    for (g_98 = 21; (g_98 == (-15)); g_98--)
                    {
                        (*l_357) = ((p_14 && ((0UL & 0x1607L) <= 4UL)) <= ((*g_382) == (*l_512)));
                        (**l_512) = func_43(((((*l_355) ^ func_39(l_527, l_528, g_483)) || p_14) ^ (g_98 >= (-10L))), g_98);
                    }
                }
                (*l_357) = ((*l_527) | (((*g_382) != (void*)0) >= (p_14 <= 0x693E4D5CL)));
            }
            else
            {
                int *l_545 = &g_18;
                int l_549 = 0x004FE344L;
                unsigned short l_556 = 0x4287L;
                (*l_527) |= (((((((l_545 == (**l_512)) ^ (g_295 < ((((((void*)0 == (*l_512)) <= ((p_14 , (safe_div_func_int16_t_s_s(((((void*)0 == &g_232) & ((p_14 | 0x47L) || 0xE44C7B63L)) , g_18), (*l_545)))) , p_14)) & l_549) == g_204) == g_232))) & g_98) , g_204) ^ g_18) != 7L) & (*g_17));
                (*g_382) = &l_23;
                (*l_352) |= (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(0x8EL, ((p_14 | (((func_61(l_556, (**g_382)) & (safe_rshift_func_int16_t_s_u((((p_14 , 7L) , p_14) != l_559), 12))) , p_14) >= l_560)) , 253UL))), p_14));
            }
            if ((*g_17))
                break;
        }
    }
    (*g_17) |= ((0x45A46EA1L < p_14) , 9L);
    return g_364;
}







static int * func_19(unsigned p_20, int * p_21)
{
    int *l_34 = &g_18;
    char l_332 = 0xD3L;
    (*g_17) ^= 0xBDAE4F9DL;
    (*l_34) = ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((((void*)0 != l_34) , (1L <= ((*l_34) || (((((void*)0 == p_21) , (safe_add_func_int16_t_s_s((p_21 != (func_37(p_20) , (void*)0)), 0L))) && l_332) , (*l_34))))) >= 0xF7L) != g_2), g_295)), g_189)), 6L)) == 0x0A30L) , l_34) == p_21), 7UL)), 4294967295UL)) & g_189);
    return l_34;
}







static unsigned char func_37(unsigned p_38)
{
    int l_46 = 0xD8F3B1ADL;
    int *l_64 = &g_18;
    int *l_331 = &g_232;
    (*l_331) |= func_39(func_43((4294967290UL || (l_46 == (safe_sub_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(252UL, ((((l_46 && ((((safe_mod_func_uint16_t_u_u(65529UL, (p_38 , (l_46 , func_55((safe_sub_func_uint8_t_u_u(func_61((g_2 , 0x6354L), l_64), g_98)), g_98, p_38))))) & p_38) & p_38) & g_189)) < g_2) , p_38) < 0xE7L))) != 0UL), g_189)) != p_38), p_38)))), g_98), p_38, p_38);
    return p_38;
}







static int func_39(int * p_40, unsigned char p_41, short p_42)
{
    unsigned short l_225 = 0xF21AL;
    unsigned short l_230 = 65529UL;
    int l_276 = 0xF6452D96L;
    int l_281 = 0L;
    int l_283 = 0xD95FF6E7L;
    int **l_303 = &g_17;
    int ***l_302 = &l_303;
    int l_310 = (-3L);
    return (*p_40);
}







static int * func_43(short p_44, char p_45)
{
    int *l_207 = &g_18;
    int **l_208 = &g_17;
    (*l_208) = l_207;
    return (*l_208);
}







static short func_55(short p_56, unsigned p_57, unsigned short p_58)
{
    int **l_140 = &g_17;
    int ***l_139 = &l_140;
    int l_153 = 0xFA10622CL;
    int l_154 = (-10L);
    int *l_155 = &g_18;
    int *l_156 = (void*)0;
    int *l_157 = &g_18;
    int *l_158 = &l_154;
    int *l_159 = &g_18;
    int *l_160 = (void*)0;
    int *l_161 = &g_98;
    int *l_162 = (void*)0;
    int *l_163 = (void*)0;
    int *l_164 = &g_98;
    int *l_165 = &l_154;
    int l_166 = 0x5F59DF16L;
    int *l_167 = (void*)0;
    int *l_168 = &g_18;
    int *l_169 = &l_154;
    int *l_170 = &g_98;
    int *l_171 = &g_18;
    int *l_172 = &g_18;
    int l_173 = 1L;
    int *l_174 = &g_18;
    int *l_175 = &l_173;
    int *l_176 = &l_154;
    int *l_177 = &g_98;
    int *l_178 = &g_98;
    int *l_179 = &l_154;
    int *l_180 = &l_154;
    int *l_181 = &l_154;
    int *l_182 = &l_166;
    int *l_183 = &g_98;
    int *l_184 = (void*)0;
    int *l_185 = (void*)0;
    int *l_186 = (void*)0;
    int l_187 = 7L;
    int *l_188 = (void*)0;
    int *l_190 = &l_187;
    int *l_191 = &g_18;
    int l_192 = (-6L);
    int *l_193 = (void*)0;
    int l_194 = 0xE8D0C3C1L;
    int *l_195 = &g_18;
    int *l_196 = (void*)0;
    int *l_197 = &l_194;
    int l_198 = 0x3D22307AL;
    int *l_199 = &l_198;
    int l_200 = 0x1BE2ED98L;
    int *l_201 = &l_198;
    int *l_202 = &l_198;
    int *l_203 = &l_173;
    for (p_57 = 12; (p_57 == 1); p_57 = safe_sub_func_int8_t_s_s(p_57, 4))
    {
        int *l_137 = &g_98;
        int **l_138 = &g_17;
        (*l_138) = l_137;
        return p_56;
    }
    (***l_139) = ((&g_17 != (((~(((void*)0 == l_139) == 0x1251L)) < (safe_rshift_func_uint16_t_u_u(((1L < (g_18 || p_57)) | g_2), (0UL ^ g_18)))) , (*l_139))) < p_58);
    l_154 ^= (((((((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_57 , (((g_2 , ((((safe_div_func_uint8_t_u_u(((void*)0 == (*l_139)), (safe_rshift_func_int8_t_s_s((p_56 , (**l_140)), 0)))) | ((***l_139) & ((***l_139) | ((***l_139) < (**l_140))))) , g_18) , g_2)) < (**l_140)) , (***l_139))), 11)), p_58)) | (**l_140)) > (**l_140)), l_153)) != 0xD1B0L) > (-7L)) > 4294967287UL) , g_2) , (void*)0) != (*l_139));
    g_204--;
    return (*l_195);
}







static unsigned char func_61(short p_62, int * p_63)
{
    short l_67 = 0x7B09L;
    int *l_99 = &g_18;
    int *l_100 = &g_98;
    (*p_63) = (*p_63);
    for (g_18 = 0; (g_18 == 16); g_18 = safe_add_func_uint8_t_u_u(g_18, 9))
    {
        int l_74 = 1L;
        unsigned l_83 = 0x3317A7F3L;
        int *l_88 = &g_18;
        unsigned char l_108 = 0x31L;
        char l_126 = 0x73L;
    }
    return (*l_100);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_563, "g_563", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_588, "g_588", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_1033, "g_1033", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1073, "g_1073", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1080, "g_1080", print_hash_value);
    transparent_crc(g_1083, "g_1083", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
