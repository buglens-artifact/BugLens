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



static char g_2 = 1L;
static int g_67 = 0x81F13D46L;
static unsigned g_103 = 0x22E340D7L;
static unsigned long long g_119 = 0x16CB79380A5080F1LL;
static int *g_120 = (void*)0;
static int g_122 = (-5L);
static int **g_124 = &g_120;
static unsigned g_188 = 18446744073709551615UL;
static int *g_279 = &g_67;
static unsigned g_342 = 3UL;
static long long g_473 = 0xF7A6D0993D7225EBLL;
static unsigned short g_479 = 0x4C15L;
static int g_674 = 2L;
static int g_701 = 0x0722AA2AL;
static int g_710 = 0x04CB71A1L;
static int g_713 = 0xF62CDE19L;
static unsigned g_726 = 0xDAAD809CL;
static unsigned long long g_741 = 0UL;
static char g_786 = 0x04L;
static int g_790 = 7L;
static char g_811 = 0xF8L;
static unsigned g_812 = 6UL;
static const int g_889 = (-3L);
static int *g_900 = &g_67;
static unsigned short g_939 = 0UL;
static unsigned g_1051 = 0x8AD4E2CFL;
static long long g_1078 = 0xA789FF64207A6A75LL;
static long long g_1079 = 8L;
static unsigned g_1080 = 0xD005ED77L;
static unsigned g_1142 = 1UL;
static short g_1187 = (-2L);
static char g_1198 = 1L;
static unsigned g_1207 = 1UL;
static unsigned char g_1266 = 251UL;
static long long g_1287 = 1L;
static long long g_1293 = 0x176D296EE80B96C9LL;
static short g_1294 = 0L;
static int g_1335 = 0x1106750FL;
static int g_1337 = 0xBD038B20L;
static unsigned g_1343 = 0xC12842CCL;
static long long g_1425 = 0x472B2D71A66F49C9LL;
static long long g_1427 = 0x95520EC51F4C6F2ELL;
static int g_1430 = (-1L);
static unsigned short g_1443 = 65526UL;
static unsigned long long g_1503 = 0x93C38C9A8D9D8BC7LL;
static int g_1578 = 0xBC8AA470L;



static unsigned func_1(void);
static short func_3(short p_4, unsigned p_5, unsigned short p_6);
static short func_7(unsigned p_8);
static int func_10(const unsigned p_11, char p_12, const unsigned char p_13, const unsigned char p_14, unsigned char p_15);
static unsigned long long func_16(int p_17, char p_18, const unsigned p_19);
static short func_25(char p_26, short p_27, char p_28, unsigned short p_29);
static const short func_33(unsigned short p_34, unsigned p_35, int p_36);
static unsigned short func_37(short p_38, unsigned p_39, const unsigned p_40, char p_41, unsigned short p_42);
static unsigned char func_48(unsigned short p_49, int p_50);
static long long func_51(char p_52, long long p_53, int p_54, unsigned long long p_55, unsigned short p_56);
static unsigned func_1(void)
{
    unsigned l_9 = 0x36544D18L;
    unsigned l_1101 = 0UL;
    unsigned l_1103 = 0x97FD7D54L;
    int l_1116 = 0x5852FC7DL;
    int *l_1145 = &g_790;
    int *l_1147 = (void*)0;
    int *l_1154 = &l_1116;
    unsigned char l_1168 = 0x15L;
    unsigned l_1179 = 1UL;
    int l_1223 = 0L;
    short l_1346 = (-8L);
    int l_1353 = (-6L);
    unsigned char l_1362 = 0x17L;
    long long l_1372 = 0x202EFEED5AAC0706LL;
    unsigned l_1393 = 18446744073709551615UL;
    int ***l_1517 = &g_124;
    unsigned long long l_1518 = 1UL;
    if (((((((g_2 >= g_2) , (func_3(func_7(l_9), (l_9 , g_1078), l_1101) || func_25(l_1101, l_1103, l_1103, l_1103))) | (-3L)) != g_786) , (-5L)) >= g_790))
    {
        int *l_1104 = &g_67;
        int *l_1105 = (void*)0;
        int *l_1106 = &g_122;
        int *l_1107 = &g_122;
        int *l_1108 = &g_67;
        int *l_1109 = &g_790;
        int *l_1110 = &g_790;
        int l_1111 = 0x27EC7AE6L;
        int *l_1112 = &g_790;
        int *l_1113 = &g_122;
        int *l_1114 = &g_67;
        int *l_1115 = &g_790;
        int *l_1117 = (void*)0;
        int *l_1118 = &g_790;
        int l_1119 = 0xE78C0A68L;
        int *l_1120 = (void*)0;
        int l_1121 = 0x326D4209L;
        int *l_1122 = &l_1119;
        int *l_1123 = &l_1116;
        int *l_1124 = &g_790;
        int *l_1125 = &l_1119;
        int *l_1126 = &g_67;
        int *l_1127 = &l_1119;
        int *l_1128 = &l_1116;
        int *l_1129 = &l_1116;
        int *l_1130 = &l_1116;
        int *l_1131 = (void*)0;
        int *l_1132 = (void*)0;
        int *l_1133 = &l_1116;
        int *l_1134 = &l_1121;
        int *l_1135 = &g_122;
        int *l_1136 = &l_1121;
        int *l_1137 = &g_122;
        int *l_1138 = &l_1121;
        int *l_1139 = &g_67;
        int *l_1140 = &l_1119;
        int *l_1141 = &g_67;
        int **l_1146 = &l_1133;
        long long l_1163 = 0L;
        char l_1317 = 0L;
        const unsigned l_1348 = 1UL;
        unsigned l_1349 = 0xF327ADCCL;
        --g_1142;
        (*l_1146) = l_1145;
        if (((&g_900 == &l_1145) , (2UL >= (*l_1145))))
        {
            (*l_1146) = &l_1116;
            (*l_1146) = l_1147;
            (*l_1118) = (-7L);
        }
        else
        {
            long long l_1148 = 0xAF4FC41CC9E12E63LL;
            int * const l_1153 = &g_67;
            int l_1188 = (-6L);
            int l_1189 = 0x7B1B840AL;
            int ***l_1222 = (void*)0;
            int *l_1232 = &g_122;
            unsigned short l_1238 = 0x6FC8L;
            int l_1246 = 0x07FDBD90L;
            int l_1247 = 0x8614C450L;
            int l_1312 = 0x54F80844L;
            if ((((*l_1139) <= (l_1148 , ((((l_1148 , ((((safe_sub_func_uint32_t_u_u(g_939, (safe_mod_func_uint32_t_u_u((((&g_889 == l_1153) != (0xD3L | ((&g_124 != &g_124) , 0x30L))) < g_812), (*l_1153))))) < (*l_1145)) , (*g_279)) <= (*g_900))) | g_701) ^ 1L) , g_1142))) || 0x08F7L))
            {
                const unsigned l_1155 = 0xD87B3F48L;
                const unsigned char l_1162 = 0x83L;
                int *l_1231 = &g_67;
                int ***l_1256 = &l_1146;
                (*l_1107) |= ((0xD6AAL < ((((((*l_1125) , (l_1154 != (void*)0)) , (func_37((*l_1153), ((0xA8L <= (g_812 || l_1155)) == (*g_900)), (*l_1145), (*l_1153), (*l_1126)) <= (*l_1109))) , g_786) >= g_1078) , 0xD4A4L)) > (*l_1145));
                if ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((255UL & g_473) >= (((-3L) != (safe_add_func_int8_t_s_s((0x12L == l_1162), (func_48((l_1163 && ((((!func_25(g_726, (*l_1153), func_51((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(g_2, g_889)), 8UL)), g_119, (*l_1135), g_1142, l_1155), (*l_1153))) ^ g_786) <= g_812) > l_1168)), l_1162) || g_710)))) , (*l_1153))), g_1051)) != g_1078), g_2)))
                {
                    long long l_1174 = 0xE36545A412779936LL;
                    long long l_1180 = 1L;
                    for (g_726 = 0; (g_726 >= 52); g_726++)
                    {
                        unsigned short l_1171 = 0UL;
                        (*l_1134) ^= (g_701 == ((l_1171 | (safe_rshift_func_int16_t_s_u(g_2, ((g_67 | l_1174) , g_473)))) | (safe_rshift_func_int8_t_s_s((((~g_674) || (0x865E44062E47D712LL || (safe_lshift_func_uint8_t_u_s(((void*)0 == &g_124), 2)))) > g_1078), g_122))));
                        (*l_1110) &= l_1179;
                        (*l_1138) = (l_1180 && ((((((l_1162 , func_37(((((safe_lshift_func_uint8_t_u_s(g_119, func_51(((-1L) > 4294967295UL), l_1162, (((*g_900) || ((g_67 >= ((((l_1180 , (*g_279)) , l_1180) , g_701) > l_1155)) == (-1L))) | (*l_1139)), l_1155, g_726))) >= g_479) , 0xB380L) , g_889), g_786, g_741, g_889, g_713)) , g_342) , g_811) > g_479) , 0x798BL) , 5L));
                        (*l_1134) = (((((0x5ADCD5388DBF651DLL && g_939) <= (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((void*)0 == &l_1117), 7)), (l_1162 < (g_1187 <= func_37((*l_1139), l_1171, (*l_1135), g_713, g_741)))))) , 0UL) , (*l_1145)) || g_790);
                    }
                    (*l_1145) ^= (*g_900);
                }
                else
                {
                    int *l_1190 = &l_1119;
                    int *l_1191 = (void*)0;
                    int *l_1192 = &g_790;
                    int *l_1193 = &g_122;
                    int l_1194 = 4L;
                    int *l_1195 = &l_1116;
                    int *l_1196 = (void*)0;
                    int *l_1197 = &l_1119;
                    int *l_1199 = &l_1188;
                    int *l_1200 = (void*)0;
                    int *l_1201 = &l_1189;
                    int *l_1202 = &g_67;
                    int *l_1203 = &l_1189;
                    int *l_1204 = &l_1119;
                    int *l_1205 = &l_1189;
                    int *l_1206 = &l_1119;
                    --g_1207;
                    (*l_1128) |= ((safe_rshift_func_uint16_t_u_s(((g_701 , (void*)0) == (void*)0), 8)) < (safe_rshift_func_int16_t_s_s((0xD8L || (&g_120 != &g_900)), 9)));
                    (*l_1199) &= ((-7L) | ((&g_67 != (void*)0) && func_48((*l_1140), (0UL < (**l_1146)))));
                }
                if ((safe_add_func_uint32_t_u_u(g_103, ((safe_rshift_func_uint16_t_u_s((g_188 && (g_889 != (safe_mod_func_int32_t_s_s(((((g_342 != func_51(func_51(((*g_279) , (!(((safe_mod_func_int64_t_s_s((*l_1130), (*l_1153))) , (((void*)0 != l_1222) <= g_188)) >= (*g_900)))), g_1207, l_1162, g_726, l_1223), g_67, (*l_1154), (*l_1153), (*l_1153))) <= g_674) != 3L) || 0x032411D1L), (*l_1124))))), 2)) && 1L))))
                {
                    unsigned long long l_1224 = 18446744073709551611UL;
                    unsigned l_1225 = 4UL;
                    if ((l_1224 , (*l_1154)))
                    {
                        int *l_1228 = &l_1189;
                        l_1225--;
                        (*l_1106) &= (*g_900);
                        l_1228 = &g_790;
                        l_1145 = l_1228;
                    }
                    else
                    {
                        (*g_900) = (&l_1223 == (void*)0);
                        (**l_1146) = (((func_7((g_1207 , g_701)) , (*l_1145)) ^ g_1078) && ((((*l_1153) | ((*l_1154) && (*l_1127))) <= g_713) >= (*l_1154)));
                    }
                    for (g_473 = 0; (g_473 <= (-26)); --g_473)
                    {
                        int l_1237 = (-6L);
                        (*g_279) = (((l_1231 != l_1232) , func_33(func_37(g_701, ((*l_1145) & (((void*)0 == &l_1223) , ((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((&g_900 == (((((0xE53FL ^ (~g_674)) == 250UL) , 0x2BL) , 1UL) , &g_279)), (*l_1124))) <= (*l_1231)), g_2)) >= g_1078))), g_1079, l_1237, l_1238), (*l_1232), (*l_1145))) , (*l_1231));
                        l_1154 = &g_790;
                        if ((*g_279))
                            continue;
                    }
                    return g_1142;
                }
                else
                {
                    int l_1245 = 0xCD7DD53DL;
                    int *l_1249 = &l_1189;
                    int l_1263 = 0x131AF812L;
                    int l_1264 = 0x5E4BAD33L;
                    int l_1265 = 1L;
                    (*l_1134) ^= (0L & 0x286D485EL);
                    if (((&g_124 != &g_124) && (+((((safe_sub_func_int64_t_s_s(func_51((*l_1231), g_342, (*l_1115), g_342, ((g_342 || ((((func_51((((safe_sub_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((g_726 & g_710), (*l_1231))) != g_342), g_1080)) && g_1051) == (*l_1109)), (*l_1231), l_1245, (*l_1231), (*l_1231)) , l_1246) && 0x3F0ECF33B594F4B9LL) | g_122) , 250UL)) , l_1247)), g_2)) , g_713) & g_1207) & 0xB761L))))
                    {
                        unsigned char l_1248 = 255UL;
                        int l_1261 = 1L;
                        int l_1262 = 0x5DAB5F98L;
                        (*l_1108) = (g_811 , ((((l_1248 , (*l_1232)) , ((void*)0 == &g_900)) , l_1249) != (void*)0));
                        (*l_1127) ^= (safe_rshift_func_int16_t_s_u(((func_3(g_674, (g_1051 == (safe_lshift_func_uint8_t_u_s(g_479, ((safe_sub_func_uint32_t_u_u((l_1256 == &g_124), (-10L))) >= (l_1248 == (((safe_rshift_func_int16_t_s_u(((*l_1118) , func_37(g_342, g_710, g_726, g_726, l_1248)), g_790)) != l_1248) && (*l_1232))))))), (*l_1115)) != g_811) >= l_1248), 10));
                        (*l_1140) &= (safe_add_func_int64_t_s_s((-4L), (***l_1256)));
                        g_1266--;
                    }
                    else
                    {
                        unsigned long long l_1290 = 1UL;
                        (*l_1104) = (g_67 > g_713);
                        (**l_1256) = (**l_1256);
                        (*l_1140) ^= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(func_51((0xF5DBB1F7L != ((safe_lshift_func_int16_t_s_u(g_1287, 12)) , func_25((0x21A68CD4L & (safe_lshift_func_int8_t_s_u((*l_1232), 3))), (*l_1104), l_1290, ((safe_mod_func_uint32_t_u_u(0UL, ((func_3((func_3(g_786, g_1293, (*l_1249)) , (*l_1249)), l_1290, (*l_1153)) <= (*l_1137)) , 4294967286UL))) , (*l_1145))))), g_786, g_1294, (*l_1249), g_1287), g_1051)), 0x313EBEE3L)), (*l_1249))) && 1L), (***l_1256))), 0x746BL)) , (-6L)), (***l_1256))), 0xAD77A820L)), 3)) >= (*l_1249));
                        (*l_1113) = (*g_900);
                    }
                }
            }
            else
            {
                long long l_1305 = 0xBC5787BF74234C59LL;
                int l_1315 = (-1L);
                int l_1316 = (-1L);
                short l_1318 = 0x3F6EL;
                int *l_1319 = &g_67;
                int *l_1320 = &l_1119;
                int *l_1321 = &l_1312;
                int *l_1322 = &l_1119;
                int *l_1323 = (void*)0;
                int *l_1324 = &l_1312;
                int *l_1325 = &l_1121;
                int *l_1326 = &g_122;
                int *l_1327 = &l_1121;
                int *l_1328 = &l_1312;
                int *l_1329 = (void*)0;
                int *l_1330 = &g_790;
                int *l_1331 = &l_1189;
                int *l_1332 = (void*)0;
                int *l_1333 = &l_1312;
                int *l_1334 = (void*)0;
                int *l_1336 = &l_1116;
                int *l_1338 = (void*)0;
                int *l_1339 = (void*)0;
                int *l_1340 = &l_1188;
                int *l_1341 = &g_67;
                int *l_1342 = (void*)0;
                (*l_1135) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((&g_124 != (void*)0), (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s((l_1305 & g_1187), 1)), ((g_939 <= ((+(safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((4294967295UL != 4294967294UL) < (*l_1154)), (g_122 ^ 0xA059L))), 1)), (*l_1154)))) , l_1312)) & g_811))), g_790)))), 0x20A3L));
                for (g_1294 = 0; (g_1294 < 16); ++g_1294)
                {
                    return (*l_1114);
                }
                g_1343--;
            }
        }
        if (l_1346)
        {
            int **l_1347 = &g_279;
            (*l_1124) = ((l_1347 != (void*)0) , (func_25(g_119, (*l_1154), ((func_37((l_1348 , 0L), g_713, (g_1266 | l_1349), g_1266, g_1080) && 0L) & 0x504C7CEB3B7946B6LL), g_1343) == 247UL));
        }
        else
        {
            unsigned l_1352 = 0x6CE6B629L;
            int l_1356 = 0x84D8D1D0L;
            int l_1361 = 0x13F9F8B0L;
            (*l_1137) = ((safe_add_func_uint32_t_u_u(func_37(((l_1352 , g_726) , (l_1353 & (safe_add_func_int16_t_s_s((((l_1352 , (func_25((((*l_1145) & (l_1356 >= (((0x87294F42L >= (safe_add_func_uint64_t_u_u((((((((((safe_add_func_int8_t_s_s(g_2, ((g_122 <= l_1352) == (*g_900)))) || 18446744073709551610UL) || 0x77L) , g_1080) , g_812) ^ (*l_1145)) , g_1051) != l_1361) >= 2UL), g_1337))) , l_1352) <= 1L))) != l_1362), g_1293, l_1356, g_674) | g_1080)) > 0xC7126568132C58ACLL) | 1UL), g_786)))), g_1287, g_1142, (*l_1140), g_741), g_674)) && g_1337);
            (*l_1115) = (*g_900);
        }
    }
    else
    {
        int **l_1363 = &g_900;
        unsigned long long l_1366 = 0UL;
        int l_1371 = 6L;
        int l_1398 = 0x2115C200L;
        int l_1399 = (-10L);
        unsigned short l_1487 = 65527UL;
        (*l_1363) = &l_1116;
        if (func_37((safe_mod_func_uint16_t_u_u(((l_1366 <= (*g_900)) > (*l_1154)), ((g_1080 , (safe_rshift_func_int8_t_s_u(g_1187, ((((0UL > g_713) & (func_37((**l_1363), (safe_lshift_func_uint8_t_u_u(func_51(g_713, (**l_1363), (*g_279), (**l_1363), g_1287), (**l_1363))), (*l_1154), (*l_1145), g_713) , l_1371)) && 1L) < g_1198)))) & (-5L)))), (**l_1363), g_786, l_1372, (*l_1154)))
        {
            unsigned l_1377 = 4294967291UL;
            int l_1378 = 0L;
            (*l_1363) = (*l_1363);
            l_1378 ^= func_25((+((**l_1363) ^ (**l_1363))), (*l_1145), (*l_1154), g_811);
            for (l_1371 = 0; (l_1371 <= (-3)); l_1371 = safe_sub_func_int64_t_s_s(l_1371, 1))
            {
                long long l_1446 = 0L;
                char l_1464 = 0x36L;
                (*l_1363) = (*l_1363);
                (*l_1363) = &l_1116;
                for (g_1294 = 0; (g_1294 >= 28); ++g_1294)
                {
                    const int l_1385 = 0x8F56B9A0L;
                    int ***l_1394 = &g_124;
                    unsigned long long l_1395 = 0x6DA7FBADF7691D34LL;
                    int l_1420 = 0xA5023635L;
                    if ((g_103 || (g_1080 , (+(((func_10((g_1287 >= ((*l_1145) | 0x35DCL)), (((*g_120) , g_786) , (safe_rshift_func_uint16_t_u_s((g_342 || g_119), (*l_1145)))), l_1385, (**l_1363), l_1378) , (void*)0) == (void*)0) && 0xAD2248A729B62948LL)))))
                    {
                        unsigned l_1390 = 1UL;
                        int *l_1396 = &g_122;
                        int *l_1397 = &g_1337;
                        int *l_1400 = (void*)0;
                        int *l_1401 = &l_1399;
                        int *l_1402 = &g_1335;
                        int *l_1403 = &g_1337;
                        int *l_1404 = (void*)0;
                        int *l_1405 = (void*)0;
                        int *l_1406 = &l_1353;
                        int *l_1407 = (void*)0;
                        int *l_1408 = (void*)0;
                        int *l_1409 = &g_122;
                        int *l_1410 = &g_790;
                        int *l_1411 = (void*)0;
                        int *l_1412 = &l_1378;
                        int *l_1413 = (void*)0;
                        int *l_1414 = &l_1378;
                        int *l_1415 = (void*)0;
                        int *l_1416 = (void*)0;
                        int *l_1417 = (void*)0;
                        int *l_1418 = (void*)0;
                        int *l_1419 = &g_122;
                        int *l_1421 = &l_1223;
                        int *l_1422 = &l_1420;
                        int *l_1423 = &g_122;
                        int *l_1424 = &g_122;
                        int *l_1426 = &g_790;
                        int *l_1428 = &l_1398;
                        int *l_1429 = &g_790;
                        int *l_1431 = &l_1378;
                        int *l_1432 = &g_122;
                        int *l_1433 = (void*)0;
                        int *l_1434 = &l_1398;
                        int *l_1435 = (void*)0;
                        int *l_1436 = &l_1399;
                        int *l_1437 = &g_1430;
                        int *l_1438 = &l_1378;
                        int *l_1439 = &g_1337;
                        int *l_1440 = &l_1378;
                        int *l_1441 = &l_1398;
                        int *l_1442 = (void*)0;
                        l_1145 = ((((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_1390, ((g_2 | (safe_lshift_func_int16_t_s_s((func_33(func_51((func_25(g_811, l_1393, func_3((0xF8E20238L <= (&g_124 == l_1394)), g_119, l_1395), g_674) && g_701), g_1266, l_1385, g_2, g_1343), g_726, (*g_900)) && (-1L)), l_1390))) >= 1L))) == l_1390), 10)) == 252UL) > g_1287) , (*l_1363));
                        g_1443++;
                    }
                    else
                    {
                        if (l_1446)
                            break;
                        return l_1446;
                    }
                    for (g_1343 = (-30); (g_1343 > 23); ++g_1343)
                    {
                        short l_1463 = 0x041DL;
                        int * const l_1473 = &g_1335;
                        (**l_1363) = (safe_sub_func_uint16_t_u_u(0xDEE1L, ((((((((safe_add_func_int64_t_s_s((*l_1145), (safe_lshift_func_uint8_t_u_u(g_741, g_1337)))) , ((((safe_sub_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((*l_1145), l_1463)), 7)), l_1464)), ((safe_sub_func_int8_t_s_s(func_16(((safe_sub_func_uint8_t_u_u(g_1080, (~((safe_mod_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(func_25((**l_1363), g_1443, g_1430, g_811), 1UL)) , &g_1335) == l_1473), (-5L))) || (*g_120))))) , 8L), g_188, (*l_1473)), g_811)) > (**l_1363)))) , (void*)0) == &g_900) ^ (*g_900))) , l_1464) == g_1443) && (*g_279)) >= 0xE51AACEA655EE49FLL) , g_1293) , g_342)));
                        return g_1425;
                    }
                    (*g_120) ^= (-1L);
                    (*l_1363) = (*l_1363);
                }
            }
            return l_1377;
        }
        else
        {
            int l_1476 = 0xDF81E05AL;
            int **l_1488 = &l_1147;
            (*g_279) |= (+((safe_rshift_func_uint16_t_u_s(((((**l_1363) , l_1476) , &g_120) != &l_1154), 1)) ^ (**l_1363)));
            (*l_1145) = (l_1476 != (((safe_mod_func_uint8_t_u_u((g_1078 == (&g_124 != ((safe_rshift_func_uint16_t_u_u(((l_1476 != g_1294) , (((((((((((g_1337 , 0x87L) < (((safe_add_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u(((func_3((**l_1363), (((safe_rshift_func_int8_t_s_u((5UL || g_790), l_1476)) , (void*)0) != &g_124), g_786) | 0x8B5A3821ED228D65LL) , l_1487), (*l_1145))) <= (**l_1363)) || (*l_1145)) | 0x96L) | g_811), 0x4FL)) >= g_1207) || 0xF9L)) , (void*)0) == (*l_1363)) , (void*)0) != l_1488) != 0xBB57L) | g_741) >= 0xC149L) , (*g_900)) <= 0x8E0A8D2BL)), g_67)) , &g_124))), (**l_1363))) > 0xC55EL) , (**l_1363)));
        }
    }
    (*l_1145) = (*g_279);
    for (g_811 = 0; (g_811 == (-8)); g_811 = safe_sub_func_int32_t_s_s(g_811, 7))
    {
        unsigned l_1496 = 18446744073709551610UL;
        int **l_1504 = &g_900;
        const unsigned l_1519 = 4294967295UL;
        const int *l_1580 = (void*)0;
        const int **l_1579 = &l_1580;
    }
    return g_1287;
}







static short func_3(short p_4, unsigned p_5, unsigned short p_6)
{
    int *l_1102 = &g_122;
    l_1102 = l_1102;
    return p_6;
}







static short func_7(unsigned p_8)
{
    const char l_20 = 8L;
    char l_30 = 0xEEL;
    char l_191 = 1L;
    int **l_574 = &g_120;
    short l_597 = (-1L);
    int l_623 = 0x1830DF20L;
    int l_757 = 0x8B0B8030L;
    int l_773 = 0xE21B30C6L;
    int l_796 = (-1L);
    int l_801 = 0xA7C6BF5DL;
    unsigned char l_902 = 246UL;
    int *l_946 = &l_796;
    int l_956 = (-5L);
    const int l_959 = (-7L);
    int *l_1095 = &l_623;
    (*g_279) = ((p_8 , func_10((g_2 == (func_16((((l_20 <= g_2) , g_2) , p_8), (safe_add_func_uint32_t_u_u(0xA2F3817DL, (safe_sub_func_int16_t_s_s(func_25(l_30, (p_8 & 0xEFFB91E6L), l_30, l_20), 0x132EL)))), l_20) , 0x26E48389L)), l_191, l_191, g_2, l_191)) <= p_8);
    for (l_191 = 0; (l_191 >= 1); l_191 = safe_add_func_int32_t_s_s(l_191, 4))
    {
        unsigned short l_554 = 1UL;
        int **l_557 = &g_279;
        unsigned l_572 = 4294967295UL;
        (*g_279) = (safe_add_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((func_16((p_8 == p_8), p_8, g_67) == (l_554 & l_30)), 4)) , p_8) , ((l_20 ^ l_30) < l_30)), 249UL));
        for (p_8 = (-9); (p_8 <= 29); p_8++)
        {
            int l_560 = 0x66E13537L;
            int l_561 = 0xE4D9DFDDL;
            char l_573 = 0x21L;
            l_561 ^= ((l_557 != &g_279) == (func_25((l_20 && g_479), p_8, g_119, ((safe_mod_func_uint64_t_u_u(0xD8E4A41DF838516CLL, (func_48(g_103, (*g_279)) , g_122))) , l_560)) ^ p_8));
            l_573 ^= (((safe_rshift_func_uint16_t_u_u(g_188, ((((safe_rshift_func_uint16_t_u_u((0x17F42B53B3FDABBALL && 1UL), (((((l_191 <= ((+(&l_557 != (void*)0)) && l_191)) , ((safe_add_func_uint32_t_u_u(l_561, (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_103, g_67)) >= l_191), g_188)))) & 2UL)) , 1L) != (-1L)) , 65535UL))) , 6UL) , 0x2C855293F3C21442LL) != (**l_557)))) , 0L) ^ l_572);
            (*g_279) = (**l_557);
            if (p_8)
                break;
        }
    }
    l_574 = l_574;
    if (((-1L) ^ (g_479 & (((safe_add_func_int8_t_s_s(((~(*g_279)) == (**l_574)), (g_122 , (+p_8)))) , ((safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((p_8 >= (g_479 > (safe_sub_func_int64_t_s_s(((((safe_lshift_func_uint16_t_u_s(g_119, 10)) | p_8) && (**l_574)) <= 65531UL), 0x6226C7B5BE34E2D2LL)))) , (**l_574)), (**l_574))), (**l_574))) || (**l_574))) <= (**l_574)))))
    {
        short l_593 = (-6L);
        int *l_607 = &g_122;
        int *l_618 = (void*)0;
        int l_636 = (-1L);
        int l_641 = 1L;
        int l_722 = 0xE6164F1CL;
        if (((safe_lshift_func_uint8_t_u_u(((p_8 , (**l_574)) | (((safe_mod_func_uint8_t_u_u((p_8 & 0xB5L), 247UL)) >= ((safe_add_func_uint32_t_u_u((~(safe_mod_func_uint8_t_u_u((**l_574), g_119))), (((g_473 , ((0x85137608L >= 0xC6087E68L) , g_479)) ^ g_479) ^ (**l_574)))) ^ l_593)) == 2UL)), g_122)) > l_593))
        {
            int l_594 = 0x77189A7CL;
            l_594 &= (**l_574);
            (*g_279) = (p_8 > (safe_mod_func_uint32_t_u_u(l_597, ((p_8 , ((g_342 != l_594) && p_8)) ^ ((((((void*)0 == &g_124) ^ g_122) || g_188) , 0xAFL) , p_8)))));
            for (g_479 = (-10); (g_479 != 45); ++g_479)
            {
                (*l_574) = (void*)0;
            }
        }
        else
        {
            unsigned short l_604 = 0xF660L;
            int * const l_617 = &g_122;
            int l_660 = (-4L);
            int l_668 = 0x897814F8L;
            for (l_30 = (-28); (l_30 >= 9); l_30 = safe_add_func_int8_t_s_s(l_30, 1))
            {
                return g_122;
            }
            if ((safe_lshift_func_uint16_t_u_u(l_604, g_103)))
            {
                int *l_608 = &g_122;
                for (l_30 = 0; (l_30 > 23); l_30 = safe_add_func_int8_t_s_s(l_30, 9))
                {
                    (*l_574) = l_607;
                    (*l_574) = l_608;
                }
                (*g_120) = (*g_120);
                (*l_574) = l_608;
            }
            else
            {
                short l_619 = 2L;
                int l_705 = 0x0A6CBC35L;
                int l_725 = 0x2F9ACDD0L;
                for (l_597 = 0; (l_597 != 23); l_597 = safe_add_func_int16_t_s_s(l_597, 1))
                {
                    int *l_611 = (void*)0;
                    int l_620 = 0x747779AAL;
                    int *l_621 = &g_67;
                    int *l_622 = (void*)0;
                    int *l_624 = (void*)0;
                    int *l_625 = &g_67;
                    int *l_626 = &l_620;
                    int *l_627 = &l_620;
                    int *l_628 = &l_620;
                    int *l_629 = &l_620;
                    int *l_630 = &g_67;
                    int *l_631 = &g_67;
                    int *l_632 = (void*)0;
                    int *l_633 = &g_122;
                    int *l_634 = &g_122;
                    int *l_635 = &l_620;
                    int *l_637 = &g_67;
                    int *l_638 = &l_620;
                    int *l_639 = &g_67;
                    int *l_640 = &g_122;
                    int *l_642 = &l_623;
                    int *l_643 = &l_623;
                    int *l_644 = (void*)0;
                    int *l_645 = (void*)0;
                    int *l_646 = &l_620;
                    int *l_647 = &l_623;
                    int *l_648 = &l_620;
                    int *l_649 = &g_122;
                    int *l_650 = (void*)0;
                    int *l_651 = &g_67;
                    int *l_652 = &l_623;
                    int *l_653 = &g_122;
                    int *l_654 = &l_636;
                    int l_655 = 0x61DE3778L;
                    int *l_656 = (void*)0;
                    int *l_657 = &g_122;
                    int *l_658 = (void*)0;
                    int *l_659 = &l_641;
                    int *l_661 = (void*)0;
                    int *l_662 = (void*)0;
                    int *l_663 = &l_641;
                    int *l_664 = &g_67;
                    int *l_665 = &g_122;
                    int *l_666 = (void*)0;
                    int *l_667 = &g_67;
                    int *l_669 = &l_641;
                    int *l_670 = (void*)0;
                    int *l_671 = &l_620;
                    int *l_672 = &l_655;
                    int *l_673 = &l_655;
                    int *l_675 = &l_636;
                    int *l_676 = &l_636;
                    int *l_677 = &l_620;
                    int *l_678 = &l_620;
                    int *l_679 = &l_655;
                    int *l_680 = &l_668;
                    int *l_681 = &g_122;
                    int *l_682 = &l_641;
                    int *l_683 = &g_122;
                    int *l_684 = &l_623;
                    int *l_685 = &l_655;
                    int *l_686 = &l_655;
                    int *l_687 = (void*)0;
                    int *l_688 = (void*)0;
                    int *l_689 = &l_636;
                    int *l_690 = &g_122;
                    int *l_691 = &l_636;
                    int *l_692 = &l_641;
                    int *l_693 = &g_122;
                    int *l_694 = &l_655;
                    int *l_695 = &l_623;
                    int *l_696 = (void*)0;
                    int *l_697 = &l_641;
                    int *l_698 = &g_67;
                    int l_699 = 1L;
                    int *l_700 = (void*)0;
                    int *l_702 = &l_620;
                    int *l_703 = &l_660;
                    int *l_704 = &l_623;
                    int *l_706 = &l_655;
                    int *l_707 = &l_655;
                    int *l_708 = (void*)0;
                    int *l_709 = (void*)0;
                    int *l_711 = &l_641;
                    int *l_712 = &l_668;
                    int *l_714 = &l_623;
                    int *l_715 = &g_67;
                    int *l_716 = (void*)0;
                    int *l_717 = &l_660;
                    int *l_718 = &l_641;
                    int *l_719 = (void*)0;
                    int *l_720 = (void*)0;
                    int *l_721 = &l_641;
                    int *l_723 = &l_641;
                    int *l_724 = (void*)0;
                    (*l_607) |= ((0x6A56L != (l_611 == (*l_574))) < (safe_sub_func_int16_t_s_s(((l_574 != ((3UL <= (l_604 > (g_342 ^ (*g_120)))) , l_574)) != 0x176E3BB3AB9D2628LL), 0xD528L)));
                    if ((**l_574))
                    {
                        char l_616 = 9L;
                        l_616 = p_8;
                        (*l_574) = (*l_574);
                        (*g_279) = l_604;
                        (*g_279) = (0x9FD4L <= (((l_616 , l_617) != l_618) , g_473));
                    }
                    else
                    {
                        return l_619;
                    }
                    (**l_574) ^= (-1L);
                    --g_726;
                }
                (*g_279) = (!func_37(g_188, g_726, (p_8 && ((safe_lshift_func_uint8_t_u_u(p_8, 0)) <= ((safe_mod_func_uint8_t_u_u(((!(g_710 <= (0x50DFF940L == ((safe_rshift_func_uint8_t_u_s(((0L > ((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_8, (safe_sub_func_int8_t_s_s((0x050638CB4816DE83LL && p_8), 0xB9L)))), 2)) > p_8)) || 0xE36B42CDAE556B8DLL), p_8)) == 0xC5F6E89759DFCCB9LL)))) ^ g_122), g_741)) ^ 0x4AL))), g_342, l_705));
                if (((safe_unary_minus_func_int64_t_s((safe_rshift_func_int8_t_s_s(0x79L, g_342)))) , (safe_mod_func_uint32_t_u_u((&l_618 != &l_617), (*l_607)))))
                {
                    int *l_747 = &l_636;
                    (*l_574) = (*l_574);
                    (*l_574) = l_747;
                }
                else
                {
                    int l_748 = (-1L);
                    (*g_120) &= (((0xE497CDE0B344B1F3LL >= g_342) >= l_748) & 0x5A46834A6A2CB048LL);
                }
            }
        }
    }
    else
    {
        int *l_749 = &g_122;
        int *l_750 = &g_122;
        int *l_751 = &l_623;
        int *l_752 = &l_623;
        int *l_753 = &g_122;
        int *l_754 = &g_122;
        int *l_755 = &g_67;
        int *l_756 = &g_67;
        int *l_758 = &l_757;
        int *l_759 = &l_623;
        int *l_760 = (void*)0;
        int *l_761 = &l_757;
        int *l_762 = &g_122;
        int *l_763 = &l_757;
        int *l_764 = (void*)0;
        int *l_765 = &g_67;
        int *l_766 = &g_67;
        int l_767 = 0L;
        int *l_768 = (void*)0;
        int *l_769 = &l_623;
        int *l_770 = (void*)0;
        int *l_771 = &l_767;
        int l_772 = 0L;
        int *l_774 = &l_773;
        int *l_775 = &g_67;
        int *l_776 = &l_773;
        int *l_777 = (void*)0;
        int *l_778 = &g_122;
        int *l_779 = &g_67;
        int *l_780 = &l_767;
        int *l_781 = (void*)0;
        int l_782 = 0x1E7D03FEL;
        int *l_783 = &l_782;
        int *l_784 = &l_772;
        int l_785 = 0x2E87FBA5L;
        int *l_787 = &l_757;
        int *l_788 = &g_67;
        int *l_789 = &l_767;
        int *l_791 = &l_772;
        int *l_792 = &l_757;
        int *l_793 = &l_785;
        int *l_794 = &l_785;
        int *l_795 = (void*)0;
        int *l_797 = &g_790;
        int l_798 = 0L;
        int *l_799 = (void*)0;
        int *l_800 = &l_798;
        int *l_802 = &l_757;
        int *l_803 = (void*)0;
        int *l_804 = &l_767;
        int *l_805 = &g_67;
        int *l_806 = &l_773;
        int *l_807 = &l_767;
        int *l_808 = &l_757;
        int *l_809 = &l_767;
        int *l_810 = &l_796;
        unsigned long long l_854 = 0x55FE90C1BA8C0FF4LL;
        int ***l_882 = &l_574;
        long long l_921 = 0xFE6C2C894702FB12LL;
        char l_965 = 0x01L;
        const unsigned char l_1100 = 1UL;
        --g_812;
        if (((((safe_add_func_int16_t_s_s(((g_741 || func_37(g_2, ((safe_rshift_func_int8_t_s_u(((*l_774) != func_33((((((((0xE571CB56L != (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((**l_574) >= (safe_lshift_func_uint8_t_u_s(g_786, ((!(safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s((func_51(g_103, (*l_763), ((((**l_574) || p_8) != (**l_574)) , (*g_279)), g_713, g_67) & p_8), p_8)), 0x27L))) > (**l_574))))), 1)) | 1L), (-8L)))) == g_786) <= 0L) || (*l_762)) , (**l_574)) , p_8) && g_701), g_119, p_8)), g_473)) ^ p_8), g_790, g_710, p_8)) != 1L), p_8)) <= g_188) <= 0xE619L) || 0x5D25L))
        {
            const unsigned l_837 = 0UL;
            int **l_842 = &l_774;
            int l_852 = 0xDED81374L;
            int l_923 = 0x06D92E9CL;
            int l_1014 = 1L;
            for (l_801 = 0; (l_801 == 2); l_801 = safe_add_func_uint16_t_u_u(l_801, 6))
            {
                return p_8;
            }
            if (((**l_574) != ((*l_776) >= (((((0xADL > ((+0x1D70DFB1L) == (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((~((safe_mod_func_int16_t_s_s((l_574 != (p_8 , (void*)0)), l_837)) < ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u(((**l_574) > l_837), p_8)) ^ 0xFAL), l_837)) || l_837))), p_8)), 4)))) > (*g_120)) , l_842) == &g_279) || g_473))))
            {
                int ** const l_843 = &l_754;
                int l_853 = 0x552334DEL;
                const int l_860 = (-7L);
                char l_874 = 0L;
                if (p_8)
                {
                    const int l_848 = 0L;
                    int **l_851 = &l_803;
                    (*l_802) = (&l_802 == l_843);
                    (*l_574) = (*l_843);
                    for (p_8 = 0; (p_8 < 13); p_8++)
                    {
                        (*l_791) = (safe_rshift_func_int8_t_s_u((l_848 & p_8), (((((func_48(p_8, (safe_add_func_uint32_t_u_u(0x232DB239L, (p_8 && g_67)))) , 0UL) , (func_37((**l_842), g_786, g_122, (**l_843), p_8) , l_851)) != (void*)0) > p_8) | p_8)));
                        (*l_843) = (*l_574);
                        l_854++;
                    }
                    for (g_2 = (-10); (g_2 == (-9)); g_2 = safe_add_func_int32_t_s_s(g_2, 2))
                    {
                        int *l_859 = &l_767;
                        l_859 = (void*)0;
                    }
                }
                else
                {
                    char l_871 = 0x2CL;
                    if (((-9L) & ((func_10(l_860, ((((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((g_790 | ((**l_842) < (func_25((((safe_lshift_func_uint8_t_u_u(((p_8 ^ ((((safe_rshift_func_uint8_t_u_u((**l_842), 6)) | (safe_mod_func_int8_t_s_s((*l_774), g_786))) < (**l_843)) > g_812)) , (*l_753)), 3)) , p_8) , 0x13L), p_8, (**l_842), p_8) >= g_479))), (*l_774))), l_871)) , (void*)0) != (void*)0) , p_8), p_8, g_479, p_8) , l_574) != l_843)))
                    {
                        (**l_842) = (safe_sub_func_int64_t_s_s(g_674, g_812));
                    }
                    else
                    {
                        unsigned short l_875 = 0xA111L;
                        short l_890 = 0x81B3L;
                        ++l_875;
                        (*l_752) &= (((func_48(g_713, p_8) == (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(8L, ((l_882 != (void*)0) == ((g_188 && (~((safe_rshift_func_int16_t_s_u((((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(g_889, g_790)), l_890)) <= 0xA0L) <= 0xD8E3C6B4759EF1E7LL) , 0xF2E04018L) != g_674), 0)) , 0xD34CL))) , p_8)))), g_479))) , 0xDBAA6A9FL) == 0xFA96B56BL);
                    }
                }
                for (g_741 = 19; (g_741 < 10); g_741 = safe_sub_func_uint16_t_u_u(g_741, 1))
                {
                    char l_899 = (-8L);
                    int l_905 = 7L;
                    for (l_623 = 26; (l_623 >= 24); l_623 = safe_sub_func_uint64_t_u_u(l_623, 3))
                    {
                        unsigned short l_901 = 65535UL;
                        (*l_809) &= ((((((((*l_882) != &g_120) | (safe_add_func_int64_t_s_s((((0x71L && g_811) != (safe_add_func_int64_t_s_s((0x72C318274D20BFB8LL & p_8), ((1L == func_37(((*l_574) == (l_899 , g_900)), g_812, g_342, p_8, l_901)) , p_8)))) <= g_473), g_2))) , g_674) || l_902) >= 0x5DABL) && p_8) | 0x3CF60F868640BC58LL);
                        (*l_842) = (((l_899 | ((**l_842) != (safe_lshift_func_uint8_t_u_u((p_8 , g_741), 4)))) ^ g_479) , (*l_574));
                    }
                    if ((**l_842))
                    {
                        unsigned char l_906 = 0x42L;
                        --l_906;
                        (*l_778) = 0L;
                        (*l_749) = (g_67 < ((void*)0 == (*l_843)));
                    }
                    else
                    {
                        unsigned l_913 = 0x7CD6EA67L;
                        (*l_769) |= func_16((((**l_843) && (((safe_add_func_int32_t_s_s((**l_843), 0x45A4D8D0L)) >= g_713) ^ p_8)) >= 0UL), ((**l_842) >= (((l_899 , ((safe_lshift_func_int8_t_s_s((((~(func_51(func_51(g_889, g_122, (*g_900), l_913, (**l_574)), g_812, p_8, g_67, (**l_843)) && (*g_900))) != g_188) != g_119), 2)) , 0x5DL)) >= 0x18L) , g_122)), p_8);
                    }
                    if (((p_8 != 0x757E246BL) <= ((void*)0 == &g_120)))
                    {
                        if ((*g_120))
                            break;
                        (*l_843) = &g_67;
                    }
                    else
                    {
                        unsigned char l_914 = 0x0AL;
                        l_914--;
                    }
                    (*l_792) ^= ((((**l_843) ^ (((&g_124 == &g_124) < l_899) | ((((safe_add_func_int8_t_s_s(p_8, (0xFCL < (((safe_lshift_func_int16_t_s_u(l_921, (!((p_8 <= (&g_124 == (void*)0)) , (**l_843))))) , p_8) , 0xBCL)))) & p_8) , (void*)0) == (void*)0))) || 0x314FE9D8DE652834LL) != l_905);
                }
            }
            else
            {
                int l_922 = 0xE5960AA1L;
                int *l_924 = &l_623;
                int *l_925 = &g_122;
                int *l_926 = &l_798;
                int *l_927 = (void*)0;
                int l_928 = (-1L);
                int *l_929 = (void*)0;
                int *l_930 = &l_772;
                int *l_931 = &l_757;
                int *l_932 = &l_785;
                int *l_933 = &l_923;
                int *l_934 = &g_790;
                int *l_935 = &l_772;
                int *l_936 = &l_798;
                int *l_937 = &l_796;
                int *l_938 = (void*)0;
                ++g_939;
                for (g_741 = 0; (g_741 > 58); g_741++)
                {
                    (*l_842) = (*l_574);
                    return g_2;
                }
            }
            for (l_798 = (-11); (l_798 <= 15); l_798 = safe_add_func_uint16_t_u_u(l_798, 4))
            {
                int *l_947 = (void*)0;
                if ((*l_754))
                    break;
                (**l_882) = l_946;
                (*l_842) = l_947;
            }
            if ((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_uint16_t_u_s(((void*)0 != &g_889), 11)) , p_8) , ((((safe_unary_minus_func_uint64_t_u((!((g_188 , p_8) , ((((safe_unary_minus_func_int64_t_s(((g_790 < func_25(g_479, (*l_800), (safe_rshift_func_uint8_t_u_s(func_16((((((*l_574) != (void*)0) >= 0x4F62L) , (*g_900)) == 0x9F5C1878L), p_8, (**l_574)), 7)), g_889)) != l_956))) & 6L) > 0xF5L) | g_889))))) | 0x1BE54031L) , (void*)0) == (void*)0)) >= g_939) | 0x94BDL), p_8)))
            {
                char l_962 = 0x4AL;
                int *l_985 = &g_122;
                int l_990 = 4L;
                int l_992 = (-1L);
                int l_1004 = 0x571DCE72L;
                (*l_804) = (func_25(((safe_sub_func_uint8_t_u_u(l_959, (safe_lshift_func_uint8_t_u_u((l_962 < (((safe_sub_func_int64_t_s_s(g_119, (((((((func_48(p_8, l_965) ^ 4294967294UL) || (*l_946)) && g_67) , 0x3CFCL) != 0x02E0L) & 0x6302L) , 1L))) ^ l_962) , (*l_807))), g_119)))) <= (*l_946)), l_962, p_8, l_962) , 0L);
                if ((((void*)0 == (*g_124)) || ((!(p_8 != (safe_mod_func_int32_t_s_s((*g_279), 6L)))) & ((p_8 > ((safe_rshift_func_int16_t_s_u((p_8 && (p_8 , ((*g_124) == (*g_124)))), 15)) < (*l_946))) , p_8))))
                {
                    int **l_972 = &l_766;
                    (*g_279) = (p_8 && ((*g_120) == 4294967286UL));
                    (*l_750) = 0x82CEE31CL;
                    if (func_48(g_726, ((void*)0 != l_972)))
                    {
                        int *l_973 = &l_782;
                        (*l_972) = l_973;
                        (*l_574) = (*l_972);
                        (*l_763) &= ((((func_10((g_674 , (safe_add_func_int8_t_s_s(((((*l_973) , (safe_rshift_func_uint8_t_u_u((((*l_973) , p_8) >= ((((*l_882) == (*l_882)) , ((&g_900 != (void*)0) <= (safe_lshift_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((func_48((((l_962 , (*l_972)) != (void*)0) == l_962), p_8) | 0x62E0L), 0x50F5L)) ^ 0x9AL) == p_8) >= g_812), g_2)))) | 7L)), 3))) > g_103) , 5L), (**l_972)))), g_726, g_713, (*l_946), g_939) > g_939) , p_8) <= g_674) , p_8);
                    }
                    else
                    {
                        int l_984 = 0xED91C3A1L;
                        (**l_882) = (*g_124);
                        l_984 |= (safe_mod_func_uint16_t_u_u(p_8, ((((*g_124) == (void*)0) || ((((void*)0 == &g_124) < g_103) >= (-10L))) ^ g_119)));
                        (*l_763) = p_8;
                    }
                }
                else
                {
                    int l_989 = 0x260C0D1AL;
                    int l_993 = (-1L);
                    int l_1028 = 7L;
                    int l_1045 = 1L;
                    (**l_882) = l_985;
                    if ((**l_574))
                    {
                        (**l_882) = (*g_124);
                    }
                    else
                    {
                        unsigned long long l_986 = 1UL;
                        int l_991 = (-3L);
                        int *l_994 = &l_956;
                        int *l_995 = &l_956;
                        int *l_996 = &l_623;
                        int *l_997 = &l_767;
                        int *l_998 = &l_796;
                        int *l_999 = &l_796;
                        int *l_1000 = &l_773;
                        int *l_1001 = (void*)0;
                        int *l_1002 = &g_67;
                        int *l_1003 = (void*)0;
                        int *l_1005 = &l_767;
                        int l_1006 = 5L;
                        int *l_1007 = (void*)0;
                        int *l_1008 = &l_993;
                        int *l_1009 = &g_122;
                        int *l_1010 = (void*)0;
                        int *l_1011 = (void*)0;
                        int *l_1012 = &l_801;
                        int *l_1013 = &l_798;
                        int *l_1015 = &l_796;
                        int *l_1016 = &l_1006;
                        int *l_1017 = &l_785;
                        int *l_1018 = &l_923;
                        int *l_1019 = (void*)0;
                        int *l_1020 = &g_790;
                        int *l_1021 = &l_923;
                        int *l_1022 = &l_767;
                        int *l_1023 = (void*)0;
                        int *l_1024 = &l_1006;
                        int *l_1025 = &g_790;
                        int *l_1026 = &l_1014;
                        int *l_1027 = &l_757;
                        int *l_1029 = (void*)0;
                        int *l_1030 = (void*)0;
                        int *l_1031 = &l_956;
                        int *l_1032 = &l_993;
                        long long l_1033 = (-9L);
                        int *l_1034 = (void*)0;
                        int *l_1035 = (void*)0;
                        int *l_1036 = &l_992;
                        int *l_1037 = &l_782;
                        int *l_1038 = (void*)0;
                        int *l_1039 = (void*)0;
                        int *l_1040 = (void*)0;
                        int *l_1041 = (void*)0;
                        int *l_1042 = &l_990;
                        int l_1043 = 0x8DAC04D5L;
                        int *l_1044 = &l_773;
                        int *l_1046 = &l_1006;
                        int *l_1047 = &l_923;
                        int *l_1048 = &l_801;
                        int *l_1049 = &l_1006;
                        int *l_1050 = &l_1045;
                        (*l_758) = func_16(l_986, func_25(g_674, (safe_mod_func_int8_t_s_s((0L == g_2), func_37(((*l_946) , (!g_710)), g_741, g_188, l_989, p_8))), (*l_946), g_713), g_713);
                        --g_1051;
                    }
                    (*l_763) = (safe_sub_func_uint32_t_u_u((((p_8 > (safe_sub_func_int8_t_s_s(p_8, ((*l_752) >= (1L <= (&g_279 != ((**l_574) , &g_120))))))) >= (p_8 >= (safe_mod_func_uint16_t_u_u((**l_574), 65532UL)))) & 0x94L), (*l_771)));
                }
                return g_713;
            }
            else
            {
                return p_8;
            }
        }
        else
        {
            const unsigned long long l_1072 = 18446744073709551615UL;
            int l_1077 = 1L;
            int *l_1083 = &l_772;
            for (g_812 = 0; (g_812 >= 53); g_812++)
            {
                (*l_802) |= ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((&g_124 != (void*)0), func_16(func_51(p_8, (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_8, (safe_add_func_int64_t_s_s(g_188, g_674)))), p_8)), ((p_8 ^ (((1L || (*l_946)) | g_2) && p_8)) == 0xED6B403202AB1F62LL), p_8, g_2), g_786, l_1072))), p_8)) >= 0x2149L);
                for (l_854 = 0; (l_854 != 27); l_854++)
                {
                    int l_1075 = (-1L);
                    int l_1076 = 1L;
                    (*g_124) = (*g_124);
                    ++g_1080;
                }
                (**l_882) = l_1083;
            }
            for (g_1079 = 10; (g_1079 > 21); ++g_1079)
            {
                for (l_30 = 0; (l_30 <= 21); l_30++)
                {
                    unsigned l_1090 = 0x9469ADABL;
                    int l_1091 = 6L;
                    (**l_882) = (*l_574);
                    (**l_882) = &l_1077;
                    if (((*l_946) , (safe_rshift_func_uint8_t_u_s((func_33((*l_1083), (p_8 == (6UL > p_8)), func_48(l_1090, (*l_1083))) < g_889), 5))))
                    {
                        unsigned l_1092 = 0x3F4752EAL;
                        ++l_1092;
                        if ((*l_946))
                            break;
                        (*l_574) = (*l_574);
                    }
                    else
                    {
                        return p_8;
                    }
                    l_1095 = &l_1091;
                }
            }
        }
        (*l_759) ^= ((g_811 || 0x51L) || (safe_add_func_uint64_t_u_u(p_8, (safe_lshift_func_int16_t_s_u(g_786, func_10(g_939, (+(l_882 != &g_124)), (((**l_574) && (&g_889 == (void*)0)) > (*l_761)), l_1100, (*l_756)))))));
    }
    return p_8;
}







static int func_10(const unsigned p_11, char p_12, const unsigned char p_13, const unsigned char p_14, unsigned char p_15)
{
    char l_194 = (-7L);
    unsigned short l_201 = 0x3744L;
    unsigned char l_202 = 255UL;
    unsigned short l_203 = 0UL;
    int l_204 = (-10L);
    unsigned char l_217 = 7UL;
    int ** const l_220 = &g_120;
    unsigned long long l_221 = 7UL;
    int *l_222 = (void*)0;
    int *l_223 = &g_67;
    unsigned l_228 = 4294967295UL;
    unsigned l_229 = 0xF9C83895L;
    short l_230 = 0xF36BL;
    int l_292 = 0x9D70C356L;
    unsigned l_349 = 0x2E0FEB04L;
    long long l_364 = 0L;
    int *l_369 = &l_292;
    int l_420 = 5L;
    int l_435 = 0L;
    int l_443 = 0xE91A71D5L;
    int l_455 = 0L;
    int l_464 = 1L;
    long long l_525 = 4L;
    l_204 = (func_16((((safe_add_func_uint32_t_u_u(((((0xEBL ^ (func_51((((4294967295UL & (0xB8BA9382BCC5AAFBLL <= p_13)) == l_194) , l_194), ((safe_lshift_func_uint16_t_u_s(0x59CAL, (safe_lshift_func_int16_t_s_s(g_119, ((safe_lshift_func_uint8_t_u_u(p_11, 5)) == 0x7533L))))) || l_194), p_12, l_201, p_13) && l_202)) >= p_12) , 0x56814D94109EAC81LL) == l_202), (-1L))) , 65527UL) ^ l_201), l_202, p_15) & l_203);
    (*l_223) = ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((((safe_lshift_func_uint16_t_u_s(1UL, 10)) & (safe_sub_func_uint8_t_u_u((((&g_120 != &g_120) < g_188) & (safe_mod_func_uint32_t_u_u(((((safe_unary_minus_func_int16_t_s(((safe_mod_func_uint32_t_u_u(l_217, (func_33(((p_11 <= ((safe_sub_func_int32_t_s_s((**g_124), 0xFE971D65L)) | (((((g_122 != 65532UL) , &g_120) != l_220) ^ g_103) >= 0xFEL))) , 0x6105L), g_2, p_15) ^ g_188))) != 6UL))) <= l_221) && p_13) > l_217), (-1L)))), g_188))) & 0xFF6AL))), 0L)) , (**l_220));
    (*g_124) = (*g_124);
    if (((safe_lshift_func_uint16_t_u_s((((void*)0 != (*l_220)) , (((void*)0 != &g_120) && ((safe_rshift_func_uint16_t_u_s(l_228, ((&g_120 == (((((p_12 <= (((func_48(((l_229 <= 65535UL) , (*l_223)), (**g_124)) && g_188) , 6UL) & p_14)) <= 4294967295UL) , g_188) < 0xEE85EEBDL) , &g_120)) <= g_122))) , 0x31L))), l_230)) == g_119))
    {
        int l_240 = 1L;
        int l_243 = 0x96E1A12AL;
        int *l_285 = &l_204;
        int *l_286 = (void*)0;
        int *l_287 = &l_204;
        int *l_288 = &l_243;
        int *l_289 = (void*)0;
        int *l_290 = &g_122;
        int *l_291 = (void*)0;
        int *l_293 = (void*)0;
        int *l_294 = &l_204;
        int *l_295 = &l_240;
        int *l_296 = &g_122;
        int *l_297 = &l_292;
        int *l_298 = (void*)0;
        int *l_299 = &l_204;
        int l_300 = 7L;
        int *l_301 = &g_67;
        int *l_302 = &g_67;
        int *l_303 = &g_122;
        int *l_304 = &g_67;
        int *l_305 = &g_67;
        int *l_306 = &g_67;
        int *l_307 = &l_300;
        int *l_308 = &l_204;
        int *l_309 = (void*)0;
        int *l_310 = (void*)0;
        int *l_311 = &g_67;
        int *l_312 = &g_67;
        int *l_313 = (void*)0;
        int *l_314 = &l_204;
        int *l_315 = &l_204;
        int *l_316 = &l_243;
        int *l_317 = &g_122;
        int *l_318 = (void*)0;
        int *l_319 = &l_204;
        int *l_320 = &l_204;
        int *l_321 = &l_243;
        int *l_322 = &l_204;
        int *l_323 = &g_67;
        int *l_324 = &l_204;
        int *l_325 = &l_243;
        int *l_326 = &g_67;
        int *l_327 = &l_204;
        int *l_328 = &l_292;
        int *l_329 = &g_67;
        int *l_330 = &g_67;
        int *l_331 = &l_292;
        int *l_332 = &g_67;
        int *l_333 = &l_204;
        int l_334 = 0xA3C3AD9DL;
        int *l_335 = &l_292;
        int *l_336 = &l_334;
        int *l_337 = &l_292;
        int *l_338 = &g_67;
        int *l_339 = (void*)0;
        int *l_340 = &l_204;
        int *l_341 = &l_204;
        int *l_356 = &l_243;
        int l_379 = (-1L);
        for (g_2 = 0; (g_2 < 19); g_2 = safe_add_func_uint32_t_u_u(g_2, 1))
        {
            unsigned l_239 = 18446744073709551615UL;
            char l_246 = 0xF9L;
            int **l_262 = &l_222;
            (*g_124) = (*g_124);
            for (l_230 = 0; (l_230 >= (-26)); l_230 = safe_sub_func_uint16_t_u_u(l_230, 5))
            {
                int l_241 = (-4L);
                unsigned short l_242 = 0x8CF8L;
                if (p_15)
                    break;
                l_243 ^= func_51(g_67, func_51((!((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((l_239 | 0x9917L), (&g_120 != (void*)0))), (((g_67 , g_67) != (+((0x6C71AA19CEE7FFB0LL && l_240) , l_240))) < p_12))) >= l_240)), l_241, (**g_124), l_240, p_11), p_13, l_241, l_242);
                for (l_239 = 0; (l_239 < 15); ++l_239)
                {
                    unsigned l_270 = 0UL;
                    int l_275 = 0xCF91862BL;
                    if (func_16(l_246, (safe_sub_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(0x7EB1C1D09703DA3ALL, ((~(safe_mod_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s(((**l_220) || (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(func_37(g_103, p_14, g_103, g_119, p_11), 2)), p_11))), g_122)) == g_2) , g_67), (-10L)))) , (-7L)))) && 0x6EE1L), p_14)), p_15))
                    {
                        int *l_261 = &l_243;
                        (*l_262) = ((l_240 ^ (safe_rshift_func_int16_t_s_s((((void*)0 != l_261) | ((((p_11 <= (l_246 == (((&g_120 == l_262) < (p_13 , (safe_add_func_int16_t_s_s(0x4B8BL, (**l_220))))) >= g_103))) != g_122) <= 65526UL) <= p_14)), 6))) , (void*)0);
                    }
                    else
                    {
                        int *l_265 = &l_241;
                        int *l_271 = &l_240;
                        (**g_124) |= p_12;
                        (*l_265) |= (*g_120);
                        (*l_271) |= ((((safe_lshift_func_int16_t_s_s(((((p_14 >= ((((1UL | (safe_add_func_int8_t_s_s((~p_13), p_11))) >= ((l_243 >= 0UL) > l_270)) == g_119) ^ ((*l_223) && (*l_265)))) == p_15) , &l_240) == (*l_220)), g_103)) < l_242) < (**g_124)) , l_270);
                    }
                    for (l_201 = 0; (l_201 >= 13); ++l_201)
                    {
                        long long l_274 = 0xBD7E3A3705BE9AF0LL;
                        l_274 = (*g_120);
                        (*g_120) &= (l_241 , (-4L));
                    }
                    l_275 = ((*g_124) != (void*)0);
                }
                for (g_122 = (-7); (g_122 < (-27)); g_122--)
                {
                    unsigned l_284 = 1UL;
                    (**g_124) = (*g_120);
                    (**g_124) = (g_119 || ((safe_unary_minus_func_int16_t_s((((func_37(((0xB6CEE01EBF44B9ECLL || (((g_279 == (p_14 , &l_243)) | ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_240, ((&g_120 != l_262) && (-1L)))), g_119)) & p_15)) , g_67)) > 0xEB71L), l_284, p_14, (*l_223), l_242) , (*l_262)) == (*g_124)) , (-6L)))) > p_15));
                    (*l_223) = (*g_279);
                }
            }
        }
        (**l_220) ^= p_14;
        --g_342;
        if ((g_103 , (((func_51((*l_325), (safe_rshift_func_int8_t_s_u(g_2, 6)), (safe_add_func_int8_t_s_s((*l_288), g_2)), (g_2 >= p_13), l_349) || (*l_328)) || (**g_124)) , 0xDE2D49E9L)))
        {
            unsigned char l_354 = 250UL;
            int *l_355 = (void*)0;
            (*l_302) = (safe_sub_func_uint32_t_u_u((func_51((!(safe_mod_func_uint32_t_u_u(g_342, (g_188 , l_354)))), g_119, p_13, g_122, (func_37(p_12, (l_355 == l_356), g_103, (**l_220), (*l_317)) < g_2)) == 0xF654L), g_188));
            if ((((((*l_223) | func_16(((!(p_14 , (safe_add_func_int32_t_s_s(((g_122 & (0L ^ p_15)) < (g_122 , (g_122 , (safe_rshift_func_uint16_t_u_u(p_15, 7))))), 0xA8CC3E68L)))) , (**l_220)), (**l_220), p_11)) , g_2) && 0UL) <= p_11))
            {
                unsigned short l_361 = 0x68E2L;
                l_361--;
                return l_364;
            }
            else
            {
                unsigned long long l_378 = 0xF387A5E890350B1FLL;
                (*l_333) ^= (safe_rshift_func_int8_t_s_u(((g_67 , (safe_rshift_func_int16_t_s_s(g_119, (l_355 != (void*)0)))) < (((l_369 != &l_243) ^ ((safe_mod_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(func_51((safe_rshift_func_uint8_t_u_u(((((p_13 >= (safe_rshift_func_int8_t_s_u(g_67, 2))) != p_15) > 0x33L) || (*g_120)), g_103)), l_378, (*g_120), p_15, g_188), (*l_305))) <= g_188), l_379)) ^ p_14)) > 0x1F39B6BEL)), 6));
                (*l_330) &= (l_355 == (void*)0);
                return (**g_124);
            }
        }
        else
        {
            int ***l_380 = &g_124;
            (**l_220) = p_11;
            (*l_380) = (void*)0;
            (*l_220) = (*l_220);
        }
    }
    else
    {
        unsigned char l_390 = 8UL;
        int *l_408 = &l_292;
        int l_430 = 0x19BEA268L;
        int l_440 = 0xF2FC5D0FL;
        int l_454 = (-2L);
        int l_476 = 0L;
        int ***l_499 = (void*)0;
        int l_501 = 0x163C3191L;
        int * const l_535 = (void*)0;
        for (l_292 = 0; (l_292 == (-30)); l_292 = safe_sub_func_uint64_t_u_u(l_292, 7))
        {
            unsigned l_389 = 1UL;
            const unsigned char l_414 = 1UL;
            int l_416 = 0x96BA76FAL;
            int l_449 = (-1L);
            int l_459 = (-1L);
            int l_465 = 4L;
            int ***l_498 = &g_124;
            long long l_524 = 0x74702C837289CA02LL;
            if ((*g_279))
            {
                unsigned short l_391 = 0x20B6L;
                int l_404 = (-2L);
                int l_407 = (-6L);
                long long l_413 = (-6L);
                const char l_496 = 0x0DL;
                int **l_497 = &l_369;
                l_404 |= (safe_lshift_func_int8_t_s_u((g_342 && (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((247UL | l_389), func_33(l_390, l_391, (((p_15 | (safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((g_188 | (+(((((((safe_mod_func_int16_t_s_s((*l_223), (safe_rshift_func_int8_t_s_s((*l_223), 3)))) , p_15) , g_122) > p_11) , 0x1B1E60F4L) != l_391) <= p_13))), p_14)), g_188)), g_188)) & g_188), p_13))) == l_391) == 0xC9C6DE08E547FC5BLL)))), g_2))), p_12));
                for (l_404 = 0; (l_404 != (-24)); l_404 = safe_sub_func_uint16_t_u_u(l_404, 3))
                {
                    l_407 = p_14;
                }
                if (p_15)
                {
                    unsigned char l_415 = 0x9AL;
                    int *l_417 = &l_404;
                    int *l_418 = &l_416;
                    int *l_419 = &g_67;
                    int *l_421 = (void*)0;
                    int *l_422 = (void*)0;
                    int *l_423 = (void*)0;
                    int *l_424 = &l_407;
                    int *l_425 = &l_204;
                    int *l_426 = &l_404;
                    int *l_427 = &l_420;
                    int *l_428 = &g_122;
                    int *l_429 = (void*)0;
                    int *l_431 = &l_204;
                    int *l_432 = &l_420;
                    int *l_433 = &l_404;
                    int *l_434 = &l_404;
                    int *l_436 = &g_122;
                    int *l_437 = &g_67;
                    int *l_438 = &g_67;
                    int *l_439 = &l_204;
                    int *l_441 = &l_430;
                    int *l_442 = &g_67;
                    int *l_444 = (void*)0;
                    int *l_445 = &g_67;
                    int *l_446 = &g_67;
                    int *l_447 = &l_443;
                    int *l_448 = &l_443;
                    int *l_450 = &l_449;
                    int *l_451 = &g_67;
                    int *l_452 = &g_67;
                    int *l_453 = &l_449;
                    int *l_456 = &l_454;
                    int *l_457 = (void*)0;
                    int *l_458 = &l_204;
                    int *l_460 = &l_455;
                    int *l_461 = &l_443;
                    int *l_462 = &l_459;
                    int *l_463 = &l_407;
                    int *l_466 = (void*)0;
                    int *l_467 = &l_443;
                    int *l_468 = &l_440;
                    int *l_469 = &l_407;
                    int *l_470 = &l_465;
                    int *l_471 = &l_404;
                    int *l_472 = &g_122;
                    int *l_474 = &g_122;
                    int *l_475 = (void*)0;
                    int *l_477 = &g_67;
                    int *l_478 = &g_67;
                    if (((p_14 == ((*g_120) & ((l_408 == (void*)0) && (p_14 != (g_2 , 0xB69BL))))) , ((0x8582A176321C2590LL ^ (((safe_sub_func_uint64_t_u_u((func_25((safe_mod_func_int32_t_s_s(((p_13 ^ 1L) >= 0x93L), p_11)), l_413, g_188, g_122) == g_188), l_414)) != 0x459B3AB6L) ^ l_414)) & (-5L))))
                    {
                        (*g_124) = (*g_124);
                    }
                    else
                    {
                        (*l_220) = (*g_124);
                        return l_414;
                    }
                    if ((*l_369))
                        continue;
                    l_415 = (((func_33(l_414, (*l_369), l_413) , (*l_220)) != (void*)0) >= 0x9D70L);
                    --g_479;
                }
                else
                {
                    unsigned long long l_500 = 0x7D5DB6B6C4DFBE51LL;
                    l_501 ^= ((((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_122, ((safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((((func_48(p_15, (g_67 < g_342)) , ((((((65532UL != 0xBF58L) < ((~(((safe_mod_func_uint32_t_u_u(l_389, 0x8A5E5BA5L)) && l_496) >= 18446744073709551615UL)) & p_11)) , l_497) == l_497) , 8UL) < 8L)) <= 0xB794A918L) , l_498) == l_499), p_13)), p_14)) & (*l_408)))), p_14)))) != p_13), g_342)) < p_12) <= g_103) , g_103) ^ p_11) > l_500);
                }
            }
            else
            {
                (*l_223) = 8L;
            }
            if ((*g_120))
                continue;
            if (p_12)
            {
                int *** const l_512 = &g_124;
                const unsigned long long l_532 = 1UL;
                for (g_473 = 0; (g_473 >= 18); ++g_473)
                {
                    int *l_513 = &l_476;
                    unsigned long long l_518 = 18446744073709551615UL;
                    if ((safe_mod_func_uint64_t_u_u(p_13, ((safe_sub_func_uint8_t_u_u(((-2L) > (func_37((safe_sub_func_uint16_t_u_u(func_51((((((((g_103 | (safe_mod_func_uint32_t_u_u(1UL, (((0x5E0DL >= (~func_51((*l_369), p_11, ((l_498 != l_512) | g_473), (*l_408), p_12))) != p_13) ^ (***l_498))))) , (*g_124)) == l_513) != p_13) , 0L) >= 2UL) , 1L), (***l_512), p_12, p_12, g_119), g_473)), p_12, (*l_513), p_12, (***l_498)) <= p_13)), 255UL)) , 1L))))
                    {
                        unsigned char l_519 = 0x1DL;
                        (***l_512) ^= (g_103 >= p_12);
                        l_525 |= ((((safe_lshift_func_int16_t_s_u((**l_220), 6)) | func_51(g_479, ((safe_rshift_func_int8_t_s_u(((l_518 >= (((g_188 , (func_51(l_519, p_15, (safe_mod_func_uint8_t_u_u((~(func_51((((safe_sub_func_uint8_t_u_u(((((*l_220) == (*g_124)) , (**g_124)) <= (***l_498)), p_15)) , (void*)0) == (*g_124)), g_479, (*g_120), g_188, (*l_223)) ^ l_524)), g_479)), (*l_408), p_13) <= 0x69L)) , 0x30F5FABBL) || p_11)) , g_479), p_15)) != (***l_498)), (*g_120), p_13, l_519)) & (**g_124)) != g_119);
                    }
                    else
                    {
                        (**g_124) = (&g_120 == &g_279);
                        (**l_498) = (*g_124);
                        (***l_498) = p_15;
                    }
                    (**l_220) = p_11;
                }
                (*l_223) = (safe_lshift_func_uint16_t_u_s(func_25((*l_223), (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(l_532, (0x6F7E1018L <= func_51(((*l_408) | func_16((*g_120), (func_51((safe_rshift_func_uint8_t_u_s(1UL, 3)), g_342, (((0x7D28L & func_51(((g_473 , &l_223) == (void*)0), p_12, (**g_124), g_2, (*l_369))) , (*g_124)) != (void*)0), g_479, (*l_408)) <= (*g_120)), p_12)), g_67, (*g_279), g_473, g_473)))), 0x9350L)) > (-4L)) , p_14), p_14, g_67), (*l_408)));
                return (*g_120);
            }
            else
            {
                int **l_536 = (void*)0;
                int **l_537 = &l_222;
                (*l_537) = l_535;
                if (p_12)
                    continue;
                (*g_279) = (((p_12 , (func_25(p_14, (((void*)0 == &g_124) < (safe_sub_func_uint64_t_u_u((0xAEL > (safe_lshift_func_uint8_t_u_s(g_479, 2))), (safe_add_func_int8_t_s_s((0xDFF73FE5DD4CD90FLL & (safe_add_func_int8_t_s_s(p_11, ((safe_rshift_func_int16_t_s_s(p_13, (*l_369))) , p_11)))), 0xB4L))))), (***l_498), (***l_498)) >= 0xA33C6EA5808736BBLL)) != g_342) , (*l_223));
            }
        }
        (*l_220) = (*l_220);
    }
    return p_12;
}







static unsigned long long func_16(int p_17, char p_18, const unsigned p_19)
{
    int **l_123 = &g_120;
    int *l_125 = &g_67;
    int *l_126 = &g_67;
    int *l_127 = &g_122;
    int l_128 = (-3L);
    int *l_129 = &g_67;
    int *l_130 = &g_67;
    int *l_131 = &g_67;
    int *l_132 = &l_128;
    int *l_133 = &l_128;
    int *l_134 = &l_128;
    int *l_135 = &g_122;
    int *l_136 = (void*)0;
    int l_137 = (-1L);
    int l_138 = (-1L);
    int *l_139 = &g_67;
    int *l_140 = (void*)0;
    int *l_141 = &g_67;
    int *l_142 = &l_138;
    int *l_143 = (void*)0;
    int *l_144 = &l_137;
    int *l_145 = &l_138;
    int *l_146 = &g_67;
    int *l_147 = &l_138;
    int *l_148 = &g_122;
    int *l_149 = &l_137;
    int *l_150 = &l_128;
    int *l_151 = &g_122;
    int *l_152 = &l_128;
    int *l_153 = &l_138;
    int *l_154 = &l_128;
    int l_155 = 0L;
    int *l_156 = &g_122;
    int *l_157 = &l_137;
    int *l_158 = &g_122;
    int l_159 = 0L;
    int *l_160 = &g_122;
    int *l_161 = (void*)0;
    int *l_162 = &l_128;
    int *l_163 = &l_138;
    int *l_164 = &l_138;
    int *l_165 = &l_155;
    int *l_166 = (void*)0;
    int *l_167 = &l_138;
    int l_168 = 0xA6C637B4L;
    int *l_169 = &l_128;
    int *l_170 = &l_138;
    int *l_171 = &l_128;
    int *l_172 = (void*)0;
    int *l_173 = &l_137;
    int *l_174 = &l_138;
    int *l_175 = &g_122;
    int *l_176 = &g_67;
    int l_177 = 0x3353D154L;
    int *l_178 = &l_155;
    int *l_179 = &l_177;
    int *l_180 = &l_128;
    int *l_181 = (void*)0;
    int *l_182 = &l_128;
    int *l_183 = &l_177;
    int *l_184 = &g_122;
    int l_185 = 0x8BD33210L;
    int *l_186 = &l_177;
    int *l_187 = &l_128;
    g_124 = (((*g_120) ^ p_17) , l_123);
    (*l_123) = (*g_124);
    g_188++;
    return (*l_135);
}







static short func_25(char p_26, short p_27, char p_28, unsigned short p_29)
{
    unsigned char l_43 = 1UL;
    int l_59 = (-1L);
    int *l_121 = &g_122;
    (*l_121) ^= ((safe_lshift_func_int16_t_s_u(func_33(func_37(l_43, (((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(func_48((func_51(p_28, g_2, ((!(safe_sub_func_int64_t_s_s((7UL < (p_29 & ((l_59 && ((safe_sub_func_int32_t_s_s(g_2, (p_27 && (0xE820F90FL | g_2)))) <= g_2)) > l_59))), 3L))) | l_59), p_27, g_2) > g_2), l_43), 0)), 1L)) <= 0x0D3184BAL) != 0x8D67L), p_28, l_43, l_59), l_59, g_2), 10)) <= 0L);
    return (*l_121);
}







static const short func_33(unsigned short p_34, unsigned p_35, int p_36)
{
    int *l_104 = &g_67;
    int **l_105 = &l_104;
    unsigned short l_118 = 8UL;
    (*l_105) = l_104;
    g_119 |= (p_36 >= (func_48(p_34, (((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((~((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((g_2 > ((safe_add_func_int64_t_s_s(0x8287126A377049B5LL, (&p_36 != (((((((func_37((**l_105), (**l_105), (safe_mod_func_uint32_t_u_u(((func_51((p_35 | (*l_104)), p_36, p_36, p_35, p_36) , (**l_105)) >= (*l_104)), (*l_104))), g_67, g_103) != p_34) == p_36) > p_34) > p_35) < g_2) <= (-4L)) , (*l_105))))) , g_103)), 1UL)), g_2)) >= g_2)), g_2)), p_35)) <= 0x604A327E98E595DBLL) >= l_118)) > 6UL));
    g_120 = &g_67;
    return p_34;
}







static unsigned short func_37(short p_38, unsigned p_39, const unsigned p_40, char p_41, unsigned short p_42)
{
    unsigned char l_92 = 0xC6L;
    int *l_93 = &g_67;
    unsigned l_100 = 0xED4E1BE6L;
    int l_101 = (-7L);
    int *l_102 = (void*)0;
    (*l_93) = ((((safe_add_func_int16_t_s_s((-6L), (safe_sub_func_int32_t_s_s(((l_92 , l_93) != &g_67), ((-1L) || 0x27L))))) || 0UL) , l_93) == (((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(((g_2 >= 0UL) < g_2), 0x800BCFD7L)) <= g_2), (*l_93))) , (*l_93)) , &g_67));
    l_93 = &g_67;
    g_103 ^= ((safe_rshift_func_uint8_t_u_u(((((0x71L == (((*l_93) == (((((((((((void*)0 != l_93) & ((((((~0x405C6DFA21EB82DDLL) < (g_2 <= (p_41 || ((0x43L != (g_2 , g_2)) , g_2)))) == (*l_93)) > g_2) < p_41) , p_42)) ^ p_41) , (void*)0) != (void*)0) ^ l_100) & 2L) , 0x2DA2L) < 65534UL) >= 0x65L)) && l_101)) || 18446744073709551611UL) > (*l_93)) ^ p_41), (*l_93))) ^ p_42);
    return g_2;
}







static unsigned char func_48(unsigned short p_49, int p_50)
{
    int *l_87 = &g_67;
    (*l_87) ^= 0x07789B64L;
    return g_2;
}







static long long func_51(char p_52, long long p_53, int p_54, unsigned long long p_55, unsigned short p_56)
{
    int l_80 = 0xC8E9BDCCL;
    int l_81 = 0x72EA1289L;
    for (p_53 = 0; (p_53 == 0); p_53++)
    {
        unsigned short l_84 = 0x9E59L;
        for (p_54 = 0; (p_54 != (-12)); p_54--)
        {
            int *l_66 = &g_67;
            int *l_68 = (void*)0;
            int *l_69 = &g_67;
            int *l_70 = &g_67;
            int l_71 = (-1L);
            int *l_72 = &l_71;
            int *l_73 = &g_67;
            int *l_74 = &l_71;
            int *l_75 = &g_67;
            int *l_76 = (void*)0;
            int *l_77 = (void*)0;
            int *l_78 = &l_71;
            int *l_79 = &l_71;
            int *l_82 = &l_80;
            int l_83 = 1L;
            --l_84;
            (*l_72) ^= g_67;
            if ((*l_73))
                continue;
        }
    }
    return g_67;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_939, "g_939", print_hash_value);
    transparent_crc(g_1051, "g_1051", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1080, "g_1080", print_hash_value);
    transparent_crc(g_1142, "g_1142", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1287, "g_1287", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1294, "g_1294", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1343, "g_1343", print_hash_value);
    transparent_crc(g_1425, "g_1425", print_hash_value);
    transparent_crc(g_1427, "g_1427", print_hash_value);
    transparent_crc(g_1430, "g_1430", print_hash_value);
    transparent_crc(g_1443, "g_1443", print_hash_value);
    transparent_crc(g_1503, "g_1503", print_hash_value);
    transparent_crc(g_1578, "g_1578", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
