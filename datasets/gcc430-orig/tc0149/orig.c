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
   char * f0;
};

union U1 {
   unsigned f0;
};


static unsigned char g_3 = 255UL;
static union U0 g_10 = {0};
static char g_12 = 1L;
static int g_23 = 0L;
static unsigned short g_38 = 0xFD39L;
static const char g_61 = 0xCCL;
static const volatile unsigned short g_78 = 0x993CL;
static const volatile unsigned short *g_77 = &g_78;
static const volatile unsigned short ** const g_76 = &g_77;
static int g_83 = (-9L);
static short g_87 = 0xCE76L;
static char *g_89 = &g_12;
static char **g_88 = &g_89;
static int *g_127 = &g_83;
static int **g_126 = &g_127;
static short g_144 = 0x5172L;
static unsigned char g_158 = 0x76L;
static char g_162 = 0x1EL;
static union U1 g_168 = {4UL};
static unsigned long long g_184 = 0x0990B5A70E1A0D32LL;
static unsigned char g_210 = 0x4CL;
static union U0 g_243 = {0};
static union U0 *g_242 = &g_243;
static long long g_309 = (-4L);
static char g_408 = 8L;
static volatile unsigned long long g_423 = 6UL;
static const volatile unsigned long long *g_422 = &g_423;
static const volatile unsigned long long **g_421 = &g_422;
static volatile long long g_450 = 0L;
static volatile long long *g_449 = &g_450;
static volatile long long **g_448 = &g_449;
static unsigned g_474 = 0x7B3A9D1CL;
static int g_519 = 0x5710C9A3L;
static volatile union U1 g_526 = {0x7EAF6CD1L};
static volatile union U1 *g_525 = &g_526;
static volatile union U1 **g_524 = &g_525;
static volatile unsigned char g_569 = 0x9EL;
static volatile unsigned char *g_568 = &g_569;
static volatile unsigned char ** const g_567 = &g_568;
static unsigned g_657 = 1UL;
static unsigned short g_706 = 0x8B13L;
static int g_739 = 6L;



static unsigned func_1(void);
static int * func_4(union U0 p_5, char * p_6, short p_7, char * p_8, int p_9);
static char func_16(char * p_17, char * p_18);
static char func_19(int p_20);
static union U0 * func_39(char * p_40, const union U1 p_41, union U0 p_42);
static char * func_43(unsigned short * const p_44);
static unsigned char func_49(int p_50, char p_51, int p_52, unsigned long long p_53, union U1 p_54);
static union U1 func_62(char ** p_63);
static char ** func_64(unsigned long long p_65, const unsigned p_66, const union U0 * p_67, int * p_68);
static const short func_69(char p_70, const char p_71, union U0 * p_72);
static unsigned func_1(void)
{
    unsigned long long l_2 = 0xD386CCE57BF5CD53LL;
    char *l_11 = &g_12;
    char *l_13 = &g_12;
    int **l_729 = &g_127;
    (*l_729) = ((l_2 , (g_3 ^ l_2)) , func_4(g_10, l_11, g_3, l_13, (safe_lshift_func_int8_t_s_s((func_16((((func_19(g_12) >= g_3) < 0xA017779AL) , &g_12), &g_12) == 0xA6L), 5))));
    for (g_38 = (-29); (g_38 > 37); g_38++)
    {
        unsigned short *l_735 = &g_38;
        unsigned short **l_734 = &l_735;
        unsigned short ***l_736 = (void*)0;
        unsigned short ***l_737 = &l_734;
        int *l_738 = &g_739;
        const unsigned long long **l_740 = (void*)0;
        (*g_127) = (g_450 , ((safe_sub_func_uint8_t_u_u(((*g_568) , (*g_568)), (func_19((g_38 ^ g_12)) <= func_19((*g_127))))) , (((**g_88) = (((*l_737) = l_734) == &g_77)) > (-6L))));
        (*l_738) &= (**g_126);
        (**l_729) &= (l_740 != &g_422);
        (**l_729) = ((**g_126) >= (**l_729));
    }
    return (**l_729);
}







static int * func_4(union U0 p_5, char * p_6, short p_7, char * p_8, int p_9)
{
    short l_539 = (-3L);
    short *l_540 = &g_144;
    char l_541 = (-6L);
    union U0 **l_542 = &g_242;
    int l_553 = (-8L);
    union U1 l_590 = {0UL};
    unsigned long long *l_622 = &g_184;
    unsigned long long **l_621 = &l_622;
    unsigned long long ***l_620 = &l_621;
    char l_687 = 0x1AL;
    int *l_692 = &g_519;
    int *l_728 = &g_519;
    if (func_69((l_539 , l_539), (*g_89), (func_19((l_541 = ((l_540 != &g_87) || p_9))) , ((*l_542) = &g_243))))
    {
        unsigned long long l_545 = 18446744073709551615UL;
        unsigned short *l_551 = &g_38;
        unsigned short **l_550 = &l_551;
        unsigned long long *l_552 = &g_184;
        int l_554 = 2L;
        unsigned char l_563 = 0x78L;
        int l_564 = 0x8DDB506AL;
        l_553 |= ((safe_rshift_func_uint8_t_u_u((g_3 = ((l_545 != (~(((p_9 && ((safe_mod_func_int8_t_s_s((((*l_552) = ((safe_lshift_func_uint16_t_u_s(p_9, (((*g_89) &= 0x59L) ^ g_168.f0))) == (((((*l_550) = &g_38) == (g_38 , l_540)) , l_545) , 1L))) < (*g_449)), 0xE7L)) , l_545)) , (void*)0) != (*g_76)))) | p_9)), l_545)) & p_9);
        l_554 &= 5L;
        l_564 |= (~((safe_rshift_func_int16_t_s_u(g_210, 15)) == ((((p_9 && (p_9 = (safe_mod_func_uint8_t_u_u((1UL & ((void*)0 != &g_77)), (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((l_554 , ((**g_421) || l_545)) == p_7), 5)), g_184)))))) != g_408) != g_3) >= l_563)));
    }
    else
    {
        const unsigned char l_586 = 0x2AL;
        int l_601 = 0x7B2186D1L;
        unsigned short *l_668 = (void*)0;
        unsigned short **l_667 = &l_668;
        unsigned *l_716 = &g_657;
        int *l_723 = &g_83;
        union U0 *l_724 = &g_10;
        unsigned char *l_725 = &g_210;
        int *l_726 = &l_601;
        for (g_408 = (-2); (g_408 > 22); g_408 = safe_add_func_int16_t_s_s(g_408, 5))
        {
            unsigned short l_576 = 0xD044L;
            unsigned *l_585 = &g_474;
            union U0 *l_588 = &g_10;
            char **l_591 = &g_89;
            int l_603 = (-1L);
            unsigned long long l_655 = 0x840EFFD0A315EDF7LL;
            int l_665 = (-4L);
            (*g_126) = &p_9;
            if (((func_19(l_539) , ((void*)0 == g_567)) > ((safe_rshift_func_int16_t_s_s(0x853FL, 11)) || ((safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_9, ((*l_585) &= ((+(l_576 <= (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(0x9F8EFBA0L, (((((safe_rshift_func_int8_t_s_u(func_19(l_541), 5)) <= (**g_421)) < l_576) == 0xBA3DC340F9F49022LL) || 0xA3B2A788L))) <= 0UL), g_519)), (**g_126))))) , g_87)))), l_576)) , (**g_448)))))
            {
                unsigned short *l_587 = &l_576;
                char *l_589 = &l_541;
                int l_598 = 0x201EFB8EL;
                char l_626 = (-10L);
                if (((func_69((**g_88), l_586, (((*l_587) = p_7) , l_588)) && (*g_89)) && ((*l_589) |= (**g_88))))
                {
                    int *l_602 = &g_83;
                    union U0 *l_606 = (void*)0;
                    int *l_616 = &g_83;
                    char * const *l_617 = &g_89;
                    long long *l_619 = &g_309;
                    unsigned long long ***l_623 = &l_621;
                    int *l_627 = &l_601;
                    if ((l_603 &= ((g_168 = l_590) , ((*l_602) ^= func_19(((((l_586 , l_591) != &p_8) ^ (p_7 & 7L)) ^ (safe_sub_func_int64_t_s_s((((*l_585) = (((((safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((func_19(l_598) < (safe_lshift_func_uint16_t_u_u(0xD54FL, (*g_77)))), l_576)), g_3)) && (**g_126)) ^ g_144) ^ l_601) , 4UL)) && 4294967287UL), p_9))))))))
                    {
                        const int l_615 = 0x681E31CBL;
                        (**g_126) = ((safe_div_func_uint32_t_u_u(((func_69((*g_89), (*p_8), ((**g_524) , (l_606 = l_588))) , (safe_div_func_int64_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((*g_448) != (*g_448)) , (-9L)), 2)), (g_12 & (-1L)))), 10)) > 0xD95338EAC8AA8C38LL), p_9))) <= 0x6AL), l_615)) , p_9);
                        return l_616;
                    }
                    else
                    {
                        int *l_618 = &g_83;
                        (**g_126) &= ((g_210 , (((+p_7) , l_617) == &g_89)) == (g_12 && l_576));
                        (*g_126) = l_616;
                        l_601 = func_49(l_598, (*p_6), g_408, p_9, (**g_524));
                        l_618 = &g_83;
                    }
                    (*l_627) |= (l_626 = (l_576 | (((*g_89) , (((*l_616) = l_603) , (((((*l_619) = (**g_448)) , l_620) != ((*g_242) , l_623)) == g_83))) , (((safe_lshift_func_int16_t_s_u(func_19(((*g_242) , l_576)), p_9)) > 0x38381C63L) >= 0L))));
                    if (p_7)
                        continue;
                }
                else
                {
                    (*g_126) = &l_553;
                    for (l_626 = 0; (l_626 <= (-3)); l_626--)
                    {
                    }
                    (*g_126) = &l_553;
                    (*g_126) = (*g_126);
                }
            }
            else
            {
                const int *l_630 = (void*)0;
                const int **l_631 = &l_630;
                (*l_631) = l_630;
                (*g_127) = (*g_127);
                (**g_126) |= p_7;
            }
            if (p_9)
                continue;
            for (l_576 = (-29); (l_576 <= 17); l_576 = safe_add_func_int64_t_s_s(l_576, 5))
            {
                union U0 **l_651 = &g_242;
                unsigned short *l_663 = (void*)0;
                const unsigned long long *l_673 = &g_184;
                const unsigned long long **l_672 = &l_673;
                const unsigned long long ***l_671 = &l_672;
                int l_676 = 0x40646184L;
                int l_685 = 0x008DBB1AL;
                for (g_83 = 0; (g_83 != (-9)); g_83 = safe_sub_func_uint64_t_u_u(g_83, 2))
                {
                    unsigned char *l_642 = &g_158;
                    int l_645 = 0L;
                    int *l_646 = (void*)0;
                    union U1 l_654 = {0UL};
                    unsigned *l_656 = &g_657;
                    unsigned *l_664 = (void*)0;
                    int *l_666 = &l_553;
                    unsigned short **l_669 = &l_668;
                    int l_670 = (-1L);
                    int l_686 = 0x067266A0L;
                    l_645 = (safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(func_19(p_9), 1UL)), ((((safe_mod_func_int32_t_s_s((((*l_642) |= 0x28L) || (0x414CC772L ^ (p_9 , l_586))), ((*l_585) = (((((((((safe_lshift_func_uint8_t_u_u(((p_7 < (func_19(l_645) , l_603)) == 1UL), p_7)) , (*g_449)) || l_645) | g_474) , l_576) , 0UL) , 1UL) , (**l_542)) , g_12)))) ^ p_9) > l_539) != l_541)));
                    (*l_666) |= ((((safe_rshift_func_int16_t_s_s(l_541, 6)) , ((safe_rshift_func_uint8_t_u_u(((p_9 , l_651) == &g_242), func_19(((safe_lshift_func_uint8_t_u_u((((l_654 , func_19(p_7)) && (((*l_656) |= ((*l_585) |= l_655)) == (l_665 = ((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u((~(safe_mod_func_uint16_t_u_u(((*g_76) == l_663), g_61))))) , (**g_76)), g_162)) , g_12)))) && (*g_422)), 7)) && 2UL)))) >= l_601)) | g_38) , (-2L));
                    l_601 &= func_19(((~((*l_540) |= ((*g_77) & (((((((l_590.f0 <= func_19((*l_666))) && p_9) , ((&g_568 == (void*)0) , (((((((((g_87 < ((*p_8) >= l_655)) & (*g_89)) | 0xDDL) , l_667) == l_669) == l_670) , 0x76L) & l_576) == 255UL))) && p_7) >= l_603) , &l_621) == l_671)))) == g_23));
                    l_553 |= (((safe_sub_func_uint64_t_u_u(func_19(l_676), ((safe_add_func_uint16_t_u_u(((*p_8) & 0xB1L), (p_7 , p_9))) < (safe_sub_func_uint16_t_u_u((l_685 = (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((func_19((((*l_540) = func_19(l_665)) || (p_9 & g_87))) && (*g_89)), g_210)), p_7))), p_7))))) == l_686) , p_9);
                }
            }
        }
        if (l_687)
        {
            unsigned long long l_690 = 6UL;
            int *l_691 = &l_601;
            (*l_691) |= ((safe_lshift_func_int8_t_s_s((((**g_88) || func_19(l_690)) == g_162), 4)) < (p_9 & p_9));
        }
        else
        {
            union U1 l_701 = {18446744073709551607UL};
            (*g_126) = &l_553;
            l_692 = (*g_126);
            for (l_553 = (-23); (l_553 != (-23)); l_553++)
            {
                unsigned short *l_704 = &g_38;
                unsigned short *l_705 = &g_706;
                unsigned char *l_707 = &g_3;
                char *l_708 = (void*)0;
                char *l_709 = &g_408;
                int *l_710 = (void*)0;
                int *l_711 = &g_23;
                (*l_711) |= (((safe_mod_func_int64_t_s_s((((void*)0 == (*g_88)) >= (safe_rshift_func_uint8_t_u_s((**g_567), ((*l_709) &= ((l_601 ^= (safe_lshift_func_int16_t_s_u(((*l_540) = (3UL ^ p_9)), (func_69((*l_692), ((l_590 = l_701) , (((((*l_707) = (safe_rshift_func_int8_t_s_s((((*l_705) = (((*l_704) = g_83) < func_19(p_7))) ^ 0xF018L), (**g_88)))) , g_87) | 65535UL) & 0x0AL)), &g_243) > (**g_126))))) != (*l_692)))))), g_61)) != l_586) , (**g_126));
                (*l_711) = l_586;
                if ((*g_127))
                    continue;
            }
            (*g_126) = &l_601;
        }
        if (((g_519 && (((func_69(((**g_88) = ((safe_lshift_func_uint8_t_u_s(0xFAL, 5)) > func_19((((*l_716) = g_519) & (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(0xDBL, ((*l_725) = ((((safe_add_func_uint16_t_u_u(65535UL, g_210)) , p_7) , func_69(((func_19(((*l_723) ^= 0x40340DCCL)) && p_7) , (*p_6)), (*g_89), l_724)) | 0x581D7813L)))) || (**g_76)), 1UL)))))), (*l_692), (*l_542)) , 0x38BA80B17730CD4CLL) >= g_23) < (*l_692))) != p_9))
        {
            (*l_692) = p_7;
        }
        else
        {
            int *l_727 = &g_23;
            return l_727;
        }
    }
    return l_728;
}







static char func_16(char * p_17, char * p_18)
{
    short l_21 = 0x299EL;
    int *l_22 = &g_23;
    unsigned l_36 = 1UL;
    unsigned short *l_37 = &g_38;
    unsigned short **l_45 = &l_37;
    char *l_57 = &g_12;
    const char **l_58 = (void*)0;
    const char *l_60 = &g_61;
    const char **l_59 = &l_60;
    const int l_73 = 0L;
    unsigned short *l_299 = &g_38;
    char l_300 = 6L;
    union U1 l_301 = {0x75A24C56L};
    union U0 **l_538 = &g_242;
    (*l_22) = l_21;
    (*l_22) = (((safe_rshift_func_uint16_t_u_s(65535UL, ((*p_18) , (safe_rshift_func_uint16_t_u_s(func_19((((*l_22) && (l_22 == (void*)0)) != ((*l_37) = (safe_mod_func_int64_t_s_s((((((safe_div_func_uint8_t_u_u(((-1L) != ((&g_12 == p_17) > (((((((g_3 != g_12) | l_36) >= (*l_22)) && g_23) | (*p_17)) != g_12) <= (*l_22)))), (*l_22))) >= (*l_22)) & (*l_22)) < (*l_22)) && g_23), (*l_22)))))), 15))))) | 0x506946CB4F5FDFDALL) == (*l_22));
    (*l_538) = func_39(func_43(((*l_45) = &g_38)), ((safe_add_func_int8_t_s_s(0xB5L, func_49((safe_lshift_func_uint16_t_u_u((((*l_299) = (((l_57 = func_43(&g_38)) == ((*l_59) = func_43(&g_38))) >= ((func_62(func_64((*l_22), (func_69(((*p_18) = (l_22 == l_22)), l_73, &g_10) == (*l_22)), &g_10, l_22)) , 1UL) ^ g_3))) != (-3L)), g_61)), l_300, l_36, l_73, l_301))) , g_168), g_10);
    return (*l_22);
}







static char func_19(int p_20)
{
    return p_20;
}







static union U0 * func_39(char * p_40, const union U1 p_41, union U0 p_42)
{
    int ***l_373 = &g_126;
    int **l_374 = &g_127;
    const int *l_436 = &g_83;
    unsigned long long **l_459 = (void*)0;
    unsigned long long ***l_458 = &l_459;
    union U1 l_490 = {0x45E679D5L};
    union U1 *l_523 = &l_490;
    union U1 **l_522 = &l_523;
    union U0 *l_537 = &g_10;
    if ((p_41.f0 > (((*l_373) = &g_127) == l_374)))
    {
        int *l_375 = &g_83;
        union U0 **l_382 = &g_242;
        short *l_385 = &g_144;
        union U1 *l_411 = &g_168;
        long long l_432 = 0L;
        int *l_442 = &g_83;
        union U0 *l_460 = (void*)0;
        char **l_507 = (void*)0;
lbl_499:
        (*l_375) &= 0x56648DE4L;
        if ((safe_lshift_func_int16_t_s_u(((*l_385) = (safe_mod_func_uint16_t_u_u((*g_77), (safe_sub_func_int32_t_s_s(((((void*)0 == &g_242) & (~func_69((g_168.f0 | p_41.f0), (**g_88), ((*l_382) = &p_42)))) > (safe_mod_func_uint32_t_u_u((0UL || 8UL), p_41.f0))), p_41.f0))))), 12)))
        {
            union U0 l_401 = {0};
            int l_409 = 0x25822FE2L;
            unsigned long long **l_419 = (void*)0;
            int l_429 = 0L;
            for (g_12 = 0; (g_12 == (-16)); --g_12)
            {
                if (p_41.f0)
                {
                    (*l_375) &= (~1L);
                }
                else
                {
                    (*l_375) = p_41.f0;
                    return &g_10;
                }
            }
            for (g_162 = 0; (g_162 > 27); ++g_162)
            {
                const long long *l_400 = &g_309;
                const long long **l_399 = &l_400;
                int l_410 = 0x59362763L;
                if (func_19(p_41.f0))
                {
                    short l_392 = (-1L);
                    unsigned long long *l_397 = &g_184;
                    unsigned char *l_398 = &g_210;
                    union U0 *l_402 = (void*)0;
                    union U0 *l_403 = (void*)0;
                    union U0 *l_404 = (void*)0;
                    union U0 *l_405 = &l_401;
                    const long long **l_406 = (void*)0;
                    unsigned short *l_407 = (void*)0;
                    l_409 &= func_69(((*g_89) = (1L && p_41.f0)), ((safe_rshift_func_int8_t_s_s(p_41.f0, l_392)) == (safe_add_func_uint16_t_u_u((g_408 = (g_38 = (((*l_398) = (safe_div_func_uint64_t_u_u(((*l_397) = p_41.f0), 0x97EDA3FD96416AADLL))) < (l_399 != (((*l_405) = ((*g_242) = l_401)) , l_406))))), 8UL))), &g_243);
                    (*l_375) = (g_144 , (l_410 > g_78));
                    (*l_374) = (void*)0;
                    if (((void*)0 == &g_77))
                    {
                        (*l_375) |= p_41.f0;
                    }
                    else
                    {
                        union U1 **l_412 = &l_411;
                        (*l_412) = l_411;
                        (*l_375) |= (g_38 != ((p_41.f0 || ((*l_398) = ((-1L) >= l_409))) >= p_41.f0));
                    }
                }
                else
                {
                    unsigned long long l_426 = 0UL;
                    for (g_184 = 24; (g_184 >= 20); g_184 = safe_sub_func_int16_t_s_s(g_184, 6))
                    {
                        return &g_243;
                    }
                    for (l_410 = 0; (l_410 != (-30)); l_410 = safe_sub_func_uint64_t_u_u(l_410, 6))
                    {
                        unsigned long long ***l_420 = &l_419;
                        unsigned short *l_433 = (void*)0;
                        unsigned short *l_434 = &g_38;
                        const int l_435 = (-2L);
                        int *l_441 = &l_409;
                        int **l_443 = &l_441;
                        (*l_375) = (((safe_sub_func_uint8_t_u_u(((p_42 , ((*l_420) = l_419)) != g_421), ((**g_88) = ((safe_mod_func_int16_t_s_s(((*l_385) = (((g_184 < l_435) , &g_23) != (void*)0)), g_210)) != p_41.f0)))) ^ 0x3139589938A15CA5LL) < p_41.f0);
                        l_436 = &l_435;
                        (*l_441) = (safe_sub_func_int64_t_s_s(0L, (((*l_385) = (p_41.f0 | ((((l_426 == (func_19(((*l_375) |= (l_429 > (*p_40)))) | ((**g_421) , func_19(((*l_441) |= (safe_rshift_func_uint16_t_u_s((**g_76), ((*l_385) = (0xF48FCCC5028FC8C8LL > g_23))))))))) ^ 0x7E2376DFDD3D1E35LL) , (*l_375)) | 255UL))) < 4UL)));
                        (*l_443) = ((*l_374) = l_442);
                    }
                }
                (*l_375) &= p_41.f0;
                for (g_184 = (-14); (g_184 != 52); g_184 = safe_add_func_int16_t_s_s(g_184, 8))
                {
                    l_410 |= ((safe_mod_func_int32_t_s_s((((*l_442) , ((*g_422) > func_69((*p_40), l_429, &p_42))) , (*l_375)), p_41.f0)) > (((void*)0 == &g_422) , p_41.f0));
                }
            }
        }
        else
        {
            unsigned char l_453 = 0xF6L;
            unsigned long long *l_461 = &g_184;
            int l_468 = 0x451D2EC5L;
            unsigned l_475 = 0xF4ADA883L;
            unsigned l_485 = 1UL;
            unsigned long long l_495 = 0UL;
            unsigned l_496 = 0x4CB8571CL;
            char l_497 = 0xC3L;
            int l_498 = (-1L);
            if (((*l_436) , ((((void*)0 != g_448) >= (safe_lshift_func_int8_t_s_s(l_453, (safe_add_func_uint64_t_u_u(p_41.f0, l_453))))) >= (safe_sub_func_int64_t_s_s(((void*)0 != l_458), ((*l_461) = (((func_69(l_453, (*g_89), l_460) == (*g_422)) | p_41.f0) < (-1L))))))))
            {
                unsigned long long l_464 = 18446744073709551606UL;
                int l_469 = 0L;
                long long *l_477 = &l_432;
                long long **l_476 = &l_477;
                long long ***l_478 = &l_476;
                long long ***l_479 = (void*)0;
                long long **l_481 = (void*)0;
                long long ***l_480 = &l_481;
                for (l_453 = (-15); (l_453 >= 38); ++l_453)
                {
                    int l_465 = (-5L);
                    unsigned *l_473 = &g_474;
                    l_465 &= (l_464 = ((*g_76) != (*g_76)));
                    (*l_442) = ((*l_375) >= func_19((((safe_add_func_uint16_t_u_u((0x4266508CL > (func_19((l_469 = (l_468 = p_41.f0))) >= l_453)), p_41.f0)) ^ (safe_add_func_uint32_t_u_u(((*l_473) = ((safe_unary_minus_func_uint16_t_u((p_41.f0 == (g_423 || p_41.f0)))) && 0xDE8505E131206338LL)), p_41.f0))) , l_468)));
                    if (l_475)
                        continue;
                    if (l_453)
                        continue;
                    if (g_162)
                        goto lbl_482;
                }
                (*l_480) = ((*l_478) = l_476);
                (*l_374) = &g_23;
            }
            else
            {
lbl_482:
                (*l_374) = (void*)0;
                for (g_168.f0 = (-25); (g_168.f0 == 39); g_168.f0 = safe_add_func_int16_t_s_s(g_168.f0, 1))
                {
                    unsigned char *l_493 = (void*)0;
                    unsigned char *l_494 = &g_210;
                    l_498 &= ((+(((1UL & (l_485 & (((((safe_rshift_func_uint8_t_u_s(((*l_494) = func_19((((safe_rshift_func_int16_t_s_u(0x380CL, (*g_77))) , ((p_41.f0 < ((p_41.f0 <= g_210) > (l_490 , (safe_lshift_func_int16_t_s_s((((l_475 > p_41.f0) <= 0x09DC035AL) , g_162), p_41.f0))))) < (**g_76))) != l_468))), (*l_442))) < 0xF4L) , (*g_89)) && (*p_40)) > l_495))) , 0xA4064B14L) != l_496)) , l_497);
                    if (l_475)
                        goto lbl_499;
                }
                return &g_243;
            }
            (*l_374) = (*g_126);
        }
        if (((void*)0 == (*g_88)))
        {
            short l_500 = 0xCCABL;
            l_500 = 0L;
        }
        else
        {
            int * const l_501 = &g_83;
            int **l_502 = &g_127;
            unsigned short *l_514 = (void*)0;
            unsigned short *l_515 = &g_38;
            int *l_516 = &g_23;
            unsigned *l_517 = &g_474;
            int *l_518 = &g_519;
            (*l_502) = l_501;
            (*l_518) ^= ((***l_373) , (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((((*l_501) >= func_19(((p_41.f0 >= p_41.f0) > 3L))) ^ (&p_40 != l_507)), ((*l_517) = (safe_add_func_int64_t_s_s((func_19(((*l_516) = (safe_sub_func_uint16_t_u_u(((*l_515) ^= (safe_sub_func_uint8_t_u_u(p_41.f0, p_41.f0))), 65535UL)))) | 0L), (*g_422)))))), p_41.f0)));
            for (g_158 = 0; (g_158 < 29); g_158 = safe_add_func_int16_t_s_s(g_158, 9))
            {
                (*l_375) &= (l_522 == g_524);
                (*g_127) = (0x2E9E734D5B6373B7LL ^ ((void*)0 != (*g_126)));
            }
        }
        (*l_442) |= (p_41.f0 < 0xBC727A9CL);
    }
    else
    {
        unsigned long long *l_527 = &g_184;
        unsigned l_534 = 0x150375FEL;
        int l_535 = 0xF514BAABL;
        int *l_536 = &g_23;
        g_23 |= 0x01707049L;
        (**l_373) = &g_519;
        (*l_536) = ((***l_373) = ((l_527 == l_527) < (safe_lshift_func_int8_t_s_s((*g_89), (l_535 = (safe_lshift_func_uint8_t_u_s(((*l_436) >= ((**l_374) ^ (safe_sub_func_int8_t_s_s(l_534, (l_436 == g_127))))), 2)))))));
    }
    return l_537;
}







static char * func_43(unsigned short * const p_44)
{
    char *l_46 = &g_12;
    return l_46;
}







static unsigned char func_49(int p_50, char p_51, int p_52, unsigned long long p_53, union U1 p_54)
{
    unsigned char l_302 = 0UL;
    int l_303 = (-3L);
    union U0 *l_312 = &g_10;
    unsigned *l_314 = &g_168.f0;
    unsigned long long *l_362 = &g_184;
    short * const l_368 = &g_144;
    l_303 |= (l_302 , l_302);
    for (p_51 = 5; (p_51 > (-14)); p_51--)
    {
        long long *l_308 = &g_309;
        int l_313 = 6L;
        unsigned char *l_315 = &g_210;
        union U0 *l_325 = &g_243;
        union U1 l_331 = {0x620D92A6L};
        union U1 *l_346 = &g_168;
        (*g_126) = ((((safe_sub_func_int8_t_s_s((((*l_308) = (l_303 = g_144)) ^ l_302), ((safe_rshift_func_uint8_t_u_u(l_302, ((*l_315) = func_69((func_69(p_51, l_302, l_312) <= l_313), (l_314 != l_314), &g_243)))) && p_53))) || p_53) >= 4294967295UL) , &l_303);
        for (g_87 = (-29); (g_87 <= 24); g_87 = safe_add_func_int8_t_s_s(g_87, 9))
        {
            unsigned l_326 = 4294967286UL;
            union U0 *l_333 = &g_10;
            long long * const l_344 = &g_309;
            unsigned long long **l_363 = (void*)0;
            unsigned long long *l_365 = &g_184;
            unsigned long long **l_364 = &l_365;
            short *l_366 = (void*)0;
            short *l_367 = (void*)0;
            if ((safe_div_func_int8_t_s_s(((**g_88) = (safe_div_func_int32_t_s_s(((void*)0 != &g_144), 0x4366A7A5L))), (l_313 , func_19(((*l_312) , l_313))))))
            {
                int l_324 = 1L;
                (*g_126) = (*g_126);
                if (p_50)
                    break;
                (*g_127) ^= ((((func_69((safe_rshift_func_uint16_t_u_u(l_324, 0)), p_53, l_325) , (void*)0) != (void*)0) && l_326) == 0xC3L);
            }
            else
            {
                union U0 *l_332 = &g_243;
                long long *l_339 = (void*)0;
                int l_347 = 1L;
                unsigned short *l_348 = &g_38;
                (*g_127) = (*g_127);
                for (p_53 = (-3); (p_53 > 1); p_53 = safe_add_func_int16_t_s_s(p_53, 1))
                {
                    long long l_334 = 0x5B424FC341C217ABLL;
                    long long **l_340 = (void*)0;
                    long long **l_341 = (void*)0;
                    long long **l_342 = (void*)0;
                    long long **l_343 = &l_339;
                    unsigned char l_345 = 254UL;
                    l_334 ^= (((*g_127) , (safe_mod_func_uint64_t_u_u((l_331 , func_19((*g_127))), func_69(p_54.f0, func_69(p_51, p_52, l_332), l_333)))) < p_52);
                    if ((((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(0x9F36L, (**g_76))) || ((((*g_127) &= l_326) , ((*l_343) = l_339)) != (l_334 , &g_309))), (l_344 == (void*)0))) <= p_52) == l_345))
                    {
                        l_346 = &g_168;
                        if (l_347)
                            break;
                    }
                    else
                    {
                        (**g_126) = l_347;
                    }
                    (**g_126) |= (((void*)0 == l_348) || ((safe_add_func_int64_t_s_s(func_69((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(g_158, 13)), (l_331.f0 | ((l_302 <= ((((l_347 == ((l_331.f0 > (+(l_326 || ((safe_add_func_int8_t_s_s(((+(-1L)) == p_53), (**g_88))) >= 0xEDBCL)))) <= g_168.f0)) < p_52) || (**g_88)) || (-1L))) >= p_51)))), l_331.f0, l_325), g_87)) && g_3));
                    for (l_302 = 0; (l_302 >= 2); ++l_302)
                    {
                        (**g_126) = 8L;
                    }
                }
            }
            (**g_126) = func_69((safe_add_func_uint64_t_u_u(((*g_77) , l_303), (((((((safe_unary_minus_func_int8_t_s(l_302)) , l_326) <= (l_362 != ((*l_364) = l_362))) , &g_144) != &g_144) & (l_313 &= p_53)) && 0x3EBD59E0L))), l_331.f0, l_333);
            (**g_126) &= (l_368 != &g_144);
            for (p_53 = 5; (p_53 > 34); ++p_53)
            {
                (*g_127) ^= (p_53 ^ (safe_rshift_func_uint8_t_u_u(9UL, 6)));
                (*g_127) = 1L;
            }
        }
    }
    return l_302;
}







static union U1 func_62(char ** p_63)
{
    char **l_93 = &g_89;
    int l_97 = 0x0922B85AL;
    short * const l_100 = &g_87;
    union U0 *l_102 = &g_10;
    union U1 l_122 = {0xDDEC24A8L};
    unsigned short *l_182 = &g_38;
    unsigned short **l_181 = &l_182;
    const unsigned l_275 = 0UL;
    int l_276 = 0x95E0E053L;
    int *l_292 = &l_276;
    int *l_297 = &l_276;
    int l_298 = 0x8774B25CL;
    for (g_83 = 0; (g_83 >= (-10)); --g_83)
    {
        int *l_94 = (void*)0;
        int *l_95 = &g_23;
        int *l_96 = (void*)0;
        union U0 *l_101 = (void*)0;
        union U0 **l_103 = &l_102;
        unsigned short *l_104 = &g_38;
        const unsigned l_187 = 4294967293UL;
        unsigned l_188 = 2UL;
        int **l_200 = &l_95;
        unsigned char *l_207 = (void*)0;
        int *l_288 = &g_23;
        int *l_289 = &l_97;
        l_97 = ((*l_95) = (l_93 != l_93));
        if (((**g_76) != (&g_87 == ((safe_lshift_func_uint16_t_u_s((l_97 > (((l_100 != (void*)0) == ((l_97 && ((*l_104) = (l_101 != ((*l_103) = l_102)))) | ((**g_88) = (**p_63)))) , (**p_63))), l_97)) , (void*)0))))
        {
            union U0 *l_107 = &g_10;
            short l_115 = 0xFA35L;
            union U1 l_146 = {0xF6D39C23L};
            int l_167 = 1L;
            unsigned long long *l_183 = &g_184;
            unsigned *l_185 = &g_168.f0;
            int l_186 = 1L;
            int *l_189 = &l_97;
            unsigned char *l_208 = &g_3;
            char ***l_244 = (void*)0;
            for (g_12 = 0; (g_12 > (-28)); g_12--)
            {
                int l_112 = 0x781F8E38L;
                union U1 l_151 = {2UL};
                if ((g_10 , ((*g_77) == (((l_107 == ((*l_103) = l_102)) < ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((*l_95) , ((l_112 != (func_19(g_61) | (~(safe_sub_func_int16_t_s_s(l_112, 0x4192L))))) , 0xDF11966D8DA357BBLL)), l_112)), l_97)) | g_83)) <= l_115))))
                {
                    const char l_116 = 0x1AL;
                    int l_121 = 0xCA1794A7L;
                    int **l_123 = &l_94;
                    l_97 ^= l_116;
                    (*l_95) &= (safe_rshift_func_uint16_t_u_u(((0L < l_115) != g_61), 13));
                    for (g_38 = 0; (g_38 <= 32); g_38++)
                    {
                        l_121 ^= l_116;
                        return l_122;
                    }
                    (*l_123) = &l_97;
                }
                else
                {
                    unsigned short l_128 = 0x8868L;
                    short *l_139 = &l_115;
                    unsigned char *l_156 = (void*)0;
                    unsigned char *l_157 = &g_158;
                    char *l_161 = &g_162;
                    (*l_95) = ((safe_sub_func_uint64_t_u_u((&l_96 != g_126), ((l_122.f0 , ((g_87 , l_128) != (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((0x82L | (**g_88)), ((((((((safe_lshift_func_int16_t_s_u(g_78, ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*l_139) &= (((*l_95) & g_12) , 0L)), 3)), g_3)) > l_112))) != l_112) , 0x5235086CL) < (**g_126)) ^ (*l_95)) || l_112) , (**p_63)) , 0xEFE7L))), 1)))) , g_78))) <= l_128);
                    if ((l_112 , ((*l_95) = (((g_61 > l_112) | (-4L)) >= ((*l_104) ^= (((safe_lshift_func_uint16_t_u_s((**g_76), 6)) >= l_128) ^ (safe_sub_func_int16_t_s_s((g_144 ^= g_87), g_12))))))))
                    {
                        int l_145 = 0xA04C897BL;
                        (*l_95) = func_19(l_145);
                    }
                    else
                    {
                        return l_146;
                    }
                    l_97 = (safe_lshift_func_uint16_t_u_s((*l_95), ((safe_lshift_func_uint8_t_u_u((l_151 , (func_19(l_97) <= ((safe_lshift_func_int16_t_s_u(((5UL > ((251UL == (safe_lshift_func_uint8_t_u_u(255UL, 0))) , ((*l_161) = (((*l_157) = l_151.f0) > (((safe_mod_func_uint64_t_u_u(l_151.f0, 0xAE2F6F5F90F01391LL)) , 0xE4E9FC46A622BFDELL) || l_128))))) < g_87), l_146.f0)) , 0xDC580BB9L))), 3)) && 0UL)));
                }
                l_167 = ((*l_95) = (safe_lshift_func_uint8_t_u_s((l_97 || g_87), (((l_115 , (g_144 > func_19(l_97))) , (((((func_19(func_19((((func_19((*l_95)) == (((safe_div_func_int32_t_s_s((*g_127), l_97)) != g_23) , l_112)) > l_151.f0) , l_151.f0))) , g_87) == g_23) , l_122.f0) > 0UL) < l_151.f0)) || l_112))));
                return g_168;
            }
            (*l_189) &= ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s(func_19((((*l_100) ^= (((**p_63) = (4L || (((safe_lshift_func_int8_t_s_u((l_122.f0 | (safe_add_func_int32_t_s_s((((*l_185) = (safe_mod_func_uint32_t_u_u(((((*l_183) &= (((-1L) && (safe_mod_func_int32_t_s_s((((*l_95) = 0x165633C5L) <= ((func_19(((void*)0 != l_181)) , ((l_115 ^ (l_115 , (**p_63))) >= l_146.f0)) && 65535UL)), 0x36648E8CL))) > 0x39463529L)) > 0x22218209F72DD023LL) , l_146.f0), (*g_127)))) , 0L), (*g_127)))), 6)) , l_107) != (*l_103)))) == l_186)) == l_187)), l_115)), l_188)) , 0xA6B36A0DL);
            if (((void*)0 != l_104))
            {
                const unsigned long long l_196 = 0xDC60C70B8458984FLL;
                int **l_199 = &l_96;
                unsigned char *l_209 = &g_210;
                for (g_158 = 0; (g_158 > 2); g_158 = safe_add_func_uint8_t_u_u(g_158, 2))
                {
                    unsigned l_201 = 0x54180338L;
                    unsigned long long l_202 = 7UL;
                    unsigned char *l_219 = &g_210;
                    unsigned long long *l_226 = &l_202;
                    int **l_227 = (void*)0;
                    (*g_126) = (*g_126);
                }
            }
            else
            {
                unsigned short l_228 = 0UL;
                if ((l_228 >= l_228))
                {
                    (*l_95) = (+0xFA85E071L);
                }
                else
                {
                    unsigned l_233 = 1UL;
                    (*l_189) = (18446744073709551613UL && (((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_19((*g_127)), ((**l_181) |= (func_19((**g_126)) | 0x13C9C0DAL)))), (((g_3 , func_19((((((+func_19(((*l_189) &= ((**l_200) = ((g_210 < (((0UL | l_228) & (*g_77)) >= 0xE0F3B7A9L)) < 0x8BEE2B73L))))) , 0x0ABCD8AEL) , l_228) < l_228) , l_233))) && (*l_95)) , 0x8091L))) == (**p_63)) < 0x56C1L));
                    (**l_200) = (*g_127);
                    return g_168;
                }
                (**l_200) = (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((*g_77) ^ (((*l_100) = (0xDF08L && 65532UL)) <= (safe_lshift_func_int16_t_s_s((1UL > (((((l_183 = l_183) != (void*)0) < ((l_107 != ((*l_103) = l_107)) >= func_19((6L && 18446744073709551607UL)))) , g_210) != (*l_189))), l_97)))), (*l_189))), (-1L)));
                (*l_200) = &l_167;
                g_242 = &g_10;
            }
            g_88 = &g_89;
        }
        else
        {
            unsigned l_259 = 0x0B9419DEL;
            unsigned char *l_260 = (void*)0;
            unsigned char *l_261 = &g_158;
            int l_262 = 0x19CA71FDL;
            int l_283 = 1L;
            (*l_200) = &l_97;
            l_262 &= (safe_add_func_uint8_t_u_u(((*l_261) = (safe_div_func_uint8_t_u_u(((l_122.f0 , (safe_sub_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(((**g_76) ^ (((*l_181) = l_104) == l_100)), ((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_122.f0 > (((4294967294UL != 1L) <= l_97) <= l_259)), (*l_95))), l_122.f0)) , (**p_63)))) >= g_3), g_83))) & 0L), l_259))), (**l_200)));
            (*l_200) = &l_97;
            if (((**l_200) = (**g_126)))
            {
                int *l_263 = &l_262;
                if (l_97)
                    break;
                if (l_97)
                    break;
                (*l_263) = ((**l_200) |= (**g_126));
                l_263 = (*g_126);
            }
            else
            {
                const unsigned l_268 = 0x29A9D7D5L;
                int *l_273 = &g_23;
                unsigned char **l_274 = &l_260;
                unsigned char l_282 = 0UL;
                l_276 &= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(l_97, (l_268 || (func_19(((((safe_rshift_func_uint8_t_u_u((*l_95), (safe_add_func_int8_t_s_s(((*l_102) , (((*l_274) = (((l_262 != func_19(((*l_273) = func_19(((g_184 && l_122.f0) <= (((g_23 = (1L || (l_259 > l_259))) , l_259) != 0x4EL)))))) ^ l_122.f0) , &g_158)) != &g_158)), l_259)))) ^ g_162) >= 0UL) != (**g_126))) != (**g_76))))), l_275));
                (*g_126) = (*g_126);
                l_283 &= (l_262 = ((*l_273) = ((safe_rshift_func_int8_t_s_u((**p_63), 1)) < (func_19(((((((safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s(((**l_200) == ((**p_63) || (**p_63))))) <= ((l_282 , (*g_127)) , (**g_126))) == g_38), (**l_200))) , 0x20815C10L) > 0x973102DFL) >= (-4L)) ^ 65535UL) <= (*l_273))) > 0L))));
            }
        }
        if (l_122.f0)
            continue;
        (*l_289) = ((*l_288) &= (safe_mod_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_97, func_19(l_275))), func_19((**g_126)))));
    }
    (*l_297) = (func_69((*g_89), (((safe_mod_func_uint32_t_u_u((((*g_126) = &l_97) != (l_292 = &l_97)), (func_19(l_122.f0) | g_158))) , (*l_292)) , (safe_add_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(func_19(((*l_297) = (((*l_182) = 65535UL) ^ ((*l_292) = ((**g_126) & (*l_292)))))), (**g_88))) >= l_122.f0), l_275))), l_102) && l_298);
    return g_168;
}







static char ** func_64(unsigned long long p_65, const unsigned p_66, const union U0 * p_67, int * p_68)
{
    short *l_86 = &g_87;
    if ((safe_lshift_func_int16_t_s_u(((*l_86) ^= (+g_12)), 6)))
    {
        return g_88;
    }
    else
    {
        char **l_90 = &g_89;
        return l_90;
    }
}







static const short func_69(char p_70, const char p_71, union U0 * p_72)
{
    char *l_79 = (void*)0;
    char *l_80 = &g_12;
    int l_81 = 1L;
    int *l_82 = &g_83;
    (*l_82) |= ((((((void*)0 == &g_38) ^ p_71) >= ((*l_80) = (safe_rshift_func_int8_t_s_s(((void*)0 != g_76), 5)))) ^ (p_71 <= func_19(func_19((p_71 , l_81))))) <= p_71);
    return (*l_82);
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_168.f0, "g_168.f0", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_423, "g_423", print_hash_value);
    transparent_crc(g_450, "g_450", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_526.f0, "g_526.f0", print_hash_value);
    transparent_crc(g_569, "g_569", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
