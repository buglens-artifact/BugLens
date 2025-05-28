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
   unsigned char f0;
   unsigned long long f1;
   unsigned char f2;
   char f3;
   short f4;
   unsigned short f5;
   char f6;
   const short f7;
   unsigned short f8;
   unsigned f9;
};

struct S1 {
   int f0;
   unsigned long long f1;
   unsigned char f2;
   unsigned long long f3;
   struct S0 f4;
   char f5;
   struct S0 f6;
   int f7;
};


static int g_12[5] = {1L,1L,1L,1L,1L};
static struct S1 g_19 = {-6L,0x188A746C20B13309LL,0x69L,18446744073709551615UL,{0x72L,18446744073709551614UL,255UL,-10L,0x592EL,0xC80DL,0x73L,-4L,1UL,4294967289UL},-1L,{0x2AL,0x09F00F3BC9FC22F7LL,8UL,0xB1L,0x6906L,0x71EBL,0xC5L,-1L,65535UL,7UL},2L};
static int g_90 = 0x4BC89C4AL;
static int g_104 = 0xD58A4AD7L;
static unsigned char g_124[1] = {0xC1L};
static unsigned g_147 = 0x156CA011L;
static short g_161 = 0xE399L;
static int g_166[2][3][2] = {{{0x2CB44B8AL,0L},{0L,0x2CB44B8AL},{0L,0L}},{{0x2CB44B8AL,0L},{0L,0x2CB44B8AL},{0L,0L}}};
static long long g_205 = 1L;
static unsigned long long g_208 = 0xB1A2417E7E368E80LL;
static unsigned g_215 = 4294967292UL;
static int g_232 = 7L;
static unsigned g_252 = 0x7878FC21L;
static unsigned g_296 = 18446744073709551607UL;
static int g_356 = 0xA7DBBA21L;
static int g_358[5][2] = {{0x460E2FB1L,0x460E2FB1L},{0x460E2FB1L,0x460E2FB1L},{0x460E2FB1L,0x460E2FB1L},{0x460E2FB1L,0x460E2FB1L},{0x460E2FB1L,0x460E2FB1L}};
static unsigned g_359 = 18446744073709551614UL;
static short g_408[5][9][3] = {{{1L,0x8198L,0x9FB1L},{0xDA77L,0x730CL,8L},{0xA42BL,1L,0x9FB1L},{0x3072L,1L,0x3072L},{1L,0x9FB1L,(-8L)},{0x3ADCL,0L,0x7ABBL},{0x7419L,1L,0xC9B9L},{2L,0x85BCL,0x6071L},{0x7419L,0x8198L,0L}},{{0x3ADCL,(-1L),8L},{1L,1L,0x8198L},{0x3072L,6L,0x6071L},{0xA42BL,0x9FB1L,0x3BA3L},{0xDA77L,6L,0x7ABBL},{1L,1L,(-1L)},{2L,(-1L),0x3072L},{1L,0x8198L,0x86BBL},{0xDA77L,0x85BCL,8L}},{{0x8004L,1L,0x86BBL},{0x3072L,0L,0x3072L},{7L,0x9FB1L,(-1L)},{0x3ADCL,1L,0x7ABBL},{(-1L),1L,0x3BA3L},{2L,0x730CL,0x6071L},{(-1L),0x8198L,0x8198L},{0x3ADCL,(-1L),8L},{7L,1L,0L}},{{0x3072L,1L,0x6071L},{0x8004L,0x9FB1L,0xC9B9L},{0xDA77L,1L,0x7ABBL},{1L,1L,(-8L)},{2L,(-1L),0x3072L},{1L,0x8198L,0x9FB1L},{0xDA77L,0x730CL,8L},{0xA42BL,1L,0x9FB1L},{0x3072L,1L,0x3072L}},{{1L,0x9FB1L,(-8L)},{0x3ADCL,0L,0x7ABBL},{0x7419L,1L,0xC9B9L},{2L,0x85BCL,0x6071L},{0x7419L,0x8198L,0L},{0x3ADCL,(-1L),8L},{1L,1L,0x8198L},{0x3072L,6L,0x6071L},{0xA42BL,0x9FB1L,0x3BA3L}}};
static unsigned g_460 = 0x15810827L;
static long long g_461 = 0L;
static unsigned g_505[4] = {0x8AE8F3A8L,0x8AE8F3A8L,0x8AE8F3A8L,0x8AE8F3A8L};
static long long g_532 = 0x2C9F9F0EFAF62F88LL;
static int g_570[10] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
static unsigned g_655 = 18446744073709551614UL;
static unsigned short g_715 = 65535UL;
static unsigned g_791 = 0x2FB4157FL;
static unsigned long long g_815[1] = {0x059FA2655D3ED40ALL};
static unsigned long long g_837 = 0x71BFFC29F200F4BDLL;
static char g_906 = 0x89L;
static unsigned g_964 = 8UL;
static unsigned short g_1060 = 65526UL;
static unsigned char g_1103[4] = {0UL,0UL,0UL,0UL};
static unsigned long long g_1198 = 18446744073709551612UL;
static short g_1199 = (-1L);
static unsigned long long g_1302 = 0x4627A11C809721FCLL;
static unsigned g_1396 = 18446744073709551614UL;
static unsigned g_1473 = 18446744073709551607UL;
static unsigned g_1497 = 0xA834B848L;
static unsigned char g_1587 = 0x85L;
static unsigned short g_1813 = 9UL;
static short g_1946[1][6] = {{0xD0ECL,0xD0ECL,0xD0ECL,0xD0ECL,0xD0ECL,0xD0ECL}};
static struct S0 g_1982 = {0xFCL,18446744073709551612UL,0xC9L,0x0DL,-2L,0x7368L,0xC0L,5L,65535UL,0xD0AE4F54L};
static long long g_2005[7][1] = {{9L},{9L},{9L},{9L},{9L},{9L},{9L}};
static unsigned g_2028 = 0UL;
static unsigned short g_2058 = 0x172EL;
static unsigned short g_2114 = 65535UL;
static unsigned short g_2176[3][4][4] = {{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}};
static short g_2361 = 0xDF29L;



static unsigned long long func_1(void);
static unsigned long long func_4(short p_5, const unsigned long long p_6, unsigned p_7, long long p_8, struct S0 p_9);
static long long func_13(struct S1 p_14, unsigned p_15, short p_16, struct S1 p_17, unsigned char p_18);
static char func_28(short p_29, unsigned long long p_30);
static const long long func_35(const unsigned short p_36);
static unsigned long long func_48(short p_49, short p_50, struct S0 p_51);
static unsigned func_52(unsigned p_53, int p_54, const unsigned p_55, int p_56);
static int func_57(unsigned short p_58);
static char func_61(unsigned p_62, short p_63);
static int func_67(unsigned p_68, int p_69);
static unsigned long long func_1(void)
{
    unsigned short l_20 = 0xA8E8L;
    struct S1 l_21 = {0xBD0C7F12L,18446744073709551615UL,1UL,0xC1AABB7745DDB3F0LL,{0x59L,18446744073709551606UL,0x5FL,0xD1L,-8L,0xBB9FL,0L,0xD129L,0xC07FL,0xC733F7CFL},2L,{0xD9L,0x4113837911FBFE3ALL,0UL,-2L,1L,0xA45CL,0xC0L,0x52A1L,0xB9D3L,0x1F8626BAL},-6L};
    char l_1392 = 1L;
    int l_1741 = 0x8E2FBF4CL;
    int l_1742 = 0x6B7F0962L;
    long long l_2056 = 0xC5F12FD54E7F557DLL;
    unsigned l_2145[10] = {0UL,0x1794B4A1L,0UL,1UL,1UL,0UL,0x1794B4A1L,0UL,1UL,1UL};
    unsigned l_2177 = 8UL;
    unsigned char l_2263 = 255UL;
    long long l_2265 = 0xF31BC97F9FCE6C86LL;
    int l_2305 = 0xE8D48767L;
    const unsigned l_2323 = 4UL;
    int l_2325 = (-10L);
    short l_2398 = 1L;
    long long l_2400 = 1L;
    int i;
    if ((safe_add_func_uint64_t_u_u((g_815[0] = func_4(((safe_sub_func_uint8_t_u_u(((g_12[2] > func_13(g_19, g_19.f4.f9, l_20, l_21, ((((safe_mod_func_uint8_t_u_u((g_19.f6 , ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_1742 = (l_1741 = func_28((((g_19.f1 < (safe_sub_func_int64_t_s_s(((((!(safe_mod_func_int64_t_s_s(func_35(g_19.f4.f6), 7UL))) ^ g_19.f6.f0) && g_1199) & g_19.f6.f6), l_1392))) != l_21.f4.f9) | l_21.f6.f0), l_21.f6.f6))), (-10L))), 0x4DL)) , g_964)), 8L)) | 0x58C7396DA7FD1810LL) != 0xB40CL) && g_1396))) > l_21.f6.f7), l_20)) < g_19.f4.f0), g_19.f3, l_21.f4.f5, l_21.f6.f4, g_1982)), 0x575C98312DAD4884LL)))
    {
        char l_2011 = 0x09L;
        int l_2014 = 0xBC4DC221L;
        g_90 = (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(g_12[2], (l_2011 = l_21.f4.f9))), g_19.f0));
        g_12[2] = (safe_lshift_func_uint16_t_u_s(g_19.f6.f2, 13));
        l_2014 = (g_19 , (-1L));
    }
    else
    {
        int l_2029 = 6L;
        int l_2032 = (-1L);
        char l_2062 = 0x6CL;
        unsigned short l_2066[1];
        long long l_2102 = 8L;
        long long l_2129 = 0x351253E0285EBFB8LL;
        int l_2239 = (-1L);
        struct S0 l_2278 = {255UL,0x668AE03B5003CBD6LL,0x00L,0x92L,1L,8UL,0xECL,7L,65535UL,0x7E4C83E7L};
        int l_2281 = 0xE0A3E78FL;
        unsigned short l_2282 = 8UL;
        struct S0 l_2283 = {0x1CL,9UL,0xDEL,0L,0x6BE9L,0UL,0x73L,0L,0x1BF2L,0x0D9FE92EL};
        unsigned l_2324[6][9][4] = {{{0xFE77B29AL,0UL,1UL,0x6C3DC2EAL},{0xD7C41457L,0x8E3B24F4L,1UL,18446744073709551615UL},{0xB96017A9L,18446744073709551615UL,0xA307BBAEL,18446744073709551615UL},{1UL,0x4727D97CL,0xD2C6E551L,18446744073709551615UL},{0x9AA803A8L,0xE973C56BL,0UL,0x6E43007AL},{0x2F177F35L,0xD6B92DCAL,1UL,0x3536B266L},{0x2F177F35L,0x6C3DC2EAL,0UL,18446744073709551615UL},{0x9AA803A8L,0x3536B266L,0xD2C6E551L,0xCCE873ABL},{1UL,5UL,0xA307BBAEL,0x7B517C16L}},{{0xB96017A9L,0xE973C56BL,1UL,7UL},{0xD7C41457L,0xF36FCDD4L,1UL,0x8E3B24F4L},{0xFE77B29AL,0xCCE873ABL,18446744073709551615UL,18446744073709551615UL},{0xA76140FEL,0xCCE873ABL,6UL,0x8E3B24F4L},{1UL,0xF36FCDD4L,4UL,7UL},{0x56102B0BL,0xE973C56BL,0x72D07579L,0x7B517C16L},{1UL,5UL,1UL,0xCCE873ABL},{0UL,0x3536B266L,0UL,18446744073709551615UL},{0xDC6503F7L,0x6C3DC2EAL,0x0248A149L,0x3536B266L}},{{1UL,0xD6B92DCAL,0x0248A149L,0x6E43007AL},{0xDC6503F7L,0xE973C56BL,0UL,0x1681D65CL},{0UL,0x3536B266L,0x6E66EB1EL,7UL},{0x6E66EB1EL,7UL,0xD2C6E551L,0UL},{0xD7C41457L,0x6E43007AL,0x9AA803A8L,0x3C65AD83L},{4UL,0x6C3DC2EAL,0xB96017A9L,0UL},{1UL,3UL,0xA307BBAEL,0UL},{18446744073709551611UL,0x6C3DC2EAL,0x6E66EB1EL,0x3C65AD83L},{18446744073709551607UL,0x6E43007AL,4UL,0UL}},{{0UL,7UL,0x56102B0BL,7UL},{4UL,0x3536B266L,0xA76140FEL,0x1681D65CL},{0x2F177F35L,3UL,6UL,0xE973C56BL},{0xA2B4F661L,18446744073709551615UL,0x6E66EB1EL,0x7B517C16L},{0xA2B4F661L,0x3C65AD83L,6UL,0UL},{0x2F177F35L,0x7B517C16L,0xA76140FEL,18446744073709551615UL},{4UL,0x8E3B24F4L,0x56102B0BL,0xAD29D004L},{0UL,3UL,4UL,0x83B53963L},{18446744073709551607UL,0xCCE873ABL,0x6E66EB1EL,0x6E43007AL}},{{18446744073709551611UL,18446744073709551615UL,0xA307BBAEL,0UL},{1UL,18446744073709551615UL,0xB96017A9L,0x6E43007AL},{4UL,0xCCE873ABL,0x9AA803A8L,0x83B53963L},{0xD7C41457L,3UL,0xD2C6E551L,0xAD29D004L},{0x6E66EB1EL,0x8E3B24F4L,0x6E66EB1EL,18446744073709551615UL},{0UL,0x7B517C16L,0x0248A149L,0UL},{0xFE77B29AL,0x3C65AD83L,0xDC6503F7L,0x7B517C16L},{4UL,18446744073709551615UL,18446744073709551611UL,0xF36FCDD4L},{18446744073709551615UL,0xCCE873ABL,0xFE77B29AL,0xD6B92DCAL}},{{4UL,0xAD29D004L,0x0248A149L,18446744073709551615UL},{0x0248A149L,18446744073709551615UL,1UL,0x3C65AD83L},{0UL,3UL,0xA2B4F661L,0UL},{0x2F177F35L,0UL,0UL,0x4727D97CL},{0UL,0xCCE873ABL,0xD7C41457L,0x4727D97CL},{0xA307BBAEL,0UL,0x0248A149L,0UL},{6UL,3UL,0x2F177F35L,0x3C65AD83L},{1UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL},{0x2F177F35L,0xAD29D004L,0x6E66EB1EL,0xD6B92DCAL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_2066[i] = 0UL;
        for (l_1392 = 0; (l_1392 > 27); l_1392 = safe_add_func_uint8_t_u_u(l_1392, 1))
        {
            unsigned l_2021 = 0x430E050FL;
            unsigned l_2057 = 0x3A0E829FL;
            int l_2059[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2059[i] = 0x93789806L;
            l_2032 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((l_1742 = (g_19.f6.f5 = func_61(l_2021, (l_1741 = (safe_sub_func_int16_t_s_s(g_19.f6.f3, (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(g_964, g_1982.f3)), (g_2028 < l_2029))))))))) ^ (safe_lshift_func_int16_t_s_s((g_19.f4 , g_19.f1), g_19.f6.f2))), g_505[2])) , 0x41DCL), l_2029));
            if (g_1103[3])
                continue;
            for (g_964 = 0; (g_964 < 45); g_964++)
            {
                int l_2039[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_2039[i] = 0xB15AD01CL;
                l_1742 = func_57(g_19.f4.f9);
                if (((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(0x65L, l_2039[0])), l_21.f2)) , (safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((l_21.f6.f5 >= (func_67((((0x761FL != (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((+g_19.f6.f6), (l_21.f4 , (g_408[4][7][1] = (((safe_lshift_func_int8_t_s_s((g_1982.f5 && ((((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((0x0DCC3F0408543A83LL & 18446744073709551609UL), l_2032)), (-1L))) < 0x2F67L) > (-1L)) | l_2032)), g_19.f2)) , g_505[0]) & g_715))))), l_2029))) != g_1473) | 0x6DCAA2BE3C18FBC0LL), g_359) | g_19.f6.f9)), 2)), l_2056)), l_2021))))
                {
                    l_2032 = (~0x48D8DD60L);
                }
                else
                {
                    return g_505[1];
                }
                l_2057 = g_1587;
                if ((l_2059[1] = g_2058))
                {
                    short l_2065 = 0xDD32L;
                    for (g_19.f6.f4 = 0; (g_19.f6.f4 < 19); g_19.f6.f4++)
                    {
                        l_2059[1] = l_2021;
                        l_2062 = l_2057;
                        g_12[2] = ((g_232 != ((((g_208 > ((safe_add_func_int8_t_s_s(func_67((g_2028 , func_67(l_2059[1], g_104)), g_19.f4.f3), ((g_1946[0][4] > g_19.f4.f9) < l_2065))) < l_2039[0])) >= g_1982.f6) < g_358[0][0]) > l_2066[0])) , 0xB5E50199L);
                    }
                }
                else
                {
                    return g_19.f4.f7;
                }
            }
        }
        for (g_1982.f0 = 0; (g_1982.f0 <= 52); g_1982.f0 = safe_add_func_int32_t_s_s(g_1982.f0, 7))
        {
            unsigned short l_2069[6] = {0x16B0L,0x16B0L,0xC1F7L,0x16B0L,0x16B0L,0xC1F7L};
            int l_2070 = (-1L);
            unsigned short l_2146 = 8UL;
            short l_2157 = 7L;
            unsigned long long l_2199 = 18446744073709551609UL;
            unsigned l_2200 = 0x68339AEAL;
            unsigned l_2264 = 4294967289UL;
            long long l_2271 = 0xA68319E4773DCEADLL;
            short l_2280[3];
            int i;
            for (i = 0; i < 3; i++)
                l_2280[i] = 0x59E7L;
            l_2070 = (l_2069[2] = l_1392);
            g_90 = l_2066[0];
            for (g_461 = 0; (g_461 >= 28); ++g_461)
            {
                unsigned short l_2113 = 65534UL;
                int l_2138 = 0L;
                if ((safe_sub_func_int32_t_s_s(g_358[0][0], 0x4F401108L)))
                {
                    int l_2090 = 1L;
                    int l_2091 = (-7L);
                    unsigned l_2149[6] = {0x57CEC2ECL,0x57CEC2ECL,0x57CEC2ECL,0x57CEC2ECL,0x57CEC2ECL,0x57CEC2ECL};
                    int l_2150[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2150[i] = 4L;
                    l_2032 = (65528UL <= ((safe_add_func_uint32_t_u_u((1L || (safe_div_func_uint64_t_u_u((l_2069[2] > func_67((((l_2091 = (safe_unary_minus_func_int32_t_s((safe_div_func_int32_t_s_s(((g_1982.f9 || func_57(g_208)) ^ ((safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u(g_1982.f0, (safe_rshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((g_19.f1 == (l_2070 = g_1198)), l_2090)), 6)))) < l_2062) && 0x6578L), 12)) || g_1982.f5)), g_19.f3))))) , l_2029) , 0xBDE98026L), l_2090)), g_1473))), 1UL)) ^ g_1982.f7));
                    if (((((((1UL != g_147) ^ ((g_2005[0][0] = (0L != ((safe_sub_func_uint64_t_u_u((~((0xECF745CFL | (l_2091 = (safe_mod_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0xFE6DL, (g_19.f6.f8 = (l_2102 = g_19.f6.f2)))), (safe_add_func_uint64_t_u_u(g_232, ((!(safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((g_124[0] = ((safe_div_func_int8_t_s_s(g_1982.f0, ((g_104 = l_2062) | 0x66BC27C4L))) , g_161)) == g_12[0]), g_12[0])), 9)) && g_460), l_21.f3))) || 0UL))))), l_2069[2])))) | 0L)), 0x59BB5F9E5A632FEELL)) >= l_2113))) ^ l_2029)) , l_2066[0]) & g_2114) != g_2114) >= l_2069[5]))
                    {
                        unsigned char l_2130[4][10] = {{0x63L,1UL,0xE9L,251UL,0xE9L,1UL,0x63L,1UL,1UL,0xD6L},{1UL,0x37L,0x9CL,3UL,0x63L,0x63L,3UL,0x9CL,0x37L,1UL},{0xE5L,0x37L,1UL,6UL,251UL,0xD6L,0x63L,0xD6L,251UL,6UL},{6UL,1UL,6UL,0x37L,251UL,1UL,1UL,0xE9L,0xE9L,1UL}};
                        struct S0 l_2131 = {5UL,18446744073709551614UL,9UL,0L,1L,0xA1D5L,-1L,0x1B2CL,6UL,4294967295UL};
                        int i, j;
                        l_2130[3][3] = (safe_div_func_int32_t_s_s((((safe_rshift_func_int8_t_s_s((0x8AA8L != ((((safe_add_func_uint16_t_u_u((((l_2062 <= (safe_sub_func_uint64_t_u_u(((l_2066[0] > ((safe_mod_func_int16_t_s_s(0xFC57L, ((safe_div_func_int16_t_s_s(func_61((((safe_rshift_func_int8_t_s_u((func_61(g_19.f6.f3, l_2113) <= g_532), l_2129)) && 1L) , 4294967295UL), g_19.f0), 7UL)) , l_2066[0]))) | l_2090)) <= 0UL), l_2070))) == l_2069[2]) & g_147), g_2005[0][0])) ^ g_19.f6.f6) < l_2090) == g_19.f6.f6)), l_2062)) != (-1L)) <= (-7L)), g_1060));
                        l_2138 = (((g_208 = 0xF604116DD0BA53C2LL) , (l_2131 , g_19.f4.f0)) <= ((safe_mod_func_int16_t_s_s((l_21.f4.f9 < ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_1982 , g_791), (l_20 , (l_2090 >= (g_2005[3][0] = 0x51A5D37AA3B4F505LL))))), g_505[1])) || 65535UL)), 65535UL)) < g_19.f6.f5));
                        g_90 = g_19.f4.f8;
                        l_2150[2] = (((((g_1946[0][5] = ((safe_add_func_uint8_t_u_u(((+(func_57((0xB9L > g_1497)) != ((safe_sub_func_int8_t_s_s((l_2146 = (l_2091 = l_2145[8])), l_21.f4.f6)) != ((-1L) & g_1103[0])))) > ((g_358[0][0] , (safe_add_func_int64_t_s_s((l_2113 | 0xE342L), l_2149[4]))) <= g_1982.f0)), l_2138)) <= l_2149[1])) & g_19.f6.f7) & l_2102) , 3L) , 0x629BE7B3L);
                    }
                    else
                    {
                        unsigned short l_2153[4] = {1UL,1UL,1UL,1UL};
                        int i;
                        l_2153[3] = ((safe_rshift_func_uint8_t_u_u(l_2113, 3)) > g_906);
                        l_1742 = (safe_unary_minus_func_uint16_t_u((g_1813 = (safe_lshift_func_uint16_t_u_u((l_2157 < 1UL), 0)))));
                        if (l_2070)
                            continue;
                    }
                    for (l_21.f4.f5 = 0; (l_21.f4.f5 >= 50); l_21.f4.f5 = safe_add_func_int8_t_s_s(l_21.f4.f5, 8))
                    {
                        return g_1103[0];
                    }
                }
                else
                {
                    for (g_715 = 0; (g_715 <= 0); g_715 += 1)
                    {
                        int l_2160 = 0L;
                        int i;
                        l_2160 = (~(l_1741 = g_815[g_715]));
                    }
                    l_2070 = l_21.f6.f3;
                }
                if (g_358[0][1])
                    break;
            }
            if (g_19.f1)
            {
                unsigned long long l_2163[10] = {1UL,18446744073709551615UL,0x1B9521A5F170D3FELL,0x1B9521A5F170D3FELL,18446744073709551615UL,1UL,18446744073709551615UL,0x1B9521A5F170D3FELL,0x1B9521A5F170D3FELL,18446744073709551615UL};
                int l_2198 = 0x46AC2B08L;
                int i;
                g_12[2] = (safe_rshift_func_uint16_t_u_u((g_1813 = (func_52(l_2163[4], g_815[0], ((safe_mod_func_int8_t_s_s((-1L), g_12[1])) , func_61((l_2070 = ((((safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u((((!func_67(((safe_rshift_func_int8_t_s_u((0x3C43L | g_505[1]), (safe_lshift_func_uint8_t_u_u(0x39L, 1)))) < (g_104 ^ (((safe_rshift_func_int16_t_s_u(0x3E58L, 1)) > g_906) == l_2070))), l_2062)) == g_2005[0][0]) , 0UL), g_358[0][0])), g_2176[2][1][0])) && l_2163[4]) <= g_2176[2][2][0]) != g_19.f4.f5)), l_2177)), l_2163[8]) & g_460)), 9));
                l_2200 = (safe_div_func_int64_t_s_s(((l_2198 = ((g_570[1] < g_166[1][1][0]) || ((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(0xA474L, ((g_124[0] && (-1L)) | l_2069[1]))) || (~((safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(g_2005[2][0], (safe_mul_func_uint8_t_u_u((g_124[0] = l_2163[5]), (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((g_161 = (safe_mul_func_uint16_t_u_u(g_2028, l_2163[4]))), g_1396)), 3)), l_2069[2])))))) | 1L), l_2069[2])) , 0x959C5E4AB34DC2ABLL))), l_2157)) , l_2163[7]))) > l_2199), g_19.f6.f0));
            }
            else
            {
                long long l_2222 = 0xED26B139C7F616EBLL;
                unsigned long long l_2231 = 18446744073709551608UL;
                int l_2279 = 0x551C7514L;
                char l_2314 = 0x59L;
                for (l_21.f4.f1 = 0; (l_21.f4.f1 < 13); l_21.f4.f1 = safe_add_func_uint32_t_u_u(l_21.f4.f1, 6))
                {
                    int l_2205 = (-10L);
                    for (g_104 = 16; (g_104 == 29); ++g_104)
                    {
                        long long l_2206[5];
                        unsigned short l_2215 = 65535UL;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2206[i] = 0L;
                        l_2205 = g_19.f3;
                        l_2215 = ((func_67(g_906, l_2206[1]) , (l_2206[0] >= (safe_lshift_func_uint8_t_u_s(255UL, (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(g_1946[0][0], (g_252 , g_19.f6.f4))) & g_19.f6.f1) , g_964), 4)) && 0x6F29L), g_1060)))))) >= (-1L));
                        g_12[2] = ((((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(0x11L, l_2205)), 7)), (~l_2222))) >= func_67((safe_sub_func_uint16_t_u_u(func_67((safe_add_func_uint32_t_u_u((0UL | ((0L > g_906) , ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 1)), l_2205)) , (0x9140D792L >= 1UL)))), l_2146)), l_2206[1]), l_2231)), l_2070)) > 4294967290UL) , g_208);
                    }
                    if (g_1982.f3)
                    {
                        unsigned char l_2234 = 0xA7L;
                        int l_2240 = 9L;
                        g_12[3] = (safe_div_func_uint64_t_u_u(func_28((l_2234 <= (func_28(((((l_2240 = ((+(l_2234 ^ g_1982.f3)) , ((safe_div_func_uint16_t_u_u(((((l_1742 = (l_2239 = (g_161 , (l_2032 = (l_2129 & (safe_rshift_func_uint16_t_u_u(g_358[0][0], 0))))))) | l_2234) & (g_2176[2][1][1] || l_2066[0])) < 0x9460L), g_1060)) >= l_2205))) , 0xE9L) == l_2069[2]) & l_2234), g_1946[0][5]) <= l_2205)), g_1982.f6), g_19.f4.f3));
                    }
                    else
                    {
                        int l_2266 = 0xA3127324L;
                        l_2266 = (safe_sub_func_uint32_t_u_u(l_2069[2], func_28(g_815[0], (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xC76DD043L, func_61((safe_div_func_int64_t_s_s((g_1982 , (safe_lshift_func_int16_t_s_s(l_2070, 7))), (l_21.f6.f1 & (safe_lshift_func_int8_t_s_s(g_19.f4.f1, 4))))), (g_1199 = (l_2264 = (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((g_837 >= l_2263) ^ l_1392) == g_570[8]), g_19.f4.f2)), g_715))))))), l_2265)), 9UL)) ^ 0x44B4A6B6BC511177LL), g_19.f5)), 2)))));
                    }
                }
                if ((safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s((l_2271 & g_166[1][1][0]), ((((safe_sub_func_uint64_t_u_u(l_2129, (safe_lshift_func_uint16_t_u_u(((0x2E0A4899L == l_2129) < (safe_mod_func_uint32_t_u_u((l_2281 = (l_2280[1] = (((func_67((l_21.f6.f0 , func_57(g_19.f2)), (l_2279 = (l_2278 , l_2200))) & l_21.f7) && 0xD1F9L) >= 0x070DL))), l_2231))), l_2032)))) == g_19.f6.f1) , g_359) , l_2032))), l_2282)))
                {
                    l_2279 = ((g_1982.f8 = (func_48(func_13(g_19, (((g_906 || g_161) , (l_2279 && l_21.f4.f9)) , 0xA1F51C06L), (g_19 , (l_2069[1] <= (l_2032 = g_19.f6.f5))), g_19, g_1982.f1), g_19.f4.f8, l_2283) , l_1741)) , g_19.f6.f7);
                }
                else
                {
                    short l_2302 = (-6L);
                    g_90 = 1L;
                    g_12[2] = (safe_lshift_func_uint16_t_u_s(((-1L) >= (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(0x378E9C31E48C8CBCLL, (safe_div_func_uint64_t_u_u(0x8646D4E143ECE493LL, ((safe_rshift_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(g_208, (safe_sub_func_int16_t_s_s((g_104 || (g_815[0] = (safe_mod_func_int8_t_s_s(((+(+(l_2070 = (safe_mod_func_int8_t_s_s((-6L), l_2302))))) | (l_2302 == ((((safe_lshift_func_int8_t_s_s(2L, g_461)) == g_252) <= (-1L)) , g_408[0][8][0]))), 0x39L)))), l_2305)))), g_1473)) , 0xA2E6C6E905F2659DLL))))), 4294967291UL))), 8));
                    for (l_2278.f4 = 0; (l_2278.f4 <= 0); l_2278.f4 += 1)
                    {
                        return l_21.f5;
                    }
                    for (l_21.f4.f5 = 22; (l_21.f4.f5 <= 47); ++l_21.f4.f5)
                    {
                        l_1742 = (g_1946[0][0] < (safe_rshift_func_uint8_t_u_s(g_19.f6.f0, 3)));
                    }
                }
                l_2314 = (!((+(~g_1302)) ^ (safe_div_func_int32_t_s_s((g_19.f6.f3 == ((l_21.f6.f2 || (~(g_12[2] = 0L))) , (safe_rshift_func_int8_t_s_u(l_2278.f3, func_61(((func_48(g_2058, g_1497, (l_2199 , g_19.f6)) | g_1982.f7) > l_2069[2]), l_2283.f0))))), 0x2229E586L))));
            }
        }
        l_2325 = (((func_57(l_2283.f8) >= (l_1741 = ((l_1742 = 0xA04A43A9A690C84FLL) & (l_2324[4][0][2] = ((safe_lshift_func_uint16_t_u_u((g_1103[0] || (g_19.f6.f5 = ((g_19.f6.f1 = (((safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_uint8_t_u_u(g_1982.f9, (safe_lshift_func_uint16_t_u_u(l_2323, g_1982.f6)))) != g_19.f4.f4) <= (g_19 , (-7L))) >= l_2281) , 0xECL), 3)) < l_2032) > l_2281)) < l_2278.f4))), 4)) > g_837))))) <= g_715) & 65535UL);
    }
    if ((safe_sub_func_int32_t_s_s(l_21.f6.f0, g_570[3])))
    {
        return g_19.f6.f0;
    }
    else
    {
        unsigned short l_2360 = 0UL;
        struct S1 l_2364 = {0xF9A73D13L,18446744073709551606UL,0x58L,0xC94C255A27F7F826LL,{0UL,0x5DC4FEA5EC51B8D4LL,0x8EL,1L,1L,0xDE09L,5L,0x8A8EL,65533UL,0x8F85C9F4L},0xB5L,{0xD0L,0xB1750C2516723174LL,0x68L,-3L,-10L,0x2108L,1L,0x6E42L,65526UL,0UL},-10L};
        int l_2366[4] = {4L,4L,4L,4L};
        int i;
        for (l_1742 = (-11); (l_1742 < 5); l_1742++)
        {
            long long l_2332 = 0x6DD8AF08F8C77095LL;
            char l_2363 = 0x3DL;
            int l_2378[8] = {0x32A91EE6L,0x30F3FF8AL,0x30F3FF8AL,0x32A91EE6L,0x30F3FF8AL,0x30F3FF8AL,0x32A91EE6L,0x30F3FF8AL};
            int l_2382 = 0x6ED34176L;
            int i;
            for (g_19.f4.f8 = 0; (g_19.f4.f8 <= 1); g_19.f4.f8 += 1)
            {
                unsigned l_2355 = 0x9EDC8512L;
                const long long l_2362 = 0x1BAD4DF4F3638D0CLL;
                unsigned l_2383 = 0x51282C0AL;
                long long l_2399 = (-9L);
                int l_2409 = (-1L);
                int l_2410 = 0xC144A8FAL;
                for (l_2263 = 0; (l_2263 <= 1); l_2263 += 1)
                {
                    unsigned long long l_2333 = 0xB79985083BB4B4A4LL;
                    struct S1 l_2334 = {0xE053CC0FL,18446744073709551614UL,0x36L,18446744073709551609UL,{0x67L,1UL,250UL,0x62L,1L,65533UL,0x71L,-1L,8UL,0x23993AA9L},0L,{255UL,0xE9F06FA1100C935CLL,3UL,6L,-8L,0x5543L,1L,-3L,65531UL,0xDB8640A0L},3L};
                    unsigned short l_2365 = 0x703CL;
                    int l_2384 = 0L;
                    int i, j, k;
                    l_2325 = (l_2333 = (g_166[l_2263][(g_19.f4.f8 + 1)][g_19.f4.f8] >= (safe_mod_func_int64_t_s_s(l_2305, l_2332))));
                    if ((g_19.f0 && ((g_1198 = (((l_2366[2] = func_13(l_2334, ((((-1L) > (((func_57(g_208) ^ (((1UL <= (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((g_815[0] = ((g_19.f4.f4 = (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((!(safe_add_func_int32_t_s_s((g_2361 = (((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((g_1982.f0 , l_2355) != ((+(((safe_add_func_int8_t_s_s((g_358[0][0] != 4294967287UL), g_1473)) & 0L) , g_19.f4.f1)) & l_2360)), 2)) <= 0xCC9CL), 0)) == g_358[0][0]), g_2058)) | g_124[0]) != 0x9076C0151D34F69ALL)), 0x6E10A08EL))), 3)), 0x05L))) && 0x5C89L)), 0xACF31A761B5E8486LL)), 0xC1L)), 5)) , 0xF8D62AC8F50D3D13LL) || l_2332)) , g_19.f6) , g_505[2])) , l_2332) > g_532)) > l_2362) & g_2176[2][1][0]), l_2363, l_2364, l_2365)) > g_19.f6.f4) == 0x6B75CFAFL)) < 0x4F6F50649B007E8ELL)))
                    {
                        unsigned char l_2375 = 0UL;
                        int l_2379 = 6L;
                        g_12[2] = (g_215 | (safe_mod_func_int8_t_s_s(l_2355, (safe_sub_func_int8_t_s_s(0xF4L, (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((l_2364.f6 , (l_2375 = (-1L))) > (safe_add_func_int32_t_s_s((l_2378[2] = l_2334.f3), (g_358[2][1] == 0x13CB5F86L)))), 0xB905L)), l_2379)))))));
                        g_90 = g_837;
                        l_2325 = ((safe_rshift_func_int16_t_s_u(g_408[0][6][0], ((l_2375 >= 0x4E80L) != (g_837 , g_906)))) > (l_2378[0] = (l_2379 = (((-1L) || ((l_2382 = ((g_1587 , (((((l_2366[2] = l_2382) > (g_19.f2 >= l_2383)) >= l_2364.f2) | l_2383) > 0x71L)) < g_19.f7)) > l_2375)) , 0x1D3F96C3L))));
                        l_2384 = g_104;
                    }
                    else
                    {
                        char l_2385 = 0L;
                        int l_2401 = 0x5200CB24L;
                        g_90 = g_161;
                        if (l_2378[2])
                            continue;
                        g_12[3] = ((((g_1813 = ((g_161 >= (l_2382 = l_2355)) || (g_570[8] && ((+(l_2385 | g_19.f6.f9)) <= (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((((g_1946[0][5] = (g_90 | (g_1982 , 0xC7L))) > (g_2361 = (safe_mul_func_int16_t_s_s(0x583DL, 65535UL)))) , g_2058), 0x6D6E8FA8L)), l_2382)))))) , g_1396) == 0x53FC37A0A0EAB794LL) == l_2385);
                        l_2401 = ((((safe_add_func_int64_t_s_s(l_2332, l_2334.f6.f9)) & (((g_1982.f9 = ((func_48(((((safe_sub_func_int32_t_s_s(g_815[0], (g_1982 , (g_1982.f9 != ((l_2366[3] = func_57(((safe_mod_func_uint32_t_u_u(l_2398, g_1982.f9)) , g_232))) , 7L))))) || l_2399) || l_2363) <= g_837), l_2400, g_19.f4) ^ 1UL) , l_2362)) > 1UL) != l_2385)) || g_19.f4.f1) || 1L);
                    }
                    if (g_166[1][0][0])
                    {
                        unsigned l_2402[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_2402[i] = 0UL;
                        return l_2402[0];
                    }
                    else
                    {
                        return l_2355;
                    }
                }
                l_2410 = (l_2409 = (((g_19 , l_21.f6.f1) > (safe_sub_func_uint16_t_u_u(g_1103[3], (0x3019L & (0xD69AL ^ g_124[0]))))) <= ((l_2378[0] = (safe_lshift_func_uint16_t_u_s((0L && (safe_mul_func_int8_t_s_s(l_2265, (+((func_67(g_505[1], g_1946[0][5]) == l_21.f7) < g_19.f1))))), 12))) & 0x14E4L)));
                g_104 = l_2364.f4.f3;
            }
        }
        l_1741 = g_166[1][1][0];
    }
    l_1742 = (l_21.f2 , ((func_57(g_2058) || (safe_div_func_int32_t_s_s(((~((l_21 , (g_1060 = (safe_mul_func_int16_t_s_s(g_19.f3, (((l_1741 = (g_19 , ((safe_add_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u(l_21.f6.f3, ((g_124[0] = g_791) & ((safe_mod_func_uint16_t_u_u(g_2176[2][1][0], l_1741)) & l_21.f4.f4)))) & l_1392), l_21.f4.f4)), g_19.f6.f0)) ^ 18446744073709551609UL))) , 0xDEE9L) == 8L))))) < 0UL)) != l_2398), g_19.f4.f5))) , g_215));
    return l_2265;
}







static unsigned long long func_4(short p_5, const unsigned long long p_6, unsigned p_7, long long p_8, struct S0 p_9)
{
    unsigned char l_1985 = 255UL;
    int l_1990 = 0x5B2BE26BL;
    unsigned l_1991[8];
    unsigned long long l_2002 = 18446744073709551608UL;
    int l_2006 = 1L;
    int i;
    for (i = 0; i < 8; i++)
        l_1991[i] = 0x8F9C87A1L;
    g_90 = ((safe_mul_func_int8_t_s_s(l_1985, (safe_rshift_func_uint16_t_u_u((((g_19.f1 = (4294967288UL ^ g_19.f2)) != g_19.f6.f6) | g_208), (safe_sub_func_int32_t_s_s((l_1990 = l_1985), 0xC56ABA5DL)))))) <= p_9.f1);
    l_2006 = (g_1946[0][5] , func_28(((p_9.f9 = (l_1991[3] <= g_1982.f7)) && ((l_1990 = g_358[1][0]) && (0x3C687BB16E75B72DLL >= (safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((0UL < ((((safe_sub_func_uint16_t_u_u(((g_532 = (-8L)) != ((safe_sub_func_uint32_t_u_u(l_2002, (safe_lshift_func_uint16_t_u_s((((!p_9.f3) ^ p_9.f9) , p_7), g_815[0])))) && g_1982.f4)), g_2005[0][0])) >= l_1991[1]) >= g_19.f6.f3) | 1UL)), g_205)) || 0x70L), p_8))))), g_358[0][0]));
    g_90 = (!p_8);
    return l_2006;
}







static long long func_13(struct S1 p_14, unsigned p_15, short p_16, struct S1 p_17, unsigned char p_18)
{
    const unsigned char l_1745 = 0xA7L;
    int l_1751 = (-6L);
    char l_1752 = 0x69L;
    unsigned l_1753 = 0x0BBADF1AL;
    int l_1776 = 0x56682D43L;
    unsigned char l_1777 = 0x8AL;
    int l_1803[3][6][5] = {{{(-1L),0x9F04660DL,0x35718BEFL,0x04469FF1L,0L},{0x6B7DB4FCL,(-1L),(-2L),0xB480C305L,(-9L)},{(-1L),0xB480C305L,(-5L),(-9L),(-5L)},{0x9F04660DL,0x9F04660DL,(-1L),(-9L),0x9DEECE43L},{0xB480C305L,(-1L),0xC96BB066L,0xB480C305L,0x9F04660DL},{(-1L),0x6B7DB4FCL,0x7F9AA2B0L,0x04469FF1L,0x6B7DB4FCL}},{{0x9F04660DL,(-1L),0L,0L,0L},{0xC96BB066L,0x9F04660DL,0xC96BB066L,0x7F9AA2B0L,0L},{(-9L),0xB480C305L,(-2L),(-1L),0x6B7DB4FCL},{(-1L),(-1L),5L,(-9L),0x9F04660DL},{(-5L),0x9F04660DL,(-2L),0x6B7DB4FCL,0x9DEECE43L},{(-1L),0xC96BB066L,0xC96BB066L,(-1L),(-5L)}},{{(-1L),(-9L),0L,0x04469FF1L,(-9L)},{(-5L),(-1L),0x7F9AA2B0L,(-2L),0L},{(-1L),0xE92C6945L,0L,(-5L),0xD7B3EDB6L},{(-2L),0x6B7DB4FCL,0x9DEECE43L,0x6B7DB4FCL,(-2L)},{0L,0x6B7DB4FCL,0xE92C6945L,(-1L),0xB480C305L},{0xB480C305L,0xE92C6945L,0xD7B3EDB6L,(-2L),0x35718BEFL}}};
    unsigned l_1811 = 18446744073709551614UL;
    long long l_1838 = 1L;
    struct S0 l_1883 = {0xCCL,0x66DAFE10943ED22ELL,255UL,3L,0x2CD1L,0xF64EL,0x04L,0x9FB7L,0x3DFBL,0UL};
    int l_1912[1][1][1];
    long long l_1926 = 0x401712C8B0AFB1C7LL;
    struct S1 l_1969 = {9L,0x4E7290B3D7FB3BD6LL,0UL,0UL,{0xBEL,0x0EAD1751AEFFCEFDLL,0x60L,0x09L,0L,0xC321L,0x5CL,0L,0UL,0x78A197EBL},-10L,{0xC2L,18446744073709551613UL,0xA9L,0x51L,0x87F6L,0x20F1L,0xFCL,8L,0xBFF4L,0x625C2C98L},8L};
    unsigned char l_1970 = 0UL;
    int l_1971 = 0x7ED66F09L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1912[i][j][k] = 1L;
        }
    }
    if (((safe_mul_func_int8_t_s_s((((l_1745 ^ ((safe_rshift_func_uint16_t_u_u((((func_48((func_35((safe_unary_minus_func_int16_t_s((p_14.f4.f4 = (g_1103[3] == 0xF7L))))) < ((g_19.f6.f2 >= (g_19.f2 != p_17.f4.f5)) ^ ((safe_rshift_func_uint8_t_u_s((l_1751 = (l_1745 || (p_17.f6.f9 <= l_1745))), 4)) , g_19.f6.f9))), p_14.f0, p_14.f6) == l_1745) & l_1752) >= l_1752), 10)) != g_12[1])) || 0xBF92L) > g_19.f2), g_19.f7)) <= l_1745))
    {
        short l_1754 = 0xB306L;
        l_1754 = (l_1753 , 0x3A8E3137L);
    }
    else
    {
        short l_1769 = 0x2F21L;
        int l_1804 = 0x88DE5023L;
        const struct S0 l_1805[4] = {{2UL,0xF59AD86D8F3CED6FLL,1UL,0x57L,0x4AB6L,0UL,0x0EL,1L,0x1423L,4294967295UL},{2UL,0xF59AD86D8F3CED6FLL,1UL,0x57L,0x4AB6L,0UL,0x0EL,1L,0x1423L,4294967295UL},{2UL,0xF59AD86D8F3CED6FLL,1UL,0x57L,0x4AB6L,0UL,0x0EL,1L,0x1423L,4294967295UL},{2UL,0xF59AD86D8F3CED6FLL,1UL,0x57L,0x4AB6L,0UL,0x0EL,1L,0x1423L,4294967295UL}};
        unsigned short l_1841 = 0UL;
        unsigned l_1860[6][4] = {{0x4EB0BFACL,0x7D9DD4F3L,0x4EB0BFACL,0x7D9DD4F3L},{0x4EB0BFACL,0x7D9DD4F3L,0x4EB0BFACL,0x7D9DD4F3L},{0x4EB0BFACL,0x7D9DD4F3L,0x4EB0BFACL,0x7D9DD4F3L},{0x4EB0BFACL,0x7D9DD4F3L,0x4EB0BFACL,0x7D9DD4F3L},{0x4EB0BFACL,0x7D9DD4F3L,0x4EB0BFACL,0x7D9DD4F3L},{0x4EB0BFACL,0x7D9DD4F3L,0x4EB0BFACL,0x7D9DD4F3L}};
        int l_1884 = 0x2091128DL;
        unsigned short l_1923 = 0xB88DL;
        int i, j;
        for (p_17.f4.f4 = (-19); (p_17.f4.f4 == 8); p_17.f4.f4 = safe_add_func_uint8_t_u_u(p_17.f4.f4, 1))
        {
            long long l_1793 = 6L;
            unsigned l_1802 = 0x960CB305L;
            l_1751 = func_61(((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(g_1396, (((safe_lshift_func_int16_t_s_u(func_67((g_19.f4.f9 = ((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_1103[1], func_67((safe_sub_func_int8_t_s_s(l_1769, (safe_rshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s((func_52((g_19.f6.f9 = (~0x8F877355L)), ((p_17.f5 != 65531UL) , (safe_sub_func_uint16_t_u_u((p_14.f6.f9 , (0xBFL & 0xA7L)), p_17.f2))), g_166[1][0][0], p_17.f6.f1) , p_17.f3), p_16)) != 0x59AAL) > l_1776), g_19.f4.f9)))), p_17.f4.f5))) & g_19.f4.f8), g_655)) , g_19.f6.f3)), p_14.f6.f3), 13)) , l_1777) , p_14.f6.f7))) < 65534UL), l_1776)) | l_1769), g_1473);
            l_1804 = (safe_mod_func_int32_t_s_s(((l_1803[0][3][0] = (safe_unary_minus_func_int32_t_s((!(safe_add_func_int64_t_s_s((safe_div_func_int16_t_s_s(((p_17.f6 , (p_14.f5 > g_1199)) >= (l_1751 = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(p_17.f6.f6, ((((safe_add_func_int32_t_s_s((safe_sub_func_int32_t_s_s(g_19.f6.f1, (l_1793 | (safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((~0xC1L), ((safe_div_func_int64_t_s_s(g_19.f4.f0, ((safe_sub_func_uint32_t_u_u(g_147, p_14.f7)) || l_1769))) > l_1802))) && p_14.f4.f3), 0xE8A40C56L))))), 4294967286UL)) <= l_1769) ^ g_19.f3) >= 0xA9DDL))) & p_17.f3), 2)))), 0x1830L)), g_1199)))))) || l_1802), l_1753));
        }
        if ((+g_19.f4.f8))
        {
            struct S0 l_1810 = {255UL,0x7CA6695587C379D2LL,0x80L,1L,0x190EL,6UL,0xE6L,0x1E71L,0xE7A4L,0x88C28B6FL};
            int l_1812 = 0x98D8C666L;
            l_1803[0][3][0] = func_61(g_791, (g_408[0][6][0] = (l_1752 , (l_1805[2] , 1L))));
            l_1751 = ((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(0L, (g_19.f5 = (p_14.f4.f6 = ((func_48(g_124[0], g_19.f6.f5, (g_19.f6.f9 , l_1810)) == ((g_1813 = (((~((l_1812 = l_1811) , (0x9525L & ((g_12[1] , g_19) , p_17.f7)))) , l_1810.f6) || 7UL)) , g_19.f6.f9)) | l_1777))))) ^ p_17.f6.f1) == l_1805[2].f1), l_1745)) & p_14.f5);
            for (g_1060 = (-19); (g_1060 >= 34); g_1060++)
            {
                short l_1816 = 0xDF6CL;
                g_90 = (l_1816 , g_19.f6.f8);
            }
            l_1751 = (p_14.f6.f0 || ((safe_add_func_int64_t_s_s(0x7C7D66182F593F8CLL, (((4294967295UL > g_19.f4.f3) >= p_17.f4.f6) && ((((safe_add_func_uint32_t_u_u((l_1804 = 4294967295UL), ((((safe_rshift_func_int8_t_s_u(l_1810.f9, 5)) ^ (p_14.f6.f3 && (p_17.f4.f6 | (-8L)))) > l_1753) ^ 1UL))) || g_12[2]) || 0x017BD05C8747DC06LL) , l_1776)))) <= g_358[0][0]));
        }
        else
        {
            int l_1839 = 0xA94703CFL;
            int l_1843 = (-3L);
            struct S1 l_1895 = {5L,18446744073709551615UL,0x9BL,18446744073709551615UL,{0xACL,18446744073709551610UL,0xBFL,0x6CL,0x5449L,1UL,0x2CL,7L,0UL,0xB1D1BD43L},7L,{0x46L,0x2C163319CBDD812ALL,0xBFL,-1L,0xA2FEL,0x2A21L,-4L,-1L,0x8BC1L,4294967288UL},0L};
            long long l_1943 = 0L;
            for (g_19.f6.f5 = 0; (g_19.f6.f5 < 58); g_19.f6.f5 = safe_add_func_int32_t_s_s(g_19.f6.f5, 3))
            {
                long long l_1840 = 1L;
                const int l_1842 = 0xE56F4FDDL;
                unsigned short l_1844 = 0xDC17L;
                int l_1894 = 0xCC770D5FL;
                struct S1 l_1918 = {0x0EDA58BAL,0x630AD41C92BD76B6LL,0xCBL,18446744073709551608UL,{3UL,18446744073709551609UL,1UL,-7L,0x184BL,0xFA7AL,0x66L,0xED80L,0UL,0x66706560L},0xFFL,{7UL,0x1877773411DF0CC0LL,0xD3L,0x60L,0x5C5BL,0x176CL,-1L,0x8029L,0x8F34L,0x3AD6BD36L},-1L};
                if (((l_1844 = (((l_1843 = ((func_52(l_1745, (((g_205 = 0x88DBBA6E5A1960B6LL) , (safe_add_func_int32_t_s_s(func_52(((p_14.f4.f7 != (l_1840 = (((safe_unary_minus_func_uint16_t_u(func_52(p_17.f4.f6, (g_19.f4.f1 ^ (p_17.f1 , func_28(p_17.f3, (func_57((((safe_div_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((func_52((safe_lshift_func_uint16_t_u_s(g_19.f2, (safe_rshift_func_uint16_t_u_s(4UL, 3)))), l_1838, g_19.f4.f8, p_14.f7) , 4294967295UL), 1UL)) , 0x103C1DC6L) < l_1839), 1UL)) >= l_1805[2].f6) , 9UL)) && 1L)))), l_1803[0][3][0], g_19.f4.f5))) , 0xF82EC6F840846DD3LL) | l_1805[2].f9))) < g_12[2]), l_1841, l_1842, l_1842), 4294967287UL))) & g_19.f4.f3), p_17.f4.f5, p_17.f5) & g_19.f6.f1) && g_356)) != l_1753) == 6UL)) == g_19.f6.f9))
                {
                    const unsigned long long l_1865 = 0x839B54B98B8B1F1FLL;
                    for (l_1751 = (-10); (l_1751 > 4); l_1751++)
                    {
                        unsigned l_1855 = 0xD6FCDAE8L;
                        int l_1866 = 0xDACD422EL;
                        g_104 = 3L;
                        l_1804 = (safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(((l_1804 <= (safe_lshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s(l_1855, p_14.f4.f7)) > (safe_div_func_int16_t_s_s((((((safe_mod_func_uint16_t_u_u(((l_1839 != g_19.f1) || (l_1860[1][2] & func_67(l_1745, func_52((l_1866 = (safe_sub_func_int8_t_s_s(p_17.f6.f1, (safe_div_func_uint32_t_u_u(0x066CEA01L, l_1865))))), p_14.f4.f1, g_90, l_1865)))), l_1855)) , g_161) == g_19.f4.f4) && 0x5229L) > p_17.f0), l_1811))), g_791))) >= (-2L)), g_1198)) && l_1855), 3UL));
                        g_104 = 4L;
                    }
                    l_1804 = (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((p_14.f4.f8 = (g_19 , (safe_div_func_uint16_t_u_u((0UL <= (((g_19.f6.f3 = (safe_div_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u(func_48((g_19.f4.f5 <= (((safe_lshift_func_uint8_t_u_u(((p_14.f1 , p_14) , ((safe_sub_func_int32_t_s_s(l_1803[0][2][1], 0xAB928464L)) | ((p_17 , ((safe_mod_func_int16_t_s_s((l_1883 , p_14.f6.f2), p_17.f4.f0)) > 0x32L)) && l_1884))), 0)) != 65530UL) && p_14.f6.f6)), p_17.f6.f2, l_1805[2]), p_17.f6.f6)) && 9UL) <= l_1842), p_14.f6.f4))) >= 1L) ^ g_1587)), g_19.f0)))), 6)), g_19.f6.f2));
                    if ((safe_div_func_int32_t_s_s(g_19.f6.f5, (func_28((((safe_div_func_uint64_t_u_u((7UL <= (safe_add_func_uint64_t_u_u(g_104, ((1UL & ((g_19.f4.f3 = p_14.f6.f9) > p_17.f6.f8)) | (safe_mod_func_uint64_t_u_u((l_1844 <= (((g_19.f6.f1 >= 0x0E427FFCL) != 0xC9DCD9CCA7949A27LL) >= 0xEF204FA7L)), l_1811)))))), 1UL)) <= l_1865) , 0L), l_1839) , l_1843))))
                    {
                        const char l_1893 = 0x1AL;
                        g_104 = g_1813;
                        l_1804 = g_12[4];
                        l_1843 = (l_1894 = func_35((g_19.f4.f5 = l_1893)));
                    }
                    else
                    {
                        return g_19.f6.f5;
                    }
                    l_1804 = ((l_1895 , (l_1803[2][4][4] = (g_19.f6.f1 = g_505[2]))) >= l_1865);
                }
                else
                {
                    char l_1927[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1927[i] = 9L;
                    l_1912[0][0][0] = (0xA1L && ((safe_mod_func_int32_t_s_s((((~0xA06DEB15045F4CA4LL) ^ (0x2CDC353932DB140FLL & g_12[2])) <= (l_1751 = ((p_14.f3 ^ (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((g_1396 ^ (l_1804 = (safe_rshift_func_int8_t_s_s(p_14.f0, (safe_rshift_func_uint16_t_u_u(func_67((((((0x0F80E3A2L & (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_19.f4.f8 , g_19) , l_1844), 0x5DL)), g_906))) != (-3L)) & l_1860[1][0]) ^ p_17.f3) || g_505[1]), g_1813), 5)))))), g_19.f4.f3)), 1)), 0x1D078245L))) > p_14.f4.f0))), 0xA581A66CL)) , 0x61L));
                    l_1804 = (safe_sub_func_uint8_t_u_u(p_17.f7, (~0L)));
                    if (((func_61(p_17.f4.f3, l_1860[1][2]) > ((safe_unary_minus_func_int32_t_s(l_1844)) ^ g_1497)) & (safe_mul_func_int8_t_s_s(g_19.f6.f8, ((g_19 , (l_1918 , ((((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(l_1843, 0xBAE5L)), 1UL)) >= l_1843) && l_1923) , g_570[6]))) < p_14.f6.f0)))))
                    {
                        unsigned short l_1942 = 65535UL;
                        g_90 = (safe_sub_func_int32_t_s_s(l_1926, 0x37A4755FL));
                        l_1927[0] = g_104;
                        l_1804 = ((safe_add_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((func_48(g_791, g_166[0][2][1], g_19.f4) == (l_1894 = p_17.f6.f9)) >= (l_1803[0][3][0] & ((((((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(p_14.f4.f2, 5)), p_14.f5)) | (g_1587 = ((safe_mod_func_uint32_t_u_u(((safe_div_func_int64_t_s_s(l_1918.f4.f8, l_1942)) == p_16), l_1895.f7)) && l_1753))), 0xECDCL)) != p_17.f2) , l_1883.f3) & g_19.f4.f2) , 4294967295UL) | p_14.f7))), l_1895.f4.f5)) <= p_17.f4.f9), g_19.f6.f3)) == 0xA920L);
                        g_90 = (g_104 = (g_837 , g_1103[3]));
                    }
                    else
                    {
                        if (l_1943)
                            break;
                    }
                    for (l_1918.f4.f0 = (-17); (l_1918.f4.f0 <= 7); l_1918.f4.f0 = safe_add_func_int8_t_s_s(l_1918.f4.f0, 6))
                    {
                        if (l_1883.f2)
                            break;
                        return g_358[0][0];
                    }
                }
                return g_19.f4.f9;
            }
            g_90 = l_1883.f2;
            l_1843 = p_17.f4.f7;
            g_104 = (+l_1805[2].f4);
        }
        g_1946[0][5] = func_61(p_14.f6.f6, ((~(l_1805[2].f6 > (g_19.f4.f3 != (func_48((l_1805[2].f8 <= 0x2048F3D7757596D9LL), g_505[1], p_17.f6) | 0L)))) , l_1805[2].f5));
        l_1803[0][3][0] = (safe_lshift_func_int8_t_s_s((l_1805[2].f8 && (safe_div_func_int8_t_s_s(((((g_570[8] , func_52(g_19.f6.f4, g_19.f6.f4, (((p_14.f4.f3 || (safe_div_func_int8_t_s_s(0x72L, (func_35((safe_add_func_int32_t_s_s(l_1926, (g_90 = (l_1804 = ((safe_div_func_int16_t_s_s(p_17.f4.f4, (g_715 = 0x08F9L))) | 0x25BD503CL)))))) , 1UL)))) | l_1803[0][2][4]) | 0x1EC1L), g_19.f4.f3)) , 0xBFL) != 0xC1L) , 1L), 0x8BL))), g_19.f1));
    }
    l_1751 = g_19.f4.f8;
    l_1751 = ((safe_sub_func_int64_t_s_s(((l_1776 ^ func_28(p_17.f6.f4, g_505[1])) , ((safe_add_func_int8_t_s_s(((func_28((g_1946[0][5] = 0x5D97L), func_52((safe_div_func_uint32_t_u_u((g_19.f6.f9 && ((g_408[0][8][2] = p_17.f6.f6) < (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u((p_14.f1 = p_14.f6.f3), (l_1969 , p_14.f4.f4))) & l_1970), 6)), l_1883.f5)))), 0xE869A269L)), g_1497, g_1199, l_1971)) == l_1969.f6.f2) <= g_19.f4.f0), g_19.f0)) , l_1883.f4)), p_17.f6.f3)) == p_14.f4.f5);
    l_1971 = (g_570[8] , ((((((safe_mod_func_int16_t_s_s(func_52((l_1803[0][3][0] = (g_124[0] >= (safe_rshift_func_int8_t_s_s(p_14.f6.f5, l_1969.f6.f7)))), l_1926, (0x71L < ((((g_408[0][6][0] = l_1969.f6.f9) <= (((0x74B8L || (safe_sub_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((g_90 = g_19.f6.f6) , g_359), 0x0C78B15D570CEFB3LL)), 1L))) < 0xDF7FBDDCL) > g_19.f6.f3)) == p_14.f6.f6) > g_460)), p_17.f6.f9), 0x5437L)) , 249UL) > 253UL) , 0x3F9FBD9A52A010FELL) && g_12[4]) > p_17.f7));
    return g_1497;
}







static char func_28(short p_29, unsigned long long p_30)
{
    int l_1395 = 6L;
    short l_1401 = 0xD745L;
    int l_1402[8][9][3] = {{{0x8D92675EL,0xF6B16A0CL,1L},{1L,0xA291687DL,(-5L)},{2L,1L,0x7FC73CC8L},{1L,1L,0xF3261013L},{0x8D92675EL,0xBC193ECBL,0xBC193ECBL},{1L,(-5L),0xBC193ECBL},{0xC0DB619CL,2L,0xF3261013L},{0xF4345904L,0xC0DB619CL,0x7FC73CC8L},{0x164B001BL,(-1L),(-5L)}},{{0L,0xC0DB619CL,1L},{0xA291687DL,2L,0x8D92675EL},{(-5L),(-5L),0xC0DB619CL},{(-5L),0xBC193ECBL,0L},{0xA291687DL,1L,(-1L)},{0L,1L,0xA291687DL},{0x164B001BL,0xA291687DL,(-1L)},{0xF4345904L,0xBC193ECBL,1L},{0xF4345904L,1L,0xF4345904L}},{{0x7FC73CC8L,1L,1L},{1L,0xBC193ECBL,0xF6B16A0CL},{1L,0xC0DB619CL,0xF3261013L},{1L,0xF6B16A0CL,(-1L)},{1L,0L,0x8D92675EL},{1L,1L,1L},{0x7FC73CC8L,0xF3261013L,1L},{0xF4345904L,1L,0x8D92675EL},{(-1L),0xF4345904L,(-1L)}},{{0xA291687DL,(-5L),0xF3261013L},{1L,0xF4345904L,0xF6B16A0CL},{0xC0DB619CL,1L,1L},{0xF3261013L,0xF3261013L,0xF4345904L},{0xF3261013L,1L,1L},{0xC0DB619CL,0L,0x164B001BL},{1L,0xF6B16A0CL,0xC0DB619CL},{0xA291687DL,0xC0DB619CL,0x164B001BL},{(-1L),0xBC193ECBL,1L}},{{0xF4345904L,1L,0xF4345904L},{0x7FC73CC8L,1L,1L},{1L,0xBC193ECBL,0xF6B16A0CL},{1L,0xC0DB619CL,0xF3261013L},{1L,0xF6B16A0CL,(-1L)},{1L,0L,0x8D92675EL},{1L,1L,1L},{0x7FC73CC8L,0xF3261013L,1L},{0xF4345904L,1L,0x8D92675EL}},{{(-1L),0xF4345904L,(-1L)},{0xA291687DL,(-5L),0xF3261013L},{1L,0xF4345904L,0xF6B16A0CL},{2L,0xBC193ECBL,0xC0DB619CL},{0x164B001BL,0x164B001BL,1L},{0x164B001BL,(-5L),0x8D92675EL},{2L,0xF3261013L,1L},{0x8D92675EL,0xF4345904L,2L},{1L,2L,1L}},{{0x7FC73CC8L,(-1L),0x8D92675EL},{1L,1L,1L},{1L,1L,0xC0DB619CL},{0xC0DB619CL,(-1L),0xF4345904L},{1L,2L,0x164B001BL},{0xBC193ECBL,0xF4345904L,0L},{1L,0xF3261013L,0xA291687DL},{0xC0DB619CL,(-5L),(-5L)},{1L,0x164B001BL,(-5L)}},{{1L,0xBC193ECBL,0xA291687DL},{0x7FC73CC8L,1L,0L},{1L,(-1L),0x164B001BL},{0x8D92675EL,1L,0xF4345904L},{2L,0xBC193ECBL,0xC0DB619CL},{0x164B001BL,0x164B001BL,1L},{0x164B001BL,(-5L),0x8D92675EL},{2L,0xF3261013L,1L},{0x8D92675EL,0xF4345904L,2L}}};
    unsigned l_1431[9][9][3] = {{{2UL,4294967292UL,3UL},{0xB1AA289EL,0x9714C47CL,3UL},{4294967287UL,0x73877F36L,0xD9CD6988L},{0xFF04AA23L,0x2464662CL,0UL},{0UL,0x5FC3D5ABL,0x5F91F53FL},{0x35D13B32L,0x5F91F53FL,0x5FC3D5ABL},{0UL,0UL,0x2464662CL},{0xFF04AA23L,0xD9CD6988L,0xD9CD6988L},{0x8A81BC81L,0UL,0x153211A6L}},{{4294967295UL,0UL,0x5ADE37D8L},{0x4050859AL,0x545348D8L,1UL},{0x62CFF07CL,0x5F91F53FL,0xC7DDF1C6L},{4294967287UL,0x1D1D7280L,3UL},{0UL,4294967292UL,0xC7DDF1C6L},{4UL,0x0D43141EL,1UL},{0x3C0275A9L,0xD9CD6988L,0x5ADE37D8L},{0x910E12F4L,0x153211A6L,0x153211A6L},{0x910E12F4L,0x5ADE37D8L,0xD9CD6988L}},{{0x3C0275A9L,1UL,0x0D43141EL},{4UL,0xC7DDF1C6L,4294967292UL},{0UL,3UL,0x1D1D7280L},{4294967287UL,0xC7DDF1C6L,0x5F91F53FL},{0x62CFF07CL,1UL,0x545348D8L},{0x4050859AL,0x5ADE37D8L,0UL},{4294967295UL,0x153211A6L,0UL},{0x8A81BC81L,0xD9CD6988L,0x545348D8L},{0x2456D54BL,0x0D43141EL,0x5F91F53FL}},{{4294967295UL,4294967292UL,0x1D1D7280L},{4294967295UL,0x1D1D7280L,4294967292UL},{4294967295UL,0x5F91F53FL,0x0D43141EL},{0x2456D54BL,0x545348D8L,0xD9CD6988L},{0x8A81BC81L,0UL,0x153211A6L},{4294967295UL,0UL,0x5ADE37D8L},{0x4050859AL,0x545348D8L,1UL},{0x62CFF07CL,0x5F91F53FL,0xC7DDF1C6L},{4294967287UL,0x1D1D7280L,3UL}},{{0UL,4294967292UL,0xC7DDF1C6L},{4UL,0x0D43141EL,1UL},{0x3C0275A9L,0xD9CD6988L,0x5ADE37D8L},{0x910E12F4L,0x153211A6L,0x8C92D1D3L},{1UL,0x22891A10L,3UL},{0UL,1UL,4294967292UL},{0x9714C47CL,4294967292UL,0xDAC08338L},{0x153211A6L,0x27C88360L,1UL},{0xC7DDF1C6L,4294967292UL,4294967289UL}},{{0x65A64F4EL,1UL,1UL},{3UL,0x22891A10L,0xD985C02EL},{0x73C47C22L,0x8C92D1D3L,0xD985C02EL},{0x2464662CL,3UL,1UL},{0xD9CD6988L,4294967292UL,4294967289UL},{4294967291UL,0xDAC08338L,1UL},{4294967289UL,1UL,0xDAC08338L},{4294967291UL,4294967289UL,4294967292UL},{0xD9CD6988L,1UL,3UL}},{{0x2464662CL,0xD985C02EL,0x8C92D1D3L},{0x73C47C22L,0xD985C02EL,0x22891A10L},{3UL,1UL,1UL},{0x65A64F4EL,4294967289UL,4294967292UL},{0xC7DDF1C6L,1UL,0x27C88360L},{0x153211A6L,0xDAC08338L,4294967292UL},{0x9714C47CL,4294967292UL,1UL},{0UL,3UL,0x22891A10L},{1UL,0x8C92D1D3L,0x8C92D1D3L}},{{1UL,0x22891A10L,3UL},{0UL,1UL,4294967292UL},{0x9714C47CL,4294967292UL,0xDAC08338L},{0x153211A6L,0x27C88360L,1UL},{0xC7DDF1C6L,4294967292UL,4294967289UL},{0x65A64F4EL,1UL,1UL},{3UL,0x22891A10L,0xD985C02EL},{0x73C47C22L,0x8C92D1D3L,0xD985C02EL},{0x2464662CL,1UL,1UL}},{{0x545348D8L,0x97874D16L,1UL},{8UL,0x22891A10L,4294967292UL},{1UL,4294967292UL,0x22891A10L},{8UL,1UL,0x97874D16L},{0x545348D8L,1UL,1UL},{0x0D43141EL,4294967289UL,0x942EF681L},{0x5FC3D5ABL,4294967289UL,0UL},{0UL,1UL,0UL},{4294967289UL,1UL,1UL}}};
    unsigned l_1432[7][7][5] = {{{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL}},{{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L}},{{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL}},{{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L}},{{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL}},{{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L}},{{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL},{0xC03422A0L,0x0DCCA3FEL,0xC03422A0L,0x0DCCA3FEL,0xC03422A0L},{1UL,1UL,1UL,1UL,1UL}}};
    unsigned l_1444 = 4294967288UL;
    int l_1445 = 0x2311C948L;
    int l_1472 = (-1L);
    struct S0 l_1573 = {255UL,0UL,0xECL,1L,0x6631L,0xACE9L,0x85L,1L,0x5598L,0x6D4F362BL};
    int l_1676 = (-1L);
    int i, j, k;
    l_1402[4][1][1] = (((safe_mul_func_uint16_t_u_u((func_35(func_61(p_30, l_1395)) <= (p_29 > (g_1396 = (g_19.f4.f2 && (-1L))))), l_1395)) , ((safe_mod_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s(g_19.f6.f0, 251UL)) & p_29) == 0xCDF957EF2ABD5630LL), p_30)) != l_1401)) >= g_19.f4.f8);
    l_1402[7][4][2] = g_460;
    for (g_147 = 0; (g_147 <= 59); ++g_147)
    {
        unsigned l_1411[5];
        struct S1 l_1430 = {1L,0x5424936562C7A7C3LL,252UL,1UL,{255UL,18446744073709551609UL,253UL,0x8FL,1L,0x7454L,0x51L,-1L,65535UL,8UL},-4L,{0x63L,18446744073709551613UL,0xE7L,0x68L,0xEE9FL,8UL,0xCBL,-5L,0x2B14L,0x602E971CL},0x5606E767L};
        int l_1433 = 0x0BC95D4FL;
        int l_1474 = 0x1C03905BL;
        int l_1475 = 8L;
        unsigned l_1509 = 2UL;
        short l_1534[9] = {6L,0x10C5L,6L,0x10C5L,6L,0x10C5L,6L,0x10C5L,6L};
        unsigned short l_1557 = 65526UL;
        unsigned l_1674 = 1UL;
        char l_1707 = (-9L);
        unsigned short l_1720 = 0xFB32L;
        int i;
        for (i = 0; i < 5; i++)
            l_1411[i] = 0x55A047E9L;
        for (g_964 = 9; (g_964 >= 45); g_964 = safe_add_func_int32_t_s_s(g_964, 3))
        {
            return g_19.f6.f0;
        }
        l_1411[2] = (safe_add_func_uint8_t_u_u(l_1402[0][3][2], (safe_div_func_int16_t_s_s(0x9B35L, g_1060))));
        l_1433 = (safe_div_func_int16_t_s_s((!((safe_add_func_uint64_t_u_u(0xFAE629AB3EE77DA3LL, (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((l_1402[4][4][0] = 0xB86D4938L) , (((((g_461 = (((safe_mod_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((-2L), (safe_lshift_func_int8_t_s_s(((((l_1411[2] || ((safe_sub_func_int64_t_s_s(0x3AA27D86B694DBE4LL, (l_1430 , ((g_837 != l_1430.f7) > (((g_505[0] , (-6L)) >= 0x7261913EL) && l_1431[8][6][0]))))) ^ 65533UL)) < l_1430.f4.f8) >= 0xBB73246C31BA1987LL) , l_1432[6][6][3]), 0)))) | p_29), p_29)) , p_30) < g_296), l_1432[6][6][3])) , g_19.f4.f7) <= g_19.f5)) && l_1430.f4.f8) & 0x1F61L) != 0xD849D5D3A7EB0BD2LL) >= 7UL)), g_1103[3])), p_30)))) & l_1430.f6.f8)), p_30));
        if ((((l_1445 = ((safe_div_func_int32_t_s_s(l_1430.f4.f3, g_19.f4.f5)) || ((p_29 = (((safe_mod_func_int32_t_s_s((l_1402[4][0][2] = (l_1432[6][6][3] , l_1430.f6.f9)), 0x86ACA979L)) | ((safe_lshift_func_uint8_t_u_u(g_359, 4)) || ((safe_sub_func_int8_t_s_s((((((l_1433 = p_29) != (safe_rshift_func_int8_t_s_u(0x3FL, 5))) <= l_1430.f6.f1) != p_29) , g_408[2][5][0]), l_1444)) & 65535UL))) ^ 0xC63CD205L)) == g_19.f4.f3))) >= g_19.f4.f6) , p_29))
        {
            unsigned char l_1450 = 0x2EL;
            int l_1451 = (-2L);
            for (g_356 = (-25); (g_356 == (-11)); g_356 = safe_add_func_int32_t_s_s(g_356, 1))
            {
                for (g_906 = 0; (g_906 < 28); g_906++)
                {
                    l_1445 = ((l_1450 = p_29) && g_19.f6.f3);
                    l_1451 = l_1432[6][6][3];
                }
            }
            l_1402[6][5][2] = (l_1475 = (safe_mod_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u((((((l_1433 = (g_124[0] = (safe_lshift_func_uint8_t_u_u(g_19.f6.f4, 1)))) , ((((safe_mul_func_int16_t_s_s(l_1451, g_359)) < (safe_mul_func_int8_t_s_s(g_906, (safe_mul_func_uint16_t_u_u((g_1060 = ((safe_mul_func_uint8_t_u_u((g_19.f4.f4 , (((g_1473 = func_61((l_1472 = (l_1402[1][7][1] = (p_29 ^ (0xA498L <= ((l_1445 = ((-8L) > ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(p_29, l_1402[4][1][1])), 4)) , l_1451))) , 0x3559L))))), l_1450)) ^ l_1430.f6.f0) != l_1450)), p_29)) || 4UL)), p_30))))) , g_358[3][1]) , g_356)) || l_1451) > g_19.f6.f2) | 0x5BE67B76L), l_1474)) | (-3L)), g_19.f6.f5)));
            l_1475 = (safe_mod_func_uint64_t_u_u(((func_61(l_1450, ((safe_lshift_func_int8_t_s_u((0xF2521542A7205047LL > (p_30 = func_67(g_208, g_19.f6.f3))), g_19.f4.f8)) && (g_815[0] = (p_30 = 7UL)))) <= ((((g_19 , 1L) , g_19.f6.f5) || g_19.f4.f5) != 0xF6CEL)) == p_29), 1L));
        }
        else
        {
            unsigned short l_1496 = 0xDBDBL;
            int l_1510 = 0x2DFDC411L;
            struct S0 l_1604[10] = {{254UL,0xD74BC0C2BCF7B103LL,1UL,4L,0x215CL,0xC8F6L,0xCCL,0x8AA5L,0UL,0x6BBB7099L},{0x3AL,0xC02294E9A63280BCLL,0xF2L,-1L,1L,65533UL,0xBAL,0x9E94L,0xFB24L,0x9C28211BL},{254UL,0xD74BC0C2BCF7B103LL,1UL,4L,0x215CL,0xC8F6L,0xCCL,0x8AA5L,0UL,0x6BBB7099L},{0x02L,0x7BBB3A1DDC30190ELL,0UL,0x4AL,-5L,0xDC8FL,1L,0L,1UL,0UL},{0x02L,0x7BBB3A1DDC30190ELL,0UL,0x4AL,-5L,0xDC8FL,1L,0L,1UL,0UL},{0xAEL,0x65FF71A005983778LL,249UL,4L,-10L,0x90CFL,2L,0xEAA9L,0x1C01L,1UL},{0x08L,18446744073709551615UL,250UL,0x7FL,0x9526L,1UL,1L,0xA54BL,0x187BL,3UL},{0xAEL,0x65FF71A005983778LL,249UL,4L,-10L,0x90CFL,2L,0xEAA9L,0x1C01L,1UL},{0x02L,0x7BBB3A1DDC30190ELL,0UL,0x4AL,-5L,0xDC8FL,1L,0L,1UL,0UL},{0x02L,0x7BBB3A1DDC30190ELL,0UL,0x4AL,-5L,0xDC8FL,1L,0L,1UL,0UL}};
            unsigned short l_1722 = 0xA931L;
            int l_1739 = 1L;
            int i;
            for (g_104 = 23; (g_104 <= (-3)); g_104--)
            {
                unsigned long long l_1489[6][2][4];
                int l_1498 = 0xC5B018DEL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 4; k++)
                            l_1489[i][j][k] = 0x5FD92C4B64B36ADFLL;
                    }
                }
                for (g_161 = 4; (g_161 < 11); ++g_161)
                {
                    unsigned long long l_1486 = 0xF36C6C2F1A010F3DLL;
                    int l_1495 = 0xF6A93029L;
                    l_1486 = p_29;
                    if (p_30)
                        break;
                    g_1497 = (safe_lshift_func_uint8_t_u_u(l_1489[0][1][2], (((safe_unary_minus_func_int8_t_s((func_67(p_29, (l_1496 = ((g_359 <= (safe_lshift_func_uint16_t_u_s(l_1430.f6.f3, 6))) <= (l_1495 = func_67(g_1060, (l_1486 , ((((((g_19.f2 > 9UL) & 1UL) >= 0x9695C09811FC69FCLL) && 0x19F24B9BL) && 0UL) && p_29))))))) , 0x4CL))) | 0x9DDBL) & g_19.f6.f4)));
                }
                l_1510 = func_67((g_215 = p_30), ((l_1498 >= (safe_add_func_uint64_t_u_u(func_67(((((g_906 = (safe_rshift_func_uint8_t_u_s(8UL, 1))) || (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((g_124[0] > (safe_mul_func_int16_t_s_s(g_505[1], ((g_19.f4 , ((255UL | p_29) > (g_532 = (l_1475 = func_67(l_1430.f1, g_356))))) | g_19.f6.f7)))), p_30)) | g_19.f4.f9), g_296))) > p_30) != 0x5F7D6694F56638CFLL), l_1509), 1UL))) != 0x26949E08L));
            }
            if ((func_61(l_1430.f6.f6, l_1430.f6.f3) & p_29))
            {
                unsigned short l_1511 = 0x9933L;
                int l_1556 = 0x4DDB0D07L;
                l_1534[1] = func_61(g_461, func_61((l_1510 = (l_1511 , (safe_mul_func_int16_t_s_s(p_29, (safe_rshift_func_int16_t_s_u(((p_30 = (func_61((((safe_div_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s(l_1430.f4.f8, (safe_div_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(p_29, func_67(p_29, p_29))), (safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((-1L), 12)) , p_29), 9L)))) < l_1430.f6.f9) != 65529UL), g_19.f3)))), 0UL)) & 2UL), 0)) | l_1430.f6.f3) | l_1402[4][1][1]), g_19.f6.f3)) >= l_1402[4][1][1]) <= g_532), g_715) != 5L)) != l_1430.f6.f0), 0)))))), g_570[7]));
                for (g_296 = 0; (g_296 >= 7); g_296++)
                {
                    char l_1558[4] = {0x09L,0x09L,0x09L,0x09L};
                    int l_1564 = 8L;
                    int i;
                    l_1558[3] = ((safe_unary_minus_func_uint16_t_u((((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(1UL, (((g_906 = l_1511) > (safe_div_func_int64_t_s_s(p_30, (safe_lshift_func_int16_t_s_u(func_67(l_1430.f4.f8, (safe_mod_func_uint32_t_u_u(l_1496, (l_1556 = func_61((l_1444 != p_29), (safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((g_715 = (safe_rshift_func_uint16_t_u_u((g_19.f4.f9 , (((func_67(l_1511, g_215) , 0xDBE2L) & g_208) < g_570[6])), l_1510))), 11)), 18446744073709551615UL))))))), l_1557))))) != g_161))), p_29)), l_1402[4][3][0])) && g_104) & l_1430.f4.f6))) & p_30);
                    if ((safe_rshift_func_int16_t_s_u(p_29, 3)))
                    {
                        unsigned long long l_1561[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1561[i] = 3UL;
                        g_90 = l_1430.f1;
                        return l_1561[0];
                    }
                    else
                    {
                        l_1402[6][3][0] = (p_29 , func_61(l_1558[1], l_1510));
                        l_1556 = (l_1402[1][0][0] = p_30);
                        l_1564 = (safe_mul_func_int8_t_s_s(g_19.f6.f3, p_29));
                        l_1475 = (p_30 || l_1496);
                    }
                    l_1556 = 0x48AF2D5EL;
                }
                for (g_1060 = 0; (g_1060 <= 4); g_1060 += 1)
                {
                    struct S0 l_1628[3][9] = {{{1UL,0UL,0UL,4L,3L,8UL,0x3CL,0xE265L,0x9128L,4294967286UL},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{0x3DL,0x38DBFA200BBD310CLL,0UL,8L,6L,65527UL,-4L,5L,0x5410L,0x8943B770L},{0x3DL,0x38DBFA200BBD310CLL,0UL,8L,6L,65527UL,-4L,5L,0x5410L,0x8943B770L},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{1UL,0UL,0UL,4L,3L,8UL,0x3CL,0xE265L,0x9128L,4294967286UL},{2UL,1UL,7UL,0L,0L,0UL,0x4AL,0x5CD3L,65535UL,0xEF3FCDCCL},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{2UL,1UL,7UL,0L,0L,0UL,0x4AL,0x5CD3L,65535UL,0xEF3FCDCCL}},{{1UL,0UL,0UL,4L,3L,8UL,0x3CL,0xE265L,0x9128L,4294967286UL},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{0x3DL,0x38DBFA200BBD310CLL,0UL,8L,6L,65527UL,-4L,5L,0x5410L,0x8943B770L},{0x3DL,0x38DBFA200BBD310CLL,0UL,8L,6L,65527UL,-4L,5L,0x5410L,0x8943B770L},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{1UL,0UL,0UL,4L,3L,8UL,0x3CL,0xE265L,0x9128L,4294967286UL},{2UL,1UL,7UL,0L,0L,0UL,0x4AL,0x5CD3L,65535UL,0xEF3FCDCCL},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{2UL,1UL,7UL,0L,0L,0UL,0x4AL,0x5CD3L,65535UL,0xEF3FCDCCL}},{{1UL,0UL,0UL,4L,3L,8UL,0x3CL,0xE265L,0x9128L,4294967286UL},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{0x3DL,0x38DBFA200BBD310CLL,0UL,8L,6L,65527UL,-4L,5L,0x5410L,0x8943B770L},{0x3DL,0x38DBFA200BBD310CLL,0UL,8L,6L,65527UL,-4L,5L,0x5410L,0x8943B770L},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{1UL,0UL,0UL,4L,3L,8UL,0x3CL,0xE265L,0x9128L,4294967286UL},{2UL,1UL,7UL,0L,0L,0UL,0x4AL,0x5CD3L,65535UL,0xEF3FCDCCL},{9UL,0UL,251UL,0L,0x3A82L,0xC3D6L,0x24L,0x0247L,0x56DFL,1UL},{2UL,1UL,7UL,0L,0L,0UL,0x4AL,0x5CD3L,65535UL,0xEF3FCDCCL}}};
                    struct S0 l_1630 = {255UL,0x78AA621789A54EAALL,252UL,-5L,0xC5C3L,0x0D71L,0x4FL,-10L,65535UL,0xA1C115F8L};
                    int l_1640 = (-9L);
                    int i, j;
                    l_1510 = (safe_div_func_int16_t_s_s(((~l_1411[g_1060]) , (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_147, (g_19.f4 , p_29))), g_1396))), l_1510));
                    for (g_1497 = 1; (g_1497 <= 9); g_1497 += 1)
                    {
                        int l_1586 = (-1L);
                        int i, j, k;
                        l_1433 = (l_1472 = ((p_29 = ((g_837 = (safe_sub_func_uint8_t_u_u((l_1510 = l_1411[g_1060]), (func_61((l_1432[g_1060][(g_1060 + 2)][g_1060] = (8L & ((l_1411[g_1060] <= (l_1573 , (g_570[(g_1060 + 1)] != ((safe_div_func_int8_t_s_s((+(safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((p_29 > (+(safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((p_30 != (safe_add_func_int32_t_s_s(((func_67(l_1430.f4.f5, g_19.f6.f4) ^ l_1586) < 0x6D0F5804L), p_30))), 0xA649L)), p_30)))), (-1L))), 3))), g_1587)) <= g_19.f4.f3)))) | 0xFCL))), l_1496) , l_1430.f7)))) , 1L)) ^ 0L));
                        g_104 = (((((safe_rshift_func_int8_t_s_u((0xEECA7514L <= (safe_mod_func_int64_t_s_s(((l_1556 = (l_1510 = p_29)) < p_29), ((g_124[0] = 1UL) && func_67(p_30, l_1511))))), (l_1496 && l_1496))) , 4L) & (-1L)) >= 0x3EL) < g_19.f4.f8);
                    }
                    for (g_208 = 0; (g_208 <= 3); g_208 += 1)
                    {
                        int l_1615 = (-1L);
                        int i;
                        g_90 = 0x703E2312L;
                        l_1510 = (g_505[g_208] > (safe_mul_func_int16_t_s_s(func_61((g_215 = (+g_505[g_208])), (g_408[0][6][0] = func_61(((!(((func_61(g_124[0], ((p_30 , (((safe_sub_func_uint64_t_u_u(l_1510, l_1557)) != (((safe_add_func_uint8_t_u_u((((p_30 && (l_1402[4][1][1] = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((g_408[0][6][0] = (p_29 = 0L)), (safe_add_func_uint8_t_u_u((p_30 & g_19.f3), 4L)))), 0)) , 0xA7L))) , l_1604[1]) , g_19.f4.f2), 0UL)) , 6UL) & g_460)) ^ g_19.f6.f3)) , l_1511)) >= l_1573.f8) , 0x27L) != g_505[g_208])) & 0x40L), g_19.f4.f1))), 1UL)));
                        l_1615 = (p_29 , (safe_mod_func_int32_t_s_s(p_29, ((((p_30 ^ p_30) == func_67((func_67(((safe_sub_func_int8_t_s_s((g_906 = l_1556), (safe_add_func_uint8_t_u_u(254UL, (1UL & (safe_add_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((-1L), func_67((((g_19.f3 && 0xFAL) < 4294967295UL) != g_460), l_1604[1].f9))) | l_1411[g_1060]) , p_29), 0x4BB6L))))))) , 0x48C7CF3DL), g_461) != g_19.f7), p_30)) <= l_1511) , g_570[6]))));
                        l_1472 = 0x75EB727FL;
                    }
                    if ((safe_mul_func_uint8_t_u_u(((p_29 < (((safe_lshift_func_uint8_t_u_u((l_1433 = g_19.f6.f9), ((safe_div_func_int8_t_s_s(func_61(g_815[0], (65535UL > (0xCF616BAFL < ((func_61(l_1430.f4.f3, p_29) , (l_1510 = 0x30L)) | g_1103[0])))), 0x87L)) == l_1411[g_1060]))) | l_1411[g_1060]) & g_166[1][1][0])) ^ l_1411[g_1060]), 251UL)))
                    {
                        long long l_1629 = 0xD0FBB68FD120CEC8LL;
                        struct S1 l_1639 = {0L,0x4E8DEB1832133A27LL,1UL,18446744073709551611UL,{254UL,3UL,0xF1L,0xD3L,-1L,0UL,-8L,-3L,0x5E57L,0x239EB54FL},-1L,{0x2EL,0xA2609EB801467598LL,247UL,6L,-1L,0x1D86L,0x3AL,0L,65529UL,0x0548F49EL},2L};
                        l_1556 = ((safe_rshift_func_uint16_t_u_u((0xE68C82CEDD6ACD3BLL && (safe_mod_func_int64_t_s_s((((-1L) || func_67(l_1510, (((safe_add_func_uint64_t_u_u(((p_29 , (func_61((l_1628[2][1] , l_1629), g_408[3][8][0]) < g_1497)) ^ p_30), g_1198)) , l_1511) | (-1L)))) | g_19.f6.f4), l_1511))), 11)) >= (-1L));
                        l_1402[1][7][1] = (l_1628[2][1].f5 || (((func_67((l_1630 , (((g_715 = (l_1402[4][1][1] = p_29)) ^ (safe_lshift_func_int8_t_s_u(p_29, 2))) & (func_61((((safe_sub_func_int64_t_s_s(func_67((safe_add_func_int32_t_s_s(func_61(((safe_sub_func_uint32_t_u_u(func_67(g_19.f6.f9, g_19.f6.f8), (l_1640 = ((l_1604[1].f9 , l_1639) , l_1475)))) , p_29), p_29), l_1556)), p_29), p_29)) != g_19.f4.f7) <= 0x756DBCB3L), p_30) <= p_29))), g_837) != g_356) != g_215) <= g_815[0]));
                    }
                    else
                    {
                        g_104 = (-4L);
                        g_104 = 8L;
                    }
                }
            }
            else
            {
                struct S1 l_1653 = {0L,18446744073709551615UL,1UL,8UL,{255UL,18446744073709551615UL,0xC2L,-10L,3L,65530UL,0xD3L,-2L,0x615AL,1UL},0xE4L,{0x8FL,0x20DCBB2457A67C37LL,0x81L,0x5CL,0x03DEL,0x171CL,0L,0x75D1L,0xCD48L,6UL},7L};
                int l_1677 = 1L;
                for (l_1509 = (-17); (l_1509 >= 45); l_1509 = safe_add_func_uint8_t_u_u(l_1509, 1))
                {
                    const char l_1649 = 0L;
                    int l_1650 = 0L;
                    if (g_124[0])
                    {
                        l_1433 = ((safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s(g_19.f4.f0, p_30)), (safe_div_func_uint32_t_u_u(0x85540D58L, func_61((l_1650 = ((g_232 , l_1649) && p_29)), (safe_sub_func_int32_t_s_s((g_19.f2 == (l_1402[3][7][1] = (p_29 < p_29))), l_1432[2][5][3]))))))) <= (-1L));
                        return g_19.f4.f2;
                    }
                    else
                    {
                        g_104 = 0x0B376C38L;
                        l_1510 = (l_1653 , p_29);
                    }
                    g_104 = (safe_sub_func_int64_t_s_s((g_461 = g_1473), g_166[1][1][0]));
                }
                for (l_1444 = 0; (l_1444 <= 4); l_1444 += 1)
                {
                    const int l_1675 = 0x94A66687L;
                    int i;
                    g_104 = l_1604[1].f1;
                    l_1677 = (((g_906 = (~(((safe_add_func_int16_t_s_s((0xC8DFCEE2D417DC66LL & ((+((safe_sub_func_int16_t_s_s(func_67((safe_mod_func_uint64_t_u_u(g_19.f6.f0, ((g_124[0] != ((((safe_mul_func_uint8_t_u_u((((((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(g_1103[2], ((safe_mul_func_uint8_t_u_u(func_67((l_1411[l_1444] = g_408[0][8][1]), p_29), ((safe_lshift_func_uint16_t_u_u(9UL, (p_29 != p_30))) , l_1674))) & 251UL))) ^ 0xEA5750A6L), p_29)), g_19.f4.f8)) > g_815[0]) >= g_815[0]) > (-8L)) ^ g_505[1]), p_30)) == l_1675) , p_29) || 0xECB0L)) , l_1653.f4.f1))), l_1676), 4L)) <= 0x07E9A958L)) <= g_19.f4.f2)), l_1675)) , l_1675) != 18446744073709551615UL))) == l_1675) , g_356);
                    for (l_1653.f0 = 2; (l_1653.f0 >= 0); l_1653.f0 -= 1)
                    {
                        int l_1686[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        int i, j, k;
                        l_1686[8] = (((l_1402[(l_1653.f0 + 1)][l_1653.f0][l_1653.f0] = (l_1402[(l_1444 + 1)][l_1653.f0][l_1653.f0] == l_1402[(l_1653.f0 + 4)][l_1444][l_1653.f0])) != ((g_19.f4.f2 >= 8L) == (safe_add_func_int16_t_s_s((g_408[0][6][0] = (safe_div_func_uint32_t_u_u(p_30, (p_30 & l_1430.f4.f4)))), (l_1510 = g_570[4]))))) , func_61((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(p_29, g_964)), l_1402[(l_1653.f0 + 1)][l_1653.f0][l_1653.f0])), g_1103[1]));
                    }
                }
                for (g_461 = 0; (g_461 <= 1); g_461 += 1)
                {
                    char l_1721 = (-1L);
                    int l_1723 = 0x9D46CC74L;
                    int l_1740 = 0x773BBB6FL;
                    l_1445 = (safe_lshift_func_uint16_t_u_s(((func_61((((safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((((safe_mul_func_int8_t_s_s((g_19 , p_29), (l_1707 = (safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((0x92F6054AL > (safe_mod_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(g_19.f6.f5, (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_505[1], (func_67(p_30, (g_205 != 0xDC626BC737013C72LL)) <= p_30))), g_1198)))), 0x89964D3468C67539LL))), l_1430.f4.f1)), p_29))))) != l_1431[0][4][1]) && p_30) ^ l_1402[4][1][1]), g_161)), l_1653.f6.f3)) , l_1653.f4.f0) != 1UL), g_505[1]) | g_19.f4.f0) & p_29), g_1199));
                    l_1722 = (l_1402[4][1][1] = (1L == ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(p_29, (safe_mod_func_int8_t_s_s((p_29 == (((g_837 = (safe_mul_func_int16_t_s_s(((((g_964 = (g_460 = (func_61((g_215 = func_67(g_19.f6.f2, (safe_div_func_int64_t_s_s((!(g_358[0][0] > (l_1677 = (-1L)))), p_29)))), ((safe_mod_func_int32_t_s_s(((l_1510 = (g_1497 , 0x8B3BL)) , l_1720), p_30)) , 0xB97CL)) || l_1653.f4.f1))) || (-10L)) != p_30) == 0x7D41E98C20A5CDE6LL), g_19.f0))) == 1UL) >= g_166[1][0][1])), g_205)))), l_1721)) && l_1573.f5)));
                    l_1723 = l_1604[1].f1;
                    for (l_1430.f6.f9 = 0; (l_1430.f6.f9 <= 0); l_1430.f6.f9 += 1)
                    {
                        char l_1738 = 0L;
                        int i;
                        g_90 = g_124[l_1430.f6.f9];
                        l_1677 = (l_1475 = (((func_61((safe_sub_func_uint32_t_u_u((func_67(p_29, ((safe_mul_func_int16_t_s_s(g_570[8], g_124[0])) || ((safe_mod_func_uint16_t_u_u((g_215 , func_67((g_1497 = func_61((g_964 = (func_67(((g_215 < (!g_815[0])) ^ ((l_1739 = (l_1510 = ((safe_add_func_uint32_t_u_u(((l_1723 = p_29) && (safe_mod_func_uint32_t_u_u((l_1472 = (l_1444 ^ ((safe_div_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(l_1738, l_1721)) , p_30), 0xEAL)) | l_1653.f6.f4))), l_1431[7][2][2]))), 0x7FFF029BL)) < g_205))) >= p_30)), l_1721) , l_1721)), g_19.f6.f8)), p_30)), l_1740)) ^ p_29))) <= 0xFFC26B34C05499BCLL), l_1653.f6.f2)), l_1444) ^ 0x3768FBF5L) >= 4294967295UL) , 0x6F41E566L));
                    }
                }
            }
        }
    }
    return p_29;
}







static const long long func_35(const unsigned short p_36)
{
    char l_64[3][3] = {{0x8BL,0x8BL,0x8BL},{(-10L),0xFAL,(-10L)},{0x8BL,0x8BL,0x8BL}};
    int l_102[5];
    unsigned l_574 = 0UL;
    unsigned l_575 = 5UL;
    struct S0 l_576[1] = {{255UL,18446744073709551615UL,0x0DL,0xF6L,0x40F8L,0UL,3L,0xED27L,0xEA8FL,2UL}};
    long long l_1251 = 0x49DCAA75B61F85E4LL;
    unsigned long long l_1259 = 7UL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_102[i] = (-1L);
    g_1199 = (safe_sub_func_uint32_t_u_u((0x48786719L > (safe_unary_minus_func_uint64_t_u(18446744073709551615UL))), ((safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_12[2] != (func_48((l_575 = (func_52(p_36, func_57((((safe_lshift_func_int8_t_s_u(func_61((l_64[2][2] = (p_36 & p_36)), ((((0xC6L != (safe_mod_func_int8_t_s_s(g_19.f6.f5, ((func_67(g_19.f4.f0, g_19.f4.f8) ^ 0x38E44D0BL) || p_36)))) > l_102[2]) < 0L) ^ p_36)), g_19.f4.f9)) ^ g_19.f6.f1) , g_19.f4.f5)), l_102[3], g_19.f6.f1) | l_574)), g_19.f6.f2, l_576[0]) || p_36)), 1UL)), 7)) <= 0x1BA51E09L), g_19.f4.f3)) | p_36), 15)) && p_36)));
    g_104 = l_576[0].f7;
    g_104 = g_19.f0;
    for (g_791 = 0; (g_791 == 3); g_791 = safe_add_func_uint16_t_u_u(g_791, 1))
    {
        unsigned l_1202 = 2UL;
        int l_1212 = 0xD7660E8FL;
        struct S1 l_1262 = {-1L,0x98428619A5CDBE3CLL,5UL,18446744073709551612UL,{0xFCL,18446744073709551615UL,0x9BL,0x61L,-5L,0x68F5L,0x63L,0xFB00L,0x58B5L,0x37D101C1L},0x9DL,{0x9EL,0UL,0x9AL,-1L,1L,7UL,0xBEL,0xD6C6L,0x58D5L,0x79CBCAE7L},-5L};
        int l_1294 = 7L;
        unsigned long long l_1317 = 2UL;
        unsigned l_1378 = 0x3B9EFAADL;
        l_1202 = (0x70L != g_12[1]);
        l_102[1] = (safe_add_func_int64_t_s_s(g_505[1], 0x2B56CD5B3235C8EFLL));
        for (g_205 = (-21); (g_205 <= (-15)); g_205 = safe_add_func_uint64_t_u_u(g_205, 1))
        {
            const char l_1207 = (-9L);
            int l_1239 = 0xDB9116BBL;
            for (g_161 = 0; (g_161 <= 2); g_161 += 1)
            {
                l_102[2] = 0x8E656C19L;
                if (l_1207)
                    break;
            }
            if ((safe_mod_func_uint64_t_u_u(p_36, p_36)))
            {
                unsigned l_1217 = 4294967294UL;
                int l_1218 = 1L;
                unsigned l_1237 = 0x32B45EC9L;
                int l_1279 = 0x2041AD2AL;
                if ((safe_sub_func_uint16_t_u_u(0x7C29L, ((g_166[1][1][0] < ((l_1212 = g_1103[0]) || p_36)) >= (safe_add_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(p_36, (l_102[2] = (g_837 = ((l_1217 = ((l_576[0].f6 || 1L) == p_36)) ^ (((p_36 >= l_1207) , l_1218) > 0L)))))) , 0xE8L), g_1060))))))
                {
                    unsigned long long l_1221 = 0xFB27E6E0043F0629LL;
                    int l_1238 = 0x4943A94EL;
                    unsigned l_1240 = 0x045438EFL;
                    int l_1265 = 0x4D95DD77L;
                    for (g_906 = 0; (g_906 >= 28); g_906 = safe_add_func_uint16_t_u_u(g_906, 5))
                    {
                        l_1218 = (l_1221 ^ p_36);
                    }
                    for (g_837 = 0; (g_837 != 45); ++g_837)
                    {
                        l_1212 = (g_19.f6.f6 & ((p_36 , p_36) && (l_1239 = (safe_unary_minus_func_uint8_t_u((g_124[0] = ((g_358[0][1] || (safe_mul_func_uint16_t_u_u(g_161, (safe_mul_func_uint16_t_u_u(((l_1238 = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(((((~(safe_sub_func_uint64_t_u_u((g_208 = func_57(func_57(l_1207))), 0x8F0131C1580A2C22LL))) | 0xF9B239C5L) != l_1237) && l_1221), (-1L))), p_36)), 0x83L))) < 4L), g_19.f6.f4))))) ^ g_19.f1)))))));
                        l_1239 = 0x64F99FEDL;
                        l_1240 = l_1239;
                        l_1251 = ((safe_lshift_func_int8_t_s_s(((l_102[0] = 0x722BC33CL) & (safe_mod_func_uint64_t_u_u(l_1207, 1UL))), g_124[0])) >= (safe_sub_func_uint8_t_u_u(((p_36 , 7UL) , (safe_rshift_func_uint16_t_u_s((l_1239 = (g_12[2] <= 2L)), (safe_sub_func_int64_t_s_s((g_461 = (p_36 & l_1237)), p_36))))), 0x66L)));
                    }
                    for (l_1218 = 1; (l_1218 <= 4); l_1218 += 1)
                    {
                        int l_1266[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        int i;
                        l_1238 = (l_102[l_1218] = ((safe_unary_minus_func_int8_t_s((g_906 = 0x85L))) <= (l_1259 = func_61(l_102[l_1218], (l_1212 = ((safe_rshift_func_int8_t_s_u(func_67((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x70L, func_67(func_67(((l_1239 = (p_36 , l_576[0].f8)) , (0x97AEA34FB92C4C0CLL | 1UL)), func_57(p_36)), l_1240))), 7)), g_166[1][1][0]), 6)) , 1L))))));
                        l_1266[2] = ((((p_36 || ((l_1202 | ((l_102[2] = ((l_1207 , (l_1262 , (((safe_sub_func_uint64_t_u_u(g_19.f6.f5, (g_461 = g_19.f6.f9))) && (p_36 & ((0x72B3A94A2BC11BC0LL == (p_36 || 0x46A94227DFF85D64LL)) <= 0xD8L))) > l_1265))) || g_161)) || g_19.f4.f2)) >= p_36)) != 255UL) ^ g_655) > p_36);
                        l_1279 = (safe_div_func_int8_t_s_s(func_67((safe_sub_func_uint8_t_u_u((0L | ((safe_sub_func_uint8_t_u_u(((~(g_715 = ((g_570[8] && ((safe_div_func_uint64_t_u_u(18446744073709551610UL, ((safe_mul_func_uint16_t_u_u((g_358[3][0] > (safe_sub_func_uint16_t_u_u(1UL, func_61(l_64[2][2], (l_1207 , (g_1199 = g_356)))))), g_19.f6.f2)) , 0xB371B51DF0CFB4BELL))) && l_1262.f6.f9)) > g_815[0]))) ^ 0xAE3FL), 0xEBL)) <= p_36)), g_166[1][1][1])), l_576[0].f5), g_570[8]));
                    }
                }
                else
                {
                    unsigned char l_1282[2][1][7] = {{{250UL,0xB4L,0xB4L,250UL,0xB4L,0xB4L,250UL}},{{252UL,0xADL,252UL,252UL,0xADL,252UL,252UL}}};
                    unsigned char l_1283 = 0x4CL;
                    int i, j, k;
                    l_1212 = (safe_lshift_func_uint16_t_u_s(l_1282[0][0][2], ((l_102[2] = l_1282[0][0][2]) , ((-10L) ^ l_1283))));
                }
                g_90 = 0L;
                l_1218 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_36, ((safe_lshift_func_uint16_t_u_s(l_576[0].f5, func_57(g_1060))) < p_36))), (p_36 , (safe_mul_func_int8_t_s_s(g_1060, (safe_div_func_int32_t_s_s(p_36, (0xEF12L ^ l_1218))))))));
                g_1302 = func_57((l_1294 , (((safe_unary_minus_func_int8_t_s((func_57(p_36) != (safe_sub_func_int8_t_s_s(l_1207, (((l_102[3] = (safe_add_func_int16_t_s_s((l_1207 ^ ((((safe_sub_func_uint16_t_u_u((g_19.f4.f3 || g_19.f3), g_1060)) <= l_1237) & 0x39C3L) , p_36)), l_1237))) , 0x46L) ^ 0x46L)))))) && p_36) <= (-6L))));
            }
            else
            {
                unsigned l_1322 = 18446744073709551615UL;
                int l_1344 = 0x36A7E477L;
                long long l_1369 = (-4L);
                int l_1387[5][8] = {{0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL},{0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL},{0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL},{0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL},{0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL,0xD000AD3CL}};
                int i, j;
                for (g_1199 = 18; (g_1199 <= (-15)); --g_1199)
                {
                    char l_1323[2];
                    int l_1343 = 0x6357D32DL;
                    unsigned short l_1345 = 0xA4E5L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1323[i] = 0x4AL;
                    l_1239 = ((safe_rshift_func_int16_t_s_u((p_36 == 4294967290UL), 6)) == ((safe_mod_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(l_1207, 1UL)), (safe_rshift_func_int16_t_s_s(((((g_296 | (func_61((!g_460), (l_1317 , (0x723E5599C5C3552BLL >= (((safe_mod_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((g_19.f4.f6 && p_36), g_19.f6.f2)) >= p_36), p_36)) >= l_1322) & 0x1EACE37CL)))) | 65535UL)) ^ g_215) , l_1322) | l_1207), 9)))), l_1323[0])) && 2UL), p_36)) || g_19.f7));
                    if ((((9UL ^ 0x482AD9AD1CE0F405LL) || (safe_rshift_func_int8_t_s_s(l_1259, g_19.f4.f3))) != (0x529A1F0BL <= ((safe_rshift_func_uint16_t_u_s((p_36 > p_36), (safe_add_func_int32_t_s_s(((g_19.f4.f9 >= p_36) > g_1060), p_36)))) < (-1L)))))
                    {
                        return l_1262.f5;
                    }
                    else
                    {
                        char l_1342 = (-8L);
                        int l_1346 = 0x45408538L;
                        long long l_1347 = 0x30D84F745E4AC11ELL;
                        l_1347 = (g_19.f4 , (safe_lshift_func_uint8_t_u_s((l_1239 = func_61((l_1262.f4.f7 , ((safe_rshift_func_int16_t_s_s(((-1L) ^ (func_67((l_102[3] = (l_1346 = func_57((g_205 & ((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(0x27128390L, ((l_1344 = func_67((g_19.f4.f7 , (func_67((l_1343 = (safe_sub_func_uint8_t_u_u(g_19.f6.f7, (safe_sub_func_int32_t_s_s((l_1323[0] >= ((l_102[0] = (l_576[0].f7 ^ l_1322)) != p_36)), l_1342))))), p_36) == 0x014DL)), p_36)) , p_36))), l_1345)) != p_36))))), g_19.f6.f4) || 1L)), 0)) | l_1322)), g_19.f4.f0)), 1)));
                        if (l_1262.f4.f2)
                            continue;
                        g_104 = g_19.f6.f9;
                    }
                    if (g_208)
                        continue;
                    if (g_19.f4.f9)
                    {
                        short l_1350 = 2L;
                        l_1344 = func_61((safe_div_func_int32_t_s_s(((g_791 || l_1344) | ((l_1350 && (g_19.f6.f5 > ((((0L | l_576[0].f8) | (g_461 >= (safe_add_func_int8_t_s_s((g_906 = p_36), l_1207)))) || g_1302) , 0x66D6028E892517A5LL))) | l_1345)), l_1345)), l_1202);
                        l_1344 = func_67(g_19.f0, ((~g_19.f6.f6) ^ (safe_div_func_int32_t_s_s(((safe_div_func_uint16_t_u_u((l_1239 = 0x19B5L), g_166[1][1][0])) <= g_570[8]), (l_1344 ^ g_505[1])))));
                    }
                    else
                    {
                        unsigned l_1370 = 0x681695A4L;
                        const struct S0 l_1375 = {0UL,0x081F190A261DFC78LL,0xFEL,-7L,0x66A0L,0xA732L,0xCEL,1L,0UL,0x5A233452L};
                        short l_1388 = 1L;
                        int l_1389 = 9L;
                        l_1370 = (((((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((l_1262.f4.f7 > (l_1343 = p_36)), (safe_rshift_func_int16_t_s_s(p_36, 1)))) & (safe_mul_func_int16_t_s_s(((func_61(l_1262.f6.f7, g_296) , p_36) == (g_19.f3 & g_570[8])), 0xAB42L))) & p_36), g_460)) | p_36) , p_36), 12)) >= g_12[1]), l_1207)) & 0UL) && 247UL) == l_1369) <= 255UL);
                        if (g_19.f4.f9)
                            break;
                        l_1343 = func_57((safe_mul_func_int8_t_s_s(p_36, (func_61((safe_mod_func_int8_t_s_s((l_1389 = ((l_1388 = (((l_1375 , p_36) , (safe_mod_func_uint64_t_u_u((l_1378 = l_1207), (((safe_rshift_func_int8_t_s_u(((((((l_1344 = 0xE2L) , (l_1387[1][0] = (((g_906 = 0L) >= (safe_rshift_func_uint8_t_u_s((l_1344 = p_36), ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_1323[0] != l_1375.f6), 0UL)), l_1370)) == 18446744073709551613UL)))) == g_359))) , 0xF7A7L) | l_1207) | p_36) < g_461), g_147)) < (-8L)) ^ 0x021FL)))) >= 0xD2EBL)) & 0UL)), g_19.f4.f3)), l_102[2]) == p_36))));
                        l_1387[1][0] = p_36;
                    }
                }
            }
        }
        for (g_205 = 6; (g_205 != (-19)); g_205 = safe_sub_func_uint64_t_u_u(g_205, 1))
        {
            if (p_36)
                break;
        }
    }
    return l_64[2][2];
}







static unsigned long long func_48(short p_49, short p_50, struct S0 p_51)
{
    int l_588 = 0x5245A972L;
    char l_633[6][5] = {{0xBFL,0x7CL,0x5BL,0xBAL,0x5BL},{0x5BL,0x5BL,(-1L),0xBAL,0L},{0x7CL,0xBFL,0xBFL,0x7CL,0x5BL},{0x7CL,0xBAL,0xBDL,0xBDL,0xBAL},{0x5BL,0xBFL,0xBDL,(-1L),(-1L)},{0xBFL,0x5BL,0xBFL,0xBDL,(-1L)}};
    unsigned short l_814[6][2] = {{0xB91AL,0x7F61L},{0xB91AL,0xB91AL},{0x7F61L,0xB91AL},{0xB91AL,0x7F61L},{0xB91AL,0xB91AL},{0x7F61L,0xB91AL}};
    int l_917[6] = {0xC5B8C8AEL,(-5L),(-5L),0xC5B8C8AEL,(-5L),(-5L)};
    struct S0 l_968[9] = {{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL},{0x41L,0xED0395D4D1F13B99LL,0x74L,1L,0x8A05L,0x6E40L,-9L,0x9451L,1UL,4294967291UL}};
    short l_1004 = 1L;
    struct S1 l_1039 = {0x2EFB0C9CL,18446744073709551612UL,0UL,18446744073709551610UL,{255UL,18446744073709551611UL,0UL,1L,0xE5BCL,6UL,-4L,2L,0x6542L,0xFD74C50EL},0xF2L,{5UL,0x5119456225C2E184LL,0xE3L,4L,0x84C4L,0x5DBBL,0x25L,-8L,0UL,0x9EB3171AL},9L};
    int l_1172 = 0L;
    unsigned l_1196 = 0x5674DEFDL;
    short l_1197 = 0xFA11L;
    int i, j;
    for (g_104 = 0; (g_104 == 3); ++g_104)
    {
        short l_602 = 0x11C3L;
        unsigned short l_603 = 0x7CF1L;
        long long l_635 = 0L;
        int l_643 = 0xC66A897BL;
        int l_882 = 0x6545D270L;
        const char l_936 = 0x44L;
        unsigned short l_981 = 0UL;
        int l_1003 = 1L;
        unsigned short l_1043 = 65527UL;
        struct S1 l_1053 = {0x5CCDB5FFL,0x8524017CFC2A1D04LL,0UL,0x4FBD396A7E6EDCB0LL,{1UL,18446744073709551612UL,0xFBL,-5L,0x79F2L,0UL,0x7EL,0x2528L,0xA414L,0x749D4600L},0x46L,{8UL,18446744073709551615UL,0x1BL,8L,0x58F2L,65535UL,0x44L,0x3434L,0UL,8UL},-1L};
        char l_1059 = (-1L);
        int l_1102 = (-1L);
        for (p_51.f2 = 0; (p_51.f2 == 55); p_51.f2++)
        {
            unsigned l_583[7][2];
            int l_604 = 8L;
            int l_605 = 3L;
            unsigned short l_694 = 0x8FC2L;
            int l_781 = 0x271C356EL;
            int l_786 = 0x4FE8550FL;
            unsigned long long l_840 = 18446744073709551614UL;
            long long l_868 = (-2L);
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 2; j++)
                    l_583[i][j] = 1UL;
            }
            if ((safe_mul_func_int16_t_s_s((-4L), l_583[0][1])))
            {
                struct S1 l_601[2] = {{0x2395FC57L,4UL,0UL,0x681F5C89E78CA402LL,{1UL,0x2F179BBAFC3D0276LL,0x72L,0x94L,0x8849L,0xA38EL,-7L,-1L,65535UL,1UL},-9L,{0x9EL,0x0610CECEB9BD9EB3LL,0x51L,0x7AL,0x71F1L,65535UL,0x31L,-9L,0UL,9UL},-1L},{0x2395FC57L,4UL,0UL,0x681F5C89E78CA402LL,{1UL,0x2F179BBAFC3D0276LL,0x72L,0x94L,0x8849L,0xA38EL,-7L,-1L,65535UL,1UL},-9L,{0x9EL,0x0610CECEB9BD9EB3LL,0x51L,0x7AL,0x71F1L,65535UL,0x31L,-9L,0UL,9UL},-1L}};
                unsigned char l_606 = 0x05L;
                int l_607[10][1] = {{5L},{(-7L)},{5L},{(-7L)},{5L},{(-7L)},{5L},{(-7L)},{5L},{(-7L)}};
                unsigned char l_622 = 255UL;
                unsigned l_632 = 1UL;
                int i, j;
                l_607[9][0] = (l_606 = (((p_51.f5 | 0xC2B520E3392ED3B5LL) , (safe_lshift_func_int16_t_s_u(g_359, (safe_sub_func_int16_t_s_s(0x3CE4L, 0xDB7DL))))) != ((((l_588 , func_67(l_588, (l_605 = ((l_604 = (g_252 <= (((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_51.f4 = ((l_601[1] , p_51.f0) , g_19.f6.f3)), 10)), g_19.f4.f4)) < l_602) & 0x835AL) & l_583[6][1]), l_588)), p_51.f7)), g_19.f6.f4)), l_602)) , l_601[1].f5) != l_603))) , g_19.f1)))) , l_583[1][1]) != 18446744073709551607UL) | 0x95F9L)));
                if ((g_90 = p_51.f5))
                {
                    char l_620 = 0x4FL;
                    int l_621[8][5] = {{6L,(-2L),6L,(-2L),6L},{1L,1L,1L,1L,1L},{6L,(-2L),6L,(-2L),6L},{1L,1L,1L,1L,1L},{6L,(-2L),6L,(-2L),6L},{1L,1L,1L,1L,1L},{6L,(-2L),6L,(-2L),6L},{1L,1L,1L,1L,1L}};
                    long long l_634[3];
                    long long l_654 = (-1L);
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_634[i] = (-10L);
                    if (((safe_mod_func_int32_t_s_s(((l_605 = (safe_mul_func_uint8_t_u_u((p_51 , ((func_67(p_50, ((safe_mul_func_uint16_t_u_u(((l_621[4][4] = ((((4UL < l_601[1].f4.f1) && (l_607[9][0] = (!(g_19.f4.f4 | (((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(p_51.f1, ((g_124[0] && (g_205 = g_19.f4.f6)) , (g_215 != g_570[9])))), 5)), l_620)) <= l_601[1].f6.f0) < 4L))))) , (-9L)) >= 0x170DL)) == l_603), p_51.f4)) >= 4294967287UL)) || l_583[6][0]) | 0x2188C047A01228F2LL)), l_622))) & 0L), p_51.f0)) && g_90))
                    {
                        const unsigned char l_631 = 0xE3L;
                        if (p_51.f2)
                            break;
                        l_634[2] = (g_19.f6 , (g_19.f6.f6 ^ (p_51.f3 = ((safe_div_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((p_51.f6 = func_67((l_607[9][0] = (safe_lshift_func_int16_t_s_u((0xBEL <= ((p_49 ^ ((l_631 != 0xDC71DDC2L) != (((p_51.f9 = ((l_605 & (0x0EL || ((l_632 = l_621[2][1]) >= (-1L)))) < p_51.f7)) & l_633[2][2]) <= g_19.f6.f5))) >= l_605)), 2))), l_602)), 0UL)), p_49)), g_19.f6.f9)) , p_50))));
                        l_607[9][0] = l_605;
                        l_607[9][0] = p_51.f4;
                    }
                    else
                    {
                        g_90 = 0x9DF29F16L;
                        l_621[7][3] = p_51.f1;
                    }
                    if (p_51.f8)
                    {
                        return g_19.f6.f4;
                    }
                    else
                    {
                        unsigned l_642 = 0x0A0F936BL;
                        g_655 = ((l_635 >= p_51.f1) > (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((l_643 = l_642), 11)), 2)) , 0x4A0AA8C4616EAC63LL) == p_51.f1), (safe_add_func_int64_t_s_s((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(func_67((l_654 = ((!(0x7903EF6882FA7A63LL < (l_642 > (safe_mod_func_uint32_t_u_u(func_67((p_51.f9 = ((safe_rshift_func_int16_t_s_s((((253UL < l_588) | 0x1B66L) || 0x929CL), l_601[1].f4.f9)) , p_50)), p_51.f3), g_19.f6.f5))))) >= (-1L))), l_602), p_51.f6)) <= g_19.f6.f5), g_19.f7)) , l_634[2]) , p_51.f6), p_51.f5)))));
                    }
                }
                else
                {
                    if (g_166[1][1][0])
                        break;
                    l_643 = p_51.f7;
                    if (((p_51.f6 || g_147) & p_51.f4))
                    {
                        unsigned long long l_656 = 0UL;
                        l_656 = l_601[1].f6.f3;
                        return l_602;
                    }
                    else
                    {
                        long long l_657[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_657[i] = 0x7883952FDB374FFFLL;
                        l_657[1] = (-1L);
                        l_607[9][0] = (func_67(p_51.f5, (((safe_sub_func_uint32_t_u_u(l_602, ((((l_605 = (p_51.f3 ^ g_19.f7)) && (func_67(l_657[1], func_67(g_19.f4.f9, l_601[1].f4.f9)) ^ g_356)) == g_359) > 4UL))) != g_232) ^ g_408[4][5][2])) , (-3L));
                    }
                }
                for (p_51.f1 = 0; (p_51.f1 <= 2); p_51.f1 += 1)
                {
                    int i, j;
                    l_607[9][0] = (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(l_633[p_51.f1][(p_51.f1 + 1)], l_633[p_51.f1][(p_51.f1 + 1)])) == ((safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((((func_67(p_51.f7, ((((safe_lshift_func_uint8_t_u_u((0xFAL ^ (!l_633[p_51.f1][(p_51.f1 + 1)])), (safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s((func_67(l_583[0][1], (safe_rshift_func_uint8_t_u_u((g_124[0] = (safe_sub_func_uint64_t_u_u(func_67(p_51.f0, (g_570[1] = p_51.f9)), g_104))), l_633[p_51.f1][(p_51.f1 + 1)]))) , p_51.f8), p_51.f8)), p_51.f8)))) & p_51.f3) != p_51.f5) > (-3L))) , g_19.f6.f0) > (-1L)) == l_588), 0x37E1L)), 0xE4L)) != p_51.f4)), l_635));
                }
            }
            else
            {
                unsigned long long l_680 = 2UL;
                g_90 = (safe_sub_func_uint8_t_u_u(p_49, l_680));
            }
            for (l_635 = 6; (l_635 <= 11); l_635++)
            {
                long long l_685 = (-2L);
                int l_707 = (-1L);
                short l_716 = 1L;
                struct S0 l_849 = {0xD4L,18446744073709551612UL,0UL,0L,0xE23FL,1UL,-1L,0x8DB9L,0UL,0UL};
                short l_869[5] = {0xB4CFL,0xB4CFL,0xB4CFL,0xB4CFL,0xB4CFL};
                int i;
                l_605 = (safe_rshift_func_uint16_t_u_s((0xB7L >= (l_685 , func_67((((((p_51.f0 == (g_19 , (((safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(6L, p_51.f4)) | ((((safe_mod_func_int64_t_s_s((l_685 , p_51.f1), (func_67((l_588 = (((4L != 5L) , g_19.f1) && g_408[2][3][1])), l_603) ^ 0x86E28239L))) && 0L) | g_505[0]) , p_51.f0)), g_505[2])) , l_633[0][3]) >= l_583[3][1]))) && p_50) == g_505[1]) & p_51.f3) != 0UL), p_50))), l_694));
                for (g_296 = 0; (g_296 <= 1); g_296 += 1)
                {
                    int i, j;
                    if (l_583[g_296][g_296])
                        break;
                    l_707 = (safe_rshift_func_uint16_t_u_s((((8UL ^ (l_583[1][1] < ((l_588 & (g_232 || (((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(0xECCEL, 15)), ((safe_add_func_int64_t_s_s(((safe_div_func_uint32_t_u_u(l_583[0][1], p_51.f3)) != 0x0BL), (safe_div_func_uint16_t_u_u(g_19.f4.f9, 65528UL)))) , g_358[2][0]))) > 0xA1F96432L) == p_51.f1))) ^ 0x360562A6L))) >= 0xC0L) == l_583[g_296][g_296]), 7));
                    l_604 = (-1L);
                }
                if (g_296)
                {
                    short l_710 = 0x86F4L;
                    int l_717 = 0xD63CA758L;
                    if (func_67((l_716 = (255UL && ((0x70451AE4L != g_104) > (g_19.f6.f3 >= (safe_div_func_uint16_t_u_u(((g_715 = ((l_710 ^ (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_51.f2, ((+l_633[2][2]) | func_67((g_252 = 0x3F444914L), g_461)))), l_633[2][2]))) < 0x665FB8D8L)) < l_643), p_51.f0)))))), g_505[1]))
                    {
                        l_717 = 0x4AA01FA0L;
                        g_90 = g_19.f6.f3;
                        if (g_460)
                            continue;
                    }
                    else
                    {
                        struct S1 l_726 = {0xE484D87EL,0x4AE7C080AF894D4BLL,0xF0L,2UL,{254UL,0x023BBBA7AC03C51ALL,247UL,0xACL,4L,0x9281L,0xE7L,1L,2UL,0xE105BAB7L},0x90L,{0x87L,18446744073709551608UL,7UL,0x4AL,0xE361L,0x98AFL,0x2AL,1L,1UL,0x92FF69B1L},0x2CE9985AL};
                        g_90 = (l_707 = (safe_sub_func_uint32_t_u_u(p_50, p_51.f1)));
                        if (g_356)
                            continue;
                        l_717 = (((safe_lshift_func_int8_t_s_u(((safe_div_func_int8_t_s_s(((l_604 = g_19.f0) , (g_505[3] ^ ((safe_sub_func_int32_t_s_s((l_726 , func_67(p_51.f5, (l_707 = (safe_mod_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((l_588 = 0x931BFE57L) || (((~g_208) > (g_19.f6.f9 != ((safe_sub_func_int32_t_s_s(1L, (g_90 = (safe_rshift_func_int16_t_s_s(l_710, g_460))))) >= p_51.f1))) , l_605)) , (-7L)), 15)), g_12[4])), 1UL))))), p_51.f3)) ^ 65535UL))), p_51.f9)) , l_643), 1)) >= 0x15EFE38CL) && p_50);
                    }
                    g_90 = l_605;
                    l_717 = (l_707 = (1L ^ (((safe_lshift_func_uint8_t_u_u(g_408[0][6][0], (func_67(g_19.f6.f8, g_12[4]) == (safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((g_161 = p_51.f0) | (l_643 = p_51.f8)) & p_51.f9) != (safe_mod_func_uint64_t_u_u((((safe_add_func_int8_t_s_s(((g_19 , g_570[2]) , g_715), 1UL)) <= 5L) == p_51.f3), l_602))), 0x293AL)), 6UL)) & (-1L)), 1)), p_51.f1))))) ^ (-1L)) < g_359)));
                    for (p_51.f9 = (-15); (p_51.f9 > 29); ++p_51.f9)
                    {
                        unsigned long long l_765 = 1UL;
                        unsigned l_770 = 0UL;
                        l_643 = ((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(0x02L, (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((l_765 < 1UL) | (safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((l_707 = ((l_770 , (g_19.f4 , func_67(((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(l_643, ((l_765 && (g_19 , func_67(g_19.f6.f2, g_505[1]))) || l_717))) >= l_633[3][1]) != l_765), g_358[4][1])) , g_252), l_765))) != l_633[2][2])) | g_208), g_166[1][1][0])), g_19.f1))), 6UL)) , 0x92L), p_50)) == g_532), g_208)))) ^ 0x57A5152AL), 0L)) | 0x79L);
                        g_791 = func_67(l_707, (l_643 = (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((g_166[1][1][0] ^ func_67(g_19.f4.f8, l_781)), (safe_lshift_func_uint16_t_u_s(g_19.f4.f7, 7)))) == (~(safe_rshift_func_int16_t_s_u(l_583[5][0], (((l_786 , (safe_add_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((g_19.f6.f4 < 0x87L), g_161)) | g_19.f4.f4), g_356))) || g_19.f6.f0) == l_635))))), g_655)), p_51.f9))));
                        l_604 = ((safe_lshift_func_int8_t_s_u((p_51.f3 = (safe_div_func_int32_t_s_s(p_51.f1, g_19.f4.f7))), (safe_lshift_func_uint16_t_u_s((func_67((p_51.f7 >= p_51.f8), (l_604 , (safe_mul_func_uint16_t_u_u(l_770, l_707)))) , ((safe_sub_func_uint32_t_u_u(l_588, g_19.f4.f8)) || 0xA2L)), g_358[0][0])))) == 8L);
                    }
                }
                else
                {
                    unsigned long long l_808 = 18446744073709551615UL;
                    struct S0 l_809[1] = {{248UL,0xE5D39807719DFADELL,0UL,0L,0L,4UL,-5L,0x6081L,0x87F9L,4UL}};
                    int l_812 = 1L;
                    int l_813 = (-1L);
                    int i;
                    g_815[0] = func_67((l_813 = (l_812 = ((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s(((g_461 && (g_147 = (safe_sub_func_uint8_t_u_u((l_808 = 4UL), (l_809[0] , ((l_643 = g_19.f4.f4) && (safe_mod_func_int32_t_s_s(func_67(func_67(l_603, p_51.f1), g_19.f4.f6), 0xA121CFD2L)))))))) > p_51.f7), g_19.f6.f4)), g_19.f5)) > g_12[0]))), l_814[2][0]);
                    for (l_603 = 0; (l_603 <= 50); l_603 = safe_add_func_uint8_t_u_u(l_603, 1))
                    {
                        unsigned short l_833 = 0x0AD6L;
                        int l_834 = 0xB63284DFL;
                        l_834 = (safe_add_func_int32_t_s_s((((l_643 = (((0xEAA73E5098E78F22LL && (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_588 = (safe_div_func_uint16_t_u_u((((safe_div_func_int64_t_s_s((-8L), (p_51.f1 = func_67(l_812, p_50)))) & (~(safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_51.f2 | g_359), l_833)), l_643)) || 1UL))))) , g_19.f4.f7), l_685))), 0x6DL)), l_809[0].f6))) == l_583[3][0]) ^ l_605)) & l_781) >= 0x4D2E9249L), g_19.f4.f5));
                        g_837 = (safe_sub_func_int8_t_s_s(func_67(l_603, l_633[2][2]), (l_602 && (l_834 = g_715))));
                        g_90 = (safe_sub_func_uint64_t_u_u(0x220AC3E094F34342LL, 2UL));
                    }
                    if ((p_51.f8 ^ g_461))
                    {
                        if (l_840)
                            break;
                    }
                    else
                    {
                        return l_605;
                    }
                    for (p_51.f9 = (-15); (p_51.f9 <= 39); p_51.f9 = safe_add_func_uint64_t_u_u(p_51.f9, 4))
                    {
                        short l_852 = 4L;
                        long long l_857 = 0xE1214B31CEE847AFLL;
                        l_643 = (((!(func_67(g_208, p_51.f3) , (((((safe_sub_func_int64_t_s_s(func_67((g_147 = 0x6695E0F9L), (p_51.f5 , 1L)), (safe_add_func_uint16_t_u_u((l_849 , ((-2L) ^ p_51.f2)), p_51.f9)))) | 0x2938C786ECFFE8F0LL) > l_849.f1) || g_461) < 0L))) >= l_786) ^ g_104);
                        l_813 = (g_19 , 0x57A62770L);
                        l_813 = func_67(func_67((((((safe_mul_func_uint16_t_u_u((p_51.f8 = func_67(l_852, g_166[1][1][0])), g_215)) != ((safe_sub_func_int32_t_s_s(g_208, ((g_205 || (safe_lshift_func_uint8_t_u_s(1UL, 1))) , (l_857 < (((safe_add_func_int16_t_s_s(g_166[1][2][1], l_588)) , g_19.f6.f7) <= p_51.f5))))) <= l_849.f9)) | 4294967295UL) >= l_849.f2) <= g_19.f6.f6), p_51.f4), p_51.f5);
                    }
                }
                l_786 = ((safe_add_func_uint64_t_u_u((p_50 | (((((g_815[0] = ((safe_mod_func_int8_t_s_s((~(((g_205 , (0xF816L ^ (l_868 = ((func_67((p_51.f9 = (safe_mod_func_int64_t_s_s(((g_408[0][6][0] = (g_19.f6.f5 , p_51.f0)) || (0x4D8E4D27L & (2UL || func_67(l_633[2][2], (safe_sub_func_uint8_t_u_u((g_19.f6 , g_356), 0x67L)))))), p_51.f1))), p_51.f4) ^ 0xE5L) != p_51.f4)))) , 0x41A35F8A0A758B21LL) , 0x51L)), 0x12L)) , l_869[4])) ^ 0x072CC977DE46E1DCLL) < 4294967288UL) | p_49) <= 4294967292UL)), p_51.f7)) >= p_51.f7);
            }
        }
        for (g_296 = 19; (g_296 < 37); ++g_296)
        {
            unsigned short l_880[7] = {0xFC4AL,0xFC4AL,0xFC4AL,0xFC4AL,0xFC4AL,0xFC4AL,0xFC4AL};
            int l_881 = 1L;
            int l_918[10][2] = {{0x177FA2B4L,0x177FA2B4L},{0x177FA2B4L,0xE7D3BF67L},{8L,0x2076CF94L},{0xE7D3BF67L,0x2076CF94L},{8L,0xE7D3BF67L},{0x177FA2B4L,0x177FA2B4L},{0x177FA2B4L,0xE7D3BF67L},{8L,0x2076CF94L},{0xE7D3BF67L,0x2076CF94L},{8L,0xE7D3BF67L}};
            struct S1 l_1007[3][3][2] = {{{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}},{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}},{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}}},{{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}},{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}},{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}}},{{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}},{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}},{{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L},{0x64AAB633L,0xF5D77B8722BA9C92LL,254UL,0xDDE92300B28035AELL,{0x73L,0UL,4UL,0x61L,7L,0x8BF0L,0x3FL,8L,0xA3EDL,1UL},0xF1L,{255UL,0x48FC64E8F308EB2ALL,0xA5L,-7L,-1L,0UL,-1L,6L,0x4B36L,4294967295UL},0x8998C8F5L}}}};
            unsigned short l_1074[7] = {0x6DA4L,65535UL,0x6DA4L,0x6DA4L,65535UL,0x6DA4L,0x6DA4L};
            long long l_1151 = 0xF9AFCB0704D7CC06LL;
            int i, j, k;
            if ((safe_mul_func_int16_t_s_s(((func_67(func_67(g_205, g_715), (((l_643 <= (safe_mul_func_int16_t_s_s(p_51.f9, ((((safe_div_func_int64_t_s_s((((g_505[1] <= p_51.f5) < ((l_635 < (((safe_add_func_int16_t_s_s((((l_881 = (g_19 , l_880[6])) , p_49) <= l_882), 0xCD65L)) > l_880[5]) <= l_633[3][1])) | 0xDAL)) , g_19.f6.f7), g_19.f6.f2)) | g_19.f0) , p_51.f5) , l_881)))) , g_19.f7) , 0x3EFA5AF8L)) || (-4L)) != (-9L)), p_51.f7)))
            {
                unsigned l_900 = 0x9D025F4AL;
                unsigned l_938 = 0xC0CA36DAL;
                const long long l_939[6] = {0x53A147ECEFB369B0LL,0x53A147ECEFB369B0LL,0x53A147ECEFB369B0LL,0x53A147ECEFB369B0LL,0x53A147ECEFB369B0LL,0x53A147ECEFB369B0LL};
                int l_963 = 0L;
                int i;
                for (g_252 = (-19); (g_252 <= 34); g_252 = safe_add_func_int64_t_s_s(g_252, 1))
                {
                    unsigned short l_887 = 0x7D1BL;
                    int l_901 = 0L;
                    if (func_67((safe_mod_func_uint8_t_u_u((g_19 , 0xFFL), (p_51.f6 = func_67(((g_815[0] = ((0xA9638E3DL & l_887) || (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(g_19.f7, p_51.f6)) & (p_50 >= (safe_sub_func_int32_t_s_s((g_19.f4.f4 , (((!((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(func_67((func_67(g_19.f4.f9, l_900) , p_51.f2), g_655), p_49)), 6)) , p_51.f3)) == l_814[0][0]) >= l_643)), 0x57D12D63L)))), 1L)), 3)))) < 0x40764AD783890E4FLL), p_51.f9)))), g_19.f4.f3))
                    {
                        g_90 = (g_19.f6.f5 && 0UL);
                        if (p_51.f9)
                            break;
                        l_901 = g_19.f4.f1;
                        l_881 = p_51.f2;
                    }
                    else
                    {
                        g_90 = (l_881 = g_232);
                        l_881 = (l_588 = p_51.f2);
                        g_906 = (safe_sub_func_uint8_t_u_u(func_67(l_887, g_408[3][7][0]), (safe_add_func_int16_t_s_s(l_900, p_51.f9))));
                    }
                }
                l_588 = (g_715 & p_51.f6);
                for (g_215 = 0; (g_215 <= 4); g_215 += 1)
                {
                    int i, j;
                    return l_633[(g_215 + 1)][g_215];
                }
                if (((p_50 = (safe_sub_func_uint32_t_u_u(((~l_881) <= p_51.f2), (safe_lshift_func_int16_t_s_s(func_67(((g_19 , (safe_add_func_int32_t_s_s(6L, (l_643 = l_814[3][0])))) & 65535UL), (func_67((l_588 = l_633[2][2]), (safe_lshift_func_uint8_t_u_u((((l_918[1][1] = ((l_917[2] = ((+p_51.f3) < (safe_lshift_func_uint8_t_u_u(0x9CL, g_19.f6.f2)))) & 255UL)) | l_633[2][2]) || 0x966FL), 0))) , g_147)), 13))))) ^ 0UL))
                {
                    unsigned short l_933 = 0x58E8L;
                    int l_937 = (-4L);
                    short l_940 = (-4L);
                    l_643 = ((g_19.f3 == ((safe_mod_func_int64_t_s_s((0xA80FE724L | (((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(func_67(func_67((((safe_unary_minus_func_int8_t_s((((func_67(p_51.f3, ((p_50 = (safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u(func_67(l_933, (safe_lshift_func_uint8_t_u_u(l_936, 7))))), 0xC5F3L)) , func_67((g_252 = (func_67(g_12[2], (((l_937 = p_51.f5) >= p_51.f6) <= g_460)) , l_882)), p_51.f7)) <= 0x0AD97ADFAD4C4ACALL), 2)), l_880[2]))) , (-7L))) & (-2L)) , 0x23892CBEL) > l_938))) , l_937) & l_939[0]), l_940), g_19.f4.f0), 0L)) | g_19.f3), g_19.f6.f5)) & 0x44ECL) != 6UL)), g_358[0][0])) , p_51.f2)) <= l_603);
                }
                else
                {
                    for (g_532 = 0; (g_532 != 13); ++g_532)
                    {
                        l_917[0] = ((safe_rshift_func_int16_t_s_s((0xC4ACL < (safe_lshift_func_uint16_t_u_u((p_51.f3 , (((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_918[1][0], l_814[2][0])), ((safe_div_func_int32_t_s_s((g_19.f6 , (safe_sub_func_uint8_t_u_u(p_51.f3, (p_51.f0 > func_67((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((((safe_add_func_int32_t_s_s(l_635, p_51.f4)) || 4UL) && g_19.f2) && p_51.f6), 4)), g_19.f6.f7)), p_51.f6))))), l_918[1][1])) | 0L))) < p_49) || l_939[1])), 11))), 6)) , 0x2F9A5318L);
                    }
                    g_90 = g_19.f4.f8;
                    for (p_51.f4 = 0; (p_51.f4 >= (-29)); p_51.f4--)
                    {
                        unsigned l_965 = 4294967293UL;
                        l_963 = p_51.f0;
                        l_965 = (l_963 = func_67(g_19.f1, g_964));
                        l_963 = p_49;
                    }
                }
            }
            else
            {
                long long l_969 = (-1L);
                unsigned char l_972 = 0xF7L;
                l_643 = ((func_67((safe_add_func_uint16_t_u_u((l_968[7] , ((p_51.f0 = func_67(p_51.f3, ((+(l_969 = g_19.f6.f0)) , (safe_mul_func_uint16_t_u_u(p_50, (((((l_972 & g_12[2]) ^ (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(g_19.f4.f2, 2)), ((0x63DC4702L ^ ((safe_mul_func_int8_t_s_s((g_19.f6 , p_50), p_51.f9)) != 0xE274AF2AL)) != l_882))), p_49))) & g_252) != p_51.f1) > l_602)))))) < 0xECL)), 0x9A09L)), g_837) , 0x0AA55687726264C9LL) , l_881);
            }
            if ((l_981 = l_936))
            {
                unsigned l_1012 = 4UL;
                int l_1037 = 0xC9C02F7DL;
                unsigned l_1038[5];
                unsigned short l_1069 = 0xBFE6L;
                short l_1085 = 0x02BDL;
                long long l_1152 = (-1L);
                int i;
                for (i = 0; i < 5; i++)
                    l_1038[i] = 9UL;
                for (g_359 = 0; (g_359 <= 54); g_359++)
                {
                    short l_986 = 0L;
                    int l_1016[10][10][2] = {{{(-1L),(-1L)},{(-1L),7L},{0xB73D86A2L,0xD63105EAL},{1L,(-1L)},{0L,1L},{7L,(-1L)},{7L,1L},{0L,(-1L)},{1L,0xD63105EAL},{0xB73D86A2L,7L}},{{(-1L),(-1L)},{(-1L),(-1L)},{7L,0xB73D86A2L},{0xD63105EAL,1L},{(-1L),0L},{1L,7L},{(-1L),7L},{1L,0L},{(-1L),1L},{0xD63105EAL,0xB73D86A2L}},{{7L,(-1L)},{(-1L),(-1L)},{(-1L),7L},{0xB73D86A2L,0xD63105EAL},{1L,(-1L)},{0L,1L},{7L,(-1L)},{7L,1L},{0L,(-1L)},{1L,0xD63105EAL}},{{0xB73D86A2L,7L},{(-1L),(-1L)},{(-1L),(-1L)},{7L,0xB73D86A2L},{0xD63105EAL,1L},{(-1L),0L},{1L,7L},{(-1L),7L},{1L,0L},{(-1L),1L}},{{0xD63105EAL,0xB73D86A2L},{7L,(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{0xF08B35ACL,(-1L)},{1L,0xD63105EAL},{0x35BF4DD2L,1L},{(-1L),0L},{(-1L),1L},{0x35BF4DD2L,0xD63105EAL}},{{1L,(-1L)},{0xF08B35ACL,(-1L)},{2L,0xD63105EAL},{0xD63105EAL,2L},{(-1L),0xF08B35ACL},{(-1L),1L},{0xD63105EAL,0x35BF4DD2L},{1L,(-1L)},{0L,(-1L)},{1L,0x35BF4DD2L}},{{0xD63105EAL,1L},{(-1L),0xF08B35ACL},{(-1L),2L},{0xD63105EAL,0xD63105EAL},{2L,(-1L)},{0xF08B35ACL,(-1L)},{1L,0xD63105EAL},{0x35BF4DD2L,1L},{(-1L),0L},{(-1L),1L}},{{0x35BF4DD2L,0xD63105EAL},{1L,(-1L)},{0xF08B35ACL,(-1L)},{2L,0xD63105EAL},{0xD63105EAL,2L},{(-1L),0xF08B35ACL},{(-1L),1L},{0xD63105EAL,0x35BF4DD2L},{1L,(-1L)},{0L,(-1L)}},{{1L,0x35BF4DD2L},{0xD63105EAL,1L},{(-1L),0xF08B35ACL},{(-1L),2L},{0xD63105EAL,0xD63105EAL},{2L,(-1L)},{0xF08B35ACL,(-1L)},{1L,0xD63105EAL},{0x35BF4DD2L,1L},{(-1L),0L}},{{(-1L),1L},{0x35BF4DD2L,0xCA7C87FFL},{(-1L),0x94304CEBL},{1L,(-1L)},{(-1L),0xCA7C87FFL},{0xCA7C87FFL,(-1L)},{(-1L),1L},{0x94304CEBL,(-1L)},{0xCA7C87FFL,(-4L)},{(-1L),(-1L)}}};
                    int i, j, k;
                    l_1004 = ((safe_sub_func_int64_t_s_s(((p_51.f4 && l_986) ^ g_815[0]), (safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(0x28L, ((-7L) < (g_19.f6.f8 && (func_67((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_532, (g_124[0] = ((~(g_715 = ((l_643 | (p_51.f3 = (safe_rshift_func_int8_t_s_s((((g_408[0][6][0] = (safe_lshift_func_uint8_t_u_s((((((p_51.f6 = func_67((l_1003 = (p_51.f9 = (func_67((safe_lshift_func_uint8_t_u_u((((~(safe_lshift_func_uint8_t_u_u(g_19.f6.f0, 7))) > l_633[1][1]) > l_881), 7)), p_51.f2) < p_51.f1))), g_19.f4.f7)) , 1L) <= g_532) < p_51.f0) & g_19.f3), 0))) | p_50) <= 0xC0819AC0L), 5)))) >= g_815[0]))) , p_51.f5)))), 1UL)), p_51.f2) & 0xED8FFF1DD7C71E88LL))))), p_51.f1)))) & 1UL);
                    l_1016[6][8][1] = (safe_sub_func_uint16_t_u_u((l_1007[0][1][0] , g_19.f4.f9), (g_19 , (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(0L, (!(!(l_1007[0][1][0].f2 <= (g_161 = (p_50 = 0xA1E5L))))))) , (((g_906 = (((((l_1012 , ((safe_unary_minus_func_int16_t_s((safe_add_func_int16_t_s_s(g_166[1][1][0], (g_408[0][6][0] = (l_936 > 4294967294UL)))))) , l_986)) <= g_358[4][1]) , (-1L)) != p_51.f2) || 0xB227L)) & (-1L)) < 0x7356L)), 5)))));
                    if ((safe_lshift_func_uint16_t_u_u(((p_51.f3 && (safe_div_func_int64_t_s_s(g_570[3], p_51.f2))) == ((safe_lshift_func_uint8_t_u_s((p_51 , g_252), ((safe_mod_func_int8_t_s_s((~((((safe_sub_func_uint64_t_u_u((p_51 , ((g_205 = (safe_lshift_func_int16_t_s_u((p_51.f9 == (((safe_lshift_func_uint8_t_u_u(((l_1003 = (l_1037 = (((((~(safe_lshift_func_int8_t_s_u(((l_643 = ((l_1016[6][8][1] ^ (safe_add_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s(5L, g_19.f4.f1)) <= p_51.f0) , 0UL) | g_19.f6.f9), g_19.f4.f7))) && p_51.f3)) | l_1016[6][8][1]), 6))) , 0x2EL) , 7L) && p_51.f5) > p_51.f4))) < g_161), l_1007[0][1][0].f1)) , 0xE4L) , p_51.f2)), 7))) , l_968[7].f3)), p_51.f2)) , p_51.f2) || p_49) || p_50)), l_1007[0][1][0].f6.f3)) ^ g_124[0]))) , l_1038[3])), 9)))
                    {
                        l_588 = (l_1039 , 0x6BC303EFL);
                        if (p_51.f0)
                            continue;
                        l_1003 = (-1L);
                    }
                    else
                    {
                        unsigned short l_1042 = 0xC045L;
                        l_1003 = (safe_mod_func_int32_t_s_s(g_19.f4.f7, 0x244717AFL));
                        l_1016[6][8][1] = (-10L);
                        return l_1042;
                    }
                    for (p_51.f3 = 1; (p_51.f3 >= 0); p_51.f3 -= 1)
                    {
                        int i;
                        if (g_570[(p_51.f3 + 7)])
                            break;
                    }
                }
                if (l_1043)
                {
                    unsigned long long l_1067 = 0xB1CBF2A50F8EB89FLL;
                    int l_1068 = 0x326B3541L;
                    for (l_1039.f6.f5 = (-11); (l_1039.f6.f5 < 37); l_1039.f6.f5 = safe_add_func_uint32_t_u_u(l_1039.f6.f5, 9))
                    {
                        int l_1046 = 0L;
                        g_1060 = (((l_1046 = 0L) , (safe_mul_func_int8_t_s_s((((l_1039.f6.f5 != (((!(l_1046 , (safe_add_func_int8_t_s_s(func_67(l_1046, (safe_rshift_func_uint16_t_u_u((g_715 = (l_1053 , (safe_unary_minus_func_uint16_t_u(((safe_mul_func_uint8_t_u_u((p_51.f3 , 0xDFL), p_50)) < ((safe_mod_func_uint32_t_u_u(0x238A504BL, 0xB1487389L)) | g_19.f4.f7)))))), g_19.f3))), l_918[1][1])))) > p_51.f1) & 255UL)) , l_1059) , g_208), l_1053.f6.f4))) || l_1007[0][1][0].f4.f3);
                        l_918[1][1] = func_67((safe_div_func_uint16_t_u_u((g_906 && (safe_add_func_int64_t_s_s((((safe_add_func_int8_t_s_s(l_1067, p_50)) , ((l_1046 = (((p_51.f1 >= (g_124[0] = p_51.f8)) || (func_67(l_1038[1], ((l_1069 = (((((p_51.f3 && ((g_505[0] = (+((((l_1068 = 0x0892L) ^ l_1046) ^ p_51.f1) < 5UL))) , l_1007[0][1][0].f4.f5)) , g_460) > (-8L)) == p_51.f8) , 0x3DL)) <= g_19.f4.f4)) && g_124[0])) >= 0x9E6CE1E774CBEC31LL)) == g_19.f4.f4)) || g_166[1][0][1]), g_815[0]))), p_49)), l_1067);
                    }
                    for (g_906 = 0; g_906 < 10; g_906 += 1)
                    {
                        for (l_1053.f4.f8 = 0; l_1053.f4.f8 < 2; l_1053.f4.f8 += 1)
                        {
                            l_918[g_906][l_1053.f4.f8] = 0L;
                        }
                    }
                }
                else
                {
                    for (g_532 = 9; (g_532 >= 1); g_532 -= 1)
                    {
                        int i;
                        l_643 = (((safe_mod_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((-1L) ^ ((g_570[g_532] && g_570[g_532]) , (((-1L) || l_1074[2]) , p_51.f9))) == (safe_lshift_func_int8_t_s_s(((((safe_add_func_int16_t_s_s(((l_1039.f4.f2 > (g_19.f6.f1 , ((!func_67(g_1060, g_358[0][0])) < p_51.f5))) ^ g_461), g_1060)) && 0x4DL) & g_19.f4.f7) , 0x29L), 0))), g_815[0])), g_461)) , l_1037) , g_570[5]);
                        l_917[2] = (g_19.f3 ^ 0xAFA96D13929BABAFLL);
                    }
                }
                for (l_1053.f3 = (-10); (l_1053.f3 >= 12); l_1053.f3 = safe_add_func_uint64_t_u_u(l_1053.f3, 3))
                {
                    long long l_1094 = (-8L);
                    l_643 = p_51.f5;
                    l_917[2] = 0x4E89FC27L;
                    if ((safe_sub_func_int16_t_s_s((safe_sub_func_int64_t_s_s(l_1085, (0x06L != g_19.f4.f6))), p_51.f3)))
                    {
                        unsigned short l_1101 = 0UL;
                        g_90 = p_51.f7;
                        g_1103[0] = (safe_mod_func_uint16_t_u_u(0xF0DBL, ((func_67(g_19.f4.f1, (((0xEF89L == (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_sub_func_int16_t_s_s(p_49, ((g_570[4] > (p_51.f8 = (p_51.f5 = (func_67(l_1094, ((l_1102 = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((l_1101 , l_1053) , (l_1007[0][1][0].f4.f9 , p_51.f5)), 12)), g_358[1][1])), g_19.f3))) | p_51.f9)) != p_51.f7)))) > p_51.f1))) , g_19.f6.f3) | p_49), g_19.f4.f0)), l_1101))) >= g_19.f4.f3) == (-1L))) , 18446744073709551612UL) | 1UL)));
                        l_917[2] = g_505[3];
                    }
                    else
                    {
                        unsigned char l_1114 = 0x84L;
                        int l_1129 = 0x2FF37A92L;
                        g_90 = ((safe_add_func_uint16_t_u_u(((g_655 = (safe_add_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u((((!g_19.f4.f6) && 0xB349L) > p_51.f3), ((p_49 = p_51.f5) || ((g_19.f6.f0 , ((safe_rshift_func_int16_t_s_u(g_205, 10)) ^ (l_1003 = (((g_208 = (safe_lshift_func_uint8_t_u_s(l_1114, 7))) , (safe_add_func_uint32_t_u_u(((g_19.f6.f7 == ((((g_19.f6 , g_19.f6.f2) , 0x6FL) , l_1114) <= 0xBFL)) <= 0UL), 0xE39C9FC2L))) , g_19.f4.f9)))) >= g_408[0][6][0])))) , 18446744073709551607UL) & (-1L)) ^ l_1069), l_1114))) , p_51.f4), l_1007[0][1][0].f1)) && 1UL);
                        l_918[1][1] = (l_1114 | ((l_1129 = (p_51.f2 <= (safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((g_19 , ((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_int64_t_s(((((safe_rshift_func_uint16_t_u_s((p_51.f5 = (safe_sub_func_int16_t_s_s((-9L), 0x31D8L))), 3)) >= ((((g_532 , (g_19.f7 , (safe_unary_minus_func_int16_t_s(func_67(p_51.f4, ((l_968[7].f2 > p_51.f9) == 0xB9L)))))) == 65532UL) | g_19.f4.f0) , g_19.f7)) | 0x5F202BD287DC1AF9LL) | p_50))) > p_51.f9) <= g_815[0]), g_715)) , p_51.f8)), p_51.f7)), g_19.f1)))) > l_1007[0][1][0].f4.f6));
                        g_90 = g_19.f6.f0;
                    }
                }
                for (p_49 = 0; (p_49 != 7); ++p_49)
                {
                    unsigned short l_1140 = 0UL;
                    int l_1157 = 1L;
                    for (l_1053.f4.f4 = 0; (l_1053.f4.f4 <= 8); ++l_1053.f4.f4)
                    {
                        unsigned l_1153 = 0x0338D7D6L;
                        int l_1154 = 1L;
                        l_917[3] = (func_67(((safe_lshift_func_uint8_t_u_s(1UL, 0)) < (p_51.f9 = p_51.f5)), ((safe_mod_func_int16_t_s_s((p_51.f4 = (safe_sub_func_uint16_t_u_u((l_1003 = p_51.f7), ((l_1140 = p_51.f8) > (g_570[0] ^ (~((((0xBDL || (safe_rshift_func_uint8_t_u_s((p_51.f6 == (g_837 = ((safe_mul_func_int16_t_s_s(func_67(((l_1038[4] > (((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(func_67((safe_rshift_func_uint16_t_u_s((l_1039 , 1UL), 12)), g_837), 13)) || 0xA4L), l_635)) , p_51.f7) < 18446744073709551615UL)) & p_51.f0), l_1151), 0x26D1L)) >= l_1007[0][1][0].f4.f9))), g_12[3]))) >= 65535UL) == 65535UL) > l_882))))))), 6UL)) || l_1152)) && p_51.f5);
                        l_1154 = (l_1007[0][1][0].f6.f2 ^ l_1153);
                        g_90 = l_1012;
                    }
                    l_1157 = (safe_div_func_int16_t_s_s(g_408[0][6][0], l_1053.f7));
                    if ((1L ^ (((!(((g_19.f4.f6 == (safe_div_func_uint64_t_u_u(g_570[7], (~((g_791 = p_51.f1) , ((3L != 4UL) > ((safe_mul_func_uint16_t_u_u((!(safe_mul_func_uint16_t_u_u(g_19.f4.f8, g_532))), (((func_67((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((p_51.f4 = (safe_mul_func_uint16_t_u_u(p_51.f6, 0xBB63L))), 10)), g_19.f4.f3)), 0x0AL)) >= 9UL) & 0xF1081F086201EB1ELL), l_1007[0][1][0].f6.f1) < 4294967295UL) && 0xD795L) & g_356))) <= l_1172))))))) != 0UL) != g_19.f4.f8)) > l_1053.f6.f2) && p_50)))
                    {
                        l_918[1][1] = l_968[7].f2;
                        return g_166[1][1][1];
                    }
                    else
                    {
                        short l_1179 = 0x7F48L;
                        l_1179 = (safe_div_func_uint8_t_u_u(((g_461 = (g_205 = (0L != g_19.f4.f0))) || 0xBBB37C5636A38250LL), ((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(l_1151, (65532UL & (1UL == func_67(p_51.f8, ((0UL != p_50) == p_51.f8)))))), p_51.f0)) , l_1053.f1)));
                        if (g_19.f1)
                            continue;
                        l_1003 = ((safe_rshift_func_int16_t_s_u((((p_51.f9 , (l_1172 = l_1053.f4.f6)) <= g_570[1]) < (safe_sub_func_uint16_t_u_u(func_67((+l_1039.f6.f7), (safe_add_func_int32_t_s_s(p_51.f8, (safe_rshift_func_int8_t_s_s(0x51L, 0))))), (safe_mul_func_int16_t_s_s(p_51.f2, p_51.f6))))), 3)) , p_49);
                        l_917[2] = 0x4F04B71BL;
                    }
                }
            }
            else
            {
                return p_50;
            }
        }
    }
    l_917[2] = ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(func_52((safe_mul_func_uint8_t_u_u((p_51.f2 = ((((((l_1039.f6.f6 == 0UL) , (func_61(p_51.f4, g_208) >= 0x5842L)) >= 0L) | ((g_166[1][1][0] == (g_19 , l_1039.f4.f3)) > l_968[7].f6)) || g_19.f6.f9) != p_51.f2)), l_1196)), l_1197, l_633[3][1], g_208), l_917[2])), p_50)) , p_51.f3);
    return g_1198;
}







static unsigned func_52(unsigned p_53, int p_54, const unsigned p_55, int p_56)
{
    unsigned l_149 = 0x5745251BL;
    int l_150 = (-7L);
    unsigned short l_190 = 0x85CDL;
    int l_192 = 0xA52A70A1L;
    unsigned char l_210 = 9UL;
    struct S0 l_297 = {1UL,0UL,0xBFL,0x1CL,2L,1UL,0L,0x6336L,0xD32CL,1UL};
    const long long l_301 = 0xF0513237AC65E84ALL;
    unsigned char l_459 = 255UL;
    long long l_571 = (-6L);
    l_150 = func_57(l_149);
    if ((p_55 & p_55))
    {
        short l_182 = (-1L);
        struct S0 l_209 = {1UL,0x9481C2C015D2ADA5LL,1UL,0L,1L,0xD32CL,-1L,-1L,0xFC91L,1UL};
        int l_250 = (-3L);
        int l_417 = (-1L);
        unsigned char l_497 = 7UL;
        if ((g_19.f6 , l_149))
        {
            unsigned long long l_179[1];
            int l_188 = 0x06E3C85DL;
            short l_202 = 8L;
            char l_295 = 0L;
            unsigned l_355[6][8][5] = {{{0x4C1B842BL,0xE82A49DDL,0x5596BDC1L,4294967295UL,4294967286UL},{4294967295UL,0x7382147AL,0UL,4294967291UL,0x5596BDC1L},{4294967287UL,0x5C578233L,0xD9C6C486L,0x3446C56DL,4294967287UL},{0UL,1UL,0xDB440296L,0x03C6FA89L,4294967289UL},{4294967295UL,0UL,0UL,4294967295UL,4294967289UL},{0x707C7D62L,4294967289UL,4294967295UL,0x9E924A9EL,0xD89A9F97L},{0x41136A16L,0x3446C56DL,1UL,0x788CFFB6L,4294967295UL},{4294967287UL,0xCE15D2B6L,4294967288UL,0x9E924A9EL,4UL}},{{4294967286UL,4294967287UL,1UL,4294967295UL,0x5C89F4C5L},{0x1491F017L,4294967295UL,0x2B3855EDL,0x03C6FA89L,0x96997B79L},{0xE73F25CAL,0x2282C83AL,0x03C6FA89L,0x3446C56DL,4294967292UL},{4294967295UL,0x5C89F4C5L,0xF1562FC4L,4294967291UL,0x5C89F4C5L},{4294967295UL,4294967291UL,4294967293UL,4294967295UL,4294967295UL},{0x3446C56DL,0xAA1CCE24L,0x4C1B842BL,0xF7CE6966L,4294967288UL},{6UL,0xF70C51F5L,0x12354786L,4294967287UL,0xD89A9F97L},{4294967286UL,0x9E924A9EL,4294967292UL,0x5889DFEDL,4294967295UL}},{{0xDB440296L,0x6F7960FBL,0x16A5DE53L,0xC13C451FL,0x12354786L},{0x2B3855EDL,0x1491F017L,0xDE6C89BFL,4294967294UL,0UL},{0x8E143570L,0x1491F017L,0xC0B04146L,4294967295UL,4UL},{0UL,0x6F7960FBL,0x12354786L,0UL,0x85C10DB3L},{4294967295UL,0x03C6FA89L,0xB61E1A32L,4294967295UL,0x41136A16L},{4UL,0xAA1CCE24L,0x3F8DDA60L,0x12354786L,0xDB440296L},{1UL,0x2B476A04L,4294967289UL,0x41136A16L,0xB3D8D166L},{4294967287UL,0x5596BDC1L,4294967287UL,0UL,0x1491F017L}},{{0x9F9B688AL,0x7382147AL,0xC0B04146L,1UL,0xCE15D2B6L},{0x5596BDC1L,0x85C10DB3L,0x2B476A04L,4294967295UL,0x3E0C87FFL},{4294967295UL,0UL,4294967286UL,0UL,4294967295UL},{0x3F8DDA60L,4294967295UL,0x0504AAD3L,0x6F7960FBL,4294967286UL},{0xC13C451FL,0x8E143570L,4294967292UL,0UL,0x5889DFEDL},{0x4C1B842BL,0x20136B55L,0UL,4294967295UL,4294967286UL},{1UL,0UL,0xB3D8D166L,7UL,4294967295UL},{4294967286UL,8UL,4294967295UL,4UL,0x3E0C87FFL}},{{0x2282C83AL,4294967289UL,4294967287UL,4294967294UL,0xCE15D2B6L},{0xB3D8D166L,4294967291UL,3UL,4294967288UL,0x1491F017L},{4294967286UL,0xC0B04146L,5UL,0xFA6133F4L,0x85C10DB3L},{4294967289UL,4294967291UL,6UL,4294967293UL,4294967292UL},{4294967288UL,4294967292UL,0xC3802B2CL,5UL,1UL},{0x41136A16L,7UL,0x9F9B688AL,0xAA1CCE24L,0xF7400288L},{0xAA1CCE24L,0x20136B55L,0xB61E1A32L,4UL,4294967286UL},{0xD9C6C486L,0UL,0x0504AAD3L,0x16A5DE53L,0x5596BDC1L}},{{4UL,1UL,0x0504AAD3L,0UL,4294967292UL},{4294967292UL,0x7382147AL,0xB61E1A32L,4294967292UL,0x716C087AL},{0x9933C3B5L,4294967295UL,0x9F9B688AL,1UL,0xC13C451FL},{4294967291UL,0x16A5DE53L,0xC3802B2CL,4294967286UL,0xB4229990L},{4294967293UL,4294967288UL,6UL,6UL,4294967292UL},{0xF7400288L,0xDB440296L,1UL,1UL,4294967286UL},{4294967295UL,0xC2B95618L,0x12354786L,0UL,0xB3D8D166L},{4294967288UL,4294967287UL,4294967291UL,0x2B3855EDL,0x2282C83AL}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_179[i] = 18446744073709551615UL;
            for (l_150 = 27; (l_150 < 4); --l_150)
            {
                long long l_169 = 0x28030A8251E51D77LL;
                int l_183[9][6] = {{(-9L),(-4L),(-9L),(-1L),(-3L),2L},{0L,0x93753C3AL,(-9L),0L,(-4L),0xD73A1F1EL},{0xD73A1F1EL,0xD4028BDBL,2L,0L,0L,(-1L)},{0L,0L,(-1L),(-1L),0L,0L},{(-9L),0xD4028BDBL,(-8L),0xD73A1F1EL,(-4L),0xA4FFD792L},{(-3L),(-1L),0x6B09CDEFL,0L,0x1F532560L,0x6B09CDEFL},{(-3L),0L,0L,9L,(-9L),9L},{0xA5275633L,0L,0xA5275633L,0x6B09CDEFL,0x1F532560L,0L},{0xA4FFD792L,(-1L),0xA5275633L,0xA4FFD792L,0L,9L}};
                int l_186 = 0xF6C561C4L;
                int l_187[7][2] = {{0xFD20B681L,(-1L)},{0xFD20B681L,(-1L)},{0xFD20B681L,(-1L)},{0xFD20B681L,(-1L)},{0xFD20B681L,(-1L)},{0xFD20B681L,(-1L)},{0xFD20B681L,(-1L)}};
                short l_239 = 0xFA01L;
                int i, j;
                if (g_147)
                {
                    char l_153[1];
                    int l_189 = (-1L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_153[i] = 0L;
                    if (g_19.f0)
                    {
                        unsigned short l_154 = 0x8226L;
                        l_153[0] = func_61(p_54, p_53);
                        return l_154;
                    }
                    else
                    {
                        p_56 = (g_12[3] <= p_56);
                    }
                    for (g_104 = 0; (g_104 != (-12)); g_104 = safe_sub_func_uint64_t_u_u(g_104, 6))
                    {
                        unsigned l_170 = 18446744073709551615UL;
                        if (g_19.f6.f9)
                            break;
                        p_56 = (((safe_rshift_func_int16_t_s_u((((safe_mod_func_int64_t_s_s((g_19.f5 || g_104), p_53)) , (g_161 = 65528UL)) < p_54), 8)) && (((p_53 ^ (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint16_t_u_u((g_166[1][1][0] = l_150), (safe_rshift_func_int16_t_s_u(g_19.f7, p_56)))) != g_19.f4.f5), g_12[3]))) ^ g_19.f6.f1) >= l_169)) , l_170);
                        return l_153[0];
                    }
                    if ((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((func_61(g_161, (!(safe_sub_func_int8_t_s_s(g_19.f4.f8, (safe_mul_func_uint16_t_u_u(func_61((l_179[0] = l_149), func_61(g_12[2], (((l_189 = (safe_sub_func_uint32_t_u_u((((((-1L) <= (l_183[5][4] = (l_182 && 0x58E34EDFC4183E40LL))) != p_53) >= func_61(((((l_187[5][0] = ((((safe_add_func_uint8_t_u_u((l_186 = func_67(l_169, p_54)), p_54)) <= (-7L)) , p_55) == p_55)) , g_19.f6.f1) <= l_188) && p_55), l_153[0])) != l_182), l_188))) != l_188) , l_190))), (-1L))))))) && g_19.f4.f7), p_56)), l_188)))
                    {
                        g_104 = (!0x2C76AACBL);
                    }
                    else
                    {
                        unsigned l_191 = 0xB01E4F83L;
                        l_191 = 0x7BB03D66L;
                    }
                    if ((l_192 = 0xCDF06ED2L))
                    {
                        l_192 = p_55;
                    }
                    else
                    {
                        unsigned l_193 = 0x5B20C799L;
                        l_193 = (250UL || p_55);
                        g_104 = func_67((safe_mod_func_int64_t_s_s((l_186 = (safe_mul_func_uint16_t_u_u((p_54 > ((p_55 >= (func_67(l_153[0], l_182) > (safe_div_func_int8_t_s_s((safe_add_func_int8_t_s_s(p_56, ((l_202 , (safe_sub_func_uint32_t_u_u(g_19.f6.f3, (p_53 = (247UL && p_56))))) >= 65535UL))), l_153[0])))) , l_189)), g_104))), l_182)), g_19.f7);
                    }
                }
                else
                {
                    p_56 = (((l_169 ^ 6L) <= (l_188 = (func_61((((g_205 = g_19.f6.f9) , 0x0E52209AA8E2747ALL) || ((safe_mul_func_uint8_t_u_u((func_67((p_53 = g_12[2]), g_208) , (l_187[5][0] & (func_67((l_209 , p_53), g_124[0]) || p_54))), 255UL)) || l_210)), p_56) , l_183[6][0]))) > g_19.f4.f9);
                    if (l_190)
                        continue;
                }
                p_56 = ((safe_rshift_func_int8_t_s_s(g_19.f6.f7, 6)) >= (safe_rshift_func_uint8_t_u_u(l_183[5][4], 0)));
                if (g_215)
                {
                    l_187[3][0] = (l_188 = (g_90 = 0x335C160BL));
                    if (l_187[5][0])
                        continue;
                    g_104 = 0x3824C50FL;
                }
                else
                {
                    short l_240 = 0x4250L;
                    for (l_186 = 0; (l_186 < 7); ++l_186)
                    {
                        return l_149;
                    }
                    if (p_53)
                        break;
                    l_240 = (func_67(g_19.f0, ((g_19.f7 == ((safe_mul_func_int8_t_s_s(g_19.f3, ((safe_mul_func_uint16_t_u_u((l_186 , func_57((safe_rshift_func_int16_t_s_u((((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(func_67((safe_div_func_int32_t_s_s(0x27886430L, (safe_div_func_uint16_t_u_u((g_232 = l_192), ((safe_sub_func_uint8_t_u_u((g_19.f4.f4 >= g_166[1][1][0]), ((safe_add_func_int32_t_s_s((((p_56 = (l_186 = g_19.f6.f9)) , g_19.f6.f3) < g_19.f6.f8), g_124[0])) & 0UL))) , 0x08D4L))))), l_202), 11)), 4)) , (-1L)) , p_55) > l_209.f0) < 0x7095L), 8)))), 0x31B4L)) <= l_239))) == 0x1CFEL)) , 1L)) <= 0x7405L);
                }
                if ((safe_sub_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((((p_56 ^ (g_161 = (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int64_t_s(l_179[0])) <= ((-1L) & (p_55 , (l_239 & 0x517E7674L)))), 6)))) || (safe_div_func_int8_t_s_s((!l_183[5][4]), (l_187[5][0] = g_166[0][1][1])))) && ((l_182 & 0x0BD9L) , p_56)), p_56)) , l_209.f0), l_186)))
                {
                    l_250 = 0x2BFC735EL;
                    if ((l_188 = l_209.f2))
                    {
                        if (g_19.f6.f1)
                            break;
                        return p_54;
                    }
                    else
                    {
                        unsigned char l_251 = 0xB8L;
                        int l_259 = 0x22430E65L;
                        l_259 = (p_56 = (func_61(p_55, ((!func_57((g_19.f2 && (g_252 = l_251)))) == (safe_mul_func_int8_t_s_s(0x20L, (safe_lshift_func_uint8_t_u_s((0L != g_19.f4.f9), (safe_div_func_int32_t_s_s(l_209.f4, p_54)))))))) , p_56));
                        return g_19.f4.f5;
                    }
                }
                else
                {
                    struct S0 l_264 = {1UL,0x6F2985383A0FE8ACLL,255UL,9L,0x979CL,0x4729L,-9L,6L,0x223CL,0x44727479L};
                    int l_265 = (-1L);
                    p_56 = (func_57((safe_rshift_func_uint16_t_u_s((l_192 = (safe_div_func_uint32_t_u_u(func_57((l_265 = ((func_67(p_53, p_53) , l_264) , p_55))), (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(0x0AF91E43L, ((p_54 | g_19.f6.f1) , 0x5F752F7AL))), 6)) , g_19.f6.f5), 1))))), g_19.f6.f2))) <= (-1L));
                    if (g_19.f4.f4)
                        continue;
                    l_265 = (safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_54, (safe_add_func_uint32_t_u_u((l_188 , ((!0xABCF9D2EL) & (g_215 = g_104))), ((1UL ^ ((safe_lshift_func_int8_t_s_s(0xC4L, 5)) , ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((p_55 == (g_104 | (l_187[5][0] >= 0x06E084898BB38E12LL))), 7)), g_19.f4.f4)) ^ 1UL))) >= g_19.f4.f7))))) != p_54), p_56));
                }
            }
            for (l_210 = 0; (l_210 <= 0); l_210 += 1)
            {
                unsigned long long l_286 = 0x462E7488CC12D69FLL;
                unsigned short l_312 = 0x962FL;
                int l_313 = 0x01B88981L;
                for (g_215 = 0; (g_215 <= 1); g_215 += 1)
                {
                    for (l_209.f2 = 0; (l_209.f2 <= 1); l_209.f2 += 1)
                    {
                        int i;
                        if (l_179[l_210])
                            break;
                        g_104 = g_19.f6.f6;
                        p_56 = (safe_sub_func_int8_t_s_s(0x92L, func_57(l_179[0])));
                        if (g_19.f5)
                            continue;
                    }
                    for (l_150 = 1; (l_150 >= 0); l_150 -= 1)
                    {
                        return l_286;
                    }
                }
                g_104 = 0x14D9A3FAL;
                for (p_54 = 0; (p_54 <= 1); p_54 += 1)
                {
                    int l_300[7][10] = {{1L,0L,1L,0xEC0D1825L,0xFE549635L,(-4L),0L,(-3L),0xE393E304L,7L},{0x88132247L,1L,0xFE549635L,1L,(-1L),0L,(-1L),(-3L),1L,0xDA93B9CFL},{0x3CA6AD3AL,0xFE549635L,1L,0x2656E110L,0xE393E304L,0x88132247L,0x88132247L,0xE393E304L,0x2656E110L,1L},{0xEC0D1825L,0xEC0D1825L,7L,0xFBAC96CFL,(-4L),0x2656E110L,8L,(-2L),0L,0x88132247L},{0L,0xCAC46EC6L,0x2656E110L,0xFE549635L,0L,0x39011DAFL,8L,1L,1L,0x3CA6AD3AL},{0xD289F9E2L,0xEC0D1825L,0xDA93B9CFL,1L,0x88132247L,(-2L),0L,0xA7860AE5L,0xEC0D1825L,1L},{(-1L),(-4L),0x3CA6AD3AL,0x2656E110L,0L,1L,1L,7L,1L,0xFE549635L}};
                    int l_357 = 0xFB6A5409L;
                    int i, j;
                    l_300[0][5] = ((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((func_61(g_19.f6.f9, p_54) != ((g_19.f6.f2 ^ (l_295 >= 6L)) >= (g_296 = 0xC94DL))), (l_297 , (safe_add_func_uint16_t_u_u((g_19.f4 , g_161), p_55))))), 4294967295UL)), l_286)), g_12[2])) || l_188);
                    if (g_19.f6.f9)
                        break;
                    if (l_301)
                    {
                        l_313 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_19.f6.f9, 1)), (g_124[0] = ((safe_rshift_func_int8_t_s_s(g_124[0], g_19.f1)) && (((func_57(func_57(g_12[1])) , (4L < (l_182 , ((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((l_312 >= l_295), g_19.f0)), p_55)) | g_166[1][1][0])))) || l_286) | p_56)))));
                        l_250 = (p_54 ^ (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((+(l_297.f1 , (safe_lshift_func_uint8_t_u_u(func_67(g_19.f6.f5, g_19.f4.f6), 5)))) , (((safe_rshift_func_uint16_t_u_s(l_300[0][1], 14)) || 0L) || (((-7L) <= ((safe_add_func_uint8_t_u_u(0xEDL, g_104)) != g_208)) , l_300[3][7]))), 0)), g_215)));
                    }
                    else
                    {
                        l_192 = g_19.f4.f7;
                    }
                    for (l_312 = 0; (l_312 <= 1); l_312 += 1)
                    {
                        if (g_19.f4.f1)
                            break;
                        if (g_205)
                            break;
                    }
                    for (g_161 = 0; (g_161 <= 1); g_161 += 1)
                    {
                        long long l_344 = 0xDC94E10A026D0C05LL;
                        g_359 = (((safe_mod_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(0UL, func_57((g_358[0][0] = (((~(safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(g_147, p_54)), 3)), (func_61(((((safe_sub_func_uint16_t_u_u(((l_313 = (l_179[0] & ((safe_mul_func_uint16_t_u_u(((((l_344 , (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint64_t_u_u((l_150 = 18446744073709551615UL), ((g_356 = (l_192 = ((((l_355[1][7][2] = func_61((p_54 == (safe_lshift_func_uint16_t_u_u(p_54, 15))), (l_250 = (safe_sub_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u((l_188 = (0xB7L == g_19.f4.f0)), 5)) > g_19.f4.f8), 18446744073709551615UL))))) ^ l_344) && 0x4024B2F5L) <= p_53))) , p_56))) < g_166[1][1][0]), p_55))) , p_55) < 0UL) <= p_54), 0x1218L)) , l_357))) > p_56), l_202)) && 0xCCB004A883AA551FLL) <= 18446744073709551615UL) , l_300[0][5]), p_54) >= p_54))), 1UL)), (-1L)))) && g_161) != l_179[0]))))) | (-1L)), p_54)) , 8L) && l_312);
                        if (p_56)
                            continue;
                        return g_12[4];
                    }
                }
            }
            if (p_56)
            {
                char l_381 = 0x3FL;
                int l_382 = 0xC2398D0DL;
                int l_388 = (-3L);
                for (g_161 = 18; (g_161 >= (-15)); g_161 = safe_sub_func_int16_t_s_s(g_161, 2))
                {
                    g_104 = g_90;
                }
                for (g_161 = (-3); (g_161 <= (-8)); g_161 = safe_sub_func_int64_t_s_s(g_161, 3))
                {
                    long long l_374 = 0xA2FDD5A35583CA0FLL;
                    for (g_232 = 0; (g_232 >= 0); g_232 -= 1)
                    {
                        int l_383 = 0x634F9F8EL;
                        int i, j;
                        l_383 = (safe_rshift_func_uint8_t_u_s(((g_358[(g_232 + 1)][g_232] == (-9L)) || (func_67((((safe_add_func_uint64_t_u_u((l_192 = (safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_19.f4.f4, (l_374 != (((safe_lshift_func_int16_t_s_s(func_67(p_56, (~(safe_mod_func_uint8_t_u_u((func_67(p_55, (safe_sub_func_uint16_t_u_u(((((-1L) > func_61(g_19.f1, func_67(g_19.f6.f8, p_53))) <= p_56) < l_149), g_19.f0))) & l_381), 0x6FL)))), l_382)) | p_53) != p_55)))), g_19.f4.f2)), l_179[0]))), l_355[1][7][2])) <= 4UL) < 2UL), p_56) == p_56)), g_19.f4.f8));
                        l_388 = (g_104 = (~((((safe_add_func_uint64_t_u_u(0x6FD7A0182D448520LL, g_208)) && (!(p_53 != 7UL))) >= ((g_90 = (p_53 & ((((safe_div_func_int8_t_s_s(0xD5L, (l_188 | (~g_19.f6.f3)))) || l_381) & 0xA8051997L) & p_54))) & 0x3E57C576L)) , p_56)));
                        l_388 = g_19.f6.f0;
                    }
                }
                return l_295;
            }
            else
            {
                g_90 = ((p_53 , (g_147 = (l_188 = ((safe_mod_func_uint8_t_u_u((1UL > (l_150 | ((((~((g_19 , (g_19.f7 ^ 1L)) | 0UL)) <= ((safe_add_func_int64_t_s_s((((safe_lshift_func_int8_t_s_s(0L, 4)) || p_56) , g_12[4]), (-5L))) == p_55)) , (-5L)) < p_54))), l_295)) | 0x834EA352L)))) <= g_161);
            }
        }
        else
        {
            unsigned short l_407 = 0UL;
            l_192 = (l_417 = (safe_mod_func_uint64_t_u_u((g_124[0] , p_55), (safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((g_205 = (safe_lshift_func_uint8_t_u_u((l_250 = (l_407 != l_182)), 4))), (g_408[0][6][0] = g_12[2]))), p_54)) , (safe_rshift_func_uint8_t_u_u(l_209.f7, 3))), ((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(1UL, (safe_mul_func_uint8_t_u_u((p_55 >= g_19.f6.f2), g_252)))) ^ 0L), g_19.f4.f4)) || (-10L)))))));
            return p_53;
        }
        p_56 = (func_61(p_55, (l_192 & ((g_19 , (l_250 && 0xC3194414366F288ELL)) , (l_150 = 0x08A6C820L)))) , func_67(((g_19.f0 == p_55) , g_19.f0), g_161));
        if ((p_56 = ((safe_rshift_func_uint16_t_u_u((func_61((p_54 , (1L >= ((l_192 = 0x31FBE95BD41BEC5BLL) & (safe_mod_func_int64_t_s_s(((((l_297.f2 , p_55) || l_297.f2) >= (g_215 || (l_301 && (safe_lshift_func_uint16_t_u_s(0x6E57L, 6))))) & l_250), g_19.f4.f9))))), l_209.f4) , p_53), p_56)) , p_53)))
        {
            unsigned l_426 = 1UL;
            struct S1 l_474 = {-1L,1UL,0UL,0xB7BF462D1C10962ELL,{0x53L,0x438F9D01010215C6LL,2UL,-1L,-5L,0x2BD5L,0x05L,0xA844L,1UL,1UL},-1L,{0x70L,0x6885D054940DDFC6LL,1UL,-3L,0L,0x795EL,0x57L,1L,0xA0BBL,0x95D51006L},0x4D164E03L};
            if ((safe_lshift_func_uint16_t_u_s(l_426, 14)))
            {
                p_56 = l_426;
            }
            else
            {
                unsigned l_441[6][1] = {{0xCAD5EB85L},{0x70C935E6L},{0x70C935E6L},{0xCAD5EB85L},{0x70C935E6L},{0x70C935E6L}};
                unsigned short l_455 = 0x6400L;
                int l_486 = 1L;
                unsigned l_506 = 0x4DD1BDABL;
                int i, j;
                l_150 = (safe_add_func_uint16_t_u_u((l_192 = (safe_div_func_int64_t_s_s(g_19.f4.f3, (safe_add_func_uint16_t_u_u((p_54 <= func_57(l_426)), g_19.f4.f2))))), ((safe_mul_func_int16_t_s_s((18446744073709551615UL <= (safe_mod_func_int32_t_s_s((!p_53), l_209.f5))), (safe_add_func_uint64_t_u_u(((((-8L) == p_55) , 0x36L) || g_19.f6.f0), l_297.f9)))) < 0x8BL)));
                p_56 = (safe_mul_func_uint8_t_u_u(((l_441[0][0] = 0x80F45DC1L) >= p_54), (safe_add_func_uint8_t_u_u(g_19.f4.f8, p_53))));
                if ((0x4A12L && (safe_unary_minus_func_uint16_t_u((((~((((-1L) | ((((((((1L & (safe_mul_func_uint16_t_u_u((g_461 = (((safe_lshift_func_uint16_t_u_s(((l_441[3][0] | (safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(0x73L, (safe_mod_func_int32_t_s_s(p_54, l_455)))), ((func_61((l_459 = (safe_mod_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(g_356)), l_297.f9))), l_441[0][0]) | p_54) || 0xE674BB3725B98D54LL)))) >= g_460), 15)) | l_209.f6) ^ l_297.f6)), 0x0112L))) < g_19.f4.f3) < (-1L)) <= 0x2DL) > 0x72EE1A50L) , g_232) , p_53) , p_53)) != l_441[0][0]) ^ g_161)) <= p_56) == g_19.f6.f2)))))
                {
                    unsigned l_464 = 0UL;
                    if (g_19.f6.f4)
                    {
                        short l_473 = 0x49EFL;
                        int l_475[10][2][5] = {{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}},{{(-1L),0x0762A4A2L,(-1L),0x0762A4A2L,(-1L)},{0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L,0xC37D8817L}}};
                        int i, j, k;
                        l_150 = (l_192 = (func_67((g_19.f7 == l_426), (g_166[0][2][0] = (safe_sub_func_int16_t_s_s((l_464 > ((safe_rshift_func_int8_t_s_u(func_57(func_61(g_19.f4.f5, (g_19.f3 , (+(safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((g_19.f6.f2 , g_166[1][1][0]), 1)), (((safe_rshift_func_uint16_t_u_s(g_124[0], 8)) > (9L >= 0xBAD05E27F77A0CF3LL)) , l_297.f9))))))), 1)) <= p_55)), l_426)))) && l_473));
                        p_56 = (l_474 , func_57(g_19.f0));
                        p_56 = (func_57((l_475[7][0][4] = 0x9649L)) < ((-1L) > ((g_161 = l_297.f4) > p_55)));
                    }
                    else
                    {
                        g_104 = (p_56 = ((safe_lshift_func_uint8_t_u_s(((~((safe_rshift_func_uint16_t_u_u((l_417 = (((((safe_add_func_uint8_t_u_u(((((func_67(g_205, ((g_166[1][1][0] == 0xB51F255CL) , 0xCB1BBA24L)) >= (safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((l_486 = (!(l_209.f6 , p_56))), l_441[0][0])), (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((((p_56 , l_182) , (-7L)) & p_53) == 0x20AF1FD7L), p_56)), 3))))) >= p_56) != 2UL) && g_19.f7), g_460)) , (-1L)) , g_166[1][0][1]) , 0xC6L) == 0xAEL)), p_56)) > 0xBF5A4D99L)) ^ g_147), 6)) < l_297.f1));
                        p_56 = l_474.f1;
                        p_56 = 0x49FEAF3EL;
                        p_56 = func_67(func_61(g_19.f6.f2, (l_417 = ((safe_add_func_int64_t_s_s((l_150 = l_474.f6.f5), l_474.f6.f6)) | g_356))), ((p_56 | g_460) , 0xFAF08D37L));
                    }
                    if ((g_104 = (p_56 = 0x518808A6L)))
                    {
                        return l_441[3][0];
                    }
                    else
                    {
                        return g_19.f7;
                    }
                }
                else
                {
                    unsigned char l_502 = 0xFAL;
                    l_250 = ((safe_mod_func_uint16_t_u_u((18446744073709551614UL ^ (safe_mod_func_uint32_t_u_u((g_124[0] ^ l_497), (g_215 = (safe_sub_func_uint64_t_u_u((safe_mul_func_uint64_t_u_u(l_502, (l_486 >= (((safe_mul_func_uint8_t_u_u(func_57(l_502), (((g_505[1] = (l_209 , p_55)) == p_54) >= l_486))) <= 0x22997A6698707EA4LL) <= l_209.f0)))), 0xF0308F76F086FE8DLL)))))), l_474.f6.f8)) == l_474.f6.f0);
                    l_506 = g_19.f4.f5;
                    for (l_250 = (-12); (l_250 >= (-9)); l_250 = safe_add_func_int8_t_s_s(l_250, 3))
                    {
                        l_192 = l_209.f7;
                        if (p_55)
                            break;
                    }
                }
                p_56 = (safe_lshift_func_uint16_t_u_u((0x2230E56FCFCF608DLL & 0xBC1340EF2A0DBB53LL), func_61((((g_90 = p_56) && ((safe_rshift_func_int8_t_s_u(((0x3A8E26C5D3E01734LL <= (p_56 , ((g_19.f4.f0 == 18446744073709551608UL) > ((p_54 || ((((p_53 = g_19.f3) <= p_55) != 0x9547L) || l_474.f6.f4)) > p_56)))) && g_19.f0), 4)) != 0x1938AE13L)) <= l_149), l_297.f3)));
            }
            g_104 = g_208;
        }
        else
        {
            struct S0 l_513 = {248UL,1UL,1UL,0L,8L,65531UL,-5L,0x3B9AL,0xC706L,0x5FA7BE36L};
            int l_530[10] = {0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L,0x4374E404L};
            char l_531[4];
            int i;
            for (i = 0; i < 4; i++)
                l_531[i] = 0x31L;
            g_104 = ((l_513 , g_505[1]) < (p_56 || (g_461 = 0x7BA1BF31DB25A669LL)));
            g_532 = (safe_lshift_func_uint16_t_u_u(((((func_67((safe_lshift_func_uint16_t_u_s((l_531[2] = (safe_add_func_uint16_t_u_u(((l_192 = ((g_19.f4.f9 >= func_57((safe_sub_func_uint64_t_u_u(g_19.f6.f6, (l_513.f0 < (safe_mul_func_uint16_t_u_u(func_57((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_124[0] = (l_150 = 0xDBL)), ((safe_mod_func_uint8_t_u_u(((l_417 = (((l_417 || g_19.f4.f8) | p_55) , (g_358[4][1] , (func_57((l_530[7] = (255UL && g_161))) | 251UL)))) < p_53), g_12[2])) && p_54))) , p_55), p_56))), (-1L)))))))) <= p_56)) == g_12[2]), 6L))), 12)), g_19.f6.f3) < g_232) != p_53) && 0x6AEA05CB64D0C40ELL) , 0UL), 12));
        }
        g_104 = 0x11D17EFDL;
    }
    else
    {
        short l_545 = (-9L);
        int l_547 = 0x9CD31DE4L;
        char l_572 = (-4L);
        int l_573[7] = {0x6FA6860EL,0x6FA6860EL,0x6FA6860EL,0x6FA6860EL,0x6FA6860EL,0x6FA6860EL,0x6FA6860EL};
        int i;
        for (l_297.f1 = 0; (l_297.f1 == 29); l_297.f1 = safe_add_func_uint64_t_u_u(l_297.f1, 6))
        {
            long long l_541 = 0x5EEF355B233140D1LL;
            int l_544 = 0xF3151DCAL;
            int l_546 = 5L;
            l_192 = (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((p_53 , func_67((((((p_53 >= (1L && l_541)) ^ (l_546 = (l_545 = (l_544 = (safe_add_func_int64_t_s_s((1UL != g_19.f4.f5), p_53)))))) && l_297.f9) == l_547) , 0xD935A8C1L), p_53)), 14)) & 4UL), g_104)), g_232));
            for (g_296 = 0; (g_296 > 34); g_296++)
            {
                long long l_550 = 0x347631EABBE971E4LL;
                p_56 = (!((l_550 , g_19.f6.f6) || l_546));
                return g_460;
            }
            l_150 = 1L;
            l_547 = p_53;
        }
        for (l_297.f8 = 0; (l_297.f8 <= 10); ++l_297.f8)
        {
            int l_555[6][3] = {{1L,(-1L),1L},{1L,0xE048F130L,(-3L)},{1L,0L,1L},{1L,(-1L),1L},{1L,0xE048F130L,(-3L)},{1L,0L,1L}};
            int i, j;
            l_192 = (safe_rshift_func_uint16_t_u_u((func_57(func_61(p_56, (l_555[0][1] <= ((safe_lshift_func_int8_t_s_s(p_56, 5)) ^ (l_547 = func_67(l_555[2][0], (((-1L) | p_54) < 0L))))))) & 0xE1L), p_55));
        }
        l_573[0] = (safe_div_func_uint32_t_u_u((g_19 , (g_19.f6 , (safe_mod_func_int16_t_s_s(((l_547 = (safe_sub_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((0UL >= (g_19.f0 != l_547)) != func_57(((l_297.f4 != ((g_570[8] = p_55) && (func_61(l_545, p_53) ^ 0x9DD8C01BD8A7EDADLL))) < l_571))), l_297.f5)), 1)) & 65530UL) == p_53) | g_408[0][6][0]), p_56))) < l_297.f1), g_19.f4.f7)))), l_572));
    }
    return g_358[1][0];
}







static int func_57(unsigned short p_58)
{
    unsigned short l_144 = 0xB354L;
    for (g_104 = (-18); (g_104 == 18); ++g_104)
    {
        unsigned short l_148 = 65534UL;
        g_90 = ((((0x0AL && ((safe_rshift_func_int16_t_s_s(l_144, 15)) >= (((g_12[2] != 0x5D9C112FL) , (((safe_add_func_int64_t_s_s(p_58, 0x90A79C20776F44E0LL)) != (g_147 = ((0x68B52A41L >= (0x00L & p_58)) >= g_19.f6.f2))) , g_19.f2)) != p_58))) , 0x5100L) , l_148) , 0x70D034B6L);
    }
    return g_19.f6.f9;
}







static char func_61(unsigned p_62, short p_63)
{
    int l_103 = 0xDCAAD51BL;
    unsigned short l_105 = 65530UL;
    int l_106 = 0L;
    int l_113 = 0x2C45C1CAL;
    int l_114 = (-8L);
    int l_115 = 0x99FFC3C1L;
    const short l_118 = 0xE43BL;
    l_115 = ((((g_104 = l_103) & (((g_19.f4.f5 | ((l_106 = func_67(func_67((l_105 = l_103), g_19.f6.f5), l_103)) <= (l_114 = (safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_s(((l_113 = (p_63 != ((safe_div_func_uint32_t_u_u((p_62 >= g_19.f1), 0xF12889EAL)) < 0x084EL))) > g_19.f6.f7), 8)) , 0x26L) ^ 0xACL), 2))))) != g_19.f4.f6) == p_63)) , 0x44318FB6L) != g_19.f6.f6);
    g_104 = p_62;
    g_104 = (l_115 | 4294967294UL);
    if (((safe_sub_func_uint16_t_u_u((g_19.f4.f0 ^ p_63), l_118)) , g_19.f4.f6))
    {
        unsigned l_123 = 0xF1B771C4L;
        int l_137 = 0x4BC7CA1AL;
        int l_138 = 0x53F0CD3AL;
        l_138 = ((p_63 ^ (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(l_105, l_123)) ^ g_124[0]), 8))) , (g_124[0] | (func_67(g_19.f4.f4, ((((safe_div_func_int32_t_s_s((l_113 >= ((safe_mod_func_int16_t_s_s((!(safe_div_func_uint8_t_u_u((l_137 = (safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(func_67(g_19.f4.f3, g_19.f4.f7), p_63)) && 0x06L), g_19.f6.f0)), g_19.f1))), 0xABL))), p_63)) & l_106)), g_12[2])) < g_19.f4.f4) || p_62) < g_19.f2)) , p_63)));
        l_138 = (l_115 = (0UL < p_63));
    }
    else
    {
        int l_139 = 0xBAEC03ACL;
        for (l_103 = 0; l_103 < 1; l_103 += 1)
        {
            g_124[l_103] = 4UL;
        }
        l_139 = (((~p_63) < func_67(l_118, p_63)) , l_113);
        g_104 = p_62;
    }
    return p_62;
}







static int func_67(unsigned p_68, int p_69)
{
    char l_70 = 5L;
    int l_81 = 0L;
    int l_91[7][1][9] = {{{0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L}},{{0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L}},{{0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L}},{{0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L}},{{0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L}},{{0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L,0xD93E5480L}},{{0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L,0xD616DD76L}}};
    int l_92 = 1L;
    int l_93 = 0x5C9B18AFL;
    int i, j, k;
    l_93 = ((l_70 && g_19.f6.f2) >= (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_70, ((l_92 = (~((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((l_91[6][0][4] = (g_90 = (safe_mul_func_int8_t_s_s(((l_81 = p_68) | ((((((-1L) >= ((safe_div_func_uint8_t_u_u(l_70, (safe_add_func_uint8_t_u_u(g_19.f0, (safe_lshift_func_uint8_t_u_u((((l_70 , ((safe_lshift_func_uint8_t_u_s(l_70, 2)) ^ 0UL)) || 0x65A930E6L) <= 0L), 7)))))) && p_68)) || 65531UL) || g_19.f6.f5) ^ p_69) , 0L)), l_70)))) && p_68), 0x236CL)), 4)) < (-1L)) & 0L) ^ g_19.f1))) ^ g_19.f6.f7))), 10)) , 0UL) & l_70));
    l_91[6][0][4] = (((l_93 && g_19.f4.f3) | 4UL) > (safe_div_func_uint8_t_u_u(g_19.f6.f0, p_68)));
    g_90 = (l_93 = (((p_68 <= p_68) <= (l_93 || ((safe_sub_func_int32_t_s_s((l_91[4][0][7] , (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(l_70, l_91[6][0][4])), 2))), (l_92 , l_93))) == l_91[3][0][2]))) == g_19.f6.f0));
    return g_19.f6.f7;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_19.f0, "g_19.f0", print_hash_value);
    transparent_crc(g_19.f1, "g_19.f1", print_hash_value);
    transparent_crc(g_19.f2, "g_19.f2", print_hash_value);
    transparent_crc(g_19.f3, "g_19.f3", print_hash_value);
    transparent_crc(g_19.f4.f0, "g_19.f4.f0", print_hash_value);
    transparent_crc(g_19.f4.f1, "g_19.f4.f1", print_hash_value);
    transparent_crc(g_19.f4.f2, "g_19.f4.f2", print_hash_value);
    transparent_crc(g_19.f4.f3, "g_19.f4.f3", print_hash_value);
    transparent_crc(g_19.f4.f4, "g_19.f4.f4", print_hash_value);
    transparent_crc(g_19.f4.f5, "g_19.f4.f5", print_hash_value);
    transparent_crc(g_19.f4.f6, "g_19.f4.f6", print_hash_value);
    transparent_crc(g_19.f4.f7, "g_19.f4.f7", print_hash_value);
    transparent_crc(g_19.f4.f8, "g_19.f4.f8", print_hash_value);
    transparent_crc(g_19.f4.f9, "g_19.f4.f9", print_hash_value);
    transparent_crc(g_19.f5, "g_19.f5", print_hash_value);
    transparent_crc(g_19.f6.f0, "g_19.f6.f0", print_hash_value);
    transparent_crc(g_19.f6.f1, "g_19.f6.f1", print_hash_value);
    transparent_crc(g_19.f6.f2, "g_19.f6.f2", print_hash_value);
    transparent_crc(g_19.f6.f3, "g_19.f6.f3", print_hash_value);
    transparent_crc(g_19.f6.f4, "g_19.f6.f4", print_hash_value);
    transparent_crc(g_19.f6.f5, "g_19.f6.f5", print_hash_value);
    transparent_crc(g_19.f6.f6, "g_19.f6.f6", print_hash_value);
    transparent_crc(g_19.f6.f7, "g_19.f6.f7", print_hash_value);
    transparent_crc(g_19.f6.f8, "g_19.f6.f8", print_hash_value);
    transparent_crc(g_19.f6.f9, "g_19.f6.f9", print_hash_value);
    transparent_crc(g_19.f7, "g_19.f7", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_166[i][j][k], "g_166[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_208, "g_208", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_358[i][j], "g_358[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_359, "g_359", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_408[i][j][k], "g_408[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_460, "g_460", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_505[i], "g_505[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_532, "g_532", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_570[i], "g_570[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_815[i], "g_815[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    transparent_crc(g_1060, "g_1060", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1103[i], "g_1103[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1199, "g_1199", print_hash_value);
    transparent_crc(g_1302, "g_1302", print_hash_value);
    transparent_crc(g_1396, "g_1396", print_hash_value);
    transparent_crc(g_1473, "g_1473", print_hash_value);
    transparent_crc(g_1497, "g_1497", print_hash_value);
    transparent_crc(g_1587, "g_1587", print_hash_value);
    transparent_crc(g_1813, "g_1813", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1946[i][j], "g_1946[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1982.f0, "g_1982.f0", print_hash_value);
    transparent_crc(g_1982.f1, "g_1982.f1", print_hash_value);
    transparent_crc(g_1982.f2, "g_1982.f2", print_hash_value);
    transparent_crc(g_1982.f3, "g_1982.f3", print_hash_value);
    transparent_crc(g_1982.f4, "g_1982.f4", print_hash_value);
    transparent_crc(g_1982.f5, "g_1982.f5", print_hash_value);
    transparent_crc(g_1982.f6, "g_1982.f6", print_hash_value);
    transparent_crc(g_1982.f7, "g_1982.f7", print_hash_value);
    transparent_crc(g_1982.f8, "g_1982.f8", print_hash_value);
    transparent_crc(g_1982.f9, "g_1982.f9", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_2005[i][j], "g_2005[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2028, "g_2028", print_hash_value);
    transparent_crc(g_2058, "g_2058", print_hash_value);
    transparent_crc(g_2114, "g_2114", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_2176[i][j][k], "g_2176[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2361, "g_2361", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
