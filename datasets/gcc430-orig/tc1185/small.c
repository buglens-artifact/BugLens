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



static int g_3 = 1L;
static unsigned long long g_17 = 0xB4837182ABBF9ACFLL;
static long long g_23 = 0L;
static int g_24 = (-1L);
static int g_28 = (-4L);
static int g_41 = 0x7D1649BCL;
static unsigned char g_62 = 247UL;
static unsigned g_141 = 4294967294UL;
static char g_188 = 0xA9L;
static int *g_196 = &g_3;
static int **g_195 = &g_196;
static unsigned char g_203 = 0x4CL;
static short g_207 = 0L;
static unsigned long long g_211 = 0xD388EEC896690B97LL;
static unsigned short g_224 = 9UL;
static long long g_235 = 1L;
static unsigned long long g_278 = 18446744073709551615UL;
static unsigned short g_283 = 0xAA12L;
static short *g_298 = (void*)0;
static long long g_315 = 0x41B38AE19F66018ALL;
static unsigned g_355 = 1UL;
static char g_372 = 0xFAL;
static unsigned char *g_394 = &g_203;
static unsigned char **g_393 = &g_394;
static unsigned char ***g_392 = &g_393;
static int g_420 = 0xA36ACC48L;
static unsigned long long g_484 = 0x94851BE001E57495LL;
static char g_529 = 0xACL;
static int g_532 = 0xD16CAFFDL;
static unsigned short g_543 = 7UL;
static long long *g_582 = &g_315;
static long long **g_581 = &g_582;
static unsigned long long g_612 = 18446744073709551615UL;
static unsigned char g_685 = 0xA5L;
static short g_723 = (-1L);
static char g_743 = 1L;
static int g_754 = 0xD480ECD0L;
static int g_757 = 0xEE8750D9L;
static char g_792 = 0x82L;
static int g_795 = (-10L);
static unsigned short g_799 = 2UL;
static long long g_871 = 0x63EDE295C5798E5FLL;
static int g_873 = 0x2EEDA3B7L;
static short g_874 = 0x7026L;
static unsigned g_888 = 0x4EA5EAFDL;
static unsigned g_1005 = 0xF81CF008L;



static int func_1(void);
static unsigned long long func_65(int * p_66, unsigned p_67);
static char func_68(int ** p_69);
static int * func_144(int * p_145);
static int * func_147(int p_148, long long p_149, long long p_150);
static unsigned char func_151(int ** p_152);
static int ** func_153(int ** p_154, int * p_155, unsigned p_156, char p_157, int ** p_158);
static int ** func_159(long long p_160, char p_161, unsigned p_162, short p_163, int * p_164);
static unsigned long long func_172(short p_173, int p_174);
static short func_175(unsigned p_176, unsigned char p_177, long long p_178, unsigned p_179);
static int func_1(void)
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
    int *l_13 = &g_3;
    int *l_14 = &g_3;
    int *l_15 = (void*)0;
    int *l_16 = (void*)0;
    int l_43 = 0x26FBD10CL;
    int l_785 = 0xAA1BBB74L;
    int l_798 = (-1L);
    char *l_893 = &g_792;
    char **l_894 = (void*)0;
    char *l_896 = &g_743;
    char **l_895 = &l_896;
    unsigned char ****l_900 = &g_392;
    unsigned char *****l_899 = &l_900;
    unsigned char ****l_902 = &g_392;
    unsigned char *****l_901 = &l_902;
    unsigned char *****l_903 = (void*)0;
    unsigned char ****l_905 = &g_392;
    unsigned char *****l_904 = &l_905;
    long long *l_929 = &g_235;
    short l_1080 = 0x3E5EL;
    g_17--;
    for (g_17 = 0; (g_17 <= 14); g_17 = safe_add_func_int8_t_s_s(g_17, 7))
    {
        int **l_22 = &l_8;
        int *l_25 = &g_3;
        int *l_26 = &g_3;
        int *l_27 = (void*)0;
        int *l_29 = &g_3;
        int *l_30 = (void*)0;
        int *l_31 = (void*)0;
        int *l_32 = &g_3;
        int *l_33 = &g_3;
        int *l_34 = &g_3;
        int *l_35 = &g_3;
        int *l_36 = &g_3;
        int *l_37 = &g_3;
        int *l_38 = &g_3;
        int *l_39 = &g_3;
        int *l_40 = &g_3;
        int *l_42 = &g_41;
        int *l_44 = (void*)0;
        int *l_45 = &l_43;
        int *l_46 = (void*)0;
        int *l_47 = &g_41;
        int l_48 = (-3L);
        int *l_49 = &l_43;
        int *l_50 = &g_41;
        int *l_51 = &l_48;
        int *l_52 = &l_48;
        int *l_53 = (void*)0;
        int l_54 = 0xAB430688L;
        int *l_55 = (void*)0;
        int *l_56 = (void*)0;
        int *l_57 = &g_41;
        int *l_58 = &l_43;
        int *l_59 = (void*)0;
        int *l_60 = (void*)0;
        int *l_61 = (void*)0;
        (*l_22) = &g_3;
        ++g_62;
    }
    if ((func_65(&l_43, (func_68(&l_2) , (*l_2))) >= g_529))
    {
        unsigned short l_711 = 0x44C2L;
        unsigned *l_712 = (void*)0;
        unsigned *l_713 = &g_141;
        unsigned l_716 = 0x88DCEFEBL;
        int l_724 = 0x7A7B4287L;
        unsigned short l_764 = 0x45F8L;
        (*l_9) = (((void*)0 != &g_582) , ((g_235 , ((*l_713) ^= l_711)) ^ ((safe_sub_func_uint64_t_u_u(g_484, 0x9471E4B83D750BC5LL)) & 0x83L)));
        for (g_532 = 0; (g_532 < 18); g_532++)
        {
            int *l_725 = (void*)0;
            int *l_726 = &l_43;
            int *l_727 = &l_43;
            int *l_728 = (void*)0;
            int *l_729 = &g_41;
            int *l_730 = &l_43;
            int *l_731 = &l_724;
            int *l_732 = &g_420;
            int *l_733 = &g_41;
            int *l_734 = &g_41;
            int *l_735 = &l_43;
            int *l_736 = &l_43;
            int *l_737 = &g_41;
            int *l_738 = &g_3;
            int *l_739 = &g_3;
            int *l_740 = &l_43;
            int *l_741 = (void*)0;
            int *l_742 = (void*)0;
            int *l_744 = (void*)0;
            int *l_745 = &g_3;
            int *l_746 = &l_43;
            int *l_747 = &g_41;
            int *l_748 = &l_43;
            int *l_749 = &g_420;
            int *l_750 = &l_724;
            int *l_751 = &g_3;
            int *l_752 = &g_3;
            int *l_753 = (void*)0;
            int *l_755 = &g_41;
            int *l_756 = &l_43;
            int *l_758 = &g_3;
            int *l_759 = &l_43;
            int *l_760 = &g_757;
            unsigned l_761 = 0xD1284796L;
            ++l_761;
            l_764++;
        }
    }
    else
    {
        int *l_767 = &g_757;
        int *l_768 = (void*)0;
        int *l_769 = &l_43;
        int *l_770 = &g_754;
        int *l_771 = &g_420;
        int *l_772 = &g_757;
        int *l_773 = (void*)0;
        int *l_774 = &g_41;
        int *l_775 = (void*)0;
        int *l_776 = &g_420;
        int l_777 = 3L;
        int *l_778 = &g_757;
        int *l_779 = &g_41;
        int *l_780 = &g_420;
        int *l_781 = &g_420;
        int *l_782 = (void*)0;
        int *l_783 = &g_754;
        int *l_784 = &l_43;
        int *l_786 = (void*)0;
        int *l_787 = &g_41;
        int *l_788 = &l_43;
        int *l_789 = &g_3;
        int *l_790 = &g_757;
        int *l_791 = (void*)0;
        int *l_793 = &l_777;
        int *l_794 = &g_41;
        int *l_796 = (void*)0;
        int *l_797 = &g_41;
        long long l_802 = 0xAA694168BD10AD33LL;
        int ***l_803 = &g_195;
        long long ***l_804 = &g_581;
        int l_844 = 0L;
        int l_862 = 0L;
        g_799++;
        if (((*l_7) < ((*l_778) = ((((*l_804) = ((((l_802 , func_68(((*l_803) = func_153(&l_6, &g_757, (*l_767), g_188, &g_196)))) ^ (*l_2)) > (*l_767)) , &g_582)) == &g_582) >= g_799))))
        {
            long long l_805 = 0x8725E79936390AD6LL;
            (*l_774) ^= l_805;
        }
        else
        {
            int l_806 = 0x5544E204L;
            int *l_807 = &g_41;
            int *l_808 = &l_785;
            int *l_809 = (void*)0;
            int *l_810 = &g_754;
            int *l_811 = (void*)0;
            int *l_812 = &g_41;
            int *l_813 = &l_777;
            int *l_814 = &l_43;
            int *l_815 = (void*)0;
            int *l_816 = &g_3;
            int *l_817 = &l_43;
            int *l_818 = &l_43;
            int *l_819 = &g_754;
            int *l_820 = &l_785;
            int *l_821 = &g_754;
            int *l_822 = &g_754;
            int *l_823 = &g_754;
            int *l_824 = (void*)0;
            int *l_825 = &g_3;
            int *l_826 = &l_785;
            int *l_827 = &l_785;
            int *l_828 = &g_754;
            int *l_829 = &g_420;
            int *l_830 = &l_785;
            int *l_831 = &l_43;
            int *l_832 = &l_43;
            int *l_833 = (void*)0;
            int *l_834 = (void*)0;
            int *l_835 = &g_3;
            int *l_836 = &l_798;
            int *l_837 = &g_3;
            int *l_838 = &l_777;
            int *l_839 = &l_785;
            int *l_840 = &g_420;
            int *l_841 = &g_754;
            int *l_842 = &l_798;
            int *l_843 = &g_41;
            int *l_845 = (void*)0;
            int *l_846 = &l_785;
            int *l_847 = &l_777;
            int *l_848 = &g_757;
            int *l_849 = &l_43;
            int *l_850 = (void*)0;
            int *l_851 = &l_43;
            int *l_852 = &l_844;
            int *l_853 = &g_41;
            int *l_854 = &l_844;
            int *l_855 = &g_754;
            int *l_856 = &g_420;
            int *l_857 = &l_777;
            int *l_858 = &g_757;
            int *l_859 = &g_757;
            int *l_860 = &g_3;
            int *l_861 = &l_43;
            int *l_863 = (void*)0;
            int *l_864 = (void*)0;
            int *l_865 = (void*)0;
            int *l_866 = &l_844;
            int *l_867 = &g_757;
            int *l_868 = &l_43;
            int *l_869 = &g_420;
            int *l_870 = &g_757;
            int *l_872 = (void*)0;
            int *l_875 = &l_43;
            int *l_876 = &g_420;
            int *l_877 = (void*)0;
            int *l_878 = &g_757;
            int *l_879 = &g_420;
            int *l_880 = &l_862;
            int *l_881 = (void*)0;
            int *l_882 = &l_798;
            int *l_883 = &g_757;
            int *l_884 = (void*)0;
            int *l_885 = &g_3;
            int *l_886 = &g_757;
            int *l_887 = &g_754;
            g_888++;
        }
        (**l_803) = &l_43;
        return g_23;
    }
    if (((safe_add_func_uint8_t_u_u((((l_893 == ((*l_895) = (void*)0)) , 0x42BDL) & ((+(safe_add_func_int16_t_s_s(((*l_14) & ((**g_393) && (((*l_904) = ((*l_901) = ((*l_899) = &g_392))) == &g_392))), ((*l_10) , ((**g_581) != (*l_2)))))) , g_283)), 247UL)) | 0x1DCDL))
    {
        int l_928 = 0x3C972DA9L;
        unsigned long long *l_937 = &g_278;
        unsigned long long **l_936 = &l_937;
        int **l_938 = &l_11;
        int l_954 = 0L;
        int l_1061 = 0x9DD3592AL;
        for (l_785 = (-17); (l_785 < (-3)); l_785 = safe_add_func_int64_t_s_s(l_785, 1))
        {
            unsigned l_931 = 0xF69BA88BL;
            int l_935 = 1L;
            int l_1025 = (-1L);
            unsigned long long l_1076 = 4UL;
            short *l_1077 = &g_874;
            short *l_1078 = &g_207;
            short *l_1079 = &g_723;
        }
    }
    else
    {
        int l_1081 = 0x526B3615L;
        (*l_4) = func_172(l_1081, (*l_8));
    }
    return g_372;
}







static unsigned long long func_65(int * p_66, unsigned p_67)
{
    int l_146 = (-1L);
    int *l_169 = (void*)0;
    p_66 = func_144((l_146 , func_147(l_146, (func_151(func_153(func_159((~g_3), (safe_sub_func_uint64_t_u_u((g_17--), ((void*)0 == l_169))), g_3, g_28, p_66), l_169, g_24, p_67, g_195)) >= 0UL), g_28)));
    for (g_532 = 0; (g_532 < 11); g_532++)
    {
        unsigned char l_705 = 0x4DL;
        long long ***l_708 = &g_581;
        unsigned l_709 = 0x3E2F61A4L;
        int l_710 = 0x14E475A2L;
        l_710 = (safe_div_func_uint64_t_u_u((((func_172((safe_lshift_func_int16_t_s_s(l_705, 11)), ((safe_sub_func_int64_t_s_s(p_67, ((l_708 != &g_581) | l_705))) , (func_172(p_67, l_709) , p_67))) , p_67) == 0xDD23C691L) | p_67), g_529));
    }
    return p_67;
}







static char func_68(int ** p_69)
{
    int *l_70 = &g_3;
    int *l_71 = &g_3;
    int *l_72 = &g_41;
    int l_73 = 1L;
    int *l_74 = &g_41;
    int *l_75 = &g_3;
    int *l_76 = &l_73;
    int *l_77 = &l_73;
    int l_78 = 1L;
    int *l_79 = &l_73;
    int *l_80 = (void*)0;
    int *l_81 = &g_41;
    int *l_82 = &g_3;
    int *l_83 = (void*)0;
    int *l_84 = &g_3;
    int l_85 = 1L;
    int *l_86 = (void*)0;
    int *l_87 = &l_78;
    int *l_88 = (void*)0;
    int *l_89 = &l_73;
    int *l_90 = &l_85;
    int *l_91 = &l_78;
    int *l_92 = (void*)0;
    int *l_93 = (void*)0;
    int *l_94 = &g_3;
    int *l_95 = (void*)0;
    int *l_96 = &l_78;
    int *l_97 = (void*)0;
    int *l_98 = &g_3;
    int *l_99 = (void*)0;
    int *l_100 = &l_78;
    int *l_101 = &l_78;
    int *l_102 = &g_3;
    int *l_103 = &g_3;
    int l_104 = 0xD40FD771L;
    int *l_105 = &l_85;
    int *l_106 = &l_104;
    int *l_107 = &g_41;
    int *l_108 = &g_3;
    int *l_109 = &l_104;
    int l_110 = 0x2CDF274CL;
    int *l_111 = &l_73;
    int *l_112 = &l_78;
    int *l_113 = &l_78;
    int *l_114 = &l_104;
    int l_115 = 0L;
    int *l_116 = &l_85;
    int *l_117 = &g_3;
    int *l_118 = (void*)0;
    int *l_119 = &l_104;
    int *l_120 = &l_78;
    int *l_121 = &l_115;
    int *l_122 = &l_78;
    int *l_123 = &l_110;
    int *l_124 = &g_3;
    int *l_125 = (void*)0;
    int *l_126 = (void*)0;
    int *l_127 = &l_85;
    int l_128 = 0x2CAA0E68L;
    int *l_129 = &l_73;
    int *l_130 = &l_85;
    int *l_131 = &l_78;
    int *l_132 = &g_41;
    int *l_133 = &g_41;
    int *l_134 = &g_41;
    int *l_135 = &l_73;
    int l_136 = 0x898AFBB1L;
    int *l_137 = &g_41;
    int l_138 = 3L;
    int *l_139 = &l_138;
    int *l_140 = &l_110;
    g_141++;
    return g_41;
}







static int * func_144(int * p_145)
{
    unsigned char l_615 = 5UL;
    int *l_616 = &g_420;
    unsigned long long **l_617 = (void*)0;
    int l_638 = 5L;
    int l_640 = 2L;
    int l_683 = (-1L);
    unsigned l_693 = 0UL;
    short l_694 = 1L;
    int l_696 = 3L;
    short *l_697 = &l_694;
    int *l_698 = &l_696;
    (*l_616) |= l_615;
    if (((void*)0 == l_617))
    {
        int *l_618 = (void*)0;
        (*g_195) = l_618;
    }
    else
    {
        char l_619 = 0x25L;
        int l_625 = 9L;
        int l_671 = 1L;
        short *l_688 = (void*)0;
        unsigned *l_695 = &g_141;
        if ((*l_616))
        {
            unsigned char l_622 = 0x65L;
            (*l_616) &= (l_619 | (g_283 == ((safe_sub_func_uint16_t_u_u((0x2BDFL == l_622), (safe_mod_func_int16_t_s_s(func_172(l_619, l_622), l_619)))) != (~(~l_625)))));
        }
        else
        {
            int *l_626 = &g_41;
            int *l_627 = &g_420;
            int *l_628 = &g_41;
            int *l_629 = (void*)0;
            int *l_630 = &g_3;
            int *l_631 = (void*)0;
            int *l_632 = &g_420;
            int *l_633 = &l_625;
            int *l_634 = &l_625;
            int *l_635 = &g_3;
            int *l_636 = &g_3;
            int *l_637 = &g_41;
            int *l_639 = &l_638;
            int *l_641 = &g_41;
            int l_642 = 0L;
            int *l_643 = &g_420;
            int *l_644 = &g_420;
            int *l_645 = (void*)0;
            int *l_646 = &g_420;
            int *l_647 = &l_640;
            int *l_648 = &l_625;
            int *l_649 = (void*)0;
            int *l_650 = (void*)0;
            int *l_651 = &l_625;
            int *l_652 = &g_41;
            int *l_653 = &l_642;
            int *l_654 = &g_420;
            int *l_655 = &g_3;
            int *l_656 = &l_640;
            int *l_657 = &l_625;
            int *l_658 = &l_638;
            int *l_659 = &l_642;
            int *l_660 = &l_638;
            int *l_661 = &g_420;
            int *l_662 = &l_625;
            int *l_663 = &g_420;
            int *l_664 = (void*)0;
            int *l_665 = &l_625;
            int *l_666 = &l_638;
            int *l_667 = &g_420;
            int *l_668 = &l_642;
            int *l_669 = &l_642;
            int *l_670 = &l_640;
            int l_672 = (-7L);
            int *l_673 = &l_640;
            int *l_674 = &l_638;
            int *l_675 = &l_642;
            int *l_676 = &l_640;
            int *l_677 = &l_642;
            int *l_678 = &l_642;
            int *l_679 = (void*)0;
            int *l_680 = (void*)0;
            int l_681 = 0L;
            int *l_682 = (void*)0;
            int *l_684 = &l_640;
            --g_685;
            (*g_195) = p_145;
            (*l_616) = g_17;
            (*l_657) ^= func_68(&g_196);
        }
        g_41 ^= (+(((&g_207 == l_688) == (safe_mul_func_uint8_t_u_u(((((*l_695) |= ((safe_mod_func_uint8_t_u_u(l_693, 255UL)) == ((*l_616) |= l_694))) <= l_694) , ((*g_394) = (func_172(l_696, g_612) | (*l_616)))), 0xC3L))) , l_625));
    }
    (*l_616) = ((*l_616) <= ((*l_697) = ((*l_616) , (*l_616))));
    (*l_698) &= (*l_616);
    return p_145;
}







static int * func_147(int p_148, long long p_149, long long p_150)
{
    int l_422 = 0x7FD56119L;
    int l_434 = 0xDF9118A8L;
    int l_448 = 0xB67BDB8DL;
    int l_465 = 2L;
    int l_472 = 0L;
    int l_512 = 0xCABF7432L;
    char *l_567 = &g_372;
    int **l_574 = &g_196;
    unsigned long long *l_579 = (void*)0;
    unsigned *l_590 = &g_141;
    int *l_613 = &l_465;
    int *l_614 = (void*)0;
    if (l_422)
    {
        int *l_423 = &l_422;
        int l_424 = 1L;
        int l_425 = 0xB2901364L;
        int *l_426 = &l_425;
        int *l_427 = &g_3;
        int *l_428 = &l_425;
        int *l_429 = &l_425;
        int *l_430 = &g_420;
        int *l_431 = (void*)0;
        int *l_432 = (void*)0;
        int *l_433 = &l_424;
        int *l_435 = &l_422;
        int *l_436 = (void*)0;
        int *l_437 = &g_3;
        int *l_438 = (void*)0;
        int *l_439 = &l_422;
        int *l_440 = &l_422;
        int *l_441 = &g_3;
        int *l_442 = &g_420;
        int *l_443 = &g_420;
        int *l_444 = (void*)0;
        int *l_445 = &g_3;
        int *l_446 = &l_424;
        int *l_447 = &l_424;
        int *l_449 = &l_434;
        int *l_450 = (void*)0;
        int *l_451 = &l_434;
        int *l_452 = (void*)0;
        int *l_453 = &g_41;
        int *l_454 = &l_424;
        int *l_455 = &l_425;
        int *l_456 = (void*)0;
        int *l_457 = &l_424;
        int *l_458 = &g_3;
        int *l_459 = &g_420;
        int l_460 = 7L;
        int *l_461 = &l_434;
        int *l_462 = &g_41;
        int *l_463 = (void*)0;
        int *l_464 = &l_425;
        int *l_466 = (void*)0;
        int *l_467 = &l_434;
        int *l_468 = &l_422;
        int *l_469 = (void*)0;
        int *l_470 = &l_448;
        int *l_471 = (void*)0;
        int *l_473 = &g_41;
        int *l_474 = &l_465;
        int *l_475 = &g_3;
        int *l_476 = (void*)0;
        int *l_477 = &l_424;
        int *l_478 = &l_422;
        int *l_479 = &l_424;
        int *l_480 = &l_460;
        int *l_481 = &l_425;
        int *l_482 = &l_448;
        int *l_483 = (void*)0;
        (*g_195) = l_423;
        --g_484;
        for (g_224 = (-17); (g_224 == 56); g_224 = safe_add_func_int32_t_s_s(g_224, 4))
        {
            unsigned long long l_491 = 0xD520F136789F646CLL;
            int l_513 = 0x1D5E848DL;
            int l_514 = 0x2048F8E3L;
            int l_515 = 0L;
            int l_516 = 4L;
            int *l_517 = (void*)0;
            int *l_518 = (void*)0;
            int *l_519 = (void*)0;
            int *l_520 = (void*)0;
            int *l_521 = &g_3;
            int *l_522 = (void*)0;
            int *l_523 = (void*)0;
            int *l_524 = &g_420;
            int *l_525 = (void*)0;
            int *l_526 = &g_41;
            int *l_527 = &l_472;
            int *l_528 = &g_41;
            int *l_530 = &l_425;
            int *l_531 = &l_424;
            int *l_533 = &l_514;
            int *l_534 = &l_513;
            int *l_535 = &l_422;
            int *l_536 = (void*)0;
            int *l_537 = &l_516;
            int *l_538 = (void*)0;
            int *l_539 = &l_460;
            int *l_540 = &l_422;
            int *l_541 = &l_424;
            int *l_542 = &l_465;
            for (g_41 = 0; (g_41 <= (-20)); g_41--)
            {
                short l_503 = (-1L);
                unsigned long long *l_505 = &g_211;
                int l_508 = 0x7DD32748L;
                unsigned *l_511 = &g_141;
                l_491--;
                for (g_211 = 7; (g_211 > 44); ++g_211)
                {
                    unsigned short l_498 = 0x2D50L;
                    unsigned *l_504 = &g_141;
                    l_508 |= (((0xD0539DDE8CCF3A6ALL <= (p_150 < (l_498 < ((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(0x26L, ((((*l_504) = l_503) , l_505) == ((((*l_482) = ((0UL || g_235) || ((*l_480) = (safe_mul_func_uint16_t_u_u(0x345BL, (-5L)))))) & 0L) , (void*)0)))), p_148)) == l_498)))) > p_150) || g_188);
                }
                for (g_188 = 0; (g_188 != (-29)); g_188 = safe_sub_func_uint8_t_u_u(g_188, 1))
                {
                    (*l_447) = (l_511 == (void*)0);
                    (*g_195) = &l_472;
                }
                (*g_195) = &l_425;
            }
            (*l_437) = ((*l_423) |= (l_448 <= l_512));
            (*l_477) = (l_465 , p_150);
            g_543--;
        }
    }
    else
    {
        int *l_548 = &g_3;
        long long **l_583 = &g_582;
        unsigned char *l_600 = &g_62;
        unsigned long long *l_605 = &g_211;
        short *l_606 = &g_207;
        int ***l_607 = &g_195;
        int ***l_608 = &l_574;
        int **l_610 = &g_196;
        int ***l_609 = &l_610;
        int l_611 = (-1L);
        for (g_62 = 0; (g_62 < 2); g_62 = safe_add_func_int8_t_s_s(g_62, 7))
        {
            int *l_549 = &g_3;
            short l_560 = 1L;
            char *l_566 = &g_372;
            unsigned long long **l_588 = &l_579;
            int **l_591 = &l_548;
            if (((*l_549) = ((l_548 = &l_422) != l_549)))
            {
                for (g_543 = 14; (g_543 < 33); g_543++)
                {
                    unsigned long long l_557 = 5UL;
                    unsigned short *l_561 = &g_283;
                    for (l_465 = 0; (l_465 < (-2)); l_465--)
                    {
                        int *l_554 = &l_472;
                        (*g_195) = l_554;
                        l_549 = (*g_195);
                    }
                    if (p_149)
                        continue;
                    (*l_548) ^= (-10L);
                    (*l_549) = (((*l_561) &= (((safe_div_func_int8_t_s_s(((func_172((g_484 != p_148), ((*l_549) = l_557)) ^ (g_23 ^ l_557)) , ((safe_rshift_func_int16_t_s_u((func_172(l_557, (*l_548)) , (-1L)), 8)) <= g_420)), 0x8FL)) == g_188) | l_560)) <= 3L);
                }
                (*g_195) = (*g_195);
                (*l_549) = (((*l_549) >= l_465) ^ g_207);
            }
            else
            {
                unsigned l_575 = 0UL;
                if ((g_315 < (safe_rshift_func_uint8_t_u_u((+(safe_mul_func_int16_t_s_s((((l_566 != l_567) != (safe_sub_func_int64_t_s_s(((void*)0 != &g_17), (p_149 , ((safe_sub_func_int32_t_s_s(((g_207 , p_149) , (safe_rshift_func_uint8_t_u_s((*g_394), p_150))), 4UL)) , g_211))))) < 1L), g_355))), 5))))
                {
                    (*l_549) |= l_575;
                }
                else
                {
                    unsigned short l_576 = 0x9F6BL;
                    unsigned long long **l_580 = &l_579;
                    (*l_548) = (l_576 & ((safe_rshift_func_uint8_t_u_u(((**g_393) , (((*l_580) = l_579) == (void*)0)), 4)) , g_420));
                    (*l_548) ^= (g_581 != (p_149 , l_583));
                    if (l_576)
                        continue;
                }
            }
            for (p_150 = 0; (p_150 > 21); p_150 = safe_add_func_int32_t_s_s(p_150, 4))
            {
                short l_589 = (-10L);
                (*l_549) ^= p_149;
            }
            (*l_591) = ((*g_195) = l_549);
        }
        g_612 = (l_611 = ((*l_548) = ((safe_mod_func_int32_t_s_s(func_68(((*l_609) = ((*l_608) = ((*l_607) = ((safe_lshift_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(g_203, ((*l_606) = ((((*l_600) = p_150) , (*l_548)) , ((func_172((((((g_207 ^= (safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((*l_605) = ((*g_582) >= p_150)) > 0xAA95A9F53E884B2BLL) , p_148), 0x5307FD28L)), 18446744073709551615UL))) ^ (*l_548)) != g_23) | p_149) , 1L), g_543) || p_150) != 0L))))) , l_600) != l_600), p_149)) , l_574))))), g_41)) >= (**g_581))));
    }
    return l_614;
}







static unsigned char func_151(int ** p_152)
{
    unsigned short l_308 = 0UL;
    unsigned short l_309 = 3UL;
    int l_321 = 9L;
    int l_329 = 4L;
    unsigned char *l_382 = (void*)0;
    unsigned char **l_381 = &l_382;
    unsigned char ***l_380 = &l_381;
    unsigned char ***l_387 = &l_381;
    int *l_419 = &g_420;
    char l_421 = 0L;
    if ((**p_152))
    {
        unsigned long long l_305 = 0UL;
        short *l_313 = (void*)0;
        short *l_314 = &g_207;
        int l_340 = (-6L);
        int l_345 = 0L;
        int l_346 = 0xDD735A8DL;
        unsigned char ****l_383 = (void*)0;
        unsigned char ****l_384 = (void*)0;
        unsigned char ****l_385 = (void*)0;
        unsigned char ****l_386 = &l_380;
        int *l_395 = &l_329;
        if (((safe_mul_func_uint8_t_u_u((l_305 | func_172(l_305, (**p_152))), (safe_lshift_func_uint8_t_u_u(l_308, 4)))) , (l_309 & (g_315 &= ((*l_314) = (safe_unary_minus_func_int32_t_s((6L & (g_3 < (safe_mul_func_int8_t_s_s((((**p_152) = (65535UL > l_308)) != l_305), 0x3BL)))))))))))
        {
            unsigned l_320 = 18446744073709551615UL;
            int l_336 = 0x5DE1F74EL;
            if ((safe_div_func_int64_t_s_s(((safe_lshift_func_uint16_t_u_s(l_308, 14)) && l_320), l_321)))
            {
                return l_309;
            }
            else
            {
                int *l_322 = &g_3;
                int *l_323 = &g_3;
                int *l_324 = &g_41;
                int *l_325 = &g_3;
                int *l_326 = &g_3;
                int *l_327 = &g_41;
                int *l_328 = &g_3;
                int *l_330 = &l_329;
                int *l_331 = &l_329;
                int *l_332 = &l_329;
                int *l_333 = &g_41;
                int *l_334 = &g_3;
                int l_335 = (-1L);
                int *l_337 = (void*)0;
                int *l_338 = &g_3;
                int *l_339 = &l_329;
                int *l_341 = &l_340;
                int *l_342 = &l_335;
                int l_343 = 0x9FDD9555L;
                int *l_344 = &l_329;
                int *l_347 = &l_340;
                int *l_348 = (void*)0;
                int *l_349 = &l_329;
                int *l_350 = &l_346;
                int *l_351 = &l_336;
                int *l_352 = (void*)0;
                int *l_353 = &l_336;
                int *l_354 = &g_3;
                (*l_322) |= (**p_152);
                g_355++;
                return l_345;
            }
        }
        else
        {
            unsigned char *l_363 = &g_62;
            unsigned char **l_362 = &l_363;
            int l_375 = (-2L);
            int *l_377 = &g_41;
            int **l_376 = &l_377;
            if (((*g_196) |= 0x4EFB1311L))
            {
                unsigned short l_365 = 65528UL;
                (**g_195) = 0x9946DB04L;
                for (g_23 = (-3); (g_23 == (-2)); g_23++)
                {
                    for (g_203 = 5; (g_203 > 20); ++g_203)
                    {
                        unsigned char ***l_364 = &l_362;
                        (*l_364) = l_362;
                    }
                    return l_365;
                }
            }
            else
            {
                char *l_368 = &g_188;
                int *l_371 = &l_340;
                for (g_283 = (-2); (g_283 <= 27); g_283++)
                {
                    (**p_152) = (l_368 != &g_188);
                    (**p_152) ^= (-5L);
                }
                (*l_371) &= ((safe_mod_func_int32_t_s_s((**p_152), func_68(&g_196))) , l_346);
                g_372 ^= func_172((*l_371), (*g_196));
                (*g_196) &= (safe_lshift_func_int8_t_s_u(l_375, 0));
            }
            (*l_376) = ((*p_152) = (*g_195));
        }
        g_3 = ((safe_lshift_func_int8_t_s_s(((((*l_386) = l_380) != (l_387 = &l_381)) | (safe_mod_func_uint32_t_u_u((&g_207 == (void*)0), (((safe_lshift_func_int16_t_s_s(l_346, 11)) > g_188) && ((0xA520F3B2C5943381LL > func_175(l_305, ((l_329 = ((g_17 == l_329) | (**p_152))) == (-1L)), l_346, l_345)) , l_340))))), g_315)) > 0xB3D9D417L);
        g_3 ^= ((*l_395) = ((g_392 = &l_381) != (g_224 , &l_381)));
    }
    else
    {
        for (g_283 = 0; (g_283 > 45); ++g_283)
        {
            for (g_41 = 25; (g_41 < 3); --g_41)
            {
                unsigned long long l_400 = 0xF8D778003283455ALL;
                int *l_401 = &l_329;
                (*p_152) = (*p_152);
                (*l_401) |= l_400;
                (*l_401) = (safe_rshift_func_uint8_t_u_s((*g_394), g_203));
            }
        }
        (*g_196) ^= l_309;
    }
    (*l_419) ^= (g_3 == ((*g_394) || (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(((+((safe_unary_minus_func_int16_t_s(((-1L) != ((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_329, ((void*)0 != (*g_393)))) >= (((safe_sub_func_uint64_t_u_u(l_308, ((safe_rshift_func_int16_t_s_s((0xFB83L > func_68(&g_196)), g_17)) < g_235))) | 0xFD023D6CAC0D8A3BLL) < l_309)), (-8L))) == g_62)))) , l_329)) && l_308), l_329)) < (-4L)), g_207)), l_321))));
    (*l_419) ^= l_421;
    return (*l_419);
}







static int ** func_153(int ** p_154, int * p_155, unsigned p_156, char p_157, int ** p_158)
{
    int **l_302 = &g_196;
    return l_302;
}







static int ** func_159(long long p_160, char p_161, unsigned p_162, short p_163, int * p_164)
{
    long long l_180 = (-3L);
    unsigned char *l_181 = &g_62;
    int **l_184 = (void*)0;
    unsigned long long *l_185 = (void*)0;
    unsigned long long *l_186 = &g_17;
    char *l_187 = &g_188;
    int l_209 = (-2L);
    unsigned l_210 = 8UL;
    unsigned l_231 = 0UL;
    int l_254 = 0xAD419A62L;
    int l_269 = 0xF4424053L;
    long long **l_300 = (void*)0;
    l_210 |= ((safe_mul_func_int16_t_s_s(((func_172(func_175(p_160, ((*l_181) = l_180), (safe_lshift_func_int8_t_s_u((~((p_161 = ((*l_187) |= (0x1C18E2D0685684CFLL & ((*l_186) = func_68(l_184))))) , func_68(((safe_div_func_int16_t_s_s((((((*p_164) = (!(-1L))) , g_41) <= g_17) > ((safe_mod_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(func_68(g_195), g_17)) | p_162), p_161)) , 0x884ACF1AL)), p_163)) , (void*)0)))), g_3)), g_3), g_28) ^ (-4L)) && p_160), g_41)) , l_209);
    if (g_211)
    {
        char *l_227 = &g_188;
        int l_268 = 0x45B2A3AAL;
        int **l_295 = &g_196;
        int *l_296 = &g_41;
        (*g_195) = p_164;
        (*g_195) = p_164;
        for (g_23 = 12; (g_23 > 9); g_23 = safe_sub_func_int32_t_s_s(g_23, 9))
        {
            int l_217 = (-9L);
            unsigned short *l_223 = &g_224;
            int *l_232 = &g_3;
            int *l_233 = (void*)0;
            int l_234 = 0x7D706139L;
            int *l_236 = &l_234;
            int *l_237 = (void*)0;
            int *l_238 = &g_3;
            int *l_239 = &l_209;
            int *l_240 = &l_234;
            int *l_241 = &g_3;
            int *l_242 = (void*)0;
            int *l_243 = &g_41;
            int *l_244 = (void*)0;
            int *l_245 = (void*)0;
            int *l_246 = &g_41;
            int *l_247 = &g_3;
            int *l_248 = &l_209;
            int *l_249 = (void*)0;
            int *l_250 = &g_3;
            int *l_251 = (void*)0;
            int *l_252 = &l_209;
            int *l_253 = &g_3;
            int *l_255 = &l_234;
            int *l_256 = &l_234;
            int *l_257 = &l_234;
            int *l_258 = &l_234;
            int *l_259 = &g_3;
            int *l_260 = &g_3;
            int *l_261 = &l_254;
            int *l_262 = (void*)0;
            int *l_263 = &l_254;
            int *l_264 = &l_234;
            int *l_265 = &l_234;
            int *l_266 = &g_41;
            int *l_267 = &l_234;
            int *l_270 = &g_41;
            int l_271 = 1L;
            int *l_272 = (void*)0;
            int *l_273 = &l_268;
            int *l_274 = (void*)0;
            int *l_275 = (void*)0;
            int *l_276 = &l_254;
            int *l_277 = (void*)0;
            (*p_164) = ((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s((l_217 | g_62))) != ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((((*l_223) = (p_162 | func_172((safe_unary_minus_func_uint8_t_u(l_217)), (*g_196)))) || ((safe_rshift_func_int16_t_s_s((l_227 == (void*)0), 6)) == ((((((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int8_t_s_s(func_175(p_162, g_24, p_161, g_188), g_203)))) == g_207) , 0xC0L) , g_203) && g_211) <= p_160))) == 0xA82D28F5L), p_161)), g_23)) , g_62)), l_231)) & 1UL);
            g_278--;
            for (g_62 = (-6); (g_62 == 19); g_62 = safe_add_func_int32_t_s_s(g_62, 5))
            {
                (*g_195) = &l_254;
                ++g_283;
            }
            if ((((*g_195) = p_164) == p_164))
            {
                int **l_286 = (void*)0;
                int **l_287 = &l_267;
                (*l_255) = (+((void*)0 != &p_160));
                (*l_287) = ((*g_195) = (*g_195));
                (*g_195) = (*g_195);
            }
            else
            {
                int **l_292 = &l_260;
                for (g_278 = 0; (g_278 <= 60); g_278++)
                {
                    if (((0xF4D2L < (safe_rshift_func_uint8_t_u_s(p_163, 0))) == func_68(l_292)))
                    {
                        int *l_293 = &l_271;
                        (*l_292) = l_293;
                    }
                    else
                    {
                        int **l_294 = &l_270;
                        (*l_292) = (void*)0;
                        if ((*p_164))
                            continue;
                        return l_295;
                    }
                }
            }
        }
        (*l_296) ^= (**l_295);
    }
    else
    {
        short *l_297 = &g_207;
        int *l_299 = &g_41;
        long long ***l_301 = &l_300;
        (*p_164) ^= ((g_298 = l_297) != &g_207);
        (*g_195) = l_299;
        (*l_301) = l_300;
    }
    g_41 &= (*p_164);
    return &g_196;
}







static unsigned long long func_172(short p_173, int p_174)
{
    char l_201 = 0x92L;
    long long *l_202 = &g_23;
    int l_204 = (-1L);
    unsigned l_205 = 0xF6C97C2BL;
    short *l_206 = &g_207;
    int *l_208 = &g_3;
    (*l_208) |= (safe_lshift_func_uint8_t_u_u((((*l_206) ^= g_24) , l_201), p_173));
    return g_141;
}







static short func_175(unsigned p_176, unsigned char p_177, long long p_178, unsigned p_179)
{
    int *l_197 = (void*)0;
    char l_198 = 0xBFL;
    (*g_195) = (((*g_196) ^= (p_176 , (-1L))) , l_197);
    return l_198;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_355, "g_355", print_hash_value);
    transparent_crc(g_372, "g_372", print_hash_value);
    transparent_crc(g_420, "g_420", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_532, "g_532", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_685, "g_685", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    transparent_crc(g_743, "g_743", print_hash_value);
    transparent_crc(g_754, "g_754", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_792, "g_792", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_871, "g_871", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_874, "g_874", print_hash_value);
    transparent_crc(g_888, "g_888", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
