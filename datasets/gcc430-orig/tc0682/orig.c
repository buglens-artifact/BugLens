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



static short g_12 = 0x8DD4L;
static unsigned char g_13 = 0x00L;
static unsigned g_40 = 0xF7626A9DL;
static char g_43 = 7L;
static short g_142 = 1L;
static unsigned g_143 = 0x660014B1L;
static unsigned g_144 = 0xC7436F42L;
static unsigned g_152 = 0x0138ADD5L;
static short g_159 = 0xD749L;
static int g_161 = 0xCEBB1B1BL;
static unsigned g_183 = 0x0882539FL;
static unsigned g_184 = 0xF55A02C1L;
static short g_198 = 0x081AL;
static int g_203 = 0x644B9F4EL;
static unsigned char g_216 = 0xB4L;
static unsigned g_258 = 4294967295UL;
static unsigned char g_264 = 0xA8L;
static unsigned g_364 = 0xCD600607L;
static const short g_500 = 0x48B9L;
static int g_501 = (-5L);
static unsigned short g_502 = 0x582FL;
static short g_507 = 0x26E2L;
static unsigned g_513 = 9UL;
static unsigned g_611 = 1UL;
static unsigned g_713 = 0x74265206L;
static const unsigned char g_759 = 247UL;
static short g_785 = 1L;
static int g_853 = 0xA2210773L;
static int g_861 = 0x2E9B1C8DL;
static unsigned short g_948 = 0x37ECL;
static short g_1030 = 0x1AB7L;
static int g_1065 = 0x0FFBD3C7L;
static char g_1075 = 0x13L;
static short g_1078 = 1L;
static unsigned char g_1266 = 252UL;
static int g_1312 = 9L;
static int g_1327 = 0x85887BCFL;
static short g_1442 = 1L;
static int g_1623 = (-6L);
static int g_1649 = (-8L);
static char g_1661 = 9L;
static unsigned g_1718 = 18446744073709551611UL;
static short g_1769 = (-5L);



static unsigned func_1(void);
static short func_18(unsigned short p_19, unsigned p_20, const unsigned p_21, int p_22);
static unsigned func_28(int p_29, int p_30);
static short func_33(unsigned short p_34, const char p_35, unsigned char p_36, int p_37);
static char func_46(unsigned p_47, unsigned p_48, int p_49, char p_50);
static char func_62(int p_63, unsigned p_64, unsigned p_65, int p_66);
static int func_75(unsigned char p_76, unsigned char p_77, unsigned short p_78);
static unsigned char func_91(char p_92, int p_93, unsigned p_94);
static unsigned char func_100(unsigned p_101, unsigned p_102);
static unsigned func_112(short p_113, const unsigned p_114, short p_115);
static unsigned func_1(void)
{
    unsigned short l_23 = 0UL;
    int l_55 = (-6L);
    unsigned short l_1191 = 0xC808L;
    int l_1192 = 0xAD3F99BFL;
    unsigned char l_1314 = 0xA1L;
    unsigned short l_1767 = 1UL;
    short l_1768 = (-5L);
    unsigned short l_1770 = 0xCF94L;
    int l_1771 = 0x89969EF4L;
    unsigned l_1778 = 0x2235A9A3L;
    l_1771 = (((g_1769 = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((+(g_1442 = ((safe_sub_func_int8_t_s_s((g_1661 = (safe_lshift_func_int16_t_s_s(((g_13 = g_12) , ((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(func_18(l_23, (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((func_28(((safe_rshift_func_int16_t_s_u((l_1314 = ((func_33(l_23, ((~(l_1192 = ((safe_sub_func_uint32_t_u_u(((l_1191 = ((g_40 = g_13) , (0x5FBA2522L > (safe_mod_func_uint16_t_u_u((g_43 = 0xDF39L), (safe_lshift_func_int8_t_s_u(((l_55 = (!(func_46((safe_add_func_int8_t_s_s(g_12, (safe_mod_func_int16_t_s_s((l_55 , (safe_rshift_func_uint8_t_u_s((l_55 > 0xCECB2EC6L), l_23))), g_40)))), g_12, l_23, g_12) > l_55))) ^ l_23), 7))))))) , 1UL), g_1078)) && 0L))) || g_948), g_500, g_1078) ^ g_759) > 65527UL)), g_759)) , 2L), l_23) > l_23) && 0xF5L), 0xECL)), g_759)), l_23, g_1312), l_1767)) , 0x72L), l_23)) , l_1768)), 8))), g_500)) >= g_759))) != 0x9CEFL), 7)), 0xC2L)), g_500))) > l_1767) | l_1770);
    g_161 = (g_152 & (((((l_23 & (func_112((g_1078 = (1UL || ((func_112((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(l_1778, (~(65535UL && (l_1192 = (func_75((g_183 , (safe_unary_minus_func_uint8_t_u(l_1191))), l_1314, g_183) >= 0x02781854L)))))), g_159)), 6UL)), g_1442, l_1768) != 1L) , g_500))), l_1767, g_1327) > l_1778)) >= l_1768) > 0x6E48L) , g_161) & 1UL));
    l_1771 = ((safe_unary_minus_func_uint8_t_u(g_364)) , g_1065);
    return g_184;
}







static short func_18(unsigned short p_19, unsigned p_20, const unsigned p_21, int p_22)
{
    unsigned l_1323 = 18446744073709551615UL;
    int l_1326 = (-6L);
    int l_1328 = 0x4AD13041L;
    int l_1329 = 0x88127A7AL;
    unsigned char l_1330 = 0x19L;
    char l_1381 = 4L;
    unsigned l_1383 = 4294967294UL;
    unsigned l_1404 = 0xB5BA960AL;
    int l_1409 = 0xBF88E67AL;
    int l_1430 = (-1L);
    char l_1524 = 0x76L;
    int l_1526 = 0x7C6E0917L;
    unsigned l_1679 = 0x6108F350L;
    unsigned l_1685 = 9UL;
    int l_1734 = 0x7D401585L;
    if (((l_1329 = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((l_1328 = ((g_1312 = ((func_62(((l_1323 > g_144) == func_100(g_713, (g_1327 = (l_1326 = func_100(((safe_mul_func_int16_t_s_s((func_28((g_183 > 0x72L), l_1323) , l_1323), 2UL)) , l_1326), l_1323))))), g_1065, p_22, p_22) , l_1323) ^ l_1323)) , 0L)) || 0x1BB9L), g_1065)), 14)), 0))) , l_1330))
    {
        unsigned char l_1341 = 246UL;
        l_1329 = ((1L || (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((p_21 ^ (~((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(func_112(((g_1327 = l_1341) , 0xF1DBL), (l_1330 <= (func_75((l_1328 <= func_112((0x21L & ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((g_198 == (p_21 || l_1341)), p_21)), l_1329)) != g_203)), l_1330, g_198)), p_22, p_19) || 0x40DAL)), l_1341), 0x48L)) < 1L), g_611)) | 0xC0L), g_159)) ^ 0x2373L))), 0L)), 65526UL))) == 0xC5181B09L);
    }
    else
    {
        int l_1350 = 0x0B513B3FL;
        char l_1351 = 0x7EL;
        int l_1356 = 0xCA8F6DD9L;
        char l_1380 = 9L;
        int l_1382 = 0xDDCA25BDL;
        int l_1384 = 0x2E4F4A90L;
        unsigned short l_1385 = 0xE0AAL;
        l_1356 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((((l_1329 = l_1326) ^ (g_198 = (l_1350 = l_1326))) >= g_43) , (l_1351 ^ (safe_lshift_func_uint8_t_u_s(((func_62(p_22, (l_1350 = (l_1328 = g_1078)), func_100(g_159, (g_152 = ((g_853 , func_75((safe_mod_func_uint8_t_u_u(p_21, 0x21L)), l_1351, g_1078)) | 0UL))), p_19) , 1UL) || 255UL), 5)))) || 0xA80EL), p_22)), l_1351));
        l_1329 = p_22;
        l_1328 = (safe_sub_func_int32_t_s_s(func_62((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((l_1350 < ((l_1384 = (safe_rshift_func_uint8_t_u_s(p_21, ((l_1383 = (l_1382 = ((g_1312 || (!(safe_mul_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(func_33(l_1351, ((p_20 = (((l_1381 = (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(g_1266, func_46(g_364, (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((func_28((l_1356 = (safe_sub_func_int32_t_s_s(((p_22 ^ func_112((((safe_add_func_int8_t_s_s((p_22 , (0x6DFDL ^ 0xB7F9L)), g_203)) <= 0x5CL) || 0UL), l_1351, l_1380)) != p_20), l_1380))), p_22) , p_22) > p_19) || 0xF22BL) == 0xDAE3ECA9L), 10)), g_144)), l_1351, p_21))), 0x032A0C0CL))) , l_1351) ^ g_500)) == p_22), g_500, p_21))), l_1323)))) & p_21))) >= p_19)))) & 0x85CDL)), l_1385)), p_19)), l_1326, l_1350, l_1350), g_1312));
        g_161 = (l_1328 = ((safe_lshift_func_int16_t_s_u(((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(4UL, 14)), p_21)) != (g_264 = (l_1356 = g_364))) || ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((l_1384 = func_28(((l_1326 || (((safe_lshift_func_int8_t_s_s(0x46L, 7)) != (safe_rshift_func_int8_t_s_s(((((g_184 != ((l_1326 = (g_1065 = (((4UL | (safe_sub_func_int32_t_s_s((l_1350 = p_22), ((p_20 = ((~l_1323) == 0xBB0AE017L)) | l_1385)))) <= g_513) > p_22))) , l_1380)) , p_22) > p_21) > l_1381), 6))) | l_1384)) , 0x62CD226EL), l_1351)) == l_1381) & p_22), 7)), 1UL)) == l_1323)) , 0x5CC0L), l_1351)) & g_258));
    }
    l_1329 = (safe_lshift_func_uint8_t_u_u(func_100((p_21 , func_62((g_1065 = l_1404), (l_1326 = l_1329), l_1330, (g_203 = (0x173BL & l_1328)))), (safe_add_func_uint16_t_u_u(g_1266, (l_1409 = (safe_sub_func_int16_t_s_s(p_20, l_1329)))))), p_19));
    if ((safe_lshift_func_uint16_t_u_s(p_22, (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_1328 = ((((p_19 = ((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((g_948 = (func_112(func_28(g_364, g_203), p_22, (g_1078 = g_184)) >= (safe_rshift_func_uint16_t_u_s((((g_1327 & (safe_lshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(0xB5L, l_1328)) , l_1381) & 0xE59BL), 0x3757302BL)) && l_1330) | g_143), l_1329))) < l_1330) <= l_1326), 12)))), g_143)), g_40)), l_1430)) == 0x2635L)) <= l_1323) >= 0L) == p_20)), 0xB1L)), g_1075)))))
    {
        char l_1445 = 0x97L;
        int l_1455 = 4L;
        char l_1482 = 0xDCL;
        unsigned l_1546 = 7UL;
        unsigned short l_1674 = 2UL;
        for (g_1065 = (-5); (g_1065 > 24); g_1065 = safe_add_func_uint32_t_u_u(g_1065, 1))
        {
            unsigned l_1433 = 0x5EB99820L;
            int l_1436 = 0xDB5D9173L;
            const unsigned char l_1484 = 7UL;
            unsigned l_1501 = 18446744073709551615UL;
            int l_1525 = 7L;
            unsigned char l_1543 = 250UL;
            char l_1605 = (-1L);
            char l_1621 = 0x63L;
            unsigned l_1650 = 18446744073709551609UL;
            char l_1651 = 0x3DL;
            unsigned short l_1701 = 7UL;
            unsigned l_1733 = 0xDF558D4BL;
            if (((-10L) & (!l_1433)))
            {
                unsigned l_1439 = 0x06213AEBL;
                if ((safe_sub_func_uint8_t_u_u((l_1436 = ((-6L) || 0x7376D799L)), (safe_sub_func_int32_t_s_s(func_112(l_1439, (g_513 | ((((g_1312 && g_198) && p_19) , l_1383) >= (safe_add_func_uint16_t_u_u(g_1065, 0xDC54L)))), g_264), g_1442)))))
                {
                    l_1328 = (safe_rshift_func_uint8_t_u_s(l_1445, 7));
                }
                else
                {
                    char l_1454 = (-1L);
                    l_1455 = (0L | ((((g_216 = 0x75L) & (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((g_502 , l_1436), (func_75(((p_20 > func_28(p_22, g_500)) <= g_258), l_1439, g_502) ^ 1L))), 10)), g_203)) & (-9L)), g_1442))) == l_1454) | 4294967289UL));
                    for (g_861 = 0; (g_861 != 12); ++g_861)
                    {
                        l_1436 = g_264;
                        if (p_21)
                            break;
                        l_1436 = (safe_sub_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s((p_20 , ((1L & ((p_20 >= (safe_sub_func_int8_t_s_s(((1L == g_143) <= l_1445), 1UL))) , p_22)) ^ (safe_sub_func_uint16_t_u_u(p_19, p_21)))), p_21)) && g_1312) != p_21) , l_1430), p_22));
                    }
                    return g_143;
                }
                return l_1439;
            }
            else
            {
                char l_1481 = 0x07L;
                int l_1483 = 0xE5612FA2L;
                char l_1509 = 1L;
                int l_1568 = 0x56E81EF9L;
                l_1436 = func_112((l_1328 = func_91(((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_159 , (((safe_add_func_int8_t_s_s(p_19, ((func_100((((l_1409 || func_100(((((safe_unary_minus_func_uint32_t_u(func_112(p_20, (func_75(((l_1483 = ((((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((~(g_364 = 0UL)) <= l_1481) && 254UL), func_112(((l_1455 = (l_1445 ^ l_1482)) , g_785), l_1481, p_22))), g_502)), g_611)), l_1436)) , p_22) || p_19) >= p_22)) || 0UL), l_1481, g_1078) || l_1445), g_258))) < g_853) & 1L) <= g_198), l_1445)) , l_1483) == l_1482), g_785) && p_20) , 0xBCL))) , g_143) & (-5L))), 3)) >= p_19), l_1484)) >= p_21), g_216, l_1484)), l_1326, g_1312);
                g_1312 = ((1L && (safe_rshift_func_int8_t_s_s(((g_264 <= 9L) < p_20), 3))) && l_1445);
                if ((safe_rshift_func_uint8_t_u_s(((p_20 , p_20) != (g_1075 == p_22)), 3)))
                {
                    short l_1502 = (-3L);
                    int l_1503 = 0x240A3378L;
                    l_1503 = ((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(0x5293L, (safe_add_func_uint16_t_u_u((p_22 | (!((l_1329 , (((safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(((g_152 , l_1483) , l_1436), g_183)) != (l_1502 = (g_1327 && (0xE60990CDL != l_1501)))), 6)), 0x2A42L)) ^ 0UL) , g_161)) | 0x87L))), 0x7390L)))), 7)) , l_1323);
                }
                else
                {
                    unsigned l_1504 = 0xE25F30BAL;
                    int l_1522 = 1L;
                    if ((l_1504 = l_1482))
                    {
                        unsigned char l_1507 = 0UL;
                        int l_1508 = 0x8FBEA884L;
                        g_203 = ((((safe_add_func_int16_t_s_s(((!p_19) & l_1504), (g_948 = g_364))) , l_1455) , (((g_611 = p_21) <= (g_161 = l_1507)) || (p_22 & 0x739E1370L))) <= p_20);
                        l_1508 = g_1266;
                        return l_1509;
                    }
                    else
                    {
                        int l_1523 = 0x8F72B4AFL;
                        g_1312 = (safe_mul_func_int8_t_s_s(l_1509, (((l_1525 = (safe_sub_func_int32_t_s_s(((l_1523 = (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((g_502 = (l_1483 = ((safe_add_func_int8_t_s_s((p_19 && (l_1522 = ((l_1436 = (((((l_1445 >= p_22) <= l_1328) == 1L) , p_19) , (safe_add_func_uint8_t_u_u(g_1442, p_22)))) , l_1504))), l_1481)) != p_21))) , 0x4B5954A3L) , 1UL) <= l_1509), p_20)), g_1266))) , l_1524), l_1504))) != 0x9461L) , l_1526)));
                        l_1328 = 0xB8B4B287L;
                        return g_144;
                    }
                }
                if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((!0x04A9L) == (safe_lshift_func_int16_t_s_s((func_28((((0x3114E8CEL >= (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_19 || (l_1484 == p_20)), (safe_mul_func_uint16_t_u_u(65527UL, g_1078)))), l_1482))) || (((((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_861, p_19)) , p_19), 2)) , p_22) >= p_20) , 1UL) && l_1543) , p_19) , p_20)) , l_1524), g_12) >= 0x5B825BBAL), l_1482))), 0x6FL)), p_21)))
                {
                    int l_1547 = 0x2300CE5FL;
                    int l_1550 = 0x6CA2FCD2L;
                    l_1329 = (safe_add_func_int16_t_s_s(func_100(((l_1547 = l_1546) , (l_1483 = (safe_rshift_func_int8_t_s_u((p_20 & (!(p_20 , (l_1482 < ((l_1547 < ((~4L) >= 0UL)) , (func_91((l_1550 = g_1312), p_22, l_1481) , p_20)))))), 3)))), p_19), p_22));
                    if ((((func_91(p_19, (l_1455 = l_1501), (safe_mod_func_uint16_t_u_u((func_112((safe_mod_func_uint16_t_u_u(((l_1550 & ((((safe_mul_func_int8_t_s_s(func_112(g_161, (g_258 = (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_int8_t_s((safe_sub_func_int16_t_s_s(g_264, p_20)))), 2UL)), g_948))), (safe_rshift_func_uint16_t_u_u((g_12 , l_1483), 12))), l_1501)) < l_1323) < p_22) || 0x07D841D1L)) || (-2L)), g_861)), l_1484, g_184) & p_22), g_611))) <= p_20) , l_1330) || 0x7DL))
                    {
                        char l_1569 = 0x2AL;
                        l_1550 = (l_1569 = (l_1568 = ((func_91((l_1329 = l_1501), (((((0x22L == (+(safe_mul_func_int8_t_s_s(1L, p_22)))) & g_513) , g_43) || ((247UL <= p_20) , (-1L))) , g_43), p_22) < p_21) == 2L)));
                        g_861 = (0x15L == (l_1436 = (safe_sub_func_int32_t_s_s(l_1329, (safe_unary_minus_func_int16_t_s((l_1550 = (g_501 < l_1568))))))));
                    }
                    else
                    {
                        unsigned l_1579 = 0x196F26AFL;
                        l_1568 = (p_21 , func_112(g_216, (((l_1525 = (((g_1075 = (((g_216 != (safe_rshift_func_uint8_t_u_u(p_22, 0))) > p_22) > g_1327)) == (safe_rshift_func_uint8_t_u_u(p_20, 4))) || l_1436)) < (safe_add_func_int16_t_s_s((l_1579 = g_1442), g_13))) && g_948), p_20));
                        l_1329 = (0x4ACCL && (l_1483 ^ (g_184 , (l_1568 = p_19))));
                    }
                    l_1483 = ((g_513 != (((l_1550 = l_1501) || (safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((func_75(func_75(((~(safe_mul_func_uint8_t_u_u(p_19, g_1442))) < (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((!(safe_lshift_func_uint8_t_u_u(p_20, g_258))), p_19)) <= g_40) | ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_s(p_20, g_1442)) & (-8L)), p_20)), 7)) != 0L)), 2L)), l_1547))), p_19, p_19), l_1546, p_20) | (-5L)), 0x6EL)) , l_1546), g_501)) , l_1525), l_1436))) || g_853)) & (-9L));
                }
                else
                {
                    return g_264;
                }
            }
            if (p_21)
            {
                l_1525 = (l_1484 & 0xDCE41590L);
                for (g_364 = 0; (g_364 < 46); g_364++)
                {
                    unsigned l_1604 = 4294967295UL;
                    return l_1604;
                }
            }
            else
            {
                int l_1611 = 0x7457E47CL;
                int l_1669 = 0x7F6153E9L;
                int l_1684 = 4L;
                int l_1722 = 0xAD24DC2DL;
                const int l_1761 = 1L;
                if (g_161)
                {
                    unsigned l_1620 = 1UL;
                    int l_1622 = 0xB915F9BFL;
                    if ((((l_1605 = p_21) == (safe_sub_func_uint32_t_u_u((g_611 = (g_40 & (safe_rshift_func_int8_t_s_u(0x0CL, 4)))), g_364))) , p_22))
                    {
                        unsigned l_1610 = 4294967295UL;
                        l_1611 = l_1610;
                        l_1436 = (((((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_int8_t_s_s((((((p_20 = func_112((g_785 = (safe_rshift_func_uint16_t_u_s(l_1546, 2))), (l_1543 != (l_1330 , 0xE56B7443L)), (((g_216 | 0x3CL) > (((!((l_1611 == ((((safe_mod_func_uint16_t_u_u((l_1430 >= (0xD0D6DE31L < 0UL)), l_1605)) | 0x52FFD24EL) , 0xE95FL) < p_19)) <= l_1620)) > p_21) & p_21)) ^ p_19))) >= l_1621) & l_1611) || 4294967295UL) > l_1430), l_1621)) || 255UL) , 0xCFCAL) ^ (-5L)), l_1611)) < 0UL) <= 0xC7L) ^ 0x9FL) == g_1065);
                    }
                    else
                    {
                        int l_1630 = 0xC0CBFD4CL;
                        l_1525 = g_501;
                        l_1622 = p_22;
                        l_1525 = g_1623;
                        l_1409 = (safe_add_func_int8_t_s_s(((l_1409 , (g_713 , ((g_1623 , (((func_62(((l_1328 = (g_40 , ((safe_mul_func_uint16_t_u_u((p_19 = (l_1630 = func_62((l_1433 , func_62(p_19, func_100((safe_lshift_func_uint16_t_u_u(((l_1605 >= g_611) == ((func_28((g_948 , g_611), g_1075) | 0xA9B5L) >= (-1L))), 5)), p_21), p_20, p_19)), p_21, p_20, l_1445))), l_1484)) != 0x57A8724CL))) , 0x9B193DF8L), g_500, p_20, g_1266) <= p_20) | p_22) == l_1611)) >= l_1409))) ^ 0x4E7E20F0L), 0x76L));
                    }
                    l_1622 = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((~((((g_1312 = ((65535UL & (!((l_1651 = ((safe_mul_func_uint16_t_u_u((l_1650 = func_75(p_22, func_112(((safe_rshift_func_uint8_t_u_u((0L > l_1620), 4)) == func_91((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(func_62(g_216, (g_861 > 0x8175L), (safe_sub_func_int32_t_s_s((l_1525 = ((safe_sub_func_int8_t_s_s(func_100(l_1326, (g_144 = (safe_mod_func_uint8_t_u_u(l_1543, l_1404)))), p_19)) || g_264)), 4294967286UL)), p_21), g_1649)), l_1501)), p_21, g_500)), l_1620, p_22), p_20)), g_759)) ^ g_1327)) == g_759))) | l_1620)) ^ p_19) >= p_21) || g_513)) , g_43), l_1501)), 6));
                }
                else
                {
                    unsigned short l_1656 = 0x168BL;
                    int l_1720 = 0x9D9B7529L;
                    unsigned char l_1721 = 0x24L;
                    for (g_364 = 26; (g_364 != 54); g_364 = safe_add_func_uint16_t_u_u(g_364, 7))
                    {
                        g_861 = p_20;
                        l_1328 = (l_1409 >= ((safe_lshift_func_int8_t_s_s(l_1409, 1)) == p_22));
                        if (l_1656)
                            continue;
                        g_1312 = ((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_20, g_1075)), (g_1661 != ((safe_unary_minus_func_uint32_t_u(g_161)) || ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(l_1669, p_19)), 6)), ((l_1656 && (safe_mul_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s(l_1621, g_198)) , 0xD3L), g_264))) > 1L))) >= p_19))))) <= l_1674);
                    }
                    l_1455 = ((func_28(g_1442, ((~((safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(func_91(func_100((l_1679 , func_112(((g_861 , g_1327) >= (((l_1525 = g_203) , ((safe_lshift_func_int16_t_s_s((func_75((l_1525 = l_1482), ((safe_sub_func_uint16_t_u_u(func_100(l_1669, l_1656), 0x925FL)) | g_1327), l_1484) , g_861), l_1656)) < 0x5FA0L)) <= g_1078)), l_1611, p_19)), p_20), l_1684, p_19), p_20)), l_1669)) > l_1455)) , l_1685)) && g_216) & g_1661);
                    if (((l_1455 = l_1656) || (safe_sub_func_int8_t_s_s((l_1455 = g_203), 0xC3L))))
                    {
                        unsigned char l_1700 = 0UL;
                        int l_1719 = (-10L);
                        l_1701 = (func_112(((safe_mul_func_int8_t_s_s((g_364 ^ ((0xDFB88E88L & (safe_lshift_func_int16_t_s_s((~(safe_sub_func_uint16_t_u_u(func_75(g_40, p_21, (g_1075 >= (func_100((func_112(l_1674, ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(p_21, (((safe_mul_func_int16_t_s_s(l_1656, 0x76F3L)) > 0x919FL) , 65535UL))) == l_1383), p_20)) != 0L), p_21) ^ g_500), g_142) , g_759))), l_1700))), 4))) & 3UL)), p_20)) | (-2L)), l_1455, g_1327) <= l_1484);
                        l_1722 = (safe_mul_func_uint8_t_u_u((p_19 < func_28((safe_lshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(1L, (l_1721 = func_28((g_1312 = (l_1720 = (l_1674 < func_62((safe_mul_func_int8_t_s_s(func_75(func_62((func_75((safe_sub_func_int32_t_s_s((l_1719 = (func_100(g_1065, l_1656) & (safe_rshift_func_int8_t_s_u((((g_1718 & 0x4388L) & (p_22 , 65535UL)) , g_513), l_1684)))), (-1L))), g_1030, g_184) , p_20), g_1266, p_20, g_1442), g_1266, p_19), 255UL)), l_1543, p_21, p_19)))), g_759)))) != g_1327), l_1700)), 1L)) > p_21), 5)), l_1656)), p_20));
                    }
                    else
                    {
                        char l_1725 = 0x91L;
                        unsigned l_1730 = 4294967295UL;
                        l_1722 = (l_1734 = ((safe_mod_func_uint8_t_u_u(func_75(g_1266, (func_100((((((func_112(func_75(g_183, l_1725, l_1611), g_513, (g_159 = (((((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(l_1730, 4)), func_28(l_1484, (l_1720 = (safe_add_func_int8_t_s_s(func_112((g_142 = (!(l_1733 ^ l_1725))), g_507, l_1656), p_20)))))) < 0x9071L) || 0x1A2FL) && g_12) , l_1730) == l_1605) && p_19))) < (-8L)) <= 0x8BL) ^ g_1623) <= l_1721) , l_1611), l_1436) <= l_1383), g_216), 0x1EL)) & p_19));
                        return l_1482;
                    }
                }
                if (g_43)
                {
                    unsigned short l_1744 = 0UL;
                    int l_1746 = 0xBA4C7767L;
                    if (((((safe_rshift_func_int16_t_s_s((0x6DL <= l_1701), (((safe_add_func_int16_t_s_s(((p_22 , p_20) | g_13), l_1611)) <= (safe_mul_func_int16_t_s_s((g_759 == (p_20 , (g_861 = l_1409))), l_1611))) > 0x203B29AEL))) == 4294967295UL) <= 0xAE67A823L) , p_19))
                    {
                        int l_1743 = 0xCF90B124L;
                        l_1326 = (safe_rshift_func_uint8_t_u_s(g_1078, 7));
                        l_1743 = (l_1455 = l_1684);
                        l_1455 = g_364;
                    }
                    else
                    {
                        unsigned l_1745 = 18446744073709551615UL;
                        g_1327 = (l_1745 = l_1744);
                    }
                    l_1746 = p_22;
                    l_1746 = func_100(g_40, p_21);
                }
                else
                {
                    g_861 = g_1649;
                    g_1312 = p_22;
                    g_1327 = (safe_sub_func_int16_t_s_s(p_20, (-1L)));
                    l_1455 = (((l_1722 , (safe_sub_func_int16_t_s_s(((g_948 = ((((0xEEL | (((safe_sub_func_int16_t_s_s(l_1445, g_364)) < p_22) && (((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(func_112(g_1266, (!(safe_mul_func_int16_t_s_s(g_1649, 0xD1F6L))), (safe_sub_func_int16_t_s_s(((g_1065 , 0x05L) , g_759), (-1L)))), p_19)), l_1684)) <= 0x2CE1L) && (-1L)))) , (-9L)) , l_1685) , 0xBAEAL)) <= l_1761), g_152))) , p_19) > 0x6AL);
                }
                if (p_22)
                    break;
            }
        }
    }
    else
    {
        unsigned char l_1762 = 1UL;
        l_1409 = (g_785 & ((l_1330 , g_513) , (func_100(p_22, (((g_364 = g_785) && (l_1762 >= l_1762)) , (safe_lshift_func_uint16_t_u_u((g_1661 && (safe_mul_func_uint8_t_u_u((((g_40 < l_1762) == l_1762) , p_19), g_507))), p_19)))) != l_1734)));
    }
    return p_19;
}







static unsigned func_28(int p_29, int p_30)
{
    for (g_861 = 26; (g_861 == (-12)); --g_861)
    {
        return p_29;
    }
    return p_30;
}







static short func_33(unsigned short p_34, const char p_35, unsigned char p_36, int p_37)
{
    unsigned l_1199 = 5UL;
    int l_1215 = 1L;
    int l_1220 = 0L;
    char l_1221 = 0x5FL;
    short l_1222 = 0x91E3L;
    unsigned l_1223 = 0x1F36F0C9L;
    int l_1224 = 0x358FE983L;
    int l_1241 = (-9L);
    short l_1249 = 1L;
    l_1224 = ((safe_lshift_func_uint8_t_u_s(((func_46((l_1215 = ((safe_rshift_func_int16_t_s_s((p_36 > (safe_rshift_func_int16_t_s_u(((l_1199 = 65526UL) >= (safe_mul_func_uint8_t_u_u(((p_34 , (0x62L | func_91((!(safe_lshift_func_int8_t_s_s(0x18L, (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_948, 2)), 13))))), (((safe_sub_func_uint32_t_u_u((g_1065 <= (safe_add_func_int32_t_s_s(((((safe_mul_func_uint8_t_u_u((g_264 = (safe_unary_minus_func_int16_t_s(l_1215))), (l_1220 = (((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(0UL, l_1215)), 0)) <= g_203) , g_1030)))) , l_1220) <= l_1215) | g_1075), 1L))), g_785)) , l_1215) , l_1220), l_1221))) || l_1222), l_1215))), p_34))), 5)) == 0x9BC1B108L)), l_1221, g_1065, l_1223) >= p_36) >= p_35), p_36)) || 0xD239L);
    l_1220 = g_1030;
    l_1220 = (safe_lshift_func_int16_t_s_u((g_513 , (safe_rshift_func_int8_t_s_u(((l_1224 = p_36) ^ g_853), (g_948 > (((safe_rshift_func_int16_t_s_u((((((safe_rshift_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u(l_1222, (g_264 = ((0xA508L && (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(1L, ((g_43 , p_34) & p_36))), g_1078))) , p_36)))) < l_1215) <= 0xD9DA3368L) | (-1L)), p_34)) , p_35) & g_13) != l_1199) >= 5L), p_35)) , p_35) , 0x18358B92L))))), p_34));
    for (l_1223 = 0; (l_1223 > 23); l_1223 = safe_add_func_uint8_t_u_u(l_1223, 1))
    {
        unsigned short l_1248 = 7UL;
        int l_1275 = 0x98108A17L;
        unsigned short l_1300 = 7UL;
        char l_1301 = 0x0CL;
        l_1241 = 1L;
        if ((0x5AL && ((g_501 = (l_1215 = ((0L && (1UL | 1L)) , (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(func_75(g_144, g_258, (g_502 = (g_948 = g_198))), (((l_1249 = (!func_100((safe_sub_func_uint8_t_u_u(((g_713 , g_161) < g_713), l_1248)), g_216))) , 0xB836L) < g_500))), l_1221))))) != l_1241)))
        {
            int l_1265 = (-10L);
            const unsigned short l_1267 = 0xD07CL;
            int l_1279 = 0L;
            unsigned char l_1280 = 0xF9L;
            for (g_183 = 0; (g_183 >= 14); g_183++)
            {
                unsigned l_1264 = 1UL;
                int l_1274 = 0xBFF0E652L;
                int l_1276 = 9L;
                char l_1277 = (-1L);
                int l_1278 = 0L;
                g_1266 = ((l_1248 & g_507) , (3L < (g_264 = (safe_mod_func_int32_t_s_s(func_112(g_861, (0x991B28F0L == g_501), (((p_34 <= (l_1265 = (safe_add_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(1L, (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((-2L), g_13)) != p_35), l_1264)), 0x41C1L)))), p_36)))) , p_34) & (-2L))), g_203)))));
                g_861 = ((l_1267 , (((((255UL && 0x85L) >= ((l_1279 = ((safe_rshift_func_uint8_t_u_s((func_75(l_1222, l_1248, ((safe_mod_func_int8_t_s_s(l_1264, (l_1278 = (((((safe_mod_func_uint8_t_u_u((((l_1275 = (l_1274 = g_161)) , p_37) >= ((l_1276 = (p_34 = (((((0x89L <= p_34) && g_861) <= p_35) , g_1266) && p_36))) < l_1248)), g_43)) | 0xDD83L) < l_1277) | 0x2EL) | l_1248)))) < p_35)) > (-9L)), 4)) >= g_948)) , 0x6FF6L)) ^ 4294967290UL) > (-1L)) && p_37)) < 8UL);
                l_1220 = 1L;
            }
            l_1280 = g_1078;
        }
        else
        {
            unsigned char l_1281 = 0UL;
            int l_1313 = 0x68655B10L;
            g_161 = ((g_13 = l_1281) >= p_37);
            l_1301 = ((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(65534UL, g_264)) || p_34), g_1078)) | (safe_mod_func_int16_t_s_s(g_1075, 7UL))) || 1L), (((safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((p_37 < (((((safe_mul_func_int8_t_s_s(func_112(((g_1065 = ((safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(g_507, 5UL)), l_1249)) | l_1300)) , 0xA3DBL), g_611, g_611), l_1281)) && 0L) || l_1300) > p_36) | 0xE6L)), l_1248)) >= 0x3A7FCEE0L), g_159)) >= l_1281) , p_35))) != p_34);
            l_1313 = func_91(l_1281, g_1266, ((safe_add_func_uint32_t_u_u((p_36 || l_1221), ((func_112((safe_rshift_func_uint8_t_u_s((((p_36 , p_37) == g_203) != (((safe_add_func_uint16_t_u_u(p_35, (safe_lshift_func_uint8_t_u_s(((!(((g_713 = (g_1312 & p_35)) > 1L) & g_785)) , g_142), 2)))) <= p_34) != p_34)), p_36)), g_1078, g_759) & l_1301) , 8L))) <= p_35));
        }
    }
    return l_1215;
}







static char func_46(unsigned p_47, unsigned p_48, int p_49, char p_50)
{
    unsigned l_67 = 1UL;
    int l_68 = 1L;
    unsigned l_87 = 0UL;
    int l_88 = 0xBCB8161DL;
    int l_1015 = 0xD0949D85L;
    unsigned l_1096 = 4UL;
    unsigned l_1153 = 0UL;
    unsigned short l_1189 = 0x5DF3L;
    short l_1190 = 0x2F0CL;
    if (((safe_sub_func_int32_t_s_s(((safe_sub_func_int8_t_s_s(func_62(l_67, l_68, (safe_lshift_func_uint8_t_u_u(p_49, 6)), ((safe_add_func_uint16_t_u_u(((((255UL != (((safe_lshift_func_uint8_t_u_s((func_75((g_12 , (safe_rshift_func_int16_t_s_u((l_1015 = (0xA24EL | ((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s((g_12 = (l_88 = l_87)), (safe_lshift_func_uint8_t_u_u(func_91(p_49, (safe_add_func_int32_t_s_s((-1L), g_13)), p_48), l_68)))) == l_68) <= 1UL) , 0L), 0x7FDDL)), p_50)) | l_68))), l_68))), g_759, p_50) , 9UL), 2)) > l_68) && 0L)) , 5L) > l_87) <= p_48), l_67)) , 3L)), g_500)) != (-6L)), 0x742791C5L)) == 0xFFC7C18EL))
    {
        unsigned l_1066 = 6UL;
        int l_1097 = 1L;
        for (g_159 = 0; (g_159 < 5); g_159++)
        {
            int l_1064 = 9L;
            int l_1074 = 0x298D8660L;
            unsigned l_1115 = 3UL;
            l_68 = ((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((p_48 < (safe_sub_func_uint32_t_u_u(0x39D27457L, (g_713 = p_48)))) , func_75(((g_1065 = func_75((+((((g_1030 | (l_88 ^ ((0x27C5L | 4L) > ((g_13 = (((l_1015 = ((safe_rshift_func_int16_t_s_s((0x7CL & g_759), 5)) > g_142)) > 1L) ^ g_40)) | 255UL)))) && 0x05L) <= l_87) == g_198)), l_1064, g_501)) <= 0UL), g_853, l_1066)) != 0xCD0BL), 11)), g_513)) , p_48);
            for (l_87 = 0; (l_87 > 48); l_87 = safe_add_func_int32_t_s_s(l_87, 2))
            {
                int l_1073 = 1L;
                if (p_47)
                {
                    for (g_861 = 24; (g_861 >= (-22)); g_861 = safe_sub_func_uint32_t_u_u(g_861, 3))
                    {
                        if (p_47)
                            break;
                        return g_143;
                    }
                }
                else
                {
                    int l_1095 = 0x04B26A77L;
                    int l_1114 = 0x0690B03CL;
                    unsigned l_1118 = 0xDA7F56D5L;
                    g_861 = ((-1L) > (((g_1075 = ((l_1074 = ((safe_rshift_func_int16_t_s_u((0x61L >= l_1073), 9)) >= g_142)) , p_47)) || ((((safe_mod_func_int32_t_s_s((-1L), func_112(g_203, ((g_513 , g_1078) , 0x70B6BB97L), p_50))) && g_759) , g_161) > l_1073)) && 7L));
                    if ((safe_rshift_func_int16_t_s_u(p_48, 5)))
                    {
                        char l_1100 = 0x1AL;
                        l_1097 = (func_75(func_112((((safe_sub_func_uint32_t_u_u(func_75((((!1L) | (g_152 || func_75(p_48, g_502, (((g_40 != 0x6202L) , (~(func_75((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((((safe_add_func_uint16_t_u_u((((((((p_48 , ((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_1074, (l_88 = (l_1095 = (~(safe_lshift_func_int16_t_s_u(l_1066, 0))))))), 0UL)) | g_507) , l_88) && g_183)) , l_1073) == l_1073) , 0xF7E0L) & p_50) != l_87) || 0xFDF8B19DL), l_1073)) != 0UL) < l_1073) > 0xFDB6L) <= 0xFCFCL) | 0x8AL), g_1030)), 0x9AL)), l_1096, g_611) > g_198))) , g_507)))) | p_48), p_48, l_1074), 0x9F80E221L)) && p_49) , 0x3A40L), g_13, l_1015), g_513, g_500) , 0xED83C8B3L);
                        g_501 = (safe_lshift_func_uint16_t_u_u(l_1100, func_75(g_611, p_48, (safe_lshift_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(func_112((p_48 , (!l_1066)), ((safe_add_func_uint16_t_u_u((g_502 = ((func_112(((g_1075 , (p_50 = (safe_mod_func_int8_t_s_s(p_48, (l_1064 || ((p_47 , 0x00332CCCL) >= g_258)))))) ^ 1L), g_183, g_142) & l_1066) | 0xF5EBL)), l_1095)) ^ 65535UL), g_142), g_12)) != 0xA794BF7EL) <= 0L), 1)))));
                    }
                    else
                    {
                        int l_1111 = (-1L);
                        l_1074 = func_112((l_1114 = (func_75((safe_mul_func_uint16_t_u_u(p_49, p_50)), l_1111, p_49) , (safe_lshift_func_uint16_t_u_u(p_50, 13)))), ((l_88 = 0xC8D1B7BEL) , (l_1115 > (0L >= (-1L)))), g_861);
                        l_1114 = ((safe_lshift_func_uint8_t_u_s((g_40 , p_47), 2)) < l_1118);
                        g_861 = l_67;
                        if (p_47)
                            break;
                    }
                }
                g_861 = ((l_1074 = (g_142 = ((safe_mod_func_int16_t_s_s(g_203, 0xB5CDL)) || (p_49 >= (((safe_lshift_func_int8_t_s_s(1L, 0)) < l_88) <= ((safe_sub_func_uint8_t_u_u((g_216 = func_112((((g_513 = (safe_add_func_int16_t_s_s((-1L), g_152))) | (safe_rshift_func_int8_t_s_s(((g_507 , l_1064) , p_50), 2))) , (-2L)), g_198, p_49)), l_1066)) < l_1073)))))) && g_258);
            }
            l_1074 = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((0x09A706EFL & (!func_75((safe_rshift_func_uint16_t_u_u(func_112(p_48, (p_48 && (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_159, (p_47 | p_48))), (func_112(p_49, l_1115, (g_853 , 0x5E05L)) == 9L)))), l_1115), p_50)), p_50, p_48))) , l_1064), p_49)), 10));
        }
        l_88 = func_62(g_785, (l_1097 , (g_861 , (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((-8L), g_513)), ((g_13 = (safe_mul_func_int8_t_s_s(((p_50 != (254UL > (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(l_68, ((safe_add_func_int8_t_s_s((p_47 , g_203), 246UL)) && 0x73L))), 7)), g_203)))) & p_48), p_48))) , l_68))))), p_50, l_1066);
        l_1153 = 1L;
    }
    else
    {
        char l_1160 = 0x80L;
        char l_1177 = 1L;
        int l_1178 = 7L;
        g_501 = ((safe_rshift_func_int8_t_s_s((l_88 = func_100(p_47, ((safe_add_func_uint32_t_u_u((((safe_add_func_int8_t_s_s(func_75(l_1160, (func_112(g_198, (safe_mod_func_uint8_t_u_u((l_1178 = ((g_161 != (safe_add_func_int16_t_s_s((((((safe_mul_func_int8_t_s_s((p_50 = ((((+0x7BL) & ((safe_rshift_func_int16_t_s_u((((g_948 = (safe_lshift_func_int8_t_s_u(l_68, (g_364 != ((((g_198 | (safe_rshift_func_int16_t_s_s((l_1015 = (((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((g_142 = g_159), 0L)), 0xBA8C6979L)) >= 0L) ^ l_1177)), g_198))) && 0x2C6D0B36L) == p_47) >= p_48))))) || g_142) || g_144), 14)) && g_184)) , 4UL) , l_1160)), l_68)) >= g_853) >= p_47) && (-1L)) == p_47), p_49))) , 0xAFL)), 4L)), g_264) < g_13), p_49), l_1160)) || g_1078) <= l_67), 4294967293UL)) , p_48))), p_48)) >= l_1160);
        return l_87;
    }
    g_861 = ((p_50 = l_1015) | ((-1L) && (p_49 >= ((p_47 < ((((l_88 = (l_1153 , (p_49 >= ((safe_mul_func_uint8_t_u_u((((0xA0DB47B2L && g_713) != 0x21D3L) ^ p_48), l_1015)) == p_47)))) & l_87) < 0xD151L) == l_1096)) <= p_49))));
    l_1190 = (g_861 = ((((((safe_mul_func_uint8_t_u_u(l_1096, (g_759 ^ g_183))) != ((l_67 , func_112((l_87 , (((l_1015 = l_87) == p_49) >= (safe_lshift_func_uint16_t_u_s((((l_68 = (safe_add_func_int16_t_s_s((l_88 = p_50), (+(safe_sub_func_int16_t_s_s(l_1189, l_1096)))))) || 0x8A10BAD6L) <= g_364), p_47)))), p_48, g_502)) ^ 0x30AAL)) == g_502) ^ p_47) , p_48) > l_87));
    g_861 = (p_49 , (0xEAL <= (-2L)));
    return l_1190;
}







static char func_62(int p_63, unsigned p_64, unsigned p_65, int p_66)
{
    unsigned l_1023 = 4294967289UL;
    const unsigned char l_1028 = 3UL;
    int l_1029 = 0L;
    int l_1031 = 1L;
    short l_1034 = 0xE5E9L;
    unsigned l_1051 = 0UL;
    int l_1052 = (-6L);
    char l_1053 = 0x7BL;
    l_1031 = ((safe_add_func_int16_t_s_s(p_63, (((safe_unary_minus_func_int8_t_s((g_1030 = (((safe_sub_func_int32_t_s_s((l_1023 , (l_1023 == (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((l_1029 = (+((((-1L) || func_100(l_1023, p_63)) != (func_112(g_513, (g_611 = (((l_1023 <= 255UL) < 0x077DD6E0L) , l_1028)), l_1023) == l_1023)) , g_142))), p_63)) , p_63), g_501)))), p_66)) , g_144) & g_12)))) >= 0xAC02L) < l_1023))) , p_63);
    l_1029 = func_100(func_75(((l_1028 , l_1029) < (p_66 , (l_1031 = ((safe_add_func_int32_t_s_s((func_91(l_1034, (((safe_mod_func_int16_t_s_s(((l_1034 ^ p_63) ^ l_1031), (p_63 , g_501))) && p_64) ^ l_1029), l_1029) | p_63), 0xA11D63BCL)) & 0UL)))), p_65, p_65), p_66);
    g_861 = (func_112((((l_1029 = p_65) & g_143) && (8UL == l_1029)), g_143, p_64) ^ l_1023);
    g_861 = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_u(l_1028, 15)) , (safe_sub_func_uint8_t_u_u(((p_64 == (safe_mul_func_int16_t_s_s((l_1031 = (p_63 , g_861)), (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((0xB344L < (l_1029 = p_65)) >= ((~(((safe_mul_func_int16_t_s_s(((g_258 | g_853) , ((func_112((l_1052 = (g_12 = (((((((g_500 != l_1051) || 65532UL) | 0x588C4A93L) , l_1051) > l_1023) != 0x803CL) < p_65))), g_1030, p_66) | 0x8952L) , p_65)), 0xC525L)) < l_1028) , 0x3F18C062L)) > p_65)), l_1053)), p_65))))) | 0x5197L), l_1034))), g_152));
    return l_1028;
}







static int func_75(unsigned char p_76, unsigned char p_77, unsigned short p_78)
{
    char l_1016 = 0x7AL;
    int l_1017 = 1L;
    l_1017 = (l_1016 = g_611);
    return l_1017;
}







static unsigned char func_91(char p_92, int p_93, unsigned p_94)
{
    unsigned l_97 = 0xFFABE4BCL;
    int l_122 = 0xB298F974L;
    unsigned l_123 = 1UL;
    int l_130 = 0x5ED5A8D4L;
    short l_131 = 0x2DC1L;
    unsigned char l_235 = 0UL;
    unsigned short l_299 = 0UL;
    int l_336 = 4L;
    unsigned l_402 = 0x080480A9L;
    unsigned short l_405 = 0x2AF1L;
    unsigned char l_421 = 0x43L;
    const unsigned l_427 = 18446744073709551615UL;
    unsigned l_545 = 0xAF388DA7L;
    const unsigned l_569 = 1UL;
    unsigned l_575 = 0x430663DEL;
    unsigned char l_609 = 255UL;
    unsigned l_764 = 1UL;
    short l_765 = (-1L);
    unsigned l_905 = 0xDD3C2975L;
    int l_906 = 0xB8AC06CEL;
    const char l_997 = (-1L);
    unsigned short l_1008 = 1UL;
    if (((g_184 = (l_97 == (safe_rshift_func_uint8_t_u_u(func_100((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((((0L > (safe_rshift_func_int8_t_s_u(((l_130 = (safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((func_112(p_92, ((1L == p_92) == (0x59E8L & (safe_lshift_func_int8_t_s_u((l_97 != (((l_123 = ((safe_mul_func_uint8_t_u_u((l_122 = (((1UL ^ (safe_mod_func_uint8_t_u_u(l_122, p_93))) == g_13) , l_97)), 1L)) ^ l_97)) == 1UL) ^ 0xE514L)), p_94)))), p_93) > l_97), l_97)) , p_94), 0x3651L))) && 65535UL), l_131))) , 0x9CL) , p_92))), 1)), l_131), 6)))) <= l_131))
    {
        int l_195 = 0xB66E786CL;
        unsigned l_202 = 0x7D404005L;
        char l_230 = 0xCEL;
        unsigned l_247 = 0xB664D11AL;
        g_161 = ((((0xEA5EAF73L | (((safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((g_143 && (l_130 , p_94)), ((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x329A5164L, ((safe_lshift_func_int8_t_s_s(g_161, 6)) ^ l_195))), 7)) <= (!((safe_mul_func_int8_t_s_s((p_94 , 0xE7L), g_152)) != p_93))))) , p_93), 0x4DL)) && g_142) != 0xB6B2L)) && l_131) || l_131) , g_198);
        g_161 = 0xEA4B0395L;
        for (g_159 = (-2); (g_159 > (-24)); g_159 = safe_sub_func_int8_t_s_s(g_159, 1))
        {
            unsigned short l_201 = 0x011DL;
            short l_204 = 1L;
            short l_213 = 1L;
            int l_217 = 5L;
            if ((func_112(p_92, ((0x27731F37L && g_152) != g_13), ((l_201 < 0x1A0C7C7AL) ^ l_122)) ^ g_184))
            {
                g_161 = p_92;
                g_161 = 0L;
                l_195 = ((l_122 = l_202) <= ((g_203 = g_183) , l_130));
            }
            else
            {
                unsigned l_212 = 0x5D329C14L;
                l_195 = ((l_204 != p_93) <= func_112(func_112(g_144, (p_94 = (safe_mod_func_int8_t_s_s((-1L), ((safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((g_184 = func_112((l_130 = l_212), g_159, g_152)))) , (l_201 | l_213)), l_202)), g_143)) , 0xBFL)))), p_92), p_93, g_142));
                l_217 = (g_203 = ((!l_204) > (g_216 = (safe_rshift_func_int16_t_s_u((g_142 = l_97), 11)))));
                l_122 = (func_112((l_217 = func_112((func_112(g_143, func_112(l_212, p_92, func_112(l_195, g_183, p_93)), g_184) || 0x3FL), l_195, l_195)), p_94, g_40) & g_198);
                l_217 = p_94;
            }
        }
        if ((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(func_100(((l_195 = l_195) , (safe_mod_func_int32_t_s_s(p_93, (func_112((((g_161 = l_131) || ((safe_lshift_func_uint16_t_u_s(l_230, 0)) < (safe_add_func_uint16_t_u_u(l_97, (((safe_lshift_func_uint16_t_u_s((l_235 = p_93), 9)) >= (0x4F93L < p_93)) , (((((l_195 = (g_152 || 0xAB54D395L)) , p_92) , 0x7158421DL) <= 0xA3CFAA44L) < g_143)))))) ^ g_203), g_143, g_144) && p_93)))), p_94), 0xD35EL)), 0x55F1L)), l_202)))
        {
            l_195 = l_195;
        }
        else
        {
            int l_240 = 0x8AD10CE5L;
            unsigned l_259 = 0x06F29B82L;
            unsigned short l_265 = 0x631FL;
            if ((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((5UL <= (l_240 = (-10L))), p_92)), (((g_203 >= l_195) , (l_130 = (0xBBC2L == (((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((l_122 = ((l_247 | (g_258 = (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((((g_13 = ((safe_sub_func_uint32_t_u_u(p_94, 8UL)) == p_94)) < 0x73L) == 0x6EL) , p_94), l_131)) , 0xAAL), g_184)), p_94)) && p_94) | 65528UL), p_93)))) ^ g_161)), p_92)) != g_159), p_92)) , 0UL), p_92)) | 0x07L) != p_93)))) , 0x5B67L))))
            {
                l_195 = l_259;
                for (g_184 = 0; (g_184 > 24); g_184 = safe_add_func_int8_t_s_s(g_184, 2))
                {
                    if (l_240)
                        break;
                }
            }
            else
            {
                unsigned l_276 = 0x5579C5B4L;
                const int l_277 = 7L;
                unsigned l_278 = 0x0FFD9DDAL;
                l_240 = (l_130 = (((safe_sub_func_int32_t_s_s(((((p_94 < (l_265 = g_264)) || (p_94 = (((l_278 = func_100(((((func_100((g_40 = l_130), (((safe_sub_func_uint16_t_u_u((l_122 = 0xB98BL), (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(l_247, g_203)) ^ (0xD4L ^ g_198)) <= (-1L)), l_276)) , 1UL), g_159)) | 1UL) >= 0xC4L), p_94)))) < p_94) , g_161)) > p_92) >= g_216) & l_277) , 1UL), l_276)) || l_276) > p_94))) > 0x3EC0L) || g_152), g_203)) < 0UL) , g_258));
            }
            for (l_202 = 0; (l_202 >= 23); l_202++)
            {
                const short l_285 = 0xD31CL;
                int l_292 = (-2L);
                g_203 = (g_161 = (safe_mul_func_uint16_t_u_u((7UL && (p_94 = ((safe_sub_func_uint16_t_u_u(func_112(p_93, (g_184 = l_285), ((g_159 = (safe_lshift_func_int8_t_s_u(l_235, 3))) | ((((l_240 = func_112(l_235, (((safe_mul_func_uint8_t_u_u((((l_240 ^ (safe_sub_func_int8_t_s_s((l_292 = (p_92 <= g_13)), func_112(p_94, p_94, g_144)))) < l_240) > 6UL), 4L)) <= 0x92DAL) ^ l_122), g_144)) <= g_264) != l_122) & l_259))), (-1L))) , g_40))), g_40)));
                l_292 = (safe_lshift_func_int8_t_s_s((0L || (~((safe_mul_func_uint8_t_u_u(p_93, g_198)) <= func_100((safe_sub_func_uint8_t_u_u(l_122, p_92)), (l_299 ^ 1L))))), 4));
            }
        }
    }
    else
    {
        unsigned short l_300 = 0x8751L;
        int l_337 = 0x3041FB20L;
        unsigned l_366 = 0x7E86B316L;
        unsigned char l_367 = 250UL;
        unsigned l_386 = 0x19B404ABL;
        int l_399 = 0x55EE233FL;
        unsigned char l_471 = 0xACL;
        const short l_504 = (-4L);
        int l_512 = 0x9E288209L;
        l_300 = l_299;
        if ((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((g_142 , (((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((((l_299 > p_92) == l_97) == ((((l_122 , (g_144 | (safe_mul_func_int16_t_s_s((func_112(p_93, (safe_sub_func_int16_t_s_s(((l_122 = l_123) > (safe_lshift_func_uint8_t_u_s(((((l_300 || g_161) > 0xE0L) | l_300) , 0x33L), l_300))), 0xF528L)), l_300) || p_92), (-5L))))) >= (-1L)) >= p_92) < p_94)), 0x01L)) , p_94), g_161)) , 0x4EA0L), p_93)) != p_93) >= g_13)) && 2UL), g_142)), 0UL)) || 0x1A61L), p_92)))
        {
            char l_319 = 0x3AL;
            l_319 = func_100(l_300, p_94);
        }
        else
        {
            unsigned l_338 = 4294967295UL;
            int l_359 = 0x4BB95E3BL;
            unsigned l_385 = 0xF949218AL;
            char l_503 = (-1L);
            for (g_184 = (-26); (g_184 <= 7); g_184++)
            {
                if (l_300)
                    break;
            }
            for (g_184 = 0; (g_184 >= 60); g_184 = safe_add_func_int32_t_s_s(g_184, 9))
            {
                const unsigned char l_335 = 0xBCL;
                for (l_122 = 11; (l_122 <= (-15)); --l_122)
                {
                    const unsigned l_339 = 0xA238EC8AL;
                    int l_355 = 1L;
                    unsigned l_356 = 4294967295UL;
                    g_203 = (g_198 , ((((safe_lshift_func_uint8_t_u_u(func_112((~(g_198 = (safe_mul_func_int16_t_s_s(((l_338 = (l_337 = ((safe_rshift_func_uint16_t_u_u(p_92, (safe_unary_minus_func_int8_t_s(func_100((p_94 == (safe_mul_func_uint8_t_u_u(g_152, 0x04L))), (((l_300 , 0x0D5D64FBL) , (l_336 = (l_130 = func_112((g_144 > (!g_40)), l_335, p_94)))) ^ (-2L))))))) , 0xE8C370A0L))) ^ g_203), p_92)))), l_339, l_235), 1)) == l_131) && 0xA62EL) , p_94));
                    for (l_299 = 0; (l_299 > 56); l_299 = safe_add_func_uint32_t_u_u(l_299, 8))
                    {
                        g_161 = g_143;
                        if (p_94)
                            continue;
                        if (l_335)
                            continue;
                        return g_264;
                    }
                    if (g_144)
                    {
                        char l_352 = 0x20L;
                        int l_357 = 4L;
                        int l_358 = 0xCBFC918AL;
                        l_358 = (safe_rshift_func_uint16_t_u_u(((g_216 && (((((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(l_337, (g_198 < ((((l_357 = (p_92 >= (safe_mod_func_int16_t_s_s(((0x0AL > (((p_94 >= ((((safe_mul_func_uint8_t_u_u(l_352, (g_264 = ((safe_mul_func_int8_t_s_s((((l_355 = l_339) && (g_152 < p_94)) > p_92), p_94)) , 0x2FL)))) > 0L) == l_356) > (-4L))) || p_94) | 0x1EL)) != g_198), g_203)))) , l_336) , l_356) , (-3L))))) >= 9UL) | g_161), (-1L))) > p_94) , g_216) , 6L) >= (-1L))) <= 0x6D97829FL), g_142));
                        l_359 = 0x60CF77D2L;
                        l_359 = (l_356 , l_339);
                        l_359 = (+func_100(p_93, (safe_mod_func_uint16_t_u_u((g_364 = (0xAEL || (((safe_mul_func_uint16_t_u_u(p_92, 65533UL)) < 0x4C0FB6D2L) | l_338))), (safe_unary_minus_func_int16_t_s(((~(g_183 > p_94)) < l_358)))))));
                    }
                    else
                    {
                        if (l_366)
                            break;
                        g_161 = g_161;
                        return g_152;
                    }
                    l_359 = (g_161 = l_367);
                }
                l_359 = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s(func_112((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(0x3AL, p_93)), 3)), g_364, (((safe_mul_func_uint8_t_u_u((g_216 = ((safe_add_func_int8_t_s_s(func_100((safe_mod_func_uint8_t_u_u((((~(safe_lshift_func_uint16_t_u_u((l_337 = 0x7028L), g_264))) , func_112(((g_258 = 8UL) & (l_130 = (g_264 == (l_337 = ((func_112(g_152, func_112(l_385, l_123, p_92), l_386) , p_93) || 1UL))))), g_142, p_94)) && 0xE5L), p_94)), g_216), l_359)) > 0x9BF1B5D2L)), p_92)) , 1UL) != l_335)))) , g_184), 1UL)) ^ g_184), g_184));
            }
            if ((safe_add_func_int32_t_s_s(0x24BCD46BL, g_184)))
            {
                int l_412 = 1L;
                if (((((safe_sub_func_int8_t_s_s(0L, (l_386 < ((func_100(g_364, l_386) , (safe_add_func_int32_t_s_s((func_100(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(func_112(l_399, (safe_mod_func_int16_t_s_s((g_159 = (+(l_402 != (safe_mod_func_int32_t_s_s((l_405 && (l_359 = (((((p_93 < p_92) < g_161) != g_203) >= g_152) <= 0x36915950L))), p_94))))), 1L)), g_364), 0x50L)), l_337)), 0xDB98L)) < g_364), g_258) == l_367), 0xCC45B127L))) > p_92)))) >= g_184) == l_122) == g_264))
                {
                    g_161 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_184, 14)), (g_198 = (safe_rshift_func_uint16_t_u_s(g_183, (((~(func_112((g_159 = (-2L)), (g_364 = g_264), g_152) , (l_131 , (~(func_112(((l_359 = g_142) == ((((l_412 < l_412) , g_142) & 0xF7FCL) | 0x8D3C3340L)), l_123, g_40) != g_159))))) == 0L) , l_405))))));
                }
                else
                {
                    unsigned l_430 = 0x4B0D4290L;
                    int l_434 = 1L;
                    if (((l_122 = ((safe_rshift_func_uint8_t_u_u(g_184, 7)) < (0x452CE8F8L && (safe_mod_func_int32_t_s_s((g_144 | (g_143 | (safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(l_412, l_421)) != (p_93 != (l_399 = (((safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((((safe_add_func_uint16_t_u_u(l_427, (0x1852L | 65528UL))) , 0xC39CL) <= p_94) && (-1L)))), p_93)) , 0xF6L) , 0UL)))), p_93)))), 4UL))))) , (-8L)))
                    {
                        unsigned l_433 = 1UL;
                        l_337 = 0x0967E6ABL;
                        l_412 = ((safe_mul_func_int8_t_s_s(0x43L, 255UL)) & p_93);
                        l_430 = (-6L);
                        l_434 = (safe_rshift_func_uint8_t_u_s(g_40, (((l_433 = p_92) , g_143) , p_93)));
                    }
                    else
                    {
                        short l_435 = (-1L);
                        l_435 = p_92;
                        g_161 = (l_434 = (safe_sub_func_int16_t_s_s((l_435 , g_159), (((safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(0xCFD5L, (g_216 != 0x9E9BL))), (safe_lshift_func_uint16_t_u_u(p_93, 6)))), ((safe_add_func_uint8_t_u_u(g_142, (safe_lshift_func_int16_t_s_u(g_142, 7)))) ^ ((func_112((safe_lshift_func_int8_t_s_s(0xD3L, p_92)), l_385, p_94) , g_183) > p_92)))) == 0xC9A2L) , 0xDCEAL))));
                        l_412 = (safe_mul_func_int16_t_s_s(p_92, 5UL));
                    }
                }
                g_203 = (safe_rshift_func_uint16_t_u_u((((g_152 , (safe_mul_func_uint16_t_u_u((g_144 , (l_338 & ((-1L) != l_385))), (g_264 != (l_130 = ((func_100(g_143, (safe_mod_func_uint8_t_u_u(2UL, (safe_rshift_func_uint8_t_u_s(p_93, 3))))) , l_367) , 65535UL)))))) || (-1L)) < l_399), p_94));
                g_161 = (safe_lshift_func_uint16_t_u_u(l_336, 2));
                g_203 = ((p_94 > (((p_92 , func_112(func_112(l_97, (safe_sub_func_int8_t_s_s((l_130 = func_112(l_299, (l_359 = (l_337 = ((-1L) | (p_92 , func_100(l_412, (+(g_13 & ((g_216 = 0xCAL) > g_258)))))))), p_92)), 0xC9L)), l_386), p_94, l_336)) < 0UL) && 5UL)) ^ 0x38A7L);
            }
            else
            {
                l_337 = (l_130 = g_144);
            }
            if (((p_93 | (l_402 & l_122)) == (p_92 != (l_300 , p_94))))
            {
                unsigned char l_468 = 0xFEL;
                g_203 = (g_143 <= (func_112((g_161 != ((safe_sub_func_uint16_t_u_u(l_468, (l_337 = (((((((safe_lshift_func_int16_t_s_s((l_122 = (0x6FCBL | l_471)), 1)) < p_93) >= ((safe_rshift_func_uint16_t_u_u((l_359 = l_359), 12)) >= ((+((l_402 , ((((((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(func_112(g_159, p_94, g_198), p_93)), g_142)) | l_402) != g_40) || 0xE9L) <= 0x4C1FB1C6L) , g_264)) | l_97)) >= p_92))) ^ 1L) <= 0x46L) == p_93) < 0x2FL)))) ^ p_93)), g_183, p_94) , g_40));
                l_359 = (!l_130);
            }
            else
            {
                unsigned l_484 = 18446744073709551615UL;
                int l_491 = 0x75F624DBL;
                for (l_122 = 17; (l_122 > (-9)); l_122 = safe_sub_func_int16_t_s_s(l_122, 1))
                {
                    if (g_142)
                        break;
                }
                l_491 = (((safe_add_func_uint16_t_u_u(func_112(p_93, (safe_add_func_uint32_t_u_u(l_484, l_399)), (l_359 = ((g_216 >= 0x8507L) , (safe_lshift_func_int8_t_s_u((!p_94), (func_112((safe_sub_func_int8_t_s_s(0x8CL, (safe_lshift_func_uint8_t_u_s((((7UL >= (((l_484 , l_359) | l_367) > g_142)) ^ g_364) , 0x39L), g_183)))), g_40, l_484) == l_471)))))), g_143)) & g_258) , p_94);
                l_337 = (l_359 , ((safe_lshift_func_uint8_t_u_s((g_13 = ((safe_sub_func_int16_t_s_s(g_161, ((safe_mul_func_uint16_t_u_u((!(g_184 > 0x0CF3L)), (+(g_198 = (l_503 = ((g_502 = (g_501 = func_112(l_471, p_94, ((safe_sub_func_int8_t_s_s(g_364, func_112(func_112((g_143 != l_359), g_500, l_484), p_93, g_40))) == 0x7881DCCEL)))) | 0x7D17L)))))) | l_504))) || g_264)), 6)) == 3L));
            }
        }
        l_130 = ((((((safe_lshift_func_uint8_t_u_s((g_144 , (((g_507 | (g_203 && (p_94 = (func_112(((safe_mod_func_int16_t_s_s((g_513 = (safe_rshift_func_uint16_t_u_s(l_130, (g_183 & l_512)))), l_471)) != (safe_add_func_uint8_t_u_u((((g_143 != 0xEAL) && g_258) , 1UL), (-10L)))), p_92, g_203) == p_92)))) , 18446744073709551615UL) , l_421)), 7)) & g_203) != 0xF6L) <= 0x543DL) > 0x5863L) <= 0x349DL);
    }
    for (g_258 = 0; (g_258 == 9); g_258 = safe_add_func_uint8_t_u_u(g_258, 4))
    {
        unsigned l_520 = 0x03EDE6BDL;
        unsigned l_547 = 0x0028AEE4L;
        int l_548 = 9L;
        unsigned l_580 = 4294967288UL;
        unsigned l_624 = 18446744073709551615UL;
        char l_766 = (-5L);
        unsigned char l_828 = 7UL;
        short l_872 = 0xFE77L;
        g_161 = (g_513 & (((l_336 = ((l_235 | (g_198 , p_93)) | l_131)) , (4294967293UL & p_94)) | ((safe_sub_func_int32_t_s_s(p_92, (l_520 = (g_364 , 4294967295UL)))) , g_152)));
        if (((((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(9L)), (safe_mod_func_uint32_t_u_u((func_112(((l_122 = 4L) > (safe_sub_func_uint32_t_u_u(((9UL > g_203) < g_501), 4294967295UL))), (safe_add_func_int8_t_s_s(func_112(((func_112(l_130, (p_94 = 0xE9B3C30FL), (g_507 = (l_520 , l_235))) < g_142) || p_92), g_264, p_92), p_92)), g_203) > 0xE1538F55L), g_364)))) && g_184) != 0x2646L) <= p_93))
        {
            unsigned char l_540 = 246UL;
            int l_546 = 0x648E4A59L;
            unsigned short l_582 = 0UL;
            l_548 = (((safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((func_112(p_93, p_92, (l_130 = (((0x61L < ((((safe_sub_func_uint32_t_u_u(((((safe_mod_func_uint8_t_u_u(g_183, (safe_sub_func_int32_t_s_s(p_94, ((func_112((((l_540 ^ ((((safe_mod_func_int16_t_s_s((l_546 = ((((p_94 & (safe_add_func_uint32_t_u_u(((0x59L > (l_122 = (p_94 ^ 7UL))) , 1UL), l_545))) > g_144) ^ g_264) <= p_93)), 0xAF2AL)) > g_198) <= 0x49C95567L) && p_94)) <= (-3L)) , (-1L)), g_13, g_13) || 0x27EEL) & 2UL))))) & 3L) < g_258) >= g_502), 0x8E7DD5B7L)) , 255UL) & g_507) , p_92)) | p_93) < l_540))) && g_507) , g_144), l_299)) != l_547) || p_92), 65534UL)) , l_540) , l_547);
            g_161 = ((safe_mod_func_uint32_t_u_u((g_513 = (g_184 = ((safe_sub_func_int32_t_s_s(((l_548 = g_143) != (g_143 < 1UL)), (l_547 >= p_92))) <= l_540))), (safe_sub_func_int32_t_s_s(l_540, (safe_rshift_func_uint8_t_u_u(1UL, (!0x96L))))))) , (-1L));
            if ((g_198 || ((l_575 = (safe_add_func_uint32_t_u_u(4294967286UL, func_112((((safe_rshift_func_uint16_t_u_s(p_92, 1)) | ((safe_sub_func_uint8_t_u_u(252UL, l_97)) | (safe_lshift_func_uint16_t_u_s(l_546, (safe_add_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s(l_569, func_112((g_507 = (safe_lshift_func_uint8_t_u_s((g_513 ^ (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((func_100(l_548, g_500) || 0xCA7EL) , (-2L)))), l_336))), 6))), g_184, l_540))) , l_547) <= 0xD132L) == l_520), 65535UL)))))) == g_500), l_520, p_94)))) > p_92)))
            {
                unsigned char l_579 = 0x95L;
                int l_592 = 0x63889E4DL;
                if ((g_203 = 6L))
                {
                    int l_576 = (-7L);
                    l_576 = p_94;
                    if (l_576)
                        continue;
                }
                else
                {
                    unsigned l_587 = 0x27441F85L;
                    g_501 = 0x9BD9B6EDL;
                    for (p_94 = (-10); (p_94 != 5); ++p_94)
                    {
                        short l_581 = 0x659EL;
                        l_579 = g_40;
                        g_501 = (p_94 ^ (p_92 == (l_580 | (g_198 = (l_592 = func_112(((l_581 | l_582) , (safe_mod_func_int32_t_s_s(g_216, (safe_mul_func_int8_t_s_s(((l_587 == (p_94 >= (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((l_587 , g_501), 1UL)) , l_582), g_198)))) <= g_502), 0x6DL))))), l_587, p_92))))));
                        g_161 = 0x2A838BA9L;
                        g_203 = (1L | p_94);
                    }
                    l_548 = (g_183 , (((((safe_sub_func_int8_t_s_s((l_587 > (~g_184)), func_112(l_520, p_94, g_159))) || (l_592 >= p_94)) , 0xE615L) | p_93) , g_143));
                }
            }
            else
            {
                unsigned l_610 = 0x8DDAE541L;
                int l_613 = 0xD742BEAEL;
                for (l_545 = 0; (l_545 > 57); l_545 = safe_add_func_int16_t_s_s(l_545, 5))
                {
                    short l_612 = (-1L);
                    l_612 = ((g_611 = (safe_sub_func_int8_t_s_s(g_216, ((safe_mul_func_int8_t_s_s(((func_100(((p_94 ^ g_143) || (safe_mul_func_int16_t_s_s((g_142 && p_92), (safe_rshift_func_int8_t_s_s(l_582, (safe_rshift_func_uint8_t_u_u((g_40 , ((safe_add_func_uint8_t_u_u((g_13 = p_94), l_582)) > l_547)), l_582))))))), g_159) && p_94) == g_184), l_609)) > l_610)))) ^ p_94);
                    g_203 = (l_613 = func_100(g_144, p_93));
                }
                if (p_92)
                    break;
                g_203 = ((safe_sub_func_int32_t_s_s((0x46L | (safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((p_94 < ((l_546 = (((((safe_mul_func_int8_t_s_s((-8L), (l_624 , ((p_92 = l_547) | 0x27L)))) <= ((l_613 = (func_100(l_547, g_500) | l_540)) < 0x5BL)) != l_421) > p_94) , l_546)) & 0x4019L)) && p_94), p_94)), g_203)), l_609))), p_93)) | (-1L));
            }
            for (l_123 = 0; (l_123 > 56); l_123 = safe_add_func_uint16_t_u_u(l_123, 9))
            {
                l_546 = l_582;
            }
        }
        else
        {
            unsigned char l_640 = 0xBDL;
            unsigned l_661 = 0xC2898F29L;
            int l_667 = 0x35EB180EL;
            int l_702 = 0x23AA01E9L;
            int l_703 = (-6L);
            unsigned short l_777 = 65535UL;
            unsigned char l_784 = 255UL;
            int l_786 = 0xA0E2B921L;
            unsigned short l_833 = 0x45A7L;
            for (p_93 = 0; (p_93 > 20); p_93 = safe_add_func_uint16_t_u_u(p_93, 1))
            {
                int l_633 = 0x0CE58E33L;
                int l_639 = 1L;
                for (l_97 = (-10); (l_97 > 17); l_97 = safe_add_func_uint16_t_u_u(l_97, 1))
                {
                    int l_634 = 0x785D5D54L;
                    l_336 = 0L;
                    if ((l_547 || (func_112((((g_264 || (g_502 = (l_130 = (g_159 >= (safe_rshift_func_uint16_t_u_u(l_633, 10)))))) > g_183) == l_634), (safe_sub_func_uint32_t_u_u(0UL, (l_639 = ((safe_add_func_uint8_t_u_u(((l_548 = l_634) >= p_92), p_92)) || l_634)))), g_507) != l_640)))
                    {
                        unsigned char l_662 = 0xD6L;
                        g_501 = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s((g_264 = 249UL), (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(((p_92 , 0x7F9D4053L) , 0xEDL), g_500)), 3)))), 7));
                        g_501 = ((safe_mul_func_uint8_t_u_u((func_100(((safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0UL, ((safe_add_func_uint8_t_u_u((((((l_640 == (0xA4L > (l_639 = 0xFBL))) , g_216) , l_421) | ((safe_sub_func_uint32_t_u_u((~(safe_mul_func_uint16_t_u_u(((g_507 ^ (((l_640 > (0x5319L <= g_144)) , (-10L)) , 0x43L)) > g_40), 0L))), 0UL)) , l_661)) > l_662), g_184)) ^ g_161))) , p_92), p_93)) , g_184), g_264) && 247UL), 0x67L)) & p_94);
                    }
                    else
                    {
                        if (p_93)
                            break;
                    }
                    l_667 = ((g_13 , (((safe_sub_func_uint8_t_u_u(1UL, (p_93 > g_364))) != g_161) <= p_94)) || (l_633 , ((l_548 = ((l_122 = l_131) <= (((((safe_mod_func_uint16_t_u_u(((-4L) & l_634), l_548)) > 0x2073D307L) > 1UL) | p_93) >= 0x00L))) , 0x34L)));
                    g_203 = (((l_548 = (((g_142 <= func_112((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(g_198, p_92)), (p_93 , (safe_mod_func_int16_t_s_s(0x8AD4L, g_152))))), g_216, (p_94 ^ (safe_add_func_uint16_t_u_u(((1UL == 65535UL) <= g_611), 6UL))))) && l_667) & 0x8E06L)) ^ 0x601DL) ^ p_93);
                }
                l_639 = ((safe_mod_func_int16_t_s_s(l_661, ((g_144 = g_203) , (((p_92 = (g_258 && g_152)) && (safe_lshift_func_int8_t_s_u(p_94, (((((l_633 , (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(g_216, ((safe_add_func_uint16_t_u_u((l_633 , func_100(((0x6AA9L | g_152) , p_93), p_93)), g_216)) <= 0x1DL))), g_501))) != g_502) != 0xD9D5L) < (-10L)) < 9UL)))) & (-1L))))) , (-8L));
                for (g_513 = 0; (g_513 > 14); g_513 = safe_add_func_uint8_t_u_u(g_513, 9))
                {
                    int l_704 = 0xE505CDE5L;
                    int l_714 = 1L;
                    unsigned short l_725 = 0xA603L;
                    unsigned short l_746 = 65526UL;
                    l_703 = (safe_mod_func_uint8_t_u_u(p_92, (~(g_507 , (g_159 & (l_130 = func_112(((safe_rshift_func_int8_t_s_u(0L, (((l_336 = (safe_add_func_int16_t_s_s(l_667, func_112(((g_502 || func_112((0x18L > (safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(((l_122 = (safe_rshift_func_int8_t_s_s((l_702 = (((safe_mod_func_uint32_t_u_u(((p_94 < ((0UL != g_13) ^ g_216)) > l_633), g_152)) , g_507) >= g_500)), l_703))) && p_93), l_639)), l_704))), g_501, p_94)) && 4294967291UL), g_161, p_94)))) , p_93) , 0xAAL))) <= p_92), p_92, p_94)))))));
                    for (g_143 = (-25); (g_143 == 17); g_143++)
                    {
                        l_639 = p_93;
                        return g_143;
                    }
                    if ((l_639 = ((g_713 = (((g_502 = 7UL) > func_112(g_258, ((((~p_94) >= (((((((safe_mod_func_int32_t_s_s((g_507 & p_94), ((safe_lshift_func_uint16_t_u_s(l_520, 3)) ^ (p_94 , g_203)))) & (safe_sub_func_uint16_t_u_u(g_152, l_704))) | 3L) < 65533UL) | p_92) , g_501) >= p_93)) & l_639) , 0x6EC383ADL), p_94)) | g_507)) <= g_258)))
                    {
                        l_714 = p_94;
                    }
                    else
                    {
                        int l_726 = 0xDE7A61B2L;
                        unsigned char l_727 = 0x0AL;
                        g_203 = ((safe_sub_func_int32_t_s_s(((7UL || ((g_13 = (0x3081L | l_714)) , (safe_sub_func_int8_t_s_s((1UL | ((safe_mod_func_int32_t_s_s(p_94, (safe_sub_func_uint8_t_u_u((((~(g_142 >= (l_725 = ((g_611 >= (0x4EL == (safe_rshift_func_uint8_t_u_s((g_216 = (func_112(((g_13 = (((!0L) , (-9L)) & p_94)) != p_93), g_500, g_258) | (-1L))), g_513)))) ^ l_714)))) >= l_703) == 0x03L), 0xAAL)))) != 0xC656L)), 255UL)))) != 0x245EFC28L), l_726)) && 0xFD90FBA4L);
                        l_727 = (-1L);
                        g_203 = ((0UL == (l_421 ^ l_667)) | (-1L));
                    }
                    g_501 = (safe_mod_func_int8_t_s_s(((p_93 , (safe_lshift_func_uint16_t_u_u(func_100((((((~p_93) ^ (safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint32_t_u_u(0xF7CFFAD9L, (safe_rshift_func_int8_t_s_u(func_112(l_122, g_264, l_714), ((safe_sub_func_int16_t_s_s(((g_40 != l_609) || g_501), l_714)) > 0UL))))) < p_94) , (-2L)) | p_92) ^ p_94), l_746)), l_746)) > l_624), l_569))) <= p_94) || p_93) && l_548), l_580), 9))) , l_667), g_507));
                }
                l_766 = (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_216, 4)), (((safe_rshift_func_int16_t_s_u(((~0xA3A7L) <= (l_130 = p_93)), 5)) != ((!(g_203 , ((((safe_mul_func_uint8_t_u_u((0x66907B63L >= (l_122 = (safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((g_759 < (safe_add_func_uint8_t_u_u((p_92 < ((safe_rshift_func_int16_t_s_s(func_112((g_144 | 0xB78CCCDFL), g_500, g_184), p_93)) , g_258)), 0x4CL))), g_513)), l_764)))), p_94)) , g_13) < l_765) == p_94))) ^ p_94)) < 0xBAA5L)));
            }
            g_161 = (safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_s(p_94, (+(safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(l_640, ((0x34L != func_112((l_548 = g_142), func_112(p_93, p_93, ((safe_mod_func_int16_t_s_s((l_667 = p_93), p_92)) , p_94)), g_216)) < 3L))), p_92))))) >= l_777) | l_661), 4L));
            if ((safe_lshift_func_uint16_t_u_u(func_100(g_611, ((l_661 || (g_502 > l_703)) | (((4294967295UL && p_93) || l_702) | 0x9AB5L))), p_92)))
            {
                char l_797 = 0x25L;
                l_130 = l_548;
                l_130 = (safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(p_92, l_784)) || (g_785 = 6L)) == l_405) , l_702), (l_786 , (((((safe_mod_func_int32_t_s_s(0xAFB5588AL, (safe_add_func_int16_t_s_s(g_513, func_100(((safe_sub_func_int16_t_s_s(((~(+func_100(func_100((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_797, 0x5FB9L)), l_520)), g_507), p_92))) || (-1L)), 0xFC59L)) >= 0L), l_703))))) > 4294967295UL) <= 0L) | (-3L)) | l_405))));
                g_161 = 0xB0A28A67L;
            }
            else
            {
                unsigned l_802 = 0x412E770DL;
                int l_823 = 0x9CF6B4ADL;
                l_130 = (l_667 = (g_501 < 1UL));
                if (func_112(p_94, ((func_112(g_713, l_405, ((((((-2L) >= ((~(+(safe_mul_func_int16_t_s_s(func_112((g_198 , (p_94 ^ (p_94 | func_112(func_100((((safe_sub_func_int8_t_s_s((-1L), (((l_802 == g_152) <= p_92) <= g_161))) >= 0xD6L) || g_502), g_264), g_501, p_92)))), l_802, g_364), g_513)))) & p_93)) & g_713) <= g_502) || 0x13L) == 0xF7L)) < g_507) , g_159), l_802))
                {
                    unsigned char l_807 = 3UL;
                    l_807 = (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(func_100(g_502, p_94), p_92)), 6));
                    g_203 = (g_501 = (safe_sub_func_uint16_t_u_u(l_766, func_100(((safe_mod_func_uint16_t_u_u((l_766 || (safe_add_func_int8_t_s_s(0xF5L, l_640))), g_713)) , p_92), ((p_92 > ((g_785 , func_112((g_159 = (safe_add_func_uint16_t_u_u(l_130, g_13))), l_548, l_405)) | 0x41A3L)) < 0x44DFL)))));
                    g_501 = 1L;
                    g_203 = ((safe_unary_minus_func_uint8_t_u(((((safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(l_802, 3)) , p_94), (~(((l_823 = l_520) != (safe_lshift_func_int8_t_s_u((l_802 > p_92), 5))) < func_112(((safe_lshift_func_uint16_t_u_u(l_828, ((safe_rshift_func_int8_t_s_s(p_94, 2)) && g_216))) <= 0xE1E19F41L), l_405, p_92))))), g_502)) == g_144) && g_183) || 2L))) || 2UL);
                }
                else
                {
                    l_548 = (safe_mul_func_int16_t_s_s((g_264 < (l_765 <= (4UL != (p_94 >= l_833)))), (safe_mod_func_uint8_t_u_u(((p_92 | 1L) , func_100(g_611, ((-1L) < l_97))), p_93))));
                    for (g_713 = 23; (g_713 != 19); --g_713)
                    {
                        int l_846 = (-1L);
                        int l_854 = 0x43C967D7L;
                        l_854 = (p_92 , (((g_853 = (safe_lshift_func_uint16_t_u_u(6UL, ((-1L) < (safe_mul_func_int8_t_s_s(func_100((g_152 = (safe_sub_func_int8_t_s_s((safe_mul_func_int16_t_s_s((l_703 = g_152), (l_846 > l_548))), (l_667 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_713, 0)), (g_502 = ((((safe_mul_func_int16_t_s_s(func_112(g_203, p_92, g_713), p_94)) != 0x480EF25AL) & (-5L)) != 0x9E7FDE7CL)))))))), l_802), l_784)))))) || 0x14L) ^ g_501));
                    }
                    if (p_93)
                        continue;
                }
                g_161 = g_513;
            }
            return p_92;
        }
        for (p_93 = 0; (p_93 < (-9)); --p_93)
        {
            int l_882 = 0x48416275L;
            int l_884 = 1L;
            if (g_785)
            {
                short l_866 = 0xF12DL;
                for (g_364 = (-14); (g_364 >= 17); g_364++)
                {
                    l_122 = (65531UL > (g_264 , (((func_100((safe_rshift_func_uint16_t_u_s((l_130 = 65530UL), 0)), l_402) <= (((l_866 = (((g_861 >= (((p_94 , ((safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((((0x8B1BL == ((l_336 = g_502) , 1L)) >= 0x6B3B71F1L) ^ g_501), g_198)), 6)) , p_93)) > 0xC6BBL) | g_184)) & g_216) , 0x3978L)) , p_93) & p_94)) ^ 65529UL) , g_198)));
                }
                l_130 = l_97;
                for (g_502 = (-26); (g_502 != 54); ++g_502)
                {
                    unsigned l_881 = 1UL;
                    int l_883 = (-9L);
                    l_884 = ((l_883 = ((g_198 = g_507) == ((0UL <= (safe_unary_minus_func_int16_t_s(((safe_sub_func_uint16_t_u_u(6UL, p_94)) , l_872)))) == func_112((safe_add_func_uint32_t_u_u(4294967292UL, p_92)), ((safe_lshift_func_uint16_t_u_u(func_100((safe_sub_func_uint32_t_u_u((((g_861 = (l_881 = (safe_rshift_func_int8_t_s_u((p_93 , 0xD9L), p_92)))) == 0x53512CDEL) , l_882), p_94)), p_94), 3)) || l_828), p_94)))) == g_203);
                    return g_184;
                }
                l_548 = func_112((0xF4L != ((safe_mod_func_int8_t_s_s(p_93, (g_264 = func_100(g_152, ((-3L) || (l_884 = ((func_112(((func_112(p_92, (((1UL >= 0x1889L) < (func_112(g_184, (g_611 == p_92), l_866) ^ 0xC2AEL)) | g_500), p_92) >= g_785) | p_92), p_92, p_94) || p_93) > (-5L)))))))) == l_130)), l_580, p_92);
            }
            else
            {
                return g_216;
            }
            return p_93;
        }
        g_501 = ((safe_add_func_int8_t_s_s(0x88L, ((-8L) < (l_609 ^ func_112((((safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_122 = (+((safe_add_func_uint8_t_u_u((l_336 = (safe_sub_func_int16_t_s_s(g_501, (l_130 = (l_548 = g_364))))), 1UL)) , ((safe_mul_func_uint8_t_u_u((l_548 = (l_299 , (safe_add_func_int16_t_s_s((g_142 = 0xF4EAL), (safe_lshift_func_int16_t_s_u(0x1DD7L, 15)))))), g_40)) > p_94)))) <= l_905), 2)), 0x3998L)) && g_142), 1UL)) | g_611) <= l_906), l_405, l_624))))) < g_500);
    }
    for (g_142 = 0; (g_142 <= 23); ++g_142)
    {
        int l_909 = 0x780E6053L;
        unsigned char l_920 = 253UL;
        int l_921 = 0xF24FA83CL;
        unsigned short l_937 = 65535UL;
        int l_939 = 0L;
        char l_992 = 1L;
        l_336 = (l_909 < ((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_92, (safe_add_func_uint16_t_u_u((((+p_93) , (g_364 = (p_94 = p_93))) > p_93), (safe_rshift_func_int16_t_s_s(func_112((safe_rshift_func_uint8_t_u_s((l_921 = l_920), ((g_713 , (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((l_906 = g_184), (p_93 , 5L))), p_93))) > l_909))), p_93, l_97), g_183)))))), l_299)) == g_611));
        if ((((g_500 & (safe_mul_func_uint8_t_u_u(g_152, ((g_785 = func_112(g_40, ((l_921 = func_112(g_203, (l_906 = 4294967290UL), p_93)) && func_112((l_909 != ((!(g_501 = (((0x8460C1C7L | l_909) , l_909) | p_92))) && l_122)), l_545, l_421)), l_909)) , g_143)))) != l_920) > l_909))
        {
            char l_938 = 0xDCL;
            int l_940 = 0L;
            short l_945 = 0xD345L;
            if (p_94)
                break;
            g_203 = (-5L);
            g_161 = (((l_940 = (4294967286UL && (safe_lshift_func_int16_t_s_u(((((((safe_add_func_uint8_t_u_u(((l_921 = (g_513 = (p_94 = (safe_unary_minus_func_uint16_t_u(g_258))))) & 0x3BE41D1FL), l_765)) >= 0xE0L) && (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_937, g_513)), 0x8D72L))) || (((0L < p_93) & g_501) ^ 0x4A449F2DL)) > g_853) <= l_938), l_939)))) > 0xEDF8L) , l_920);
            l_940 = (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(9L, ((0xCFL | ((g_501 = (l_945 & (l_921 = (p_93 , (safe_sub_func_int32_t_s_s((func_112((((func_112(g_264, p_94, l_905) || 0x17L) != g_502) && g_948), l_945, l_938) ^ l_939), p_94)))))) && 0xAEA4E6EBL)) == g_159))), 4294967286UL));
        }
        else
        {
            int l_949 = 0L;
            int l_991 = (-1L);
            l_949 = (~l_921);
            for (l_123 = 9; (l_123 < 44); l_123 = safe_add_func_uint16_t_u_u(l_123, 8))
            {
                char l_952 = (-1L);
                int l_973 = 8L;
                int l_974 = 0xD11BE8E9L;
                g_501 = func_112(l_952, l_949, (safe_add_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_s(g_507, p_94)) , ((((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(l_545, func_112(l_921, (l_336 = l_949), l_920))) , (-1L)) , 0x32L), g_853)) , p_92) , 1L) < g_611)) ^ 0x31CF050FL), l_97)));
                l_939 = (func_112(g_40, l_952, ((l_336 = (0x9FDAL | 0x6F9BL)) || ((l_974 = (safe_add_func_uint32_t_u_u(((l_973 = (safe_mod_func_uint8_t_u_u((!((+p_92) == ((!(safe_rshift_func_int16_t_s_s(l_909, 2))) | (safe_sub_func_int32_t_s_s(((l_949 = (func_112((g_785 = (l_765 > (safe_add_func_int32_t_s_s((g_161 || (safe_rshift_func_int8_t_s_s((((p_94 | l_336) || g_142) , l_949), 3))), 0xA0CF407DL)))), l_949, l_909) && g_183)) & 0UL), g_364))))), 0x38L))) ^ 2UL), p_93))) <= l_937))) | g_152);
                for (g_507 = 0; (g_507 < 11); ++g_507)
                {
                    return p_93;
                }
            }
            for (g_258 = (-16); (g_258 <= 48); g_258 = safe_add_func_int8_t_s_s(g_258, 8))
            {
                l_921 = (safe_lshift_func_int8_t_s_s((l_909 | (~l_949)), 7));
                g_203 = l_949;
                l_949 = l_949;
                g_861 = (p_94 , ((safe_rshift_func_int16_t_s_s(g_501, 13)) && (g_501 == (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(p_93, l_991)) < p_92), (-2L))), p_93)), func_112(((g_40 == p_94) < p_94), l_949, l_921))))));
            }
            if (g_507)
                continue;
        }
        l_992 = g_713;
        g_161 = (g_501 = (safe_lshift_func_int8_t_s_s(func_112((g_785 = l_939), (0x8EL == ((safe_lshift_func_uint16_t_u_u(func_112((g_759 , (l_997 , l_992)), g_500, ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_s((((g_948 = (((g_502 = g_513) | (p_94 <= ((l_921 = func_112(g_861, p_94, p_92)) , g_216))) < g_264)) > l_939) , 0x258FL), l_299)))) | 65535UL), g_159)) || 1L)), g_853)) , 1UL)), g_507), 1)));
    }
    g_861 = ((((((l_336 = ((((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_1008, func_100(g_948, ((safe_sub_func_int32_t_s_s(func_100((((func_100(l_123, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(l_765, func_112((l_906 = p_94), (func_100(l_130, g_142) > (p_94 , p_94)), g_861))), l_1008))) | l_130) != l_122) , 0x19DADFE7L), p_92), g_853)) >= p_94)))), l_402)))) >= (-8L)) > l_97) & l_402)) , 0L) == p_92) , g_184) > 0xA2ACD6ADL) != 0xFE61L);
    return l_575;
}







static unsigned char func_100(unsigned p_101, unsigned p_102)
{
    const int l_132 = 0L;
    int l_135 = 8L;
    short l_145 = (-4L);
    int l_146 = 0xC119CD2CL;
    unsigned l_164 = 0UL;
    unsigned l_171 = 18446744073709551615UL;
    l_146 = (func_112((+(-4L)), l_132, (safe_mod_func_uint8_t_u_u((l_135 = 0xC6L), (g_40 & (9L != g_13))))) >= (l_145 = (safe_mod_func_int8_t_s_s(func_112((g_143 = (g_142 = (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(g_13, func_112(((((g_40 > l_132) > (-2L)) != g_13) , g_13), g_40, p_101))), l_132)))), l_132, p_102), g_144))));
    for (g_143 = 0; (g_143 > 33); g_143 = safe_add_func_uint16_t_u_u(g_143, 6))
    {
        unsigned l_151 = 18446744073709551612UL;
        unsigned l_160 = 0x12C06D41L;
        int l_172 = 0x1B330DB1L;
        l_146 = ((0L || ((((((safe_mod_func_uint32_t_u_u(((g_152 = l_151) , g_144), ((((p_102 <= g_13) , func_112(p_101, (((p_102 < l_146) | g_40) <= p_102), g_142)) | 0xDFL) & 0xF541A3ACL))) | 6UL) >= p_102) && g_40) <= (-7L)) < 0x8DL)) >= g_142);
        g_161 = (safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(0x01L, ((safe_rshift_func_int8_t_s_u(((l_132 >= l_151) && 0L), (((func_112((l_151 , (((g_159 = (l_151 ^ p_101)) >= g_13) , (p_101 || 0L))), l_151, l_145) != l_160) < p_102) < 65526UL))) , g_40))), p_101));
        l_146 = (l_164 >= (!func_112((safe_add_func_int16_t_s_s((l_172 = (g_159 , (255UL < func_112(((safe_lshift_func_int16_t_s_s(((g_13 = (l_171 = func_112((g_159 = (func_112((l_160 , 0x4A8AL), g_40, g_142) >= (safe_mul_func_int8_t_s_s((0x58B857EBL >= g_161), g_13)))), l_160, p_101))) , l_151), p_102)) > 7L), g_144, p_101)))), p_101)), l_146, p_102)));
    }
    l_135 = (safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((p_102 && g_144), (safe_mod_func_int32_t_s_s(((l_145 , (((safe_lshift_func_uint8_t_u_u(0x43L, 1)) ^ (+(l_146 != 0xEB91146BL))) ^ (g_13 = p_102))) && ((+0x68L) <= (safe_mod_func_int16_t_s_s((g_159 = ((g_183 = ((0x8CECL <= p_102) == g_144)) & (-10L))), 1L)))), g_161)))) < p_102), 0x01L));
    return l_146;
}







static unsigned func_112(short p_113, const unsigned p_114, short p_115)
{
    char l_128 = 0x88L;
    int l_129 = (-2L);
    l_129 = (safe_rshift_func_int16_t_s_s(0L, (safe_mul_func_uint8_t_u_u(p_114, l_128))));
    return p_113;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_853, "g_853", print_hash_value);
    transparent_crc(g_861, "g_861", print_hash_value);
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_1030, "g_1030", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1075, "g_1075", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1312, "g_1312", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1442, "g_1442", print_hash_value);
    transparent_crc(g_1623, "g_1623", print_hash_value);
    transparent_crc(g_1649, "g_1649", print_hash_value);
    transparent_crc(g_1661, "g_1661", print_hash_value);
    transparent_crc(g_1718, "g_1718", print_hash_value);
    transparent_crc(g_1769, "g_1769", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
