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



static unsigned char g_2 = 0x06L;
static char g_18 = 0x3BL;
static short g_34 = 0L;
static short g_36 = (-1L);
static int g_45 = 0L;
static int **g_46 = (void*)0;
static unsigned g_58 = 0x94628AEAL;
static unsigned short g_61 = 0xC891L;
static int g_83 = 0L;
static int g_107 = (-1L);
static const int g_112 = 0x14567548L;
static const int *g_111 = &g_112;
static int g_114 = 0x5A1B20D9L;
static unsigned short g_117 = 0xF545L;
static long long g_187 = 0x13010899EAA03808LL;
static long long g_189 = (-1L);
static int g_202 = 4L;
static unsigned g_203 = 0xE02624CEL;
static short g_212 = (-8L);
static int *g_242 = &g_202;
static const unsigned char g_249 = 0xE4L;
static unsigned char **g_270 = (void*)0;
static unsigned long long g_279 = 18446744073709551615UL;
static unsigned g_310 = 0xD36BB701L;
static const unsigned short **g_342 = (void*)0;
static short g_378 = 1L;
static char g_436 = 0xACL;
static unsigned long long g_491 = 1UL;
static char g_535 = 0x02L;
static int g_550 = 0xC16F56A6L;
static unsigned long long g_557 = 0x017C3F4681518E46LL;
static unsigned **g_602 = (void*)0;
static char g_626 = 0x26L;
static const int g_697 = 0xA9ACEBF6L;
static unsigned long long g_718 = 0x95FF18A1EB4C1AEALL;
static int *g_735 = &g_45;
static const int *g_737 = &g_202;
static int **g_780 = &g_735;
static char *g_874 = &g_436;
static const unsigned char g_904 = 0x3DL;
static const unsigned char *g_903 = &g_904;
static int *g_922 = (void*)0;
static const unsigned char *g_1003 = &g_249;
static unsigned g_1030 = 9UL;
static unsigned short g_1056 = 0xFBA0L;
static int **g_1140 = &g_242;



static unsigned func_1(void);
static int * func_3(short p_4);
static int ** func_13(unsigned short p_14);
static char func_26(char * p_27, char p_28);
static char * func_29(short p_30, const char p_31, int p_32);
static char func_49(unsigned char * p_50, const short p_51, const unsigned char * p_52, int ** p_53);
static int * const func_64(char * p_65);
static long long func_72(int p_73, unsigned p_74, unsigned p_75, char p_76, char * p_77);
static unsigned func_86(unsigned char * p_87, int p_88, char * p_89);
static unsigned char * func_90(unsigned long long p_91);
static unsigned func_1(void)
{
    int l_10 = (-6L);
    int *l_1233 = &g_45;
    int l_1239 = 0xE31BCD39L;
    unsigned char *l_1244 = &g_2;
    char **l_1245 = &g_874;
    unsigned l_1263 = 0xA17D1411L;
    unsigned short *l_1268 = (void*)0;
    short *l_1269 = &g_212;
    unsigned *l_1272 = (void*)0;
    int *l_1273 = &g_107;
    if (g_2)
    {
        long long l_7 = (-2L);
        short *l_11 = (void*)0;
        unsigned char l_12 = 0x6DL;
        int *l_1236 = (void*)0;
        int ** const l_1235 = &l_1236;
        int **l_1237 = &l_1236;
        (*g_1140) = func_3((l_12 = ((safe_div_func_uint32_t_u_u(7UL, (((g_2 != l_7) & g_2) || (safe_add_func_uint64_t_u_u(g_2, ((g_2 == 0x673E7ED6F1860EC0LL) > 0x6EL)))))) | (~(l_10 >= 0xF3L)))));
        if (g_45)
            goto lbl_1234;
lbl_1234:
        l_1233 = func_64(&g_436);
        l_1237 = l_1235;
    }
    else
    {
lbl_1238:
        (*g_1140) = (*g_780);
        (**g_1140) = (*l_1233);
        if (g_189)
            goto lbl_1238;
    }
    l_1239 ^= (*l_1233);
    if ((g_107 = (((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((*l_1233), (*l_1233))), (safe_rshift_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(((*l_1233) >= (*g_874)), (*g_737))) >= ((*l_1244) = (*l_1233))) | (*l_1233)), 14)))) && (*g_874)) <= g_45)))
    {
        int *l_1250 = &g_83;
        unsigned char **l_1251 = (void*)0;
        unsigned char **l_1252 = &l_1244;
        const char *l_1253 = &g_626;
        int *l_1254 = &l_10;
        int l_1255 = 0x6123FD66L;
        l_1233 = &l_1255;
    }
    else
    {
        short l_1258 = 0x1CCCL;
        unsigned char *l_1261 = (void*)0;
        int **l_1262 = (void*)0;
        (*l_1233) = func_49(func_90((safe_add_func_int32_t_s_s((l_1258 = (*l_1233)), ((g_61 = ((~(safe_rshift_func_int8_t_s_u((*l_1233), 2))) < ((*l_1244) = (*g_1003)))) & g_626)))), g_626, func_29(func_49(l_1261, (*l_1233), &g_249, l_1262), (*g_874), l_1263), l_1262);
        (*g_1140) = (*g_1140);
    }
    (*l_1273) = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((((void*)0 != l_1244) && ((*l_1269) |= (l_1268 == (void*)0))), (safe_mod_func_uint64_t_u_u(g_697, 0xF84FB23D1E04C3CBLL)))) <= (l_1263 <= ((((l_1272 = l_1272) != (void*)0) ^ 0xA4E3L) > (*g_874)))), 7));
    return (*l_1273);
}







static int * func_3(short p_4)
{
    char *l_17 = &g_18;
    char l_19 = 0xD0L;
    unsigned char *l_20 = &g_2;
    int ***l_1227 = &g_780;
    char **l_1228 = &l_17;
    char ***l_1229 = (void*)0;
    char **l_1231 = (void*)0;
    char ***l_1230 = &l_1231;
    int **l_1232 = &g_922;
    (*l_1227) = func_13(((safe_lshift_func_int8_t_s_u((l_19 ^= ((*l_17) = p_4)), ((*l_20) = 0xABL))) || p_4));
    (*l_1230) = (l_1228 = &l_17);
    (**l_1227) = (void*)0;
    (*l_1232) = func_64(((*l_1231) = &g_18));
    return (**l_1227);
}







static int ** func_13(unsigned short p_14)
{
    char *l_692 = (void*)0;
    int l_696 = 7L;
    int l_729 = 0xA87A8D68L;
    int **l_741 = &g_735;
    int **l_742 = &g_735;
    char l_743 = 0x83L;
    unsigned short l_765 = 0xC034L;
    const unsigned long long *l_835 = &g_491;
    unsigned char l_870 = 253UL;
    int **l_896 = &g_735;
    unsigned short l_899 = 4UL;
    const unsigned char *l_927 = (void*)0;
    unsigned *l_933 = (void*)0;
    unsigned **l_932 = &l_933;
    unsigned **l_934 = &l_933;
    unsigned ** const l_943 = &l_933;
    unsigned l_1028 = 0UL;
    const unsigned l_1073 = 4294967289UL;
    int *l_1091 = &g_114;
    unsigned char *l_1144 = &g_2;
    unsigned short l_1145 = 0x5A9EL;
    int l_1154 = 0xA3E316F4L;
    unsigned *l_1198 = (void*)0;
    unsigned *l_1199 = &g_58;
    unsigned long long *l_1200 = &g_557;
    if (g_18)
    {
        long long l_23 = 1L;
        int l_37 = (-5L);
        char l_680 = 8L;
        char *l_691 = (void*)0;
        unsigned char l_695 = 0UL;
        unsigned short *l_760 = &g_61;
        unsigned short **l_759 = &l_760;
        unsigned short ***l_758 = &l_759;
        for (g_18 = (-25); (g_18 < 18); g_18++)
        {
            short *l_33 = &g_34;
            short *l_35 = &g_36;
            int l_677 = 0L;
            unsigned *l_686 = &g_203;
            unsigned **l_685 = &l_686;
            unsigned long long l_702 = 0x669DBC4B23EC6D11LL;
            unsigned long long l_715 = 0xEF7F8F7E176361E8LL;
            unsigned long long *l_766 = (void*)0;
            unsigned long long *l_767 = &g_491;
            l_677 = (l_23 && (safe_mod_func_uint16_t_u_u((func_26(func_29(((*l_35) = ((*l_33) = p_14)), l_23, (l_37 = 0L)), l_23) < (&g_46 == &g_46)), p_14)));
        }
        for (g_18 = 0; (g_18 == (-28)); --g_18)
        {
            short *l_772 = &g_36;
            unsigned char *l_773 = &l_695;
            int *l_775 = (void*)0;
            char l_813 = 0x16L;
            char **l_820 = (void*)0;
        }
        if (p_14)
            goto lbl_840;
lbl_840:
        (*l_742) = (*g_780);
        l_37 ^= ((**l_742) = (p_14 > (-3L)));
    }
    else
    {
        short l_855 = 1L;
        int *l_900 = &l_696;
        char *l_901 = &g_436;
        int *l_907 = &l_696;
        int *l_908 = &l_729;
        for (g_189 = (-6); (g_189 == 16); g_189++)
        {
            int l_856 = 0x01FC3059L;
            unsigned ***l_857 = &g_602;
            int l_898 = 1L;
            int **l_902 = &l_900;
            if ((*g_242))
            {
                unsigned long long *l_862 = &g_718;
                unsigned long long *l_863 = &g_279;
                (*g_735) = ((((void*)0 == &g_114) < (safe_rshift_func_int8_t_s_u(l_855, 1))) >= (0xD219L <= (l_856 != (l_857 != (void*)0))));
                (**g_780) = ((safe_add_func_uint64_t_u_u(((*l_863) = ((*l_862) = (safe_rshift_func_int8_t_s_u(0x77L, 3)))), ((safe_add_func_int64_t_s_s(0x1E9F524E5B418EEFLL, l_855)) && g_697))) < (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(1L, 0)) != 0xCC048BE4L) != g_626), l_870)));
            }
            else
            {
                short *l_871 = &g_36;
                int l_872 = 1L;
                unsigned *l_888 = (void*)0;
                int *l_890 = &g_202;
                (*g_735) ^= (g_203 >= ((*l_871) = p_14));
                if ((**l_741))
                {
                    char *l_873 = &g_626;
                    unsigned short *l_880 = &g_61;
                    unsigned short *l_881 = (void*)0;
                    unsigned short *l_882 = &l_765;
                    int l_885 = 0x4225C12EL;
                    (*g_242) = (l_872 |= p_14);
                    if (p_14)
                    {
                        unsigned short l_875 = 0x40D0L;
                        (**g_780) |= ((*g_242) ^= func_26((g_874 = l_873), (g_535 = ((*l_873) &= g_107))));
                        if (l_875)
                            continue;
                    }
                    else
                    {
                        (*l_742) = (*g_780);
                    }
                    (**l_741) ^= ((g_18 & (safe_lshift_func_int16_t_s_s(((g_2 ^= (safe_add_func_uint16_t_u_u(((*l_882) &= ((*l_880) &= l_855)), ((l_856 | (((safe_mod_func_uint16_t_u_u((l_885 > g_34), p_14)) >= l_872) | ((p_14 & 0xCDF9C9D022DC92B7LL) && 0L))) && (-7L))))) ^ g_203), 3))) || g_189);
                    (*g_735) |= (p_14 <= p_14);
                }
                else
                {
                    unsigned long long l_889 = 0UL;
                    unsigned short * const **l_895 = (void*)0;
                    if ((safe_mod_func_uint32_t_u_u(((void*)0 != l_888), l_889)))
                    {
                        if ((*g_735))
                            break;
                        l_890 = (*l_742);
                    }
                    else
                    {
                        short l_897 = 0x3A38L;
                        l_898 |= (safe_mod_func_uint32_t_u_u(0x4E43D7AFL, (safe_mod_func_uint32_t_u_u(func_49(&l_870, p_14, func_29(g_557, (*g_874), ((void*)0 == l_895)), l_896), l_897))));
                        (*l_741) = (*g_780);
                        (*g_242) = ((**l_742) = l_899);
                        (*g_735) = 0L;
                    }
                    (*l_890) &= p_14;
                    l_900 = (*g_780);
                }
            }
            (*l_902) = func_64(l_901);
            (*l_742) = (*l_902);
            (**l_742) = ((*g_242) &= func_49(func_90((func_49(func_29(g_310, ((**l_902) = ((**l_741) | (**l_902))), p_14), g_212, (g_903 = &g_2), l_742) <= g_189)), p_14, l_901, &g_735));
        }
        (*l_908) = ((*l_907) = ((*g_242) = ((**l_896) = (safe_lshift_func_uint8_t_u_s(0UL, 4)))));
    }
    if (func_86(&l_870, (safe_mod_func_uint8_t_u_u((6UL | (*g_874)), (*g_903))), &g_626))
    {
        long long *l_911 = &g_187;
        (*g_735) = (-1L);
        (**l_896) = (18446744073709551613UL > ((*l_911) = (0L & 0x94BCL)));
    }
    else
    {
        unsigned l_912 = 0x71E8A1C8L;
        const int *l_921 = &g_107;
        long long *l_928 = (void*)0;
        long long *l_929 = &g_189;
        unsigned char *l_930 = &g_2;
        int **l_931 = &g_242;
        (*l_931) = func_64(func_29((l_912 | func_86((l_930 = func_90((p_14 & ((((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((**l_896), ((*l_929) = ((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((l_921 == g_922), (+((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(func_26(&g_626, func_49(&l_870, p_14, l_927, &g_735)), 6)), 7L)) > (**l_742))))), p_14)) && 0L)))), p_14)) || (*g_903)) ^ (**l_742)) <= p_14)))), (**l_896), &g_18)), p_14, p_14));
    }
    if (((l_932 != (l_934 = g_602)) <= (*g_903)))
    {
        unsigned long long l_937 = 0x0D60856C99859BACLL;
        int **l_942 = &g_735;
        unsigned l_982 = 5UL;
        long long l_1001 = (-1L);
        unsigned char *l_1002 = (void*)0;
        unsigned long long *l_1033 = &l_937;
        unsigned long long **l_1032 = &l_1033;
        int l_1053 = 0x2FEFEBA9L;
        unsigned char *l_1098 = (void*)0;
        unsigned char *l_1099 = (void*)0;
        unsigned char *l_1100 = &l_870;
        unsigned short *l_1111 = (void*)0;
        for (g_58 = (-27); (g_58 == 13); ++g_58)
        {
            unsigned l_967 = 0x62FD9EDBL;
            unsigned **l_981 = &l_933;
            int * const l_994 = &l_696;
            char l_1063 = 0xFEL;
            unsigned char *l_1082 = &g_2;
            int l_1085 = 0L;
            int **l_1087 = &g_242;
        }
        if ((p_14 > (safe_rshift_func_uint8_t_u_u((*g_1003), ((**l_942) = ((*l_1100) |= ((&l_1053 != (l_1091 = l_933)) && (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((**l_942) == (0x13DE38C0L == func_86(func_29(p_14, (**l_742), (safe_sub_func_uint64_t_u_u(((**l_942) | (**l_942)), 2UL))), (*g_111), &g_18))), 5)), (**l_741))))))))))
        {
            int *l_1106 = &g_114;
            int l_1122 = (-1L);
            (*l_741) = (*l_942);
            for (l_1001 = 22; (l_1001 < (-12)); l_1001 = safe_sub_func_int8_t_s_s(l_1001, 6))
            {
                return &g_735;
            }
            if (((safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s(4L, 12)))) > ((func_86(&l_870, ((*l_1106) = ((**l_741) = (!(-1L)))), func_90((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((((void*)0 == l_1111) || p_14), (safe_div_func_uint8_t_u_u((0x2F94L ^ (func_49(func_90(g_718), p_14, &g_249, &g_242) | 0x92L)), 247UL)))) ^ p_14) > 0xD809L), p_14)))) ^ 0x62D68D5018B705FALL) <= p_14)))
            {
                int *l_1114 = (void*)0;
                l_1114 = (*l_942);
            }
            else
            {
                char *l_1115 = &g_436;
                int **l_1116 = &g_735;
                unsigned short *l_1119 = &l_765;
                (*l_1116) = func_64(l_1115);
                l_1122 ^= ((**l_1116) < (safe_lshift_func_uint8_t_u_u((((*l_1119) = p_14) == (safe_mod_func_int8_t_s_s(((*l_1115) = ((g_535 && 65530UL) <= (-6L))), (*g_1003)))), 2)));
            }
        }
        else
        {
            unsigned char l_1123 = 0xC9L;
            int l_1126 = 0xB1D6BFE5L;
            short *l_1127 = &g_34;
            long long *l_1131 = &g_189;
            int l_1132 = 0xE6E63BB9L;
            int *l_1133 = &l_729;
            (**l_942) = (((l_1123 | (**l_742)) > func_49(func_29((safe_mod_func_uint32_t_u_u((g_189 >= func_49(&l_870, (**l_942), func_29(((*l_1127) = l_1126), l_1123, l_1126), &g_242)), 7UL)), (*g_874), (**l_896)), p_14, l_1002, &g_735)) > 0xC1FD962E7E5D8B62LL);
            (*l_1133) &= (safe_div_func_int64_t_s_s(((l_1132 &= (((safe_unary_minus_func_int8_t_s(((*g_874) ^= func_86(&l_870, (((*l_1131) = (**l_742)) && (((void*)0 == l_835) < 0xD000L)), func_90((**l_942)))))) <= ((void*)0 == g_602)) || 0x09L)) < p_14), 18446744073709551615UL));
            (**g_780) = ((1UL != (*l_1133)) >= (safe_mod_func_int16_t_s_s(p_14, (safe_div_func_int64_t_s_s((func_49(&l_870, (safe_rshift_func_int16_t_s_s(((void*)0 != l_933), 9)), l_1099, l_742) | 0x7B6145C2L), g_58)))));
            (*l_1133) &= (**l_942);
        }
        (*l_942) = (*l_942);
        return g_1140;
    }
    else
    {
        unsigned char *l_1143 = (void*)0;
        int l_1150 = 0xB09D6078L;
        long long *l_1151 = &g_187;
        long long *l_1152 = &g_189;
        int l_1153 = 7L;
        char **l_1196 = &l_692;
        int *l_1197 = &l_696;
        (*g_242) &= 8L;
        l_1154 &= (((*l_1151) = (safe_div_func_int16_t_s_s((0x2B6F05C9L & (func_49((l_1144 = l_1143), g_36, (g_903 = func_29((l_1153 &= (l_1145 || (safe_add_func_uint8_t_u_u(p_14, (((*l_1152) = ((*l_1151) = (safe_lshift_func_uint8_t_u_u(0x65L, (l_1150 == ((**l_896) >= (0x5843L != 3UL))))))) != (**l_896)))))), l_1150, p_14)), &g_922) & p_14)), (**l_742)))) <= 0x502E9C7E2C869F85LL);
        if (p_14)
        {
            char l_1173 = 0x35L;
            unsigned short *l_1176 = &g_1056;
            unsigned short **l_1175 = &l_1176;
            unsigned short ***l_1174 = &l_1175;
            const unsigned char *l_1177 = &l_870;
            int **l_1178 = (void*)0;
            int **l_1182 = &g_922;
            for (l_1153 = 0; (l_1153 > 8); l_1153 = safe_add_func_uint32_t_u_u(l_1153, 1))
            {
                unsigned long long *l_1160 = &g_491;
                (**l_742) = (safe_add_func_int16_t_s_s((**l_742), (0x22C8E84E2B94AA1CLL < ((*l_1160) = (safe_unary_minus_func_uint8_t_u((*g_1003)))))));
            }
            for (g_114 = 0; (g_114 <= 27); g_114++)
            {
                unsigned long long *l_1172 = &g_718;
                unsigned long long **l_1171 = &l_1172;
                int l_1179 = 0L;
                l_1179 = (safe_add_func_uint8_t_u_u((((**l_1171) = (p_14 == (safe_add_func_uint16_t_u_u(((***l_1174) &= (g_904 == ((((**l_742) = (safe_div_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((l_1153 = ((l_1171 != (void*)0) || l_1173)) & func_49(func_90((l_1174 == (void*)0)), p_14, l_1177, l_1178)), p_14)) ^ (**l_741)), p_14))) > l_1150) < l_1179))), 65529UL)))) && g_202), l_1150));
            }
            (**g_1140) = (safe_div_func_uint32_t_u_u(p_14, 4294967292UL));
            (*l_1182) = func_64(&l_1173);
        }
        else
        {
            unsigned short *l_1184 = &g_61;
            unsigned short **l_1183 = &l_1184;
            unsigned short ***l_1185 = &l_1183;
            unsigned short **l_1187 = &l_1184;
            unsigned short ***l_1186 = &l_1187;
            unsigned short ***l_1192 = &l_1187;
            int l_1195 = 0xF93EAD14L;
            (*l_1186) = ((*l_1185) = l_1183);
            l_1195 ^= ((!((*g_874) != ((safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((&l_743 != &g_18), (&g_342 != l_1192))), g_249)) == (safe_lshift_func_int16_t_s_u(0x4163L, ((0UL <= 1UL) != p_14)))))) | (**l_742));
            (*g_242) = (0x9602B534L <= ((**l_741) | (&l_692 != l_1196)));
            l_1197 = (void*)0;
        }
    }
    if ((((*l_1200) = (func_26(func_90(p_14), p_14) || ((*l_1199) = (p_14 <= ((void*)0 == &g_270))))) & (-8L)))
    {
        int **l_1203 = (void*)0;
        (**l_741) = (safe_rshift_func_uint16_t_u_u(p_14, func_49(&l_870, (**l_741), &l_870, l_1203)));
        (**l_896) |= 3L;
        (*l_896) = (*l_896);
    }
    else
    {
        unsigned long long l_1210 = 0xB781D2D32C49350BLL;
        int l_1211 = 0xF4F993EAL;
        char **l_1220 = (void*)0;
        if ((safe_mod_func_int8_t_s_s((-1L), func_72(((*l_1091) = (*g_111)), (safe_div_func_int8_t_s_s(p_14, (((~func_26(func_90(p_14), (*g_874))) != ((l_1211 &= (safe_sub_func_uint64_t_u_u((**l_742), (l_1210 == (-5L))))) & (**l_741))) & g_491))), l_1210, (*g_874), &g_626))))
        {
            long long *l_1219 = &g_189;
            int *l_1222 = &l_729;
            for (g_114 = 0; (g_114 != 16); g_114 = safe_add_func_int16_t_s_s(g_114, 7))
            {
                unsigned char ***l_1214 = &g_270;
                char **l_1221 = &l_692;
                int *l_1223 = (void*)0;
                (*l_1214) = &l_1144;
            }
        }
        else
        {
            unsigned char *l_1225 = &l_870;
            int l_1226 = (-1L);
            (*g_1140) = (*l_896);
            (**g_1140) = func_86((l_1225 = &l_870), p_14, &g_535);
            (*g_242) &= 0x6A9703C9L;
            l_1226 = (**l_742);
        }
    }
    return &g_735;
}







static char func_26(char * p_27, char p_28)
{
    int *l_44 = &g_45;
    int **l_43 = &l_44;
    short *l_59 = &g_34;
    unsigned short *l_60 = &g_61;
    unsigned char *l_63 = &g_2;
    unsigned char **l_62 = &l_63;
    int l_71 = 0xF4A9B836L;
    int *l_82 = &g_83;
    unsigned *l_238 = &g_58;
    long long *l_335 = &g_187;
    unsigned char *l_336 = &g_2;
    int *l_359 = (void*)0;
    unsigned short **l_370 = &l_60;
    unsigned short ***l_369 = &l_370;
    const unsigned long long l_372 = 18446744073709551608UL;
    unsigned l_518 = 0xCC18F221L;
    long long l_532 = 0L;
    int **l_596 = &l_359;
    return (*p_27);
}







static char * func_29(short p_30, const char p_31, int p_32)
{
    char *l_38 = &g_18;
    return l_38;
}







static char func_49(unsigned char * p_50, const short p_51, const unsigned char * p_52, int ** p_53)
{
    int **l_67 = (void*)0;
    int **l_68 = (void*)0;
    int *l_70 = &g_45;
    int **l_69 = &l_70;
    (*l_69) = func_64(&g_18);
    return p_51;
}







static int * const func_64(char * p_65)
{
    int * const l_66 = &g_45;
    return l_66;
}







static long long func_72(int p_73, unsigned p_74, unsigned p_75, char p_76, char * p_77)
{
    int *l_243 = &g_202;
    int *l_244 = (void*)0;
    const unsigned char *l_248 = &g_249;
    const unsigned char **l_247 = &l_248;
    long long *l_313 = &g_189;
    for (g_212 = (-29); (g_212 < (-20)); ++g_212)
    {
        int *l_241 = &g_107;
        g_242 = l_241;
    }
    l_244 = l_243;
    if ((0x26259D638C0381DDLL || ((0x58L == (g_112 != (safe_mod_func_uint32_t_u_u(func_49(&g_2, ((*g_242) || 0x1EF52FE4L), ((*l_247) = p_77), &l_243), p_75)))) > 0xC8F59626L)))
    {
        return g_114;
    }
    else
    {
        short *l_252 = (void*)0;
        short *l_253 = &g_34;
        int l_258 = 0x0F88FCEBL;
        int l_265 = 0xD1E5F54FL;
        char *l_267 = &g_18;
        int l_314 = 0xE49B171AL;
        int **l_315 = &g_242;
        unsigned char ***l_328 = &g_270;
        if ((safe_div_func_int16_t_s_s(((*l_253) = g_117), func_49(func_29((((safe_add_func_int16_t_s_s((func_49(&g_2, g_187, (*l_247), &g_242) ^ 0xD41C1D69L), ((*p_77) & ((safe_mod_func_uint8_t_u_u((1L & (*l_244)), l_258)) < 1L)))) > l_258) < (*l_243)), (*p_77), p_73), (*l_243), p_77, &l_244))))
        {
            unsigned *l_259 = &g_58;
            int l_264 = (-1L);
            int l_266 = 0x5C728450L;
            (*g_242) = (!0x6C474EC6L);
            l_266 ^= ((*l_243) |= (((*l_259) = ((&g_58 != &g_58) > g_36)) <= (l_265 ^= (p_73 < (g_83 & (g_34 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((*p_77), (g_249 > (+l_264)))), ((g_34 & l_258) & 65534UL))) != l_264)))))));
        }
        else
        {
            int **l_268 = (void*)0;
            int **l_269 = &l_243;
            unsigned char *l_272 = &g_2;
            unsigned char **l_271 = &l_272;
            unsigned char **l_277 = &l_272;
            long long l_280 = 1L;
            int l_281 = (-1L);
            short *l_284 = &g_36;
            short *l_285 = &g_34;
            short *l_286 = &g_212;
            int **l_287 = (void*)0;
            int *l_288 = &l_281;
            unsigned char *l_316 = (void*)0;
            unsigned char *l_317 = &g_2;
            int **l_334 = &l_244;
            (*l_269) = func_64(l_267);
            if (g_18)
                goto lbl_273;
            if ((g_270 == l_271))
            {
lbl_273:
                (*l_269) = l_244;
                for (g_202 = 0; (g_202 >= (-22)); g_202 = safe_sub_func_uint8_t_u_u(g_202, 5))
                {
                    int *l_276 = &g_45;
                    long long *l_278 = &g_187;
                    l_276 = l_276;
                    (*l_276) = (((*l_244) | (((*l_278) = (((g_270 != l_277) == (*p_77)) >= 4294967295UL)) <= 3L)) != func_49(((*l_277) = func_29(g_279, g_212, (!(l_281 = l_280)))), g_114, p_77, &l_244));
                }
                (*l_288) ^= (g_114 > (safe_rshift_func_int16_t_s_s(g_189, func_49((*l_277), ((*l_286) ^= ((*l_285) &= ((*l_284) = (*l_244)))), p_77, l_287))));
                (*l_244) &= 0L;
            }
            else
            {
                long long l_305 = 0L;
                for (g_45 = 0; (g_45 == 13); g_45 = safe_add_func_uint32_t_u_u(g_45, 9))
                {
                    unsigned *l_295 = &g_58;
                    int l_304 = 1L;
                    for (g_202 = (-20); (g_202 == (-2)); g_202 = safe_add_func_int16_t_s_s(g_202, 1))
                    {
                        if (l_265)
                            break;
                    }
                    (*l_244) = (l_305 = (safe_lshift_func_uint8_t_u_s((9L > (((*l_295) = 0xAC85E214L) <= (((safe_lshift_func_uint16_t_u_u(p_73, (+(safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(p_73, ((!g_18) == ((((*l_272) = (safe_rshift_func_int8_t_s_s(g_18, func_49(p_77, p_75, func_29((g_114 > (*l_243)), g_117, p_73), &g_242)))) & l_304) >= p_74)))), g_83))))) == (*g_242)) > 0xBCFCFEE4L))), 0)));
                    (*l_244) ^= l_305;
                }
                return g_36;
            }
            if ((((!(*g_242)) < (*l_243)) == ((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((*p_77) < ((g_310 != (l_258 = 1L)) > (safe_rshift_func_uint8_t_u_s(((*l_317) = func_49(&g_2, g_112, func_29(p_76, (l_313 != &l_280), l_314), l_315)), 6)))), p_73)), g_203)) < (**l_315))))
            {
                return (*l_243);
            }
            else
            {
                int **l_331 = &l_243;
                if ((l_315 != l_315))
                {
                    unsigned char l_320 = 1UL;
                    (*l_315) = l_243;
                    for (g_61 = 0; (g_61 >= 29); g_61++)
                    {
                        (*l_244) = (*g_242);
                        if (l_320)
                            break;
                    }
                }
                else
                {
                    int **l_321 = (void*)0;
                    int **l_322 = &l_288;
                    int **l_323 = &l_243;
                    unsigned *l_326 = (void*)0;
                    unsigned *l_327 = &g_203;
                    short *l_329 = (void*)0;
                    short *l_330 = &g_34;
                    (*l_322) = func_64(&g_18);
                    (*l_323) = func_64(&g_18);
                    l_258 |= (safe_lshift_func_uint8_t_u_s(((((*l_313) = (func_49(&g_2, ((*l_330) &= ((((*l_327) = g_36) <= g_212) & (l_328 != (void*)0))), &g_249, l_331) < ((safe_lshift_func_uint16_t_u_u((&g_117 == &g_61), (*l_288))) || (**l_315)))) >= (-6L)) < (*l_288)), 6));
                }
            }
            (*l_334) = func_64(&g_18);
        }
    }
    return g_18;
}







static unsigned func_86(unsigned char * p_87, int p_88, char * p_89)
{
    short l_126 = (-8L);
    int l_132 = (-10L);
    unsigned char *l_190 = &g_2;
    int *l_225 = (void*)0;
    int **l_224 = &l_225;
    for (g_114 = (-4); (g_114 > (-29)); --g_114)
    {
        unsigned *l_127 = (void*)0;
        unsigned *l_128 = (void*)0;
        unsigned *l_129 = &g_58;
        const int l_133 = (-2L);
        const unsigned char *l_134 = &g_2;
        int *l_136 = &g_45;
        int **l_135 = &l_136;
        char *l_139 = &g_18;
        long long l_236 = (-1L);
        int *l_237 = &l_132;
        l_132 = (((*l_129) = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((*p_89), 0)) != g_2), (safe_mul_func_int16_t_s_s(l_126, (g_46 == g_46)))))) < (safe_mod_func_uint32_t_u_u(g_117, p_88)));
        if (p_88)
        {
            return p_88;
        }
        else
        {
            int **l_137 = &l_136;
            int *l_138 = &g_107;
            const unsigned char *l_167 = &g_2;
            unsigned char *l_179 = (void*)0;
            unsigned char **l_178 = &l_179;
            long long *l_186 = &g_187;
            long long *l_188 = &g_189;
            if (((*l_138) = ((((func_49(p_87, l_133, l_134, l_135) > (*p_87)) < p_88) && p_88) || (func_49(&g_2, g_18, p_89, l_137) > 0xA1B41FDDL))))
            {
                int **l_140 = &l_136;
                (*l_140) = func_64(l_139);
                l_132 = (*l_136);
            }
            else
            {
                char l_147 = 0x85L;
                unsigned short *l_148 = &g_117;
                short *l_152 = (void*)0;
                short *l_153 = &l_126;
                int **l_173 = (void*)0;
                (*l_138) ^= func_49(p_89, (0x414CEA6EDC457790LL == (safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((*l_148) = (0xCFL < (safe_lshift_func_uint8_t_u_u((l_147 < g_45), 1)))), l_147)), ((safe_unary_minus_func_int8_t_s((safe_mod_func_int16_t_s_s(((*l_153) = (0x15L | g_61)), (safe_add_func_int64_t_s_s(0xD14953B525E98B50LL, g_112)))))) ^ (*l_136))))), &g_2, g_46);
                for (g_2 = 0; (g_2 <= 33); g_2 = safe_add_func_int16_t_s_s(g_2, 2))
                {
                    const int l_166 = 0x47B9C4F6L;
                    int **l_168 = &l_136;
                    char *l_169 = (void*)0;
                    char *l_170 = &l_147;
                    short *l_171 = (void*)0;
                    short *l_172 = &l_126;
                    l_132 = ((safe_div_func_int32_t_s_s(func_49(p_89, ((*l_172) = (safe_sub_func_int8_t_s_s(((*l_170) = ((safe_rshift_func_uint16_t_u_u((p_88 & (((safe_lshift_func_uint8_t_u_s(((4294967294UL <= (+g_2)) <= (+((func_49(l_139, func_49(p_87, l_166, p_87, g_46), l_167, l_168) < p_88) && 65528UL))), l_126)) && p_88) > g_114)), 15)) >= 0x0FDBL)), (*l_138)))), p_89, l_173), (**l_135))) || 4294967295UL);
                    if ((**l_137))
                        continue;
                }
                (*l_138) = (**l_137);
            }
            (*l_137) = (*l_135);
            if ((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((0L ^ (((*l_178) = &g_2) != &g_2)), 5)) & (safe_add_func_int64_t_s_s((**l_137), ((safe_add_func_int16_t_s_s((-5L), p_88)) && (safe_sub_func_int64_t_s_s(g_112, ((*l_188) = ((((*l_186) = (*l_138)) | l_126) <= (*l_136))))))))), g_117)))
            {
                (*l_138) = (*l_136);
                (*l_138) |= g_114;
                (*l_138) = func_49(l_190, (g_34 & g_58), &g_2, g_46);
                return g_36;
            }
            else
            {
                unsigned char **l_195 = (void*)0;
                unsigned char ** const l_197 = (void*)0;
                const int *l_204 = &l_133;
                (*l_138) = 0x8E3B2826L;
                for (p_88 = 20; (p_88 >= (-17)); p_88 = safe_sub_func_int64_t_s_s(p_88, 3))
                {
                    unsigned char ***l_196 = &l_195;
                    int *l_200 = &l_132;
                    int *l_201 = &g_202;
                    g_203 ^= ((*l_138) = ((*l_201) ^= (0x95F76F47L != (((safe_mod_func_int8_t_s_s((*l_138), 5UL)) >= ((0x159BD2BB8632A430LL >= ((((*l_196) = l_195) != l_197) < 0x7A1AE2F9L)) & (*l_138))) != ((*l_186) = (safe_add_func_int32_t_s_s(((*l_200) = (&g_2 == l_134)), 1UL)))))));
                    if ((p_88 > (*l_138)))
                    {
                        short *l_211 = &g_36;
                        l_204 = l_204;
                        (*l_200) = (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((65535UL || ((*l_211) = (safe_rshift_func_int16_t_s_s(p_88, 1)))), (*l_201))), 0x69B01DD78287FB00LL));
                    }
                    else
                    {
                        (*l_137) = &g_45;
                        if (g_212)
                            break;
                        return p_88;
                    }
                    if ((*l_136))
                        continue;
                }
                g_202 = l_132;
                if ((*l_204))
                    continue;
            }
            for (g_61 = 25; (g_61 <= 34); g_61 = safe_add_func_int32_t_s_s(g_61, 5))
            {
                char l_215 = 0x33L;
                int l_228 = 0xDFC47681L;
                const unsigned char **l_229 = &l_134;
                if (l_215)
                {
                    int *l_221 = &g_107;
                    for (g_202 = (-8); (g_202 != (-7)); g_202 = safe_add_func_uint8_t_u_u(g_202, 5))
                    {
                        int *l_220 = &g_107;
                        (*l_138) ^= ((safe_rshift_func_uint8_t_u_u((**l_137), 3)) <= (*p_89));
                        l_221 = l_220;
                        (*l_220) &= 0x8B7766AAL;
                    }
                }
                else
                {
                    int **l_222 = &l_138;
                    int *l_223 = &g_202;
                    (*l_223) &= ((**l_135) ^ ((g_212 | p_88) | (func_49(func_29(p_88, g_187, l_126), p_88, func_90((p_88 & p_88)), l_222) & g_112)));
                    (*l_222) = &g_107;
                }
                (*l_138) ^= (((&g_34 == &g_212) != func_49(&g_2, (g_212 ^= 0xCBC8L), p_87, l_224)) || g_18);
                (*l_138) = (((**l_135) < ((safe_sub_func_uint16_t_u_u(p_88, (((*l_136) == ((+(l_228 = 0x25F419C157CCD4E5LL)) == p_88)) <= (*l_138)))) | func_49(p_89, p_88, ((*l_229) = p_89), &l_136))) | g_114);
            }
        }
        for (g_107 = 11; (g_107 != 23); g_107 = safe_add_func_uint16_t_u_u(g_107, 1))
        {
            for (g_203 = 0; (g_203 <= 49); g_203 = safe_add_func_uint32_t_u_u(g_203, 8))
            {
                unsigned char l_234 = 0x4CL;
                int *l_235 = &g_202;
                (*l_235) = l_234;
            }
        }
        (*l_237) = (l_236 || 4294967295UL);
    }
    return p_88;
}







static unsigned char * func_90(unsigned long long p_91)
{
    unsigned char *l_94 = &g_2;
    short *l_97 = &g_36;
    int l_98 = (-3L);
    const unsigned char l_99 = 0x44L;
    const unsigned char *l_101 = &l_99;
    const unsigned char **l_100 = &l_101;
    const unsigned char *l_103 = &l_99;
    const unsigned char **l_102 = &l_103;
    int **l_104 = (void*)0;
    int *l_105 = (void*)0;
    int *l_106 = &g_107;
    const int *l_110 = &l_98;
    int *l_113 = &g_114;
    (*l_106) ^= (safe_lshift_func_uint8_t_u_u(((*l_94) &= (func_49(l_94, ((*l_97) ^= (safe_lshift_func_uint16_t_u_s(0xD8C4L, 1))), ((*l_102) = ((*l_100) = func_29(l_98, l_98, (func_49(l_94, l_99, &g_2, g_46) <= g_58)))), l_104) > p_91)), 2));
    g_117 ^= (((&l_98 != l_110) <= (func_49(func_29((g_111 == l_113), g_34, (p_91 && (g_61 | ((0x38L <= (0x22L > g_58)) >= 1UL)))), (*l_106), (*l_100), g_46) <= g_18)) >= p_91);
    return l_94;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_436, "g_436", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_557, "g_557", print_hash_value);
    transparent_crc(g_626, "g_626", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_904, "g_904", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
