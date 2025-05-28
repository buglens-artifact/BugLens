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


union U0 {
   int f0;
};

union U1 {
   char * f0;
   unsigned f1;
   const int f2;
   const short f3;
};


static long long g_12 = (-1L);
static unsigned g_22 = 1UL;
static unsigned long long g_25 = 18446744073709551615UL;
static char * const g_34 = (void*)0;
static int g_41 = (-10L);
static char g_43 = 0xE1L;
static unsigned long long g_51 = 0UL;
static union U0 g_70 = {0x18E961CAL};
static union U0 *g_69 = &g_70;
static long long g_87 = 0xF33464EB7F042724LL;
static short g_89 = 0x460EL;
static unsigned g_105 = 3UL;
static int *g_108 = (void*)0;
static int **g_107 = &g_108;
static const long long g_133 = 1L;
static unsigned long long *g_136 = &g_51;
static unsigned long long **g_135 = &g_136;
static int g_151 = 6L;
static union U1 g_161 = {0};
static union U1 *g_160 = &g_161;
static unsigned char g_188 = 1UL;
static short g_218 = 0xA4FFL;
static long long g_221 = 0xD5171A10681B76BFLL;
static char ***g_242 = (void*)0;
static short *g_283 = &g_218;
static short **g_282 = &g_283;
static short ***g_281 = &g_282;
static unsigned short g_428 = 0xEA48L;
static unsigned long long ** const ** const g_546 = (void*)0;
static char ****g_604 = &g_242;
static short g_695 = 0L;
static long long **g_724 = (void*)0;
static union U1 g_727 = {0};
static unsigned short g_791 = 0UL;
static unsigned short g_793 = 65533UL;
static char g_800 = 1L;
static const unsigned g_854 = 18446744073709551615UL;
static char *g_864 = (void*)0;
static char **g_863 = &g_864;
static short g_887 = (-1L);
static char g_944 = (-2L);
static const union U1 g_976 = {0};
static char *** const **g_1012 = (void*)0;
static int *g_1050 = &g_151;
static const char *g_1069 = &g_800;
static const char **g_1068 = &g_1069;
static const char ** const *g_1067 = &g_1068;
static const char ** const **g_1066 = &g_1067;
static const char ** const ***g_1065 = &g_1066;
static long long g_1130 = (-1L);
static int g_1203 = 6L;
static unsigned short *g_1252 = &g_791;
static unsigned short **g_1251 = &g_1252;
static unsigned short *** const g_1250 = &g_1251;



static int func_1(void);
static int func_2(char * p_3, unsigned short p_4, union U1 p_5);
static char * func_6(short p_7, char * p_8, short p_9);
static char * func_14(long long p_15, char * p_16, unsigned p_17, unsigned p_18, short p_19);
static char * func_26(unsigned long long * p_27, unsigned p_28);
static unsigned long long * func_29(char * p_30, char * p_31);
static char * func_32(char * const p_33);
static int * func_52(unsigned short p_53);
static unsigned short func_54(unsigned long long * p_55);
static union U1 * func_58(int * p_59, int ** p_60, char * p_61, unsigned p_62);
static int func_1(void)
{
    unsigned long long l_13 = 3UL;
    short l_23 = 0L;
    unsigned long long *l_24 = &g_25;
    char *l_44 = (void*)0;
    int l_1056 = 0x1BCFB18BL;
    int l_1062 = 8L;
    char *****l_1064 = &g_604;
    const char ** const ****l_1070 = (void*)0;
    const char ** const ****l_1071 = &g_1065;
    unsigned short l_1122 = 0xE67DL;
    union U1 * const *l_1195 = &g_160;
    unsigned char l_1198 = 0xEFL;
    long long l_1200 = 0L;
    long long l_1205 = 0xDBC85C1F0D20C3BALL;
    unsigned long long l_1225 = 0x807679D72526F572LL;
    int ***l_1268 = &g_107;
    if (((func_2(func_6((l_13 = (safe_rshift_func_int16_t_s_s(0x3E86L, g_12))), func_14(((safe_add_func_uint16_t_u_u((g_22 = g_12), 2UL)) != ((*l_24) = l_23)), func_26(func_29(func_32(g_34), l_44), g_12), g_12, l_23, g_70.f0), g_12), g_133, g_161) || l_23) & 6UL))
    {
        return g_218;
    }
    else
    {
        short l_1063 = 0L;
        for (g_43 = 0; (g_43 != (-9)); g_43 = safe_sub_func_int32_t_s_s(g_43, 9))
        {
            unsigned long long l_1055 = 0x609FF910C42DEE3DLL;
            l_1056 = (safe_add_func_int32_t_s_s(l_23, (l_1055 <= g_791)));
        }
        (*g_1050) = ((&l_23 == &l_23) >= 0xDAL);
        for (l_1056 = (-16); (l_1056 > 16); l_1056 = safe_add_func_int64_t_s_s(l_1056, 8))
        {
            unsigned l_1061 = 0x6A178404L;
            for (g_428 = 0; (g_428 > 2); g_428 = safe_add_func_uint8_t_u_u(g_428, 9))
            {
                (*g_107) = (void*)0;
                (*g_1050) = (*g_1050);
                if (l_1061)
                    break;
            }
            (*g_1050) = l_13;
            l_1062 = (*g_1050);
            (*g_1050) = l_1063;
        }
    }
    (*g_107) = &g_41;
    for (g_87 = 21; (g_87 == (-4)); g_87--)
    {
        int *l_1098 = (void*)0;
        unsigned long long *** const l_1106 = &g_135;
        long long *l_1128 = &g_221;
        long long *l_1129 = &g_1130;
        for (g_695 = 5; (g_695 >= 23); g_695 = safe_add_func_int16_t_s_s(g_695, 1))
        {
            (*g_107) = (*g_107);
        }
        for (g_70.f0 = 0; (g_70.f0 != 4); g_70.f0 = safe_add_func_int8_t_s_s(g_70.f0, 7))
        {
            unsigned long long l_1085 = 0UL;
            int *l_1086 = &l_1056;
            const char l_1108 = 0xC7L;
            for (g_12 = 0; (g_12 > 9); g_12 = safe_add_func_uint32_t_u_u(g_12, 6))
            {
                long long l_1082 = 0x1F854CB96A740CBBLL;
                unsigned long long ***l_1107 = &g_135;
                unsigned *l_1116 = &g_22;
                unsigned *l_1117 = &g_105;
                if ((safe_sub_func_int16_t_s_s(l_1082, (0xE254L > l_23))))
                {
                    unsigned *l_1095 = &g_105;
                    (*g_108) = (safe_mod_func_int32_t_s_s((*g_1050), l_1085));
                    (*g_107) = l_1086;
                    (**g_107) = ((((*g_1050) != ((safe_sub_func_uint32_t_u_u(4294967295UL, 0L)) <= (l_1056 || (safe_add_func_int64_t_s_s((4294967295UL != ((**g_1068) >= (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((*g_108), (g_22 = ((*l_1095) = l_1082)))), ((*g_1065) == (void*)0))))), 18446744073709551615UL))))) || 18446744073709551607UL) & 8UL);
                    (*g_108) = (**g_107);
                }
                else
                {
                    int l_1105 = (-9L);
                    for (g_800 = (-25); (g_800 == (-7)); g_800++)
                    {
                        l_1098 = (void*)0;
                        (*g_1050) = (safe_sub_func_int8_t_s_s((*g_1069), (safe_add_func_uint32_t_u_u(g_105, (safe_sub_func_int8_t_s_s(l_1105, (l_1105 > (l_1062 = (l_1106 == l_1107)))))))));
                        (*g_1050) = l_1108;
                    }
                }
                if (l_13)
                {
                    l_1086 = &l_1062;
                    (**g_107) = (**g_107);
                }
                else
                {
                    (*g_107) = (*g_107);
                    (*g_107) = &l_1062;
                    (*g_1050) = ((**g_107) = (*g_108));
                    (*g_1050) = (safe_rshift_func_int8_t_s_u((*****g_1065), (safe_lshift_func_uint16_t_u_u(g_12, 10))));
                }
                (*g_1050) = (((*l_1117) = ((*l_1116) = (safe_mod_func_int16_t_s_s(l_1082, (safe_unary_minus_func_int32_t_s((**g_107))))))) >= 0x1887AD27L);
            }
            if ((*g_1050))
                continue;
            for (g_800 = (-25); (g_800 == (-27)); g_800 = safe_sub_func_uint16_t_u_u(g_800, 9))
            {
                return g_854;
            }
        }
        (*g_108) = (safe_lshift_func_int16_t_s_u(((l_1122 == ((*l_1129) = ((*l_1128) = ((safe_div_func_uint64_t_u_u(0x20AB5E44A3794CD8LL, l_1056)) ^ (safe_unary_minus_func_uint64_t_u((safe_mod_func_int32_t_s_s(((g_12 = g_800) && (g_105 ^ 0x92BAL)), (**g_107))))))))) != func_54((**l_1106))), 15));
    }
    if ((*g_1050))
    {
        unsigned long long l_1135 = 0x8D8758FBD49958C2LL;
        unsigned short *l_1136 = &g_793;
        unsigned long long ***l_1149 = (void*)0;
        unsigned long long ****l_1148 = &l_1149;
        unsigned long long *****l_1150 = &l_1148;
        int l_1153 = (-2L);
        char *l_1183 = &g_800;
        union U1 **l_1194 = &g_160;
        unsigned *l_1196 = &g_22;
        unsigned *l_1197 = &g_105;
        int l_1199 = 0xD90466B0L;
        if ((safe_add_func_int32_t_s_s((safe_add_func_uint64_t_u_u(l_1135, g_800)), 0x883DC847L)))
        {
            return g_221;
        }
        else
        {
            long long l_1165 = 0L;
            char ***l_1176 = &g_863;
            (**g_107) = (safe_rshift_func_uint8_t_u_s((g_89 != 254UL), 6));
            for (l_23 = 0; (l_23 >= 27); l_23 = safe_add_func_uint32_t_u_u(l_23, 8))
            {
                unsigned long long *l_1164 = &g_51;
                int l_1166 = (-1L);
                short *l_1167 = &g_89;
                short *l_1168 = &g_695;
                (*g_1050) = (safe_mod_func_uint64_t_u_u(((*l_24) = ((safe_add_func_int16_t_s_s(func_54((*g_135)), ((*l_1168) = ((*l_1167) = ((safe_div_func_uint16_t_u_u((func_54(l_1164) != ((((((**g_282) != 0x62B4L) && (4L ^ ((***g_281) = l_1165))) | (l_1166 & l_23)) <= l_1166) <= 0x9998C1DB2637CC1BLL)), 0x6018L)) >= l_1166))))) > g_188)), l_13));
                (*g_108) = 0xDCDE734FL;
                for (g_43 = 0; (g_43 != 13); g_43++)
                {
                    for (l_1153 = 2; (l_1153 != (-20)); l_1153 = safe_sub_func_uint64_t_u_u(l_1153, 2))
                    {
                        unsigned *l_1175 = &g_22;
                        int *l_1177 = &g_151;
                        (*g_107) = (*g_107);
                        (*l_1177) = ((*g_108) = (((*l_1175) = (safe_lshift_func_int8_t_s_s((**g_1068), 4))) >= ((void*)0 == l_1176)));
                    }
                    if (l_23)
                        break;
                }
            }
        }
        (*g_1050) = (l_1199 = (safe_rshift_func_int16_t_s_u(((((safe_add_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s(((*l_1183) = l_1135))) | (safe_lshift_func_int8_t_s_s((((*l_1197) = (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((0x5B3F731C69B78873LL && ((safe_lshift_func_int16_t_s_u(l_1153, g_105)) & (**g_107))), (safe_sub_func_uint32_t_u_u((l_1194 != l_1195), ((*l_1196) = (l_1056 && l_1122)))))), l_1153))) < 4294967290UL), l_1153))), l_1153)) > l_1153) <= l_1056) >= l_1198), g_695)));
        (*g_107) = func_52(l_1200);
    }
    else
    {
        char *l_1230 = &g_800;
        int l_1249 = 0x35194F05L;
        if ((*g_108))
        {
            int *l_1201 = (void*)0;
            int *l_1202 = (void*)0;
            int *l_1204 = &l_1062;
            unsigned short *l_1209 = &g_793;
            unsigned short **l_1208 = &l_1209;
            unsigned long long *l_1218 = &g_51;
            (*l_1204) = ((*g_1069) < ((g_1203 = (!((*g_1050) = 1L))) & l_1056));
            (*g_107) = func_52(((*l_1209) = (l_1205 || (safe_div_func_uint8_t_u_u(((void*)0 != l_1208), ((safe_sub_func_int32_t_s_s((0xEAB4L & (safe_mod_func_int16_t_s_s(0x1F99L, (-10L)))), ((*g_1050) = (!(*g_1050))))) | (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_13, 3)), func_54(l_1218)))))))));
        }
        else
        {
            char *l_1220 = &g_43;
            int *l_1226 = &g_151;
            union U1 l_1227 = {0};
            (*g_1050) = (safe_unary_minus_func_int16_t_s((**g_282)));
            for (g_944 = 0; (g_944 == (-7)); g_944 = safe_sub_func_int64_t_s_s(g_944, 6))
            {
                unsigned *l_1231 = &g_105;
                (*g_107) = func_52(g_89);
            }
            for (g_800 = 6; (g_800 > (-21)); g_800 = safe_sub_func_int8_t_s_s(g_800, 3))
            {
                unsigned l_1236 = 18446744073709551615UL;
                if ((safe_rshift_func_uint16_t_u_s(0x037AL, l_1236)))
                {
                    int *l_1237 = &g_151;
                    int **l_1238 = &g_1050;
                    union U0 *l_1239 = &g_70;
                    (*l_1238) = ((*g_107) = l_1237);
                    if (l_1122)
                    {
                        union U0 **l_1240 = &l_1239;
                        (*l_1240) = l_1239;
                        (*g_107) = (*g_107);
                    }
                    else
                    {
                        (*l_1238) = &l_1062;
                        (*g_108) = ((*g_1050) = (*l_1226));
                        (**l_1238) = l_1062;
                    }
                    for (g_22 = 0; (g_22 == 60); g_22 = safe_add_func_int16_t_s_s(g_22, 8))
                    {
                        unsigned char *l_1261 = &g_188;
                        unsigned short *l_1262 = &l_1122;
                        int l_1263 = 0x4701C9A9L;
                        (*l_1226) = (((**g_282) > 0x6413L) && (((safe_add_func_int8_t_s_s((+(safe_add_func_uint16_t_u_u((((*g_283) = l_1249) >= ((void*)0 != g_1250)), 0xC5F1L))), (l_1263 = ((**l_1238) | (safe_sub_func_uint16_t_u_u((***g_1250), (((((((safe_mod_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((*l_1262) = ((((*l_1261) = ((*l_1226) > (*l_1226))) | (*****g_1065)) > (*l_1226))), (**l_1238))) != l_1236), 2)) && 1L) ^ 0L) && (**l_1238)) <= l_1249), l_1236)) || (*l_1226)) >= g_12) | 0x8C9900DEEDDA6282LL) & l_1198) || g_1130) && l_1236))))))) != 0xEE91AA355008A9D8LL) | 0xA14D4CB7F1B71435LL));
                        if ((*l_1226))
                            continue;
                        (*g_1050) = (*g_1050);
                        if ((**g_107))
                            break;
                    }
                }
                else
                {
                    char l_1266 = 0x0EL;
                    unsigned char *l_1267 = &l_1198;
                    (*g_1050) = ((safe_add_func_uint8_t_u_u(0x36L, ((*l_1267) = l_1266))) || (l_1268 != &g_107));
                    if (l_1266)
                        break;
                    (**l_1268) = func_52((*g_1252));
                }
            }
        }
        return g_151;
    }
    return g_887;
}







static int func_2(char * p_3, unsigned short p_4, union U1 p_5)
{
    union U0 * const *l_678 = &g_69;
    int l_683 = (-1L);
    int ***l_690 = &g_107;
    int ****l_691 = &l_690;
    int ** const *l_692 = &g_107;
    short *l_693 = &g_89;
    short *l_694 = &g_695;
    int *l_696 = &g_151;
    unsigned long long *l_699 = &g_51;
    union U1 *l_700 = &g_161;
    char *l_715 = &g_43;
    unsigned *l_717 = &g_105;
    unsigned **l_716 = &l_717;
    union U0 *l_836 = &g_70;
    int **l_960 = &g_108;
    unsigned long long *****l_965 = (void*)0;
    int *l_1000 = &g_151;
    int l_1006 = 0x1F0FF97AL;
    (*l_696) = (65535UL | (safe_div_func_uint8_t_u_u(((&g_69 == l_678) & (((safe_rshift_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(0x272D4C25L, p_4)) == ((((l_683 > g_43) < p_4) < ((*l_694) = (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(((*l_693) = ((**g_282) = (safe_add_func_uint16_t_u_u((((*l_691) = l_690) != l_692), 0x503DL)))), p_4)), g_12)))) | p_4)), 5)) < 9L) < 1L)), l_683)));
    if ((safe_lshift_func_int16_t_s_u((((*l_696) = func_54(l_699)) <= p_4), 6)))
    {
        union U1 **l_701 = &l_700;
        char *l_704 = &g_43;
        char **l_703 = &l_704;
        char ***l_702 = &l_703;
        unsigned long long *l_709 = &g_25;
        short *l_710 = &g_695;
        int l_711 = (-1L);
        (*l_701) = l_700;
        (*l_696) = func_54(func_29(func_32(p_3), p_3));
        (*l_702) = &p_3;
        l_711 = (safe_add_func_int64_t_s_s((safe_add_func_uint64_t_u_u((((*l_704) = 0x13L) & (func_54((*g_135)) >= ((*l_693) = func_54(l_709)))), func_54(l_709))), (l_710 != (void*)0)));
    }
    else
    {
        long long *l_714 = &g_12;
        unsigned **l_718 = &l_717;
        int l_719 = 0xEB39BC6DL;
        char * const l_720 = &g_43;
        union U1 *l_726 = &g_727;
        char *l_756 = (void*)0;
        char *** const *l_828 = &g_242;
        unsigned l_899 = 0x6C4A31D9L;
        unsigned short l_922 = 0x10CBL;
        (*l_696) = ((p_4 == g_41) || (safe_mod_func_uint16_t_u_u(g_105, (*l_696))));
        if (func_54(func_29(&g_43, func_14(((*l_714) = (*l_696)), l_715, (l_716 != l_718), l_719, ((*l_693) = func_54(func_29(func_32(l_720), l_715)))))))
        {
            unsigned long long *l_721 = (void*)0;
            int *l_729 = (void*)0;
            short **l_735 = &l_693;
            const int l_761 = (-1L);
            char **l_766 = (void*)0;
            char ***l_765 = &l_766;
            union U1 **l_775 = &l_700;
            l_719 = (l_719 <= 1L);
            if (func_54(l_721))
            {
                int *l_722 = (void*)0;
                (*g_107) = l_722;
                (**l_690) = (*g_107);
            }
            else
            {
                char **l_723 = &l_715;
                unsigned char *l_736 = &g_188;
                long long *l_741 = &g_221;
                union U1 *l_742 = (void*)0;
                union U1 **l_743 = (void*)0;
                union U1 **l_744 = &l_700;
                unsigned char **l_749 = (void*)0;
                unsigned char **l_750 = &l_736;
                int l_771 = (-1L);
                if ((0xE800AF2DL > (l_723 != (void*)0)))
                {
                    long long **l_725 = &l_714;
                    l_725 = g_724;
                    (**l_692) = &g_151;
                    l_726 = &g_161;
                    (***l_692) = (-6L);
                }
                else
                {
                    unsigned short *l_728 = &g_428;
                    int **l_730 = &l_729;
                    (*l_730) = ((**l_690) = l_729);
                }
                (*l_696) = (g_70.f0 || (+(!((safe_sub_func_int16_t_s_s((((1UL & p_4) ^ (safe_mod_func_uint8_t_u_u(((*l_736) = (l_735 != (*g_281))), l_719))) >= p_4), (safe_add_func_int8_t_s_s((0x96L && (safe_lshift_func_int16_t_s_u(((l_714 = func_29(func_32((*l_723)), p_3)) != l_741), p_4))), (-2L))))) >= l_719))));
                (*l_744) = l_742;
                if (((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(p_4, l_719)), ((0x5AE7L & (((*l_750) = (void*)0) != (void*)0)) < p_4))) ^ (safe_div_func_uint8_t_u_u(g_12, func_54(((*g_135) = (void*)0))))))
                {
                    char *l_755 = &g_43;
                    int *l_762 = &g_41;
                    (*l_696) = ((void*)0 != &l_693);
                    (**l_690) = func_52((p_4 = (((*l_699) = p_4) | (safe_sub_func_int16_t_s_s(p_4, (***g_281))))));
                    (*l_696) = func_54(func_29(l_755, ((*l_723) = l_756)));
                    if ((0x7C65D6733D27840CLL > func_54(l_741)))
                    {
                        (**l_692) = &l_719;
                        (*g_108) = (safe_rshift_func_uint8_t_u_u(((((((func_54(func_29(p_3, l_715)) & (g_22 > ((safe_add_func_uint16_t_u_u(func_54(l_721), (p_4 > func_54((*g_135))))) ^ (**g_107)))) == g_133) == 1L) <= g_695) || 65535UL) ^ l_761), 4));
                        l_762 = ((**l_690) = func_52((***l_690)));
                    }
                    else
                    {
                        unsigned l_774 = 18446744073709551608UL;
                        (*g_107) = func_52(p_4);
                        (*l_696) = ((*l_696) || (p_4 && (l_774 = ((safe_sub_func_int32_t_s_s(((g_428 = ((void*)0 == l_765)) != ((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s(((*l_720) = l_771), func_54(((*g_135) = l_721)))), (safe_add_func_int16_t_s_s(func_54(l_699), 65534UL)))) || p_4)), (*l_762))) ^ 0UL))));
                        (**l_692) = (*g_107);
                    }
                }
                else
                {
                    return p_4;
                }
            }
            l_775 = &l_700;
            g_151 = 0x05A8AE78L;
        }
        else
        {
            unsigned short l_780 = 65529UL;
            unsigned char *l_783 = &g_188;
            (*l_696) = (((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_719, (func_54(l_714) || (((*l_783) = ((((*l_699) = 0xE20A448BCF3B11F8LL) && (0x079B011FA0658846LL <= (+(l_780 | (0x913EEC6727392E13LL != (safe_div_func_int32_t_s_s((l_714 != l_699), g_221))))))) && 0x0CBDE4621F2FAC78LL)) & 8L)))), p_4)) ^ (*l_696)) && l_719);
            (*l_696) = l_780;
            return p_4;
        }
        if (l_719)
        {
            unsigned short *l_788 = (void*)0;
            unsigned short *l_789 = &g_428;
            unsigned short *l_790 = &g_791;
            unsigned short *l_792 = &g_793;
            unsigned long long ***l_796 = &g_135;
            unsigned long long ***l_798 = &g_135;
            unsigned long long ****l_797 = &l_798;
            char *l_799 = &g_800;
            int l_801 = 0xDEDC6362L;
            int l_802 = 0x3D10D6EDL;
            short l_809 = 0x15EBL;
            int *l_810 = &l_801;
            int **l_811 = &l_696;
            (*l_696) = (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((+((*l_790) = ((*l_789) = g_43))), ((*l_792) = ((*l_696) <= p_4)))) ^ ((safe_sub_func_int64_t_s_s((0xF4462B49L || ((l_719 = (l_796 != ((*l_797) = l_796))) || (((*l_799) = (*l_696)) != (l_801 = (-1L))))), (0x455BL == p_4))) | 0x398D60BEL)), l_802));
            (*l_696) = (-10L);
            (**l_690) = func_52(func_54((***l_797)));
            (*l_811) = (l_810 = func_52(((safe_div_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((g_70.f0 <= (((safe_div_func_int64_t_s_s(((*l_714) = 0L), (((g_428 <= (((*l_690) = &g_108) == &g_108)) && 0L) ^ l_719))) <= l_809) & p_4)), p_4)), (**g_282))) < 0x8AAEEE25L)));
        }
        else
        {
            return p_4;
        }
        if (p_4)
        {
            int l_818 = 0x67D870B0L;
            int l_825 = 0x00A836DAL;
            unsigned long long *l_878 = &g_51;
            unsigned char l_880 = 0x6CL;
            long long l_886 = 1L;
            for (g_51 = 0; (g_51 > 59); g_51 = safe_add_func_uint32_t_u_u(g_51, 1))
            {
                return p_4;
            }
            for (g_188 = 0; (g_188 <= 57); g_188 = safe_add_func_int64_t_s_s(g_188, 8))
            {
                unsigned long long *l_823 = (void*)0;
                int *l_824 = &l_683;
                char *** const **l_829 = &l_828;
                char *****l_830 = &g_604;
                const union U1 *l_846 = &g_161;
                const union U1 **l_845 = &l_846;
                l_825 = ((((l_818 & g_428) >= g_43) || ((*l_824) = (((void*)0 != &g_69) < (safe_div_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(0xB99DCBD1F45CB97ELL, func_54(l_823))), l_719))))) && 0x1A48L);
                if (p_4)
                    break;
                if (p_4)
                    continue;
                if ((((((safe_lshift_func_int16_t_s_s((-3L), (func_54((*g_135)) == ((void*)0 != &g_546)))) >= p_4) < (((*l_829) = l_828) != ((*l_830) = (void*)0))) ^ ((*l_720) = (l_825 = (func_54(func_29(l_715, &g_800)) <= 5L)))) | l_719))
                {
                    if ((safe_lshift_func_int8_t_s_s(l_719, (g_791 && g_793))))
                    {
                        union U0 *l_833 = &g_70;
                        union U0 **l_834 = &g_69;
                        union U0 **l_835 = (void*)0;
                        int l_837 = (-6L);
                        unsigned long long *l_838 = &g_51;
                        union U1 **l_844 = (void*)0;
                        union U1 ***l_843 = &l_844;
                        const union U1 ***l_847 = &l_845;
                        l_836 = ((*l_834) = l_833);
                        (*l_824) = ((l_837 > func_54(l_838)) >= ((safe_rshift_func_int16_t_s_s((l_825 = ((**g_282) = (***g_281))), (safe_rshift_func_uint8_t_u_s(l_837, 4)))) & (((*l_843) = &g_160) != ((*l_847) = l_845))));
                    }
                    else
                    {
                        long long *l_855 = (void*)0;
                        long long *l_856 = &g_221;
                        char **l_862 = (void*)0;
                        char ***l_861 = &l_862;
                        char ***l_865 = &g_863;
                        int l_866 = (-10L);
                        (*l_824) = (safe_mod_func_uint16_t_u_u((((*l_856) = ((*l_714) = ((((**l_718) = ((func_54((*g_135)) | (-1L)) && (~(0xE6D68A1BL & (g_793 || 0x49L))))) | (safe_add_func_int64_t_s_s(0xF53D96E772F3344FLL, (safe_rshift_func_uint8_t_u_u(255UL, g_854))))) >= 0x98L))) & p_4), 0x9792L));
                        (*l_824) = (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((**g_282), (((*l_861) = &p_3) != ((*l_865) = g_863)))), ((*l_694) = l_866)));
                        (*l_824) = p_4;
                    }
                    for (l_683 = 0; (l_683 < 27); l_683 = safe_add_func_int32_t_s_s(l_683, 4))
                    {
                        return p_4;
                    }
                    return p_4;
                }
                else
                {
                    unsigned char l_877 = 0xA5L;
                    int l_879 = (-10L);
                    char *l_888 = (void*)0;
                    for (g_695 = 0; (g_695 > (-5)); g_695 = safe_sub_func_int16_t_s_s(g_695, 4))
                    {
                        const char *l_885 = &g_43;
                        const char **l_884 = &l_885;
                        const char ***l_883 = &l_884;
                        (*g_107) = &l_719;
                        (**g_107) = (**g_107);
                        (*l_824) = ((((safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_uint16_t_u_u((0xC69667A9E7B15D6ELL != (*l_824)), p_4)))) || (safe_mod_func_uint8_t_u_u((!(l_877 == (func_54(l_878) >= ((((*g_108) = ((func_54(l_699) & l_879) > 0x3AF66650L)) < g_793) & g_793)))), l_877))) > l_880) > 65535UL);
                        (***l_692) = (0UL <= (safe_sub_func_int8_t_s_s((****l_691), (l_883 != (void*)0))));
                    }
                    if (l_886)
                        break;
                    g_887 = p_4;
                    if (func_54(func_29(l_888, p_3)))
                    {
                        l_825 = (~l_719);
                        (**l_690) = &l_719;
                        (*l_824) = ((((***l_692) = (p_4 == p_4)) >= ((p_3 == (void*)0) ^ 0x4958A051L)) && (-5L));
                        if ((*g_108))
                            break;
                    }
                    else
                    {
                        (*l_824) = (safe_rshift_func_uint16_t_u_u(g_51, 10));
                        g_41 = ((*l_824) = p_4);
                    }
                }
            }
            l_719 = (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u(((*l_717) = (safe_lshift_func_int8_t_s_u(l_825, 0))), l_719)), (0xFF6868FFL || (p_4 ^ (safe_lshift_func_uint8_t_u_s(0x66L, 3))))));
        }
        else
        {
            unsigned long long *l_915 = &g_25;
            int l_916 = 0xD7809B6FL;
            char *l_961 = &g_944;
            const union U1 **l_973 = (void*)0;
            const union U1 *l_975 = &g_976;
            const union U1 **l_974 = &l_975;
            if (l_899)
            {
                int *l_902 = &g_41;
                long long **l_910 = &l_714;
                union U0 **l_937 = &g_69;
                (*l_902) = (safe_sub_func_int32_t_s_s(p_4, 4294967289UL));
                for (g_887 = 0; (g_887 > (-10)); g_887--)
                {
                    unsigned char *l_905 = &g_188;
                    int *l_917 = &g_151;
                    if ((((*l_905) = g_221) ^ g_105))
                    {
                        long long ** const l_911 = &l_714;
                        int l_912 = 8L;
                        (*g_107) = l_902;
                        (*g_107) = (*g_107);
                    }
                    else
                    {
                        long long ***l_918 = (void*)0;
                        long long ***l_919 = (void*)0;
                        long long ***l_920 = (void*)0;
                        long long **l_921 = &l_714;
                        (**l_692) = l_917;
                        l_921 = (void*)0;
                    }
                    (*g_107) = func_52(l_922);
                    for (g_43 = 0; (g_43 >= 11); ++g_43)
                    {
                        unsigned short *l_935 = (void*)0;
                        int l_936 = 0x39095BCCL;
                        (*g_107) = l_917;
                        (*l_917) = (l_916 || ((l_936 = ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u((safe_add_func_int16_t_s_s((-3L), ((p_4 == (-1L)) > p_4))), (((*l_917) & g_887) ^ g_51))) && ((safe_rshift_func_int16_t_s_s(((p_4 <= 0x8EA4C94A053A0062LL) > p_4), (**g_282))) || 4294967294UL)), l_916)), l_916)) == p_4)) >= 0x4D2BL));
                    }
                }
                (*l_937) = &g_70;
                (***l_691) = &l_719;
            }
            else
            {
                unsigned char l_938 = 0xF3L;
                unsigned char l_943 = 0xF1L;
                unsigned long long *l_971 = &g_51;
                if ((l_938 = l_922))
                {
                    for (l_938 = (-12); (l_938 <= 54); l_938 = safe_add_func_uint32_t_u_u(l_938, 6))
                    {
                        unsigned char *l_951 = &l_943;
                        unsigned short *l_952 = (void*)0;
                        unsigned short *l_953 = (void*)0;
                        unsigned short *l_954 = &l_922;
                        unsigned short *l_955 = &g_793;
                        g_41 = (6L || (0xA9F080F7282918FALL && (safe_add_func_uint64_t_u_u((0x7505CDDE873C77DDLL && l_943), g_944))));
                        l_719 = (p_4 || p_4);
                        l_916 = (safe_lshift_func_uint16_t_u_u(((*l_954) = (safe_rshift_func_uint8_t_u_u((((*l_951) = (safe_lshift_func_int16_t_s_u((***g_281), 7))) & (8L == l_938)), (p_4 || (g_791 != 0UL))))), ((*l_955) = 0xFCE1L)));
                    }
                }
                else
                {
                    unsigned long long *l_956 = &g_25;
                    int *l_957 = (void*)0;
                    int *l_958 = &l_916;
                    int **l_959 = &l_958;
                    union U1 **l_962 = &l_700;
                    (*l_958) = func_54(l_956);
                    if ((((*l_962) = &p_5) == (void*)0))
                    {
                        unsigned char l_966 = 5UL;
                        (*g_107) = ((*l_959) = &g_151);
                        (**l_690) = &l_719;
                        (****l_691) = (safe_add_func_int64_t_s_s((***l_690), (((void*)0 != l_965) == 0x8915L)));
                        l_966 = ((**g_107) = l_916);
                    }
                    else
                    {
                        long long **l_972 = &l_714;
                        (**l_959) = (safe_sub_func_int64_t_s_s((g_791 < ((safe_rshift_func_uint16_t_u_s(func_54(l_971), 5)) == ((void*)0 != &l_916))), p_4));
                        (**l_692) = &l_916;
                        g_724 = l_972;
                    }
                }
            }
            l_719 = (((*l_974) = &g_161) != (void*)0);
            l_719 = 0xEB0FD35BL;
            l_719 = (safe_lshift_func_uint8_t_u_s((0x556F10965E4A2F18LL & p_4), 0));
        }
    }
    if (p_4)
    {
        unsigned short *l_980 = (void*)0;
        unsigned short **l_979 = &l_980;
        unsigned short ***l_981 = &l_979;
        unsigned short **l_983 = &l_980;
        unsigned short ***l_982 = &l_983;
        int l_995 = 0L;
        char l_999 = 0x17L;
        char *** const *l_1011 = &g_242;
        char *** const **l_1010 = &l_1011;
        const union U0 *l_1031 = &g_70;
        (*l_982) = ((*l_981) = l_979);
        for (g_791 = (-24); (g_791 > 46); g_791 = safe_add_func_uint16_t_u_u(g_791, 7))
        {
            unsigned char l_988 = 0x4CL;
            unsigned long long *l_996 = &g_25;
            int *l_1001 = &l_995;
            char *l_1002 = &g_944;
            unsigned l_1026 = 0x08AAB262L;
            char *l_1028 = &l_999;
            if (((safe_mod_func_uint16_t_u_u(((l_988 >= ((-6L) > p_4)) != ((*l_996) = (2UL <= (!(p_4 | (func_54((*g_135)) || ((*l_699) = (((safe_add_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(1UL, (safe_mod_func_uint64_t_u_u((func_54((*g_135)) & l_995), p_4)))), p_4)) == l_988) >= (*g_283))))))))), p_4)) != 1L))
            {
                unsigned char l_998 = 4UL;
                if ((safe_unary_minus_func_int8_t_s(l_998)))
                {
                    (***l_691) = &l_995;
                }
                else
                {
                    l_999 = l_988;
                }
                (*l_960) = l_1000;
                (*g_107) = l_1001;
            }
            else
            {
                unsigned char l_1003 = 1UL;
                char l_1007 = (-2L);
                char *** const ***l_1013 = (void*)0;
                char *** const **l_1015 = &l_1011;
                char *** const ***l_1014 = &l_1015;
                int l_1027 = 1L;
                char *l_1029 = &g_944;
                int *l_1032 = &l_1027;
                unsigned short *l_1033 = &g_793;
                l_1007 = (((*l_693) = (0xB0C9L < func_54(func_29(l_1002, l_715)))) == (p_4 = (((l_1003 <= (safe_mod_func_int8_t_s_s((*l_1000), l_1003))) || (((*l_996) = l_1006) & l_1003)) & (**g_282))));
                (**l_690) = l_1001;
                if ((func_54(func_29(l_715, l_1029)) & (*l_1000)))
                {
                    (*l_960) = &l_1027;
                    (***l_691) = func_52(l_995);
                }
                else
                {
                    union U0 **l_1030 = &g_69;
                    l_1032 = func_52((((*l_1030) = &g_70) == l_1031));
                    (*l_1000) = ((void*)0 != l_1033);
                }
                if (g_12)
                    break;
            }
        }
    }
    else
    {
        unsigned long long *l_1038 = (void*)0;
        int l_1045 = 0x0A3FACDAL;
        long long *l_1048 = (void*)0;
        long long *l_1049 = &g_87;
        (*l_1000) = ((18446744073709551615UL <= (((safe_sub_func_int64_t_s_s(func_54(l_1038), (safe_sub_func_uint8_t_u_u(8UL, func_54(l_1038))))) & (safe_mod_func_int32_t_s_s(p_4, (safe_mod_func_uint8_t_u_u((l_1045 && ((*l_1049) = ((safe_div_func_uint64_t_u_u(p_4, p_4)) < 2L))), 0xF0L))))) >= 8L)) != p_4);
        g_1050 = ((***l_691) = &g_41);
    }
    return p_4;
}







static char * func_6(short p_7, char * p_8, short p_9)
{
    int *l_643 = &g_151;
    unsigned long long *l_656 = &g_51;
    int *l_674 = (void*)0;
    int **l_673 = &l_674;
    char *l_675 = &g_43;
    if (((*l_643) = (0xB5L < p_7)))
    {
        unsigned short l_644 = 1UL;
        int l_645 = (-1L);
        long long *l_657 = &g_87;
        int *l_658 = &g_151;
        (*l_643) = ((l_644 != ((l_645 = func_54(((*g_135) = (void*)0))) & p_9)) || (g_133 && (p_9 == ((*l_643) <= (safe_sub_func_int64_t_s_s(((*l_657) = (safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((**g_282) = func_54(l_656)), (*l_643))) > g_41), g_70.f0)), (*l_643)))), (*l_643)))))));
        l_658 = l_643;
    }
    else
    {
        int **l_669 = &l_643;
        (**l_669) = (safe_div_func_int32_t_s_s((((*l_656) = (((0xF51BD3FEL == p_7) && (-6L)) <= (*l_643))) | (p_9 != (safe_lshift_func_int16_t_s_u((1L & (safe_div_func_uint8_t_u_u(g_41, (safe_sub_func_uint64_t_u_u(((p_9 != ((safe_rshift_func_uint16_t_u_u(((((&l_643 == l_669) < (**l_669)) && (**l_669)) < (-2L)), 0)) | 1L)) && g_70.f0), p_7))))), 11)))), 9UL));
    }
    for (g_87 = 0; (g_87 >= (-26)); g_87 = safe_sub_func_int16_t_s_s(g_87, 5))
    {
        char *l_672 = (void*)0;
        return l_672;
    }
    (*l_673) = (l_643 = ((*g_107) = l_643));
    return l_675;
}







static char * func_14(long long p_15, char * p_16, unsigned p_17, unsigned p_18, short p_19)
{
    unsigned l_535 = 2UL;
    unsigned long long *l_538 = &g_51;
    char l_539 = 0xF7L;
    int l_543 = 0xB64EEE70L;
    int *l_548 = (void*)0;
    const unsigned long long *l_557 = &g_25;
    const unsigned long long **l_556 = &l_557;
    const unsigned long long ***l_555 = &l_556;
    const unsigned long long ****l_554 = &l_555;
    unsigned long long ***l_559 = &g_135;
    unsigned long long ****l_558 = &l_559;
    unsigned long long *****l_560 = &l_558;
    char *l_561 = &l_539;
    unsigned *l_562 = &l_535;
    char **l_600 = &l_561;
    char ***l_599 = &l_600;
    unsigned *l_638 = &l_535;
    unsigned **l_637 = &l_638;
    unsigned *l_640 = (void*)0;
    unsigned **l_639 = &l_640;
    unsigned short *l_641 = &g_428;
    int *l_642 = &g_41;
    if (l_535)
    {
        char * const l_540 = &l_539;
        char *l_542 = &l_539;
        char **l_541 = &l_542;
        int l_547 = (-1L);
        l_543 = ((func_54(l_538) < (l_539 && 0L)) & func_54(func_29(func_32(l_540), ((*l_541) = p_16))));
        l_547 = (g_218 | ((safe_lshift_func_int16_t_s_u((**g_282), 15)) | (0xC2D3C92CB7200876LL || ((void*)0 == g_546))));
        (*g_107) = l_548;
    }
    else
    {
        int *l_549 = (void*)0;
        (*g_107) = l_549;
    }
    (*g_107) = func_52((((!(safe_lshift_func_uint16_t_u_s(func_54(func_29(&g_43, &l_539)), p_15))) ^ p_19) || g_41));
    if (((**g_281) == &p_19))
    {
        int *l_566 = (void*)0;
        for (p_19 = (-21); (p_19 != 0); ++p_19)
        {
            int *l_565 = &g_151;
            (*g_107) = func_52(g_51);
            (*g_107) = l_565;
            (*g_107) = l_566;
            if (g_43)
                continue;
        }
    }
    else
    {
        int l_569 = 0L;
        int *l_581 = &g_41;
        for (p_18 = 0; (p_18 < 8); p_18++)
        {
            int *l_576 = &g_41;
            union U0 *l_586 = &g_70;
            char *l_592 = &l_539;
            char l_595 = 5L;
            char **l_597 = &l_592;
            char ***l_596 = &l_597;
            union U0 *l_601 = &g_70;
            if (l_569)
            {
                for (g_428 = 9; (g_428 <= 4); g_428 = safe_sub_func_int64_t_s_s(g_428, 7))
                {
                    for (p_15 = 0; (p_15 <= 19); p_15 = safe_add_func_int32_t_s_s(p_15, 1))
                    {
                        if (p_15)
                            break;
                    }
                    for (g_41 = 0; (g_41 >= (-6)); g_41 = safe_sub_func_uint32_t_u_u(g_41, 9))
                    {
                        int *l_577 = (void*)0;
                        int *l_578 = &g_151;
                        (*g_107) = l_576;
                        (*l_578) = 0x144EE5FFL;
                        if ((*l_576))
                            continue;
                    }
                }
            }
            else
            {
                int **l_579 = &l_576;
                int l_580 = (-5L);
                char ****l_598 = &g_242;
                union U0 *l_602 = &g_70;
                unsigned long long *l_605 = &g_25;
                (*l_579) = ((*g_107) = (*g_107));
                l_580 = g_87;
                if (p_15)
                {
                    return &g_43;
                }
                else
                {
                    int l_582 = 0x28FB1EA3L;
                    union U0 *l_587 = &g_70;
                    unsigned long long *l_588 = &g_25;
                    (*g_107) = l_581;
                    if (((void*)0 == (*g_135)))
                    {
                        (*g_108) = (-1L);
                    }
                    else
                    {
                        (**g_107) = (p_19 >= l_582);
                    }
                    if (p_18)
                    {
                        union U0 **l_585 = &g_69;
                        (**g_107) = (l_580 <= (func_54((*g_135)) > (((*l_585) = &g_70) == l_586)));
                        (*l_585) = l_587;
                        (*g_108) = 0x40BDCB24L;
                    }
                    else
                    {
                        const char l_589 = 0L;
                        (**g_107) = p_19;
                        l_580 = ((*g_108) = (func_54(l_588) <= l_589));
                    }
                    for (g_221 = (-13); (g_221 <= (-15)); g_221--)
                    {
                        if (p_18)
                            break;
                        if ((*l_581))
                            continue;
                        return p_16;
                    }
                }
                if ((g_105 < (((safe_mod_func_uint8_t_u_u(g_151, p_15)) < (l_595 >= (p_15 != (((*l_598) = l_596) == l_599)))) || 0xB3AF85561B8B1E9ELL)))
                {
                    l_602 = l_601;
                    l_576 = (*g_107);
                    (*l_599) = (void*)0;
                }
                else
                {
                    int *l_603 = &g_151;
                    unsigned long long *l_608 = &g_25;
                    if (((*l_581) = (&g_546 == &l_554)))
                    {
                        (**g_107) = (**g_107);
                        (*g_107) = l_603;
                        (*g_108) = ((((g_604 = &g_242) != (void*)0) > func_54(((***l_558) = (***l_558)))) < func_54(l_605));
                    }
                    else
                    {
                        (*l_581) = (safe_lshift_func_int16_t_s_u(func_54(l_608), func_54(func_29((**g_242), func_32(p_16)))));
                    }
                    (*g_107) = l_581;
                    if ((**g_107))
                    {
                        if ((*l_581))
                            break;
                        l_580 = ((0xFE056F2A60F1C107LL >= ((-8L) ^ (safe_rshift_func_int8_t_s_s((****g_604), 6)))) < ((****g_604) | p_15));
                        (**g_107) = (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(0UL, 9)) <= g_218), p_17));
                    }
                    else
                    {
                        unsigned long long **l_617 = (void*)0;
                        unsigned long long **l_618 = (void*)0;
                        unsigned long long **l_619 = (void*)0;
                        unsigned long long **l_620 = &l_608;
                        unsigned long long *l_625 = &g_25;
                        int l_626 = 0xFC670354L;
                        int l_627 = 0x38D5244CL;
                        unsigned l_628 = 0x49389C57L;
                        if ((*l_581))
                            break;
                        l_628 = ((g_428 = (safe_sub_func_int32_t_s_s(((*l_581) = (*g_108)), func_54(((*l_620) = ((****l_560) = l_608)))))) & (((l_626 = (safe_add_func_uint32_t_u_u((*l_603), (safe_sub_func_int8_t_s_s(((((((**g_282) = 0x00C2L) == func_54(l_625)) & (0xB38FL | func_54(l_605))) ^ 0x1CBB78CDL) > 0x82659F86L), p_19))))) && 0x6D86F12B3CD86116LL) ^ l_627));
                    }
                    for (g_188 = 0; (g_188 == 45); g_188 = safe_add_func_int16_t_s_s(g_188, 4))
                    {
                        int *l_631 = (void*)0;
                        char **l_634 = &l_561;
                        (*g_107) = ((*l_579) = l_631);
                        (*l_581) = (safe_rshift_func_uint16_t_u_u(func_54(func_29(func_32(((*l_634) = func_32(p_16))), p_16)), 3));
                    }
                }
            }
        }
        (*g_107) = &l_543;
    }
    (*l_642) = (((*l_641) = (safe_sub_func_int8_t_s_s(((+(((*l_637) = (l_562 = &l_535)) != ((*l_639) = &g_105))) < func_54((**l_559))), ((void*)0 == (*g_135))))) && g_428);
    return p_16;
}







static char * func_26(unsigned long long * p_27, unsigned p_28)
{
    int **l_228 = (void*)0;
    int *l_230 = &g_151;
    int **l_229 = &l_230;
    char *l_231 = (void*)0;
    int l_250 = 0xD8A1F484L;
    char l_252 = (-1L);
    char l_259 = 0x14L;
    unsigned long long *l_314 = &g_51;
    int l_344 = 0x4529B8D9L;
    union U1 *l_357 = &g_161;
    short **l_377 = &g_283;
    union U0 * const l_393 = &g_70;
    long long l_436 = 0L;
    int **l_437 = &g_108;
    unsigned short l_499 = 65532UL;
    (*l_229) = ((*g_107) = func_52((+func_54(p_27))));
    if (func_54(func_29(&g_43, l_231)))
    {
        char * const l_232 = &g_43;
        char *l_233 = &g_43;
        long long l_234 = 0xBFB3928AAD06F1CBLL;
        int **l_235 = &l_230;
        int l_248 = 0xEDE46C11L;
        short l_255 = 0L;
        char *l_256 = &g_43;
        (*g_107) = func_52(func_54(func_29(func_32(l_232), l_233)));
        if (l_234)
        {
            char **l_237 = (void*)0;
            char ***l_236 = &l_237;
            char ****l_243 = &g_242;
            int l_246 = 0x91D4E822L;
            int *l_247 = &l_246;
            unsigned char *l_249 = &g_188;
            l_228 = l_235;
            (*l_236) = &l_233;
            g_151 = (l_250 = (((*l_249) = (safe_mod_func_int8_t_s_s(((p_28 >= 0UL) || ((((((*l_243) = g_242) != (void*)0) != g_89) ^ g_221) ^ (((*l_247) = (g_188 & (safe_lshift_func_int8_t_s_u((func_54(((*g_135) = (*g_135))) & p_28), l_246)))) > l_248))), p_28))) >= 0x55L));
        }
        else
        {
            char *l_251 = &g_43;
            return l_251;
        }
        if (func_54(func_29(l_231, l_231)))
        {
            (*l_235) = func_52((g_188 > func_54(((*g_135) = p_27))));
        }
        else
        {
            unsigned *l_253 = (void*)0;
            unsigned *l_254 = &g_105;
            l_255 = (l_252 != ((*l_254) = func_54(p_27)));
            (*l_235) = (void*)0;
            return l_256;
        }
    }
    else
    {
        int *l_257 = &g_41;
        char *l_273 = &l_259;
        short ***l_285 = &g_282;
        union U1 *l_291 = &g_161;
        unsigned long long *l_315 = &g_51;
        unsigned long long l_342 = 1UL;
        long long l_343 = (-5L);
        int l_381 = 4L;
        unsigned long long *l_386 = &l_342;
        if (((*l_257) = func_54((*g_135))))
        {
            unsigned l_258 = 0UL;
            int *l_299 = &g_41;
            char *l_301 = (void*)0;
            union U1 *l_316 = &g_161;
            int *l_345 = (void*)0;
            unsigned long long *l_360 = &g_51;
            short *l_378 = (void*)0;
            l_258 = p_28;
            if (((*l_257) = (l_259 || (safe_lshift_func_int16_t_s_u(p_28, 5)))))
            {
                unsigned long long l_271 = 18446744073709551609UL;
                int **l_289 = &l_230;
                char *l_290 = &l_252;
                for (l_250 = 4; (l_250 > (-22)); --l_250)
                {
                    unsigned char *l_268 = &g_188;
                    const int l_278 = (-1L);
                    union U1 **l_292 = (void*)0;
                    union U1 **l_293 = &l_291;
                    if ((safe_add_func_int32_t_s_s((+((*l_257) = (safe_rshift_func_uint8_t_u_s(g_87, ((((*l_268) = 4UL) | g_151) <= ((safe_sub_func_int32_t_s_s(func_54(func_29(&l_252, &g_43)), func_54(p_27))) != g_70.f0)))))), p_28)))
                    {
                        int *l_272 = (void*)0;
                        (*l_257) = l_271;
                        (*l_229) = l_272;
                        (*l_257) = func_54((p_27 = ((*g_135) = func_29(&g_43, (l_273 = (void*)0)))));
                        return l_273;
                    }
                    else
                    {
                        short ****l_284 = &g_281;
                        int l_286 = 0L;
                        char **l_288 = &l_231;
                        char ***l_287 = &l_288;
                        (*l_229) = (*l_229);
                        (*l_257) = (safe_div_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(((0x25L ^ (l_278 && ((func_54((*g_135)) ^ ((((safe_div_func_uint32_t_u_u(((((*l_284) = g_281) == l_285) != (g_43 <= l_271)), func_54(p_27))) & g_43) && l_286) > g_151)) != l_258))) ^ p_28), 7)) && 0xF2C4L), p_28));
                        (*l_287) = &l_231;
                        (*g_107) = (*g_107);
                    }
                    (*l_293) = l_291;
                }
            }
            else
            {
                char *l_300 = &l_252;
                for (g_188 = 0; (g_188 < 28); g_188 = safe_add_func_int32_t_s_s(g_188, 1))
                {
                    int *l_298 = &g_41;
                    for (g_87 = 0; (g_87 >= 11); g_87++)
                    {
                        l_299 = l_298;
                        return l_301;
                    }
                }
                (*g_107) = ((*l_229) = (void*)0);
            }
            if ((((safe_lshift_func_uint8_t_u_u(g_41, (safe_add_func_int16_t_s_s(p_28, (safe_mod_func_uint8_t_u_u((+6UL), (safe_add_func_uint8_t_u_u((safe_div_func_int16_t_s_s((func_54((*g_135)) <= 0x3AEA3B36L), (safe_lshift_func_uint16_t_u_u((p_28 | (p_28 || func_54(l_314))), g_87)))), 252UL)))))))) ^ 2UL) | (*l_299)))
            {
                (*g_107) = l_299;
                (*l_257) = 1L;
                (**g_107) = (0xE7D6L && (func_54(l_315) != (((l_316 == (void*)0) >= (!(*l_257))) != p_28)));
            }
            else
            {
                const int l_323 = 0x21FCF262L;
                long long *l_330 = (void*)0;
                long long *l_331 = (void*)0;
                long long *l_332 = &g_87;
                int l_333 = 0x1684F62FL;
                (*l_229) = func_52((safe_add_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u(((((safe_div_func_int8_t_s_s(l_323, (safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((*p_27) = (((safe_sub_func_int64_t_s_s((l_333 = ((*l_332) = 4L)), (safe_sub_func_uint16_t_u_u(g_51, (-9L))))) && ((p_28 || (g_188 == (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s(p_28, g_43)) < ((&g_107 != (void*)0) ^ l_323)), l_323)), 8L)))) >= l_342)) ^ p_28)) ^ (*l_299)), p_28)), p_28)))) & 0x372BL) != 0x875687A54EA3B1FCLL) != (*l_299)), l_343)) | 0xBFF6L) != (*l_299)), l_344)));
                (*l_257) = ((l_345 == (void*)0) != (safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((func_54((*g_135)) & l_333) || ((+(*l_257)) < (p_28 != func_54(l_314)))) < 7L), l_323)), 0xF203L)), p_28)));
                return &g_43;
            }
            for (g_188 = (-29); (g_188 <= 44); g_188++)
            {
                union U1 *l_356 = &g_161;
                union U1 **l_358 = (void*)0;
                union U1 **l_359 = &g_160;
                short *l_363 = &g_218;
                int l_367 = 4L;
                (*l_229) = (*g_107);
                (*l_299) = (l_356 != ((*l_359) = l_357));
                (*l_299) = func_54(l_360);
                for (g_89 = 22; (g_89 == 28); ++g_89)
                {
                    union U0 *l_364 = &g_70;
                    if (((void*)0 != l_363))
                    {
                        union U0 *l_365 = &g_70;
                        union U0 **l_366 = &g_69;
                        short **l_376 = &g_283;
                        (*l_366) = (l_365 = l_364);
                        (**l_229) = l_367;
                        (**l_229) = (safe_add_func_uint32_t_u_u((((-1L) && (safe_rshift_func_int16_t_s_u(p_28, ((-7L) < ((safe_div_func_int64_t_s_s(p_28, ((safe_lshift_func_int8_t_s_u((l_376 != l_377), 1)) & (-1L)))) ^ p_28))))) & (0L <= p_28)), l_367));
                    }
                    else
                    {
                        (**g_107) = (l_378 == (void*)0);
                    }
                }
            }
        }
        else
        {
            unsigned short l_379 = 0xE142L;
            int *l_380 = &l_250;
            (*l_229) = l_257;
            (*g_107) = (void*)0;
            l_381 = ((*l_380) = ((*l_257) = l_379));
        }
        (*l_257) = p_28;
        if (((func_54((*g_135)) < p_28) | (safe_add_func_int64_t_s_s((-4L), (!((*l_386) = (1L <= (safe_rshift_func_int8_t_s_s(0x6DL, 0)))))))))
        {
            unsigned *l_389 = &g_105;
            char *l_390 = &l_259;
            (*g_107) = func_52(p_28);
            (*l_257) = (((void*)0 != l_357) > (((safe_lshift_func_int8_t_s_s((((((0xE7D1L | 0x132AL) ^ 8UL) ^ func_54((*g_135))) || (((((*l_389) = (&l_231 == (void*)0)) <= g_133) > (***g_281)) ^ 0xADBFL)) <= (*l_257)), 7)) || 9UL) >= (*p_27)));
            return &g_43;
        }
        else
        {
            for (g_87 = 0; (g_87 >= 26); ++g_87)
            {
                union U0 **l_394 = &g_69;
                (*g_107) = (*l_229);
                (*l_394) = l_393;
            }
            l_257 = func_52(g_12);
            for (l_259 = 0; (l_259 >= (-21)); l_259 = safe_sub_func_uint16_t_u_u(l_259, 7))
            {
                union U0 **l_397 = &g_69;
                (*l_397) = &g_70;
                (*g_107) = &g_41;
            }
        }
    }
    for (l_252 = 0; (l_252 != (-19)); --l_252)
    {
        union U1 * const l_400 = &g_161;
        union U1 **l_401 = &l_357;
        char **l_403 = &l_231;
        char ***l_402 = &l_403;
        unsigned l_404 = 1UL;
        long long l_405 = 0x17AAFA67C6BDC7D7LL;
        unsigned long long *l_409 = &g_51;
        int l_422 = (-9L);
        short ***l_449 = (void*)0;
        const unsigned short l_479 = 0x80FCL;
        unsigned short l_501 = 0xA68DL;
        (*l_401) = l_400;
        l_405 = (l_404 = (l_250 = ((*p_27) == (l_402 == (void*)0))));
        for (g_51 = 0; (g_51 >= 29); g_51 = safe_add_func_int32_t_s_s(g_51, 6))
        {
            unsigned long long *l_408 = (void*)0;
            int l_424 = 0x97B53E73L;
            int l_426 = 0x1670B57EL;
            int *l_429 = &g_41;
            union U0 *l_430 = (void*)0;
            int *l_438 = &l_344;
            if ((l_408 == l_409))
            {
                unsigned l_418 = 0UL;
                char *l_419 = &l_259;
                long long *l_420 = (void*)0;
                long long *l_421 = &g_221;
                int l_423 = 0x6BB7F221L;
                int *l_425 = (void*)0;
                unsigned short *l_427 = &g_428;
                l_426 = (safe_add_func_int16_t_s_s(((***g_281) = (safe_mod_func_int64_t_s_s((func_54(l_314) == (safe_lshift_func_int8_t_s_s((l_424 = (l_423 = (((*l_419) = (0x67L <= (safe_add_func_uint32_t_u_u(l_418, (&g_161 == l_357))))) != (((*l_421) = 0xB8333B37FA227871LL) || (l_422 = func_54((*g_135))))))), 4))), 0xF53D3AF3EE60F88ELL))), 0x8AFDL));
                l_422 = (l_405 != ((*l_427) = func_54((*g_135))));
                l_425 = &l_424;
            }
            else
            {
                if ((&g_428 == (void*)0))
                {
                    (*g_107) = l_429;
                }
                else
                {
                    union U0 **l_431 = &l_430;
                    int *l_435 = &l_426;
                    (*l_431) = l_430;
                    for (g_151 = (-1); (g_151 == 5); g_151 = safe_add_func_int16_t_s_s(g_151, 9))
                    {
                        int *l_434 = &l_344;
                        (*g_107) = l_434;
                        (*g_107) = (*g_107);
                        (*g_107) = l_435;
                        (*l_434) = ((void*)0 != &l_259);
                    }
                    (*g_107) = &g_41;
                }
                if (l_436)
                    break;
                (*g_108) = func_54(p_27);
            }
            (*l_429) = ((*l_429) & (l_437 == &l_429));
            (*l_401) = l_357;
            (*l_229) = l_438;
        }
        if ((p_28 || p_28))
        {
            unsigned l_447 = 0xB4E97113L;
            short ***l_448 = &g_282;
            const char l_453 = (-9L);
            unsigned long long ***l_465 = &g_135;
            union U0 **l_471 = &g_69;
            char *l_474 = (void*)0;
            const int *l_482 = &l_422;
            if ((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_28, l_422)), ((p_28 > (-7L)) | ((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(6L, ((l_447 && (*p_27)) & l_404))), (l_448 == l_449))) == 0x151EL)))))
            {
                unsigned l_450 = 4294967290UL;
                int l_472 = 0x15919C03L;
                l_450 = p_28;
                for (g_87 = (-15); (g_87 >= 17); g_87 = safe_add_func_uint8_t_u_u(g_87, 5))
                {
                    unsigned short *l_456 = &g_428;
                    unsigned char *l_457 = (void*)0;
                    unsigned char *l_458 = &g_188;
                    unsigned long long ***l_464 = &g_135;
                    union U1 *l_470 = &g_161;
                    int *l_473 = &l_250;
                    if ((((*l_458) = ((l_453 <= ((p_28 == p_28) ^ (((*l_456) = (safe_sub_func_int8_t_s_s((-5L), l_404))) < g_51))) | 0x1AAAL)) || 0x5BL))
                    {
                        const int *l_459 = (void*)0;
                        const int **l_460 = &l_459;
                        int *l_461 = &l_250;
                        (*l_460) = l_459;
                        g_151 = (!((*l_461) = ((func_54(l_314) < (~p_28)) ^ 4294967292UL)));
                    }
                    else
                    {
                        const unsigned long long **l_467 = (void*)0;
                        const unsigned long long ***l_466 = &l_467;
                        l_422 = (safe_rshift_func_uint8_t_u_u(0xBDL, ((l_465 = l_464) == l_466)));
                    }
                    (*l_473) = (l_472 = (((void*)0 != l_470) > (l_471 == (void*)0)));
                    return l_474;
                }
            }
            else
            {
                int l_477 = 0xDDD2A761L;
                char *l_478 = &l_259;
                short **l_498 = &g_283;
                l_422 = (safe_rshift_func_uint16_t_u_u((((*l_478) = (l_477 = (g_188 < func_54((*g_135))))) > (l_422 >= l_479)), (g_188 >= g_43)));
                for (g_151 = 0; (g_151 <= (-2)); g_151--)
                {
                    int l_500 = 0xE8CE1015L;
                    if (p_28)
                    {
                        const int **l_483 = &l_482;
                        (*l_483) = l_482;
                        (*l_483) = &g_41;
                        l_499 = (safe_div_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u((func_54(p_27) < ((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s(0L, (safe_add_func_uint32_t_u_u(((*p_27) ^ (**l_483)), ((1UL | ((*p_27) < (l_498 == l_377))) < l_477))))), 2)) != g_105)), (*l_482))) && (***g_281)) || p_28), l_422)) || 0x219117F19FA5CB6FLL), (*l_482)));
                        l_500 = p_28;
                    }
                    else
                    {
                        unsigned short l_502 = 8UL;
                        g_41 = (l_501 = 8L);
                        if (l_502)
                            continue;
                        if (l_477)
                            continue;
                    }
                }
            }
        }
        else
        {
            short l_503 = 1L;
            char * const l_512 = &g_43;
            (*g_107) = ((*l_229) = (void*)0);
            l_422 = l_503;
            if (p_28)
            {
                int *l_504 = &g_151;
                (*l_229) = l_504;
            }
            else
            {
                unsigned long long *l_505 = &g_51;
                int *l_506 = &l_344;
                int *l_507 = &l_422;
                union U0 **l_508 = &g_69;
                (*l_507) = ((*l_506) = func_54(l_505));
                (*l_508) = l_393;
                l_422 = (safe_div_func_uint16_t_u_u(1UL, p_28));
                if (p_28)
                    continue;
            }
            if ((p_28 > l_422))
            {
                int ***l_511 = &g_107;
                unsigned *l_514 = &g_105;
                unsigned **l_513 = &l_514;
                int *l_515 = &g_41;
                (*l_401) = &g_161;
                (*l_515) = (l_422 = ((&g_105 == ((*l_513) = &p_28)) && 255UL));
                if (p_28)
                    continue;
            }
            else
            {
                char l_516 = 0x81L;
                union U1 **l_529 = (void*)0;
                int l_533 = 0x71F3110BL;
                (*l_437) = (void*)0;
                if (l_516)
                    break;
                for (l_499 = (-30); (l_499 >= 53); l_499 = safe_add_func_uint16_t_u_u(l_499, 5))
                {
                    int *l_519 = &l_344;
                    unsigned char *l_526 = &g_188;
                    (*l_229) = l_519;
                    (*l_519) = (g_428 <= (safe_rshift_func_uint8_t_u_u(((*l_526) = ((safe_lshift_func_int8_t_s_u(((*l_512) = p_28), (l_422 | (safe_mod_func_int16_t_s_s(0x74CEL, g_188))))) || g_12)), (safe_div_func_int64_t_s_s((&g_160 != (l_529 = &g_160)), l_422)))));
                    return &g_43;
                }
                for (l_501 = (-30); (l_501 > 30); l_501 = safe_add_func_uint16_t_u_u(l_501, 8))
                {
                    int *l_532 = &l_422;
                    char *l_534 = (void*)0;
                    l_533 = ((*l_532) = func_54(l_314));
                    return l_534;
                }
            }
        }
    }
    (*g_107) = &g_41;
    return &g_43;
}







static unsigned long long * func_29(char * p_30, char * p_31)
{
    int l_49 = 1L;
    unsigned long long *l_50 = &g_51;
    for (g_43 = 0; (g_43 <= 15); g_43 = safe_add_func_int16_t_s_s(g_43, 4))
    {
        short l_47 = 6L;
        int *l_48 = &g_41;
        (*l_48) = l_47;
        if (l_49)
            break;
    }
    return l_50;
}







static char * func_32(char * const p_33)
{
    unsigned short l_37 = 1UL;
    int *l_40 = &g_41;
    char *l_42 = &g_43;
    (*l_40) = (l_37 | ((safe_lshift_func_int16_t_s_s(1L, 3)) >= l_37));
    (*l_40) = 0xFFD03B15L;
    return l_42;
}







static int * func_52(unsigned short p_53)
{
    int *l_63 = &g_41;
    union U1 **l_227 = &g_160;
    (*l_227) = func_58(l_63, &l_63, func_32(&g_43), g_12);
    return l_63;
}







static unsigned short func_54(unsigned long long * p_55)
{
    int *l_56 = &g_41;
    int **l_57 = &l_56;
    (*l_57) = l_56;
    return g_51;
}







static union U1 * func_58(int * p_59, int ** p_60, char * p_61, unsigned p_62)
{
    char l_66 = 0L;
    unsigned long long *l_67 = (void*)0;
    char l_68 = (-1L);
    union U0 *l_71 = (void*)0;
    unsigned char l_85 = 0UL;
    int *l_117 = (void*)0;
    union U1 *l_173 = &g_161;
    if (((safe_add_func_int8_t_s_s(((((((**p_60) <= (l_66 != (((0L != ((l_67 == (void*)0) < l_66)) ^ g_51) == func_54(&g_51)))) <= 0xD4033E27L) ^ p_62) ^ p_62) || p_62), l_66)) || l_68))
    {
        l_71 = g_69;
    }
    else
    {
        int l_76 = (-1L);
        const int l_134 = 0x84290833L;
        int l_149 = 0x5ABFD0B7L;
        short *l_153 = &g_89;
        short **l_152 = &l_153;
        unsigned long long *l_171 = &g_51;
        int l_187 = 4L;
        if (g_70.f0)
        {
            long long *l_86 = &g_87;
            short *l_88 = &g_89;
            int *l_118 = &g_41;
            unsigned long long *l_121 = (void*)0;
            int l_126 = 0x6D63D46BL;
            union U1 *l_176 = &g_161;
            if (((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(g_12, l_76)), 3)) | (l_76 > ((*l_88) = ((((*l_86) = ((0L == 0UL) | (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((l_68 >= ((((void*)0 == &g_51) <= (safe_add_func_uint32_t_u_u(func_54(l_67), g_43))) == p_62)), 1)), l_76)), l_85)))) <= p_62) > 246UL)))))
            {
                char l_101 = (-7L);
                for (l_66 = (-30); (l_66 == 27); ++l_66)
                {
                    int **l_92 = (void*)0;
                    int *l_94 = &g_41;
                    int **l_93 = &l_94;
                    unsigned *l_104 = &g_105;
                    unsigned long long *l_116 = &g_51;
                    (*l_93) = ((*p_60) = &g_41);
                    if ((((*l_88) = g_70.f0) < (safe_add_func_uint64_t_u_u(0xEDC67586E024B173LL, (safe_sub_func_int8_t_s_s((((l_101 ^ 0UL) >= p_62) == ((*l_104) = (safe_lshift_func_uint16_t_u_u((0xC4L && (func_54(&g_51) == l_101)), 1)))), l_101))))))
                    {
                        int ***l_106 = &l_93;
                        (*l_94) = ((((*l_106) = &p_59) != g_107) != (safe_unary_minus_func_int64_t_s(func_54(func_29((p_61 = func_32(&g_43)), &g_43)))));
                        (**p_60) = ((***l_106) >= (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(0x48L, 7)), ((*l_86) = (func_54(l_116) && p_62)))), 7)));
                    }
                    else
                    {
                        (*l_94) = (*p_59);
                        (*l_93) = l_117;
                    }
                    (**p_60) = (**p_60);
                    if (l_101)
                        continue;
                }
                (*p_59) = (*p_59);
                l_118 = (*p_60);
            }
            else
            {
                (*p_60) = ((*g_107) = (*p_60));
            }
            (*p_60) = (void*)0;
            (*p_60) = (*p_60);
            if ((safe_lshift_func_uint8_t_u_u(((((*l_118) = p_62) & g_12) | func_54(&g_51)), (safe_mod_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_126 = func_54(l_86)), (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((((p_62 > (safe_add_func_int16_t_s_s((p_62 & (func_54(&g_51) > 18446744073709551615UL)), 0xCEBEL))) ^ 0xCBE0L) != g_43), g_133)), l_134)))), 0xFEC7L)))))
            {
                unsigned long long ***l_137 = (void*)0;
                unsigned long long ***l_138 = &g_135;
                int l_148 = 0x4046E41CL;
                unsigned long long *l_189 = (void*)0;
                (*l_138) = g_135;
                for (g_43 = 0; (g_43 > (-5)); g_43--)
                {
                    int l_150 = 1L;
                    short ***l_154 = &l_152;
                    unsigned *l_166 = &g_105;
                    int *l_172 = &l_126;
                    (*p_59) = ((g_151 = ((safe_lshift_func_int16_t_s_s(p_62, 5)) ^ (l_150 = (safe_lshift_func_int16_t_s_u(((*p_59) == ((safe_rshift_func_uint8_t_u_s(func_54(l_86), (l_148 = (0xF5D8L != ((*l_88) = (safe_unary_minus_func_int32_t_s((*p_59)))))))) & (l_149 = 0xD529L))), 10))))) == g_87);
                    (*l_154) = l_152;
                    for (g_41 = 0; (g_41 == (-17)); g_41 = safe_sub_func_uint64_t_u_u(g_41, 6))
                    {
                        int *l_159 = &l_126;
                        (*l_159) = (safe_lshift_func_int16_t_s_u((((((void*)0 == &g_70) && (*p_61)) == 0xEA76F415013F2C8CLL) >= (&l_152 != (void*)0)), (*l_118)));
                        (*l_159) = (*l_118);
                        return g_160;
                    }
                    if ((safe_div_func_uint32_t_u_u((((*l_166) = (safe_add_func_uint16_t_u_u(p_62, ((+65531UL) <= p_62)))) <= (l_150 || ((void*)0 != (*l_138)))), ((*l_172) = (safe_add_func_uint32_t_u_u((((*l_118) = l_134) == (l_126 | func_54(l_171))), 0x62712D85L))))))
                    {
                        (*p_60) = (*g_107);
                    }
                    else
                    {
                        return l_173;
                    }
                }
                (*p_60) = (*p_60);
                if ((func_54(((**l_138) = l_67)) | (g_135 == g_135)))
                {
                    unsigned char *l_190 = &l_85;
                    unsigned long long ***l_199 = (void*)0;
                    int *l_204 = &g_151;
                    for (g_51 = 25; (g_51 == 2); --g_51)
                    {
                        return l_176;
                    }
                    if ((func_54((*g_135)) > (safe_sub_func_uint8_t_u_u(((*l_190) = (safe_mod_func_uint32_t_u_u(l_149, (safe_sub_func_int8_t_s_s((*p_61), ((((*l_86) = (safe_rshift_func_uint16_t_u_u(g_89, 12))) || (0x6CL < (safe_add_func_int16_t_s_s((g_89 = (((g_188 = (~(l_187 = l_76))) == func_54(l_189)) | 65535UL)), p_62)))) ^ l_149)))))), 0x0CL))))
                    {
                        unsigned long long ****l_197 = (void*)0;
                        unsigned long long ****l_198 = (void*)0;
                        unsigned long long *l_202 = (void*)0;
                        char *l_203 = &l_68;
                        (*p_59) = (safe_div_func_uint32_t_u_u(p_62, (((*l_203) = (safe_lshift_func_int8_t_s_u((g_151 | (((((((l_199 = &g_135) != (void*)0) > 3UL) > (*l_118)) >= ((*p_61) = (safe_add_func_uint16_t_u_u(((*p_59) != 0x4D7DB42FL), (func_54(l_202) & 18446744073709551606UL))))) || 0UL) >= 0L)), 5))) & (*l_118))));
                    }
                    else
                    {
                        (*g_107) = (*p_60);
                    }
                    (*p_60) = l_204;
                }
                else
                {
                    (*l_118) = (*p_59);
                    (*l_118) = g_51;
                }
            }
            else
            {
                (*p_59) = (*p_59);
            }
        }
        else
        {
            (*g_107) = &l_187;
        }
        (*g_107) = (*g_107);
        (*p_60) = (*p_60);
    }
    if ((!(safe_mod_func_uint16_t_u_u(p_62, (safe_lshift_func_int8_t_s_s(0x33L, 2))))))
    {
        int l_209 = 0x3CDDDF83L;
        short *l_214 = &g_89;
        unsigned long long l_215 = 0xE916BB261D961218LL;
        unsigned char *l_216 = &g_188;
        short *l_217 = &g_218;
        long long *l_219 = &g_87;
        long long *l_220 = &g_221;
        int l_222 = (-3L);
        (*p_59) = (l_209 ^ (((l_222 = ((p_62 ^ (func_54((*g_135)) > (((*l_220) = ((*l_219) = ((((void*)0 == (*p_60)) != (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(0xBEE15430L, (g_105 = (((*l_214) = p_62) ^ ((*l_217) = (((*l_216) = ((*p_59) >= l_215)) != (*p_61))))))), l_209))) == g_70.f0))) >= p_62))) || g_151)) >= (*p_61)) != 1L));
        for (g_218 = 0; (g_218 <= 14); g_218 = safe_add_func_uint64_t_u_u(g_218, 2))
        {
            (*p_59) = (*p_59);
            (*p_59) = (g_12 != (0xC0C8250707C83248LL > p_62));
        }
        (*g_107) = (void*)0;
    }
    else
    {
        (*p_59) = 0L;
        return &g_161;
    }
    (*p_59) = 0x4B534227L;
    return l_173;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_887, "g_887", print_hash_value);
    transparent_crc(g_944, "g_944", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
