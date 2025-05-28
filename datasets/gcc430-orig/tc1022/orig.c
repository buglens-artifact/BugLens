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



static unsigned short g_51 = 65534UL;
static int g_72 = 1L;
static int g_85 = 1L;
static int *g_86 = &g_85;
static volatile int g_136 = 8L;
static int **g_166 = (void*)0;
static unsigned short g_188 = 0xA526L;
static unsigned long long g_231 = 0x311AD5033BB9946DLL;
static volatile int g_254 = 0x22B5BEA1L;
static volatile int *g_383 = (void*)0;
static const int *g_389 = &g_85;
static long long g_487 = 3L;
static short g_547 = 0xD456L;
static unsigned short g_555 = 65535UL;
static int g_757 = (-1L);
static unsigned long long g_768 = 0xD7FE1C94F1351027LL;
static unsigned g_829 = 1UL;
static long long g_834 = (-1L);
static unsigned char g_1079 = 1UL;



static int func_1(void);
static const unsigned long long func_4(char p_5, int p_6, char p_7, int p_8, unsigned short p_9);
static unsigned char func_27(long long p_28, int p_29, unsigned p_30);
static char func_33(unsigned char p_34, const short p_35);
static const unsigned short func_40(const int p_41, char p_42, unsigned char p_43);
static unsigned func_46(unsigned p_47, unsigned char p_48, const int p_49, const unsigned p_50);
static long long func_59(char p_60, short p_61, unsigned long long p_62, char p_63);
static short func_64(unsigned char p_65, short p_66, long long p_67);
static short func_74(short p_75, int p_76, const long long p_77, int p_78);
static short func_79(unsigned short p_80, unsigned short p_81, unsigned long long p_82, unsigned p_83);
static int func_1(void)
{
    int l_22 = 0x34688073L;
    unsigned char l_526 = 0x78L;
    unsigned char l_698 = 255UL;
    unsigned char l_699 = 0UL;
    unsigned long long l_700 = 0xC32341830C2F71C2LL;
    int *l_981 = &g_72;
    int ***l_982 = &g_166;
    unsigned long long l_983 = 3UL;
    unsigned l_1002 = 0x6B95CB8CL;
    unsigned short l_1003 = 65526UL;
    int **l_1004 = &g_86;
    unsigned l_1030 = 4294967292UL;
    int l_1057 = 4L;
    const int * const l_1081 = (void*)0;
    (*l_981) = (safe_mod_func_uint64_t_u_u(func_4((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x814BL, (safe_add_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((2UL ^ ((0x9A5A40F2FDAD5A51LL || ((!l_22) < ((18446744073709551607UL == (safe_mul_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((func_27((safe_lshift_func_int8_t_s_s(func_33(((safe_mul_func_uint16_t_u_u(1UL, ((safe_mod_func_int8_t_s_s((func_40(l_22, ((safe_rshift_func_int16_t_s_u((func_46(g_51, l_22, l_22, g_51) , l_526), g_487)) , l_526), g_51) >= 1L), 1UL)) == g_555))) && g_188), g_547), l_526)), l_22, l_526) <= l_526), 5UL)) | g_555), l_698))) , l_526))) || 0x6736L)), g_555)), l_699)) < 0L), l_700)) , g_136) >= l_526) <= l_698), g_555)))), 0x1CL)), g_547, g_555, g_547, g_547), 0x33170D584F524008LL));


    ;

    (*l_981) = (&g_166 != ((&l_22 != (void*)0) , l_982));
    if (l_983)
    {
        int *l_986 = &g_72;
        int **l_987 = &l_986;
        (*l_981) |= (safe_lshift_func_int16_t_s_u(0xB98EL, 13));
        (*l_987) = l_986;
        (*l_987) = ((**l_987) , &l_22);

        ;
    }
    else
    {
        int l_989 = 0L;
        int *** const l_1014 = &g_166;
        unsigned long long l_1023 = 0UL;
        const unsigned short l_1037 = 0xB6ADL;
        if ((*l_981))
        {
            unsigned l_988 = 0xFE58BA57L;
            int **l_996 = &l_981;
            const unsigned l_1001 = 0UL;
            unsigned short l_1005 = 0x9FA6L;
            (*l_981) ^= l_988;
            l_1005 = (l_989 , (((g_829 > (((safe_div_func_uint16_t_u_u((+0x0A1BL), (safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((l_996 == ((+(**l_996)) , l_1004)), g_188)) & g_834), 65527UL)))) <= g_254) > (-1L))) , l_989) || l_989));
        }
        else
        {
            unsigned l_1012 = 0xD4089069L;
            unsigned char l_1013 = 0x35L;
            unsigned long long l_1024 = 0x29A7AED4DB1020DFLL;
            int **l_1034 = &l_981;
            short l_1059 = 0x9B76L;
            if (((safe_lshift_func_int16_t_s_u(l_1023, g_829)) | 0xA3F4544B7EF2E824LL))
            {
                unsigned long long l_1033 = 18446744073709551613UL;
                (*l_981) = ((((g_487 , 0xB6C18C555F93C758LL) == func_59(l_1024, ((safe_add_func_uint64_t_u_u(((g_829 >= (((safe_unary_minus_func_uint64_t_u(g_254)) == (safe_mul_func_int16_t_s_s(func_79(l_1030, ((safe_add_func_uint32_t_u_u(((l_1033 == (*l_981)) >= g_829), l_1012)) <= l_1033), l_1033, g_555), l_1033))) , g_136)) <= g_85), 0UL)) | g_757), g_85, g_829)) || (-2L)) > 0x3903L);


                (**l_1034) = (g_254 != ((g_834 < g_51) <= ((&g_389 != l_1034) | (safe_add_func_uint8_t_u_u(0x8FL, (l_1037 || ((((**l_1034) || (0x4855CC9AA9962E4ELL >= 0x8D9CD600F8097F9FLL)) != 0xDBC259DDL) || g_72)))))));
            }
            else
            {
                unsigned short l_1044 = 0x925BL;
                int *l_1066 = &l_22;
                unsigned char l_1080 = 0UL;
                (*l_1034) = &g_85;

                ;
                for (g_547 = 0; (g_547 > (-9)); g_547 = safe_sub_func_uint64_t_u_u(g_547, 9))
                {
                    const char l_1058 = 0L;
                    unsigned l_1060 = 0x2EB50F74L;
                    unsigned char l_1076 = 255UL;
                    if ((safe_lshift_func_int16_t_s_u((((18446744073709551615UL > 1UL) , ((safe_div_func_uint16_t_u_u(func_59((l_1044 > g_51), ((safe_mul_func_int8_t_s_s(((*l_981) | g_254), g_72)) , g_547), l_1058, (**l_1034)), g_487)) > l_1059)) & 65535UL), g_834)))
                    {
                        (**l_1034) = 0x02E0F571L;
                        return l_1060;
                    }
                    else
                    {
                        int *l_1065 = (void*)0;
                        int *l_1073 = &g_757;
                        (*l_1073) ^= (safe_lshift_func_uint16_t_u_s(0x35E4L, (safe_add_func_int32_t_s_s((((-1L) && ((l_1065 != l_1066) , (((**l_1034) < (safe_mod_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((255UL == (safe_add_func_uint64_t_u_u(3UL, ((!g_834) > g_51)))) != 0x2B9A66D0885A4E38LL) & g_188) || (*l_1066)), l_1058)), (*l_1066)))) < g_254))) >= g_768), 1L))));
                        g_72 ^= (safe_rshift_func_uint8_t_u_u(l_1076, (safe_add_func_int16_t_s_s(func_79(g_757, g_136, (*l_1066), g_487), (g_1079 > l_1080)))));

                        ;
                        (*g_86) = (g_487 <= g_547);
                        g_389 = l_1081;

                        ;
                    }

                    ;
                    ;
                    if ((*l_1066))
                        continue;
                }
            }

            ;
        }

        ;
        (*l_1004) = &g_85;

        ;
    }

    ;
    return g_136;
}







static const unsigned long long func_4(char p_5, int p_6, char p_7, int p_8, unsigned short p_9)
{
    int *l_701 = &g_85;
    unsigned l_811 = 0xF8C552CAL;
    const int **l_863 = &g_389;
    const int ***l_862 = &l_863;
    short l_889 = 0x5C14L;
    char l_892 = (-4L);
    unsigned long long l_923 = 18446744073709551615UL;
    unsigned l_950 = 0x812FD627L;
    int l_953 = 0x62DE700CL;
    const char l_980 = 0x6CL;
    l_701 = (g_231 , &p_6);

    ;
    if ((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_547, ((safe_mul_func_uint16_t_u_u((1UL || (func_59((safe_rshift_func_uint16_t_u_s((*l_701), 6)), (g_188 , (safe_div_func_uint32_t_u_u(g_51, (*l_701)))), (*l_701), p_9) , g_231)), 0UL)) && (*l_701)))), 0)))
    {
        unsigned short l_716 = 0x9FDDL;
        int **l_721 = &l_701;
        int l_741 = 1L;
        unsigned l_828 = 18446744073709551615UL;
        short l_856 = 0x326EL;
        short l_905 = (-1L);
        unsigned char l_907 = 254UL;
        if ((safe_sub_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((l_716 <= (((&p_6 != (void*)0) , (p_9 <= ((safe_sub_func_uint32_t_u_u((l_716 == func_79((safe_rshift_func_int16_t_s_u(0x5D7AL, func_40((0xD72C8983L || (((((l_721 != &g_86) && p_8) || (-1L)) , g_547) && p_7)), p_5, p_6))), p_8, p_5, (**l_721))), p_5)) , p_6))) | p_5)), g_555)) , (*l_701)) <= g_547), 0UL)))
        {
            const char l_724 = 0x68L;
            unsigned l_725 = 4294967293UL;
            (*l_701) ^= func_74((safe_add_func_int16_t_s_s(g_72, 3L)), g_51, l_724, l_725);


        }
        else
        {
            int *l_769 = &g_72;
            for (p_6 = 0; (p_6 < 20); p_6 = safe_add_func_int8_t_s_s(p_6, 1))
            {
                unsigned short l_750 = 0x9522L;
                int * const *l_755 = &g_86;
                int l_776 = 1L;
                for (g_72 = 0; (g_72 == 23); g_72++)
                {
                    const short l_730 = (-5L);
                    int *l_756 = &g_757;
                }
            }
            p_6 = ((safe_div_func_int64_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((((safe_add_func_uint8_t_u_u((&g_389 == (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((((((&p_6 == (void*)0) || ((safe_mul_func_uint8_t_u_u(0x6AL, (*l_769))) != (&l_769 == ((safe_rshift_func_uint8_t_u_s(((*l_769) , p_6), 2)) , &l_769)))) , l_721) != l_721) | p_7), 14)), 6L)) , g_254) , (void*)0)), g_231)) ^ (*l_769)) > 1UL), (*g_86))), 249UL)) > g_487), 18446744073709551615UL)) && 0x17L);
        }
        if ((safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((((((p_6 != ((((func_64(func_40((safe_lshift_func_uint16_t_u_u(65535UL, (safe_sub_func_uint32_t_u_u((func_79((*l_701), (**l_721), ((g_254 , (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((g_72 , ((safe_add_func_int16_t_s_s((g_231 || l_828), p_8)) ^ 0L)), g_757)), 0xBDL))) > (**l_721)), g_231) < (*l_701)), (**l_721))))), g_188, p_8), g_768, g_547) > g_555) , p_9) & 0xF45CFDBFL) <= p_7)) , g_829) >= g_757) , p_5) ^ p_8) , g_757) == (*l_701)), p_7)), 0x4362L)))
        {
            int *l_835 = &g_757;
            g_86 = ((safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s(g_834, g_547)), (g_188 , p_7))) , (((void*)0 == (*l_721)) , l_835));

            ;
        }
        else
        {
            int **l_838 = &g_86;
            unsigned l_855 = 0UL;
            (*l_721) = (*l_721);
            for (g_85 = 0; (g_85 == (-28)); g_85--)
            {
                int l_841 = (-1L);
                int ***l_884 = &g_166;
                (*l_701) = ((func_79(g_757, (*l_701), ((void*)0 != l_838), (*l_701)) <= (*l_701)) ^ ((((-1L) >= ((safe_sub_func_int16_t_s_s(g_487, p_8)) && p_7)) && (**l_721)) > l_841));

                ;
                for (l_828 = (-10); (l_828 == 58); l_828 = safe_add_func_uint32_t_u_u(l_828, 1))
                {
                    unsigned char l_844 = 255UL;
                    char l_847 = 0xB9L;
                    int l_848 = 0xEFFCCAD7L;
                    int ***l_861 = (void*)0;
                    l_844 = p_8;
                    for (g_487 = 0; (g_487 < 28); g_487 = safe_add_func_uint32_t_u_u(g_487, 1))
                    {
                        (*l_838) = l_701;

                        ;
                        if (l_847)
                            break;
                    }
                    l_848 |= p_6;
                    for (g_72 = 23; (g_72 != (-9)); g_72--)
                    {
                        int *l_857 = &l_848;
                        p_6 &= p_8;
                    }
                }

                ;
            }


            for (g_188 = (-3); (g_188 < 59); g_188 = safe_add_func_int32_t_s_s(g_188, 1))
            {
                int *l_887 = &g_72;
                int *l_888 = &g_85;
                const unsigned l_906 = 18446744073709551615UL;
            }
        }


        l_953 ^= ((safe_rshift_func_uint16_t_u_u(0xE81CL, (&l_721 == ((safe_mod_func_uint32_t_u_u(l_950, 1L)) , (void*)0)))) , ((g_254 >= (*l_701)) , (safe_lshift_func_int8_t_s_s(p_5, 6))));
    }
    else
    {
        int l_960 = 0xA50F9BE2L;
        if ((g_188 , (g_834 < ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((+p_9), (p_9 != ((l_960 , ((void*)0 != &g_166)) == l_960)))), g_136)), l_960)) >= 249UL))))
        {
            int l_961 = 0xD3A5F49BL;
            int l_962 = 0x6903CF0CL;
            l_962 = l_961;
            p_6 = (safe_add_func_uint16_t_u_u(((void*)0 == &g_166), ((safe_rshift_func_uint16_t_u_s((0UL | (!(safe_rshift_func_int16_t_s_u(p_9, ((-7L) > (0xD5D67F21L < (safe_mul_func_uint8_t_u_u(((!g_487) & func_27(g_51, ((safe_mul_func_int16_t_s_s(g_231, g_757)) , p_6), p_8)), g_829)))))))), g_547)) ^ p_7)));


        }
        else
        {
            p_6 &= l_960;
            for (l_950 = (-22); (l_950 < 59); ++l_950)
            {
                (*l_863) = &g_757;

                ;
            }


        }


    }



    for (g_85 = 0; (g_85 <= (-28)); g_85 = safe_sub_func_int8_t_s_s(g_85, 8))
    {
        int *l_979 = (void*)0;
        (*l_863) = l_979;

        ;
    }


    return l_980;


}







static unsigned char func_27(long long p_28, int p_29, unsigned p_30)
{
    unsigned char l_693 = 0UL;
    unsigned l_696 = 4294967288UL;
    int l_697 = 0x0621D9A1L;
    l_697 = func_33(((((safe_add_func_int64_t_s_s(g_555, (safe_div_func_uint64_t_u_u((~l_693), func_64(p_30, (safe_mul_func_uint8_t_u_u((g_547 , 1UL), g_85)), p_29))))) >= g_555) <= l_693) == l_693), p_30);


    return l_697;
}







static char func_33(unsigned char p_34, const short p_35)
{
    int l_685 = 0x5A593898L;
    int **l_686 = &g_86;
    (*l_686) = (l_685 , &l_685);

    ;
    (**l_686) = 1L;
    (**l_686) = (safe_sub_func_uint64_t_u_u(1UL, 0UL));
    return g_254;


}







static const unsigned short func_40(const int p_41, char p_42, unsigned char p_43)
{
    int l_527 = (-8L);
    int *l_528 = &g_85;
    int **l_529 = (void*)0;
    unsigned char l_646 = 255UL;
    int **l_681 = (void*)0;
    int **l_682 = &l_528;
    (*l_528) = (9L == l_527);
    if ((&l_528 == (g_72 , l_529)))
    {
        int l_536 = 0xDBE6AA72L;
        unsigned short l_537 = 0x3C7AL;
        int l_538 = 6L;
        int *l_548 = &g_72;
        (*l_528) = (p_43 , (((((safe_mod_func_int32_t_s_s((l_537 <= g_51), l_538)) , p_43) , l_537) , 1L) , p_42));
        (*l_548) |= (safe_lshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((!65532UL), (safe_div_func_uint8_t_u_u((p_42 > (p_43 | ((g_136 || g_547) , (-9L)))), l_537)))), g_487)) <= g_85), g_188));
        (*l_528) &= 0x4460107AL;
        (*l_548) = (func_79((safe_mul_func_uint16_t_u_u((*l_548), (((safe_rshift_func_uint16_t_u_s(((((((&l_529 != ((p_41 , p_43) , (void*)0)) <= (*l_548)) != (*l_548)) || g_136) , 0x7A97E9CEL) > 3UL), g_51)) | p_41) < g_188))), g_51, g_85, p_41) >= p_42);

        ;
    }
    else
    {
        int *l_568 = &g_72;
        for (g_72 = (-26); (g_72 == (-5)); g_72 = safe_add_func_int16_t_s_s(g_72, 3))
        {
            int l_564 = (-1L);
            int **l_569 = (void*)0;
            int **l_570 = &g_86;
            for (g_51 = 0; (g_51 < 20); g_51 = safe_add_func_uint64_t_u_u(g_51, 1))
            {
                int **l_565 = (void*)0;
                int **l_566 = (void*)0;
                int **l_567 = &g_86;
                (*l_528) = (-1L);
                (*l_528) = (g_85 & (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(l_564, 5UL)), (p_43 != g_188))));
                (*l_567) = &l_564;

                ;
            }


            l_564 = p_43;
            (*l_570) = l_568;

            ;
            if ((p_42 , ((p_43 && (6L <= (*g_86))) > (safe_mod_func_uint32_t_u_u((((void*)0 != &g_389) > (safe_mul_func_uint8_t_u_u(((!((void*)0 != l_568)) > (((safe_rshift_func_int8_t_s_s((p_43 <= g_72), 2)) && g_254) != g_188)), g_51))), (-7L))))))
            {
                int *l_593 = (void*)0;
                int *l_594 = (void*)0;
                int *l_595 = &l_527;
                (*l_528) |= (*g_86);
                (*l_595) |= (g_72 , ((safe_add_func_int32_t_s_s(p_42, (safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(0x87L, 2)) != ((((void*)0 != &g_389) , func_79(p_42, (safe_sub_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((((((8UL & (p_41 || ((((safe_div_func_int64_t_s_s((*l_528), 0x9C5A72799BA1C6B7LL)) , &g_72) != l_593) != p_42))) , &l_570) != &g_166) >= p_42) , 0L), p_41)) , 0xD3F6DF83L), 0L)), p_42, g_555)) || p_42)), (-9L))), 3)))) , p_43));

                ;
            }
            else
            {
                int *l_599 = &l_564;
                (*l_570) = l_568;
                if (p_43)
                {
                    for (g_51 = 2; (g_51 >= 22); g_51 = safe_add_func_int8_t_s_s(g_51, 7))
                    {
                        (*l_528) ^= (**l_570);
                        (*l_570) = (*l_570);
                        (*l_528) &= p_43;
                        (*l_528) = (*g_86);
                    }
                }
                else
                {
                    volatile int **l_598 = &g_383;
                    (*l_598) = &g_254;

                    ;
                    (*l_570) = l_599;

                    ;
                }

                ;
            }

            ;
        }
        (*l_568) = (*l_528);
        if ((*l_528))
        {
            unsigned char l_625 = 0xDEL;
            for (l_527 = 0; (l_527 < (-18)); l_527 = safe_sub_func_uint16_t_u_u(l_527, 1))
            {
                unsigned char l_611 = 252UL;
                const int *l_630 = (void*)0;
                const int **l_631 = &l_630;
                (*l_568) = ((g_254 , ((safe_div_func_int32_t_s_s(4L, p_43)) && (((func_79(p_43, (*l_568), p_41, g_85) ^ g_85) <= g_72) > 0xA72BL))) >= g_231);
                for (g_72 = 11; (g_72 > (-28)); g_72 = safe_sub_func_uint32_t_u_u(g_72, 4))
                {
                    int *l_613 = &g_85;
                    if (p_43)
                    {
                        int **l_612 = (void*)0;
                        (*l_528) = l_611;
                        l_613 = &g_72;

                        ;
                    }
                    else
                    {
                        int l_622 = 0xC0B4E08BL;
                        int **l_629 = &l_613;
                        (*l_613) = (((*l_568) , (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((g_231 || 18446744073709551609UL) , ((safe_rshift_func_uint16_t_u_u(0x991DL, 15)) != g_72)), ((func_79(g_555, g_136, g_188, (6UL != (-1L))) != g_231) , l_622))), (*l_613))), 12))) || l_611);

                        ;
                        (*l_629) = ((func_74(g_72, ((safe_lshift_func_int16_t_s_s(((void*)0 == &g_85), (*l_568))) , (l_625 < (safe_unary_minus_func_uint16_t_u((9UL > (-9L)))))), g_547, (safe_lshift_func_int16_t_s_u((&l_568 != &g_383), 2))) || 18446744073709551609UL) , l_613);


                    }

                    ;
                    return g_188;
                }
                (*l_631) = l_630;
                if (p_42)
                    continue;
            }
            (*l_528) |= l_625;
        }
        else
        {
            int **l_632 = &l_568;
            unsigned l_679 = 0xFFD5D737L;
            (*l_632) = (void*)0;

            ;
            for (g_487 = (-7); (g_487 != 22); ++g_487)
            {
                int l_645 = 0x97711938L;
                if (func_64(func_59((((((safe_rshift_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u(0UL, (*l_528))) && func_59(((((safe_div_func_int8_t_s_s((func_79(p_42, ((safe_div_func_int8_t_s_s(p_42, p_43)) & (safe_rshift_func_int16_t_s_s(p_42, l_645))), g_72, p_43) ^ (*l_528)), p_41)) | p_42) != g_555) < g_254), p_42, p_43, l_646)) == g_51) || p_42), g_547)) & g_547) == 0xF202A776L) , g_555) > 250UL), g_231, p_42, p_41), p_41, p_43))
                {
                    (*l_528) = p_42;
                }
                else
                {
                    const int l_649 = (-9L);
                    int *l_650 = (void*)0;
                    int *l_651 = &l_527;
                    short l_661 = 0xBA95L;
                    (*l_651) ^= (func_74((safe_lshift_func_uint8_t_u_u(7UL, 7)), g_555, l_649, (*l_528)) & g_85);


                    if (p_43)
                        continue;
                    for (l_645 = (-17); (l_645 < 23); ++l_645)
                    {
                        (*l_632) = (*l_632);
                    }
                    if (p_43)
                    {
                        if (p_41)
                            break;
                        if (p_41)
                            break;
                    }
                    else
                    {
                        int l_654 = 0L;
                        if (p_42)
                            break;
                        if (l_654)
                            break;
                        (*l_632) = &l_527;

                        ;
                        l_654 &= (safe_add_func_uint16_t_u_u((g_231 > g_85), (g_555 > ((((*l_568) <= (*l_568)) || ((safe_mul_func_uint16_t_u_u(p_43, (func_74((safe_rshift_func_int16_t_s_u((p_42 , 0xB683L), g_85)), p_41, p_43, l_661) != g_72))) , g_136)) , g_72))));
                    }
                }
            }

            ;
            if (p_43)
            {
                short l_664 = (-4L);
                int *l_680 = (void*)0;
                if ((safe_div_func_uint8_t_u_u(l_664, (safe_mul_func_int16_t_s_s((*l_528), ((p_42 < 0L) || g_487))))))
                {
                    int *l_667 = &g_72;
                    (*l_667) |= (*l_528);
                    for (p_43 = (-9); (p_43 < 46); p_43++)
                    {
                        long long l_672 = 0xE49135BFC79AF9B5LL;
                        int *l_677 = &g_72;
                        const unsigned long long l_678 = 0UL;
                        (*l_528) = func_74((p_42 & (p_43 ^ p_42)), p_41, g_254, p_42);


                    }
                    (*l_632) = l_680;

                    ;
                    (*l_528) |= 0xEED9A085L;
                }
                else
                {
                    l_568 = l_568;
                    (*l_528) = (0UL && 1L);
                }
            }
            else
            {
                return g_136;
            }
        }

        ;
    }
    (*l_682) = &l_527;

    ;
    (*l_528) |= (safe_mul_func_uint16_t_u_u(5UL, (-1L)));
    return p_43;
}







static unsigned func_46(unsigned p_47, unsigned char p_48, const int p_49, const unsigned p_50)
{
    unsigned l_54 = 0xB4B72B41L;
    int *l_308 = &g_72;
    int l_388 = 0L;
    unsigned l_396 = 0x4CCA1ABCL;
    int *** const l_402 = &g_166;
    int l_412 = 7L;
    const unsigned l_514 = 0x91866EBDL;
    volatile int **l_523 = (void*)0;
    volatile int **l_524 = &g_383;
    int l_525 = 0x631C9715L;
    if ((g_51 <= p_47))
    {
        long long l_90 = 1L;
        const unsigned char l_230 = 0UL;
        int *l_310 = (void*)0;
        int *l_341 = &g_72;
        int **l_360 = &l_341;
        short l_374 = 0L;
        if (((safe_add_func_int8_t_s_s((l_54 , ((((safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(func_59((l_54 == (((func_64(g_51, p_47, p_48) ^ ((func_74(func_79(p_47, (p_49 == g_51), l_54, p_49), l_90, l_90, g_51) >= 0x217EL) <= l_90)) < l_54) ^ l_230)), g_85, g_231, g_51), p_50)), g_188)) || l_90) <= g_231) < p_47)), 0xB8L)) || l_54))
        {
            int **l_309 = &g_86;
            (*l_309) = (p_48 , l_308);

            ;
            return p_48;
        }
        else
        {
            int **l_311 = (void*)0;
            int **l_312 = &g_86;
            int l_319 = 1L;
            int l_324 = (-1L);
            volatile int *l_326 = &g_254;
            volatile int **l_325 = &l_326;
            (*l_312) = l_310;

            ;
            (*l_308) = (g_254 | (safe_add_func_uint16_t_u_u(g_51, (safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((p_48 > (p_50 < ((*l_308) > (func_79(l_319, g_231, (safe_sub_func_uint32_t_u_u((~(((safe_rshift_func_int16_t_s_s(func_79(((g_85 , p_50) < 2L), l_324, g_51, g_85), p_50)) , g_51) && p_49)), 0xBD563EC0L)), p_47) , p_48)))) != 1UL), 0UL)), g_188)))));

            ;
            (*l_325) = &g_254;
            for (g_85 = 0; (g_85 <= 11); g_85++)
            {
                int l_339 = 0x371D5E84L;
                int *l_359 = &g_85;
                if (((*l_308) || (p_49 , g_188)))
                {
                    const int **l_329 = (void*)0;
                    const int **l_330 = (void*)0;
                    const int *l_332 = &g_72;
                    const int **l_331 = &l_332;
                    (*l_326) |= 0x8FFED334L;
                    (*l_331) = &p_49;

                    ;
                }
                else
                {
                    for (p_48 = 0; (p_48 >= 11); ++p_48)
                    {
                        short l_337 = 4L;
                        int l_338 = 0x43292EDEL;
                        (*l_326) |= (safe_rshift_func_int8_t_s_u((*l_308), 3));
                        (*l_308) = (*g_86);
                        l_338 = l_337;
                    }
                    (**l_325) = (*g_86);
                }
            }
        }
        (*l_360) = l_310;

        ;
        for (g_188 = 0; (g_188 == 60); ++g_188)
        {
            unsigned long long l_373 = 18446744073709551608UL;
            int * const **l_401 = (void*)0;
            unsigned short l_421 = 1UL;
            if ((*l_308))
            {
                return g_188;


            }
            else
            {
                const unsigned long long l_375 = 9UL;
                int l_400 = 0x3B758BA4L;
                unsigned char l_455 = 1UL;
                if ((func_74((((*l_308) | (4L != 0x6DF6E22EL)) & 0x9557001E8C80B86BLL), (((+3L) , (safe_add_func_uint32_t_u_u(g_85, p_48))) == (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(0x2EL, 1)), (safe_div_func_uint8_t_u_u(l_373, l_374))))), l_375, p_50) || 1UL))
                {
                    int l_376 = 0x4D23C713L;
                    int **l_377 = &g_86;
                    int l_378 = 0xDD52420EL;
                    l_378 |= ((p_49 < ((((0x2B4CL || 65535UL) != 0x1FA3FB0C445DB1F9LL) & func_79((((+((g_51 , l_376) | l_375)) , &g_86) != l_377), p_48, (*l_308), g_231)) && 0xDBAFL)) >= 4294967295UL);

                    ;
                    (**l_377) ^= ((safe_mul_func_uint8_t_u_u((g_136 | p_48), 0x32L)) && ((((safe_rshift_func_int16_t_s_u(((-7L) <= ((g_231 , (g_383 == &p_49)) | g_254)), 10)) >= ((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s(g_231, p_49)), g_188)) , g_72)) == l_375) && (-5L)));
                    if (p_47)
                    {
                        if (l_388)
                            break;
                        if ((*g_86))
                            break;
                        (*l_360) = (*l_360);
                        if (p_48)
                            continue;
                    }
                    else
                    {
                        g_389 = &p_49;

                        ;
                        (*g_86) = (**l_377);
                    }
                }
                else
                {
                    int *l_399 = &g_72;
                    if (((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((p_49 != (*l_308)) & (safe_div_func_int16_t_s_s(g_231, (l_396 && (safe_sub_func_uint16_t_u_u(g_51, (&g_85 == (((((void*)0 == &g_72) > g_254) != 0x69L) , l_399)))))))), l_375)), g_188)) <= 0xA9L) , &l_341) != &g_389))
                    {
                        l_400 &= (p_47 & 4L);
                    }
                    else
                    {
                        int **l_409 = &l_308;
                        (*l_308) ^= (l_401 != l_402);
                        (*l_308) = (safe_lshift_func_int8_t_s_s(((*l_399) , func_64(l_375, ((0xC9L || ((((safe_rshift_func_int16_t_s_u(((l_409 == (g_231 , l_409)) <= ((safe_rshift_func_uint8_t_u_s(((p_49 , p_49) ^ ((void*)0 != &g_85)), g_188)) <= g_231)), l_412)) & 0UL) ^ g_51) != p_50)) < p_48), g_231)), 2));
                        (**l_409) = (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((p_50 ^ ((void*)0 == l_402)), func_64((g_254 || ((safe_div_func_int8_t_s_s(p_49, (p_47 & g_231))) && ((8UL > ((((safe_add_func_int64_t_s_s(((&g_86 == &l_399) <= 2UL), l_373)) < (-7L)) || 0UL) | l_421)) <= g_231))), p_47, p_49))), g_231));
                        (*l_409) = (void*)0;

                        ;
                    }

                    ;
                    (*l_399) = 0x28C3C1A8L;
                    (*l_360) = (void*)0;
                    return g_136;


                }
                for (p_48 = 6; (p_48 > 12); ++p_48)
                {
                    for (l_396 = (-19); (l_396 < 1); l_396 = safe_add_func_int8_t_s_s(l_396, 2))
                    {
                        char l_428 = 8L;
                        (*l_360) = (*l_360);
                        l_428 &= (safe_mul_func_uint8_t_u_u((!(&p_49 == &p_49)), g_85));
                    }
                    (*l_308) = func_79((!(safe_mod_func_int64_t_s_s((((-3L) ^ p_47) < ((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(g_231, (safe_mul_func_int16_t_s_s((&g_86 != ((((safe_div_func_uint32_t_u_u(p_49, ((safe_mul_func_uint16_t_u_u(1UL, (safe_rshift_func_uint8_t_u_s((*l_308), (safe_mul_func_uint16_t_u_u(g_85, 0xA83EL)))))) , (*l_308)))) ^ g_231) | p_47) , &g_383)), p_47)))) ^ 4294967286UL), p_47)) , 0x5BC3FD210D425599LL)), g_231))), l_375, g_188, p_48);
                }
            }
        }


    }
    else
    {
        const int **l_456 = &g_389;
        (*g_86) |= 0L;
        (*l_456) = &p_49;

        ;
        l_308 = &g_85;

        ;
        (*l_308) = 0x90D3457EL;
    }

    ;

    for (l_54 = 0; (l_54 != 11); l_54 = safe_add_func_int64_t_s_s(l_54, 6))
    {
        const int **l_459 = &g_389;
        unsigned short l_472 = 1UL;
        char l_505 = 0x8FL;
        long long l_512 = (-3L);
        (*l_459) = &p_49;

        ;
        for (g_231 = 7; (g_231 <= 53); g_231 = safe_add_func_int8_t_s_s(g_231, 3))
        {
            long long l_468 = 0L;
            int l_473 = 0x83D750BCL;
            int l_494 = 0x87CBE354L;
            int ***l_501 = (void*)0;
            long long l_504 = (-1L);
            char l_513 = 0x97L;
            for (g_72 = 0; (g_72 >= (-4)); g_72 = safe_sub_func_uint32_t_u_u(g_72, 5))
            {
                long long l_471 = (-4L);
                volatile int *l_474 = &g_254;
                (*l_459) = (*l_459);
                (*l_459) = &p_49;

                ;
            }
            for (p_47 = 8; (p_47 != 59); p_47++)
            {
                unsigned char l_500 = 247UL;
                if (l_468)
                    break;
                for (g_72 = 16; (g_72 != (-21)); --g_72)
                {
                    int l_488 = 0x0ED41A89L;
                    int *l_489 = &l_473;
                    (*l_459) = (*l_459);
                    (*l_489) = func_74(g_136, (p_49 , ((((safe_mul_func_int8_t_s_s((func_79(g_188, (func_79(g_231, ((safe_sub_func_uint16_t_u_u(l_468, func_79(p_48, (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(g_231, ((7UL == (*g_389)) && 1L))), 2L)), g_487, p_47))) , g_72), p_47, l_488) >= p_49), (*l_308), p_48) ^ g_72), 0xE1L)) || (-1L)) , (**l_459)) <= p_50)), l_468, (*g_389));


                    (*l_459) = &g_72;

                    ;
                    for (l_488 = (-5); (l_488 > (-1)); l_488++)
                    {
                        int l_497 = 0L;
                        (*l_489) = (((safe_rshift_func_uint8_t_u_s(((!l_473) , 255UL), 4)) , &g_166) == l_501);
                    }
                }
                (*l_308) = p_48;
            }

            ;
            for (l_494 = 0; (l_494 > (-16)); --l_494)
            {
                if (p_47)
                    break;
                if (p_47)
                    continue;
                l_505 = l_504;
                (*l_308) |= 0xC9D1F365L;
            }
            (*l_459) = (((~func_64(p_48, func_74(p_49, ((((safe_mul_func_int8_t_s_s(((((p_49 , (g_487 != (!((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((&g_166 == l_501), p_47)), (((0xDEF52C4EAF09F1FFLL | (g_188 > g_72)) , g_487) < p_49))) & 0x6390L)))) < g_85) , g_72) == p_49), l_512)) & p_49) | (*l_308)) <= l_513), l_514, p_47), p_47)) && l_513) , &g_85);


            ;
        }

        ;
        (*l_459) = &p_49;

        ;
        (*l_308) = func_64(((g_85 | (func_64((safe_rshift_func_uint8_t_u_s(g_85, 3)), p_50, (+(0xFA7CL == (**l_459)))) & (func_74((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(0L, (safe_div_func_uint8_t_u_u((((void*)0 != &g_166) ^ g_487), 0xA6L)))), 0x7C42A977L)), g_231, g_231, p_49) , 0L))) != 0x5A8BECAAL), g_85, p_50);


    }


    (*l_524) = &g_254;

    ;
    return l_525;


}







static long long func_59(char p_60, short p_61, unsigned long long p_62, char p_63)
{
    unsigned long long l_232 = 1UL;
    int *l_239 = &g_72;
    unsigned l_243 = 0xECE7D4CFL;
    unsigned short l_261 = 4UL;
    long long l_307 = 0x482DDD63B8A34B86LL;
    if (l_232)
    {
        short l_240 = 0x4C8DL;
        int **l_241 = (void*)0;
        int *l_297 = &g_85;
        int *l_304 = (void*)0;
        int l_306 = 0xDD2A3B7EL;
        if ((((safe_mul_func_uint16_t_u_u(((((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(0UL, (l_239 == l_239))), p_63)) != l_240) , l_241) == &g_86), (safe_unary_minus_func_uint8_t_u(p_62)))) > (*l_239)) | l_243))
        {
            int *l_250 = &g_72;
            int l_266 = 0xFF0F8D77L;
            unsigned short l_278 = 65534UL;
            int *l_298 = (void*)0;
            if ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_62, (p_61 <= g_85))), ((p_61 == (l_239 == l_250)) > (safe_rshift_func_int8_t_s_s(p_60, 1))))), (*l_239))))
            {
                int ***l_253 = (void*)0;
                (*l_239) ^= p_63;
                (*l_239) = (&g_166 == l_253);
                (*l_239) = (g_254 < ((func_64(((safe_sub_func_int8_t_s_s(((void*)0 != l_239), (*l_250))) && p_63), (safe_mod_func_int16_t_s_s(p_61, ((((safe_lshift_func_uint8_t_u_s(l_261, (func_79((safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s(((p_61 || (((((((!(&g_72 != l_250)) , 0L) , &g_72) != &g_85) != g_72) , g_85) , l_266)) ^ g_51), g_188)), g_188)), g_188, g_72, g_231) == (*l_250)))) && g_85) , (-1L)) , p_63))), p_60) >= p_63) , (*l_250)));

                ;
            }
            else
            {
                int *l_267 = &l_266;
                int l_276 = 0xBE26192BL;
                unsigned l_277 = 4294967295UL;
                (*l_267) &= ((l_239 != l_267) | ((p_62 != ((safe_mul_func_uint16_t_u_u(((g_188 != (p_61 , ((*l_239) <= (safe_rshift_func_int8_t_s_u(func_74((safe_mul_func_uint16_t_u_u(l_276, (+4UL))), ((*l_250) > l_277), (*l_239), (*l_250)), l_278))))) , p_60), p_62)) >= g_231)) , (*l_250)));


                return p_63;
            }

            ;
            (*g_86) = ((safe_rshift_func_int16_t_s_s((((safe_div_func_int16_t_s_s((g_231 == (*l_239)), (safe_mod_func_int8_t_s_s(p_62, (*l_250))))) , ((0UL & 4294967289UL) , &l_250)) == ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((~(safe_div_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_61, 0)), ((safe_mul_func_int8_t_s_s((*l_250), 0x20L)) , (*l_239)))) , (*l_239)) >= p_62) < g_72), 0x91L))), p_63)), (*l_239))) , l_241)), 13)) , p_60);
            l_298 = l_297;

            ;
            return (*l_297);
        }
        else
        {
            const unsigned short l_303 = 0x0ABAL;
            int * const l_305 = &g_85;
            l_306 &= (safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((((func_79(p_62, func_64(p_61, (*l_239), (p_62 , (p_62 == (g_254 <= l_303)))), p_62, (*l_297)) ^ 255UL) , l_304) != l_305), 4)) >= (-10L)) == l_243), g_51));

            ;
        }

        ;
    }
    else
    {
        return g_51;
    }

    ;
    return l_307;
}







static short func_64(unsigned char p_65, short p_66, long long p_67)
{
    int **l_68 = (void*)0;
    int **l_69 = (void*)0;
    int *l_71 = &g_72;
    int **l_70 = &l_71;
    int *l_73 = &g_72;
    (*l_70) = (void*)0;

    ;
    (*l_73) = p_67;
    return g_72;
}







static short func_74(short p_75, int p_76, const long long p_77, int p_78)
{
    int *l_97 = (void*)0;
    unsigned short l_140 = 0x2EEFL;
    long long l_154 = 0L;
    long long l_167 = 0xFEC589AC8C392C9DLL;
    int **l_215 = &g_86;
    char l_220 = 7L;
    unsigned l_223 = 1UL;
    long long l_229 = (-6L);
    for (p_75 = 0; (p_75 >= 6); p_75 = safe_add_func_int64_t_s_s(p_75, 4))
    {
        unsigned char l_98 = 1UL;
        const int *l_99 = &g_85;
    }
    (*l_215) = &p_78;

    ;
    (*l_215) = (*l_215);
    l_229 ^= (safe_sub_func_uint32_t_u_u(0xD86CB6A1L, (((**l_215) & ((safe_mod_func_int64_t_s_s(l_220, (safe_add_func_int8_t_s_s(p_75, ((*g_86) , l_223))))) > (p_76 , (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((&g_166 != (void*)0) && (**l_215)))) >= (-1L)), (**l_215))), p_78))))) , p_76)));
    return g_136;


}







static short func_79(unsigned short p_80, unsigned short p_81, unsigned long long p_82, unsigned p_83)
{
    int *l_84 = &g_85;
    int **l_87 = (void*)0;
    int **l_88 = (void*)0;
    int **l_89 = &l_84;
    g_86 = l_84;

    ;
    (*l_89) = l_84;
    return (**l_89);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_555, "g_555", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_834, "g_834", print_hash_value);
    transparent_crc(g_1079, "g_1079", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
