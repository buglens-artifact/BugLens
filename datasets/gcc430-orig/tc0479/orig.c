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
   char f0;
   short f1;
   unsigned f2;
   int f3;
   char * const f4;
};


static char g_10[3] = {0xC8L,0xC8L,0xC8L};
static int g_14 = 0x28D5FEAFL;
static int g_61[4][5][6] = {{{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L}},{{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L}},{{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L}},{{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L},{0L,0x36FE5438L,0L,0x36FE5438L,0L,0x36FE5438L}}};
static int g_62 = 4L;
static int *g_75 = &g_62;
static int **g_74 = &g_75;
static int g_81[10] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
static union U0 g_82 = {0L};
static const int *g_87 = &g_61[3][3][3];
static union U0 *g_113 = (void*)0;
static union U0 ** const g_112 = &g_113;
static union U0 g_179 = {0L};
static const union U0 g_210 = {0x5EL};
static const char **g_235 = (void*)0;



static const unsigned char func_1(void);
static int func_15(char * p_16, int * const p_17, int * p_18);
static char * func_19(char p_20, char p_21, char * p_22, short p_23, int p_24);
static short func_25(union U0 p_26);
static short func_30(const union U0 p_31, unsigned short p_32, unsigned short p_33, const char * p_34, char p_35);
static union U0 func_36(int * p_37, union U0 p_38, unsigned p_39);
static int * func_40(int p_41, union U0 p_42, unsigned p_43, unsigned p_44, unsigned char p_45);
static unsigned func_51(unsigned short p_52, const int * p_53, union U0 p_54);
static char func_57(int * p_58);
static int ** func_63(const unsigned p_64, unsigned char p_65, int p_66, const int * p_67);
static const unsigned char func_1(void)
{
    unsigned l_4 = 5UL;
    char *l_9 = &g_10[1];
    int *l_13 = &g_14;
    union U0 l_27 = {0xAEL};
    const unsigned l_380 = 4294967294UL;
    (*l_13) = (((safe_add_func_int8_t_s_s(l_4, (safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_9 == l_9), (((void*)0 != &g_10[1]) > (safe_sub_func_int32_t_s_s(6L, (((&g_10[2] == l_9) != ((g_10[0] | l_4) ^ l_4)) != 1L)))))), g_10[1])))) & l_4) | g_10[1]);
    (*l_13) = func_15(func_19((*l_13), (*l_13), l_9, func_25(l_27), ((*l_13) == 0x2ABC182BL)), l_13, l_13);
    l_13 = (void*)0;
    return l_380;
}







static int func_15(char * p_16, int * const p_17, int * p_18)
{
    char l_376 = 4L;
    char *l_379 = &g_179.f0;
    char **l_378 = &l_379;
    char ***l_377 = &l_378;
    (*p_18) = (safe_sub_func_uint8_t_u_u(0xA0L, (safe_rshift_func_int16_t_s_s(l_376, l_376))));
    (*l_377) = &p_16;
    return l_376;
}







static char * func_19(char p_20, char p_21, char * p_22, short p_23, int p_24)
{
    int ***l_362[1];
    union U0 l_369 = {0xCCL};
    char *l_371 = &g_179.f0;
    int i;
    for (i = 0; i < 1; i++)
        l_362[i] = &g_74;
    g_62 = ((0xC13ABD7DL <= (&g_74 != l_362[0])) <= (((safe_mod_func_uint32_t_u_u(((g_14 == ((void*)0 != &p_24)) < (g_61[3][3][3] == ((safe_sub_func_int16_t_s_s(p_21, 0xA0C8L)) <= g_62))), p_23)) | 5UL) | (*p_22)));
    p_24 = (safe_sub_func_int32_t_s_s(((*p_22) & (0L && (p_21 > (2UL || p_21)))), p_24));
    for (p_24 = 9; (p_24 >= 3); p_24 -= 1)
    {
        char *l_370 = &g_179.f0;
        return l_370;
    }
    return l_371;
}







static short func_25(union U0 p_26)
{
    union U0 l_46 = {-1L};
    int *l_59 = &g_14;
    const char *l_142 = &g_10[1];
    short l_353[3];
    unsigned char l_361 = 0xC1L;
    int i;
    for (i = 0; i < 3; i++)
        l_353[i] = 1L;
    if ((safe_mod_func_int16_t_s_s(p_26.f0, func_30(func_36(func_40(((void*)0 != &g_14), l_46, (safe_mod_func_uint16_t_u_u((((-3L) == (!func_51(((safe_rshift_func_uint16_t_u_u((g_10[0] < func_57(l_59)), g_10[2])) | g_10[1]), l_59, g_82))) | 65528UL), (-6L))), g_14, p_26.f0), p_26, g_10[1]), (*l_59), p_26.f0, l_142, p_26.f0))))
    {
        char *l_355[5];
        char * const *l_354 = &l_355[0];
        int *l_356 = &g_61[3][3][3];
        int i;
        for (i = 0; i < 5; i++)
            l_355[i] = (void*)0;
        l_353[0] = p_26.f0;
        (*l_356) = (((void*)0 != l_354) > (&g_81[6] == l_356));
    }
    else
    {
        int *l_357 = (void*)0;
        int *l_358 = &g_61[0][2][5];
        (*l_358) = p_26.f0;
        (*l_358) = func_57(func_40(((((safe_mod_func_int32_t_s_s(((*l_59) || p_26.f0), 8UL)) & (*l_59)) != 3UL) >= g_210.f0), p_26, (*l_59), (*l_59), p_26.f0));
        for (g_62 = 0; g_62 < 3; g_62 += 1)
        {
            g_10[g_62] = 0xADL;
        }
        (*l_358) = 0xF501CBCAL;
    }
    return l_361;
}







static short func_30(const union U0 p_31, unsigned short p_32, unsigned short p_33, const char * p_34, char p_35)
{
    union U0 **l_151 = &g_113;
    int l_183 = 0xE80D83C7L;
    if (p_31.f0)
    {
        int *l_143 = &g_14;
        unsigned char l_177 = 0x0BL;
        const union U0 *l_178 = &g_179;
        union U0 ***l_279 = (void*)0;
        int l_308 = 0xFEF05E6BL;
        for (g_62 = 9; (g_62 >= 2); g_62 -= 1)
        {
            union U0 ***l_167 = &l_151;
            int i;
            if ((g_81[g_62] && g_61[3][3][3]))
            {
                (*g_74) = l_143;
            }
            else
            {
                const union U0 *l_153 = &g_82;
                const union U0 **l_152 = &l_153;
                int *l_160 = &g_81[6];
                if (p_32)
                {
                    union U0 l_150 = {-4L};
                    int i;
                    g_81[g_62] = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u((p_31.f0 ^ g_10[1]), (*g_87))), 4));
                    if (p_32)
                    {
                        union U0 ***l_148 = (void*)0;
                        int *l_149 = &g_81[g_62];
                        (*l_149) = (l_148 != &g_112);
                        if ((*g_87))
                            break;
                        if ((*g_87))
                            continue;
                    }
                    else
                    {
                        unsigned l_158 = 18446744073709551615UL;
                        (*g_74) = func_40((*l_143), l_150, (l_151 != l_152), ((p_31.f0 ^ (safe_sub_func_uint8_t_u_u(g_81[6], (!((*p_34) < ((p_33 && g_14) != p_31.f0)))))) == l_158), g_10[2]);
                        if (l_158)
                            break;
                    }
                    if (p_32)
                        continue;
                }
                else
                {
                    int l_159[6][9][4] = {{{0x5D1B8DA6L,0x1931FA8CL,(-3L),8L},{0x1931FA8CL,0x8A156A7BL,0xC1D74413L,(-5L)},{0L,(-1L),0x0E40F493L,0x62C38B1DL},{0xDEE9CF0CL,0x17F6069AL,(-5L),0x0928FA46L},{0L,0x626D82A5L,1L,0L},{(-5L),0x1931FA8CL,0xC1D74413L,1L},{1L,(-10L),9L,0x0E40F493L},{0x0928FA46L,1L,0xC488BB19L,1L},{0xC1D74413L,0xC488BB19L,0x9B7D3352L,0x1931FA8CL}},{{0x0E40F493L,(-1L),(-3L),(-1L)},{0x0F359474L,0x9B7D3352L,0x626D82A5L,6L},{0x0F359474L,8L,(-3L),0x5D1B8DA6L},{0x0E40F493L,6L,0x9B7D3352L,0x8A156A7BL},{0xC1D74413L,0x2A67DBE3L,0xC488BB19L,1L},{0x0928FA46L,0L,9L,0xC1D74413L},{1L,0L,0xC1D74413L,0xFCDD685BL},{(-5L),0x5FB79008L,1L,8L},{0L,0x3D763EE6L,(-5L),0xE324BC14L}},{{0xDEE9CF0CL,0x0E40F493L,0x0E40F493L,0xDEE9CF0CL},{0L,9L,0xE324BC14L,0x3D763EE6L},{0x05CD23E3L,0xFCDD685BL,(-1L),8L},{0x626D82A5L,0x8A156A7BL,0x17F6069AL,8L},{(-10L),0xFCDD685BL,5L,0x3D763EE6L},{8L,9L,0L,0xDEE9CF0CL},{(-1L),0x0E40F493L,0x62C38B1DL,0xE324BC14L},{(-1L),0x3D763EE6L,0x1931FA8CL,8L},{0x5D1B8DA6L,0x05CD23E3L,(-1L),(-2L)}},{{0x0F359474L,(-1L),0x41200A2DL,0xFA652D37L},{0x1931FA8CL,0x9B7D3352L,0xC488BB19L,0xC1D74413L},{8L,0x0F359474L,8L,0x18D442BFL},{0x18D442BFL,1L,(-2L),9L},{0xE324BC14L,0x8A156A7BL,0L,1L},{0x5FB79008L,0x2A67DBE3L,0L,5L},{0xE324BC14L,0xFCDD685BL,(-2L),1L},{0x18D442BFL,0xE324BC14L,8L,(-10L)},{8L,(-10L),0xC488BB19L,6L}},{{0x1931FA8CL,1L,0x41200A2DL,0x5FB79008L},{0x0F359474L,1L,(-1L),8L},{0x5D1B8DA6L,(-1L),1L,0x41200A2DL},{0x626D82A5L,0x0E40F493L,0x1931FA8CL,0x1931FA8CL},{5L,5L,8L,0L},{0xDEE9CF0CL,0xFA652D37L,(-3L),3L},{1L,0xC488BB19L,0x0E40F493L,(-3L)},{(-1L),0xC488BB19L,0x626D82A5L,3L},{0xC488BB19L,0xFA652D37L,0x62C38B1DL,0L}},{{(-1L),5L,6L,0x1931FA8CL},{0L,0x0E40F493L,0x17F6069AL,0x41200A2DL},{0x9B7D3352L,(-1L),(-10L),8L},{0x17F6069AL,1L,0xFA652D37L,0x5FB79008L},{0xC1D74413L,1L,3L,1L},{0x5D1B8DA6L,0x17F6069AL,1L,0x17F6069AL},{0x62C38B1DL,1L,8L,0xC488BB19L},{1L,8L,0x626D82A5L,0x3D763EE6L},{0L,8L,(-2L),(-5L)}}};
                    int i, j, k;
                    (*g_74) = func_40((l_159[3][5][3] && ((*l_143) != g_14)), p_31, g_10[1], g_61[1][4][2], ((*l_143) & 0xCCE8995DL));
                    (*g_74) = l_160;
                    for (p_35 = (-25); (p_35 >= 21); p_35 = safe_add_func_int32_t_s_s(p_35, 1))
                    {
                        l_159[2][2][3] = p_31.f0;
                        (*g_74) = &l_159[4][4][1];
                        if (g_81[g_62])
                            continue;
                        (*l_160) = g_81[g_62];
                    }
                    if (p_32)
                        continue;
                }
            }
            for (p_35 = (-10); (p_35 != 22); ++p_35)
            {
                unsigned short l_165 = 0x4F05L;
                int *l_166 = &g_61[2][1][1];
                (*l_166) = l_165;
                return g_61[3][3][3];
            }
            (*l_167) = l_151;
            (*g_74) = &g_81[g_62];
        }
        (*g_74) = l_143;
        for (p_33 = 0; (p_33 <= 3); p_33 += 1)
        {
            int *l_176 = &g_62;
            union U0 l_193 = {0x22L};
            const union U0 *l_209 = &g_210;
            int l_211 = 2L;
            unsigned l_219 = 0x6E04B886L;
            int * const *l_259 = &l_143;
            int * const **l_258 = &l_259;
            int l_276 = 0xD1A2A8A7L;
        }
        for (l_183 = 0; (l_183 < (-6)); --l_183)
        {
            unsigned char l_322 = 6UL;
            union U0 l_323 = {0x0FL};
            for (p_32 = (-30); (p_32 < 51); p_32++)
            {
                l_308 = p_31.f0;
            }
            for (p_32 = (-9); (p_32 != 59); p_32 = safe_add_func_uint8_t_u_u(p_32, 8))
            {
                int l_311 = 0x15CF9A51L;
                union U0 ***l_314 = &l_151;
                int *l_317 = &g_14;
                short l_318[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_318[i] = 0x6873L;
                if (l_311)
                {
                    int *l_319 = &g_81[6];
                    (*l_319) = ((!2UL) == (+(((safe_add_func_uint16_t_u_u(((g_10[1] & l_183) < l_311), ((0xE1FBBDABL && (l_314 == l_279)) == (safe_sub_func_uint32_t_u_u((((func_57(func_40((*g_75), func_36(l_317, p_31, p_32), g_82.f0, p_31.f0, p_35)) < l_318[3]) && (*l_317)) != 65527UL), 0x7F7423C3L))))) ^ 0x80L) | (*l_317))));
                    for (l_311 = 0; (l_311 == (-15)); --l_311)
                    {
                        l_322 = p_31.f0;
                    }
                    (*g_74) = func_40(l_183, l_323, g_179.f0, (5UL && ((*l_317) | 0x70DA7D1EL)), (*l_317));
                }
                else
                {
                    unsigned l_334 = 0xED356443L;
                    (*g_74) = func_40(((l_183 > 0x8F54L) > (**g_74)), p_31, g_61[3][3][3], p_32, (safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((+(((((((safe_mod_func_uint8_t_u_u((*l_317), (safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_31.f0, p_32)), (*p_34))))) && l_322) ^ g_82.f0) & g_82.f0) != (*l_317)) == 0x78527958L) | (-7L))), l_334)), (*l_143))));
                    for (l_322 = 0; (l_322 > 8); ++l_322)
                    {
                        int *l_339 = &g_62;
                        (*g_74) = func_40((*g_87), p_31, g_179.f0, g_10[0], (safe_rshift_func_uint8_t_u_s(p_31.f0, (*p_34))));
                        (*g_75) = p_31.f0;
                        l_339 = func_40((*g_87), l_323, g_81[5], (&l_308 != &l_308), p_32);
                        if ((*l_339))
                            break;
                    }
                }
                if (((*l_317) <= 0UL))
                {
                    unsigned short l_342 = 0x9341L;
                    for (p_33 = 7; (p_33 <= 8); p_33 = safe_add_func_int8_t_s_s(p_33, 9))
                    {
                        l_308 = func_51(g_10[1], &l_308, p_31);
                        if ((*l_143))
                            continue;
                        (**g_74) = l_342;
                    }
                }
                else
                {
                    int *l_343[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_343[i] = &g_62;
                    (*g_74) = l_343[1];
                    (**g_74) = 0x25E5EA0DL;
                    (*g_74) = func_40(((*g_74) == (void*)0), p_31, ((**l_314) != &p_31), ((safe_add_func_int8_t_s_s((p_31.f0 && (safe_lshift_func_int16_t_s_u((((*l_143) ^ (safe_add_func_uint16_t_u_u((((*l_317) > ((safe_unary_minus_func_int32_t_s(p_35)) == p_33)) | (*l_143)), g_81[6]))) > (**g_74)), p_31.f0))), (*l_143))) >= 0x4ADB129CL), (*l_143));
                }
            }
        }
    }
    else
    {
        int l_351[8][9][3] = {{{(-6L),0x1D6F6295L,0x3B2EF797L},{0x7B1F3AF0L,1L,0L},{0x0D1794D5L,(-6L),0x3B2EF797L},{5L,3L,0xFCFCD1B1L},{0xEE8A465BL,(-4L),(-1L)},{1L,0xD72EFC17L,0xF4F48F44L},{0x8BD92167L,(-1L),0L},{1L,0x0E40DF4CL,0x95A96146L},{0xEE8A465BL,(-1L),0L}},{{5L,0x7B1F3AF0L,(-3L)},{0x0D1794D5L,0x9ABEB95CL,0L},{0x7B1F3AF0L,0x7B1F3AF0L,0L},{(-6L),(-1L),0x900CA53AL},{0xD72EFC17L,0x0E40DF4CL,(-2L)},{0x88D794C7L,(-1L),0x8290D2C8L},{0L,0xD72EFC17L,(-2L)},{0xC447E2CCL,(-4L),0x900CA53AL},{1L,3L,0L}},{{(-1L),(-6L),0L},{0x75D45A3CL,1L,(-3L)},{(-1L),0x1D6F6295L,0L},{1L,0xEB8251B0L,0x95A96146L},{0xC447E2CCL,0x88D794C7L,0L},{0L,(-10L),0xF4F48F44L},{0x88D794C7L,0x88D794C7L,(-1L)},{0xD72EFC17L,0xEB8251B0L,0xFCFCD1B1L},{9L,0L,0xC447E2CCL}},{{0x07703AF5L,(-1L),3L},{(-1L),9L,0xC447E2CCL},{0x55BE2AC0L,0L,0x7B1F3AF0L},{(-6L),(-5L),0xEE8A465BL},{(-1L),(-1L),(-10L)},{0xBC298E79L,0x816290F1L,0x1D6F6295L},{(-1L),6L,0x59E41F57L},{(-6L),0x776563E0L,(-4L)},{0x55BE2AC0L,0x07703AF5L,0x0E40DF4CL}},{{(-1L),1L,0x9ABEB95CL},{0x07703AF5L,0x07703AF5L,1L},{9L,0x776563E0L,0x88D794C7L},{(-1L),6L,5L},{0xA373C5ABL,0x816290F1L,(-4L)},{0xCAF53FA4L,(-1L),5L},{(-10L),(-5L),0x88D794C7L},{(-9L),0L,1L},{0x816290F1L,9L,0x9ABEB95CL}},{{6L,(-1L),0x0E40DF4CL},{0x816290F1L,0L,(-4L)},{(-9L),0x07FBC510L,0x59E41F57L},{(-10L),0xA373C5ABL,0x1D6F6295L},{0xCAF53FA4L,7L,(-10L)},{0xA373C5ABL,0xA373C5ABL,0xEE8A465BL},{(-1L),0x07FBC510L,0x7B1F3AF0L},{9L,0L,0xC447E2CCL},{0x07703AF5L,(-1L),3L}},{{(-1L),9L,0xC447E2CCL},{0x55BE2AC0L,0L,0x7B1F3AF0L},{(-6L),(-5L),0xEE8A465BL},{(-1L),(-1L),(-10L)},{(-3L),0L,0x8BD92167L},{6L,6L,(-10L)},{9L,(-5L),0x9ABEB95CL},{0x07FBC510L,(-6L),0x75D45A3CL},{(-10L),(-6L),0xEE8A465BL}},{{(-6L),(-6L),0xD72EFC17L},{(-1L),(-5L),(-4L)},{0xCAF53FA4L,6L,0xEB8251B0L},{0x4D9FC251L,0L,(-1L)},{0x55BE2AC0L,0xCAF53FA4L,0xEB8251B0L},{0x776563E0L,0x816290F1L,(-4L)},{(-1L),(-1L),0xD72EFC17L},{0L,(-1L),0xEE8A465BL},{0x43587B82L,6L,0x75D45A3CL}}};
        int *l_352 = &g_62;
        int i, j, k;
        (*l_352) = (((l_351[1][6][0] ^ 0UL) < (~func_57(l_352))) < l_183);
    }
    return g_61[2][1][3];
}







static union U0 func_36(int * p_37, union U0 p_38, unsigned p_39)
{
    unsigned short l_132[1];
    int l_135[6][8] = {{0x311281BCL,(-10L),(-6L),(-6L),(-10L),0x311281BCL,8L,0x311281BCL},{(-10L),0x311281BCL,8L,0x311281BCL,(-10L),(-6L),(-6L),(-10L)},{0x311281BCL,0xE5C97493L,0xE5C97493L,0x311281BCL,0x62773D59L,(-10L),0x62773D59L,0x311281BCL},{0xE5C97493L,0x62773D59L,0xE5C97493L,(-6L),8L,8L,(-6L),0xE5C97493L},{0x62773D59L,0x62773D59L,8L,(-10L),0xCCF3C38EL,(-10L),8L,0x62773D59L},{0x62773D59L,0xE5C97493L,(-6L),8L,8L,(-6L),0xE5C97493L,0x62773D59L}};
    short l_140 = (-10L);
    union U0 l_141 = {9L};
    int i, j;
    for (i = 0; i < 1; i++)
        l_132[i] = 1UL;
    l_135[3][3] = (safe_sub_func_uint8_t_u_u(0UL, ((+(l_132[0] & ((safe_mod_func_uint8_t_u_u((l_135[3][3] < g_62), ((safe_rshift_func_int8_t_s_s(p_39, 1)) & (g_81[0] && (((safe_mod_func_uint16_t_u_u((l_140 < (((g_61[3][3][3] < (0x4523D0AFL || l_135[5][7])) & 0x0E5FL) | l_135[2][6])), 0x3BFFL)) | l_135[2][4]) | 0x198CL))))) & p_39))) <= 0x74B4L)));
    return l_141;
}







static int * func_40(int p_41, union U0 p_42, unsigned p_43, unsigned p_44, unsigned char p_45)
{
    const unsigned l_111 = 0x7AD18499L;
    int *l_114 = &g_61[3][3][3];
    (*l_114) = ((6UL < (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((-6L), l_111)), (((void*)0 != &g_74) <= (((g_14 < (g_112 != (void*)0)) <= p_41) > g_62)))), 1))) & l_111);
    (*g_112) = (*g_112);
    (*l_114) = (*l_114);
    for (p_45 = 0; (p_45 != 41); p_45++)
    {
        int *l_119 = &g_81[6];
        if (p_42.f0)
        {
            union U0 **l_117 = &g_113;
            union U0 ***l_118 = &l_117;
            (*l_118) = l_117;
            return l_119;
        }
        else
        {
            (*g_74) = &g_61[1][2][0];
            for (p_41 = 13; (p_41 <= (-12)); p_41 = safe_sub_func_uint32_t_u_u(p_41, 8))
            {
                short l_122 = (-1L);
                int l_127 = 0L;
                (*l_119) = l_122;
                (**g_74) = (safe_lshift_func_uint16_t_u_s((+g_81[6]), p_44));
                if ((safe_sub_func_uint8_t_u_u(l_127, g_14)))
                {
                    union U0 **l_129 = &g_113;
                    union U0 ***l_128 = &l_129;
                    (*l_128) = &g_113;
                    (*g_74) = (*g_74);
                    if (p_45)
                        break;
                }
                else
                {
                    return (*g_74);
                }
            }
        }
    }
    return l_114;
}







static unsigned func_51(unsigned short p_52, const int * p_53, union U0 p_54)
{
    union U0 *l_88 = &g_82;
    int l_101 = 0x4DD42852L;
    int *l_102 = (void*)0;
    int *l_103[6];
    unsigned short l_104 = 0UL;
    int i;
    for (i = 0; i < 6; i++)
        l_103[i] = &l_101;
    for (p_52 = 0; (p_52 > 53); p_52 = safe_add_func_int32_t_s_s(p_52, 1))
    {
        const int *l_86 = &g_81[6];
        const int **l_85[8][7][4] = {{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}},{{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86},{&l_86,&l_86,&l_86,&l_86}}};
        unsigned l_100[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_100[i] = 0x6E742402L;
        g_87 = p_53;
        for (g_62 = 0; (g_62 <= 3); g_62 += 1)
        {
            union U0 **l_89 = &l_88;
            int l_92 = 0xBED3A9A7L;
            unsigned l_97 = 0x1FCCBB7AL;
            (*l_89) = l_88;
            l_100[1] = (safe_sub_func_int16_t_s_s((((void*)0 != l_88) < ((*p_53) & l_92)), (g_61[3][3][3] != (((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u((l_97 <= ((((safe_lshift_func_int16_t_s_u(p_54.f0, 0)) <= (l_97 & p_54.f0)) <= g_82.f0) <= g_81[6])), p_52)), 7)) | (*l_86)) | p_54.f0))));
            for (l_92 = 3; (l_92 >= 0); l_92 -= 1)
            {
                (*g_74) = &g_62;
                (*l_89) = &g_82;
                if ((*g_75))
                    break;
            }
        }
        g_87 = p_53;
    }
    l_104 = l_101;
    g_81[8] = (*g_87);
    return g_81[5];
}







static char func_57(int * p_58)
{
    int *l_60 = &g_61[3][3][3];
    (*l_60) = (*p_58);
    for (g_62 = 0; (g_62 <= 3); g_62 += 1)
    {
        const unsigned short l_68[3] = {0xE4A5L,0xE4A5L,0xE4A5L};
        int ***l_80 = &g_74;
        int i;
        (*l_80) = func_63(l_68[2], (*l_60), (*p_58), &g_61[3][3][3]);
        (*l_60) = (*p_58);
        for (g_81[6] = 3; (g_81[6] >= 0); g_81[6] -= 1)
        {
            return (*l_60);
        }
    }
    (*g_74) = (void*)0;
    p_58 = l_60;
    return g_10[1];
}







static int ** func_63(const unsigned p_64, unsigned char p_65, int p_66, const int * p_67)
{
    int *l_69 = (void*)0;
    int *l_70 = &g_61[3][3][3];
    (*l_70) = g_10[2];
    for (p_65 = 0; (p_65 == 1); p_65 = safe_add_func_uint32_t_u_u(p_65, 2))
    {
        int **l_73[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        return g_74;
    }
    for (p_66 = (-12); (p_66 < (-11)); p_66 = safe_add_func_uint8_t_u_u(p_66, 6))
    {
        (*g_74) = &p_66;
    }
    (*l_70) = (p_66 || ((0xC34309E9L < p_66) & (safe_rshift_func_uint8_t_u_s((*l_70), 1))));
    return &g_75;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_82.f0, "g_82.f0", print_hash_value);
    transparent_crc(g_179.f0, "g_179.f0", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
