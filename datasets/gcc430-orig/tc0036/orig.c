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
   const char f0;
   char f1;
   const char f2;
   const unsigned char f3;
   char f4;
};

struct S1 {
   int f0;
};

struct S2 {
   const unsigned f0;
   const long long f1;
   struct S1 f2;
   long long f3;
   const struct S1 f4;
   char f5;
   short f6;
   const struct S0 f7;
   unsigned short f8;
   const unsigned char f9;
};


static unsigned char g_18 = 0x55L;
static struct S0 g_30 = {0x29L,0xA5L,-3L,0x01L,0L};
static int g_35 = 0xC584EDB5L;
static char g_70 = 0x44L;
static int g_80 = 1L;
static int **g_83 = (void*)0;
static char *g_97 = &g_30.f1;
static char **g_96 = &g_97;
static struct S1 g_103 = {0x96A12732L};
static unsigned short g_113 = 6UL;
static const int *g_133 = &g_35;
static const int **g_132 = &g_133;
static int g_151 = 0x7D7DB6C6L;
static const unsigned short g_169 = 6UL;
static struct S2 g_200 = {0x0673FC91L,-10L,{0xDDDDEF21L},2L,{-6L},-10L,9L,{0x4CL,0L,0x3AL,0x1BL,8L},0x4A99L,0xFCL};
static int g_209 = 0xDCD5FEEAL;
static long long g_215 = 0x1C48D9708B61AE0ELL;
static unsigned long long g_253 = 18446744073709551613UL;
static struct S0 **g_287 = (void*)0;
static int **g_289 = (void*)0;
static unsigned short *g_293 = &g_113;
static struct S1 *g_309 = &g_200.f2;
static struct S1 **g_308 = &g_309;
static int ***g_325 = &g_83;
static int *** const *g_324 = &g_325;
static struct S2 g_349 = {0x84DD8C9BL,-6L,{0x8BCF49A6L},1L,{0xDB431697L},0x5FL,0L,{-1L,-2L,-10L,0x09L,0x23L},65527UL,0xB0L};
static struct S2 *g_348 = &g_349;
static int *g_392 = (void*)0;
static unsigned g_411 = 1UL;
static unsigned long long g_465 = 0xE78603037CC93555LL;
static struct S2 **g_512 = &g_348;
static struct S2 ***g_511 = &g_512;
static struct S2 g_537 = {0x9539541AL,0L,{0xBF689521L},0x5EF3ABFB58081878LL,{-1L},3L,0L,{0x45L,1L,-1L,0x1FL,0x9CL},65529UL,251UL};
static int g_545 = 0xC9DEEEC2L;
static struct S2 ****g_604 = &g_511;
static const unsigned long long g_622 = 0x27D1F946E431F0F9LL;
static short *g_645 = &g_537.f6;
static short *g_647 = &g_349.f6;
static unsigned g_651 = 0xC3FC89E2L;
static unsigned long long g_733 = 0x771CC63F308271C9LL;
static const int *g_817 = &g_80;
static long long **g_876 = (void*)0;



static unsigned short func_1(void);
static unsigned short func_7(short p_8, unsigned long long p_9);
static short func_19(struct S1 p_20, unsigned p_21, int p_22, struct S2 p_23, short p_24);
static struct S1 func_25(struct S0 p_26, const struct S0 p_27, unsigned p_28, struct S0 p_29);
static unsigned char func_32(long long p_33);
static unsigned short func_43(unsigned long long p_44);
static unsigned char func_47(unsigned short p_48);
static int func_53(int * p_54, const int * p_55, int * p_56);
static int * func_57(int ** const p_58, int ** p_59, const int ** p_60);
static int ** func_61(short p_62, unsigned p_63, const unsigned short p_64);
static unsigned short func_1(void)
{
    unsigned short l_2 = 0x6FF2L;
    const struct S0 l_31 = {1L,0xCEL,0xAEL,255UL,0xB3L};
    int l_467 = 0x82069F27L;
    struct S1 l_639 = {0x6C547EFBL};
    short *l_643 = (void*)0;
    struct S2 l_649 = {0x00DE2BDFL,0xBCA897FFD160FA78LL,{2L},0L,{5L},0L,-1L,{8L,0L,-10L,1UL,0x0DL},65535UL,248UL};
    int **l_659 = (void*)0;
    char * const *l_805 = &g_97;
    char * const **l_804 = &l_805;
    const long long l_808 = 0xD57C685CF83B5D35LL;
    char l_824 = 0xBAL;
    const int **l_841 = &g_133;
    short l_866 = 0x4DC2L;
    int * const l_873 = &l_467;
    long long ***l_877 = &g_876;
    int l_882 = (-1L);
    if (l_2)
    {
        unsigned l_466 = 2UL;
        int l_638 = 0xA2988A3EL;
        int ** const l_658 = &g_392;
        const int *l_666 = &g_35;
        struct S1 l_700 = {0x20462155L};
        int *l_753 = &g_80;
        long long l_775 = 0x3FFE4227069578FELL;
        unsigned long long l_801 = 18446744073709551615UL;
        short l_823 = 1L;
        for (l_2 = (-4); (l_2 >= 10); l_2 = safe_add_func_int16_t_s_s(l_2, 7))
        {
            unsigned l_487 = 0x88620673L;
            struct S2 l_488 = {0x89612D35L,-8L,{0x1F02B386L},0x82958C2794FBEF73LL,{8L},0L,0L,{7L,-2L,0x02L,1UL,0L},0UL,0UL};
            const int **l_660 = &g_133;
            int l_664 = 0x30713DA4L;
            struct S0 *l_672 = &g_30;
            int **l_696 = &g_392;
            int ***l_712 = &l_659;
            unsigned long long l_734 = 18446744073709551611UL;
            unsigned short l_736 = 1UL;
            struct S2 **l_749 = &g_348;
            unsigned l_768 = 0UL;
            unsigned l_773 = 18446744073709551615UL;
        }
        if ((safe_mod_func_int32_t_s_s(((void*)0 == l_804), (*g_133))))
        {
            return (*l_753);
        }
        else
        {
            struct S0 *l_809 = (void*)0;
            struct S0 **l_810 = &l_809;
            const int ***l_811 = &g_132;
            (*l_753) = (safe_sub_func_uint32_t_u_u(l_808, 0x5FD911D9L));
            (*l_810) = l_809;
            (*l_753) = (**g_132);
            (*l_658) = func_57((*g_325), (**g_324), ((*l_811) = &g_133));

            ;
            ;
        }

        ;
        ;
        for (g_200.f6 = 0; (g_200.f6 > 11); g_200.f6++)
        {
            unsigned l_816 = 1UL;
            short **l_845 = (void*)0;
            int l_867 = 8L;
            for (l_649.f6 = 10; (l_649.f6 > (-19)); l_649.f6 = safe_sub_func_uint8_t_u_u(l_649.f6, 3))
            {
                return (*g_293);
            }
            (*g_309) = l_700;
            if (l_816)
            {
                int *l_822 = &g_545;
                int l_827 = (-10L);
                short ***l_846 = (void*)0;
                short ***l_847 = &l_845;
                (*g_132) = g_817;

                ;
                if ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u(((l_822 == (void*)0) != (*g_645)), func_43(g_622))) < l_823), l_816)))
                {
                    return l_816;
                }
                else
                {
                    int **l_840 = &g_392;
                    (*l_753) = l_824;
                    if (((safe_add_func_uint32_t_u_u(0xD689D73FL, l_827)) ^ (safe_div_func_int8_t_s_s((*l_753), (((*g_97) <= (((*g_604) != (*g_604)) >= g_200.f5)) & (safe_lshift_func_int8_t_s_u((**g_96), 6)))))))
                    {
                        int *l_832 = &g_209;
                        int **l_833 = &l_822;
                        (*l_833) = func_57(func_61((*g_645), ((*l_658) != ((*l_833) = l_832)), (safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_div_func_int64_t_s_s(g_70, 0x603419834FE6B643LL)), (*g_97))), g_253))), l_840, l_841);

                        ;
                        ;
                    }
                    else
                    {
                        int ***l_842 = (void*)0;
                        int ***l_843 = (void*)0;
                        int ***l_844 = &l_659;
                        (*l_658) = func_57(((*l_844) = (*g_325)), &l_822, &g_133);

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                (*l_847) = l_845;
                for (l_649.f3 = (-20); (l_649.f3 <= (-16)); l_649.f3 = safe_add_func_int16_t_s_s(l_649.f3, 5))
                {
                    (*l_822) = (*l_822);
                }
            }
            else
            {
                unsigned l_860 = 4294967295UL;
                short ***l_863 = &l_845;
                short **l_865 = &g_645;
                short ***l_864 = &l_865;
                l_867 = (((safe_sub_func_int8_t_s_s(func_43(((safe_add_func_int32_t_s_s((*g_392), 0x0BD366DEL)) && g_200.f3)), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((g_537.f3 == (((**l_805) = (l_860 || (1L | l_816))) >= (((safe_mul_func_uint8_t_u_u(((((*l_864) = ((*l_863) = &g_647)) != &g_647) >= g_70), (*l_753))) > (*g_647)) == l_860))) <= g_537.f8), l_866)), l_860)))) >= (**l_658)) ^ (*g_392));

                ;
                ;
                for (g_349.f5 = 0; (g_349.f5 > (-20)); g_349.f5 = safe_sub_func_int16_t_s_s(g_349.f5, 1))
                {
                    (**l_658) = (safe_unary_minus_func_int64_t_s((3L ^ (**g_96))));
                    (**g_308) = l_700;
                }
                return (**l_658);
            }
        }

        ;
        (*l_753) = (safe_div_func_int32_t_s_s((*g_817), l_31.f0));
    }
    else
    {
        int **l_874 = &g_392;
        short *l_875 = (void*)0;
        (*l_874) = l_873;

        ;
        (*g_392) = ((g_200.f6 = ((*g_647) = ((*g_645) = (*g_645)))) >= ((**l_874) > 0x304AL));
    }

    ;
    ;
    (*l_877) = g_876;
    if (((safe_mod_func_uint16_t_u_u(((**g_96) > (0x50L > ((*l_873) = (safe_lshift_func_uint16_t_u_u(3UL, (*l_873)))))), (*g_645))) < l_882))
    {
        int ** const l_887 = &g_392;
        const int **l_888 = (void*)0;
        (*g_392) = (safe_div_func_int32_t_s_s(0x3A668735L, g_200.f7.f1));
        for (l_2 = 0; (l_2 < 12); l_2++)
        {
            int *l_889 = (void*)0;
            (*g_132) = (*g_132);
            (*g_132) = l_889;

            ;
            (*g_132) = (*g_132);
        }
    }
    else
    {
        int l_890 = 0L;
        (*g_132) = (*g_132);
        return l_890;


    }
    return (*g_293);


}







static unsigned short func_7(short p_8, unsigned long long p_9)
{
    return p_8;
}







static short func_19(struct S1 p_20, unsigned p_21, int p_22, struct S2 p_23, short p_24)
{
    unsigned long long l_495 = 0x3ECA8A1A81AF41BFLL;
    struct S1 l_518 = {0L};
    struct S2 * const l_535 = &g_200;
    struct S2 *l_536 = &g_537;
    int **l_548 = &g_392;
    char ***l_557 = &g_96;
    struct S2 **l_594 = &l_536;
    int **l_627 = &g_392;
    int l_634 = (-1L);
    for (g_209 = (-22); (g_209 == 20); g_209++)
    {
        const int **l_517 = &g_133;
        for (g_200.f8 = 0; (g_200.f8 > 57); ++g_200.f8)
        {
            char l_499 = 1L;
            struct S1 ** const l_502 = (void*)0;
            int *l_519 = (void*)0;
            unsigned short l_520 = 0x09CFL;
            char ***l_532 = &g_96;
            for (g_349.f2.f0 = (-11); (g_349.f2.f0 > 12); ++g_349.f2.f0)
            {
                unsigned char l_508 = 0x4BL;
                struct S2 ***l_514 = &g_512;
                int l_529 = 3L;
            }
            (*l_532) = (void*)0;

            ;
        }
        (*g_512) = (**g_511);
    }

    ;
    for (p_21 = 14; (p_21 >= 36); p_21 = safe_add_func_int32_t_s_s(p_21, 4))
    {
        unsigned short l_542 = 3UL;
        char ***l_544 = &g_96;
        char ****l_543 = &l_544;
        int l_546 = (-6L);
        int ** const l_547 = &g_392;
        const int **l_549 = &g_133;
        short *l_566 = &g_200.f6;
        char l_567 = 0x1EL;
        short l_568 = 0xCA00L;
        const struct S1 *l_570 = &g_200.f2;
        l_536 = l_535;

        ;
        (*l_547) = func_57(l_547, l_548, l_549);

        ;
        if ((safe_unary_minus_func_uint16_t_u(((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((l_557 != l_557), func_43((~((**l_548) != (safe_mod_func_int16_t_s_s(((*l_566) = ((func_47(p_22) != ((safe_mul_func_uint8_t_u_u(p_23.f3, (safe_mul_func_uint8_t_u_u((0x4CL != (*g_97)), (safe_lshift_func_int16_t_s_u((1UL == g_200.f9), 1)))))) <= 0x8788BC8206E44777LL)) > p_23.f4.f0)), 6UL))))))) == p_23.f9), l_567)), (**l_548))) > l_568))))
        {
            const struct S1 *l_569 = &g_103;
            l_570 = l_569;

            ;
        }
        else
        {
            (**g_308) = (**g_308);
            (*g_308) = &l_518;

            ;
        }

        ;
    }

    ;
    ;
    ;
    ;
    if (l_495)
    {
        unsigned char l_573 = 0x54L;
        int l_596 = 0x4E46A7C7L;
        int *l_605 = &g_35;
        int l_606 = (-1L);
        for (g_200.f5 = 2; (g_200.f5 < 11); g_200.f5++)
        {
            const int *l_574 = &g_80;
            const int **l_584 = (void*)0;
            short *l_591 = (void*)0;
            short *l_592 = (void*)0;
            short *l_593 = &g_537.f6;
            long long l_602 = 0x723A0C79D9A08F3BLL;
            int l_603 = 1L;
            if (l_573)
            {
                (*g_132) = l_574;

                ;
                (*g_132) = (*g_132);
            }
            else
            {
                int l_579 = 1L;
                int **l_580 = &g_392;
                short *l_581 = &g_349.f6;
                unsigned *l_582 = (void*)0;
                unsigned *l_583 = &g_411;
                for (g_209 = 4; (g_209 >= 28); g_209 = safe_add_func_int64_t_s_s(g_209, 1))
                {
                    for (g_349.f5 = 20; (g_349.f5 == (-1)); g_349.f5 = safe_sub_func_uint64_t_u_u(g_349.f5, 4))
                    {
                        l_579 = ((void*)0 == &p_20);
                    }
                }
                (*l_548) = &p_22;

                ;
                (**g_511) = &p_23;

                ;
            }
            if ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(func_47(l_495), ((*l_593) = ((safe_sub_func_int64_t_s_s((*l_574), 0UL)) | 18446744073709551615UL)))), (l_594 == (*g_511)))))
            {
                int *l_595 = &g_545;
                unsigned short **l_601 = &g_293;
                l_596 = ((*l_595) = 0L);
                l_596 = (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(p_24, 5)) <= (((*l_601) = (void*)0) == (void*)0)), 11));

                ;
                l_603 = (g_215 > l_602);
            }
            else
            {
                return p_23.f7.f0;




            }

            ;
            if (p_20.f0)
                break;
        }

        ;
        ;
        ;
        l_606 = ((*l_605) = (&g_511 != (g_604 = &g_511)));
    }
    else
    {
        int ***l_617 = &l_548;
        int *l_636 = (void*)0;
        int *l_637 = &g_151;
        if (p_23.f4.f0)
        {
            (*g_132) = ((*l_548) = &p_22);

            ;
            ;
        }
        else
        {
            int ***l_619 = &g_289;
            int ****l_618 = &l_619;
            const unsigned long long *l_621 = &g_622;
            const unsigned long long **l_620 = &l_621;
            long long *l_632 = &g_200.f3;
            unsigned short *l_633 = &g_537.f8;
            struct S1 l_635 = {0x56A92316L};
            if ((safe_mod_func_uint32_t_u_u((4294967288UL != ((safe_sub_func_uint32_t_u_u((g_411 = (g_349.f3 | p_23.f7.f2)), (safe_add_func_int64_t_s_s((safe_add_func_uint16_t_u_u((func_47((*g_293)) <= g_200.f7.f0), ((safe_sub_func_int16_t_s_s((l_617 == ((*l_618) = &l_548)), (((*l_620) = (void*)0) == &g_253))) && p_23.f4.f0))), 0UL)))) & p_22)), 0xECD1C566L)))
            {
                (**g_511) = &p_23;

                ;
            }
            else
            {
                return p_21;


            }

            ;
            ;
            ;
            g_545 = (&l_495 == &g_465);
            l_634 = (safe_mod_func_uint8_t_u_u((g_200.f7.f4 || (safe_lshift_func_uint8_t_u_u(func_47((*g_293)), (((*l_633) = ((0x41L & ((((l_627 == (*l_617)) >= (p_22 = (safe_sub_func_int16_t_s_s(1L, ((0xAD403DDED29C47D6LL | ((*l_632) = ((safe_lshift_func_uint8_t_u_u(func_43(p_23.f8), g_30.f0)) >= (*g_293)))) <= g_113))))) == p_23.f9) | 1L)) | 0x0DD68ACB0BAA9BFFLL)) || p_23.f3)))), p_24));

            ;
            (**g_308) = l_635;
        }

        ;
        ;
        ;
        p_22 = ((*l_637) = p_22);
    }

    ;
    ;
    ;
    ;
    (*g_132) = func_57(l_627, l_627, &g_133);

    ;
    return p_23.f7.f1;




}







static struct S1 func_25(struct S0 p_26, const struct S0 p_27, unsigned p_28, struct S0 p_29)
{
    int *l_468 = &g_209;
    long long *l_471 = &g_200.f3;
    long long *l_472 = &g_215;
    struct S2 *l_483 = &g_349;
    struct S2 **l_484 = &g_348;
    short *l_486 = &g_200.f6;
    (*l_468) = (p_29.f2 == g_200.f7.f3);
    (*l_468) = (safe_mul_func_uint8_t_u_u((p_29.f2 | ((*l_472) = ((*l_471) = ((p_26.f0 == g_215) && p_29.f3)))), ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((1UL ^ (safe_add_func_int16_t_s_s(((*l_486) = (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_483 == ((*l_484) = &g_349)), (g_200.f9 <= (safe_unary_minus_func_int64_t_s(0xAD64265CD0574644LL))))), 0L))), 7L))), (*l_468))) | (*l_468)), (*l_468))) && (*l_468))));
    return (*g_309);
}







static unsigned char func_32(long long p_33)
{
    int *l_34 = &g_35;
    int **l_36 = &l_34;
    (*l_36) = l_34;
    for (g_35 = 3; (g_35 >= 9); g_35 = safe_add_func_int16_t_s_s(g_35, 2))
    {
        unsigned long long l_407 = 1UL;
        unsigned *l_410 = &g_411;
        int *l_412 = &g_209;
        const int *l_419 = (void*)0;
        const long long l_420 = 0xB9BCCF346CF623B8LL;
        unsigned l_421 = 0x32DDD9FBL;
        struct S0 *l_457 = &g_30;
        (*l_412) = (p_33 > ((safe_rshift_func_int16_t_s_u(2L, ((safe_lshift_func_uint16_t_u_s(func_43((safe_rshift_func_uint8_t_u_s(func_47(p_33), 1))), 12)) & ((*l_410) = (safe_unary_minus_func_uint64_t_u((safe_lshift_func_uint16_t_u_u(((!(safe_add_func_int32_t_s_s((l_407 = (func_43(p_33) > g_349.f2.f0)), ((safe_sub_func_uint8_t_u_u(p_33, (-1L))) != p_33)))) <= g_200.f7.f3), (*g_293))))))))) | g_349.f7.f1));
        l_421 = (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_div_func_int8_t_s_s((p_33 != (l_420 | 0x7803BE8F8155B06ELL)), 9UL)) & (*l_412)), 4)), (*l_34)));
        if ((p_33 == (*l_412)))
        {
            const char l_428 = 0L;
            short *l_429 = &g_349.f6;
            int l_430 = 0xC2EFDB87L;
            struct S2 *l_431 = &g_349;
            struct S2 **l_432 = &g_348;
            l_430 = ((-1L) != ((((**l_36) != ((*l_429) = ((*l_412) = (func_43((((((*l_412) = p_33) & (((safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(((g_200.f7.f3 >= 0x6F0DL) > (**l_36)), 5)) == (safe_lshift_func_int8_t_s_s((**g_96), 0))) >= p_33), p_33)) <= l_428) ^ p_33)) != 0xC61B3FF6L) <= p_33)) < (*l_34))))) ^ l_428) | g_30.f4));
            (*l_432) = l_431;
            (*l_412) = (*l_34);
        }
        else
        {
            int *l_436 = &g_151;
            unsigned l_450 = 0x86540933L;
            for (g_200.f6 = 0; (g_200.f6 != (-18)); g_200.f6 = safe_sub_func_uint32_t_u_u(g_200.f6, 4))
            {
                int *l_435 = &g_151;
                unsigned long long *l_439 = &g_253;
                (*l_435) = ((*l_412) = (&g_30 == (void*)0));
                (*l_36) = l_436;

                ;
                if ((safe_mul_func_uint16_t_u_u(p_33, func_43(((*l_439) = p_33)))))
                {
                    int *l_447 = &g_80;
                    for (g_80 = (-19); (g_80 <= (-6)); ++g_80)
                    {
                        const unsigned l_446 = 0UL;
                        (*l_34) = ((*l_435) ^ ((g_349.f1 >= ((((safe_lshift_func_uint8_t_u_u(p_33, func_43(p_33))) >= (((*l_34) < (safe_add_func_uint32_t_u_u(((*g_133) != 0xE284A5F7L), (p_33 < 0x767FL)))) ^ (*l_412))) > l_446) >= l_446)) > p_33));
                        (*l_412) = (*l_436);
                    }
                    if ((*g_133))
                    {
                        (*g_132) = l_447;

                        ;
                    }
                    else
                    {
                        return g_411;
                    }

                    ;
                    (**l_36) = 0x5B3812A1L;
                }
                else
                {
                    long long *l_451 = &g_349.f3;
                    long long *l_452 = (void*)0;
                    long long *l_453 = &g_200.f3;
                    unsigned short *l_454 = &g_349.f8;
                    struct S0 **l_458 = &l_457;
                    (*l_436) = (((p_33 < ((*l_454) = (((*g_293) = p_33) == (((safe_sub_func_int64_t_s_s(l_450, (*l_436))) ^ g_200.f4.f0) && ((*l_453) = ((*l_451) = ((*l_435) == 0L))))))) >= (safe_div_func_uint32_t_u_u(p_33, p_33))) && 0x29DD93E933A933DBLL);
                    if (p_33)
                        continue;
                    (*l_458) = l_457;
                }
            }
        }
    }

    ;

    ;
    (*g_132) = (*l_36);

    ;
    return g_30.f2;
}







static unsigned short func_43(unsigned long long p_44)
{
    unsigned l_398 = 0x59D9BB4EL;
    int l_399 = (-2L);
    struct S2 *l_400 = &g_349;
    struct S2 **l_401 = &l_400;
    l_399 = (safe_mul_func_uint8_t_u_u(g_200.f0, l_398));
    (*l_401) = l_400;
    return l_398;
}







static unsigned char func_47(unsigned short p_48)
{
    unsigned char l_78 = 250UL;
    const int *l_86 = &g_35;
    const int **l_85 = &l_86;
    const int *l_100 = &g_35;
    int *l_101 = &g_35;
    struct S0 *l_346 = &g_30;
    struct S0 **l_345 = &l_346;
    struct S2 *l_355 = &g_349;
    int l_365 = 0xA448F8A4L;
    struct S1 **l_377 = &g_309;
    struct S1 **l_379 = (void*)0;
    const int *l_381 = &g_151;
    short l_382 = 0x8C69L;
    short *l_387 = &g_200.f6;
    char l_388 = 0x35L;
    int *l_389 = &l_365;
    short *l_393 = &g_349.f6;
    for (p_48 = 26; (p_48 >= 31); ++p_48)
    {
        char *l_69 = &g_70;
        unsigned short l_75 = 1UL;
        int **l_84 = (void*)0;
        char l_335 = (-5L);
        int *l_336 = (void*)0;
        int *l_337 = (void*)0;
        int *l_338 = &g_80;
        struct S1 l_339 = {-3L};
        struct S0 **l_353 = &l_346;
        struct S2 **l_356 = &g_348;
    }
    for (g_200.f8 = 0; (g_200.f8 <= 33); g_200.f8++)
    {
        unsigned char l_363 = 5UL;
        int *l_380 = &g_209;
        for (g_200.f2.f0 = 0; (g_200.f2.f0 < (-15)); --g_200.f2.f0)
        {
            unsigned long long l_364 = 18446744073709551615UL;
            int *l_366 = &l_365;
            struct S2 **l_370 = &g_348;
            const struct S2 *l_372 = (void*)0;
            const struct S2 **l_371 = &l_372;
            struct S1 ***l_378 = &l_377;
            if ((l_365 = ((l_364 = (safe_lshift_func_int16_t_s_s(l_363, 12))) != (g_200.f8 & (*l_101)))))
            {
                int *l_367 = &g_151;
                (*l_85) = (l_367 = l_366);

                ;
                ;
            }
            else
            {
                return g_30.f3;
            }

            ;
            (*l_366) = (safe_add_func_uint8_t_u_u((p_48 >= (((*l_370) = l_355) != ((*l_371) = l_355))), (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(p_48, (-1L))), (((*l_378) = l_377) != l_379)))));

            ;
            ;
            return g_30.f3;
        }
        (*l_380) = ((*l_101) ^ l_382);
        (*l_380) = (*l_380);
        (*l_380) = 0L;
    }
    (*l_389) = (0x968CL ^ (safe_sub_func_uint64_t_u_u((((((&l_346 == (void*)0) != g_30.f0) ^ (&l_100 != ((**g_324) = &l_101))) > (**l_85)) <= (safe_mul_func_int16_t_s_s((l_388 = ((*l_387) = p_48)), 0x4F8AL))), g_253)));

    ;
    (*l_389) = (safe_lshift_func_int16_t_s_s(((*l_393) = ((*l_387) = g_200.f4.f0)), ((safe_div_func_int64_t_s_s(p_48, ((**l_85) && g_200.f7.f4))) < 5L)));
    return g_349.f0;


}







static int func_53(int * p_54, const int * p_55, int * p_56)
{
    short l_102 = 0x1D26L;
    int *l_108 = (void*)0;
    int ** const l_107 = &l_108;
    unsigned short l_131 = 1UL;
    unsigned short l_183 = 0UL;
    const struct S2 *l_220 = &g_200;
    const struct S2 **l_219 = &l_220;
    const int **l_329 = &g_133;
    if (((*p_54) = l_102))
    {
        short l_111 = 0x9289L;
        int l_143 = 0x40F3C649L;
        int l_148 = (-1L);
        int **l_152 = &l_108;
        struct S0 **l_156 = (void*)0;
        struct S1 l_160 = {1L};
        struct S2 *l_199 = &g_200;
        if ((l_102 != (0xFF578636BC84746BLL < (&g_97 == (void*)0))))
        {
            struct S1 *l_104 = &g_103;
            struct S0 *l_106 = &g_30;
            struct S0 **l_105 = &l_106;
            unsigned short *l_112 = &g_113;
            int l_114 = 0xA67FE427L;
            char *l_130 = &g_70;
            (*l_104) = g_103;
            (*l_104) = g_103;
            (*l_105) = &g_30;
            (*l_107) = func_57(l_107, func_61((safe_sub_func_int64_t_s_s(l_111, (((*l_112) = g_30.f0) == ((l_114 || ((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s(l_111, (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((*p_54), (((*l_130) = ((((safe_add_func_int16_t_s_s(1L, (l_114 || l_114))) < 1L) == g_30.f3) <= (*g_97))) || l_114))), g_30.f3)), 8L)), g_35)))))) & g_80), g_30.f2)) < l_111)) && l_131)))), g_30.f3, l_114), g_132);

            ;
            ;
        }
        else
        {
            long long l_134 = 0L;
            struct S0 *l_155 = (void*)0;
            struct S0 **l_154 = &l_155;
            struct S0 ***l_157 = &l_156;
            unsigned short l_175 = 65529UL;
            if (((*g_97) <= l_134))
            {
                int l_144 = 0L;
                char *l_147 = &g_30.f4;
                int * const l_150 = &g_151;
                int * const *l_149 = &l_150;
                (*l_150) = (((safe_div_func_int32_t_s_s(((l_149 = func_61(((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(l_134, 3)), (safe_lshift_func_int8_t_s_s(((l_143 = g_103.f0) || g_30.f2), (l_144 ^ (l_111 && (l_144 <= (l_148 = ((safe_mul_func_uint8_t_u_u(l_111, l_134)) >= (l_147 == l_147)))))))))) != g_35), l_144, g_30.f3)) != l_152), (*p_56))) && g_151) > 1UL);

                ;
            }
            else
            {
                int l_153 = (-1L);
                (*p_54) = l_153;
                return (*p_55);
            }
            if ((l_154 == ((*l_157) = l_156)))
            {
                unsigned short *l_170 = (void*)0;
                for (g_113 = 13; (g_113 < 28); g_113++)
                {
                    struct S1 *l_161 = (void*)0;
                    struct S1 *l_162 = &l_160;
                    const unsigned short *l_168 = &g_169;
                    const unsigned short **l_167 = &l_168;
                    int l_182 = (-6L);
                    const int *l_187 = &l_148;
                    (*l_162) = l_160;
                    if ((safe_mod_func_uint32_t_u_u((g_30.f4 ^ (safe_div_func_int16_t_s_s((((*l_167) = &g_113) == l_170), (safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u(((-5L) | (l_175 ^ (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((*p_55) ^ (g_30.f0 > (*p_54))), g_151)), l_182)))), l_183)), 0x6E86L))))), (*g_133))))
                    {
                        unsigned char l_184 = 1UL;
                        (*p_54) = ((l_184 | (*g_133)) == (safe_div_func_uint32_t_u_u(1UL, 0x62609B7AL)));
                        if ((*p_56))
                            continue;
                        l_187 = p_55;

                        ;
                    }
                    else
                    {
                        (*p_54) = (g_103.f0 >= (g_113 & (*g_133)));
                    }

                    ;
                    ;
                }
                return (*p_56);
            }
            else
            {
                int *l_188 = &g_151;
                (*l_152) = l_188;

                ;
            }

            ;
            for (l_143 = 0; (l_143 != 8); ++l_143)
            {
                char l_191 = 1L;
                (*l_152) = (*l_152);
                return l_191;
            }
            for (g_103.f0 = (-15); (g_103.f0 > (-10)); ++g_103.f0)
            {
                for (l_131 = 0; (l_131 <= 20); ++l_131)
                {
                    int ***l_196 = &l_152;
                    struct S2 **l_201 = (void*)0;
                    struct S2 **l_202 = &l_199;
                    if ((**g_132))
                        break;
                    (*g_132) = func_57(((*l_196) = &p_54), &l_108, &g_133);

                    ;
                    ;
                    for (g_113 = (-23); (g_113 >= 30); g_113 = safe_add_func_int16_t_s_s(g_113, 6))
                    {
                        (*g_132) = (*g_132);
                    }
                    (*l_202) = l_199;
                }
                (*p_54) = (*p_56);
            }

            ;
            ;
        }

        ;
        ;
        ;
    }
    else
    {
        unsigned long long l_210 = 18446744073709551612UL;
        long long l_227 = 8L;
        const int **l_290 = &g_133;
        struct S0 *l_301 = (void*)0;
        struct S0 **l_300 = &l_301;
        int **l_328 = &l_108;
        if ((*g_133))
        {
            struct S1 l_203 = {-1L};
            struct S1 *l_204 = &g_103;
            int *l_207 = &g_151;
            int *l_208 = &g_209;
            char *l_216 = &g_70;
            (*l_204) = l_203;
            l_210 = ((*l_208) = (0xEBD87E6FL > ((*l_207) = ((*p_54) = (safe_rshift_func_int16_t_s_u(g_200.f7.f3, 8))))));
            (*p_54) = ((safe_rshift_func_int16_t_s_u(g_200.f7.f4, 3)) & (g_215 > ((void*)0 != l_216)));
            for (l_203.f0 = 0; (l_203.f0 < 29); ++l_203.f0)
            {
                if ((*l_207))
                {
                    if ((*l_208))
                    {
                        return (*p_56);
                    }
                    else
                    {
                        const struct S2 ***l_221 = &l_219;
                        (*l_221) = l_219;
                    }
                }
                else
                {
                    short l_226 = 0x622FL;
                    (*p_54) = (safe_mod_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_226, l_210)), l_227));
                }
                if ((*g_133))
                    break;
            }
        }
        else
        {
            struct S2 *l_230 = &g_200;
            int ** const l_232 = &l_108;
            struct S1 *l_266 = &g_200.f2;
            for (g_200.f5 = 16; (g_200.f5 < 7); g_200.f5 = safe_sub_func_uint64_t_u_u(g_200.f5, 4))
            {
                struct S2 **l_231 = &l_230;
                int l_233 = (-1L);
                (*l_219) = ((*l_231) = l_230);
                (*g_132) = func_57(l_232, g_83, &g_133);

                ;
                return l_233;
            }
            if ((0UL > (safe_add_func_int64_t_s_s(g_209, 0L))))
            {
                int *l_236 = (void*)0;
                unsigned short *l_251 = &l_131;
                unsigned short **l_250 = &l_251;
                struct S0 *l_255 = &g_30;
                struct S0 **l_254 = &l_255;
                struct S2 *l_262 = &g_200;
                (*l_232) = l_236;
                for (l_183 = 27; (l_183 <= 56); l_183 = safe_add_func_uint64_t_u_u(l_183, 8))
                {
                    unsigned l_244 = 0x8AF15EAAL;
                    unsigned char l_252 = 0x91L;
                    (*p_54) = (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(l_244)), (0x3CL > g_200.f4.f0))), g_200.f7.f2));
                    (*p_54) = (safe_add_func_int16_t_s_s((g_200.f7.f2 < (((l_227 || (safe_div_func_int8_t_s_s((g_200.f3 != (safe_unary_minus_func_uint8_t_u((((g_253 = (l_252 = ((void*)0 != l_250))) | (l_254 == (void*)0)) >= (safe_add_func_uint8_t_u_u(g_30.f4, ((*p_56) ^ 0xB14FC1BAL))))))), 0x49L))) ^ g_70) > (*p_54))), g_200.f5));
                    for (l_210 = (-7); (l_210 > 43); ++l_210)
                    {
                        (*p_54) = (-4L);
                    }
                }
                (*g_132) = (*g_132);
                for (g_200.f3 = 0; (g_200.f3 >= 14); g_200.f3++)
                {
                    struct S2 **l_263 = &l_262;
                    (*l_219) = ((*l_263) = l_262);
                }
            }
            else
            {
                const int *l_281 = &g_151;
                struct S2 *l_282 = &g_200;
                char *l_283 = &g_70;
                short *l_284 = (void*)0;
                short *l_285 = &g_200.f6;
                short l_286 = 0x373BL;
                struct S1 *l_311 = (void*)0;
                int ** const *l_315 = &l_107;
                int ** const **l_314 = &l_315;
                int ***l_317 = &g_289;
                int ****l_316 = &l_317;
                for (l_227 = (-19); (l_227 != (-9)); l_227 = safe_add_func_uint8_t_u_u(l_227, 9))
                {
                    struct S1 **l_267 = (void*)0;
                    struct S1 **l_268 = &l_266;
                    (*l_268) = l_266;
                }
                (*l_232) = (void*)0;
                if ((l_210 || (l_286 = (safe_add_func_uint32_t_u_u(((((-5L) > ((*l_285) = (safe_mod_func_int8_t_s_s(((*l_283) = (65535UL && ((safe_add_func_int64_t_s_s(((safe_sub_func_uint8_t_u_u((!((((safe_lshift_func_uint8_t_u_u(g_200.f7.f0, 0)) | 1L) && ((l_281 == ((*l_107) = p_56)) >= 1UL)) <= (l_282 == (*l_219)))), (*g_97))) > 255UL), g_30.f1)) ^ (*l_281)))), 0x58L)))) ^ (*l_281)) != l_102), l_227)))))
                {
                    char l_306 = 0x30L;
                    if ((0UL <= (g_287 == (void*)0)))
                    {
                        int ***l_288 = &g_83;
                        (*l_107) = func_57(((*l_288) = g_83), g_289, (l_290 = &p_55));

                        ;
                        ;
                        ;
                        (**l_107) = (**g_132);
                    }
                    else
                    {
                        return (**g_132);
                    }

                    ;
                    ;
                    ;
                    for (g_80 = 0; (g_80 >= (-22)); --g_80)
                    {
                        struct S0 **l_299 = (void*)0;
                        int l_304 = 0x18026454L;
                        short *l_305 = &l_286;
                        int *l_307 = &l_304;
                        struct S1 ***l_310 = &g_308;
                        (*l_307) = (((g_293 != &l_131) && ((safe_div_func_int8_t_s_s((*g_97), (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((l_299 != l_300))), (l_306 = (safe_mul_func_int16_t_s_s((**l_232), ((*l_305) = ((*l_285) = (g_200.f7.f2 >= ((l_304 < ((g_151 = (0x95L != (*l_108))) | 0xDC8FD093L)) < g_209))))))))))) ^ g_215)) > g_200.f8);
                        if ((**l_232))
                            continue;
                        (*l_266) = g_103;
                        (*l_310) = g_308;
                    }
                    (*g_308) = l_311;

                    ;
                }
                else
                {
                    (*p_54) = (**g_132);
                }

                ;
                ;
                ;
                ;
                (*p_54) = (safe_add_func_uint64_t_u_u(((((*l_314) = &l_107) != ((*l_316) = (void*)0)) == 1L), (+(safe_div_func_int8_t_s_s((safe_sub_func_int64_t_s_s((*l_281), 0x0E2C164ED7519BBCLL)), (g_200.f4.f0 | ((g_200.f4.f0 < (safe_rshift_func_int16_t_s_u((1UL <= ((void*)0 != g_324)), (*g_293)))) | g_70)))))));

                ;
            }

            ;
            ;
            ;
            ;
        }

        ;
        ;
        ;
        ;
        for (g_200.f2.f0 = (-5); (g_200.f2.f0 != (-28)); g_200.f2.f0--)
        {
            return (*p_56);
        }
        p_56 = (*l_107);

        ;
        (*g_132) = ((*l_107) = func_57((**g_324), l_328, l_329));

        ;
        ;
    }

    ;
    ;
    ;
    ;
    ;
    (*l_108) = (((safe_mul_func_uint16_t_u_u((*g_293), (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((*p_54))), 0x9AF9C288L)))) ^ (*l_108)) || (**l_107));
    (**l_107) = (*l_108);
    return (*p_54);
}







static int * func_57(int ** const p_58, int ** p_59, const int ** p_60)
{
    unsigned char l_87 = 0x12L;
    int *l_99 = &g_80;
    if (l_87)
    {
        struct S1 *l_88 = (void*)0;
        struct S1 **l_89 = &l_88;
        int *l_90 = &g_35;
        (*l_89) = l_88;
        (*p_60) = l_90;


    }
    else
    {
        const int *l_93 = (void*)0;
        int l_95 = 0x968679DDL;
        for (l_87 = 0; (l_87 > 8); l_87++)
        {
            int l_94 = (-1L);
            char ***l_98 = &g_96;
            (*p_60) = l_93;


            if (l_87)
                break;
            l_95 = l_94;
            (*l_98) = g_96;
        }
        (*p_60) = (*p_60);
    }
    g_80 = 0x2BE3C69BL;
    return l_99;


}







static int ** func_61(short p_62, unsigned p_63, const unsigned short p_64)
{
    int *l_79 = &g_80;
    struct S1 l_81 = {0xF08EAF53L};
    struct S1 *l_82 = &l_81;
    (*l_79) = p_62;
    (*l_82) = l_81;
    return g_83;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_30.f2, "g_30.f2", print_hash_value);
    transparent_crc(g_30.f3, "g_30.f3", print_hash_value);
    transparent_crc(g_30.f4, "g_30.f4", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_103.f0, "g_103.f0", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_200.f0, "g_200.f0", print_hash_value);
    transparent_crc(g_200.f1, "g_200.f1", print_hash_value);
    transparent_crc(g_200.f2.f0, "g_200.f2.f0", print_hash_value);
    transparent_crc(g_200.f3, "g_200.f3", print_hash_value);
    transparent_crc(g_200.f4.f0, "g_200.f4.f0", print_hash_value);
    transparent_crc(g_200.f5, "g_200.f5", print_hash_value);
    transparent_crc(g_200.f6, "g_200.f6", print_hash_value);
    transparent_crc(g_200.f7.f0, "g_200.f7.f0", print_hash_value);
    transparent_crc(g_200.f7.f1, "g_200.f7.f1", print_hash_value);
    transparent_crc(g_200.f7.f2, "g_200.f7.f2", print_hash_value);
    transparent_crc(g_200.f7.f3, "g_200.f7.f3", print_hash_value);
    transparent_crc(g_200.f7.f4, "g_200.f7.f4", print_hash_value);
    transparent_crc(g_200.f8, "g_200.f8", print_hash_value);
    transparent_crc(g_200.f9, "g_200.f9", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_349.f0, "g_349.f0", print_hash_value);
    transparent_crc(g_349.f1, "g_349.f1", print_hash_value);
    transparent_crc(g_349.f2.f0, "g_349.f2.f0", print_hash_value);
    transparent_crc(g_349.f3, "g_349.f3", print_hash_value);
    transparent_crc(g_349.f4.f0, "g_349.f4.f0", print_hash_value);
    transparent_crc(g_349.f5, "g_349.f5", print_hash_value);
    transparent_crc(g_349.f6, "g_349.f6", print_hash_value);
    transparent_crc(g_349.f7.f0, "g_349.f7.f0", print_hash_value);
    transparent_crc(g_349.f7.f1, "g_349.f7.f1", print_hash_value);
    transparent_crc(g_349.f7.f2, "g_349.f7.f2", print_hash_value);
    transparent_crc(g_349.f7.f3, "g_349.f7.f3", print_hash_value);
    transparent_crc(g_349.f7.f4, "g_349.f7.f4", print_hash_value);
    transparent_crc(g_349.f8, "g_349.f8", print_hash_value);
    transparent_crc(g_349.f9, "g_349.f9", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_537.f0, "g_537.f0", print_hash_value);
    transparent_crc(g_537.f1, "g_537.f1", print_hash_value);
    transparent_crc(g_537.f2.f0, "g_537.f2.f0", print_hash_value);
    transparent_crc(g_537.f3, "g_537.f3", print_hash_value);
    transparent_crc(g_537.f4.f0, "g_537.f4.f0", print_hash_value);
    transparent_crc(g_537.f5, "g_537.f5", print_hash_value);
    transparent_crc(g_537.f6, "g_537.f6", print_hash_value);
    transparent_crc(g_537.f7.f0, "g_537.f7.f0", print_hash_value);
    transparent_crc(g_537.f7.f1, "g_537.f7.f1", print_hash_value);
    transparent_crc(g_537.f7.f2, "g_537.f7.f2", print_hash_value);
    transparent_crc(g_537.f7.f3, "g_537.f7.f3", print_hash_value);
    transparent_crc(g_537.f7.f4, "g_537.f7.f4", print_hash_value);
    transparent_crc(g_537.f8, "g_537.f8", print_hash_value);
    transparent_crc(g_537.f9, "g_537.f9", print_hash_value);
    transparent_crc(g_545, "g_545", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_733, "g_733", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
