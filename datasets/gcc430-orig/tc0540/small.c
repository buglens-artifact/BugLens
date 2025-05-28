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



static const unsigned short g_6 = 0xF378L;
static int g_22 = 0xC48B1647L;
static int g_68 = 0xC4B6369DL;
static int g_72 = (-6L);
static const int g_75 = 0xE20B4584L;
static long long g_78 = 0x1262954F618E188ALL;
static long long *g_89 = &g_78;
static long long **g_88 = &g_89;
static unsigned g_105 = 3UL;
static short g_107 = (-1L);
static int g_109 = (-10L);
static unsigned char g_112 = 0x61L;
static unsigned long long g_130 = 0x96D7DE8DED04CED5LL;
static int g_145 = 0x64C99091L;
static unsigned short g_159 = 0x8AEEL;
static unsigned long long *g_167 = (void*)0;
static unsigned long long **g_166 = &g_167;
static short *g_187 = &g_107;
static short *g_211 = (void*)0;
static char g_241 = 0xDAL;
static const unsigned short g_246 = 1UL;
static const unsigned short *g_245 = &g_246;
static int **g_253 = (void*)0;
static int *g_256 = &g_145;
static int **g_255 = &g_256;
static int g_284 = 0x7E68031BL;
static unsigned g_288 = 18446744073709551615UL;
static short g_323 = 0x44C5L;
static unsigned g_349 = 18446744073709551612UL;
static unsigned long long g_449 = 0UL;
static char *g_459 = &g_241;
static char **g_458 = &g_459;
static short g_466 = 0x8A92L;
static int g_490 = 5L;
static unsigned char g_560 = 246UL;
static unsigned g_635 = 4294967295UL;
static long long g_730 = 1L;
static unsigned short *g_748 = (void*)0;
static unsigned short **g_747 = &g_748;
static const long long g_768 = 6L;
static int g_794 = 0xC2DB497CL;
static int *g_807 = (void*)0;
static int ** const g_806 = &g_807;
static unsigned g_837 = 1UL;
static unsigned g_846 = 9UL;
static const int *g_849 = (void*)0;



static int func_1(void);
static int func_2(const unsigned short p_3, unsigned p_4, short p_5);
static char func_13(int p_14);
static unsigned char func_18(unsigned p_19);
static unsigned func_20(const unsigned long long p_21);
static int func_25(short p_26, int p_27, unsigned p_28);
static short func_35(char p_36, char p_37, unsigned long long p_38, const int p_39);
static const unsigned long long func_55(unsigned p_56, long long p_57, unsigned long long p_58, long long p_59, unsigned p_60);
static unsigned func_61(unsigned char p_62, char p_63, unsigned p_64);
static const char func_65(int p_66);
static int func_1(void)
{
    unsigned long long l_15 = 1UL;
    int *l_460 = &g_68;
    unsigned l_467 = 1UL;
    char l_738 = 0xE2L;
    const long long **l_765 = (void*)0;
    long long * const *l_769 = &g_89;
    int **l_798 = (void*)0;
    unsigned long long l_814 = 1UL;
    char l_824 = 0x0DL;
    char l_831 = 0x90L;
    int *l_848 = &g_145;
    unsigned l_853 = 18446744073709551615UL;
    int l_863 = (-5L);
    unsigned long long *l_866 = &l_15;
    unsigned long long *l_867 = &g_449;
    long long ***l_873 = (void*)0;
    long long ****l_872 = &l_873;
    unsigned long long l_874 = 0UL;
    int l_875 = 0L;
    short *l_876 = &g_466;
    unsigned l_877 = 1UL;
    if ((!func_2(g_6, (safe_mul_func_uint16_t_u_u((1L == (safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((func_13(l_15) >= (((*l_460) = l_15) , g_159)), ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((*g_245))), (safe_rshift_func_uint8_t_u_u(255UL, g_466)))) > l_467))) , g_75) < g_130), 0x990BL))), l_467)), (*g_187))))
    {
        unsigned long long l_745 = 5UL;
        unsigned short **l_746 = (void*)0;
        unsigned short ***l_749 = &g_747;
        int *l_754 = (void*)0;
        int *l_755 = &g_109;
        int l_780 = (-1L);
        (*l_755) ^= ((safe_add_func_int16_t_s_s(l_738, 0xA1BEL)) != func_61((safe_sub_func_int16_t_s_s(((*g_245) <= (safe_lshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((*l_460), l_745)) , l_746) == ((*l_749) = g_747)), 2))), l_745)), (**g_458), (*l_460)));
        if ((*l_460))
        {
            int l_761 = 0L;
            const long long *l_767 = &g_768;
            const long long **l_766 = &l_767;
            long long * const **l_770 = &l_769;
            for (g_284 = 0; (g_284 >= (-10)); g_284 = safe_sub_func_uint32_t_u_u(g_284, 4))
            {
                long long l_760 = 0xA0D173FC1497FCE1LL;
                unsigned long long *l_762 = (void*)0;
                unsigned long long *l_763 = &g_449;
                int l_764 = 7L;
                (*l_460) = 0xCB5EB92FL;
                (*l_460) &= g_72;
                l_764 = (safe_mod_func_uint64_t_u_u(l_760, ((*l_763) = l_761)));
            }
            (*l_755) &= (*l_460);
            (*l_460) ^= ((l_766 = l_765) == ((*l_770) = l_769));
            return g_107;
        }
        else
        {
            int l_775 = 0x05E58524L;
            unsigned *l_783 = &g_288;
            unsigned char *l_795 = &g_112;
            g_72 |= (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(l_775, 10)), 65534UL)) > (((*g_459) ^ ((safe_mul_func_uint8_t_u_u(g_109, l_775)) , g_241)) < (*l_460))) < (*l_460));
            l_775 = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(func_55(g_6, (safe_add_func_int32_t_s_s((!(*l_460)), (safe_add_func_uint64_t_u_u(g_490, (*l_755))))), (*l_460), ((**g_88) = ((*l_749) == &g_245)), (4UL <= (safe_add_func_uint8_t_u_u(((*l_795) = (l_775 == g_794)), 0L)))), g_75)), 1L)) == 8L);
        }
    }
    else
    {
        unsigned short l_799 = 0x9E70L;
        int **l_808 = &g_807;
        int ***l_809 = (void*)0;
        int ***l_810 = (void*)0;
        int ***l_811 = &l_808;
        unsigned char *l_819 = &g_112;
        int * const *l_821 = (void*)0;
        int * const **l_820 = &l_821;
        short l_822 = 0x9F21L;
        unsigned char l_823 = 0xF8L;
        int l_825 = (-10L);
        char *l_856 = &l_831;
        l_825 ^= ((((safe_sub_func_uint32_t_u_u(func_55(((void*)0 != l_798), ((((l_799 ^ (g_130 &= (((*l_819) = (safe_mul_func_uint16_t_u_u((*g_245), ((safe_mul_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((-9L), 4)), ((g_806 == ((*l_811) = l_808)) >= (safe_sub_func_uint64_t_u_u(l_814, (safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(((l_799 , 0xD2243A1DL) , (-1L)), l_799)), 0L))))))) , 0x7CDAL)))) > g_145))) , &g_253) != l_820) && l_822), l_823, l_824, g_105), 0x7CB2F566L)) && (-1L)) >= (*g_459)) , g_22);
        for (g_730 = 0; (g_730 == 14); g_730++)
        {
            int *l_828 = (void*)0;
            unsigned char **l_840 = &l_819;
            short ***l_852 = (void*)0;
            (*g_255) = l_828;
        }
        (*l_848) = ((g_323 = (safe_rshift_func_int8_t_s_s((**g_458), ((*l_856) = (*g_459))))) <= ((g_22 ^= ((*l_848) >= 252UL)) , 0UL));
    }
    (*l_460) = (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((*l_876) |= (safe_mul_func_int16_t_s_s(((**g_458) < func_55(((~l_863) ^ (((*l_867) ^= ((*l_866) = ((0x527A4A0AA8C4616ELL != 5L) <= (safe_lshift_func_int8_t_s_u(0xACL, 7))))) >= (safe_mod_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(((*l_848) , g_6), (g_560 = ((void*)0 == l_872)))) >= g_284) == (**g_88)), 1UL)))), (*l_460), l_874, (*g_89), l_875)), 0x8C69L))), 8UL)) , 2UL), g_794));
    return l_877;
}







static int func_2(const unsigned short p_3, unsigned p_4, short p_5)
{
    unsigned l_468 = 18446744073709551610UL;
    char ***l_469 = &g_458;
    char l_473 = 8L;
    int *l_476 = &g_145;
    long long ****l_515 = (void*)0;
    long long ***l_517 = (void*)0;
    long long ****l_516 = &l_517;
    unsigned long long *l_522 = &g_130;
    unsigned l_531 = 2UL;
    unsigned long long l_576 = 1UL;
    int **l_587 = &g_256;
    const char l_623 = 1L;
    int l_624 = 4L;
    unsigned char l_714 = 0xF0L;
    int *l_717 = &g_284;
    int **l_716 = &l_717;
    int l_735 = 0L;
    if ((((((0x2716L && ((-9L) & l_468)) , g_159) , l_469) != &g_458) | (safe_sub_func_uint16_t_u_u((((0xF9B6L | ((((((p_5 <= 0x855EDBE9L) , p_4) & 65534UL) >= l_468) < l_468) , l_468)) , l_468) >= 0x42B9L), 65535UL))))
    {
        short l_472 = 8L;
        int *l_474 = (void*)0;
        int *l_475 = &g_109;
        unsigned char *l_481 = &g_112;
        unsigned *l_484 = &g_105;
        (*l_475) |= (((func_65(l_472) , p_4) , (l_473 >= 1UL)) != (*g_256));
        l_476 = (*g_255);
        if ((((((p_4 , p_4) , 18446744073709551615UL) >= (p_5 != ((*l_476) <= (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((*l_481) = (p_4 >= 0x95D400788CFFB619LL)), (g_72 || (((*l_484) = (safe_mod_func_uint32_t_u_u(((((*g_245) | 65528UL) > (*g_245)) == (*l_476)), 0x0FBA03F3L))) , p_4)))), 0x6B08A993L))))) | (**g_458)) ^ (*l_475)))
        {
            char l_493 = 0xBBL;
            int *l_497 = &g_145;
            for (g_349 = (-16); (g_349 < 26); ++g_349)
            {
                short l_489 = 0xFB8DL;
                int *l_492 = &g_72;
                unsigned l_498 = 18446744073709551615UL;
                if ((safe_sub_func_int32_t_s_s((((*l_484) = g_241) > (g_490 = l_489)), 4294967295UL)))
                {
                    int *l_491 = &g_145;
                    l_492 = l_491;
                    if (l_493)
                        continue;
                }
                else
                {
                    int *l_496 = &g_68;
                    (*g_256) = (**g_255);
                    for (g_72 = 0; (g_72 <= 11); g_72 = safe_add_func_int32_t_s_s(g_72, 2))
                    {
                        l_497 = (l_492 = l_496);
                        (*l_475) |= (l_498 | ((*l_476) , func_25(p_5, p_3, p_3)));
                    }
                    (*g_255) = l_492;
                }
                (**g_255) &= 0L;
                (*l_497) |= (p_4 , 0x1A0B9CB5L);
                (*g_255) = (*g_255);
            }
            (*l_475) |= func_18(p_3);
            (*l_475) &= (((*l_497) < 0x5EA06B9CL) > (safe_rshift_func_int8_t_s_u((&l_476 != &g_256), 0)));
            return (*l_476);
        }
        else
        {
            int *l_502 = &g_284;
            int **l_501 = &l_502;
            int l_508 = (-5L);
            if ((&g_284 == ((*l_501) = l_476)))
            {
                unsigned long long l_507 = 5UL;
                int *l_512 = (void*)0;
                for (g_145 = 25; (g_145 < (-18)); g_145 = safe_sub_func_int8_t_s_s(g_145, 3))
                {
                    int *l_505 = (void*)0;
                    int **l_506 = &l_505;
                    (*l_506) = (((*g_187) = (+p_5)) , ((*g_255) = l_505));
                    return l_507;
                }
                (*l_476) = (func_61((((l_508 || ((**g_458) == (safe_mul_func_int8_t_s_s(((p_4 , (safe_unary_minus_func_uint16_t_u((*l_475)))) >= 18446744073709551615UL), (4294967295UL != func_65(((**l_501) = (p_4 && p_5)))))))) | p_5) && l_507), (**g_458), p_5) != l_508);
                (*g_255) = l_512;
                (*l_476) ^= p_5;
            }
            else
            {
                (*g_255) = l_476;
                (*g_255) = &l_508;
                (*l_475) |= (**g_255);
            }
            return p_3;
        }
    }
    else
    {
        unsigned l_513 = 0x8D0D6267L;
        int *l_514 = &g_22;
        (*l_476) = l_513;
        (*l_514) &= (*g_256);
    }
    (*g_256) ^= p_5;
    (*l_476) = (&g_88 != ((*l_516) = (void*)0));
    if ((0x19L | (**g_458)))
    {
        const unsigned long long *l_521 = (void*)0;
        const unsigned long long **l_520 = &l_521;
        int l_536 = 0x2229E3DFL;
        unsigned long long * const *l_658 = &l_522;
        unsigned long long * const **l_657 = &l_658;
        unsigned char *l_685 = (void*)0;
        const unsigned short **l_702 = &g_245;
        unsigned short *l_705 = &g_159;
        unsigned short **l_704 = &l_705;
        int l_722 = 0x693A3758L;
        (**g_255) = (l_531 = (!(!(safe_mod_func_uint8_t_u_u(((((0x2D0AE6A2L <= (*g_256)) , ((*l_520) = (void*)0)) != l_522) | (safe_mod_func_uint64_t_u_u((((**g_255) > ((safe_add_func_uint16_t_u_u(((((**g_88) || (((safe_mul_func_int16_t_s_s((p_5 && p_3), (((safe_rshift_func_uint8_t_u_u(p_5, 7)) == (*l_476)) >= 0xE3991EE2L))) == (*l_476)) == p_3)) >= 0xCD7813B1EEC1BB38LL) && 18446744073709551607UL), p_4)) >= (**g_255))) , 0xFBBC6955CDB52F41LL), (*l_476)))), p_5)))));
        if (p_3)
        {
            int l_547 = 6L;
            int l_550 = 0xD9741909L;
            int l_571 = 0x72180915L;
            short l_577 = 0x2BEEL;
            for (g_490 = 0; (g_490 >= 19); g_490++)
            {
                (*g_255) = (*g_255);
                (*g_255) = (*g_255);
            }
            (*g_256) = p_5;
            for (p_4 = (-25); (p_4 != 17); ++p_4)
            {
                int l_551 = 1L;
                unsigned short *l_568 = &g_159;
                unsigned short ** const l_567 = &l_568;
                (**g_255) &= 0L;
                (*g_255) = (*g_255);
                if (l_536)
                {
                    int l_552 = 0xA53DFAF0L;
                    const int *l_559 = &g_22;
                    unsigned *l_578 = &g_349;
                    unsigned *l_579 = &g_288;
                    short *l_601 = (void*)0;
                    int *l_609 = &g_22;
                    unsigned l_622 = 0x2BD53059L;
                    const long long l_625 = 0x8530D98FE43F9365LL;
                    if ((((l_536 >= (safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_3, ((l_536 , (!(p_4 , (safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u((l_547 ^ (safe_mod_func_int64_t_s_s(func_55(l_547, (*l_476), (l_550 = ((*l_522) &= (func_55(l_536, ((*g_89) = (((void*)0 == (*l_520)) || (*g_459))), (*l_476), p_5, g_72) <= p_4))), p_3, g_22), p_3))), 0x1F364D62L)) , l_551) & p_3), g_466))))) | p_4))), 0L)) && g_145), l_552))) ^ l_536) && p_3))
                    {
                        int *l_553 = &g_68;
                        (**g_255) ^= p_4;
                        (*g_255) = l_553;
                        l_536 ^= func_65((safe_unary_minus_func_int32_t_s((p_5 < (safe_sub_func_uint16_t_u_u((*g_245), ((*g_187) &= ((safe_add_func_int8_t_s_s((((*g_459) = (*g_459)) >= g_72), (*l_476))) , (*l_553)))))))));
                    }
                    else
                    {
                        l_559 = (void*)0;
                        if (p_4)
                            continue;
                        (**g_255) |= p_5;
                        (*l_476) = ((((*g_89) = (g_560 == (safe_rshift_func_int8_t_s_s(1L, (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((!(((((void*)0 != l_567) || ((*g_245) > func_13((*g_256)))) , ((l_551 > ((safe_lshift_func_uint8_t_u_s((*l_476), l_571)) == 0xE0L)) & p_4)) <= 0xAEC7L)), 65535UL)), l_547)))))) ^ 8L) , l_550);
                    }
                    if ((safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((*g_245), ((*l_568) &= ((l_576 ^ l_547) , func_25((*l_476), (func_35(p_3, (p_5 >= p_3), (func_55((l_577 , ((*l_579) = ((*l_578) &= 0x0A027E51L))), p_5, (*l_476), (*g_89), g_284) == 0x1FF8L), (*l_476)) , l_571), g_75))))), (*l_476))))
                    {
                        int **l_586 = &g_256;
                        unsigned char l_596 = 0UL;
                        unsigned *l_599 = &g_105;
                        long long ***l_600 = (void*)0;
                        int *l_602 = &g_22;
                        int *l_603 = &g_68;
                        (*l_603) = ((*l_476) = (((safe_add_func_int32_t_s_s(((*l_602) &= ((((((!(safe_mul_func_int8_t_s_s(((*g_459) = (safe_sub_func_int64_t_s_s(((**g_88) = (*g_89)), l_536))), ((((&g_256 != (l_587 = l_586)) != ((((((**l_567) = (((((safe_mod_func_uint64_t_u_u(((*l_522) = ((((*l_599) = ((p_3 <= ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_596, (p_5 || (safe_mul_func_uint16_t_u_u(p_5, ((*g_187) = func_61(l_550, l_571, g_349))))))), p_5)), p_4)) , (*l_476))) != p_3)) < (**l_586)) , p_4)), g_449)) > 18446744073709551613UL) <= g_349) , l_600) != l_600)) , (void*)0) != l_601) ^ 0L) , 0x9AD6L)) < p_4) | (*g_256))))) <= p_4) ^ p_3) >= p_5) <= (**l_586)) == g_349)), 0x07F7564DL)) <= 0xEEDB4034D93953A2LL) && 9UL));
                    }
                    else
                    {
                        l_550 &= ((safe_rshift_func_int8_t_s_u(0x89L, 2)) || (safe_unary_minus_func_int16_t_s((*g_187))));
                    }
                    l_552 = ((p_3 < (safe_mod_func_int32_t_s_s(((*l_609) &= ((**l_587) = (-1L))), (func_61((func_35((65526UL != (safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((**l_567) = (0xDA1A4E36446BED1CLL > func_61(p_5, (func_35((safe_rshift_func_uint16_t_u_u(((**g_458) , ((void*)0 == &g_349)), 12)), (l_622 , 1L), p_5, l_623) < l_536), l_551))), l_551)), 0xBBB95D51L)) , (*g_458)) != (void*)0) == l_624), l_571)), p_5)), p_5))), (*g_459), l_536, l_625) , l_551), p_5, p_3) , g_349)))) & g_6);
                }
                else
                {
                    return p_4;
                }
            }
            (*g_255) = &l_550;
        }
        else
        {
            char l_634 = 0x2DL;
            const long long *l_667 = &g_78;
            const long long * const *l_666 = &l_667;
            const long long * const **l_665 = &l_666;
            unsigned char *l_684 = &g_112;
            int l_710 = 0xA6F49467L;
            for (g_130 = (-2); (g_130 > 21); g_130 = safe_add_func_uint64_t_u_u(g_130, 3))
            {
                unsigned l_636 = 0xF06A8777L;
                const unsigned long long ** const *l_656 = &l_520;
                unsigned char l_660 = 0UL;
                int l_671 = 0xDD1BDAB3L;
                int *l_691 = &g_284;
                int *l_698 = &l_624;
                for (g_449 = (-22); (g_449 >= 43); g_449 = safe_add_func_int64_t_s_s(g_449, 8))
                {
                    char l_637 = (-1L);
                    int *l_646 = (void*)0;
                    long long **l_662 = &g_89;
                    int l_670 = 0x0061187EL;
                    unsigned short l_672 = 0x57E4L;
                    int l_673 = 0x25DBC122L;
                    g_22 = (((p_5 ^ (safe_mod_func_int32_t_s_s(((**g_255) = 1L), func_55(func_55(p_3, ((&p_5 == &p_5) != (safe_add_func_uint16_t_u_u(func_55(p_3, (l_634 , ((&g_88 != (void*)0) > g_241)), p_4, g_635, g_466), l_634))), p_4, p_5, p_5), p_5, l_636, l_634, p_5)))) , l_637) & 0x6B124E2724D8AFF9LL);
                    if (l_536)
                        break;
                    if (((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(p_4, g_112)) , (safe_rshift_func_uint16_t_u_s((+(safe_add_func_int64_t_s_s(0x01948D6704EC4807LL, 0x525CE5FCA51F4680LL))), 14))), 3)) == (*g_459)))
                    {
                        unsigned *l_649 = &g_105;
                        unsigned long long * const ***l_659 = &l_657;
                        int *l_661 = &g_490;
                        (*g_256) = 0xC591ABFAL;
                        l_646 = l_646;
                        (*l_661) |= (((safe_add_func_int64_t_s_s(((((*l_649) = g_109) , ((!l_536) <= ((*g_459) | (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(0xD969L, (func_65((((safe_add_func_uint32_t_u_u((l_656 == ((*l_659) = l_657)), ((*l_476) < 0x1EE93A67L))) , func_13((((-1L) & p_4) , (**g_255)))) || g_109)) ^ g_105))), l_660))))) >= p_5), l_536)) & p_4) > 1L);
                        l_662 = &g_89;
                    }
                    else
                    {
                        const long long * const ***l_668 = &l_665;
                        int l_669 = (-1L);
                        l_671 = ((-4L) == ((**l_662) = (((~((((**g_458) <= (safe_rshift_func_int16_t_s_s(((*g_187) |= (l_660 <= (((*l_668) = l_665) == &l_666))), 7))) ^ (func_61(g_22, l_669, (((void*)0 == (*g_458)) || (*l_476))) , 1L)) <= l_670)) != (*g_89)) <= 2UL)));
                        (*g_255) = &l_669;
                        (*l_476) = l_672;
                        return l_673;
                    }
                }
                (*l_587) = (*g_255);
                for (g_284 = 7; (g_284 < 21); g_284 = safe_add_func_uint64_t_u_u(g_284, 2))
                {
                    unsigned char **l_680 = (void*)0;
                    unsigned char **l_681 = (void*)0;
                    unsigned char *l_683 = &l_660;
                    unsigned char **l_682 = &l_683;
                    int l_686 = 0xB43DAF74L;
                    int **l_687 = (void*)0;
                    int **l_688 = &l_476;
                    l_686 = (((*g_245) > (p_5 | (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(p_5, (((((*g_256) ^= (((*l_682) = &g_560) != (l_685 = l_684))) < p_5) <= ((*g_187) = l_634)) > l_634))) == g_130) || (*g_89)), 4)))) & g_560);
                    (*l_688) = ((*l_587) = &l_536);
                }
                if (((safe_rshift_func_int16_t_s_u((((void*)0 != l_691) | ((*g_89) = l_536)), ((((void*)0 != &l_517) , p_4) > (safe_mod_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_u((p_5 != (safe_sub_func_uint16_t_u_u(p_4, (((*l_698) &= ((((((l_536 | g_284) , g_246) , p_5) == 0xDF496ADDL) , 251UL) != (**g_458))) >= (-1L))))), (*g_245))) ^ (*l_476)) , (**l_587)) != g_241), l_536))))) && (**g_88)))
                {
                    (*l_698) ^= ((((**l_587) = 0x22CDL) <= ((*g_187) = 3L)) <= 0UL);
                    (*l_698) = (-1L);
                    (*l_698) &= (*g_256);
                    if ((*l_698))
                        continue;
                }
                else
                {
                    unsigned long long l_699 = 0x63658228001DF59FLL;
                    (*l_476) &= (p_4 <= (-9L));
                    (*l_476) |= (0xE4041780BAD65AF1LL >= ((p_4 , l_699) , (*g_89)));
                }
            }
            for (g_635 = (-17); (g_635 <= 59); ++g_635)
            {
                const unsigned short ***l_703 = &l_702;
                char *l_711 = &l_473;
                (**g_255) = ((((*l_703) = l_702) != l_704) & ((safe_mul_func_uint8_t_u_u(((func_20(l_634) && (*l_476)) == p_5), ((safe_add_func_int8_t_s_s(((l_710 = p_5) == l_634), ((*l_711) ^= (func_61((g_490 ^ (**g_458)), (*g_459), g_6) ^ g_284)))) == g_284))) & 0x91L));
            }
        }
        if ((l_536 < (safe_lshift_func_int16_t_s_u(l_536, 1))))
        {
            char l_715 = (-10L);
            int **l_718 = (void*)0;
            (*l_476) = (((l_714 == ((g_107 = p_5) > ((p_3 , (*g_245)) > (l_715 > g_246)))) ^ (((((((l_716 != ((l_521 == (*g_88)) , l_718)) , l_536) , l_536) != 0x84L) , p_3) != (*l_476)) && 4294967295UL)) < 0x5AL);
        }
        else
        {
            int *l_719 = &g_145;
            unsigned *l_726 = &g_635;
            unsigned **l_725 = &l_726;
            (*g_255) = &l_536;
            (*l_587) = l_719;
            (**g_255) |= (safe_mod_func_uint16_t_u_u(l_722, p_5));
            for (p_5 = 8; (p_5 == 29); p_5++)
            {
                unsigned ***l_727 = &l_725;
                (*l_727) = l_725;
                (*l_587) = &l_722;
            }
        }
    }
    else
    {
        unsigned char l_728 = 1UL;
        long long *l_729 = &g_730;
        int l_733 = 3L;
        int *l_734 = &g_72;
        (*l_734) &= (((((void*)0 != (*g_166)) <= ((p_5 <= (**g_255)) || ((*g_89) | ((g_159 > ((*g_89) < ((*l_729) = (l_728 = p_5)))) ^ (safe_mod_func_uint16_t_u_u((0xAD71L != (*g_245)), l_733)))))) , p_3) != (*g_256));
    }
    return l_735;
}







static char func_13(int p_14)
{
    int l_421 = (-1L);
    unsigned *l_450 = &g_288;
    int *l_453 = &g_145;
    for (p_14 = (-9); (p_14 > (-21)); p_14--)
    {
        short l_422 = 0x5C09L;
        unsigned l_423 = 0x8BA9CD08L;
        int *l_424 = &g_145;
        unsigned short l_431 = 0x19A1L;
        const long long l_434 = 0xDCAF8491147520D1LL;
        int *l_437 = &g_72;
        unsigned char *l_441 = &g_112;
        unsigned long long *l_446 = (void*)0;
        unsigned long long *l_447 = &g_130;
        unsigned long long *l_448 = &g_449;
    }
    p_14 = (safe_add_func_int16_t_s_s(((*l_453) = (*g_187)), (g_458 != &g_459)));
    return (*g_459);
}







static unsigned char func_18(unsigned p_19)
{
    long long l_370 = 4L;
    char **l_372 = (void*)0;
    char ***l_371 = &l_372;
    int * const * const l_391 = &g_256;
    int * const * const *l_390 = &l_391;
    unsigned long long *l_407 = &g_130;
    short * const *l_412 = &g_211;
    char l_415 = 0x39L;
    for (g_78 = 0; (g_78 >= 6); g_78++)
    {
        return l_370;
    }
    (*g_256) &= p_19;
    (*l_371) = (void*)0;
    for (g_107 = 26; (g_107 != 23); g_107 = safe_sub_func_int16_t_s_s(g_107, 1))
    {
        unsigned l_377 = 0xEF034B92L;
        unsigned *l_382 = &g_288;
        int l_392 = 0x1D0214D9L;
        short * const **l_413 = &l_412;
        const unsigned short l_414 = 1UL;
        int *l_417 = (void*)0;
        int **l_416 = &l_417;
        int *l_418 = &g_68;
        for (g_72 = 0; (g_72 > 4); ++g_72)
        {
            unsigned long long l_378 = 18446744073709551615UL;
            unsigned long long l_381 = 0xD0EB458E618EA5FBLL;
            int *l_387 = &g_68;
        }
        l_392 = (+(func_35((p_19 , (((*l_413) = l_412) == (g_107 , (void*)0))), g_6, p_19, p_19) <= 4294967289UL));
        if (l_414)
            break;
        l_418 = ((*l_416) = ((l_415 || l_414) , ((*g_255) = &l_392)));
    }
    return p_19;
}







static unsigned func_20(const unsigned long long p_21)
{
    unsigned l_48 = 0x1AC7EB23L;
    int l_113 = (-2L);
    unsigned char l_116 = 251UL;
    short *l_164 = &g_107;
    const long long * const l_209 = &g_78;
    const long long * const *l_208 = &l_209;
    unsigned long long l_220 = 7UL;
    const long long l_289 = 1L;
    unsigned short *l_293 = &g_159;
    unsigned short ** const l_292 = &l_293;
    unsigned long long l_326 = 4UL;
    int *l_354 = &g_145;
    const unsigned long long *l_365 = (void*)0;
    const unsigned long long **l_364 = &l_365;
    const unsigned long long ***l_366 = (void*)0;
    const unsigned long long **l_367 = &l_365;
    for (g_22 = 0; (g_22 < (-16)); g_22 = safe_sub_func_int64_t_s_s(g_22, 2))
    {
        int *l_71 = &g_72;
        const int *l_74 = &g_75;
        const int **l_73 = &l_74;
        long long *l_76 = (void*)0;
        long long *l_77 = &g_78;
        char l_80 = 0xC7L;
        unsigned char *l_111 = &g_112;
        long long l_114 = 0x97EBF99C48247AD0LL;
        const short l_115 = 0xD984L;
        int *l_144 = &g_145;
        int l_202 = 6L;
        short *l_212 = &g_107;
        long long ***l_232 = &g_88;
        unsigned l_330 = 1UL;
        if (p_21)
            break;
        (*l_144) &= func_25((((safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((func_35(((safe_mul_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((l_113 ^= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_48 | (safe_mod_func_uint8_t_u_u((+((*l_111) = (g_22 , (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(func_55(func_61(l_48, (p_21 , (func_65(p_21) ^ (((*l_77) |= (((safe_mul_func_int8_t_s_s(((l_71 = &g_22) != &g_22), ((((*l_73) = (void*)0) == (void*)0) == 0xAD24L))) ^ g_6) > g_75)) == g_72))), p_21), l_48, l_80, g_6, p_21), 0L)) && p_21), l_48))))), l_48))) , l_48), g_6)), 1L))), l_48)) ^ p_21) > g_22) <= 0L), 0UL)) < l_114), p_21, g_75, l_115) <= p_21), 0x47D74E5B049C75CALL)), g_22)), 0L)) > g_6) || l_116), p_21, p_21);
        for (g_130 = 0; (g_130 >= 33); ++g_130)
        {
            unsigned l_157 = 18446744073709551607UL;
            short l_168 = 0xE2C0L;
            short *l_188 = (void*)0;
            int l_194 = 0x69A13370L;
            const int l_201 = 0L;
            long long **l_207 = &g_89;
            for (l_114 = 0; (l_114 >= (-19)); --l_114)
            {
                int l_150 = 0xE0D7569DL;
                return l_150;
            }
            if (p_21)
                continue;
            if ((((*l_111) = l_113) && p_21))
            {
                unsigned short *l_158 = &g_159;
                char *l_162 = &l_80;
                int l_165 = 0x24006628L;
                short *l_185 = (void*)0;
                const unsigned l_198 = 0xC45C1CA5L;
                unsigned l_199 = 0x59AB2ABFL;
                unsigned *l_200 = &l_157;
                if ((safe_add_func_uint16_t_u_u(((p_21 >= 0x6CA3L) & g_109), (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((+((*l_158) = l_157)), (safe_rshift_func_int8_t_s_u(((*l_162) = g_22), 0)))), 1)))))
                {
                    short *l_163 = &g_107;
                    (*l_144) |= (l_163 != ((0x7D07L >= l_157) , l_164));
                }
                else
                {
                    l_165 |= ((*l_144) = 0x777C7316L);
                    if (p_21)
                    {
                        l_113 = ((void*)0 != &l_114);
                        if (l_157)
                            continue;
                        if (g_105)
                            break;
                        g_166 = g_166;
                    }
                    else
                    {
                        unsigned *l_171 = &g_105;
                        if (p_21)
                            break;
                        if (g_6)
                            break;
                        (*l_73) = &g_145;
                        l_165 = (g_72 || (((*l_144) = (func_55(p_21, l_157, l_168, (safe_rshift_func_uint8_t_u_s(((*l_111) |= 0x61L), 7)), ((*l_171) = 1UL)) , p_21)) ^ ((p_21 , g_78) <= p_21)));
                    }
                    for (l_116 = 0; (l_116 < 48); l_116 = safe_add_func_int32_t_s_s(l_116, 7))
                    {
                        unsigned *l_180 = &g_105;
                        (*l_144) = (safe_mod_func_int32_t_s_s(func_35(((0x52L < (safe_mul_func_uint8_t_u_u((((void*)0 == &p_21) && ((*l_180) ^= ((0x455FDE6EB9DFCDC4LL | (safe_add_func_int8_t_s_s(g_75, (p_21 , g_6)))) == (&g_105 == &g_105)))), 247UL))) < 0x3456L), l_157, p_21, p_21), g_109));
                    }
                }
                for (g_159 = (-20); (g_159 >= 57); g_159 = safe_add_func_uint8_t_u_u(g_159, 3))
                {
                    short **l_186 = (void*)0;
                    short **l_189 = &l_185;
                    (*l_144) = (safe_lshift_func_int16_t_s_u((l_164 == ((*l_189) = (l_188 = (g_187 = l_185)))), g_105));
                    g_109 = (p_21 & p_21);
                }
                l_202 ^= ((((*l_200) = (safe_lshift_func_int8_t_s_s((p_21 > ((*l_144) = ((safe_add_func_uint8_t_u_u((l_194 , g_112), g_130)) || (safe_unary_minus_func_uint8_t_u(func_35(g_78, p_21, p_21, func_55((((((g_159 >= (safe_mod_func_int32_t_s_s((255UL >= l_198), g_112))) && 0x6304C604A0ACE2E0LL) >= l_199) <= 4294967295UL) >= p_21), (*l_71), l_113, (**g_88), g_6))))))), 4))) , p_21) & l_201);
            }
            else
            {
                unsigned short *l_205 = &g_159;
                unsigned long long *l_206 = &g_130;
                const long long * const **l_210 = &l_208;
                (*l_144) = (safe_add_func_int32_t_s_s(((((*l_205) = 1UL) || ((((((*g_166) = l_206) != (((*l_144) & ((((g_68 , l_207) != ((*l_210) = l_208)) , l_164) == (l_212 = g_211))) , &p_21)) == p_21) , p_21) <= 0L)) , p_21), 0x64733226L));
            }
        }
    }
    l_354 = &l_113;
    l_367 = l_364;
    return g_288;
}







static int func_25(short p_26, int p_27, unsigned p_28)
{
    int *l_120 = &g_22;
    int **l_119 = &l_120;
    unsigned *l_121 = (void*)0;
    unsigned *l_122 = &g_105;
    int *l_123 = &g_68;
    const int l_140 = (-1L);
    (*l_123) = ((g_107 != ((*l_122) = (l_119 == &l_120))) , 5L);
    for (p_26 = 19; (p_26 >= 23); p_26 = safe_add_func_uint16_t_u_u(p_26, 1))
    {
        short l_128 = (-9L);
        unsigned long long *l_129 = &g_130;
        short *l_131 = &g_107;
        int * const *l_134 = &l_120;
        int l_139 = 0x4AE6DAA0L;
        l_139 |= (safe_mod_func_uint32_t_u_u((((*l_131) &= ((p_27 != ((*l_129) |= l_128)) < ((void*)0 != &g_22))) != ((safe_rshift_func_uint16_t_u_s((*l_120), ((void*)0 == l_134))) <= ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u(g_6, 0xD45ED7233D1AAC1ELL)) < (**g_88)), p_26)) != p_27))), 0xD08A62A9L));
    }
    (*l_123) = (l_140 >= (*l_123));
    for (g_107 = 14; (g_107 < (-21)); g_107--)
    {
        int *l_143 = &g_68;
        l_143 = &g_22;
    }
    return (*l_120);
}







static short func_35(char p_36, char p_37, unsigned long long p_38, const int p_39)
{
    return g_72;
}







static const unsigned long long func_55(unsigned p_56, long long p_57, unsigned long long p_58, long long p_59, unsigned p_60)
{
    int *l_81 = &g_22;
    int **l_82 = &l_81;
    (*l_82) = l_81;
    for (g_68 = 0; (g_68 <= 1); g_68++)
    {
        int l_92 = (-10L);
        int *l_110 = &g_109;
        g_72 = (safe_unary_minus_func_int32_t_s(p_57));
        for (p_60 = 0; (p_60 < 48); ++p_60)
        {
            long long ***l_90 = (void*)0;
            long long ***l_91 = &g_88;
            int l_101 = 0x59559C29L;
            unsigned *l_104 = &g_105;
            short *l_106 = &g_107;
            int *l_108 = &g_109;
            (*l_91) = g_88;
            if (l_92)
                break;
            (*l_108) ^= ((1L ^ (p_57 > ((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((~(((safe_mul_func_uint8_t_u_u((g_72 < (safe_lshift_func_int8_t_s_s(l_101, 0))), func_61(func_61((**l_82), func_61(((safe_lshift_func_uint16_t_u_u(p_56, (((*l_106) &= (func_61(p_60, ((**g_88) && (((((*l_104) = (3L | 7L)) , g_75) != g_6) ^ l_92)), (**l_82)) == p_56)) , 0xF8BAL))) , l_101), g_22, g_78), (*l_81)), p_57, g_6))) != 0xC9L) < 0x332C3216L)), 0x05908CB2CC256780LL)), g_6)) , p_60))) == p_57);
        }
        l_110 = &g_109;
        (*l_110) = g_75;
    }
    (*l_82) = (*l_82);
    return (*l_81);
}







static unsigned func_61(unsigned char p_62, char p_63, unsigned p_64)
{
    unsigned short l_79 = 5UL;
    return l_79;
}







static const char func_65(int p_66)
{
    int *l_67 = &g_68;
    (*l_67) &= g_22;
    return p_66;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_490, "g_490", print_hash_value);
    transparent_crc(g_560, "g_560", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_846, "g_846", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
