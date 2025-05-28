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



static unsigned g_13 = 0x507E6732L;
static unsigned short g_15 = 0x1E66L;
static unsigned short g_20 = 65535UL;
static unsigned short *g_19 = &g_20;
static char g_23 = (-3L);
static int g_26 = (-1L);
static unsigned char g_88 = 1UL;
static unsigned char g_107 = 0x3DL;
static int g_110 = 0xFDD6C552L;
static unsigned char g_140 = 0UL;
static unsigned short *g_203 = &g_20;
static short g_230 = 0x0FF1L;
static short g_231 = (-3L);
static unsigned long long g_233 = 18446744073709551611UL;
static unsigned long long g_239 = 0xAFF4E996E1C07193LL;
static int g_284 = 0xABFC5E8FL;
static unsigned char g_293 = 0x97L;
static int g_333 = 0x615AE1F9L;
static unsigned char g_338 = 250UL;
static unsigned short g_457 = 65535UL;
static unsigned g_499 = 0UL;
static long long g_541 = 0x69D3AB79A35B7D9BLL;
static int g_599 = (-3L);
static unsigned short g_719 = 0x8848L;
static unsigned short g_754 = 0x9230L;
static int *g_757 = &g_26;
static unsigned long long *g_765 = &g_239;
static unsigned long long **g_764 = &g_765;
static int g_890 = 0x9FF8481CL;
static unsigned short g_909 = 65535UL;
static unsigned g_1023 = 1UL;
static unsigned char g_1146 = 0x0BL;
static int g_1394 = 1L;
static short g_1446 = 0xBAF5L;
static unsigned g_1455 = 0x3F36663DL;
static char g_1469 = 0x49L;
static unsigned char g_1527 = 253UL;
static unsigned short g_1634 = 7UL;
static unsigned *g_1646 = &g_499;
static unsigned **g_1645 = &g_1646;
static int g_1653 = 3L;
static char *g_1667 = &g_23;
static char g_1729 = 1L;
static unsigned long long g_1955 = 0UL;
static int g_1973 = 0x75609E28L;
static int g_2013 = 1L;
static int g_2015 = 0x0A912F6FL;



static unsigned func_1(void);
static int func_2(short p_3, unsigned char p_4, short p_5);
static unsigned long long func_6(unsigned long long p_7, unsigned char p_8, unsigned long long p_9, int p_10, int p_11);
static unsigned long long func_33(int p_34, char * p_35, int * p_36, char * p_37);
static int * func_49(const int * p_50, char * p_51);
static int func_63(unsigned short * p_64, int * p_65, unsigned short * p_66, int p_67, unsigned short * p_68);
static int * func_70(long long p_71);
static long long func_72(unsigned long long p_73, const char * p_74, short p_75, unsigned short p_76);
static unsigned long long func_77(int * p_78);
static int * func_79(const char * p_80, unsigned p_81);
static unsigned func_1(void)
{
    unsigned char l_12 = 0x34L;
    unsigned short *l_14 = &g_15;
    unsigned short *l_21 = &g_20;
    char *l_22 = &g_23;
    int *l_2010 = (void*)0;
    int *l_2011 = &g_284;
    int *l_2012 = &g_2013;
    int *l_2014 = &g_2015;
    (*l_2014) ^= (((((*l_2012) |= ((*l_2011) = func_2(((+func_6(l_12, g_13, ((((*l_22) = (((*l_14) ^= 0x1F13L) & (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint8_t_u_s(((l_12 , g_19) == l_21), l_12)) | l_12))))) > (l_21 != &g_20)) || 248UL), g_13, g_13)) != g_13), l_12, g_13))) && 0xDA369518L) , 65535UL) | g_13);



    ;

    ;
    return g_719;
}







static int func_2(short p_3, unsigned char p_4, short p_5)
{
    char *l_40 = (void*)0;
    unsigned short l_2000 = 65535UL;
    if (((p_3 > (+(safe_mod_func_int64_t_s_s(((g_23 , 8L) || p_3), 4L)))) , (p_4 || (safe_sub_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((0x63F6D1D89E17716ELL < 5L) ^ (func_33((safe_sub_func_int64_t_s_s(0xD3610CB4E3473EDELL, g_26)), l_40, &g_26, l_40) == 0x4D15F82787561DEDLL)) <= 1UL), p_3)), 0UL)))))
    {
        unsigned long long l_1989 = 0xE0083F9EAAD976FDLL;
        int l_2001 = 3L;
        for (g_541 = 0; (g_541 == 29); g_541 = safe_add_func_uint64_t_u_u(g_541, 7))
        {
            int *l_1976 = &g_1973;
            int l_1977 = 0x58FD6D10L;
            int *l_1978 = (void*)0;
            int *l_1979 = &g_110;
            int *l_1980 = &g_1653;
            int l_1981 = 0x102A383EL;
            int *l_1982 = &g_1653;
            int *l_1983 = &l_1977;
            int *l_1984 = &l_1977;
            int *l_1985 = (void*)0;
            int *l_1986 = &g_1394;
            int *l_1987 = &g_333;
            int *l_1988 = &g_1973;
            unsigned char *l_2003 = &g_140;
            unsigned char **l_2002 = &l_2003;
            ++l_1989;
            for (p_4 = 0; (p_4 < 27); p_4 = safe_add_func_int64_t_s_s(p_4, 9))
            {
                (*l_1984) &= (*l_1988);
            }
            (*l_1982) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u((g_1146 = 0x8CL), 1)) , ((((*g_1646) = l_2000) && (((+(!((l_2001 ^ ((void*)0 == &g_13)) , (((*l_2002) = l_40) != (void*)0)))) != (safe_add_func_int8_t_s_s(l_2000, ((4UL >= p_4) <= p_5)))) , 0xBF1D0B7BL)) , l_1989)), l_2000)), (*l_1984)));

            ;
        }
    }
    else
    {
        (*g_757) |= (safe_lshift_func_uint16_t_u_s((g_890 < (((((0x166A5DB4B01725E5LL == 18446744073709551615UL) != (l_2000 == 2L)) || l_2000) ^ 0x811FFA8BL) , (safe_sub_func_int64_t_s_s(6L, 0UL)))), p_4));
        (*g_757) ^= 0x4A6022BAL;
    }



    ;

    ;
    return p_4;
}







static unsigned long long func_6(unsigned long long p_7, unsigned char p_8, unsigned long long p_9, int p_10, int p_11)
{
    int *l_24 = (void*)0;
    int *l_25 = &g_26;
    (*l_25) = g_20;
    return p_8;
}







static unsigned long long func_33(int p_34, char * p_35, int * p_36, char * p_37)
{
    unsigned short * const l_43 = (void*)0;
    int l_44 = 0xE85C68ABL;
    char *l_52 = &g_23;
    int **l_1968 = &g_757;
    unsigned l_1969 = 0xAAAE62EDL;
    long long *l_1970 = (void*)0;
    long long *l_1971 = &g_541;
    int *l_1972 = &g_1973;
    (*l_1972) &= (safe_mod_func_int8_t_s_s(((&g_15 != l_43) && l_44), func_6((safe_sub_func_int8_t_s_s(((((*l_1971) = (((safe_mul_func_uint16_t_u_u(((((((*l_1968) = func_49(p_36, l_52)) == p_36) && ((((*l_52) = l_1969) , &g_757) == (void*)0)) < (-1L)) || 0x51F00053L), 0x0877L)) > g_1146) , 0xD55EA390D7008F38LL)) ^ p_34) <= l_1969), g_13)), g_1729, l_1969, l_1969, p_34)));



    ;

    ;
    return p_34;
}







static int * func_49(const int * p_50, char * p_51)
{
    short l_55 = 7L;
    int *l_56 = &g_26;
    unsigned short *l_69 = &g_20;
    unsigned short **l_1662 = &g_203;
    int l_1663 = 0x7D7BFCA3L;
    unsigned l_1700 = 18446744073709551615UL;
    int l_1743 = 1L;
    int l_1764 = 0xBC4C1A63L;
    int l_1774 = 0x9CCB23B4L;
    unsigned long long l_1776 = 0xCBC2C49856057421LL;
    short *l_1784 = &g_231;
    int *l_1800 = (void*)0;
    short l_1801 = (-1L);
    int *l_1802 = &g_890;
    int *l_1803 = (void*)0;
    int *l_1804 = &g_1653;
    int *l_1805 = (void*)0;
    int *l_1806 = &g_26;
    int *l_1807 = &l_1774;
    int *l_1808 = (void*)0;
    int *l_1809 = (void*)0;
    int *l_1810 = &g_1394;
    int *l_1811 = &g_110;
    int *l_1812 = (void*)0;
    int *l_1813 = &g_1653;
    int *l_1814 = &g_333;
    int *l_1815 = &g_110;
    int *l_1816 = &g_890;
    int *l_1817 = &g_333;
    int *l_1818 = (void*)0;
    int *l_1819 = &g_333;
    int *l_1820 = &g_26;
    int *l_1821 = (void*)0;
    int *l_1822 = (void*)0;
    int *l_1823 = &l_1764;
    int *l_1824 = &g_1653;
    int *l_1825 = &g_1394;
    int *l_1826 = &g_26;
    int *l_1827 = &g_284;
    int l_1828 = 3L;
    int *l_1829 = &g_26;
    int *l_1830 = (void*)0;
    int *l_1831 = (void*)0;
    int *l_1832 = &l_1743;
    int *l_1833 = &l_1743;
    int *l_1834 = &g_1653;
    int *l_1835 = (void*)0;
    int *l_1836 = &g_333;
    int *l_1837 = &g_1653;
    int *l_1838 = &g_26;
    int *l_1839 = &g_890;
    int *l_1840 = (void*)0;
    int *l_1841 = &l_1774;
    int *l_1842 = (void*)0;
    int *l_1843 = (void*)0;
    int *l_1844 = (void*)0;
    int l_1845 = 6L;
    int *l_1846 = &g_1653;
    int *l_1847 = &g_1394;
    int *l_1848 = (void*)0;
    int *l_1849 = &l_1743;
    int *l_1850 = &g_1653;
    int *l_1851 = &l_1743;
    int *l_1852 = &g_890;
    int *l_1853 = &l_1774;
    int *l_1854 = (void*)0;
    int *l_1855 = &g_110;
    int *l_1856 = (void*)0;
    int *l_1857 = &l_1774;
    int *l_1858 = &g_26;
    int *l_1859 = &l_1764;
    int *l_1860 = &g_890;
    int *l_1861 = &l_1828;
    int *l_1862 = &g_110;
    int *l_1863 = (void*)0;
    int *l_1864 = (void*)0;
    int *l_1865 = &g_110;
    int *l_1866 = (void*)0;
    int *l_1867 = &g_26;
    int *l_1868 = &l_1845;
    int *l_1869 = (void*)0;
    int *l_1870 = &g_1653;
    int *l_1871 = &g_333;
    int *l_1872 = &g_1653;
    int l_1873 = 1L;
    int *l_1874 = (void*)0;
    int *l_1875 = &l_1845;
    int *l_1876 = (void*)0;
    int *l_1877 = &l_1845;
    int *l_1878 = &g_1394;
    int *l_1879 = &g_890;
    int *l_1880 = &l_1828;
    int *l_1881 = &g_1394;
    int *l_1882 = &g_26;
    int *l_1883 = &l_1828;
    int *l_1884 = &g_1653;
    int *l_1885 = &g_110;
    int *l_1886 = (void*)0;
    int *l_1887 = (void*)0;
    int *l_1888 = (void*)0;
    int *l_1889 = &g_1394;
    int *l_1890 = &g_1653;
    int *l_1891 = &l_1828;
    int *l_1892 = (void*)0;
    int *l_1893 = (void*)0;
    int *l_1894 = &g_284;
    int *l_1895 = (void*)0;
    int *l_1896 = &g_333;
    int *l_1897 = &g_1394;
    int *l_1898 = &g_284;
    int *l_1899 = &g_890;
    int *l_1900 = &l_1743;
    int *l_1901 = &l_1828;
    int l_1902 = 0xB198D224L;
    int *l_1903 = (void*)0;
    int *l_1904 = &g_26;
    int *l_1905 = (void*)0;
    int *l_1906 = &l_1743;
    int l_1907 = (-6L);
    int *l_1908 = &g_333;
    int l_1909 = (-1L);
    int *l_1910 = (void*)0;
    int *l_1911 = &g_110;
    int *l_1912 = &g_890;
    int *l_1913 = (void*)0;
    int *l_1914 = &g_333;
    int *l_1915 = &l_1743;
    int *l_1916 = &l_1873;
    int *l_1917 = (void*)0;
    int *l_1918 = &l_1774;
    int *l_1919 = &g_110;
    int *l_1920 = &l_1909;
    int *l_1921 = &l_1909;
    int *l_1922 = &g_26;
    int *l_1923 = &l_1902;
    int *l_1924 = &g_1394;
    int *l_1925 = &l_1873;
    int *l_1926 = &g_1653;
    int *l_1927 = &g_890;
    int *l_1928 = &l_1764;
    int l_1929 = 6L;
    int *l_1930 = &g_1653;
    int *l_1931 = (void*)0;
    int *l_1932 = &l_1909;
    int *l_1933 = &l_1907;
    int *l_1934 = &l_1929;
    int *l_1935 = &g_284;
    int *l_1936 = &l_1873;
    int l_1937 = 0x062489EFL;
    int *l_1938 = &l_1774;
    int *l_1939 = &l_1937;
    int *l_1940 = &g_284;
    int *l_1941 = (void*)0;
    int *l_1942 = (void*)0;
    int *l_1943 = &l_1902;
    int l_1944 = 0x3002D1C5L;
    int *l_1945 = (void*)0;
    int l_1946 = 0x3EBE3020L;
    int *l_1947 = &l_1873;
    int *l_1948 = &g_890;
    int *l_1949 = (void*)0;
    int *l_1950 = &g_1394;
    int *l_1951 = (void*)0;
    int *l_1952 = &l_1907;
    int *l_1953 = &l_1774;
    int *l_1954 = &l_1929;
    unsigned char *l_1966 = &g_107;
    unsigned **l_1967 = (void*)0;
    if (((safe_add_func_int16_t_s_s(l_55, (((void*)0 == l_56) > (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0xE569L, (safe_add_func_int64_t_s_s(((*l_56) = func_6(func_6(g_15, g_20, (*l_56), g_26, ((*l_56) || 0x7709L)), g_23, l_55, l_55, l_55)), g_15)))), g_23))))) | (*p_51)))
    {
        char l_82 = 2L;
        unsigned char *l_87 = &g_88;
        unsigned short *l_1633 = &g_1634;
        int *l_1652 = &g_1653;
        (*l_1652) ^= func_63(l_69, func_70(func_72(func_77(func_79(&g_23, func_6(l_82, ((*l_87) = (safe_mod_func_uint16_t_u_u(((*l_69)++), l_82))), g_23, (*p_50), ((safe_add_func_int8_t_s_s(0x4DL, ((safe_unary_minus_func_uint16_t_u((*l_56))) || (*l_56)))) , (*l_56))))), p_51, l_82, g_1146)), l_1633, g_1446, &g_1634);



        ;

    }
    else
    {
        int *l_1654 = &g_110;
        int **l_1655 = &l_1654;
        unsigned short **l_1656 = &g_203;
        const unsigned l_1661 = 0x42568977L;
        char *l_1666 = (void*)0;
        unsigned long long **l_1686 = &g_765;
        const unsigned l_1701 = 0xA342A98FL;
        const short *l_1711 = &g_231;
        int l_1770 = 9L;
        char *l_1788 = (void*)0;
        long long l_1794 = 0xF7809C32EA03B980LL;
        p_50 = ((*l_1655) = l_1654);

        ;
        if ((((l_1656 == ((((*l_1654) = (safe_mul_func_uint8_t_u_u(3UL, 254UL))) & (safe_sub_func_uint32_t_u_u((*l_56), (l_1661 <= 3L)))) , l_1662)) || l_1663) < (safe_mul_func_int8_t_s_s(((((g_1667 = l_1666) == (void*)0) >= l_1661) & g_1146), (*p_51)))))
        {
            (*g_757) = (*p_50);
            l_56 = ((*l_1655) = &g_890);

            ;
            ;
        }
        else
        {
            int l_1672 = 0x877FD66DL;
            unsigned char *l_1673 = &g_1527;
            const unsigned short l_1678 = 0xFA0DL;
            unsigned short l_1680 = 0x8EB5L;
            unsigned long long **l_1685 = (void*)0;
            const unsigned **l_1705 = (void*)0;
            int *l_1730 = (void*)0;
            int *l_1731 = &g_1394;
            int *l_1732 = (void*)0;
            int *l_1733 = (void*)0;
            int *l_1734 = &g_1394;
            int *l_1735 = (void*)0;
            int *l_1736 = &g_110;
            int *l_1737 = &l_1672;
            int *l_1738 = &g_110;
            int *l_1739 = &g_110;
            int *l_1740 = &g_26;
            int *l_1741 = (void*)0;
            int *l_1742 = &g_1394;
            int *l_1744 = &g_890;
            int *l_1745 = &l_1672;
            int *l_1746 = &l_1743;
            int *l_1747 = &g_890;
            int *l_1748 = &g_333;
            int *l_1749 = &g_26;
            int *l_1750 = &g_284;
            int *l_1751 = (void*)0;
            int *l_1752 = &g_1394;
            int *l_1753 = &g_333;
            int *l_1754 = &l_1743;
            int *l_1755 = (void*)0;
            int *l_1756 = (void*)0;
            int *l_1757 = &g_333;
            int l_1758 = 0x30C3778CL;
            int *l_1759 = &g_333;
            int *l_1760 = &g_284;
            int *l_1761 = &l_1758;
            int *l_1762 = &g_1653;
            int *l_1763 = (void*)0;
            int *l_1765 = &l_1672;
            int *l_1766 = &g_1653;
            int *l_1767 = &g_26;
            int *l_1768 = (void*)0;
            int *l_1769 = (void*)0;
            int *l_1771 = (void*)0;
            int *l_1772 = &l_1743;
            int *l_1773 = (void*)0;
            int *l_1775 = &g_110;
            short *l_1785 = &g_1446;
            if ((safe_lshift_func_uint8_t_u_u(((((*g_1645) == (void*)0) | (safe_add_func_uint16_t_u_u(func_6(l_1672, ((*l_1673) ^= ((*l_1654) , g_13)), (*g_765), (*p_50), ((safe_mul_func_int8_t_s_s((**l_1655), (g_107 = l_1672))) , 0xAA7B8110L)), (*g_19)))) | 0xE9DB628F0E6A8C0ELL), 7)))
            {
                unsigned long long l_1679 = 0x429FE933A06DC67CLL;
                int *l_1698 = &g_284;
                unsigned short *l_1699 = (void*)0;
                g_1394 &= func_6(func_72(l_1672, ((((void*)0 != p_50) , (((0x3458DAC9L | (safe_lshift_func_uint16_t_u_u((*l_56), 2))) , func_77((*l_1655))) & l_1678)) , &g_1469), g_1455, l_1679), l_1672, l_1680, g_1469, g_13);

                ;

                if ((((safe_sub_func_int32_t_s_s(0x142DB792L, (safe_mod_func_uint32_t_u_u(func_63((g_203 = (*l_1656)), (l_1678 , ((l_1685 == l_1686) , &l_1672)), &l_1680, (safe_sub_func_uint64_t_u_u((*g_765), ((-1L) < 0xBBL))), &l_1680), g_1446)))) >= (-1L)) || 18446744073709551611UL))
                {
                    const int **l_1691 = (void*)0;
                    const int *l_1693 = &g_284;
                    const int **l_1692 = &l_1693;
                    for (g_26 = (-11); (g_26 == 26); g_26++)
                    {
                        if ((*p_50))
                            break;
                        (*l_1655) = &g_26;

                        ;
                    }

                    ;
                    (*l_1692) = p_50;

                    ;
                }
                else
                {
                    unsigned l_1697 = 0x7CCD9D0AL;
                    long long *l_1702 = &g_541;
                    if (((~0xA7L) | ((l_1678 , g_1023) == ((safe_unary_minus_func_uint16_t_u(((((safe_lshift_func_int16_t_s_u((-1L), 8)) > ((*l_1702) |= (&g_1645 != (((func_63(&g_15, ((((*g_203) && ((*l_1654) , 1UL)) , l_1697) , l_1698), l_1699, l_1700, &g_754) == l_1701) || l_1672) , (void*)0)))) >= 0UL) || (*l_1654)))) , 18446744073709551615UL))))
                    {
                        (*l_1655) = func_70((safe_rshift_func_uint16_t_u_s((p_50 != &g_890), 1)));

                        ;
                        ;
                    }
                    else
                    {
                        (*l_1655) = (void*)0;

                        ;
                        (*l_56) = (&g_1646 == l_1705);
                    }

                    ;
                    ;
                }

                ;
                ;
            }
            else
            {
                unsigned char l_1709 = 0UL;
                short *l_1710 = &g_230;
                int * const l_1720 = &g_110;
                for (g_909 = 2; (g_909 >= 54); ++g_909)
                {
                    long long *l_1708 = &g_541;
                    const short **l_1712 = &l_1711;
                    const char *l_1716 = (void*)0;
                    const char **l_1715 = &l_1716;
                    int l_1717 = 0L;
                    (*l_1655) = func_70(((*l_1708) |= g_599));
                    l_1672 ^= ((((246UL < l_1709) & (func_6((*g_765), (l_1710 != ((*l_1712) = l_1711)), (safe_rshift_func_uint8_t_u_s((6L & ((**g_764) ^ func_72(l_1709, ((*l_1715) = &g_1469), g_13, (**l_1655)))), l_1709)), g_140, l_1717) | (*p_51))) , l_1680) & (**g_764));

                    ;
                    for (g_1469 = 0; (g_1469 == 10); ++g_1469)
                    {
                        int **l_1721 = &g_757;
                        char *l_1728 = &g_1729;
                        (*l_1721) = l_1720;

                        ;
                        (*l_1721) = &g_890;

                        ;
                        if ((*p_50))
                            continue;
                        if ((*p_50))
                            break;
                    }
                }

                ;
                ;
                (*g_757) |= 0xA5AB6D91L;
                return &g_1653;


            }

            ;

            ;
            --l_1776;
            for (g_284 = 0; (g_284 >= 17); ++g_284)
            {
                short *l_1783 = &g_231;
                short **l_1786 = &l_1785;
                int l_1787 = 0xE34591A7L;
                unsigned *l_1789 = &l_1700;
                int **l_1795 = (void*)0;
                int **l_1796 = &l_1757;
                long long *l_1799 = &g_541;
            }
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
    g_1955++;
    (*l_1952) = ((+((((*l_1919) , (*l_1897)) < (safe_rshift_func_uint16_t_u_s((*l_1883), 0))) , (~(((*l_1849) &= (safe_mul_func_uint16_t_u_u(((*l_69) |= (*l_1829)), (((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((((*l_1966) = (*l_1829)) > (*l_1811)) >= ((*l_1827) ^ (((*l_1879) ^ (*l_1824)) >= 0UL))), (*l_1859))) < g_1446), (*l_1817))) , (void*)0) != l_1967)))) || (*l_1816))))) > (*l_1852));
    return &g_1394;


}







static int func_63(unsigned short * p_64, int * p_65, unsigned short * p_66, int p_67, unsigned short * p_68)
{
    int **l_1635 = &g_757;
    unsigned short **l_1640 = &g_203;
    unsigned short **l_1641 = (void*)0;
    unsigned short **l_1642 = &g_19;
    unsigned short **l_1643 = &g_19;
    unsigned short *l_1644 = &g_754;
    unsigned ***l_1647 = &g_1645;
    unsigned **l_1649 = (void*)0;
    unsigned ***l_1648 = &l_1649;
    int *l_1650 = &g_599;
    int *l_1651 = &g_890;
    (*l_1635) = (void*)0;

    ;
    for (g_20 = 0; (g_20 < 31); g_20++)
    {
        if ((*p_65))
            break;
        (*p_65) = (safe_mul_func_int8_t_s_s(p_67, p_67));
    }
    g_757 = (p_67 , &g_284);

    ;
    (*l_1651) &= ((-5L) > ((p_66 != (l_1644 = p_68)) && ((((~(((**l_1635) < (((((*l_1647) = g_1645) != ((*l_1648) = (void*)0)) , (((func_6((**l_1635), (**l_1635), ((*g_765) &= (+(p_67 >= 0L))), (**l_1635), (**l_1635)) , l_1650) == &g_599) ^ (**l_1635))) == g_110)) & g_231)) && 0x4AL) > p_67) & p_67)));


    return (**l_1635);
}







static int * func_70(long long p_71)
{
    unsigned short l_1188 = 0xD881L;
    int *l_1191 = &g_284;
    int l_1208 = 0xEFE7ABCCL;
    int l_1337 = 3L;
    int *l_1470 = &l_1337;
    char l_1471 = 1L;
    unsigned char l_1478 = 0x7DL;
    unsigned short l_1479 = 65533UL;
    unsigned long long **l_1492 = &g_765;
    unsigned short **l_1536 = &g_203;
    int l_1625 = 0x626799E4L;
    int *l_1632 = &g_284;
    for (g_20 = 0; (g_20 == 52); g_20 = safe_add_func_uint8_t_u_u(g_20, 1))
    {
        unsigned short *l_1182 = &g_15;
        int l_1195 = 0x87F5C916L;
        unsigned char *l_1199 = &g_338;
        int l_1239 = 0x7681407AL;
        int l_1265 = 0x891B55A6L;
        int l_1404 = 0xB9AEA987L;
        int l_1433 = 1L;
        int l_1448 = 8L;
        int l_1559 = 0x15041E7FL;
        unsigned l_1628 = 4294967295UL;
        if ((l_1182 == &g_754))
        {
            int *l_1183 = &g_890;
            int *l_1184 = (void*)0;
            int *l_1185 = &g_284;
            int *l_1186 = &g_26;
            int *l_1187 = &g_284;
            int **l_1192 = &l_1185;
            short *l_1196 = &g_231;
            const char *l_1206 = &g_23;
            int l_1210 = 0L;
            int l_1211 = 0x784F9FB4L;
            int l_1235 = 0L;
            int l_1246 = 8L;
            int l_1261 = 0xA15CD715L;
            int l_1291 = 0x1734ADEFL;
            int l_1311 = (-6L);
            int l_1326 = 9L;
            int l_1336 = 0xB519FE2EL;
            int l_1441 = 0x36532E99L;
            unsigned short *l_1463 = &g_754;
            l_1188++;
            (*l_1192) = l_1191;
            for (g_230 = 9; (g_230 < (-30)); --g_230)
            {
                long long *l_1197 = &g_541;
                int l_1198 = 0xB3E53CA5L;
                int l_1236 = 0x215D15EBL;
                int l_1325 = 0x0C859E24L;
                int l_1368 = (-1L);
                int l_1371 = 0xC26C70C2L;
                int l_1386 = 1L;
                int l_1390 = 4L;
                int l_1397 = (-8L);
                int l_1400 = 8L;
                char l_1480 = 0x7CL;
                unsigned short *l_1481 = &g_754;
                int *l_1484 = &l_1441;
                unsigned long long **l_1491 = &g_765;
                (*l_1187) = ((l_1195 & (func_6((((-1L) & func_72((*g_765), &g_23, ((*l_1186) = (&g_230 == l_1196)), (((*l_1197) = p_71) || (g_284 ^ l_1198)))) , 1UL), p_71, l_1195, p_71, (*l_1191)) && l_1198)) > 1L);
                (*l_1186) = (l_1199 != (void*)0);
                for (g_23 = (-22); (g_23 > (-11)); g_23 = safe_add_func_uint16_t_u_u(g_23, 9))
                {
                    unsigned long long l_1207 = 0UL;
                    int l_1209 = 0x7E4A89C6L;
                    int l_1324 = 0x517E365FL;
                    short l_1363 = (-1L);
                    int l_1408 = 0xC27EC83FL;
                    int l_1450 = 0xE5BC9734L;
                    (*l_1192) = l_1191;

                    ;
                    if ((safe_mod_func_uint16_t_u_u(l_1195, (safe_sub_func_uint32_t_u_u((g_909 < func_72(p_71, l_1199, p_71, (l_1195 , (func_72((*g_765), l_1206, g_541, p_71) <= l_1207)))), 0UL)))))
                    {
                        (*l_1192) = &g_284;
                        (*l_1192) = &g_26;

                        ;
                    }
                    else
                    {
                        int *l_1212 = &l_1211;
                        int *l_1213 = (void*)0;
                        int *l_1214 = &l_1209;
                        int *l_1215 = &l_1208;
                        int *l_1216 = &g_284;
                        int *l_1217 = &g_26;
                        int *l_1218 = &l_1208;
                        int *l_1219 = &l_1211;
                        int *l_1220 = &g_110;
                        int *l_1221 = &l_1210;
                        int *l_1222 = &g_26;
                        int *l_1223 = &l_1198;
                        int *l_1224 = &g_110;
                        int *l_1225 = (void*)0;
                        int *l_1226 = &l_1195;
                        int *l_1227 = (void*)0;
                        int *l_1228 = &l_1210;
                        int *l_1229 = &g_890;
                        int *l_1230 = (void*)0;
                        int *l_1231 = &l_1195;
                        int *l_1232 = (void*)0;
                        int *l_1233 = &g_26;
                        int *l_1234 = &l_1209;
                        int *l_1237 = &l_1198;
                        int *l_1238 = &g_284;
                        int *l_1240 = &g_110;
                        int *l_1241 = &l_1235;
                        int *l_1242 = &l_1235;
                        int *l_1243 = (void*)0;
                        int *l_1244 = &g_110;
                        int *l_1245 = &g_110;
                        int *l_1247 = (void*)0;
                        int *l_1248 = &l_1208;
                        int *l_1249 = &l_1198;
                        int *l_1250 = &l_1208;
                        int *l_1251 = &l_1208;
                        int *l_1252 = &l_1208;
                        int *l_1253 = &l_1236;
                        int *l_1254 = (void*)0;
                        int *l_1255 = &g_890;
                        int *l_1256 = &g_333;
                        int *l_1257 = &l_1195;
                        int *l_1258 = &l_1211;
                        int *l_1259 = &l_1235;
                        int *l_1260 = &g_110;
                        int *l_1262 = &l_1236;
                        int *l_1263 = (void*)0;
                        int *l_1264 = &l_1198;
                        int *l_1266 = &l_1261;
                        int *l_1267 = &l_1239;
                        int *l_1268 = &l_1211;
                        int *l_1269 = &l_1246;
                        int *l_1270 = &l_1198;
                        int *l_1271 = &l_1211;
                        int *l_1272 = &l_1235;
                        int *l_1273 = &g_110;
                        int *l_1274 = (void*)0;
                        int *l_1275 = &l_1208;
                        int *l_1276 = &g_110;
                        int *l_1277 = &l_1211;
                        int *l_1278 = &l_1195;
                        int *l_1279 = &g_333;
                        int *l_1280 = (void*)0;
                        int *l_1281 = &g_890;
                        int *l_1282 = &l_1209;
                        int *l_1283 = &l_1236;
                        int *l_1284 = (void*)0;
                        int l_1285 = 0x51D0B2BBL;
                        int *l_1286 = &g_284;
                        int *l_1287 = &l_1195;
                        int *l_1288 = (void*)0;
                        int *l_1289 = (void*)0;
                        int *l_1290 = (void*)0;
                        int *l_1292 = &l_1198;
                        int *l_1293 = &l_1195;
                        int *l_1294 = &g_110;
                        int *l_1295 = (void*)0;
                        int *l_1296 = &g_110;
                        int *l_1297 = &g_110;
                        int *l_1298 = &l_1211;
                        int *l_1299 = &g_333;
                        int *l_1300 = &l_1208;
                        int *l_1301 = &l_1195;
                        int *l_1302 = (void*)0;
                        int *l_1303 = &l_1285;
                        int *l_1304 = &l_1246;
                        int *l_1305 = &l_1235;
                        int *l_1306 = &g_890;
                        int *l_1307 = (void*)0;
                        int l_1308 = 4L;
                        int *l_1309 = &l_1210;
                        int *l_1310 = &l_1308;
                        int *l_1312 = &l_1308;
                        int *l_1313 = &l_1210;
                        int l_1314 = 0x4181DE12L;
                        int *l_1315 = &l_1308;
                        int *l_1316 = &l_1209;
                        int *l_1317 = &l_1236;
                        int *l_1318 = &l_1236;
                        int *l_1319 = &l_1239;
                        int l_1320 = 1L;
                        int *l_1321 = (void*)0;
                        int *l_1322 = (void*)0;
                        int *l_1323 = &l_1320;
                        int *l_1327 = (void*)0;
                        int *l_1328 = &l_1235;
                        int *l_1329 = &l_1246;
                        int *l_1330 = &g_26;
                        int *l_1331 = &g_26;
                        int *l_1332 = (void*)0;
                        int *l_1333 = (void*)0;
                        int *l_1334 = &l_1195;
                        int *l_1335 = &g_284;
                        int *l_1338 = &g_333;
                        int *l_1339 = &l_1337;
                        int *l_1340 = &l_1285;
                        int *l_1341 = &g_890;
                        int *l_1342 = (void*)0;
                        int *l_1343 = &l_1236;
                        int *l_1344 = &l_1285;
                        int *l_1345 = &l_1236;
                        int *l_1346 = &l_1236;
                        int *l_1347 = &l_1210;
                        int *l_1348 = (void*)0;
                        int *l_1349 = &l_1314;
                        int *l_1350 = &l_1325;
                        int *l_1351 = &l_1211;
                        int *l_1352 = (void*)0;
                        int *l_1353 = &l_1291;
                        int *l_1354 = &l_1195;
                        int *l_1355 = (void*)0;
                        int *l_1356 = &l_1235;
                        int *l_1357 = &l_1209;
                        int *l_1358 = &l_1208;
                        int *l_1359 = &l_1246;
                        int l_1360 = 0x04E65BD2L;
                        int *l_1361 = &l_1195;
                        int *l_1362 = (void*)0;
                        int *l_1364 = &l_1246;
                        int *l_1365 = (void*)0;
                        int *l_1366 = &l_1210;
                        int *l_1367 = (void*)0;
                        int *l_1369 = (void*)0;
                        int *l_1370 = &l_1336;
                        int *l_1372 = &l_1195;
                        int *l_1373 = &l_1208;
                        int *l_1374 = &l_1325;
                        int *l_1375 = &l_1285;
                        int *l_1376 = &l_1210;
                        int *l_1377 = (void*)0;
                        int *l_1378 = &l_1211;
                        int l_1379 = (-8L);
                        int *l_1380 = &g_26;
                        int *l_1381 = &g_284;
                        int *l_1382 = (void*)0;
                        int *l_1383 = &l_1198;
                        int *l_1384 = &l_1291;
                        int *l_1385 = (void*)0;
                        int *l_1387 = &l_1379;
                        int *l_1388 = &l_1325;
                        int *l_1389 = &l_1291;
                        int *l_1391 = &l_1326;
                        int *l_1392 = &l_1198;
                        int *l_1393 = &l_1209;
                        int *l_1395 = &l_1208;
                        int *l_1396 = &l_1324;
                        int *l_1398 = &l_1311;
                        int *l_1399 = &l_1198;
                        int *l_1401 = (void*)0;
                        int *l_1402 = &l_1379;
                        int *l_1403 = (void*)0;
                        int *l_1405 = (void*)0;
                        int *l_1406 = &l_1390;
                        int *l_1407 = (void*)0;
                        int *l_1409 = &l_1209;
                        int *l_1410 = (void*)0;
                        int *l_1411 = &l_1308;
                        int *l_1412 = &l_1308;
                        int l_1413 = 0x90B1D1E6L;
                        int *l_1414 = &l_1379;
                        int *l_1415 = &l_1209;
                        int *l_1416 = &l_1291;
                        int *l_1417 = &l_1311;
                        int *l_1418 = &l_1211;
                        int *l_1419 = &l_1261;
                        int *l_1420 = (void*)0;
                        int *l_1421 = &l_1308;
                        int *l_1422 = (void*)0;
                        int *l_1423 = &l_1326;
                        int *l_1424 = &l_1311;
                        int *l_1425 = &l_1336;
                        int *l_1426 = &l_1336;
                        int *l_1427 = &g_110;
                        int *l_1428 = (void*)0;
                        int *l_1429 = &l_1320;
                        int *l_1430 = &l_1235;
                        int *l_1431 = (void*)0;
                        int *l_1432 = &l_1400;
                        int *l_1434 = &l_1236;
                        int *l_1435 = (void*)0;
                        int *l_1436 = (void*)0;
                        int *l_1437 = (void*)0;
                        int *l_1438 = &l_1209;
                        int *l_1439 = &g_890;
                        int *l_1440 = &l_1308;
                        int *l_1442 = &l_1211;
                        int *l_1443 = (void*)0;
                        int *l_1444 = &l_1433;
                        int *l_1445 = &l_1211;
                        int *l_1447 = &g_890;
                        int *l_1449 = &g_26;
                        int *l_1451 = &l_1326;
                        int *l_1452 = &l_1337;
                        int *l_1453 = (void*)0;
                        int *l_1454 = &g_1394;
                        unsigned short *l_1460 = (void*)0;
                        unsigned short **l_1461 = &g_203;
                        unsigned short **l_1462 = &g_19;
                        char *l_1468 = &g_1469;
                        --g_1455;
                        (*l_1241) |= 2L;
                        g_890 &= func_72((safe_sub_func_int32_t_s_s(((l_1463 = l_1460) == &g_719), (safe_lshift_func_uint8_t_u_s(((((*g_765) <= (-1L)) & ((((*l_1196) |= ((*l_1191) = (safe_mod_func_int32_t_s_s((!((*l_1297) ^= ((p_71 & (((*l_1468) |= g_754) , (((*l_1372) &= ((((*l_1468) |= (p_71 , ((p_71 < ((p_71 && (-1L)) || p_71)) , 0xAEL))) > g_754) ^ 0x1347796DL)) >= 0x5505299ACC58A53ELL))) <= l_1408))), 0x80E239D7L)))) < 65533UL) == l_1236)) == 0xC7F155CA43D7ED80LL), g_1023)))), &g_23, l_1397, (*l_1186));

                        ;
                    }

                    ;
                    ;
                    (*l_1185) |= p_71;
                    return &g_110;


                }
                if (func_6(p_71, l_1471, (*g_765), (g_20 | (safe_mul_func_uint8_t_u_u((func_6((safe_mul_func_int16_t_s_s(((*l_1470) <= (func_6(func_72((l_1479 = (safe_mod_func_int16_t_s_s(0x18DCL, func_6(l_1478, g_1455, ((g_1023 = 0x72E53C11L) || (*l_1470)), p_71, l_1390)))), &g_23, p_71, (*l_1187)), p_71, (*g_765), l_1480, g_13) & l_1325)), (-1L))), l_1239, p_71, p_71, l_1480) != (*l_1183)), p_71))), (*l_1187)))
                {
                    unsigned short *l_1482 = &g_719;
                    int l_1483 = (-10L);
                    unsigned long long ***l_1486 = &g_764;
                    int *l_1493 = &l_1235;
                    int *l_1494 = &g_890;
                    int *l_1495 = &l_1210;
                    int *l_1496 = &l_1336;
                    int *l_1497 = &l_1337;
                    int *l_1498 = &l_1236;
                    int *l_1499 = &l_1198;
                    int *l_1500 = &l_1390;
                    int *l_1501 = &l_1291;
                    int *l_1502 = &l_1404;
                    int *l_1503 = &l_1325;
                    int *l_1504 = &l_1404;
                    int l_1505 = 0x1AE721ADL;
                    int *l_1506 = &l_1483;
                    int *l_1507 = &l_1311;
                    int *l_1508 = &l_1208;
                    int *l_1509 = &l_1261;
                    int *l_1510 = &l_1483;
                    int *l_1511 = &l_1483;
                    int *l_1512 = &l_1483;
                    int *l_1513 = &l_1211;
                    int *l_1514 = &l_1337;
                    int *l_1515 = &l_1390;
                    int *l_1516 = &l_1235;
                    int *l_1517 = &l_1325;
                    int *l_1518 = &g_333;
                    int *l_1519 = &l_1235;
                    int *l_1520 = &l_1390;
                    int *l_1521 = &l_1336;
                    int *l_1522 = &g_110;
                    int *l_1523 = &l_1390;
                    int *l_1524 = &g_1394;
                    int *l_1525 = &l_1448;
                    int *l_1526 = &l_1246;
                    (*l_1183) ^= ((p_71 <= (((l_1481 = l_1481) != l_1482) && (((65535UL <= ((l_1483 , (((void*)0 == &g_890) ^ (((func_72(((l_1482 != (void*)0) > p_71), &g_23, (*l_1185), p_71) ^ p_71) <= l_1483) <= p_71))) , 0x4698L)) && 0xAFEBL) < g_140))) == g_1394);
                    if ((*g_757))
                    {
                        return &g_26;


                    }
                    else
                    {
                        const unsigned long long ***l_1487 = (void*)0;
                        (*l_1484) = (safe_unary_minus_func_uint32_t_u(func_6((*g_765), g_284, ((((*l_1481) &= (((*l_1197) = (l_1486 == l_1487)) ^ (safe_unary_minus_func_uint64_t_u((((safe_rshift_func_int8_t_s_s(g_1446, p_71)) , l_1491) == (p_71 , l_1492)))))) , (*l_1484)) , l_1433), (*g_757), l_1239)));
                    }
                    --g_1527;
                    for (g_1527 = 20; (g_1527 == 49); g_1527 = safe_add_func_uint16_t_u_u(g_1527, 1))
                    {
                        unsigned char l_1532 = 0UL;
                        (*l_1192) = &l_1239;

                        ;
                        if (l_1532)
                            break;
                        (*l_1519) = (*g_757);
                        (*l_1192) = &l_1404;

                        ;
                    }
                }
                else
                {
                    int *l_1533 = &g_284;
                    char *l_1537 = &l_1480;
                    (*l_1192) = l_1533;

                    ;
                    if (((g_1446 ^ ((l_1185 == l_1484) > (g_239 , (safe_sub_func_uint64_t_u_u((*g_765), func_72(((0x45L == l_1239) >= ((*l_1537) |= (l_1536 == (void*)0))), &g_1469, (*l_1484), p_71)))))) ^ p_71))
                    {
                        (*l_1192) = &g_333;

                        ;
                        if ((*l_1533))
                            break;
                        (**l_1192) &= p_71;
                    }
                    else
                    {
                        return &g_26;


                    }

                    ;
                    (*l_1192) = (*l_1192);
                }
            }

            ;
            if (p_71)
                continue;
        }
        else
        {
            int *l_1538 = &g_284;
            int *l_1539 = &l_1239;
            int *l_1540 = &l_1433;
            int *l_1541 = &l_1404;
            int *l_1542 = &l_1448;
            int *l_1543 = &g_284;
            int *l_1544 = &g_284;
            int *l_1545 = &g_26;
            int *l_1546 = (void*)0;
            int *l_1547 = (void*)0;
            int *l_1548 = &l_1404;
            int *l_1549 = &g_110;
            int *l_1550 = &l_1239;
            int *l_1551 = (void*)0;
            int *l_1552 = &g_890;
            int *l_1553 = &l_1337;
            int *l_1554 = &g_890;
            int *l_1555 = &g_110;
            int *l_1556 = &l_1404;
            int *l_1557 = &l_1195;
            int *l_1558 = &l_1433;
            int *l_1560 = (void*)0;
            int *l_1561 = &g_284;
            int *l_1562 = (void*)0;
            int *l_1563 = &g_110;
            int l_1564 = 0xE227A8FBL;
            int *l_1565 = &l_1448;
            int *l_1566 = (void*)0;
            int *l_1567 = &l_1559;
            int *l_1568 = &l_1208;
            int *l_1569 = &l_1448;
            int *l_1570 = &l_1195;
            int *l_1571 = &g_26;
            int *l_1572 = &l_1337;
            int *l_1573 = &l_1195;
            int *l_1574 = &l_1564;
            int *l_1575 = &l_1559;
            int *l_1576 = &l_1208;
            int *l_1577 = &l_1208;
            int *l_1578 = &l_1448;
            int *l_1579 = &l_1564;
            int *l_1580 = &g_110;
            int *l_1581 = &l_1195;
            int *l_1582 = (void*)0;
            int *l_1583 = &l_1239;
            int *l_1584 = &l_1208;
            int *l_1585 = &l_1559;
            int *l_1586 = (void*)0;
            int *l_1587 = &l_1239;
            int *l_1588 = (void*)0;
            int *l_1589 = (void*)0;
            int *l_1590 = &l_1433;
            int *l_1591 = (void*)0;
            int *l_1592 = (void*)0;
            int *l_1593 = &g_333;
            int *l_1594 = (void*)0;
            int *l_1595 = &g_26;
            int *l_1596 = &g_26;
            int *l_1597 = (void*)0;
            int *l_1598 = &l_1195;
            int l_1599 = (-9L);
            int *l_1600 = &l_1337;
            int *l_1601 = &l_1337;
            int *l_1602 = &g_26;
            int *l_1603 = &l_1337;
            int *l_1604 = &g_26;
            int *l_1605 = &l_1195;
            int *l_1606 = &g_284;
            int *l_1607 = &g_284;
            int *l_1608 = &l_1448;
            int *l_1609 = &l_1239;
            int *l_1610 = &l_1559;
            int l_1611 = 0L;
            int *l_1612 = &g_110;
            int *l_1613 = &g_26;
            int *l_1614 = &l_1564;
            int *l_1615 = (void*)0;
            int *l_1616 = &l_1208;
            int *l_1617 = &l_1404;
            int *l_1618 = (void*)0;
            int *l_1619 = &l_1559;
            int *l_1620 = (void*)0;
            int *l_1621 = &l_1208;
            int *l_1622 = &l_1564;
            int *l_1623 = (void*)0;
            int *l_1624 = &l_1448;
            int *l_1626 = &g_284;
            int *l_1627 = &l_1559;
            int **l_1631 = &l_1544;
            l_1628++;
            if ((*g_757))
                break;
            (*l_1553) &= 0L;
            (*l_1631) = &l_1564;

            ;
        }
    }
    return l_1632;


}







static long long func_72(unsigned long long p_73, const char * p_74, short p_75, unsigned short p_76)
{
    long long l_1150 = (-1L);
    const char *l_1151 = &g_23;
    int *l_1154 = (void*)0;
    char *l_1155 = &g_23;
    const unsigned *l_1159 = &g_1023;
    const unsigned **l_1158 = &l_1159;
    unsigned long long *l_1174 = &g_239;
    unsigned short *l_1177 = &g_20;
    const int *l_1179 = (void*)0;
    const int **l_1178 = &l_1179;
    if ((l_1150 || (((l_1150 , p_76) , (func_6(((-3L) && p_73), p_73, l_1150, p_73, g_1146) , p_75)) != l_1150)))
    {
        int **l_1156 = &l_1154;
        int **l_1157 = &g_757;
        (*l_1156) = &g_333;

        ;
        (*l_1157) = (l_1154 = l_1154);

        ;
    }
    else
    {
        l_1158 = (void*)0;

        ;
        return p_76;
    }

    ;
    ;
    (*l_1178) = l_1159;

    ;
    return p_73;
}







static unsigned long long func_77(int * p_78)
{
    const unsigned short l_223 = 65530UL;
    int l_322 = (-1L);
    int l_328 = (-1L);
    const unsigned long long *l_351 = &g_239;
    unsigned short *l_357 = &g_15;
    int l_512 = (-1L);
    int l_545 = 0xE70221A4L;
    unsigned short l_548 = 0xA819L;
    unsigned long long l_574 = 18446744073709551615UL;
    short l_608 = 0x773CL;
    int l_855 = 0L;
    unsigned long long *** const l_918 = &g_764;
    long long l_970 = (-4L);
    unsigned char l_1033 = 0x51L;
    int **l_1149 = &g_757;
    if ((g_20 , l_223))
    {
        unsigned l_236 = 0x893A053FL;
        int l_242 = (-1L);
        char l_256 = 9L;
        unsigned long long *l_349 = &g_239;
        int l_353 = 9L;
        short l_359 = (-2L);
        int *l_503 = (void*)0;
        int **l_502 = &l_503;
        int *l_504 = &l_242;
        int *l_505 = (void*)0;
        int *l_506 = &g_333;
        int *l_507 = (void*)0;
        int *l_508 = &g_284;
        int *l_509 = &l_328;
        int *l_510 = &g_284;
        int *l_511 = &g_26;
        int *l_513 = (void*)0;
        int *l_514 = &l_242;
        int *l_515 = &g_284;
        int *l_516 = (void*)0;
        int *l_517 = &g_26;
        int *l_518 = &g_333;
        int *l_519 = (void*)0;
        int *l_520 = &l_512;
        int *l_521 = &g_26;
        int *l_522 = &l_328;
        int *l_523 = &l_322;
        int *l_524 = &l_242;
        int *l_525 = &g_26;
        int *l_526 = &g_26;
        int l_527 = 0x6FB554D0L;
        int *l_528 = &l_322;
        int *l_529 = &g_26;
        int *l_530 = (void*)0;
        int *l_531 = &g_110;
        int *l_532 = &l_242;
        int *l_533 = &l_322;
        int *l_534 = &l_527;
        int l_535 = 0L;
        int *l_536 = &g_110;
        int *l_537 = (void*)0;
        int *l_538 = &g_333;
        int *l_539 = &l_527;
        int *l_540 = &l_535;
        int *l_542 = &l_535;
        int *l_543 = &g_284;
        int *l_544 = &l_242;
        int *l_546 = &g_110;
        int *l_547 = (void*)0;
        for (g_110 = 0; (g_110 < 24); g_110 = safe_add_func_int32_t_s_s(g_110, 1))
        {
            unsigned long long *l_232 = &g_233;
            int l_237 = 9L;
            unsigned long long *l_238 = &g_239;
            int *l_243 = &l_237;
            short l_257 = (-7L);
            unsigned short *l_358 = &g_20;
            unsigned l_387 = 0x6EABFEF3L;
            int l_431 = 0x41C926BBL;
            if (((((*l_243) = ((safe_rshift_func_uint8_t_u_s(((((l_242 |= (safe_rshift_func_uint16_t_u_u(65533UL, (((*p_78) & (func_6((--(*l_232)), l_236, ((*l_238) = (l_223 < (l_236 && l_237))), (g_20 && l_236), (safe_lshift_func_int16_t_s_u(l_236, 1))) , l_223)) < 0x585FL)))) | (-1L)) , g_20) >= l_223), g_230)) == 0L)) , g_140) ^ l_236))
            {
                int l_248 = 0xD4AB7E17L;
                unsigned *l_310 = &l_236;
                int *l_312 = &l_237;
                if ((*p_78))
                {
                    return g_15;
                }
                else
                {
                    unsigned char l_255 = 0x1DL;
                    (*l_243) = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((g_239 < (func_6(l_248, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((~g_15), (*l_243))), ((((l_248 , (g_233 , ((safe_mul_func_int16_t_s_s(0xFD30L, (func_6(l_255, g_23, g_239, l_256, l_248) <= g_110))) ^ (*l_243)))) , 0xD7938C6DL) & g_107) || 18446744073709551615UL))), l_255, (*p_78), l_236) , g_26)), g_88)), 13)) , 1L);
                    l_242 ^= (l_257 &= 1L);
                    if (l_255)
                        break;
                }
                if (((*l_243) |= 0x2F9D9681L))
                {
                    int **l_258 = (void*)0;
                    int **l_259 = &l_243;
                    (*l_259) = &l_242;

                    ;
                    for (l_248 = 11; (l_248 != (-4)); l_248--)
                    {
                        (*l_259) = &g_26;

                        ;
                        return l_248;
                    }
                }
                else
                {
                    int *l_262 = &l_248;
                    int *l_263 = &g_26;
                    int *l_264 = (void*)0;
                    int *l_265 = &l_248;
                    int *l_266 = &g_26;
                    int *l_267 = &l_248;
                    int *l_268 = &g_26;
                    int *l_269 = &l_242;
                    int *l_270 = (void*)0;
                    int *l_271 = &l_248;
                    int *l_272 = (void*)0;
                    int *l_273 = (void*)0;
                    int *l_274 = &l_242;
                    int *l_275 = &g_26;
                    int *l_276 = &l_248;
                    int *l_277 = &l_242;
                    int *l_278 = &g_26;
                    int *l_279 = (void*)0;
                    int *l_280 = &l_248;
                    int *l_281 = &l_242;
                    int *l_282 = &g_26;
                    int *l_283 = &g_26;
                    int *l_285 = &l_242;
                    int l_286 = 0x2E1E5971L;
                    int *l_287 = (void*)0;
                    int *l_288 = &l_248;
                    int *l_289 = &g_284;
                    int *l_290 = &l_242;
                    int *l_291 = &l_237;
                    int *l_292 = &l_242;
                    --g_293;
                    return l_223;
                }

                ;
                if ((safe_mul_func_int8_t_s_s((0UL && (safe_mod_func_int64_t_s_s(((!((*l_310) = ((safe_sub_func_int64_t_s_s(((g_230 < (l_248 , (g_15 ^ (g_284 = (safe_rshift_func_uint8_t_u_s((((0xAF66L & func_6(l_248, g_107, (safe_lshift_func_uint16_t_u_u(0x0AA8L, ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(l_242, l_236)), (*l_243))) ^ 1UL))), g_88, g_284)) , 0xD6B9C23FL) ^ 0x876DE866L), 4)))))) ^ 2L), g_107)) | 0xA4L))) <= 0x9ED2D3DDL), l_248))), g_107)))
                {
                    int **l_311 = (void*)0;
                    l_312 = &g_284;

                    ;
                    if ((*p_78))
                        continue;
                }
                else
                {
                    int **l_313 = &l_312;
                    int *l_314 = (void*)0;
                    int *l_315 = &l_237;
                    int *l_316 = &g_284;
                    int *l_317 = (void*)0;
                    int *l_318 = &l_242;
                    int *l_319 = &l_242;
                    int *l_320 = &l_242;
                    int *l_321 = &g_284;
                    int *l_323 = &l_242;
                    int *l_324 = (void*)0;
                    int *l_325 = &l_248;
                    int *l_326 = &l_237;
                    int *l_327 = (void*)0;
                    int *l_329 = &g_26;
                    int l_330 = 0xB222EA5AL;
                    int *l_331 = &g_284;
                    int *l_332 = (void*)0;
                    int *l_334 = &l_242;
                    int *l_335 = &l_242;
                    int *l_336 = &g_333;
                    int *l_337 = &g_26;
                    (*l_313) = p_78;

                    ;
                    g_338++;
                    if (g_338)
                        continue;
                }

                ;
            }
            else
            {
                short l_346 = 0xEF54L;
                unsigned long long **l_350 = &l_238;
                unsigned short **l_354 = &g_203;
                unsigned short **l_355 = &g_203;
                unsigned short **l_356 = &g_203;
                unsigned long long **l_382 = &l_238;
                char *l_414 = &l_256;
                int l_427 = (-2L);
                int l_430 = 0x1A6C845EL;
                int l_487 = 1L;
                for (g_20 = 0; (g_20 == 22); g_20 = safe_add_func_uint16_t_u_u(g_20, 4))
                {
                    unsigned l_345 = 1UL;
                    int *l_347 = (void*)0;
                    int *l_348 = &g_26;
                    (*l_348) = ((*l_243) |= (safe_rshift_func_uint16_t_u_u((l_345 , l_346), 6)));
                }
                (*l_243) = (((*l_350) = l_349) == l_351);
                if (((((((g_140 , 0x62L) == ((safe_unary_minus_func_uint64_t_u(g_20)) ^ g_239)) && l_346) > ((l_357 = ((((((func_6((l_256 , (p_78 == (l_346 , &l_237))), g_230, l_353, (*p_78), g_233) , 65535UL) == (-1L)) , &g_239) != &g_239) == 0xCCC4747A784966DFLL) , (void*)0)) != l_358)) != 1UL) > l_359))
                {
                    short l_376 = 0x984CL;
                    unsigned char l_377 = 0xF9L;
                    for (l_328 = 0; (l_328 > 15); ++l_328)
                    {
                        return g_88;
                    }
                    if (func_6((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u(((l_346 >= ((safe_add_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(func_6(g_231, g_23, (*l_243), ((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(4294967295UL, 1UL)), g_20)) < 0UL), l_236), l_353)) >= l_376), g_338)) > 1L)) == l_236), (*l_243))), l_346)), 4)), l_346, g_333, (*l_243), l_377))
                    {
                        int **l_378 = &l_243;
                        short *l_379 = &l_346;
                        unsigned long long ***l_380 = (void*)0;
                        unsigned long long ***l_381 = &l_350;
                        (*l_378) = &l_237;
                        (*l_243) = (((*l_379) |= (((*l_243) > (~0x7228L)) == l_242)) < ((((*l_381) = &l_349) == l_382) , (**l_378)));

                        ;
                        if (l_242)
                            break;
                        (*l_378) = (*l_378);
                    }
                    else
                    {
                        g_284 &= (*p_78);
                        (*l_243) = ((0x7948F24D8D29DB80LL <= ((func_6(((safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(0xBB74L, func_6(g_13, l_387, ((safe_unary_minus_func_uint64_t_u(g_293)) && 0xD1L), g_293, (safe_sub_func_uint32_t_u_u(g_284, ((*l_243) > g_140)))))) < l_359), 0xDAL)) < g_284), l_377, l_223, l_236, l_322) , 0x5AL) , (*l_243))) || g_88);
                    }

                    ;
                }
                else
                {
                    unsigned *l_401 = (void*)0;
                    unsigned *l_402 = (void*)0;
                    unsigned *l_403 = &l_236;
                    int l_406 = (-4L);
                    char *l_407 = (void*)0;
                    char *l_408 = &l_256;
                    unsigned char *l_468 = &g_107;
                    unsigned char *l_469 = &g_338;
                    int *l_470 = &g_284;
                    if (func_6((l_322 != ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_26, 5)), (safe_rshift_func_int16_t_s_s((((((*l_243) , (((((*l_243) , ((((*l_243) , 1UL) & ((*l_408) = (((((safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s(g_233, (--(*l_403)))), l_406)) <= 0x35CBL) , 1UL) , l_346) , 1L))) , 3L)) >= (*l_243)) , (*l_243)) & (*l_243))) | l_359) < (*l_243)) , (-1L)), l_406)))) , l_406)), g_284, g_20, g_140, l_346))
                    {
                        unsigned char *l_413 = &g_107;
                        int *l_415 = &l_242;
                        int *l_416 = &l_406;
                        int *l_417 = &g_333;
                        int *l_418 = &l_328;
                        int *l_419 = &l_242;
                        int *l_420 = &l_406;
                        int *l_421 = &l_406;
                        int *l_422 = &l_328;
                        int *l_423 = &g_333;
                        int *l_424 = &l_406;
                        int *l_425 = &l_328;
                        int *l_426 = (void*)0;
                        int *l_428 = &l_328;
                        int *l_429 = &l_237;
                        int *l_432 = &g_26;
                        int *l_433 = &l_322;
                        int *l_434 = &l_431;
                        int *l_435 = &l_406;
                        int *l_436 = &l_242;
                        int *l_437 = &l_431;
                        int *l_438 = &g_284;
                        int *l_439 = &l_242;
                        int *l_440 = &l_242;
                        int *l_441 = &g_284;
                        int *l_442 = &l_406;
                        int *l_443 = &g_284;
                        int *l_444 = &l_237;
                        int *l_445 = &l_322;
                        int *l_446 = &l_322;
                        int *l_447 = &g_333;
                        int *l_448 = &l_237;
                        int *l_449 = &g_333;
                        int *l_450 = &l_431;
                        int *l_451 = (void*)0;
                        int *l_452 = (void*)0;
                        int *l_453 = &g_284;
                        int *l_454 = &l_322;
                        int *l_455 = &l_431;
                        int *l_456 = &l_322;
                        g_333 &= (safe_sub_func_int64_t_s_s(g_20, (0xFF162379L | func_6(l_223, ((*l_413) ^= (safe_sub_func_int32_t_s_s((-2L), (18446744073709551610UL != (-1L))))), ((l_406 , l_414) == &l_256), (*p_78), l_353))));
                        g_457--;
                    }
                    else
                    {
                        g_26 &= g_293;
                        return l_427;
                    }
                    (*l_243) = ((*l_470) |= (safe_mul_func_uint16_t_u_u((((g_13 > g_13) ^ l_242) != ((*l_469) = ((*l_468) = (safe_lshift_func_int16_t_s_s((l_353 >= func_6((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_427, (l_242 | l_353))), ((*l_408) ^= (g_88 || (*l_243))))), (*l_243), g_239, g_231, g_333)), (*l_243)))))), 0L)));
                    for (g_20 = 0; (g_20 != 13); ++g_20)
                    {
                        int *l_473 = &l_431;
                        int *l_474 = &l_430;
                        int *l_475 = &g_284;
                        int *l_476 = &l_431;
                        int *l_477 = &l_427;
                        int *l_478 = &l_406;
                        int *l_479 = (void*)0;
                        int *l_480 = (void*)0;
                        int *l_481 = &l_430;
                        int *l_482 = &l_322;
                        int *l_483 = &l_328;
                        int *l_484 = &g_26;
                        int *l_485 = &g_26;
                        int *l_486 = &l_242;
                        int *l_488 = (void*)0;
                        int *l_489 = (void*)0;
                        int *l_490 = &l_427;
                        int *l_491 = &l_328;
                        int *l_492 = (void*)0;
                        int *l_493 = (void*)0;
                        int *l_494 = &l_487;
                        int *l_495 = &g_333;
                        int *l_496 = &l_237;
                        int *l_497 = (void*)0;
                        int *l_498 = &l_431;
                        l_328 = (*p_78);
                        --g_499;
                    }
                }

                ;
                ;
                if ((*p_78))
                    break;
            }

            ;
        }

        ;
        (*l_502) = &l_242;

        ;
        l_548++;
        for (l_545 = 4; (l_545 != 1); l_545 = safe_sub_func_uint8_t_u_u(l_545, 7))
        {
            unsigned long long l_555 = 0xCC25A29FD0DBB504LL;
            unsigned long long **l_556 = &l_349;
            unsigned char *l_557 = &g_140;
            (*l_528) &= ((*p_78) <= ((g_230 = g_284) , func_6(g_293, (*l_504), (g_233 = (--(*l_349))), l_555, l_555)));
            (*p_78) = (((*l_557) ^= (&g_233 != ((*l_556) = &g_239))) , ((5UL | (((*p_78) ^ ((safe_sub_func_uint8_t_u_u(((*l_544) | l_548), ((*l_546) , g_338))) <= (l_328 & (-1L)))) & g_26)) , (*p_78)));
        }
    }
    else
    {
        unsigned long long l_568 = 0x439820FABC388CCCLL;
        unsigned *l_573 = &g_499;
        int *l_575 = &l_328;
        int l_687 = 1L;
        unsigned short *l_790 = &g_754;
        int l_805 = 0xAA9E6BB4L;
        int l_838 = 0x0E3D2AF2L;
        int l_863 = (-10L);
        int l_871 = (-8L);
        int l_880 = (-2L);
        int l_882 = 0x767C99D1L;
        int l_894 = (-7L);
        int l_902 = (-9L);
        unsigned char *l_919 = &g_107;
        int *l_926 = &g_599;
        if (((*l_575) &= ((((safe_add_func_uint32_t_u_u(((func_6((safe_lshift_func_uint16_t_u_s((!((safe_add_func_int32_t_s_s((((*l_573) = (g_13 , ((safe_lshift_func_int16_t_s_u(((l_568 || l_223) , (!(g_230 >= (l_322 , l_512)))), 15)) > func_6(((safe_mod_func_int8_t_s_s((((g_338 | 0UL) , (safe_add_func_int64_t_s_s((l_223 >= 0x99A79019B9918AEFLL), 0x6E8DC8AE235981C3LL))) != g_231), l_223)) ^ l_568), l_568, l_322, g_230, g_110)))) | l_568), g_13)) | l_574)), 4)), l_568, l_574, (*p_78), g_15) == 0x89366767L) , 4294967292UL), 0xA05C8CDAL)) > l_548) & g_231) && 0x42L)))
        {
            unsigned **l_576 = &l_573;
            int l_590 = (-1L);
            const char *l_607 = &g_23;
            unsigned l_621 = 18446744073709551614UL;
            unsigned long long *l_762 = (void*)0;
            unsigned long long **l_761 = &l_762;
            long long l_779 = 0xCFB3AB085AE07008LL;
            unsigned short *l_791 = (void*)0;
            (*p_78) = (((*l_576) = p_78) != (g_457 , &g_499));

            ;
            (*p_78) = g_231;
            for (g_23 = (-28); (g_23 <= 10); g_23 = safe_add_func_uint32_t_u_u(g_23, 3))
            {
                const short l_604 = 0x5B2FL;
                unsigned long long l_605 = 18446744073709551611UL;
                int l_606 = 0xF76F78F5L;
                int l_609 = 0L;
                int **l_610 = (void*)0;
                int **l_611 = &l_575;
                int *l_613 = &g_333;
                int **l_612 = &l_613;
                long long *l_616 = &g_541;
                short l_617 = 6L;
                unsigned long long *l_618 = &g_239;
                unsigned l_628 = 0xD768F204L;
                int l_684 = 0xB4BC9916L;
                int l_780 = (-2L);
                unsigned char l_781 = 0xBBL;
                unsigned long long ***l_785 = &l_761;
                unsigned l_786 = 4294967295UL;
                short *l_789 = &l_617;
                for (l_545 = 0; (l_545 != (-27)); l_545--)
                {
                    unsigned char l_581 = 0x03L;
                    int l_595 = 0x7CD898BBL;
                    int *l_598 = &g_599;
                    if (g_338)
                        break;
                    (*p_78) = (l_581 | ((((safe_lshift_func_int8_t_s_s(((0xD40CL != ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((l_590 || (l_606 &= (safe_mod_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((l_595 = g_293), g_23)) && func_6((safe_lshift_func_uint8_t_u_s(func_6((((*l_598) = l_581) , l_574), (safe_add_func_int16_t_s_s((l_545 , (((safe_mul_func_int16_t_s_s(0xBEAEL, 0UL)) && l_604) , 0x9B0EL)), l_223)), l_605, (*p_78), (*l_575)), g_13)), g_23, g_293, g_15, g_13)), l_581)))), g_13)) ^ 0xB0L), l_590)), (*l_575))) & l_581)) ^ l_590), 7)) <= l_581) != 0UL) <= l_512));
                }
                (*l_612) = ((*l_611) = &g_333);

                ;
                if (func_6(((**l_611) | ((void*)0 == &g_110)), (safe_add_func_int64_t_s_s((g_499 ^ (0x09A2L != g_230)), ((*l_575) >= (((*l_616) ^= (-7L)) > (func_6(func_6((((*l_618) = l_617) > 0L), g_110, g_333, (*p_78), l_223), g_333, g_599, (*p_78), g_88) || g_239))))), l_512, g_499, l_590))
                {
                    unsigned char l_622 = 0x04L;
                    int l_623 = 0xB0FB90EDL;
                    int l_662 = 4L;
                    int *l_722 = &l_512;
                    int *l_723 = &l_684;
                    int *l_724 = &g_333;
                    int *l_725 = &g_333;
                    int *l_726 = &l_545;
                    int *l_727 = &l_684;
                    int *l_728 = (void*)0;
                    int *l_729 = &l_328;
                    int *l_730 = &g_110;
                    int *l_731 = &l_662;
                    int *l_732 = &g_333;
                    int *l_733 = &l_590;
                    int *l_734 = &g_284;
                    int *l_735 = (void*)0;
                    int *l_736 = &g_284;
                    int *l_737 = &l_545;
                    int *l_738 = &g_284;
                    int *l_739 = &l_623;
                    int *l_740 = &l_606;
                    int *l_741 = &l_328;
                    int *l_742 = &l_687;
                    int *l_743 = &l_322;
                    int *l_744 = (void*)0;
                    int *l_745 = &g_333;
                    int *l_746 = &l_512;
                    int *l_747 = &l_687;
                    int *l_748 = &l_623;
                    int *l_749 = &l_545;
                    int *l_750 = (void*)0;
                    int *l_751 = (void*)0;
                    int *l_752 = &l_590;
                    int *l_753 = &l_687;
                    l_623 = (g_284 |= (((*l_575) & (((safe_add_func_uint16_t_u_u((g_457 , (**l_611)), ((l_590 ^ (*l_575)) | (l_590 , (func_6((*l_613), l_621, l_622, (*p_78), l_590) && l_622))))) != 0x78928A6CL) != 0x5E830980L)) && 0xE449E9A46AD9CA3ELL));
                    (*l_613) = (*l_575);
                    if (func_6((safe_sub_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(3UL, 0x33L)) & (l_590 != 1UL)), (((g_231 > l_574) , ((*l_618) = (**l_612))) | l_628))), l_623, l_623, l_590, g_231))
                    {
                        int *l_629 = (void*)0;
                        int *l_630 = &l_322;
                        int *l_631 = &l_322;
                        int *l_632 = (void*)0;
                        int *l_633 = &l_606;
                        int *l_634 = &l_609;
                        int *l_635 = &g_284;
                        int *l_636 = &l_590;
                        int *l_637 = &l_512;
                        int *l_638 = &l_322;
                        int *l_639 = (void*)0;
                        int *l_640 = &g_284;
                        int *l_641 = &l_322;
                        int *l_642 = &g_26;
                        int *l_643 = &l_609;
                        int *l_644 = &l_512;
                        int *l_645 = &l_545;
                        int *l_646 = &g_333;
                        int *l_647 = &l_606;
                        int *l_648 = &l_609;
                        int *l_649 = &g_284;
                        int *l_650 = &l_623;
                        int l_651 = 1L;
                        int *l_652 = &l_322;
                        int *l_653 = &l_512;
                        int *l_654 = &l_322;
                        int *l_655 = (void*)0;
                        int *l_656 = &g_26;
                        int *l_657 = &l_590;
                        int *l_658 = (void*)0;
                        int *l_659 = &l_590;
                        int *l_660 = (void*)0;
                        int *l_661 = &l_545;
                        int *l_663 = &l_545;
                        int *l_664 = &l_662;
                        int *l_665 = &l_662;
                        int *l_666 = &l_662;
                        int *l_667 = (void*)0;
                        int *l_668 = (void*)0;
                        int *l_669 = (void*)0;
                        int *l_670 = &g_333;
                        int *l_671 = &l_512;
                        int *l_672 = (void*)0;
                        int *l_673 = &g_333;
                        int *l_674 = (void*)0;
                        int *l_675 = &g_26;
                        int *l_676 = &l_623;
                        int l_677 = 0x627CF19DL;
                        int *l_678 = &l_545;
                        int *l_679 = &l_606;
                        int *l_680 = &g_333;
                        int *l_681 = &g_284;
                        int l_682 = 7L;
                        int *l_683 = &l_512;
                        int *l_685 = &l_545;
                        int *l_686 = &g_333;
                        int *l_688 = &l_322;
                        int *l_689 = &g_333;
                        int *l_690 = &g_284;
                        int *l_691 = &g_26;
                        int *l_692 = &g_333;
                        int *l_693 = &l_677;
                        int *l_694 = &g_110;
                        int *l_695 = &l_590;
                        int *l_696 = &l_677;
                        int l_697 = 0L;
                        int *l_698 = (void*)0;
                        int *l_699 = (void*)0;
                        int *l_700 = &l_684;
                        int *l_701 = &l_606;
                        int *l_702 = (void*)0;
                        int *l_703 = &l_623;
                        int *l_704 = &l_682;
                        int *l_705 = (void*)0;
                        int *l_706 = &l_662;
                        int *l_707 = &g_26;
                        int *l_708 = &l_651;
                        int *l_709 = (void*)0;
                        int *l_710 = &l_609;
                        int *l_711 = &l_322;
                        int *l_712 = &l_606;
                        int *l_713 = (void*)0;
                        int *l_714 = &g_110;
                        int *l_715 = &l_606;
                        int *l_716 = &l_545;
                        int *l_717 = &l_623;
                        int *l_718 = &l_682;
                        g_719--;
                    }
                    else
                    {
                        (*p_78) = ((*l_613) &= 1L);
                    }
                    --g_754;
                }
                else
                {
                    unsigned long long ***l_763 = &l_761;
                    long long l_768 = 0L;
                    int l_769 = (-7L);
                    g_757 = p_78;

                    ;
                    if ((func_6(((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_u(0xA8L, (((g_764 = ((*l_763) = l_761)) != (void*)0) , (((*g_764) != ((l_768 |= ((safe_mod_func_uint64_t_u_u((*g_765), g_15)) , g_107)) , (**l_763))) ^ (((*g_765) , (-6L)) , l_590))))))) , 8UL), l_769, l_621, (*g_757), g_23) , l_621))
                    {
                        unsigned l_770 = 1UL;
                        if (l_770)
                            break;
                        (**l_611) = ((((safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u(((-2L) || 0xC6L), g_110)) | ((0xC79315AEC6C29DB6LL >= (func_6((((safe_mod_func_int64_t_s_s((l_769 > (+0xDCF12C63659CA1D3LL)), 0x90C8E55B18B57B5FLL)) , p_78) == ((*l_576) = p_78)), l_779, l_548, l_780, g_499) , 0xA31418F0FA93F643LL)) , 1L)) & l_781) < l_779), 3)), l_768)) == 0x34BE596DL) != l_769) , l_770);
                        (*p_78) = (*p_78);
                        if ((*l_575))
                            break;
                    }
                    else
                    {
                        long long l_782 = 1L;
                        return l_782;


                    }
                }
                l_322 |= (((safe_add_func_uint16_t_u_u((&g_765 != ((*l_785) = &g_765)), func_6(l_786, (l_575 == p_78), ((((safe_add_func_uint16_t_u_u(l_548, ((((((((*l_789) = g_338) <= l_574) , ((**l_611) < 6UL)) ^ g_13) > 4L) < g_88) >= (*l_575)))) , l_790) != l_791) <= l_779), (*p_78), (*l_575)))) != 0xEB2BL) & 0UL);

                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            int *l_792 = &g_333;
            int l_793 = 4L;
            int *l_794 = &l_328;
            int *l_795 = &g_284;
            int *l_796 = (void*)0;
            int *l_797 = &l_328;
            int *l_798 = &g_26;
            int *l_799 = &l_328;
            int *l_800 = &g_333;
            int *l_801 = &g_284;
            int l_802 = 1L;
            int *l_803 = &l_322;
            int l_804 = (-1L);
            int *l_806 = &l_805;
            int *l_807 = &l_805;
            int *l_808 = (void*)0;
            int *l_809 = (void*)0;
            int *l_810 = &l_545;
            int *l_811 = &l_793;
            int *l_812 = &l_687;
            int *l_813 = (void*)0;
            int *l_814 = &l_687;
            int *l_815 = &g_284;
            int *l_816 = &l_322;
            int *l_817 = &l_802;
            int *l_818 = &g_26;
            int *l_819 = &l_328;
            int *l_820 = (void*)0;
            int *l_821 = &l_512;
            int *l_822 = &g_284;
            int *l_823 = &l_793;
            int *l_824 = &g_333;
            int *l_825 = &l_545;
            int *l_826 = &l_328;
            int *l_827 = (void*)0;
            int *l_828 = &g_110;
            int *l_829 = (void*)0;
            int *l_830 = &g_284;
            int *l_831 = (void*)0;
            int *l_832 = &l_512;
            int *l_833 = (void*)0;
            int *l_834 = &l_805;
            int *l_835 = &l_545;
            int *l_836 = &l_805;
            int *l_837 = &g_110;
            int *l_839 = &l_793;
            int *l_840 = &l_805;
            int *l_841 = &g_26;
            int *l_842 = &l_328;
            int *l_843 = (void*)0;
            int *l_844 = &l_687;
            int *l_845 = (void*)0;
            int *l_846 = &g_110;
            int *l_847 = &l_793;
            int *l_848 = &g_26;
            int *l_849 = (void*)0;
            int *l_850 = (void*)0;
            int *l_851 = &l_687;
            int *l_852 = &l_805;
            int *l_853 = &g_110;
            int *l_854 = &g_333;
            int *l_856 = &g_284;
            int *l_857 = (void*)0;
            int *l_858 = &l_545;
            int *l_859 = &l_855;
            int *l_860 = &g_26;
            int *l_861 = &l_545;
            int *l_862 = &l_512;
            int *l_864 = &l_805;
            int *l_865 = &g_284;
            int *l_866 = &l_863;
            int *l_867 = &l_863;
            int *l_868 = &g_333;
            int l_869 = 0xF48D3DC8L;
            int *l_870 = (void*)0;
            int *l_872 = &l_687;
            int *l_873 = &l_863;
            int *l_874 = &l_687;
            int *l_875 = &g_333;
            int *l_876 = &l_687;
            int *l_877 = &l_804;
            int *l_878 = &l_793;
            int *l_879 = &l_805;
            int *l_881 = (void*)0;
            int *l_883 = &l_804;
            int *l_884 = &l_882;
            int *l_885 = &l_687;
            int *l_886 = &l_512;
            int *l_887 = &g_333;
            int *l_888 = &g_26;
            int *l_889 = (void*)0;
            int *l_891 = &l_805;
            int *l_892 = &l_802;
            int *l_893 = &g_110;
            int *l_895 = &l_855;
            int *l_896 = &l_804;
            int *l_897 = &l_894;
            int *l_898 = (void*)0;
            int *l_899 = &l_322;
            int *l_900 = (void*)0;
            int *l_901 = &g_284;
            int l_903 = 0xF6E27BADL;
            int *l_904 = &l_802;
            int *l_905 = &l_687;
            int *l_906 = &l_869;
            int *l_907 = &l_882;
            int *l_908 = &l_863;
            g_909--;
            (*l_800) = func_6(l_328, l_608, (*l_887), (!((safe_add_func_uint8_t_u_u(255UL, (0x3194L && (func_6((*l_575), g_231, (**g_764), (*g_757), (*l_575)) || l_855)))) != 18446744073709551615UL)), (*l_825));
        }

        ;
        ;
        ;

        l_855 &= ((safe_rshift_func_int8_t_s_u(l_328, (safe_sub_func_uint32_t_u_u(g_599, (~((*l_573) = ((((*l_575) > ((*l_575) != ((*l_919) ^= (l_918 != l_918)))) == 0xCFAD7AA8L) | ((*l_575) ^ ((void*)0 != &l_223))))))))) < g_230);
        for (g_26 = 0; (g_26 < 0); g_26++)
        {
            short *l_927 = &g_231;
            int l_936 = (-10L);
            long long l_937 = (-1L);
            int l_1054 = 0x45129C31L;
            int l_1056 = 0x88985C85L;
        }
    }

    ;
    ;

    (*l_1149) = p_78;

    ;
    (**l_1149) ^= 1L;
    return (**l_1149);
}







static int * func_79(const char * p_80, unsigned p_81)
{
    long long l_105 = (-8L);
    short l_106 = 0x7687L;
    const unsigned short *l_108 = &g_20;
    int * const l_111 = (void*)0;
    int *l_113 = &g_110;
    int **l_112 = &l_113;
    long long *l_122 = &l_105;
    long long l_123 = 0x1BC6E4F414216A80LL;
    int *l_124 = &g_26;
    unsigned long long l_136 = 0xB86D1BDAACF22293LL;
    unsigned l_137 = 5UL;
    int l_141 = 7L;
    unsigned short l_183 = 0x90EDL;
    long long l_204 = 0x71B9F5DD3F592D98LL;
    int *l_219 = (void*)0;
    int *l_220 = (void*)0;
    int *l_221 = (void*)0;
    int *l_222 = &l_141;
    for (g_15 = (-15); (g_15 > 21); g_15++)
    {
        unsigned l_104 = 0xE507631CL;
        int *l_109 = &g_110;
        (*l_109) ^= (func_6((safe_mod_func_uint8_t_u_u((((func_6((((((((safe_sub_func_int8_t_s_s(0L, g_20)) > (safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((func_6(l_104, (~func_6((g_26 || ((p_81 , 2UL) == (l_105 & 0xE5L))), g_88, l_105, g_88, g_88)), p_81, l_104, l_106) ^ l_104), p_81)), 0x696DL)), p_81))) != (-1L)) ^ p_81) , l_105) , p_81) , 18446744073709551615UL), g_107, g_23, p_81, g_20) || g_88) , l_108) == l_108), l_105)), l_105, p_81, g_107, p_81) & g_15);
    }
    (*l_112) = l_111;

    ;
    if ((((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_15, ((safe_rshift_func_uint8_t_u_u(g_23, 5)) <= ((-1L) <= (*g_19))))), (g_88 && ((*l_124) = (((safe_sub_func_uint64_t_u_u(p_81, ((func_6(p_81, g_26, (((*l_122) = (((p_81 ^ g_15) , &l_111) == (void*)0)) , l_123), p_81, g_107) , &g_26) != (*l_112)))) & g_110) ^ p_81))))) <= p_81) , 0xB54EB929L))
    {
        unsigned l_138 = 0xFF5D1987L;
        int l_142 = (-8L);
        unsigned char *l_151 = (void*)0;
        unsigned char *l_152 = &g_88;
        unsigned char *l_153 = &g_140;
        int **l_154 = &l_124;
        int *l_157 = &g_110;
        int *l_158 = &l_141;
        int *l_159 = (void*)0;
        int *l_160 = &g_26;
        int l_161 = 0xEF4738C5L;
        int *l_162 = &g_26;
        int *l_163 = &g_26;
        int *l_164 = &l_161;
        int *l_165 = &g_26;
        int *l_166 = &g_110;
        int *l_167 = &l_141;
        int *l_168 = &g_110;
        int *l_169 = &l_141;
        int l_170 = 0x95D173CAL;
        int l_171 = 0x38544CA3L;
        int *l_172 = (void*)0;
        int *l_173 = &l_142;
        int *l_174 = &l_170;
        int *l_175 = &g_110;
        int *l_176 = &l_170;
        int *l_177 = &l_171;
        int *l_178 = &g_110;
        int *l_179 = &g_26;
        int *l_180 = &l_170;
        int *l_181 = &l_171;
        int *l_182 = &l_161;
        for (g_110 = (-26); (g_110 < (-10)); g_110 = safe_add_func_uint32_t_u_u(g_110, 3))
        {
            unsigned l_131 = 1UL;
            unsigned char *l_139 = &g_140;
            l_142 |= (safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(l_131, 1)), (safe_add_func_uint8_t_u_u(((&g_20 != &g_15) | ((*l_139) &= func_6(g_110, l_131, p_81, func_6((safe_mod_func_uint64_t_u_u((l_136 && l_137), g_26)), g_15, p_81, g_107, l_138), g_88))), l_141))));
            (*l_124) = p_81;
            (*l_124) = func_6(((safe_mod_func_int8_t_s_s((*p_80), ((*l_139) = 1UL))) || ((safe_rshift_func_uint16_t_u_u(((*g_19) = func_6(p_81, (~p_81), (1UL != (safe_sub_func_int64_t_s_s(l_138, (g_15 & g_26)))), l_131, l_142)), 4)) , 0x6BB073D2L)), l_138, l_142, l_131, g_88);
        }
        (**l_154) &= (((void*)0 != p_80) ^ (safe_lshift_func_uint16_t_u_s((((*l_153) = ((*l_152) ^= 6UL)) != (l_154 == (void*)0)), 10)));
        (*l_157) |= ((**l_154) < (g_88--));
        --l_183;
    }
    else
    {
        unsigned l_188 = 0xBBB315D7L;
        unsigned char *l_197 = &g_140;
        unsigned short *l_200 = &l_183;
        unsigned short **l_201 = (void*)0;
        unsigned short **l_202 = &g_19;
        short *l_205 = &l_106;
        int l_206 = (-1L);
        (*l_124) |= ((l_206 ^= ((*l_205) |= (+(safe_rshift_func_uint16_t_u_u((((p_81 = (l_188 , ((safe_rshift_func_int16_t_s_u(p_81, 10)) || ((((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((!p_81), (safe_mul_func_uint8_t_u_u(((*l_197)--), 8UL)))), ((g_203 = ((*l_202) = l_200)) != &g_20))) , g_23) >= l_204) , 0x08L)))) , &l_183) != &l_183), l_188))))) <= 1UL);

        ;
        ;
    }

    ;
    ;
    (*l_222) ^= ((safe_mod_func_uint64_t_u_u(p_81, ((p_81 ^ (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(p_81, 15)), ((func_6(p_81, (*l_124), (safe_lshift_func_uint16_t_u_s(((*g_19) = 0UL), g_88)), g_15, (safe_sub_func_int8_t_s_s((*l_124), (*p_80)))) , g_140) > p_81))), g_110))) , (*l_124)))) ^ g_15);
    return &g_110;




}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1146, "g_1146", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1446, "g_1446", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    transparent_crc(g_1469, "g_1469", print_hash_value);
    transparent_crc(g_1527, "g_1527", print_hash_value);
    transparent_crc(g_1634, "g_1634", print_hash_value);
    transparent_crc(g_1653, "g_1653", print_hash_value);
    transparent_crc(g_1729, "g_1729", print_hash_value);
    transparent_crc(g_1955, "g_1955", print_hash_value);
    transparent_crc(g_1973, "g_1973", print_hash_value);
    transparent_crc(g_2013, "g_2013", print_hash_value);
    transparent_crc(g_2015, "g_2015", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
