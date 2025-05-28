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


struct S0 {
   unsigned f0;
   unsigned f1;
   unsigned f2;
   unsigned short f3;
   unsigned short f4;
   short f5;
   int f6;
};


static unsigned char g_14 = 254UL;
static unsigned g_15 = 0x30FC3532L;
static int g_20 = 0x3B51AD5BL;
static short g_46 = 0x36E9L;
static unsigned short g_87 = 65535UL;
static unsigned char g_102 = 0xE8L;
static int g_108 = 0L;
static struct S0 g_118 = {0x21E12261L,0x9DC0630FL,0UL,0x3458L,65535UL,0x7C3AL,-1L};
static unsigned char g_147 = 0xABL;
static int g_159 = 0xBAA9A2C0L;
static short *g_166 = &g_46;
static short **g_165 = &g_166;
static int g_177 = 4L;
static int *g_196 = &g_177;
static unsigned char g_249 = 0UL;
static char g_278 = (-1L);
static struct S0 g_289 = {0x127033AFL,0x323EB1FCL,2UL,0x4E2FL,0x0C53L,0x739DL,-1L};
static unsigned g_339 = 18446744073709551614UL;
static unsigned g_399 = 0x3621C67AL;
static unsigned g_450 = 0xEAF886D7L;
static int g_507 = (-8L);
static short g_525 = (-1L);
static struct S0 *g_531 = &g_118;
static unsigned short g_558 = 65535UL;
static int g_609 = (-1L);
static int g_645 = 7L;
static unsigned g_752 = 4294967295UL;
static int g_795 = 0x13143C5DL;
static unsigned short g_821 = 0x9EBBL;
static unsigned g_859 = 0x2F587407L;
static int g_895 = 0x68B8355CL;
static unsigned short g_924 = 65527UL;
static char g_940 = 0x90L;
static char **g_967 = (void*)0;
static char ***g_966 = &g_967;
static struct S0 g_1006 = {1UL,4294967295UL,0x82C3C418L,0x9002L,0x9E62L,-4L,-4L};
static struct S0 *g_1094 = &g_289;
static unsigned short g_1144 = 0xF84FL;
static int *g_1217 = &g_507;
static int **g_1227 = (void*)0;
static int ***g_1226 = &g_1227;
static struct S0 g_1233 = {0xE2B4E36EL,1UL,0UL,65535UL,65535UL,1L,0x1B83C32DL};



static struct S0 func_1(void);
static struct S0 func_2(struct S0 p_3, struct S0 p_4, short p_5, unsigned p_6);
static struct S0 func_7(unsigned p_8, short p_9, unsigned p_10, struct S0 p_11, unsigned p_12);
static int func_16(unsigned char p_17, short p_18);
static int func_92(int * p_93);
static int * func_94(int * p_95, char p_96, int * p_97);
static int * func_99(unsigned p_100, unsigned p_101);
static struct S0 * func_109(struct S0 * p_110, struct S0 * p_111, struct S0 p_112, unsigned p_113);
static struct S0 * func_114(unsigned char p_115, struct S0 * p_116);
static short func_121(unsigned p_122, struct S0 * p_123, int ** p_124);
static struct S0 func_1(void)
{
    unsigned l_13 = 18446744073709551615UL;
    int l_970 = 0L;
    struct S0 l_971 = {18446744073709551613UL,0UL,0x8EC0873DL,3UL,0xDAE2L,0L,-10L};
    struct S0 *l_1087 = &g_289;
    struct S0 **l_1093 = &g_531;
    int **l_1095 = &g_196;
    unsigned char *l_1098 = &g_249;
    unsigned short *l_1101 = &g_821;
    int l_1204 = (-1L);
    int l_1228 = 0x7CEA7672L;
    (*l_1087) = func_2(func_7((l_13 && ((g_15 ^= ((+g_14) == 0UL)) == g_14)), (((func_16(g_14, l_13) == (((l_970 ^= ((*g_966) != (*g_966))) | g_609) ^ l_13)) >= g_525) & l_13), g_645, l_971, l_971.f5), g_1006, l_971.f2, g_795);
    if ((safe_add_func_uint32_t_u_u(func_92(&g_895), (((*l_1101) ^= (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((func_121(l_971.f6, (*l_1093), l_1095) ^ ((safe_add_func_uint8_t_u_u(((*l_1098)++), l_13)) == 0x24AA2C10L)) && g_289.f0))), 6))) && l_970))))
    {
        unsigned l_1104 = 1UL;
        unsigned *l_1107 = (void*)0;
        unsigned *l_1108 = &g_118.f1;
        int *l_1117 = &g_177;
        int **l_1116 = &l_1117;
        unsigned short l_1188 = 65535UL;
        short **l_1218 = &g_166;
        char *l_1229 = &g_940;
        if (((safe_add_func_int32_t_s_s((!0x5A7863C6L), l_1104)) <= (safe_sub_func_uint32_t_u_u(((*l_1108)++), func_92(&g_159)))))
        {
            short l_1111 = (-4L);
            int l_1136 = 0x9444579EL;
            struct S0 l_1197 = {0xD277E334L,4294967295UL,0x7BCEEB5FL,0UL,0UL,-4L,-1L};
            char *l_1205 = (void*)0;
            char *l_1206 = &g_278;
            int l_1207 = 0x57D91C38L;
            char l_1216 = 0x29L;
            if ((((**l_1116) | (*l_1117)) >= 4294967294UL))
            {
                int l_1130 = (-1L);
                int l_1151 = 0x8822A2D7L;
                int l_1172 = 0L;
                int l_1178 = 0xF3CC3337L;
                for (g_15 = 27; (g_15 < 33); g_15 = safe_add_func_int16_t_s_s(g_15, 3))
                {
                    unsigned l_1139 = 0x3DA190B0L;
                    int l_1171 = 0x45C7AB5BL;
                    int *l_1194 = &g_895;
                    (*l_1117) |= 0xDA3E7CD0L;
                    for (g_339 = (-17); (g_339 >= 59); ++g_339)
                    {
                        return (*g_531);
                    }
                    if ((safe_add_func_int32_t_s_s(0x95B47DF7L, g_177)))
                    {
                        int *l_1124 = &g_20;
                        int *l_1125 = &g_177;
                        int *l_1126 = &g_177;
                        int *l_1127 = &g_895;
                        int *l_1128 = &g_108;
                        int *l_1129 = (void*)0;
                        int *l_1131 = &g_20;
                        int *l_1132 = (void*)0;
                        int *l_1133 = &l_970;
                        int *l_1134 = (void*)0;
                        int *l_1135 = (void*)0;
                        int *l_1137 = &g_159;
                        int *l_1138 = &g_108;
                        l_1139--;
                        if ((*l_1128))
                            continue;
                    }
                    else
                    {
                        int *l_1152 = &g_20;
                        int *l_1153 = &l_970;
                        int *l_1154 = &g_177;
                        int *l_1155 = &g_159;
                        int *l_1156 = &l_1130;
                        int *l_1157 = &l_970;
                        int *l_1158 = &g_159;
                        int *l_1159 = &g_507;
                        int *l_1160 = (void*)0;
                        int *l_1161 = &g_108;
                        int *l_1162 = &g_159;
                        int *l_1163 = &l_1130;
                        int *l_1164 = &g_159;
                        int *l_1165 = &g_177;
                        int *l_1166 = &g_108;
                        int *l_1167 = (void*)0;
                        int *l_1168 = &g_20;
                        int *l_1169 = &l_1151;
                        int *l_1170 = (void*)0;
                        int *l_1173 = &g_159;
                        int *l_1174 = &g_507;
                        int *l_1175 = &l_1172;
                        int *l_1176 = &l_1172;
                        int *l_1177 = (void*)0;
                        int *l_1179 = (void*)0;
                        int *l_1180 = &g_177;
                        int *l_1181 = &l_1171;
                        int *l_1182 = &g_108;
                        int *l_1183 = &l_1178;
                        int *l_1184 = &l_1151;
                        int *l_1185 = &l_1178;
                        int *l_1186 = &g_177;
                        int *l_1187 = &l_1171;
                        g_196 = &g_108;
                        ++l_1188;
                    }
                    (*l_1194) &= (((**l_1116) = (safe_unary_minus_func_int16_t_s((0xF619L >= (**l_1116))))) != (safe_lshift_func_uint8_t_u_u(251UL, g_1006.f4)));
                }
                (*l_1116) = &g_895;
            }
            else
            {
                for (g_118.f3 = (-22); (g_118.f3 > 56); g_118.f3 = safe_add_func_int32_t_s_s(g_118.f3, 6))
                {
                    return l_1197;
                }
            }
            l_1207 ^= (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((**l_1116), g_795)), (safe_lshift_func_int8_t_s_s(((*l_1206) = l_1204), 6))));
            (*l_1117) |= l_1197.f0;
            (*l_1087) = func_7((safe_rshift_func_uint16_t_u_s((g_289.f3++), l_1197.f4)), (((safe_rshift_func_uint8_t_u_u(func_92(&l_1136), l_1197.f0)) & g_147) == ((safe_lshift_func_int16_t_s_u((l_1216 == (func_92(func_94((*l_1116), l_1207, (g_1217 = ((*l_1095) = func_94(&g_507, l_1197.f6, &g_177))))) && 0x270315ABL)), 10)) >= (-2L))), g_289.f0, (*g_531), l_971.f4);
        }
        else
        {
            int l_1225 = 1L;
            (*g_1217) = (func_92(&g_507) & (g_118.f6 >= ((!((!(&g_166 == l_1218)) < (g_118.f3 > (safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(l_1225, ((*l_1117) = l_1225))), g_108)), 3))))) && 0x23D6L)));
        }
        (*g_1217) = func_16((g_1226 == &g_1227), ((((*l_1229) = l_1228) && (safe_add_func_uint16_t_u_u(g_118.f6, (**l_1116)))) >= ((*l_1117) > (0x8010L != g_118.f3))));
    }
    else
    {
        struct S0 l_1232 = {0UL,0xCB42420CL,18446744073709551611UL,65527UL,0x83DCL,0x129BL,0x19A1389BL};
        (*g_1217) ^= 7L;
        return l_1232;
    }
    return g_1233;
}







static struct S0 func_2(struct S0 p_3, struct S0 p_4, short p_5, unsigned p_6)
{
    int *l_1007 = (void*)0;
    int *l_1008 = &g_507;
    int *l_1009 = &g_177;
    int *l_1010 = (void*)0;
    int *l_1011 = &g_159;
    int *l_1012 = &g_895;
    int *l_1013 = &g_895;
    int *l_1014 = &g_507;
    int *l_1015 = &g_895;
    int l_1016 = 1L;
    int *l_1017 = &g_159;
    int l_1018 = 7L;
    int *l_1019 = &l_1016;
    int *l_1020 = (void*)0;
    int *l_1021 = (void*)0;
    int *l_1022 = &g_108;
    int *l_1023 = &g_507;
    int *l_1024 = (void*)0;
    int l_1025 = 0xEC429AF8L;
    int *l_1026 = (void*)0;
    int *l_1027 = &g_177;
    int *l_1028 = &g_895;
    int *l_1029 = &g_507;
    int *l_1030 = &g_108;
    int l_1031 = (-2L);
    int *l_1032 = (void*)0;
    int l_1033 = 0x2ACB0934L;
    int *l_1034 = &g_177;
    int *l_1035 = &g_177;
    int l_1036 = (-6L);
    int *l_1037 = (void*)0;
    int *l_1038 = &l_1018;
    int *l_1039 = &g_20;
    int *l_1040 = (void*)0;
    int l_1041 = 8L;
    int *l_1042 = &g_159;
    int l_1043 = 0x7F7343FEL;
    int *l_1044 = &g_159;
    int *l_1045 = &l_1025;
    int *l_1046 = &g_159;
    int *l_1047 = &l_1025;
    int l_1048 = 0xFBAF2102L;
    int *l_1049 = &l_1036;
    int *l_1050 = &g_108;
    int *l_1051 = &l_1036;
    int *l_1052 = &l_1041;
    int *l_1053 = &l_1016;
    int l_1054 = 0xD1483859L;
    int *l_1055 = (void*)0;
    int *l_1056 = &l_1033;
    int *l_1057 = (void*)0;
    int *l_1058 = &l_1018;
    int *l_1059 = &l_1031;
    int *l_1060 = &l_1016;
    int *l_1061 = &l_1025;
    int *l_1062 = &g_177;
    int *l_1063 = &l_1025;
    int *l_1064 = (void*)0;
    int *l_1065 = &g_895;
    int *l_1066 = &g_177;
    int *l_1067 = &g_177;
    int *l_1068 = (void*)0;
    int *l_1069 = &l_1054;
    int *l_1070 = &l_1043;
    int *l_1071 = &g_159;
    int *l_1072 = &l_1043;
    int *l_1073 = &l_1033;
    int l_1074 = 1L;
    int *l_1075 = &g_507;
    int *l_1076 = (void*)0;
    int l_1077 = 0x40E1F2B4L;
    int *l_1078 = &l_1054;
    int *l_1079 = &l_1025;
    int *l_1080 = &l_1036;
    int *l_1081 = &g_159;
    int *l_1082 = &l_1036;
    unsigned l_1083 = 6UL;
    struct S0 l_1086 = {3UL,4294967292UL,0x14A052D2L,0x8E53L,0xD260L,0x4BD9L,-1L};
    ++l_1083;
    (*l_1078) = p_3.f2;
    return l_1086;
}







static struct S0 func_7(unsigned p_8, short p_9, unsigned p_10, struct S0 p_11, unsigned p_12)
{
    int *l_972 = (void*)0;
    int *l_973 = &g_20;
    struct S0 l_974 = {0x16896694L,0x583BF57BL,1UL,0xFBE3L,0xF9ADL,0x0AB1L,0x37E3A844L};
    struct S0 **l_977 = &g_531;
    int *l_978 = &g_108;
    int *l_979 = &g_507;
    int *l_980 = &g_177;
    int *l_981 = (void*)0;
    int *l_982 = &g_108;
    int *l_983 = (void*)0;
    int *l_984 = &g_507;
    int *l_985 = &g_507;
    int l_986 = 0xAA675AE7L;
    int *l_987 = &g_895;
    int *l_988 = &g_507;
    int *l_989 = &g_159;
    int *l_990 = (void*)0;
    int *l_991 = &g_507;
    int *l_992 = &g_895;
    int *l_993 = &g_159;
    int *l_994 = &g_177;
    int *l_995 = &g_507;
    int *l_996 = &g_20;
    int *l_997 = &g_895;
    int *l_998 = (void*)0;
    int *l_999 = &g_108;
    int *l_1000 = &g_108;
    int *l_1001 = (void*)0;
    unsigned char l_1002 = 0x5DL;
    int **l_1005 = &l_1000;
    (*l_973) = 0xD2B1F338L;
    (*l_973) = (((*l_977) = func_109(func_109(&g_118, &g_118, l_974, (safe_rshift_func_uint8_t_u_u(g_399, 1))), &g_118, p_11, (0xD7C9EEF1L | (p_10 = 0x0C84B37BL)))) == &g_118);
    ++l_1002;
    (*l_1005) = &l_986;
    return (**l_977);
}







static int func_16(unsigned char p_17, short p_18)
{
    int *l_19 = &g_20;
    int *l_21 = &g_20;
    int *l_22 = &g_20;
    int *l_23 = &g_20;
    int *l_24 = (void*)0;
    int *l_25 = &g_20;
    int l_26 = (-1L);
    int *l_27 = &g_20;
    int l_28 = 0x9D070FEEL;
    int *l_29 = &l_26;
    int *l_30 = (void*)0;
    int *l_31 = &g_20;
    int l_32 = 0xED863780L;
    int *l_33 = &l_28;
    int *l_34 = &l_28;
    int *l_35 = &l_26;
    int l_36 = 0xFD29CC02L;
    int *l_37 = &l_28;
    int *l_38 = &g_20;
    int l_39 = (-10L);
    int l_40 = (-5L);
    int *l_41 = &l_36;
    int l_42 = 0L;
    int *l_43 = (void*)0;
    int *l_44 = &l_28;
    int *l_45 = &l_32;
    int *l_47 = &l_26;
    int l_48 = 0xF9020C5AL;
    int *l_49 = &g_20;
    int *l_50 = (void*)0;
    int *l_51 = &l_26;
    int *l_52 = &l_26;
    int *l_53 = &l_28;
    int *l_54 = &l_42;
    int *l_55 = &l_39;
    int *l_56 = &l_48;
    int *l_57 = &l_36;
    int *l_58 = &l_26;
    int *l_59 = (void*)0;
    int *l_60 = &l_32;
    int l_61 = 7L;
    int *l_62 = &l_61;
    int *l_63 = &l_48;
    int l_64 = (-1L);
    int *l_65 = &l_64;
    int *l_66 = (void*)0;
    int *l_67 = &l_61;
    int l_68 = (-1L);
    int *l_69 = &l_40;
    int *l_70 = (void*)0;
    int *l_71 = &l_32;
    int *l_72 = &l_61;
    int l_73 = 0L;
    int *l_74 = &l_32;
    int *l_75 = &l_28;
    int *l_76 = &l_32;
    int *l_77 = &l_26;
    int *l_78 = &l_68;
    int *l_79 = &l_64;
    int *l_80 = &l_26;
    int *l_81 = &l_68;
    int *l_82 = &l_32;
    int *l_83 = (void*)0;
    int *l_84 = (void*)0;
    int l_85 = 0L;
    short l_86 = (-1L);
    unsigned l_98 = 0UL;
    char *l_767 = &g_278;
    char **l_766 = &l_767;
    unsigned short l_837 = 65535UL;
    struct S0 *l_852 = &g_118;
    struct S0 *l_948 = (void*)0;
    g_87--;
    if ((g_20 <= ((0xE3L >= ((void*)0 == &l_39)) < ((*g_166) = (safe_add_func_int32_t_s_s(func_92(func_94(&l_73, l_98, func_99(p_18, (++g_102)))), g_87))))))
    {
        char ***l_768 = (void*)0;
        char ***l_769 = &l_766;
        int *l_772 = &l_68;
        for (g_289.f0 = 20; (g_289.f0 > 50); g_289.f0++)
        {
            if (p_18)
                break;
            (*l_23) |= p_17;
        }
        (*l_769) = l_766;
        for (l_98 = 0; (l_98 >= 56); l_98 = safe_add_func_uint8_t_u_u(l_98, 9))
        {
            l_772 = &g_159;
        }
    }
    else
    {
        short l_778 = 0x4007L;
        int l_779 = 0L;
        int l_780 = 1L;
        int l_781 = 8L;
        int l_782 = 0xFEE426FEL;
        int *l_783 = &l_28;
        int *l_784 = (void*)0;
        int *l_785 = &l_68;
        int *l_786 = &l_64;
        int *l_787 = &l_48;
        int l_788 = (-1L);
        int *l_789 = &l_779;
        int *l_790 = &l_73;
        int l_791 = 0xA158CAF7L;
        int *l_792 = &l_32;
        int *l_793 = &l_42;
        int *l_794 = (void*)0;
        int *l_796 = &l_36;
        int *l_797 = &l_28;
        int *l_798 = &l_68;
        int *l_799 = &g_507;
        int *l_800 = &g_20;
        int *l_801 = (void*)0;
        int *l_802 = &l_788;
        int *l_803 = &l_85;
        int *l_804 = &l_32;
        int l_805 = 0L;
        int *l_806 = (void*)0;
        int *l_807 = &l_40;
        int *l_808 = &l_42;
        int *l_809 = &l_28;
        int *l_810 = &l_68;
        int *l_811 = &g_20;
        int *l_812 = (void*)0;
        int *l_813 = &l_788;
        int *l_814 = (void*)0;
        short l_815 = (-7L);
        int *l_816 = &l_39;
        int *l_817 = &l_64;
        int *l_818 = &l_85;
        int *l_819 = &l_48;
        int *l_820 = &l_805;
        int **l_824 = &l_797;
        for (l_48 = 4; (l_48 <= (-20)); --l_48)
        {
            for (l_85 = 0; (l_85 > 16); l_85 = safe_add_func_uint32_t_u_u(l_85, 9))
            {
                int **l_777 = &l_31;
                (*l_777) = &g_108;
            }
            (*l_31) ^= (((*l_767) = 0xAEL) ^ g_87);
        }
        --g_821;
        (*l_824) = (void*)0;
    }
    if (func_92(&l_64))
    {
        (*l_41) = 0L;
        return g_20;
    }
    else
    {
        int l_827 = 6L;
        int **l_853 = (void*)0;
        struct S0 *l_857 = &g_289;
        short l_864 = 8L;
        int l_949 = (-2L);
        struct S0 *l_951 = &g_289;
        for (g_507 = 29; (g_507 == (-24)); g_507 = safe_sub_func_int32_t_s_s(g_507, 1))
        {
            char l_834 = 0xCDL;
            int *l_863 = (void*)0;
            int l_889 = (-1L);
            if ((g_289.f6 && ((+l_827) & (((safe_sub_func_uint16_t_u_u((0x641EL || ((((p_17 <= (safe_add_func_int16_t_s_s(((**g_165) = (g_20 >= p_17)), (-1L)))) <= ((safe_add_func_uint16_t_u_u(p_18, ((+((g_87 && l_834) | g_289.f5)) && l_827))) >= l_834)) != p_18) >= 0xFBL)), g_159)) && 65535UL) > 0xB7L))))
            {
                short l_846 = 0x0CC2L;
                struct S0 *l_849 = &g_118;
                int **l_858 = &l_77;
                int l_888 = (-7L);
                int l_901 = 0x317978BEL;
                for (g_177 = 0; (g_177 == (-12)); g_177 = safe_sub_func_uint16_t_u_u(g_177, 4))
                {
                    char l_854 = 0L;
                    if (l_837)
                    {
                        int **l_838 = &l_52;
                        unsigned char *l_841 = &g_102;
                        struct S0 **l_850 = (void*)0;
                        struct S0 **l_851 = &g_531;
                        unsigned *l_855 = (void*)0;
                        unsigned *l_856 = &g_118.f1;
                        (*l_838) = &g_507;
                        (*l_80) = ((((((safe_rshift_func_uint8_t_u_u(((*l_841) = l_834), func_121(((*l_856) = (((0xC7L > ((safe_sub_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_827, l_846)), 0xE852L)) >= ((*g_166) = (safe_sub_func_int8_t_s_s(((p_18 && l_854) != 0L), 4L))))) & 0x11L) ^ 1L)), l_857, l_858))) & p_18) >= l_834) || g_177) == g_752) & 0x5B73678EL);
                        --g_859;
                        (*l_67) &= p_18;
                    }
                    else
                    {
                        short l_862 = 0x6C9EL;
                        return l_862;
                    }
                }
                (*l_858) = l_863;
                if (func_92(&l_42))
                {
                    unsigned *l_866 = (void*)0;
                    unsigned *l_867 = (void*)0;
                    unsigned *l_868 = (void*)0;
                    unsigned *l_869 = &g_289.f0;
                    int l_874 = (-1L);
                    int l_887 = (-1L);
                    if (l_864)
                        break;
                    if (((*l_49) = p_18))
                    {
                        struct S0 l_865 = {1UL,0x8E66FB2EL,0UL,1UL,9UL,0x3CB2L,0xCCB5AF79L};
                        (*l_852) = (*l_852);
                        (*l_857) = l_865;
                    }
                    else
                    {
                        (*l_35) = (1L ^ g_118.f6);
                    }
                    (*l_858) = &l_42;
                }
                else
                {
                    int *l_890 = &l_73;
                    int *l_891 = (void*)0;
                    int *l_892 = (void*)0;
                    int *l_893 = &l_889;
                    int *l_894 = &l_73;
                    int *l_896 = &l_40;
                    int *l_897 = &g_177;
                    int *l_898 = &l_64;
                    int *l_899 = &l_61;
                    int l_900 = 1L;
                    int *l_902 = &l_26;
                    int *l_903 = &g_895;
                    int *l_904 = &l_85;
                    int *l_905 = &l_28;
                    int *l_906 = (void*)0;
                    int *l_907 = (void*)0;
                    int *l_908 = (void*)0;
                    int *l_909 = &l_900;
                    int *l_910 = (void*)0;
                    int *l_911 = (void*)0;
                    int *l_912 = (void*)0;
                    int *l_913 = (void*)0;
                    int *l_914 = (void*)0;
                    int l_915 = (-1L);
                    int *l_916 = &l_85;
                    int *l_917 = &l_68;
                    int *l_918 = &l_889;
                    int *l_919 = &l_889;
                    int *l_920 = &l_85;
                    int *l_921 = &l_48;
                    int *l_922 = &l_900;
                    int *l_923 = (void*)0;
                    unsigned short l_927 = 3UL;
                    g_924++;
                    if (l_927)
                        continue;
                    return p_17;
                }
                g_196 = (*l_858);
            }
            else
            {
                struct S0 l_928 = {1UL,0x45238EEEL,0UL,65533UL,0UL,-4L,0L};
                (*l_857) = l_928;
                if (g_859)
                    break;
                (*l_54) = p_18;
            }
            if (g_102)
                break;
        }
        for (g_278 = 0; (g_278 > (-26)); g_278 = safe_sub_func_uint8_t_u_u(g_278, 6))
        {
            int **l_931 = &l_78;
            char *l_939 = &g_940;
            unsigned char *l_944 = &g_102;
            unsigned short *l_945 = &l_837;
            unsigned short *l_950 = &g_118.f4;
            int **l_952 = (void*)0;
            int **l_953 = &l_75;
            struct S0 **l_954 = &l_852;
            (*l_931) = (void*)0;
            (*l_82) |= (safe_lshift_func_uint8_t_u_u(((p_17 <= (safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(0x0FL, p_18))))) == ((*l_950) = (safe_rshift_func_uint8_t_u_u((((*l_939) = g_159) > (safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s(((((p_18 < ((*l_944) ^= (*l_34))) < ((((((*l_945) |= p_17) ^ g_20) | (safe_add_func_uint8_t_u_u(g_177, p_17))) > p_17) | g_289.f1)) && p_17) || l_949), 0xBEC6L))))), 0)))), 4));
            (*l_954) = func_109(l_951, l_857, g_289, ((*l_931) == ((*l_953) = &g_507)));
        }
        for (l_61 = 0; (l_61 >= (-21)); l_61 = safe_sub_func_uint8_t_u_u(l_61, 1))
        {
            unsigned char *l_957 = (void*)0;
            unsigned char *l_958 = &g_249;
            struct S0 *l_961 = &g_118;
            int **l_969 = &l_76;
            (*l_969) = func_94(&l_32, func_121(g_289.f5, (g_531 = func_109(l_961, func_114(((safe_rshift_func_uint16_t_u_u(3UL, (p_18 <= (safe_rshift_func_int16_t_s_u((((void*)0 != g_966) | (safe_unary_minus_func_uint8_t_u(p_17))), 3))))) < 0xDEEB5D9EL), l_852), (*l_951), g_795)), &l_21), &g_895);
            (**l_969) = g_507;
        }
    }
    return p_17;
}







static int func_92(int * p_93)
{
    (*p_93) = (*p_93);
    (*p_93) ^= 0x3D2AE195L;
    return g_645;
}







static int * func_94(int * p_95, char p_96, int * p_97)
{
    unsigned l_761 = 0x491FD312L;
    --l_761;
    return &g_177;
}







static int * func_99(unsigned p_100, unsigned p_101)
{
    int *l_107 = &g_108;
    struct S0 *l_117 = &g_118;
    struct S0 **l_287 = &l_117;
    struct S0 *l_288 = (void*)0;
    int l_359 = 0L;
    int l_508 = (-9L);
    int l_681 = 0x988A7E2CL;
    unsigned l_683 = 4294967295UL;
    short *l_687 = (void*)0;
    (*l_107) = (safe_add_func_uint16_t_u_u((0xE7L && p_101), p_101));
    (*l_287) = func_109(((*l_287) = func_114(p_101, l_117)), l_288, g_289, p_100);
    if (((*l_107) = 0xB5D42E75L))
    {
        unsigned char *l_351 = &g_147;
        int l_354 = 0xD7F2AF57L;
        int l_357 = 0xC735D90FL;
        char *l_358 = &g_278;
        int *l_360 = &g_159;
        int l_468 = 0xBF27FBF9L;
        int l_469 = 0x213CFF43L;
        int l_486 = 0xBAFFA15EL;
        if (((*l_360) ^= ((safe_sub_func_uint8_t_u_u((*l_107), (((**g_165) |= 0xFA97L) | (*l_107)))) >= (safe_lshift_func_uint16_t_u_s((p_101 || (safe_lshift_func_uint16_t_u_s(((((((l_354 = (safe_lshift_func_uint8_t_u_s(((*l_351)--), 1))) >= ((safe_sub_func_int32_t_s_s(((((*l_358) = l_357) <= (0UL == ((~l_357) || (l_357 > p_101)))) != l_359), g_118.f0)) && g_289.f4)) != l_357) | l_357) != 0x6BFDL) <= 253UL), l_357))), 11)))))
        {
            int *l_361 = &l_354;
            int *l_362 = &g_159;
            int *l_363 = &g_159;
            int l_364 = 0x7D6070DEL;
            int l_365 = 0x70B2A593L;
            int *l_366 = &g_177;
            int *l_367 = &l_365;
            int *l_368 = &l_354;
            int *l_369 = &g_177;
            int *l_370 = &l_359;
            int *l_371 = &g_177;
            int *l_372 = (void*)0;
            int *l_373 = &g_177;
            int l_374 = 0x52DD46F2L;
            int *l_375 = (void*)0;
            int *l_376 = &g_177;
            int *l_377 = &g_177;
            int l_378 = 1L;
            int *l_379 = &l_357;
            int *l_380 = &g_159;
            int *l_381 = &g_159;
            int *l_382 = &l_364;
            int *l_383 = &l_354;
            int *l_384 = &l_359;
            int *l_385 = &l_378;
            int *l_386 = &l_364;
            int *l_387 = &l_378;
            int *l_388 = &g_108;
            int *l_389 = &l_354;
            int *l_390 = (void*)0;
            int *l_391 = (void*)0;
            int *l_392 = &l_364;
            int *l_393 = &l_365;
            int l_394 = 0x5FE2A325L;
            int *l_395 = &l_357;
            int *l_396 = &l_374;
            int *l_397 = &g_108;
            int *l_398 = &l_374;
            (*l_107) = ((*l_360) ^= (*l_107));
            --g_399;
        }
        else
        {
            int l_411 = (-1L);
            int l_470 = 0x7EEBF2CDL;
            int *l_532 = (void*)0;
            int *l_533 = &l_469;
            int *l_534 = (void*)0;
            int *l_535 = (void*)0;
            int *l_536 = &l_354;
            int *l_537 = (void*)0;
            int *l_538 = &l_508;
            int *l_539 = &l_469;
            int *l_540 = &g_159;
            int *l_541 = (void*)0;
            int *l_542 = &l_357;
            int *l_543 = (void*)0;
            int *l_544 = &g_108;
            int *l_545 = &g_108;
            int *l_546 = &l_469;
            int *l_547 = &l_470;
            int *l_548 = &g_159;
            int *l_549 = &l_469;
            int *l_550 = (void*)0;
            int *l_551 = &l_354;
            int *l_552 = (void*)0;
            int *l_553 = &g_159;
            int *l_554 = &l_486;
            int *l_555 = &l_468;
            int *l_556 = &l_470;
            int *l_557 = &l_359;
            for (g_289.f2 = 0; (g_289.f2 <= 47); g_289.f2 = safe_add_func_uint16_t_u_u(g_289.f2, 2))
            {
                int *l_404 = &g_177;
                int *l_405 = (void*)0;
                int *l_406 = &l_359;
                int *l_407 = (void*)0;
                int *l_408 = &g_108;
                int *l_409 = &g_177;
                int *l_410 = &g_159;
                int l_412 = 1L;
                int *l_413 = &g_159;
                int *l_414 = (void*)0;
                int *l_415 = &g_159;
                int *l_416 = &g_177;
                int *l_417 = &g_159;
                int *l_418 = &l_354;
                int *l_419 = &g_177;
                int *l_420 = &l_411;
                int *l_421 = &g_159;
                int *l_422 = &l_412;
                int *l_423 = &l_412;
                int *l_424 = &l_412;
                int *l_425 = &l_359;
                int *l_426 = &l_354;
                int *l_427 = (void*)0;
                int *l_428 = &l_354;
                int *l_429 = &l_357;
                int *l_430 = &l_357;
                int *l_431 = &l_411;
                int *l_432 = &g_108;
                int *l_433 = (void*)0;
                int *l_434 = &l_412;
                int *l_435 = &l_411;
                int *l_436 = &l_354;
                int *l_437 = &l_357;
                int *l_438 = &l_357;
                int *l_439 = (void*)0;
                int *l_440 = &l_411;
                int *l_441 = &g_177;
                int *l_442 = (void*)0;
                int *l_443 = &l_354;
                int *l_444 = (void*)0;
                int *l_445 = &l_357;
                int *l_446 = &g_177;
                int *l_447 = &l_412;
                int *l_448 = &l_359;
                int *l_449 = &g_177;
                int *l_453 = &g_108;
                int *l_454 = &g_108;
                int *l_455 = &l_411;
                int *l_456 = (void*)0;
                int *l_457 = &l_412;
                int *l_458 = &g_177;
                int *l_459 = &l_412;
                int *l_460 = &g_159;
                int *l_461 = &g_177;
                int l_462 = 0xCB58D824L;
                int *l_463 = &g_159;
                int *l_464 = &g_108;
                int *l_465 = (void*)0;
                int *l_466 = &l_411;
                int *l_467 = &g_177;
                int *l_471 = &l_411;
                int *l_472 = &l_468;
                int *l_473 = &l_462;
                int *l_474 = (void*)0;
                int *l_475 = &l_468;
                int *l_476 = &l_411;
                int *l_477 = &l_357;
                int *l_478 = (void*)0;
                int *l_479 = (void*)0;
                int *l_480 = &l_411;
                int *l_481 = &g_177;
                int *l_482 = (void*)0;
                int *l_483 = &l_462;
                int *l_484 = &l_468;
                int *l_485 = (void*)0;
                int *l_487 = &l_411;
                int *l_488 = &l_357;
                int *l_489 = &g_159;
                int *l_490 = &l_357;
                int *l_491 = (void*)0;
                int *l_492 = &g_159;
                int *l_493 = &g_108;
                int l_494 = 0x61A45CF1L;
                int *l_495 = &l_462;
                int *l_496 = &l_354;
                int *l_497 = &l_354;
                int *l_498 = (void*)0;
                int *l_499 = &l_469;
                int *l_500 = (void*)0;
                int *l_501 = &l_470;
                int *l_502 = (void*)0;
                int *l_503 = &g_159;
                int *l_504 = &l_468;
                int *l_505 = &l_462;
                int *l_506 = (void*)0;
                int *l_509 = (void*)0;
                int *l_510 = &l_470;
                int *l_511 = &l_359;
                int *l_512 = &g_159;
                int l_513 = 0xF1CBDC33L;
                int *l_514 = (void*)0;
                int *l_515 = &l_469;
                int *l_516 = &g_507;
                int *l_517 = &g_108;
                int *l_518 = &l_468;
                int *l_519 = (void*)0;
                int *l_520 = &g_108;
                int *l_521 = (void*)0;
                int l_522 = 0xC4EBCDB3L;
                int *l_523 = &l_357;
                int *l_524 = (void*)0;
                int *l_526 = &l_462;
                unsigned char l_527 = 0xB8L;
                struct S0 *l_530 = (void*)0;
                g_450--;
                l_527--;
                l_107 = &l_508;
                g_531 = l_530;
            }
            (*l_360) &= p_100;
            g_558--;
            g_196 = &l_357;
        }
        for (l_508 = 1; (l_508 > 21); ++l_508)
        {
            char l_608 = (-8L);
            int l_626 = 0xEFC4C127L;
            int l_640 = 0x3D91A67FL;
            for (g_118.f0 = 29; (g_118.f0 != 23); g_118.f0 = safe_sub_func_uint32_t_u_u(g_118.f0, 1))
            {
                int *l_565 = &l_357;
                int *l_566 = &g_177;
                int *l_567 = &l_469;
                int *l_568 = &l_357;
                int *l_569 = &l_359;
                int *l_570 = &l_468;
                int *l_571 = &g_108;
                int *l_572 = &l_357;
                int *l_573 = &g_177;
                int *l_574 = &l_468;
                int *l_575 = &g_507;
                int *l_576 = &g_159;
                int *l_577 = &g_507;
                int *l_578 = &l_357;
                int *l_579 = &g_177;
                int *l_580 = (void*)0;
                int *l_581 = &g_177;
                int *l_582 = &g_507;
                int *l_583 = &l_486;
                int *l_584 = (void*)0;
                int *l_585 = &g_507;
                int *l_586 = (void*)0;
                int *l_587 = (void*)0;
                int *l_588 = &g_507;
                int *l_589 = &l_357;
                int *l_590 = &l_359;
                int *l_591 = &l_468;
                int *l_592 = &l_354;
                int *l_593 = (void*)0;
                int *l_594 = (void*)0;
                int *l_595 = (void*)0;
                int *l_596 = &l_357;
                int *l_597 = (void*)0;
                int *l_598 = &l_468;
                int *l_599 = &g_507;
                int *l_600 = &l_486;
                int *l_601 = &l_359;
                int *l_602 = (void*)0;
                int *l_603 = &l_359;
                int *l_604 = &g_108;
                int *l_605 = &l_357;
                int *l_606 = (void*)0;
                int *l_607 = &l_486;
                int *l_610 = &l_357;
                int *l_611 = (void*)0;
                int *l_612 = (void*)0;
                int *l_613 = &g_177;
                int *l_614 = &g_108;
                int *l_615 = (void*)0;
                int *l_616 = &l_357;
                int *l_617 = &l_486;
                int *l_618 = &l_354;
                int *l_619 = &l_357;
                int *l_620 = &l_357;
                int *l_621 = &g_108;
                int *l_622 = (void*)0;
                int *l_623 = &l_354;
                int *l_624 = (void*)0;
                int *l_625 = &l_357;
                int *l_627 = &l_469;
                int *l_628 = (void*)0;
                int *l_629 = &l_357;
                int *l_630 = &g_159;
                int *l_631 = &g_177;
                int *l_632 = &l_469;
                int *l_633 = &g_507;
                int *l_634 = &g_159;
                int *l_635 = &g_507;
                int *l_636 = (void*)0;
                int *l_637 = (void*)0;
                int *l_638 = &l_354;
                int *l_639 = (void*)0;
                int *l_641 = &l_357;
                int *l_642 = &l_469;
                int *l_643 = &l_468;
                int *l_644 = &l_486;
                int *l_646 = &g_507;
                int *l_647 = &l_354;
                int *l_648 = &l_357;
                int *l_649 = &l_359;
                int *l_650 = &l_486;
                int *l_651 = (void*)0;
                int *l_652 = (void*)0;
                int *l_653 = &g_177;
                int *l_654 = &l_486;
                int *l_655 = &l_354;
                int *l_656 = &l_468;
                int *l_657 = (void*)0;
                int *l_658 = &g_108;
                int *l_659 = &g_108;
                int *l_660 = &g_159;
                int *l_661 = &l_486;
                int *l_662 = &l_354;
                int *l_663 = &g_108;
                int *l_664 = (void*)0;
                int *l_665 = (void*)0;
                int *l_666 = &l_486;
                int *l_667 = (void*)0;
                int *l_668 = (void*)0;
                int *l_669 = &l_486;
                int *l_670 = (void*)0;
                int *l_671 = (void*)0;
                int *l_672 = &l_486;
                int *l_673 = &l_640;
                int *l_674 = &g_108;
                int *l_675 = &l_354;
                int *l_676 = &l_640;
                int *l_677 = &l_486;
                int *l_678 = (void*)0;
                int *l_679 = (void*)0;
                int *l_680 = &l_486;
                int *l_682 = &l_468;
                (*l_565) ^= (*l_360);
                l_683--;
            }
        }
    }
    else
    {
        struct S0 l_686 = {18446744073709551615UL,1UL,0UL,0xF0D6L,2UL,0x3A35L,1L};
        (*l_107) = (0x21BBL != func_121(g_278, &g_118, &g_196));
        l_686 = (*g_531);
        (*l_107) &= (l_687 != l_687);
    }
    for (g_339 = 0; (g_339 < 45); g_339++)
    {
        int *l_690 = &l_359;
        int **l_691 = &g_196;
        int l_706 = 0x61452244L;
        int l_739 = 0L;
        int l_742 = (-1L);
        int l_749 = 0L;
        (*l_691) = l_690;
        if ((*g_196))
            break;
    }
    return &g_177;
}







static struct S0 * func_109(struct S0 * p_110, struct S0 * p_111, struct S0 p_112, unsigned p_113)
{
    unsigned char *l_290 = &g_147;
    unsigned char *l_291 = (void*)0;
    int l_292 = 0x1471146AL;
    int l_293 = 0x6CCF5C82L;
    int *l_294 = &g_159;
    int *l_295 = &l_292;
    int *l_296 = (void*)0;
    int *l_297 = &g_108;
    int *l_298 = (void*)0;
    int *l_299 = &l_292;
    int *l_300 = &g_159;
    int *l_301 = &g_108;
    int *l_302 = &g_177;
    int *l_303 = &g_108;
    int l_304 = 9L;
    int *l_305 = &g_108;
    int *l_306 = (void*)0;
    int *l_307 = &l_304;
    int *l_308 = (void*)0;
    int *l_309 = &g_159;
    int *l_310 = &l_292;
    int *l_311 = &g_159;
    int *l_312 = &g_177;
    int *l_313 = &l_304;
    int *l_314 = &g_108;
    int *l_315 = &l_292;
    int *l_316 = &l_292;
    int *l_317 = (void*)0;
    int *l_318 = &g_159;
    int *l_319 = &g_108;
    int *l_320 = (void*)0;
    int l_321 = (-1L);
    int l_322 = 0L;
    int *l_323 = &g_177;
    int *l_324 = (void*)0;
    int *l_325 = &g_177;
    int l_326 = (-10L);
    int *l_327 = &l_304;
    int *l_328 = &g_108;
    int *l_329 = &g_159;
    int *l_330 = &l_321;
    int *l_331 = &l_326;
    int *l_332 = &g_159;
    int *l_333 = &l_304;
    int *l_334 = &l_292;
    int l_335 = 5L;
    int *l_336 = (void*)0;
    int *l_337 = &g_108;
    int *l_338 = (void*)0;
    struct S0 *l_342 = &g_118;
    (*l_294) &= ((g_87 | (l_292 = ((*l_290) = ((void*)0 != &g_278)))) < (65529UL != (g_118.f3 < (l_293 ^= ((-1L) != p_112.f4)))));
    g_339--;
    return l_342;
}







static struct S0 * func_114(unsigned char p_115, struct S0 * p_116)
{
    int *l_119 = &g_20;
    int **l_120 = &l_119;
    int l_279 = 0xCF3850F3L;
    struct S0 *l_286 = (void*)0;
    (*l_120) = l_119;
    if (((g_20 | func_121(g_14, p_116, &l_119)) < (safe_rshift_func_uint16_t_u_s(p_115, 10))))
    {
        short l_272 = 0x3CF9L;
        char *l_277 = &g_278;
        int *l_280 = &g_108;
        int *l_281 = &l_279;
        int *l_282 = (void*)0;
        unsigned l_283 = 18446744073709551615UL;
        (*l_280) = ((func_121(g_87, &g_118, &g_196) <= 252UL) < (l_279 = (l_272 && ((safe_add_func_uint32_t_u_u(4294967295UL, (-7L))) ^ ((*l_277) &= (safe_mod_func_uint32_t_u_u(g_159, p_115)))))));
        l_283--;
    }
    else
    {
        return l_286;
    }
    return l_286;
}







static short func_121(unsigned p_122, struct S0 * p_123, int ** p_124)
{
    struct S0 l_125 = {0x3C6E3A6DL,0xE4D36899L,0x90AD7A22L,0xBBACL,6UL,1L,0L};
    struct S0 *l_129 = &l_125;
    struct S0 **l_128 = &l_129;
    int *l_130 = &g_108;
    char l_137 = (-10L);
    short *l_138 = (void*)0;
    short *l_139 = &g_118.f5;
    short *l_140 = &g_46;
    int l_144 = 1L;
    short *l_150 = &g_118.f5;
    unsigned l_190 = 3UL;
    (*p_123) = l_125;
    (*p_123) = (*p_123);
    (*l_130) ^= (safe_mod_func_int32_t_s_s(((&g_118 == ((*l_128) = &l_125)) & g_20), l_125.f3));
    if (((safe_add_func_int16_t_s_s(p_122, ((*l_140) = (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((*l_130), (-1L))) || l_137), ((*l_139) = g_14)))))) >= p_122))
    {
        (*p_124) = (void*)0;
        for (g_118.f4 = 0; (g_118.f4 < 54); g_118.f4 = safe_add_func_uint32_t_u_u(g_118.f4, 1))
        {
            int *l_143 = &g_108;
            int *l_145 = (void*)0;
            int *l_146 = &l_144;
            short **l_151 = &l_150;
            short **l_152 = &l_138;
            g_147--;
            (*l_146) = (((*l_151) = l_150) != ((*l_152) = &g_46));
            (*l_146) ^= 6L;
        }
    }
    else
    {
        unsigned l_153 = 0x7DF68D34L;
        int *l_154 = &l_144;
        short **l_167 = &l_140;
        (*l_154) = ((*l_130) = ((((*l_140) |= (((*l_128) = (*l_128)) != p_123)) ^ l_153) <= g_118.f6));
        (*l_154) = (+g_87);
        for (l_125.f2 = 0; (l_125.f2 < 13); ++l_125.f2)
        {
            int l_162 = 3L;
            unsigned l_179 = 4294967293UL;
            unsigned *l_189 = &g_118.f1;
            short **l_205 = &g_166;
            struct S0 l_252 = {0x5AD3CA9BL,0x84F45175L,0x4C186291L,4UL,65534UL,0x17B3L,2L};
            for (l_144 = 0; (l_144 == (-17)); l_144 = safe_sub_func_uint16_t_u_u(l_144, 8))
            {
                unsigned l_178 = 0xAD646978L;
            }
        }
    }
    return (*g_166);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_118.f5, "g_118.f5", print_hash_value);
    transparent_crc(g_118.f6, "g_118.f6", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_278, "g_278", print_hash_value);
    transparent_crc(g_289.f0, "g_289.f0", print_hash_value);
    transparent_crc(g_289.f1, "g_289.f1", print_hash_value);
    transparent_crc(g_289.f2, "g_289.f2", print_hash_value);
    transparent_crc(g_289.f3, "g_289.f3", print_hash_value);
    transparent_crc(g_289.f4, "g_289.f4", print_hash_value);
    transparent_crc(g_289.f5, "g_289.f5", print_hash_value);
    transparent_crc(g_289.f6, "g_289.f6", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_609, "g_609", print_hash_value);
    transparent_crc(g_645, "g_645", print_hash_value);
    transparent_crc(g_752, "g_752", print_hash_value);
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_859, "g_859", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_924, "g_924", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_1006.f0, "g_1006.f0", print_hash_value);
    transparent_crc(g_1006.f1, "g_1006.f1", print_hash_value);
    transparent_crc(g_1006.f2, "g_1006.f2", print_hash_value);
    transparent_crc(g_1006.f3, "g_1006.f3", print_hash_value);
    transparent_crc(g_1006.f4, "g_1006.f4", print_hash_value);
    transparent_crc(g_1006.f5, "g_1006.f5", print_hash_value);
    transparent_crc(g_1006.f6, "g_1006.f6", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1233.f0, "g_1233.f0", print_hash_value);
    transparent_crc(g_1233.f1, "g_1233.f1", print_hash_value);
    transparent_crc(g_1233.f2, "g_1233.f2", print_hash_value);
    transparent_crc(g_1233.f3, "g_1233.f3", print_hash_value);
    transparent_crc(g_1233.f4, "g_1233.f4", print_hash_value);
    transparent_crc(g_1233.f5, "g_1233.f5", print_hash_value);
    transparent_crc(g_1233.f6, "g_1233.f6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
