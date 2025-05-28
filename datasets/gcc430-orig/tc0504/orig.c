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



static char g_9 = (-7L);
static int g_73 = 0L;
static unsigned g_121 = 0x625CAFD9L;
static int g_123 = 0x116C1958L;
static unsigned char g_163 = 0x5CL;
static unsigned char g_170 = 0x88L;
static unsigned short g_181 = 0xD31DL;
static unsigned g_220 = 0x57302E08L;
static unsigned char g_281 = 0x97L;
static char g_286 = 0x75L;
static unsigned short g_307 = 0xF287L;
static short g_308 = 0x74A1L;
static short g_312 = 0x601BL;
static unsigned g_313 = 5UL;
static unsigned g_331 = 0UL;
static int g_350 = 1L;
static unsigned short g_362 = 0x954CL;
static unsigned short g_422 = 0x9702L;
static int g_427 = 0L;
static char g_476 = 0L;
static int g_499 = 3L;
static unsigned char g_546 = 0x0AL;
static int g_686 = 1L;
static unsigned char g_757 = 0x48L;
static unsigned char g_784 = 0x96L;
static char g_974 = 0x83L;
static short g_1078 = 0L;
static const unsigned short g_1079 = 65533UL;
static const short g_1147 = (-10L);
static int g_1242 = 0L;
static int g_1325 = 0xD3598582L;
static int g_1351 = (-10L);
static unsigned char g_1688 = 0UL;
static unsigned g_1884 = 3UL;
static int g_1916 = 8L;
static char g_1917 = 1L;
static short g_2043 = 3L;
static int g_2166 = 0x02AE7F4AL;
static unsigned char g_2293 = 0x89L;
static int g_2596 = 1L;
static const unsigned char g_2640 = 3UL;
static unsigned char g_2893 = 253UL;
static int g_2979 = (-10L);
static unsigned g_3027 = 0xC062FC6BL;



static int func_1(void);
static int func_2(unsigned p_3, const unsigned char p_4, short p_5, short p_6);
static short func_11(short p_12, int p_13, unsigned char p_14, unsigned p_15);
static unsigned short func_16(unsigned p_17);
static unsigned char func_18(int p_19, char p_20);
static int func_21(const unsigned short p_22);
static unsigned func_25(unsigned short p_26, int p_27, int p_28, const unsigned p_29);
static unsigned func_30(unsigned short p_31);
static short func_40(short p_41, unsigned p_42);
static int func_46(unsigned p_47, unsigned p_48, unsigned short p_49);
static int func_1(void)
{
    const short l_10 = 9L;
    int l_2174 = 4L;
    unsigned l_2181 = 4294967293UL;
    unsigned l_2890 = 0x0ADAFE09L;
    unsigned l_2931 = 4294967293UL;
    unsigned char l_2980 = 0x82L;
    int l_3024 = (-6L);
    l_2174 = func_2((safe_rshift_func_uint8_t_u_u((!g_9), 0)), l_10, func_11(((((func_16((g_9 & ((func_18(g_9, l_10) , l_10) & (l_10 , (((safe_rshift_func_int16_t_s_s(0L, l_10)) , g_757) > l_2174))))) >= 6L) == g_1917) , l_2181) != g_1147), g_1078, g_9, g_1078), g_1078);
    l_2174 = ((func_18((((l_10 && l_10) != 0L) != g_546), ((safe_lshift_func_uint8_t_u_u((g_1884 == (g_476 || ((l_2181 , (((safe_add_func_uint8_t_u_u(0x0FL, (l_10 , g_1079))) , l_2174) < 0xF0BABAFAL)) & 246UL))), g_9)) < g_1325)) & l_2181) , l_2181);
    l_2174 = func_18((((safe_div_func_int32_t_s_s((l_2174 != l_2181), func_21((safe_sub_func_int16_t_s_s((((func_16(l_10) & func_16(l_2181)) & (((safe_sub_func_int16_t_s_s(g_2596, g_163)) | (safe_mod_func_uint16_t_u_u(l_10, 1UL))) != 0xC458L)) | g_163), 8L))))) & g_2596) , l_10), l_2174);
    if (l_10)
    {
        unsigned char l_2883 = 0xECL;
        int l_2905 = 0xD460CF1AL;
        for (g_2596 = (-5); (g_2596 < (-23)); g_2596 = safe_sub_func_uint8_t_u_u(g_2596, 8))
        {
            g_427 = 1L;
        }
        g_2893 &= (l_2883 || ((1L == func_2(l_10, (((g_2166 > g_220) <= (safe_rshift_func_int16_t_s_s((((g_307 , (safe_mod_func_int16_t_s_s(l_2890, (safe_rshift_func_uint16_t_u_u((func_16(l_2883) ^ g_1079), 7))))) <= g_686) || g_757), 15))) , g_9), l_2883, g_784)) & 0UL));
        if ((safe_add_func_uint16_t_u_u(g_1351, ((safe_rshift_func_int8_t_s_u((((func_46((g_1688 > ((safe_sub_func_uint8_t_u_u(g_1242, (9UL | (safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_2181, l_10)), 1L))))) && (g_1917 >= g_2893))), l_2181, l_2883) && g_362) , g_331) , l_2883), g_2043)) > g_1325))))
        {
            l_2905 = (safe_unary_minus_func_int16_t_s(g_427));
        }
        else
        {
            g_350 = l_2883;
        }
        g_686 |= l_2174;
    }
    else
    {
        unsigned l_2912 = 0x335A7552L;
        short l_2917 = (-1L);
        char l_2958 = 0xEAL;
        int l_2997 = 0x5FD3BDE6L;
        char l_3037 = (-10L);
        g_350 = (-6L);
        if (func_11((safe_add_func_uint16_t_u_u(func_18((((g_307 <= (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(func_16(l_2912), 4)), g_312))) < (((g_350 < (g_1884 == ((g_427 >= (safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((l_2174 , g_308), g_170)) , 0x350E5A15L), 1L))) , l_2912))) != g_1147) >= l_2912)) & l_2174), g_312), l_2917)), l_2174, l_2917, l_2890))
        {
            const unsigned l_2924 = 0xF6AEEC5FL;
            g_1351 = (l_2917 == (safe_add_func_uint8_t_u_u((0x76EBL < ((safe_div_func_int16_t_s_s((g_1916 <= (((g_312 <= (safe_add_func_uint16_t_u_u((func_16(l_2174) == ((((((g_1688 && (g_784 , g_2596)) && 0x8AL) ^ g_181) & l_2917) ^ l_2924) > l_2924)), l_2181))) && l_2912) != l_2174)), g_2640)) ^ g_476)), g_1351)));
            g_686 &= (!(safe_sub_func_int8_t_s_s((g_1325 <= (safe_mod_func_int32_t_s_s(l_2174, (safe_mod_func_int8_t_s_s(func_46(((((g_2166 > ((g_286 && (g_1325 == ((~g_2893) || (((6L == 0xCFL) , (g_1688 != l_2917)) >= 0x6608F65DL)))) >= g_1325)) && g_307) < l_2931) != l_2912), l_2931, l_2174), l_2924))))), l_2924)));
        }
        else
        {
            int l_2942 = (-8L);
            int l_2959 = 0x0CF33FDCL;
            short l_2976 = (-4L);
            unsigned char l_2995 = 2UL;
            int l_2996 = 0x4855443DL;
            for (l_2931 = 19; (l_2931 < 30); l_2931 = safe_add_func_uint16_t_u_u(l_2931, 5))
            {
                unsigned l_2957 = 0xBCD3C37EL;
                g_350 = (((safe_lshift_func_uint16_t_u_u((((g_73 == (9UL > (((safe_mod_func_int32_t_s_s((+func_16((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((func_16(((g_170 , ((0xAE76L >= ((250UL | (l_2942 | g_2596)) < (((safe_rshift_func_uint16_t_u_s(65530UL, func_16(func_16(((g_313 <= 0x15D3L) != l_2912))))) | l_2917) || 0xBAB5251CL))) , g_427)) < l_2931)) && g_1147), 9)), 65535UL)))), g_73)) < g_362) < g_1079))) < (-7L)) & (-3L)), 8)) & g_73) < l_2890);
                l_2959 |= (g_1325 != func_11((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(func_46((((safe_div_func_uint8_t_u_u(((0x1DL && (safe_rshift_func_int8_t_s_s(0x84L, (((safe_sub_func_int32_t_s_s(g_1884, (safe_mod_func_int16_t_s_s(func_11(l_2912, l_2912, l_2942, func_16(l_2942)), 0xEA7FL)))) , g_331) & l_2957)))) , l_2957), g_9)) | l_2958) , l_2890), g_1078, l_2942), 4)) , 0x01D4L), l_2942)), l_2942, l_2942, l_2181));
            }
            if (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u(0x4DFCL, ((safe_sub_func_int16_t_s_s(g_2293, ((((safe_rshift_func_uint16_t_u_s(((((g_1917 || (func_16(((safe_sub_func_int32_t_s_s((g_121 , (g_1688 , (safe_mod_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((g_163 < l_2174), l_2976)) < (((((safe_sub_func_uint8_t_u_u(0x30L, g_499)) || 0x4CL) , l_2942) , (-1L)) , g_2979)), g_1351)))), (-1L))) & g_1917)) == g_331)) , l_2917) && l_2917) , l_2931), 6)) & 0L) <= l_2931) , 65533UL))) , g_2043))) != 0x67EAEEEFL), 5L)), g_1325)) | g_307))
            {
                short l_2998 = (-1L);
                g_350 = l_2980;
                l_2174 = g_784;
                for (g_73 = 0; (g_73 > 14); g_73 = safe_add_func_uint32_t_u_u(g_73, 7))
                {
                    unsigned short l_2994 = 0xC7D8L;
                    l_2997 ^= ((func_16(g_2979) , (safe_unary_minus_func_uint32_t_u(((g_1325 ^ (func_16(((((((g_286 <= (safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_uint16_t_u_s(1UL, (safe_sub_func_int8_t_s_s(((~(safe_lshift_func_int16_t_s_s((((l_2174 >= 0xAD0DL) , g_546) , (safe_rshift_func_uint8_t_u_s((func_16(l_2958) <= l_2958), 1))), l_2931))) >= l_2994), g_1351)))) >= l_2912) & 0xB4A0L) , 0UL), l_2995))) , l_2959) && l_2980) != l_2996) >= g_2979) <= 0x84FCL)) & g_2166)) <= 0x054FCE23L)))) < l_2917);
                    return l_2998;
                }
            }
            else
            {
                int l_3014 = 0x0EA24D13L;
                int l_3019 = (-1L);
                unsigned l_3025 = 18446744073709551615UL;
                unsigned short l_3036 = 0x1FC4L;
                g_2979 = l_2996;
                l_2174 = g_2043;
                for (g_974 = 21; (g_974 >= (-19)); g_974--)
                {
                    char l_3011 = 0x95L;
                    unsigned char l_3026 = 0x61L;
                    for (g_9 = 29; (g_9 > 3); g_9 = safe_sub_func_uint16_t_u_u(g_9, 6))
                    {
                        g_2166 = g_313;
                    }
                    g_2166 |= (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((((safe_div_func_int16_t_s_s(((((safe_div_func_int16_t_s_s(l_3011, ((safe_mod_func_uint32_t_u_u(g_2043, g_308)) && ((l_3014 != (safe_lshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_3019 || (g_362 ^ (safe_sub_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(((func_16(g_784) <= (g_312 > l_2912)) & l_3024), 0xF6349BC7L)) , 0x89749C03L) >= g_1916) & l_3025), g_2893)))), 0xDFCFL)), 1))) ^ l_3026)))) || g_427) & 0x66L) > 0x81FEL), g_307)) ^ g_2293) && 0x6BL), g_3027)), g_1242));
                    g_2979 |= ((safe_mod_func_uint8_t_u_u(((g_9 || (safe_sub_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((func_16(g_2166) >= g_163), 4)), 10)) , l_3036) , ((l_3011 == func_16(g_974)) && g_546)) != 0x9CL), l_2958))) ^ 1L), g_308)) | g_123);
                    g_499 = l_3037;
                }
            }
            for (g_181 = 0; (g_181 != 4); ++g_181)
            {
                l_3024 &= (0x6B0CFA90L <= 0x85D8F7C5L);
            }
        }
    }
    return g_1917;
}







static int func_2(unsigned p_3, const unsigned char p_4, short p_5, short p_6)
{
    unsigned l_2223 = 0x45225DD0L;
    int l_2234 = 0xB7D885B5L;
    unsigned short l_2301 = 0UL;
    unsigned char l_2443 = 255UL;
    unsigned l_2510 = 18446744073709551614UL;
    unsigned char l_2701 = 0x34L;
    unsigned l_2758 = 5UL;
    short l_2766 = (-4L);
    short l_2825 = 0xE017L;
    unsigned l_2835 = 0x73F57D83L;
    int l_2867 = 3L;
    unsigned l_2868 = 0x88FBB64BL;
    if ((g_1242 == 65531UL))
    {
        unsigned short l_2218 = 0x2ACAL;
        int l_2246 = 0xF803D0ADL;
        char l_2262 = 0xB4L;
        unsigned l_2265 = 0UL;
        const int l_2285 = 1L;
        const unsigned l_2427 = 0x2EE05E3BL;
        for (g_686 = (-10); (g_686 == (-4)); g_686 = safe_add_func_int32_t_s_s(g_686, 1))
        {
            return p_6;
        }
        if ((0UL == (~(safe_add_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s(0xEE48L, p_4)) , func_40(l_2218, (g_686 & func_46((g_163 <= g_546), func_16(l_2218), p_5)))) > g_1351), 0UL)))))
        {
            unsigned l_2245 = 0xB7B151F1L;
            int l_2300 = 1L;
            unsigned short l_2357 = 0UL;
            unsigned char l_2397 = 0x17L;
            const unsigned char l_2412 = 1UL;
            if ((g_686 , (safe_rshift_func_int16_t_s_s(g_1917, (1L < (safe_div_func_int8_t_s_s(((((l_2223 > (func_30(p_4) <= p_3)) >= (safe_sub_func_int32_t_s_s((((g_9 , (((p_6 | 0L) > p_4) || p_5)) != 9UL) , 0xAD79BDDAL), (-7L)))) != l_2223) | g_2166), (-1L))))))))
            {
                l_2234 = ((+(safe_add_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((((((g_1916 , (-7L)) ^ (8UL != (safe_add_func_uint16_t_u_u(p_6, (safe_lshift_func_int16_t_s_u((((g_427 == func_16(g_1688)) , g_1688) , (g_163 , 0x5A96L)), g_350)))))) >= 0L) , p_6) <= g_312) ^ 3L), g_686)) & l_2218) , 0x8494EF80L), 1UL))) , g_499);
                g_1351 |= g_1688;
            }
            else
            {
                unsigned l_2253 = 0x47232E9BL;
                short l_2391 = 0x9F76L;
                int l_2422 = (-5L);
                l_2246 |= (func_40((g_1079 , (((-3L) != (safe_rshift_func_uint8_t_u_u(g_123, (safe_div_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(g_362, 5)) < ((safe_rshift_func_int16_t_s_u(0L, 12)) >= ((func_16(l_2218) , ((safe_rshift_func_int8_t_s_s(l_2245, 2)) , p_6)) <= g_1884))) < 0x7598L), p_4))))) , 0xE31EL)), l_2234) == g_9);
                if ((((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_s((g_1916 , (((((((safe_mod_func_int32_t_s_s(g_350, l_2245)) , p_6) , ((l_2253 & ((func_21(p_4) & ((safe_sub_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_2262, 7)), (safe_add_func_uint16_t_u_u((p_5 , l_2265), l_2245)))), g_1079)) != p_5) < (-6L)) ^ p_6), 7UL)) , 0xA899L)) ^ g_1078)) != 0x93C8L)) <= 0x92B1E88FL) == l_2245) , p_3) , p_4)), p_4)) & g_1078) ^ p_5) , l_2245), 8)) , p_5) == l_2245))
                {
                    int l_2273 = 0L;
                    int l_2286 = 7L;
                    if (func_16(l_2253))
                    {
                        g_2166 &= (0xABL ^ g_220);
                    }
                    else
                    {
                        short l_2268 = 2L;
                        int l_2274 = 0L;
                        l_2274 = (func_25((safe_add_func_uint16_t_u_u(p_3, func_46(l_2268, g_281, (g_1916 <= (((safe_add_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(func_16(p_3), g_499)) | l_2273) , (func_16(g_546) == l_2273)), 0xE35AL)) , g_1242) != p_4))))), g_1688, p_6, g_1917) > l_2245);
                        g_686 ^= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_784 >= p_6), l_2223)), (0x45L < (safe_lshift_func_int8_t_s_u(p_6, ((p_4 , ((safe_rshift_func_uint16_t_u_u((func_46(g_220, l_2274, p_4) == 0L), g_9)) || g_313)) || l_2285))))));
                        l_2286 = l_2273;
                        l_2234 = func_21((l_2274 != (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((g_9 > p_3), l_2268)) >= (safe_mod_func_int32_t_s_s((g_2293 , ((safe_rshift_func_uint16_t_u_u(l_2268, 9)) , (g_220 , (safe_add_func_uint32_t_u_u(((safe_mod_func_uint32_t_u_u((0x88E03B6AL > 1L), (-1L))) , l_2300), p_3))))), l_2301))), 0))));
                    }
                    if ((safe_div_func_uint32_t_u_u(func_25((safe_rshift_func_int16_t_s_s(g_170, p_5)), p_6, g_2166, ((g_1917 == (0xDDF26F39L && (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_2301, 7)), 0x6F74L)))) < (safe_add_func_int16_t_s_s((+(l_2234 , g_123)), 0x24C4L)))), l_2286)))
                    {
                        const unsigned l_2312 = 0xA67BA47AL;
                        const unsigned short l_2331 = 65529UL;
                        g_1351 &= func_46((l_2312 >= (((((safe_sub_func_int32_t_s_s((((((p_4 >= (g_163 == (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_4, ((safe_add_func_int16_t_s_s((l_2253 < (safe_rshift_func_uint16_t_u_u(0xDADBL, ((((safe_lshift_func_int8_t_s_s(g_163, 6)) && (safe_lshift_func_uint16_t_u_s(0x4DC9L, 3))) >= func_16((safe_mod_func_uint32_t_u_u((func_16((safe_add_func_int16_t_s_s((((p_5 , p_4) > l_2312) >= l_2286), 65529UL))) != g_476), p_6)))) , 65530UL)))), l_2253)) < p_5))), l_2331)))) < 6UL) && g_9) <= g_1242) | g_1079), l_2331)) != 0x973BL) , g_350) , 0L) == 0x30E0E945L)), l_2246, p_4);
                        l_2300 = ((func_18(l_2301, g_121) , func_21((func_25((safe_div_func_uint8_t_u_u(1UL, ((safe_rshift_func_int16_t_s_u(((g_546 , (((p_6 | p_3) == (safe_div_func_uint8_t_u_u(l_2301, (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_3, 11)) > g_499), l_2312)), 0x5064L))))) & g_123)) & p_3), 3)) , p_3))), l_2312, p_4, l_2253) <= p_5))) || 0xE313L);
                        g_2166 = 0x4D69737EL;
                    }
                    else
                    {
                        char l_2352 = (-3L);
                        int l_2368 = 0L;
                        l_2246 = (p_3 || (l_2300 != p_4));
                        l_2352 = (((func_16((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(0UL, (((((p_6 > (safe_div_func_int32_t_s_s((p_5 < g_499), func_16(l_2253)))) >= g_170) && l_2246) > (p_6 || g_2293)) >= g_1917))), g_2043))) >= l_2234) , 0x71A0L) == 65532UL);
                        l_2300 = (((((p_3 , 0xC94DL) <= (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((~(l_2357 , 0x1319L)), (p_6 | ((((safe_mod_func_int8_t_s_s(func_11((safe_lshift_func_int8_t_s_u((l_2286 < ((((((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((p_6 < ((((safe_add_func_int16_t_s_s((g_1688 , func_21((l_2253 | g_974))), g_1147)) > 0x14L) == 1UL) && p_5)) & g_2293), 0x8B2AL)), 0xF9B217E9L)) != l_2368) || l_2253) && p_6) <= l_2246) , g_1325)), p_6)), l_2357, p_4, l_2368), l_2368)) == g_2293) , p_4) , l_2357)))), p_5))) & p_5) , l_2352) ^ l_2357);
                        g_1351 = l_2253;
                    }
                    l_2246 = (safe_sub_func_int32_t_s_s(0x0E8D0EC8L, ((safe_add_func_uint16_t_u_u(l_2286, (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u(g_476, 0xAAL)) , l_2245) , g_181), g_313)), l_2234)))) > 5UL)));
                }
                else
                {
                    unsigned l_2385 = 0x0E2C2E6BL;
                    int l_2390 = 0x32CF2AF4L;
                    short l_2398 = 4L;
                    l_2234 = (safe_sub_func_uint8_t_u_u(0x0FL, (~l_2357)));
                    for (g_307 = 0; (g_307 != 4); ++g_307)
                    {
                        unsigned l_2392 = 4294967291UL;
                        l_2392 = (1L ^ (safe_lshift_func_uint8_t_u_s((((func_16(l_2385) , (safe_sub_func_int32_t_s_s(l_2285, 5UL))) == (safe_div_func_int32_t_s_s(l_2390, 0x0D4F67A1L))) , (((l_2391 , g_350) < (-1L)) <= g_784)), g_422)));
                    }
                    if ((safe_mod_func_uint16_t_u_u(func_25((((safe_add_func_uint32_t_u_u(p_5, l_2245)) & g_1079) , l_2300), l_2253, l_2253, func_21(l_2218)), 0x4330L)))
                    {
                        g_1351 = ((g_1916 > 0L) , l_2397);
                    }
                    else
                    {
                        return g_123;
                    }
                    l_2390 = l_2398;
                }
                if ((safe_mod_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(4294967288UL, (((-1L) == (0xBEL && ((func_46((safe_mod_func_uint32_t_u_u(func_46(l_2265, ((safe_div_func_int8_t_s_s(((safe_div_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(p_6, (safe_unary_minus_func_int8_t_s(g_170)))) & (p_6 != (l_2246 , ((((l_2397 , 0xD4204D8EL) >= g_784) != p_5) , l_2234)))) != (-5L)), 0xBFL)) , l_2285), 0x5FL)) || g_2166), p_4), g_2293)), l_2262, g_1688) , l_2412) , 0x9BL))) , l_2285))), p_6)))
                {
                    int l_2421 = 0x2174A490L;
                    l_2422 &= (safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(func_16((safe_lshift_func_int8_t_s_s(g_1917, p_4))), 14)), ((p_5 & l_2421) & p_3))), func_16(p_4)));
                    g_2166 ^= (0x00L <= (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((p_5 && func_16(((l_2412 >= g_974) , ((p_6 <= (((!(p_3 , (p_6 == func_21(l_2427)))) & p_5) > l_2421)) < (-5L))))) >= p_4), 6)), g_1078)));
                }
                else
                {
                    unsigned short l_2442 = 0UL;
                    for (l_2245 = 29; (l_2245 >= 28); --l_2245)
                    {
                        unsigned char l_2452 = 0UL;
                        g_2166 ^= (((safe_mod_func_int16_t_s_s(0L, ((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_int32_t_s_s(8L, (func_30(g_163) != (l_2234 < (!((safe_div_func_int16_t_s_s(p_5, g_1916)) , g_1147)))))), (safe_mod_func_int16_t_s_s(0xDE62L, g_1147)))), 250UL)) , l_2442))) ^ 0UL) , g_1916);
                        g_1351 &= func_46((g_308 , func_16((g_331 && (func_40(((((l_2443 != ((l_2442 , (safe_rshift_func_int16_t_s_s(g_181, func_16((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(func_16(l_2452), 12)) , (safe_add_func_int32_t_s_s((0xF6L == ((safe_rshift_func_uint8_t_u_u((+l_2452), 0)) > g_350)), 0L))), l_2245)), p_3)))))) ^ g_220)) | p_4) , g_170) < l_2246), g_73) , p_4)))), g_1916, g_1147);
                        l_2246 = l_2442;
                    }
                    l_2246 = (((((safe_add_func_int32_t_s_s(l_2442, (safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(g_307, (g_286 | (safe_add_func_int32_t_s_s(((g_499 , 0xDF3DL) || ((((safe_lshift_func_int8_t_s_s(1L, (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((g_181 , (safe_rshift_func_uint8_t_u_s(((g_2166 || func_16(g_1884)) >= 0x7BL), g_350))), l_2422)), l_2397)))) , g_1242) >= 0x5DD3L) >= g_422)), g_422))))) >= g_307), 5L)))) > (-1L)) , g_1351) || l_2262) , (-9L));
                }
                for (g_499 = (-6); (g_499 != (-13)); --g_499)
                {
                    l_2422 = l_2391;
                    l_2300 = (l_2443 <= ((safe_lshift_func_int16_t_s_s(g_123, 2)) < (((0x85L < g_974) , (func_16((func_16(p_4) , (safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((l_2218 & ((safe_rshift_func_int8_t_s_s(g_1884, 4)) & (((((+l_2300) >= g_2293) , 0x2BA1L) != l_2422) | l_2301))), g_2166)), l_2300)))) | g_422)) <= l_2300)));
                    for (g_1917 = (-25); (g_1917 <= (-21)); g_1917 = safe_add_func_uint32_t_u_u(g_1917, 8))
                    {
                        l_2300 = func_16(g_1916);
                        return p_4;
                    }
                }
            }
        }
        else
        {
            g_499 = (l_2443 < (safe_lshift_func_int8_t_s_s(g_220, p_5)));
        }
        g_1242 ^= func_40(l_2223, g_308);
    }
    else
    {
        int l_2489 = (-1L);
        int l_2513 = 0xD5B5B7CBL;
        int l_2712 = (-1L);
        if ((l_2489 , (g_163 & l_2489)))
        {
            unsigned char l_2511 = 0x46L;
            int l_2512 = 0x0D2739F3L;
            l_2234 = 1L;
            l_2512 |= (func_11(g_181, ((safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((g_73 == ((+g_9) & func_16((((((func_16((safe_rshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((func_16((safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_16(p_3), l_2301)), (safe_mod_func_uint8_t_u_u(p_6, ((safe_add_func_uint32_t_u_u(((((safe_rshift_func_int8_t_s_s((((l_2510 <= (-3L)) , l_2511) , 0xAAL), g_427)) || l_2511) || l_2301) ^ 0x099FEE97L), g_546)) & 6L)))))) | g_170), l_2489)), l_2511)) ^ p_6) , 0xC6L), 0))) <= p_5) , p_3) <= g_281) || l_2301) ^ l_2511)))) ^ 0x39FFF2DCL), p_6)) > 0xA5L), g_686)) , 0xFA5B4361L), l_2223, g_427) , l_2511);
            l_2513 |= l_2301;
            for (g_307 = 7; (g_307 <= 34); g_307++)
            {
                short l_2516 = 0xEB88L;
                int l_2517 = 0x09AD9CA1L;
                g_1242 = (g_2043 <= p_4);
                l_2517 |= (((p_5 == ((((func_16(((func_16(g_1688) & (p_3 , ((+p_5) == (+(((-1L) <= p_5) <= l_2516))))) | func_16(p_4))) && g_2166) || g_784) < 4294967287UL) == p_6)) >= l_2489) | p_6);
            }
        }
        else
        {
            unsigned l_2526 = 0x3D8118BCL;
            short l_2531 = 0xBA90L;
            char l_2551 = 0x4CL;
            int l_2552 = 0x6CCC4215L;
            unsigned l_2623 = 18446744073709551609UL;
            int l_2627 = 0x6A5E1C28L;
            if (func_18(((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((1L && (((((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint32_t_u_u(((((0xB00A3C4FL == (safe_unary_minus_func_uint8_t_u(l_2526))) != l_2489) > (func_40(l_2513, p_4) && (l_2526 <= (((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_3, l_2489)), 15)) == g_757) ^ g_974)))) <= l_2531), g_1916)) != p_6))) < 0L) | p_3) <= 255UL) < p_6)), (-1L))) | p_6), 0x7D23L)) == l_2489), p_5))
            {
                int l_2550 = 1L;
                unsigned char l_2562 = 0x19L;
                unsigned short l_2597 = 0x9E4EL;
                unsigned short l_2626 = 0x3AC7L;
                int l_2630 = 0xDC6439D4L;
                if ((((-1L) <= p_4) || l_2510))
                {
                    for (g_181 = 0; (g_181 == 12); g_181++)
                    {
                        return l_2234;
                    }
                    g_1351 &= (safe_lshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((g_686 || ((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(p_6, ((safe_add_func_uint8_t_u_u(l_2510, ((+(safe_lshift_func_int16_t_s_s(g_2043, (safe_mod_func_uint8_t_u_u(func_40(g_499, (p_6 , g_1916)), (safe_rshift_func_int16_t_s_s(l_2550, l_2513))))))) != p_3))) <= 0L))), 6UL)) <= (-2L))), 0xE9A8L)) ^ l_2551), 6));
                }
                else
                {
                    int l_2563 = 9L;
                    l_2552 = 0x1E74EB28L;
                    l_2563 = ((l_2550 | ((func_18((p_3 && (-8L)), ((l_2234 >= ((safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(((((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((g_422 < func_16((l_2513 == p_3))), func_16(p_4))) , l_2552), p_6)) ^ l_2562), g_313)) >= 0x05F667EDL) && 0x70L) , 0xD0B2956DL))) & 0x61L), l_2563)) != 0x7038L)) | 0xD5L)) <= 0xA4L) , g_331)) > 0L);
                    l_2513 = ((safe_add_func_int32_t_s_s(func_25(((l_2550 == l_2489) <= ((l_2513 < (safe_div_func_uint16_t_u_u((((g_73 & g_1351) | (func_16(p_6) < g_331)) == (p_5 ^ 7L)), g_1917))) , p_3)), p_3, g_1688, l_2550), l_2531)) == p_3);
                    l_2513 = ((safe_lshift_func_int8_t_s_u((g_546 , (((0x03BF474EL & (g_1688 > (safe_sub_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_u(l_2562, (((safe_rshift_func_int16_t_s_s((((safe_mod_func_uint8_t_u_u(l_2489, p_3)) < (safe_rshift_func_int8_t_s_u(g_2043, 3))) && 4294967290UL), 9)) || (safe_mod_func_int32_t_s_s(p_5, 0x2F1E973BL))) > 4L))) == g_427) > 65532UL), g_286)))) < l_2563) >= p_4)), 2)) , p_6);
                }
                if ((l_2562 || func_21(l_2513)))
                {
                    unsigned l_2591 = 0UL;
                    for (g_427 = 0; (g_427 == 5); g_427 = safe_add_func_int8_t_s_s(g_427, 3))
                    {
                        short l_2586 = 0x0FF9L;
                        l_2552 = g_784;
                        if (l_2586)
                            break;
                    }
                    g_2596 |= (((safe_mod_func_uint16_t_u_u((((((((-1L) == 1L) | (safe_rshift_func_uint16_t_u_s(func_18(g_123, l_2591), 4))) | l_2510) != (g_1917 ^ (p_6 , (safe_add_func_int16_t_s_s(((~(safe_add_func_uint16_t_u_u((p_3 && p_5), g_2293))) , g_2293), p_6))))) && l_2552) != 0xBC6C70D8L), 0xB609L)) , 1UL) == g_2293);
                }
                else
                {
                    unsigned l_2598 = 1UL;
                    l_2598 = l_2597;
                    g_427 = 0xCF9F1A02L;
                    for (g_307 = 0; (g_307 == 16); ++g_307)
                    {
                        int l_2614 = 0xA16D9E7BL;
                        g_2166 &= (safe_rshift_func_uint8_t_u_s((0xA84DL >= g_1916), g_121));
                        l_2234 = (safe_unary_minus_func_uint16_t_u(g_784));
                        g_686 = (safe_rshift_func_uint8_t_u_s((l_2513 || ((safe_sub_func_uint8_t_u_u(func_16((safe_div_func_int8_t_s_s((+l_2551), ((((safe_rshift_func_uint8_t_u_s((g_308 , ((safe_mod_func_int32_t_s_s(l_2552, l_2614)) ^ (safe_sub_func_int32_t_s_s((!(((!(p_4 == (safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s((((p_3 >= ((p_4 < l_2597) < g_170)) < (-1L)) , 1L), g_757)), p_6)))) | 0x4CA00676L) , g_307)), p_5)))), p_5)) , p_4) < p_4) ^ p_4)))), 0xEEL)) > g_2293)), l_2614));
                    }
                    l_2513 |= l_2526;
                }
                l_2513 ^= (safe_lshift_func_uint8_t_u_u(((0L | l_2623) ^ (((safe_lshift_func_int16_t_s_s(l_2510, g_312)) <= (func_16(((g_1078 | l_2626) <= ((l_2627 > ((safe_rshift_func_int8_t_s_s(p_4, ((func_16(((func_16(l_2630) , (-7L)) == 0x5DL)) , 0UL) >= l_2443))) < g_1916)) < 1UL))) && (-7L))) | 0x2074L)), p_4));
                l_2234 = ((((safe_lshift_func_uint16_t_u_s(((func_46(l_2562, p_3, g_9) != g_546) || (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int8_t_s((p_6 , (((safe_div_func_uint16_t_u_u((func_40((p_5 ^ ((p_4 ^ (((!(safe_sub_func_uint32_t_u_u(1UL, g_1242))) || l_2301) | p_6)) || p_6)), l_2627) , g_308), g_1079)) | 0L) , p_6)))) , l_2489), 14))), l_2623)) < g_2640) && 1UL) | p_5);
            }
            else
            {
                unsigned char l_2671 = 253UL;
                int l_2676 = 0x64646240L;
                l_2513 = (safe_rshift_func_uint8_t_u_u((func_30(((((p_4 == 0xC9D4L) , ((l_2526 , (safe_lshift_func_uint8_t_u_u(l_2489, 4))) > g_9)) , l_2513) , ((255UL >= (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(g_1917, (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_1351, 1UL)), 0x4F39783FL)))) >= g_170), g_73))) , g_1325))) != 0x5CF0L), g_1688));
                l_2513 = (safe_rshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(g_123, p_6)) == ((g_308 | (((func_16(((safe_div_func_uint32_t_u_u((+(l_2513 , (safe_rshift_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((g_784 || ((safe_lshift_func_int8_t_s_u(0L, g_2166)) , (0xB8FC76BFL ^ (((safe_sub_func_int8_t_s_s((((0x98A0L && l_2531) , p_6) < 0x47E8L), l_2489)) , l_2671) < g_2043)))), p_4)) >= 0x312324CBL) > g_1917), l_2513)))), p_4)) && 0x1AL)) & l_2552) || l_2234) > g_308)) > l_2671)), 6L)), 4));
                l_2676 = (((safe_rshift_func_int8_t_s_u((p_6 <= p_3), 6)) < 0L) , ((func_40(l_2489, p_3) <= g_1688) >= (safe_rshift_func_int8_t_s_s(l_2513, p_6))));
                g_686 |= ((l_2223 < p_5) | g_1325);
            }
            l_2234 = (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(p_6, ((g_281 | 1L) ^ ((((safe_add_func_uint16_t_u_u(func_16((func_16(g_2166) > ((safe_sub_func_int16_t_s_s(p_3, (safe_rshift_func_int8_t_s_s(5L, 6)))) > l_2531))), 0x637AL)) && l_2301) , g_1078) == g_331)))), g_1079));
        }
        g_1351 = (func_40((safe_rshift_func_uint8_t_u_u(0x28L, (safe_sub_func_int32_t_s_s(l_2513, (g_331 | (((safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s(l_2234, (((+g_313) == (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((l_2701 , p_4), (((((safe_lshift_func_int16_t_s_u(func_16(g_1242), 3)) >= g_121) == g_784) , 3L) ^ p_3))), 12))) != p_5))) , p_4), 5)) <= 4294967295UL) , 0x00B2L)))))), p_4) , 0xCF201C54L);
        l_2513 = (safe_div_func_int8_t_s_s(0L, p_4));
        for (l_2513 = 0; (l_2513 == 19); l_2513 = safe_add_func_int8_t_s_s(l_2513, 5))
        {
            for (g_2293 = 17; (g_2293 >= 41); g_2293++)
            {
                g_427 = g_1079;
            }
            l_2712 = (safe_mod_func_uint16_t_u_u(l_2223, l_2489));
        }
    }
    l_2234 ^= g_499;
    if ((l_2701 , (~func_16((safe_sub_func_uint32_t_u_u((2L == (~l_2234)), (safe_lshift_func_int16_t_s_u(l_2301, (l_2301 > ((1L == 0x378BB950L) < l_2510))))))))))
    {
        unsigned short l_2721 = 0xA900L;
        int l_2738 = (-1L);
        unsigned short l_2771 = 0xF7B7L;
        int l_2809 = 0xA56D6BD1L;
        int l_2828 = 0L;
        g_2166 |= (((((g_331 , p_6) ^ ((safe_mod_func_int16_t_s_s(l_2721, 0x5679L)) , 0x917BL)) == (safe_div_func_int32_t_s_s(0x52B03E2BL, ((p_5 & g_362) ^ (g_362 , p_6))))) || 1UL) <= 7UL);
        if ((+l_2721))
        {
            unsigned l_2732 = 6UL;
            const unsigned char l_2737 = 1UL;
            g_2166 ^= (safe_div_func_int8_t_s_s(((((+(safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((p_3 <= 1UL), (func_46(g_427, ((safe_div_func_int16_t_s_s(((func_16(func_16(l_2732)) > ((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(func_16(func_16(p_4)), g_784)), l_2737)) | g_307)) != p_6), l_2510)) & 1UL), g_308) & 0xCCL))), l_2721))) < 0L) == p_6) , l_2732), g_757));
            l_2738 = (g_1351 , 0x9818C39FL);
            for (g_350 = 0; (g_350 > 9); g_350++)
            {
                g_686 = ((p_3 < p_5) || (((l_2721 != ((((safe_add_func_int8_t_s_s(((safe_div_func_int32_t_s_s(((safe_add_func_int32_t_s_s(l_2738, (~g_784))) , 0xDA692107L), ((safe_mod_func_int8_t_s_s(((g_308 == (p_5 >= (g_312 != l_2737))) | 8L), g_1147)) , l_2223))) , g_2293), 0x90L)) >= g_427) , p_5) , 0x295BL)) <= 0xB24DA3E0L) || g_331));
                l_2738 |= 0xDD6832A2L;
            }
        }
        else
        {
            unsigned char l_2753 = 0xC0L;
            int l_2761 = 0x923880FFL;
            g_499 |= (0xA3L | (safe_sub_func_int32_t_s_s(l_2234, ((p_4 | ((safe_add_func_int32_t_s_s((l_2234 > l_2753), 0x390B74CDL)) <= g_1351)) <= (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(l_2758, g_307)), l_2738))))));
            g_427 = (safe_rshift_func_int16_t_s_u(0xD74BL, 1));
            l_2761 = 0L;
            return p_3;
        }
        g_2166 = (4294967295UL != ((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((l_2766 , func_25(((((safe_mod_func_int32_t_s_s(func_21(p_6), (((p_3 , (((g_1079 , (((((l_2721 >= (safe_sub_func_int32_t_s_s(p_6, (((-10L) & p_5) & l_2771)))) && l_2223) ^ l_2443) > 0xEFL) & l_2701)) || 0UL) | 0xD3F1L)) != p_4) || 0xD666C4F8L))) , 0xE1L) , 0xC08BL) <= p_6), p_5, l_2766, l_2510)) || g_2293), 0xB384L)), g_1147)) & 0x6EB3L));
        for (g_1242 = 0; (g_1242 < (-23)); g_1242--)
        {
            unsigned l_2782 = 8UL;
            int l_2794 = 0x76C873ECL;
            l_2234 |= (l_2721 < ((safe_add_func_uint8_t_u_u(g_757, (~p_5))) , (p_5 , 0xDC56L)));
            if (l_2771)
                continue;
            for (g_686 = (-14); (g_686 != (-24)); --g_686)
            {
                unsigned short l_2797 = 4UL;
                unsigned char l_2802 = 248UL;
                int l_2803 = 7L;
                if ((safe_lshift_func_int8_t_s_s(func_16((safe_rshift_func_int8_t_s_u(func_16(g_170), 4))), g_546)))
                {
                    char l_2793 = 1L;
                    l_2794 = func_46((p_6 == func_46(l_2782, ((65527UL || ((((0xD2FA9229L | ((p_4 , (safe_add_func_uint16_t_u_u(((p_5 && (safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_16(((0xAF0AL > l_2793) , p_3)), 12)), g_2293)), l_2223)), 0xDFL))) < l_2782), l_2758))) || p_5)) > 0xD567452EL) & 0xF6F8L) > g_163)) , 1UL), g_974)), g_9, p_5);
                    l_2738 = (safe_div_func_int16_t_s_s(0x46B8L, g_2166));
                    l_2738 |= l_2797;
                }
                else
                {
                    int l_2799 = 0x6DFBBBD4L;
                    int l_2804 = (-1L);
                    if ((p_4 > p_6))
                    {
                        unsigned char l_2798 = 249UL;
                        int l_2810 = 1L;
                        l_2803 = (((((p_5 , l_2798) != (0x4B6AL || l_2799)) <= (((l_2797 , (p_6 > (safe_div_func_uint32_t_u_u(p_6, l_2798)))) ^ ((((l_2802 && l_2802) && l_2798) != l_2234) & 1L)) ^ l_2738)) & 0UL) ^ g_2640);
                        l_2804 = ((g_1351 < l_2802) ^ p_4);
                        l_2809 ^= (((l_2802 , g_163) < (+(safe_div_func_int8_t_s_s((safe_mod_func_int8_t_s_s(0x26L, g_784)), (l_2782 & l_2738))))) < (p_3 >= g_974));
                        l_2810 ^= l_2803;
                    }
                    else
                    {
                        return p_3;
                    }
                    l_2828 = (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((((safe_add_func_int32_t_s_s(g_362, (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((g_499 | (safe_add_func_uint8_t_u_u(((p_5 == (g_73 > l_2825)) , 6UL), ((safe_add_func_int16_t_s_s(l_2803, ((((g_170 >= p_3) & l_2797) < g_2293) >= g_2293))) != 65535UL)))), g_757)), 0x6F70F1D7L)) >= 0x2D88L) , p_5))) , g_1916) , p_5), (-1L))) | l_2771), p_5)), l_2803));
                    l_2794 |= func_46(l_2721, l_2782, (((p_5 && p_6) > ((l_2803 , (safe_rshift_func_uint16_t_u_u((func_16(g_476) & l_2804), 0))) && (safe_lshift_func_uint16_t_u_s((((safe_div_func_uint16_t_u_u(func_16(l_2835), 0x3696L)) != l_2701) != g_2166), p_6)))) && p_5));
                }
                if (g_1325)
                    break;
            }
            l_2828 = (((l_2782 == 0xAC93L) || (func_25((0x84L > g_686), p_6, g_784, p_6) > (safe_mod_func_int32_t_s_s(0xB301DEC6L, l_2809)))) <= (-2L));
        }
    }
    else
    {
        short l_2852 = 0L;
        int l_2853 = 0xF5A28B9EL;
        unsigned l_2860 = 0x5A94350DL;
        g_1351 ^= (1L | g_1917);
        l_2853 = (safe_rshift_func_int16_t_s_s((0x5DL >= (safe_sub_func_uint32_t_u_u((func_16(g_281) > (safe_div_func_uint32_t_u_u(0x1D846BFDL, ((safe_lshift_func_int8_t_s_u((((+((p_6 , ((+(g_362 > func_16((((safe_add_func_int16_t_s_s((((1L == ((safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(func_16(l_2852), p_5)), 0x2CAEL)) < 0x7714212CL)) < l_2852) || p_3), 6UL)) | l_2758) == 0x13L)))) && (-1L))) <= g_121)) && l_2758) != 65527UL), 4)) , g_312)))), (-2L)))), g_307));
        l_2234 = (g_1079 > (safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((func_30(l_2860) & g_2640) <= ((safe_rshift_func_uint8_t_u_s(((l_2510 && (g_2166 || (((((((safe_mod_func_uint32_t_u_u(l_2860, g_2293)) <= ((!(safe_add_func_int32_t_s_s(8L, l_2510))) >= (-4L))) , p_6) , 0UL) , p_4) , p_3) ^ g_2640))) || p_3), 1)) ^ l_2853)), l_2701)), 7)) , l_2701) && 0x72L), 6)));
        g_686 = l_2835;
    }
    l_2867 = g_546;
    return l_2868;
}







static short func_11(short p_12, int p_13, unsigned char p_14, unsigned p_15)
{
    char l_2198 = 0L;
    int l_2199 = 0xE973F6EBL;
    l_2199 |= ((((func_16(g_784) && (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_350, 5)), 0x26A7L))) && g_2043) ^ (((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(g_286, func_16(p_12))), ((((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(g_1884, l_2198)) == g_499), 0)), l_2198)) > g_422) <= 255UL) != 0x30B4F654L))) , p_12), l_2198)) <= p_13) < l_2198)) <= p_15);
    g_1242 = ((safe_add_func_uint8_t_u_u(func_25((g_757 , (safe_lshift_func_uint16_t_u_u(g_121, g_1242))), p_13, l_2199, (func_16(l_2198) > (((g_1916 < (((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((g_757 != g_686), 6)) >= l_2199), p_14)) , p_15) , g_784), 3)), 7)) , l_2199) & g_1242)) , g_1351) , l_2198))), 0xACL)) <= 4294967295UL);
    return l_2199;
}







static unsigned short func_16(unsigned p_17)
{
    unsigned l_2179 = 0x9DE4108CL;
    int l_2180 = (-1L);
    l_2180 ^= ((safe_mod_func_int32_t_s_s(p_17, ((safe_lshift_func_int16_t_s_u((g_331 || l_2179), p_17)) , p_17))) || g_181);
    return g_686;
}







static unsigned char func_18(int p_19, char p_20)
{
    char l_23 = 0x5FL;
    int l_1989 = 4L;
    int l_2002 = 6L;
    unsigned short l_2012 = 0UL;
    char l_2045 = 0xE9L;
    unsigned l_2083 = 0x9441FB23L;
    unsigned l_2119 = 1UL;
    if (func_21((l_23 , p_20)))
    {
        l_1989 = (safe_mod_func_int8_t_s_s(l_23, g_1079));
    }
    else
    {
        short l_2010 = (-1L);
        unsigned l_2011 = 0x5E2951FBL;
        char l_2050 = 0x82L;
        int l_2062 = 0x53729B5AL;
        int l_2066 = 0x837410B5L;
        char l_2109 = 0x03L;
        g_499 ^= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((g_281 < (((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(((l_1989 != ((safe_mod_func_int8_t_s_s((l_2002 <= (((safe_rshift_func_int8_t_s_u(l_2002, 2)) & ((g_362 , (((safe_unary_minus_func_uint32_t_u(4294967295UL)) , (g_9 & ((g_331 , (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((p_19 , l_2002), l_2010)), 0x31L))) , g_350))) & l_2011)) | l_2011)) & l_2011)), l_1989)) ^ g_974)) && l_1989), 0xFDC9L)), 5)) , p_20), 13)) , p_20) < g_307)) , l_2011), l_2012)), g_1884));
        if ((safe_div_func_int8_t_s_s((l_2012 , (-1L)), 252UL)))
        {
            unsigned short l_2023 = 1UL;
            const int l_2024 = 0xB0CA4BD5L;
            int l_2027 = 0x841CCECDL;
            int l_2039 = 0xD70D77DDL;
            l_1989 = 0x7DBBA0B0L;
            l_2027 = (g_422 != ((safe_add_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((((g_757 > p_20) || (safe_sub_func_int32_t_s_s((p_20 < (p_20 && l_2023)), (l_2024 == (safe_rshift_func_uint16_t_u_u(g_427, p_19)))))) , p_19), g_170)) > 0L), 0xF765L)) || p_20) > l_2024) | 0x19DBF5DFL), g_1351)) == g_427));
            if (l_2024)
            {
                int l_2028 = 0xB12BD7E5L;
                l_2028 = g_181;
                l_2027 |= (func_30((func_21(p_19) > (safe_add_func_uint16_t_u_u((p_19 , (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u(g_9, 0)) && (+p_20)), l_2010))), ((p_19 || ((((-1L) ^ (((safe_add_func_int16_t_s_s(1L, l_2039)) || 0xAD9B3FBEL) < l_2011)) ^ g_757) >= l_1989)) | p_19))))) | (-3L));
                for (l_2012 = (-9); (l_2012 == 48); l_2012 = safe_add_func_uint16_t_u_u(l_2012, 7))
                {
                    if (p_20)
                    {
                        unsigned char l_2042 = 0UL;
                        int l_2044 = 0x58556BA9L;
                        if (l_2042)
                            break;
                        g_2043 ^= ((func_21(l_2042) != g_9) , l_2023);
                        l_2044 = 1L;
                    }
                    else
                    {
                        if (l_2027)
                            break;
                        g_499 |= (p_20 > (+0x3B429DB9L));
                        g_1242 |= l_2045;
                    }
                }
                g_1351 = (((safe_sub_func_uint16_t_u_u(g_1325, l_2028)) || (safe_sub_func_uint32_t_u_u(g_1916, l_2050))) != g_784);
            }
            else
            {
                return g_331;
            }
        }
        else
        {
            unsigned short l_2057 = 65535UL;
            unsigned l_2065 = 4294967295UL;
            char l_2084 = 8L;
            const char l_2120 = 0xB1L;
            unsigned short l_2125 = 65535UL;
            int l_2128 = 0x9571B1C3L;
            short l_2142 = 1L;
            l_2066 &= ((safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((l_2012 || (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint32_t_u((l_2057 , 0x3D7E30C5L)))))) <= (func_46(l_2012, l_23, (safe_add_func_uint16_t_u_u(p_19, ((safe_lshift_func_uint16_t_u_u((g_121 | (l_2062 , (safe_lshift_func_int8_t_s_s(0x74L, 3)))), p_20)) || (-1L))))) <= p_20)), g_784)) <= l_2065), 65527UL)) , 4L);
            l_2062 = (safe_mod_func_int16_t_s_s((((0xCDA8L != func_46((((((4294967292UL & (!((safe_add_func_int8_t_s_s((!(safe_rshift_func_uint16_t_u_s(g_499, (l_2011 || ((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(p_20, ((safe_lshift_func_int16_t_s_s(g_1351, 13)) <= (p_19 && g_974)))) & 5L), p_19)), l_2083)), l_2057)) , 0xAFBEF39DL))))), l_2012)) && l_2010))) <= l_2011) , g_1325) , p_20) , p_20), l_2084, p_20)) || 9L) || 0xF2FE5314L), l_2011));
            for (g_1351 = 0; (g_1351 < 3); g_1351 = safe_add_func_int8_t_s_s(g_1351, 8))
            {
                unsigned short l_2110 = 0x2FCDL;
                int l_2133 = 0xBD358494L;
                if (((((safe_sub_func_int8_t_s_s((p_20 ^ (g_163 , (((!((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((func_46(l_2062, (func_46(p_20, g_123, (safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(p_19, ((l_23 < (l_2012 || (safe_div_func_int32_t_s_s(g_9, p_20)))) & l_2065))), 7)), 0))) <= 65535UL), g_1917) > p_20) && p_19) | (-4L)), 3)), p_19)) || p_20)) < l_2010) ^ l_1989))), 0x46L)) | g_1242) < 0UL) == g_546))
                {
                    int l_2118 = 0L;
                    g_499 = g_1325;
                    if (p_20)
                    {
                        g_686 |= (safe_lshift_func_uint16_t_u_s(func_46(p_19, l_2065, ((g_181 && ((safe_rshift_func_int8_t_s_u((((((safe_mod_func_uint32_t_u_u(4294967295UL, p_20)) != g_1147) ^ (((g_308 | (safe_sub_func_uint32_t_u_u(l_23, 0UL))) <= g_121) || l_2109)) , l_2110) > 9UL), 5)) > l_2010)) <= l_2110)), 3));
                        g_1242 ^= func_46(l_2065, ((((safe_div_func_int8_t_s_s(l_2084, g_331)) <= ((p_19 != (safe_mod_func_uint32_t_u_u(g_757, (l_1989 , g_1078)))) < g_286)) ^ p_20) <= l_2002), p_20);
                    }
                    else
                    {
                        short l_2117 = 4L;
                        g_427 |= ((!p_19) , (safe_rshift_func_int8_t_s_s(8L, 1)));
                        g_1242 &= ((((((func_40(l_2117, ((+l_2117) | (func_40(p_19, ((l_2118 , (func_46((func_40(l_2066, (func_46(l_2118, l_23, l_2119) , p_19)) > p_20), l_2062, l_2110) >= (-8L))) , g_686)) || 1UL))) == g_974) || g_686) , p_20) , (-4L)) <= l_2120) == 1UL);
                        g_350 |= l_2110;
                        l_2128 = ((safe_mod_func_int32_t_s_s(((p_19 && p_20) > (p_19 || ((((safe_sub_func_int8_t_s_s(l_2125, ((l_2012 , (safe_div_func_uint8_t_u_u(g_784, (g_121 & (((0xA8CFL ^ (-1L)) & 4294967295UL) == g_1916))))) | p_20))) < 0x5AL) > l_2118) | l_2117))), g_1351)) == 1UL);
                    }
                    if (g_686)
                        break;
                    l_2133 = ((safe_rshift_func_int8_t_s_u(func_40((safe_sub_func_int8_t_s_s(8L, (p_19 , p_20))), p_19), (l_2065 < p_19))) >= 0x177B7774L);
                }
                else
                {
                    unsigned l_2155 = 0UL;
                    l_2062 = ((safe_rshift_func_int8_t_s_s(((func_46((((func_46(p_20, ((l_2109 != ((1UL && func_46(((-7L) && ((func_40(((safe_mod_func_int16_t_s_s((-2L), (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s(((p_19 <= func_46(((0x71E1L || func_46(g_422, p_19, l_2133)) & l_2128), g_1917, g_1325)) != g_546), g_1078)) , 18446744073709551615UL) , 0x21L), p_20)))) , l_2050), l_2142) > 0xC1L) | 9UL)), p_20, g_2043)) != l_2133)) , l_2110), p_20) <= g_1325) != 65532UL) | l_2066), l_2120, g_1325) || g_476) < p_19), g_2043)) <= p_19);
                    l_2128 |= (safe_lshift_func_int8_t_s_u((((safe_mod_func_int8_t_s_s(((((safe_sub_func_uint16_t_u_u((((g_308 > ((safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_121, (0x67L & (0x2AAD1820L | ((safe_mod_func_int16_t_s_s((8UL > 0x9BB0L), ((l_2155 ^ 0x280C2258L) && ((safe_sub_func_int16_t_s_s((((safe_rshift_func_int16_t_s_u(((+p_19) < 0x5D3FL), p_20)) ^ 1UL) ^ 4294967286UL), g_422)) >= g_1916)))) != 0x64749832L))))), p_19)) || g_312)) | 4294967295UL) && p_19), 1UL)) | p_20) > g_1917) , 0xEEL), 0xF1L)) == l_2155) <= 65532UL), l_2133));
                    l_2062 = g_1351;
                    l_2128 = ((safe_mod_func_uint16_t_u_u((~(func_46(l_2011, l_2125, (g_422 && l_2066)) & ((g_9 , p_19) , (safe_div_func_uint8_t_u_u((p_20 ^ (((g_1351 && 8UL) ^ g_1325) && g_1242)), 0x04L))))), 7L)) , (-1L));
                }
            }
            g_2166 = (p_20 == (((safe_rshift_func_uint16_t_u_u(g_546, 9)) >= p_19) > p_20));
        }
        l_2062 = (safe_lshift_func_uint16_t_u_u(65535UL, 12));
    }
    l_1989 = (safe_mod_func_int8_t_s_s((func_25(g_974, g_476, (safe_unary_minus_func_int8_t_s(g_1351)), (l_1989 , (l_1989 , p_20))) , l_2045), (~l_2002)));
    return g_181;
}







static int func_21(const unsigned short p_22)
{
    char l_24 = 0x01L;
    const char l_1709 = (-8L);
    const char l_1798 = (-1L);
    int l_1896 = 0xE9202FF4L;
    if ((l_24 && ((((func_25(g_9, ((func_30(l_24) > 6L) & (p_22 >= ((safe_lshift_func_int16_t_s_u(p_22, 12)) > (((l_24 == (l_24 < g_1147)) , 0xA0F58DBAL) , l_24)))), g_1325, l_1709) ^ l_1709) > l_24) ^ p_22) , 0x98FFL)))
    {
        short l_1791 = 0xF5E5L;
        int l_1824 = 0x23625DB1L;
        unsigned l_1852 = 9UL;
        if (((((safe_lshift_func_int8_t_s_u(((func_30(g_757) ^ (safe_div_func_int16_t_s_s(g_9, (l_1791 , p_22)))) <= ((0L ^ ((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_24, g_1079)), (safe_mod_func_int32_t_s_s(0x6B2A015CL, 0x32E92800L)))) & (-7L))) == l_1791)), 0)) & 246UL) != 0xF1D15767L) ^ l_1798))
        {
            unsigned short l_1831 = 2UL;
            if (p_22)
            {
                int l_1839 = 1L;
                for (g_1325 = 0; (g_1325 >= (-2)); g_1325--)
                {
                    char l_1823 = (-1L);
                    int l_1838 = 8L;
                    l_1824 = func_30((safe_rshift_func_uint8_t_u_u(p_22, (safe_sub_func_uint16_t_u_u(((g_1351 >= (g_362 < (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(0xD9L, ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(0L, g_307)), ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(0xC828L, p_22)), 9)) | 0xE473E7B5L))) & l_24), p_22)), (-1L))) <= g_362))) == p_22), l_24)))) || 0L), l_1823)))));
                    l_1838 |= ((((safe_sub_func_uint8_t_u_u(8UL, (((safe_rshift_func_uint8_t_u_u(((l_1823 & l_1823) , ((g_286 || l_1824) , (((safe_lshift_func_uint8_t_u_s(0x4EL, 0)) , ((func_30(l_1831) | ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((p_22 > 0x555FL) ^ p_22) & p_22), (-10L))) & p_22), g_1079)) < l_1798), 1UL)) <= 0xC145L)) ^ 0L)) <= g_9))), 4)) >= p_22) , l_1823))) || p_22) , l_1823) , 0x0FD8CF70L);
                    l_1839 = l_24;
                    l_1838 |= (1L == (l_1831 < (g_1351 || (g_686 | p_22))));
                }
                l_1839 |= ((g_427 & g_422) | (p_22 && p_22));
                g_499 = (l_1791 == 0x2DED2190L);
                g_427 = (((safe_sub_func_int16_t_s_s((g_499 < (((safe_div_func_uint32_t_u_u((((!((!p_22) >= (safe_div_func_int32_t_s_s(((g_170 | p_22) == (65535UL && 3L)), p_22)))) >= (~((g_313 | (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(65535UL, 13)), p_22)), l_1831))) < l_1852))) , p_22), l_1791)) >= 0L) & l_1709)), g_286)) || g_1147) ^ l_1709);
            }
            else
            {
                int l_1853 = 0x4E5C48BDL;
                l_1853 = g_427;
            }
            l_1824 = (safe_sub_func_int16_t_s_s(p_22, ((l_1709 || p_22) <= func_25(p_22, (((((safe_rshift_func_int16_t_s_u(l_1791, 13)) && p_22) <= (l_1831 , (1UL == 3L))) != 0x62F3L) >= p_22), p_22, g_220))));
        }
        else
        {
            int l_1860 = (-1L);
            unsigned l_1861 = 4294967293UL;
            g_350 |= l_1860;
            g_350 = p_22;
            l_1860 = (((func_40((~func_25(l_1824, g_307, l_1861, (safe_sub_func_uint16_t_u_u(p_22, p_22)))), (safe_add_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_22, ((((safe_add_func_uint32_t_u_u(p_22, l_1709)) ^ p_22) >= l_24) & p_22))), p_22)) & l_1852), p_22))) >= 0x50L) > l_1861) & l_1860);
        }
        l_1824 = (safe_add_func_int32_t_s_s(g_1078, l_1852));
        g_686 = (safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(6UL, ((l_24 < p_22) >= (0xADAAL == g_9)))) >= (((~g_686) == (safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_22, g_331)), ((p_22 > p_22) , g_281)))) , p_22)) , g_546), 0x8CL)), l_1824));
    }
    else
    {
        int l_1915 = 0xE8539900L;
        int l_1919 = (-1L);
        int l_1948 = 0xD1AEF921L;
        unsigned l_1949 = 0x243CDD02L;
        if (g_350)
        {
            unsigned l_1895 = 0UL;
            int l_1920 = (-1L);
            g_1884 = 0x534C7ADBL;
            if (p_22)
            {
                unsigned char l_1887 = 0x7FL;
                for (l_24 = 0; (l_24 == 0); l_24++)
                {
                    unsigned char l_1901 = 248UL;
                    if ((l_1887 && 0x1910EC4AL))
                    {
                        unsigned short l_1894 = 0x463DL;
                        int l_1914 = (-3L);
                        l_1896 |= (safe_lshift_func_uint8_t_u_u(2UL, ((p_22 , 65535UL) <= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_1894, l_1895)), 3)))));
                        l_1901 = (safe_add_func_uint8_t_u_u((g_427 == l_1894), (safe_lshift_func_uint16_t_u_s(g_123, p_22))));
                        l_1914 |= ((g_499 > ((-1L) != (g_220 , g_73))) == (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((!(0x4048L >= (0x85L | l_24))), (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((255UL ^ ((safe_div_func_uint16_t_u_u((((g_121 >= 255UL) != l_1887) <= g_686), l_1894)) > p_22)), p_22)), 5)))), g_331)));
                    }
                    else
                    {
                        if (l_1915)
                            break;
                        g_1916 &= (func_30(p_22) , l_1887);
                        g_1242 ^= (-10L);
                        if (g_1917)
                            break;
                    }
                }
                g_1351 ^= (safe_unary_minus_func_int16_t_s(func_40(l_1915, l_1919)));
            }
            else
            {
                l_1920 = 0x94CEBBC1L;
                l_1919 = g_422;
                l_1919 = 0x4CCE954DL;
            }
        }
        else
        {
            int l_1923 = 5L;
            int l_1950 = 8L;
            unsigned l_1955 = 5UL;
            l_1950 &= ((safe_sub_func_int16_t_s_s(5L, (l_1923 | ((safe_lshift_func_uint8_t_u_s(g_1325, 5)) <= (~(safe_rshift_func_int8_t_s_s((((!((safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s(((((l_1709 > l_1915) & ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0xD6AA89E2L, (safe_div_func_uint32_t_u_u(l_1896, (-10L))))), (safe_div_func_uint16_t_u_u((l_1923 ^ g_312), l_1948)))), g_784)) , g_499), l_1949)), p_22)), 0x565CL)) , 253UL)) >= g_312) && p_22), 255UL)) && p_22), 15)) <= p_22)) & 0x7FL) > 1UL), g_476))))))) >= p_22);
            l_1919 = p_22;
            for (g_784 = 0; (g_784 >= 21); g_784++)
            {
                unsigned char l_1956 = 0x59L;
                if (func_46((!(func_46((safe_lshift_func_int16_t_s_u(l_1955, l_1956)), ((safe_lshift_func_uint16_t_u_u(((p_22 || (((func_46((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_22, 6)), (func_46(l_1948, g_1078, l_1919) < g_9))), 6)), l_1896, g_1884) == g_546) & 0x7DBFC49FL) && p_22)) , g_1884), p_22)) | p_22), g_546) , g_350)), p_22, g_1884))
                {
                    unsigned char l_1967 = 0UL;
                    for (g_170 = (-11); (g_170 >= 49); g_170++)
                    {
                        l_1967 = 1L;
                    }
                    return l_1956;
                }
                else
                {
                    short l_1978 = 1L;
                    int l_1980 = (-9L);
                    l_1919 &= (!((safe_rshift_func_int8_t_s_s(g_362, 4)) > g_350));
                    if (g_163)
                    {
                        int l_1970 = 0x43E0218AL;
                        l_1970 ^= func_46((l_1798 , l_1955), ((p_22 , g_1916) , 0UL), g_121);
                    }
                    else
                    {
                        unsigned l_1979 = 0x2FE23109L;
                        l_1980 = (safe_sub_func_uint32_t_u_u((g_1079 > 0L), (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_312, (safe_unary_minus_func_uint8_t_u((l_1978 < l_1979))))), (p_22 > g_1916)))));
                        g_1242 &= g_163;
                    }
                }
                l_1950 = p_22;
                for (l_1956 = (-20); (l_1956 <= 32); l_1956 = safe_add_func_int32_t_s_s(l_1956, 1))
                {
                    return g_546;
                }
                for (g_308 = 29; (g_308 <= (-22)); --g_308)
                {
                    l_1896 = p_22;
                }
            }
        }
        l_1919 = (safe_add_func_int8_t_s_s(0x44L, 0x0DL));
        g_499 = l_1949;
    }
    return l_1709;
}







static unsigned func_25(unsigned short p_26, int p_27, int p_28, const unsigned p_29)
{
    unsigned short l_1710 = 65535UL;
    unsigned short l_1715 = 0x8087L;
    unsigned l_1717 = 5UL;
    int l_1784 = 0x5B2B1A63L;
    int l_1785 = 0x6F4BC1D8L;
    char l_1786 = 3L;
    if (func_46(l_1710, (safe_rshift_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(l_1715, p_26)) ^ 0xA3L) & 0xC020726EL), 6)), p_27))
    {
        p_27 = l_1710;
    }
    else
    {
        char l_1730 = (-1L);
        int l_1732 = 1L;
        if ((l_1715 && (g_313 & p_27)))
        {
            unsigned l_1716 = 0x836CF001L;
            return l_1716;
        }
        else
        {
            unsigned l_1729 = 2UL;
            int l_1731 = 0x06754A1FL;
            l_1717 = p_28;
            for (g_974 = (-4); (g_974 <= (-13)); g_974 = safe_sub_func_uint32_t_u_u(g_974, 8))
            {
                short l_1724 = 0xD259L;
                l_1731 = ((g_331 == (safe_sub_func_uint16_t_u_u((p_26 >= (safe_div_func_int8_t_s_s((0x87B2L > (l_1724 || g_1078)), (safe_rshift_func_int8_t_s_u(((p_29 >= (g_1242 < ((safe_sub_func_int8_t_s_s(l_1729, p_27)) | p_27))) != l_1730), 4))))), g_757))) != l_1724);
            }
            l_1732 = l_1729;
        }
    }
    g_686 = ((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((0x26L > (l_1710 | p_27)), ((((g_121 || (g_307 == (p_29 == p_29))) & ((p_28 ^ l_1717) ^ p_29)) || g_307) ^ l_1717))) != (-7L)), (-6L))) , p_29);
    if (g_73)
    {
        g_1351 &= p_26;
    }
    else
    {
        int l_1739 = 0x4A3BBB6DL;
        int l_1774 = 0x11518F3FL;
        for (p_27 = 19; (p_27 <= (-30)); p_27 = safe_sub_func_uint32_t_u_u(p_27, 7))
        {
            unsigned l_1742 = 1UL;
            unsigned l_1767 = 0UL;
            const int l_1776 = 0xCA83D11DL;
            int l_1777 = 0x36297800L;
            l_1739 |= g_362;
            if (l_1739)
                break;
            for (g_1688 = 0; (g_1688 < 28); g_1688++)
            {
                unsigned char l_1762 = 0xF1L;
                l_1742 |= func_40(p_27, l_1739);
                if ((p_26 || g_307))
                {
                    for (g_170 = (-12); (g_170 <= 44); g_170 = safe_add_func_int16_t_s_s(g_170, 4))
                    {
                        g_427 = (safe_rshift_func_uint16_t_u_u(p_26, p_26));
                        g_686 = (1UL == ((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int8_t_s_s(p_27, (safe_rshift_func_int8_t_s_u(p_29, ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(g_350, 3)), g_757)) , (safe_mod_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(l_1739, (l_1762 == ((+(safe_add_func_int32_t_s_s(p_27, (safe_sub_func_int16_t_s_s((g_73 | g_312), g_1688))))) & 0x4EL)))) == 6L), 0xE777A1C6L)) ^ p_29), 0x1FL))))))) && g_757))) , g_1351));
                    }
                }
                else
                {
                    l_1767 = g_1351;
                    if (g_163)
                        break;
                }
                return l_1739;
            }
            l_1777 ^= (1L >= (l_1739 <= ((safe_sub_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_s(l_1774, (p_29 || (safe_unary_minus_func_uint32_t_u(((0xDA2F7CD6L >= 2L) != 0xB2D6L)))))) <= (l_1739 , (g_163 != l_1710))) ^ l_1776) >= 0UL), p_29)) <= g_422)));
        }
        l_1739 = (safe_sub_func_uint8_t_u_u(((p_29 < (safe_sub_func_int32_t_s_s(p_29, (func_46((safe_lshift_func_int16_t_s_u(l_1717, 11)), l_1774, l_1710) < 0L)))) ^ ((g_757 , (-1L)) && 0x8CL)), p_27));
        l_1784 &= g_499;
    }
    l_1785 ^= l_1784;
    return l_1786;
}







static unsigned func_30(unsigned short p_31)
{
    unsigned char l_38 = 0x41L;
    short l_39 = (-1L);
    int l_864 = (-6L);
    unsigned char l_917 = 0xF7L;
    unsigned char l_918 = 1UL;
    int l_921 = 0xEA9D470AL;
    int l_939 = 4L;
    int l_941 = 0x29A40A8AL;
    int l_1033 = 0x60629189L;
    char l_1226 = 0xF0L;
    unsigned l_1293 = 18446744073709551615UL;
    short l_1313 = 9L;
    int l_1540 = 1L;
    int l_1613 = (-3L);
    char l_1637 = 0xD6L;
    for (p_31 = (-23); (p_31 == 21); p_31++)
    {
        unsigned char l_43 = 0x64L;
        const unsigned char l_819 = 0x68L;
        int l_820 = 0x791A72BEL;
        unsigned l_851 = 0x4803CC9BL;
        l_820 = (safe_lshift_func_uint16_t_u_s(((((safe_sub_func_uint8_t_u_u(((l_38 < (((l_39 > (p_31 , func_40(l_38, l_43))) == ((0L >= g_757) , (1L | l_819))) & g_9)) <= 0x13FCL), 0xEBL)) , 1L) && p_31) , p_31), 7));
        l_820 = ((safe_rshift_func_uint8_t_u_u(l_39, (safe_rshift_func_int8_t_s_s(func_46(l_39, l_39, l_38), (l_39 , ((((g_757 <= (+g_757)) <= (((safe_lshift_func_int16_t_s_u(0x1D76L, g_9)) ^ p_31) , l_819)) > g_686) & 0x9954L)))))) <= p_31);
        for (g_312 = 0; (g_312 <= (-14)); g_312--)
        {
            unsigned l_829 = 0xAE713E3FL;
            int l_878 = 0xDD5D5255L;
            l_829 |= l_39;
            if (((((0x4FCC18D8L ^ p_31) == ((l_43 != ((safe_add_func_uint16_t_u_u(0UL, (safe_add_func_uint32_t_u_u((p_31 | ((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(l_38, ((p_31 & (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_121, ((l_43 == 0xC770L) ^ 7UL))), (-1L)))) < g_757))), g_362)), (-5L))), l_38)), l_851)) & g_307))), 3)) >= l_851)), l_829)))) > g_427)) < l_829)) == 0x8F42L) , 0x179C448CL))
            {
                unsigned l_865 = 0UL;
                if ((((safe_sub_func_int8_t_s_s(g_121, ((((safe_div_func_int16_t_s_s(p_31, 0xC558L)) >= (safe_lshift_func_uint16_t_u_s(((p_31 && 1UL) , (p_31 && (safe_lshift_func_uint16_t_u_s(l_43, 1)))), (safe_add_func_uint16_t_u_u(g_427, l_38))))) <= p_31) && l_829))) , g_331) > l_38))
                {
                    g_427 |= p_31;
                }
                else
                {
                    for (g_170 = 13; (g_170 >= 57); g_170 = safe_add_func_uint32_t_u_u(g_170, 9))
                    {
                        return g_9;
                    }
                    l_864 = 0L;
                    g_427 = g_181;
                }
                l_865 = g_313;
                l_878 = (~(0x30L >= (((safe_lshift_func_uint16_t_u_s(3UL, ((safe_rshift_func_uint16_t_u_s(p_31, 0)) ^ (((safe_mod_func_uint8_t_u_u(p_31, g_422)) != (0x36L != l_43)) , (safe_sub_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((p_31 < p_31) | g_308), l_43)), l_39)), 0xF49EL)))))) < p_31) && g_220)));
            }
            else
            {
                char l_910 = 1L;
                for (g_350 = 0; (g_350 <= 1); g_350 = safe_add_func_uint8_t_u_u(g_350, 1))
                {
                    short l_881 = 0L;
                    int l_882 = 0x880A4EF9L;
                    l_882 = (l_881 && (p_31 , g_499));
                    for (g_422 = 0; (g_422 == 55); ++g_422)
                    {
                        unsigned char l_885 = 9UL;
                        l_878 = 8L;
                        l_882 = (g_476 != l_851);
                        g_499 = ((l_885 == (safe_sub_func_int8_t_s_s((2L & (g_123 <= ((0x2FL && (safe_sub_func_uint32_t_u_u(l_885, (safe_add_func_uint8_t_u_u((((p_31 ^ (!p_31)) != (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s(p_31, (((0x9CF21EE8L <= 0xFFD87A9DL) && g_312) , 0x22E1D874L))) > g_123) , 0xD3A0L), l_829)), 0xF48632A2L)), g_422))) , 255UL), g_422))))) && 0x85L))), 249UL))) > g_73);
                        return g_312;
                    }
                    for (g_281 = (-5); (g_281 != 16); g_281++)
                    {
                        int l_902 = 0xDB7D45F8L;
                        l_902 = (~l_39);
                    }
                }
                for (g_170 = (-16); (g_170 > 47); g_170 = safe_add_func_uint16_t_u_u(g_170, 8))
                {
                    char l_907 = 1L;
                    l_864 = 0x628FF7A7L;
                    g_427 ^= ((safe_mod_func_uint16_t_u_u(g_9, p_31)) || l_43);
                    if (l_907)
                        break;
                    if ((safe_rshift_func_uint8_t_u_u(((p_31 & g_422) | g_313), 5)))
                    {
                        l_910 = l_878;
                    }
                    else
                    {
                        return l_819;
                    }
                }
            }
            if (l_878)
                continue;
        }
        if (p_31)
            continue;
    }
    if ((((((p_31 < 0x20L) && (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(func_40(l_39, (g_313 < ((safe_sub_func_uint8_t_u_u(((l_917 & (l_918 ^ ((safe_lshift_func_uint8_t_u_s(p_31, p_31)) , 0xF7B51EA8L))) , p_31), 252UL)) ^ g_476))), 13)), p_31))) != l_921) || g_181) | p_31))
    {
        unsigned short l_924 = 2UL;
        short l_940 = (-2L);
        int l_963 = 3L;
        int l_988 = 0xC86CA639L;
        unsigned short l_1029 = 1UL;
        unsigned short l_1037 = 0x7546L;
        unsigned l_1157 = 9UL;
        if ((!(safe_mod_func_int8_t_s_s((l_924 && (func_46((safe_rshift_func_uint16_t_u_u(6UL, (l_924 != (g_121 || ((safe_lshift_func_int8_t_s_u(0L, p_31)) & (((((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(1UL, (((safe_add_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(l_939, ((func_46(g_350, l_38, p_31) , 1UL) && l_39))) < g_546), (-9L))), 2UL)) >= (-7L)) | g_546))) || l_924), g_757)) ^ 0L) , (-1L)) & 0x49L) == 0x81L)))))), l_38, l_940) & 0xC4L)), l_924))))
        {
            char l_969 = 0x4CL;
            int l_992 = 0xE515ABFDL;
            int l_1068 = 0x506E521BL;
            int l_1110 = 9L;
            unsigned short l_1138 = 1UL;
            if ((l_917 , func_46(l_941, l_940, (safe_mul_func_int16_t_s_s((~func_46((safe_rshift_func_int16_t_s_u(p_31, (safe_rshift_func_uint16_t_u_u(1UL, 9)))), p_31, (g_123 , 0x5835L))), 0L)))))
            {
                unsigned l_962 = 0x09D27A45L;
                int l_989 = 7L;
                int l_1009 = 1L;
                g_499 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((g_163 & (l_924 || (g_784 <= p_31))), 5)), 5));
                l_963 = (((safe_add_func_uint8_t_u_u(g_307, (safe_lshift_func_uint8_t_u_s((p_31 < (((((safe_rshift_func_int16_t_s_u((-9L), l_921)) == (g_476 , 1UL)) && (safe_sub_func_int16_t_s_s(g_757, ((safe_add_func_uint16_t_u_u(p_31, ((65526UL >= p_31) >= l_962))) & 247UL)))) , p_31) >= l_924)), 4)))) | 0x0DL) <= p_31);
                if (g_476)
                {
                    unsigned l_987 = 0xEB57AFDCL;
                    if ((safe_unary_minus_func_uint8_t_u(((g_181 , (safe_sub_func_int8_t_s_s((((~l_940) | p_31) || (((safe_rshift_func_int8_t_s_s(((l_969 != (p_31 , (safe_rshift_func_uint16_t_u_s((0x0EL != g_331), (l_969 | (safe_div_func_int16_t_s_s(((l_969 | g_974) <= 0xFEBAL), g_686))))))) >= 1L), g_220)) <= g_220) || l_962)), l_969))) >= (-1L)))))
                    {
                        l_989 ^= (safe_sub_func_int16_t_s_s(func_46(p_31, (+func_40(g_181, ((((safe_div_func_int8_t_s_s(0xCBL, (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(6L, 3)), (safe_sub_func_int32_t_s_s((p_31 < (((safe_lshift_func_int16_t_s_s(l_987, 7)) , (g_308 , l_987)) , 4294967295UL)), g_312)))))) && 0xCA2F5718L) | l_963) , p_31))), p_31), l_988));
                        l_963 = (safe_div_func_int16_t_s_s(0x16B3L, func_40(l_987, p_31)));
                    }
                    else
                    {
                        l_992 ^= (0UL != g_73);
                    }
                }
                else
                {
                    unsigned l_993 = 0x879EDB9DL;
                    l_993 = l_940;
                    for (g_362 = (-13); (g_362 == 8); g_362++)
                    {
                        unsigned char l_1008 = 0xB6L;
                        l_864 &= (l_993 | (!(safe_rshift_func_uint16_t_u_u(0x196AL, 2))));
                        l_939 = (safe_div_func_uint32_t_u_u(g_974, (((g_686 || ((-3L) ^ g_163)) > ((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((-1L), ((safe_div_func_int8_t_s_s(g_312, l_962)) && 0xF9L))), l_1008)) , l_1009)) , 9L)));
                    }
                }
                return p_31;
            }
            else
            {
                unsigned char l_1010 = 0x62L;
                int l_1034 = 6L;
                const short l_1040 = (-1L);
                unsigned short l_1043 = 0x3C1AL;
                const int l_1046 = 1L;
                l_963 = ((func_46(g_312, g_476, g_123) , l_992) == p_31);
                if (l_1010)
                {
                    char l_1030 = 0x5CL;
                    for (g_476 = 0; (g_476 == 26); g_476 = safe_add_func_int8_t_s_s(g_476, 1))
                    {
                        unsigned l_1017 = 0x92BFB865L;
                        int l_1026 = 0L;
                        l_1026 = (0x10058F30L || (g_73 & (safe_mod_func_uint32_t_u_u(g_686, (safe_div_func_uint32_t_u_u((((l_1017 == (safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((((safe_rshift_func_int16_t_s_s(0L, (((p_31 < p_31) == g_422) <= g_546))) , g_499) , 0xE1L) , l_1017), g_350)) == p_31) < p_31), 0x42L)), g_784))) <= 0xD46B36D0L) & p_31), g_121))))));
                        l_963 |= (safe_lshift_func_int8_t_s_u(g_312, p_31));
                        g_686 = g_427;
                        if (p_31)
                            break;
                    }
                    if (l_1029)
                    {
                        l_1034 = ((func_46((((g_499 != ((-1L) | (g_427 != (p_31 , g_308)))) == l_1030) != (((((safe_div_func_uint8_t_u_u((p_31 || (p_31 && ((p_31 , g_784) , l_1010))), p_31)) <= p_31) != p_31) | 65529UL) > 1UL)), p_31, p_31) & l_1033) , g_286);
                        l_992 = (safe_rshift_func_uint8_t_u_u((p_31 & g_73), 7));
                        l_1037 = g_281;
                    }
                    else
                    {
                        l_1034 = p_31;
                        g_350 ^= (safe_add_func_int16_t_s_s((l_1040 | ((safe_rshift_func_int8_t_s_s((l_1029 <= g_546), 2)) > 0x55A83D36L)), (l_1043 , p_31)));
                        g_427 ^= ((l_963 , (l_1030 < (safe_div_func_int32_t_s_s((0x83L < (l_1046 & (l_992 , (((((g_757 , ((p_31 | (-4L)) != g_422)) , g_286) == g_974) <= g_163) >= l_1030)))), 0xB4E0B2B9L)))) <= p_31);
                    }
                    for (l_992 = 0; (l_992 <= 4); l_992 = safe_add_func_int16_t_s_s(l_992, 4))
                    {
                        int l_1051 = 5L;
                        l_1051 |= (safe_sub_func_uint16_t_u_u(g_313, l_969));
                    }
                    l_1068 = (l_969 ^ (safe_div_func_int32_t_s_s(0xF2229D43L, (safe_sub_func_int8_t_s_s(g_181, (((safe_sub_func_int8_t_s_s((0xA1L ^ (((((safe_mod_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(p_31, (p_31 , g_757))) < (safe_div_func_int32_t_s_s((l_1030 != (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(g_331, 0x0AL)) < g_686), p_31))), l_1030))) > (-1L)), g_73)) ^ p_31) , l_940) , g_9) > l_1040)), l_992)) , g_170) ^ (-9L)))))));
                }
                else
                {
                    unsigned char l_1069 = 2UL;
                    l_1069 = g_546;
                    if ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(1UL, (safe_div_func_uint8_t_u_u(func_46((l_1034 , g_220), g_422, (((g_73 > ((l_1069 , (safe_div_func_uint32_t_u_u(l_38, l_969))) , (g_170 , g_422))) , g_1078) < g_1079)), p_31)))), l_39)))
                    {
                        g_350 ^= (-5L);
                    }
                    else
                    {
                        unsigned short l_1085 = 0x3B56L;
                        int l_1107 = 8L;
                        l_992 = (l_1069 == (0x9CD2323BL <= (((safe_mod_func_int16_t_s_s((l_1069 == (safe_unary_minus_func_int8_t_s((g_121 != l_988)))), g_286)) <= (g_362 == g_312)) , (((func_40(p_31, l_992) & l_1085) || l_963) , (-10L)))));
                        l_1034 = ((((safe_sub_func_uint16_t_u_u(0UL, ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_312, (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((l_1085 , (safe_unary_minus_func_int16_t_s(((safe_sub_func_uint8_t_u_u(g_362, ((((((((((((safe_lshift_func_int8_t_s_s(((g_170 , ((((safe_lshift_func_int8_t_s_u((p_31 <= (p_31 , g_170)), (safe_rshift_func_int16_t_s_u((+((0L | l_969) && l_921)), 3)))) > p_31) , 0x7EL) == 0UL)) , l_924), g_331)) == p_31) == 0UL) > l_1085) , (-2L)) > g_163) >= l_1069) <= l_917) <= l_1069) == 0x86L) ^ 251UL) && 1L))) , l_1068)))) , g_1079), p_31)), g_1078)))), g_974)) > l_969))) | l_1085) , 5UL) | 0x5813L);
                        l_1107 |= (safe_rshift_func_uint8_t_u_u(p_31, g_220));
                    }
                    l_963 = 8L;
                }
                l_1068 ^= (-1L);
            }
            for (p_31 = (-29); (p_31 > 23); p_31 = safe_add_func_uint16_t_u_u(p_31, 1))
            {
                const unsigned short l_1127 = 65528UL;
                int l_1184 = 0xB12DE3ADL;
                l_988 = (func_40((g_476 == 0xCD0DL), (l_1110 , ((g_121 && ((1L <= (safe_rshift_func_int8_t_s_u(((safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(g_422, ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_917, (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(g_220, (safe_lshift_func_uint8_t_u_s(g_121, p_31)))), 0xADL)))), 0xB3AEL)) ^ g_331))), l_1029)) , l_1127), l_1110))) == 0L)) < 0x28L))) < p_31);
                if ((((safe_rshift_func_uint16_t_u_u(func_46(((safe_add_func_uint16_t_u_u((p_31 <= ((safe_sub_func_int16_t_s_s(func_46(l_1127, p_31, (((0xC178L != l_918) > (-8L)) | (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((func_40(g_281, p_31) == 0x72L) , p_31) , l_963), g_757)) <= l_1138), g_1079)))), 0xF071L)) > l_969)), 0x0CACL)) <= 0x4E23L), g_9, l_1029), p_31)) , 0x3BD4L) <= g_9))
                {
                    g_499 = p_31;
                    return p_31;
                }
                else
                {
                    int l_1156 = 0L;
                    int l_1160 = 0xC20274ABL;
                    if ((safe_lshift_func_int8_t_s_s((func_46(g_499, g_281, (((l_924 > (l_1127 , (safe_mod_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(2L, g_1147)), p_31)) ^ (p_31 >= ((((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(p_31, 6L)) & p_31), 0xA5DAL)) , l_1156), 7)), 0xE3F6L)) | 253UL) && l_1157) <= 0x806448B4L))) <= 0xF6L) , g_331), 0x64L)))) > l_917) & p_31)) <= 4L), 5)))
                    {
                        int l_1175 = 1L;
                        l_1175 = (safe_rshift_func_int8_t_s_u(l_1160, ((safe_mod_func_uint16_t_u_u(func_40(p_31, (((l_918 & (!((~((((safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s(l_1029, (safe_sub_func_int16_t_s_s(p_31, ((safe_mod_func_uint8_t_u_u(((((!g_974) != (safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u(l_1033, l_1127)), g_422))) , g_476) < 4294967286UL), p_31)) || p_31))))), l_1175)) <= 1UL) >= p_31) != 1UL)) || l_918))) == (-1L)) & p_31)), (-7L))) , l_1175)));
                        l_1184 = (((func_46(l_1175, (safe_sub_func_int32_t_s_s(l_1033, (g_307 & g_123))), (((0UL != (p_31 > (safe_add_func_uint16_t_u_u((g_181 && (((safe_add_func_uint16_t_u_u(g_123, l_1037)) < g_9) && 0x1F86F3DFL)), l_1184)))) || 0x3FL) || 0xA750L)) , p_31) | g_784) | p_31);
                    }
                    else
                    {
                        l_1110 = func_40((safe_lshift_func_int16_t_s_s((1L <= 0xDEL), 5)), p_31);
                    }
                }
                g_427 = g_181;
                g_686 |= 0L;
            }
        }
        else
        {
            int l_1195 = 0L;
            if ((g_313 , 0x65F8DBF6L))
            {
                int l_1193 = 0xD44932D0L;
                char l_1194 = 6L;
                l_1195 = ((((p_31 < ((l_918 > (0x82850BAEL == (safe_lshift_func_int8_t_s_u(p_31, (safe_sub_func_int8_t_s_s((((safe_lshift_func_int16_t_s_u(((((p_31 <= ((((p_31 != g_350) < g_1079) , func_46((g_308 != p_31), l_917, l_1193)) == 4294967295UL)) || l_1194) <= (-6L)) & g_1078), 1)) == g_784) >= l_921), l_1193)))))) , l_1194)) , l_1193) ^ p_31) , g_313);
                return l_1195;
            }
            else
            {
                char l_1202 = (-10L);
                int l_1206 = 6L;
                if ((2UL == (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(p_31, l_1195)), 1))))
                {
                    unsigned l_1205 = 5UL;
                    for (l_1037 = 0; (l_1037 > 39); l_1037 = safe_add_func_int8_t_s_s(l_1037, 5))
                    {
                        l_939 = (-1L);
                        l_1202 &= p_31;
                        g_499 ^= (l_1202 < (safe_add_func_int32_t_s_s((p_31 == l_1205), (g_313 & p_31))));
                        g_686 = p_31;
                    }
                }
                else
                {
                    l_1206 |= (-10L);
                }
                l_1206 |= ((func_40(l_864, g_499) > p_31) > g_1147);
                l_1206 = func_46(g_476, ((safe_add_func_uint8_t_u_u(g_499, l_1202)) , g_123), l_963);
                l_939 &= 0x60CE8C3FL;
            }
        }
        return g_350;
    }
    else
    {
        int l_1211 = 0x3E97BBABL;
        int l_1227 = 0x731EAF89L;
        l_1033 = (safe_add_func_uint16_t_u_u((((0x9556L != ((p_31 || (l_1211 != g_181)) > p_31)) || 255UL) > ((safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((p_31 ^ 0x5FL), (0xDC430F9AL ^ p_31))), l_39)) != p_31)), l_1211));
        l_1227 = func_40(p_31, func_46(l_939, (safe_sub_func_uint32_t_u_u(func_40((safe_sub_func_int16_t_s_s((g_9 && ((65532UL < l_1211) | l_921)), func_46(p_31, ((((safe_lshift_func_int8_t_s_u(((func_40(l_1211, ((safe_sub_func_uint16_t_u_u((l_941 , g_1078), 65534UL)) , l_1226)) != p_31) | 0L), g_1079)) >= p_31) | 6UL) >= 0xC9D22C04L), g_1079))), g_9), g_1147)), l_1211));
        if ((safe_lshift_func_uint8_t_u_u(p_31, (((safe_add_func_int32_t_s_s(func_46((l_918 && func_40((func_46((safe_add_func_uint16_t_u_u(l_1227, (safe_rshift_func_int16_t_s_u((safe_div_func_uint32_t_u_u(((((p_31 == l_939) | (((l_918 < (func_46((p_31 , func_46(((safe_div_func_uint8_t_u_u((((~(safe_lshift_func_int8_t_s_s((-5L), 1))) , (g_121 , 0x3091L)) && 1L), 8UL)) ^ l_38), g_308, g_307)), p_31, l_941) <= 1UL)) < 0x27E344CDL) < p_31)) && p_31) , 0x0D803776L), l_939)), l_1211)))), g_1147, g_1147) ^ g_9), l_1211)), l_1227, l_1227), 1UL)) , p_31) , g_1242))))
        {
            for (g_73 = 0; (g_73 <= (-22)); g_73 = safe_sub_func_uint32_t_u_u(g_73, 1))
            {
                char l_1245 = 0L;
                l_1245 |= g_331;
            }
        }
        else
        {
            unsigned char l_1248 = 0x9BL;
            int l_1265 = 1L;
            unsigned short l_1282 = 0x9EDBL;
            for (g_331 = 7; (g_331 < 13); ++g_331)
            {
                return g_123;
            }
            if (l_1248)
            {
                return g_686;
            }
            else
            {
                int l_1264 = 0x0D000071L;
                for (g_313 = (-22); (g_313 != 3); g_313++)
                {
                    unsigned char l_1263 = 6UL;
                    for (g_170 = 0; (g_170 <= 9); ++g_170)
                    {
                        unsigned l_1253 = 0x629562F1L;
                        char l_1256 = 5L;
                        g_350 = ((l_1253 || g_121) != (p_31 && ((safe_add_func_int16_t_s_s((l_1256 | 0L), ((0L ^ (safe_add_func_uint32_t_u_u(((p_31 && (((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(l_1248, l_1263)) && 0x7EL), p_31)) ^ 5L) , p_31)) , g_307), 1UL))) < 0xD9DBL))) | l_1264)));
                        return g_757;
                    }
                    l_1265 &= ((g_163 ^ p_31) >= (0x3C1D277CL || (-8L)));
                    l_1227 = ((g_757 ^ (+(l_1263 && ((l_1263 || ((((+((0xF758L >= g_9) ^ ((safe_mod_func_int8_t_s_s(l_1248, g_974)) , g_163))) & l_939) ^ p_31) > l_1248)) <= p_31)))) >= l_1263);
                }
                l_1227 = (l_1211 , g_286);
            }
            l_939 = (safe_lshift_func_uint8_t_u_u((l_1227 < ((l_1265 != (g_9 , ((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u((((l_1265 && (+(-7L))) & (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((((g_350 <= ((l_1282 < ((+g_546) <= ((((safe_lshift_func_int16_t_s_u(g_350, 12)) != g_220) & 0L) & p_31))) <= 0xF6L)) || 1L) || l_1227), g_362)) >= p_31), l_1227)), 65534UL))) , g_286), g_350)), g_499)) ^ g_281) || 0UL) , p_31), l_1033)) <= g_422))) <= g_121)), 2));
        }
    }
    if (((((func_40(g_331, p_31) | l_1033) , p_31) && p_31) , g_312))
    {
        unsigned l_1285 = 0x1B9523B8L;
        int l_1294 = 0x8B777168L;
        short l_1306 = 0x5C93L;
        const int l_1382 = 0x3DEF4F14L;
        int l_1443 = 0L;
        unsigned char l_1458 = 0xB7L;
        l_939 = ((((((p_31 , 0xE8L) >= l_1285) && p_31) , (l_1033 ^ func_46(p_31, p_31, l_1285))) > p_31) != l_864);
        for (g_362 = 6; (g_362 < 60); g_362++)
        {
            unsigned l_1292 = 0xA012FA94L;
            for (l_1285 = (-20); (l_1285 == 56); l_1285 = safe_add_func_uint16_t_u_u(l_1285, 8))
            {
                for (g_307 = 0; (g_307 >= 53); ++g_307)
                {
                    return p_31;
                }
            }
            l_1293 = l_1292;
        }
        if (g_220)
        {
            short l_1305 = 1L;
            l_1294 = p_31;
            l_1033 ^= (((safe_rshift_func_int16_t_s_u((p_31 & (safe_div_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((l_1305 > p_31), g_784)), p_31)), l_1306)) || p_31), g_163))), 7)) , p_31) < g_9);
            for (g_476 = 0; (g_476 == 28); g_476++)
            {
                short l_1320 = 0L;
                l_1320 = (g_220 ^ (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(g_9, 13)), (l_1313 , (safe_mod_func_int8_t_s_s((p_31 <= ((((((safe_sub_func_uint16_t_u_u((p_31 , (p_31 == g_331)), (((((safe_rshift_func_int8_t_s_u(l_1294, ((p_31 < 0xF6L) != g_422))) , p_31) | 0L) != (-2L)) ^ 0xB8F4A715L))) <= p_31) == g_422) == 0L) == p_31) || g_686)), 5L))))));
            }
        }
        else
        {
            unsigned char l_1330 = 255UL;
            int l_1348 = 0x81791207L;
            unsigned short l_1378 = 0UL;
            unsigned char l_1451 = 247UL;
            unsigned short l_1486 = 65532UL;
            if (((((((p_31 <= (p_31 , (safe_rshift_func_uint8_t_u_u(g_331, 7)))) >= (safe_div_func_int16_t_s_s(g_1325, (safe_mod_func_uint32_t_u_u((g_73 < (g_1242 , l_1285)), g_313))))) ^ ((safe_lshift_func_uint16_t_u_s(l_918, g_181)) , l_1330)) | 0xB51CA288L) >= g_350) == l_1330))
            {
                unsigned char l_1341 = 253UL;
                int l_1342 = (-1L);
                l_1294 = (0x87A4L <= (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(1UL, 10)), (((safe_unary_minus_func_int16_t_s(l_1285)) | ((((safe_unary_minus_func_int8_t_s(g_427)) < l_918) <= (safe_div_func_int32_t_s_s(p_31, g_307))) <= l_1285)) ^ 2L))) != l_1341), p_31)));
                l_1342 = l_1330;
            }
            else
            {
                unsigned l_1347 = 18446744073709551615UL;
                int l_1379 = 0x61B9242FL;
                for (g_974 = 1; (g_974 != 26); ++g_974)
                {
                    unsigned l_1349 = 7UL;
                    int l_1350 = 0x10BCF3FBL;
                    l_941 = (65532UL | (safe_mod_func_uint16_t_u_u(func_46(g_73, p_31, ((g_476 , (((g_1078 , (((((l_1294 > (l_1330 , g_220)) , (g_307 < p_31)) == l_1347) | 0xCAL) == 0xB97CL)) , 0UL) , p_31)) && l_1330)), l_1347)));
                    if ((p_31 < p_31))
                    {
                        l_1348 = (-4L);
                        l_1350 ^= l_1349;
                        l_1348 = l_1306;
                        if (p_31)
                            continue;
                    }
                    else
                    {
                        return l_1294;
                    }
                }
                if (g_1351)
                {
                    int l_1354 = 0x0F54EE21L;
                    short l_1357 = 0L;
                    int l_1368 = (-9L);
                    l_1368 = (safe_add_func_int32_t_s_s(((~l_1354) , (func_40((safe_add_func_int8_t_s_s((((((l_1357 & g_686) , (safe_mod_func_uint8_t_u_u(func_40((p_31 && ((((l_1354 & (safe_mod_func_uint16_t_u_u((g_1078 || 0xD8L), p_31))) && (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((+(g_1351 <= p_31)) == l_1368) == g_1078), l_1347)), 5)) & 0xB7L), p_31))) != g_1242) , g_331)), g_362), l_1348))) | p_31) && l_917) > g_1351), 0x2EL)), p_31) == g_1325)), g_1351));
                    g_427 = g_281;
                }
                else
                {
                    unsigned l_1377 = 0xB7DD22EBL;
                    unsigned char l_1391 = 5UL;
                    int l_1430 = (-6L);
                    g_686 = ((p_31 || ((safe_sub_func_int16_t_s_s(0L, g_350)) > (((((safe_rshift_func_int16_t_s_u((0xC01610E5L >= ((safe_sub_func_int16_t_s_s(0xAA47L, g_312)) && (safe_mod_func_int32_t_s_s(((g_686 && (!l_1348)) != (((l_1306 & g_220) , 0x6F00EE38L) > p_31)), l_1347)))), 1)) , 0UL) < g_9) , l_1306) >= g_307))) ^ l_1377);
                    if ((((g_281 || (((+((g_312 | (g_308 | ((l_1378 | 3UL) & ((0xA9L <= p_31) != l_1330)))) == g_307)) , l_1379) > g_123)) <= 1L) ^ p_31))
                    {
                        g_1242 = ((0UL != 65535UL) == ((l_1348 >= (safe_sub_func_int16_t_s_s(func_40(((((l_1382 == g_1147) & (1L > p_31)) == ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((p_31 && (((((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s(((-1L) >= l_918), 0x1991L)), p_31)) == 0x0DL) || l_1285) , 0xF7295B92L) , p_31)), 1L)), 4)) , 254UL)) , l_1294), l_1391), g_1351))) > g_974));
                        l_1348 = (p_31 | (safe_sub_func_int16_t_s_s(l_1306, g_312)));
                        return p_31;
                    }
                    else
                    {
                        unsigned char l_1394 = 255UL;
                        l_1394 = (l_1379 != g_312);
                        g_427 = 0xB3D088BDL;
                        g_1351 |= 5L;
                        l_1379 = (safe_lshift_func_int16_t_s_u(((g_308 == p_31) , (safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((g_1351 & g_1079), 11)), l_1347)), 14))), l_1394));
                    }
                    if (((g_1325 || ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u(g_757, (l_1285 < ((((safe_lshift_func_uint8_t_u_u(((func_46((p_31 , (safe_mod_func_uint32_t_u_u(func_40((((safe_unary_minus_func_int32_t_s(p_31)) , 4294967295UL) < (safe_mod_func_uint8_t_u_u(g_181, (safe_div_func_uint32_t_u_u(g_286, g_163))))), l_1348), p_31))), g_974, g_1351) || 0xD84CE8C9L) == p_31), 6)) , g_331) , 0x80L) || g_163)))) != g_1325), 1)) <= (-1L))) <= g_1242))
                    {
                        l_1294 = (l_1391 , 0x54D14FA3L);
                    }
                    else
                    {
                        const char l_1444 = 0xEEL;
                        l_1033 = (l_1377 && (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(l_1347, func_40(g_362, (p_31 , g_73)))), (0x8D6BC56FL ^ (((safe_lshift_func_int16_t_s_u(((g_974 ^ 1UL) == 0x6749D148L), g_1078)) < 0xA275L) , 0x07A35DC4L)))));
                        l_1379 = (0x99579B4CL < func_46(l_917, func_46(((func_46((((((p_31 , ((safe_mod_func_uint8_t_u_u(p_31, (2UL | (p_31 <= (((safe_lshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_1325 , (safe_div_func_int8_t_s_s(g_1079, func_46(g_546, g_1351, p_31)))), g_974)), l_1379)) < l_1382) , l_1285))))) > l_1378)) && l_1382) ^ 0L) | 0xE87A3161L) & 0xF39FL), g_1351, p_31) <= g_1147) == 0L), p_31, l_1391), p_31));
                        l_1430 = l_1348;
                        g_427 = ((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((((g_331 , (l_1430 , 0L)) > (safe_rshift_func_uint16_t_u_s((l_1430 , ((((l_1313 , ((g_362 , ((l_1306 == (safe_mod_func_uint8_t_u_u(0UL, (safe_sub_func_uint32_t_u_u(g_422, l_1443))))) != 0x6CL)) == 1UL)) & g_307) , l_1382) == p_31)), l_1444))) <= 0xF0L), p_31)), 1)) == 0xB1L);
                    }
                    l_1348 |= (safe_lshift_func_int16_t_s_s((0x19DCL ^ (((~(safe_rshift_func_uint16_t_u_u((func_40(((func_46(g_163, (((safe_mod_func_int8_t_s_s((((((~l_1451) > ((((safe_rshift_func_int16_t_s_u(g_974, 4)) , (safe_lshift_func_int16_t_s_s(g_123, 4))) , p_31) <= (g_331 , (safe_add_func_uint16_t_u_u(p_31, p_31))))) , g_307) , 253UL) == l_1306), l_1458)) ^ 0x73L) == p_31), l_1379) || p_31) > l_1330), l_1378) , 0UL), 2))) , g_170) != 0x93593E24L)), 13));
                }
            }
            if ((!func_46(g_1078, g_313, g_427)))
            {
                unsigned short l_1461 = 6UL;
                const unsigned l_1464 = 0xA0F675ADL;
                l_1294 |= 1L;
                l_1294 = ((g_1351 , g_350) , p_31);
                l_1033 = func_40(((g_427 > (safe_rshift_func_int16_t_s_s(l_1461, 15))) ^ p_31), ((((safe_add_func_int32_t_s_s((g_163 , 0xAF8C2315L), l_1464)) <= (safe_lshift_func_uint8_t_u_u(((((p_31 , (((safe_mod_func_int16_t_s_s(p_31, g_362)) && p_31) , g_1079)) >= 65535UL) , 65526UL) <= l_917), p_31))) <= 0UL) , 0xC37D4BD9L));
            }
            else
            {
                char l_1482 = 0L;
                int l_1483 = (-1L);
                for (l_1306 = 0; (l_1306 == 6); ++l_1306)
                {
                    short l_1479 = 0x27EAL;
                    l_864 = (safe_div_func_int16_t_s_s((((+((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((g_170 != p_31), 14)), (safe_mod_func_int16_t_s_s(p_31, (p_31 ^ l_1285))))) && l_1479)) && func_40(g_757, (((g_331 == ((-1L) <= 65532UL)) >= p_31) > 1UL))) <= g_1325), 0xD340L));
                    l_1483 = ((g_170 || (l_1482 , g_307)) != (g_123 <= l_1482));
                }
                l_1483 |= (l_939 , ((safe_mod_func_uint16_t_u_u(((func_40(p_31, func_40(l_941, g_350)) < g_974) , l_1285), l_1486)) || (-1L)));
            }
        }
    }
    else
    {
        unsigned short l_1487 = 0x6BDDL;
        unsigned l_1576 = 0x583B92D6L;
        int l_1581 = 0x56425961L;
        int l_1582 = 0xB855CCA0L;
        int l_1649 = (-1L);
        l_1487 = p_31;
        if ((((safe_rshift_func_uint16_t_u_u((g_73 | (0x04L | ((0UL > p_31) == l_1226))), 2)) & ((safe_lshift_func_int8_t_s_s(((l_1487 != (safe_mod_func_uint32_t_u_u(g_499, (l_921 ^ l_1487)))) <= (-10L)), g_181)) == (-3L))) , p_31))
        {
            int l_1506 = 1L;
            l_1033 = g_546;
            l_939 = (safe_add_func_int8_t_s_s((p_31 , ((safe_div_func_int8_t_s_s(((((p_31 == (g_313 , 252UL)) <= (safe_mod_func_int8_t_s_s(((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((+((p_31 > (l_38 >= l_1506)) , (safe_rshift_func_uint16_t_u_s(g_286, 10)))) > (((((safe_lshift_func_int8_t_s_s(1L, p_31)) || p_31) , l_1506) , l_918) , l_1487)), 0xED8DL)), p_31)), l_918)) ^ p_31), l_864))) && p_31) , p_31), p_31)) || l_1293)), 248UL));
            for (l_921 = 0; (l_921 < (-2)); --l_921)
            {
                unsigned l_1517 = 18446744073709551615UL;
                l_1506 &= (safe_rshift_func_uint16_t_u_u(((p_31 && ((g_1078 ^ (p_31 <= ((0x51DAL | (-1L)) >= (safe_rshift_func_uint8_t_u_u(((l_1517 >= p_31) | (safe_mod_func_int8_t_s_s(0x4CL, func_46((((~p_31) , 4294967287UL) && g_313), p_31, g_281)))), 1))))) && p_31)) <= g_1242), g_1078));
                if (l_1487)
                    continue;
            }
            l_1506 = g_163;
        }
        else
        {
            int l_1543 = 0x59B2299FL;
            unsigned l_1548 = 18446744073709551609UL;
            int l_1606 = 0xB1A4BA22L;
            unsigned short l_1620 = 0UL;
            g_686 = g_1147;
            for (g_286 = 12; (g_286 != (-29)); g_286 = safe_sub_func_int8_t_s_s(g_286, 2))
            {
                unsigned l_1537 = 18446744073709551606UL;
                unsigned l_1549 = 0UL;
                unsigned char l_1579 = 1UL;
                int l_1580 = 0x3DAA9346L;
                if ((safe_unary_minus_func_uint8_t_u(p_31)))
                {
                    unsigned l_1523 = 0x9578BE43L;
                    l_1523 = (l_1487 , (g_974 <= p_31));
                }
                else
                {
                    unsigned char l_1534 = 0x6DL;
                    l_1537 ^= (((safe_unary_minus_func_int8_t_s((g_286 , ((safe_add_func_int32_t_s_s((((-8L) < (safe_add_func_uint32_t_u_u((p_31 != (((safe_rshift_func_uint16_t_u_s((+(safe_unary_minus_func_int8_t_s(((((g_1325 == (safe_add_func_uint32_t_u_u((l_1534 > ((((safe_add_func_int32_t_s_s(((((p_31 >= p_31) , 7L) != ((+p_31) > g_73)) ^ l_39), g_499)) != p_31) <= g_163) | g_362)), 0xF249BD01L))) < g_281) < 0UL) <= p_31)))), p_31)) & l_1487) != 0x05E63266L)), p_31))) || g_1351), 4294967295UL)) > (-1L))))) ^ p_31) >= 0xB5L);
                    l_1543 = (safe_div_func_int32_t_s_s((((((l_1487 > l_1540) || ((safe_rshift_func_uint8_t_u_u((g_170 > l_38), p_31)) , l_1534)) != l_1534) , l_1313) , p_31), p_31));
                    return g_499;
                }
                g_686 = (((p_31 == ((p_31 , ((p_31 ^ (~p_31)) || l_1537)) ^ ((safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((l_1548 | l_1549) >= (safe_lshift_func_uint8_t_u_s((p_31 <= l_1543), 2))), g_9)), (-4L))) , g_1325))) > g_499) < 4294967291UL);
                if (((l_1487 , (((safe_unary_minus_func_int8_t_s(((g_784 & p_31) < l_1548))) && ((((0x8DL ^ 0x7BL) && l_941) && (l_1537 && ((p_31 , l_1487) <= g_1078))) , p_31)) , 6L)) > l_1548))
                {
                    char l_1569 = 0xBEL;
                    g_499 = ((safe_sub_func_int32_t_s_s((p_31 | (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((g_1325 , (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(1UL, l_1549)), (safe_lshift_func_uint16_t_u_u(p_31, 7)))) == 0xC6BCL) == ((safe_rshift_func_uint16_t_u_s(p_31, 11)) < p_31))), (((p_31 >= 248UL) ^ p_31) != 0x2546AFF7L))) <= 0x6B57L), 8UL)) && p_31), l_1569))), (-1L))) <= p_31);
                    l_1580 ^= (g_974 , ((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s((p_31 != ((l_1576 == (g_9 , (safe_mod_func_uint16_t_u_u(((0x58L && (0UL <= ((l_1537 ^ (((l_1579 , (p_31 , 0x49L)) != p_31) , 1UL)) < p_31))) , 1UL), l_1033)))) & l_921)), p_31)), 65535UL)) == 0L));
                }
                else
                {
                    unsigned char l_1589 = 7UL;
                    int l_1594 = 0x412C964FL;
                    l_1581 = (l_1487 | g_1147);
                    if (l_1293)
                    {
                        l_864 = l_1582;
                        l_1582 ^= 0x5E80324BL;
                        l_1580 = p_31;
                        l_1594 = (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((g_313 == g_313), (((safe_add_func_uint16_t_u_u(g_1325, 0x6DD5L)) & l_1548) < g_123))), (((+(l_1589 == p_31)) & ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((g_307 , 7L) && l_1576), 4)), p_31)) < 0x78300AEDL)) , 0xC1A40373L)));
                    }
                    else
                    {
                        unsigned short l_1595 = 0x565DL;
                        l_1580 = l_1595;
                        l_1580 &= (g_73 , g_281);
                        if (l_1548)
                            continue;
                        l_1606 &= (safe_mod_func_uint32_t_u_u(4294967295UL, ((safe_lshift_func_uint16_t_u_s(((2UL >= p_31) | ((safe_lshift_func_int8_t_s_s(((((p_31 && (p_31 <= (g_9 < (safe_add_func_uint16_t_u_u((l_1595 ^ ((2L ^ (safe_sub_func_uint32_t_u_u((l_1293 > 0L), 0L))) && p_31)), p_31))))) , g_181) & (-4L)) == l_1548), 4)) <= g_1351)), 4)) , p_31)));
                    }
                }
                g_686 &= (g_121 , (((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((+g_784) >= (~g_163)), ((g_220 & (0xDE42L >= g_163)) , g_220))), 13)) | ((l_1033 != ((l_1613 <= 0xFB50DA89L) && l_1549)) , g_422)) , p_31), 5)) , g_1147) <= 0xE24F4578L));
            }
            if (((l_1487 <= func_46((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((~l_1548), ((safe_add_func_int8_t_s_s(g_220, l_1620)) , 0xECL))), 0)), (g_123 == ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((0x433DL ^ (((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int8_t_s_s((l_1487 == 0x8AL), l_1582)) & g_422), p_31)), g_350)), l_918)), l_1576)) != g_181) , g_1351)) <= l_1606), g_686)), 8UL)) , g_499)), l_1487)) || l_1620))
            {
                int l_1638 = 0x8AC965FAL;
                int l_1650 = 0xE1FED900L;
                unsigned char l_1660 = 0x9CL;
                const int l_1681 = 0xA8725907L;
                l_1033 = ((safe_lshift_func_uint8_t_u_u((p_31 == ((func_40(l_1637, l_1638) <= g_1325) & g_1242)), 3)) , 0x3FC0FFABL);
                if ((l_39 | (((safe_add_func_int16_t_s_s(0x4C5FL, (((safe_sub_func_uint16_t_u_u((p_31 < (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_1649 != ((p_31 , 0xB7DE879CL) >= l_1650)), 0)), (((((safe_mod_func_int16_t_s_s((0x5CAAL & 0x70A0L), l_1649)) > l_1313) , g_362) >= g_313) != l_1540))), l_1650))), p_31)) < g_1242) <= g_499))) > g_313) & 2UL)))
                {
                    int l_1659 = 0x311B7C25L;
                    l_1659 = (~(((safe_lshift_func_uint16_t_u_s(((l_1543 , ((l_1540 , (250UL | func_46(g_686, g_286, (l_1033 && (l_1582 <= (safe_rshift_func_int8_t_s_s(p_31, 7))))))) > 65535UL)) >= 0xC1L), l_1576)) | l_1540) , l_1650));
                    g_427 &= l_1660;
                    l_1582 = (safe_add_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(((func_40((g_686 , (safe_sub_func_uint32_t_u_u(g_1325, (g_1079 & (l_1606 , g_121))))), g_163) ^ (safe_lshift_func_uint16_t_u_s(65526UL, 2))) ^ g_1147), 0x198AL)) && (-9L)) < p_31), p_31));
                    g_350 = l_1659;
                }
                else
                {
                    l_939 |= (((safe_sub_func_uint32_t_u_u(func_46(p_31, g_422, (((safe_rshift_func_uint8_t_u_u((3UL == ((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_int8_t_s_s((0x08FEL != ((0xC9L == (-1L)) != l_1313)), ((((safe_lshift_func_uint8_t_u_s(p_31, l_1681)) == l_1660) , l_1576) , 0xD1L))) ^ l_1650), g_1242)), p_31)) && 0x14745F58L)), 3)) == g_286) == 0x06L)), 0x8109A055L)) < g_546) | (-1L));
                    l_1582 = (safe_mod_func_uint8_t_u_u((((func_40(p_31, ((((7L ^ ((safe_div_func_uint32_t_u_u(((((g_1351 , (1L ^ (((safe_div_func_int32_t_s_s(func_46(l_1576, p_31, g_1688), (safe_lshift_func_uint16_t_u_s((((safe_add_func_uint16_t_u_u(p_31, g_9)) , 0UL) ^ g_546), 2)))) , (-1L)) | 0UL))) > g_1688) >= g_1351) && g_1688), g_1079)) , p_31)) <= 0L) > g_974) ^ g_1078)) , p_31) || 4294967295UL) >= l_864), p_31));
                }
            }
            else
            {
                g_1242 = (safe_lshift_func_uint16_t_u_u((+func_40(p_31, g_313)), g_1078));
                for (g_73 = 0; (g_73 <= 24); ++g_73)
                {
                    g_427 &= (safe_div_func_int8_t_s_s(0xE4L, g_286));
                    l_1033 = 0x12FD6CF5L;
                }
            }
        }
    }
    l_1540 |= (func_46((g_220 | (safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(250UL, 3)), l_939))), g_974, (l_1293 , p_31)) && (safe_lshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(p_31, (l_921 & p_31))) == 0x91D9L) ^ 1L), 9)));
    return p_31;
}







static short func_40(short p_41, unsigned p_42)
{
    int l_50 = 0x7290B1C5L;
    unsigned char l_695 = 0x15L;
    unsigned short l_716 = 65530UL;
    const unsigned char l_717 = 0UL;
    unsigned l_735 = 0x961326DFL;
    const unsigned short l_756 = 65532UL;
    unsigned l_807 = 0xCB510D23L;
    int l_818 = 0x1EC5E1EEL;
    for (p_42 = 0; (p_42 != 35); ++p_42)
    {
        int l_55 = 0xBE823651L;
        const char l_755 = 1L;
        short l_762 = 0x454EL;
        char l_815 = 0L;
        g_686 &= func_46((l_50 , p_42), (l_50 , (safe_mod_func_int8_t_s_s(1L, p_42))), ((safe_rshift_func_int16_t_s_u(l_55, (((l_50 >= (-3L)) == p_41) | l_50))) <= g_9));
        for (g_220 = 0; (g_220 <= 38); g_220++)
        {
            int l_691 = 0xAFDFD6C5L;
            int l_694 = (-5L);
            l_55 = (g_350 <= (safe_div_func_uint8_t_u_u(((!(l_691 > g_546)) <= (~((l_50 == (safe_add_func_uint16_t_u_u(l_694, (p_41 == p_42)))) | (l_694 >= g_499)))), g_546)));
            l_695 = 0x1832E471L;
            for (g_422 = (-18); (g_422 <= 48); g_422 = safe_add_func_int32_t_s_s(g_422, 4))
            {
                return l_694;
            }
        }
        if (func_46(((0x6B79L >= ((g_281 , (((-10L) == ((l_695 , g_220) != l_695)) , (safe_lshift_func_int8_t_s_s(func_46(l_55, (safe_sub_func_uint8_t_u_u(0x89L, l_55)), p_42), g_686)))) || p_41)) | l_55), g_686, p_42))
        {
            int l_728 = 0x75746450L;
            int l_777 = 0xE67452CFL;
            for (g_499 = 0; (g_499 == (-12)); g_499 = safe_sub_func_uint16_t_u_u(g_499, 9))
            {
                short l_731 = 0xBFCBL;
                unsigned l_734 = 0x092A6403L;
                if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((g_476 , p_42), ((safe_add_func_uint32_t_u_u((((p_41 > 9UL) && g_427) || g_9), p_41)) ^ (l_716 <= ((l_717 || g_163) <= (-7L)))))), p_41)) || (-1L)), l_695)), g_73)))
                {
                    l_55 ^= (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((((g_9 <= p_41) ^ p_41) , ((l_728 != l_728) && 0x08L)) >= ((safe_rshift_func_int8_t_s_s(((p_42 & 0x29L) , (g_427 && l_731)), p_41)) > l_731)), g_350)) ^ p_42), l_728)) , 0UL), 0x4C2EL)) & 1UL), 4)) >= p_41), 0xA522L));
                }
                else
                {
                    unsigned l_742 = 0xF7988A13L;
                    g_350 = (4294967295UL ^ (safe_add_func_uint32_t_u_u((l_734 > (g_313 || l_735)), (safe_sub_func_int8_t_s_s(((p_42 > (((safe_lshift_func_int8_t_s_s(p_42, g_546)) & 0xABL) , (safe_add_func_int16_t_s_s(((((g_362 , p_41) > 0x0CECL) >= l_734) , (-10L)), l_742)))) >= p_41), l_742)))));
                    return g_499;
                }
            }
            g_686 ^= (safe_lshift_func_uint16_t_u_s((g_73 == (safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((l_55 , ((l_755 < ((l_756 && (6UL ^ ((g_757 || (safe_div_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_312 > 0x4F14L), (g_313 < l_716))), 0xD0L))) > g_313))) > l_755)) , 0L)), l_762)), g_312)), g_281)), 1L)), p_42))), p_41));
            g_784 ^= ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((g_9 != (safe_rshift_func_uint8_t_u_s(g_331, l_762))) , (safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(l_777, 0xC4ECF6A4L)) , (safe_lshift_func_int8_t_s_u((l_55 ^ (safe_div_func_int32_t_s_s((g_170 , ((safe_lshift_func_int8_t_s_s((((!(func_46(l_777, g_313, g_362) & 5L)) & l_695) && p_42), 7)) > l_728)), p_41))), p_41))), g_686)), l_777)) <= g_9), 0UL))), l_717)), 65535UL)) > 1UL);
            if (p_41)
                break;
        }
        else
        {
            unsigned l_785 = 4294967295UL;
            int l_786 = (-10L);
            l_786 = func_46(((-2L) >= l_755), l_785, g_313);
            if (p_42)
                break;
        }
        for (g_546 = 5; (g_546 >= 7); g_546++)
        {
            short l_798 = 0x1E0DL;
            int l_808 = 0xC33E5ED2L;
            if (g_476)
            {
                int l_793 = 0xA8BB9782L;
                int l_799 = 0x5AF367D6L;
                unsigned l_806 = 6UL;
                g_686 = (-1L);
                for (g_476 = 0; (g_476 > 3); ++g_476)
                {
                    int l_796 = 0x0EFCA45AL;
                    int l_797 = 0L;
                    l_793 = (((p_42 & (safe_sub_func_uint32_t_u_u(((((l_755 != (g_220 != g_427)) || (l_793 != 0xCD78L)) >= ((!(safe_add_func_int8_t_s_s(p_42, l_793))) , p_42)) > g_181), g_362))) == l_796) <= 0xA9036930L);
                    l_797 = 7L;
                    l_798 = g_686;
                    l_799 ^= l_793;
                }
                l_808 = ((safe_lshift_func_uint16_t_u_s(g_170, (safe_sub_func_uint16_t_u_u((9UL <= l_717), (safe_lshift_func_int8_t_s_s((l_55 < (((0xBFL && l_55) , ((((p_41 , (1L > (((p_42 , g_73) >= 0x76EFE851L) >= 0x8BEB12BEL))) && 0x3C335D4EL) >= 0x66L) , l_806)) , p_42)), 4)))))) , l_807);
            }
            else
            {
                unsigned short l_814 = 0x77BDL;
                for (g_476 = 13; (g_476 > 14); g_476 = safe_add_func_int16_t_s_s(g_476, 5))
                {
                    unsigned char l_811 = 0x51L;
                    l_811 &= g_170;
                    for (g_784 = (-28); (g_784 >= 13); ++g_784)
                    {
                        l_814 ^= (((0UL < g_686) , p_42) && p_41);
                    }
                    g_499 = (p_41 , l_815);
                }
                l_55 = ((func_46((p_42 , 0UL), (safe_mod_func_uint8_t_u_u(g_313, g_181)), l_814) & ((g_784 == g_546) || 0x1BF719DCL)) && l_818);
            }
        }
    }
    return l_756;
}







static int func_46(unsigned p_47, unsigned p_48, unsigned short p_49)
{
    unsigned char l_58 = 0xE6L;
    const short l_95 = 0x5C08L;
    char l_96 = 1L;
    int l_306 = 0L;
    short l_450 = 0x0126L;
    g_73 = ((safe_sub_func_int8_t_s_s(((l_58 | 0xA4L) , (safe_div_func_uint32_t_u_u(l_58, (0x33L | ((!((safe_sub_func_uint8_t_u_u(p_49, (safe_rshift_func_int16_t_s_s((g_9 || (safe_add_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(g_9, 0x83D3L)) || (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(l_58, 6)), g_9))) >= g_9) ^ p_48), (-1L)))), g_9)))) && 1UL)) ^ 8UL))))), g_9)) > 1L);
    if ((safe_add_func_uint32_t_u_u((((((safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((g_73 , (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(p_49, l_58)) | ((((((g_9 | (l_58 , ((0x3F87L && ((safe_sub_func_uint16_t_u_u(p_47, g_9)) , (safe_rshift_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(g_73, 0x0BL)) & p_48), 14)), g_73)), 14)))) , g_73))) , g_73) >= l_95) , g_9) && 0x90L) ^ 0xFCD1L)), 0x8EL))) , g_9), 3)), l_96)))) , (-8L)) >= p_48) , p_48) != l_58), g_9)))
    {
        unsigned l_114 = 1UL;
        unsigned l_122 = 2UL;
        int l_252 = 1L;
        int l_280 = 0xD4A470ADL;
        char l_326 = 5L;
        for (l_96 = 0; (l_96 != 18); ++l_96)
        {
            unsigned short l_113 = 0x3055L;
            unsigned short l_136 = 0UL;
            int l_138 = 6L;
            int l_155 = 0x40942222L;
            const unsigned short l_158 = 0UL;
            unsigned short l_196 = 0UL;
            l_114 |= ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((p_48 | p_48), (1L && (((g_9 == (!p_48)) , (g_73 < ((((p_49 || (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_95, p_48)), 0xE57ECD02L)), l_113)) ^ (-1L)), 4)), l_58))) > 0x5FC01934L) , g_73) > 0x83L))) && 0xBEL)))) , g_73), 3)) ^ g_9);
            if ((safe_lshift_func_int16_t_s_u(g_73, (((0xB6L < ((p_49 , (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(l_95, (((g_9 <= (l_113 != g_73)) < ((g_73 & g_9) >= g_9)) && 0x38L))), 4))) || l_96)) || 1UL) > g_9))))
            {
                unsigned char l_154 = 6UL;
                int l_171 = (-1L);
                g_121 &= 1L;
                g_123 &= l_122;
                if ((safe_rshift_func_uint16_t_u_u(p_49, p_49)))
                {
                    char l_137 = 0x25L;
                    if ((safe_lshift_func_uint8_t_u_s(l_96, ((255UL ^ (((safe_add_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(g_123, 4294967295UL)), (((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(p_49, ((((g_121 & l_136) >= g_123) , g_123) | l_137))), 2)) > l_138) , p_47))) || p_49) == 65535UL)) < p_49))))
                    {
                        return l_137;
                    }
                    else
                    {
                        unsigned char l_153 = 0x05L;
                        l_155 = ((safe_mod_func_int16_t_s_s(g_73, ((safe_add_func_int32_t_s_s(0x717118E0L, ((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_123, 6)), l_138)) && (safe_lshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s(p_47, ((safe_rshift_func_int8_t_s_u(((0L <= l_153) & l_154), 7)) || (l_137 & g_121)))) && g_9) > l_137), g_123))))) , p_49))) || g_121);
                        g_163 &= ((safe_div_func_int32_t_s_s((((p_47 < l_154) , (0xD9B24318L > l_158)) < (safe_rshift_func_int8_t_s_u(g_123, 7))), (safe_lshift_func_int8_t_s_u(l_58, 4)))) == 0xB6AEL);
                        g_170 &= (safe_add_func_int16_t_s_s(((l_137 , ((p_47 > (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(g_123, g_73)), (l_153 && l_153)))) ^ g_9)) <= 0x429A001AL), 65532UL));
                    }
                }
                else
                {
                    if (p_48)
                        break;
                }
                if ((~0x08A347B7L))
                {
                    char l_174 = 0x60L;
                    short l_180 = (-8L);
                    l_171 = (-1L);
                    if ((safe_sub_func_int16_t_s_s(((+((g_163 && g_121) , 65530UL)) || l_158), l_122)))
                    {
                        l_174 = p_47;
                    }
                    else
                    {
                        int l_177 = 1L;
                        g_181 &= (safe_div_func_int32_t_s_s(((((l_177 == (safe_lshift_func_int8_t_s_s(0x6CL, 5))) || l_180) >= l_122) || p_47), p_49));
                        l_177 = (((safe_div_func_uint8_t_u_u((0x01B0L >= ((safe_lshift_func_int8_t_s_s((((0xA7A0367BL || (safe_add_func_int32_t_s_s(0x4620E0A4L, g_181))) <= l_58) || (safe_sub_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((p_47 ^ l_177), g_121)) , (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_47, l_196)), l_122)) | 65535UL) , g_73)), l_114))), l_174)) == g_9)), (-1L))) & (-1L)) >= 0xD6L);
                        l_177 = p_49;
                    }
                }
                else
                {
                    unsigned char l_206 = 255UL;
                    int l_207 = 0xE751A909L;
                    for (l_136 = 0; (l_136 <= 14); l_136 = safe_add_func_uint16_t_u_u(l_136, 6))
                    {
                        unsigned char l_199 = 255UL;
                        l_155 = l_199;
                        l_206 = ((((((safe_rshift_func_uint16_t_u_s(((0xACL || g_163) , ((p_48 ^ (~(((safe_div_func_uint16_t_u_u((0xC2D1L & 0x84CDL), p_48)) , (((+6UL) || ((safe_mod_func_int32_t_s_s(8L, l_154)) , p_49)) | l_199)) != g_163))) <= g_73)), 0)) < 0x17L) , l_96) | (-6L)) , 0x979A3CF2L) , 0L);
                        l_155 ^= (-1L);
                        l_207 = g_163;
                    }
                    l_171 = g_181;
                }
            }
            else
            {
                unsigned l_218 = 0x88AF4697L;
                int l_221 = 0x173B1E5AL;
                unsigned l_244 = 0x75960B8AL;
                short l_273 = 0L;
                for (l_114 = 0; (l_114 != 28); l_114 = safe_add_func_int16_t_s_s(l_114, 2))
                {
                    int l_219 = 0x8839424BL;
                    g_220 = ((safe_mod_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(g_9, p_47)) ^ (l_155 >= l_196)) < (l_122 <= (((safe_add_func_int16_t_s_s(((g_9 == ((((((((g_170 == g_121) , (0UL < 4294967287UL)) < 0x24EF59ADL) | 1UL) != l_218) >= l_114) && 65532UL) < p_48)) | l_219), 1L)) > l_218) & 0L))), 3L)) || l_114);
                    l_221 = g_170;
                }
                if (p_48)
                {
                    l_155 = ((safe_sub_func_int8_t_s_s(p_48, (g_163 < ((((safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((g_121 || (safe_rshift_func_int8_t_s_s((g_170 < (safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((g_163 && (l_218 , (safe_rshift_func_uint8_t_u_u(p_47, 7)))), (p_48 , ((((((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((p_47 , 0x2DD4L), 65530UL)), p_48)), p_49)) ^ p_48) || g_9) <= g_73) , g_121) , 0x4DL)))) && g_181), p_49)), l_218))), 5))) & p_49), 4UL)), 12)) & p_47) , 0x6168E0BFL) >= l_221)))) >= 255UL);
                    if (l_96)
                        continue;
                }
                else
                {
                    int l_245 = 0L;
                    int l_250 = 1L;
                    int l_264 = (-2L);
                    l_244 = 0xFAA3ACFEL;
                    if (g_163)
                    {
                        l_245 = (-1L);
                        l_221 = (safe_div_func_int32_t_s_s(p_49, (((safe_rshift_func_int16_t_s_s(g_220, 6)) , l_245) && l_138)));
                        return l_58;
                    }
                    else
                    {
                        const unsigned char l_251 = 0x92L;
                        l_250 = ((l_155 , g_121) & p_49);
                        l_252 &= l_251;
                    }
                    l_221 = g_181;
                    if (((255UL > (((l_245 && p_49) && l_95) >= (g_9 ^ g_123))) || p_48))
                    {
                        int l_263 = 5L;
                        l_264 ^= ((g_170 || ((((safe_mod_func_uint8_t_u_u((p_47 ^ (safe_sub_func_uint16_t_u_u(p_49, g_163))), (safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(p_47, p_49)) || (safe_add_func_uint8_t_u_u((l_263 , l_95), (l_250 & 65535UL)))), l_250)))) == p_48) > p_47) , g_123)) == 0x14L);
                        if (p_47)
                            break;
                        l_280 |= (((l_218 , (g_181 , (g_163 , (safe_rshift_func_int16_t_s_u((l_263 >= (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(((+((l_273 | p_49) != (!l_252))) == (safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u((g_121 <= 6L), g_123)) < 0x6E93L) < l_113), 7)) || p_48), 65531UL))), 0x4EL)), p_48))), g_163))))) == g_170) >= g_181);
                        g_281 = (p_49 <= (0x64F0L == (p_49 , g_121)));
                    }
                    else
                    {
                        short l_284 = (-4L);
                        unsigned short l_285 = 0xD2D8L;
                        l_221 = g_181;
                        if (g_181)
                            break;
                        g_286 = ((l_250 <= g_163) == (g_170 | (g_181 , ((safe_sub_func_int16_t_s_s(((g_73 < g_9) & (l_284 < (((l_285 , ((g_220 != l_136) , 0x3EA2L)) , p_49) ^ p_49))), p_47)) != 0xECEE0DB9L))));
                        l_250 = (g_181 , (safe_unary_minus_func_uint16_t_u((p_49 > 252UL))));
                    }
                }
                if (g_123)
                    continue;
            }
        }
        if (((safe_div_func_int32_t_s_s(g_9, ((safe_add_func_uint16_t_u_u(0x63DBL, (p_47 , ((-1L) >= 9UL)))) ^ (safe_rshift_func_uint16_t_u_u(((!(safe_unary_minus_func_uint16_t_u((safe_add_func_uint32_t_u_u((((p_48 <= (g_9 , 1L)) >= (-5L)) >= l_122), 0x839176ECL))))) , 0xE384L), l_280))))) >= 0x93L))
        {
            short l_297 = 0xC08DL;
            l_297 = p_47;
            for (l_252 = 0; (l_252 != (-28)); --l_252)
            {
                l_306 ^= ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_73, (safe_add_func_uint8_t_u_u(g_170, g_220)))), l_297)) ^ l_122);
                g_307 &= (-4L);
            }
        }
        else
        {
            unsigned l_309 = 1UL;
            char l_361 = 2L;
            int l_385 = (-7L);
            const unsigned l_392 = 0xA5AA0528L;
            int l_419 = 0x6FB191E2L;
            unsigned l_475 = 0x206E108BL;
            g_308 &= l_114;
            g_312 = (g_181 < ((l_309 <= g_220) | (safe_sub_func_int32_t_s_s(g_286, l_252))));
            g_313 = g_170;
            if ((((safe_rshift_func_uint8_t_u_u(g_181, 2)) & l_252) , (safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(g_312, (((((l_309 == l_309) != (p_49 | (((p_47 > (safe_div_func_uint32_t_u_u((!(0xE639L == (+((safe_lshift_func_uint8_t_u_s(0UL, p_47)) >= l_326)))), 0x9A345722L))) & 0L) || 2UL))) , 4294967291UL) , p_47) <= 4L))) , p_48) >= g_170), l_309)), 0x0EC4L))))
            {
                unsigned char l_373 = 7UL;
                if (p_49)
                {
                    for (l_326 = 12; (l_326 >= (-5)); --l_326)
                    {
                        short l_329 = 0xA12CL;
                        l_280 &= g_281;
                        l_329 = (~l_58);
                    }
                }
                else
                {
                    unsigned short l_330 = 65532UL;
                    int l_408 = (-5L);
                    g_331 = l_330;
                    if ((((0xC5AFL > (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_uint32_t_u(((((255UL || (safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_49, g_313)), 5))) , g_9) , ((safe_lshift_func_int16_t_s_s((65535UL == l_309), 8)) ^ p_47)) < (((safe_add_func_int16_t_s_s(p_49, p_49)) | g_163) != p_49)))) | 0x00F52395L), 0xF6C3L))) < 0x35L) || (-1L)))
                    {
                        const short l_349 = 0L;
                        g_350 = (safe_rshift_func_int8_t_s_u(l_330, (g_163 == (g_9 > ((((safe_add_func_int32_t_s_s(((g_312 && (g_123 , (((0x284332C9L && p_47) > ((safe_rshift_func_int8_t_s_u(0x9DL, 5)) <= (p_48 && p_47))) != 0x0DL))) != (-1L)), 1L)) < l_349) | 0x87L) ^ g_312)))));
                        g_350 = (l_309 < p_48);
                        g_362 |= (safe_div_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(p_47, 0L)) == (0x8FL == ((safe_mod_func_int32_t_s_s((1L != (g_312 < (g_286 < (safe_sub_func_int16_t_s_s((0x59L <= p_49), (l_309 , l_361)))))), p_48)) , (-1L)))) || g_350), g_286));
                        g_350 = ((safe_div_func_int16_t_s_s((g_281 , (g_9 > ((safe_div_func_int16_t_s_s((0x9681L >= 65530UL), p_47)) != (g_312 & ((p_47 > ((safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_307, p_48)), 6)) , 0x86L)) >= 0x217AL))))), 0xC05FL)) <= l_330);
                    }
                    else
                    {
                        short l_383 = 1L;
                        short l_384 = 0xD132L;
                        l_373 = 0xF07C1DF6L;
                        l_280 = (p_48 , g_73);
                        l_385 &= ((l_280 < ((l_330 >= 0x6BE7L) , (safe_rshift_func_int16_t_s_u(((0UL != (safe_add_func_uint16_t_u_u((7L > (0x3E9181DDL ^ (safe_mod_func_int32_t_s_s(((p_48 , (safe_unary_minus_func_uint32_t_u(4294967295UL))) , (safe_mod_func_uint32_t_u_u((p_47 , l_383), g_220))), l_361)))), p_47))) < l_384), g_350)))) != l_373);
                        l_306 = ((l_373 > ((safe_add_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_313 || 6L), ((l_373 == (g_163 < p_47)) != (safe_add_func_int8_t_s_s(l_330, (l_392 , 0xCCL)))))), g_181)) , 65535UL)) <= p_49);
                    }
                    if (((((p_48 >= (((safe_add_func_uint32_t_u_u(((0x86L <= (l_58 , 0x42L)) && p_49), (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(g_362, ((((safe_mod_func_uint8_t_u_u(g_281, ((g_220 <= g_123) , g_312))) | (-1L)) && 65535UL) | (-10L)))), g_312)))) , l_373) <= g_9)) != g_9) ^ 1UL) >= p_49))
                    {
                        unsigned l_407 = 0x59094DFBL;
                        l_385 ^= (((safe_add_func_uint16_t_u_u(g_123, g_350)) > (safe_rshift_func_uint16_t_u_s((0x69L | ((g_307 ^ ((p_49 <= (p_49 > l_361)) >= (safe_sub_func_int16_t_s_s(((l_407 | l_407) , l_407), p_47)))) , p_47)), 3))) <= g_286);
                        return l_361;
                    }
                    else
                    {
                        l_408 ^= p_49;
                        g_350 |= p_49;
                        return g_121;
                    }
                }
                l_385 = p_48;
            }
            else
            {
                int l_423 = 0xD63A894BL;
                g_350 = (((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(((l_280 | (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(g_350, 6)), 5))) >= ((+(safe_div_func_uint32_t_u_u(0x5E7342D2L, 0xD3F18FECL))) > g_170)), (g_163 < l_419))), 13)) , 0xF9FE435CL) , p_48);
                for (g_73 = 4; (g_73 <= 15); g_73 = safe_add_func_int32_t_s_s(g_73, 1))
                {
                    unsigned l_426 = 4UL;
                    int l_439 = 0xF59FF775L;
                    if (g_73)
                    {
                        g_422 = l_306;
                        g_350 = g_73;
                        l_426 |= ((l_423 , (safe_rshift_func_int16_t_s_u(g_123, 1))) >= g_281);
                        g_427 = (!p_48);
                    }
                    else
                    {
                        const char l_430 = 0xF0L;
                        l_385 = ((0xE0FD2ED1L && ((0x45ABC7B5L != l_385) & ((((safe_add_func_uint32_t_u_u(((~g_121) , g_422), (g_350 != ((+(p_47 == g_220)) < ((0xAAL == 0x6FL) , p_47))))) || g_331) >= l_430) & 252UL))) <= 1UL);
                        l_439 = (0x0F7FL ^ (g_9 <= ((safe_sub_func_uint8_t_u_u(l_426, (safe_sub_func_int32_t_s_s((((p_49 < p_49) , g_362) | l_430), (g_331 , (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(6L, 0x002AL)), l_392))))))) , 0x64B51136L)));
                    }
                    l_306 = (((0x6180L <= p_49) | g_350) & ((safe_sub_func_uint16_t_u_u(((g_9 <= (l_419 != g_123)) , (safe_sub_func_int8_t_s_s(p_47, ((p_48 ^ l_385) , 1UL)))), g_312)) < l_423));
                    g_350 = ((~0x74AC043EL) == ((g_170 == (((p_49 < l_423) , ((safe_sub_func_uint8_t_u_u((g_9 || ((p_47 >= (l_450 , l_58)) , 1UL)), 0x0CL)) != p_47)) > 0x326ED6EAL)) , 4294967291UL));
                    l_306 = (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_423, (((+((safe_sub_func_uint16_t_u_u(p_49, (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(g_181, (!(safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((0xF0L | (safe_add_func_int8_t_s_s((p_47 , (safe_div_func_uint8_t_u_u(l_439, 0x47L))), (!(l_423 | g_331))))) >= g_307), l_114)), 9L)), l_392)), 0))))), 1)), g_308)))) , 8UL)) >= l_309) | 0xD1L))), l_423));
                }
                l_385 = l_326;
                l_475 = l_392;
            }
        }
        g_476 = p_49;
    }
    else
    {
        const unsigned l_479 = 4294967288UL;
        int l_484 = 0xDB5CA225L;
        int l_536 = 0xB6392A88L;
        const unsigned l_643 = 4UL;
        for (g_121 = 0; (g_121 <= 60); g_121 = safe_add_func_int8_t_s_s(g_121, 9))
        {
            unsigned l_497 = 0x659B2FF8L;
            int l_512 = 0x8418CE80L;
            short l_609 = 0x98FFL;
            unsigned short l_624 = 65535UL;
            if (l_479)
            {
                unsigned l_480 = 0x0CFA25F1L;
                l_480 ^= 5L;
            }
            else
            {
                unsigned char l_483 = 0x27L;
                int l_513 = (-3L);
                if ((((g_307 < p_48) , p_48) >= 1UL))
                {
                    unsigned l_485 = 0x32367D3FL;
                    unsigned l_498 = 0xA669B465L;
                    l_485 = ((safe_sub_func_uint8_t_u_u(p_48, l_483)) < l_484);
                    if ((((g_123 , ((l_485 | (((0x6B31F9C6L >= (l_484 & p_48)) <= (safe_unary_minus_func_uint16_t_u(l_485))) <= (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((l_497 >= (p_47 , (~(((((g_308 || l_485) , l_484) != l_498) || 0L) | l_485)))), p_47)), 4)), p_47)), g_499)), (-8L))))) , l_479)) | g_220) > 1L))
                    {
                        l_484 ^= p_49;
                        l_512 ^= (safe_sub_func_uint8_t_u_u(g_123, (((~(safe_rshift_func_int8_t_s_s(((p_48 & 0x4022L) , (safe_mod_func_uint16_t_u_u(((((((((((l_497 != p_49) != (safe_lshift_func_uint8_t_u_s(g_181, ((safe_rshift_func_uint16_t_u_s(l_483, p_49)) != (~((safe_sub_func_int32_t_s_s((-5L), g_362)) , p_49)))))) && 0x4141L) <= g_123) > 246UL) | 9UL) != 0xB6L) >= l_484) < g_308) || g_331), p_48))), l_498))) != l_485) <= g_220)));
                        g_499 = ((((l_513 == 65529UL) <= (p_48 , ((l_498 ^ (safe_sub_func_uint16_t_u_u((g_9 == ((safe_rshift_func_int8_t_s_u(((g_312 , l_485) ^ 255UL), ((l_95 > p_48) >= l_484))) & p_47)), p_48))) ^ p_48))) < l_485) <= l_485);
                        g_350 ^= ((safe_add_func_uint16_t_u_u(g_170, (safe_add_func_uint8_t_u_u(g_73, g_181)))) == (l_498 | (l_479 , (((g_9 == l_484) > (safe_mod_func_uint8_t_u_u((g_499 <= ((safe_mod_func_uint32_t_u_u((g_170 != l_485), p_49)) ^ 249UL)), g_313))) , g_422))));
                    }
                    else
                    {
                        unsigned l_526 = 0x88DFA95FL;
                        g_427 = (l_526 , g_308);
                        return g_312;
                    }
                }
                else
                {
                    char l_529 = 0x09L;
                    g_350 = ((!p_47) && ((0xDAA7D16AL >= 4294967287UL) , ((safe_sub_func_uint32_t_u_u((l_450 > g_350), ((l_513 > (g_307 & (g_362 & p_49))) < l_95))) , 0L)));
                    g_499 = g_121;
                    if ((((p_49 <= l_513) , g_362) ^ ((l_479 , g_73) && 0xFF9482C7L)))
                    {
                        g_350 = p_48;
                        g_427 = g_73;
                        g_499 = (l_529 , 1L);
                    }
                    else
                    {
                        int l_541 = 0x94C2EA7FL;
                        l_484 ^= ((0x9EC1L >= (g_73 && (((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((g_281 , (safe_sub_func_uint16_t_u_u(((0xE8L != g_123) | ((((p_48 < p_47) , p_49) , ((((l_536 && p_47) > p_47) , 0xBAF1C231L) || p_48)) <= 3L)), 3UL))) , g_476) <= p_49), l_529)), g_312)) , (-1L)) <= 0xD2L))) >= l_512);
                        if (p_49)
                            continue;
                        l_541 = ((((safe_lshift_func_uint8_t_u_u(l_483, 1)) >= (l_513 , (0xCA51L || p_47))) <= p_48) && (l_479 <= (safe_sub_func_uint16_t_u_u(g_313, l_497))));
                        g_499 = l_541;
                    }
                }
            }
            g_499 ^= (safe_mod_func_int32_t_s_s(((l_512 | 255UL) != l_536), ((!g_312) ^ (safe_mod_func_uint8_t_u_u(251UL, g_181)))));
            l_306 = ((p_47 < ((g_307 || g_308) , l_497)) , (g_9 || g_546));
            for (g_312 = 0; (g_312 == 29); g_312 = safe_add_func_uint16_t_u_u(g_312, 1))
            {
                int l_555 = 0xFB4DD98AL;
                int l_612 = 0x703E9E45L;
                int l_647 = 0x6548ADD8L;
                char l_660 = (-1L);
                if ((safe_div_func_int32_t_s_s(((p_47 & (((safe_rshift_func_uint8_t_u_u(1UL, 0)) != (safe_lshift_func_int8_t_s_u(0x87L, 3))) && l_555)) < (((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(l_450, g_308)), l_497)) && (l_58 | (((~l_555) != 0x95E5L) & p_48))), 0x4EL)) < 0UL) == p_49)), 0x8A14CACBL)))
                {
                    unsigned char l_580 = 0x05L;
                    int l_610 = 0x35B268EDL;
                    if ((l_479 && (safe_mod_func_uint16_t_u_u(g_170, 0x6634L))))
                    {
                        int l_585 = 0x5F37C1D4L;
                        g_427 = ((((~(safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_48 > g_362), ((g_427 >= ((g_427 , ((safe_sub_func_int32_t_s_s(g_281, (0xD9L | (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_49, ((safe_lshift_func_int8_t_s_u(((g_281 == g_422) != 0x58C4F036L), 5)) <= 0x4AL))), 0xC3L))))) , l_512)) == 3UL)) && 0xD745D6A0L))), 0x4EL))) > l_497) > 0x515927CDL) | p_48);
                        l_306 ^= (p_47 > (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_170, p_49)), ((g_308 || p_48) | (l_479 | (l_580 >= (safe_div_func_int32_t_s_s((p_48 & (safe_sub_func_int16_t_s_s(((p_49 , g_73) , (-1L)), l_585))), p_49))))))));
                        l_585 = (-1L);
                        if (g_307)
                            break;
                    }
                    else
                    {
                        unsigned short l_590 = 0xF607L;
                        g_499 ^= (p_47 & ((safe_div_func_int32_t_s_s(l_450, (safe_add_func_uint16_t_u_u(l_590, (safe_sub_func_int16_t_s_s((l_590 >= (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((p_49 , (1L ^ p_47)), (l_590 , (safe_mod_func_int32_t_s_s((0xDAB74AC6L ^ l_479), 4294967295UL))))), 0xB7L))), g_546)))))) == l_555));
                        l_306 &= (safe_div_func_int32_t_s_s(p_48, l_590));
                        l_512 = p_49;
                        return g_308;
                    }
                    if (l_497)
                    {
                        char l_611 = (-1L);
                        l_610 = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_476, l_580)), (g_281 || ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((l_555 || (g_350 | (l_96 ^ (l_609 , 0x7063L)))) && ((g_281 & 4294967295UL) , p_47)), p_47)), 0x3471L)) < 0xA6846648L)))) > p_47);
                        l_611 = l_610;
                        l_612 = 1L;
                    }
                    else
                    {
                        unsigned l_623 = 18446744073709551609UL;
                        l_624 |= (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((((g_313 == (safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0xBE85L, g_476)), (safe_rshift_func_int16_t_s_s((((g_281 >= ((l_497 , l_555) || (p_47 | ((l_484 < (-10L)) , l_96)))) != g_73) & l_580), 10))))) , 1L) ^ l_623), g_286)), 13));
                        l_610 = (-10L);
                        l_484 = g_163;
                    }
                    for (g_170 = (-23); (g_170 <= 7); g_170 = safe_add_func_uint32_t_u_u(g_170, 7))
                    {
                        unsigned l_627 = 4294967286UL;
                        l_512 ^= (l_610 && p_49);
                        l_536 = l_627;
                        l_512 = 1L;
                    }
                    l_306 &= (safe_rshift_func_int16_t_s_s((-4L), ((6L >= (((p_48 < (l_609 < (safe_mod_func_int8_t_s_s((-2L), l_580)))) || (g_121 , (safe_mod_func_uint32_t_u_u((l_479 && ((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((g_499 , l_555), g_123)), l_610)) != 0xA9L)), g_499)))) | p_47)) >= g_331)));
                }
                else
                {
                    int l_667 = 0x94B0CC1CL;
                    for (l_555 = 0; (l_555 >= (-19)); --l_555)
                    {
                        int l_640 = 3L;
                        l_612 = l_640;
                        g_350 = (l_484 > ((safe_div_func_int16_t_s_s(p_47, l_643)) , (0xBFC1L ^ g_307)));
                        g_427 = (l_609 | ((safe_sub_func_int32_t_s_s((l_643 || (safe_unary_minus_func_uint16_t_u((g_312 , l_647)))), 0xE2605E9EL)) != (safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(0L, (g_312 , ((p_47 & (65535UL <= p_48)) != 0xE3D868D9L)))), 0UL))));
                        g_499 = (safe_div_func_int8_t_s_s(((safe_div_func_uint8_t_u_u(l_647, 8L)) < ((((safe_rshift_func_uint8_t_u_s(g_286, 7)) | (g_9 && (safe_add_func_int8_t_s_s(l_660, (safe_lshift_func_uint8_t_u_s((l_497 ^ (p_47 <= l_479)), 5)))))) , (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((l_667 < 0xEEF9L) < l_609), l_667)), 4))) & 0x795797B2L)), g_331));
                    }
                    l_512 = p_48;
                    l_484 ^= (safe_mod_func_uint8_t_u_u((((g_73 <= l_643) < ((((safe_lshift_func_uint16_t_u_s((((l_612 == g_170) > (!(p_49 , 0x561BL))) && (((g_546 == (+(safe_lshift_func_uint16_t_u_u(g_307, 15)))) ^ 0xF8D3L) | g_286)), l_497)) != 0xC89CF068L) ^ 0xBAL) | g_312)) , p_47), 0x36L));
                }
                l_512 = (safe_mod_func_uint16_t_u_u(g_312, ((-9L) | 0xF6AF04A2L)));
                l_512 = (safe_sub_func_int32_t_s_s((((l_96 && (((safe_div_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(0L, 6)) & g_499), (safe_rshift_func_int16_t_s_u((((p_47 >= (l_450 & ((p_48 < (g_476 != (p_48 & (g_181 == 0x75EEL)))) , p_47))) , g_163) , l_484), 10)))), l_484)) & g_312) ^ 1L)) == l_306) > l_555), 0xD5209BD0L));
            }
        }
    }
    return g_312;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_307, "g_307", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    transparent_crc(g_362, "g_362", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    transparent_crc(g_1078, "g_1078", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    transparent_crc(g_1242, "g_1242", print_hash_value);
    transparent_crc(g_1325, "g_1325", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1688, "g_1688", print_hash_value);
    transparent_crc(g_1884, "g_1884", print_hash_value);
    transparent_crc(g_1916, "g_1916", print_hash_value);
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_2043, "g_2043", print_hash_value);
    transparent_crc(g_2166, "g_2166", print_hash_value);
    transparent_crc(g_2293, "g_2293", print_hash_value);
    transparent_crc(g_2596, "g_2596", print_hash_value);
    transparent_crc(g_2640, "g_2640", print_hash_value);
    transparent_crc(g_2893, "g_2893", print_hash_value);
    transparent_crc(g_2979, "g_2979", print_hash_value);
    transparent_crc(g_3027, "g_3027", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
