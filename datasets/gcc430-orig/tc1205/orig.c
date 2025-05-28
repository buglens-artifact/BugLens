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
   unsigned f0 : 9;
   unsigned f1 : 26;
   signed f2 : 20;
   signed f3 : 16;
};

union U1 {
   volatile int f0;
};


static int g_22 = 0xD64F6899L;
static int g_26 = 3L;
static int g_27 = 0xFCA86293L;
static volatile int g_28 = 1L;
static int g_29[2] = {(-7L), (-7L)};
static volatile int g_30 = 0x5FC0266DL;
static volatile int g_31 = (-10L);
static volatile int g_32[2] = {0x663C10B4L, 0x663C10B4L};
static volatile int g_33 = 0x20461302L;
static int g_34 = 0xAAF7CC73L;
static volatile union U1 g_97 = {5L};
static long long g_121[10][8] = {{(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}, {(-1L), (-1L), (-1L), 9L, 0x059AB7399A04901ELL, 0xF2B5946A6819D978LL, 0x059AB7399A04901ELL, 9L}};
static char g_165 = 0L;
static unsigned g_171 = 9UL;
static long long g_172 = (-2L);
static unsigned char g_174 = 255UL;
static short g_199 = (-1L);
static unsigned short g_200 = 9UL;
static struct S0 g_211 = {16,2568,-88,19};
static volatile unsigned char g_212 = 255UL;
static int g_232 = (-6L);
static int g_252 = 0xB15AC9E3L;
static short g_253[2] = {0xA795L, 0xA795L};
static int g_254 = 0x0B48FF07L;
static unsigned char g_255 = 248UL;
static unsigned char g_296 = 0UL;
static unsigned long long g_298 = 0xD6E7AD38D5E84937LL;
static short g_303 = 0x6996L;
static union U1 g_330 = {1L};
static unsigned g_335 = 0x761C2720L;
static union U1 g_363 = {-1L};
static union U1 g_402[9] = {{0x2B65BB6EL}, {0xEF186581L}, {0x2B65BB6EL}, {0xEF186581L}, {0x2B65BB6EL}, {0xEF186581L}, {0x2B65BB6EL}, {0xEF186581L}, {0x2B65BB6EL}};
static unsigned char g_425 = 254UL;
static union U1 g_497 = {0x720DDE00L};
static union U1 g_498 = {-1L};
static int g_608 = 0x38054D5CL;
static unsigned short g_731 = 0x0506L;
static volatile unsigned char g_747 = 255UL;
static int g_800 = 0L;
static unsigned short g_813 = 0x1BB7L;
static volatile union U1 g_865 = {-4L};
static unsigned g_983 = 4294967292UL;
static union U1 g_1029[8] = {{0L}, {0xE51A7CC5L}, {0L}, {0xE51A7CC5L}, {0L}, {0xE51A7CC5L}, {0L}, {0xE51A7CC5L}};
static unsigned long long g_1051 = 0UL;
static struct S0 g_1096 = {0,1615,-554,40};
static int g_1098 = 0x43967F05L;
static struct S0 g_1111 = {11,5026,-457,-1};



static unsigned long long func_1(void);
static struct S0 func_2(struct S0 p_3, char p_4, unsigned p_5, struct S0 p_6);
static struct S0 func_7(unsigned char p_8);
static unsigned func_9(short p_10);
static short func_11(int p_12, struct S0 p_13, char p_14, unsigned short p_15, int p_16);
static unsigned short func_23(unsigned long long p_24);
static union U1 func_42(int p_43, short p_44, int p_45, int p_46, unsigned p_47);
static unsigned func_58(short p_59, unsigned p_60, long long p_61, long long p_62);
static struct S0 func_71(int p_72, unsigned long long p_73);
static unsigned long long func_74(unsigned long long p_75, short p_76, unsigned p_77);
static unsigned long long func_1(void)
{
    unsigned l_21 = 18446744073709551612UL;
    struct S0 l_814[1] = {{13,5064,740,91}};
    int l_815 = 0x58656EAFL;
    struct S0 l_1075 = {17,2599,203,247};
    int i;
    g_1111 = func_2(func_7(((((func_9(func_11((((safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((0xCDEDFC3EL || (-4L)), (((0xC2F9L == (0xE67684593F6A0837LL <= ((l_21 && g_22) < func_23(l_21)))) , func_58(g_27, l_21, l_21, l_21)) , g_211.f1))), g_22)) || g_121[9][4]) < 4294967295UL), l_814[0], l_21, g_252, l_815)) , g_31) | 5L) == l_814[0].f1) , g_22)), g_252, l_814[0].f3, l_1075);
    g_1111 = g_1111;
    return l_1075.f0;
}







static struct S0 func_2(struct S0 p_3, char p_4, unsigned p_5, struct S0 p_6)
{
    long long l_1077[4];
    int l_1078 = 0L;
    int l_1079 = 0xDAD6764AL;
    int l_1080 = 2L;
    int l_1081 = 7L;
    int l_1082 = 1L;
    int l_1083 = (-1L);
    int l_1084 = 0x46DE5D96L;
    int l_1085[6];
    short l_1086[8][7][4] = {{{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}, {{0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}, {0xDEA6L, (-1L), (-5L), (-1L)}}};
    unsigned short l_1087 = 0x5FE1L;
    int l_1097[8][8] = {{(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}, {(-1L), 0x200B3F07L, 0L, 0x3710346FL, 0x382B41AEL, 0x382B41AEL, 0x3710346FL, 0L}};
    unsigned l_1099 = 0x2DEBF89FL;
    unsigned short l_1102 = 0xFD1BL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1077[i] = (-7L);
    for (i = 0; i < 6; i++)
        l_1085[i] = (-1L);
    for (g_252 = 0; (g_252 <= 1); g_252 += 1)
    {
        int l_1076[6];
        int i;
        for (i = 0; i < 6; i++)
            l_1076[i] = 0x97B0FB15L;
        l_1087--;
        g_1096 = func_71((p_3.f0 || (g_22 , (((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u(((0xE68E5B6AL <= (p_6.f3 & ((safe_rshift_func_int8_t_s_u(func_23(((p_3.f3 , g_199) , (l_1077[0] != g_253[1]))), 3)) != l_1076[5]))) , 65528UL), l_1086[1][0][1])), l_1079)) , (-1L)) >= p_6.f2))), p_6.f0);
    }
    l_1099++;
    ++l_1102;
    p_6.f2 |= func_11(g_813, func_7(g_171), (safe_rshift_func_uint16_t_u_u(l_1086[1][1][0], p_3.f2)), (((p_3.f2 | ((-10L) != (l_1085[1] &= (safe_sub_func_int16_t_s_s(((l_1083 = ((!(safe_lshift_func_int16_t_s_s((l_1082 ^= l_1097[0][4]), 13))) , g_252)) != 0x48A1A80082B8DC2FLL), l_1077[3]))))) && g_199) | g_1098), g_425);
    return g_211;
}







static struct S0 func_7(unsigned char p_8)
{
    long long l_984 = (-1L);
    int l_1008 = (-2L);
    int l_1044 = (-1L);
    int l_1049[7] = {(-2L), 0x338CC701L, (-2L), 0x338CC701L, (-2L), 0x338CC701L, (-2L)};
    unsigned l_1055 = 18446744073709551615UL;
    unsigned char l_1065 = 0xB5L;
    int l_1066 = 1L;
    struct S0 l_1074 = {9,1463,-112,-42};
    int i;
    l_984 = p_8;
    for (l_984 = 1; (l_984 >= 0); l_984 -= 1)
    {
        unsigned l_1004 = 0xF491AA8CL;
        int l_1006 = 9L;
        int l_1023 = (-7L);
        int l_1034 = 0xA8006D61L;
        int l_1050 = 0xC97866D4L;
        int l_1068 = 0xABE2FC16L;
        int l_1069 = 0x84E85A30L;
        int l_1070[4] = {0x6CB20E7DL, 0x30A62F08L, 0x6CB20E7DL, 0x30A62F08L};
        int i;
        for (g_26 = 0; (g_26 <= 1); g_26 += 1)
        {
            long long l_1005 = (-1L);
            int l_1007 = (-9L);
            int i, j;
            l_1008 ^= func_74(((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((g_121[(l_984 + 5)][(g_26 + 5)] || 0x8AL) == (safe_add_func_uint16_t_u_u(g_121[l_984][(g_26 + 2)], (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_29[g_26], func_58(g_29[l_984], ((((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s((g_253[g_26] ^ (safe_unary_minus_func_uint32_t_u((g_983++)))), (((safe_sub_func_int32_t_s_s((l_1004 |= ((-1L) == 0x2FE151346DD6E854LL)), (g_330.f0 != p_8))) || l_984) > l_984))), 7L)) , 0x8B1E8451CD5F2EC7LL) , g_335) , g_29[1]), g_29[l_984], p_8))), p_8))))) & p_8), 0x4B4DL)), l_1005)) >= l_1006), l_1007, l_1006);
            g_211.f2 ^= g_330.f0;
        }
        for (p_8 = 0; (p_8 <= 1); p_8 += 1)
        {
            struct S0 l_1024 = {0,6410,-21,-52};
            int l_1042 = 0x93D37689L;
            int l_1046[10][5] = {{1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}, {1L, (-1L), 5L, 0x109E38D9L, 0x9D82C3E8L}};
            int l_1047[7][1][9] = {{{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}, {{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}, {{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}, {{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}, {{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}, {{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}, {{0xAC8E330BL, 0L, 0xF3BB562FL, 0L, 0xAC8E330BL, (-2L), (-8L), 0L, 0x40391CA7L}}};
            unsigned long long l_1054[9][8][3] = {{{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}, {{18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}, {18446744073709551615UL, 18446744073709551611UL, 18446744073709551610UL}}};
            char l_1067 = 0L;
            unsigned l_1071[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1071[i] = 0xA5B73032L;
            for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
            {
                unsigned long long l_1035[8] = {0x7D906862827F9722LL, 0x7D906862827F9722LL, 18446744073709551611UL, 0x7D906862827F9722LL, 0x7D906862827F9722LL, 18446744073709551611UL, 0x7D906862827F9722LL, 0x7D906862827F9722LL};
                int i, j;
                l_1024 = func_71(g_121[(l_984 + 2)][(p_8 + 5)], (safe_mul_func_int8_t_s_s(func_58((((safe_rshift_func_uint16_t_u_s(g_29[l_984], (((l_1006 = g_29[l_984]) >= (4UL == (g_363 , (safe_mod_func_int16_t_s_s(g_253[g_22], (safe_lshift_func_int8_t_s_u(g_253[p_8], (l_1023 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((g_32[1] < ((p_8 & p_8) , g_211.f1)), 0xFEEEL)), g_253[p_8])))))))))) > l_984))) >= l_1004) || g_26), g_253[p_8], p_8, p_8), p_8)));
                g_29[l_984] = (((1UL ^ (((safe_sub_func_uint8_t_u_u(g_253[0], g_335)) , (safe_sub_func_uint8_t_u_u(p_8, p_8))) | ((g_1029[6] , g_330.f0) && g_253[g_22]))) > ((!(safe_add_func_int64_t_s_s(p_8, p_8))) < g_303)) < 9UL);
                for (g_255 = 0; (g_255 <= 1); g_255 += 1)
                {
                    char l_1032 = 6L;
                    int l_1033 = 2L;
                    ++l_1035[6];
                }
                l_1006 = p_8;
            }
            for (g_303 = 0; (g_303 <= 1); g_303 += 1)
            {
                char l_1043 = 0x59L;
                int l_1045 = 0x9B7DA330L;
                int l_1048 = 6L;
                struct S0 l_1056[10][5][1] = {{{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}, {{{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}, {{3,1135,724,-191}}}};
                int i, j, k;
                g_97.f0 ^= 2L;
                if ((safe_lshift_func_int8_t_s_s((l_1024.f2 |= ((p_8 & (((safe_lshift_func_uint8_t_u_u((g_32[1] , (p_8 || l_1008)), l_1024.f1)) <= p_8) | (g_199 < g_731))) && ((-1L) & g_497.f0))), g_199)))
                {
                    ++g_1051;
                    if (l_1054[1][6][0])
                        continue;
                }
                else
                {
                    l_1056[8][3][0] = func_71(((g_983 = l_1055) && g_253[1]), p_8);
                    g_29[1] = g_165;
                }
                l_1056[8][3][0].f3 = (func_58(p_8, (((safe_div_func_int8_t_s_s(g_34, (safe_mul_func_uint8_t_u_u(func_74(((safe_mul_func_uint16_t_u_u(g_255, func_58(((g_298 &= l_1048) && l_1050), l_1044, p_8, (safe_sub_func_uint64_t_u_u(((l_1023 , func_58(g_121[9][4], l_1043, g_26, l_1049[1])) || 0xD8C9L), l_1065))))) <= p_8), p_8, g_608), g_425)))) && l_1008) && 0UL), l_1066, g_983) & l_1006);
            }
            l_1071[1]++;
        }
    }
    l_1074 = g_211;
    return l_1074;
}







static unsigned func_9(short p_10)
{
    unsigned char l_972 = 1UL;
    int l_980 = 0L;
    int l_981 = 0x9E50F783L;
    int l_982 = 0xA7BF7F6FL;
    g_983 &= (safe_add_func_uint64_t_u_u((((((p_10 & (!((--l_972) && ((safe_unary_minus_func_uint16_t_u((g_252 == (safe_sub_func_uint64_t_u_u((1L && (p_10 == 0L)), (l_982 ^= ((p_10 , func_58(func_23(((p_10 , l_972) && (safe_add_func_uint32_t_u_u((l_980 = l_972), g_253[1])))), g_800, g_252, l_981)) != p_10))))))) , g_212)))) <= (-4L)) | l_981) | g_22) || l_980), 0xD155D3091E3B4E40LL));
    l_981 = g_211.f0;
    return p_10;
}







static short func_11(int p_12, struct S0 p_13, char p_14, unsigned short p_15, int p_16)
{
    long long l_850 = (-1L);
    int l_854 = 1L;
    unsigned long long l_870 = 0xEA9BD6D27FE1BE71LL;
    unsigned l_878 = 0xD5391290L;
    short l_879[4] = {0x522AL, 0x726FL, 0x522AL, 0x726FL};
    struct S0 l_880 = {3,6616,917,6};
    int l_882 = 4L;
    int l_883[9][2][10] = {{{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}, {{1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}, {1L, 0x1BEE7ABFL, 0L, 1L, 0x37AB0D70L, 0xBEAF439FL, 0xBEAF439FL, 0x37AB0D70L, 1L, 0L}}};
    int l_913 = 9L;
    unsigned char l_967 = 0xF6L;
    int i, j, k;
    for (g_26 = 0; (g_26 <= (-22)); --g_26)
    {
        unsigned long long l_818 = 18446744073709551615UL;
        int l_851 = 0x82E057A4L;
        short l_853[3][3][5] = {{{0x782DL, 1L, 0x782DL, 1L, 0x782DL}, {0x782DL, 1L, 0x782DL, 1L, 0x782DL}, {0x782DL, 1L, 0x782DL, 1L, 0x782DL}}, {{0x782DL, 1L, 0x782DL, 1L, 0x782DL}, {0x782DL, 1L, 0x782DL, 1L, 0x782DL}, {0x782DL, 1L, 0x782DL, 1L, 0x782DL}}, {{0x782DL, 1L, 0x782DL, 1L, 0x782DL}, {0x782DL, 1L, 0x782DL, 1L, 0x782DL}, {0x782DL, 1L, 0x782DL, 1L, 0x782DL}}};
        unsigned long long l_855 = 4UL;
        int l_881 = 0L;
        int l_884 = 0x7FC536B3L;
        long long l_885 = 1L;
        int l_886 = (-3L);
        unsigned l_887 = 0x0F3C71CAL;
        short l_894 = 1L;
        int i, j, k;
        l_818 ^= g_211.f0;
        for (g_425 = 0; (g_425 > 34); g_425++)
        {
            short l_827 = 4L;
            int l_856 = 0xE4B127EEL;
            for (g_199 = 15; (g_199 > (-12)); g_199--)
            {
                for (g_165 = 6; (g_165 != (-13)); g_165--)
                {
                    if ((g_29[1] = (safe_rshift_func_int8_t_s_s(l_827, 0))))
                    {
                        return g_253[0];
                    }
                    else
                    {
                        p_13.f3 = p_16;
                    }
                }
                if (g_255)
                    break;
            }
            for (p_12 = 1; (p_12 >= 0); p_12 -= 1)
            {
                int l_852[6];
                unsigned char l_873 = 0UL;
                int i;
                for (i = 0; i < 6; i++)
                    l_852[i] = (-4L);
                g_29[p_12] = ((safe_lshift_func_int16_t_s_s(g_29[p_12], (func_58((l_854 = (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(g_29[p_12], (func_58(((g_211.f1 |= (g_335--)) < (((l_852[0] ^= (g_253[p_12] & (l_851 ^= (0UL >= func_58((g_303 = g_34), (0x49L < (safe_rshift_func_int8_t_s_s((((safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((l_827 && (safe_mod_func_uint32_t_u_u((((((safe_mod_func_int32_t_s_s(p_13.f0, (safe_sub_func_int16_t_s_s(g_29[p_12], g_172)))) < l_850) | l_850) || 0UL) < l_850), 1UL))), l_850)) ^ g_253[1]) && g_498.f0), 0)) , g_22), 0x86E628A8L)) >= p_13.f2) , l_818), 3))), g_200, p_16))))) , p_14) < (-4L))), l_850, l_853[1][2][1], g_211.f3) , l_827))), 10))), g_296, g_27, g_813) != 1L))) , (-10L));
                l_856 |= (l_855 = g_211.f0);
                g_363.f0 = (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((--g_255), p_13.f2)) <= (g_865 , l_850)), p_13.f2)) , 4UL) | p_13.f2), 0));
                p_13.f3 &= (+((((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(0x30361C5A109E4502LL, l_870)), (safe_rshift_func_int16_t_s_s((l_854 |= (-3L)), l_873)))) < l_852[3]) & (((((safe_lshift_func_int8_t_s_s((g_22 != (safe_mod_func_int16_t_s_s((p_13.f1 != ((func_58(g_97.f0, ((l_851 ^= 0x674DL) && 0x805CL), l_850, l_878) <= 0x46ECL) && 0x692E733FL)), 0x35D4L))), 3)) > p_13.f1) < g_608) > p_13.f2) & 0UL)) != l_879[2]));
            }
            l_880 = p_13;
        }
        ++l_887;
        if ((((safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s((l_883[5][0][6] |= 0L), l_880.f1)), 0UL)) & l_884) & (func_74(g_747, p_14, g_303) , (l_894 == g_26))))
        {
            unsigned l_918 = 4294967286UL;
            g_29[1] |= func_58(g_31, (l_886 &= (((g_255 ^= l_883[4][0][2]) > (((l_885 & (p_13.f3 >= ((safe_mod_func_int64_t_s_s(0x5E4404B32EC67B81LL, g_425)) != 0xBCL))) < ((safe_add_func_uint8_t_u_u(p_14, (safe_div_func_int8_t_s_s(l_885, p_14)))) <= 0x6DE4L)) > p_13.f0)) != p_13.f2)), p_13.f2, p_13.f2);
            l_884 &= (0x3ED51BADL | (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(func_74((l_851 &= p_13.f3), ((safe_mul_func_uint8_t_u_u(l_878, p_13.f0)) && (0x57L | (safe_lshift_func_uint8_t_u_u(((((((l_913 > p_16) == ((((safe_div_func_int8_t_s_s(((((safe_mod_func_int64_t_s_s((func_74(l_818, l_818, p_12) == p_16), p_12)) && 7L) > g_608) & g_27), g_298)) | 0xBF54L) , (-1L)) <= 0xA740L)) & p_12) != p_13.f3) || g_402[4].f0) > l_918), 0)))), g_27), 1)), g_608)), p_13.f3)));
        }
        else
        {
            int l_940 = 0xFD4C2D4FL;
            int l_943[8][6] = {{(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}, {(-3L), (-3L), (-10L), 0x2209786FL, (-9L), 0x2209786FL}};
            unsigned char l_948 = 252UL;
            int i, j;
            for (l_913 = 0; (l_913 <= 25); ++l_913)
            {
                unsigned char l_921 = 5UL;
                int l_953 = 0xA8D88F80L;
                l_940 ^= ((l_921 = g_747) | (safe_div_func_uint8_t_u_u((g_174 = (safe_mod_func_uint32_t_u_u(p_13.f3, (l_883[5][0][6] = ((p_14 > (safe_mod_func_uint32_t_u_u((p_13.f1 = 0xFEE62139L), (safe_rshift_func_int8_t_s_s(p_13.f0, 4))))) ^ (safe_sub_func_uint32_t_u_u(0UL, (safe_sub_func_int8_t_s_s(p_14, p_13.f3))))))))), (safe_lshift_func_int8_t_s_u(((((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(1UL, g_731)), l_878)) & p_13.f3) ^ 0x9AEBL) <= g_34), 0)))));
                p_13 = func_71((safe_lshift_func_int8_t_s_s((0x1967L | (((p_13.f3 , (l_943[6][1] = (p_15 = g_211.f1))) & (((g_32[1] == g_800) , (l_953 = (safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((l_948 , (safe_lshift_func_int16_t_s_u(((p_16 || ((((safe_mul_func_int8_t_s_s(p_16, 0x0DL)) <= g_33) || p_13.f0) , p_13.f0)) < g_211.f2), 14))), 7)), 1UL)))) > g_121[9][4])) && 0x04L)), 0)), l_870);
            }
            return l_940;
        }
    }
    if (l_879[2])
    {
        unsigned long long l_956[7][9][4] = {{{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}, {{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}, {{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}, {{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}, {{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}, {{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}, {{1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}, {1UL, 0x0C9FA658083346B4LL, 0xF7E82DD4C433E796LL, 18446744073709551615UL}}};
        int l_961 = 0x869540B6L;
        int i, j, k;
        p_13.f3 &= ((p_15 || (p_13.f0 = ((safe_lshift_func_int16_t_s_u(g_402[4].f0, l_956[2][6][0])) == ((safe_div_func_int16_t_s_s((g_253[1] = ((g_211.f2 == ((--g_255) , p_16)) && l_913)), p_14)) < (l_961 = 0xF9D4DEDD979350DDLL))))) < (g_298++));
    }
    else
    {
        short l_964[8][3] = {{0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}, {0xEC7CL, 1L, 0x7AD6L}};
        int l_965 = (-8L);
        int l_966 = 0L;
        int i, j;
        ++l_967;
        p_13.f2 = g_211.f0;
    }
    return p_13.f2;
}







static unsigned short func_23(unsigned long long p_24)
{
    char l_25[2][3] = {{0xC3L, 0xC3L, (-1L)}, {0xC3L, 0xC3L, (-1L)}};
    unsigned short l_508[1][3];
    unsigned short l_515 = 65535UL;
    int l_518 = 0L;
    unsigned char l_525 = 8UL;
    int l_538[5][8] = {{0x213DE725L, (-8L), 0x213DE725L, 0x79E92FF5L, 0x380F93FEL, 0xCF8745D6L, 5L, 5L}, {0x213DE725L, (-8L), 0x213DE725L, 0x79E92FF5L, 0x380F93FEL, 0xCF8745D6L, 5L, 5L}, {0x213DE725L, (-8L), 0x213DE725L, 0x79E92FF5L, 0x380F93FEL, 0xCF8745D6L, 5L, 5L}, {0x213DE725L, (-8L), 0x213DE725L, 0x79E92FF5L, 0x380F93FEL, 0xCF8745D6L, 5L, 5L}, {0x213DE725L, (-8L), 0x213DE725L, 0x79E92FF5L, 0x380F93FEL, 0xCF8745D6L, 5L, 5L}};
    long long l_547 = (-1L);
    int l_548 = 0x2279B409L;
    char l_584 = (-4L);
    unsigned l_588 = 0xC47091EDL;
    unsigned l_604 = 18446744073709551610UL;
    unsigned l_605 = 18446744073709551613UL;
    int l_652 = (-1L);
    struct S0 l_654 = {19,6145,412,-196};
    long long l_688[10] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
    short l_773 = (-1L);
    struct S0 l_781 = {21,5193,-805,80};
    long long l_786 = 0x9DCA86277DC001F3LL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_508[i][j] = 3UL;
    }
    for (p_24 = 0; (p_24 <= 1); p_24 += 1)
    {
        long long l_53[10];
        int l_54[10] = {2L, 0x311EBC84L, 0x8609E00CL, 0x8609E00CL, 0x311EBC84L, 2L, 0x311EBC84L, 0x8609E00CL, 0x8609E00CL, 0x311EBC84L};
        struct S0 l_295 = {16,169,410,22};
        int i;
        for (i = 0; i < 10; i++)
            l_53[i] = 0x561F6604C38DB075LL;
        for (g_26 = 0; (g_26 <= 1); g_26 += 1)
        {
            struct S0 l_506 = {21,5544,37,119};
            int i, j;
            if (l_25[g_26][p_24])
                break;
            for (g_27 = 1; (g_27 >= 0); g_27 -= 1)
            {
                unsigned long long l_55[1][5] = {{0xAFDF115CD63CCF75LL, 0xD571E9572AB10E3ALL, 0xAFDF115CD63CCF75LL, 0xD571E9572AB10E3ALL, 0xAFDF115CD63CCF75LL}};
                int l_80 = 9L;
                int l_297[1];
                struct S0 l_507[9] = {{13,6989,-126,92}, {0,7319,-262,-230}, {13,6989,-126,92}, {0,7319,-262,-230}, {13,6989,-126,92}, {0,7319,-262,-230}, {13,6989,-126,92}, {0,7319,-262,-230}, {13,6989,-126,92}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_297[i] = 0xBB1C78F1L;
                for (g_29[1] = 0; (g_29[1] <= 1); g_29[1] += 1)
                {
                    unsigned char l_41 = 0UL;
                    unsigned long long l_48[5][6] = {{18446744073709551615UL, 18446744073709551615UL, 3UL, 18446744073709551615UL, 18446744073709551615UL, 3UL}, {18446744073709551615UL, 18446744073709551615UL, 3UL, 18446744073709551615UL, 18446744073709551615UL, 3UL}, {18446744073709551615UL, 18446744073709551615UL, 3UL, 18446744073709551615UL, 18446744073709551615UL, 3UL}, {18446744073709551615UL, 18446744073709551615UL, 3UL, 18446744073709551615UL, 18446744073709551615UL, 3UL}, {18446744073709551615UL, 18446744073709551615UL, 3UL, 18446744073709551615UL, 18446744073709551615UL, 3UL}};
                    struct S0 l_283 = {10,1386,152,222};
                    int l_285 = 1L;
                    int i, j;
                    for (g_34 = 1; (g_34 >= 0); g_34 -= 1)
                    {
                        char l_284[9] = {0L, 5L, 0L, 5L, 0L, 5L, 0L, 5L, 0L};
                        char l_499 = 0xB1L;
                        int l_500 = 0x5521EE64L;
                        int i, j;
                        l_500 = (safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_add_func_int64_t_s_s(((l_499 = ((l_41 , func_42(l_48[2][1], (safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(g_29[0], (l_55[0][4]++))) != (l_53[0] , (g_296 &= ((func_58((safe_sub_func_int8_t_s_s((l_285 ^= (safe_div_func_int8_t_s_s(((l_80 = (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((l_283 = func_71(((func_74(g_32[0], (0xE40DL && (safe_add_func_int32_t_s_s((-8L), ((g_29[1] && (p_24 || 0x17L)) != g_27)))), l_80) & p_24) > 0x79L), p_24)) , g_211.f3), l_53[9])) <= l_25[0][2]), 12))) , l_284[7]), l_25[g_26][p_24]))), g_252)), g_29[1], g_199, p_24) , l_295) , l_283.f0)))), l_297[0])), l_25[1][2], l_297[0], p_24)) , 0x72L)) != p_24), g_253[1])), 4L)), 1));
                    }
                }
                for (g_298 = 0; (g_298 >= 14); g_298++)
                {
                    unsigned l_503 = 18446744073709551606UL;
                    l_503++;
                    l_507[2] = l_506;
                }
                if (g_211.f0)
                    continue;
            }
        }
        l_508[0][2] = 0x3E3549D8L;
        if ((g_252 != (safe_sub_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_24, ((((((safe_lshift_func_uint8_t_u_s(((g_425 = l_515) & (safe_mul_func_uint16_t_u_u((l_518 = 8UL), 65528UL))), 5)) ^ ((safe_lshift_func_uint8_t_u_s((l_25[0][1] & (l_508[0][2] & l_515)), 1)) ^ (safe_unary_minus_func_int64_t_s((g_172 = g_330.f0))))) <= g_253[1]) & p_24) < 0x34738FFBL) == g_121[9][3]))) || l_54[4]), 255UL))))
        {
            unsigned long long l_524 = 0x9F0EA6DABB3B7ED9LL;
            int l_526 = 0x133D7C51L;
            l_526 = (g_34 = (0xF58B0784L & func_58((l_524 |= (safe_sub_func_int16_t_s_s(func_74(g_232, g_28, g_425), l_515))), l_295.f3, ((l_525 != (p_24 | 0xCBL)) && p_24), p_24)));
        }
        else
        {
            int l_533 = 9L;
            int l_537 = 0xB38995B2L;
            for (g_200 = 14; (g_200 < 34); g_200++)
            {
                unsigned l_536 = 4294967291UL;
                l_54[4] |= (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint64_t_u_u(l_533, (safe_mod_func_uint64_t_u_u(l_536, (g_121[9][4] |= (l_533 >= p_24)))))) ^ 246UL), 1));
            }
            l_537 ^= p_24;
        }
        if (g_34)
            continue;
    }
    l_538[0][3] ^= (l_518 = l_525);
    if ((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(l_538[0][3], ((+(safe_add_func_int8_t_s_s((l_548 &= (l_518 = (g_199 < (p_24 & ((safe_mul_func_int8_t_s_s(0xE4L, l_547)) == 0L))))), (-1L)))) , ((func_58(p_24, (~(safe_lshift_func_int8_t_s_u(p_24, p_24))), g_211.f1, l_508[0][2]) == l_518) > l_547)))), 1L)))
    {
        unsigned l_557 = 0x710574AFL;
        int l_576 = 0xF02EECBDL;
        int l_577 = 0xA24B9DCBL;
        int l_578 = 0xDD9E9FC1L;
        int l_579 = 0xF7E9CDDCL;
        int l_580 = 0xCDCB2905L;
        int l_581 = 0x906D5BABL;
        int l_582 = 0x539DFA01L;
        int l_583 = 0xCD34A7F2L;
        int l_585 = 0x1F9B399CL;
        int l_586 = 0x60553D68L;
        int l_587 = 0L;
        if ((safe_unary_minus_func_int16_t_s(p_24)))
        {
            unsigned char l_554[2][1];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_554[i][j] = 0xD7L;
            }
            for (g_296 = 0; (g_296 != 13); g_296++)
            {
                l_554[0][0]++;
                if (l_557)
                    continue;
                for (l_518 = 0; (l_518 == (-21)); l_518--)
                {
                    l_538[4][0] = p_24;
                }
            }
        }
        else
        {
            char l_572 = 1L;
            int l_575 = 0xB612FFAAL;
            l_575 &= ((safe_rshift_func_uint8_t_u_u((g_335 && (safe_lshift_func_int16_t_s_s(func_74(l_557, ((safe_div_func_uint64_t_u_u(((l_538[3][1] ^= (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u(func_58(g_27, g_211.f3, g_29[0], (safe_sub_func_int16_t_s_s((func_58(g_330.f0, l_572, (g_172 , ((safe_sub_func_uint32_t_u_u((g_211.f2 ^ 0x1A720BD1C213781DLL), p_24)) > l_557)), p_24) < 0xC7505A46L), 1UL))), 0x32DFF973L)), 0x56L))) , 0x97230585F7187AC9LL), p_24)) || g_28), p_24), 6))), g_29[0])) != 1UL);
        }
        l_588++;
    }
    else
    {
        long long l_601[6] = {0x152EA28EFC4CA0E2LL, 0x764832B7E7559BA1LL, 0x152EA28EFC4CA0E2LL, 0x764832B7E7559BA1LL, 0x152EA28EFC4CA0E2LL, 0x764832B7E7559BA1LL};
        int l_606 = 1L;
        int l_607 = 2L;
        int l_656 = 7L;
        int l_657[5][7][2] = {{{(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}}, {{(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}}, {{(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}}, {{(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}}, {{(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}, {(-2L), (-9L)}}};
        struct S0 l_665 = {20,3322,-111,-119};
        unsigned l_746 = 18446744073709551615UL;
        unsigned short l_774 = 0UL;
        int i, j, k;
        if ((((g_97.f0 || (l_607 = (l_606 = func_74(((safe_sub_func_int16_t_s_s(func_58(p_24, ((0xC947B2D1L && p_24) , (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((safe_div_func_int64_t_s_s(p_24, (safe_add_func_int16_t_s_s(func_74(l_601[4], l_518, (g_171 = (safe_lshift_func_uint16_t_u_s((65535UL ^ (g_303 = (0x03B1BFA07D45F3F9LL && p_24))), 11)))), g_298)))), 2UL)), l_547))), l_604, g_296), 0x57F6L)) , l_605), g_253[1], l_601[4])))) > l_584) | g_608))
        {
            int l_625 = 9L;
            int l_626 = 0x59E50DC1L;
            unsigned l_637 = 0xB1D07DF9L;
            long long l_655 = 0xF6E73FE1AAD81876LL;
            unsigned l_658 = 18446744073709551610UL;
            l_626 &= (l_625 = (safe_lshift_func_uint8_t_u_u(((~((func_74((l_606 = (((safe_add_func_int32_t_s_s((l_607 &= func_74(((g_172 = (g_121[9][4] |= ((l_548 = (p_24 != (safe_div_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(1UL, (safe_rshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(p_24, (l_601[4] , func_58(p_24, g_200, g_254, p_24)))), p_24)))), 0xE124EE915780550ALL)), g_211.f0)) ^ g_174), l_25[1][2])))) > l_601[4]))) < 0xFEE92C6AB1B08B26LL), g_335, p_24)), p_24)) != l_601[3]) < 0x0201BE42L)), p_24, l_547) >= 0x6DE9B354L) , g_28)) >= g_296), l_25[0][1])));
            for (l_604 = 0; (l_604 <= 4); l_604 += 1)
            {
                int l_631 = (-5L);
                int l_634 = (-1L);
                struct S0 l_653[10][4] = {{{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}, {{14,2202,278,-103}, {6,6488,887,-18}, {14,2202,278,-103}, {6,6488,887,-18}}};
                int i, j;
                for (g_165 = 4; (g_165 >= 0); g_165 -= 1)
                {
                    int l_642 = 0x92AB4170L;
                    int i, j;
                    if ((((safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((l_634 = func_58(((l_625 &= (l_631 = l_538[g_165][l_604])) <= (l_626 = (l_538[g_165][(g_165 + 3)] ^ (func_58((((l_607 <= 0x20F0L) && (safe_lshift_func_int16_t_s_s((l_642 = ((g_211.f0 = ((g_253[1] &= l_634) & g_33)) >= (((l_518 = l_637) >= (!(-1L))) && ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0L || p_24), 12)), p_24)) , 0x6772L)))), 8))) ^ g_172), p_24, l_547, g_254) , g_232)))), p_24, p_24, l_538[g_165][l_604])), 5)) == 6L), g_165)) < l_637) <= 0x796143614EF60A16LL))
                    {
                        unsigned l_643 = 0x2FDA74A4L;
                        g_254 = (-1L);
                        --l_643;
                        if (l_601[0])
                            continue;
                        return g_211.f3;
                    }
                    else
                    {
                        g_28 = (l_607 | 0x7BFFL);
                    }
                }
                l_538[4][7] = (safe_add_func_int32_t_s_s(func_74((safe_mul_func_int16_t_s_s((((func_74(l_588, l_607, p_24) , func_58(g_31, (l_652 = l_607), g_211.f3, l_548)) <= 0x5BL) > 0L), 1L)), p_24, l_606), g_298));
                l_654 = l_653[5][0];
            }
            ++l_658;
            l_654.f2 = l_606;
        }
        else
        {
            unsigned l_669 = 0x2BC24AE6L;
            int l_681 = 3L;
            int l_682 = 0x65D41804L;
            int l_683[5];
            unsigned long long l_692[2];
            struct S0 l_732 = {2,4871,940,27};
            int i;
            for (i = 0; i < 5; i++)
                l_683[i] = 0x8287A424L;
            for (i = 0; i < 2; i++)
                l_692[i] = 18446744073709551614UL;
            g_97.f0 = g_254;
            for (g_165 = 0; (g_165 <= 1); g_165 += 1)
            {
                unsigned char l_661 = 0UL;
                struct S0 l_664[4] = {{5,7165,-1,2}, {5,7165,-1,2}, {5,7165,-1,2}, {5,7165,-1,2}};
                int l_684[9] = {3L, 0L, 3L, 0L, 3L, 0L, 3L, 0L, 3L};
                unsigned l_706[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_706[i] = 0x4FD1BE92L;
                ++l_661;
                for (l_518 = 0; (l_518 <= 1); l_518 += 1)
                {
                    unsigned l_666 = 5UL;
                    l_665 = l_664[3];
                    if (l_605)
                        continue;
                    l_666--;
                }
                l_654 = g_211;
                for (l_515 = 0; (l_515 <= 1); l_515 += 1)
                {
                    int l_680 = 0x56C48DF3L;
                    int l_685 = 0x311E614BL;
                    int l_686 = (-6L);
                    int l_687 = 0x6A8DDF20L;
                    int l_689[4][4][3] = {{{9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}}, {{9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}}, {{9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}}, {{9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}, {9L, 1L, (-8L)}}};
                    char l_690 = 0xA5L;
                    int l_691 = 1L;
                    unsigned l_703 = 0xE668C6BAL;
                    struct S0 l_708 = {10,6481,-685,18};
                    int i, j, k;
                    l_538[2][6] = ((l_669 > (((l_525 , ((++p_24) & (safe_sub_func_uint64_t_u_u(((func_58((safe_lshift_func_int8_t_s_s((l_25[l_515][l_515] = l_538[0][3]), 1)), g_165, l_664[3].f2, (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(1UL, (((l_669 || ((l_665 , func_58(l_680, l_680, g_33, l_665.f2)) | (-7L))) == 7L) && l_601[2]))), 0L))) == 1UL) == l_669), 0UL)))) < l_680) , g_608)) == l_680);
                    l_692[1]--;
                    if (l_548)
                    {
                        unsigned l_707 = 0x8F2C1774L;
                        g_31 = (0xCB8FL <= (safe_mul_func_int8_t_s_s(((p_24 != (safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((0x56B6L || 0x7F29L), 2)), ((g_253[0] = ((safe_div_func_uint64_t_u_u(((g_199 == (((l_665 = g_211) , (l_703 ^ ((safe_lshift_func_int16_t_s_u(1L, 9)) , (((((l_706[1] &= l_684[5]) & l_690) < p_24) , p_24) || p_24)))) <= g_296)) <= g_31), l_707)) > l_657[1][6][1])) , 249UL)))) && l_707), l_689[0][3][0])));
                        return l_657[1][6][1];
                    }
                    else
                    {
                        unsigned l_719[3];
                        long long l_720 = (-9L);
                        int l_721 = 0x032CD191L;
                        int l_722 = 2L;
                        int l_723[1][9][3] = {{{0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}, {0x06628C52L, 3L, (-5L)}}};
                        unsigned l_724 = 0x2885A711L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_719[i] = 0xBCB84DA9L;
                        g_211 = l_708;
                        l_681 = (safe_rshift_func_uint8_t_u_s((0x20L >= l_664[3].f2), (safe_mul_func_uint16_t_u_u(0xC56EL, ((((safe_mod_func_uint16_t_u_u((((!g_28) >= ((+p_24) | (g_252 , p_24))) == (safe_mul_func_uint8_t_u_u(((((8L || (safe_mul_func_uint16_t_u_u(g_211.f3, p_24))) && p_24) , 18446744073709551613UL) == 6L), l_665.f1))), p_24)) >= p_24) ^ 0xC3L) == p_24)))));
                        l_719[1] |= l_654.f0;
                        ++l_724;
                    }
                    for (l_691 = 0; (l_691 <= 2); l_691 += 1)
                    {
                        int i, j, k;
                        g_33 |= l_689[(l_515 + 2)][g_165][(l_515 + 1)];
                        l_654.f3 = (l_689[l_515][(l_691 + 1)][(g_165 + 1)] >= (safe_add_func_int8_t_s_s((g_731 = ((safe_rshift_func_uint16_t_u_s(l_689[(l_515 + 2)][l_515][l_515], 11)) != ((func_58(p_24, l_691, p_24, l_682) != l_689[l_515][(l_691 + 1)][(g_165 + 1)]) , (((g_211 , l_689[(l_515 + 2)][l_515][l_515]) > 0x3CL) ^ 248UL)))), g_253[0])));
                        return g_330.f0;
                    }
                }
            }
            l_732 = l_732;
        }
        for (g_255 = (-13); (g_255 > 7); g_255 = safe_add_func_int8_t_s_s(g_255, 7))
        {
            char l_743 = 2L;
            int l_763 = 0x3FE70182L;
            struct S0 l_775 = {2,184,-489,-221};
            for (l_548 = (-18); (l_548 > (-23)); --l_548)
            {
                for (l_604 = 0; (l_604 <= 5); l_604 += 1)
                {
                    unsigned long long l_737[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_737[i] = 0x77C6B65CEACA67FELL;
                    for (g_608 = 4; (g_608 >= 1); g_608 -= 1)
                    {
                        int i, j;
                        return g_121[(l_604 + 3)][(g_608 + 2)];
                    }
                    return l_737[3];
                }
                g_32[0] |= (safe_unary_minus_func_uint64_t_u(0xC102C2635781C230LL));
            }
            if (((safe_add_func_int8_t_s_s(g_27, p_24)) == (1UL == (!l_743))))
            {
                unsigned short l_748[3];
                struct S0 l_780 = {20,188,-569,-52};
                int i;
                for (i = 0; i < 3; i++)
                    l_748[i] = 65535UL;
                g_32[1] = (l_748[1] |= (p_24 , (safe_add_func_int32_t_s_s((p_24 < ((((((l_746 | (g_747 <= (g_165 = ((g_303 , (g_171 , (g_26 , 0x35L))) <= ((p_24 != p_24) != g_253[1]))))) , g_497) , p_24) > p_24) & p_24) == 7UL)), g_232))));
                for (g_731 = 8; (g_731 > 8); g_731 = safe_add_func_uint16_t_u_u(g_731, 1))
                {
                    int l_764[5];
                    short l_776 = 0xEE12L;
                    unsigned char l_777 = 0xC7L;
                    struct S0 l_782 = {9,3053,-401,-184};
                    int i;
                    for (i = 0; i < 5; i++)
                        l_764[i] = (-1L);
                    g_402[4].f0 = ((1L && (safe_mul_func_int16_t_s_s(0xA83AL, (safe_lshift_func_int16_t_s_u((l_774 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((func_58((p_24 >= (g_121[3][0] = (((g_335 != g_731) > (safe_lshift_func_uint16_t_u_u(func_58((safe_add_func_int32_t_s_s(func_58((l_763 = l_743), (((((l_764[0] == (((safe_mod_func_int16_t_s_s((l_748[0] >= (((g_121[9][4] = (((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s((func_58((g_211 , 8L), g_731, p_24, p_24) , (-7L)), g_211.f1)), p_24)) , 0xAB43D407L) == 4294967295UL)) && g_747) == 0x27L)), 0xBB7DL)) , 0x38BBD9ECBF031775LL) ^ 1UL)) != l_656) == g_253[1]) || 0x41L) & 0x68DDF943L), l_773, g_303), g_253[1])), p_24, g_22, l_748[1]), l_605))) || p_24))), g_252, g_34, g_425) || g_211.f1) || g_200), p_24)) <= g_731), 0x0F0EL))), l_601[0]))))) , (-10L));
                    l_775 = g_211;
                    ++l_777;
                    l_782 = (l_781 = (l_665 = l_780));
                }
                l_657[1][6][1] |= (safe_mul_func_int8_t_s_s(func_58(p_24, g_199, p_24, ((safe_unary_minus_func_int16_t_s(p_24)) == ((func_58((p_24 < (!l_786)), g_211.f3, ((safe_mul_func_uint8_t_u_u(l_775.f3, ((3UL ^ 6UL) | g_335))) < 0x262FL), g_33) || 0x2F6EL) && g_97.f0))), g_252));
                g_211.f3 = (g_30 , (((safe_mul_func_int16_t_s_s((((l_780.f2 = l_657[4][0][0]) ^ g_172) || p_24), (9L > ((l_688[4] && g_32[0]) >= ((((safe_mod_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(g_211.f3, (((safe_div_func_int64_t_s_s(0L, l_775.f2)) , p_24) != g_296))) & g_731) , l_518), (-5L))) != g_252) == l_665.f2) ^ g_26))))) || 1UL) | g_303));
            }
            else
            {
                long long l_799 = 0xFEAFC8837498686ALL;
                l_763 = ((((+p_24) != (-1L)) <= (func_58(l_799, g_800, g_254, (safe_div_func_uint64_t_u_u(p_24, p_24))) , p_24)) == 6L);
                g_26 = (l_763 = p_24);
                for (l_652 = 0; (l_652 > 29); l_652 = safe_add_func_int64_t_s_s(l_652, 4))
                {
                    int l_812 = 0x9E25B0E0L;
                    g_330.f0 = 0x04C2CACCL;
                    for (l_656 = 0; (l_656 >= 5); ++l_656)
                    {
                        unsigned l_811 = 0xD2F8B15BL;
                        g_32[1] = (1UL ^ p_24);
                        l_763 = ((safe_add_func_uint32_t_u_u((((safe_mod_func_uint16_t_u_u(0x0DB3L, p_24)) & (l_538[0][3] = (l_812 = (g_29[1] > (p_24 , ((l_811 <= p_24) , l_665.f3)))))) , g_232), (g_298 , 6L))) & g_255);
                    }
                    l_607 |= (g_335 , l_812);
                    if (g_813)
                        break;
                }
                return p_24;
            }
        }
        l_781 = l_654;
    }
    return l_781.f3;
}







static union U1 func_42(int p_43, short p_44, int p_45, int p_46, unsigned p_47)
{
    short l_307[8];
    int l_312 = 0xBE60D368L;
    int l_315[4] = {1L, (-8L), 1L, (-8L)};
    unsigned l_334 = 0xFB96D8AFL;
    unsigned short l_340 = 4UL;
    struct S0 l_354 = {20,5947,-64,-206};
    unsigned long long l_428 = 0x34C159B5B0CBCCB0LL;
    short l_450[3];
    int l_457 = (-4L);
    unsigned l_458 = 3UL;
    int l_474 = 0x805AE64BL;
    int i;
    for (i = 0; i < 8; i++)
        l_307[i] = 0x6F65L;
    for (i = 0; i < 3; i++)
        l_450[i] = (-10L);
    if (func_58(g_298, (func_58(g_174, (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_45, 14)), 0)), g_303, (l_315[1] = ((((~(safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s(l_307[1], (safe_sub_func_uint64_t_u_u(g_254, 0xCB67674C34E1C527LL))))))) && g_303) , (((safe_rshift_func_uint16_t_u_u((l_312 = (--g_200)), func_58(g_30, g_172, p_47, g_22))) > g_34) <= p_46)) , p_43))) ^ l_307[0]), g_211.f2, g_27))
    {
        long long l_333 = 0xDCA61D593650C61CLL;
        l_315[3] = func_74(((safe_sub_func_uint8_t_u_u(func_74(g_165, (safe_lshift_func_int16_t_s_u(p_44, 9)), (+(safe_mul_func_uint64_t_u_u(g_29[1], ((!(l_315[3] = (g_335 = ((safe_div_func_int32_t_s_s(((0xC0AB8125710E5DD2LL ^ ((safe_lshift_func_int8_t_s_s(p_43, (((func_58(((l_312 |= func_58(((g_200 <= (g_298 = ((safe_div_func_int8_t_s_s((((g_330 , (safe_sub_func_int16_t_s_s((l_333 == (g_121[9][4] && 18446744073709551615UL)), 7L))) && p_45) & p_43), 4L)) != l_315[1]))) < 0UL), p_44, p_45, l_333)) < g_255), g_211.f3, g_27, p_43) > 0x05DDFC62B8D94905LL) , l_334) , l_307[1]))) <= g_26)) && g_298), l_333)) , p_43)))) < 0UL))))), 0x14L)) | p_44), g_22, p_47);
        l_315[1] = g_29[1];
        g_97.f0 &= 0xE07E041AL;
        for (g_174 = 16; (g_174 != 53); ++g_174)
        {
            for (g_232 = 0; (g_232 < 16); g_232 = safe_add_func_int8_t_s_s(g_232, 5))
            {
                g_31 = l_340;
                return g_330;

                            }
        }
    }
    else
    {
        unsigned char l_353 = 254UL;
        unsigned char l_379[10][5][5] = {{{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}, {{9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}, {9UL, 255UL, 0x6EL, 0UL, 1UL}}};
        int l_381[3];
        struct S0 l_436 = {1,460,-457,10};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_381[i] = 0xEDCD65C6L;
        for (l_340 = 28; (l_340 < 27); l_340--)
        {
            char l_349 = 0xFFL;
            struct S0 l_355[7][7][5] = {{{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}, {{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}, {{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}, {{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}, {{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}, {{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}, {{{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}, {{10,2362,-219,253}, {10,2362,-219,253}, {1,2199,786,198}, {4,7342,-619,154}, {18,6048,-656,-4}}}};
            int i, j, k;
            for (g_255 = 0; (g_255 == 28); g_255 = safe_add_func_int64_t_s_s(g_255, 7))
            {
                int l_364[2][10] = {{0xF8D893DEL, 1L, 0x80D3EC32L, 1L, 0xF8D893DEL, 0xC7C3C239L, 0xF8D893DEL, 1L, 0x80D3EC32L, 1L}, {0xF8D893DEL, 1L, 0x80D3EC32L, 1L, 0xF8D893DEL, 0xC7C3C239L, 0xF8D893DEL, 1L, 0x80D3EC32L, 1L}};
                int l_365 = (-1L);
                int l_371 = 0L;
                int i, j;
                for (g_335 = 5; (g_335 <= 6); g_335++)
                {
                    unsigned long long l_350[2][5] = {{0x8ADBA347272B21C9LL, 0x8ADBA347272B21C9LL, 0x9EDD30E99D1115B6LL, 0x8ADBA347272B21C9LL, 0x8ADBA347272B21C9LL}, {0x8ADBA347272B21C9LL, 0x8ADBA347272B21C9LL, 0x9EDD30E99D1115B6LL, 0x8ADBA347272B21C9LL, 0x8ADBA347272B21C9LL}};
                    int i, j;
                    for (g_165 = 0; (g_165 != (-13)); g_165--)
                    {
                        ++l_350[1][4];
                        if (l_353)
                            break;
                    }
                }
                l_355[6][5][3] = l_354;
                for (g_296 = 0; (g_296 != 46); ++g_296)
                {
                    unsigned long long l_358 = 0x86FCE4B269A4FFE7LL;
                    unsigned l_382 = 1UL;
                    l_355[6][5][3].f2 |= (l_354.f0 , (0x2593L ^ l_358));
                    for (g_165 = 3; (g_165 != 1); g_165 = safe_sub_func_int8_t_s_s(g_165, 1))
                    {
                        unsigned char l_380 = 5UL;
                        l_355[6][5][3].f3 = (safe_lshift_func_uint16_t_u_s(func_58(g_174, (g_363 , (l_364[0][0] = 0x0BC3FBBBL)), (l_365 = (g_121[7][4] = g_303)), ((((--g_298) , ((p_43 == ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(((l_371 > ((safe_unary_minus_func_uint16_t_u(((g_27 != (safe_mul_func_int16_t_s_s(l_353, (safe_add_func_uint64_t_u_u((((safe_sub_func_uint8_t_u_u(l_371, l_358)) == p_45) <= l_355[6][5][3].f1), g_29[0]))))) , 6UL))) > l_379[3][2][4])) ^ p_46), l_380)))) , p_44)) == g_253[1])) && 7UL) ^ l_380)), 10));
                        ++l_382;
                    }
                }
                for (g_172 = (-22); (g_172 == (-4)); ++g_172)
                {
                    char l_401 = 1L;
                    l_312 = ((((l_379[4][4][0] != (~(safe_mul_func_uint8_t_u_u(func_58((((++g_298) & (func_58(g_28, ((g_303 = g_255) < 6L), ((safe_sub_func_int8_t_s_s(0L, (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x6DEBED0C1BA1A614LL < l_379[9][2][1]), g_253[0])), (safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(p_45, l_355[6][5][3].f2)) == p_47), 3UL)))))) , p_47), l_354.f2) , l_401)) , (-1L)), p_44, p_43, g_253[1]), p_46)))) , g_211) , 0x33L) || (-1L));
                    if (l_349)
                        continue;
                }
            }
            return g_402[4];

                    }
        l_381[1] = ((0x7B9976B9L && (safe_mul_func_uint8_t_u_u(p_43, (safe_lshift_func_uint16_t_u_s((((0x5395134AL != (func_74(l_381[1], ((~func_58((safe_mul_func_uint16_t_u_u(0xF579L, (p_46 && ((g_211 , (safe_rshift_func_int8_t_s_s(g_330.f0, 7))) , ((l_307[1] > g_212) & g_171))))), g_121[9][4], p_46, p_46)) , g_121[9][4]), g_211.f2) , l_381[1])) == 0xB001480DL) , 65535UL), 0))))) , 0xAFDE3928L);
        for (g_174 = 6; (g_174 < 59); g_174++)
        {
            long long l_419 = 0x64149D98BB1D1395LL;
            struct S0 l_420 = {17,8135,-362,83};
            l_312 = (safe_rshift_func_int8_t_s_s(g_211.f0, (safe_add_func_uint8_t_u_u(p_45, (safe_sub_func_uint64_t_u_u(g_121[9][4], l_419))))));
            l_420 = l_420;
            g_211 = (l_420 = g_211);
            for (g_335 = (-16); (g_335 != 23); g_335 = safe_add_func_int32_t_s_s(g_335, 7))
            {
                char l_431 = (-7L);
                struct S0 l_437[4][3] = {{{8,3774,-98,-151}, {6,4564,279,-20}, {8,3774,-98,-151}}, {{8,3774,-98,-151}, {6,4564,279,-20}, {8,3774,-98,-151}}, {{8,3774,-98,-151}, {6,4564,279,-20}, {8,3774,-98,-151}}, {{8,3774,-98,-151}, {6,4564,279,-20}, {8,3774,-98,-151}}};
                int i, j;
                g_211.f3 &= ((g_425 |= (g_298++)) == ((((safe_sub_func_uint64_t_u_u(l_428, (((safe_div_func_uint16_t_u_u(p_47, g_29[1])) & ((l_379[3][2][4] ^ (g_255 |= (l_431 && ((safe_mul_func_uint16_t_u_u(0xF9BFL, (safe_mul_func_uint16_t_u_u(0x45DDL, ((p_44 >= (p_46 == g_31)) < l_420.f3))))) ^ g_211.f1)))) , p_47)) <= l_419))) > l_420.f1) || 0x60FFL) || p_47));
                l_436 = g_211;
                for (p_45 = 0; (p_45 <= 8); p_45 += 1)
                {
                    l_437[3][1] = l_354;
                }
                if (l_437[3][1].f0)
                    break;
            }
        }
    }
    if ((safe_rshift_func_int16_t_s_s((func_58((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((func_58(p_44, ((0x77F3L > (safe_sub_func_uint32_t_u_u(p_45, ((safe_sub_func_int64_t_s_s((!(-1L)), (4294967295UL || ((l_450[0] | (((!(((++g_298) != l_428) & (((func_58(g_121[9][4], ((safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(func_58((l_450[0] != 7L), g_22, l_307[4], l_428), g_172)), (-1L))) <= g_211.f0), l_457, l_458) && 0x4468L) , p_47) ^ 8L))) >= l_458) == 0x0AL)) >= g_303)))) > p_43)))) ^ g_29[1]), p_47, l_354.f0) == g_255), g_211.f2)), l_315[1])), 0x0C95L)), g_211.f2, g_254, l_457) & p_45), 3)))
    {
        unsigned l_459[2][6][1];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_459[i][j][k] = 0x1B59365AL;
            }
        }
        g_211.f3 = ((((g_200 ^= l_354.f3) > func_58((p_44 >= func_58(g_296, ((g_254 & (p_47 <= func_58(g_171, p_46, p_47, l_459[0][4][0]))) != (-4L)), l_459[1][3][0], l_459[0][4][0])), p_43, g_211.f1, l_315[1])) == p_46) , (-5L));
    }
    else
    {
        long long l_468 = 0x23459C50F79D9A95LL;
        int l_476 = 0xC785509CL;
        for (l_457 = 0; (l_457 <= 24); l_457 = safe_add_func_int64_t_s_s(l_457, 5))
        {
            return g_402[4];

                    }
        for (p_47 = (-4); (p_47 > 41); p_47++)
        {
            unsigned short l_469 = 0UL;
            g_30 ^= (g_211.f2 = g_298);
            for (g_335 = 0; (g_335 == 7); g_335 = safe_add_func_uint32_t_u_u(g_335, 3))
            {
                int l_475 = 0L;
                l_475 &= ((((safe_sub_func_uint64_t_u_u(l_468, l_468)) < (func_58(func_74(l_450[0], l_469, (g_27 | (func_74((g_298 = l_469), (((safe_mul_func_int16_t_s_s(p_44, ((p_44 , p_45) | p_45))) | 0UL) > p_45), p_44) == 1UL))), l_474, g_425, l_469) > 6L)) & g_34) , l_468);
            }
        }
        l_476 ^= 0x19B08749L;
        for (g_254 = 0; (g_254 >= 18); g_254 = safe_add_func_uint8_t_u_u(g_254, 6))
        {
            for (p_43 = 0; (p_43 <= 29); p_43++)
            {
                unsigned l_493 = 1UL;
                int l_496[10] = {0x15E6F563L, 0x15E6F563L, (-1L), 0x15E6F563L, 0x15E6F563L, (-1L), 0x15E6F563L, 0x15E6F563L, (-1L), 0x15E6F563L};
                int i;
                g_211.f2 |= ((p_46 | ((safe_add_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((g_28 || l_354.f2), 2)), ((safe_rshift_func_uint16_t_u_s(p_45, 1)) != (g_121[9][4] <= (+(((safe_mod_func_int8_t_s_s(0x23L, p_44)) && (l_493 ^= g_121[1][7])) , (l_496[8] |= ((safe_mul_func_uint16_t_u_u((0x20L && g_174), (-1L))) | p_46)))))))), p_46)) & l_476)) , 1L);
            }
            return g_497;

                    }
    }
    return g_498;

    }







static unsigned func_58(short p_59, unsigned p_60, long long p_61, long long p_62)
{
    int l_289 = 0x37AF0941L;
    int l_290 = (-1L);
    int l_291 = 1L;
    unsigned short l_292 = 65532UL;
    for (g_171 = 0; (g_171 <= 1); g_171 += 1)
    {
        int l_288 = 0xECEB4F8AL;
        int i;
        g_32[g_171] |= 0xE4BBC024L;
        for (g_232 = 17; (g_232 < 0); g_232 = safe_sub_func_uint16_t_u_u(g_232, 6))
        {
            l_288 ^= (g_32[1] , g_253[1]);
        }
    }
    ++l_292;
    l_290 = 0xEC28CA09L;
    return p_62;
}







static struct S0 func_71(int p_72, unsigned long long p_73)
{
    struct S0 l_269[5][8][3] = {{{{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}}, {{{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}}, {{{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}}, {{{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}}, {{{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}, {{6,2401,520,-8}, {5,5496,-957,67}, {5,5496,-957,67}}}};
    int l_280 = 0xAE3D4CD0L;
    int l_281 = 0x2FD6FEC2L;
    int l_282 = 0x6649860CL;
    int i, j, k;
    l_269[0][0][0] = l_269[4][6][1];
    l_269[4][6][1].f2 = ((safe_mod_func_uint64_t_u_u(((l_282 ^= ((1UL && func_74(p_72, p_73, (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(func_74(g_252, (l_269[4][6][1].f3 &= (safe_lshift_func_uint16_t_u_s(65531UL, 0))), g_26), (l_269[4][6][1].f2 = g_27))), (l_281 &= (l_280 = 1UL)))), 0x3E4BL)))) <= g_199)) <= 0x8B3AE402L), 0x8D3536CF90992C47LL)) & g_199);
    return l_269[4][6][1];
}







static unsigned long long func_74(unsigned long long p_75, short p_76, unsigned p_77)
{
    short l_81 = 0x998DL;
    int l_83 = 0x0C43CAE2L;
    int l_132 = (-1L);
    int l_134 = 0x3155DB8EL;
    int l_136 = 0xDB1F9A50L;
    int l_137 = 0x9850BAFFL;
    int l_141 = 0x003DDA28L;
    int l_148 = 0x146C4C10L;
    unsigned l_209 = 0xB4F793ADL;
    struct S0 l_225[4] = {{21,1409,-1007,33}, {10,5487,-218,-100}, {21,1409,-1007,33}, {10,5487,-218,-100}};
    int l_241[10] = {(-10L), (-1L), (-2L), (-2L), (-1L), (-10L), (-1L), (-2L), (-2L), (-1L)};
    int l_267 = 1L;
    int i;
    for (p_75 = 0; (p_75 <= 1); p_75 += 1)
    {
        char l_84 = 0L;
        int l_89 = 4L;
        int l_90 = 0x1AAD5EABL;
        int l_91[10][2] = {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}};
        unsigned l_92 = 0x200CC90FL;
        struct S0 l_220 = {11,7405,773,126};
        int i, j;
        for (p_77 = 0; (p_77 <= 1); p_77 += 1)
        {
            long long l_82 = 0x0F30BDA1A75C26FFLL;
            int l_88 = 0x69BDFBFBL;
            struct S0 l_95[9] = {{15,7008,661,-254}, {15,7008,661,-254}, {5,1023,1008,199}, {15,7008,661,-254}, {15,7008,661,-254}, {5,1023,1008,199}, {15,7008,661,-254}, {15,7008,661,-254}, {5,1023,1008,199}};
            char l_127 = (-8L);
            int l_144 = 0x013F0835L;
            unsigned l_166 = 0x11DC8AE0L;
            unsigned l_238 = 1UL;
            int i;
            for (p_76 = 1; (p_76 >= 0); p_76 -= 1)
            {
                int i;
                l_81 &= (g_32[p_75] <= p_77);
            }
            if (l_82)
            {
                unsigned char l_85 = 0x9DL;
                l_83 |= p_77;
                l_85 = (~(l_84 | p_75));
            }
            else
            {
                for (l_81 = 0; (l_81 >= (-20)); l_81--)
                {
                    struct S0 l_96 = {8,6687,668,207};
                    l_92++;
                    if (p_77)
                        continue;
                    l_96 = l_95[5];
                }
            }
            if (((l_81 , g_97) , p_75))
            {
                unsigned char l_100[7][10][3] = {{{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}, {{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}, {{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}, {{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}, {{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}, {{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}, {{0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}, {0x16L, 250UL, 1UL}}};
                struct S0 l_120[10][8] = {{{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}, {{16,1087,-279,119}, {6,7229,729,154}, {18,7014,-939,212}, {6,6818,-983,-12}, {18,5392,-562,198}, {6,6818,-983,-12}, {18,7014,-939,212}, {6,7229,729,154}}};
                int l_143 = 0x2223408EL;
                int l_145 = 0xA6797DE4L;
                int l_146[2];
                unsigned char l_149 = 9UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_146[i] = 0xA856C88DL;
                for (p_76 = 20; (p_76 > 8); p_76 = safe_sub_func_int8_t_s_s(p_76, 6))
                {
                    char l_115[9];
                    int l_122 = 0xDCC14574L;
                    int l_128[1];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_115[i] = 0xE0L;
                    for (i = 0; i < 1; i++)
                        l_128[i] = 9L;
                    if (l_100[5][2][2])
                    {
                        long long l_123 = 0xEC307D3DBF9D0A13LL;
                        l_123 = (safe_sub_func_int8_t_s_s((l_95[5].f2 = (safe_sub_func_uint32_t_u_u((l_82 | ((l_122 ^= (safe_lshift_func_int16_t_s_u((+((l_120[4][2].f3 = (safe_rshift_func_uint16_t_u_u(((((l_89 = (safe_mod_func_int64_t_s_s(((l_100[3][4][2] == l_95[5].f0) , (p_75 < (safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u((l_115[1] = g_26), ((g_97 , (g_121[9][4] = (safe_sub_func_uint32_t_u_u(((~p_77) , (safe_div_func_uint8_t_u_u(((l_120[4][2] , p_77) <= g_33), 255UL))), 0x2309139EL)))) , l_81))), 0L)))), 0xD89BD0A635A0DCE6LL))) < p_77) != g_27) == g_29[0]), 13))) <= (-1L))), p_75))) || 1L)), g_22))), 0x4CL));
                    }
                    else
                    {
                        unsigned char l_124 = 0x6AL;
                        l_91[0][1] = g_28;
                        g_31 = p_75;
                        --l_124;
                    }
                    if (((g_31 | g_27) , l_115[8]))
                    {
                        unsigned l_129 = 0xCC8C47D0L;
                        l_129++;
                        l_95[5].f3 &= 0xCF972611L;
                    }
                    else
                    {
                        int l_133 = 0L;
                        int l_135 = 0xD639DC62L;
                        unsigned short l_138 = 65534UL;
                        int l_142 = (-10L);
                        int l_147 = (-3L);
                        l_138++;
                        ++l_149;
                        l_146[1] = (safe_sub_func_int8_t_s_s(g_33, p_75));
                    }
                    for (l_148 = 14; (l_148 > 17); l_148++)
                    {
                        unsigned l_158[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_158[i] = 0UL;
                        g_97.f0 = (safe_div_func_uint32_t_u_u((g_97.f0 | (l_115[6] , (l_144 == (l_158[2]++)))), (l_90 = g_29[1])));
                        l_91[0][0] &= g_29[1];
                    }
                    if (p_76)
                        continue;
                }
                for (l_145 = 0; (l_145 == 23); ++l_145)
                {
                    int l_173 = (-9L);
                    g_32[0] = (l_120[4][2].f2 = (safe_div_func_uint32_t_u_u((--l_166), (safe_sub_func_uint32_t_u_u(((p_77 | (((~g_121[9][4]) , 65535UL) && ((((l_95[8] , p_76) , (((((g_171 = l_120[4][2].f0) == (p_77 != (++g_174))) > (safe_lshift_func_int8_t_s_u((p_77 >= p_76), 1))) > l_90) == 18446744073709551615UL)) , 0xD9L) == l_120[4][2].f0))) | p_76), g_33)))));
                }
            }
            else
            {
                struct S0 l_210 = {20,1232,197,17};
                for (g_171 = (-27); (g_171 < 31); ++g_171)
                {
                    unsigned l_197[9][2][9] = {{{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}, {{4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}, {4294967293UL, 0x70D4C16AL, 1UL, 0xA4827437L, 0x6CA140F9L, 0x6CA140F9L, 0xA4827437L, 1UL, 0x70D4C16AL}}};
                    int l_198 = (-1L);
                    int i, j, k;
                    for (l_141 = 0; (l_141 <= 16); l_141++)
                    {
                        g_33 = 0xC66ACBFBL;
                        if (g_174)
                            continue;
                        g_211 = ((l_132 &= (safe_mul_func_int16_t_s_s(g_22, ((safe_lshift_func_uint16_t_u_u((l_137 = ((g_33 , (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(0x15L, 0)), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((p_76 != p_75) < l_197[4][0][0]), 2)), (++g_200))), l_91[1][0]))))) , ((l_134 >= (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((p_76 , p_77), p_75)), g_121[4][0])) , l_209) , p_77), g_200))) != 0UL))), p_75)) || g_121[2][6])))) , l_210);
                        l_91[0][0] = p_75;
                    }
                }
                if (g_212)
                    continue;
            }
            if ((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(9L, g_211.f2)), (l_91[0][1] ^ (g_200 = 0xBC6AL)))), g_32[1])))
            {
                struct S0 l_219[3][8][6] = {{{{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}}, {{{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}}, {{{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}, {{16,1506,-446,-225}, {9,1462,844,139}, {19,1229,-817,-241}, {12,3794,704,-41}, {0,1699,-159,77}, {1,5102,341,-245}}}};
                int i, j, k;
                l_220 = l_219[2][7][4];
                l_220.f3 = (!(g_211.f3 = (safe_mod_func_uint16_t_u_u(g_29[0], g_211.f3))));
                for (l_137 = 0; (l_137 >= (-7)); l_137 = safe_sub_func_uint32_t_u_u(l_137, 4))
                {
                    unsigned long long l_233 = 0x545FFFB89C8545C8LL;
                    int l_237[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_237[i] = 1L;
                    for (l_92 = 0; (l_92 <= 7); l_92 += 1)
                    {
                        int i, j, k;
                        l_225[1] = l_219[(p_77 + 1)][l_92][p_77];
                        l_95[5].f2 = (((((g_232 = (0xFA42L && ((((1UL <= (safe_div_func_int32_t_s_s((l_219[(p_77 + 1)][l_92][p_77].f2 &= (l_95[5].f3 = (g_121[(p_77 + 2)][l_92] && (safe_div_func_uint16_t_u_u(((l_82 ^ (safe_sub_func_int8_t_s_s(g_211.f1, (0x0AL <= (0UL != ((((g_200 = 0x8319L) < g_121[9][4]) <= g_172) , 6UL)))))) <= l_220.f2), 1UL))))), p_75))) | 1UL) < g_211.f3) < (-1L)))) ^ 8UL) && p_76) == 0xC1L) <= l_233);
                    }
                    for (l_82 = 0; (l_82 > 24); l_82 = safe_add_func_int64_t_s_s(l_82, 6))
                    {
                        short l_236 = 0x1CACL;
                        ++l_238;
                        l_219[2][7][4].f3 = l_219[2][7][4].f2;
                        return g_121[8][4];
                    }
                    l_90 |= (0xBEL & g_31);
                    g_211 = (l_220 = g_211);
                }
            }
            else
            {
                if (p_75)
                    break;
            }
        }
    }
    l_141 ^= (l_241[4] && 0xCEL);
    for (g_165 = 0; (g_165 == (-22)); --g_165)
    {
        int l_250[6][3] = {{3L, 0xF514575FL, (-10L)}, {3L, 0xF514575FL, (-10L)}, {3L, 0xF514575FL, (-10L)}, {3L, 0xF514575FL, (-10L)}, {3L, 0xF514575FL, (-10L)}, {3L, 0xF514575FL, (-10L)}};
        int l_251 = (-1L);
        int i, j;
        for (g_171 = 3; (g_171 <= 35); g_171++)
        {
            long long l_262 = (-8L);
            int l_268 = (-10L);
            g_211 = l_225[1];
            l_251 = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(l_250[0][0], ((g_255--) && (safe_lshift_func_uint16_t_u_u(((((p_76 , g_97) , 0x102DL) >= (safe_add_func_uint8_t_u_u(((((l_262 = g_200) | ((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((p_77 || (((l_81 , g_253[0]) , ((0L & g_29[1]) ^ g_34)) | p_75)) , g_199), 5)), g_22)) >= p_76)) > 0x3FL) == l_267), l_268))) ^ g_211.f2), 12))))) != 0x933C14A6CCC60F6CLL), 4));
        }
    }
    return p_76;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_29[i], "g_29[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_32[i], "g_32[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_121[i][j], "g_121[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_211.f0, "g_211.f0", print_hash_value);
    transparent_crc(g_211.f1, "g_211.f1", print_hash_value);
    transparent_crc(g_211.f2, "g_211.f2", print_hash_value);
    transparent_crc(g_211.f3, "g_211.f3", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_253[i], "g_253[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_330.f0, "g_330.f0", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_363.f0, "g_363.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_402[i].f0, "g_402[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_497.f0, "g_497.f0", print_hash_value);
    transparent_crc(g_498.f0, "g_498.f0", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_813, "g_813", print_hash_value);
    transparent_crc(g_865.f0, "g_865.f0", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1029[i].f0, "g_1029[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1051, "g_1051", print_hash_value);
    transparent_crc(g_1096.f0, "g_1096.f0", print_hash_value);
    transparent_crc(g_1096.f1, "g_1096.f1", print_hash_value);
    transparent_crc(g_1096.f2, "g_1096.f2", print_hash_value);
    transparent_crc(g_1096.f3, "g_1096.f3", print_hash_value);
    transparent_crc(g_1098, "g_1098", print_hash_value);
    transparent_crc(g_1111.f0, "g_1111.f0", print_hash_value);
    transparent_crc(g_1111.f1, "g_1111.f1", print_hash_value);
    transparent_crc(g_1111.f2, "g_1111.f2", print_hash_value);
    transparent_crc(g_1111.f3, "g_1111.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
