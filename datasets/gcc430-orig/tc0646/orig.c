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



static unsigned short g_2 = 0xA4A9L;
static int g_47 = 3L;
static char g_49 = 0L;
static const int g_67 = 7L;
static const int *g_66 = &g_67;
static unsigned short g_74 = 0x219FL;
static char g_78 = 0x23L;
static char *g_77 = &g_78;
static int g_87 = 8L;
static unsigned short g_95 = 65535UL;
static unsigned char g_102 = 1UL;
static short g_109 = 0xCB58L;
static unsigned g_113 = 0UL;
static unsigned short g_115 = 1UL;
static int *g_157 = &g_47;
static unsigned *g_237 = &g_113;
static unsigned **g_236 = &g_237;
static const unsigned g_242 = 4294967289UL;
static short g_248 = 0xD59BL;
static unsigned char g_318 = 1UL;
static unsigned char g_373 = 8UL;
static unsigned char g_374 = 0xD6L;
static unsigned g_378 = 1UL;
static unsigned short g_380 = 0xF0FCL;
static const short g_405 = 0x5558L;
static int g_450 = 0L;
static const unsigned g_490 = 0x19D1B5B6L;
static const char *g_492 = &g_49;
static const char **g_491 = &g_492;
static unsigned g_521 = 0x130E1A92L;
static short g_540 = 0x5DB8L;
static short *g_573 = (void*)0;
static short **g_572 = &g_573;
static int **g_594 = &g_157;
static unsigned short g_630 = 4UL;
static const int g_741 = 0L;
static const int *g_740 = &g_741;
static char g_826 = 0x3DL;
static int g_830 = (-1L);
static int *g_865 = (void*)0;
static unsigned short *g_921 = (void*)0;
static unsigned short **g_920 = &g_921;
static unsigned char g_944 = 0xE9L;
static int g_953 = 0x1662F0B4L;
static unsigned char *g_995 = &g_944;
static unsigned char **g_994 = &g_995;
static unsigned short g_1078 = 65530UL;
static int g_1079 = 0x1FA3BF0AL;
static unsigned g_1086 = 0xD9510ADDL;
static const unsigned *g_1134 = &g_1086;
static const unsigned ** const g_1133 = &g_1134;
static short g_1195 = 0L;



static int func_1(void);
static int func_3(unsigned p_4, int p_5, unsigned p_6, unsigned p_7, int p_8);
static unsigned func_10(unsigned char p_11, short p_12);
static unsigned func_16(unsigned p_17, unsigned p_18);
static unsigned short func_19(char p_20);
static const unsigned char func_28(unsigned short p_29);
static int func_35(unsigned short p_36);
static int func_39(int p_40, unsigned char p_41, char p_42);
static short func_56(unsigned short p_57, char p_58, unsigned p_59, int p_60);
static unsigned func_63(const int * p_64, unsigned p_65);
static int func_1(void)
{
    char l_9 = (-3L);
    unsigned char *l_819 = (void*)0;
    char l_834 = 0xCBL;
    const char *l_840 = &g_826;
    unsigned **l_845 = (void*)0;
    int l_949 = 7L;
    int l_961 = (-2L);
    int l_989 = 0x5619D258L;
    unsigned l_1041 = 0x49D25A5CL;
    int *l_1043 = &l_961;
    int l_1061 = 0xEE65E15EL;
    short l_1094 = 0x4D40L;
    unsigned *l_1110 = &g_1086;
    unsigned **l_1109 = &l_1110;
    unsigned ***l_1108 = &l_1109;
    int **l_1132 = &g_157;
    unsigned l_1150 = 0x08F5CA3DL;
    unsigned l_1154 = 1UL;
    int l_1180 = 0x36923702L;
    unsigned l_1187 = 4294967294UL;
    int l_1219 = 0xE884469CL;
    if (g_2)
    {
        unsigned char l_15 = 246UL;
        int l_21 = 0x813A3DBCL;
        unsigned char *l_561 = &g_374;
        int *l_809 = (void*)0;
        int *l_810 = &g_47;
        short *l_811 = &g_248;
        short **l_812 = &l_811;
        char *l_822 = &g_78;
        unsigned l_825 = 3UL;
        unsigned short *l_827 = &g_74;
        unsigned short *l_828 = &g_115;
        int *l_829 = &g_830;
        int *** const l_831 = (void*)0;
        int l_962 = 0xCDEC68C8L;
        short l_979 = 0x4E7BL;
        int ***l_1048 = (void*)0;
        unsigned l_1064 = 4294967295UL;
        (*l_810) = ((!func_3(g_2, l_9, func_10(((*l_561) ^= (safe_mod_func_uint32_t_u_u((l_15 , func_16(l_15, (0x7F45L != func_19(l_21)))), l_9))), l_9), g_67, l_21)) >= l_9);

        ;
        ;

        ;
        if (((*l_810) = (((**g_236) ^= (l_9 | (((*l_812) = ((*g_572) = l_811)) != (g_380 , &g_248)))) == (*g_740))))
        {
            unsigned char l_816 = 4UL;
            int l_818 = 0x663AAF7CL;
            for (l_15 = 0; (l_15 > 21); l_15++)
            {
                unsigned l_815 = 0xC5FBA8B8L;
                int l_817 = 1L;
                l_816 = (l_815 &= (*g_66));
                l_817 &= (*g_740);
            }
            return l_818;
        }
        else
        {
            (*l_810) = 0x2F9DAE9EL;
            (*l_810) = (+(*g_740));
        }

        ;
        (*l_829) &= (+(func_3((l_819 == (((*g_573) | ((*l_828) ^= ((*l_827) = ((safe_sub_func_int8_t_s_s((**g_491), g_490)) & (((l_9 != ((l_825 && g_826) < l_9)) , (**g_236)) >= l_9))))) , (void*)0)), g_490, (**g_236), l_9, (*g_66)) <= (*g_740)));
        if (l_9)
        {
            int l_837 = (-9L);
            const int *l_927 = &g_87;
            unsigned short *l_958 = &g_95;
            unsigned char **l_996 = (void*)0;
            if ((l_831 != (((safe_mod_func_uint16_t_u_u(l_834, (safe_add_func_uint32_t_u_u(l_837, (((*l_561) ^= g_378) ^ (((safe_sub_func_uint32_t_u_u(0xF46723C4L, ((((void*)0 != &l_837) , l_840) == (*g_491)))) == 0x748E1CA3L) != (*g_740))))))) ^ (-1L)) , &g_594)))
            {
                int l_849 = (-1L);
                int l_850 = 0x473FA19FL;
                int l_852 = 0x1590D81DL;
                for (g_102 = 16; (g_102 <= 26); g_102++)
                {
                    unsigned char l_851 = 0UL;
                    unsigned *l_853 = &l_825;
                    int **l_854 = &l_809;
                    g_740 = ((*l_854) = (((*l_853) = ((**g_236) = (safe_rshift_func_uint8_t_u_u(((((6UL == ((func_56(g_830, l_837, (l_845 != ((safe_unary_minus_func_uint32_t_u((*l_829))) , &g_237)), (!(safe_mul_func_int16_t_s_s(0xF5F2L, func_56(g_67, (l_850 = (l_849 = ((*l_822) = (*g_492)))), (*g_237), l_851))))) ^ g_2) == 0x3BL)) == (*l_810)) , (**g_491)) == g_109), l_852)))) , l_853));

                    ;
                    ;
                    (*l_810) = (+l_837);
                }

                ;
                ;
                if (l_850)
                {
                    unsigned short l_858 = 0UL;
                    unsigned *l_875 = &l_825;
                    unsigned **l_874 = &l_875;
                    int l_878 = 0x95D3262BL;
                    int *l_879 = &l_852;
                    for (g_374 = (-12); (g_374 != 56); g_374 = safe_add_func_uint32_t_u_u(g_374, 6))
                    {
                        int **l_857 = &l_829;
                        (*l_829) ^= l_852;
                        (*l_857) = &g_450;

                        ;
                        if (l_858)
                            break;
                    }

                    ;
                    (*l_879) &= ((safe_div_func_int16_t_s_s((*l_829), g_74)) != (safe_div_func_uint32_t_u_u(((**g_236) = 4294967291UL), (safe_mod_func_uint32_t_u_u((g_865 == (void*)0), (safe_add_func_uint32_t_u_u((+func_56(((*l_828) = l_837), ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((*l_874) = (void*)0) == (((l_878 = (safe_sub_func_int16_t_s_s((*l_810), g_102))) | g_87) , (void*)0)), 0)), l_858)), l_837)) , l_837), l_9, l_850)), g_378)))))));

                    ;
                }
                else
                {
                    short l_902 = 0x2957L;
                    int *l_903 = (void*)0;
                    int *l_904 = &l_849;
                    int l_914 = (-8L);
                    l_837 = ((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((+l_849) , ((safe_lshift_func_int16_t_s_s((((*l_827) = ((safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((void*)0 == &g_573), ((**g_572) || (+(((*l_904) = (safe_sub_func_int32_t_s_s((l_850 | 0xEC16L), l_902))) , l_902))))), 8UL)) , 0UL)) & l_837), 4)) != 0UL)) , g_630), (*g_492))), 0x8EL)) | g_109);
                    for (g_113 = 15; (g_113 < 38); g_113++)
                    {
                        unsigned l_913 = 0xAEA73062L;
                        (*l_829) = func_16(((*g_740) >= (*g_66)), ((g_109 , ((safe_mul_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((l_837 , (**g_236)), 4294967295UL)) , (safe_rshift_func_uint16_t_u_u(g_74, 6))) ^ ((l_914 = l_913) , (safe_rshift_func_int8_t_s_s(((g_78 , l_902) , (-1L)), 3)))), g_115)) <= l_913)) && (**g_236)));
                        if (l_913)
                            break;
                    }
                    (*l_829) = 1L;
                }

                ;
                for (g_2 = 0; (g_2 >= 48); g_2 = safe_add_func_int32_t_s_s(g_2, 2))
                {
                    int **l_919 = &g_157;
                    (*l_919) = &l_837;

                    ;
                }


                return l_852;



            }
            else
            {
                unsigned short ***l_922 = &g_920;
                int l_941 = (-1L);
                int *l_942 = (void*)0;
                int *l_943 = &l_21;
                unsigned char *l_947 = (void*)0;
                unsigned char *l_948 = &g_102;
                unsigned *l_950 = &g_521;
                (*l_922) = g_920;
                for (g_74 = 9; (g_74 != 16); g_74++)
                {
                    int **l_929 = (void*)0;
                    int **l_930 = &l_809;
                    for (l_9 = 0; (l_9 >= (-13)); l_9 = safe_sub_func_int8_t_s_s(l_9, 1))
                    {
                        const int **l_928 = &g_740;
                        (*l_928) = l_927;

                        ;
                        (*l_810) ^= (5L >= ((**g_236) |= (*l_829)));
                    }
                    (*l_930) = &l_837;

                    ;
                    l_837 ^= ((*l_829) = (*g_66));
                }

                ;
                ;
                if ((((((*l_950) &= ((*g_237) = ((safe_div_func_int16_t_s_s(0L, ((*l_827) = (((*l_811) = (**g_572)) || ((safe_mod_func_int16_t_s_s((l_949 = ((**g_572) &= ((*l_829) >= func_56((((**g_236) = ((*g_740) ^ l_9)) , (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s((((((safe_mul_func_uint8_t_u_u(((*l_561) = ((*g_740) == l_834)), (((~((g_944 ^= ((*l_943) = l_941)) , (safe_div_func_int16_t_s_s(((!(~((*l_948) |= l_9))) <= g_741), 65535UL)))) >= (*l_927)) <= 0xB21CL))) ^ 0xBF47L) < (*g_740)) ^ (*l_810)) || l_9), (*g_66))), (*l_810)))), l_941, g_2, l_941)))), (*l_829))) <= 0xD988B545L))))) && 0x5221963BL))) , (void*)0) == (void*)0) > g_405))
                {
                    const int **l_951 = (void*)0;
                    const int **l_952 = &g_66;
                    (*l_952) = &g_67;

                    ;
                    (*l_952) = &l_941;

                    ;
                }
                else
                {
                    char l_959 = 1L;
                    int *l_960 = &l_837;
                    if ((g_953 & ((0xF3641B01L > func_16((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((l_958 == (((*g_492) , (l_959 && (*l_927))) , l_828)), (!((((*l_829) & (+((**g_572) || (*g_573)))) | l_959) , l_959)))), l_949)), l_941)) , (*l_927))))
                    {
                        g_157 = l_960;

                        ;
                    }
                    else
                    {
                        (*l_960) &= func_16((*g_237), func_16(l_941, g_490));
                    }


                }

                ;

            }



            ;
            ;
            if ((l_961 | (*g_573)))
            {
                int l_988 = 0x60DBEDF5L;
                l_989 |= (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_834, ((safe_sub_func_int16_t_s_s(l_961, (*g_573))) , ((*l_828) = (safe_div_func_int8_t_s_s(((((*l_829) &= l_979) , (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_949, ((*l_958) = 0xAEFAL))), (safe_add_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_811) |= l_988), 6)) , (0x0EBF2D96L & l_949)), 9UL))))) | g_49), 1UL)))))), 6));
                if (((**g_236) || (*g_740)))
                {
                    l_837 = (g_994 != l_996);
                    l_837 = 0x0B090413L;
                }
                else
                {
                    int l_997 = 3L;
                    return l_997;


                }
            }
            else
            {
                (*l_829) ^= 0xE7FBE01EL;
            }
        }
        else
        {
            int **l_998 = &l_809;
            unsigned **l_1016 = (void*)0;
            char *l_1044 = (void*)0;
            const int *l_1051 = &g_953;
            unsigned char l_1073 = 0x6BL;
            unsigned *l_1085 = &g_1086;
            unsigned * const *l_1084 = &l_1085;
            unsigned * const **l_1083 = &l_1084;
            (*l_998) = &g_87;

            ;
            for (g_450 = (-21); (g_450 > (-3)); ++g_450)
            {
                unsigned l_1013 = 18446744073709551609UL;
                unsigned l_1019 = 4294967295UL;
                int *l_1066 = &l_1061;
                int l_1080 = 0x72961192L;
                for (g_521 = (-10); (g_521 == 37); ++g_521)
                {
                    unsigned **l_1017 = &g_237;
                    const int **l_1018 = &g_66;
                    char **l_1045 = &g_77;
                    short l_1060 = 0xBA1DL;
                    unsigned *l_1081 = &l_1013;
                    (*l_809) = (((safe_lshift_func_int16_t_s_s(((*g_237) & (((+(safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_989 , (safe_div_func_int16_t_s_s((((*g_995) <= (l_1013 && (safe_add_func_int32_t_s_s(l_989, (l_1016 == l_1017))))) , (**g_572)), (**l_1018)))), (**g_572))), (**l_1018))), (*l_809)))) || (**l_1018)) , l_9)), (**g_572))) || (*l_809)) , l_1019);
                }
            }
            (*l_1083) = (void*)0;

            ;
            (*l_1043) = (*g_66);
        }


        ;

    }
    else
    {
        unsigned l_1093 = 0x1B65C219L;
        unsigned *l_1096 = &g_1086;
        unsigned **l_1095 = &l_1096;
        short l_1115 = 0xEDC3L;
        int l_1119 = (-9L);
        if ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((l_1094 &= (safe_mul_func_uint8_t_u_u(l_1093, (*l_1043)))), l_1093)), 6)))
        {
            unsigned short l_1117 = 0UL;
            unsigned ***l_1127 = &l_1109;
            if (((*l_1043) && ((void*)0 != l_1095)))
            {
                short l_1099 = 0x0F9CL;
                for (g_1079 = (-2); (g_1079 > (-5)); g_1079--)
                {
                    const short l_1116 = 0xCE1DL;
                    char *l_1118 = &g_826;
                    const char l_1120 = 0x89L;
                    int *l_1121 = &g_450;
                    (*l_1121) |= (((*l_1043) | (l_1099 <= ((safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((**g_491), 0)), (safe_div_func_int32_t_s_s(((**g_594) |= (((void*)0 == l_1108) & (*g_77))), (l_1119 |= ((safe_div_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((*l_1118) = (((l_1099 && func_56(l_1099, ((((((((*g_994) = (*g_994)) == &g_318) > (**g_236)) >= l_1115) , l_1116) > 0UL) , l_1117), (*l_1043), l_1117)) , (**g_994)) , l_1099)), l_1117)), (*l_1043))) < 0UL)))))), l_1120)) , l_1119))) && l_1120);
                    return (**g_594);
                }
                (*g_594) = (*g_594);
            }
            else
            {
                unsigned char l_1125 = 0xACL;
                int l_1129 = (-1L);
                for (l_1061 = 0; (l_1061 == 23); l_1061 = safe_add_func_int16_t_s_s(l_1061, 1))
                {
                    unsigned char l_1124 = 0UL;
                    l_1124 ^= l_1115;
                    if (((l_1125 = g_87) || 0xD98CL))
                    {
                        const unsigned l_1126 = 0x2D8845FFL;
                        unsigned ***l_1128 = (void*)0;
                        (*l_1043) = ((*g_995) && ((!g_953) , (l_1126 == ((l_1127 != l_1128) >= l_1125))));
                    }
                    else
                    {
                        (*g_594) = (void*)0;

                        ;
                        l_1129 = l_1125;
                    }
                    if (l_1129)
                        continue;
                    l_1119 = ((*l_1043) = ((void*)0 != (*l_1127)));
                }

                ;
                (*g_594) = &l_1119;

                ;
            }

            ;
            (*g_594) = (*g_594);
        }
        else
        {
            unsigned short l_1131 = 0xFCB4L;
            if ((*l_1043))
            {
                (*g_157) = (*g_66);
            }
            else
            {
                int *l_1130 = &g_47;
                (*g_594) = (*g_594);
                (*g_594) = l_1130;
            }
            return l_1131;
        }

        ;
    }


    ;

    ;
    ;
    ;
    (*l_1132) = &l_949;

    ;
    if ((g_1133 == &g_1134))
    {
        int l_1139 = 0xCF4092F4L;
        short l_1142 = 0x9468L;
        unsigned short *l_1145 = &g_380;
        unsigned *l_1151 = &g_521;
        char *l_1152 = &l_834;
        char *l_1153 = &g_78;
        unsigned short l_1173 = 0xD7ECL;
        (*g_157) = (safe_mul_func_uint8_t_u_u((*l_1043), ((*l_1043) > ((safe_add_func_int8_t_s_s(l_1142, (*g_995))) , (**l_1132)))));
        if ((((*l_1153) = ((*l_1152) ^= (g_826 ^= ((((safe_mod_func_int32_t_s_s(((**l_1132) ^= func_56(((*l_1145) = (*l_1043)), (*g_492), (safe_div_func_uint32_t_u_u(((*l_1151) ^= ((*g_237) | (*l_1043))), l_1142)), l_1142)), l_1139)) > 0x79324FACL) > (*l_1043)) < (**g_994))))) & l_1154))
        {
            return l_1142;


        }
        else
        {
            unsigned short ***l_1158 = &g_920;
            unsigned short ****l_1157 = &l_1158;
            short *l_1159 = (void*)0;
            short *l_1160 = &g_248;
            unsigned l_1161 = 0UL;
            int l_1172 = 0x64BE9706L;
            l_1172 &= (0x25D0L >= (((safe_lshift_func_int16_t_s_s(0xBE64L, (((*l_1160) = (((*l_1157) = (void*)0) == (void*)0)) & (l_1161 == (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((*g_157), (safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_1161, l_1142)), (((0x3FL < (*l_1043)) , 0x41533BF4L) , 65535UL))))) , (*l_1043)), 0x083AL)), 4)))))) != 0x15BDL) , (**l_1132)));

            ;
        }
        if (((**l_1132) = 9L))
        {
            (**l_1132) = (*g_157);
        }
        else
        {
            unsigned short **l_1185 = &l_1145;
            int l_1186 = 0x5D02F634L;
            (*l_1043) ^= l_1139;
            return (*g_740);


        }
    }
    else
    {
        short **l_1194 = &g_573;
        int * const l_1196 = &l_989;
        const int *l_1202 = &g_87;
        unsigned short l_1204 = 0UL;
        if ((&g_1079 == (void*)0))
        {
            short *l_1201 = &l_1094;
            int l_1203 = 0xB8F1F4B4L;
            unsigned char *l_1217 = &g_318;
            (*l_1043) = (safe_add_func_uint8_t_u_u(((*g_236) == (*g_236)), (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((l_1194 == (void*)0), g_1195)) , ((l_1196 != &g_830) , 1L)), 6))));
            (*l_1132) = (((safe_rshift_func_int16_t_s_u((**l_1132), 14)) && 0x7FF1E501L) , (*l_1132));
            (**l_1132) = l_1203;
        }
        else
        {
            char l_1218 = 0x7DL;
            (**l_1132) ^= (*l_1043);
            return l_1218;


        }
        (*l_1132) = &g_830;

        ;
        (*l_1132) = ((*l_1196) , (void*)0);

        ;
        (*l_1196) ^= (l_1219 || ((5UL ^ ((void*)0 != &g_573)) == 0x4AL));
    }

    ;
    return (*g_740);


}







static int func_3(unsigned p_4, int p_5, unsigned p_6, unsigned p_7, int p_8)
{
    int l_706 = 0x2877AAC8L;
    int l_720 = (-1L);
    unsigned *l_721 = &g_521;
    char *l_722 = &g_78;
    unsigned short *l_723 = &g_630;
    unsigned short l_805 = 0x69DAL;
    short l_808 = 0L;
    if ((p_5 ^ ((*l_723) = (((*l_722) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(func_16(l_706, (((*l_721) = ((*g_237) &= (p_5 | (p_8 ^ (safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((+((g_248 <= (safe_unary_minus_func_uint16_t_u(g_102))) , g_521)) || p_6), l_720)), 1L)))))) & l_720)), 5)), l_720))) || p_5))))
    {
        int *l_724 = &l_706;
        short *l_729 = (void*)0;
        int l_730 = 0x0E22A589L;
        const int **l_739 = &g_66;
        short *l_744 = &g_109;
        unsigned short l_747 = 0x3CB5L;
        l_724 = l_724;
        p_8 = (safe_rshift_func_uint16_t_u_s((((void*)0 != (*g_236)) == (safe_mul_func_int16_t_s_s(((*l_724) = (*l_724)), l_730))), ((safe_add_func_uint32_t_u_u(func_56((((l_720 ^ (safe_rshift_func_int16_t_s_s((p_4 > ((+(safe_sub_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_720, ((((**l_739) , (-10L)) < g_49) != p_8))) > p_8), 0x4C966BD1L))) , 0x838FL)), 5))) & g_374) != (*g_237)), p_4, p_4, l_720), 0x28C616ACL)) > 0x4CL)));
        (*l_724) = (safe_mod_func_int8_t_s_s(0x21L, (g_248 | (+((*l_724) <= ((l_729 = (void*)0) == (l_744 = (*g_572))))))));

        ;
        for (g_373 = 0; (g_373 < 32); g_373 = safe_add_func_uint16_t_u_u(g_373, 2))
        {
            short l_762 = 0xD5D9L;
            int l_782 = 0xF1F1DE72L;
            int *l_787 = &g_47;
            l_747 |= (p_5 & (p_8 , p_8));
        }
    }
    else
    {
        int *l_806 = (void*)0;
        int l_807 = 0L;
        l_720 = (safe_lshift_func_int16_t_s_u((+(safe_div_func_int16_t_s_s(8L, (l_720 | (((0L > p_4) < (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((l_805 <= (g_450 = p_6)), (p_4 <= ((*g_237) >= func_16((**g_236), p_4))))), 0x5F6CL))) >= 0UL))))), p_5));
        p_8 = 1L;
        l_720 &= l_807;
    }
    return l_808;
}







static unsigned func_10(unsigned char p_11, short p_12)
{
    unsigned char *l_563 = (void*)0;
    unsigned char **l_562 = &l_563;
    int l_564 = 0xC343ED73L;
    int l_565 = (-8L);
    short ***l_574 = (void*)0;
    short ***l_575 = (void*)0;
    short **l_577 = (void*)0;
    short ***l_576 = &l_577;
    const int l_578 = 0xAE3073F3L;
    int l_579 = (-1L);
    int l_580 = (-5L);
    int l_610 = 7L;
    unsigned short l_620 = 0x0125L;
    int l_663 = 0x0EACEDEEL;
    int *l_692 = &g_87;
    unsigned short *l_695 = &l_620;
    int *l_696 = &l_580;
    int *l_697 = &g_47;
    if ((((((*l_562) = &p_11) == ((l_565 &= (l_564 = (p_12 , l_564))) , (g_378 , &p_11))) < (p_11 >= 0x4A50148CL)) | g_49))
    {
        const int *l_581 = (void*)0;
        const int **l_582 = &l_581;
        int l_583 = 1L;
        int *l_584 = &g_450;
        short l_657 = 0xBEC1L;
        (*l_582) = l_581;
lbl_605:
        l_583 &= p_11;
        if (((*l_584) |= 0L))
        {
            char l_589 = 0L;
            unsigned l_595 = 0x0E41DDE1L;
            int *l_612 = &g_47;
            unsigned short *l_664 = &g_380;
            unsigned short *l_665 = &g_95;
            char *l_670 = &g_49;
            unsigned ** const l_671 = &g_237;
            unsigned ***l_672 = &g_236;
            l_564 = (safe_mod_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((((l_589 > g_115) && ((*g_237) > l_579)) || (((*g_77) = ((l_589 && p_11) < (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((g_594 = (l_589 , (void*)0)) == &l_584), l_595)), p_12)))) != l_579)), (**g_491))) ^ p_11) != (-5L)), g_49));
            if (p_11)
            {
                unsigned short *l_600 = &g_380;
                unsigned char *l_603 = &g_102;
                const int l_604 = 0x0454A875L;
                int **l_617 = &l_612;
                char ** const l_625 = &g_77;
                (*l_584) |= (((p_12 , l_579) , p_12) >= g_318);
                if (l_595)
                    goto lbl_599;
lbl_599:
                for (g_115 = (-18); (g_115 != 10); g_115++)
                {
                    int l_598 = 0x59B0F559L;
                    return l_598;
                }
                if ((((*l_584) = ((((*l_600) &= (+g_74)) != ((((safe_mul_func_uint8_t_u_u(p_11, ((*l_603) = (p_11 & 0x8289L)))) , ((**g_491) == (**g_491))) , func_16(p_11, g_405)) >= l_604)) && l_595)) | l_578))
                {
                    short l_611 = 0xED07L;
                    int **l_622 = &l_612;
                    int ***l_621 = &l_622;
                    char **l_628 = &g_77;
                    short ***l_629 = (void*)0;
                    unsigned *l_631 = &g_378;
                    if (l_578)
                        goto lbl_605;
                    (*l_584) = (!((void*)0 == &l_584));
                    (*l_582) = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_611 = g_87), 7)), p_12)) , l_612);

                    ;
                    if (((((*l_612) == ((safe_mod_func_uint32_t_u_u((**g_236), ((*l_631) &= ((((safe_mod_func_int32_t_s_s((l_617 == ((*l_621) = (g_594 = ((safe_mul_func_uint8_t_u_u(l_620, 253UL)) , &g_157)))), (safe_sub_func_uint16_t_u_u((((l_625 == ((safe_lshift_func_uint16_t_u_s(p_11, 11)) , l_628)) , (void*)0) != &g_491), g_490)))) , l_629) == &g_572) || g_630)))) && 0xC5AAED89L)) < p_11) ^ l_565))
                    {
                        return (*g_237);
                    }
                    else
                    {
                        unsigned l_632 = 4294967295UL;
                        (*l_612) &= p_11;
                        (**l_617) &= l_632;
                        (*l_612) = (p_11 , (safe_mul_func_int8_t_s_s((**g_491), (p_12 != (0x31L == (*g_492))))));
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned short l_637 = 0xFC4DL;
                    for (g_318 = 0; (g_318 > 29); g_318 = safe_add_func_int32_t_s_s(g_318, 8))
                    {
                        if (l_637)
                            break;
                    }
                    (*l_612) = (1L ^ 0x59L);
                    (*l_582) = (*l_582);
                }

                ;
                for (g_373 = 0; (g_373 != 53); g_373++)
                {
                    (**l_617) |= (p_12 <= p_11);
                    for (g_450 = 0; (g_450 < 24); g_450 = safe_add_func_int16_t_s_s(g_450, 2))
                    {
                        (**l_617) |= (0xEAA15787L ^ (**g_236));
                    }
                }
            }
            else
            {
                char **l_644 = (void*)0;
                char **l_645 = &g_77;
                unsigned short *l_654 = &g_115;
                int l_655 = 0x6E54861FL;
                char *l_656 = &g_49;
                int *l_658 = (void*)0;
                int *l_659 = &l_564;
                (*l_659) |= ((*l_584) ^ (func_16((((g_540 = ((l_579 == g_242) , ((safe_mul_func_int8_t_s_s((l_563 != ((*l_645) = (void*)0)), ((*l_656) = (safe_div_func_int32_t_s_s(((safe_add_func_int16_t_s_s(((g_67 , (((safe_mod_func_uint8_t_u_u((((*l_612) , ((*l_654) = func_16((safe_add_func_int8_t_s_s((*g_492), p_12)), (*l_612)))) ^ l_655), p_11)) , &g_572) == &g_572)) == g_248), p_11)) & (**g_491)), p_11))))) <= p_12))) , p_12) | (*l_584)), p_11) < l_657));

                ;
            }

            ;
            ;
            (*l_612) = (((((*l_584) = p_11) | ((**g_236) = (g_67 , (*g_237)))) == (safe_unary_minus_func_int8_t_s((*g_492)))) && ((((void*)0 != (*g_491)) || (((*l_670) = (safe_sub_func_uint16_t_u_u((((((((*l_665) &= ((*l_664) = l_663)) >= 6UL) , ((safe_sub_func_int16_t_s_s((((*l_665) ^= ((safe_rshift_func_uint8_t_u_u(g_109, g_378)) ^ p_11)) && g_242), p_11)) < p_11)) < (*l_612)) < (*l_612)) | p_12), g_47))) != l_578)) , 255UL));
            (*l_672) = l_671;
        }
        else
        {
            for (g_248 = 0; (g_248 > (-9)); g_248 = safe_sub_func_uint16_t_u_u(g_248, 3))
            {
                unsigned l_675 = 0xAC861C3EL;
                int *l_676 = &l_610;
                (*l_582) = (*l_582);
                (*l_584) &= l_675;
                (*l_582) = l_676;

                ;
            }

            ;
            for (g_450 = (-21); (g_450 > 26); g_450 = safe_add_func_int16_t_s_s(g_450, 9))
            {
                int *l_679 = &g_87;
                (*l_679) = (*g_66);
            }
        }

        ;
        ;
    }
    else
    {
        return (*g_237);
    }

    ;
    ;
    ;
    (*l_697) = (safe_sub_func_uint16_t_u_u(l_610, ((!((((((*l_696) ^= (safe_mod_func_uint16_t_u_u((p_12 , p_12), ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(p_11, ((*l_695) ^= ((safe_add_func_uint16_t_u_u(((((g_102 = (safe_add_func_int32_t_s_s(((*l_692) |= p_12), (safe_add_func_uint8_t_u_u((p_11 >= p_12), (*g_492)))))) || p_11) > p_11) , g_521), 0xCE20L)) >= p_12)))), g_318)) ^ 1UL)))) || 0x34226272L) | 0L) != g_109) <= (**g_236))) < (*g_492))));
    (*l_697) ^= (((*l_692) <= g_405) , ((*l_696) == p_11));
    return (*l_697);
}







static unsigned func_16(unsigned p_17, unsigned p_18)
{
    int *l_559 = (void*)0;
    int *l_560 = &g_47;
    (*l_560) = (safe_add_func_int32_t_s_s(p_18, (*g_66)));
    return (**g_236);
}







static unsigned short func_19(char p_20)
{
    short l_32 = 0L;
    unsigned l_552 = 4294967290UL;
    int l_555 = 0x4FC92720L;
    int l_556 = (-1L);
    l_556 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(func_28((safe_lshift_func_int8_t_s_s((l_32 ^ 0xC105A83DL), 7))), (safe_unary_minus_func_int8_t_s(1L)))) & (safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((p_20 || (p_20 < (((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_552, (((~(safe_add_func_uint32_t_u_u(p_20, (l_555 = 0x8F6287EDL)))) ^ l_32) , g_380))), l_32)), 0xD8F6L)) ^ p_20) , p_20))) || l_555), g_490)), g_521))), g_67)) , l_555), 15));

    ;

    g_157 = &l_556;

    ;
    return g_109;


}







static const unsigned char func_28(unsigned short p_29)
{
    unsigned l_376 = 4UL;
    unsigned *l_377 = &g_378;
    short l_379 = 0x8C08L;
    short *l_381 = &l_379;
    int *l_412 = &g_87;
    int *l_417 = &g_47;
    unsigned l_419 = 4294967291UL;
    unsigned ***l_443 = (void*)0;
    short l_458 = 0L;
    int *l_474 = &g_87;
    char l_530 = 0x1DL;
    unsigned char *l_533 = (void*)0;
    unsigned short *l_536 = (void*)0;
    unsigned short *l_537 = &g_95;
    if (((safe_div_func_int32_t_s_s(func_35(p_29), l_376)) < (((*l_377) = l_376) , (l_379 , (((*l_381) ^= g_380) | p_29)))))
    {
        return l_376;
    }
    else
    {
        unsigned **l_382 = &g_237;
        const int *l_387 = &g_47;
        char **l_394 = &g_77;
        int *l_395 = &g_47;
        int l_408 = 0x26675D3DL;
        int l_503 = 1L;
        int **l_529 = &l_412;
        (*l_395) = (1UL & ((((l_382 == &g_237) == (*g_77)) || (((safe_div_func_int16_t_s_s(((safe_div_func_int8_t_s_s((-1L), ((((((+l_376) & (*l_387)) != 65535UL) | p_29) < g_102) , (*l_387)))) | g_49), 0xAAD3L)) , l_394) != (void*)0)) & p_29));
        if (l_379)
        {
            const short *l_404 = &g_405;
            short *l_406 = (void*)0;
            int *l_407 = (void*)0;
            int l_453 = 5L;
            unsigned char l_464 = 0x6CL;
            short **l_473 = &l_406;
            if ((((*g_77) |= (safe_sub_func_uint8_t_u_u(p_29, 0x29L))) , (*l_395)))
            {
                (*l_395) = p_29;
            }
            else
            {
                char l_418 = 1L;
                unsigned ** const l_442 = (void*)0;
                short **l_471 = &l_381;
                int l_472 = (-2L);
                for (p_29 = 15; (p_29 > 59); p_29++)
                {
                    int *l_411 = &l_408;
                    l_412 = l_411;

                    ;
                    l_411 = (l_407 = l_411);

                    ;
                    (*l_412) = (p_29 && (safe_div_func_uint8_t_u_u(p_29, 0x67L)));
                }

                ;
                ;
                for (g_74 = 0; (g_74 >= 12); ++g_74)
                {
                    l_417 = l_407;

                    ;
                    l_419 |= l_418;
                }

                ;
                for (g_87 = 0; (g_87 != (-10)); --g_87)
                {
                    if ((safe_lshift_func_uint8_t_u_s((((*l_381) &= ((safe_rshift_func_int16_t_s_u((l_412 != (((safe_rshift_func_int16_t_s_u(g_67, 8)) || (p_29 != p_29)) , &g_87)), 3)) <= (p_29 , ((safe_add_func_uint8_t_u_u((~g_373), (safe_rshift_func_int8_t_s_u((*g_77), p_29)))) || p_29)))) >= 7UL), 7)))
                    {
                        return g_405;
                    }
                    else
                    {
                        unsigned ***l_434 = &g_236;
                        unsigned char *l_444 = (void*)0;
                        unsigned char *l_445 = &g_373;
                        int *l_446 = (void*)0;
                        int *l_447 = (void*)0;
                        int *l_448 = &l_408;
                        int *l_449 = &g_450;
                        int l_463 = 0L;
                        (*l_449) |= ((*l_448) |= (safe_lshift_func_uint8_t_u_u((&g_67 != &g_67), (((((*l_434) = &g_237) == &g_237) == (safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(g_242)), 0xAAE1L))) != ((((((*l_445) = (safe_add_func_int32_t_s_s(((((safe_div_func_int32_t_s_s(((void*)0 == l_442), ((l_434 != l_443) , (*l_395)))) , (*g_237)) == (*g_237)) , 0L), p_29))) , 0xF83382B7L) & p_29) , &g_378) == &g_113)))));
                        if (p_29)
                            continue;
                        (*l_449) = (safe_add_func_uint8_t_u_u(l_453, (g_67 && (+((**l_394) = (((*g_66) == (g_109 <= (safe_rshift_func_int16_t_s_s(0x23C2L, 11)))) != (safe_mul_func_int16_t_s_s(((l_458 <= ((safe_lshift_func_uint16_t_u_s(p_29, p_29)) == (safe_rshift_func_int8_t_s_s((l_463 , l_464), 2)))) != p_29), g_405))))))));
                        if (p_29)
                            break;
                    }
                    return p_29;
                }
                (*l_395) &= (safe_div_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((*l_412) = (((((safe_sub_func_uint16_t_u_u(65534UL, (func_56(l_418, (*g_77), ((**l_382) = (**g_236)), (l_471 != (l_473 = ((l_472 , p_29) , (void*)0)))) > g_378))) | (-1L)) & 5UL) , (void*)0) != l_381)), g_67)), 0x172FA32CL));

                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            const char l_477 = 0x1FL;
            unsigned *l_506 = &g_113;
            int l_522 = 0xAADE2573L;
            (*l_412) |= (*l_417);
            g_157 = l_474;

            ;
            for (g_49 = 6; (g_49 < (-13)); g_49 = safe_sub_func_int16_t_s_s(g_49, 8))
            {
                int l_480 = (-9L);
                const unsigned *l_489 = &g_490;
                (*l_417) &= p_29;
            }
        }

        ;
        ;
        (*l_529) = &g_47;

        ;
    }

    ;

    ;

    l_530 = ((*l_474) = 0xF04516F4L);
    g_540 ^= (safe_rshift_func_uint8_t_u_s(p_29, (5UL && (((p_29 && g_95) ^ 0xB093L) == g_380))));
    return g_540;
}







static int func_35(unsigned short p_36)
{
    unsigned l_37 = 18446744073709551612UL;
    const int *l_233 = &g_87;
    unsigned *l_243 = &g_113;
    unsigned short *l_272 = &g_95;
    int l_313 = 9L;
    int l_365 = 0x825A2756L;
    unsigned char *l_366 = &g_318;
    unsigned char *l_367 = &g_102;
    int l_370 = (-9L);
    int l_371 = 0xB37F3C10L;
    unsigned char *l_372 = &g_373;
    unsigned l_375 = 0UL;
    if (l_37)
    {
        unsigned l_38 = 18446744073709551607UL;
        int l_68 = (-7L);
        unsigned char *l_249 = &g_102;
        int l_262 = 0x16BE923FL;
        if (l_38)
        {
            unsigned l_45 = 4UL;
            int *l_46 = &g_47;
            char *l_48 = &g_49;
            unsigned l_89 = 4UL;
            int **l_226 = &l_46;
            short *l_234 = &g_109;
            int l_235 = 0xC2CE5BB0L;
            const unsigned *l_241 = &g_242;
            const unsigned **l_240 = &l_241;
            unsigned **l_244 = &l_243;
            unsigned short l_245 = 0xB264L;
            unsigned short *l_246 = &g_74;
            short *l_247 = &g_248;
            (*l_46) = func_39(p_36, (0xC4433AC2L <= ((((safe_rshift_func_int8_t_s_u(((*l_48) = (l_45 <= (p_36 > ((*l_46) |= l_45)))), (((((safe_rshift_func_uint16_t_u_s((9L > ((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(func_56(p_36, ((safe_div_func_uint8_t_u_u(((func_63(g_66, l_68) > p_36) & 0xF9L), l_89)) , p_36), g_78, p_36), g_2)) != l_38), 0x4046227AL)) , p_36)), 0)) == p_36) , (void*)0) != l_46) >= p_36))) && p_36) ^ p_36) <= (-1L))), (*g_77));

            ;
            ;
            (*l_226) = l_46;
            l_235 |= (((void*)0 == l_48) >= (((safe_add_func_int16_t_s_s(p_36, (l_37 && (p_36 > (**l_226))))) != (safe_div_func_int16_t_s_s(((*l_234) = (((p_36 , (*l_46)) , g_47) != p_36)), (-2L)))) , 7L));
            (**l_226) = ((0xAA4EL | (((void*)0 == g_236) , ((*l_247) = ((*l_234) = ((safe_lshift_func_int16_t_s_u(0x533CL, ((*l_246) = ((*g_237) || (0x67071AFDL || (g_2 < g_67)))))) && (*g_77)))))) <= (*g_77));
        }
        else
        {
            const int l_256 = 0x510A1EBCL;
            int l_259 = 3L;
            short * const l_278 = &g_109;
lbl_266:
            (*g_157) &= (0x99L >= (((void*)0 != l_249) || 1UL));
            if ((safe_lshift_func_uint16_t_u_s(((0xE9L || g_78) , ((safe_add_func_uint8_t_u_u((((((l_259 &= ((((((safe_mod_func_uint16_t_u_u((l_256 ^ 0x74925260L), (((~p_36) & (func_63(&g_67, p_36) == p_36)) ^ p_36))) , (*g_77)) < p_36) || 0x32FEL) & p_36) , l_68)) && (-5L)) , (-1L)) > (**g_236)) == 0xA352L), 0x2AL)) != l_38)), g_113)))
            {
                int **l_263 = &g_157;
                (*g_157) = (safe_sub_func_int32_t_s_s((*l_233), (l_262 ^= (**g_236))));
                (*l_263) = l_243;

                ;
                for (l_262 = (-23); (l_262 != (-19)); l_262++)
                {
                    if (l_259)
                        goto lbl_266;
                }
                for (l_37 = 0; (l_37 <= 34); l_37++)
                {
                    unsigned l_277 = 4294967295UL;
                    int l_293 = (-3L);
                    (*g_157) = 4L;
                }
            }
            else
            {
                (*g_157) = 0x01CEF08BL;
                if ((*g_157))
                {
                    return p_36;
                }
                else
                {
                    unsigned l_309 = 1UL;
                    l_309 = ((safe_lshift_func_uint8_t_u_u(p_36, 3)) , (-8L));
                    (*g_157) &= p_36;
                    for (g_47 = (-26); (g_47 <= (-8)); g_47 = safe_add_func_uint8_t_u_u(g_47, 1))
                    {
                        int **l_312 = &g_157;
                        (*l_312) = &l_259;

                        ;
                    }

                    ;
                    (*g_157) = p_36;
                }

                ;
            }

            ;
        }

        ;

        l_313 = ((void*)0 != &g_109);
        l_313 &= ((void*)0 != l_249);
    }
    else
    {
        unsigned short l_324 = 0x2F24L;
        int l_333 = (-3L);
        for (l_313 = 0; (l_313 != 25); l_313++)
        {
            char l_321 = 0xD4L;
            unsigned short l_342 = 0xEC44L;
            (*g_157) = func_56(((*l_272) = g_2), ((*g_77) = (safe_lshift_func_int16_t_s_s(((g_318 = p_36) , 0xDF36L), 9))), p_36, (((1L && 0L) ^ (g_49 & ((safe_lshift_func_int16_t_s_s((1UL != l_321), 3)) == 4294967290UL))) < (*l_233)));
        }
    }

    ;

    for (g_49 = 5; (g_49 <= (-13)); g_49 = safe_sub_func_int16_t_s_s(g_49, 6))
    {
        int *l_351 = &g_47;
        int **l_352 = &l_351;
        (*l_351) = 9L;
        (*l_352) = l_351;
        g_66 = (*l_352);

        ;
    }
    g_87 = (safe_rshift_func_uint8_t_u_s(((*l_366) = ((!p_36) , (safe_lshift_func_uint16_t_u_s(p_36, (((*l_272) = p_36) , g_373))))), (*g_77)));
    return l_375;
}







static int func_39(int p_40, unsigned char p_41, char p_42)
{
    int *l_94 = &g_47;
    int **l_93 = &l_94;
    int *l_96 = &g_47;
    char *l_98 = &g_49;
    unsigned short l_124 = 0x91D8L;
    const int *l_129 = &g_87;
    unsigned short *l_218 = &l_124;
    const unsigned l_219 = 0x3483840BL;
    unsigned **l_220 = (void*)0;
    unsigned **l_221 = (void*)0;
    unsigned *l_223 = &g_113;
    unsigned **l_222 = &l_223;
    short *l_224 = &g_109;
    int l_225 = 1L;
    (*l_93) = (void*)0;

    ;
    if (((*l_96) = g_95))
    {
        unsigned short l_97 = 0xF2E4L;
        unsigned char *l_99 = (void*)0;
        unsigned char *l_100 = (void*)0;
        unsigned char *l_101 = &g_102;
        int * const l_120 = &g_87;
        if ((((l_97 , g_2) >= ((*l_101) = (&p_42 == l_98))) != ((safe_sub_func_int8_t_s_s(0xC5L, 0xEBL)) | (func_56(g_67, (*g_77), (*l_96), (*g_66)) | (*l_96)))))
        {
            unsigned short *l_107 = &g_74;
            short *l_108 = &g_109;
            unsigned *l_112 = &g_113;
            int l_114 = 0xD171E9D6L;
            g_47 &= (*g_66);
            g_115 |= (((((safe_div_func_int16_t_s_s((((*l_107) = g_49) != ((*l_108) = g_2)), (safe_add_func_uint32_t_u_u(((*l_112) = g_67), 0x2DF00AC9L)))) <= 0xF9644A59L) >= (g_87 ^ l_97)) || p_41) , ((*l_96) = l_114));
        }
        else
        {
            char **l_118 = (void*)0;
            char **l_119 = &l_98;
            int * const l_121 = (void*)0;
            (*l_120) = (p_42 | func_63(&g_47, (((*g_77) & ((&g_47 == ((safe_mod_func_uint32_t_u_u((*l_96), (0x183CEC1DL ^ (((((*l_120) = (((((p_42 , (void*)0) != ((*l_119) = (void*)0)) , l_120) == l_121) < 0xEF5864DCL)) || p_40) & 7UL) != p_40)))) , l_121)) >= (*g_77))) , 0xC8A0849DL)));

            ;
        }

        ;
        g_66 = &g_87;

        ;
    }
    else
    {
        char l_122 = 0x22L;
        const int *l_123 = &g_87;
        unsigned char *l_127 = &g_102;
        short *l_141 = &g_109;
        int **l_215 = (void*)0;
        if (((((void*)0 != &g_66) != (+g_109)) , func_56(((func_63(((0xDE2A9FC0L || l_122) , l_123), (g_113 = l_124)) & ((*l_127) = (safe_lshift_func_uint16_t_u_s(((0UL & p_41) | p_41), g_67)))) || (-8L)), p_40, p_40, (*g_66))))
        {
            const int **l_128 = &g_66;
            unsigned short l_192 = 0x1C91L;
            g_47 = (func_63((*l_93), g_102) | 0UL);
lbl_130:
            l_129 = ((*l_128) = &g_47);

            ;
            ;
            (*l_93) = (*l_93);
            if (p_40)
            {
                int l_138 = 0x993E3A24L;
                const int *l_158 = (void*)0;
                if (g_67)
                    goto lbl_130;
                for (g_115 = 14; (g_115 == 28); g_115++)
                {
                    if ((safe_unary_minus_func_int8_t_s(func_56((safe_mod_func_uint8_t_u_u((p_41 = (safe_mod_func_int32_t_s_s((&g_78 == (void*)0), p_42))), ((*g_77) = func_56(g_113, (((*g_66) || ((+(l_138 |= (0xB3F2B610L < (((*l_96) = (*g_66)) <= (*l_123))))) < ((((safe_rshift_func_int8_t_s_s(0L, 1)) , &g_109) == l_141) , g_115))) <= (*g_77)), (*l_123), g_2)))), g_115, p_42, g_2))))
                    {
                        return (*g_66);
                    }
                    else
                    {
                        (*l_96) ^= p_42;
                    }
                }
                for (l_138 = 13; (l_138 > (-19)); l_138 = safe_sub_func_uint32_t_u_u(l_138, 7))
                {
                    unsigned *l_156 = &g_113;
                    int l_166 = 0x4A096ABDL;
                    unsigned short *l_176 = &g_74;
                    for (g_47 = 0; (g_47 < 16); g_47 = safe_add_func_uint8_t_u_u(g_47, 2))
                    {
                        return (*g_66);
                    }
                    if ((g_95 < (safe_mul_func_uint8_t_u_u(g_49, (safe_rshift_func_int16_t_s_s(g_109, (0x0ACEL | ((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((*l_156) = (l_138 >= (*g_77))), func_56(p_41, (p_41 > (6UL != l_138)), p_41, p_41))), p_42)), 0x9EL)) , p_40))))))))
                    {
                        (*l_128) = l_123;

                        ;
                        (*l_128) = (g_157 = &g_87);

                        ;
                    }
                    else
                    {
                        unsigned l_165 = 4294967294UL;
                        l_158 = l_123;

                        ;
                        (*l_96) &= (((0UL != (safe_add_func_int16_t_s_s((l_165 && 0xCC2DAEADL), (*l_123)))) < p_41) && l_166);
                    }
                    (*g_157) = (safe_div_func_uint16_t_u_u(func_56((safe_unary_minus_func_uint32_t_u((((((safe_div_func_int16_t_s_s(p_40, p_40)) < (l_128 == &g_66)) > 0x89L) || (g_109 &= (safe_mul_func_uint8_t_u_u((((((*l_156) = 0xFDED0FC9L) || (l_166 == ((*g_77) |= (((*l_176) = p_42) < (p_40 < 3UL))))) , g_67) && 0x3EEDL), p_41)))) , 4294967295UL))), (*l_123), p_42, l_166), p_41));
                    (*l_93) = &g_47;

                    ;
                }

                ;
                ;
                ;
                ;
            }
            else
            {
                int l_189 = 0x3E17168CL;
                (*g_157) = (safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s(g_115, ((g_87 , 0x7A66F30BL) != (safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_41, p_40)), 13)) >= (g_102 , ((((*l_141) = 0x1F86L) > (l_189 = (safe_mul_func_uint8_t_u_u(251UL, g_87)))) && 0UL))), 0xD3E0DDACL))))) > g_102), 0xC127BBD1L));
                (*g_157) = p_41;
                if ((l_189 & (((*l_141) ^= 0x47DFL) , ((-3L) != ((safe_lshift_func_uint16_t_u_s(l_192, 5)) > p_42)))))
                {
                    (*g_157) ^= ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_u((&l_96 != (void*)0), 5)) <= (p_41 >= (safe_mod_func_int16_t_s_s(((*l_141) = p_40), p_42)))) < ((safe_lshift_func_uint8_t_u_s((0xF7CF008CL == (l_189 = g_87)), 5)) || g_74)) , 0xEDA5L), p_41)), 0x708496AEL)) && p_42);
                }
                else
                {
                    (*g_157) = l_189;
                }
            }

            ;
            ;
            ;
        }
        else
        {
            return p_42;
        }

        ;
        ;
        ;
        ;
        if (((p_41 ^ ((g_78 & (safe_mul_func_int8_t_s_s(p_42, (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((*l_129) , (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((&g_157 == l_215), p_42)) , g_78), p_40)), (*l_123)))), (*l_123))), (*l_123)))))) >= p_42)) != g_102))
        {
            (*g_157) = p_42;
        }
        else
        {
            (*l_93) = &g_87;

            ;
        }

        ;
        (*l_93) = (void*)0;

        ;
    }

    ;
    ;
    ;
    ;
    l_225 ^= (*g_157);
    (*g_157) = (p_40 , 0x885C3042L);
    return (*l_129);
}







static short func_56(unsigned short p_57, char p_58, unsigned p_59, int p_60)
{
    int *l_91 = &g_87;
    int **l_90 = &l_91;
    int *l_92 = &g_87;
    (*l_92) = (((*l_90) = &p_60) != &p_60);

    ;
    return g_87;
}







static unsigned func_63(const int * p_64, unsigned p_65)
{
    char l_69 = 0x41L;
    int *l_88 = &g_87;
    if (l_69)
    {
        unsigned short *l_72 = (void*)0;
        unsigned short *l_73 = &g_74;
        char *l_79 = (void*)0;
        int l_84 = (-8L);
        int *l_85 = &l_84;
        int *l_86 = &g_87;
        (*l_86) = ((((*l_85) = (((safe_lshift_func_uint16_t_u_s(((*l_73) = p_65), 4)) < p_65) >= (((g_77 == (p_65 , (l_79 = &g_78))) == ((((l_69 != p_65) ^ 7L) || (((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(l_84, l_69)), l_84)) , (*g_66)) <= 1UL)) != (*g_66))) == p_65))) , (*g_77)) , (-1L));

        ;
    }
    else
    {
        return l_69;
    }
    (*l_88) ^= l_69;
    return p_65;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_405, "g_405", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_521, "g_521", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_630, "g_630", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_826, "g_826", print_hash_value);
    transparent_crc(g_830, "g_830", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_953, "g_953", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1086, "g_1086", print_hash_value);
    transparent_crc(g_1195, "g_1195", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
