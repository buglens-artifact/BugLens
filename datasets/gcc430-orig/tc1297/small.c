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



static int g_2 = 4L;
static unsigned short g_15 = 1UL;
static int g_33 = 0x6B8642E5L;
static int g_48[6][1] = {{6L}, {6L}, {6L}, {6L}, {6L}, {6L}};
static int g_49 = 0x160C6370L;
static int g_50 = (-9L);
static int g_72[9][9] = {{6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}, {6L, 0x084F7CB2L, 7L, 1L, 0x00F1D91AL, 0L, 0xB46DFF61L, 0x60729490L, 1L}};
static int **g_130 = (void*)0;
static unsigned g_158 = 0xDAB9F7BFL;
static int *g_167 = &g_72[0][0];
static int g_171 = 0xFAEEADD4L;
static unsigned short g_241 = 0UL;
static short g_275 = 0L;
static int * const g_345 = &g_49;
static const unsigned short g_401[2] = {65531UL, 65531UL};
static unsigned g_406 = 1UL;
static unsigned g_608 = 0x9B7E344BL;
static short g_683[9] = {0x3C50L, 0x3C50L, 0x2A13L, 0x3C50L, 0x3C50L, 0x2A13L, 0x3C50L, 0x3C50L, 0x2A13L};
static unsigned g_689 = 0xD9D12604L;
static unsigned short g_738 = 0x12FBL;
static int g_789 = 0xFDA9F823L;
static short g_797[10] = {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)};
static char g_919 = 0xABL;
static unsigned g_946 = 2UL;
static int * const g_981 = &g_49;
static const int *g_1035 = &g_48[1][0];
static unsigned g_1042 = 0x49113E3BL;
static const unsigned char g_1099 = 5UL;
static int g_1133 = (-1L);
static const unsigned short g_1165 = 0xE92FL;
static const unsigned short g_1167 = 65535UL;
static unsigned g_1224 = 0UL;
static unsigned g_1453 = 0x554A9391L;
static unsigned g_1467 = 0UL;
static unsigned char g_1513[5] = {255UL, 1UL, 255UL, 1UL, 255UL};
static int g_1552 = 1L;
static char g_1711[10] = {(-1L), 0x7FL, (-1L), 0x7FL, (-1L), 0x7FL, (-1L), 0x7FL, (-1L), 0x7FL};
static short g_1729 = 0x565CL;
static unsigned short g_1836 = 0xA67AL;
static int *g_1839 = &g_50;
static int g_1853 = 0L;
static short g_1894 = 0x43F5L;
static char g_2046 = 0L;
static int *g_2318 = &g_2;



static const int func_1(void);
static short func_20(int * p_21, unsigned p_22, int * p_23);
static int * func_28(const int * p_29, int * p_30, int p_31);
static int func_40(unsigned short p_41, unsigned p_42, int * p_43, int * p_44, int * p_45);
static unsigned func_53(int * p_54);
static int * func_55(unsigned p_56, int * p_57, const int p_58);
static int * func_64(char p_65, int * p_66, int p_67);
static int * func_68(int * p_69, unsigned char p_70);
static unsigned short func_83(int * const p_84, char p_85, int p_86, int * const p_87, unsigned short p_88);
static int * func_89(int * p_90);
static const int func_1(void)
{
    unsigned short l_5[3];
    int l_6 = 0x0B999FB0L;
    int *l_7 = &l_6;
    int *l_8 = &l_6;
    int l_9 = 0x85B7F37CL;
    int *l_10 = &g_2;
    int *l_11 = &l_6;
    int l_12 = 3L;
    int *l_13 = &l_6;
    int *l_14 = (void*)0;
    int l_2148 = 0xE6804961L;
    int l_2155[2][10] = {{(-1L), 1L, 0xAD8548EBL, 1L, (-1L), 1L, 0xAD8548EBL, 1L, (-1L), 1L}, {(-1L), 1L, 0xAD8548EBL, 1L, (-1L), 1L, 0xAD8548EBL, 1L, (-1L), 1L}};
    int l_2259[6] = {0L, 9L, 0L, 9L, 0L, 9L};
    int *l_2260 = (void*)0;
    int *l_2275 = &g_72[1][3];
    short l_2325 = (-6L);
    const int *l_2327[2][8][9] = {{{&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}}, {{&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}, {&g_48[0][0], &l_12, &l_12, &l_12, &g_48[0][0], &g_50, &g_48[0][0], &l_12, &l_12}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_5[i] = 9UL;
    for (g_2 = 0; (g_2 <= 11); g_2 = safe_add_func_uint16_t_u_u(g_2, 2))
    {
        if (l_5[0])
            break;
    }
    g_15--;
    if (((((safe_mul_func_uint8_t_u_u(g_2, (func_20(&l_12, (((250UL < (&g_2 == &g_2)) & (safe_sub_func_uint32_t_u_u(((((void*)0 != &l_6) == (safe_lshift_func_uint8_t_u_s((&l_6 == &g_2), 2))) > 6L), 0xBFF5ECCEL))) | (*l_7)), &g_2) <= l_2148))) | 0x9C505DF2L) || g_683[6]) == (*g_1839)))
    {
        int *l_2151 = &l_12;
        int l_2154[8] = {(-1L), (-1L), 0x01458D5DL, (-1L), (-1L), 0x01458D5DL, (-1L), (-1L)};
        int l_2156 = 1L;
        int ***l_2180 = &g_130;
        unsigned l_2235[9] = {1UL, 0x09F2BF64L, 1UL, 0x09F2BF64L, 1UL, 0x09F2BF64L, 1UL, 0x09F2BF64L, 1UL};
        unsigned l_2248 = 4294967292UL;
        int *l_2274 = &l_2154[6];
        int i;
        if (((safe_lshift_func_int8_t_s_u(func_53(l_2151), (g_797[2] >= func_20(l_2151, (*l_2151), &g_2)))) != g_1729))
        {
            int **l_2152 = &g_167;
            int *l_2153[8][4] = {{&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}, {&g_50, &g_48[4][0], &g_72[8][8], &l_9}};
            unsigned short l_2157[10][5][1] = {{{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}, {{6UL}, {6UL}, {6UL}, {6UL}, {6UL}}};
            int i, j, k;
            (*l_2152) = l_2151;
            (*g_981) &= ((void*)0 == &g_130);
            l_2157[2][2][0]--;
        }
        else
        {
            short l_2162[2];
            int *l_2169 = &g_48[0][0];
            unsigned short l_2186 = 0x9EF1L;
            unsigned l_2213 = 18446744073709551612UL;
            int **l_2230 = &l_13;
            int i;
            for (i = 0; i < 2; i++)
                l_2162[i] = 0xC529L;
            (*l_2151) = (safe_rshift_func_int16_t_s_u(func_20(l_2169, g_49, &l_9), g_1711[8]));
            if ((*g_345))
            {
                int *l_2172 = (void*)0;
                (*l_2151) = (g_275 && ((g_1513[4] != ((safe_rshift_func_uint8_t_u_s(g_158, (((*g_345) == (*g_345)) & 0x4A00C57AL))) != (func_20(l_2172, g_797[3], func_89(func_89(&l_2155[0][2]))) < g_919))) > (*l_2169)));
                for (g_608 = 0; (g_608 <= 50); ++g_608)
                {
                    int l_2181 = 0xE35358FEL;
                    int **l_2221 = &l_2172;
                    for (g_1836 = 0; (g_1836 <= 30); g_1836++)
                    {
                        (*l_2151) = (0x46L != ((((safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_u((l_2180 == (void*)0), (l_2181 <= 0x3858L))))) && ((*g_1839) > 0L)) & g_1224) || ((safe_mod_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s((-5L), l_2186)) > g_49) ^ 0x5C36L) != g_1853), g_738)) > 1UL)));
                    }
                }
                for (g_1836 = 0; (g_1836 > 60); g_1836 = safe_add_func_uint32_t_u_u(g_1836, 9))
                {
                    int **l_2226[5] = {&g_1839, (void*)0, &g_1839, (void*)0, &g_1839};
                    int i;
                    (*g_1839) |= (0UL <= 0L);
                    g_1035 = &g_2;
                }
            }
            else
            {
                for (g_2 = 23; (g_2 != 21); g_2 = safe_sub_func_int32_t_s_s(g_2, 9))
                {
                    int **l_2229 = &l_14;
                    (*l_2229) = (void*)0;
                }
            }
            (*l_2230) = func_89(&g_49);
        }
        if ((((((!((g_738 < g_1711[5]) && (*l_2151))) <= 8L) < (((safe_mul_func_int8_t_s_s(g_683[6], g_1513[2])) > (safe_add_func_uint8_t_u_u(g_608, (l_2235[1] <= ((2L == (-1L)) >= g_1894))))) <= 4L)) != (*l_2151)) | 0xCFL))
        {
            short l_2238[5][8][3] = {{{(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}}, {{(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}}, {{(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}}, {{(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}}, {{(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}, {(-6L), 0x78C1L, 0x3C8EL}}};
            int l_2245 = 5L;
            int l_2246 = (-2L);
            int l_2247 = 0xB3BDD667L;
            int i, j, k;
            for (g_789 = (-11); (g_789 >= (-11)); ++g_789)
            {
                int *l_2239 = (void*)0;
                int *l_2240 = (void*)0;
                int *l_2241 = &l_2155[0][2];
                int *l_2242 = &g_72[0][6];
                int *l_2243 = &g_72[0][6];
                int *l_2244[4][4][5];
                int i, j, k;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_2244[i][j][k] = &g_33;
                    }
                }
                --l_2248;
                (*g_1839) = (safe_mul_func_int8_t_s_s((0x31CBL < func_20(&l_9, g_72[0][6], &l_2246)), ((void*)0 != &l_6)));
                (*l_7) = (safe_rshift_func_uint16_t_u_u((g_789 ^ g_158), 15));
                (*l_7) = (-2L);
            }
            (*l_11) = (safe_rshift_func_int8_t_s_u(0x8DL, 5));
            for (g_1467 = 17; (g_1467 < 18); g_1467++)
            {
                int *l_2267 = &g_33;
                unsigned short l_2299 = 65535UL;
                int *l_2305 = &l_6;
                unsigned l_2319 = 18446744073709551611UL;
                if ((safe_mul_func_int8_t_s_s((-1L), (3UL & (func_20(l_2267, (safe_rshift_func_int8_t_s_s((g_50 || (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(((g_1167 ^ (l_2246 == (*l_2267))) == func_20(&g_33, (&l_2155[0][7] != (void*)0), &l_2247)), g_1224)), (*l_2267)))), 2)), l_2274) | g_789)))))
                {
                    int l_2276 = 0x68A7A038L;
                    int * const l_2286[7] = {&g_72[6][8], (void*)0, &g_72[6][8], (void*)0, &g_72[6][8], (void*)0, &g_72[6][8]};
                    unsigned short l_2291[1][1][10] = {{{0x67B7L, 0xF020L, 0xA600L, 0xA600L, 0xF020L, 0x67B7L, 0xF020L, 0xA600L, 0xA600L, 0xF020L}}};
                    int i, j, k;
                    if ((*l_2274))
                    {
                        return (*l_2267);
                    }
                    else
                    {
                        (*l_2275) = 1L;
                        (*l_2151) |= ((g_1099 || (safe_mod_func_int8_t_s_s((&g_981 != (void*)0), (*l_2275)))) == (*l_2275));
                    }
                    if ((safe_mod_func_uint8_t_u_u((*l_7), 0x55L)))
                    {
                        int *l_2287 = &l_2246;
                        int **l_2288 = &l_2260;
                        (*l_2288) = func_68(l_2287, g_946);
                        (**l_2288) ^= (*l_2267);
                    }
                    else
                    {
                        int **l_2289 = (void*)0;
                        int **l_2290[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_2290[i] = &l_2151;
                        l_2151 = &l_2246;
                        (*g_1839) &= l_2291[0][0][8];
                    }
                    if ((*l_2274))
                        continue;
                }
                else
                {
                    return (*g_981);
                }
                if ((((~((g_608 < (safe_unary_minus_func_int16_t_s((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u(4UL, (0L != (safe_rshift_func_uint8_t_u_u((g_789 < (0x719D5617L | (*g_981))), (((void*)0 == &l_2155[0][2]) > func_20(&g_49, g_158, &g_72[7][8]))))))) && 0xE414L) >= 1UL), g_683[6]))))) != 0xC633L)) | l_2299) > (-1L)))
                {
                    unsigned l_2302 = 0x7D34E0E3L;
                    for (l_2246 = 0; (l_2246 != 2); ++l_2246)
                    {
                        if ((*g_981))
                            break;
                        ++l_2302;
                    }
                    l_2260 = l_2305;
                }
                else
                {
                    unsigned l_2306[1][2];
                    int **l_2307 = &g_1839;
                    unsigned l_2320 = 0x26B29F2CL;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2306[i][j] = 18446744073709551608UL;
                    }
                    (*g_981) = l_2306[0][1];
                    (*l_2307) = &l_2259[4];
                    for (l_2156 = (-1); (l_2156 != (-17)); --l_2156)
                    {
                        unsigned l_2316 = 0x0386F6B0L;
                        int *l_2317 = &l_6;
                        (*l_2274) ^= ((safe_mul_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(((void*)0 == &g_1839), 1UL)) >= (safe_sub_func_int8_t_s_s(((*l_2305) > g_401[0]), l_2319))) != g_683[6]), g_171)) | l_2320);
                    }
                }
                return (*g_2318);
            }
        }
        else
        {
            (*l_7) &= (safe_mod_func_uint8_t_u_u(3UL, g_1042));
        }
        (*l_2274) |= ((*g_345) ^ (safe_mul_func_int16_t_s_s(func_53(&l_2156), func_20(&l_9, g_2046, &l_2259[0]))));
    }
    else
    {
        const int *l_2326 = &l_2259[0];
        int *l_2332 = &g_72[0][6];
        int ***l_2337[5][5][5] = {{{(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}}, {{(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}}, {{(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}}, {{(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}}, {{(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}, {(void*)0, &g_130, (void*)0, &g_130, &g_130}}};
        int i, j, k;
        (*l_13) = l_2325;
        l_2327[1][6][2] = l_2326;
        if (((safe_lshift_func_int16_t_s_s(((*g_345) == (safe_lshift_func_int16_t_s_s((*l_11), func_53(func_68(l_2332, g_1729))))), 3)) ^ 0x622AA5FAL))
        {
            int *l_2333 = &l_9;
            l_2333 = l_2332;
        }
        else
        {
            int *l_2336 = &g_72[8][5];
            (*l_2332) &= (*g_2318);
            (*g_1839) = ((((1L || (safe_add_func_uint8_t_u_u((((*l_13) && func_20(l_2336, ((void*)0 != l_2337[0][4][0]), l_2336)) || (g_1042 != (g_2046 >= 65535UL))), (*l_2332)))) | (*g_2318)) || g_1042) >= g_241);
            return (*g_981);
        }
    }
    (*g_981) = (*l_7);
    return (*g_345);
}







static short func_20(int * p_21, unsigned p_22, int * p_23)
{
    unsigned short l_1939 = 0xC5BCL;
    int * const l_1947 = &g_72[2][8];
    int l_1965 = 0L;
    int l_1966 = (-1L);
    int l_1968 = 0x6158B851L;
    int l_1970 = 0x9D10F737L;
    int l_1973 = (-5L);
    int l_1974 = 1L;
    int l_1975[8][10][1] = {{{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}, {{0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}, {0x5FAAD638L}}};
    short l_1980 = 0xB0A2L;
    unsigned l_2003 = 0xE0E1A0F9L;
    int ***l_2066 = (void*)0;
    int l_2072[4];
    int l_2074 = (-1L);
    int ***l_2107 = &g_130;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_2072[i] = (-5L);
    return p_22;
}







static int * func_28(const int * p_29, int * p_30, int p_31)
{
    char l_32[3];
    int *l_47 = &g_33;
    int l_1655 = 0x6747F601L;
    int ** const *l_1708[8][10] = {{(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}, {(void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130, &g_130, &g_130, (void*)0, &g_130}};
    int * const l_1709 = &g_2;
    int *l_1712 = (void*)0;
    int l_1768 = (-2L);
    char l_1788 = 0x8AL;
    unsigned char l_1855[8] = {0x23L, 0x23L, 7UL, 0x23L, 0x23L, 7UL, 0x23L, 0x23L};
    int *l_1905 = &g_50;
    char l_1908[10][7][3] = {{{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}, {{0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}, {0xBDL, 2L, 0xBDL}}};
    unsigned l_1909 = 0x59DBCA18L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_32[i] = 0L;
    for (g_15 = 0; (g_15 <= 2); g_15 += 1)
    {
        unsigned l_46 = 0UL;
        int *l_1639 = &g_72[3][7];
        int l_1649 = 0xA46ECDE1L;
        int l_1650 = 8L;
        unsigned short l_1651[8] = {65535UL, 65535UL, 0x3002L, 65535UL, 65535UL, 0x3002L, 65535UL, 65535UL};
        int i;
        for (p_31 = 2; (p_31 >= 0); p_31 -= 1)
        {
            unsigned l_1644 = 0xB6ACBA99L;
            int l_1646[10] = {(-8L), 0xC63F80D7L, 0xFAC4458EL, 0xFAC4458EL, 0xC63F80D7L, (-8L), 0xC63F80D7L, 0xFAC4458EL, 0xFAC4458EL, 0xC63F80D7L};
            unsigned char l_1654 = 0UL;
            int i;
            for (g_33 = 2; (g_33 >= 0); g_33 -= 1)
            {
                unsigned l_1638 = 0xF69D4D47L;
                int *** const l_1645 = &g_130;
            }
            (*l_1639) = (l_1644 | (safe_lshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((&g_130 != &g_130), 6)) < (-1L)) || (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(func_83(&l_1655, p_31, l_1646[3], &g_72[0][6], g_50), 9)), p_31))), p_31)));
            (*l_1639) = 0L;
        }
        for (g_738 = 0; (g_738 <= 8); g_738 += 1)
        {
            return &g_49;
        }
    }
lbl_1703:
    for (g_608 = (-9); (g_608 != 10); g_608 = safe_add_func_uint16_t_u_u(g_608, 5))
    {
        unsigned short l_1677 = 0xE6A4L;
        int l_1678[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1678[i] = 0x0E32DDE6L;
        l_1678[2] = (((((safe_add_func_uint16_t_u_u((((!(safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(p_31, ((g_1513[1] & p_31) & g_158))), (((l_1677 ^ l_1677) ^ ((((*l_47) >= l_1677) < 65535UL) != 65531UL)) || (*l_47))))) == g_33) && (*l_47)), (*l_47))) == (*l_47)) & p_31) <= l_1677) == 9L);
    }
    for (g_406 = 0; (g_406 == 15); g_406 = safe_add_func_int8_t_s_s(g_406, 4))
    {
        int **l_1693[4] = {&g_167, (void*)0, &g_167, (void*)0};
        int i;
        for (g_608 = (-24); (g_608 < 47); g_608++)
        {
            short l_1704[8][5][6] = {{{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}, {{1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}, {1L, 0x67EFL, 0x9B3AL, 0xEBF6L, 1L, (-1L)}}};
            int *l_1705[1][8];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 8; j++)
                    l_1705[i][j] = &g_49;
            }
            for (g_738 = 0; (g_738 >= 1); g_738 = safe_add_func_uint32_t_u_u(g_738, 9))
            {
                short l_1689 = 0xC984L;
                int l_1690[10] = {0xEA781690L, 0x0F19A81AL, 0xEA781690L, 0x0F19A81AL, 0xEA781690L, 0x0F19A81AL, 0xEA781690L, 0x0F19A81AL, 0xEA781690L, 0x0F19A81AL};
                int i;
                l_1690[2] = (safe_add_func_uint16_t_u_u(0UL, (safe_rshift_func_uint8_t_u_s(l_1689, 4))));
                for (g_158 = 0; (g_158 > 37); ++g_158)
                {
                    int ***l_1694 = &l_1693[2];
                    (*l_1694) = l_1693[2];
                }
                for (g_49 = (-14); (g_49 < 0); g_49 = safe_add_func_int32_t_s_s(g_49, 4))
                {
                    const unsigned char l_1702 = 0x64L;
                    for (p_31 = 0; (p_31 >= (-15)); p_31 = safe_sub_func_int8_t_s_s(p_31, 7))
                    {
                        int l_1701 = 0xBDFDC39FL;
                        (*l_47) = (0xC32E30A5L >= 0xFCB05D61L);
                        p_29 = func_68(&l_1655, (safe_rshift_func_uint16_t_u_u((l_1701 | l_1689), l_1702)));
                    }
                    if ((*g_345))
                        continue;
                    if (l_1689)
                        goto lbl_1703;
                    (*l_47) |= l_1704[2][1][0];
                }
            }
        }
        for (g_1133 = 0; (g_1133 > (-30)); g_1133--)
        {
            int *l_1710 = &g_48[1][0];
            unsigned short l_1720 = 0x28CFL;
            unsigned l_1747 = 0x576ACEEEL;
            p_30 = &p_31;
            if ((*l_47))
            {
                int *l_1713 = &g_48[2][0];
                g_1035 = l_1713;
                for (p_31 = 3; (p_31 >= 0); p_31 -= 1)
                {
                    int l_1721 = (-1L);
                    int l_1745 = (-1L);
                    int * const l_1746 = &l_1655;
                    int i;
                    if ((*g_345))
                    {
                        const unsigned l_1714 = 0xE653584DL;
                        if (l_1714)
                            break;
                    }
                    else
                    {
                        int *l_1715 = &g_50;
                        l_1713 = &p_31;
                        if ((*g_1035))
                            continue;
                        g_167 = l_1715;
                    }
                    for (g_1042 = 1; (g_1042 <= 9); g_1042 += 1)
                    {
                        int i, j;
                        (*g_345) &= (0UL > ((g_1711[(p_31 + 4)] >= (g_1711[(p_31 + 6)] | (g_1711[(p_31 + 2)] != (0x5FL >= g_72[p_31][(p_31 + 3)])))) > (~(!(g_72[p_31][(p_31 + 1)] >= 1L)))));
                        if ((*g_345))
                            break;
                        l_1721 |= (((void*)0 != l_1708[7][6]) && (safe_mod_func_int32_t_s_s(((~p_31) && ((0x0806L & p_31) < (safe_mul_func_int16_t_s_s((*l_1713), ((l_1720 ^ (&p_29 == l_1693[2])) | g_49))))), 0x914A8C2DL)));
                    }
                    g_1035 = &p_31;
                    if ((g_158 <= ((safe_rshift_func_int16_t_s_u(g_946, 13)) < (~g_738))))
                    {
                        int l_1728[6] = {0xB92F22E6L, 0x1EAF3479L, 0xB92F22E6L, 0x1EAF3479L, 0xB92F22E6L, 0x1EAF3479L};
                        int i;
                        if (l_1728[5])
                            break;
                        return l_1710;
                    }
                    else
                    {
                        const int *l_1734[7][3][3];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_1734[i][j][k] = &l_1655;
                            }
                        }
                        if (g_1729)
                            break;
                        (*g_345) = (safe_mod_func_uint32_t_u_u(1UL, (safe_add_func_uint32_t_u_u((((void*)0 == l_1734[5][1][1]) ^ (*l_1713)), ((g_2 >= ((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((g_33 & ((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(l_1745, g_1729)) <= (*l_1709)) || g_49), 13)) ^ g_33)), 4294967289UL)), (-1L))) != g_797[9])) >= 0L)))));
                        (*g_981) |= ((((g_738 && (safe_sub_func_uint8_t_u_u(g_1513[1], g_919))) >= (-1L)) && p_31) | g_401[0]);
                        g_167 = (void*)0;
                    }
                }
                if ((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((-1L), ((((void*)0 == &g_345) ^ (*p_29)) >= (safe_unary_minus_func_uint16_t_u(g_1099))))), 0xBE38L)) > (safe_mul_func_int16_t_s_s(((!((void*)0 != &p_30)) | (*p_29)), 0x6438L))) & 0L))
                {
                    short l_1763 = 0x2F2DL;
                    int l_1766 = 0xADCD8064L;
                    l_1766 ^= (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(func_83(func_89(&p_31), g_683[6], (safe_sub_func_int16_t_s_s(l_1763, (safe_sub_func_int16_t_s_s((&l_1713 == &l_1713), (*l_1713))))), l_1713, ((void*)0 != &p_29)), 4)), 0x207A83D8L));
                }
                else
                {
                    int * const l_1767 = &g_48[2][0];
                    int *l_1771[2][10][5] = {{{&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}}, {{&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}, {&g_48[5][0], &g_72[0][6], &l_1655, &g_72[0][6], &g_48[5][0]}}};
                    int i, j, k;
                    (*l_47) ^= (*g_1035);
                    if ((~(*l_1713)))
                    {
                        unsigned char l_1769 = 5UL;
                        l_1769 ^= func_83(&p_31, (((void*)0 == l_1767) <= (1L | (g_1711[2] < l_1768))), (+0L), func_68(func_68(func_89(&g_72[0][6]), (*l_1710)), p_31), g_797[2]);
                    }
                    else
                    {
                        short l_1770 = 0x498EL;
                        (*g_345) = l_1770;
                        l_1771[1][6][4] = &g_50;
                        return l_1710;
                    }
                }
                for (g_608 = (-23); (g_608 == 53); g_608 = safe_add_func_uint32_t_u_u(g_608, 2))
                {
                    if ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(((g_1133 < ((void*)0 != &g_2)) >= g_1224), (g_1167 > p_31))), 0x99314E76L)))
                    {
                        p_30 = &p_31;
                    }
                    else
                    {
                        (*g_981) = 5L;
                    }
                }
            }
            else
            {
                if (g_946)
                    goto lbl_1703;
                return &g_50;
            }
            (*g_345) |= ((*p_30) ^ 1UL);
        }
    }
    if ((&p_29 != &p_30))
    {
        char l_1785 = 0x52L;
        int * const l_1787[2][4] = {{&g_48[4][0], &g_72[0][6], &g_48[4][0], &g_72[0][6]}, {&g_48[4][0], &g_72[0][6], &g_48[4][0], &g_72[0][6]}};
        int *l_1789 = (void*)0;
        int ***l_1808[7][6][4] = {{{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}, {{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}, {{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}, {{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}, {{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}, {{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}, {{&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}, {&g_130, &g_130, (void*)0, &g_130}}};
        short l_1885 = 0xD2BBL;
        int i, j, k;
        if (((void*)0 == &g_130))
        {
            unsigned char l_1780 = 0x3FL;
            int *l_1786[2];
            int ***l_1809 = &g_130;
            const int l_1820 = 0x8E6473CBL;
            unsigned l_1840[6][3] = {{18446744073709551615UL, 0x6D89E43FL, 18446744073709551615UL}, {18446744073709551615UL, 0x6D89E43FL, 18446744073709551615UL}, {18446744073709551615UL, 0x6D89E43FL, 18446744073709551615UL}, {18446744073709551615UL, 0x6D89E43FL, 18446744073709551615UL}, {18446744073709551615UL, 0x6D89E43FL, 18446744073709551615UL}, {18446744073709551615UL, 0x6D89E43FL, 18446744073709551615UL}};
            int *l_1874 = (void*)0;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1786[i] = &g_2;
            (*g_981) ^= (safe_lshift_func_int8_t_s_u(l_1780, (g_1453 ^ 0xD5D1L)));
            if ((*p_29))
            {
                int l_1816 = 0x95669DD8L;
                int *l_1823 = &l_1816;
                int * const l_1825 = &g_49;
                int l_1850 = (-1L);
                int l_1852[4][9] = {{0x68AF3DB6L, 1L, 0x67309CB0L, (-8L), 0x67309CB0L, 1L, 0x68AF3DB6L, (-6L), 1L}, {0x68AF3DB6L, 1L, 0x67309CB0L, (-8L), 0x67309CB0L, 1L, 0x68AF3DB6L, (-6L), 1L}, {0x68AF3DB6L, 1L, 0x67309CB0L, (-8L), 0x67309CB0L, 1L, 0x68AF3DB6L, (-6L), 1L}, {0x68AF3DB6L, 1L, 0x67309CB0L, (-8L), 0x67309CB0L, 1L, 0x68AF3DB6L, (-6L), 1L}};
                int i, j;
                l_1788 |= (p_31 != 0xD88C924DL);
                for (g_946 = 0; (g_946 <= 9); g_946 += 1)
                {
                    return l_1789;
                }
                for (g_946 = 0; (g_946 <= 0); g_946 += 1)
                {
                    int i;
                    if (g_797[(g_946 + 2)])
                        break;
                    if (g_1729)
                        goto lbl_1893;
                    if ((*g_345))
                    {
                        (*g_981) = (*g_981);
                        return l_1786[(g_946 + 1)];
                    }
                    else
                    {
                        return l_1789;
                    }
                }
                if ((safe_add_func_uint32_t_u_u(((safe_mod_func_int8_t_s_s(g_72[0][6], 0x70L)) | (safe_mod_func_uint16_t_u_u((0x11EAL > g_72[1][0]), ((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((*g_981) & (((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_1808[5][2][1] != l_1809), 3)), (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(0xECB1L, (safe_mod_func_int32_t_s_s((-6L), l_1816)))) == g_789), g_275)))) <= 0xB05DL), 2)), g_738)) <= 0xA23AE4B2L) < g_919)), p_31)), 0)) | 0x01A63326L)))), (*p_29))))
                {
                    int * const l_1819 = (void*)0;
                    unsigned short l_1824 = 65526UL;
                    int *l_1826[1][9][9] = {{{&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}, {&l_1816, &g_72[3][8], &g_2, &g_2, &g_72[3][8], &l_1816, &g_72[3][8], &g_2, &g_2}}};
                    int i, j, k;
                    if ((*g_981))
                    {
                        return &g_48[4][0];
                    }
                    else
                    {
                        int *l_1827[1][1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1827[i][j] = &g_49;
                        }
                        l_1827[0][0] = &p_31;
                        (*g_981) = ((0L | ((void*)0 == &g_130)) != (safe_mod_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u((((g_1836 || (g_1133 == func_53(l_1826[0][8][6]))) == (+(*g_981))) & ((p_31 < p_31) && p_31)), (*l_1825))) >= (*g_981)), p_31)) || (*p_29)) || 0x171379FBL), p_31)));
                        (*g_1839) ^= (safe_lshift_func_uint8_t_u_s(g_158, 7));
                    }
                    l_1840[5][1] = (g_797[2] >= (*p_29));
                }
                else
                {
                    unsigned short l_1845 = 0x4BEFL;
                    int l_1851 = 0xA386FE3AL;
                    int l_1854 = 1L;
                    if ((func_83(&p_31, (safe_mod_func_int8_t_s_s(p_31, ((g_946 & (safe_sub_func_int32_t_s_s((*p_29), (l_1808[5][2][1] != &g_130)))) && ((*l_47) & ((g_789 && g_1836) | 9L))))), (*l_47), &g_2, g_49) != g_48[0][0]))
                    {
                        l_1845--;
                        p_30 = (void*)0;
                        (*g_345) ^= (safe_lshift_func_uint8_t_u_u(g_1552, 0));
                        (*l_1823) &= 0xE4EBF3C6L;
                    }
                    else
                    {
                        (*g_981) = 0x7989D15EL;
                        l_1855[0]--;
                    }
                    for (g_608 = (-30); (g_608 <= 8); g_608 = safe_add_func_int8_t_s_s(g_608, 6))
                    {
                        (*l_1825) &= (safe_mul_func_uint8_t_u_u(((!(safe_mod_func_int8_t_s_s((-1L), (safe_mod_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_31, g_2)), g_1099))))) == ((void*)0 == l_1808[5][2][1])), ((void*)0 == &g_345)));
                        if ((*p_29))
                            continue;
                    }
                    for (l_1768 = 1; (l_1768 >= 0); l_1768 -= 1)
                    {
                        int i;
                        l_1874 = func_68(func_89(l_1786[l_1768]), (((void*)0 == &p_31) >= ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(p_31, ((*g_345) != (safe_mul_func_uint16_t_u_u((g_2 <= func_53(&g_72[7][5])), p_31))))), g_241)) && 0UL)));
                        (*g_1839) = (p_31 & 0x73L);
                    }
                    if ((safe_lshift_func_uint16_t_u_s((g_1165 == g_158), 15)))
                    {
                        unsigned l_1877 = 0x51793055L;
                        l_1877--;
                        return &g_50;
                    }
                    else
                    {
                        unsigned short l_1880[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1880[i] = 0x082AL;
                        (*l_1823) = l_1880[0];
                        (*l_47) = (safe_rshift_func_uint16_t_u_u((g_406 > (safe_mul_func_uint8_t_u_u(g_1042, p_31))), g_683[6]));
                        (*g_345) = (l_1885 || ((void*)0 == &p_31));
                        (*g_345) = ((*l_47) <= (safe_sub_func_uint16_t_u_u(((*l_1709) < (0xB5L > (safe_rshift_func_int16_t_s_u((*l_1709), (safe_lshift_func_uint8_t_u_u((7L ^ g_1711[5]), (func_53(func_68(&g_50, p_31)) > 4UL))))))), g_738)));
                    }
                }
            }
            else
            {
                int *l_1892 = (void*)0;
                return l_1892;
            }
lbl_1893:
            p_29 = &g_48[0][0];
            g_1894 |= (*p_29);
        }
        else
        {
            int *l_1899 = &g_49;
            (*g_345) &= (*p_29);
            (*g_345) = (safe_sub_func_uint8_t_u_u(((-8L) != (&g_72[0][6] != &p_31)), (&g_33 != (void*)0)));
            (*g_981) |= (safe_rshift_func_int8_t_s_s((g_789 & p_31), 2));
            g_167 = l_1899;
        }
    }
    else
    {
        int *l_1907[8][5][2] = {{{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}, {{&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}, {&g_48[3][0], &g_49}}};
        int i, j, k;
        for (p_31 = (-23); (p_31 >= 6); p_31 = safe_add_func_int16_t_s_s(p_31, 1))
        {
            int *l_1902 = (void*)0;
            int l_1906 = 6L;
            (*g_345) |= (*g_1035);
            for (g_15 = 0; (g_15 >= 16); g_15 = safe_add_func_int8_t_s_s(g_15, 2))
            {
                l_1905 = &p_31;
            }
            if (l_1906)
                continue;
            p_29 = l_1907[5][4][1];
        }
        l_1909--;
    }
    return &g_33;
}







static int func_40(unsigned short p_41, unsigned p_42, int * p_43, int * p_44, int * p_45)
{
    int ***l_1624 = &g_130;
    int l_1629 = 0xBB2629C0L;
    for (p_42 = 0; (p_42 <= 0); p_42 += 1)
    {
        int *l_59 = &g_50;
        int *l_1621 = (void*)0;
        for (p_41 = 0; (p_41 <= 0); p_41 += 1)
        {
            int i, j;
            g_48[(p_41 + 3)][p_42] ^= (*p_45);
            for (g_49 = 0; (g_49 <= 0); g_49 += 1)
            {
                int l_1610 = 0xBF920D5CL;
                int **l_1618 = &l_59;
                for (g_50 = 0; (g_50 >= 0); g_50 -= 1)
                {
                    int i, j;
                }
                (*l_1618) = p_44;
            }
            if ((safe_mul_func_uint16_t_u_u(g_48[(p_41 + 3)][p_42], (safe_add_func_uint8_t_u_u(((void*)0 != l_1624), g_683[6])))))
            {
                return (*p_43);
            }
            else
            {
                int i, j;
                g_48[(p_42 + 4)][p_42] = (*p_45);
                if (g_48[(p_42 + 4)][p_42])
                    continue;
            }
        }
        (*g_167) &= ((safe_sub_func_uint8_t_u_u(g_1453, (safe_mod_func_uint32_t_u_u(0x4A6F12C0L, (-1L))))) == l_1629);
        for (g_241 = 0; (g_241 == 33); g_241 = safe_add_func_int8_t_s_s(g_241, 5))
        {
            for (g_406 = 3; (g_406 <= 8); g_406 += 1)
            {
                int i, j;
                g_72[(p_42 + 4)][(p_42 + 2)] = g_1513[(p_42 + 4)];
                if ((*p_44))
                    break;
                if ((*g_345))
                    continue;
                return (*g_345);
            }
            if ((*p_45))
                continue;
        }
        (*g_345) ^= (g_689 || (safe_add_func_uint32_t_u_u(4294967295UL, p_42)));
    }
    return (*g_981);
}







static unsigned func_53(int * p_54)
{
    char l_1402 = 0x17L;
    int * const l_1407 = (void*)0;
    short l_1408 = 8L;
    int l_1416 = 0x7974D5D2L;
    int l_1417 = (-2L);
    int l_1451 = 0x5841BFC4L;
    int l_1454[8];
    int l_1461 = 0x0753A910L;
    unsigned l_1464 = 18446744073709551615UL;
    char l_1479 = 2L;
    unsigned short l_1480 = 65535UL;
    int ***l_1529[1][8][6] = {{{&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}, {&g_130, &g_130, &g_130, &g_130, &g_130, &g_130}}};
    short l_1560[3];
    short l_1581 = 0x0A2AL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_1454[i] = 0x022C6E02L;
    for (i = 0; i < 3; i++)
        l_1560[i] = (-1L);
lbl_1588:
    l_1402 = ((void*)0 == p_54);
    if ((safe_add_func_uint32_t_u_u(g_158, (*g_981))))
    {
        int * const *l_1415[6][4][2] = {{{&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}}, {{&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}}, {{&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}}, {{&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}}, {{&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}}, {{&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}, {&g_167, &g_345}}};
        int * const **l_1414 = &l_1415[4][0][1];
        short l_1455 = 0L;
        int i, j, k;
        for (g_406 = (-10); (g_406 < 10); g_406 = safe_add_func_int32_t_s_s(g_406, 2))
        {
            int **l_1411 = &g_167;
            (*l_1411) = func_89(p_54);
        }
        for (l_1408 = 0; (l_1408 < (-28)); --l_1408)
        {
            unsigned l_1426 = 0x7E59A06CL;
            int l_1437 = (-8L);
            unsigned l_1438 = 4294967294UL;
            int *l_1443 = &g_72[0][6];
            int l_1457 = 0x40D4C806L;
            int l_1458 = 0x7E224DEEL;
            int l_1459 = 0L;
            int l_1460 = 0x0E58AADEL;
            int l_1463[5] = {1L, 0x70765FCDL, 1L, 0x70765FCDL, 1L};
            int i;
            if ((g_2 >= (l_1414 != &g_130)))
            {
                unsigned l_1418 = 3UL;
                l_1418++;
            }
            else
            {
                unsigned l_1421 = 0UL;
                l_1421 = (-10L);
            }
            if ((safe_lshift_func_uint8_t_u_u(g_683[1], 0)))
            {
                int l_1424[4][6][6] = {{{0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}}, {{0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}}, {{0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}}, {{0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}, {0xB72B459FL, (-1L), 1L, (-10L), (-1L), 7L}}};
                int i, j, k;
                if (l_1424[1][2][0])
                {
                    short l_1425 = (-4L);
                    int **l_1429 = &g_167;
                    l_1426--;
                    (*l_1429) = p_54;
                }
                else
                {
                    unsigned l_1432 = 18446744073709551615UL;
                    int *l_1441[4] = {&g_72[0][6], (void*)0, &g_72[0][6], (void*)0};
                    int l_1462 = 9L;
                    int i;
                    if ((safe_rshift_func_int8_t_s_u(((l_1432 & (safe_mul_func_int8_t_s_s(l_1426, 0x56L))) | l_1426), 4)))
                    {
                        int **l_1442 = &g_167;
                        ++l_1438;
                        (*l_1442) = l_1441[2];
                    }
                    else
                    {
                        int l_1444 = 0x723D754BL;
                        unsigned l_1452 = 4UL;
                        (*l_1443) = func_83(&l_1417, (*l_1443), l_1424[3][0][2], p_54, l_1444);
                        if ((*g_981))
                            continue;
                        p_54 = p_54;
                    }
                    if (g_1453)
                        break;
                    for (l_1417 = 0; (l_1417 >= 0); l_1417 -= 1)
                    {
                        int l_1456[7][5][1] = {{{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}};
                        int i, j, k;
                        ++l_1464;
                    }
                    g_1467--;
                }
                return g_738;
            }
            else
            {
                int *l_1470[3][3] = {{&l_1460, &l_1460, &l_1458}, {&l_1460, &l_1460, &l_1458}, {&l_1460, &l_1460, &l_1458}};
                int i, j;
                g_48[0][0] &= (*p_54);
                (*l_1443) = (*p_54);
                for (g_1042 = 1; (g_1042 <= 8); g_1042 += 1)
                {
                    for (l_1417 = 5; (l_1417 >= 0); l_1417 -= 1)
                    {
                        int i, j;
                        p_54 = &g_72[g_1042][g_1042];
                    }
                    return (*l_1443);
                }
            }
            for (g_275 = 0; (g_275 >= (-26)); --g_275)
            {
                for (g_1453 = 22; (g_1453 <= 31); g_1453 = safe_add_func_uint8_t_u_u(g_1453, 9))
                {
                    return (*l_1443);
                }
                (*l_1443) = (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(g_406, 4)), 1UL));
                if ((*l_1443))
                    continue;
            }
        }
        l_1480--;
    }
    else
    {
        int *l_1485 = &g_72[0][6];
        int l_1496[5][4][8] = {{{(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}}, {{(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}}, {{(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}}, {{(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}}, {{(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}, {(-8L), (-1L), 0L, 0L, 0x5AF76CE7L, 0x1C9713C0L, 0xAE2D5C69L, 0xED7AC3C8L}}};
        int * const *l_1521 = &g_167;
        int * const ** const l_1520 = &l_1521;
        int l_1579[4][4] = {{0x07123A95L, 0L, 0x07123A95L, 0L}, {0x07123A95L, 0L, 0x07123A95L, 0L}, {0x07123A95L, 0L, 0x07123A95L, 0L}, {0x07123A95L, 0L, 0x07123A95L, 0L}};
        int i, j, k;
        if ((*g_981))
        {
            int l_1483 = 0L;
            int *l_1484 = &l_1454[7];
            int **l_1486 = (void*)0;
            l_1483 ^= (*g_981);
            (*l_1484) &= (*p_54);
            p_54 = l_1485;
            (*p_54) |= (*g_981);
        }
        else
        {
            int l_1487 = 0x766828EDL;
            int l_1502 = 0L;
            const unsigned l_1535[10] = {0xF11918EEL, 0xCF581E42L, 0x25A79119L, 0x25A79119L, 0xCF581E42L, 0xF11918EEL, 0xCF581E42L, 0x25A79119L, 0x25A79119L, 0xCF581E42L};
            int l_1553 = 0L;
            int l_1554 = 0x9FE7D01CL;
            int l_1561 = 5L;
            int l_1562 = 0xD3773D15L;
            int l_1563[10] = {(-2L), 0L, (-2L), 0L, (-2L), 0L, (-2L), 0L, (-2L), 0L};
            short l_1594 = 0xFB41L;
            char l_1595 = 0L;
            int i;
            (*l_1485) &= ((g_1224 | g_241) ^ l_1487);
            if (((4294967286UL & (*p_54)) ^ (*l_1485)))
            {
                unsigned l_1503 = 0x40258002L;
                for (g_689 = 0; (g_689 < 3); g_689++)
                {
                    int l_1494[10] = {(-1L), (-9L), (-1L), (-9L), (-1L), (-9L), (-1L), (-9L), (-1L), (-9L)};
                    unsigned l_1499 = 0xA44D0C9BL;
                    int i;
                    if (((0x8CL < (l_1494[4] ^ l_1487)) != g_1467))
                    {
                        int **l_1495 = &l_1485;
                        int *l_1497 = &l_1494[4];
                        int *l_1498[7] = {(void*)0, &l_1487, (void*)0, &l_1487, (void*)0, &l_1487, (void*)0};
                        int i;
                        (*l_1495) = func_89(&l_1454[7]);
                        --l_1499;
                        l_1503--;
                        if ((*p_54))
                            continue;
                    }
                    else
                    {
                        short l_1510 = 0x3C68L;
                        g_1513[0] |= ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(l_1510, (func_83(&l_1494[6], g_1167, g_1133, &g_49, l_1499) == l_1503))), l_1487)) != 1L);
                        return g_275;
                    }
                    if ((*g_345))
                        break;
                    for (l_1464 = 0; l_1464 < 5; l_1464 += 1)
                    {
                        g_1513[l_1464] = 255UL;
                    }
                }
                (*l_1485) = l_1487;
                return g_50;
            }
            else
            {
                char l_1522[1];
                unsigned char l_1542[9];
                int l_1544 = 0xBCCB62FFL;
                int l_1546 = (-2L);
                int l_1549 = 0xBA7B24F9L;
                int l_1551[2][9] = {{0x09FA443BL, 0x09FA443BL, 0x12AFD0F5L, 0xDCF3F144L, 0x83F0810BL, 0xDCF3F144L, 0x12AFD0F5L, 0x09FA443BL, 0x09FA443BL}, {0x09FA443BL, 0x09FA443BL, 0x12AFD0F5L, 0xDCF3F144L, 0x83F0810BL, 0xDCF3F144L, 0x12AFD0F5L, 0x09FA443BL, 0x09FA443BL}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1522[i] = 0x00L;
                for (i = 0; i < 9; i++)
                    l_1542[i] = 1UL;
                if ((safe_add_func_int16_t_s_s(0x7493L, ((*l_1485) ^ (safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s((g_2 != (l_1520 != &l_1521)), ((((void*)0 != p_54) == 0xA4F3L) | (g_689 > 0UL)))), l_1522[0]))))))
                {
                    int l_1534 = 0L;
                    int l_1550 = 0xED8F0B46L;
                    int l_1555 = 0x16A42221L;
                    int l_1556 = 0x2589C8BBL;
                    int l_1557 = 0x0155A31FL;
                    int l_1558 = 0x8A492F51L;
                    int l_1559[7] = {0x8A264DAFL, 0x8A264DAFL, 9L, 0x8A264DAFL, 0x8A264DAFL, 9L, 0x8A264DAFL};
                    unsigned l_1565 = 0UL;
                    short l_1576 = 0x8DBFL;
                    int i;
                    (*l_1485) = (safe_rshift_func_uint16_t_u_s((*l_1485), (safe_sub_func_uint16_t_u_u(g_401[1], ((((safe_add_func_uint32_t_u_u((0xFE569AEFL >= (*g_981)), ((((*p_54) | l_1487) || ((void*)0 != l_1529[0][2][1])) | (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((g_1042 && l_1534) && (*p_54)), 1)), g_33))))) == l_1535[5]) && l_1502) | (*g_345))))));
                    (*l_1485) &= (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((&p_54 == &p_54), 0x94L)), (l_1487 ^ ((l_1534 >= l_1534) > ((void*)0 == &g_345))))), 15));
                    if (l_1542[0])
                    {
                        unsigned l_1543 = 0x2ACFFE5BL;
                        l_1534 |= (l_1543 & g_789);
                        g_1035 = &l_1502;
                    }
                    else
                    {
                        char l_1545 = 0x30L;
                        int l_1547 = 0x2010AAC2L;
                        int l_1548 = 0L;
                        int l_1564 = (-5L);
                        l_1565++;
                        return g_797[7];
                    }
                    for (g_1467 = 0; (g_1467 == 58); g_1467++)
                    {
                        short l_1577[3][5] = {{0x0544L, 0x0544L, 0x3C74L, 0x0544L, 0x0544L}, {0x0544L, 0x0544L, 0x3C74L, 0x0544L, 0x0544L}, {0x0544L, 0x0544L, 0x3C74L, 0x0544L, 0x0544L}};
                        int * const l_1578 = &l_1558;
                        int l_1580 = 0L;
                        int l_1582 = 0x1DE721FCL;
                        int l_1583 = 0xEEDD464AL;
                        int l_1584[2];
                        unsigned char l_1585[5][2] = {{5UL, 1UL}, {5UL, 1UL}, {5UL, 1UL}, {5UL, 1UL}, {5UL, 1UL}};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1584[i] = 0L;
                        (*l_1485) = (((*g_345) == (((g_275 & (-1L)) >= l_1550) | 0x00L)) || g_797[5]);
                        ++l_1585[0][1];
                        if (g_2)
                            goto lbl_1588;
                        return l_1563[0];
                    }
                }
                else
                {
                    int * const l_1593 = &l_1454[2];
                    (*l_1485) ^= (*l_1593);
                    for (g_1453 = 0; (g_1453 > 35); ++g_1453)
                    {
                        (*l_1593) = (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s(3L, (+(safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(g_1467, (0xD6A7A308L & (g_171 != ((g_33 < (safe_add_func_uint16_t_u_u((&g_130 != &l_1521), g_683[1]))) || l_1549))))), (-8L)))))), g_49));
                        if ((*g_981))
                            continue;
                    }
                    l_1485 = p_54;
                }
            }
        }
    }
    g_72[0][6] = (*g_981);
    g_48[1][0] &= (safe_mul_func_uint8_t_u_u(((l_1529[0][4][1] == &g_130) & ((g_15 == g_608) != (+3L))), g_158));
    return g_275;
}







static int * func_55(unsigned p_56, int * p_57, const int p_58)
{
    int l_804 = 0L;
    unsigned l_811 = 4294967295UL;
    int l_839 = 0xFF29F500L;
    int l_840 = 0x2DD87986L;
    int l_841[5] = {0x9F324575L, 2L, 0x9F324575L, 2L, 0x9F324575L};
    unsigned short l_846 = 0xE8F3L;
    short l_989[4][4][8] = {{{1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}}, {{1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}}, {{1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}}, {{1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}, {1L, 0xB106L, 0x121BL, (-1L), 0x121BL, 0xB106L, 1L, 0L}}};
    unsigned l_1009 = 0x305687CAL;
    int *l_1011 = &g_49;
    int l_1022 = 0xF04F845AL;
    char l_1030 = 0xAAL;
    int l_1031 = (-1L);
    unsigned l_1032 = 0x83FC8E5FL;
    int l_1043 = 0xA2A32176L;
    int ** const l_1089 = &g_167;
    int * const l_1100 = &l_841[1];
    unsigned short l_1103[9][2][5] = {{{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}, {{9UL, 0x10CAL, 65532UL, 7UL, 65535UL}, {9UL, 0x10CAL, 65532UL, 7UL, 65535UL}}};
    int ** const l_1104 = &l_1011;
    int * const l_1164 = (void*)0;
    int l_1216 = 0xC417D224L;
    unsigned l_1284 = 0UL;
    int *l_1337 = &l_839;
    char l_1346 = (-1L);
    int * const l_1353 = &l_1031;
    int i, j, k;
    for (p_56 = 0; (p_56 == 21); p_56 = safe_add_func_int16_t_s_s(p_56, 6))
    {
        unsigned l_62 = 0x3176A179L;
        int l_63 = 9L;
        int l_842 = 0x5C0E0F2EL;
        int l_843 = 3L;
        int l_844 = (-1L);
        int l_863 = 1L;
        int l_864 = 0x2EBC489FL;
        int l_865 = (-5L);
        int l_866 = (-1L);
        int l_867 = (-1L);
        int l_868 = 0L;
        unsigned l_881 = 1UL;
        short l_943 = (-6L);
        l_63 |= l_62;
        for (l_63 = 0; (l_63 <= 0); l_63 += 1)
        {
            int **l_800[9][5] = {{&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}, {&g_167, &g_167, &g_167, &g_167, &g_167}};
            int i, j;
        }
        for (g_241 = 0; (g_241 < 25); g_241++)
        {
            unsigned l_803 = 1UL;
            l_803 = (-1L);
        }
        if ((l_804 != ((safe_rshift_func_uint8_t_u_s(((void*)0 != &p_58), ((safe_add_func_int32_t_s_s((0x4E77L <= ((!1L) ^ l_811)), p_58)) >= (p_58 >= (safe_mul_func_int16_t_s_s((func_83(&l_63, p_56, p_58, &l_63, g_797[5]) == 0x11C0L), 0xEC05L)))))) <= 0L)))
        {
            int l_836 = 0x5FAEA399L;
            int l_837[1][10][9] = {{{0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}, {0x3AC3BC38L, (-1L), (-7L), 9L, 0L, 1L, 0x0B05B997L, 9L, 0x55D0E528L}}};
            int i, j, k;
            for (g_738 = (-11); (g_738 >= 11); ++g_738)
            {
                int * const l_827 = &g_2;
                int *l_832 = (void*)0;
                int l_834 = 1L;
                int l_835 = 0x071272DCL;
                int l_838 = 0x464CC292L;
                int l_845 = (-1L);
                int l_862[6][4] = {{0xB8741A48L, (-1L), 1L, (-1L)}, {0xB8741A48L, (-1L), 1L, (-1L)}, {0xB8741A48L, (-1L), 1L, (-1L)}, {0xB8741A48L, (-1L), 1L, (-1L)}, {0xB8741A48L, (-1L), 1L, (-1L)}, {0xB8741A48L, (-1L), 1L, (-1L)}};
                unsigned l_869 = 0x603D5C64L;
                int i, j;
                for (g_406 = 0; (g_406 == 60); g_406 = safe_add_func_int8_t_s_s(g_406, 7))
                {
                    char l_822 = 0xB5L;
                    unsigned char l_826 = 0UL;
                    int *l_833[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_833[i] = &g_72[0][6];
                    for (g_275 = 5; (g_275 >= 0); g_275 -= 1)
                    {
                        int **l_818 = (void*)0;
                        int **l_819 = &g_167;
                        int i, j;
                        (*l_819) = &g_72[(g_275 + 1)][(g_275 + 1)];
                    }
                    if (l_63)
                        continue;
                    for (g_275 = 2; (g_275 == 13); g_275 = safe_add_func_uint8_t_u_u(g_275, 8))
                    {
                        int **l_823 = &g_167;
                        (*l_823) = &l_63;
                        (**l_823) = (safe_add_func_uint16_t_u_u(l_826, l_62));
                        if ((**l_823))
                            break;
                    }
                    l_846--;
                }
                for (l_835 = 0; (l_835 < (-25)); l_835 = safe_sub_func_int16_t_s_s(l_835, 4))
                {
                    int *l_851 = &l_63;
                    int *l_852 = &l_841[3];
                    int *l_853 = &l_834;
                    int *l_854 = &g_48[3][0];
                    int *l_855 = &l_841[4];
                    int *l_856 = &l_843;
                    int *l_857 = &l_844;
                    int *l_858 = &l_845;
                    int *l_859 = &g_72[2][8];
                    int *l_860 = &l_837[0][0][7];
                    int *l_861[3][6] = {{&l_840, &l_843, (void*)0, &l_843, &l_840, &g_72[0][6]}, {&l_840, &l_843, (void*)0, &l_843, &l_840, &g_72[0][6]}, {&l_840, &l_843, (void*)0, &l_843, &l_840, &g_72[0][6]}};
                    int i, j;
                    if ((*l_827))
                        break;
                    l_869++;
                    return &g_72[0][6];
                }
            }
        }
        else
        {
            int **l_872 = &g_167;
            unsigned l_877 = 0x8B0E1E49L;
            int l_890 = 0x20B97140L;
            int l_899 = 0x4597908DL;
            int l_904 = 0x409C533FL;
            int l_905 = 0x05E294BEL;
            int l_930 = 0x904AF797L;
            int l_932 = 1L;
            int l_935 = 7L;
            int l_940 = 0xA5896475L;
            int l_944 = 0xC7B9C73FL;
            int l_945[7] = {9L, 0L, 9L, 0L, 9L, 0L, 9L};
            int i;
            (*l_872) = func_89(p_57);
            if ((**l_872))
                continue;
            for (l_811 = 0; (l_811 <= 46); l_811 = safe_add_func_uint32_t_u_u(l_811, 8))
            {
                if ((*p_57))
                    break;
            }
            for (l_863 = (-13); (l_863 >= 14); l_863 = safe_add_func_uint32_t_u_u(l_863, 2))
            {
                int l_886 = 0x8C2F39F2L;
                int l_889 = 0x6A5AEC6AL;
                int l_895 = 0x6B16D8C8L;
                int l_902 = 0x7A281E0CL;
                unsigned short l_906 = 0x9823L;
                int l_915 = 1L;
                int l_933 = 0x8B02760FL;
                int l_941[4][3][3] = {{{(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}}, {{(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}}, {{(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}}, {{(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}, {(-10L), (-1L), (-10L)}}};
                int i, j, k;
                l_877 ^= (*g_167);
                for (l_842 = (-24); (l_842 >= 0); l_842 = safe_add_func_int32_t_s_s(l_842, 8))
                {
                    int *l_880[7][4][5] = {{{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}, {{(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}, {(void*)0, (void*)0, &l_867, (void*)0, (void*)0}}};
                    int i, j, k;
                    l_881 &= l_868;
                }
                for (g_171 = 2; (g_171 != (-12)); g_171 = safe_sub_func_int8_t_s_s(g_171, 3))
                {
                    char l_894 = 0x84L;
                    int l_903 = 0L;
                    int l_916 = (-1L);
                    int l_917[10][10][2] = {{{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}, {{(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}, {(-9L), 0xEF681487L}}};
                    short l_918[5];
                    unsigned char l_920 = 0x02L;
                    int *l_923 = (void*)0;
                    int *l_924[1][1];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_918[i] = 8L;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_924[i][j] = (void*)0;
                    }
                }
            }
        }
    }
    for (g_158 = (-2); (g_158 < 17); g_158++)
    {
        unsigned l_952[9][4] = {{0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}, {0xA00D9ACDL, 0x8BEC17CAL, 4294967294UL, 4294967287UL}};
        int *l_978 = (void*)0;
        int l_984 = 1L;
        int l_1001 = 0L;
        char l_1002 = 0x33L;
        int l_1023 = 0L;
        int l_1024 = 0xE109AB60L;
        int l_1025 = (-8L);
        int l_1026 = (-5L);
        int l_1027 = 0x85F6CF97L;
        int l_1028 = 0x05A97F01L;
        int l_1029[10][3] = {{1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}, {1L, 1L, 0x2A337D7CL}};
        unsigned short l_1066 = 0UL;
        unsigned short l_1113 = 0x95EDL;
        short l_1173 = 0x27E7L;
        const int *l_1175 = &l_1031;
        int i, j;
    }
    (*l_1100) = (*p_57);
    if ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u((*l_1011), ((safe_lshift_func_int16_t_s_s(0x357AL, ((**l_1104) < ((*l_1011) >= ((65535UL | g_72[0][6]) > p_58))))) && (((safe_sub_func_int32_t_s_s((&p_58 != (void*)0), p_58)) | (-6L)) && g_33)))), (**l_1104))), g_72[0][6])))
    {
        unsigned l_1191 = 5UL;
        const unsigned short l_1198[9] = {4UL, 65532UL, 4UL, 65532UL, 4UL, 65532UL, 4UL, 65532UL, 4UL};
        int l_1208 = (-1L);
        int l_1209 = (-9L);
        int l_1210 = 0x0C74A1D0L;
        int l_1211 = 4L;
        int l_1212 = 1L;
        int l_1213 = 1L;
        int l_1214 = 0x808A7DDEL;
        int l_1215 = 0x7D7BA987L;
        int l_1217 = 8L;
        int l_1218 = (-1L);
        int l_1219 = (-1L);
        int l_1220 = 0xD11C8790L;
        int l_1221 = (-8L);
        int l_1222[6] = {0L, 0L, 0xFCE4CD37L, 0L, 0L, 0xFCE4CD37L};
        char l_1232[10][1] = {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}};
        unsigned char l_1244 = 255UL;
        int ***l_1249[7][6][6] = {{{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}, {{&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}, {&g_130, &g_130, &g_130, (void*)0, &g_130, &g_130}}};
        unsigned char l_1273 = 0UL;
        int l_1345 = 0x81EB6209L;
        short l_1355 = 1L;
        int i, j, k;
        for (l_1009 = 0; (l_1009 <= 9); l_1009 += 1)
        {
            short l_1189 = 1L;
            int *l_1190 = (void*)0;
            int l_1199[1][6] = {{(-10L), 0xC03B17F8L, (-10L), 0xC03B17F8L, (-10L), 0xC03B17F8L}};
            int *l_1200 = &l_804;
            int *l_1201 = &l_1199[0][1];
            int *l_1202 = &l_1199[0][1];
            int *l_1203 = &l_840;
            int *l_1204 = &l_839;
            int *l_1205 = &l_841[1];
            int *l_1206 = &l_841[0];
            int *l_1207[2];
            char l_1223 = 0x84L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_1207[i] = &l_1043;
            l_1191++;
            l_1199[0][1] = ((*l_1011) < 255UL);
            g_1224++;
        }
        for (g_738 = 0; (g_738 <= 2); ++g_738)
        {
            char l_1229[6];
            int *l_1230 = &l_1218;
            int *l_1231 = (void*)0;
            int *l_1233 = &l_1219;
            int *l_1234 = &l_1214;
            int *l_1235 = &l_1219;
            int l_1236 = 0L;
            int *l_1237 = (void*)0;
            int *l_1238 = (void*)0;
            int *l_1239 = &l_1217;
            int *l_1240 = &l_1219;
            int *l_1241 = &l_1217;
            int l_1242[4];
            int *l_1243[2][8] = {{(void*)0, &g_50, (void*)0, &g_50, (void*)0, &g_50, (void*)0, &g_50}, {(void*)0, &g_50, (void*)0, &g_50, (void*)0, &g_50, (void*)0, &g_50}};
            unsigned l_1258[4];
            char l_1269 = 0xABL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_1229[i] = 0x3BL;
            for (i = 0; i < 4; i++)
                l_1242[i] = 0xF16AA032L;
            for (i = 0; i < 4; i++)
                l_1258[i] = 0x053E6717L;
            --l_1244;
            if ((*p_57))
                continue;
            for (g_1224 = 0; (g_1224 <= 0); g_1224 += 1)
            {
                int ***l_1250 = &g_130;
                int l_1261 = 0x6CFB7DC2L;
                unsigned l_1264 = 4294967293UL;
                int l_1270 = (-1L);
                int l_1271 = 0x8B392BEFL;
                int l_1272 = (-5L);
                int i, j;
                if ((safe_sub_func_uint32_t_u_u((0xED24L ^ 0x642BL), l_1232[(g_1224 + 9)][g_1224])))
                {
                    char l_1257 = 0x11L;
                    int l_1263[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1263[i] = 0x83857920L;
                    for (l_1210 = 0; (l_1210 <= 0); l_1210 += 1)
                    {
                        int l_1262[4][2][3] = {{{0L, 0L, 0x23080CD7L}, {0L, 0L, 0x23080CD7L}}, {{0L, 0L, 0x23080CD7L}, {0L, 0L, 0x23080CD7L}}, {{0L, 0L, 0x23080CD7L}, {0L, 0L, 0x23080CD7L}}, {{0L, 0L, 0x23080CD7L}, {0L, 0L, 0x23080CD7L}}};
                        int l_1267 = 9L;
                        int l_1268[10][7][3] = {{{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}, {{1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}, {1L, 0x695F04B2L, 0L}}};
                        int i, j, k;
                        (*l_1233) = ((l_1249[6][1][3] != l_1250) < (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(((&p_58 == (void*)0) & (g_1167 || ((5L != ((((((-6L) == (&g_48[4][0] != &p_58)) && (*l_1239)) | l_1257) ^ l_1257) | p_56)) || l_1232[(g_1224 + 9)][g_1224]))), p_56)), p_56)) ^ g_1224), g_49)));
                        --l_1258[3];
                        l_1264--;
                        l_1273++;
                    }
                    (*l_1230) &= (-1L);
                    (*l_1233) ^= (2UL > (((*l_1230) && l_1263[3]) && p_56));
                }
                else
                {
                    return p_57;
                }
            }
        }
        (*l_1100) ^= (l_1249[6][1][3] == (void*)0);
        if ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((*l_1011) < 0x98L), p_56)), 7)))
        {
            unsigned l_1312 = 0UL;
            const int *l_1316 = &l_1211;
            int *l_1317 = &l_1222[0];
            short l_1318 = 0L;
            int l_1321 = 0xCEC69074L;
            const int **l_1336 = &l_1316;
            int *l_1344 = &l_841[2];
            unsigned short l_1354[3][8][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 8; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1354[i][j][k] = 65535UL;
                }
            }
            for (g_241 = 0; (g_241 > 48); g_241++)
            {
                int *l_1293 = &l_839;
                int l_1319 = 0x4FAD1C98L;
                int l_1320[5][7][2] = {{{0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}}, {{0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}}, {{0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}}, {{0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}}, {{0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}, {0L, (-10L)}}};
                unsigned short l_1325 = 0UL;
                int i, j, k;
                if ((safe_lshift_func_uint8_t_u_u((((void*)0 != l_1293) != g_683[8]), 2)))
                {
                    return p_57;
                }
                else
                {
                    unsigned char l_1314 = 0xF4L;
                    int l_1322 = 0x2E4D708DL;
                    int l_1323 = 0x090ECAC5L;
                    int l_1324[10][1][3] = {{{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}, {{4L, 0x92B02A0FL, 4L}}};
                    int i, j, k;
                    for (g_689 = (-22); (g_689 == 9); g_689 = safe_add_func_int16_t_s_s(g_689, 5))
                    {
                        unsigned l_1313[10][5] = {{0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}, {0UL, 0UL, 0UL, 0UL, 0UL}};
                        const int **l_1315[9][9][2] = {{{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}, {{&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}, {&g_1035, &g_1035}}};
                        int i, j, k;
                        l_1314 |= (safe_mod_func_int32_t_s_s((*l_1100), (safe_sub_func_int8_t_s_s(p_58, (safe_mod_func_uint16_t_u_u(p_56, (g_608 & (*l_1293))))))));
                        l_1316 = &p_58;
                    }
                    g_1035 = &p_58;
                    (*l_1293) |= (p_56 | func_83(func_68(l_1317, p_56), p_56, (*l_1317), p_57, (((*l_1316) < (!(l_1318 ^ 6UL))) <= 0xE3B2L)));
                    l_1325--;
                }
                (*l_1317) &= (safe_lshift_func_int8_t_s_u((((0x27L > g_919) ^ 0xAA54178EL) ^ p_56), p_58));
                for (l_1321 = (-4); (l_1321 != 1); l_1321 = safe_add_func_uint8_t_u_u(l_1321, 2))
                {
                    const int **l_1334 = (void*)0;
                    const int **l_1335 = (void*)0;
                    g_1035 = &p_58;
                    (*l_1100) = 1L;
                }
            }
            (*l_1336) = &p_58;
            (*l_1337) ^= func_83(func_68(l_1337, (!((safe_rshift_func_int8_t_s_s(((*l_1100) <= (*p_57)), 1)) < (safe_rshift_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_u((*l_1317), g_50)) ^ func_83(func_68(l_1344, func_83(&l_1321, (*l_1344), p_56, (*l_1104), g_738)), p_58, g_401[1], p_57, (*l_1317))) & l_1345) != p_56) != g_406), 0))))), g_789, p_56, p_57, l_1346);
            (*l_1336) = (*l_1336);
        }
        else
        {
            unsigned l_1368 = 4294967289UL;
            for (l_1355 = 0; (l_1355 <= (-8)); l_1355--)
            {
                const int **l_1358 = &g_1035;
                (*l_1358) = &p_58;
            }
            (*l_1104) = func_68(p_57, p_56);
            (*l_1353) = ((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_int32_t_s((*p_57))) && (*p_57)), 9)) == (func_83((*l_1104), (safe_rshift_func_int16_t_s_s(3L, 4)), ((((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int32_t_s((*p_57))) || (g_1133 | (-1L))), 3)) == p_58) != (safe_unary_minus_func_uint8_t_u(((*p_57) ^ l_1368)))) <= g_72[0][6]), p_57, g_401[0]) == l_1368));
        }
    }
    else
    {
        unsigned l_1373[8] = {0x8C81A6D5L, 0x03C56B75L, 0x8C81A6D5L, 0x03C56B75L, 0x8C81A6D5L, 0x03C56B75L, 0x8C81A6D5L, 0x03C56B75L};
        int *l_1379 = (void*)0;
        int l_1383 = 0x109F85B5L;
        int l_1384 = 0x7787D688L;
        int l_1385 = (-8L);
        int l_1386 = 0xFAF1751AL;
        int l_1387 = 0L;
        int l_1388 = 0x2849F602L;
        int l_1389[5][4][3] = {{{0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}}, {{0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}}, {{0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}}, {{0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}}, {{0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}, {0xE522D6CEL, (-1L), 0x97820895L}}};
        int i, j, k;
        (*l_1100) ^= (safe_rshift_func_uint8_t_u_s(g_171, 3));
        if (((3L && (((p_56 ^ (g_50 >= (safe_mul_func_int16_t_s_s((*l_1011), (~((p_58 | g_608) | (-1L))))))) & (*l_1011)) < 0x2FL)) > g_33))
        {
            int **l_1374[6] = {&l_1011, &l_1011, &l_1337, &l_1011, &l_1011, &l_1337};
            unsigned l_1380[8] = {0x6FE14BBDL, 0x6FE14BBDL, 4294967293UL, 0x6FE14BBDL, 0x6FE14BBDL, 4294967293UL, 0x6FE14BBDL, 0x6FE14BBDL};
            unsigned char l_1390[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1390[i] = 0x04L;
lbl_1393:
            (*l_1100) = (*p_57);
            for (g_275 = 0; (g_275 != 8); ++g_275)
            {
                unsigned l_1381 = 0UL;
                int l_1382[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1382[i][j] = 1L;
                }
                (*l_1337) ^= (*g_1035);
                l_1382[0][0] = (*g_345);
            }
            --l_1390[0];
            if (l_846)
                goto lbl_1393;
        }
        else
        {
            int * const l_1394 = &l_1216;
            int *l_1395 = &l_1388;
            int l_1396[6][6] = {{0x79491A90L, 0x4576BB56L, (-1L), 0x2C9F9AF2L, (-1L), 0x4576BB56L}, {0x79491A90L, 0x4576BB56L, (-1L), 0x2C9F9AF2L, (-1L), 0x4576BB56L}, {0x79491A90L, 0x4576BB56L, (-1L), 0x2C9F9AF2L, (-1L), 0x4576BB56L}, {0x79491A90L, 0x4576BB56L, (-1L), 0x2C9F9AF2L, (-1L), 0x4576BB56L}, {0x79491A90L, 0x4576BB56L, (-1L), 0x2C9F9AF2L, (-1L), 0x4576BB56L}, {0x79491A90L, 0x4576BB56L, (-1L), 0x2C9F9AF2L, (-1L), 0x4576BB56L}};
            int *l_1397[3][3] = {{&l_841[4], &l_1389[2][1][1], &l_841[4]}, {&l_841[4], &l_1389[2][1][1], &l_841[4]}, {&l_841[4], &l_1389[2][1][1], &l_841[4]}};
            unsigned char l_1398 = 255UL;
            const int **l_1401[9][7][4] = {{{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}, {{&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}, {&g_1035, &g_1035, (void*)0, &g_1035}}};
            int i, j, k;
            (*l_1100) &= (*p_57);
            l_1398--;
            g_1035 = &p_58;
        }
        (*l_1100) &= (*g_345);
    }
    return p_57;
}







static int * func_64(char p_65, int * p_66, int p_67)
{
    int *l_91 = &g_50;
    int l_182 = 1L;
    int l_319 = 0L;
    const unsigned short l_335 = 65535UL;
    int l_502 = 0L;
    const int ** const *l_526 = (void*)0;
    int l_606 = 0x79DE3C19L;
    int l_607 = 1L;
    const unsigned l_628 = 1UL;
    int l_667 = 0L;
    int l_675 = 1L;
    int l_676 = 0L;
    int l_684 = (-1L);
    int l_685[8] = {0x4855098CL, 0x3AEA9E83L, 0x4855098CL, 0x3AEA9E83L, 0x4855098CL, 0x3AEA9E83L, 0x4855098CL, 0x3AEA9E83L};
    int l_687 = 1L;
    char l_721 = 0L;
    int l_754 = 0xECF963DCL;
    int i;
    for (p_65 = 0; (p_65 <= 29); p_65 = safe_add_func_int32_t_s_s(p_65, 1))
    {
        int * const l_94 = &g_50;
        int l_183 = (-1L);
        int l_239 = (-8L);
        int *l_253 = (void*)0;
        unsigned char l_295 = 1UL;
        short l_317 = 0x4E59L;
        if ((((0UL > ((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_48[2][0], func_83(func_89(func_68(l_91, g_15)), (safe_mul_func_int16_t_s_s(p_67, p_67)), ((0x62BFL <= p_67) && 65535UL), l_94, g_33))) == g_49), (*l_94))), g_2)), g_2)) && (*l_91))) <= (*l_94)) < p_65))
        {
            short l_188 = 0xC956L;
            int *l_211[10];
            const char l_212 = 3L;
            int i;
            for (i = 0; i < 10; i++)
                l_211[i] = &g_50;
            for (g_158 = 0; (g_158 != 10); g_158 = safe_add_func_int32_t_s_s(g_158, 1))
            {
                unsigned l_184 = 0xB66D557BL;
                short l_189 = 0x580FL;
                int *l_200 = &l_183;
                for (g_171 = 0; (g_171 > (-15)); g_171 = safe_sub_func_int8_t_s_s(g_171, 4))
                {
                    unsigned l_176 = 18446744073709551615UL;
                    if (l_176)
                    {
                        int *l_177 = &g_48[2][0];
                        int *l_178 = (void*)0;
                        int *l_179 = (void*)0;
                        int *l_180 = &g_72[2][5];
                        int *l_181[7] = {&g_72[0][6], &g_72[0][6], &g_72[0][6], &g_72[0][6], &g_72[0][6], &g_72[0][6], &g_72[0][6]};
                        int ***l_187 = &g_130;
                        int i;
                        ++l_184;
                        (*l_177) = (*p_66);
                        (*l_187) = &p_66;
                    }
                    else
                    {
                        if (l_188)
                            break;
                        if ((*p_66))
                            break;
                        return p_66;
                    }
                }
                (*l_200) ^= (l_189 || (!(((safe_add_func_int16_t_s_s(func_83(p_66, p_67, (safe_lshift_func_int16_t_s_s(g_171, (((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u(p_65, (safe_sub_func_uint8_t_u_u(((((((*l_94) < 0xC11F17EFL) == g_171) & (&p_66 != &p_66)) == (*p_66)) >= g_72[4][3]), g_50)))), g_50)) & (*l_91)) ^ (*p_66)))), p_66, p_65), g_33)) != 0xE00CL) > 0xBE9DL)));
            }
            for (l_182 = 0; (l_182 <= 22); l_182 = safe_add_func_uint8_t_u_u(l_182, 7))
            {
                short l_207[9][10][1] = {{{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}, {{(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}, {(-4L)}}};
                int i, j, k;
                for (l_183 = 8; (l_183 >= 2); l_183 -= 1)
                {
                    int *l_203 = &g_72[0][6];
                    for (g_171 = 0; (g_171 <= 8); g_171 += 1)
                    {
                        int **l_204 = &l_91;
                        int i, j;
                        l_203 = (void*)0;
                        (*l_204) = func_89(func_68(func_89(l_203), g_72[l_183][g_171]));
                        if ((*p_66))
                            continue;
                        (*l_204) = &l_182;
                    }
                    if ((*p_66))
                        continue;
                    if ((*l_94))
                        continue;
                }
                for (l_188 = 0; l_188 < 6; l_188 += 1)
                {
                    for (g_171 = 0; g_171 < 1; g_171 += 1)
                    {
                        g_48[l_188][g_171] = 1L;
                    }
                }
                for (g_158 = 0; (g_158 <= 57); g_158 = safe_add_func_uint32_t_u_u(g_158, 1))
                {
                    if ((p_65 && l_207[3][1][0]))
                    {
                        int ***l_208 = &g_130;
                        (*l_208) = (void*)0;
                        (*p_66) = 0xBB86BBE5L;
                        if ((*p_66))
                            continue;
                    }
                    else
                    {
                        (*p_66) ^= (safe_mul_func_int8_t_s_s((-1L), (0x43L & 1UL)));
                        if (g_72[0][6])
                            break;
                    }
                }
                return l_211[0];
            }
            (*p_66) = l_212;
        }
        else
        {
            int *l_213 = &g_48[0][0];
            int l_288 = 0x6C21DDFAL;
            char l_316 = 0x33L;
            int l_318[2][3][6] = {{{1L, (-3L), 0x2CD44564L, (-3L), 1L, 0L}, {1L, (-3L), 0x2CD44564L, (-3L), 1L, 0L}, {1L, (-3L), 0x2CD44564L, (-3L), 1L, 0L}}, {{1L, (-3L), 0x2CD44564L, (-3L), 1L, 0L}, {1L, (-3L), 0x2CD44564L, (-3L), 1L, 0L}, {1L, (-3L), 0x2CD44564L, (-3L), 1L, 0L}}};
            int i, j, k;
            (*p_66) = (*p_66);
            (*l_213) |= ((g_72[6][7] & g_49) <= p_67);
            for (g_158 = 0; (g_158 <= 34); ++g_158)
            {
                int *l_220 = &l_182;
                int **l_254[10][8][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                int *l_255[5] = {&g_72[5][8], &g_72[8][3], &g_72[5][8], &g_72[8][3], &g_72[5][8]};
                int i, j, k;
                for (g_171 = 0; (g_171 >= (-14)); g_171 = safe_sub_func_uint32_t_u_u(g_171, 2))
                {
                    int **l_221 = &l_213;
                    for (p_67 = 0; (p_67 <= (-3)); p_67--)
                    {
                        return p_66;
                    }
                    p_66 = p_66;
                    (*l_221) = func_68(l_220, (*l_94));
                    (*l_220) = (((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((*l_91), 14)), 6)) == ((*l_94) & (safe_mul_func_uint16_t_u_u(p_65, g_158)))) || ((g_33 > (g_15 != 0xA0L)) >= g_48[5][0]));
                }
                for (g_171 = 0; (g_171 >= (-20)); g_171 = safe_sub_func_uint8_t_u_u(g_171, 6))
                {
                    int l_237 = 0L;
                    int l_240[2][4] = {{(-3L), (-3L), 7L, (-3L)}, {(-3L), (-3L), 7L, (-3L)}};
                    int *l_250 = &g_33;
                    int i, j;
                    for (l_182 = 0; (l_182 > (-16)); l_182--)
                    {
                        int *l_232 = &g_48[5][0];
                        int *l_233 = &l_183;
                        int *l_234 = &l_183;
                        int *l_235 = (void*)0;
                        int *l_236 = &g_48[2][0];
                        int *l_238[8][5] = {{&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}, {&g_48[2][0], &g_48[2][0], &g_72[0][6], &g_48[2][0], &g_48[2][0]}};
                        int i, j;
                        --g_241;
                    }
                    if (((-1L) != (*l_220)))
                    {
                        int **l_251 = (void*)0;
                        int **l_252 = &l_91;
                        (*p_66) = (*p_66);
                        (*l_220) = 0xAF26B099L;
                        (*p_66) = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(255UL, 0)), (l_250 == &l_182))), p_67));
                        (*l_252) = &g_49;
                    }
                    else
                    {
                        l_253 = &g_72[6][6];
                        if ((*p_66))
                            continue;
                        (*p_66) = 0L;
                        if ((*p_66))
                            break;
                    }
                }
                l_255[4] = func_89(&l_183);
            }
            for (g_241 = 0; (g_241 == 53); g_241++)
            {
                int l_264 = (-1L);
                int l_274 = 0xBF7F866CL;
                unsigned short l_289[4] = {1UL, 0x3E96L, 1UL, 0x3E96L};
                int l_304[1][1][9] = {{{(-1L), 0x9F7FF738L, (-1L), 0x9F7FF738L, (-1L), 0x9F7FF738L, (-1L), 0x9F7FF738L, (-1L)}}};
                int i, j, k;
            }
        }
    }
    return p_66;
}







static int * func_68(int * p_69, unsigned char p_70)
{
    int *l_71 = &g_72[0][6];
    (*l_71) ^= 0x189EFA4EL;
    return l_71;
}







static unsigned short func_83(int * const p_84, char p_85, int p_86, int * const p_87, unsigned short p_88)
{
    const unsigned l_97 = 0x5FD5384EL;
    int l_106[3];
    int *l_134 = &g_49;
    int **l_133[1];
    char l_137 = 2L;
    short l_138 = 0xAEACL;
    unsigned char l_139 = 0xFBL;
    int i;
    for (i = 0; i < 3; i++)
        l_106[i] = (-9L);
    for (i = 0; i < 1; i++)
        l_133[i] = &l_134;
    if (((safe_mod_func_uint8_t_u_u(((l_97 && p_88) <= (safe_mod_func_uint32_t_u_u((l_97 | (g_49 != ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((0x0CFA8270L ^ ((((0xD9F09F7AL || l_97) && p_86) | ((((p_86 ^ g_33) & (*p_84)) > g_49) & l_97)) > 0x8C5DL)) ^ 0x8EL) > 0L), 0L)), p_88)) & l_97))), l_97))), 1UL)) ^ g_48[3][0]))
    {
        return g_72[3][5];
    }
    else
    {
        int l_111[10] = {(-6L), (-6L), 0x68CE927CL, (-6L), (-6L), 0x68CE927CL, (-6L), (-6L), 0x68CE927CL, (-6L)};
        char l_135 = 0x3DL;
        short l_136 = (-3L);
        int i;
        for (p_86 = 8; (p_86 >= 0); p_86 -= 1)
        {
            short l_110 = (-1L);
            int l_112 = 0x86A19192L;
            unsigned l_113[3];
            char l_129[2];
            int i;
            for (i = 0; i < 3; i++)
                l_113[i] = 1UL;
            for (i = 0; i < 2; i++)
                l_129[i] = 1L;
            (*p_84) &= (safe_rshift_func_uint8_t_u_u(((0xBCDAL | p_86) & ((p_84 == (void*)0) && 1L)), 7));
            for (p_85 = 7; (p_85 >= 3); p_85 -= 1)
            {
                int *l_107 = &l_106[1];
                int *l_108 = (void*)0;
                int *l_109[4][4][2] = {{{&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}}, {{&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}}, {{&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}}, {{&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}, {&g_50, &g_2}}};
                int i, j, k;
                l_113[0]--;
                if ((g_72[5][7] & (p_85 == (g_15 == ((void*)0 == p_84)))))
                {
                    unsigned l_116[2];
                    int **l_119 = &l_109[0][2][1];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_116[i] = 0xE233B6E2L;
                    --l_116[1];
                    (*l_119) = &l_106[1];
                }
                else
                {
                    unsigned char l_120 = 0x6CL;
                    (*l_107) = (+l_120);
                }
                if ((~g_72[0][6]))
                {
                    for (l_110 = (-4); (l_110 <= (-30)); --l_110)
                    {
                        return p_88;
                    }
                }
                else
                {
                    const char l_123 = 1L;
                    if ((&g_50 != (void*)0))
                    {
                        int **l_124 = &l_108;
                        (*p_84) &= (l_123 < g_33);
                        (*l_124) = &g_49;
                        (*p_84) = (safe_add_func_int16_t_s_s((((*p_87) && l_112) < ((safe_sub_func_int16_t_s_s(l_129[0], (g_15 != (g_130 != g_130)))) & (safe_sub_func_int16_t_s_s(((&p_87 != l_133[0]) < ((void*)0 != &p_87)), l_113[0])))), p_85));
                    }
                    else
                    {
                        l_135 |= l_111[9];
                    }
                    for (l_135 = 0; (l_135 <= 1); l_135 += 1)
                    {
                        int i, j, k;
                        if ((*p_84))
                            break;
                    }
                }
                if (g_72[0][6])
                    break;
            }
        }
        l_139++;
        for (l_137 = 0; (l_137 < 12); l_137 = safe_add_func_int8_t_s_s(l_137, 9))
        {
            unsigned char l_151 = 0x5CL;
            short l_159 = 0x4FB8L;
            int l_160 = 2L;
            l_160 ^= (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_135, ((((((safe_mod_func_uint16_t_u_u(l_135, l_151)) || 0xA91755C1L) ^ (((safe_add_func_int32_t_s_s(((*p_84) | (*p_87)), (safe_mul_func_uint8_t_u_u(p_86, 0x45L)))) >= ((safe_mul_func_uint16_t_u_u(((*p_84) >= g_158), l_136)) && 0L)) == p_85)) && g_158) || l_135) | l_159))), 15)) != p_86)));
        }
    }
    for (p_88 = (-21); (p_88 > 41); p_88 = safe_add_func_int16_t_s_s(p_88, 8))
    {
        int **l_166 = &l_134;
        int * const l_168[7] = {(void*)0, (void*)0, &g_72[0][6], (void*)0, (void*)0, &g_72[0][6], (void*)0};
        int **l_169 = (void*)0;
        int **l_170 = &g_167;
        int i;
        for (p_85 = 20; (p_85 >= (-26)); --p_85)
        {
            int *l_165 = &g_72[4][3];
            l_165 = p_84;
            (*p_84) = (*p_87);
        }
        (*l_166) = p_84;
        g_167 = (void*)0;
        (*l_170) = l_168[3];
    }
    (*p_84) = g_72[0][6];
    g_171 &= (*p_84);
    return p_85;
}







static int * func_89(int * p_90)
{
    return p_90;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_48[i][j], "g_48[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_72[i][j], "g_72[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_401[i], "g_401[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_683[i], "g_683[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_789, "g_789", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_797[i], "g_797[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_946, "g_946", print_hash_value);
    transparent_crc(g_1042, "g_1042", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1133, "g_1133", print_hash_value);
    transparent_crc(g_1165, "g_1165", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1224, "g_1224", print_hash_value);
    transparent_crc(g_1453, "g_1453", print_hash_value);
    transparent_crc(g_1467, "g_1467", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1513[i], "g_1513[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1552, "g_1552", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1711[i], "g_1711[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1729, "g_1729", print_hash_value);
    transparent_crc(g_1836, "g_1836", print_hash_value);
    transparent_crc(g_1853, "g_1853", print_hash_value);
    transparent_crc(g_1894, "g_1894", print_hash_value);
    transparent_crc(g_2046, "g_2046", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
