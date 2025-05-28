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



static const volatile short g_47 = (-7L);
static unsigned g_56 = 0x25CF162CL;
static short g_80 = 0xB293L;
static int g_81 = (-10L);
static unsigned long long g_88 = 0x161E4171B3FE78DELL;
static char g_93 = (-1L);
static short g_97 = 0L;
static int g_100 = (-3L);
static int *g_103 = &g_100;
static const long long g_106 = 7L;
static unsigned short g_116 = 9UL;
static unsigned g_119 = 0x61529ABCL;
static long long g_150 = 0xF2894906A58E0DE0LL;
static short g_153 = 0x7570L;
static char g_174 = 0x27L;
static unsigned char g_197 = 1UL;
static unsigned **g_220 = (void*)0;
static unsigned g_248 = 0x6647E6CFL;
static unsigned g_261 = 18446744073709551613UL;
static unsigned char g_265 = 0xBEL;
static long long g_269 = 0xE21D6552DC662D5ALL;
static const unsigned g_301 = 0xB0A3500CL;
static unsigned char g_306 = 0x40L;
static unsigned long long g_309 = 0UL;
static char **g_335 = (void*)0;
static short g_338 = 0L;
static short g_341 = 0xA0BCL;
static volatile unsigned long long g_351 = 0xC9473A2E64CDA43ALL;
static volatile unsigned long long *g_350 = &g_351;
static volatile unsigned long long **g_349 = &g_350;
static int g_415 = 0x230F8876L;
static int g_491 = 0x866FE605L;
static unsigned g_500 = 0xA6CAB52BL;
static char g_518 = 0xF9L;
static char **g_537 = (void*)0;
static int **g_561 = &g_103;
static int ***g_560 = &g_561;
static int g_637 = 0xC44B05EEL;
static unsigned long long g_639 = 18446744073709551614UL;
static volatile unsigned short g_785 = 0xA66EL;
static volatile unsigned short g_894 = 9UL;
static unsigned long long *g_903 = &g_309;
static unsigned long long *g_904 = &g_88;
static volatile unsigned long long g_969 = 0x2927690E8A0397DALL;
static int g_1006 = 0L;
static char g_1111 = (-6L);
static unsigned char g_1129 = 246UL;
static short g_1194 = 0x2A98L;
static volatile unsigned g_1200 = 0x646C6E5FL;



static int func_1(void);
static int func_2(int p_3, long long p_4, unsigned p_5, short p_6);
static short func_16(char p_17, int p_18);
static long long func_19(char p_20, unsigned char p_21, long long p_22);
static long long func_29(unsigned char p_30, long long p_31);
static unsigned long long func_32(unsigned p_33, int p_34, short p_35);
static unsigned char func_38(long long p_39);
static unsigned char func_50(char p_51, short p_52, unsigned p_53, char p_54, int p_55);
static int func_57(unsigned short p_58, long long p_59, const int p_60, unsigned long long p_61, unsigned p_62);
static unsigned func_68(const unsigned p_69);
static int func_1(void)
{
    unsigned short l_44 = 0x8461L;
    int l_643 = (-6L);
    unsigned char *l_644 = (void*)0;
    unsigned char *l_645 = &g_265;
    long long *l_646 = (void*)0;
    long long *l_647 = &g_269;
    int *l_1116 = &g_81;
    unsigned char l_1117 = 0x94L;
    unsigned **l_1133 = (void*)0;
    int l_1183 = 0x21F0BAADL;
    int l_1191 = 0x9DDAF91CL;
    unsigned long long l_1217 = 0x447324291546CC1FLL;
    int l_1218 = 1L;
    if (func_2(((*l_1116) = ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(func_16((g_174 = (func_19((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((!func_29((func_32(((((safe_rshift_func_uint8_t_u_u(func_38(((*l_647) = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((l_44 && (255UL | l_44)) != ((safe_sub_func_uint64_t_u_u((0x25L | ((*l_645) = (((((g_47 && (((safe_add_func_int32_t_s_s(((g_47 & ((l_643 = (((l_44 != ((func_50(g_56, g_56, g_56, g_56, l_44) < l_44) & 4294967295UL)) == l_44) <= l_44)) & l_44)) > 1UL), 0xA525DF59L)) && 18446744073709551611UL) || l_44)) | g_106) >= l_44) <= l_44) || (**g_349)))), l_44)) , 0xE1362417L)) & l_44), 0x66L)), l_44)))), 3)) == l_44) , l_643) || l_643), g_301, l_44) <= l_44), l_44)), 0x5D07CB2F30BECC2DLL)), 8)), 0xC2L)), l_44, g_1111) & g_491)), l_44), l_44)), g_106)), 0xD3L)) , l_44))), 9UL)) && (-1L))), l_1117, g_338, l_44))
    {
        int * const l_1131 = &g_1006;
        int **l_1132 = &g_103;
        unsigned ***l_1134 = &g_220;
        int l_1157 = (-1L);
        int l_1182 = 0xC785CD70L;
        unsigned l_1213 = 0xD1BC041FL;
        unsigned short l_1214 = 65533UL;
lbl_1210:
        (*l_1132) = l_1131;

        ;
        (*l_1134) = l_1133;
        for (g_1006 = (-28); (g_1006 >= 2); g_1006++)
        {
            int l_1155 = 0xD8C9A757L;
            int l_1162 = 0x3CF950DAL;
            int l_1193 = 0xE6AA5669L;
            int *l_1203 = (void*)0;
            int *l_1204 = (void*)0;
            int *l_1205 = (void*)0;
            int *l_1206 = (void*)0;
            if ((((*l_647) = g_97) < (**g_349)))
            {
                return (*g_103);
            }
            else
            {
                int *l_1140 = &l_643;
                int *l_1141 = &g_100;
                int *l_1142 = &g_100;
                int *l_1143 = &g_100;
                int *l_1144 = &g_415;
                int *l_1145 = &l_643;
                int *l_1146 = &l_643;
                int *l_1147 = &l_643;
                int *l_1148 = &l_643;
                int *l_1149 = &g_415;
                int *l_1150 = &l_643;
                int *l_1151 = &l_643;
                int *l_1152 = &g_637;
                int l_1153 = 0xB59F5C51L;
                int *l_1154 = &g_100;
                int *l_1156 = (void*)0;
                int *l_1158 = &g_415;
                int *l_1159 = &g_637;
                int *l_1160 = &l_1157;
                int *l_1161 = (void*)0;
                int *l_1163 = &l_1153;
                int *l_1164 = (void*)0;
                int *l_1165 = &l_1157;
                int *l_1166 = (void*)0;
                int *l_1167 = &l_1157;
                int *l_1168 = &l_643;
                int *l_1169 = &g_415;
                int *l_1170 = &g_637;
                int *l_1171 = &l_643;
                int *l_1172 = (void*)0;
                int *l_1173 = &l_1153;
                int *l_1174 = &g_415;
                int *l_1175 = &g_637;
                int *l_1176 = &g_415;
                int *l_1177 = &g_415;
                int *l_1178 = &l_1157;
                int *l_1179 = &l_1157;
                int *l_1180 = &l_1162;
                int *l_1181 = (void*)0;
                int *l_1184 = &l_1182;
                int *l_1185 = (void*)0;
                int *l_1186 = &l_643;
                int *l_1187 = &l_1157;
                int *l_1188 = &g_415;
                int *l_1189 = &l_643;
                int *l_1190 = &l_643;
                int *l_1192 = &l_1162;
                int *l_1195 = &g_100;
                int *l_1196 = (void*)0;
                int *l_1197 = &l_1193;
                int *l_1198 = &l_1191;
                int *l_1199 = &l_1157;
                for (g_491 = 0; (g_491 < 28); ++g_491)
                {
                    int *l_1139 = &g_415;
                    (*l_1139) = ((void*)0 != (*g_560));
                }
                ++g_1200;
            }
            if ((l_1191 = (*l_1131)))
            {
                char l_1209 = 0x6CL;
                for (g_100 = 0; (g_100 >= (-18)); --g_100)
                {
                    return (*l_1131);
                }
                l_1209 |= l_1191;
                if (g_269)
                    goto lbl_1210;
            }
            else
            {
                l_1213 = (g_306 != (((g_415 && (safe_mul_func_int8_t_s_s((**l_1132), ((void*)0 != (*g_349))))) & ((&g_785 == (void*)0) || g_785)) , (*g_103)));
            }
        }
        l_1214++;
    }
    else
    {
        (*g_561) = &g_637;

        ;
        return l_1217;
    }

    ;
    l_1218 &= (*g_103);
    return (**g_561);
}







static int func_2(int p_3, long long p_4, unsigned p_5, short p_6)
{
    int l_1120 = (-5L);
    int *l_1121 = &g_1006;
    unsigned *l_1123 = &g_248;
    unsigned ** const l_1122 = &l_1123;
    char *l_1128 = &g_1111;
    long long l_1130 = 0xDFD2E87CD4753751LL;
    (*l_1121) |= (((p_4 < p_6) < p_6) == ((-1L) > ((safe_sub_func_int32_t_s_s(0x7E6BF831L, (l_1120 >= (l_1120 > (p_6 , (-8L)))))) < 0xF0BD30E6L)));
    if ((g_500 != (g_1129 |= ((l_1122 == ((safe_mod_func_int32_t_s_s(0xF43179FDL, (*l_1121))) , &l_1123)) < (+(safe_lshift_func_uint8_t_u_u(func_50(p_4, p_5, p_5, ((*l_1128) |= func_32(((*l_1121) , 0x14C97B9CL), p_3, g_153)), g_269), 0)))))))
    {
        (*g_561) = l_1123;

        ;
    }
    else
    {
        (*l_1121) = l_1130;
        (*l_1121) &= p_3;
    }


    return p_6;
}







static short func_16(char p_17, int p_18)
{
    return g_338;
}







static long long func_19(char p_20, unsigned char p_21, long long p_22)
{
    int *l_1114 = &g_637;
    for (g_116 = 0; (g_116 > 37); g_116 = safe_add_func_int32_t_s_s(g_116, 3))
    {
        int *l_1115 = &g_415;
        l_1115 = ((**g_560) = l_1114);

        ;
        ;
        (*g_561) = (*g_561);
    }


    return g_969;
}







static long long func_29(unsigned char p_30, long long p_31)
{
    unsigned char *l_675 = &g_265;
    unsigned char **l_674 = &l_675;
    int l_676 = 0xFBD8FCF1L;
    unsigned long long *l_678 = &g_309;
    unsigned long long **l_677 = &l_678;
    int *l_683 = &g_637;
    int *l_684 = &g_100;
    unsigned *l_685 = &g_500;
    short *l_690 = &g_338;
    char l_702 = 0xE8L;
    int l_763 = 1L;
    int l_773 = 0x29303491L;
    const short l_799 = 0x1D8CL;
    int *l_1029 = &g_100;
    int l_1076 = (-8L);
    int l_1080 = 0xA7197443L;
    int l_1091 = 0xCF32674CL;
    long long l_1096 = 0x43075FDDCE0A31D7LL;
    int l_1098 = 1L;
    unsigned l_1106 = 0xE595D086L;
    (*l_684) = ((*l_683) &= (l_676 = (safe_mul_func_uint16_t_u_u((4294967292UL != (((*l_674) = &p_30) != (void*)0)), (l_676 != (((l_677 != &l_678) <= (safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((l_676 > (((*l_678) = (((p_31 , p_31) <= l_676) <= g_415)) || g_88)), 0x94L)) && 1L), p_31))) != p_30))))));

    ;
    return (*l_683);
}







static unsigned long long func_32(unsigned p_33, int p_34, short p_35)
{
    unsigned char *l_661 = &g_306;
    unsigned char **l_660 = &l_661;
    unsigned *l_664 = &g_261;
    int l_667 = 0x59825BB4L;
    char *l_668 = &g_518;
    long long l_669 = 0xCCF397084429E8BBLL;
    unsigned long long l_670 = 5UL;
    int *l_671 = &g_415;
    (*l_671) = (l_670 = (((l_669 = ((*l_668) &= (l_660 != ((g_338 & ((safe_mul_func_uint16_t_u_u(func_68(((*l_664)++)), l_667)) >= 0x993346F6L)) , &l_661)))) , (void*)0) != (void*)0));
    return (**g_349);
}







static unsigned char func_38(long long p_39)
{
    int *l_648 = &g_415;
    (*l_648) = p_39;
    for (p_39 = 0; (p_39 > (-4)); p_39 = safe_sub_func_int32_t_s_s(p_39, 2))
    {
        unsigned short *l_654 = (void*)0;
        unsigned short *l_655 = &g_116;
        const unsigned l_656 = 0UL;
        char *l_659 = &g_93;
        (*l_648) = (((((safe_mod_func_uint32_t_u_u((g_491 ^ (safe_unary_minus_func_int16_t_s((((*l_655) ^= 0x50CBL) <= l_656)))), (safe_mod_func_int64_t_s_s(3L, p_39)))) | ((*l_659) |= (l_656 == (g_341 != (((*l_648) >= g_309) , 0x1B7FFEE6L))))) != g_81) , 0L) ^ p_39);
    }
    return g_88;
}







static unsigned char func_50(char p_51, short p_52, unsigned p_53, char p_54, int p_55)
{
    const char l_67 = 0x96L;
    unsigned char *l_264 = &g_265;
    long long *l_268 = &g_269;
    int l_274 = 0L;
    int l_289 = (-1L);
    const unsigned *l_300 = &g_301;
    const unsigned long long l_321 = 18446744073709551613UL;
    int **l_404 = &g_103;
    int *l_520 = &g_100;
    unsigned *l_534 = (void*)0;
    unsigned *l_609 = &g_56;
    unsigned **l_608 = &l_609;
    unsigned long long *l_612 = &g_88;
    char *l_613 = &g_518;
    unsigned char *l_614 = &g_197;
    long long l_621 = 2L;
    const int l_622 = 7L;
    const unsigned l_629 = 4294967288UL;
    unsigned char *l_642 = &g_306;
    if (func_57((p_53 , (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((l_67 , func_68((safe_lshift_func_uint8_t_u_u(l_67, 7)))) ^ ((((*l_264) |= 0x67L) , ((((p_53 < (g_106 == l_67)) == ((*l_268) ^= g_265)) & g_153) >= l_67)) , p_53)), g_153)), p_53))), p_53, p_51, p_53, p_53))
    {
        int *l_273 = (void*)0;
        g_100 |= (l_274 = (safe_lshift_func_uint16_t_u_u(p_55, g_261)));
        for (g_153 = 0; (g_153 >= (-22)); --g_153)
        {
            int *l_290 = &g_100;
            for (l_274 = 5; (l_274 > (-11)); l_274 = safe_sub_func_uint8_t_u_u(l_274, 6))
            {
                const unsigned *l_281 = &g_56;
                int l_282 = 1L;
                if ((g_248 || 0xB0L))
                {
                    char l_284 = 1L;
                    int *l_285 = &g_100;
                    (*l_285) = ((((void*)0 == &g_261) < ((safe_mul_func_int8_t_s_s(p_52, ((g_97 & (&p_53 == l_281)) , l_282))) , p_53)) & (((((safe_unary_minus_func_int32_t_s((l_284 | g_56))) != 0x9AC6BCD61EF5433BLL) , 0xCD82EB31L) != g_56) && 0xE43E29B3L));
                }
                else
                {
                    int **l_286 = (void*)0;
                    int **l_287 = &l_273;
                    unsigned l_288 = 1UL;
                    (*l_287) = &g_100;

                    ;
                    l_289 = l_288;
                }
            }
            (*l_290) = l_274;
        }

        ;
    }
    else
    {
        const char *l_312 = &l_67;
        int l_342 = 0x36080E91L;
        int **l_400 = &g_103;
        int l_479 = 0L;
        char ***l_583 = &g_537;
        for (l_274 = (-7); (l_274 == 13); l_274 = safe_add_func_uint16_t_u_u(l_274, 8))
        {
            const unsigned *l_299 = &g_261;
            g_306 |= (safe_rshift_func_uint16_t_u_u(func_57((p_53 , (safe_add_func_uint8_t_u_u((g_269 < (safe_sub_func_int16_t_s_s((+(((l_300 = l_299) == (void*)0) != func_57(((p_54 <= ((4294967288UL ^ (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((((p_51 , 0xA05C2F4BL) && func_57(g_97, p_53, g_248, p_55, g_106)) && l_289) ^ 255UL), 2)) != 0x2745L), 0L)) , l_264) != (void*)0)) , 0x486C133A8E694F7BLL)) <= p_52), g_269, g_80, g_93, l_67))), g_81))), p_55))), p_53, p_51, p_53, p_51), 4));

            ;
        }

        ;
    }

    ;
    if (((((*l_614) |= (g_153 <= (p_54 |= ((*l_613) |= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(p_55, (safe_lshift_func_int8_t_s_u((*l_520), 1)))), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(((g_80 & ((*l_264)++)) <= (((p_55 , &p_53) != ((*l_608) = &p_53)) , (((*l_612) |= ((4294967295UL != (safe_lshift_func_uint8_t_u_u(p_52, 3))) ^ p_52)) ^ 8L))), p_55)), 2)), (*l_520))))))))) > p_52) & 65533UL))
    {
        unsigned char l_619 = 0x90L;
        unsigned *l_620 = &g_261;
        int *l_623 = &l_289;
        short *l_630 = &g_153;
        (*l_623) ^= ((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((p_54 = p_53), ((g_248 < l_619) <= ((func_57((l_620 == &g_301), (0xD2L >= (p_52 , ((*l_613) = func_57(g_81, (((l_619 | g_248) , g_153) == l_619), l_619, l_621, (*l_520))))), l_622, p_51, p_51) & 1UL) >= g_301)))), 5)) , 0x4E194CD5L);
        (*l_623) = (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((((*l_630) = (safe_mul_func_int8_t_s_s(p_53, func_68(l_629)))) , (safe_mul_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((-1L), (4294967287UL & ((-1L) < ((*l_520) || func_68((((safe_add_func_int64_t_s_s((&g_338 != (void*)0), g_265)) | p_55) , 1UL))))))) && 0x96L) < 0xB70BC05A1244F574LL), g_309))))), g_174));
    }
    else
    {
        int *l_638 = &g_100;
        g_637 = (*l_520);
        (*l_404) = l_638;

        ;
    }

    ;
    g_415 &= ((((~((g_261 , (((p_53 > (((*l_520) > g_639) != (safe_rshift_func_uint8_t_u_s((l_642 != l_613), 5)))) <= 0x5939865CL) != ((void*)0 == &l_520))) , g_153)) == p_53) , 1UL) ^ 9UL);
    return g_261;
}







static int func_57(unsigned short p_58, long long p_59, const int p_60, unsigned long long p_61, unsigned p_62)
{
    int *l_270 = &g_100;
    l_270 = l_270;
    (*l_270) = (*l_270);
    return (*l_270);
}







static unsigned func_68(const unsigned p_69)
{
    int *l_99 = &g_100;
    unsigned long long *l_111 = &g_88;
    int l_126 = 0L;
    int l_191 = 5L;
    unsigned *l_225 = (void*)0;
    unsigned **l_224 = &l_225;
    unsigned **l_231 = &l_225;
    int l_259 = 0xD8751037L;
    int *l_263 = &l_259;
    for (g_56 = 7; (g_56 <= 46); ++g_56)
    {
        unsigned char l_74 = 255UL;
        short *l_79 = &g_80;
        int l_86 = 0L;
        unsigned long long *l_87 = &g_88;
        char *l_89 = (void*)0;
        char *l_90 = (void*)0;
        char *l_91 = (void*)0;
        char *l_92 = &g_93;
        short *l_96 = &g_97;
        char l_98 = 0xDFL;
        int *l_221 = &g_100;
        unsigned **l_253 = &l_225;
        unsigned char *l_254 = (void*)0;
        unsigned *l_260 = &g_261;
        int *l_262 = &l_126;
        if (((l_74 || p_69) , (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s(1L, (g_81 = ((*l_79) &= g_56)))), ((((safe_mod_func_int8_t_s_s(((*l_92) = (safe_sub_func_uint64_t_u_u(((*l_87) = (l_86 = l_74)), 9UL))), g_56)) > (~l_74)) ^ ((safe_lshift_func_int16_t_s_s(((*l_96) = (1UL & l_74)), 0)) , l_98)) < (-5L))))))
        {
            int **l_101 = (void*)0;
            int **l_102 = &l_99;
            (*l_102) = l_99;
        }
        else
        {
            unsigned short *l_114 = (void*)0;
            unsigned short *l_115 = &g_116;
            unsigned *l_117 = (void*)0;
            unsigned *l_118 = &g_119;
            int l_170 = 0xF0864F5AL;
            int *l_242 = (void*)0;
            int *l_243 = &l_191;
            int *l_244 = (void*)0;
            int *l_245 = &g_100;
            int *l_246 = &l_191;
            int *l_247 = &l_191;
            g_103 = &l_86;

            ;
            (*l_99) |= (*g_103);
            if ((~(((*l_99) = ((safe_rshift_func_int16_t_s_u((l_86 != (g_106 | ((safe_rshift_func_int8_t_s_u((((~(safe_mul_func_int16_t_s_s((l_111 == (void*)0), p_69))) , ((*l_118) |= ((p_69 | (safe_sub_func_uint16_t_u_u((p_69 > (*l_99)), ((*l_115) = 0x2D29L)))) , g_106))) > (*g_103)), 2)) , (*l_99)))), g_80)) >= 0x295AD7CBL)) ^ p_69)))
            {
                short l_137 = 0x1E24L;
                int l_186 = 0x770407C5L;
                unsigned long long **l_200 = &l_87;
                for (g_88 = (-23); (g_88 == 26); g_88 = safe_add_func_int64_t_s_s(g_88, 5))
                {
                    int *l_127 = &l_86;
                    int *l_128 = &g_100;
                    int *l_129 = &g_100;
                    int *l_130 = &g_100;
                    int *l_131 = &g_100;
                    int *l_132 = (void*)0;
                    int l_133 = 0xEF148A9BL;
                    int *l_134 = (void*)0;
                    int *l_135 = &g_100;
                    int *l_136 = &l_133;
                    int *l_138 = &l_126;
                    int *l_139 = &l_126;
                    int *l_140 = &l_126;
                    int *l_141 = &l_86;
                    int *l_142 = &l_133;
                    int l_143 = 0x33C22C9CL;
                    int *l_144 = &l_86;
                    int *l_145 = (void*)0;
                    int *l_146 = &l_126;
                    int *l_147 = &l_143;
                    int *l_148 = &l_143;
                    int *l_149 = &l_126;
                    int *l_151 = &l_143;
                    int *l_152 = (void*)0;
                    int *l_154 = (void*)0;
                    int *l_155 = &l_143;
                    int *l_156 = &g_100;
                    int *l_157 = &l_86;
                    int *l_158 = &l_143;
                    int *l_159 = (void*)0;
                    int *l_160 = &l_143;
                    int *l_161 = (void*)0;
                    int *l_162 = &g_100;
                    int *l_163 = &l_133;
                    int *l_164 = (void*)0;
                    int *l_165 = (void*)0;
                    int *l_166 = (void*)0;
                    int *l_167 = &l_126;
                    int *l_168 = (void*)0;
                    int *l_169 = &l_126;
                    int *l_171 = (void*)0;
                    int *l_172 = &l_126;
                    int *l_173 = &g_100;
                    int *l_175 = &l_170;
                    int *l_176 = (void*)0;
                    int *l_177 = &l_143;
                    int *l_178 = &g_100;
                    int *l_179 = &l_133;
                    int l_180 = 0xC3E802F2L;
                    int *l_181 = &l_126;
                    int *l_182 = &l_180;
                    int *l_183 = &l_86;
                    int *l_184 = &l_126;
                    int *l_185 = (void*)0;
                    int *l_187 = (void*)0;
                    int *l_188 = (void*)0;
                    int *l_189 = &l_186;
                    int *l_190 = &g_100;
                    int *l_192 = &l_86;
                    int l_193 = 0xD427A37AL;
                    int *l_194 = &l_186;
                    int *l_195 = &l_143;
                    int *l_196 = &g_100;
                    (*g_103) = (safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(0x056EL, g_80)), p_69));
                    --g_197;
                    l_200 = &l_111;

                    ;
                }

                ;
            }
            else
            {
                unsigned *l_207 = &g_56;
                unsigned **l_208 = &l_207;
                int l_211 = 1L;
                unsigned long long *l_236 = &g_88;
                if (((g_93 < ((+g_174) < (((*l_111) &= (((safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((g_153 || l_170), (l_74 > (((p_69 <= p_69) , (4294967295UL < (((!(safe_lshift_func_int16_t_s_s((((((*l_208) = l_207) == &g_56) , 0x8AL) > 6UL), g_174))) < 0xB4L) == 0x3859457360C0ABB7LL))) , (*l_99))))), (-1L))) == g_56) == 0xB6L)) > p_69))) && (*g_103)))
                {
                    long long *l_216 = &g_150;
                    int l_217 = 0x6F9E293FL;
                    l_211 ^= (safe_add_func_int8_t_s_s((!(&g_56 == l_99)), l_170));
                    (*l_99) = (p_69 > (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(0UL, ((*l_216) ^= l_211))), ((*g_103) |= l_217))));
                }
                else
                {
                    unsigned char *l_228 = &l_74;
                    int l_235 = 0x65C328A7L;
                    if ((safe_add_func_int8_t_s_s((g_220 != (void*)0), g_116)))
                    {
                        l_221 = &g_100;
                    }
                    else
                    {
                        (*g_103) |= ((safe_sub_func_uint64_t_u_u(l_170, l_211)) > p_69);
                    }
                    (*g_103) = ((*l_99) = p_69);
                    (*g_103) = (l_224 != (g_150 , g_220));
                    if (((*l_221) = (safe_mul_func_uint8_t_u_u(((*l_228) = ((0xA661FA26L > 0xF5F8E9B1L) < p_69)), g_56))))
                    {
                        unsigned l_232 = 18446744073709551606UL;
                        (*l_99) = (safe_sub_func_int64_t_s_s((&g_103 != &l_99), ((0L | (l_231 != (((l_232 | (safe_lshift_func_uint8_t_u_s((l_232 | ((*l_111) = 0UL)), (((*l_96) = l_235) != p_69)))) ^ 0x5F88L) , (void*)0))) <= l_232)));
                    }
                    else
                    {
                        unsigned long long *l_237 = &g_88;
                        (*g_103) = (*g_103);
                        (*l_99) ^= (l_236 != (l_237 = l_236));
                        if (l_235)
                            continue;

                    }
                }
                if ((*g_103))
                    break;

                (*g_103) ^= (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(0x9B42L, ((*l_79) = p_69))), g_197));
            }
            ++g_248;
        }


        (*l_262) = ((safe_lshift_func_uint8_t_u_u((0x2FL || ((*l_221) = (p_69 > ((void*)0 == l_253)))), 0)) , ((0xA99CDC6EL || (((*l_221) = (*l_99)) , (g_97 ^ (((*l_260) = (safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((g_150 = ((((*l_221) , ((*l_99) || (*l_221))) >= l_259) && g_93)) > 0x50EEE4F3F7408670LL), p_69)), p_69))) , 0x82L)))) , 0x39211FA3L));
    }
    (*l_263) |= (*l_99);
    return g_97;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_491, "g_491", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_639, "g_639", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1129, "g_1129", print_hash_value);
    transparent_crc(g_1194, "g_1194", print_hash_value);
    transparent_crc(g_1200, "g_1200", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
