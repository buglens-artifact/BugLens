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



static int g_3 = (-3L);
static short g_21 = (-1L);
static short g_32 = (-1L);
static short g_46 = 0x6E40L;
static unsigned char g_53 = 0x7AL;
static int g_106 = 0L;
static unsigned g_113 = 0UL;
static unsigned g_123 = 0xAEC2C04DL;
static char g_125 = 1L;
static int g_131 = (-1L);
static unsigned char g_136 = 3UL;
static unsigned short g_150 = 0UL;
static unsigned short g_158 = 1UL;
static short **g_180 = (void*)0;
static int *g_211 = &g_106;
static int ** const g_210 = &g_211;
static short g_276 = (-4L);
static int g_287 = 0xBB508EA8L;
static unsigned char g_290 = 0UL;
static const short g_323 = 0x2C7DL;
static unsigned char g_350 = 0x88L;
static unsigned g_368 = 1UL;
static unsigned *g_377 = &g_123;
static unsigned ** const g_376 = &g_377;
static int g_392 = (-2L);
static char g_393 = (-8L);
static unsigned char g_416 = 0x0AL;
static const unsigned char g_432 = 0xE1L;
static const unsigned char * const g_431 = &g_432;
static const unsigned char * const *g_430 = &g_431;
static short g_501 = 0x1A1AL;
static unsigned g_548 = 0xCA78090FL;
static int *g_555 = &g_131;
static unsigned char g_663 = 7UL;
static int g_673 = 0L;
static unsigned char g_682 = 0xCAL;
static int g_778 = 1L;
static int g_790 = (-1L);
static unsigned short g_791 = 2UL;
static char g_796 = 0xACL;
static unsigned short g_797 = 0x53E3L;
static int *g_838 = &g_131;
static short g_949 = 0x8C6AL;
static char g_1016 = 0xF1L;
static char g_1044 = 0xCEL;
static unsigned g_1059 = 18446744073709551606UL;
static unsigned short g_1230 = 0x75E5L;
static unsigned char g_1372 = 3UL;
static short g_1457 = 0x06FBL;
static unsigned short g_1459 = 0xBDABL;
static unsigned short g_1554 = 65532UL;
static unsigned char g_1626 = 254UL;
static unsigned g_1706 = 1UL;
static const int g_1716 = 0L;
static int g_1820 = 0x41633D53L;
static unsigned char g_1823 = 1UL;
static int g_1828 = 0x03383BD7L;
static char *g_1848 = &g_393;
static char **g_1847 = &g_1848;
static char ***g_1846 = &g_1847;
static unsigned char *g_1866 = &g_663;
static unsigned char **g_1865 = &g_1866;
static unsigned g_1893 = 0xE1A608E0L;
static const unsigned g_1901 = 0xAFF468B4L;
static char g_1938 = (-1L);
static char g_1940 = (-7L);
static int g_1952 = 2L;
static char g_1965 = 1L;
static unsigned g_1974 = 0xDA150CC8L;
static unsigned short g_1980 = 65534UL;
static const int *g_2013 = &g_106;
static short g_2016 = 1L;



static unsigned char func_1(void);
static short func_56(int * p_57, const int p_58, unsigned char p_59);
static char func_60(short p_61, unsigned short p_62, int * p_63, int * const p_64);
static unsigned short func_65(const int * p_66, unsigned p_67, const int * p_68, unsigned char p_69, unsigned p_70);
static const int * func_71(int * p_72, const int p_73, unsigned p_74, int p_75, int p_76);
static short func_81(int * p_82, int * p_83, char p_84, const int * p_85, int * p_86);
static int * func_87(int * p_88);
static int * func_89(char p_90, int * p_91);
static char func_100(int * p_101, int * p_102, unsigned p_103);
static int * func_108(unsigned char p_109);
static unsigned char func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = &g_3;
    int *l_5 = &g_3;
    int *l_6 = &g_3;
    int *l_7 = &g_3;
    int *l_8 = &g_3;
    int *l_9 = &g_3;
    int *l_10 = &g_3;
    int *l_11 = &g_3;
    int *l_12 = &g_3;
    int *l_13 = (void*)0;
    int *l_14 = (void*)0;
    int *l_15 = &g_3;
    int *l_16 = &g_3;
    int *l_17 = &g_3;
    int *l_18 = &g_3;
    int *l_19 = &g_3;
    int *l_20 = &g_3;
    int *l_22 = &g_3;
    int *l_23 = &g_3;
    int *l_24 = &g_3;
    int *l_25 = &g_3;
    int *l_26 = &g_3;
    int *l_27 = &g_3;
    int *l_28 = &g_3;
    int *l_29 = &g_3;
    int *l_30 = &g_3;
    int *l_31 = &g_3;
    int l_33 = 1L;
    int *l_34 = &l_33;
    int *l_35 = &l_33;
    int *l_36 = (void*)0;
    int *l_37 = &l_33;
    int *l_38 = &g_3;
    int *l_39 = &l_33;
    int *l_40 = &g_3;
    int *l_41 = (void*)0;
    int *l_42 = &g_3;
    int l_43 = 0x667F5AEEL;
    int l_44 = 0x6A0B5978L;
    int *l_45 = &g_3;
    int *l_47 = &l_33;
    int *l_48 = &l_43;
    int *l_49 = &g_3;
    int *l_50 = &l_44;
    int *l_51 = (void*)0;
    int *l_52 = &l_33;
    short *l_1629 = &g_501;
    short *l_1630 = &g_276;
    int *l_1631 = (void*)0;
    int *l_1632 = &l_44;
    unsigned l_1633 = 4UL;
    int *l_1827 = &g_1828;
    short l_1831 = 0x9ACCL;
    int *l_1912 = &g_106;
    unsigned char l_2018 = 0x9FL;
    ++g_53;
    if (((*l_1827) ^= (func_56(&g_3, (func_60(g_32, func_65(func_71(&l_43, ((*l_1632) = ((safe_mod_func_uint16_t_u_u((*l_9), ((*l_1630) = ((*l_1629) = (safe_mul_func_uint16_t_u_u((*l_25), func_81(((*g_210) = func_87(((*g_210) = func_89((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s(1L, g_32)), (safe_mod_func_int8_t_s_s(func_100(&g_3, &l_43, g_32), g_46)))), (*l_8))), &g_3)))), &l_33, (*l_7), &l_43, &l_33))))))) <= (*l_17))), (*l_12), g_368, l_1633), (*l_7), &g_3, (**g_430), g_323), &g_3, &g_3) > (*g_431)), (*g_431)) < (-1L))))
    {
        unsigned *l_1832 = (void*)0;
        unsigned *l_1833 = &g_368;
        int l_1834 = (-1L);
        char *l_1845 = &g_393;
        char **l_1844 = &l_1845;
        char ***l_1843 = &l_1844;
        int *l_1895 = &l_44;
        int l_1960 = 7L;
        int *l_2007 = &g_3;
        int l_2015 = (-4L);
        int *l_2017 = (void*)0;
        (*l_37) |= (safe_rshift_func_int16_t_s_s((func_100(&l_33, &g_3, ((**g_376) & l_1834)) & (*l_40)), l_1834));
        if (l_1834)
        {
            unsigned * const l_1855 = (void*)0;
            int l_1862 = (-10L);
            int *l_1878 = (void*)0;
            int *l_1894 = (void*)0;
            unsigned l_1977 = 0x8AD6C1D1L;
            int l_1993 = 1L;
            (*g_210) = (void*)0;

            ;
            g_555 = ((*g_210) = (*g_210));

            ;
            if (l_1834)
            {
                unsigned short *l_1858 = (void*)0;
                unsigned short *l_1859 = &g_150;
                const int *l_1875 = &l_44;
                unsigned char l_1887 = 2UL;
                unsigned l_1888 = 18446744073709551608UL;
                const int *l_1914 = &l_44;
                int l_1915 = 0x17D14117L;
                int l_1969 = (-3L);
                if (((((safe_rshift_func_uint16_t_u_u(((*l_1859)--), g_548)) < g_501) | l_1862) && l_1834))
                {
                    unsigned char **l_1868 = &g_1866;
                    int l_1885 = 0xB6699A6AL;
                    char l_1886 = 0L;
                    int l_1913 = 0xAC068F26L;
                    int *l_1916 = &g_131;
                    int *l_1917 = &g_3;
                    int *l_1918 = (void*)0;
                    int *l_1919 = &l_1885;
                    int *l_1920 = &g_106;
                    int *l_1921 = &g_392;
                    int *l_1922 = &l_43;
                    int *l_1923 = &l_1915;
                    int *l_1924 = &g_392;
                    int *l_1925 = &l_43;
                    int *l_1926 = (void*)0;
                    int *l_1927 = (void*)0;
                    int *l_1928 = &l_1834;
                    int *l_1929 = (void*)0;
                    int *l_1930 = &l_33;
                    int *l_1931 = (void*)0;
                    int *l_1932 = &l_43;
                    int *l_1933 = (void*)0;
                    int *l_1934 = &g_106;
                    int *l_1935 = &l_44;
                    int *l_1936 = &l_1862;
                    int *l_1937 = &l_44;
                    int *l_1939 = &l_1834;
                    int *l_1941 = &l_1834;
                    int *l_1942 = &l_1862;
                    int *l_1943 = (void*)0;
                    int *l_1944 = &l_43;
                    int *l_1945 = (void*)0;
                    int *l_1946 = (void*)0;
                    int *l_1947 = &l_1862;
                    int *l_1948 = &l_1915;
                    int *l_1949 = &l_44;
                    int *l_1950 = &l_1915;
                    int *l_1951 = &g_392;
                    int *l_1953 = &l_1862;
                    int *l_1954 = (void*)0;
                    int *l_1955 = &g_106;
                    int *l_1956 = &g_1828;
                    int *l_1957 = &g_392;
                    int *l_1958 = (void*)0;
                    int *l_1959 = &g_392;
                    int *l_1961 = (void*)0;
                    int *l_1962 = (void*)0;
                    int *l_1963 = &l_43;
                    int *l_1964 = &l_43;
                    int *l_1966 = &l_1834;
                    int *l_1967 = (void*)0;
                    int *l_1968 = &g_1828;
                    int *l_1970 = &l_1915;
                    int *l_1971 = &g_392;
                    int *l_1972 = (void*)0;
                    int *l_1973 = (void*)0;
                    (*g_210) = (*g_210);
                    (*l_20) |= ((*g_377) & l_1862);
                    if ((*l_20))
                    {
                        unsigned char **l_1867 = &g_1866;
                        const int *l_1879 = &l_33;
                        const int **l_1880 = &l_1879;
                        l_1887 ^= (safe_mod_func_int32_t_s_s(((l_1867 = g_1865) != l_1868), (safe_mod_func_uint32_t_u_u(4294967287UL, (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(func_65(l_1875, (safe_rshift_func_int8_t_s_u(((func_65(((*l_1880) = l_1879), ((*l_1833) = (((*l_1859) = (((l_1834 > ((*l_1827) = (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((-6L), 0xE1DBL)), 0xE1L)))) == l_1885) != 0x76L)) == (*l_1875))), &l_33, (*g_1866), (*l_45)) && 0UL) != l_1886), 5)), &l_1834, (**g_430), g_323), l_1834)), (*l_1875)))))));
                    }
                    else
                    {
                        int *l_1896 = &l_1834;
                        (*l_37) &= l_1888;
                        (*l_8) = (safe_mul_func_uint8_t_u_u(0x1EL, ((**g_376) || (safe_rshift_func_int16_t_s_s((-4L), ((**g_1865) & 0x03L))))));
                        (*l_1827) = (safe_lshift_func_int16_t_s_u(g_1901, (0L >= (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((*g_1866), 0)), (safe_sub_func_int16_t_s_s((*l_1895), (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_131, l_1913)) > 0x1E84L), (*g_1866))))))))));
                    }
                    --g_1974;
                }
                else
                {
                    ++l_1977;
                    (*g_210) = (*g_210);
                }
                (*l_9) = (((*l_1629) = (*l_1895)) != (*l_1914));
                g_1980--;
            }
            else
            {
                int *l_1985 = &l_44;
                unsigned short l_1994 = 0xA218L;
                if ((!(*l_48)))
                {
                    const int *l_1992 = &g_1716;
                    (*l_1985) = ((*l_1992) || 0xB6L);
                    l_1994++;
                }
                else
                {
                    const short l_1997 = (-1L);
                    (*l_1912) = l_1997;
                }
                return (**g_1865);


            }
            for (g_1974 = 0; (g_1974 <= 51); g_1974 = safe_add_func_int32_t_s_s(g_1974, 9))
            {
                int l_2000 = 1L;
                (*g_210) = &l_1993;

                ;
                if (l_2000)
                    break;
            }

            ;
        }
        else
        {
            unsigned char l_2010 = 255UL;
            unsigned l_2014 = 0x8AEFE28DL;
            (*l_48) &= (safe_lshift_func_int8_t_s_s((!(((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*g_555), ((*l_10) & func_65(&g_3, (**g_376), g_2013, (**g_1865), l_2014)))), g_113)) ^ 0L) <= 4L)), 5));
        }

        ;
        (*l_1895) = ((*l_28) = (*l_2007));
        ++l_2018;
    }
    else
    {
        return (*g_431);



    }



    ;

    return (*g_1866);



}







static short func_56(int * p_57, const int p_58, unsigned char p_59)
{
    unsigned short *l_1722 = &g_1230;
    const int *l_1727 = &g_106;
    unsigned **l_1728 = &g_377;
    unsigned ***l_1729 = (void*)0;
    int *l_1730 = &g_3;
    int l_1731 = (-2L);
    int *l_1732 = &g_392;
    int l_1733 = 0x9496F392L;
    int *l_1734 = &g_3;
    int *l_1735 = &g_392;
    int *l_1736 = (void*)0;
    int *l_1737 = (void*)0;
    int *l_1738 = &g_131;
    int *l_1739 = &g_3;
    int l_1740 = (-6L);
    int *l_1741 = &l_1731;
    int *l_1742 = &g_131;
    int *l_1743 = &g_392;
    int *l_1744 = &g_3;
    int *l_1745 = &l_1740;
    int *l_1746 = &g_3;
    int *l_1747 = &l_1731;
    int *l_1748 = &l_1733;
    int *l_1749 = &l_1740;
    int *l_1750 = &l_1733;
    int *l_1751 = &g_392;
    int *l_1752 = &l_1731;
    int l_1753 = 0xFFAA22C8L;
    int *l_1754 = &g_106;
    int l_1755 = (-1L);
    int *l_1756 = (void*)0;
    int *l_1757 = &g_392;
    int *l_1758 = &l_1755;
    int *l_1759 = &g_131;
    int *l_1760 = (void*)0;
    int *l_1761 = &l_1755;
    int *l_1762 = &g_106;
    int l_1763 = 0xAD626363L;
    int *l_1764 = &l_1753;
    int *l_1765 = &g_3;
    int *l_1766 = (void*)0;
    int *l_1767 = &l_1733;
    int *l_1768 = &l_1755;
    int *l_1769 = &l_1733;
    int *l_1770 = &l_1755;
    int *l_1771 = &g_392;
    int *l_1772 = &g_106;
    int *l_1773 = &g_392;
    int *l_1774 = &l_1763;
    int *l_1775 = &l_1733;
    int *l_1776 = (void*)0;
    int *l_1777 = &l_1733;
    int *l_1778 = &l_1731;
    int *l_1779 = &g_106;
    int *l_1780 = &g_392;
    int *l_1781 = &l_1763;
    int *l_1782 = &l_1733;
    int *l_1783 = &g_106;
    int *l_1784 = &g_131;
    int *l_1785 = &l_1763;
    int *l_1786 = &g_131;
    int *l_1787 = (void*)0;
    int *l_1788 = &g_106;
    int l_1789 = 0x916B45EEL;
    int *l_1790 = &l_1789;
    int *l_1791 = (void*)0;
    int *l_1792 = &l_1755;
    int *l_1793 = &l_1789;
    int *l_1794 = &l_1740;
    int *l_1795 = (void*)0;
    int *l_1796 = &g_131;
    int *l_1797 = &g_3;
    int *l_1798 = (void*)0;
    int *l_1799 = &g_131;
    int *l_1800 = &l_1755;
    int l_1801 = 0xC9ED6A2FL;
    int *l_1802 = (void*)0;
    int l_1803 = 0x51156A7CL;
    int *l_1804 = &l_1801;
    int *l_1805 = &l_1803;
    int *l_1806 = &g_106;
    int *l_1807 = &g_3;
    int *l_1808 = &l_1733;
    int *l_1809 = &l_1789;
    int l_1810 = 0xC816C9AFL;
    int *l_1811 = (void*)0;
    int *l_1812 = &g_106;
    int *l_1813 = (void*)0;
    int *l_1814 = &l_1731;
    int *l_1815 = &l_1753;
    int *l_1816 = &g_106;
    int *l_1817 = &g_392;
    int l_1818 = (-2L);
    int l_1819 = 0x51573EF1L;
    int l_1821 = 0xD156B3CEL;
    int *l_1822 = &l_1755;
    char l_1826 = (-1L);
    (*g_555) &= (safe_mod_func_uint16_t_u_u(((((*l_1722) |= p_59) <= ((2L & (safe_div_func_int32_t_s_s((*p_57), 1L))) < ((safe_lshift_func_uint16_t_u_s(func_65(l_1727, p_58, p_57, ((l_1728 = l_1728) == &g_377), p_59), p_59)) && (*l_1727)))) || (**g_376)), p_58));
    --g_1823;
    return l_1826;
}







static char func_60(short p_61, unsigned short p_62, int * p_63, int * const p_64)
{
    int *l_1639 = &g_3;
    char *l_1642 = &g_796;
    unsigned char *l_1649 = &g_290;
    int *l_1650 = &g_392;
    short l_1651 = (-8L);
    int l_1665 = (-3L);
    int l_1695 = 0x56FEC4ADL;
    int l_1700 = 0x0BCA2033L;
    int l_1705 = 0xCD103E55L;
    const int *l_1715 = &g_1716;
    l_1639 = p_64;
    if (((g_663 || ((safe_sub_func_uint32_t_u_u(((*g_377) |= ((l_1642 == l_1642) <= 0xDA2EEB72L)), ((func_100(&g_3, p_63, l_1651) | 0x9DL) < (*l_1650)))) >= p_62)) == p_61))
    {
        int *l_1652 = &g_392;
        int *l_1653 = &g_3;
        int *l_1654 = &g_106;
        int *l_1655 = &g_392;
        int *l_1656 = (void*)0;
        int *l_1657 = &g_392;
        int *l_1658 = &g_392;
        int *l_1659 = (void*)0;
        int *l_1660 = (void*)0;
        int *l_1661 = &g_106;
        int l_1662 = 0x64E0724DL;
        int *l_1663 = &g_106;
        int *l_1664 = &g_106;
        int *l_1666 = &l_1662;
        int *l_1667 = &g_392;
        int *l_1668 = (void*)0;
        int *l_1669 = &g_392;
        int *l_1670 = &l_1665;
        int *l_1671 = &g_131;
        int *l_1672 = &g_106;
        int *l_1673 = &g_106;
        int *l_1674 = &g_131;
        int *l_1675 = &g_3;
        int *l_1676 = &l_1665;
        int *l_1677 = &l_1665;
        int *l_1678 = (void*)0;
        int l_1679 = 0x6B31CFBBL;
        int *l_1680 = &g_106;
        int *l_1681 = &g_131;
        int *l_1682 = (void*)0;
        int *l_1683 = &g_392;
        int *l_1684 = &l_1662;
        int *l_1685 = (void*)0;
        int *l_1686 = &g_131;
        int *l_1687 = &l_1662;
        int *l_1688 = (void*)0;
        int *l_1689 = &g_3;
        int *l_1690 = &l_1679;
        int *l_1691 = &l_1662;
        int *l_1692 = &g_3;
        int *l_1693 = &g_392;
        int *l_1694 = (void*)0;
        int *l_1696 = (void*)0;
        int *l_1697 = &g_3;
        int *l_1698 = (void*)0;
        int *l_1699 = &g_392;
        int *l_1701 = &l_1662;
        int *l_1702 = &l_1665;
        int *l_1703 = (void*)0;
        int *l_1704 = &l_1662;
        --g_1706;
        (*l_1690) = (safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_62 >= (p_63 != &g_1706)), 5)), (safe_unary_minus_func_uint8_t_u(p_62))));
    }
    else
    {
        const int **l_1714 = (void*)0;
        int l_1717 = 0x75022C8BL;
        (*p_63) = func_65((l_1715 = &g_106), (**g_376), p_63, (*g_431), (!18446744073709551615UL));

        ;
        (*p_64) = (p_61 < (l_1717 & (p_61 ^ (*g_555))));
    }

    ;
    return g_125;
}







static unsigned short func_65(const int * p_66, unsigned p_67, const int * p_68, unsigned char p_69, unsigned p_70)
{
    const int **l_1636 = (void*)0;
    const int *l_1638 = &g_392;
    const int **l_1637 = &l_1638;
    (*l_1637) = p_68;


    return (*l_1638);
}







static const int * func_71(int * p_72, const int p_73, unsigned p_74, int p_75, int p_76)
{
    int ***l_1635 = (void*)0;
    int ****l_1634 = &l_1635;
    (*p_72) |= ((void*)0 == l_1634);
    return &g_392;


}







static short func_81(int * p_82, int * p_83, char p_84, const int * p_85, int * p_86)
{
    unsigned l_852 = 0UL;
    int l_853 = 0x167D87B9L;
    char *l_854 = &g_393;
    int ***l_860 = (void*)0;
    short *l_862 = (void*)0;
    short **l_861 = &l_862;
    char l_970 = 9L;
    int *l_972 = &g_131;
    short l_975 = (-1L);
    unsigned l_1103 = 4294967295UL;
    int l_1174 = (-7L);
    int l_1176 = 0L;
    int *l_1246 = &g_392;
    unsigned **l_1379 = &g_377;
    int *l_1400 = &g_3;
    unsigned char l_1414 = 1UL;
    unsigned char l_1478 = 2UL;
    unsigned char *l_1485 = &g_53;
    unsigned char * const *l_1484 = &l_1485;
    unsigned char * const **l_1483 = &l_1484;
    unsigned short *l_1496 = &g_150;
    unsigned l_1519 = 0UL;
    int *l_1589 = &g_392;
    int *l_1590 = &l_1174;
    int *l_1591 = &g_106;
    int *l_1592 = (void*)0;
    int *l_1593 = (void*)0;
    int *l_1594 = &g_392;
    int *l_1595 = &l_1176;
    int *l_1596 = &g_131;
    int *l_1597 = (void*)0;
    int *l_1598 = &g_106;
    int *l_1599 = &l_853;
    int *l_1600 = &l_853;
    int *l_1601 = &l_1174;
    int *l_1602 = &g_106;
    int *l_1603 = &l_1176;
    int *l_1604 = &l_1176;
    int *l_1605 = &g_106;
    int *l_1606 = &l_1174;
    int *l_1607 = (void*)0;
    int *l_1608 = (void*)0;
    int *l_1609 = &g_106;
    int *l_1610 = &l_853;
    int *l_1611 = &l_1174;
    int *l_1612 = &l_853;
    int *l_1613 = &l_1174;
    int *l_1614 = &g_392;
    int *l_1615 = &g_392;
    int *l_1616 = &l_1174;
    int *l_1617 = &g_106;
    int *l_1618 = (void*)0;
    int *l_1619 = (void*)0;
    int *l_1620 = &g_106;
    int *l_1621 = &g_392;
    int *l_1622 = (void*)0;
    int *l_1623 = &l_1174;
    int l_1624 = 1L;
    int *l_1625 = &g_106;
    (*g_555) |= ((((l_853 |= (safe_lshift_func_int8_t_s_s(g_290, l_852))) | (l_852 ^ (~(*g_377)))) <= ((*l_854) = 0x44L)) <= 0x4E20L);
    (*g_555) |= (*p_85);
    if (func_100(&l_853, (*g_210), l_853))
    {
        const int *l_856 = (void*)0;
        const int **l_855 = &l_856;
        int **l_857 = &g_838;
        short ***l_863 = (void*)0;
        short ***l_864 = &g_180;
        int ** const l_874 = (void*)0;
        int ** const *l_873 = &l_874;
        int l_939 = 4L;
        unsigned l_960 = 0x2823697FL;
        int l_998 = (-2L);
        int l_1047 = 0x6A2F2393L;
        int l_1055 = 0x1F871E3BL;
        char l_1310 = 1L;
        (*g_210) = (*g_210);
        (*l_855) = p_85;


        if (((**g_376) > ((*g_555) |= func_100(((*l_857) = ((*g_210) = &l_853)), p_86, (safe_div_func_uint16_t_u_u(g_350, ((0xF860701AL >= (l_860 == (void*)0)) || (l_861 == ((*l_864) = &l_862)))))))))
        {
            int *l_867 = (void*)0;
            char l_890 = 0xDFL;
            int l_896 = 0x0E268C1AL;
            unsigned char l_908 = 247UL;
            if ((((**g_376) &= p_84) && ((*g_377) = ((g_113 == (safe_rshift_func_int8_t_s_s(g_393, 2))) && (-8L)))))
            {
                int ** const *l_876 = (void*)0;
                int ** const **l_875 = &l_876;
                int ** const **l_877 = (void*)0;
                int ** const *l_879 = (void*)0;
                int ** const **l_878 = &l_879;
                unsigned char *l_882 = &g_416;
                unsigned short *l_889 = &g_150;
                short *l_891 = &g_21;
                (**l_857) = (((*l_891) ^= (((((*l_889) ^= ((((l_873 = (void*)0) != ((*l_878) = ((*l_875) = &g_210))) == (safe_rshift_func_uint8_t_u_s(((*l_882)++), l_852))) > ((g_797 < 0xA844L) | 0UL))) < 0xCA7AL) & l_890) <= p_84)) < g_797);

                ;
                ;
                ;
                (*g_211) = (*p_86);
                for (g_46 = 0; (g_46 > 15); g_46 = safe_add_func_int32_t_s_s(g_46, 9))
                {
                    int *l_897 = &g_106;
                    int l_898 = 0x8D267D03L;
                    int l_901 = 5L;
                    (*g_210) = (***l_875);
                    l_898 |= ((*l_897) |= ((*p_86) = (((safe_sub_func_int8_t_s_s(((*g_211) < (*p_86)), (g_136 || ((*g_377) <= ((*g_555) = (((void*)0 == l_862) != 0xD9L)))))) & (l_896 != 0x745EL)) ^ g_393)));
                    (*p_86) ^= (+func_100((*g_210), (*g_210), (g_113 = 18446744073709551607UL)));
                    for (g_150 = 0; (g_150 > 56); g_150 = safe_add_func_int16_t_s_s(g_150, 1))
                    {
                        (**l_857) = ((l_901 || (~((*l_854) = (safe_div_func_int32_t_s_s(0x6C787925L, ((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((**g_210), func_100(p_82, (*g_210), l_908))), ((~g_136) >= g_131))) ^ 0xFFL)))))) && p_84);
                        if ((*g_211))
                            break;
                    }
                }
                for (g_21 = (-26); (g_21 > (-10)); g_21 = safe_add_func_uint16_t_u_u(g_21, 9))
                {
                    (*l_857) = (*g_210);
                    (***l_878) = (*g_210);
                }
            }
            else
            {
                for (g_123 = 27; (g_123 < 14); g_123 = safe_sub_func_uint16_t_u_u(g_123, 9))
                {
                    char l_915 = 1L;
                    int l_941 = (-1L);
                    short *l_965 = &g_32;
                    for (l_890 = 0; (l_890 >= 18); l_890 = safe_add_func_uint8_t_u_u(l_890, 5))
                    {
                        int *l_916 = &g_106;
                        int *l_917 = (void*)0;
                        int *l_918 = (void*)0;
                        int *l_919 = &g_106;
                        int *l_920 = &l_853;
                        int *l_921 = &g_106;
                        int *l_922 = &l_853;
                        int *l_923 = (void*)0;
                        int *l_924 = &g_392;
                        int *l_925 = &g_106;
                        int *l_926 = &g_392;
                        int *l_927 = (void*)0;
                        int *l_928 = &l_853;
                        int *l_929 = &g_106;
                        int *l_930 = &g_392;
                        int *l_931 = &l_853;
                        int *l_932 = (void*)0;
                        int *l_933 = (void*)0;
                        int *l_934 = (void*)0;
                        int *l_935 = (void*)0;
                        int *l_936 = &g_131;
                        int *l_937 = &g_131;
                        int *l_938 = &g_131;
                        int *l_940 = &l_939;
                        int *l_942 = &l_939;
                        int *l_943 = &l_939;
                        int *l_944 = &l_939;
                        int *l_945 = &g_131;
                        int *l_946 = &l_939;
                        int *l_947 = (void*)0;
                        int *l_948 = &l_853;
                        int *l_950 = &l_941;
                        int *l_951 = &l_853;
                        int *l_952 = &g_131;
                        int *l_953 = &l_941;
                        int *l_954 = (void*)0;
                        int l_955 = (-1L);
                        int *l_956 = &g_131;
                        int *l_957 = &l_955;
                        int *l_958 = &l_853;
                        int *l_959 = &l_853;
                        ++l_960;
                        if ((*p_83))
                            break;
                        if ((*g_555))
                            break;
                    }
                    (*p_86) |= (func_100(p_82, func_87(func_87(func_89(p_84, (*g_210)))), p_84) | (safe_lshift_func_int16_t_s_u(((void*)0 == l_965), 10)));
                    for (g_150 = 0; (g_150 > 23); g_150 = safe_add_func_int16_t_s_s(g_150, 7))
                    {
                        (*p_86) = ((*g_211) = func_100((*g_210), p_82, l_915));
                        return p_84;




                    }
                }
                (*p_83) |= ((*g_838) &= (*g_555));
            }

            ;
            (*p_82) = (p_84 | (g_791 | 0x95L));
        }
        else
        {
            unsigned short *l_971 = &g_791;
            int l_977 = 0L;
            int l_997 = 0x4F2EAAF2L;
            int l_999 = 0L;
            int l_1038 = (-4L);
            int l_1073 = 0xB398FE90L;
            unsigned char *l_1078 = &g_136;
            int *l_1124 = &l_977;
            unsigned short l_1140 = 65535UL;
            int l_1264 = (-2L);
            short l_1267 = (-1L);
            (*g_211) |= ((safe_sub_func_uint16_t_u_u(((*l_971) = l_970), (func_100((*g_210), ((*l_857) = l_972), ((g_276 > ((*l_856) > (safe_div_func_uint32_t_u_u((0x6B01533FL != (**g_376)), (*g_377))))) == p_84)) >= g_323))) <= l_975);

            ;
            if ((*g_555))
            {
                int l_976 = 0x17B45CD0L;
                int l_978 = 9L;
                int *l_979 = (void*)0;
                int *l_980 = &g_131;
                int *l_981 = &l_978;
                int *l_982 = &l_853;
                int *l_983 = &l_939;
                int *l_984 = &g_131;
                int *l_985 = &g_131;
                int *l_986 = (void*)0;
                int *l_987 = &g_131;
                int *l_988 = &l_978;
                int l_989 = 0x6DFAF9E4L;
                int *l_990 = (void*)0;
                int *l_991 = &l_989;
                int *l_992 = &l_939;
                int *l_993 = &l_989;
                int *l_994 = &l_977;
                int *l_995 = &g_392;
                int *l_996 = (void*)0;
                int *l_1000 = &g_131;
                int *l_1001 = &g_131;
                int *l_1002 = &l_853;
                int *l_1003 = &l_999;
                int *l_1004 = &g_106;
                int *l_1005 = &l_978;
                int *l_1006 = &l_997;
                int *l_1007 = &l_977;
                int *l_1008 = &l_999;
                int *l_1009 = &g_131;
                int *l_1010 = &l_997;
                int *l_1011 = &l_977;
                int *l_1012 = &l_977;
                int *l_1013 = &l_939;
                int *l_1014 = &l_999;
                int *l_1015 = &g_106;
                int *l_1017 = &l_853;
                int *l_1018 = &g_106;
                int *l_1019 = &l_999;
                int *l_1020 = (void*)0;
                int *l_1021 = &l_999;
                int *l_1022 = (void*)0;
                int *l_1023 = &l_989;
                int *l_1024 = &g_392;
                int *l_1025 = &l_853;
                int *l_1026 = (void*)0;
                int *l_1027 = &l_977;
                int *l_1028 = (void*)0;
                int *l_1029 = &l_939;
                int *l_1030 = &l_978;
                int *l_1031 = &l_977;
                int *l_1032 = &l_939;
                int *l_1033 = &l_998;
                int *l_1034 = &l_977;
                int *l_1035 = &l_853;
                int *l_1036 = &l_997;
                int *l_1037 = &g_106;
                int *l_1039 = &g_106;
                int *l_1040 = &l_978;
                int *l_1041 = &g_392;
                int *l_1042 = (void*)0;
                int l_1043 = 0xDD5C3D70L;
                int *l_1045 = &g_131;
                int *l_1046 = &g_131;
                int *l_1048 = &l_978;
                int *l_1049 = &l_853;
                int *l_1050 = (void*)0;
                int *l_1051 = (void*)0;
                int *l_1052 = (void*)0;
                int *l_1053 = &l_1043;
                int *l_1054 = &l_997;
                int *l_1056 = &l_977;
                int *l_1057 = &l_999;
                int *l_1058 = (void*)0;
                ++g_1059;
                (*l_857) = (void*)0;

                ;
            }
            else
            {
                int *l_1062 = &g_131;
                (*l_857) = (void*)0;

                ;
                if (((*g_555) = (l_977 && g_3)))
                {
                    (*g_210) = l_1062;

                    ;
                    for (l_1047 = (-29); (l_1047 != 17); l_1047 = safe_add_func_uint16_t_u_u(l_1047, 9))
                    {
                        (*p_86) ^= ((*g_211) = (**g_210));
                        (*l_972) = func_100(p_83, p_82, p_84);
                    }
                }
                else
                {
                    (*p_86) = (safe_rshift_func_int16_t_s_s(((g_21 < p_84) | (safe_add_func_int8_t_s_s(0x6BL, ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_501 &= (func_100(((*g_210) = (*g_210)), p_83, ((*l_1062) && l_1073)) | 0x7837L)), 3UL)), 0x04L)) >= p_84)))), 12));
                    (**g_210) |= ((*p_86) = (-1L));
                    (**g_210) = (*l_1062);
                }

                ;
                (*p_86) = (*g_211);
                (*g_210) = (p_82 = p_82);

                ;
            }

            ;
            ;
            (*g_210) = (*l_857);

            ;
            if ((p_84 && ((*l_1078)--)))
            {
                int *l_1081 = &l_997;
                int *l_1082 = &g_131;
                int *l_1083 = &l_1055;
                int *l_1084 = &l_977;
                int *l_1085 = &l_853;
                int *l_1086 = &l_939;
                int l_1087 = 0x6417E670L;
                int *l_1088 = &l_998;
                int *l_1089 = &l_1073;
                int *l_1090 = &l_999;
                int *l_1091 = &l_939;
                int *l_1092 = &l_998;
                int *l_1093 = &l_1087;
                int *l_1094 = &g_392;
                int l_1095 = 0x0479E5BDL;
                int *l_1096 = (void*)0;
                int *l_1097 = (void*)0;
                int *l_1098 = &l_1047;
                int *l_1099 = &l_1047;
                int *l_1100 = (void*)0;
                int *l_1101 = &l_998;
                int *l_1102 = &l_853;
                ++l_1103;
                for (l_939 = 0; (l_939 > (-23)); --l_939)
                {
                    unsigned l_1110 = 1UL;
                    (*l_855) = p_85;
                    for (g_548 = 22; (g_548 <= 11); --g_548)
                    {
                        l_1110++;
                    }
                    (*l_857) = (*g_210);
                    (*l_1093) ^= (safe_rshift_func_uint16_t_u_u((0x58415FE6L > ((*g_377) = (p_84 && l_997))), (safe_lshift_func_int16_t_s_s(((*l_856) && (*l_1098)), p_84))));
                }
                return p_84;


            }
            else
            {
                char *l_1121 = &g_1016;
                int *l_1127 = (void*)0;
                int l_1209 = 0L;
                int l_1215 = (-1L);
                int l_1217 = (-1L);
                short l_1257 = 0L;
                unsigned char **l_1384 = &l_1078;
                unsigned *l_1385 = &g_113;
                if (((*g_555) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((~g_150), p_84)), (l_1121 != (void*)0)))))
                {
                    int l_1204 = 0L;
                    (*p_82) = (safe_mul_func_int8_t_s_s(0xDEL, (func_100(&l_999, p_86, (*l_1124)) ^ ((void*)0 != &g_180))));
                    for (g_790 = (-13); (g_790 < (-18)); --g_790)
                    {
                        (*g_210) = (*g_210);
                        (*l_857) = (*g_210);
                    }
                    if ((*p_86))
                    {
                        (*l_972) = (((safe_sub_func_uint32_t_u_u((p_84 & 9UL), (safe_mul_func_int16_t_s_s(p_84, 0x8EEBL)))) | (p_83 != (void*)0)) < 0x60L);
                        (*l_1124) |= (safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s(((*l_1121) &= ((*l_854) ^= g_1044)), (safe_add_func_int16_t_s_s((*l_972), (safe_rshift_func_int16_t_s_s(l_1140, 5)))))), (*p_82)));
                        (*l_972) = (l_856 == l_856);
                        (*l_857) = p_83;


                    }
                    else
                    {
                        char l_1143 = 0xB6L;
                        int *l_1144 = (void*)0;
                        int *l_1145 = &l_1055;
                        int *l_1146 = &l_998;
                        int l_1147 = (-5L);
                        int *l_1148 = (void*)0;
                        char l_1149 = 0x43L;
                        int *l_1150 = &l_977;
                        int *l_1151 = &l_1038;
                        int *l_1152 = &g_106;
                        int *l_1153 = &l_998;
                        int *l_1154 = &l_999;
                        int *l_1155 = &l_999;
                        int *l_1156 = &l_1073;
                        int *l_1157 = &l_939;
                        int l_1158 = 0x134C94AEL;
                        int *l_1159 = &l_853;
                        int *l_1160 = (void*)0;
                        int *l_1161 = &l_977;
                        int *l_1162 = &l_1073;
                        int *l_1163 = &l_1073;
                        int *l_1164 = (void*)0;
                        int *l_1165 = (void*)0;
                        int *l_1166 = &g_106;
                        int *l_1167 = &l_1147;
                        int *l_1168 = &g_106;
                        int *l_1169 = &g_106;
                        int *l_1170 = &l_1047;
                        int *l_1171 = &l_997;
                        int *l_1172 = &g_392;
                        int *l_1173 = (void*)0;
                        int *l_1175 = &l_1158;
                        int *l_1177 = &l_1174;
                        int *l_1178 = &l_1147;
                        int *l_1179 = &l_853;
                        int *l_1180 = &g_131;
                        int *l_1181 = &l_1174;
                        int *l_1182 = &l_853;
                        int *l_1183 = (void*)0;
                        int *l_1184 = (void*)0;
                        int *l_1185 = &l_1174;
                        int l_1186 = (-1L);
                        int *l_1187 = &g_131;
                        int *l_1188 = &l_1158;
                        int *l_1189 = &l_1038;
                        int *l_1190 = &l_1147;
                        int *l_1191 = &l_977;
                        int *l_1192 = &g_131;
                        int *l_1193 = &l_939;
                        int *l_1194 = &l_1186;
                        int *l_1195 = &l_1055;
                        int *l_1196 = &g_131;
                        int *l_1197 = &l_977;
                        int *l_1198 = &g_392;
                        int *l_1199 = &l_977;
                        int *l_1200 = (void*)0;
                        int *l_1201 = (void*)0;
                        int *l_1202 = &l_853;
                        int *l_1203 = &l_1174;
                        int *l_1205 = &l_1047;
                        int *l_1206 = &l_853;
                        int *l_1207 = &l_939;
                        int *l_1208 = &l_999;
                        int *l_1210 = (void*)0;
                        int *l_1211 = &l_853;
                        int *l_1212 = &l_939;
                        int *l_1213 = &l_1176;
                        int *l_1214 = &l_1038;
                        int *l_1216 = &l_1055;
                        int *l_1218 = &g_392;
                        int *l_1219 = &g_392;
                        int *l_1220 = &l_1174;
                        int *l_1221 = &l_1176;
                        int *l_1222 = (void*)0;
                        int *l_1223 = &l_1073;
                        int *l_1224 = &l_1209;
                        int *l_1225 = &l_1147;
                        int *l_1226 = &l_1055;
                        int *l_1227 = &l_1217;
                        int *l_1228 = (void*)0;
                        int *l_1229 = &l_1158;
                        g_1230++;
                        (*l_855) = p_82;

                        ;
                    }



                }
                else
                {
                    unsigned *l_1261 = &l_1103;
                    unsigned **l_1262 = &l_1261;
                    int *l_1263 = (void*)0;
                    short *l_1265 = &g_501;
                    short *l_1266 = &g_276;
                    int *l_1268 = &l_1038;
                    int *l_1269 = &l_1047;
                    int *l_1270 = (void*)0;
                    int *l_1271 = &l_977;
                    int *l_1272 = &l_1217;
                    int *l_1273 = &l_1174;
                    int *l_1274 = &l_1047;
                    int *l_1275 = &l_1073;
                    int *l_1276 = &g_131;
                    int *l_1277 = &l_977;
                    int *l_1278 = (void*)0;
                    int *l_1279 = &l_1055;
                    int *l_1280 = &l_1174;
                    int *l_1281 = &l_998;
                    int *l_1282 = &l_977;
                    int *l_1283 = &l_939;
                    int *l_1284 = &l_1215;
                    int *l_1285 = &l_999;
                    int *l_1286 = &g_106;
                    int *l_1287 = &l_998;
                    int *l_1288 = &l_999;
                    int *l_1289 = &l_997;
                    int *l_1290 = &g_106;
                    int *l_1291 = &l_1176;
                    int *l_1292 = &l_1215;
                    int *l_1293 = &l_853;
                    int *l_1294 = &l_1038;
                    int *l_1295 = (void*)0;
                    int *l_1296 = &l_1174;
                    int *l_1297 = &l_997;
                    int *l_1298 = &l_1047;
                    int *l_1299 = (void*)0;
                    int *l_1300 = &l_1047;
                    int *l_1301 = &l_1055;
                    int *l_1302 = &l_1047;
                    int *l_1303 = &g_131;
                    int *l_1304 = &l_998;
                    int *l_1305 = &l_1073;
                    int *l_1306 = &l_1038;
                    int *l_1307 = &l_977;
                    int *l_1308 = &l_1215;
                    int *l_1309 = &l_1217;
                    int *l_1311 = &l_1055;
                    int *l_1312 = &l_977;
                    int *l_1313 = (void*)0;
                    int *l_1314 = (void*)0;
                    int *l_1315 = &l_999;
                    int *l_1316 = &l_853;
                    int *l_1317 = &g_392;
                    int *l_1318 = &l_853;
                    int *l_1319 = (void*)0;
                    int *l_1320 = &l_977;
                    int *l_1321 = &l_997;
                    int *l_1322 = &l_1073;
                    int *l_1323 = &l_998;
                    int *l_1324 = &l_1055;
                    int *l_1325 = &g_106;
                    int *l_1326 = &l_1176;
                    int *l_1327 = &l_1176;
                    int *l_1328 = &l_1073;
                    int *l_1329 = (void*)0;
                    int *l_1330 = &l_939;
                    int *l_1331 = &l_1174;
                    int *l_1332 = &l_1215;
                    int *l_1333 = &l_1073;
                    int *l_1334 = &l_853;
                    int *l_1335 = &g_392;
                    int *l_1336 = &l_1176;
                    int *l_1337 = &l_939;
                    int *l_1338 = &g_131;
                    int *l_1339 = &l_1217;
                    int *l_1340 = &l_1055;
                    int *l_1341 = &l_1174;
                    int *l_1342 = (void*)0;
                    int *l_1343 = &l_998;
                    int *l_1344 = &l_1038;
                    int l_1345 = 0x9898DC67L;
                    int *l_1346 = (void*)0;
                    int *l_1347 = &g_131;
                    int *l_1348 = &l_998;
                    int *l_1349 = &l_1215;
                    int *l_1350 = &l_1217;
                    int l_1351 = 0x3ACC63EBL;
                    int *l_1352 = &l_977;
                    int *l_1353 = &l_1176;
                    int *l_1354 = &l_998;
                    int *l_1355 = &l_1174;
                    int *l_1356 = &g_131;
                    int *l_1357 = &g_106;
                    int l_1358 = 5L;
                    int *l_1359 = &l_1176;
                    int *l_1360 = &l_999;
                    int *l_1361 = &l_998;
                    int *l_1362 = (void*)0;
                    int *l_1363 = &l_1047;
                    int *l_1364 = &l_998;
                    int *l_1365 = (void*)0;
                    int *l_1366 = &l_999;
                    int *l_1367 = &l_1358;
                    int *l_1368 = &l_853;
                    int *l_1369 = &l_977;
                    int *l_1370 = &l_1055;
                    int *l_1371 = &l_853;
                    (*l_855) = (*g_210);

                    ;
                    if ((*p_82))
                    {
                        (*l_855) = p_85;


                        (*l_855) = (*l_855);
                    }
                    else
                    {
                        char l_1239 = 0x83L;
                        int ***l_1240 = &l_857;
                        int ****l_1241 = &l_860;
                        unsigned *l_1255 = &l_960;
                        unsigned *l_1256 = &l_852;
                        short *l_1258 = &g_21;
                        (**l_1240) = &l_1073;

                        ;
                        (*p_82) ^= ((**l_857) = (safe_rshift_func_int8_t_s_u(((*l_1121) = g_106), 0)));
                        (**l_857) = (safe_rshift_func_int16_t_s_u(((*l_1258) = ((safe_mul_func_uint8_t_u_u((((*l_1255) &= ((((*l_1124) && ((((~(safe_lshift_func_int8_t_s_s(((*g_838) & (**g_376)), g_778))) & (*p_85)) >= (*g_377)) && (**g_430))) != 4UL) ^ 0xF081L)) != 0x67ECD44DL), 254UL)) > (*p_83))), 11));
                    }

                    ;

                    (*p_86) = ((*l_1124) = (*l_1124));
                    --g_1372;
                }



                (*p_86) &= func_100(p_86, p_82, ((*l_1385) = ((((*g_377) = (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((void*)0 == l_1379), (safe_lshift_func_int8_t_s_s(func_100(((*l_857) = p_86), p_82, (safe_sub_func_int8_t_s_s((((l_1384 == &g_431) | 0x57L) ^ (*p_82)), (*g_431)))), 5)))), (*l_1124))) & p_84) ^ (*l_1124))) > 0L) > 4294967295UL)));


                (*l_972) ^= func_100((*g_210), (p_82 = p_86), ((*l_1385) |= (safe_rshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((((*l_1124) < ((*l_1124) <= (safe_div_func_int32_t_s_s(((0x5AB0L | (safe_div_func_uint32_t_u_u(p_84, (((**l_1384)++) | p_84)))) != (*l_1246)), p_84)))) & 0x999F81ACL), p_84)) & 5L), 3))));


                for (g_158 = 23; (g_158 != 29); g_158++)
                {
                    (*l_857) = l_1400;

                    ;
                    (*p_82) = (0x78L && p_84);
                    if ((*l_1400))
                        break;
                }


            }




        }

        ;
        ;



        ;
    }
    else
    {
        int **l_1401 = &g_555;
        int ***l_1402 = &l_1401;
        int l_1416 = 3L;
        (*l_1402) = l_1401;
        if (((((*l_1402) = &p_86) == &p_86) | g_123))
        {
            unsigned l_1413 = 1UL;
            int l_1428 = 0x86410CA3L;
            if ((*p_82))
            {
                char *l_1409 = &g_393;
                char *l_1410 = &g_1044;
                char **l_1411 = &l_854;
                unsigned char *l_1412 = &g_136;
                (*l_972) ^= 0x59BACD2BL;
                (*p_86) = (safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(((l_1409 = &p_84) != ((*l_1411) = l_1410)), 4)) & ((*l_1412) = (**l_1401))), l_1413)), 0));

                ;
                ;
            }
            else
            {
                unsigned l_1415 = 4294967289UL;
                int l_1429 = 1L;
                int * const *l_1474 = &l_1246;
                int * const **l_1473 = &l_1474;
                int * const *** const l_1472 = &l_1473;
                char l_1476 = 0x63L;
                if (l_1414)
                {
                    (*g_211) = (**g_210);
                }
                else
                {
                    int *l_1417 = &l_1174;
                    int *l_1418 = (void*)0;
                    int *l_1419 = &g_131;
                    int *l_1420 = &l_853;
                    int *l_1421 = (void*)0;
                    int l_1422 = 0L;
                    int *l_1423 = (void*)0;
                    int *l_1424 = &l_853;
                    int *l_1425 = &g_131;
                    int *l_1426 = (void*)0;
                    int *l_1427 = &l_853;
                    int *l_1430 = &g_392;
                    int *l_1431 = &l_853;
                    int *l_1432 = &l_1422;
                    int *l_1433 = &l_1176;
                    int *l_1434 = (void*)0;
                    int *l_1435 = &g_392;
                    int *l_1436 = (void*)0;
                    int *l_1437 = &l_1416;
                    int *l_1438 = (void*)0;
                    int *l_1439 = &l_1416;
                    int *l_1440 = &l_1422;
                    int *l_1441 = &l_1174;
                    int *l_1442 = (void*)0;
                    int *l_1443 = &l_1429;
                    int *l_1444 = &l_1416;
                    int *l_1445 = &l_1429;
                    int *l_1446 = &l_1428;
                    int *l_1447 = (void*)0;
                    int *l_1448 = &l_1416;
                    int *l_1449 = (void*)0;
                    int l_1450 = 0xA98EE99DL;
                    int *l_1451 = (void*)0;
                    int *l_1452 = &l_1422;
                    int *l_1453 = &l_1416;
                    int *l_1454 = (void*)0;
                    int *l_1455 = &g_392;
                    int *l_1456 = &l_1416;
                    int *l_1458 = (void*)0;
                    (*p_83) |= func_100(((*l_1401) = p_86), (*g_210), l_1415);
                    g_1459--;
                    if ((((safe_rshift_func_uint8_t_u_u(l_1429, (*g_431))) & 0xDA87L) != 5UL))
                    {
                        unsigned l_1464 = 0UL;
                        l_1464++;
                        (*l_1448) = (*p_85);
                        (*g_210) = (*g_210);
                        (***l_1402) |= (*l_1246);
                    }
                    else
                    {
                        unsigned char *l_1471 = &g_416;
                        int ****l_1475 = &l_860;
                        (*l_1444) = ((**g_430) > (((*g_377) = (safe_lshift_func_int8_t_s_u((func_100((*g_210), (*g_210), (((*l_1471) = (safe_sub_func_uint32_t_u_u((g_21 == l_1413), (*p_82)))) || 0L)) >= (l_1472 != l_1475)), p_84))) < 4294967295UL));
                        (*l_1419) = (!(**g_210));
                        (*g_838) ^= (g_136 <= 1UL);
                    }
                }
                l_1476 ^= (*p_85);
            }

            ;
        }
        else
        {
            int *l_1477 = &g_131;
            unsigned char **l_1488 = &l_1485;
            unsigned char ***l_1487 = &l_1488;
            l_1478++;
            for (g_673 = 0; (g_673 <= 0); g_673 = safe_add_func_int8_t_s_s(g_673, 7))
            {
                unsigned char * const ***l_1486 = &l_1483;
                unsigned char ****l_1489 = &l_1487;
                (*g_211) = (((*l_1486) = l_1483) == ((*l_1489) = l_1487));
            }
        }

        ;
        ;
        for (g_125 = (-11); (g_125 <= (-7)); ++g_125)
        {
            char **l_1508 = &l_854;
            short *l_1518 = &g_501;
            int l_1561 = 0xB9272EE5L;
            unsigned **l_1584 = &g_377;
            (**g_210) ^= (safe_mod_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(g_290, 0x6CBAL)) || (l_1496 != (void*)0)), 0x00AD0D63L));
        }
        (*g_210) = ((*l_1401) = p_83);


    }

    ;



    ;
    g_1626--;
    return p_84;




}







static int * func_87(int * p_88)
{
    unsigned short l_843 = 65529UL;
    char *l_846 = (void*)0;
    char *l_847 = &g_796;
    int l_848 = 3L;
    int *l_849 = &g_131;
    l_848 = ((*g_838) = (safe_add_func_int8_t_s_s(l_843, (safe_mod_func_int8_t_s_s(g_150, ((*l_847) = 0xAEL))))));
    return l_849;


}







static int * func_89(char p_90, int * p_91)
{
    int *l_107 = &g_106;
    int l_840 = (-1L);
    (*l_107) = (*p_91);
    (*g_555) &= (*l_107);
    (*g_838) ^= (*l_107);
    return p_91;


}







static char func_100(int * p_101, int * p_102, unsigned p_103)
{
    int *l_104 = (void*)0;
    int *l_105 = &g_106;
    (*l_105) |= (*p_102);
    return (*l_105);
}







static int * func_108(unsigned char p_109)
{
    int *l_112 = &g_3;
    short ***l_299 = (void*)0;
    int l_334 = 6L;
    int l_375 = (-7L);
    const unsigned char * const *l_429 = (void*)0;
    char *l_438 = (void*)0;
    char **l_439 = &l_438;
    int *l_444 = &g_392;
    unsigned short l_475 = 0xC1F5L;
    short *l_605 = &g_501;
    int *l_839 = &g_131;
    if ((safe_rshift_func_uint16_t_u_u(((&g_3 != l_112) >= (g_113 = g_21)), g_46)))
    {
        unsigned char l_114 = 0x8FL;
        unsigned *l_122 = &g_123;
        char *l_124 = &g_125;
        int *l_126 = &g_106;
        int **l_132 = &l_112;
        (*l_126) ^= ((g_46 == l_114) & (!(safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((*l_124) = ((((safe_unary_minus_func_uint16_t_u(65535UL)) && p_109) == p_109) != ((0x55L == (safe_mod_func_int32_t_s_s(p_109, ((*l_122) = l_114)))) >= g_3))), l_114)), g_113))));
        for (g_113 = 13; (g_113 < 45); g_113 = safe_add_func_uint32_t_u_u(g_113, 9))
        {
            int **l_129 = &l_112;
            int *l_130 = &g_131;
            (*l_129) = &g_3;
            if ((**l_129))
                break;
            if (g_106)
                continue;
            (*l_130) = ((*l_126) = func_100((*l_129), l_112, g_125));
        }
        (*l_132) = l_112;
        for (g_131 = 0; (g_131 > 10); ++g_131)
        {
            int *l_135 = &g_131;
            g_136 &= func_100(((*l_132) = l_135), l_135, p_109);

            ;
        }

        ;
    }
    else
    {
        char l_137 = (-1L);
        int *l_138 = &g_106;
        unsigned short *l_149 = &g_150;
        unsigned char *l_155 = &g_136;
        unsigned short *l_156 = (void*)0;
        unsigned short *l_157 = &g_158;
        char l_242 = 0x77L;
        int l_295 = 1L;
        (*l_138) = l_137;
        if (((((*l_138) = (g_32 < (safe_lshift_func_uint8_t_u_u((~p_109), (*l_138))))) < (((*l_157) ^= (safe_sub_func_uint32_t_u_u((((*l_155) &= ((g_123 & 0xCE9FL) > (safe_lshift_func_uint16_t_u_u(((*l_149)--), (safe_add_func_uint16_t_u_u(g_53, 0xFD67L)))))) != (-1L)), p_109))) & 0L)) & 0x70L))
        {
            char l_163 = 0xE3L;
            unsigned *l_177 = &g_123;
            if (p_109)
            {
                char l_170 = 0xD7L;
                short *l_171 = &g_46;
                int *l_172 = &g_131;
                (*l_172) = ((*l_138) = (safe_div_func_int8_t_s_s((!(*l_138)), ((g_106 || ((safe_sub_func_uint16_t_u_u(g_106, (l_163 ^ p_109))) | (~((*l_171) = ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((*l_112), ((*l_112) < (*l_138)))), (safe_sub_func_uint8_t_u_u(g_21, l_170)))) < l_170))))) ^ g_136))));
            }
            else
            {
                unsigned *l_176 = &g_123;
                unsigned **l_175 = &l_176;
                int l_188 = 0xC2A0AA59L;
                (*l_138) |= ((p_109 && 65535UL) || (((*l_175) = l_138) == l_177));

                ;
                (*l_138) = p_109;
                for (g_125 = (-1); (g_125 != (-23)); g_125--)
                {
                    short ***l_181 = &g_180;
                    int **l_191 = (void*)0;
                    int **l_192 = &l_112;
                    int **l_193 = (void*)0;
                    int **l_194 = &l_138;
                    (*l_181) = g_180;
                    if ((((((safe_add_func_int32_t_s_s(((p_109 > (g_3 | p_109)) & (safe_mul_func_int16_t_s_s(0xE414L, (251UL < ((*l_155) = l_188))))), p_109)) < g_150) >= g_131) > p_109) <= 0UL))
                    {
                        int **l_189 = &l_112;
                        (*l_189) = &g_3;

                        ;
                    }
                    else
                    {
                        unsigned short l_190 = 0x774FL;
                        l_190 |= p_109;
                        if ((*l_138))
                            break;
                        (*l_138) |= l_163;
                    }
                    (*l_194) = ((*l_192) = &g_106);

                    ;
                }

                ;
            }

            ;
            g_131 = p_109;
            (*l_138) &= p_109;
        }
        else
        {
            unsigned char **l_199 = (void*)0;
            unsigned char ***l_198 = &l_199;
            int *l_213 = &g_131;
            int l_282 = 0x5BC84996L;
            short *l_324 = &g_21;
            unsigned **l_378 = &g_377;
            for (g_53 = 0; (g_53 <= 53); g_53 = safe_add_func_uint32_t_u_u(g_53, 2))
            {
                unsigned char l_197 = 0xA0L;
                (*l_138) = ((((l_197 && (((+g_106) <= p_109) >= 0xCE22L)) ^ g_158) & g_32) < (&g_180 != &g_180));
            }
            (*l_198) = &l_155;

            ;
            if ((*l_112))
            {
                return l_138;


            }
            else
            {
                char l_202 = 0xEDL;
                int *l_203 = &g_131;
                int l_401 = 1L;
                unsigned char **l_427 = &l_155;
                unsigned char ***l_428 = &l_427;
                unsigned *l_433 = &g_113;
                if (p_109)
                {
                    int *l_204 = (void*)0;
                    unsigned *l_222 = &g_123;
                    const unsigned char l_318 = 0xD0L;
                    short *l_325 = &g_46;
                    if (((safe_sub_func_int32_t_s_s((*l_138), p_109)) >= (((*l_112) == g_125) >= l_202)))
                    {
                        unsigned l_207 = 0UL;
                        int *l_212 = (void*)0;
                        (*l_203) = (*l_112);
                        (*g_210) = l_112;

                        ;
                        l_212 = l_212;
                        return l_213;


                    }
                    else
                    {
                        unsigned char l_215 = 253UL;
                        (*g_211) = ((safe_unary_minus_func_int8_t_s(0L)) >= l_215);
                    }
                    if (((((***l_198) ^= ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((*l_213), 3)) != (0xD3E5EC2FL ^ 0L)), (*l_112))) == ((*l_213) | ((*l_222) = (l_156 == l_156))))) <= (*l_138)) | (*g_211)))
                    {
                        int *l_223 = &g_106;
                        int *l_224 = (void*)0;
                        int *l_225 = &g_131;
                        int *l_226 = &g_106;
                        int *l_227 = &g_131;
                        int *l_228 = (void*)0;
                        int *l_229 = &g_131;
                        int *l_230 = (void*)0;
                        int *l_231 = &g_106;
                        int *l_232 = &g_131;
                        int *l_233 = &g_106;
                        int *l_234 = &g_131;
                        int *l_235 = &g_131;
                        int *l_236 = &g_131;
                        int *l_237 = &g_131;
                        int *l_238 = &g_131;
                        int l_239 = 0L;
                        int *l_240 = &g_106;
                        int *l_241 = &g_131;
                        int *l_243 = (void*)0;
                        int *l_244 = &g_131;
                        int *l_245 = &g_106;
                        int *l_246 = &g_131;
                        int *l_247 = &g_131;
                        int *l_248 = &g_131;
                        int *l_249 = &l_239;
                        int *l_250 = (void*)0;
                        int *l_251 = &g_131;
                        int l_252 = 0x5778D356L;
                        int *l_253 = &g_106;
                        int *l_254 = (void*)0;
                        int *l_255 = &l_239;
                        int *l_256 = &g_131;
                        int *l_257 = &g_106;
                        int *l_258 = &g_106;
                        int *l_259 = &g_106;
                        int *l_260 = &l_239;
                        int *l_261 = &l_239;
                        int *l_262 = (void*)0;
                        int *l_263 = &l_252;
                        int *l_264 = &l_239;
                        int *l_265 = &g_106;
                        int *l_266 = (void*)0;
                        int *l_267 = &l_252;
                        int *l_268 = (void*)0;
                        int *l_269 = &l_252;
                        int *l_270 = &g_106;
                        int *l_271 = &g_131;
                        int *l_272 = &l_252;
                        int *l_273 = &g_106;
                        int *l_274 = (void*)0;
                        int *l_275 = &g_131;
                        int *l_277 = &g_131;
                        int *l_278 = &g_131;
                        int *l_279 = &l_252;
                        int *l_280 = (void*)0;
                        int *l_281 = &g_131;
                        int *l_283 = (void*)0;
                        int *l_284 = &l_239;
                        int *l_285 = &g_131;
                        int *l_286 = (void*)0;
                        int *l_288 = &g_106;
                        int *l_289 = &l_252;
                        short *l_298 = &g_21;
                        --g_290;
                        (*l_244) |= (*l_112);
                        (*l_226) = (~(~((safe_lshift_func_int8_t_s_s(p_109, 2)) > ((0x8842L <= l_295) == ((~(safe_rshift_func_int8_t_s_u(((0x497F6437L == (*g_211)) && ((void*)0 != &g_290)), 0))) | (*l_213))))));
                        (*l_267) = (func_100((*g_210), &l_252, p_109) ^ ((*l_298) = (*l_227)));
                    }
                    else
                    {
                        (*l_213) = 1L;
                        (*l_138) ^= (((void*)0 != l_299) || (safe_mod_func_uint8_t_u_u(246UL, p_109)));
                    }
                    if ((safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(g_158, ((*l_222) = (safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(p_109, (5UL <= (*l_213)))) != ((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((*l_149) = g_113), (safe_add_func_uint32_t_u_u((func_100(&l_282, l_203, (safe_lshift_func_uint8_t_u_s(247UL, 5))) ^ (*l_112)), 1UL)))), g_123)) <= p_109)), (*l_203)))))) >= l_318), (*l_213))))
                    {
                        short *l_337 = &g_276;
                        short **l_338 = &l_324;
                        const int l_339 = 0x596266F9L;
                        int *l_340 = &l_282;
                        (*l_213) ^= (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((*l_138), g_136)), (g_323 & ((l_325 = l_324) != &g_276))));

                        ;
                        (*l_340) ^= (safe_lshift_func_int16_t_s_s((p_109 >= (0x7B41478FL | ((safe_mod_func_uint16_t_u_u(((*l_157) = ((safe_lshift_func_int16_t_s_s(0L, ((!((*l_155) = (safe_lshift_func_int8_t_s_u((!g_287), (l_334 < (((*l_213) = (*g_211)) == 1UL)))))) >= (safe_add_func_int32_t_s_s((l_337 == ((*l_338) = l_157)), g_32))))) > g_158)), l_339)) && (*l_112)))), (*l_138)));

                        ;
                    }
                    else
                    {
                        int *l_341 = &l_334;
                        int *l_342 = (void*)0;
                        int *l_343 = (void*)0;
                        int *l_344 = &l_334;
                        int *l_345 = &l_282;
                        int *l_346 = &l_334;
                        int *l_347 = &l_334;
                        int *l_348 = &l_295;
                        int *l_349 = &g_106;
                        (*g_210) = (*g_210);
                        g_350--;
                    }

                    ;
                    ;
                }
                else
                {
                    int ***l_353 = (void*)0;
                    int **l_355 = &l_213;
                    int ***l_354 = &l_355;
                    unsigned char *l_361 = &g_53;
                    unsigned char **l_360 = &l_361;
                    int *l_362 = &l_334;
                    int l_397 = 2L;
                    (*l_362) |= ((((((*l_354) = &l_203) != (void*)0) || (*l_138)) ^ ((*l_324) = ((safe_rshift_func_int16_t_s_u(g_21, (safe_mul_func_int8_t_s_s((((*l_203) &= 0x9E8B4D24L) < (((*l_199) = &p_109) != ((*l_360) = &p_109))), (p_109 && p_109))))) >= 0xCFAD4D3FL))) || g_276);

                    ;
                    ;
                    ;
                    if (((**g_210) = (**g_210)))
                    {
                        unsigned *l_365 = &g_123;
                        int l_366 = (-1L);
                        unsigned *l_367 = &g_368;
                        int l_383 = 0x84F8C2A3L;
                        (**l_355) &= ((safe_mod_func_uint32_t_u_u(((*l_365) = p_109), (((*l_367) = (0x523AF13DL && l_366)) ^ (*l_112)))) && ((*g_211) >= (safe_add_func_uint16_t_u_u(p_109, (safe_div_func_int16_t_s_s(0xEAF4L, (safe_sub_func_int8_t_s_s(0x37L, (((l_375 ^= (*l_362)) > p_109) ^ (*g_211))))))))));
                        (*g_211) &= ((g_376 == l_378) && (((p_109 || (!((safe_mod_func_uint8_t_u_u(((void*)0 != &g_350), (safe_mod_func_uint8_t_u_u(((l_366 != (l_383 |= p_109)) & (((*l_365) &= p_109) <= 0x6FF5385EL)), 0x03L)))) ^ 0x1DCAL))) > g_287) & 2UL));
                        (*l_362) |= (255UL | l_366);
                        (**g_210) = p_109;
                    }
                    else
                    {
                        int *l_384 = (void*)0;
                        int *l_385 = &g_131;
                        int *l_386 = &l_295;
                        int *l_387 = (void*)0;
                        int *l_388 = &g_131;
                        int *l_389 = &l_295;
                        int *l_390 = &l_282;
                        int *l_391 = &g_106;
                        int *l_394 = &g_131;
                        int *l_395 = (void*)0;
                        int *l_396 = (void*)0;
                        int *l_398 = &l_397;
                        int *l_399 = &g_392;
                        int *l_400 = &l_397;
                        int *l_402 = &l_375;
                        int *l_403 = &g_131;
                        int *l_404 = &l_401;
                        int *l_405 = &g_106;
                        int *l_406 = &g_131;
                        int *l_407 = &g_131;
                        int *l_408 = &g_392;
                        int *l_409 = &g_392;
                        int *l_410 = (void*)0;
                        int *l_411 = &l_282;
                        int *l_412 = (void*)0;
                        int l_413 = 0xBECB08BCL;
                        int *l_414 = (void*)0;
                        int *l_415 = &g_392;
                        (*g_210) = (*g_210);
                        ++g_416;
                    }
                }

                ;
                ;
                (*l_213) = ((safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((((*g_377) | (safe_add_func_uint16_t_u_u(0x881FL, (safe_add_func_uint8_t_u_u((((((*l_428) = ((*l_198) = l_427)) != (g_430 = l_429)) & func_100(&l_282, &l_295, ((*l_433) |= 0xB6349930L))) <= 0xA5108633L), (*g_431)))))) | 0x7CL), p_109)), g_276)) ^ p_109);

                ;
                (*g_210) = (void*)0;

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
        (*l_138) ^= (+p_109);
        (*l_138) = (*l_112);
    }

    ;
    ;
    ;
    (*l_444) ^= ((safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((*l_439) = l_438) != (void*)0), (safe_mod_func_int32_t_s_s((p_109 && ((254UL == (l_375 = 0xF2L)) ^ ((0L != ((*l_112) <= p_109)) || (g_32 | 4UL)))), p_109)))), (*l_112))) | p_109);
    if ((*l_112))
    {
        int *l_445 = (void*)0;
        return l_445;


    }
    else
    {
        int *l_446 = &g_131;
        int l_447 = 2L;
        int *l_448 = &g_131;
        int *l_449 = &l_447;
        int *l_450 = &l_375;
        int *l_451 = (void*)0;
        int *l_452 = &l_334;
        int *l_453 = (void*)0;
        int *l_454 = &l_375;
        int *l_455 = &l_375;
        int l_456 = 0x1898FDDDL;
        int *l_457 = (void*)0;
        int *l_458 = &g_106;
        int *l_459 = &g_392;
        int *l_460 = (void*)0;
        int *l_461 = &l_334;
        int l_462 = 0x89655006L;
        int *l_463 = &g_392;
        int *l_464 = &l_334;
        int *l_465 = &l_334;
        int *l_466 = (void*)0;
        int *l_467 = (void*)0;
        int *l_468 = &g_106;
        int *l_469 = (void*)0;
        int *l_470 = &l_447;
        int *l_471 = &g_392;
        int *l_472 = &g_392;
        int *l_473 = (void*)0;
        int *l_474 = &g_106;
        unsigned l_480 = 4294967295UL;
        int l_542 = 0xB9C534AEL;
        unsigned l_564 = 1UL;
        char l_601 = 1L;
        short *l_604 = &g_46;
        (*l_446) = ((*l_444) = p_109);
        ++l_475;
        for (l_456 = 0; (l_456 == 10); l_456++)
        {
            int *l_486 = &l_447;
            int l_516 = (-2L);
            int l_523 = 7L;
            int l_536 = 0L;
            int l_537 = 0x321761CEL;
            int l_540 = 0L;
        }
        if ((*l_112))
        {
            unsigned l_594 = 4294967295UL;
            short *l_600 = &g_501;
            short **l_599 = &l_600;
            int *l_622 = &l_447;
            unsigned char ** const *l_631 = (void*)0;
            unsigned **l_661 = &g_377;
            int l_720 = 0x3793E1D8L;
            int l_734 = 1L;
            int l_780 = 0x56A687C3L;
            l_601 |= ((func_100(((*g_210) = (*g_210)), &l_334, g_3) >= ((*l_444) = (safe_div_func_uint32_t_u_u((p_109 >= (g_501 || (0x7B9CL ^ l_594))), (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((l_599 = g_180) != (void*)0), p_109)) == 0x5FL), (*l_470))))))) >= 0xF1B10E3CL);

            ;
            for (g_150 = 0; (g_150 >= 52); ++g_150)
            {
                unsigned char l_617 = 9UL;
                unsigned **l_660 = &g_377;
                int **l_662 = (void*)0;
                int l_710 = 0x2D356A58L;
                int l_711 = 0L;
                short ***l_715 = &l_599;
                int l_761 = 0xC6188C96L;
                int l_773 = 2L;
                (*l_454) |= ((*l_458) = ((l_604 != l_605) & 65527UL));
                for (g_136 = 16; (g_136 != 10); g_136 = safe_sub_func_uint16_t_u_u(g_136, 9))
                {
                    (*g_210) = (*g_210);
                }
                for (g_501 = 0; (g_501 == (-2)); g_501--)
                {
                    int *l_614 = &g_3;
                    (*l_455) = (safe_sub_func_uint16_t_u_u(0x0A5BL, ((safe_mod_func_uint32_t_u_u((*l_112), (p_109 && (((safe_lshift_func_int8_t_s_u(g_350, p_109)) <= 65535UL) < l_617)))) || l_617)));
                }
                if (((*l_474) = (safe_sub_func_uint32_t_u_u(((**g_376)--), ((*l_470) < p_109)))))
                {
                    unsigned char l_632 = 1UL;
                    int l_679 = (-1L);
                    ++l_632;
                    for (g_106 = (-14); (g_106 != 26); g_106 = safe_add_func_uint16_t_u_u(g_106, 5))
                    {
                        const unsigned short l_639 = 65535UL;
                        int *l_666 = &l_334;
                        int *l_667 = (void*)0;
                        int *l_668 = &g_131;
                        int l_669 = (-7L);
                        int *l_670 = &l_456;
                        int *l_671 = &l_447;
                        int *l_672 = &l_462;
                        int *l_674 = &l_669;
                        int *l_675 = &l_334;
                        int *l_676 = &l_375;
                        int *l_677 = &l_542;
                        int *l_678 = &l_334;
                        int *l_680 = &g_392;
                        int *l_681 = &l_375;
                        (*l_446) &= (safe_lshift_func_int16_t_s_u(p_109, l_639));
                        (*l_472) = (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u(l_639, (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*g_377) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0xDADDL, ((*l_112) < l_632))), ((safe_sub_func_int32_t_s_s(((l_661 = l_660) == &g_377), (((&g_555 != l_662) ^ ((*l_450) = ((*l_622) == g_136))) < (*l_444)))) | 0xBCFEL)))), g_663)), (*l_444))), (-1L))), p_109)))), 6)), (*l_622)));
                        (*l_461) = (safe_add_func_int8_t_s_s(p_109, (p_109 <= ((*g_555) | (*l_622)))));
                        --g_682;
                    }
                }
                else
                {
                    int *l_685 = &l_447;
                    unsigned short l_712 = 65535UL;
                    char l_718 = 1L;
                    int l_722 = (-1L);
                    if (func_100(l_685, l_685, g_46))
                    {
                        unsigned char *l_695 = (void*)0;
                        unsigned char *l_696 = &g_663;
                        unsigned *l_703 = (void*)0;
                        int l_708 = 0xC102573FL;
                        int l_709 = 0x15F1969BL;
                        (*l_463) = p_109;
                        l_709 ^= ((*l_452) |= (safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_109, (((**g_376) = func_100((*g_210), &l_456, (safe_unary_minus_func_uint8_t_u((--(*l_696)))))) != ((safe_lshift_func_uint16_t_u_u(g_125, 4)) && (safe_rshift_func_uint8_t_u_s((p_109 && (g_368 ^= p_109)), p_109)))))), ((safe_mod_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(((l_708 && (-1L)) <= p_109), 9)) != l_708), 0x0F448ECCL)) && g_276))), p_109)), 9)));
                    }
                    else
                    {
                        int l_719 = 1L;
                        int l_721 = (-2L);
                        int *l_723 = (void*)0;
                        int *l_724 = &l_456;
                        int *l_725 = &g_131;
                        int *l_726 = &l_375;
                        int *l_727 = &g_131;
                        int *l_728 = &g_131;
                        int *l_729 = (void*)0;
                        int *l_730 = &l_334;
                        int *l_731 = &l_722;
                        int *l_732 = (void*)0;
                        int *l_733 = &l_462;
                        int *l_735 = &l_334;
                        int *l_736 = &g_106;
                        int *l_737 = &l_710;
                        int *l_738 = (void*)0;
                        int *l_739 = &l_734;
                        int *l_740 = &l_711;
                        int *l_741 = &l_456;
                        int l_742 = 0xAA3F65DDL;
                        int *l_743 = &l_710;
                        int *l_744 = &l_447;
                        int *l_745 = &l_711;
                        int *l_746 = (void*)0;
                        int *l_747 = &l_734;
                        int *l_748 = (void*)0;
                        int *l_749 = &l_734;
                        int *l_750 = &l_334;
                        int *l_751 = &g_392;
                        int *l_752 = &l_710;
                        int *l_753 = &g_106;
                        int *l_754 = &l_711;
                        int *l_755 = (void*)0;
                        int *l_756 = &l_734;
                        int *l_757 = &l_710;
                        int *l_758 = (void*)0;
                        int *l_759 = &l_721;
                        int *l_760 = &l_447;
                        int *l_762 = &l_542;
                        int *l_763 = &l_722;
                        int *l_764 = &l_720;
                        int l_765 = 0x8EC3AA23L;
                        int *l_766 = &l_720;
                        int *l_767 = (void*)0;
                        int *l_768 = &l_334;
                        int *l_769 = &l_742;
                        int *l_770 = &l_734;
                        int *l_771 = &l_721;
                        int *l_772 = &l_761;
                        int *l_774 = &l_720;
                        int *l_775 = (void*)0;
                        int *l_776 = &l_720;
                        int *l_777 = &l_720;
                        int *l_779 = &l_447;
                        int *l_781 = &l_334;
                        int *l_782 = &l_734;
                        int l_783 = 0xEA466048L;
                        int *l_784 = &l_780;
                        int *l_785 = &l_711;
                        int *l_786 = &g_106;
                        int *l_787 = &l_447;
                        int *l_788 = (void*)0;
                        int *l_789 = &l_710;
                        --l_712;
                        (*l_474) = p_109;
                        l_719 = (safe_add_func_uint32_t_u_u((*l_685), l_718));
                        g_791--;
                    }
                    if (p_109)
                        break;
                    if (p_109)
                        continue;
                }
            }
            if ((safe_sub_func_int32_t_s_s(func_100((*g_210), &l_462, p_109), 0x1F963855L)))
            {
                return (*g_210);


            }
            else
            {
                unsigned l_834 = 0UL;
                g_797--;
                for (g_778 = 2; (g_778 < (-4)); g_778 = safe_sub_func_int8_t_s_s(g_778, 5))
                {
                    unsigned *l_802 = (void*)0;
                    unsigned *l_803 = &g_113;
                    int l_811 = 0xDFD86312L;
                    if (p_109)
                    {
                        unsigned char l_804 = 255UL;
                        int *l_812 = (void*)0;
                        int *l_813 = &l_456;
                        unsigned short *l_822 = (void*)0;
                        unsigned short *l_823 = &g_150;
                        unsigned l_828 = 1UL;
                        ++l_804;
                        if ((*l_622))
                            break;
                        (*l_450) ^= (safe_rshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(6L, (((((*g_377) = 4294967295UL) || l_811) >= 1L) ^ (*l_471)))), l_804));
                        (*l_463) = l_828;
                    }
                    else
                    {
                        if ((*l_622))
                            break;
                        if (p_109)
                            continue;
                    }
                    for (l_811 = 0; (l_811 == (-3)); l_811--)
                    {
                        int l_833 = (-1L);
                        (*l_465) = p_109;
                        (*l_455) |= ((safe_div_func_uint32_t_u_u((l_833 > 4UL), (*g_377))) || l_834);
                        if (l_811)
                            continue;
                    }
                }
                (*g_210) = &l_720;

                ;
            }

            ;
            (*g_210) = &l_375;

            ;
        }
        else
        {
            unsigned short l_835 = 6UL;
            (*l_474) |= ((*l_465) = l_835);
            (*l_465) = p_109;
            (*l_463) &= ((*g_838) = (p_109 < (safe_lshift_func_uint16_t_u_s(g_350, p_109))));
        }

        ;
    }

    ;
    return l_839;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_432, "g_432", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_663, "g_663", print_hash_value);
    transparent_crc(g_673, "g_673", print_hash_value);
    transparent_crc(g_682, "g_682", print_hash_value);
    transparent_crc(g_778, "g_778", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1044, "g_1044", print_hash_value);
    transparent_crc(g_1059, "g_1059", print_hash_value);
    transparent_crc(g_1230, "g_1230", print_hash_value);
    transparent_crc(g_1372, "g_1372", print_hash_value);
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1459, "g_1459", print_hash_value);
    transparent_crc(g_1554, "g_1554", print_hash_value);
    transparent_crc(g_1626, "g_1626", print_hash_value);
    transparent_crc(g_1706, "g_1706", print_hash_value);
    transparent_crc(g_1716, "g_1716", print_hash_value);
    transparent_crc(g_1820, "g_1820", print_hash_value);
    transparent_crc(g_1823, "g_1823", print_hash_value);
    transparent_crc(g_1828, "g_1828", print_hash_value);
    transparent_crc(g_1893, "g_1893", print_hash_value);
    transparent_crc(g_1901, "g_1901", print_hash_value);
    transparent_crc(g_1938, "g_1938", print_hash_value);
    transparent_crc(g_1940, "g_1940", print_hash_value);
    transparent_crc(g_1952, "g_1952", print_hash_value);
    transparent_crc(g_1965, "g_1965", print_hash_value);
    transparent_crc(g_1974, "g_1974", print_hash_value);
    transparent_crc(g_1980, "g_1980", print_hash_value);
    transparent_crc(g_2016, "g_2016", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
