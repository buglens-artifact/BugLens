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
   int f0;
   unsigned char f1;
};


static unsigned g_8 = 18446744073709551607UL;
static int g_24 = 1L;
static char g_41 = 0xE5L;
static unsigned short g_68 = 1UL;
static char g_75 = 0xDFL;
static int g_79 = 0x95A2E206L;
static struct S0 g_97 = {-1L,0xCEL};
static int *g_103 = &g_24;
static int **g_102 = &g_103;
static unsigned g_110 = 4294967293UL;
static unsigned g_132 = 4294967286UL;
static unsigned *g_137 = (void*)0;
static unsigned **g_136 = &g_137;
static int g_157 = (-2L);
static struct S0 *g_169 = &g_97;
static struct S0 **g_168 = &g_169;
static short g_175 = 5L;
static short *g_297 = &g_175;
static short **g_296 = &g_297;
static struct S0 g_318 = {-1L,0UL};
static unsigned short g_496 = 0UL;
static unsigned char *g_549 = &g_318.f1;
static unsigned char **g_548 = &g_549;
static short g_603 = (-4L);
static int *g_604 = &g_157;
static char *g_735 = &g_75;
static char **g_734 = &g_735;
static unsigned char ***g_747 = &g_548;
static unsigned char ****g_746 = &g_747;
static int *g_792 = &g_24;
static unsigned g_866 = 0x9CA2027FL;
static char *g_872 = &g_75;
static unsigned short *g_951 = &g_496;
static unsigned short **g_950 = &g_951;
static unsigned short ***g_949 = &g_950;
static int *g_1010 = &g_24;
static int *g_1014 = (void*)0;
static char g_1016 = 1L;
static char g_1124 = 0L;
static char *g_1142 = &g_75;
static short ***g_1203 = &g_296;
static int g_1206 = 4L;
static int g_1251 = (-4L);
static short g_1284 = (-8L);
static char g_1299 = 0x9DL;
static unsigned short ***g_1395 = &g_950;
static unsigned short ****g_1404 = &g_1395;
static unsigned short *****g_1403 = &g_1404;
static int *g_1416 = &g_1206;
static char g_1444 = 0x44L;
static unsigned char *****g_1452 = &g_746;
static unsigned char ******g_1451 = &g_1452;



static unsigned func_1(void);
static int * func_2(unsigned char p_3, int p_4, unsigned char p_5, int * p_6, int * p_7);
static short func_9(short p_10, short p_11);
static unsigned short func_14(char p_15);
static int func_17(unsigned short p_18);
static int * func_27(int * p_28, char * p_29, int * p_30, short p_31);
static char * func_32(struct S0 p_33, int * p_34);
static struct S0 func_35(char * p_36, int p_37, int * p_38, char * p_39);
static char * func_43(char * p_44, char * p_45, unsigned short p_46, char * p_47);
static char * func_48(int * p_49, short p_50, short p_51, int * p_52, int * p_53);
static unsigned func_1(void)
{
    int l_16 = 0xB101AAE4L;
    struct S0 ***l_1162 = &g_168;
    struct S0 ****l_1163 = &l_1162;
    short *l_1164 = &g_603;
    int *l_1193 = (void*)0;
    int **l_1417 = &g_792;
    short l_1428 = 0xE304L;
    struct S0 l_1456 = {-1L,0x16L};
    unsigned short l_1472 = 0UL;
    char *l_1483 = &g_1016;
    (*l_1417) = func_2(g_8, g_8, (func_9((safe_lshift_func_uint8_t_u_u((!((func_14(l_16) | (&g_168 == ((*l_1163) = l_1162))) >= ((*g_735) = 0x1DL))), 4)), ((*l_1164) = (((**g_296) = (*g_297)) | ((l_16 ^ l_16) ^ 1L)))) | 0x2006L), g_137, l_1193);
    (*l_1417) = (*l_1417);
    for (g_1251 = 15; (g_1251 == (-17)); g_1251 = safe_sub_func_int16_t_s_s(g_1251, 6))
    {
        char *l_1448 = &g_75;
        char *l_1455 = &g_1444;
        int l_1476 = 0xEACF24CCL;
        char *l_1479 = &g_75;
        if ((*g_1416))
            break;
        for (g_157 = 0; (g_157 == (-5)); g_157 = safe_sub_func_uint16_t_u_u(g_157, 5))
        {
            int *l_1431 = &g_24;
            if (((~(safe_add_func_int8_t_s_s((**g_734), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(func_14((*g_735)), func_14((*g_872)))), 0xA8L))))) >= 0x6AL))
            {
                if (l_1428)
                    break;
            }
            else
            {
                for (g_41 = 27; (g_41 <= (-10)); g_41 = safe_sub_func_uint16_t_u_u(g_41, 9))
                {
                    (*l_1417) = l_1431;
                }
            }
        }
        for (g_1284 = 0; (g_1284 < (-10)); --g_1284)
        {
            int l_1439 = 0xD8A1FF68L;
            struct S0 *l_1477 = &g_318;
            for (g_175 = 0; (g_175 <= (-23)); --g_175)
            {
                short l_1436 = 0x5F5AL;
                int *l_1454 = &g_157;
                char l_1475 = 0x4CL;
                if (((*g_1416) = l_1436))
                {
                    unsigned char l_1453 = 6UL;
                    if (((safe_add_func_int8_t_s_s((0x40D3L > (func_14(func_14(l_1439)) != (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s(g_1444, 4)) || ((l_1436 || ((*****g_1403) < (safe_add_func_int16_t_s_s(1L, 0x4E18L)))) || 0L)), 8)))), 0xC6L)) ^ 0x2AA1L))
                    {
                        char l_1447 = 0xB1L;
                        return l_1447;
                    }
                    else
                    {
                        struct S0 l_1457 = {-1L,0x34L};
                        l_1457 = l_1456;
                        (*l_1417) = (void*)0;
                    }
                    (*g_1416) = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((**g_296) >= ((*****g_1403) = 65528UL)), (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int16_t_s_s((l_1439 <= ((*l_1454) = (safe_sub_func_uint32_t_u_u((func_14((*g_1142)) >= ((*****g_1452) ^ (((*g_735) < l_1453) ^ l_1472))), g_1299)))), l_1439)), (***g_1203))), l_1453)) > l_1439) > 0xA6180016L), 5)))), 0xDF20L));
                    l_1476 = (safe_add_func_uint16_t_u_u(((l_1439 >= l_1475) != 0x5E717CEEL), l_1476));
                }
                else
                {
                    int *l_1478 = (void*)0;
                    (*g_168) = l_1477;
                    (**g_168) = (**g_168);
                }
            }
        }
        if ((*g_1416))
        {
            unsigned l_1482 = 0x572BE7F5L;
            char *l_1484 = &g_75;
            struct S0 l_1485 = {0x7C4D2484L,0x9CL};
            struct S0 *l_1486 = &g_318;
            for (l_1456.f0 = 21; (l_1456.f0 >= 4); l_1456.f0--)
            {
                return l_1482;
            }
            (*l_1486) = l_1485;
            if (l_1476)
                break;
        }
        else
        {
            (*g_1416) = (*g_604);
        }
    }
    return g_175;
}







static int * func_2(unsigned char p_3, int p_4, unsigned char p_5, int * p_6, int * p_7)
{
    int *l_1196 = &g_24;
    unsigned char *****l_1236 = (void*)0;
    int l_1295 = 1L;
    char *l_1343 = &g_1016;
    char l_1346 = 9L;
    unsigned ***l_1381 = &g_136;
    unsigned short ****l_1394 = &g_949;
    for (p_3 = (-4); (p_3 < 10); p_3 = safe_add_func_uint8_t_u_u(p_3, 5))
    {
        return l_1196;
    }
    if ((safe_rshift_func_int8_t_s_u(p_4, (***g_747))))
    {
        struct S0 l_1199 = {0x64084F83L,7UL};
        int l_1228 = 0L;
        unsigned char ****l_1238 = (void*)0;
        unsigned char *****l_1237 = &l_1238;
        short *l_1242 = (void*)0;
        unsigned short l_1249 = 0xC6A9L;
        int *l_1250 = &g_157;
        char *l_1260 = &g_41;
        char *l_1262 = &g_1124;
        int l_1283 = (-5L);
        short l_1302 = 1L;
        unsigned short ***l_1334 = &g_950;
        unsigned ***l_1350 = &g_136;
        if ((*l_1196))
        {
            int **l_1200 = &g_792;
            short ***l_1204 = &g_296;
            int *l_1205 = &g_1206;
            unsigned l_1229 = 3UL;
            struct S0 l_1265 = {1L,1UL};
            (*g_169) = l_1199;
            (*l_1200) = ((*g_102) = (*g_102));
            if (((*l_1205) = (p_5 ^ (((safe_lshift_func_int8_t_s_u(p_3, 1)) & (((**l_1200) = ((0UL != 3L) && ((g_1203 = &g_296) == l_1204))) >= 0x1EL)) == (p_3 && 0UL)))))
            {
                int ***l_1209 = &l_1200;
                unsigned char ****l_1230 = &g_747;
                unsigned char *****l_1231 = &g_746;
                for (g_24 = 0; (g_24 != (-23)); g_24--)
                {
                    (*l_1200) = ((*g_102) = (*g_102));
                    if (l_1199.f0)
                        continue;
                    if ((((void*)0 != l_1209) >= (**g_548)))
                    {
                        (**l_1209) = (*g_102);
                    }
                    else
                    {
                        (**l_1209) = (*g_102);
                        if ((*g_604))
                            break;
                    }
                }
                (***l_1209) = ((safe_sub_func_int16_t_s_s(func_9(func_14((((*g_872) = (**l_1200)) < 0xF5L)), (safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint8_t_u_u(((***g_747) = func_14((g_41 <= (((safe_lshift_func_int8_t_s_u((func_14((*l_1205)) != (safe_rshift_func_int8_t_s_u((~(safe_sub_func_int32_t_s_s(0x9C8B1942L, func_14((l_1228 = (safe_mul_func_uint16_t_u_u(((**g_950) = (((p_3 = (safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((p_4 || ((***l_1209) & p_3)), (***l_1209))), (****g_746)))) & 0x08L) <= p_4)), (*g_297)))))))), p_5))), p_4)) && 65535UL) >= 0xF0L)))), l_1199.f0)) && 0xA0C11976L) || (**g_296)) <= p_4), (***l_1209)))), (***g_1203))) == l_1229);
                (**l_1200) = (((l_1230 != ((*l_1231) = l_1230)) & (safe_add_func_int32_t_s_s((*g_103), ((l_1199.f0 > ((*g_604) <= (safe_rshift_func_uint16_t_u_s((((((*g_872) = 4L) >= 254UL) & ((***g_747) = (*l_1196))) <= (l_1236 != l_1237)), 0)))) == (*g_951))))) > l_1228);
            }
            else
            {
                unsigned *l_1247 = &g_132;
                int l_1248 = 0x5586D4C5L;
                unsigned char *****l_1257 = &g_746;
                struct S0 ***l_1259 = &g_168;
                if (((***g_949) & (((safe_mul_func_uint16_t_u_u(((((l_1228 = (*l_1196)) < (((((safe_unary_minus_func_uint32_t_u((func_14(((*g_1142) = (((void*)0 != l_1242) ^ (**g_548)))) != ((2UL | (safe_mul_func_int16_t_s_s((l_1199.f0 < (safe_sub_func_uint32_t_u_u(((*l_1247) = p_5), l_1248))), l_1199.f1))) < (***g_949))))) >= l_1248) < 0xDDL) != 1UL) && p_5)) && 0xDCL) == l_1249), 0x1D34L)) >= 0UL) && (*l_1205))))
                {
                    return l_1250;
                }
                else
                {
                    g_1251 = ((**l_1200) = 0x22F458F9L);
                    (**l_1200) = 0x56021F2CL;
                    (*g_169) = l_1199;
                }
                if (((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((*l_1247) = ((p_4 > p_4) ^ (**g_734))), ((safe_unary_minus_func_int8_t_s((l_1257 == &l_1238))) <= l_1248))), ((func_14(((safe_unary_minus_func_uint16_t_u(((((((*l_1200) = (void*)0) != &p_4) <= (l_1259 != (void*)0)) >= p_3) ^ (*g_103)))) == p_5)) <= p_3) | (*l_1250)))) & 65535UL))
                {
                    int l_1261 = (-6L);
                    (**g_168) = func_35((l_1260 = func_48((*g_102), (((*g_103) & func_14(p_5)) < 0x0ED9952EL), (*l_1205), &l_1228, l_1196)), l_1261, &l_1248, l_1262);
                }
                else
                {
                    for (g_175 = 8; (g_175 >= 8); g_175 = safe_add_func_uint32_t_u_u(g_175, 9))
                    {
                        (*g_169) = l_1265;
                        (**l_1259) = (**l_1259);
                    }
                }
                (*g_102) = (void*)0;
                (*l_1200) = &p_4;
            }
        }
        else
        {
            int *l_1269 = (void*)0;
            struct S0 l_1300 = {6L,0UL};
            short l_1308 = 0x785CL;
            struct S0 ***l_1320 = &g_168;
            struct S0 ****l_1319 = &l_1320;
            if (((***g_949) <= (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u(0xEC21L)), 6))))
            {
                (*g_102) = &p_4;
            }
            else
            {
                return l_1269;
            }
            if ((safe_unary_minus_func_uint8_t_u((((*l_1196) || (safe_lshift_func_uint8_t_u_u(((**g_548) = (p_3 != func_9(p_5, p_5))), ((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((**g_296), ((l_1228 >= (p_5 >= (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((g_1284 = ((safe_sub_func_int32_t_s_s((0xA42DL || p_5), 0L)) != l_1283)), 4)), p_5)))) == 4294967286UL))), 6)) == 0xF40DFF10L)))) | (**g_950)))))
            {
                int *l_1288 = (void*)0;
                int *l_1294 = &l_1228;
lbl_1289:
                for (g_318.f0 = 0; (g_318.f0 > (-16)); g_318.f0 = safe_sub_func_uint16_t_u_u(g_318.f0, 8))
                {
                    int *l_1287 = &g_157;
                    (*g_102) = (p_7 = l_1287);
                    if (p_4)
                        goto lbl_1289;
                    return l_1288;
                }
                for (l_1283 = 6; (l_1283 == 20); l_1283 = safe_add_func_int16_t_s_s(l_1283, 3))
                {
                    (*g_792) = ((*g_604) = (*g_792));
                }
                if ((((p_4 == 1L) & ((**g_548) = (*l_1250))) || (**g_102)))
                {
                    l_1269 = &p_4;
                }
                else
                {
                    (*g_604) = ((*g_792) = (**g_102));
                    return l_1269;
                }
                for (g_97.f0 = (-11); (g_97.f0 > (-21)); g_97.f0 = safe_sub_func_uint16_t_u_u(g_97.f0, 5))
                {
                    unsigned char l_1296 = 0x2CL;
                    int *l_1303 = &l_1283;
                    int *l_1323 = &g_157;
                    (*g_102) = func_27(func_27((*g_102), (*g_734), l_1294, (**g_296)), (*g_734), &l_1228, (*g_297));
                    if ((l_1295 = ((*g_103) = (*l_1250))))
                    {
                        (*g_168) = (void*)0;
                        l_1296 = (253UL <= (**g_734));
                    }
                    else
                    {
                        (*g_102) = l_1294;
                        (**g_102) = ((*g_951) < ((*g_1010) == (((*g_735) < (safe_add_func_uint32_t_u_u(p_5, (!l_1296)))) <= (0xA17CL != (((***g_949) | (g_1299 || func_14((*l_1269)))) ^ (*l_1269))))));
                    }
                    if ((*l_1294))
                    {
                        struct S0 *l_1301 = &l_1300;
                        (*l_1301) = l_1300;
                        (*g_103) = (*l_1196);
                        (*l_1301) = l_1300;
                        if (l_1302)
                            break;
                    }
                    else
                    {
                        return l_1288;
                    }
                    if ((func_14((*l_1250)) < (safe_sub_func_uint16_t_u_u(p_5, (safe_lshift_func_uint16_t_u_u((l_1308 >= (safe_add_func_uint16_t_u_u(func_14(p_5), (***g_1203)))), 7))))))
                    {
                        return l_1288;
                    }
                    else
                    {
                        struct S0 ***l_1318 = &g_168;
                        struct S0 ****l_1317 = &l_1318;
                        (**g_102) = ((&l_1300 == &l_1300) <= (~(safe_sub_func_uint8_t_u_u((((****g_746) = (safe_lshift_func_int16_t_s_u(func_14((p_3 | p_5)), 7))) | p_4), (g_97.f1 = (safe_mul_func_uint32_t_u_u((l_1317 != l_1319), ((safe_add_func_uint16_t_u_u(((65533UL < 65535UL) < 0UL), (*l_1250))) < (*l_1303)))))))));
                        l_1303 = &p_4;
                        return l_1323;
                    }
                }
            }
            else
            {
                return l_1269;
            }
        }
        if ((((*l_1196) = (0xC27233A0L >= (safe_sub_func_uint32_t_u_u(p_4, (*l_1250))))) < (safe_unary_minus_func_uint16_t_u(p_4))))
        {
            struct S0 *l_1327 = &g_97;
            int l_1328 = (-1L);
            int **l_1329 = &l_1196;
            unsigned short ****l_1335 = &l_1334;
            unsigned short ***l_1337 = &g_950;
            unsigned short ****l_1336 = &l_1337;
            int *l_1376 = (void*)0;
            l_1199 = (*l_1327);
            if ((safe_rshift_func_uint8_t_u_s((((**g_950) = (*g_951)) != (safe_sub_func_int8_t_s_s(((**l_1329) != (*l_1250)), ((g_949 = ((*l_1335) = l_1334)) != ((*l_1336) = (void*)0))))), (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((1L < ((*g_549) = (**l_1329))) & ((**l_1329) & func_14((*g_1142)))), 2)), p_5)))))
            {
                int *l_1342 = &l_1328;
                char *l_1347 = &g_1299;
                unsigned char *l_1353 = (void*)0;
                unsigned char *l_1354 = &g_97.f1;
                struct S0 l_1361 = {0x8E34A865L,8UL};
                int *l_1363 = &l_1283;
                unsigned short ****l_1371 = &l_1337;
                (*l_1329) = (*l_1329);
                if (((0x62CF5B5FL && ((*l_1250) | ((p_5 = (((safe_mul_func_uint16_t_u_u(((void*)0 != l_1350), (**g_296))) <= (*l_1196)) >= (safe_mul_func_int8_t_s_s(((**g_734) = p_3), ((**g_548) = (*g_549)))))) != ((*l_1354) = 0UL)))) != (*l_1250)))
                {
                    int *l_1359 = (void*)0;
                    int *l_1364 = &g_1251;
                    for (l_1295 = 0; (l_1295 <= (-25)); l_1295 = safe_sub_func_int32_t_s_s(l_1295, 6))
                    {
                        (*l_1342) = ((*g_604) = (safe_add_func_int16_t_s_s((***g_1203), 0x692DL)));
                        return l_1359;
                    }
                    if ((*g_604))
                    {
                        int ***l_1360 = &g_102;
                        struct S0 l_1362 = {0x34F8FA47L,0x27L};
                        (*l_1360) = &p_7;
                        l_1362 = l_1361;
                    }
                    else
                    {
                        (*l_1329) = (*g_102);
                        (*l_1329) = ((*g_102) = (*g_102));
                        (*l_1329) = (void*)0;
                    }
                    if ((*g_604))
                    {
                        return l_1364;
                    }
                    else
                    {
                        (*l_1342) = (safe_lshift_func_uint8_t_u_u((*l_1364), 4));
                    }
                    return l_1359;
                }
                else
                {
                    struct S0 l_1369 = {-2L,0x59L};
                    int *l_1370 = &l_1228;
                    unsigned short *****l_1372 = (void*)0;
                    unsigned short *****l_1373 = (void*)0;
                    unsigned short *****l_1374 = &l_1336;
                    int *l_1375 = &l_1228;
                    for (l_1361.f0 = 0; (l_1361.f0 >= (-3)); --l_1361.f0)
                    {
                        l_1369 = l_1361;
                    }
                    (*g_102) = func_27(l_1370, l_1262, &l_1295, (((*l_1374) = l_1371) != &l_1337));
                    return l_1376;
                }
            }
            else
            {
                unsigned ****l_1382 = &l_1381;
                unsigned *l_1389 = &g_110;
                int l_1396 = 7L;
                (*g_792) = ((p_5 > ((p_3 || ((*l_1389) = (0xC732316DL >= ((safe_mod_func_uint16_t_u_u(((*g_951) = (safe_lshift_func_int8_t_s_s((((l_1350 == ((*l_1382) = l_1381)) & (safe_sub_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((((*g_735) = ((*g_102) == &l_1295)) || (safe_mul_func_int16_t_s_s(((*g_297) = (p_5 | p_3)), p_3))), (**l_1329))) <= (**l_1329)), 0xD79D05EAL))) > (*l_1250)), (*l_1196)))), (*l_1250))) < 0xF8L)))) <= p_5)) | (*l_1250));
                (*l_1250) = (safe_rshift_func_uint16_t_u_s(p_4, p_5));
            }
            (*l_1196) = (*l_1196);
        }
        else
        {
            char l_1397 = 0L;
            int *l_1398 = &g_1206;
            l_1397 = (*l_1250);
            l_1398 = &p_4;
        }
    }
    else
    {
        char l_1409 = 1L;
        int l_1410 = 0L;
        int l_1411 = 0x805C06B3L;
        int *l_1412 = &l_1410;
        int **l_1413 = &l_1196;
        l_1412 = func_27(((*g_102) = func_27((*g_102), &l_1346, (p_7 = (*g_102)), ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((g_1403 == (void*)0), (*l_1196))), (func_14(((safe_sub_func_int32_t_s_s(p_5, ((l_1410 = ((**g_950) = ((((+((safe_rshift_func_uint16_t_u_s(l_1409, 15)) >= ((*l_1196) || 0x70L))) | 0x82EBL) | l_1409) <= p_5))) < p_3))) | l_1409)) == (*l_1196)))) <= (**g_548)))), &l_1346, &g_1206, l_1411);
        (*l_1413) = ((*g_102) = &p_4);
        for (g_318.f0 = (-15); (g_318.f0 <= (-25)); g_318.f0 = safe_sub_func_int16_t_s_s(g_318.f0, 3))
        {
            if ((**g_102))
                break;
        }
    }
    return g_1416;
}







static short func_9(short p_10, short p_11)
{
    char l_1167 = (-4L);
    int l_1178 = 0x1BFBA47DL;
    struct S0 l_1184 = {-1L,0x29L};
    int l_1192 = (-2L);
lbl_1171:
    l_1167 = (safe_sub_func_int8_t_s_s(0xD6L, 0x5EL));
    for (g_41 = 0; (g_41 > (-28)); g_41 = safe_sub_func_int16_t_s_s(g_41, 4))
    {
        unsigned char ******l_1170 = (void*)0;
        unsigned ***l_1176 = &g_136;
        if (func_14(((*g_872) = (l_1170 != (void*)0))))
        {
            if (g_41)
                goto lbl_1171;
            (**g_168) = (*g_169);
            if (p_10)
                break;
        }
        else
        {
            short l_1177 = 0x193AL;
            short l_1183 = 0x4169L;
            char *l_1190 = &l_1167;
            if (((**g_102) = ((65529UL != ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((void*)0 == l_1176), (0x9EL < (l_1177 <= (l_1178 < ((safe_lshift_func_int16_t_s_u((-6L), (((**g_734) != (safe_mul_func_int16_t_s_s(((l_1183 < l_1177) && p_11), p_10))) >= (*g_297)))) > l_1167)))))), 4)) ^ (*g_297))) & p_10)))
            {
                (**g_168) = l_1184;
            }
            else
            {
                (**g_102) = l_1183;
                if ((safe_sub_func_uint8_t_u_u(0x51L, (*g_1142))))
                {
                    (*g_1010) = p_10;
                    if (p_11)
                        continue;
                }
                else
                {
                    char *l_1191 = &g_1124;
                    for (g_603 = 13; (g_603 <= 25); g_603++)
                    {
                        int *l_1189 = &g_157;
                        (*g_102) = l_1189;
                        (*g_169) = func_35(l_1190, ((**g_102) = 0x7ED39659L), (*g_102), l_1191);
                    }
                }
            }
            (*g_103) = (l_1184.f0 == p_10);
        }
    }
    l_1192 = (l_1167 && 255UL);
    return (**g_296);
}







static unsigned short func_14(char p_15)
{
    unsigned char l_1027 = 0x97L;
    unsigned short **l_1030 = (void*)0;
    short **l_1043 = &g_297;
    short **l_1046 = &g_297;
    int l_1047 = 0x42FC8B1BL;
    struct S0 l_1072 = {0x18AE90C6L,0UL};
    char *l_1078 = &g_75;
    unsigned char *****l_1081 = (void*)0;
    unsigned char ******l_1085 = &l_1081;
    int l_1105 = 0L;
    struct S0 *l_1109 = &g_97;
    unsigned l_1126 = 7UL;
    int **l_1128 = &g_792;
    int *l_1134 = &g_24;
    int *l_1139 = &l_1105;
    char *l_1141 = (void*)0;
    return p_15;
}







static int func_17(unsigned short p_18)
{
    short l_19 = 0L;
    char *l_40 = &g_41;
    short l_42 = 0x9A16L;
    int l_290 = (-6L);
    struct S0 l_884 = {-8L,250UL};
    int ***l_909 = &g_102;
    int *l_930 = (void*)0;
    int l_985 = 0x6E5F2DFFL;
    unsigned ***l_1002 = &g_136;
    unsigned ****l_1001 = &l_1002;
    int *l_1011 = &l_290;
    int **l_1024 = &g_792;
    if (p_18)
    {
        short l_22 = 1L;
        int *l_23 = &g_24;
        struct S0 **l_898 = &g_169;
        int l_940 = 0xEAFF5488L;
        char *l_944 = &g_75;
        struct S0 l_958 = {-1L,251UL};
        struct S0 *l_959 = &g_318;
        int *l_962 = (void*)0;
        unsigned char l_971 = 0xEEL;
        int *l_1018 = &g_157;
        int **l_1019 = &g_792;
        if (l_19)
        {
            char *l_25 = (void*)0;
            int l_26 = (-1L);
            unsigned ****l_877 = (void*)0;
            struct S0 *l_885 = &g_97;
            int *l_904 = (void*)0;
            if ((safe_mul_func_int8_t_s_s((l_26 = (((l_22 = 0xA1F05067L) == ((void*)0 != l_23)) > g_24)), 0xB7L)))
            {
                int *l_875 = &l_290;
                l_875 = func_27(&g_24, func_32(func_35(l_40, l_42, &l_26, func_43(func_48(&g_24, p_18, (*l_23), &g_24, l_23), &g_75, l_290, l_25)), g_137), g_137, l_26);
            }
            else
            {
                unsigned ****l_876 = (void*)0;
                unsigned *****l_878 = &l_877;
                int l_879 = 0xFFF035FFL;
                if (((*g_604) = (l_876 != ((*l_878) = l_877))))
                {
                    return l_879;
                }
                else
                {
                    (*g_604) = (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((l_26 < 0x94AB8233L), p_18)), 6));
                }
                (*g_102) = &l_26;
                (*g_792) = (*l_23);
            }
            (*l_885) = l_884;
            for (g_866 = 0; (g_866 != 53); g_866++)
            {
                int *l_903 = (void*)0;
                struct S0 l_905 = {0x51AC9141L,0x3CL};
                int **l_906 = &l_904;
                char **l_929 = &l_25;
                if ((safe_rshift_func_int16_t_s_s((~((*g_735) & (*g_735))), (0x3BL == (safe_mul_func_int16_t_s_s(((*g_297) = (*g_297)), 7UL))))))
                {
                    int *l_894 = &g_24;
                    unsigned short *l_897 = (void*)0;
                    for (l_290 = 16; (l_290 != 21); l_290 = safe_add_func_uint8_t_u_u(l_290, 6))
                    {
                        l_894 = &l_26;
                    }
                    (*l_23) = (safe_add_func_uint8_t_u_u((****g_746), ((p_18 && ((*l_894) <= (p_18 = (((~0xAA3D54F9L) | 4294967289UL) == l_26)))) < ((void*)0 == l_898))));
                    if ((*g_792))
                        continue;
                }
                else
                {
                    int *l_902 = (void*)0;
                    if ((*g_604))
                    {
                        int **l_899 = (void*)0;
                        int **l_900 = (void*)0;
                        int **l_901 = (void*)0;
                        l_902 = &g_157;
                        (*l_898) = &g_97;
                    }
                    else
                    {
                        l_884 = l_884;
                        (*l_23) = (*l_23);
                        if ((*g_604))
                            continue;
                    }
                }
                l_905 = l_905;
                (*l_906) = &l_26;
                if ((*g_792))
                {
                    unsigned char l_916 = 1UL;
                    int l_923 = 0L;
                    struct S0 l_926 = {0xDFE4E616L,254UL};
                    if (((safe_add_func_int8_t_s_s(((void*)0 != l_909), (*g_549))) && ((**l_906) | ((*g_792) = (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_18, ((***g_747) = l_916))), l_916)), (safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((l_916 == ((*g_604) = (((!(*g_604)) || p_18) && (*g_297)))) < p_18) <= (-3L)) <= l_923), (*l_23))), p_18)), (-3L)))))))))
                    {
                        int *l_924 = &l_26;
                        (*l_23) = p_18;
                        if (p_18)
                            continue;
                        (*l_906) = l_924;
                        if ((*l_23))
                            break;
                    }
                    else
                    {
                        int *l_925 = &g_157;
                        (*l_906) = l_925;
                        l_926 = ((*l_885) = l_905);
                    }
                    (*l_885) = l_926;
                    for (l_916 = (-13); (l_916 < 56); l_916 = safe_add_func_int8_t_s_s(l_916, 9))
                    {
                    }
                }
                else
                {
                    unsigned l_931 = 2UL;
                    struct S0 *l_933 = &g_318;
                    (*l_906) = &l_26;
                    if (l_931)
                    {
                        (*l_904) = 1L;
                        if (p_18)
                            break;
                    }
                    else
                    {
                        int *l_932 = &g_157;
                        (*l_906) = l_932;
                    }
                    (*l_906) = l_23;
                    if ((*l_904))
                    {
                        (*l_898) = &g_97;
                    }
                    else
                    {
                        struct S0 **l_934 = &l_885;
                        (*g_168) = l_933;
                        if (p_18)
                            break;
                        (*l_934) = ((*l_898) = (*g_168));
                    }
                }
            }
        }
        else
        {
            int *l_937 = &g_157;
            char *l_941 = &g_41;
            char **l_954 = (void*)0;
            char **l_955 = &l_40;
            char **l_956 = (void*)0;
            char **l_957 = &g_872;
            (**l_909) = (*g_102);
            for (g_175 = (-16); (g_175 != (-17)); g_175--)
            {
                int *l_942 = &g_157;
                unsigned short *l_948 = &g_496;
                unsigned short **l_947 = &l_948;
                unsigned short ***l_946 = &l_947;
                unsigned l_953 = 18446744073709551607UL;
                (*g_102) = l_937;
                (*g_102) = (*g_102);
                l_940 = (safe_mod_func_uint16_t_u_u(0x85E8L, g_79));
                if ((**g_102))
                {
                    if ((*g_103))
                    {
                        int **l_943 = &l_942;
                        struct S0 *l_945 = &g_318;
                        (*g_168) = (void*)0;
                        (*l_943) = ((*g_102) = func_27((**l_909), l_941, l_942, (*l_23)));
                        (*l_945) = func_35(l_941, p_18, (*g_102), l_944);
                    }
                    else
                    {
                        (*g_792) = (l_946 != g_949);
                        if (p_18)
                            break;
                        (**l_909) = (void*)0;
                        (*g_102) = (void*)0;
                    }
                }
                else
                {
                    int **l_952 = &g_103;
                    (*l_937) = (**g_102);
                    (**g_102) = ((l_952 != (*l_909)) == l_953);
                    return p_18;
                }
            }
            (*g_102) = l_937;
        }
        (*l_959) = l_958;
        for (g_318.f0 = 0; (g_318.f0 != (-3)); g_318.f0 = safe_sub_func_uint32_t_u_u(g_318.f0, 9))
        {
            int **l_963 = &l_23;
            unsigned *l_968 = &g_110;
            int l_986 = 0xDC1989CAL;
            struct S0 l_988 = {0xA72A7F3CL,2UL};
            int *l_1012 = &g_157;
            (*l_963) = l_23;
        }
        (*l_1019) = l_1018;
    }
    else
    {
        (*g_103) = (safe_rshift_func_int8_t_s_u((*g_872), 3));
    }
    l_884 = l_884;
    (*l_1011) = (safe_lshift_func_int8_t_s_u((-2L), 2));
    (*l_1024) = &l_290;
    return p_18;
}







static int * func_27(int * p_28, char * p_29, int * p_30, short p_31)
{
    int **l_610 = (void*)0;
    int **l_611 = &g_103;
    char *l_622 = &g_41;
    struct S0 l_634 = {0x98860A4EL,0x2FL};
    int *l_636 = &g_157;
    short *l_640 = &g_603;
    char *l_674 = &g_41;
    int *l_812 = &g_157;
lbl_848:
    (*l_611) = p_28;
lbl_851:
    for (g_41 = 0; (g_41 > (-6)); g_41--)
    {
        char *l_624 = &g_41;
        struct S0 **l_648 = &g_169;
        unsigned l_666 = 0x6D6BC9B8L;
        char **l_667 = &l_624;
        struct S0 l_675 = {-10L,0xD2L};
        struct S0 *l_676 = &l_634;
        unsigned char ***l_679 = &g_548;
        unsigned char l_680 = 0x3AL;
        int *l_684 = &g_24;
    }
    (*l_611) = &g_157;
    if (((void*)0 == &g_136))
    {
        unsigned short l_685 = 0xF4F2L;
        struct S0 *l_690 = &l_634;
        unsigned char ***l_697 = &g_548;
        int l_719 = (-1L);
        int *l_720 = &l_719;
        unsigned ***l_749 = (void*)0;
        (*l_611) = &g_24;
        (*g_604) = (0x08DDL <= l_685);
        for (g_157 = (-23); (g_157 == 29); g_157 = safe_add_func_int32_t_s_s(g_157, 5))
        {
            unsigned l_704 = 0x01BF38B3L;
            unsigned char ****l_712 = &l_697;
            int l_714 = 7L;
            struct S0 ***l_716 = &g_168;
            short l_769 = 1L;
            int l_811 = 0xF6CF9DF2L;
            for (g_79 = (-20); (g_79 >= (-20)); ++g_79)
            {
                short l_691 = 0xCAB4L;
                unsigned short *l_696 = &g_68;
                unsigned *l_705 = &g_132;
                unsigned *l_706 = &l_704;
                unsigned char l_725 = 0xE6L;
                int l_736 = 0x5325BD23L;
                struct S0 *l_737 = &l_634;
                (*g_168) = l_690;
                if (l_691)
                    continue;
            }
        }
    }
    else
    {
        int l_823 = 0x5F5E5127L;
        unsigned *l_824 = &g_110;
        for (g_132 = 4; (g_132 == 50); g_132++)
        {
            int *l_817 = &g_157;
            short *l_827 = &g_175;
            struct S0 l_845 = {1L,0x3DL};
            for (g_318.f1 = 20; (g_318.f1 == 45); g_318.f1++)
            {
                unsigned short *l_820 = &g_68;
                unsigned short **l_819 = &l_820;
                unsigned short ***l_818 = &l_819;
                (*l_611) = l_817;
                (*l_818) = (void*)0;
                (*l_611) = l_817;
                if ((*p_28))
                    break;
            }
            if ((safe_lshift_func_uint16_t_u_s(l_823, (l_824 != p_28))))
            {
                unsigned l_828 = 0x5712BABEL;
                struct S0 l_843 = {-1L,251UL};
                int *l_844 = (void*)0;
                for (g_75 = 5; (g_75 != (-3)); g_75 = safe_sub_func_int32_t_s_s(g_75, 8))
                {
                    int *l_829 = &l_823;
                    unsigned ***l_833 = &g_136;
                    unsigned ****l_832 = &l_833;
                    if ((((**g_734) & (l_827 == (void*)0)) > l_828))
                    {
                        (*l_611) = p_28;
                    }
                    else
                    {
                        struct S0 l_842 = {0xA8C1E3A1L,0xD6L};
                        (*g_103) = (*g_792);
                        (*l_611) = l_829;
                        l_843 = l_842;
                        return p_30;
                    }
                }
                l_634 = l_845;
                (*l_611) = (*l_611);
                for (l_634.f0 = 0; (l_634.f0 < (-11)); --l_634.f0)
                {
                    if (g_132)
                        goto lbl_848;
                    if (l_823)
                        break;
                    if ((*p_28))
                        break;
                    (*l_636) = (*p_28);
                }
            }
            else
            {
                short l_867 = (-1L);
                int *l_871 = &l_823;
                if (l_823)
                    break;
                for (g_41 = 0; (g_41 != (-28)); --g_41)
                {
                    unsigned short *l_856 = (void*)0;
                    unsigned short *l_857 = &g_68;
                    int l_870 = 0xE7AD2213L;
                    if ((*p_28))
                    {
                        (*l_611) = (l_817 = (void*)0);
                    }
                    else
                    {
                        if (g_157)
                            goto lbl_851;
                    }
                    g_792 = &g_24;
                    if ((((safe_add_func_uint16_t_u_u(((*l_857) = p_31), p_31)) != (((p_31 < (g_866 = (g_496 = ((safe_lshift_func_uint8_t_u_s(p_31, (**g_734))) < (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((**g_548) == (****g_746)), (*g_297))), (safe_sub_func_uint8_t_u_u((****g_746), (*g_735))))))))) != 0xA341L) != (-9L))) > g_41))
                    {
                        (*g_792) = (((**g_548) = ((***g_747) && l_867)) | (safe_mul_func_uint8_t_u_u(l_870, (g_8 || (-1L)))));
                    }
                    else
                    {
                        l_634 = l_845;
                    }
                    (*l_611) = p_28;
                }
                (*p_28) = (safe_rshift_func_uint16_t_u_s((((p_31 > 0x0658L) != 4294967295UL) <= (*g_735)), 13));
                (**l_611) = (*g_604);
            }
        }
    }
    return (*l_611);
}







static char * func_32(struct S0 p_33, int * p_34)
{
    unsigned l_401 = 0UL;
    struct S0 *l_420 = &g_318;
    int l_518 = 1L;
    char *l_530 = (void*)0;
    unsigned short ***l_541 = (void*)0;
    unsigned char **l_550 = &g_549;
    short *l_574 = (void*)0;
    unsigned char ***l_609 = (void*)0;
    unsigned char ****l_608 = &l_609;
    if (l_401)
    {
        char l_402 = (-3L);
        int *l_403 = (void*)0;
        unsigned short *l_431 = &g_68;
        short ***l_484 = (void*)0;
        if ((l_401 || l_402))
        {
            unsigned char l_406 = 6UL;
            int *l_407 = &g_157;
            unsigned short *l_432 = &g_68;
            if (l_402)
            {
                unsigned short l_415 = 0x64BAL;
                int l_417 = 0x7048A7D4L;
                struct S0 *l_419 = &g_318;
                int *l_421 = &g_157;
                (*g_102) = l_403;
                if ((p_33.f0 | g_157))
                {
                    int *l_404 = &g_24;
                    struct S0 *l_405 = &g_97;
                    (*l_405) = p_33;
                    if (l_406)
                    {
                        char *l_408 = &l_402;
                        l_407 = p_34;
                        return &g_41;
                    }
                    else
                    {
                        (*l_404) = (*l_407);
                        if (l_401)
                            goto lbl_416;
                    }
                    for (g_68 = (-17); (g_68 <= 38); g_68 = safe_add_func_uint16_t_u_u(g_68, 4))
                    {
                        (*l_404) = (safe_lshift_func_uint8_t_u_u((~(*l_407)), 1));
                        (*g_168) = &p_33;
                        (*g_102) = p_34;
                    }
                }
                else
                {
                    if ((((safe_mul_func_uint8_t_u_u((0x5186942EL > p_33.f1), ((*l_407) > l_415))) >= 0xCAL) & 0xBB85L))
                    {
                        (*g_102) = (*g_102);
                    }
                    else
                    {
lbl_416:
                        (*g_102) = p_34;
                        (*g_102) = (*g_102);
                        (*l_407) = g_318.f1;
                        (*g_102) = l_403;
                    }
                    if (g_75)
                    {
                        int **l_418 = &l_403;
                        (*l_407) = (l_417 > l_401);
                        (*l_418) = ((*g_102) = (*g_102));
                        l_420 = ((*g_168) = l_419);
                    }
                    else
                    {
                        return &g_41;
                    }
                    (*g_102) = (*g_102);
                    (**g_168) = (*g_169);
                }
                (*g_102) = l_421;
            }
            else
            {
                char *l_430 = &g_41;
                int l_439 = 0x323DC4FEL;
                for (g_110 = 0; (g_110 < 25); g_110 = safe_add_func_int32_t_s_s(g_110, 5))
                {
                    unsigned char l_440 = 255UL;
                    short **l_454 = &g_297;
                    short **l_455 = &g_297;
                    (*g_102) = p_34;
                    for (g_157 = 0; (g_157 != (-9)); g_157 = safe_sub_func_uint8_t_u_u(g_157, 8))
                    {
                        l_403 = (*g_102);
                    }
                    (*g_102) = (*g_102);
                    if ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((-1L), 15)), p_33.f1)))
                    {
                        (*l_407) = 0xED544C46L;
                        return l_430;
                    }
                    else
                    {
                        unsigned l_433 = 0x4BBB311BL;
                        unsigned l_434 = 0x397EC065L;
                        short ***l_441 = (void*)0;
                        short ***l_442 = &g_296;
                        short ***l_443 = &g_296;
                        short ***l_444 = &g_296;
                        short ***l_445 = (void*)0;
                        short ***l_446 = &g_296;
                        short ***l_447 = &g_296;
                        short ***l_448 = (void*)0;
                        short ***l_449 = &g_296;
                        short ***l_450 = &g_296;
                        short ***l_451 = &g_296;
                        short ***l_452 = &g_296;
                        short ***l_453 = &g_296;
                        int *l_456 = &g_24;
                        l_434 = ((l_431 != l_432) == (l_433 >= ((*g_297) = l_401)));
                        (*g_102) = p_34;
                        (*l_456) = (safe_sub_func_int32_t_s_s(4L, (g_175 < ((((~((*l_430) = (l_439 & ((((*l_407) = (*l_407)) != 0xDAFEE236L) & l_440)))) > ((l_454 = &g_297) != l_455)) == (g_318.f1 = (l_439 > p_33.f1))) > (-2L)))));
                    }
                }
            }
        }
        else
        {
            unsigned **l_462 = &g_137;
            int l_467 = 9L;
            unsigned char l_468 = 0xF2L;
            short **l_472 = &g_297;
            char *l_485 = &g_41;
            int l_490 = 0L;
            int *l_491 = &g_24;
            for (l_401 = 6; (l_401 <= 44); l_401 = safe_add_func_int8_t_s_s(l_401, 3))
            {
                unsigned l_459 = 0x1E926790L;
                unsigned **l_460 = (void*)0;
                unsigned ***l_461 = &l_460;
                if (((((*g_297) = l_459) ^ (((*l_461) = l_460) == (l_462 = &g_137))) | (safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(l_467, (p_33.f1 <= (((((&g_137 != &g_137) > (((l_459 && ((9L | 0xE4L) >= g_68)) && g_41) || 0L)) != l_468) > 0xB1A0AE1EL) < l_402)))) >= g_318.f0), l_468))))
                {
                    short **l_469 = &g_297;
                    short ***l_470 = (void*)0;
                    short ***l_471 = &g_296;
                    l_472 = ((*l_471) = l_469);
                }
                else
                {
                    int *l_473 = &l_467;
                    (*l_473) = 1L;
                    (*l_420) = (*l_420);
                }
            }
            (*g_102) = p_34;
            (*l_491) = (+(safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((*g_297) = l_401), (safe_lshift_func_int16_t_s_u((255UL & ((*l_485) = (0xB3L & (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(2L, (&g_296 == l_484))), 0xAA21L))))), (safe_sub_func_uint8_t_u_u(((~(safe_sub_func_int32_t_s_s((l_401 < l_490), l_468))) & p_33.f1), g_318.f0)))))) & 9L), 0x2903L)));
            return &g_75;
        }
    }
    else
    {
        unsigned char l_497 = 0xFEL;
        int l_517 = 0xC442291AL;
        struct S0 l_532 = {0xF3AD5F57L,0x7DL};
        unsigned char l_546 = 0x52L;
        char *l_566 = &g_41;
        struct S0 *l_605 = (void*)0;
        struct S0 *l_606 = &l_532;
        int *l_607 = &g_24;
        for (p_33.f1 = 9; (p_33.f1 == 17); p_33.f1 = safe_add_func_int8_t_s_s(p_33.f1, 6))
        {
            int l_516 = 6L;
            int *l_551 = (void*)0;
            struct S0 l_567 = {0xD75B7889L,0UL};
            char *l_582 = &g_75;
            if ((l_497 = (safe_mul_func_int8_t_s_s(p_33.f1, g_496))))
            {
                int *l_500 = &g_24;
                struct S0 l_531 = {0L,254UL};
                unsigned short *l_544 = (void*)0;
                unsigned short **l_543 = &l_544;
                unsigned short ***l_542 = &l_543;
                unsigned char l_547 = 3UL;
                int ***l_561 = &g_102;
                short l_564 = 1L;
                unsigned char ***l_565 = &l_550;
                if ((&l_401 != &l_401))
                {
                    p_34 = &g_24;
                    p_34 = p_34;
                }
                else
                {
                    struct S0 **l_498 = &g_169;
                    struct S0 ***l_499 = &l_498;
                    int l_512 = 0xF0BBE299L;
                    (*g_168) = (void*)0;
                    (*l_499) = l_498;
                    (*g_102) = l_500;
                    for (g_24 = 0; (g_24 >= 10); g_24 = safe_add_func_int32_t_s_s(g_24, 4))
                    {
                        int l_507 = 6L;
                        char *l_513 = &g_41;
                        l_517 = (safe_sub_func_int16_t_s_s((g_75 >= p_33.f0), (!((((safe_rshift_func_uint16_t_u_u(((l_507 != (~((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((0x4395L | p_33.f0), (((*l_513) = ((l_512 | (**g_102)) | p_33.f1)) < (safe_mod_func_uint32_t_u_u(l_512, l_516))))), (*g_297))) < l_401))) >= 0x7B46B6E0L), 7)) > l_497) <= p_33.f1) && p_33.f1))));
                        (*g_102) = (*g_102);
                        l_518 = (*g_103);
                        (*g_102) = (*g_102);
                    }
                }
                if (l_497)
                {
                    int **l_526 = &g_103;
                    int ***l_525 = &l_526;
                    char *l_529 = &g_41;
                    unsigned short *l_545 = &g_68;
                    (*l_500) = l_497;
                    if ((p_33.f0 >= (p_33.f1 & (l_518 <= (p_33.f0 >= ((!((safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(((g_102 = &p_34) == ((*l_525) = &g_103)), ((*l_529) = (safe_sub_func_uint32_t_u_u(p_33.f1, (p_33.f1 | l_517)))))), g_8)) & 0x7D56FE25L)) < p_33.f0))))))
                    {
                        return &g_41;
                    }
                    else
                    {
                        p_34 = (void*)0;
                        l_532 = l_531;
                    }
                    if ((safe_rshift_func_uint16_t_u_s(4UL, (safe_mod_func_uint32_t_u_u(((g_68 || (safe_rshift_func_int16_t_s_u((g_24 || ((safe_rshift_func_int16_t_s_s(l_516, ((*g_297) = l_401))) >= ((l_541 != l_542) | (l_546 = (g_496 = ((*l_545) = l_517)))))), 8))) != l_401), 0x193DCADFL)))))
                    {
                        if (l_547)
                            break;
                    }
                    else
                    {
                        l_550 = g_548;
                        (*l_500) = (*l_500);
                    }
                    l_551 = p_34;
                }
                else
                {
                    for (l_531.f0 = 0; (l_531.f0 < (-27)); l_531.f0 = safe_sub_func_int32_t_s_s(l_531.f0, 3))
                    {
                        short l_554 = 0x208DL;
                        (*l_500) = l_554;
                    }
                    (*g_102) = p_34;
                }
                l_567 = func_35(l_530, (safe_mul_func_uint8_t_u_u((**g_548), (safe_mul_func_uint8_t_u_u((0L ^ ((((*l_561) = &g_103) != (void*)0) > ((*g_297) = (safe_lshift_func_uint8_t_u_u(l_401, l_564))))), (((*l_565) = (void*)0) == &g_549))))), &g_157, l_566);
                return &g_75;
            }
            else
            {
                short *l_573 = &g_175;
                int *l_581 = &g_24;
                for (g_97.f1 = 0; (g_97.f1 > 37); g_97.f1 = safe_add_func_int16_t_s_s(g_97.f1, 9))
                {
                    short *l_577 = &g_175;
                    for (g_496 = (-15); (g_496 < 22); g_496++)
                    {
                        (*g_102) = p_34;
                    }
                    if (((g_68 = (p_33.f1 == (safe_unary_minus_func_uint16_t_u(g_175)))) | 0x1C41L))
                    {
                        short *l_575 = &g_175;
                        short **l_576 = &l_575;
                        l_567 = ((*l_420) = p_33);
                        (*g_168) = &p_33;
                    }
                    else
                    {
                        int *l_578 = &l_518;
                        unsigned l_579 = 0xC6EE532EL;
                        char *l_580 = &g_41;
                        (*l_578) = ((p_33.f1 == g_132) != p_33.f0);
                        (*l_420) = p_33;
                    }
                }
                (*g_102) = l_581;
                (*g_102) = (*g_102);
                (*l_581) = 0x31CCC557L;
            }
            (*l_420) = p_33;
            (*g_103) = ((safe_lshift_func_uint16_t_u_u(p_33.f1, 6)) >= ((void*)0 == &g_496));
            for (g_318.f1 = 0; (g_318.f1 > 20); g_318.f1 = safe_add_func_uint32_t_u_u(g_318.f1, 8))
            {
                int *l_593 = &g_24;
                int **l_594 = &l_551;
                (*l_594) = ((*g_102) = l_593);
                (*g_102) = ((*l_594) = (*l_594));
            }
        }
        (*l_606) = ((*l_420) = p_33);
        (*g_102) = (l_607 = &l_517);
        (*g_168) = &p_33;
    }
    (*g_604) = (((*g_297) = ((&l_550 == ((*l_608) = &g_548)) ^ p_33.f1)) > p_33.f0);
    return l_530;
}







static struct S0 func_35(char * p_36, int p_37, int * p_38, char * p_39)
{
    int *l_396 = &g_157;
    struct S0 l_400 = {0xA989546EL,255UL};
    for (g_79 = 0; (g_79 == 14); g_79 = safe_add_func_uint32_t_u_u(g_79, 1))
    {
        for (g_68 = 19; (g_68 < 52); g_68 = safe_add_func_int8_t_s_s(g_68, 1))
        {
            unsigned ***l_395 = &g_136;
            struct S0 l_399 = {-1L,5UL};
            (*l_395) = &g_137;
            (*g_102) = l_396;
            for (g_110 = 0; (g_110 < 42); g_110 = safe_add_func_int16_t_s_s(g_110, 9))
            {
                (**g_102) = (*p_38);
                return l_399;
            }
            if ((**g_102))
                continue;
        }
    }
    return l_400;
}







static char * func_43(char * p_44, char * p_45, unsigned short p_46, char * p_47)
{
    int l_291 = 0x314EDC10L;
    unsigned l_302 = 0UL;
    int *l_306 = &g_157;
    unsigned **l_335 = &g_137;
    struct S0 l_384 = {3L,0x18L};
    if ((l_291 <= l_291))
    {
        return p_45;
    }
    else
    {
        short *l_295 = &g_175;
        short **l_294 = &l_295;
        int l_299 = 1L;
        unsigned char *l_300 = (void*)0;
        unsigned char *l_301 = &g_97.f1;
        struct S0 l_303 = {0xA3C4F20EL,0xC4L};
        int l_364 = 0x0D5994C3L;
        int *l_388 = &g_157;
        if ((1L < (safe_add_func_int8_t_s_s(((l_291 < p_46) != ((((0xE5C8995CL >= ((g_296 = l_294) != (void*)0)) < (safe_unary_minus_func_uint32_t_u((g_8 ^ l_299)))) == ((*l_301) = (((p_46 >= p_46) && p_46) || 1L))) ^ l_291)), l_302))))
        {
            int l_307 = 0x9BEA6698L;
            struct S0 **l_310 = &g_169;
            int *l_354 = &g_24;
            (*g_169) = l_303;
lbl_377:
            l_299 = (safe_add_func_int16_t_s_s((l_306 == &l_299), p_46));
            if (l_307)
            {
                unsigned l_320 = 0x9EC09B07L;
                (*l_306) = (!0L);
                for (g_79 = 0; (g_79 < (-6)); g_79 = safe_sub_func_uint32_t_u_u(g_79, 4))
                {
                    int *l_313 = &g_157;
                    if (p_46)
                    {
                        l_306 = &g_157;
                    }
                    else
                    {
                        struct S0 ***l_311 = &g_168;
                        int *l_312 = &g_157;
                        (*l_306) = p_46;
                        (*g_102) = l_306;
                        (*l_311) = (l_310 = &g_169);
                        (*g_102) = l_312;
                    }
                    (*g_102) = l_313;
                }
                for (g_24 = (-4); (g_24 > 16); g_24++)
                {
                    unsigned l_319 = 0xB74285D3L;
                    int l_323 = 0x3EC36759L;
                    int **l_324 = (void*)0;
                    int **l_325 = &l_306;
                    for (l_299 = (-14); (l_299 > 2); l_299 = safe_add_func_uint8_t_u_u(l_299, 7))
                    {
                        g_318 = ((**g_168) = (*g_169));
                    }
                    l_319 = l_299;
                }
                for (p_46 = 0; (p_46 < 31); p_46 = safe_add_func_uint8_t_u_u(p_46, 9))
                {
                    if (p_46)
                        break;
                    return p_47;
                }
            }
            else
            {
                unsigned l_336 = 0x7C5671B1L;
                int *l_355 = &g_157;
                unsigned short *l_368 = &g_68;
                unsigned short **l_367 = &l_368;
                for (g_318.f0 = 0; (g_318.f0 != (-18)); --g_318.f0)
                {
                    short l_332 = 4L;
                    short l_345 = 0L;
                    int *l_346 = &l_299;
                    unsigned short *l_349 = &g_68;
                    int ***l_366 = &g_102;
                    l_332 = (safe_add_func_int32_t_s_s(g_75, 0x482B510AL));
                    (*l_346) = (safe_sub_func_int16_t_s_s(((((l_335 = (void*)0) == &g_137) || (p_46 = p_46)) > (255UL <= l_336)), (safe_sub_func_int32_t_s_s(((*l_306) = (+(((safe_lshift_func_int16_t_s_u(l_303.f1, 6)) >= l_332) || ((*l_306) <= (safe_rshift_func_uint16_t_u_s((((*g_297) = (l_307 ^ l_299)) & l_345), 7)))))), 0UL))));
                    if ((safe_lshift_func_uint16_t_u_u(((*l_349) = p_46), (p_46 != (((*l_295) = (safe_mod_func_int8_t_s_s(g_8, (safe_sub_func_int32_t_s_s(((*l_346) = (l_354 != l_355)), ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((!(-1L)), (l_364 = ((safe_mod_func_int16_t_s_s((p_46 <= 0xC929L), (safe_mod_func_int32_t_s_s(g_79, p_46)))) > g_132)))), g_24)) != p_46)))))) != l_303.f1)))))
                    {
                        (*g_102) = &g_157;
                        (*l_354) = p_46;
                    }
                    else
                    {
                        int *l_365 = (void*)0;
                        (*g_102) = l_365;
                    }
                    (*l_366) = &g_103;
                }
                if (((((*l_367) = (void*)0) != (void*)0) | p_46))
                {
                    int *l_369 = &g_24;
                    struct S0 *l_373 = &l_303;
                    (*l_306) = (*l_355);
                    (*l_354) = 0x87DCAFD5L;
                    if ((*l_306))
                    {
                        unsigned short ***l_370 = (void*)0;
                        unsigned short ***l_371 = &l_367;
                        int **l_372 = &l_306;
                        (*l_310) = (void*)0;
                        l_369 = l_354;
                        (*l_371) = (void*)0;
                        (*l_372) = ((*g_102) = (void*)0);
                    }
                    else
                    {
                        struct S0 **l_374 = &l_373;
                        (*l_374) = ((*g_168) = l_373);
                        (**g_168) = (*g_169);
                    }
                }
                else
                {
                    char l_382 = 0xBDL;
                    int *l_383 = &l_299;
                    for (l_291 = (-21); (l_291 >= (-17)); l_291 = safe_add_func_int32_t_s_s(l_291, 6))
                    {
                        if (g_24)
                            goto lbl_377;
                    }
                    if ((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_382, (*p_45))), g_8)))
                    {
                        return &g_41;
                    }
                    else
                    {
                        (*g_102) = l_383;
                        (**g_168) = l_384;
                    }
                    for (g_68 = 4; (g_68 != 32); g_68++)
                    {
                        unsigned **l_387 = &g_137;
                        l_387 = l_387;
                        return &g_75;
                    }
                    (*g_102) = l_355;
                }
                (*g_102) = l_354;
            }
            (*g_102) = l_354;
        }
        else
        {
            (*g_169) = (*g_169);
        }
        (*g_102) = &l_364;
        l_306 = l_388;
        for (g_24 = 0; (g_24 < (-16)); g_24 = safe_sub_func_int8_t_s_s(g_24, 8))
        {
            (*g_102) = (*g_102);
        }
    }
    return &g_41;
}







static char * func_48(int * p_49, short p_50, short p_51, int * p_52, int * p_53)
{
    unsigned char l_66 = 1UL;
    char *l_101 = &g_41;
    int l_129 = 0xDE09DF94L;
    struct S0 l_138 = {0x61D1304DL,0x64L};
    int *l_141 = &l_129;
    unsigned short *l_158 = &g_68;
    unsigned l_179 = 0xD41626ACL;
    unsigned ***l_223 = &g_136;
    struct S0 l_232 = {-1L,0x7CL};
    int l_237 = 0L;
    int l_240 = 0L;
    short *l_276 = &g_175;
    short **l_275 = &l_276;
    for (g_41 = 0; (g_41 > 21); g_41++)
    {
        int l_87 = 5L;
        unsigned l_111 = 18446744073709551615UL;
        unsigned l_155 = 0x3F1EC4A5L;
        int *l_156 = &g_157;
        unsigned short **l_159 = &l_158;
        struct S0 l_235 = {0xD5E5635DL,0x6EL};
        char *l_236 = &g_75;
    }
    (**g_168) = l_232;
    (*p_53) = (g_24 ^ ((*l_141) && l_237));
    if (((*l_141) & (safe_lshift_func_uint16_t_u_u(p_50, (g_97.f0 <= l_240)))))
    {
        char *l_241 = &g_41;
        return l_241;
    }
    else
    {
        int *l_251 = (void*)0;
        int l_258 = 0x074C4DBCL;
        char *l_272 = (void*)0;
        for (l_138.f0 = 0; (l_138.f0 >= (-19)); l_138.f0 = safe_sub_func_uint8_t_u_u(l_138.f0, 7))
        {
            int **l_244 = &l_141;
            (*l_244) = ((*g_102) = &l_129);
            (*l_244) = (*g_102);
            (*g_103) = 0xEA93889BL;
        }
        if ((p_50 < (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((*l_141), 0)), (safe_lshift_func_int8_t_s_u((-1L), 0))))))
        {
            (*g_102) = l_251;
        }
        else
        {
            int *l_254 = &l_129;
            (**g_168) = (*g_169);
            if (l_232.f1)
                goto lbl_279;
lbl_279:
            for (p_51 = 0; (p_51 != (-10)); p_51 = safe_sub_func_uint8_t_u_u(p_51, 5))
            {
                int *l_257 = &l_129;
                int l_270 = 8L;
                short **l_277 = &l_276;
            }
            for (l_258 = 0; (l_258 >= (-8)); l_258--)
            {
                struct S0 l_282 = {0x8F2E3794L,0x6FL};
                short l_285 = 0xDC2CL;
                (**g_168) = l_282;
                (*g_103) = ((((safe_mul_func_uint16_t_u_u((((l_285 <= (*l_254)) >= (safe_mod_func_int32_t_s_s((p_50 <= g_79), (*l_254)))) != ((safe_lshift_func_uint16_t_u_s(0x3CEAL, 13)) || l_285)), (0x75L > g_175))) < (*p_49)) ^ g_157) & g_8);
            }
        }
    }
    return l_101;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    transparent_crc(g_318.f1, "g_318.f1", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_1016, "g_1016", print_hash_value);
    transparent_crc(g_1124, "g_1124", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    transparent_crc(g_1251, "g_1251", print_hash_value);
    transparent_crc(g_1284, "g_1284", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1444, "g_1444", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
