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
   volatile int f0;
   volatile unsigned short f1;
   int f2;
   unsigned f3;
};

struct S1 {
   volatile unsigned char f0;
   volatile int f1;
   const unsigned f2;
   const char f3;
   const int f4;
   short f5;
   char f6;
   unsigned f7;
};

struct S2 {
   unsigned short f0;
   int f1;
   unsigned char f2;
   const volatile char f3;
   volatile int f4;
   volatile short f5;
};

struct S3 {
   int f0;
   struct S0 f1;
   short f2;
   int f3;
};


static volatile int g_2 = 0x93EE3274L;
static volatile int g_3[10][3][3] = {{{(-1L),(-1L),(-1L)},{(-7L),(-1L),0L},{1L,(-1L),0x5613717BL}},{{(-7L),(-7L),0x5613717BL},{(-1L),1L,0L},{(-1L),(-7L),(-1L)}},{{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-1L)},{(-7L),(-1L),0L}},{{1L,(-1L),0x5613717BL},{(-7L),(-7L),0x5613717BL},{(-1L),1L,0L}},{{(-1L),(-7L),(-1L)},{(-1L),(-1L),(-7L)},{(-1L),(-1L),(-1L)}},{{(-7L),0L,(-7L)},{0x5613717BL,1L,8L},{(-1L),(-1L),8L}},{{1L,0x5613717BL,(-7L)},{0L,(-1L),0L},{0L,1L,(-1L)}},{{1L,0L,0L},{(-1L),0L,(-7L)},{0x5613717BL,1L,8L}},{{(-1L),(-1L),8L},{1L,0x5613717BL,(-7L)},{0L,(-1L),0L}},{{0L,1L,(-1L)},{1L,0L,0L},{(-1L),0L,(-7L)}}};
static int g_4 = 0L;
static int g_7 = 1L;
static int g_10[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int g_13 = 0x187110E6L;
static int g_16 = 0x198D72A6L;
static unsigned g_33 = 0xE83ADEB9L;
static unsigned g_65 = 0x0B7B2029L;
static int g_76 = 0x06462EF7L;
static char g_93 = 0L;
static unsigned g_113 = 4294967294UL;
static unsigned g_122 = 18446744073709551610UL;
static char g_126 = 0x71L;
static int g_148[6][5][2] = {{{0x8CF327FFL,0xD9B24318L},{0x8CF327FFL,0x8CF327FFL},{(-1L),0xD9B24318L},{(-1L),0x8CF327FFL},{0x8CF327FFL,0xD9B24318L}},{{0x8CF327FFL,0x8CF327FFL},{(-1L),0xD9B24318L},{(-1L),0x8CF327FFL},{0x8CF327FFL,0xD9B24318L},{0x8CF327FFL,0x8CF327FFL}},{{(-1L),0xD9B24318L},{(-1L),0x8CF327FFL},{0x8CF327FFL,0xD9B24318L},{0x8CF327FFL,0x8CF327FFL},{(-1L),0xD9B24318L}},{{(-1L),0x8CF327FFL},{0x8CF327FFL,0xD9B24318L},{0x8CF327FFL,0x8CF327FFL},{(-1L),0xD9B24318L},{(-1L),0x8CF327FFL}},{{0x8CF327FFL,0xD9B24318L},{0x8CF327FFL,0x8CF327FFL},{(-1L),0xD9B24318L},{(-1L),0x8CF327FFL},{0x8CF327FFL,0xD9B24318L}},{{0x8CF327FFL,0x8CF327FFL},{(-1L),0xD9B24318L},{(-1L),0x8CF327FFL},{0x8CF327FFL,0xD9B24318L},{0x8CF327FFL,0x8CF327FFL}}};
static int g_163 = 1L;
static unsigned char g_170 = 0x46L;
static int g_173 = 0x440B9AA1L;
static int g_193[4] = {(-8L),(-8L),(-8L),(-8L)};
static unsigned g_250 = 0x7A67A8A6L;
static unsigned g_253 = 0xC0EEEFFEL;
static char g_266 = 0xC5L;
static short g_267 = 0x2AFEL;
static unsigned short g_306 = 0xF6C1L;
static unsigned short g_319 = 65526UL;
static int g_423[1] = {0x94C3CA43L};
static unsigned char g_446 = 0x50L;
static int g_570 = (-5L);
static int g_714 = 0xA9D6C78DL;
static unsigned short g_758 = 0UL;
static unsigned short g_783 = 0x936AL;
static short g_914 = 0x6DF4L;
static unsigned char g_1061 = 8UL;
static short g_1065 = 0x8B96L;
static short g_1129 = 0x526BL;
static short g_1179 = 4L;
static short g_1234 = 0xF8A2L;
static unsigned g_1296 = 0x98E9AD3FL;
static unsigned short g_1297 = 65531UL;
static const int g_1452 = 0x21C1174DL;
static struct S3 g_1484 = {0x30444D89L,{-4L,65533UL,0xEFD5E8D3L,18446744073709551615UL},8L,0x294CDB71L};
static struct S3 g_1485[2][2][1] = {{{{-9L,{0xC92FF21DL,0x5C8DL,-3L,0x98F68188L},0xABD7L,0xAFD9E980L}},{{-9L,{0xC92FF21DL,0x5C8DL,-3L,0x98F68188L},0xABD7L,0xAFD9E980L}}},{{{-9L,{0xC92FF21DL,0x5C8DL,-3L,0x98F68188L},0xABD7L,0xAFD9E980L}},{{-9L,{0xC92FF21DL,0x5C8DL,-3L,0x98F68188L},0xABD7L,0xAFD9E980L}}}};
static volatile struct S0 g_1486 = {0x5D015E19L,0xBE44L,0x237746DAL,9UL};
static struct S0 g_1507[9][9] = {{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{0L,9UL,-1L,1UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0x1BDC082BL,5UL,7L,18446744073709551612UL},{0L,9UL,-1L,1UL}},{{5L,0xB158L,8L,4UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{0L,9UL,-1L,1UL},{0x87349EBAL,0xF68BL,0x596D551CL,0x8FF6278BL},{5L,0xB158L,8L,4UL},{5L,0xB158L,8L,4UL},{0L,65535UL,0xF0461BB7L,0x1186D803L},{0L,65535UL,0xF0461BB7L,0x1186D803L},{5L,0xB158L,8L,4UL}},{{0x6E606792L,0UL,2L,0UL},{0x2DCBF598L,0xC2C4L,-1L,0x2E85B8F6L},{5L,0xB158L,8L,4UL},{0x2DCBF598L,0xC2C4L,-1L,0x2E85B8F6L},{0x6E606792L,0UL,2L,0UL},{5L,0xB158L,8L,4UL},{0L,65535UL,0xF0461BB7L,0x1186D803L},{0L,65535UL,0xF0461BB7L,0x1186D803L},{5L,0xB158L,8L,4UL}}};
static struct S0 g_1508 = {0xF836EFC9L,65532UL,-1L,0UL};
static struct S3 g_1510 = {0x29BA5D7AL,{0xBB6C7DCFL,0UL,0xC236A733L,0UL},-5L,0x93069137L};
static volatile struct S3 g_1511 = {0xE1E985AEL,{0x6A5633F5L,0xF734L,5L,0xDB48904DL},0x80C6L,0L};
static volatile int g_1516 = 0x132F193FL;
static volatile struct S3 g_1551 = {3L,{0x1F45229FL,0x0AF0L,0xBD25F6E1L,18446744073709551606UL},0x5DC8L,0x160F1C36L};
static struct S3 g_1572 = {0x08F167A3L,{0xEE1C3550L,0x5D38L,0xE22564E1L,0x8A27A199L},-7L,1L};
static volatile struct S1 g_1602 = {0UL,0xEFA0C50EL,0xD27816BEL,0L,0x588E70CEL,0x0747L,-1L,3UL};
static struct S0 g_1603 = {0x5D2E70BAL,7UL,9L,0x95494E5BL};
static struct S2 g_1607 = {65531UL,0x6EAD9C95L,0x34L,0xABL,0xCC641E64L,0x5CB6L};
static volatile struct S0 g_1616 = {0x8926EA40L,1UL,3L,0x152FF2D3L};
static struct S0 g_1617 = {3L,2UL,0xDBFB0BB4L,9UL};
static struct S1 g_1629[7][6][5] = {{{{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL},{0x23L,0xA6CC9313L,0xD5DC81ACL,0x6EL,0L,0xEBB9L,1L,1UL},{251UL,0x5A77DBB2L,0x7F7C7F74L,8L,0x1A369A3DL,0x68C9L,0x36L,0UL},{0x92L,0x879D2265L,4294967295UL,0x2AL,0x89A2B007L,0x0C8FL,0xC8L,5UL},{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L}},{{0UL,-8L,0x180B04D9L,0x2BL,0xAD1F069AL,0x9F97L,5L,0xBCD56205L},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL}},{{0x23L,0xA6CC9313L,0xD5DC81ACL,0x6EL,0L,0xEBB9L,1L,1UL},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{0xE7L,0L,0x39E2CA89L,0x05L,0x3F103E62L,-3L,-4L,0xB1E8D7F1L},{0x92L,0x879D2265L,4294967295UL,0x2AL,0x89A2B007L,0x0C8FL,0xC8L,5UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L}},{{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL},{255UL,0L,0UL,5L,0x92AFBEF3L,-1L,0L,18446744073709551615UL},{0x23L,0xA6CC9313L,0xD5DC81ACL,0x6EL,0L,0xEBB9L,1L,1UL},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL}},{{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0UL,-8L,0x180B04D9L,0x2BL,0xAD1F069AL,0x9F97L,5L,0xBCD56205L},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL}},{{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{0UL,-8L,0x180B04D9L,0x2BL,0xAD1F069AL,0x9F97L,5L,0xBCD56205L},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL},{0UL,-8L,0x180B04D9L,0x2BL,0xAD1F069AL,0x9F97L,5L,0xBCD56205L}}},{{{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{255UL,0L,0UL,5L,0x92AFBEF3L,-1L,0L,18446744073709551615UL},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL},{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L}},{{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{0xE7L,0L,0x39E2CA89L,0x05L,0x3F103E62L,-3L,-4L,0xB1E8D7F1L},{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL}},{{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL},{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL},{0xF0L,3L,0xBF5DF097L,-6L,-6L,0xECD3L,0x29L,0UL}},{{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL},{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{251UL,0x5A77DBB2L,0x7F7C7F74L,8L,0x1A369A3DL,0x68C9L,0x36L,0UL},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL},{0x92L,0x879D2265L,4294967295UL,0x2AL,0x89A2B007L,0x0C8FL,0xC8L,5UL}},{{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL}},{{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0x92L,0x879D2265L,4294967295UL,0x2AL,0x89A2B007L,0x0C8FL,0xC8L,5UL},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L}}},{{{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{255UL,-1L,4294967295UL,-3L,6L,1L,8L,0x95C99A97L},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL}},{{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL},{0xE7L,0L,0x39E2CA89L,0x05L,0x3F103E62L,-3L,-4L,0xB1E8D7F1L},{0xF0L,3L,0xBF5DF097L,-6L,-6L,0xECD3L,0x29L,0UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL}},{{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{0x23L,0xA6CC9313L,0xD5DC81ACL,0x6EL,0L,0xEBB9L,1L,1UL},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL}},{{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{2UL,0x0F56D70DL,4294967295UL,2L,1L,9L,0xE5L,0xF95F3D93L},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL}},{{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0x23L,0xA6CC9313L,0xD5DC81ACL,0x6EL,0L,0xEBB9L,1L,1UL},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{0xF0L,3L,0xBF5DF097L,-6L,-6L,0xECD3L,0x29L,0UL},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL}},{{248UL,0L,0x623B63D7L,2L,-2L,0x23DFL,0x69L,7UL},{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL}}},{{{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL},{255UL,0L,0UL,5L,0x92AFBEF3L,-1L,0L,18446744073709551615UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL}},{{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{0xF0L,3L,0xBF5DF097L,-6L,-6L,0xECD3L,0x29L,0UL},{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL}},{{0x23L,0xA6CC9313L,0xD5DC81ACL,0x6EL,0L,0xEBB9L,1L,1UL},{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL},{0xE7L,0L,0x39E2CA89L,0x05L,0x3F103E62L,-3L,-4L,0xB1E8D7F1L}},{{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{248UL,0L,0x623B63D7L,2L,-2L,0x23DFL,0x69L,7UL},{7UL,9L,4294967294UL,0L,0x9F93B8CAL,9L,0x30L,0x5E513084L},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL}},{{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{0xE7L,0L,0x39E2CA89L,0x05L,0x3F103E62L,-3L,-4L,0xB1E8D7F1L},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL}},{{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL}}},{{{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL},{255UL,0L,0UL,5L,0x92AFBEF3L,-1L,0L,18446744073709551615UL},{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL},{248UL,0L,0x623B63D7L,2L,-2L,0x23DFL,0x69L,7UL}},{{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL}},{{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{1UL,4L,0xBAD36C09L,0xB7L,0xF3E5914EL,0x3F8EL,-4L,18446744073709551615UL},{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL}},{{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0xD0L,0x074E85F9L,0x95EF4412L,-4L,-3L,0x4744L,-1L,4UL},{0x92L,0x879D2265L,4294967295UL,0x2AL,0x89A2B007L,0x0C8FL,0xC8L,5UL},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL}},{{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{248UL,0L,0x623B63D7L,2L,-2L,0x23DFL,0x69L,7UL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL}},{{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L}}},{{{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{0UL,0L,0UL,0x2EL,0x4CCFA4EBL,-1L,1L,18446744073709551609UL},{8UL,9L,0x4E12B40CL,9L,-4L,-4L,1L,0UL},{0x92L,0x879D2265L,4294967295UL,0x2AL,0x89A2B007L,0x0C8FL,0xC8L,5UL},{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL}},{{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{0x99L,0x6234B7C5L,4294967291UL,0x85L,-7L,1L,-1L,0x2B70274FL},{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL}},{{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L}},{{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL},{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0x13L,8L,0UL,0L,0x72881448L,0x7359L,0xD6L,0x42C71686L},{0UL,0x0A41684BL,0UL,0x97L,0x3A697C5CL,0xD6D1L,-7L,0x9C74DB6DL},{0xBAL,0xDD647C03L,0xB429DB98L,-1L,0x4F632033L,0x18BEL,0x1CL,0UL}},{{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{0x0AL,0xE837410BL,4294967295UL,1L,0xDE7A115DL,0x6CA2L,5L,0x8CB39AA4L},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{3UL,5L,0x83412475L,-3L,0x2DB54E21L,0xC1F8L,0x2EL,0UL}},{{0x74L,0L,1UL,0L,0xFE53146AL,1L,5L,18446744073709551615UL},{0x99L,0x6234B7C5L,4294967291UL,0x85L,-7L,1L,-1L,0x2B70274FL},{255UL,-1L,4294967295UL,-3L,6L,1L,8L,0x95C99A97L},{0x72L,0x87232814L,1UL,1L,-1L,6L,0xC9L,0x109CBB15L},{0x0BL,-1L,0x6CDA83F2L,-1L,0x619C392BL,0x8137L,0x46L,0x068F2134L}}},{{{8UL,0L,4294967292UL,0xCBL,0x0708A28FL,-2L,0xD3L,0UL},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{0xB6L,0x3FEF6561L,4294967295UL,0x2DL,0xFC90D9D2L,-7L,-1L,0x463229D5L},{255UL,0x503CC626L,4294967295UL,0x34L,1L,0x1D02L,0xC1L,0x1CFB27BEL}},{{0xD0L,0x074E85F9L,0x95EF4412L,-4L,-3L,0x4744L,-1L,4UL},{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{0xCDL,1L,0x9BC85866L,0x81L,-1L,0xAEDFL,3L,1UL},{255UL,0L,0UL,5L,0x92AFBEF3L,-1L,0L,18446744073709551615UL},{0x99L,0x6234B7C5L,4294967291UL,0x85L,-7L,1L,-1L,0x2B70274FL}},{{0x8CL,-1L,0x4746B873L,0xD8L,0xB435BC1FL,-4L,0L,0x45B638BCL},{8UL,9L,0x4E12B40CL,9L,-4L,-4L,1L,0UL},{0xCDL,1L,0x9BC85866L,0x81L,-1L,0xAEDFL,3L,1UL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0xCDL,1L,0x9BC85866L,0x81L,-1L,0xAEDFL,3L,1UL}},{{0x99L,0x6234B7C5L,4294967291UL,0x85L,-7L,1L,-1L,0x2B70274FL},{0x99L,0x6234B7C5L,4294967291UL,0x85L,-7L,1L,-1L,0x2B70274FL},{1UL,0xC35F2262L,0x4307B1CEL,0L,-9L,0xE134L,-4L,0UL},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{0UL,-8L,0x180B04D9L,0x2BL,0xAD1F069AL,0x9F97L,5L,0xBCD56205L}},{{7UL,9L,4294967294UL,0L,0x9F93B8CAL,9L,0x30L,0x5E513084L},{0UL,-8L,0x180B04D9L,0x2BL,0xAD1F069AL,0x9F97L,5L,0xBCD56205L},{255UL,-1L,4294967295UL,-3L,6L,1L,8L,0x95C99A97L},{0xD0L,0x074E85F9L,0x95EF4412L,-4L,-3L,0x4744L,-1L,4UL},{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL}},{{0x13L,4L,0UL,8L,-5L,1L,2L,18446744073709551614UL},{255UL,0x0A03E56EL,0x42C2F041L,0xD6L,-1L,0xD903L,0L,18446744073709551615UL},{0xD0L,0x074E85F9L,0x95EF4412L,-4L,-3L,0x4744L,-1L,4UL},{0xA3L,0x53F42128L,0x0129A4AEL,0xF1L,0L,-1L,-1L,18446744073709551615UL},{0x13L,8L,0UL,0L,0x72881448L,0x7359L,0xD6L,0x42C71686L}}}};



static const unsigned short func_1(void);
static int func_34(unsigned p_35, int p_36, unsigned short p_37);
static char func_51(const int p_52, const short p_53);
static int func_54(int p_55, int p_56, int p_57, unsigned char p_58, const unsigned p_59);
static int func_60(int p_61, short p_62, unsigned short p_63);
static char func_67(char p_68);
static short func_69(unsigned p_70);
static unsigned short func_71(unsigned short p_72, short p_73, unsigned short p_74, char p_75);
static unsigned char func_79(unsigned p_80, unsigned char p_81, int p_82, int p_83);
static char func_107(unsigned short p_108);
static const unsigned short func_1(void)
{
    short l_25 = 0x7E0FL;
    char l_1498 = (-1L);
    int l_1523 = 0xE0CC8C14L;
    short l_1556 = 0x123FL;
    unsigned l_1579[8] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
    int l_1626 = 0x822720E0L;
    int i;
    for (g_4 = 0; (g_4 > (-4)); g_4 = safe_sub_func_int16_t_s_s(g_4, 2))
    {
        int l_30 = (-1L);
        int l_32[8] = {0xBAE055A2L,0x43818264L,0xBAE055A2L,0xBAE055A2L,0x43818264L,0xBAE055A2L,0xBAE055A2L,0x43818264L};
        int l_1503 = 1L;
        short l_1545 = 1L;
        char l_1597 = 0x05L;
        int i;
        for (g_7 = 0; (g_7 < 20); g_7 = safe_add_func_uint8_t_u_u(g_7, 9))
        {
            int l_1493 = 0x1EF9187FL;
            int l_1504 = 0x8F1961B5L;
            unsigned l_1543[10][6] = {{4294967288UL,0x5EDC5962L,0xF6289482L,4294967291UL,0x1721AB9CL,0x1721AB9CL},{0xF8BC1D22L,0x5EDC5962L,0x5EDC5962L,0xF8BC1D22L,0xFB288D06L,3UL},{0xF8BC1D22L,0xFB288D06L,3UL,4294967291UL,0x5EDC5962L,3UL},{4294967288UL,0x1721AB9CL,0x5EDC5962L,0x0288481DL,0x5EDC5962L,0x1721AB9CL},{4294967291UL,0xFB288D06L,0xF6289482L,0x0288481DL,0xFB288D06L,0x5EDC5962L},{4294967288UL,0x5EDC5962L,0xF6289482L,4294967291UL,0x1721AB9CL,0x1721AB9CL},{0xF8BC1D22L,0x5EDC5962L,0x5EDC5962L,0xF8BC1D22L,0xFB288D06L,3UL},{0xF8BC1D22L,0xFB288D06L,3UL,4294967291UL,0x5EDC5962L,0xFB288D06L},{0xF8BC1D22L,3UL,0xF6289482L,4294967288UL,0xF6289482L,3UL},{0x0288481DL,0x5EDC5962L,0x1721AB9CL,4294967288UL,0x5EDC5962L,0xF6289482L}};
            int i, j;
            for (g_10[6] = 0; (g_10[6] > (-22)); --g_10[6])
            {
                int l_1483 = 0xCBA796ADL;
                for (g_13 = (-8); (g_13 >= (-30)); g_13 = safe_sub_func_uint16_t_u_u(g_13, 5))
                {
                    unsigned short l_31[10][1][4] = {{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}},{{0x0B6FL,0x0B6FL,0x0B6FL,0x0B6FL}}};
                    int l_1479 = 1L;
                    int l_1481 = 0xCF2B30CDL;
                    int l_1482 = 0L;
                    int i, j, k;
                    if (g_3[0][1][1])
                        break;
                    g_2 = g_3[0][1][1];
                    for (g_16 = 9; (g_16 >= (-6)); g_16--)
                    {
                        unsigned short l_1480[8][8] = {{0x5B87L,65535UL,7UL,0x43A8L,7UL,65535UL,0x5B87L,0xC5A5L},{65535UL,7UL,0x0551L,65535UL,6UL,0xC5A5L,1UL,0x2672L},{0x43A8L,65535UL,65526UL,6UL,6UL,65526UL,65535UL,0x43A8L},{65535UL,0x43A8L,65535UL,0x2672L,7UL,65535UL,0x0551L,0x687AL},{0x5B87L,0x6924L,65534UL,65535UL,0x2672L,65535UL,65534UL,0x6924L},{0xC5A5L,0x43A8L,0x6924L,65526UL,65534UL,0x0551L,0x43A8L,65535UL},{7UL,0x2672L,65535UL,0x43A8L,65535UL,65535UL,0x43A8L,65535UL},{0x43A8L,0x43A8L,0x6924L,0x0551L,1UL,0x687AL,65535UL,0UL}};
                        int i, j;
                        if (g_2)
                            break;
                        if (g_3[0][1][1])
                            continue;
                        l_1483 = ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((l_1482 = (l_25 || (l_1481 = (l_1480[7][2] = (safe_sub_func_uint32_t_u_u(g_3[1][0][1], (l_1479 = (safe_add_func_uint32_t_u_u((l_30 , (g_33 = ((l_32[4] = l_31[2][0][0]) != (g_16 || g_7)))), func_34(g_16, g_10[6], l_30)))))))))), 0x58L)), 4)) , l_25), l_31[2][0][0])) | g_1452);
                    }
                }
                g_1485[0][1][0] = g_1484;
                g_1485[0][1][0] = g_1485[0][1][0];
                g_1485[0][1][0].f1 = (g_126 , g_1486);
            }
            if ((l_1503 = (l_1493 = (l_32[0] = (((g_1297 = (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_13 != (safe_rshift_func_uint16_t_u_u(func_71(l_32[4], l_1493, g_783, (g_266 = (safe_mod_func_uint16_t_u_u((func_67((l_1504 = (safe_lshift_func_int8_t_s_s((l_32[4] != g_10[6]), ((l_1498 < g_1486.f3) >= (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(l_1503, 8)), l_25))))))) < l_1498), l_25)))), l_30))), l_25)), g_1484.f0))) & g_1485[0][1][0].f1.f3) , 0xDB091538L)))))
            {
                int l_1509 = 0x055185D7L;
                int l_1547 = 0x75E61443L;
                for (g_170 = (-21); (g_170 != 39); g_170 = safe_add_func_int16_t_s_s(g_170, 3))
                {
                    int l_1528[7];
                    int l_1544 = 0x277A3988L;
                    unsigned char l_1546[6][2][2];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1528[i] = (-1L);
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_1546[i][j][k] = 0xCDL;
                        }
                    }
                    for (g_113 = 0; (g_113 <= 1); g_113 += 1)
                    {
                        g_1507[6][7] = g_1484.f1;
                    }
                    g_1508 = g_1485[0][1][0].f1;
                    if ((((g_423[0] > (l_1509 = (-1L))) != 0xD4449F1DL) == l_32[4]))
                    {
                        g_1510 = g_1510;
                        g_1485[0][1][0].f1.f0 = (g_1511 , g_113);
                        g_3[0][1][1] = l_1509;
                        return l_1509;
                    }
                    else
                    {
                        int l_1532 = 0x254616B6L;
                        if (g_1484.f1.f1)
                            break;
                        g_76 = (g_4 <= (safe_mod_func_uint8_t_u_u(func_67((g_1485[0][1][0].f0 >= (l_32[4] = (safe_add_func_int32_t_s_s(((l_1503 || g_1516) > (g_13 <= (((safe_add_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((l_1523 = g_1510.f3), (g_1485[0][1][0].f2 = (safe_lshift_func_uint8_t_u_u(1UL, g_1508.f3))))), (+2L))), 0UL)) ^ l_25) >= l_1498))), g_783))))), l_1509)));
                        l_1547 = ((!(l_1546[0][0][1] = (l_32[4] = func_67(((safe_add_func_uint32_t_u_u(l_1528[1], (g_714 = ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((l_1532 >= 1UL))), (safe_rshift_func_uint16_t_u_u((0UL & (((safe_sub_func_int16_t_s_s((((g_3[0][1][1] & ((l_1503 = (g_4 ^ (safe_sub_func_uint8_t_u_u((l_1544 = func_67((safe_mod_func_int8_t_s_s(((g_10[2] = ((l_1509 || l_1523) == ((safe_add_func_int32_t_s_s(l_1543[0][3], 0xA3BB72AAL)) == 65535UL))) <= 4294967289UL), l_1528[2])))), l_25)))) && 0xC733DFC7L)) || l_1509) <= 0L), l_1545)) && l_1544) >= g_1484.f1.f3)), 5)))) , l_1532)))) , l_1509))))) > l_30);
                    }
                    for (g_163 = 5; (g_163 >= 0); g_163 -= 1)
                    {
                        int i;
                        return l_1528[g_163];
                    }
                }
                if (g_1507[6][7].f0)
                    continue;
                return l_32[6];
            }
            else
            {
                unsigned short l_1550 = 3UL;
                int l_1601 = 0x575BE1DFL;
                int l_1613 = 1L;
                if (g_266)
                {
                    for (g_1234 = 0; (g_1234 <= 8); g_1234 += 1)
                    {
                        unsigned l_1552 = 0x0AB96FEBL;
                        int l_1553 = 0x748BA358L;
                        unsigned short l_1569 = 0x2562L;
                        int i, j;
                        l_1553 = ((safe_lshift_func_uint8_t_u_u(l_1550, (((func_69(func_79(g_7, (g_1551 , 255UL), (l_1552 , g_170), (g_10[5] = g_173))) , l_32[4]) || 65528UL) == g_1452))) & l_1545);
                        g_1510.f1 = g_1507[g_1234][g_1234];
                        g_76 = ((safe_mod_func_int32_t_s_s(((((g_1510.f2 = g_253) < 1L) > (l_1556 = (+0x9DL))) < 0xF8C6L), (safe_lshift_func_int16_t_s_s(g_1061, (g_914 = g_1551.f3))))) < (g_1129 = l_1553));
                        g_173 = ((safe_sub_func_int8_t_s_s(((((5UL < l_1550) > g_16) & (!(((l_1493 >= 0x2BB0L) <= g_1551.f1.f3) != (safe_add_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_1485[0][1][0].f2, (g_1507[g_1234][g_1234].f3 | (((safe_rshift_func_int16_t_s_u(g_423[0], 12)) & g_148[3][0][1]) || l_1553)))), g_1296)) <= l_1545), g_122))))) , g_3[3][0][0]), 0xACL)) > l_1569);
                    }
                    for (l_1504 = 0; (l_1504 != (-29)); --l_1504)
                    {
                        g_1551.f1 = g_1507[6][7];
                    }
                }
                else
                {
                    unsigned l_1580 = 1UL;
                    int l_1598 = 0xCAABE597L;
                    unsigned l_1614 = 0x23B378CFL;
                    g_1572 = g_1485[0][0][0];
                    l_1504 = ((func_79((safe_rshift_func_int16_t_s_s(0xB5F2L, (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(g_126, (func_107(g_65) , 0x59L))), 12)))), g_193[1], l_1579[4], (g_714 = (g_1551.f1.f2 != (g_93 = l_1580)))) & g_1234) ^ (-8L));
                    g_193[2] = (safe_add_func_uint32_t_u_u((l_32[5] = ((safe_add_func_int8_t_s_s((func_60((g_306 , (l_1493 = (~((((func_79((((g_1296 = l_1556) == ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_1485[0][1][0].f1.f3, (g_1551.f1.f0 , (safe_add_func_int16_t_s_s(func_107(g_1551.f1.f1), (65528UL ^ (safe_add_func_uint8_t_u_u(g_1484.f1.f3, ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((g_93 == l_1545) ^ g_319), l_1550)), l_32[4])) | 0x023BAC12L))))))))) , 1UL), 14)) == g_446)) ^ g_319), g_1507[6][7].f3, l_1580, g_1484.f1.f2) , l_1493) , 0x3DL) && g_1511.f1.f3) | 0UL)))), g_33, g_1484.f1.f3) > l_1523), l_1597)) & l_1550)), g_1510.f1.f2));
                    if ((l_1598 = g_1507[6][7].f2))
                    {
                        g_13 = l_25;
                        l_1601 = ((safe_add_func_int16_t_s_s((-1L), 8UL)) | l_30);
                        g_1508 = g_1551.f1;
                    }
                    else
                    {
                        unsigned short l_1606 = 65535UL;
                        unsigned l_1615 = 0x00020AAFL;
                        g_1603 = ((g_1602 , 0x6D43251CL) , g_1572.f1);
                        g_193[3] = (l_32[4] = (-1L));
                        g_1508 = (((l_1598 = (l_1598 & ((safe_lshift_func_int16_t_s_u((l_1606 | func_69((l_1615 = ((g_1607 , ((func_54((g_1551.f2 > (+(0xB5D328FEL <= (safe_rshift_func_uint16_t_u_u(func_71((func_107((safe_unary_minus_func_int8_t_s((g_914 != ((((((g_122 <= 0x7920L) ^ (safe_add_func_int32_t_s_s(func_67((func_107((l_1613 = (((func_67(l_1580) != l_1556) , 0x64ED63C4L) ^ l_1550))) , l_1545)), g_783))) <= l_1503) , l_1545) > g_16) <= g_16))))) , l_25), l_1614, g_148[5][3][0], g_13), l_1579[4]))))), g_1572.f0, l_1543[3][4], g_1484.f2, g_1129) > 1L) != l_1597)) , g_1508.f1)))), 2)) , l_1498))) < g_1603.f3) , g_1616);
                        if (g_1551.f1.f3)
                            continue;
                    }
                }
            }
        }
        g_1617 = g_1510.f1;
    }
    g_1572.f1 = ((g_113 = g_250) , ((safe_rshift_func_uint16_t_u_u(3UL, g_1617.f3)) , (((((safe_rshift_func_int8_t_s_s((l_1579[0] , ((g_93 = g_1602.f6) > ((((safe_mod_func_uint32_t_u_u(l_1523, (g_76 = l_1523))) , ((safe_add_func_uint8_t_u_u(0xDFL, l_1579[4])) | l_1626)) < g_1452) || l_1556))), g_1485[0][1][0].f2)) == 255UL) > 0xD748F205L) <= (-6L)) , g_1485[0][1][0].f1)));
    g_4 = func_51(g_1510.f1.f1, l_1579[6]);
    l_1523 = (safe_lshift_func_uint16_t_u_s(((g_1629[3][5][1] , (((-10L) > (g_4 = (0x8D944A87L != g_1296))) != (safe_rshift_func_uint8_t_u_s(g_1486.f3, 0)))) | 0xC0896871L), (safe_sub_func_uint16_t_u_u(0x25F3L, (safe_sub_func_int32_t_s_s((((9UL && (l_1498 , l_1556)) , 0xFAL) || g_170), 0x6731F721L))))));
    return g_1629[3][5][1].f5;
}







static int func_34(unsigned p_35, int p_36, unsigned short p_37)
{
    int l_38[6] = {0xCC74BF7AL,0xCC74BF7AL,0x08A1BAB0L,0xCC74BF7AL,0xCC74BF7AL,0x08A1BAB0L};
    unsigned l_64 = 7UL;
    char l_856 = 0L;
    unsigned l_890 = 1UL;
    int l_937 = 0x5B6107E3L;
    unsigned char l_1085 = 0xB5L;
    char l_1120 = 0L;
    int l_1325 = (-9L);
    char l_1366[8][4][1] = {{{(-1L)},{0xE6L},{0x19L},{0x19L}},{{0xE6L},{(-1L)},{0x93L},{0xF3L}},{{0x58L},{0xF3L},{0x93L},{(-1L)}},{{0xE6L},{0x19L},{0x19L},{0xE6L}},{{(-1L)},{0x93L},{0xF3L},{0x58L}},{{0xF3L},{0x93L},{(-1L)},{0xE6L}},{{0x19L},{0x19L},{0xE6L},{(-1L)}},{{0x93L},{0xF3L},{0x58L},{0xF3L}}};
    const unsigned char l_1404 = 0xDAL;
    const short l_1442 = 0x7C3CL;
    unsigned char l_1455 = 250UL;
    int i, j, k;
    for (p_37 = 1; (p_37 <= 5); p_37 += 1)
    {
        int l_835 = 0x7360FC2CL;
        int i;
        if (l_38[p_37])
            break;
        l_835 = (((safe_rshift_func_int8_t_s_s((-2L), 1)) , g_10[6]) ^ (0xE8CA4045L >= (l_38[p_37] = ((safe_rshift_func_int16_t_s_s(((+l_38[3]) || (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((((safe_add_func_uint32_t_u_u((((safe_mod_func_int8_t_s_s(func_51(func_54(g_16, func_60(p_36, (l_64 = ((g_4 ^ g_10[6]) , 3L)), g_65), p_35, g_16, l_38[p_37]), g_16), p_36)) > g_10[6]) , 1UL), (-1L))) > l_38[p_37]) >= l_38[p_37]) , 5UL), p_35)) , l_64), (-7L)))), 9)) <= g_4))));
        for (g_253 = 19; (g_253 > 7); g_253--)
        {
            unsigned short l_844[1][2][9] = {{{1UL,0xACFEL,65535UL,0xACFEL,1UL,1UL,1UL,1UL,0xACFEL},{65530UL,0x6C44L,65530UL,1UL,65535UL,65535UL,1UL,65530UL,0x6C44L}}};
            int l_845[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_845[i] = (-1L);
            l_845[4] = (safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(247UL, (g_170 != (g_126 = (((safe_rshift_func_uint16_t_u_s((l_844[0][1][4] = g_783), l_845[4])) , (safe_sub_func_uint16_t_u_u(((g_113 , p_37) != g_266), p_35))) , ((((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_35, p_35)), 14)) > p_35) == l_835) == 4294967289UL)))))) != 255UL), (-8L)));
            l_38[4] = l_38[1];
            g_76 = p_36;
        }
    }
lbl_1062:
    if ((p_36 , (g_76 = (4294967295UL & ((p_36 = (-1L)) , 0L)))))
    {
        unsigned char l_857 = 0xDFL;
        int l_862 = 0L;
        int l_882 = 0x131D27D6L;
        char l_883 = 0x84L;
        for (p_36 = 0; (p_36 <= (-14)); p_36 = safe_sub_func_int8_t_s_s(p_36, 7))
        {
            short l_884 = (-1L);
            unsigned l_893 = 0xC01697A4L;
            unsigned l_894 = 18446744073709551606UL;
            unsigned l_903 = 0xB78D12ABL;
            char l_913 = (-8L);
            int l_921 = 5L;
            char l_926 = (-1L);
            l_856 = (func_67(p_37) != (g_126 | p_35));
            l_857 = g_423[0];
            if ((l_38[5] , g_250))
            {
                unsigned l_867 = 0x09D6D923L;
                int l_881 = (-1L);
                for (g_113 = 0; (g_113 <= 0); g_113 += 1)
                {
                    int l_885[6][8] = {{3L,2L,2L,3L,0xDCF93606L,1L,(-4L),0xB10BA81DL},{0xAE687A53L,3L,(-1L),(-4L),(-1L),3L,0xAE687A53L,1L},{(-1L),3L,1L,0xB10BA81DL,0xDCF93606L,0xDCF93606L,0xB10BA81DL,1L},{0x5814CDFCL,0x5814CDFCL,0xAE687A53L,2L,0xDCF93606L,1L,3L,1L},{0xE2773E33L,1L,2L,1L,0xE2773E33L,(-4L),0x5814CDFCL,1L},{1L,0xDCF93606L,3L,2L,2L,3L,0xDCF93606L,1L}};
                    int i, j;
                    g_173 = (safe_rshift_func_int16_t_s_u((g_267 = (safe_add_func_int8_t_s_s((l_862 = g_423[g_113]), (safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(func_67(((-1L) | ((((l_867 , (0L || g_65)) , (0xB8L < (l_885[2][7] = (safe_rshift_func_int8_t_s_u(func_67((safe_add_func_int16_t_s_s(func_67((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int8_t_s(((g_148[3][0][1] = g_16) , (safe_sub_func_int32_t_s_s((l_883 = (l_882 = ((safe_mod_func_int8_t_s_s((l_881 = ((safe_add_func_uint32_t_u_u(p_37, p_36)) , 0x4AL)), 9L)) >= g_306))), g_446))))) || p_36), g_65))), p_35))), l_884))))) == 0UL) , l_884))), 7)), l_856))))), p_36));
                }
                l_38[1] = ((g_113 = g_16) & ((+(p_37 ^ (safe_sub_func_int32_t_s_s(p_36, (g_250 = (((g_4 != ((p_35 == (l_881 = ((g_10[7] && l_890) != (0x65A3L != l_867)))) & l_882)) | l_857) != 0x7151L)))))) >= l_64));
                l_881 = func_54(l_856, (((safe_sub_func_int8_t_s_s(func_67(func_67((g_7 <= l_867))), p_36)) & (l_893 >= (((l_38[4] & (0x0850L > g_423[0])) >= l_882) < p_36))) , 1L), l_894, g_65, p_36);
            }
            else
            {
                short l_906 = 0L;
                int l_916 = 0x9705D04FL;
                l_38[4] = func_69((safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((l_38[3] < (g_783 != (((l_882 = (g_173 <= (0x36A68594L >= g_423[0]))) , g_122) == g_253))), ((p_35 > (safe_rshift_func_int8_t_s_s(l_903, 4))) , 0x12L))), 1)));
                for (g_319 = 0; (g_319 <= 0); g_319 += 1)
                {
                    for (l_890 = 0; (l_890 <= 0); l_890 += 1)
                    {
                        int i;
                        l_862 = (g_714 = 0L);
                        if (g_423[g_319])
                            break;
                    }
                    l_906 = (safe_lshift_func_uint16_t_u_u(1UL, 5));
                }
                if (g_173)
                {
                    char l_915[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_915[i][j] = 6L;
                    }
                    if (l_862)
                        break;
                    l_862 = (((l_916 = ((safe_add_func_int8_t_s_s(((p_35 = (((safe_mod_func_uint32_t_u_u((g_16 == (((safe_add_func_uint8_t_u_u(l_906, (func_69(l_913) > ((l_915[0][0] = (g_914 = (p_35 ^ g_13))) , (p_35 >= g_10[6]))))) ^ 0x33L) < p_36)), 0x9D0E0639L)) , g_253) == g_4)) || p_35), 6L)) >= g_10[6])) & 0x90L) || 0xAB8610ACL);
                }
                else
                {
                    unsigned char l_927 = 6UL;
                    int l_928[9][5][5] = {{{(-4L),(-6L),6L,6L,(-6L)},{6L,0x84545892L,0x7830B31CL,0x58B6FEC0L,6L},{0xB58CB01AL,0x58B6FEC0L,(-10L),6L,0xE34EC02FL},{0x7830B31CL,(-8L),0x84545892L,6L,0x65D6BF20L},{0xB58CB01AL,0xC46A50D5L,0x7A400BD3L,0xB58CB01AL,(-3L)}},{{6L,0L,(-10L),(-8L),(-8L)},{(-4L),0L,(-4L),(-3L),0xB58CB01AL},{(-8L),0xC46A50D5L,(-3L),0x65D6BF20L,6L},{0x65D6BF20L,(-8L),0x0D43B0B2L,0xE34EC02FL,6L},{(-4L),0x58B6FEC0L,(-3L),6L,0x58B6FEC0L}},{{0x58B6FEC0L,0x84545892L,(-4L),(-6L),6L},{0L,(-6L),(-10L),(-6L),0L},{0x7830B31CL,0x65D6BF20L,0x7A400BD3L,6L,7L},{1L,0xF0609AF2L,1L,1L,0x5F8F7D44L},{0xCC4B9435L,(-3L),0xE34EC02FL,0x84545892L,0xC46A50D5L}},{{(-10L),1L,0x0D43B0B2L,0x5F8F7D44L,6L},{0xC46A50D5L,0xF0609AF2L,3L,0x7A400BD3L,3L},{0xC46A50D5L,0xC46A50D5L,0L,(-3L),0x7830B31CL},{(-10L),(-4L),1L,3L,(-4L)},{0xCC4B9435L,1L,0x4F8FA99FL,(-4L),3L}},{{1L,(-4L),0xE34EC02FL,0x7830B31CL,(-3L)},{0x0D43B0B2L,0xC46A50D5L,0xF0609AF2L,3L,0x7A400BD3L},{6L,0xF0609AF2L,0xF0609AF2L,6L,0x5F8F7D44L},{0x7830B31CL,1L,0xE34EC02FL,0xC46A50D5L,0x84545892L},{(-10L),(-3L),0x4F8FA99FL,0x5F8F7D44L,1L}},{{0x84545892L,0xF0609AF2L,1L,0xC46A50D5L,3L},{0x7A400BD3L,0x84545892L,0L,6L,0xCC4B9435L},{(-10L),0xCC4B9435L,3L,3L,0xCC4B9435L},{(-4L),1L,0x0D43B0B2L,0x7830B31CL,3L},{(-3L),0x7830B31CL,0xE34EC02FL,(-4L),1L}},{{0x0D43B0B2L,0x7A400BD3L,1L,3L,0x84545892L},{(-3L),0xF0609AF2L,0x9509D908L,(-3L),0x5F8F7D44L},{6L,0x7A400BD3L,0x65D6BF20L,0x7830B31CL,0x7830B31CL},{3L,0x7A400BD3L,3L,0xF0609AF2L,0xC46A50D5L},{0x7830B31CL,0x4F8FA99FL,0xF0609AF2L,(-4L),0x9509D908L}},{{(-4L),0x7830B31CL,(-8L),0x84545892L,6L},{3L,(-3L),0xF0609AF2L,0x9509D908L,(-3L)},{(-3L),(-10L),3L,1L,0x9509D908L},{0x7A400BD3L,1L,0x65D6BF20L,1L,0x7A400BD3L},{0x5F8F7D44L,(-4L),0x0D43B0B2L,0x9509D908L,0xCC4B9435L}},{{0x84545892L,0x4F8FA99FL,(-10L),0x84545892L,0xF0609AF2L},{1L,0xC46A50D5L,0x65D6BF20L,(-4L),0xCC4B9435L},{3L,0x84545892L,0x5F8F7D44L,0xF0609AF2L,0x7A400BD3L},{0xCC4B9435L,0x4F8FA99FL,0x9509D908L,0x7830B31CL,0x9509D908L},{0xCC4B9435L,0xCC4B9435L,(-8L),0xC46A50D5L,(-3L)}}};
                    int i, j, k;
                    g_76 = (safe_lshift_func_int16_t_s_u(g_148[3][0][1], 13));
                    l_928[8][0][1] = (safe_rshift_func_int8_t_s_s((l_856 , ((!(l_921 = 0xA2ADL)) , (((l_857 < (g_266 = 0L)) != (g_570 != func_67(g_319))) | (l_927 = ((l_926 = (safe_add_func_uint32_t_u_u((l_916 >= l_64), l_862))) > 250UL))))), g_113));
                }
            }
            if ((safe_rshift_func_int16_t_s_s(1L, 10)))
            {
                unsigned char l_935 = 1UL;
                int l_936 = 0x1F16DE75L;
                unsigned char l_938 = 255UL;
                l_937 = ((safe_add_func_int16_t_s_s(l_893, func_69((p_36 > 0x0EADL)))) > (~((l_862 = ((l_882 == ((p_35 = 4294967290UL) && (l_894 , (safe_mod_func_int32_t_s_s((g_914 == (l_936 = (l_38[3] = l_935))), (-6L)))))) == p_36)) , l_893)));
                l_38[0] = (g_193[2] = ((g_113 = 4294967295UL) || (func_79(l_938, (safe_add_func_int32_t_s_s((((+g_13) , l_38[5]) < g_113), l_857)), g_170, ((safe_mod_func_uint32_t_u_u(((g_758 = p_35) < (g_306 = g_306)), 0x731439BCL)) <= l_862)) , l_938)));
                l_882 = l_926;
            }
            else
            {
                unsigned char l_943 = 252UL;
                l_943 = (+(g_163 = g_170));
            }
        }
    }
    else
    {
        int l_950 = 0x5915D91CL;
        unsigned l_986 = 0UL;
        for (g_163 = 20; (g_163 != (-29)); --g_163)
        {
            l_38[1] = p_37;
            l_950 = (safe_sub_func_int32_t_s_s(4L, (g_113 = (safe_mod_func_int16_t_s_s((-2L), p_36)))));
        }
        l_38[4] = g_266;
        for (g_253 = 0; (g_253 <= 50); ++g_253)
        {
            short l_953 = 1L;
            if (l_38[0])
                break;
            l_953 = 0L;
        }
        for (g_446 = (-1); (g_446 >= 37); g_446++)
        {
            unsigned l_962 = 0x4CE30784L;
            int l_963 = (-6L);
            for (p_36 = 0; (p_36 < (-13)); p_36--)
            {
                unsigned l_976 = 4294967295UL;
                int l_983 = 0x513CC413L;
                l_38[1] = ((safe_rshift_func_int16_t_s_s((0xB0L >= g_423[0]), (g_914 = g_113))) || (p_35 = (safe_rshift_func_uint8_t_u_s((0xC58BL | l_962), 1))));
                g_193[2] = (3UL == (l_963 = (~g_173)));
                if ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(func_67((safe_sub_func_int32_t_s_s((l_976 = (+((safe_sub_func_uint16_t_u_u(((l_856 >= (0xA9B4ABB6L >= p_35)) != (p_37 != ((l_950 , ((l_950 , (p_36 < (safe_rshift_func_int8_t_s_s(p_36, (((safe_mod_func_uint32_t_u_u(p_35, p_35)) , g_570) || g_7))))) | (-1L))) | 65530UL))), p_35)) , g_4))), 0x575D2E23L))), p_37)), p_35)))
                {
                    int l_984 = (-1L);
                    for (p_35 = 0; (p_35 <= 27); p_35 = safe_add_func_uint32_t_u_u(p_35, 8))
                    {
                        int l_985 = 0xF7D126D1L;
                        l_950 = (func_67(((safe_add_func_int16_t_s_s(((((l_983 = (safe_mod_func_uint32_t_u_u(p_35, ((-4L) || (g_4 < (~l_976)))))) , (((func_67(l_984) < ((((g_250 & g_446) | ((l_986 = ((l_984 >= p_36) >= l_985)) ^ 0xD7L)) , (-1L)) || 0x7A6EL)) | l_984) | 0x62A36DEFL)) != l_950) | 0x69B3L), g_306)) > 0x6D80A09AL)) <= l_984);
                    }
                }
                else
                {
                    const char l_987[4] = {0xDFL,0xDFL,0xDFL,0xDFL};
                    int i;
                    if (l_987[2])
                    {
                        if (g_423[0])
                            break;
                        return g_914;
                    }
                    else
                    {
                        return l_986;
                    }
                }
                for (g_319 = 0; (g_319 <= 0); g_319 += 1)
                {
                    int i;
                    l_983 = (1L & (g_423[g_319] ^ (safe_sub_func_uint32_t_u_u(g_758, ((((l_986 | (l_986 ^ (l_890 == ((g_423[g_319] || (!(g_16 == ((((safe_mod_func_uint8_t_u_u(l_976, (-8L))) , g_306) & l_38[4]) >= p_36)))) > 0x511F86F3L)))) , p_35) >= g_148[2][2][0]) < 0UL)))));
                }
            }
        }
    }
    if ((safe_lshift_func_int8_t_s_s(l_856, (safe_sub_func_uint16_t_u_u(((0x4EL && (!(safe_sub_func_uint16_t_u_u(p_36, (safe_rshift_func_int8_t_s_u((l_38[4] = ((((g_266 <= l_890) , g_267) || func_60(g_758, p_36, (l_937 = l_890))) ^ g_10[6])), l_890)))))) != l_856), g_7)))))
    {
        short l_1000 = 0L;
        int l_1017 = 0x6DEAE6DDL;
        int l_1018 = 1L;
        l_1000 = g_163;
        if (g_16)
            goto lbl_1019;
lbl_1019:
        l_1018 = ((safe_sub_func_int8_t_s_s((g_423[0] , (safe_add_func_uint16_t_u_u(l_856, (l_38[2] = (l_1017 = ((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((l_937 = (func_51(((func_60((func_107((safe_rshift_func_uint16_t_u_u(l_64, 2))) , (g_193[2] = ((((l_1000 ^ (safe_lshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_65, p_37)), (1UL != ((safe_mod_func_uint8_t_u_u(p_37, 1UL)) & l_1000))))) , p_35) ^ 0UL) > 1L))), g_148[3][0][1], g_93) >= 254UL) || l_1000), p_35) & g_16)), l_1000)), 7)) , l_1000)))))), 0L)) , p_35);
        l_38[3] = 0xE0BF2B6EL;
    }
    else
    {
        const unsigned l_1027 = 0x5CB973E3L;
        int l_1041 = (-1L);
        unsigned char l_1086 = 0xE7L;
        char l_1275 = (-1L);
        unsigned l_1328 = 0x22DDC531L;
        unsigned char l_1377 = 0x6CL;
        char l_1384 = 0x5DL;
        g_714 = g_170;
        if (p_35)
        {
            short l_1032 = 0xD67DL;
            int l_1052 = 0x23B2EA1CL;
            const short l_1186 = (-1L);
            int l_1201 = (-1L);
            unsigned short l_1208 = 0xD3B9L;
            for (p_35 = (-14); (p_35 >= 15); p_35 = safe_add_func_int8_t_s_s(p_35, 6))
            {
                unsigned char l_1026[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_1026[i] = 0xB0L;
                g_193[2] = ((safe_mod_func_uint32_t_u_u(func_60(g_173, p_36, ((safe_mod_func_uint32_t_u_u(((func_67(p_37) , (p_35 > (l_1026[0] <= p_35))) < func_107(p_37)), (-3L))) || 3UL)), p_35)) < l_1027);
                l_937 = ((4294967293UL <= ((l_1032 = (l_1027 , ((p_37 && (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((l_1027 && g_914) ^ (l_38[1] != func_69(p_37))), 2)), 1))) != 65535UL))) , g_148[2][1][0])) == 0xBFE5L);
            }
            g_173 = (((func_107(((p_35 != p_35) , (((p_35 <= g_446) < (g_914 | p_37)) > ((((g_113 , (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((l_1041 = (safe_mod_func_uint8_t_u_u(((((g_65 = g_714) , (safe_sub_func_uint16_t_u_u(((p_36 , g_714) != p_35), g_65))) ^ g_113) == l_856), 0x4AL))), 65535UL)), 0x44A7DF86L))) <= 1L) && l_1041) != g_16)))) != g_570) , 0x9FCB6264L) || g_193[2]);
            for (p_35 = 0; p_35 < 6; p_35 += 1)
            {
                l_38[p_35] = 0x79663DF5L;
            }
            if ((safe_rshift_func_uint16_t_u_s(p_35, 9)))
            {
                char l_1044 = 0L;
                char l_1053[9];
                int l_1075 = (-3L);
                int l_1092 = 0x2A8068DCL;
                int i;
                for (i = 0; i < 9; i++)
                    l_1053[i] = 0xCCL;
                if (((0x1591DDD0L & (l_1044 = 1UL)) , ((1UL <= ((65534UL < (p_36 , p_37)) && p_37)) != (safe_mod_func_uint16_t_u_u(l_1027, (safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((safe_sub_func_int8_t_s_s((((-9L) == l_1032) == g_423[0]), p_36)))), g_250)))))))
                {
                    short l_1054 = 8L;
                    if (((((l_1041 = (l_1052 = (g_446 = l_1032))) || p_36) , (l_1053[1] & g_423[0])) || (l_1054 <= (safe_add_func_int32_t_s_s((l_1041 = (safe_rshift_func_int16_t_s_u((func_71(((l_856 , (0x50L | g_783)) <= (safe_rshift_func_uint8_t_u_s(l_64, 5))), g_1061, g_65, l_1054) > p_35), 9))), p_35)))))
                    {
                        return p_37;
                    }
                    else
                    {
                        if (g_170)
                            goto lbl_1062;
                    }
                    g_163 = 0x0EDCDCF9L;
                    g_193[2] = (safe_lshift_func_uint16_t_u_s(65535UL, 6));
                    g_1065 = g_93;
                }
                else
                {
                    char l_1074 = 0xB4L;
                    int l_1087 = (-1L);
                    char l_1121 = 0x96L;
                    for (g_714 = 1; (g_714 >= 0); g_714 -= 1)
                    {
                        g_193[2] = (p_36 != g_319);
                        return g_148[2][0][0];
                    }
                    if ((safe_add_func_uint16_t_u_u(((l_1075 = (safe_add_func_int32_t_s_s(g_13, (p_35 , ((g_1065 & (0x78B1L < ((g_319 = (((safe_mod_func_uint32_t_u_u(func_67((safe_lshift_func_uint16_t_u_u(p_37, (((255UL ^ l_1074) <= (!g_10[7])) & (l_1074 != 0UL))))), g_113)) <= l_1027) & p_37)) , l_1074))) < 9UL))))) <= p_37), l_64)))
                    {
                        unsigned char l_1084 = 246UL;
                        l_1087 = ((g_193[1] = (safe_sub_func_int16_t_s_s((l_1086 = (safe_mod_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((l_1084 = func_54(g_10[6], g_193[2], l_1053[1], func_107(g_4), ((0x2B5FL | (p_37 = (safe_add_func_uint32_t_u_u((g_170 | p_37), p_35)))) , g_1061))), 3L)) , 0xC40D93A7L), l_1085))), l_1032))) , 0xDA4090CAL);
                        g_714 = 0xF705D920L;
                    }
                    else
                    {
                        const char l_1095[5][7] = {{0xB5L,0xC2L,0xC4L,(-1L),8L,(-1L),0xC4L},{9L,9L,(-1L),0L,0xCEL,0xCBL,0xB5L},{0L,9L,0x4CL,0xCBL,0xCBL,0x4CL,9L},{0x4CL,0xC2L,9L,0xC4L,0xCEL,(-1L),0xCBL},{0xC2L,0xC4L,(-1L),8L,(-1L),0xC4L,0xC2L}};
                        int l_1099 = 0L;
                        int i, j;
                        l_1041 = (func_107(g_193[0]) , ((safe_lshift_func_uint16_t_u_u(((func_54(p_36, l_1052, func_71((l_1092 = (((safe_lshift_func_int8_t_s_s(l_1092, (safe_add_func_uint8_t_u_u(((func_51(l_1095[2][2], g_170) , (safe_unary_minus_func_int16_t_s(l_1074))) | g_13), 0L)))) , p_36) ^ 0x20D7L)), g_1065, l_1027, l_1032), g_7, l_1095[2][2]) <= l_1095[2][2]) , l_1095[2][2]), 12)) != l_1053[1]));
                        l_1099 = (~(safe_mod_func_uint8_t_u_u((l_1087 = 0xFBL), l_1027)));
                        l_1087 = ((safe_rshift_func_uint8_t_u_s(g_65, 0)) <= (((func_67((+(safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(l_1095[4][3], (safe_mod_func_int8_t_s_s((0x5332L < g_126), (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((func_67((p_35 || 0x7CC0L)) && g_193[2]), (func_107(((safe_add_func_int16_t_s_s((l_1120 = func_107((safe_lshift_func_int8_t_s_u((l_1099 = 0x42L), g_319)))), g_148[3][0][1])) & 0x8AL)) || g_714))), p_37)))))), g_306)) | g_758), g_714)), 5)))) , p_35) == g_13) , l_1121));
                        l_1099 = g_13;
                    }
                    l_937 = (safe_sub_func_uint8_t_u_u(0x82L, ((((func_79((g_253 = ((func_67(p_37) == (func_107(l_1027) | (((((l_1041 || g_148[3][0][1]) <= (g_253 , (safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((safe_add_func_uint16_t_u_u(p_35, 0x03B5L)))), l_1087)))) , 0xACCDL) , p_35) > g_319))) ^ 0x2803L)), g_446, p_37, p_37) == 0xC4CF89CAL) > 0x53DEL) , 0xDD02L) == g_1065)));
                }
                return l_1032;
            }
            else
            {
                unsigned l_1158 = 0xB6508AB7L;
                int l_1165 = 0x11DF777CL;
                unsigned char l_1182 = 9UL;
                const unsigned short l_1183 = 0x3F6FL;
                g_163 = p_37;
                for (g_126 = 0; (g_126 <= 5); g_126 += 1)
                {
                    for (g_914 = 0; g_914 < 6; g_914 += 1)
                    {
                        l_38[g_914] = 5L;
                    }
                    for (p_35 = 0; (p_35 <= 1); p_35 += 1)
                    {
                        int i;
                        l_38[g_126] = (-1L);
                        if (g_1129)
                            break;
                    }
                }
                for (g_122 = 7; (g_122 < 58); g_122++)
                {
                    unsigned l_1139 = 0xBD2236C9L;
                    int l_1145 = 1L;
                    for (g_783 = 18; (g_783 < 12); g_783--)
                    {
                        int l_1134[1];
                        int l_1140 = 0x85825EC2L;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1134[i] = 0xA715D6C1L;
                        l_1134[0] = func_107(g_93);
                        l_1140 = (safe_lshift_func_int16_t_s_s(1L, (((p_37 <= g_319) & (g_76 = (safe_sub_func_uint16_t_u_u((l_1139 != (1L >= 0x8C76A241L)), (0x39128344L & (l_1134[0] , 1L)))))) , 0x41E2L)));
                        g_163 = ((safe_mod_func_int8_t_s_s(((((((p_36 , (safe_add_func_int32_t_s_s((((func_67(((((g_126 = (0xC6BBL == (((func_67(p_37) >= func_107(p_37)) || (l_1052 = (-4L))) != ((((l_1145 = (g_914 = g_65)) == (4294967294UL >= 1UL)) | g_250) & g_13)))) < l_1086) != (-2L)) , (-1L))) != 1UL) , g_163) || p_37), 8UL))) , p_35) & 0x0DL) || p_36) , p_37) & g_1129), 1L)) & l_1032);
                        g_193[2] = ((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((!g_163), func_67((l_1158 = ((g_570 == ((l_1134[0] && (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((p_35 = 0UL) <= (safe_sub_func_uint16_t_u_u(1UL, (0xB97C8DCCL == (l_1140 = func_67(p_36)))))) < (l_1134[0] || l_1145)), 6)), g_423[0]))) == g_10[8])) , g_1061))))) || 255UL), l_1027)) , (-4L));
                    }
                }
                for (l_1158 = 0; (l_1158 == 14); l_1158 = safe_add_func_uint8_t_u_u(l_1158, 7))
                {
                    int l_1172 = 0x71EA8C0FL;
                    int l_1173[4][10][1] = {{{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL}},{{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL}},{{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL}},{{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL},{0L},{0x34A6D65EL},{0L},{0x3B3EAFBDL}}};
                    unsigned short l_1180 = 0UL;
                    short l_1181[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int l_1231 = (-1L);
                    int i, j, k;
                    if (func_69((l_1052 = (l_1032 , (l_1052 >= (p_36 == (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(func_107(l_1041), (g_170 == (((!0x1EL) > ((((g_1061 = (l_1165 = func_67(g_4))) , g_1129) <= 0x90AF47E5L) == 1UL)) < 0x64514064L)))), g_10[4]))))))))
                    {
                        unsigned l_1174 = 0UL;
                        l_1173[2][6][0] = (l_1172 = (safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(g_1065, (safe_sub_func_int32_t_s_s(l_890, p_36)))), 0xB5B4BF87L)));
                        if (l_1174)
                            continue;
                    }
                    else
                    {
                        l_1052 = ((g_914 || func_71(g_170, g_266, p_35, p_37)) < (((g_1061 & ((~((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(g_1179, 1)), ((((g_7 , l_1180) , l_1181[3]) || l_1182) | l_1183))) , 0x53L)) , 1L)) , 1UL) & p_37));
                    }
                    if ((safe_sub_func_int32_t_s_s(func_51(g_148[1][3][0], l_1186), l_1032)))
                    {
                        unsigned l_1202 = 1UL;
                        const int l_1203[4] = {0xDFD3DEF4L,0xDFD3DEF4L,0xDFD3DEF4L,0xDFD3DEF4L};
                        int i;
                        g_193[1] = g_122;
                        l_1172 = func_60((safe_lshift_func_int8_t_s_s((g_193[2] || (func_67((func_54((safe_add_func_uint32_t_u_u((65532UL & (safe_add_func_uint16_t_u_u(func_71((g_306 = (safe_lshift_func_uint8_t_u_s(((g_193[1] | g_758) ^ ((safe_mod_func_int16_t_s_s((g_7 >= (p_37 | g_122)), (l_1202 = (safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((func_107(g_170) == l_1201), l_1120)), g_714))))) ^ 4294967295UL)), 6))), p_36, p_37, l_1085), 0x2F04L))), 0xA406419BL)), p_35, g_13, g_13, l_1203[2]) >= g_1065)) ^ g_4)), g_4)), g_4, g_4);
                        l_1041 = (g_714 = (safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(p_36, 2)), 0x900F3EB5L)));
                    }
                    else
                    {
                        if (l_1208)
                            break;
                        g_714 = (((1L | ((safe_mod_func_uint32_t_u_u((((safe_add_func_int8_t_s_s((((safe_lshift_func_int16_t_s_s(g_193[3], 15)) <= (safe_lshift_func_int8_t_s_s(l_1027, g_148[3][0][1]))) , (safe_add_func_int32_t_s_s(((((g_253 & (l_1180 & g_758)) , ((g_266 = (-1L)) > (((p_37 & p_35) == g_148[3][0][1]) != p_37))) <= p_36) , p_35), 4294967290UL))), 0xBFL)) , p_35) <= g_423[0]), l_1120)) >= p_37)) >= g_423[0]) || g_148[0][3][1]);
                        l_38[2] = ((safe_add_func_int32_t_s_s(0L, func_69(g_193[1]))) , (func_107(p_37) , ((l_937 = (safe_rshift_func_uint16_t_u_u(0x771DL, 12))) >= 4UL)));
                    }
                    if (l_1173[3][7][0])
                        continue;
                    g_193[2] = (safe_lshift_func_uint16_t_u_s(0x6D46L, (safe_add_func_int32_t_s_s(l_1183, (((((l_937 | p_36) | func_79(l_1173[2][9][0], l_1180, ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(p_35, func_107((p_37 , l_1120)))) == l_1172), p_36)) <= 0xEAL), l_890)) & l_1231) | l_1052) ^ p_37)))));
                }
            }
        }
        else
        {
            char l_1237 = (-1L);
            l_38[2] = l_1085;
            g_193[1] = (g_76 = (g_266 != ((+p_37) || ((((safe_sub_func_uint16_t_u_u((p_37 = g_1234), (safe_mod_func_uint16_t_u_u(((g_1179 = 0xC972L) >= g_319), l_1237)))) < (g_267 = (safe_sub_func_uint32_t_u_u((l_1041 = p_35), (safe_sub_func_uint32_t_u_u((1UL ^ p_36), l_1120)))))) >= p_35) && 0L))));
            for (g_266 = 0; (g_266 > (-10)); g_266 = safe_sub_func_int8_t_s_s(g_266, 4))
            {
                char l_1252 = 0xA3L;
                int l_1253 = 4L;
                l_937 = g_170;
                l_1041 = (safe_mod_func_uint32_t_u_u(p_35, (((func_107(((safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((func_107((safe_rshift_func_int8_t_s_u((l_1252 = 0x00L), 6))) | (((l_937 = (g_714 || g_10[6])) ^ (l_1237 <= ((p_37 , (g_319 | ((func_67(func_67((g_13 , g_10[3]))) , l_1253) | g_10[1]))) || 4UL))) || g_4)) ^ 0xFFL), p_37)), g_122)) ^ 0x9520EA83L)) >= l_1253) > p_37) | l_856)));
            }
        }
        if (g_758)
        {
            short l_1264[7][1][1];
            unsigned short l_1298 = 0xA87BL;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1264[i][j][k] = (-1L);
                }
            }
            g_173 = (g_714 = ((safe_add_func_int8_t_s_s(((!((((safe_add_func_int32_t_s_s((p_36 != ((safe_lshift_func_int16_t_s_u((l_890 | (safe_rshift_func_uint8_t_u_s(g_250, (((g_266 >= 0L) >= g_76) , (-1L))))), 1)) <= func_107((l_937 = (safe_sub_func_int16_t_s_s(g_1179, g_122)))))), g_148[3][0][1])) | g_10[6]) , g_253) , p_36)) , l_1264[6][0][0]), 0L)) , 0L));
            l_937 = p_35;
            for (l_937 = 0; (l_937 == (-29)); l_937 = safe_sub_func_uint32_t_u_u(l_937, 4))
            {
                unsigned l_1277 = 18446744073709551615UL;
                int l_1283 = 0L;
                int l_1299 = 0L;
                if ((g_163 = (g_10[5] , (l_1264[3][0][0] , g_253))))
                {
                    unsigned l_1276 = 0x9FCCEB2DL;
                    int l_1278 = 1L;
                    for (g_1179 = 0; (g_1179 <= 0); g_1179 += 1)
                    {
                        int i;
                        l_1278 = (g_193[3] = (l_1277 = ((l_1041 = ((((func_54(g_423[g_1179], (safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s((0x2EL < (safe_lshift_func_int16_t_s_s((l_38[5] = (safe_lshift_func_uint16_t_u_u(0xABD6L, l_1041))), ((p_36 | ((g_65 > p_36) , p_35)) ^ (l_1275 = ((func_107(l_1027) >= g_193[2]) ^ 0x1BDDL)))))), 0x92L)) && l_856), p_35)), l_937, l_937, g_319) <= 0x6A0FL) >= p_36) , l_1276) & l_937)) , 8L)));
                        l_1041 = (l_1264[6][0][0] || 0xB2L);
                        return p_36;
                    }
                    l_1299 = (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((l_1283 = 6L) | (func_107(g_4) , (((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((func_69(g_193[0]) | l_1276), 15)), (safe_rshift_func_int8_t_s_u(((g_914 = (g_1065 = ((((l_1278 = p_36) , (safe_rshift_func_int16_t_s_s(0x7A23L, (safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_s((g_1297 = ((((((g_1296 = ((l_38[2] = (((l_1278 < 0x13L) , g_1234) , p_37)) | 0x26L)) < l_1278) >= p_37) & p_37) <= l_1027) , l_1275)), g_10[2])) >= g_1129) | l_1298) < l_1278), 4))))) , 5L) ^ p_37))) | g_1234), g_1234)))) == g_1129) ^ g_10[6]))), (-5L))) || g_76), l_1276));
                }
                else
                {
                    unsigned l_1312 = 18446744073709551615UL;
                    if ((safe_mod_func_uint32_t_u_u(l_1264[6][0][0], l_1264[6][0][0])))
                    {
                        unsigned l_1304 = 8UL;
                        int l_1305 = 1L;
                        g_193[2] = ((g_170 != ((safe_rshift_func_int16_t_s_u((g_423[0] >= l_1304), 0)) || l_1264[6][0][0])) == 4L);
                        if (g_1297)
                            continue;
                        l_1305 = func_51(g_126, p_35);
                    }
                    else
                    {
                        unsigned short l_1315 = 65532UL;
                        int l_1320 = (-9L);
                        g_193[1] = (safe_rshift_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((0x13L > l_1312), 1)), 0xC2C4L)) ^ func_69((g_113 = ((safe_mod_func_int16_t_s_s((l_1315 , g_570), ((p_35 = (safe_lshift_func_int16_t_s_u(((((l_1320 = (safe_mod_func_uint32_t_u_u((g_163 , 0x07B40592L), (p_36 , (g_163 || 0x27L))))) != (-1L)) >= l_1315) , l_890), l_1298))) ^ 4294967295UL))) , p_35)))) , 0L), 4));
                        if (g_76)
                            continue;
                        l_1325 = ((safe_mod_func_uint32_t_u_u(g_93, ((l_1283 , l_1027) , ((((p_36 = l_1315) , (p_35 , g_570)) , g_126) , (safe_lshift_func_uint8_t_u_u(g_267, 2)))))) == ((l_38[1] = l_1264[6][0][0]) , 2L));
                        return g_714;
                    }
                    g_76 = ((-3L) ^ ((func_67(g_126) > ((g_914 = g_253) > 0x2B52L)) && g_1129));
                    if (g_193[2])
                        continue;
                    l_1328 = ((safe_rshift_func_uint16_t_u_u((l_1299 >= func_69(g_1234)), 14)) & 0xA974F7A9L);
                }
                for (g_1234 = (-21); (g_1234 >= 10); ++g_1234)
                {
                    short l_1353[8];
                    int l_1361 = 0L;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1353[i] = 0xC67BL;
                    for (g_93 = 17; (g_93 == 16); g_93--)
                    {
                        const short l_1338 = 0xA766L;
                        int l_1354 = 0x1B8A9E2EL;
                        g_173 = p_36;
                        l_1283 = (safe_mod_func_uint8_t_u_u(((((((l_1325 = g_10[6]) && ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_u(l_1338, 10)))) , ((l_1354 = ((safe_mod_func_int32_t_s_s(p_36, ((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((l_856 < p_35), (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_306 = g_570), (g_126 | (safe_add_func_uint32_t_u_u(func_107(p_36), 4L))))), p_36)))), 14)) | g_126), l_1353[2])) | g_423[0]))) ^ p_36)) <= 0L))) , g_783) != (-1L)) || p_36) != p_36), p_37));
                    }
                    l_1361 = (safe_lshift_func_int8_t_s_s((l_1353[2] != (safe_add_func_uint16_t_u_u((g_423[0] == ((-6L) >= 6L)), (+(g_113 <= (g_170 = (safe_lshift_func_uint16_t_u_s(p_35, 1)))))))), 5));
                    if ((((l_1283 = (safe_lshift_func_int16_t_s_s((+((func_79(p_35, (l_38[0] = (safe_mod_func_uint16_t_u_u((0x2D05L || (l_1366[1][2][0] < ((((l_1361 = (((0x4AL | (((safe_rshift_func_int16_t_s_s((func_67((g_10[6] , ((((l_1353[2] , (4294967295UL <= (safe_lshift_func_int8_t_s_u(func_51((g_148[4][4][1] = l_1086), (((g_714 | g_163) <= p_35) <= g_113)), p_35)))) <= 0x36L) , l_1277) > 0xD8D13EC9L))) || 8L), 10)) && 0xEEL) && 0UL)) != g_1297) && l_1041)) == 0xA6L) >= l_1353[6]) & 0x75ECA48DL))), l_1027))), l_1353[2], l_1299) || g_76) < 252UL)), 14))) >= p_35) , 1L))
                    {
                        return p_36;
                    }
                    else
                    {
                        g_193[1] = (g_714 = (l_1361 || 65526UL));
                    }
                }
                g_714 = (0x3E71D7AAL || (safe_rshift_func_uint8_t_u_s(g_914, (p_35 > (1L && l_1264[4][0][0])))));
            }
        }
        else
        {
            unsigned l_1378 = 0x45D79E21L;
            const short l_1381 = 1L;
            l_1378 = (0x6F2FL && (((l_1027 , l_64) | ((((safe_lshift_func_int16_t_s_s(((func_69(g_65) & (p_35 | (l_38[5] = p_36))) , (safe_lshift_func_int16_t_s_s(l_1275, (0x59L > l_1377)))), p_36)) && g_319) > 0xA1L) && 0x6558L)) | 0xBAL));
            l_1325 = (g_193[2] = (l_38[4] = (safe_add_func_uint16_t_u_u((func_51(p_35, l_1381) , (g_10[6] == (safe_rshift_func_int16_t_s_u(g_914, 14)))), (((((+(l_937 = (g_1179 == ((((l_1384 != g_4) != ((p_36 , p_37) || p_35)) < 0x08B8L) , g_1179)))) <= 0UL) >= l_1366[2][3][0]) , g_16) , 1UL)))));
        }
    }
    if (((safe_sub_func_uint32_t_u_u(l_890, ((safe_unary_minus_func_uint16_t_u(g_93)) || (((((safe_lshift_func_uint8_t_u_s((g_1061 = 0x8DL), 6)) || p_35) && (l_1085 > (l_937 = 251UL))) , (g_714 = (safe_sub_func_uint16_t_u_u(g_10[6], p_37)))) != (p_37 != l_1366[1][2][0]))))) , 0x08EEF6DDL))
    {
        char l_1400[1][5] = {{0L,0L,0L,0L,0L}};
        int l_1405 = 0xB9721179L;
        int i, j;
        for (l_1325 = 0; l_1325 < 6; l_1325 += 1)
        {
            for (g_319 = 0; g_319 < 5; g_319 += 1)
            {
                for (g_914 = 0; g_914 < 2; g_914 += 1)
                {
                    g_148[l_1325][g_319][g_914] = 0x393ACC55L;
                }
            }
        }
        l_1405 = (safe_lshift_func_int16_t_s_u((g_1179 = (((((safe_rshift_func_int16_t_s_u(func_79((((safe_rshift_func_int16_t_s_s(l_856, 9)) , g_7) == (g_126 = (l_937 = (((safe_rshift_func_int8_t_s_u(((l_1120 > l_1400[0][1]) > g_267), 5)) < ((l_1400[0][4] > ((g_193[2] = (((0xCDA95212L & (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((0x54E2L < (((((g_914 & 0xC3L) ^ 0x75389E40L) >= 0x87L) == 0x97L) != p_35)) , (-7L)))), l_1366[1][2][0]))) ^ p_35) , l_1366[5][1][0])) && l_937)) || g_306)) , l_1400[0][1])))), g_122, l_1366[2][1][0], g_1129), l_1400[0][3])) , p_36) < 0xB1A4BA22L) , g_250) | l_1400[0][1])), l_1404));
    }
    else
    {
        unsigned l_1410 = 18446744073709551609UL;
        unsigned l_1419 = 5UL;
        int l_1420 = 0x2A5F2550L;
        int l_1421[9][4][4] = {{{4L,0xD30D92B2L,0x5EBC43FCL,0x2974E947L},{0xDDC2E00BL,0x42D1F1B7L,0xD5E3BA97L,(-7L)},{0xDDC2E00BL,0xCD75886EL,0x5EBC43FCL,0L},{4L,(-7L),0x7F1872A4L,0xFF1E250FL}},{{1L,0L,(-7L),0L},{0x2974E947L,0x17057C0AL,1L,0xDDC2E00BL},{0x38995CDCL,(-1L),(-1L),0x1E5F9F31L},{3L,0x2974E947L,0xCD75886EL,0x42D1F1B7L}},{{0xDDC2E00BL,0x2974E947L,0x1E5F9F31L,0L},{0x1DA3C72AL,3L,0xFFAB7000L,0xB0F87D69L},{3L,0L,0x2974E947L,1L},{1L,0xD5E3BA97L,(-1L),5L}},{{0xCD75886EL,0L,0x17057C0AL,9L},{(-1L),0L,0L,(-1L)},{1L,2L,(-7L),0x61485401L},{0L,0xB0F87D69L,0xCD75886EL,0x32D19FAAL}},{{0x28AC965FL,(-9L),0x42D1F1B7L,0x32D19FAAL},{0x83F2C6DAL,0xB0F87D69L,0xD30D92B2L,0x61485401L},{3L,2L,0L,(-1L)},{2L,0L,0xE44808DFL,9L}},{{0x20B346FFL,0L,3L,5L},{0L,0xD5E3BA97L,0x7F1872A4L,1L},{0xF3681996L,0L,(-1L),0xB0F87D69L},{(-9L),3L,4L,0L}},{{(-4L),0x2974E947L,0xDA0176A5L,0x42D1F1B7L},{0x42D1F1B7L,(-3L),(-7L),3L},{0x61485401L,1L,0x32D19FAAL,(-7L)},{(-1L),0xD30D92B2L,(-7L),0x1E5F9F31L}},{{2L,0x5EBC43FCL,2L,0x6A2DB564L},{1L,(-6L),(-9L),3L},{(-1L),6L,0x20B346FFL,(-6L)},{4L,1L,(-1L),0L}},{{0L,0xE1DD3D10L,0x38995CDCL,9L},{0xE44808DFL,0x1DA3C72AL,0xF3681996L,0xF42E744EL},{0xF3681996L,0xF42E744EL,3L,6L},{(-1L),0x61485401L,0x42D1F1B7L,0x20B346FFL}}};
        int l_1422 = 0xE1FED900L;
        unsigned short l_1437[5];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_1437[i] = 3UL;
        l_1422 = (((l_1421[4][2][1] = ((g_250 , ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(p_36, (((((p_35 , ((l_1120 <= ((func_107(l_1410) & ((l_1420 = ((safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_1410, ((safe_lshift_func_uint8_t_u_s((l_38[3] = ((safe_add_func_uint32_t_u_u((p_35 = l_64), 8UL)) != 4UL)), p_36)) >= l_1419))), 0x03L)) > 65530UL)) != g_193[1])) > 0x88L)) , 3L)) < l_1085) || p_37) && p_37) , l_1410))), 14)) != p_36)) ^ l_1404)) == l_1419) || g_306);
        if (((func_51(p_37, ((~(((l_1422 , 0x3DB9L) != g_16) > (g_1061 = g_10[6]))) == (g_1065 > (safe_rshift_func_int16_t_s_s((l_1421[4][2][1] = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((p_35 & g_1234), (g_1296 , g_253))), 0))), 5))))) != g_10[6]) | l_1419))
        {
            unsigned l_1429 = 0UL;
            int l_1432 = 0x6A7B556FL;
            unsigned short l_1438 = 1UL;
            l_1429 = g_267;
            l_1432 = (safe_lshift_func_int8_t_s_s(g_266, l_1429));
            l_1422 = (safe_mod_func_uint16_t_u_u((0xF2DDL > ((l_1438 = ((l_1420 = p_37) > ((l_1437[1] = func_71(l_38[1], g_113, (g_783 = (((l_1404 , ((safe_add_func_uint8_t_u_u(((l_937 = (g_783 , ((p_35 || g_253) , p_36))) != 0x0ECEL), g_93)) == (-6L))) != 0xD2541FA0L) | 1L)), l_38[1])) != 0x5326C8F1L))) >= g_7)), 1UL));
        }
        else
        {
            unsigned short l_1439 = 65535UL;
            int l_1451 = (-1L);
            l_937 = func_107(func_54(g_10[6], (l_1421[4][2][1] = (l_1439 == l_1366[7][3][0])), func_51((safe_rshift_func_int16_t_s_u((g_1179 = ((((((l_1422 = ((((l_1442 | (func_107((p_37 = ((safe_sub_func_uint8_t_u_u((func_51((((l_1420 = (safe_lshift_func_int8_t_s_u(0x51L, 4))) > g_76) | (((safe_add_func_int32_t_s_s(((l_890 > (safe_lshift_func_uint8_t_u_s((l_1451 = g_783), ((func_107(p_35) || 0x2AFEL) <= p_35)))) > (-1L)), 4294967295UL)) && l_1451) & l_1439)), g_714) <= (-2L)), g_1296)) > (-2L)))) >= 1L)) || 0x8192L) || g_13) < l_1437[4])) , g_267) | l_64) | p_36) || p_36) <= p_36)), 7)), g_1452), p_36, l_1439));
            for (g_306 = 18; (g_306 == 44); ++g_306)
            {
                const unsigned l_1456[2][2][1] = {{{0x7A9E7D70L},{0x7A9E7D70L}},{{0x7A9E7D70L},{0x7A9E7D70L}}};
                int l_1478 = 0x32A3DA9FL;
                int i, j, k;
                l_1325 = 5L;
                if (l_1455)
                    continue;
                if (l_1456[0][0][0])
                    continue;
                if ((safe_add_func_uint32_t_u_u(0x9612FD6CL, (safe_sub_func_uint8_t_u_u((l_1456[0][0][0] == l_1437[4]), (safe_add_func_int32_t_s_s(((l_1456[0][0][0] , (((func_107(l_1456[0][0][0]) == (safe_rshift_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(p_36, g_16)) < (g_1296 >= 0xB91D9AFCL)) > 0x79F9EFE0L), 5))) , l_1437[1]) , l_1456[0][1][0])) < l_1437[1]), p_37)))))))
                {
                    for (g_1179 = 0; (g_1179 < (-6)); --g_1179)
                    {
                        if (g_306)
                            break;
                        if (p_37)
                            continue;
                    }
                    for (g_173 = 0; (g_173 >= 26); g_173 = safe_add_func_uint32_t_u_u(g_173, 8))
                    {
                        return g_914;
                    }
                }
                else
                {
                    char l_1471 = 9L;
                    l_1471 = g_4;
                    l_1325 = (safe_rshift_func_int8_t_s_u((l_1451 > (0L & (p_36 != g_714))), l_1456[0][0][0]));
                    if (p_35)
                        break;
                    l_937 = (((l_1478 = (g_193[2] = ((func_79(g_714, (((-1L) > 0x0A35L) != ((g_253 == p_35) & (func_67(g_193[2]) < ((safe_add_func_int8_t_s_s((((((p_36 , ((func_107((g_783 = (safe_sub_func_uint8_t_u_u((((+g_570) | p_36) ^ 0x332DL), g_914)))) | (-7L)) == l_1456[0][0][0])) || p_36) , 0xE2F51847L) & 4294967293UL) ^ g_250), 0x6EL)) , 0UL)))), p_37, p_37) == g_570) ^ g_758))) <= p_37) , 1L);
                }
            }
        }
    }
    return p_37;
}







static char func_51(const int p_52, const short p_53)
{
    unsigned l_826[7];
    int l_829 = 0x3D414EFDL;
    int l_830 = 0xBFEC42ABL;
    int l_831[8][9] = {{0L,(-1L),(-4L),0xD629F6C5L,4L,0x85A56DFDL,3L,(-4L),0x503B9B22L},{(-1L),(-4L),(-3L),1L,3L,(-1L),(-4L),0x4A12C313L,(-4L)},{(-1L),1L,(-3L),(-3L),1L,(-1L),4L,1L,0x86194ADAL},{7L,0L,(-4L),1L,(-1L),1L,(-1L),(-1L),0L},{0x503B9B22L,0x3097314EL,0x85A56DFDL,0x18FBC5C9L,0xC5461BB2L,0x5582AA7EL,4L,0x503B9B22L,(-1L)},{0L,(-1L),(-1L),0x5582AA7EL,0x3097314EL,0xB0D1D508L,(-4L),(-4L),0xB0D1D508L},{1L,(-1L),0x7796DAF0L,(-1L),1L,(-1L),3L,0x86194ADAL,(-1L)},{(-4L),0x3097314EL,0L,(-3L),4L,1L,0L,0L,0x4A12C313L}};
    char l_834 = 0x7FL;
    int i, j;
    for (i = 0; i < 7; i++)
        l_826[i] = 0xBF25CD35L;
    for (g_126 = 0; g_126 < 6; g_126 += 1)
    {
        for (g_446 = 0; g_446 < 5; g_446 += 1)
        {
            for (g_306 = 0; g_306 < 2; g_306 += 1)
            {
                g_148[g_126][g_446][g_306] = 0xFF76AFE0L;
            }
        }
    }
    l_831[0][6] = (p_53 , (safe_sub_func_int16_t_s_s((l_826[2] < (l_830 = func_60(((p_52 ^ 0xD6L) > l_826[5]), (l_829 = ((safe_mod_func_int16_t_s_s(l_826[2], p_52)) > (1UL > 0x41028687L))), p_53))), l_826[2])));
    l_831[4][5] = ((func_67((p_52 | (l_831[0][6] = g_16))) || ((((func_79(g_306, ((l_831[7][4] = (g_267 = (4L & p_53))) == (l_830 = l_829)), (safe_rshift_func_int8_t_s_s(p_53, 1)), g_122) , l_826[2]) <= g_446) == 0xC4L) ^ g_93)) ^ l_834);
    return p_53;
}







static int func_54(int p_55, int p_56, int p_57, unsigned char p_58, const unsigned p_59)
{
    unsigned l_813 = 0x11DEE868L;
    int l_814 = 1L;
    unsigned l_819 = 0x8A73411CL;
    p_57 = (((0xACL && (l_813 ^ p_56)) | 0xBB1E1E28L) | ((l_814 = (l_813 == l_813)) , func_60((safe_rshift_func_int16_t_s_s(((((7L || p_57) < (g_193[2] = (l_814 = ((safe_add_func_uint8_t_u_u((func_69(p_58) != 0x60DFL), l_813)) > p_58)))) & 1L) && l_819), 14)), l_819, p_58)));
    p_56 = (safe_rshift_func_uint8_t_u_s((p_58 = p_58), (l_814 = ((safe_lshift_func_uint8_t_u_s(255UL, 5)) ^ l_819))));
    return p_56;
}







static int func_60(int p_61, short p_62, unsigned short p_63)
{
    unsigned l_66 = 0x841EC3D2L;
    int l_812 = 0x3DD510D3L;
    l_66 = g_7;
    l_812 = (func_67(((func_69((((p_62 = l_66) == 0xAE23L) == func_71(g_10[1], (g_76 = p_63), p_63, p_63))) >= (g_4 && l_66)) >= (-8L))) == g_13);
    return p_63;
}







static char func_67(char p_68)
{
    g_193[3] = (g_306 , p_68);
    return g_65;
}







static short func_69(unsigned p_70)
{
    int l_793 = (-7L);
    int l_800 = 0x546595BAL;
    unsigned l_801 = 3UL;
    int l_802 = 0xC48DD7C5L;
    g_76 = (-1L);
    if (func_79(p_70, ((~(((l_800 = (safe_mod_func_int32_t_s_s((g_193[1] = func_71((l_801 = (safe_lshift_func_int8_t_s_u((l_793 , ((func_107(((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(p_70, p_70)) < func_79(p_70, (l_793 = g_10[6]), (((((g_113 = ((0xD8L == (g_446 = l_800)) > ((g_423[0] = p_70) , 0x65A8L))) , 0x7C853561L) < 0x20E9CB7FL) ^ (-1L)) <= p_70), g_122)) | g_570), (-5L))), 1)) >= 0x23A18B29L)) == 6UL) >= 0x4A1AL)), g_13))), l_800, g_7, l_800)), l_800))) , g_93) , g_714)) < l_802), p_70, l_802))
    {
        int l_811 = 3L;
        l_802 = (((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((0xCEB488C4L == ((p_70 || (safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((p_70 > func_79(p_70, ((g_306 = (g_783 = (((func_79(l_811, (g_193[1] > (l_811 & 0UL)), l_793, g_758) > l_801) , 0x62L) , l_800))) == p_70), g_4, l_800)), g_10[8])) , g_113) != g_423[0]), p_70))) || (-1L))), 2)), p_70)) & l_811) <= g_10[4]) , g_126) , p_70);
    }
    else
    {
        return g_570;
    }
    return l_801;
}







static unsigned short func_71(unsigned short p_72, short p_73, unsigned short p_74, char p_75)
{
    unsigned l_91 = 0xEE7416AFL;
    int l_92 = 0x43E1243BL;
    unsigned char l_445 = 0x96L;
    int l_468[10] = {(-5L),(-5L),(-1L),(-5L),(-1L),(-6L),(-6L),(-1L),(-5L),(-1L)};
    const unsigned l_514 = 0UL;
    unsigned l_537 = 0xEF48C939L;
    unsigned l_709 = 1UL;
    int i;
    for (g_65 = 0; (g_65 >= 46); g_65 = safe_add_func_uint16_t_u_u(g_65, 1))
    {
        char l_84 = 8L;
        int l_430 = (-5L);
        int l_431[3];
        int l_513 = 6L;
        short l_569 = 0xF104L;
        int l_625[10][3] = {{(-1L),(-1L),0L},{1L,1L,4L},{(-1L),(-1L),0L},{1L,1L,4L},{(-1L),(-1L),0L},{1L,1L,4L},{(-1L),(-1L),0L},{1L,1L,4L},{(-1L),(-1L),0L},{1L,1L,4L}};
        short l_711 = 0xE61FL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_431[i] = 0x8706C081L;
        if ((((((func_79((l_84 , p_73), (g_93 = ((l_84 ^ (-9L)) ^ (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((l_84 , (safe_add_func_int16_t_s_s(((g_4 <= (l_91 <= p_75)) == (l_92 = l_84)), p_72))) & 1UL), l_91)), p_75)))), g_13, l_84) | 2UL) , g_7) && p_73) && 65535UL) ^ g_13))
        {
            int l_404[4];
            unsigned char l_408 = 0x47L;
            int l_507 = 0xF9D863FBL;
            unsigned l_515 = 0x4D643D6FL;
            int l_601 = 0xF26BD199L;
            int i;
            for (i = 0; i < 4; i++)
                l_404[i] = 5L;
            if (func_79(l_92, l_404[0], p_75, (safe_sub_func_int16_t_s_s(((p_75 , (p_75 == g_266)) > p_74), p_73))))
            {
                unsigned l_407[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_407[i] = 0xB12AE87CL;
                l_407[1] = p_74;
                l_408 = 0xB3DDA44FL;
            }
            else
            {
                unsigned l_411 = 0x97AE9716L;
                unsigned l_438 = 18446744073709551615UL;
                int l_456[5][6] = {{6L,6L,(-8L),0xD4C2E39CL,(-8L),6L},{(-8L),0x4AF0CEFFL,0xD4C2E39CL,0xD4C2E39CL,0x4AF0CEFFL,(-8L)},{6L,(-8L),0xD4C2E39CL,(-8L),6L,6L},{1L,(-8L),(-8L),1L,0x4AF0CEFFL,1L},{1L,0x4AF0CEFFL,1L,(-8L),(-8L),1L}};
                unsigned l_479 = 0xE8CAE067L;
                int l_512 = (-8L);
                int i, j;
                g_76 = (65533UL & (p_74 && (safe_rshift_func_uint8_t_u_u(((((l_84 & g_113) & 0x5391L) == l_411) , p_72), (safe_sub_func_int32_t_s_s(0L, (g_253 || l_411)))))));
                if (((l_84 , (safe_mod_func_int32_t_s_s((g_76 = 0x9F9DAF10L), ((0x4CB1L & ((safe_lshift_func_int8_t_s_u(1L, 3)) > (safe_lshift_func_int16_t_s_u(func_107((func_107(((0x7225L && (g_126 | ((g_266 > ((((g_170 = (safe_unary_minus_func_uint16_t_u(0UL))) != (g_319 & p_75)) | 0xADL) || 8UL)) != g_423[0]))) && p_74)) & 0x55B2L)), 12)))) || p_73)))) , p_75))
                {
                    int l_432[10];
                    int l_435 = 0x836A69DAL;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_432[i] = (-2L);
                    g_193[0] = p_75;
                    l_432[6] = ((safe_mod_func_int8_t_s_s((func_79((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((g_423[0] != (l_430 = 9UL)), (0xD7L & (p_73 == (l_92 = g_76))))) || l_411), l_404[1])), (l_431[0] = g_423[0]), p_72, g_173) , l_411), 0x69L)) || p_73);
                    g_193[1] = p_72;
                    l_431[0] = (((safe_add_func_uint8_t_u_u(((0xFF70L != ((func_79(p_73, (l_435 = p_73), (((((((safe_rshift_func_uint16_t_u_u(l_438, 3)) >= (g_250 = ((((l_411 , (safe_mod_func_uint16_t_u_u(g_163, p_75))) > ((+(safe_rshift_func_uint8_t_u_u((g_446 = (((((p_73 < (((g_170 = func_107((l_445 = (safe_add_func_uint16_t_u_u(((g_93 <= l_432[5]) > g_423[0]), p_73))))) < p_72) & l_431[1])) >= g_7) , 0xE5L) == g_76) , 0x80L)), g_10[6]))) != 0x83A2612EL)) , 0x513DE392L) , p_73))) || 0x2EB6356CL) | 0xB29BL) | p_73) <= p_72) , p_74), g_253) || 0UL) != g_4)) || l_431[1]), g_93)) , l_432[7]) , 7L);
                }
                else
                {
                    unsigned short l_453 = 0x0680L;
                    int l_482 = 5L;
                    int l_483 = 0xD5EFAAA2L;
                    short l_525[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_525[i] = (-1L);
                    for (g_267 = 0; (g_267 > 4); g_267 = safe_add_func_int32_t_s_s(g_267, 6))
                    {
                        int l_463 = 0L;
                        int l_466 = 0x6ADAA7D1L;
                        int l_467 = 0x1BE9C3BFL;
                        g_193[3] = 0L;
                        l_468[7] = ((safe_mod_func_int32_t_s_s(((!((+((safe_add_func_uint32_t_u_u(((l_92 = l_453) , ((+(safe_sub_func_uint16_t_u_u(l_430, (((g_306 && (l_431[2] = func_107((l_456[0][1] = p_74)))) != (safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_267, (safe_mod_func_int32_t_s_s((l_463 == g_4), (l_467 = (l_466 = (safe_add_func_int32_t_s_s(l_411, l_463)))))))), g_126))) || 6L)))) || l_453)), 0L)) , g_16)) ^ g_250)) != l_463), g_10[6])) , 0x018B13D0L);
                    }
                    for (l_91 = 0; (l_91 <= 3); l_91 += 1)
                    {
                        int i;
                        l_483 = ((g_266 = 0x2AL) < (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_uint16_t_u_u(((((l_404[l_91] == func_107(l_468[(l_91 + 3)])) & ((p_75 = g_193[2]) == 0x86L)) && (safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u((g_7 && ((l_479 < (l_482 = (p_75 = func_107(((safe_rshift_func_int8_t_s_s(p_72, 0)) , p_74))))) == 0xC49CCF56L)), l_468[1])) , p_73), 3))) > l_404[l_91]), 4)) <= 0x839D2C61L) , p_72), g_193[2])));
                        l_431[0] = (safe_lshift_func_int16_t_s_u(((p_74 = p_74) | (p_75 ^ ((l_482 > (safe_add_func_int16_t_s_s((~(l_483 = (p_75 != (((l_430 = g_446) , (safe_lshift_func_uint8_t_u_s(p_75, ((p_73 <= (safe_sub_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((248UL >= l_438) > 0x6B6E503AL), l_453)) , g_423[0]), g_113))) < p_72)))) < p_72)))), p_75))) , g_250))), 5));
                        l_507 = (l_404[1] , ((safe_add_func_int32_t_s_s(p_73, (~func_79(l_456[0][1], (g_250 , ((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((p_74 = (safe_sub_func_uint8_t_u_u(g_93, 0x8EL))), (g_76 & (safe_add_func_int16_t_s_s(p_73, (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u(func_107((g_319 = (0x9C04F628L != p_73))))), 1UL))))))), 6)) , 1UL)), p_72, l_438)))) & 4294967294UL));
                        if (g_148[3][0][1])
                            continue;
                    }
                    if (((p_73 = func_107(g_267)) ^ (safe_mod_func_uint32_t_u_u(((((l_430 = (l_438 | ((safe_rshift_func_uint8_t_u_s((p_72 == (((65535UL & (((l_482 = (l_483 = l_468[7])) , l_408) == p_74)) | (l_512 = g_13)) | l_513)), 1)) != p_72))) > l_514) <= p_74) | 0x2FB3L), g_163))))
                    {
                        l_468[6] = g_65;
                    }
                    else
                    {
                        int l_523 = (-1L);
                        int l_524 = (-1L);
                        int l_526 = 0x3BC88870L;
                        if (l_515)
                            break;
                        l_526 = ((p_75 > (!l_408)) , (safe_unary_minus_func_int32_t_s((((g_173 >= (safe_add_func_uint32_t_u_u((l_411 || (((safe_rshift_func_int8_t_s_s((p_75 = (g_446 != (safe_mod_func_uint8_t_u_u((l_524 = (l_523 = (g_193[0] < ((func_107(g_148[0][3][1]) ^ (l_456[4][0] < g_13)) <= p_75)))), l_525[1])))), l_431[1])) < 1UL) >= p_73)), l_512))) == p_74) ^ g_319))));
                    }
                }
            }
            for (g_126 = 0; (g_126 <= (-2)); --g_126)
            {
                unsigned char l_540 = 253UL;
                int l_551 = 0xE57011C1L;
                if (func_107((safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((func_107((((g_148[3][0][1] = func_107(l_431[0])) , (((((safe_sub_func_int32_t_s_s((l_507 = (safe_add_func_uint8_t_u_u((l_537 < (func_107((l_431[0] = (safe_mod_func_int32_t_s_s((((((g_65 , g_193[2]) <= l_540) | (safe_add_func_int16_t_s_s(func_107(g_193[2]), ((((((safe_lshift_func_int8_t_s_u((p_74 != 0xEC3B35B3L), p_74)) || g_13) > p_75) && 1UL) | g_126) && g_253)))) | 4294967294UL) != p_72), 1UL)))) == (-1L))), 0UL))), l_540)) > 6UL) > p_75) , l_507) & l_540)) ^ l_515)) | p_73), 1UL)) , p_72), g_13))))
                {
                    int l_547 = 0x648F4F1DL;
                    int l_566 = 0x8D1AD269L;
                    for (l_430 = 6; (l_430 >= 2); l_430 -= 1)
                    {
                        return l_445;
                    }
                    if (p_72)
                        continue;
                    for (p_74 = 0; (p_74 >= 59); p_74++)
                    {
                        unsigned l_550 = 18446744073709551615UL;
                        l_547 = p_75;
                        l_551 = ((((p_72 >= (7UL || (l_430 = g_319))) & l_547) , ((p_72 <= (safe_sub_func_uint16_t_u_u((p_75 , ((l_540 < func_107(g_266)) || l_513)), p_74))) , l_550)) , l_507);
                        g_193[2] = (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((g_570 = (((~(g_122 ^ ((safe_mod_func_int16_t_s_s(((g_267 = 0x950DL) || (safe_rshift_func_int8_t_s_u((p_75 | ((safe_lshift_func_int8_t_s_s((((p_74 || (safe_mod_func_int16_t_s_s(g_193[2], (safe_rshift_func_int8_t_s_u((l_566 > (((g_446 = 253UL) | (g_170 = (l_547 = p_75))) ^ (safe_add_func_int16_t_s_s(g_193[2], g_113)))), 4))))) , l_514) | l_431[2]), 5)) < 0x1CL)), l_540))), 0x7D89L)) && p_74))) , l_468[7]) != l_569)), p_73)), (-1L)));
                        if (p_74)
                            continue;
                    }
                }
                else
                {
                    int l_581[4] = {0L,0L,0L,0L};
                    unsigned l_612 = 0x3795797BL;
                    int i;
                    if (((safe_lshift_func_int8_t_s_u((g_93 = (-1L)), 4)) >= ((((((safe_lshift_func_int8_t_s_s(g_10[6], 0)) < g_250) ^ g_319) , 0x654DL) || (safe_sub_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((g_267 = l_581[0]), (g_10[6] != (safe_mod_func_uint32_t_u_u((g_65 < (p_72 , p_73)), 1L))))), l_430)) > g_253), g_266))) >= l_431[2])))
                    {
                        int l_596 = 1L;
                        int l_613 = (-1L);
                        g_163 = (g_193[2] = ((+(safe_add_func_int32_t_s_s((g_76 = ((g_170 = (safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(g_16, 2)), (4294967294UL != (l_430 = 0x2B5D3AB3L)))), 4UL))) < p_72)), l_445))) , (l_596 = (l_507 = (p_72 , (safe_mod_func_int8_t_s_s(func_107(g_4), 246UL)))))));
                        g_76 = (safe_sub_func_int16_t_s_s(0x1AE4L, func_107((p_72 = ((safe_lshift_func_int8_t_s_s(((p_73 = 5L) != ((l_601 , 0xE7L) >= l_596)), (safe_mod_func_int32_t_s_s(((g_4 & (l_613 = (safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((func_107((g_319 = (safe_mod_func_uint16_t_u_u((func_107(func_107((l_431[0] = l_612))) & 0xF0A1L), (-5L))))) | g_13), l_540)) != 3UL), 65529UL)), l_540)))) > p_72), p_74)))) , l_601)))));
                        l_431[2] = l_551;
                        l_431[0] = g_163;
                    }
                    else
                    {
                        char l_620 = (-8L);
                        l_431[1] = (((((p_74 < (((func_107((g_319 = g_76)) >= (((l_507 = (g_16 < (((((0x37E3L != g_65) <= (l_404[1] , (safe_mod_func_uint8_t_u_u((~0x24L), (safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u((g_446 = 0xA9L), g_193[2])) == g_10[6]), 0x745DF2E2L)))))) & l_620) & p_74) && l_540))) , g_163) , (-3L))) < l_551) && 0UL)) , g_253) ^ g_250) >= 65535UL) , 0L);
                    }
                    if (g_126)
                        continue;
                    l_430 = ((g_423[0] , p_74) , g_163);
                    for (p_74 = 0; (p_74 <= 3); p_74 += 1)
                    {
                        int i;
                        g_193[p_74] = l_581[p_74];
                        l_581[p_74] = l_581[p_74];
                        l_507 = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_84, 9)), l_581[0]));
                    }
                }
                l_430 = g_10[6];
                l_551 = p_72;
                if (l_625[2][2])
                    break;
            }
        }
        else
        {
            int l_637 = 0x4C30B2CFL;
            g_193[2] = (l_92 = (((g_4 <= ((safe_rshift_func_int8_t_s_s(l_431[2], 3)) , (safe_mod_func_int8_t_s_s(5L, (safe_mod_func_uint8_t_u_u((+1UL), ((func_79((safe_unary_minus_func_int8_t_s((g_10[3] | (g_319 == (safe_add_func_uint16_t_u_u(l_637, func_107(((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(g_113, (safe_lshift_func_uint8_t_u_s((p_72 != g_10[7]), 4)))) || 0x0917L), g_193[2])) , 65526UL)))))))), p_73, p_73, p_73) || p_72) , l_637))))))) | g_423[0]) , p_73));
        }
        for (g_253 = 0; (g_253 <= 50); g_253++)
        {
            unsigned l_654 = 0x19A0B555L;
            int l_675 = 1L;
            unsigned short l_726 = 0xF7A9L;
            unsigned l_763[5][4][3] = {{{0x512D7614L,0xFC770864L,1UL},{0xA4D6C480L,1UL,18446744073709551608UL},{0xA4D6C480L,0xA4D6C480L,1UL},{0x512D7614L,0x21C64C17L,0xA97FD727L}},{{1UL,0xCD18AD6AL,0UL},{0xB171E803L,1UL,1UL},{0xD8C10942L,1UL,0UL},{0xE504678FL,0xA4D6C480L,0xE504678FL}},{{3UL,0xA4D6C480L,18446744073709551613UL},{18446744073709551613UL,0UL,4UL},{0xA97FD727L,0UL,0xA97FD727L},{0UL,0xA4D6C480L,0xB171E803L}},{{1UL,1UL,0xA4D6C480L},{0x21C64C17L,18446744073709551613UL,0UL},{18446744073709551613UL,0x98A2F33FL,18446744073709551615UL},{0x21C64C17L,18446744073709551615UL,0xA97FD727L}},{{1UL,0UL,1UL},{0UL,1UL,0xD8C10942L},{0xA97FD727L,0xD8C10942L,0xD8C10942L},{18446744073709551613UL,18446744073709551608UL,1UL}}};
            int i, j, k;
            for (g_163 = 0; (g_163 == 1); g_163 = safe_add_func_uint16_t_u_u(g_163, 5))
            {
                unsigned l_676 = 0xC78D0EB0L;
                g_193[2] = (safe_rshift_func_int8_t_s_u((((g_319 = (l_676 = (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(l_654, ((safe_sub_func_int8_t_s_s(((((p_74 < ((p_75 = (safe_unary_minus_func_uint16_t_u(func_107((((p_75 | (g_253 > (safe_mod_func_int32_t_s_s(((((safe_unary_minus_func_int8_t_s(((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_73, (safe_mod_func_int32_t_s_s(func_107((((p_74 , (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((g_126 = (safe_add_func_uint8_t_u_u(4UL, (l_675 = p_74)))), ((-2L) && 4L))), g_193[1]))) <= 7UL) , l_625[2][2])), g_570)))), p_75)), g_250)) , p_73))) , p_73) | g_148[3][0][1]) , p_72), 2L)))) & 1L) , g_266))))) != l_514)) >= g_193[3]) || p_72) >= g_173), 0xBFL)) , 0x8F614D93L))), g_253)))) | 0x2EF0L) || 0xFC89L), g_10[6]));
                for (g_306 = (-15); (g_306 <= 34); g_306++)
                {
                    return g_170;
                }
                if (l_514)
                    continue;
                return p_75;
            }
            l_430 = (l_675 = 1L);
            g_163 = ((((p_72 = (safe_mod_func_uint32_t_u_u((g_148[3][0][1] < 0xB013L), func_107(l_468[2])))) & (p_73 = (0x08C5L & (!((((((g_306 <= p_73) && p_74) && p_74) , (-1L)) && l_654) <= g_266))))) && l_91) , (-1L));
            if (l_654)
            {
                char l_698[2];
                int l_710 = (-1L);
                int i;
                for (i = 0; i < 2; i++)
                    l_698[i] = 0xF4L;
                if (g_122)
                {
                    int l_683 = 5L;
                    for (g_319 = 0; (g_319 != 28); g_319++)
                    {
                        char l_688 = 0x1DL;
                        int l_691[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_691[i] = 0x8905217FL;
                        g_173 = l_683;
                        l_698[1] = (0x78E11249L < ((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((l_688 && func_107((((safe_sub_func_uint8_t_u_u((l_691[0] = l_675), ((l_468[8] = (safe_mod_func_uint32_t_u_u((g_250 = l_430), 0xD86EBCB6L))) == l_683))) > ((safe_mod_func_int8_t_s_s(0x01L, (safe_lshift_func_int8_t_s_u(p_74, ((p_75 && 1UL) , 0x74L))))) | (-7L))) ^ g_319))), l_688)) ^ p_74), p_73)) , 0L));
                        return g_193[3];
                    }
                }
                else
                {
                    unsigned l_703[3];
                    int l_704 = 0x4A49F937L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_703[i] = 0x380E6745L;
                    l_675 = g_16;
                    l_711 = ((l_710 = (0x5A9BL && (safe_mod_func_int32_t_s_s(((l_704 = l_703[0]) == (g_7 == (func_107(p_73) == ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_709, (g_250 != l_513))), l_703[0])) || l_698[1])))), l_698[1])))) , g_13);
                }
                l_431[0] = (func_107((g_319 = 65530UL)) , ((g_267 && (((p_74 = g_76) >= (g_193[1] >= (((func_107((p_72 = ((l_710 = 0xF158FA73L) ^ (0UL != ((((g_113 & l_513) , g_148[0][1][0]) || g_65) < 1UL))))) , g_714) , g_170) ^ g_173))) | l_698[0])) , (-1L)));
            }
            else
            {
                unsigned char l_727 = 0x15L;
                int l_739 = 0L;
                for (l_84 = 0; (l_84 < (-5)); l_84 = safe_sub_func_int16_t_s_s(l_84, 8))
                {
                    int l_740 = 0L;
                    int l_745[10] = {0L,0x5B46791AL,0L,(-1L),(-1L),0L,0x5B46791AL,0L,(-1L),(-1L)};
                    int i;
                    for (g_93 = 8; (g_93 >= 0); g_93 -= 1)
                    {
                        unsigned l_732[2][6][1] = {{{0x2EE6366FL},{0x85648B64L},{0x2EE6366FL},{0x85648B64L},{0x2EE6366FL},{0x85648B64L}},{{0x2EE6366FL},{0x85648B64L},{0x2EE6366FL},{0x85648B64L},{0x2EE6366FL},{0x85648B64L}}};
                        int i, j, k;
                        l_468[(g_93 + 1)] = (safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((p_73 = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_468[g_93], (((~(safe_unary_minus_func_uint16_t_u(l_726))) || p_73) , (g_170 = ((((p_72 | (-1L)) >= (-5L)) & g_113) != p_74))))), l_431[0])) || p_72)), 7)), (-6L)));
                        l_675 = (func_107(func_107(((l_727 || (safe_sub_func_uint8_t_u_u((((65535UL ^ (safe_rshift_func_uint8_t_u_u(l_727, p_74))) == (g_319 = 65530UL)) | ((((((g_266 = ((l_732[1][5][0] = p_72) & func_107((safe_lshift_func_uint16_t_u_u(((g_193[2] = (p_72 && 0xB1L)) < 1UL), g_570))))) , l_732[1][5][0]) >= 0xDF2AF7EDL) >= l_84) | p_74) , p_74)), 0x91L))) > g_570))) > g_93);
                        g_76 = (l_468[g_93] = (l_431[2] = (func_107(p_74) == g_122)));
                        l_468[4] = (safe_add_func_int32_t_s_s((l_740 = (safe_add_func_uint8_t_u_u((l_739 = func_107(g_76)), (p_75 = 8L)))), ((l_727 == (g_319 = g_126)) & (g_423[0] >= (((l_431[0] , (p_74 == (g_446 = (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s(p_74, l_84)), l_745[8]))))) < g_148[3][2][0]) , g_148[3][0][0])))));
                    }
                }
                for (g_714 = 0; (g_714 != (-8)); g_714 = safe_sub_func_int8_t_s_s(g_714, 3))
                {
                    const int l_750 = 4L;
                    int l_757 = 0x963D1DC2L;
                    for (g_250 = 0; (g_250 <= 3); g_250 += 1)
                    {
                        int i;
                        if (g_193[g_250])
                            break;
                        g_193[g_250] = g_193[g_250];
                        if (p_74)
                            break;
                        g_173 = ((p_72 <= (safe_add_func_int8_t_s_s(g_446, l_750))) , (safe_mod_func_int8_t_s_s(g_267, ((((!((l_739 & func_107(func_107(p_72))) && (func_107(((g_758 = ((l_757 = ((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_84 , 0x74C4L), 0UL)), p_73)) < g_306)) && p_74)) >= p_73)) == l_739))) , (-1L)) & g_122) ^ l_750))));
                    }
                    for (p_75 = (-22); (p_75 >= (-14)); p_75 = safe_add_func_uint8_t_u_u(p_75, 3))
                    {
                        return l_654;
                    }
                    for (g_93 = (-14); (g_93 >= (-21)); --g_93)
                    {
                        g_193[1] = g_193[2];
                        if (g_319)
                            continue;
                        g_193[0] = (0UL || g_4);
                    }
                    l_763[1][0][2] = ((p_73 = l_727) ^ (l_675 = g_13));
                }
                if ((((((((safe_unary_minus_func_int32_t_s(g_7)) > ((l_675 = l_625[2][2]) == ((safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((g_758 , p_75), (g_319 = (g_10[4] && (((func_107((safe_lshift_func_int16_t_s_u((l_739 = g_13), 5))) && 0x1D25D56BL) , g_163) , 0x4E5A01DBL))))) == 0x6D4CL) != 252UL), 5)) > p_75))) | g_423[0]) <= 8L) || p_73) == l_727) , l_569))
                {
                    unsigned char l_777 = 0x65L;
                    int l_782 = 0x11223DDDL;
                    l_675 = (g_423[0] > (g_163 = (func_107((func_107(l_91) == p_75)) <= (safe_sub_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((((g_783 = ((l_782 = ((g_250 = 1UL) < ((l_777 , (safe_lshift_func_uint16_t_u_s(0xAAB7L, ((safe_add_func_uint8_t_u_u(g_163, l_727)) , 0xFCADL)))) , l_727))) <= g_122)) , p_73) , l_709) & g_170) , 0UL) != p_72), l_726)), g_714)))));
                    if (g_267)
                        break;
                    for (l_537 = 0; (l_537 <= 2); l_537 += 1)
                    {
                        int i;
                        l_468[(l_537 + 5)] = l_431[l_537];
                        if (l_468[(l_537 + 5)])
                            break;
                        if (g_122)
                            break;
                    }
                    g_76 = ((+(l_739 ^ (g_65 && (0xBBL | p_74)))) || (func_107(l_513) == g_570));
                }
                else
                {
                    l_675 = func_107((safe_add_func_uint8_t_u_u((func_107(p_75) , l_430), (l_727 > g_10[7]))));
                    for (g_758 = 0; (g_758 >= 55); g_758 = safe_add_func_int16_t_s_s(g_758, 9))
                    {
                        unsigned short l_788 = 0x83B6L;
                        l_788 = (l_654 <= p_73);
                        g_76 = p_75;
                        g_193[3] = 0x02033CA4L;
                    }
                }
            }
        }
    }
    g_173 = (g_163 = g_423[0]);
    return p_75;
}







static unsigned char func_79(unsigned p_80, unsigned char p_81, int p_82, int p_83)
{
    int l_115 = 0xEC12BCECL;
    int l_123 = 1L;
    int l_176 = 0xDF502F1EL;
    unsigned char l_186 = 1UL;
    char l_380[5][3] = {{0x33L,0x80L,0x33L},{0x33L,0x80L,0x33L},{0x33L,0x80L,0x33L},{0x33L,0x80L,0x33L},{0x33L,0x80L,0x33L}};
    int i, j;
lbl_348:
    for (g_76 = (-3); (g_76 < 25); g_76 = safe_add_func_uint8_t_u_u(g_76, 1))
    {
        char l_96[7] = {0x2FL,9L,0x2FL,0x2FL,9L,0x2FL,0x2FL};
        int l_149 = 0xB5A3AA3BL;
        int i;
        for (p_83 = 5; (p_83 >= 2); p_83 -= 1)
        {
            int l_109 = 1L;
            int l_120 = 0x6583FDF7L;
            const short l_121 = (-5L);
            int l_147 = 2L;
            for (p_82 = 2; (p_82 <= 6); p_82 += 1)
            {
                const int l_114[3][9][4] = {{{0x3B7F0D5EL,(-10L),1L,0x64424CFBL},{1L,(-1L),6L,8L},{7L,0x7109BDD5L,(-1L),0xD659E588L},{(-1L),0xD659E588L,(-7L),(-1L)},{0x64424CFBL,0xBC35819BL,0xD659E588L,0x4353CEB4L},{(-6L),0xBF30E8C0L,0x4353CEB4L,0xD34E1B6EL},{0x4356B17FL,5L,(-1L),0x866B6F1FL},{(-1L),0xD3506333L,6L,0x8DEE7960L},{(-7L),0x23B322ACL,0x7C56116CL,1L}},{{0xCEB1B18FL,1L,1L,0xCEB1B18FL},{0x23B322ACL,1L,(-7L),0xA844380EL},{0xD659E588L,0x4356B17FL,(-10L),0x7C56116CL},{0x8DEE7960L,0xBF30E8C0L,(-1L),0x7C56116CL},{5L,0x4356B17FL,1L,0xA844380EL},{(-1L),1L,(-1L),0xCEB1B18FL},{0x6BE38A88L,1L,(-6L),1L},{0xD3506333L,0x23B322ACL,0x29496F13L,0x8DEE7960L},{1L,0xD3506333L,(-7L),0x866B6F1FL}},{{0x29496F13L,5L,0x23B322ACL,0xD34E1B6EL},{0x71C77DD3L,0xBF30E8C0L,(-1L),0x4353CEB4L},{1L,0xBC35819BL,0x61002F44L,(-1L)},{(-1L),0x71C77DD3L,3L,0x71C77DD3L},{8L,(-10L),0xD34E1B6EL,1L},{1L,7L,0x64424CFBL,0xD3506333L},{(-10L),0xCEB1B18FL,(-7L),0xBF30E8C0L},{(-10L),1L,0x64424CFBL,(-1L)},{1L,0xBF30E8C0L,0xD34E1B6EL,(-1L)}}};
                int i, j, k;
                g_122 = (safe_mod_func_int8_t_s_s(((l_96[p_83] && (safe_add_func_int8_t_s_s(0x6FL, 248UL))) == (safe_rshift_func_int8_t_s_s(((((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((p_81 = (func_107(l_109) < l_114[1][3][1])), l_115)), (p_83 >= (((safe_rshift_func_uint16_t_u_u(((l_120 = (safe_add_func_int8_t_s_s(g_16, l_96[p_83]))) , g_76), 6)) , 65533UL) > 0x2608L)))) , g_93) >= l_121) , 1L), p_83))), 255UL));
                l_123 = p_80;
                l_120 = ((-1L) == ((safe_rshift_func_uint8_t_u_s(p_83, 6)) != 0x58L));
                if (g_113)
                    break;
            }
            g_126 = g_93;
            if (func_107((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((g_113 == g_4), (safe_add_func_int16_t_s_s(1L, (safe_add_func_uint16_t_u_u((p_82 & ((safe_rshift_func_int8_t_s_u((+(65533UL ^ 1L)), 1)) <= p_82)), (safe_mod_func_uint32_t_u_u(p_82, (((((l_149 = (g_148[3][0][1] = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x4FL, g_16)), l_147)) != 0x27L))) ^ g_13) >= 0xAAL) > 0x263C58A5L) ^ 9L))))))))), p_81)) <= g_16), l_123)), 0))))
            {
                int i;
                l_149 = ((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(9UL, (l_96[(p_83 + 1)] = g_65))), p_82)) || p_83);
            }
            else
            {
                unsigned char l_175 = 1UL;
                int l_179[5][2][2] = {{{0xD9094550L,(-1L)},{7L,(-9L)}},{{0x87CEB110L,0xC7E8E6B6L},{0x084CD6FDL,0x084CD6FDL}},{{7L,0x084CD6FDL},{0x084CD6FDL,0xC7E8E6B6L}},{{0x87CEB110L,(-9L)},{7L,0x87CEB110L}},{{(-9L),0xC7E8E6B6L},{(-9L),0x87CEB110L}}};
                int i, j, k;
                l_123 = 0xDF514A7BL;
                for (p_80 = 20; (p_80 < 13); p_80 = safe_sub_func_uint8_t_u_u(p_80, 1))
                {
                    short l_162 = (-7L);
                    int l_174 = 7L;
                    for (l_147 = 6; (l_147 > 4); l_147--)
                    {
                        g_163 = ((safe_sub_func_int32_t_s_s((~(safe_lshift_func_int16_t_s_u((l_162 = 0L), 13))), (g_113 = (p_83 >= (g_163 >= ((p_81 <= 1UL) < (g_148[3][0][1] < 0xB264L))))))) != ((safe_sub_func_uint16_t_u_u((l_123 = l_149), g_4)) == g_13));
                    }
                    for (g_113 = 0; (g_113 <= 6); g_113 += 1)
                    {
                        int i;
                        return l_96[p_83];
                    }
                    for (l_115 = 0; (l_115 != 4); l_115++)
                    {
                        l_176 = (0xBAL != ((safe_mod_func_int32_t_s_s((g_93 <= (l_174 = ((g_170 = (g_16 <= func_107(l_115))) <= (g_173 = (((l_96[3] == (safe_sub_func_uint8_t_u_u(((p_83 ^ g_148[3][0][1]) ^ ((p_83 > g_65) ^ l_123)), (-6L)))) | 65526UL) ^ l_149))))), p_81)) < l_175));
                        l_174 = 0x7BC55C71L;
                        l_123 = (func_107(((l_149 = func_107((safe_lshift_func_int8_t_s_u(g_173, 3)))) && p_80)) || g_65);
                    }
                    if (p_81)
                        continue;
                }
                l_123 = (l_179[0][0][1] = p_80);
                g_163 = (((((safe_lshift_func_int8_t_s_s((0xC2L <= ((g_193[2] = (((((((g_93 , ((((l_179[3][0][1] = (l_120 = g_113)) && ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_186, 1)), ((1UL & (((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((func_107(p_80) < p_81), g_10[6])), 0xE0L)) , (-5L)), l_96[5])) >= g_10[6]) | l_179[3][1][1])) , l_179[1][0][1]))) <= 0x47F79A1BL)) & l_175) > 4L)) > g_170) >= l_149) == 0x62L) , g_10[6]) , 0xF46972ACL) < g_4)) & l_175)), p_80)) & l_109) | 0x3DC2L) > g_163) & (-8L));
            }
        }
        for (g_163 = 23; (g_163 != 13); g_163--)
        {
            unsigned l_214 = 4294967295UL;
            int l_217 = 0xC6001B99L;
            int l_222 = 0xE8E832C5L;
            if ((((g_170 = p_83) == ((l_115 & func_107(g_173)) == (l_123 = g_65))) , p_81))
            {
                unsigned l_223[9] = {0x66168E0BL,0x66168E0BL,0x66168E0BL,0x66168E0BL,0x66168E0BL,0x66168E0BL,0x66168E0BL,0x66168E0BL,0x66168E0BL};
                int l_224 = 0x8F8A4D61L;
                int l_280 = 0x263616B9L;
                int i;
                g_193[0] = (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s((l_149 = (l_224 = (~(safe_mod_func_uint32_t_u_u(func_107(((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((g_148[4][0][1] , (~(safe_lshift_func_int16_t_s_s((l_217 = ((safe_rshift_func_uint8_t_u_s(0x12L, l_214)) >= (l_214 != (safe_rshift_func_int16_t_s_s(g_10[9], 15))))), (safe_lshift_func_int16_t_s_s(func_107((((safe_sub_func_uint8_t_u_u((((g_10[5] > 0xE2A24FF4L) >= (g_10[8] || ((l_222 = p_81) <= p_82))) | p_80), l_223[0])) < 0x16780759L) > p_83)), 14)))))) != (-5L)), 3)), l_123)), g_126)) >= 0UL)), l_115))))), 0x9160EC46L)), 1)), l_176));
                if (g_193[3])
                {
                    for (g_170 = 21; (g_170 != 57); g_170++)
                    {
                        l_149 = 1L;
                        return g_65;
                    }
                }
                else
                {
                    int l_227 = 0L;
                    p_83 = p_83;
                    if (l_227)
                    {
                        g_193[2] = (-1L);
                        if (p_83)
                            continue;
                    }
                    else
                    {
                        unsigned l_228[9] = {0x648DAA51L,0x648DAA51L,0x648DAA51L,0x648DAA51L,0x648DAA51L,0x648DAA51L,0x648DAA51L,0x648DAA51L,0x648DAA51L};
                        int i;
                        g_173 = func_107(g_93);
                        if (g_193[1])
                            continue;
                        l_222 = l_228[4];
                    }
                    l_217 = ((safe_mod_func_int32_t_s_s((((((p_81 = (l_222 = ((func_107((l_186 <= g_65)) & (l_214 != (safe_mod_func_int8_t_s_s(g_148[3][0][1], (p_80 || (((((g_193[2] < (((safe_mod_func_uint16_t_u_u(0UL, 0xC5D4L)) | g_10[0]) > 0x138DL)) && p_82) > l_176) ^ g_4) && l_227)))))) & g_193[2]))) || l_186) > l_217) && p_82) > g_148[4][3][0]), (-10L))) > l_227);
                    if (((p_81 = (safe_sub_func_int32_t_s_s(0x2569A2F9L, ((safe_lshift_func_uint8_t_u_u(g_7, (safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_83, (func_107((((l_224 = (l_96[5] == g_148[5][1][1])) <= (l_223[5] != ((l_149 , ((safe_sub_func_int16_t_s_s(((g_113 & ((safe_lshift_func_uint16_t_u_s((l_176 && l_214), g_193[3])) || p_83)) < p_82), l_223[2])) , p_80)) > l_223[5]))) | p_81)) && p_81))), 7)))) <= p_83)))) == g_10[7]))
                    {
                        int l_249 = 0x689E5FA9L;
                        g_173 = g_193[1];
                        if (l_227)
                            continue;
                        l_224 = (((((g_16 || g_93) <= l_249) >= func_107((g_253 = (((((g_173 & ((l_149 || p_82) || (g_250 = l_96[5]))) ^ ((safe_rshift_func_int16_t_s_u((g_193[2] & 0UL), g_10[3])) || g_4)) == 0xBBL) <= 0x19L) || g_250)))) || l_227) == 0xEAA2L);
                        g_193[3] = 0x7EADB0F8L;
                    }
                    else
                    {
                        int l_254[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_254[i] = 0xB6D029A7L;
                        g_193[2] = l_254[0];
                        l_217 = (l_123 = (p_83 = ((l_222 = ((func_107(p_80) , l_227) | (65535UL & (safe_lshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_93, 6L)), (g_267 = ((safe_rshift_func_int8_t_s_s(l_176, 0)) & (g_266 = (g_126 = ((safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(p_82)) , ((safe_mod_func_int8_t_s_s(((0x43C508ABL ^ g_193[2]) <= p_83), p_83)) , 5L)), g_4)) < l_227)))))))))) == g_193[2])));
                        l_123 = g_113;
                        g_193[2] = ((((safe_unary_minus_func_uint8_t_u((g_267 < ((0xB7F2L & (safe_unary_minus_func_int16_t_s((p_83 , ((safe_lshift_func_uint8_t_u_s(2UL, l_227)) > 0xB94F8995L))))) & (l_217 = (func_107(func_107(l_214)) , p_81)))))) || g_250) < l_115) , l_227);
                    }
                }
                p_83 = (safe_rshift_func_int16_t_s_u(l_224, ((l_176 = p_83) , ((safe_lshift_func_uint8_t_u_u((0x39L == (safe_sub_func_uint32_t_u_u(((((l_224 , ((safe_rshift_func_int16_t_s_s((l_280 = 0xF4EEL), (safe_unary_minus_func_uint32_t_u((((g_122 > (safe_sub_func_uint32_t_u_u((l_123 = ((p_80 && (l_115 || (-1L))) , l_115)), g_148[3][0][1]))) > g_126) <= p_82))))) != g_250)) == l_224) == 0x9C37545CL) <= 0L), l_186))), p_81)) & g_4))));
            }
            else
            {
                p_83 = p_80;
            }
        }
    }
    if ((((l_186 < ((p_83 = 0x31335ABDL) < func_107(l_115))) | ((safe_lshift_func_int16_t_s_u(g_250, (safe_lshift_func_uint8_t_u_u(g_10[2], (((((safe_sub_func_uint32_t_u_u(g_173, 0xD2EF1644L)) || (p_81 = p_80)) >= g_10[6]) , l_115) ^ 0x22FB0602L))))) && 0xFF73L)) & g_10[6]))
    {
        char l_292 = 0x44L;
        int l_296 = 4L;
        short l_320[6] = {0xEA95L,0xEA95L,0xEA95L,0xEA95L,0xEA95L,0xEA95L};
        int l_342 = 0xD68F6AF8L;
        int i;
        for (l_186 = 0; (l_186 < 54); l_186++)
        {
            unsigned l_295 = 0x60A8B19DL;
            int l_297 = 0L;
            g_163 = (((l_292 = (-1L)) <= ((safe_sub_func_int8_t_s_s(g_4, (l_123 = g_7))) ^ g_7)) > (~((g_253 , (g_7 , (l_296 = (l_295 , (p_83 = ((l_297 = l_296) || func_107((l_176 = 0x7D5BL)))))))) >= g_76)));
            p_83 = l_292;
        }
lbl_352:
        p_83 = (!(p_83 ^ (((((-4L) && g_13) && ((l_296 = g_148[4][0][0]) , (((l_176 , (((safe_rshift_func_int8_t_s_s((!0xEAL), (safe_mod_func_int16_t_s_s(((p_81 <= ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(p_81, (~(p_82 != p_81)))) , g_13), 2)) || g_193[0])) , 0x0B19L), l_186)))) ^ 0x0D65L) > l_176)) && p_81) , g_250))) , 0x61L) , g_306)));
        for (l_186 = 0; (l_186 < 12); l_186 = safe_add_func_int16_t_s_s(l_186, 2))
        {
            int l_314 = 7L;
            int l_322[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
            unsigned l_327 = 1UL;
            short l_375 = 4L;
            int i;
            for (g_266 = 0; (g_266 > 29); ++g_266)
            {
                unsigned char l_311 = 0x68L;
                int l_321 = 0x5EDB7C5DL;
                p_83 = l_311;
                for (g_170 = 0; (g_170 > 23); g_170 = safe_add_func_int8_t_s_s(g_170, 2))
                {
                    unsigned short l_341 = 0x6A94L;
                    l_322[0] = (!(p_83 ^ (func_107(((0xB2C1F8F7L < ((l_314 , (g_193[0] = 1L)) && (((l_321 = ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_u(0x9A48L, 13)) > ((p_82 > (g_319 = (l_296 = (g_267 = ((l_123 = g_173) && (((l_314 = ((65533UL || (((0x65BFL && p_83) | p_80) < 0xCDL)) ^ p_83)) , 4294967291UL) | 0x8C961F25L)))))) , l_320[2])), 14)) && 5L)) | 2UL) , 0x1AD52204L))) , 3UL)) <= p_80)));
                    if (p_83)
                        continue;
                    g_193[2] = (g_267 , g_193[3]);
                    if (g_113)
                    {
                        g_193[0] = (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(l_327, (safe_lshift_func_uint8_t_u_u((p_81 = l_314), l_311)))) < p_83), 7));
                    }
                    else
                    {
                        unsigned short l_334 = 0x4376L;
                        g_76 = g_148[1][1][0];
                        l_342 = (safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(6L, l_334)) == ((l_296 = (l_341 = (safe_add_func_uint8_t_u_u((l_314 , g_170), (g_65 , (safe_sub_func_int16_t_s_s((p_82 > l_334), (safe_mod_func_uint8_t_u_u(0x87L, ((((g_170 >= l_123) & g_76) || l_311) | l_311)))))))))) | 255UL)), 2));
                        l_176 = 0L;
                    }
                }
            }
            for (l_115 = (-30); (l_115 >= 25); l_115 = safe_add_func_uint16_t_u_u(l_115, 1))
            {
                int l_345 = 0x05E40965L;
                char l_365 = 0x1FL;
                if ((l_345 = l_186))
                {
                    g_173 = func_107(l_296);
                    for (g_173 = 4; (g_173 <= 19); ++g_173)
                    {
                        if (p_80)
                            goto lbl_348;
                    }
                    return g_193[1];
                }
                else
                {
                    unsigned char l_351 = 0x9EL;
                    g_173 = (l_345 = ((func_107((g_10[6] , l_345)) & 251UL) == p_83));
                    l_351 = ((safe_lshift_func_uint16_t_u_s(func_107(g_7), g_93)) & 254UL);
                    if (l_292)
                        goto lbl_352;
                    if (((safe_mod_func_uint16_t_u_u((p_82 & p_80), func_107((g_319 || (p_83 && (safe_lshift_func_uint16_t_u_s(65533UL, ((safe_sub_func_uint32_t_u_u(((+(l_314 = (p_81 = (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((func_107((g_319 = (0x3CL <= (p_83 > (func_107(p_83) , p_81))))) >= 0x5C927A85L) ^ 0x6D169E28L), p_83)) == p_81), g_7))))) < 0L), p_82)) >= 0x454156B1L)))))))) < l_345))
                    {
                        p_83 = ((safe_sub_func_uint32_t_u_u((!p_81), l_365)) != (l_320[2] || (((+g_267) > p_82) >= (safe_sub_func_int8_t_s_s(g_13, 0x2EL)))));
                    }
                    else
                    {
                        p_83 = (4L >= 0x45ABC7B5L);
                        p_83 = (safe_unary_minus_func_int8_t_s(p_83));
                        if (g_7)
                            goto lbl_348;
                    }
                }
            }
            if (g_250)
                continue;
            g_173 = ((((safe_add_func_uint32_t_u_u((l_123 = (safe_add_func_int16_t_s_s((0x22A9L ^ (safe_lshift_func_int16_t_s_u(func_107((+(l_375 & ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(((l_380[3][2] , 1UL) , l_292), 0x3C14L)), p_82)) || (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s(0x0DL, (4294967286UL <= 0x8A153060L))), 3UL)))) | 0L) , g_113), 3)) | l_296), p_82)))))), l_322[0]))), g_93))), (-8L))) == 0UL) > p_81) , l_314);
        }
    }
    else
    {
        for (g_122 = 7; (g_122 > 22); g_122++)
        {
            return g_93;
        }
        g_193[2] = 6L;
    }
    p_83 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_82, ((g_4 , p_81) != p_81))), (((safe_mod_func_int8_t_s_s((func_107((safe_rshift_func_int16_t_s_u(((!(((safe_sub_func_uint32_t_u_u(g_267, l_115)) <= p_80) < (func_107(((safe_rshift_func_uint8_t_u_s(0x7DL, g_266)) , l_123)) ^ l_380[3][2]))) , (-7L)), g_266))) & l_186), g_93)) , 0x639BL) || 0x73D4L)));
    return g_122;
}







static char func_107(unsigned short p_108)
{
    unsigned l_110 = 0x53C53055L;
    int l_111 = 0x42974248L;
    int l_112 = 1L;
    g_113 = (l_112 = (l_111 = (p_108 < (l_110 = g_65))));
    return g_7;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_148[i][j][k], "g_148[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_193[i], "g_193[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_250, "g_250", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_306, "g_306", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_423[i], "g_423[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_914, "g_914", print_hash_value);
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1065, "g_1065", print_hash_value);
    transparent_crc(g_1129, "g_1129", print_hash_value);
    transparent_crc(g_1179, "g_1179", print_hash_value);
    transparent_crc(g_1234, "g_1234", print_hash_value);
    transparent_crc(g_1296, "g_1296", print_hash_value);
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1452, "g_1452", print_hash_value);
    transparent_crc(g_1484.f0, "g_1484.f0", print_hash_value);
    transparent_crc(g_1484.f1.f0, "g_1484.f1.f0", print_hash_value);
    transparent_crc(g_1484.f1.f1, "g_1484.f1.f1", print_hash_value);
    transparent_crc(g_1484.f1.f2, "g_1484.f1.f2", print_hash_value);
    transparent_crc(g_1484.f1.f3, "g_1484.f1.f3", print_hash_value);
    transparent_crc(g_1484.f2, "g_1484.f2", print_hash_value);
    transparent_crc(g_1484.f3, "g_1484.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1485[i][j][k].f0, "g_1485[i][j][k].f0", print_hash_value);
                transparent_crc(g_1485[i][j][k].f1.f0, "g_1485[i][j][k].f1.f0", print_hash_value);
                transparent_crc(g_1485[i][j][k].f1.f1, "g_1485[i][j][k].f1.f1", print_hash_value);
                transparent_crc(g_1485[i][j][k].f1.f2, "g_1485[i][j][k].f1.f2", print_hash_value);
                transparent_crc(g_1485[i][j][k].f1.f3, "g_1485[i][j][k].f1.f3", print_hash_value);
                transparent_crc(g_1485[i][j][k].f2, "g_1485[i][j][k].f2", print_hash_value);
                transparent_crc(g_1485[i][j][k].f3, "g_1485[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1486.f0, "g_1486.f0", print_hash_value);
    transparent_crc(g_1486.f1, "g_1486.f1", print_hash_value);
    transparent_crc(g_1486.f2, "g_1486.f2", print_hash_value);
    transparent_crc(g_1486.f3, "g_1486.f3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1507[i][j].f0, "g_1507[i][j].f0", print_hash_value);
            transparent_crc(g_1507[i][j].f1, "g_1507[i][j].f1", print_hash_value);
            transparent_crc(g_1507[i][j].f2, "g_1507[i][j].f2", print_hash_value);
            transparent_crc(g_1507[i][j].f3, "g_1507[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1508.f0, "g_1508.f0", print_hash_value);
    transparent_crc(g_1508.f1, "g_1508.f1", print_hash_value);
    transparent_crc(g_1508.f2, "g_1508.f2", print_hash_value);
    transparent_crc(g_1508.f3, "g_1508.f3", print_hash_value);
    transparent_crc(g_1510.f0, "g_1510.f0", print_hash_value);
    transparent_crc(g_1510.f1.f0, "g_1510.f1.f0", print_hash_value);
    transparent_crc(g_1510.f1.f1, "g_1510.f1.f1", print_hash_value);
    transparent_crc(g_1510.f1.f2, "g_1510.f1.f2", print_hash_value);
    transparent_crc(g_1510.f1.f3, "g_1510.f1.f3", print_hash_value);
    transparent_crc(g_1510.f2, "g_1510.f2", print_hash_value);
    transparent_crc(g_1510.f3, "g_1510.f3", print_hash_value);
    transparent_crc(g_1511.f0, "g_1511.f0", print_hash_value);
    transparent_crc(g_1511.f1.f0, "g_1511.f1.f0", print_hash_value);
    transparent_crc(g_1511.f1.f1, "g_1511.f1.f1", print_hash_value);
    transparent_crc(g_1511.f1.f2, "g_1511.f1.f2", print_hash_value);
    transparent_crc(g_1511.f1.f3, "g_1511.f1.f3", print_hash_value);
    transparent_crc(g_1511.f2, "g_1511.f2", print_hash_value);
    transparent_crc(g_1511.f3, "g_1511.f3", print_hash_value);
    transparent_crc(g_1516, "g_1516", print_hash_value);
    transparent_crc(g_1551.f0, "g_1551.f0", print_hash_value);
    transparent_crc(g_1551.f1.f0, "g_1551.f1.f0", print_hash_value);
    transparent_crc(g_1551.f1.f1, "g_1551.f1.f1", print_hash_value);
    transparent_crc(g_1551.f1.f2, "g_1551.f1.f2", print_hash_value);
    transparent_crc(g_1551.f1.f3, "g_1551.f1.f3", print_hash_value);
    transparent_crc(g_1551.f2, "g_1551.f2", print_hash_value);
    transparent_crc(g_1551.f3, "g_1551.f3", print_hash_value);
    transparent_crc(g_1572.f0, "g_1572.f0", print_hash_value);
    transparent_crc(g_1572.f1.f0, "g_1572.f1.f0", print_hash_value);
    transparent_crc(g_1572.f1.f1, "g_1572.f1.f1", print_hash_value);
    transparent_crc(g_1572.f1.f2, "g_1572.f1.f2", print_hash_value);
    transparent_crc(g_1572.f1.f3, "g_1572.f1.f3", print_hash_value);
    transparent_crc(g_1572.f2, "g_1572.f2", print_hash_value);
    transparent_crc(g_1572.f3, "g_1572.f3", print_hash_value);
    transparent_crc(g_1602.f0, "g_1602.f0", print_hash_value);
    transparent_crc(g_1602.f1, "g_1602.f1", print_hash_value);
    transparent_crc(g_1602.f2, "g_1602.f2", print_hash_value);
    transparent_crc(g_1602.f3, "g_1602.f3", print_hash_value);
    transparent_crc(g_1602.f4, "g_1602.f4", print_hash_value);
    transparent_crc(g_1602.f5, "g_1602.f5", print_hash_value);
    transparent_crc(g_1602.f6, "g_1602.f6", print_hash_value);
    transparent_crc(g_1602.f7, "g_1602.f7", print_hash_value);
    transparent_crc(g_1603.f0, "g_1603.f0", print_hash_value);
    transparent_crc(g_1603.f1, "g_1603.f1", print_hash_value);
    transparent_crc(g_1603.f2, "g_1603.f2", print_hash_value);
    transparent_crc(g_1603.f3, "g_1603.f3", print_hash_value);
    transparent_crc(g_1607.f0, "g_1607.f0", print_hash_value);
    transparent_crc(g_1607.f1, "g_1607.f1", print_hash_value);
    transparent_crc(g_1607.f2, "g_1607.f2", print_hash_value);
    transparent_crc(g_1607.f3, "g_1607.f3", print_hash_value);
    transparent_crc(g_1607.f4, "g_1607.f4", print_hash_value);
    transparent_crc(g_1607.f5, "g_1607.f5", print_hash_value);
    transparent_crc(g_1616.f0, "g_1616.f0", print_hash_value);
    transparent_crc(g_1616.f1, "g_1616.f1", print_hash_value);
    transparent_crc(g_1616.f2, "g_1616.f2", print_hash_value);
    transparent_crc(g_1616.f3, "g_1616.f3", print_hash_value);
    transparent_crc(g_1617.f0, "g_1617.f0", print_hash_value);
    transparent_crc(g_1617.f1, "g_1617.f1", print_hash_value);
    transparent_crc(g_1617.f2, "g_1617.f2", print_hash_value);
    transparent_crc(g_1617.f3, "g_1617.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1629[i][j][k].f0, "g_1629[i][j][k].f0", print_hash_value);
                transparent_crc(g_1629[i][j][k].f1, "g_1629[i][j][k].f1", print_hash_value);
                transparent_crc(g_1629[i][j][k].f2, "g_1629[i][j][k].f2", print_hash_value);
                transparent_crc(g_1629[i][j][k].f3, "g_1629[i][j][k].f3", print_hash_value);
                transparent_crc(g_1629[i][j][k].f4, "g_1629[i][j][k].f4", print_hash_value);
                transparent_crc(g_1629[i][j][k].f5, "g_1629[i][j][k].f5", print_hash_value);
                transparent_crc(g_1629[i][j][k].f6, "g_1629[i][j][k].f6", print_hash_value);
                transparent_crc(g_1629[i][j][k].f7, "g_1629[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
