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
   unsigned long long f0;
   signed f1 : 20;
   signed f2 : 24;
   unsigned f3 : 26;
   signed f4 : 23;
   unsigned f5 : 7;
};

struct S1 {
   unsigned short f0;
   unsigned f1;
   int f2;
   const unsigned f3;
   unsigned char f4;
   char f5;
   const unsigned char f6;
   unsigned short f7;
   int f8;
   const short f9;
};

struct S2 {
   unsigned f0 : 25;
   signed f1 : 6;
   signed f2 : 13;
   unsigned f3 : 29;
   unsigned f4 : 16;
   const unsigned f5 : 15;
   signed f6 : 6;
   unsigned f7 : 22;
   unsigned f8 : 19;
};

struct S3 {
   int f0;
   struct S2 f1;
};

struct S4 {
   const int f0;
   signed f1 : 2;
   unsigned char f2;
   signed f3 : 14;
   unsigned short f4;
   const unsigned f5 : 21;
   long long f6;
   const struct S1 f7;
   const signed : 0;
   char f8;
};

struct S5 {
   const unsigned f0;
   const struct S2 f1;
   struct S1 f2;
   const signed f3 : 22;
   struct S2 f4;
};

struct S6 {
   unsigned f0 : 8;
   unsigned f1 : 25;
   unsigned f2 : 8;
   const struct S4 f3;
   unsigned f4 : 25;
   const short f5;
   signed f6 : 2;
   unsigned : 0;
   const unsigned f7 : 14;
};

struct S7 {
   struct S4 f0;
   char f1;
   unsigned char f2;
};


static unsigned g_2 = 18446744073709551615UL;
static int g_4 = 0xA8CCEDB7L;
static struct S6 g_10 = {3,184,10,{0L,-1,248UL,-77,0x783DL,587,1L,{0x4622L,18446744073709551615UL,-1L,1UL,247UL,-1L,0x6CL,0xFC6EL,0x0B395B91L,0xF744L},0x2DL},1569,0L,1,102};
static int g_36 = 0L;
static int * const g_35 = &g_36;
static struct S7 g_59 = {{-4L,-0,252UL,120,65526UL,940,0x67A1E7967B2D6F41LL,{65526UL,0x180BB484L,0x09764F79L,3UL,0x26L,0L,0UL,0xAD2EL,1L,0L},0x74L},-1L,0xF5L};
static struct S7 *g_58 = &g_59;
static int g_69 = 0xA50812B2L;
static int *g_68 = &g_69;
static int g_72 = (-10L);
static struct S2 g_76 = {3010,7,77,6446,22,69,7,456,343};
static struct S2 *g_75 = &g_76;
static struct S0 g_80 = {0xDEDC864E9E4B147BLL,807,1430,1235,-28,0};
static short g_85 = 0xDF58L;
static struct S0 *g_93 = (void*)0;
static struct S5 g_119 = {0x2652A429L,{3268,-2,34,15471,247,31,3,996,508},{0xB455L,0x70B09ED6L,0L,0x3F7B260CL,0xB0L,0x5EL,0x72L,0x07FBL,0x5FA97D65L,4L},1991,{5432,-0,-75,17623,79,136,1,12,287}};
static unsigned long long g_133 = 6UL;
static struct S3 g_171 = {0xD9380DC6L,{2034,-2,42,8860,152,140,5,1822,231}};
static unsigned char *g_218 = &g_59.f2;
static struct S4 *g_226 = &g_59.f0;
static short g_236 = 0x03D3L;
static short *g_235 = &g_236;
static struct S3 * const g_247 = (void*)0;
static struct S3 * const *g_246 = &g_247;
static struct S4 g_274 = {0L,-1,0x49L,-53,1UL,385,0x99BA29A52E5F9160LL,{65527UL,0x1574A671L,8L,7UL,0x72L,0x99L,255UL,3UL,0x91545B19L,0xE6B2L},-1L};
static struct S4 g_276 = {8L,-0,0xC7L,-123,0xD94AL,699,0x624C6BFACB8014FFLL,{65535UL,18446744073709551615UL,0L,18446744073709551609UL,251UL,-1L,253UL,0xFAADL,0xDB38FF28L,0xAA44L},0xBCL};
static struct S4 *g_275 = &g_276;
static struct S1 g_298 = {65535UL,0x839FD0B5L,2L,0x15E9AC74L,246UL,-7L,248UL,65535UL,5L,0xFEBCL};
static int g_356 = 7L;
static struct S5 g_362 = {5UL,{2833,-1,-24,6571,29,16,-2,1470,646},{0xF916L,0UL,0x517F5C9FL,0UL,2UL,0x09L,0x73L,0x16B9L,0x9334A3F6L,0xB660L},-1865,{2670,4,8,14024,117,36,3,911,27}};
static struct S2 g_370 = {4527,-7,-54,13006,116,55,-6,358,332};
static struct S4 **g_374 = (void*)0;
static struct S4 **g_375 = &g_226;
static struct S1 g_386 = {65527UL,0UL,0xDBA32175L,18446744073709551615UL,254UL,0x5FL,0xD1L,3UL,0x4CA89CF4L,0x382BL};
static struct S1 *g_385 = &g_386;



static const unsigned long long func_1(void);
static const struct S0 func_5(int * p_6, unsigned p_7);
static struct S0 func_8(struct S6 p_9);
static int * func_13(int ** p_14, int p_15, short p_16, unsigned p_17);
static int * func_20(short * p_21, short p_22, const short * p_23, struct S3 p_24, int ** const p_25);
static const unsigned char func_26(struct S1 p_27, int ** p_28, short * p_29, unsigned long long p_30, unsigned short p_31);
static struct S1 func_32(int ** p_33, int * const p_34);
static struct S2 * func_37(struct S2 * p_38, short p_39, struct S0 p_40);
static struct S2 * func_41(int ** p_42, int * p_43, int p_44, short * p_45, int ** p_46);
static int ** func_47(int * p_48, unsigned char p_49, int p_50);
static const unsigned long long func_1(void)
{
    int *l_3 = &g_4;
    struct S0 *l_363 = &g_80;
    struct S2 * const l_368 = &g_119.f4;
    struct S2 *l_369 = &g_370;
    int **l_371 = &g_68;
    struct S4 ***l_376 = &g_375;
    struct S1 *l_383 = &g_362.f2;
    struct S1 **l_384 = &l_383;
    unsigned long long *l_390 = (void*)0;
    unsigned long long *l_391 = &g_80.f0;
    unsigned short *l_392 = &g_298.f0;
    (*l_3) = g_2;
    (*l_363) = func_5(l_3, g_2);
    l_369 = l_368;
    g_80 = (*l_363);
    return g_119.f4.f8;
}







static const struct S0 func_5(int * p_6, unsigned p_7)
{
    struct S0 *l_359 = &g_80;
    struct S5 **l_360 = (void*)0;
    struct S5 *l_361 = &g_362;
    (*l_359) = func_8(g_10);
    l_361 = &g_119;
    return (*l_359);
}







static struct S0 func_8(struct S6 p_9)
{
    int *l_12 = &g_4;
    int **l_11 = &l_12;
    short *l_18 = (void*)0;
    short *l_19 = (void*)0;
    struct S3 l_237 = {0x9FAC3A7EL,{1265,-6,-39,7478,150,57,-0,690,436}};
    int **l_342 = (void*)0;
    int *l_343 = &g_36;
    struct S1 l_344 = {1UL,18446744073709551615UL,-3L,0xF6A9F436L,0UL,0xC5L,0x2CL,3UL,-7L,-1L};
    short *l_355 = &g_85;
    unsigned short l_357 = 0xCFD9L;
    struct S0 l_358 = {4UL,833,1909,4462,-1938,2};
    (*l_11) = &g_4;
    (*l_11) = func_13(&l_12, g_10.f3.f7.f5, (!((**l_11) = (*l_12))), (0x53869515L == ((l_343 = func_20(l_18, ((p_9.f5 == (g_10.f3.f6 ^ (func_26(func_32(&l_12, g_35), &l_12, g_235, g_10.f3.f0, g_119.f2.f3) <= p_9.f5))) < p_9.f0), l_18, l_237, &l_12)) != (void*)0)));
    p_9.f6 = (func_26(l_344, func_47(((*l_11) = func_13(&l_12, (safe_sub_func_int32_t_s_s(((*g_35) = (*g_35)), (((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((0x27L & 0x99L) < (*g_235)), 0)), p_9.f2)) <= g_276.f1) & (safe_add_func_int8_t_s_s((((*l_355) = (safe_add_func_int64_t_s_s((0x8238L <= (*g_235)), (-1L)))) < (*g_235)), 0x49L))))), (*g_235), g_171.f1.f2)), p_9.f3.f7.f9, p_9.f3.f7.f4), l_18, g_59.f0.f8, g_356) & l_357);
    p_9.f6 = ((*g_35) = p_9.f3.f3);
    return l_358;
}







static int * func_13(int ** p_14, int p_15, short p_16, unsigned p_17)
{
    (*p_14) = (void*)0;
    return (*p_14);
}







static int * func_20(short * p_21, short p_22, const short * p_23, struct S3 p_24, int ** const p_25)
{
    struct S1 * const l_238 = &g_119.f2;
    const int l_243 = 0x2B05BCD6L;
    int *l_257 = &g_69;
    const unsigned long long *l_261 = (void*)0;
    struct S0 **l_316 = &g_93;
    const struct S2 **l_335 = (void*)0;
    struct S0 l_341 = {3UL,129,915,6888,-271,0};
    if ((p_24.f0 ^ g_171.f1.f1))
    {
        struct S1 *l_240 = &g_119.f2;
        struct S1 **l_239 = &l_240;
        unsigned long long *l_251 = &g_133;
        unsigned long long **l_250 = &l_251;
        (*l_239) = l_238;
        (*g_35) = (((safe_add_func_int16_t_s_s(l_243, ((0x0040E6F50D0A3783LL | g_80.f4) > p_24.f0))) <= (g_59.f0.f7.f2 >= ((((*g_218) = (safe_rshift_func_uint8_t_u_u(((void*)0 == g_246), (*g_218)))) >= l_243) < g_119.f4.f3))) && g_10.f0);
        for (g_80.f0 = (-30); (g_80.f0 < 39); ++g_80.f0)
        {
            unsigned long long ***l_252 = &l_250;
            unsigned long long **l_254 = &l_251;
            unsigned long long ***l_253 = &l_254;
            unsigned long long **l_256 = &l_251;
            unsigned long long ***l_255 = &l_256;
            (*l_255) = ((*l_253) = ((*l_252) = l_250));
            return l_257;
        }
    }
    else
    {
        int **l_258 = &g_68;
        const unsigned long long **l_262 = &l_261;
        struct S5 *l_264 = &g_119;
        struct S5 **l_263 = &l_264;
        (*l_258) = (*p_25);
        (*g_35) = (safe_rshift_func_uint16_t_u_s((((*l_262) = l_261) == &g_133), 8));
        (*l_263) = &g_119;
    }
    if ((*l_257))
    {
        const int *l_266 = (void*)0;
        const int **l_265 = &l_266;
        (*l_257) = 0xBC841322L;
        (*l_265) = &l_243;
        return &g_36;
    }
    else
    {
        int l_271 = 0xC6C8EE47L;
        struct S4 **l_272 = (void*)0;
        struct S4 *l_273 = &g_274;
        long long *l_281 = &g_276.f6;
        unsigned long long *l_288 = &g_133;
        int l_291 = 0L;
        unsigned long long *l_292 = &g_80.f0;
        short l_314 = 2L;
        (*g_35) = ((g_10.f7 <= (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((0x42DFL < (p_24.f1.f1 & l_271)), 3)), (((l_273 = g_226) != (g_275 = &g_274)) < p_24.f1.f3)))) <= ((safe_rshift_func_int16_t_s_u(((*g_235) = (*g_235)), (((*l_257) = ((safe_lshift_func_uint8_t_u_s(((*g_218) = (((*l_281) = func_26((*l_238), &l_257, &g_85, l_271, g_119.f4.f4)) ^ g_274.f0)), (*l_257))) != g_276.f7.f4)) == p_24.f1.f8))) && p_22));
        if ((((*g_218) = 0x0DL) != ((safe_add_func_int16_t_s_s(l_271, p_24.f0)) | (!(((*l_292) = ((safe_lshift_func_int8_t_s_u(0x19L, 5)) <= ((safe_mod_func_uint32_t_u_u((((*l_288) = 0xD771850E58691E97LL) || (((safe_lshift_func_uint16_t_u_s(p_24.f1.f4, 12)) <= (1UL & (((l_271 && (*g_35)) > l_291) || (*l_257)))) ^ (*l_257))), 0xB853B75FL)) == p_24.f1.f1))) <= g_276.f7.f2)))))
        {
            int **l_311 = &g_68;
            for (g_72 = (-19); (g_72 == (-3)); ++g_72)
            {
                struct S0 l_295 = {0x2E70C7485A7D7BA4LL,-694,-842,3577,1535,2};
                struct S0 *l_296 = (void*)0;
                struct S0 *l_297 = &g_80;
                unsigned long long l_302 = 8UL;
                char *l_315 = &g_274.f8;
                (*l_297) = l_295;
                l_302 = ((*l_257) = func_26(g_298, func_47((*p_25), l_271, (*l_257)), &g_85, (((((safe_unary_minus_func_uint64_t_u((((l_271 >= (*g_235)) > ((safe_sub_func_int8_t_s_s((((*g_218) = p_22) || 253UL), p_24.f1.f4)) != p_24.f1.f2)) <= (-10L)))) >= 0x24L) < p_24.f1.f3) >= 0xE3A5L) ^ 0x25L), l_295.f1));
                l_291 = ((0x06B6CE06L <= (4294967288UL > 0x1FA4407EL)) != (safe_add_func_uint64_t_u_u(((*l_257) | ((safe_lshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((*l_315) = func_26(g_10.f3.f7, l_311, &g_85, (*l_257), (((safe_lshift_func_uint8_t_u_s(p_24.f1.f5, 0)) < l_314) >= 1UL))), 0x84L)), p_24.f1.f3)), (*g_235))) > g_10.f3.f7.f9)), 0x100D98780B881E37LL)));
            }
            return (*p_25);
        }
        else
        {
            struct S0 ***l_317 = &l_316;
            struct S0 **l_319 = &g_93;
            struct S0 ***l_318 = &l_319;
            const struct S2 *l_334 = (void*)0;
            const struct S2 **l_333 = &l_334;
            struct S3 **l_338 = (void*)0;
            struct S3 *l_340 = (void*)0;
            struct S3 **l_339 = &l_340;
            (*g_35) = (-2L);
            if ((((*l_317) = l_316) == ((*l_318) = &g_93)))
            {
                struct S0 l_328 = {0xC63E277B47BBFC8BLL,-421,-757,5954,1599,7};
                for (g_59.f1 = 0; (g_59.f1 > (-19)); g_59.f1--)
                {
                    struct S0 l_322 = {0xF8AD5CD2068BC98FLL,725,-3657,8146,1568,4};
                    int **l_323 = &g_68;
                    l_322 = g_80;
                    (*l_323) = &g_69;
                    for (l_271 = 0; (l_271 != 10); ++l_271)
                    {
                        struct S0 l_329 = {0x1134290874800EBDLL,653,2442,144,-2581,3};
                        struct S0 *l_330 = &l_328;
                        (**l_323) = (*g_68);
                        (**l_323) = (4294967295UL >= (safe_rshift_func_int16_t_s_s((*g_235), 9)));
                        (*l_330) = (l_329 = l_328);
                    }
                }
                (*g_35) = ((*g_235) >= l_328.f2);
                for (g_236 = (-24); (g_236 > 27); g_236++)
                {
                    l_335 = l_333;
                }
            }
            else
            {
                int **l_336 = (void*)0;
                int *l_337 = &l_271;
                l_337 = &g_69;
                (*g_35) = (*g_35);
            }
            (*l_339) = &p_24;
            g_68 = (void*)0;
        }
    }
    g_80 = l_341;
    return (*p_25);
}







static const unsigned char func_26(struct S1 p_27, int ** p_28, short * p_29, unsigned long long p_30, unsigned short p_31)
{
    return (*g_218);
}







static struct S1 func_32(int ** p_33, int * const p_34)
{
    unsigned l_54 = 8UL;
    short *l_73 = (void*)0;
    struct S7 *l_90 = &g_59;
    struct S0 *l_91 = (void*)0;
    int l_104 = 0xB34D0632L;
    int ** const l_106 = &g_68;
    unsigned long long l_161 = 18446744073709551613UL;
    const struct S3 *l_170 = &g_171;
    struct S1 l_173 = {1UL,0x89188778L,0x84813EE7L,18446744073709551615UL,0UL,0x7BL,4UL,0x75DEL,0x31E16E7FL,0x30F7L};
    unsigned char *l_217 = &l_173.f4;
    if ((*g_35))
    {
        int **l_51 = (void*)0;
        int *l_52 = (void*)0;
        int l_53 = 0x839EF24CL;
        int *l_70 = (void*)0;
        int *l_71 = &g_72;
        struct S2 **l_87 = &g_75;
        struct S2 *l_89 = &g_76;
        struct S2 **l_88 = &l_89;
        struct S0 **l_92 = &l_91;
        struct S0 l_94 = {18446744073709551610UL,435,-2398,4331,741,0};
        struct S0 *l_95 = &g_80;
        (*l_88) = ((*l_87) = func_37(func_41(func_47((l_52 = (*p_33)), l_53, l_54), g_68, ((*l_71) = g_59.f0.f7.f7), l_73, l_51), l_54, g_80));
        g_58 = l_90;
        g_93 = ((*l_92) = l_91);
        (*l_95) = l_94;
    }
    else
    {
        unsigned char l_103 = 0xDFL;
        int l_144 = 1L;
        unsigned long long *l_153 = &g_133;
        unsigned short *l_154 = (void*)0;
        unsigned short *l_157 = &g_119.f2.f0;
        unsigned short *l_158 = &g_59.f0.f4;
        long long l_164 = 0xDCDB7876320E90B9LL;
        short *l_167 = &g_85;
        struct S0 l_190 = {6UL,748,-2993,7293,-2800,10};
        for (g_59.f1 = 0; (g_59.f1 != 2); ++g_59.f1)
        {
            struct S1 l_105 = {0x5982L,1UL,5L,0x6A9E613BL,0x0EL,0xC1L,0UL,0x8621L,0xD644C502L,0xBCE0L};
            struct S2 **l_111 = &g_75;
            struct S5 *l_118 = &g_119;
            const struct S0 l_148 = {0x51C1661776ED3A1DLL,347,2912,1814,1039,9};
            struct S0 *l_149 = &g_80;
            int *l_150 = &g_36;
            for (g_59.f2 = 0; (g_59.f2 > 57); g_59.f2 = safe_add_func_uint16_t_u_u(g_59.f2, 6))
            {
                int **l_100 = &g_68;
                (*l_100) = (*p_33);
                for (g_2 = 0; (g_2 >= 32); g_2++)
                {
                    l_104 = l_103;
                    return l_105;
                }
                if (((*p_34) = (*g_35)))
                {
                    (*g_35) = (&g_35 == l_106);
                    (*l_106) = &g_69;
                }
                else
                {
                    struct S2 **l_110 = (void*)0;
                    struct S2 ***l_109 = &l_110;
                    char l_112 = (-6L);
                    short *l_113 = &g_85;
                    short **l_114 = (void*)0;
                    short **l_115 = &l_73;
                    unsigned long long *l_131 = &g_80.f0;
                    unsigned long long *l_132 = &g_133;
                    if ((((safe_mod_func_uint32_t_u_u((((*l_109) = &g_75) != l_111), (*g_35))) | l_112) && (((*l_115) = l_113) != &g_85)))
                    {
                        struct S7 *l_116 = &g_59;
                        struct S7 **l_117 = &l_116;
                        (*l_100) = &g_69;
                        (*l_117) = l_116;
                    }
                    else
                    {
                        struct S5 **l_120 = &l_118;
                        (*l_106) = &g_69;
                        (*l_120) = l_118;
                        (*l_106) = (*l_106);
                    }
                    (*g_35) = (safe_add_func_uint32_t_u_u(((l_103 <= l_103) > ((*l_132) = ((*l_131) = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_112, 6)), (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(g_119.f3, 13)), (0xDFEC3DBCL > (*p_34))))))))), (safe_unary_minus_func_uint8_t_u(((~(g_10.f3.f7.f9 < g_10.f3.f7.f0)) ^ 0x9C151EC7L)))));
                    for (l_105.f8 = 0; (l_105.f8 != 25); l_105.f8 = safe_add_func_int64_t_s_s(l_105.f8, 1))
                    {
                        short l_137 = 0L;
                        unsigned char *l_142 = (void*)0;
                        unsigned char *l_143 = &l_103;
                        unsigned short *l_147 = (void*)0;
                        (*p_34) = l_105.f1;
                    }
                }
                l_90 = &g_59;
            }
            (*l_149) = l_148;
            l_150 = l_150;
        }
        (*g_68) = (safe_add_func_uint64_t_u_u((((*l_153) = ((void*)0 != &g_93)) == (**l_106)), ((l_154 == (void*)0) == (safe_mod_func_uint16_t_u_u(((*l_157) = l_103), ((*l_158) = (**l_106)))))));
        if ((l_103 <= (safe_mod_func_uint32_t_u_u((l_161 < (safe_add_func_uint16_t_u_u(((**l_106) | g_119.f1.f6), (l_164 >= (safe_rshift_func_int16_t_s_u(((*l_167) = (l_164 != (*p_34))), (safe_mod_func_uint8_t_u_u(g_119.f4.f3, 0x2AL)))))))), l_103))))
        {
            const struct S3 **l_172 = &l_170;
            (*l_172) = l_170;
            return l_173;
        }
        else
        {
            struct S4 *l_174 = &g_59.f0;
            int l_178 = 0x6BCF50F0L;
            struct S0 l_191 = {0UL,372,-493,4571,919,1};
            unsigned l_200 = 0x252A31B2L;
            const int *l_222 = &l_104;
            (*l_106) = (*p_33);
            (*l_106) = &g_69;
            if (((*g_35) = ((void*)0 == l_153)))
            {
                struct S4 **l_175 = &l_174;
                int l_183 = (-1L);
                char *l_184 = &g_59.f0.f8;
                unsigned *l_187 = &l_54;
                (*l_175) = l_174;
                (*p_34) = ((safe_rshift_func_uint16_t_u_s(l_103, (g_85 = ((l_178 >= (safe_rshift_func_int8_t_s_s((((*l_184) = (safe_sub_func_uint32_t_u_u(l_183, l_178))) ^ (0x09L > (l_103 & ((*l_187) = ((safe_lshift_func_int8_t_s_s(l_164, (**l_106))) || l_178))))), 6))) > l_178)))) ^ l_164);
                l_183 = (safe_sub_func_int16_t_s_s((**l_106), (**l_106)));
                l_191 = l_190;
            }
            else
            {
                short l_203 = 0xBC63L;
                int l_219 = 0x7F20AB2CL;
                struct S6 *l_232 = &g_10;
                if ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_lshift_func_int16_t_s_s((-6L), (((l_191.f3 <= g_59.f1) <= (1L > ((*l_153) = (safe_sub_func_uint8_t_u_u((((l_200 == (*p_34)) == (safe_sub_func_uint16_t_u_u((l_153 == (void*)0), ((g_76.f4 && (**l_106)) ^ l_203)))) != 0L), 0xAAL))))) == g_10.f3.f7.f6))) <= l_203) <= 0x82D6L) && (**l_106)), 7)), 0x84A7A52A20E4E1FBLL)))
                {
                    unsigned l_220 = 0x204FFAC9L;
                    (*g_68) = l_203;
                    if ((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((((*p_34) || ((*g_35) = (safe_lshift_func_int16_t_s_s(((**l_106) = g_119.f4.f2), 6)))) == (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_191.f2, l_203)), (safe_unary_minus_func_int8_t_s((6L || (((safe_add_func_uint32_t_u_u(g_76.f1, (l_219 = (l_217 != g_218)))) > l_220) < g_171.f1.f3))))))), 2)), l_190.f1)))
                    {
                        (*l_106) = (*p_33);
                    }
                    else
                    {
                        unsigned long long l_221 = 1UL;
                        g_68 = (*p_33);
                        (*p_34) = (0L ^ ((l_221 < l_191.f3) != 3UL));
                    }
                    (*p_34) = l_191.f5;
                }
                else
                {
                    l_222 = (void*)0;
                    return g_119.f2;
                }
                if ((*g_35))
                {
                    struct S1 l_223 = {0x202AL,0xDC1FB827L,0L,0UL,0x8DL,0L,0x77L,65530UL,-4L,0xA65DL};
                    return l_223;
                }
                else
                {
                    int *l_230 = (void*)0;
                    int *l_231 = &g_171.f0;
                    struct S6 **l_233 = (void*)0;
                    struct S6 **l_234 = &l_232;
                    for (g_171.f0 = 0; (g_171.f0 < (-10)); g_171.f0--)
                    {
                        struct S4 **l_227 = &g_226;
                        (*l_227) = g_226;
                        (*l_106) = &g_36;
                    }
                    (*l_231) = ((*g_35) = (safe_rshift_func_int8_t_s_s((*l_222), (*l_222))));
                    (*l_234) = l_232;
                }
            }
            (*g_35) = 0x4B7A8BAAL;
        }
    }
    return l_173;
}







static struct S2 * func_37(struct S2 * p_38, short p_39, struct S0 p_40)
{
    struct S0 *l_82 = &g_80;
    struct S0 **l_81 = &l_82;
    int **l_83 = &g_68;
    short *l_84 = &g_85;
    struct S2 **l_86 = &g_75;
    (*l_81) = (void*)0;
    (*g_68) = (*g_35);
    (*l_86) = func_41(l_83, (*l_83), g_80.f4, l_84, &g_68);
    return (*l_86);
}







static struct S2 * func_41(int ** p_42, int * p_43, int p_44, short * p_45, int ** p_46)
{
    int **l_74 = &g_68;
    struct S2 **l_77 = &g_75;
    (*l_74) = &g_69;
    (*l_74) = &g_36;
    (*l_77) = g_75;
    for (g_59.f0.f8 = (-20); (g_59.f0.f8 > 7); ++g_59.f0.f8)
    {
        return (*l_77);
    }
    return (*l_77);
}







static int ** func_47(int * p_48, unsigned char p_49, int p_50)
{
    short l_55 = 1L;
    int l_66 = (-7L);
    int **l_67 = (void*)0;
    (*g_35) = l_55;
    for (g_36 = (-28); (g_36 > 2); ++g_36)
    {
        struct S7 **l_60 = &g_58;
        int l_65 = 0x862FE7C9L;
        (*l_60) = g_58;
        l_65 = (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(p_49, p_50)), l_55));
    }
    l_66 = (p_50 != (p_49 || p_50));
    return l_67;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_10.f0, "g_10.f0", print_hash_value);
    transparent_crc(g_10.f1, "g_10.f1", print_hash_value);
    transparent_crc(g_10.f2, "g_10.f2", print_hash_value);
    transparent_crc(g_10.f3.f0, "g_10.f3.f0", print_hash_value);
    transparent_crc(g_10.f3.f1, "g_10.f3.f1", print_hash_value);
    transparent_crc(g_10.f3.f2, "g_10.f3.f2", print_hash_value);
    transparent_crc(g_10.f3.f3, "g_10.f3.f3", print_hash_value);
    transparent_crc(g_10.f3.f4, "g_10.f3.f4", print_hash_value);
    transparent_crc(g_10.f3.f5, "g_10.f3.f5", print_hash_value);
    transparent_crc(g_10.f3.f6, "g_10.f3.f6", print_hash_value);
    transparent_crc(g_10.f3.f7.f0, "g_10.f3.f7.f0", print_hash_value);
    transparent_crc(g_10.f3.f7.f1, "g_10.f3.f7.f1", print_hash_value);
    transparent_crc(g_10.f3.f7.f2, "g_10.f3.f7.f2", print_hash_value);
    transparent_crc(g_10.f3.f7.f3, "g_10.f3.f7.f3", print_hash_value);
    transparent_crc(g_10.f3.f7.f4, "g_10.f3.f7.f4", print_hash_value);
    transparent_crc(g_10.f3.f7.f5, "g_10.f3.f7.f5", print_hash_value);
    transparent_crc(g_10.f3.f7.f6, "g_10.f3.f7.f6", print_hash_value);
    transparent_crc(g_10.f3.f7.f7, "g_10.f3.f7.f7", print_hash_value);
    transparent_crc(g_10.f3.f7.f8, "g_10.f3.f7.f8", print_hash_value);
    transparent_crc(g_10.f3.f7.f9, "g_10.f3.f7.f9", print_hash_value);
    transparent_crc(g_10.f3.f8, "g_10.f3.f8", print_hash_value);
    transparent_crc(g_10.f4, "g_10.f4", print_hash_value);
    transparent_crc(g_10.f5, "g_10.f5", print_hash_value);
    transparent_crc(g_10.f6, "g_10.f6", print_hash_value);
    transparent_crc(g_10.f7, "g_10.f7", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_59.f0.f0, "g_59.f0.f0", print_hash_value);
    transparent_crc(g_59.f0.f1, "g_59.f0.f1", print_hash_value);
    transparent_crc(g_59.f0.f2, "g_59.f0.f2", print_hash_value);
    transparent_crc(g_59.f0.f3, "g_59.f0.f3", print_hash_value);
    transparent_crc(g_59.f0.f4, "g_59.f0.f4", print_hash_value);
    transparent_crc(g_59.f0.f5, "g_59.f0.f5", print_hash_value);
    transparent_crc(g_59.f0.f6, "g_59.f0.f6", print_hash_value);
    transparent_crc(g_59.f0.f7.f0, "g_59.f0.f7.f0", print_hash_value);
    transparent_crc(g_59.f0.f7.f1, "g_59.f0.f7.f1", print_hash_value);
    transparent_crc(g_59.f0.f7.f2, "g_59.f0.f7.f2", print_hash_value);
    transparent_crc(g_59.f0.f7.f3, "g_59.f0.f7.f3", print_hash_value);
    transparent_crc(g_59.f0.f7.f4, "g_59.f0.f7.f4", print_hash_value);
    transparent_crc(g_59.f0.f7.f5, "g_59.f0.f7.f5", print_hash_value);
    transparent_crc(g_59.f0.f7.f6, "g_59.f0.f7.f6", print_hash_value);
    transparent_crc(g_59.f0.f7.f7, "g_59.f0.f7.f7", print_hash_value);
    transparent_crc(g_59.f0.f7.f8, "g_59.f0.f7.f8", print_hash_value);
    transparent_crc(g_59.f0.f7.f9, "g_59.f0.f7.f9", print_hash_value);
    transparent_crc(g_59.f0.f8, "g_59.f0.f8", print_hash_value);
    transparent_crc(g_59.f1, "g_59.f1", print_hash_value);
    transparent_crc(g_59.f2, "g_59.f2", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_76.f0, "g_76.f0", print_hash_value);
    transparent_crc(g_76.f1, "g_76.f1", print_hash_value);
    transparent_crc(g_76.f2, "g_76.f2", print_hash_value);
    transparent_crc(g_76.f3, "g_76.f3", print_hash_value);
    transparent_crc(g_76.f4, "g_76.f4", print_hash_value);
    transparent_crc(g_76.f5, "g_76.f5", print_hash_value);
    transparent_crc(g_76.f6, "g_76.f6", print_hash_value);
    transparent_crc(g_76.f7, "g_76.f7", print_hash_value);
    transparent_crc(g_76.f8, "g_76.f8", print_hash_value);
    transparent_crc(g_80.f0, "g_80.f0", print_hash_value);
    transparent_crc(g_80.f1, "g_80.f1", print_hash_value);
    transparent_crc(g_80.f2, "g_80.f2", print_hash_value);
    transparent_crc(g_80.f3, "g_80.f3", print_hash_value);
    transparent_crc(g_80.f4, "g_80.f4", print_hash_value);
    transparent_crc(g_80.f5, "g_80.f5", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1.f0, "g_119.f1.f0", print_hash_value);
    transparent_crc(g_119.f1.f1, "g_119.f1.f1", print_hash_value);
    transparent_crc(g_119.f1.f2, "g_119.f1.f2", print_hash_value);
    transparent_crc(g_119.f1.f3, "g_119.f1.f3", print_hash_value);
    transparent_crc(g_119.f1.f4, "g_119.f1.f4", print_hash_value);
    transparent_crc(g_119.f1.f5, "g_119.f1.f5", print_hash_value);
    transparent_crc(g_119.f1.f6, "g_119.f1.f6", print_hash_value);
    transparent_crc(g_119.f1.f7, "g_119.f1.f7", print_hash_value);
    transparent_crc(g_119.f1.f8, "g_119.f1.f8", print_hash_value);
    transparent_crc(g_119.f2.f0, "g_119.f2.f0", print_hash_value);
    transparent_crc(g_119.f2.f1, "g_119.f2.f1", print_hash_value);
    transparent_crc(g_119.f2.f2, "g_119.f2.f2", print_hash_value);
    transparent_crc(g_119.f2.f3, "g_119.f2.f3", print_hash_value);
    transparent_crc(g_119.f2.f4, "g_119.f2.f4", print_hash_value);
    transparent_crc(g_119.f2.f5, "g_119.f2.f5", print_hash_value);
    transparent_crc(g_119.f2.f6, "g_119.f2.f6", print_hash_value);
    transparent_crc(g_119.f2.f7, "g_119.f2.f7", print_hash_value);
    transparent_crc(g_119.f2.f8, "g_119.f2.f8", print_hash_value);
    transparent_crc(g_119.f2.f9, "g_119.f2.f9", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4.f0, "g_119.f4.f0", print_hash_value);
    transparent_crc(g_119.f4.f1, "g_119.f4.f1", print_hash_value);
    transparent_crc(g_119.f4.f2, "g_119.f4.f2", print_hash_value);
    transparent_crc(g_119.f4.f3, "g_119.f4.f3", print_hash_value);
    transparent_crc(g_119.f4.f4, "g_119.f4.f4", print_hash_value);
    transparent_crc(g_119.f4.f5, "g_119.f4.f5", print_hash_value);
    transparent_crc(g_119.f4.f6, "g_119.f4.f6", print_hash_value);
    transparent_crc(g_119.f4.f7, "g_119.f4.f7", print_hash_value);
    transparent_crc(g_119.f4.f8, "g_119.f4.f8", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1.f0, "g_171.f1.f0", print_hash_value);
    transparent_crc(g_171.f1.f1, "g_171.f1.f1", print_hash_value);
    transparent_crc(g_171.f1.f2, "g_171.f1.f2", print_hash_value);
    transparent_crc(g_171.f1.f3, "g_171.f1.f3", print_hash_value);
    transparent_crc(g_171.f1.f4, "g_171.f1.f4", print_hash_value);
    transparent_crc(g_171.f1.f5, "g_171.f1.f5", print_hash_value);
    transparent_crc(g_171.f1.f6, "g_171.f1.f6", print_hash_value);
    transparent_crc(g_171.f1.f7, "g_171.f1.f7", print_hash_value);
    transparent_crc(g_171.f1.f8, "g_171.f1.f8", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_274.f4, "g_274.f4", print_hash_value);
    transparent_crc(g_274.f5, "g_274.f5", print_hash_value);
    transparent_crc(g_274.f6, "g_274.f6", print_hash_value);
    transparent_crc(g_274.f7.f0, "g_274.f7.f0", print_hash_value);
    transparent_crc(g_274.f7.f1, "g_274.f7.f1", print_hash_value);
    transparent_crc(g_274.f7.f2, "g_274.f7.f2", print_hash_value);
    transparent_crc(g_274.f7.f3, "g_274.f7.f3", print_hash_value);
    transparent_crc(g_274.f7.f4, "g_274.f7.f4", print_hash_value);
    transparent_crc(g_274.f7.f5, "g_274.f7.f5", print_hash_value);
    transparent_crc(g_274.f7.f6, "g_274.f7.f6", print_hash_value);
    transparent_crc(g_274.f7.f7, "g_274.f7.f7", print_hash_value);
    transparent_crc(g_274.f7.f8, "g_274.f7.f8", print_hash_value);
    transparent_crc(g_274.f7.f9, "g_274.f7.f9", print_hash_value);
    transparent_crc(g_274.f8, "g_274.f8", print_hash_value);
    transparent_crc(g_276.f0, "g_276.f0", print_hash_value);
    transparent_crc(g_276.f1, "g_276.f1", print_hash_value);
    transparent_crc(g_276.f2, "g_276.f2", print_hash_value);
    transparent_crc(g_276.f3, "g_276.f3", print_hash_value);
    transparent_crc(g_276.f4, "g_276.f4", print_hash_value);
    transparent_crc(g_276.f5, "g_276.f5", print_hash_value);
    transparent_crc(g_276.f6, "g_276.f6", print_hash_value);
    transparent_crc(g_276.f7.f0, "g_276.f7.f0", print_hash_value);
    transparent_crc(g_276.f7.f1, "g_276.f7.f1", print_hash_value);
    transparent_crc(g_276.f7.f2, "g_276.f7.f2", print_hash_value);
    transparent_crc(g_276.f7.f3, "g_276.f7.f3", print_hash_value);
    transparent_crc(g_276.f7.f4, "g_276.f7.f4", print_hash_value);
    transparent_crc(g_276.f7.f5, "g_276.f7.f5", print_hash_value);
    transparent_crc(g_276.f7.f6, "g_276.f7.f6", print_hash_value);
    transparent_crc(g_276.f7.f7, "g_276.f7.f7", print_hash_value);
    transparent_crc(g_276.f7.f8, "g_276.f7.f8", print_hash_value);
    transparent_crc(g_276.f7.f9, "g_276.f7.f9", print_hash_value);
    transparent_crc(g_276.f8, "g_276.f8", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f1, "g_298.f1", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    transparent_crc(g_298.f3, "g_298.f3", print_hash_value);
    transparent_crc(g_298.f4, "g_298.f4", print_hash_value);
    transparent_crc(g_298.f5, "g_298.f5", print_hash_value);
    transparent_crc(g_298.f6, "g_298.f6", print_hash_value);
    transparent_crc(g_298.f7, "g_298.f7", print_hash_value);
    transparent_crc(g_298.f8, "g_298.f8", print_hash_value);
    transparent_crc(g_298.f9, "g_298.f9", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_362.f0, "g_362.f0", print_hash_value);
    transparent_crc(g_362.f1.f0, "g_362.f1.f0", print_hash_value);
    transparent_crc(g_362.f1.f1, "g_362.f1.f1", print_hash_value);
    transparent_crc(g_362.f1.f2, "g_362.f1.f2", print_hash_value);
    transparent_crc(g_362.f1.f3, "g_362.f1.f3", print_hash_value);
    transparent_crc(g_362.f1.f4, "g_362.f1.f4", print_hash_value);
    transparent_crc(g_362.f1.f5, "g_362.f1.f5", print_hash_value);
    transparent_crc(g_362.f1.f6, "g_362.f1.f6", print_hash_value);
    transparent_crc(g_362.f1.f7, "g_362.f1.f7", print_hash_value);
    transparent_crc(g_362.f1.f8, "g_362.f1.f8", print_hash_value);
    transparent_crc(g_362.f2.f0, "g_362.f2.f0", print_hash_value);
    transparent_crc(g_362.f2.f1, "g_362.f2.f1", print_hash_value);
    transparent_crc(g_362.f2.f2, "g_362.f2.f2", print_hash_value);
    transparent_crc(g_362.f2.f3, "g_362.f2.f3", print_hash_value);
    transparent_crc(g_362.f2.f4, "g_362.f2.f4", print_hash_value);
    transparent_crc(g_362.f2.f5, "g_362.f2.f5", print_hash_value);
    transparent_crc(g_362.f2.f6, "g_362.f2.f6", print_hash_value);
    transparent_crc(g_362.f2.f7, "g_362.f2.f7", print_hash_value);
    transparent_crc(g_362.f2.f8, "g_362.f2.f8", print_hash_value);
    transparent_crc(g_362.f2.f9, "g_362.f2.f9", print_hash_value);
    transparent_crc(g_362.f3, "g_362.f3", print_hash_value);
    transparent_crc(g_362.f4.f0, "g_362.f4.f0", print_hash_value);
    transparent_crc(g_362.f4.f1, "g_362.f4.f1", print_hash_value);
    transparent_crc(g_362.f4.f2, "g_362.f4.f2", print_hash_value);
    transparent_crc(g_362.f4.f3, "g_362.f4.f3", print_hash_value);
    transparent_crc(g_362.f4.f4, "g_362.f4.f4", print_hash_value);
    transparent_crc(g_362.f4.f5, "g_362.f4.f5", print_hash_value);
    transparent_crc(g_362.f4.f6, "g_362.f4.f6", print_hash_value);
    transparent_crc(g_362.f4.f7, "g_362.f4.f7", print_hash_value);
    transparent_crc(g_362.f4.f8, "g_362.f4.f8", print_hash_value);
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_370.f1, "g_370.f1", print_hash_value);
    transparent_crc(g_370.f2, "g_370.f2", print_hash_value);
    transparent_crc(g_370.f3, "g_370.f3", print_hash_value);
    transparent_crc(g_370.f4, "g_370.f4", print_hash_value);
    transparent_crc(g_370.f5, "g_370.f5", print_hash_value);
    transparent_crc(g_370.f6, "g_370.f6", print_hash_value);
    transparent_crc(g_370.f7, "g_370.f7", print_hash_value);
    transparent_crc(g_370.f8, "g_370.f8", print_hash_value);
    transparent_crc(g_386.f0, "g_386.f0", print_hash_value);
    transparent_crc(g_386.f1, "g_386.f1", print_hash_value);
    transparent_crc(g_386.f2, "g_386.f2", print_hash_value);
    transparent_crc(g_386.f3, "g_386.f3", print_hash_value);
    transparent_crc(g_386.f4, "g_386.f4", print_hash_value);
    transparent_crc(g_386.f5, "g_386.f5", print_hash_value);
    transparent_crc(g_386.f6, "g_386.f6", print_hash_value);
    transparent_crc(g_386.f7, "g_386.f7", print_hash_value);
    transparent_crc(g_386.f8, "g_386.f8", print_hash_value);
    transparent_crc(g_386.f9, "g_386.f9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
