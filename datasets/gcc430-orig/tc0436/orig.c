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
   unsigned short f0;
   int f1;
   char f2;
};


static const short g_2 = 0x83C8L;
static short g_11 = (-6L);
static int g_13[3] = {0xEB2391CBL, 0xEB2391CBL, 0xEB2391CBL};
static struct S0 g_27 = {1UL,0xE4D8D955L,0x61L};
static struct S0 g_61 = {65535UL,0x0AEE481DL,0x3AL};
static unsigned g_64 = 0x3232AF72L;
static int g_74[8] = {1L, 0x6D72D30AL, 1L, 0x6D72D30AL, 1L, 0x6D72D30AL, 1L, 0x6D72D30AL};
static short g_118 = (-9L);
static short g_119[2] = {3L, 3L};
static int g_187[9] = {0xCC8346BCL, 0xBDEC8B57L, 0xCC8346BCL, 0xBDEC8B57L, 0xCC8346BCL, 0xBDEC8B57L, 0xCC8346BCL, 0xBDEC8B57L, 0xCC8346BCL};
static char g_203 = 0xD5L;
static struct S0 g_351[7][1] = {{{65528UL,-1L,2L}}, {{65528UL,-1L,2L}}, {{65528UL,-1L,2L}}, {{65528UL,-1L,2L}}, {{65528UL,-1L,2L}}, {{65528UL,-1L,2L}}, {{65528UL,-1L,2L}}};
static unsigned g_356 = 0x96D1D10DL;
static unsigned g_364 = 0xDA9C6A95L;
static const unsigned g_418[10] = {0x7C05293AL, 0xA0F0F470L, 0x7C05293AL, 0xA0F0F470L, 0x7C05293AL, 0xA0F0F470L, 0x7C05293AL, 0xA0F0F470L, 0x7C05293AL, 0xA0F0F470L};
static char g_456 = 0x9AL;
static unsigned short g_483[8][5] = {{65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}, {65526UL, 1UL, 1UL, 65535UL, 65532UL}};
static unsigned short g_493 = 65535UL;
static unsigned short g_510[4][4] = {{65531UL, 65530UL, 65528UL, 65528UL}, {65531UL, 65530UL, 65528UL, 65528UL}, {65531UL, 65530UL, 65528UL, 65528UL}, {65531UL, 65530UL, 65528UL, 65528UL}};
static int g_544[3] = {0x11CB596BL, 0x11CB596BL, 0x11CB596BL};
static char g_568 = 5L;
static unsigned short g_631 = 0UL;
static int g_657 = (-8L);
static struct S0 g_665 = {0xE404L,0x72B98BA0L,0L};
static unsigned char g_731 = 0xE1L;
static unsigned char g_840 = 0x23L;
static unsigned char g_863 = 0x52L;
static char g_879 = 9L;
static unsigned g_895 = 0x311C9F15L;
static unsigned g_915 = 0xCA8826C1L;
static struct S0 g_918 = {0x3384L,0x80F4DEA3L,-3L};



static struct S0 func_1(void);
static unsigned char func_3(unsigned char p_4, unsigned p_5, short p_6, int p_7, unsigned char p_8);
static short func_15(unsigned char p_16, unsigned p_17, unsigned p_18, short p_19, unsigned short p_20);
static unsigned func_21(struct S0 p_22, char p_23, unsigned p_24, unsigned p_25, char p_26);
static struct S0 func_28(unsigned char p_29, int p_30, char p_31, const int p_32);
static unsigned char func_33(unsigned p_34, unsigned p_35);
static short func_38(int p_39, short p_40);
static struct S0 func_43(int p_44, unsigned short p_45, unsigned p_46, int p_47, int p_48);
static int func_49(unsigned p_50, unsigned short p_51, unsigned p_52, unsigned char p_53, int p_54);
static char func_57(unsigned p_58, unsigned char p_59, unsigned short p_60);
static struct S0 func_1(void)
{
    char l_14[9][9] = {{(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}, {(-4L), (-2L), 0x91L, 0xADL, 0L, 0xADL, 0x91L, (-2L), (-4L)}};
    int l_63 = 0xAEA07874L;
    int l_65 = (-8L);
    unsigned l_596 = 1UL;
    struct S0 l_905 = {0x3F21L,0x705CEC50L,0x69L};
    unsigned char l_919 = 0UL;
    short l_934 = 0x8844L;
    unsigned char l_935 = 0xF8L;
    const char l_936[3][3] = {{0x36L, 0x9CL, 0x36L}, {0x36L, 0x9CL, 0x36L}, {0x36L, 0x9CL, 0x36L}};
    int i, j;
    if (g_2)
    {
        int l_12 = 0x2265E3EDL;
        int l_894 = (-3L);
        int l_896 = 0x3C55CF7BL;
        struct S0 l_912 = {0xFEDBL,0xC689121CL,1L};
        l_896 = (((l_65 = ((l_894 = func_3((l_14[3][8] = (g_13[1] = (safe_rshift_func_uint8_t_u_s((g_11 = 246UL), l_12)))), (func_15((0xC40AL && (func_21((g_2 , g_27), ((func_28((~((func_33(((safe_lshift_func_uint16_t_u_s(l_12, func_38(((safe_sub_func_uint8_t_u_u(l_12, ((func_43(func_49((((g_64 = (((((l_63 = (0xAD540778L > (((safe_rshift_func_int8_t_s_u(func_57((g_27.f1 == g_2), g_27.f0, g_27.f2), g_27.f0)) < g_27.f2) & g_2))) , 0x7B6EB5C5L) <= g_27.f2) != g_27.f0) < g_27.f0)) >= g_27.f0) == g_27.f1), g_27.f0, g_27.f0, g_27.f2, l_65), l_12, l_12, l_65, g_74[6]) , l_63) && 1UL))) & (-1L)), l_65))) ^ g_27.f2), g_27.f2) && l_12) >= 0xAE596A58L)), l_65, g_2, g_2) , l_12) , g_64), l_65, l_596, l_65) || 0x9C14681DL)), g_493, l_65, l_12, g_74[0]) || (-1L)), g_74[2], g_74[3], g_74[1])) || g_895)) || l_894) & l_596);
        l_896 = ((safe_rshift_func_int16_t_s_u(0x6A5FL, l_12)) && (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(func_3(l_12, (((g_187[5] == (0L <= func_21(l_905, l_894, l_65, g_351[2][0].f0, g_665.f1))) | g_418[8]) == 0xB84FL), g_895, g_118, g_510[3][3]), g_27.f2)), 0xD1140840L)));
        g_187[5] = (g_418[8] > ((safe_sub_func_int16_t_s_s((0xF1L & (+l_896)), 0xC85AL)) | ((safe_sub_func_int16_t_s_s(((0xEF528A43L <= (safe_lshift_func_uint16_t_u_u(g_119[0], 10))) ^ l_896), (func_21(l_912, (l_63 = (g_879 = (safe_add_func_int32_t_s_s((-1L), 8UL)))), l_912.f0, l_905.f2, g_61.f2) < 0x9DL))) ^ l_912.f2)));
        g_657 = func_33(g_351[2][0].f2, l_912.f0);
    }
    else
    {
        int l_916[5] = {0x45862357L, 0x4927B8C7L, 0x45862357L, 0x4927B8C7L, 0x45862357L};
        struct S0 l_917 = {1UL,0L,8L};
        int i;
        l_917 = func_28(((g_915 = (g_118 = 0x68CAL)) ^ (l_916[2] != func_21((l_917 , g_918), g_11, l_917.f1, l_919, (l_916[2] , 4L)))), l_14[5][8], l_917.f1, l_916[4]);
    }
    l_905 = (l_905.f2 , func_43(g_568, (safe_lshift_func_uint8_t_u_u(((g_483[1][4] = l_14[4][5]) | ((safe_add_func_uint8_t_u_u(0xABL, l_63)) != ((safe_lshift_func_int8_t_s_s(((func_21(l_905, l_63, (g_364 = ((0x66A3L <= 0xB0C0L) >= g_456)), g_657, g_510[2][1]) | 0x13915D63L) > 0L), 4)) != 0x1DD4A33FL))), 7)), l_905.f2, l_905.f1, g_840));
    g_665.f1 = (((safe_rshift_func_int8_t_s_s(l_905.f1, 5)) >= (0xA965L != (g_27.f0 = func_49(g_27.f2, (safe_mod_func_uint8_t_u_u((func_57(g_203, g_456, (safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(l_934, (g_61 , (l_935 || (((l_935 & 4294967290UL) && g_863) != 0x1BAAL))))) == 0xD8AFL), l_14[3][5]))) != g_915), l_14[4][6])), l_14[3][8], l_596, g_27.f1)))) , l_936[2][2]);
    return g_351[2][0];
}







static unsigned char func_3(unsigned char p_4, unsigned p_5, short p_6, int p_7, unsigned char p_8)
{
    char l_606 = 0L;
    struct S0 l_607[3][7] = {{{65531UL,1L,2L}, {65531UL,1L,2L}, {0x135FL,3L,0x47L}, {65531UL,1L,2L}, {65531UL,1L,2L}, {0x135FL,3L,0x47L}, {65531UL,1L,2L}}, {{65531UL,1L,2L}, {65531UL,1L,2L}, {0x135FL,3L,0x47L}, {65531UL,1L,2L}, {65531UL,1L,2L}, {0x135FL,3L,0x47L}, {65531UL,1L,2L}}, {{65531UL,1L,2L}, {65531UL,1L,2L}, {0x135FL,3L,0x47L}, {65531UL,1L,2L}, {65531UL,1L,2L}, {0x135FL,3L,0x47L}, {65531UL,1L,2L}}};
    int l_617[1];
    char l_667 = (-7L);
    unsigned l_674[7] = {0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL};
    unsigned l_691 = 0xA82EEB90L;
    char l_769 = 0xD4L;
    int l_770 = (-4L);
    int l_771 = 0L;
    unsigned l_838[4] = {0xE58D4D92L, 0x50EB5E7EL, 0xE58D4D92L, 0x50EB5E7EL};
    struct S0 l_893 = {1UL,0x4228CCF7L,0L};
    int i, j;
    for (i = 0; i < 1; i++)
        l_617[i] = 0xF501E10AL;
    if ((l_606 , ((!g_544[1]) | 0x0CL)))
    {
        short l_610 = (-1L);
        unsigned short l_618 = 0x18C2L;
        unsigned short l_619 = 2UL;
        int l_632 = (-4L);
        int l_633[1];
        int l_634 = 0xC653551FL;
        unsigned l_635 = 0x7D849ADDL;
        int i;
        for (i = 0; i < 1; i++)
            l_633[i] = 0L;
        g_351[1][0] = l_607[0][4];
        p_7 = (func_33(((g_483[3][1] , (safe_lshift_func_int16_t_s_s(((l_607[0][4].f1 = (+(func_57(p_8, l_610, (p_5 | ((safe_rshift_func_int8_t_s_u((l_617[0] = func_57((safe_add_func_int16_t_s_s((0x280262F4L != ((3L && p_8) & (((((g_544[1] = (((l_607[0][4].f1 <= (g_64 = (l_617[0] = (safe_lshift_func_uint8_t_u_u(0UL, 2))))) , g_203) <= g_187[2])) & g_351[2][0].f0) , p_4) < l_607[0][4].f0) , l_617[0]))), 0L)), g_456, l_618)), g_493)) , l_607[0][4].f2))) , 0x21L))) < 0L), l_619))) != g_203), l_618) == l_607[0][4].f2);
        g_351[2][0] = l_607[1][1];
        l_635 = (safe_rshift_func_uint16_t_u_s(func_21(func_28(g_351[2][0].f0, (((-1L) | func_57(p_6, ((g_351[2][0].f2 = ((safe_unary_minus_func_uint16_t_u((((l_634 = (safe_rshift_func_uint16_t_u_s(((((l_633[0] = (l_607[0][4].f1 = (l_632 = ((~(safe_mod_func_int32_t_s_s(func_49((safe_mod_func_uint32_t_u_u(g_364, l_618)), l_607[0][4].f0, (safe_mod_func_int8_t_s_s((func_38(p_4, l_618) , l_610), 0x30L)), g_631, p_6), g_364))) <= 4294967288UL)))) || 4294967294UL) , g_510[2][3]) >= 65526UL), 5))) > l_610) | 1L))) | g_13[2])) , 2UL), p_7)) == l_617[0]), l_617[0], p_7), g_631, g_74[6], l_610, l_606), 6));
    }
    else
    {
        unsigned short l_636 = 0UL;
        int l_645 = (-1L);
        char l_647[6][10] = {{0xECL, 4L, 0L, 0xE1L, 0x46L, 0xE1L, 0L, 4L, 0xECL, 0x78L}, {0xECL, 4L, 0L, 0xE1L, 0x46L, 0xE1L, 0L, 4L, 0xECL, 0x78L}, {0xECL, 4L, 0L, 0xE1L, 0x46L, 0xE1L, 0L, 4L, 0xECL, 0x78L}, {0xECL, 4L, 0L, 0xE1L, 0x46L, 0xE1L, 0L, 4L, 0xECL, 0x78L}, {0xECL, 4L, 0L, 0xE1L, 0x46L, 0xE1L, 0L, 4L, 0xECL, 0x78L}, {0xECL, 4L, 0L, 0xE1L, 0x46L, 0xE1L, 0L, 4L, 0xECL, 0x78L}};
        int l_658 = 0x54AE0C93L;
        unsigned char l_668[8] = {255UL, 0x46L, 255UL, 0x46L, 255UL, 0x46L, 255UL, 0x46L};
        struct S0 l_670[2][5] = {{{65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}}, {{65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}, {65532UL,-1L,0x0FL}}};
        short l_824 = 0xF60CL;
        unsigned l_868 = 0UL;
        int i, j;
lbl_723:
        l_636 = p_7;
        for (g_568 = 0; (g_568 <= 1); g_568 += 1)
        {
            char l_648[1][8][9] = {{{0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}, {0x18L, 0x18L, 0x99L, 0x2CL, (-1L), 0x2CL, 0x99L, 0x18L, 0x18L}}};
            short l_649 = (-1L);
            struct S0 l_666 = {0x0C50L,0x3EC0A043L,0xDFL};
            int i, j, k;
            if (func_38(g_13[g_568], (0xAF79D217L | (((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(g_119[g_568], (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((p_6 == (l_645 = (g_351[2][0].f1 = p_4))), (safe_unary_minus_func_uint16_t_u((func_57(((g_13[g_568] < l_607[0][4].f0) <= (((p_7 = (p_5 <= ((((g_483[0][3] = g_510[2][3]) <= g_13[1]) , g_118) , 0x28C5L))) , p_6) ^ p_5)), g_61.f1, l_647[5][3]) && p_6))))), l_648[0][4][1])))) && 0L), 14)) & l_647[1][8]) , l_649) == 247UL) < g_27.f1))))
            {
                unsigned l_654 = 3UL;
                int l_669 = 0x8072E4C4L;
                int l_673[7] = {0x5380CE30L, 0x5380CE30L, 0x1660FAAFL, 0x5380CE30L, 0x5380CE30L, 0x1660FAAFL, 0x5380CE30L};
                unsigned short l_690 = 0x9F22L;
                unsigned short l_703[9] = {0x5FB9L, 1UL, 0x5FB9L, 1UL, 0x5FB9L, 1UL, 0x5FB9L, 1UL, 0x5FB9L};
                struct S0 l_728 = {0x8C5CL,0xE39396B5L,0x0EL};
                int i;
                p_7 = ((p_4 >= g_27.f2) == ((l_658 = (g_483[3][1] , ((safe_lshift_func_int8_t_s_s(g_74[5], 2)) | (l_607[0][4].f1 = ((l_645 = (((g_351[2][0].f0 = p_7) != ((func_57(l_654, (g_657 = func_49(((g_493 < ((safe_add_func_int16_t_s_s(((g_27.f1 || g_351[2][0].f1) > g_351[2][0].f1), 0xFD44L)) & 7UL)) , l_647[5][4]), g_64, l_607[0][4].f2, g_493, p_4)), p_5) <= g_544[1]) | 0x7C8EL)) > l_617[0])) == p_7))))) >= 0x266CL));
                p_7 = (((((safe_sub_func_uint16_t_u_u(((((func_57(l_617[0], g_418[8], (((safe_sub_func_uint32_t_u_u((!((g_64 = l_649) < (safe_add_func_uint32_t_u_u(func_21((g_665 = (l_670[0][2] = func_43(func_21((func_21(g_61, l_654, (func_21((g_119[1] , g_665), ((g_418[1] > func_21(l_666, p_8, l_648[0][4][1], g_2, l_667)) > p_5), g_203, p_5, l_667) , p_4), p_5, l_668[7]) , g_61), l_669, g_351[2][0].f1, p_7, g_665.f1), g_483[5][1], g_483[3][1], g_657, g_13[g_568]))), p_8, p_7, l_668[7], l_668[2]), l_648[0][4][1])))), p_8)) , p_8) , l_654)) , 5L) <= g_13[g_568]) , 0xB8L) != 0x16L), p_7)) < p_4) == p_4) , p_7) , 0xB0BE0B64L);
                for (g_11 = 0; (g_11 <= 2); g_11 += 1)
                {
                    unsigned char l_689[7][6][6] = {{{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}, {{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}, {{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}, {{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}, {{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}, {{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}, {{0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}, {0x23L, 255UL, 255UL, 0x13L, 0x2FL, 254UL}}};
                    int l_732 = (-6L);
                    int i, j, k;
                    for (l_666.f0 = 0; (l_666.f0 <= 5); l_666.f0 += 1)
                    {
                        struct S0 l_692 = {7UL,-1L,-1L};
                        int i, j;
                        l_692 = func_43(func_57(((l_666 , (g_544[g_11] , (safe_mod_func_uint32_t_u_u((g_544[g_11] > (l_673[0] = g_27.f1)), ((((l_666.f1 = ((l_674[3] >= (safe_rshift_func_int8_t_s_u((l_607[0][4].f1 = (l_617[0] = (((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((((l_647[l_666.f0][g_568] = (safe_mod_func_int32_t_s_s(g_544[1], (safe_sub_func_uint16_t_u_u((((+((g_187[5] = (((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(0xCFEA58DBL, l_689[5][4][3])), func_21(g_665, l_606, g_456, g_418[8], l_690))) | 0UL) > 0L)) >= l_674[0])) > p_7) <= g_27.f2), 5L))))) <= g_657) , 65535UL) || g_64), p_4)) <= p_5), 5)) < g_27.f2) , l_689[5][4][3]))), p_8))) <= g_27.f1)) != p_6) && g_27.f0) && 1UL))))) || l_691), p_4, g_351[2][0].f1), p_4, l_606, g_418[9], l_658);
                        p_7 = func_33(g_27.f2, (l_692.f1 = g_510[2][3]));
                        g_187[2] = p_4;
                        p_7 = (safe_sub_func_uint16_t_u_u(p_4, p_5));
                    }
                    if (((((p_4 = (safe_rshift_func_int16_t_s_s((((g_351[2][0].f1 == (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(p_5, ((l_703[8] ^ (65530UL ^ (safe_sub_func_int16_t_s_s(((l_666.f1 = l_703[7]) , (g_27.f0 < func_49(l_647[2][9], func_38((p_7 = 5L), ((g_119[1] & l_636) , g_2)), g_13[1], g_418[0], p_4))), 65531UL)))) == p_4))) | l_668[7]), l_606)) , l_636), p_5))) && p_5) , 0x2F21L), 2))) == l_645) , 247UL) & g_483[3][1]))
                    {
                        unsigned l_706 = 0xB662E99AL;
                        int l_721[9];
                        int l_722 = 8L;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_721[i] = 0x32EE26E7L;
                        p_7 = (l_706 && ((p_6 & g_351[2][0].f1) & (((safe_rshift_func_int16_t_s_u(g_118, (g_418[3] != (+g_351[2][0].f2)))) , p_6) < (safe_lshift_func_uint16_t_u_s(65526UL, 5)))));
                        g_351[0][0] = g_61;
                        g_657 = (safe_add_func_int16_t_s_s((g_364 | (l_668[1] > (((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(l_706, 1)) | func_57(((func_38((p_7 = p_5), (safe_sub_func_uint16_t_u_u(0x9A2FL, l_647[5][3]))) , ((-9L) & (func_38(((safe_lshift_func_uint8_t_u_s(((func_57((l_721[3] = ((p_5 | g_665.f0) != g_665.f1)), l_654, l_722) , p_4) <= 0UL), 4)) , l_668[7]), l_668[7]) > p_5))) , l_666.f1), p_5, g_631)) >= 0xAB9BL), 4294967292UL)) && l_654) || 0xE8A5L))), p_4));
                    }
                    else
                    {
                        if (g_568)
                            break;
                        if (g_27.f1)
                            goto lbl_723;
                        if (l_689[5][4][3])
                            continue;
                    }
                    l_732 = func_49((g_731 = func_49((g_665.f0 , (safe_sub_func_uint32_t_u_u(p_8, ((safe_lshift_func_int16_t_s_s(((func_21(l_728, g_483[3][1], l_647[5][3], (g_493 , (l_670[0][2].f2 || func_38(p_4, ((((safe_mod_func_int16_t_s_s((((((p_4 , g_351[2][0].f2) == g_351[2][0].f0) | 0xFEL) , g_483[7][0]) < l_690), p_7)) <= 0x12L) & 0UL) > g_64)))), l_654) >= g_418[8]) == 0x37E9L), 2)) , g_510[2][3])))), l_668[1], g_418[8], g_510[1][1], l_647[5][3])), p_7, g_657, l_607[0][4].f1, p_8);
                }
                g_665.f1 = g_61.f1;
            }
            else
            {
                unsigned char l_733 = 255UL;
                l_733 = (p_7 | g_568);
                return l_668[0];
            }
            for (p_5 = 0; (p_5 <= 2); p_5 += 1)
            {
                struct S0 l_740[7][3] = {{{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}, {{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}, {{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}, {{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}, {{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}, {{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}, {{0x5C7CL,-4L,-1L}, {0x5C7CL,-4L,-1L}, {1UL,0L,0x6FL}}};
                unsigned short l_743 = 0x433EL;
                int i, j;
                l_740[5][2] = func_43((g_13[p_5] = (safe_add_func_int16_t_s_s((((p_4 = g_203) && (safe_sub_func_int32_t_s_s((p_8 > (((safe_sub_func_uint32_t_u_u(((-4L) ^ (+p_8)), g_510[2][3])) , 0UL) <= ((p_4 = (!g_631)) != ((g_119[g_568] = g_119[g_568]) >= ((0x09L & g_510[2][3]) && 254UL))))), 0x93F69BB5L))) > 0x3B92L), g_665.f0))), g_74[2], g_665.f2, l_668[7], g_665.f2);
                l_617[0] = ((l_607[0][4].f1 = (safe_lshift_func_int8_t_s_u(g_351[2][0].f2, ((((l_666.f2 && 0xA9L) <= g_665.f1) | l_667) && g_74[0])))) , (((l_743 && ((safe_unary_minus_func_uint32_t_u(((l_670[0][2].f1 = l_691) < (safe_sub_func_uint8_t_u_u((p_8 = (((safe_mod_func_int16_t_s_s(l_674[3], g_74[1])) > p_5) != 4294967293UL)), l_670[0][2].f2))))) == 0x14630769L)) < g_119[0]) & (-4L)));
                for (g_118 = 0; (g_118 <= (-24)); --g_118)
                {
                    g_27.f1 = p_6;
                    for (g_27.f0 = 0; (g_27.f0 > 41); ++g_27.f0)
                    {
                        p_7 = (safe_mul_func_int8_t_s_s(l_740[5][2].f1, (g_665.f2 = (((safe_sub_func_int8_t_s_s((g_483[4][1] ^ (-10L)), (safe_lshift_func_uint8_t_u_u(((g_493 , (l_670[0][2] = func_43(p_8, p_6, ((g_456 = (safe_mod_func_int16_t_s_s(l_617[0], p_5))) == 0UL), l_649, g_665.f2))) , 0x1DL), 5)))) == 1UL) != p_7))));
                    }
                }
            }
            if (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((g_483[0][1] || (safe_mod_func_int32_t_s_s(func_57((((l_770 = (g_731 = ((l_617[0] = ((1L || func_21(l_670[1][2], p_4, g_13[1], func_33((l_617[0] = p_5), (l_666.f1 = (l_607[0][4].f1 = func_21(g_665, p_6, g_119[g_568], l_647[5][3], g_418[6])))), l_648[0][5][5])) < l_769)) < g_27.f1))) > p_8) >= g_631), p_8, l_647[5][3]), l_691))), g_657)), l_771)), 8)) == l_771))
            {
                return p_4;
            }
            else
            {
                char l_774 = 0xB1L;
                int l_801[9] = {1L, 0x3C727753L, 1L, 0x3C727753L, 1L, 0x3C727753L, 1L, 0x3C727753L, 1L};
                struct S0 l_827[5][7] = {{{0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}}, {{0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}}, {{0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}}, {{0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}}, {{0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}, {1UL,-8L,0x76L}, {0xA80EL,3L,0x26L}}};
                int i, j;
                for (l_666.f2 = 0; (l_666.f2 <= (-19)); --l_666.f2)
                {
                    l_774 = g_568;
                    if (g_61.f1)
                        continue;
                    l_658 = l_645;
                    for (g_456 = (-12); (g_456 <= 20); g_456 = safe_add_func_uint32_t_u_u(g_456, 5))
                    {
                        unsigned l_785 = 18446744073709551612UL;
                        p_7 = (safe_add_func_uint8_t_u_u(((p_5 , func_33(func_49(((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((-1L), 1)), l_666.f0)) != p_6), g_27.f1, l_774, l_670[0][2].f2, (safe_add_func_uint32_t_u_u(func_49(g_13[1], g_510[0][1], g_665.f0, p_7, g_364), 1UL))), l_785)) || l_785), p_6));
                        return p_6;
                    }
                }
                if (g_418[4])
                {
                    int l_786 = (-8L);
                    int l_800 = 5L;
                    p_7 = g_118;
                    l_607[0][4] = func_43(g_351[2][0].f2, (l_786 = 65535UL), g_11, (g_13[1] , (+(g_11 & (safe_add_func_uint8_t_u_u((+(g_731 = p_5)), (p_5 < l_658)))))), l_649);
                    if ((g_187[0] = ((l_607[0][4].f1 = g_13[2]) > (l_658 = (((safe_sub_func_int32_t_s_s(((65535UL <= ((p_6 < (l_666.f1 = ((safe_unary_minus_func_int8_t_s(((((safe_sub_func_uint8_t_u_u(((!p_7) && (1L != ((((g_13[1] , p_8) , func_43(p_6, g_483[3][1], p_8, g_351[2][0].f0, l_774)) , 0x886EL) , 0x086FB24DL))), p_4)) ^ g_61.f2) , g_418[9]) | l_674[2]))) || 0x72DAL))) , p_7)) ^ 246UL), g_61.f2)) , p_4) < l_774)))))
                    {
                        int l_794 = 0x8F7DF789L;
                        l_800 = ((l_794 <= ((safe_unary_minus_func_int16_t_s(g_418[8])) | p_8)) != ((g_544[2] != ((g_187[3] && (g_119[0] != (((l_607[0][4].f1 = (safe_rshift_func_int8_t_s_s((g_544[0] ^ (safe_lshift_func_int8_t_s_s(((func_57(p_8, l_666.f0, p_5) && 0xD5L) == l_786), l_774))), 7))) > l_794) && 4UL))) && l_774)) & 0x8E9BL));
                        if (l_674[3])
                            continue;
                        l_801[5] = (-8L);
                        if (p_4)
                            break;
                    }
                    else
                    {
                        struct S0 l_802 = {65534UL,0xD08835F7L,0x0EL};
                        if (g_665.f0)
                            break;
                        l_670[1][1] = (l_607[0][2] = l_802);
                        g_351[0][0] = func_43(l_647[5][3], (+p_5), (g_64 = l_801[5]), l_786, g_483[7][0]);
                    }
                }
                else
                {
                    unsigned l_805[3];
                    struct S0 l_826 = {1UL,-1L,3L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_805[i] = 18446744073709551615UL;
                    if (g_13[g_568])
                    {
                        g_657 = (p_6 , g_356);
                        p_7 = 1L;
                        l_666.f1 = (g_61.f1 & g_119[g_568]);
                    }
                    else
                    {
                        unsigned l_825 = 9UL;
                        p_7 = (((safe_rshift_func_int8_t_s_u((((func_43(l_805[2], p_7, (safe_add_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(p_5, (g_351[2][0] , ((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((g_351[2][0].f1 , ((((safe_sub_func_uint16_t_u_u(((((l_607[0][4].f1 = (g_665.f2 = (func_21(func_43(l_648[0][7][5], p_8, ((safe_add_func_uint32_t_u_u(4294967295UL, (func_43((g_351[2][0].f1 == g_665.f0), g_27.f0, l_824, l_667, g_351[2][0].f1) , 0x340972A4L))) | l_647[4][9]), p_4, g_456), g_13[0], l_670[0][2].f2, l_658, l_801[5]) <= 0L))) && 0x33L) && l_801[2]) && 1L), p_4)) <= g_27.f0) , l_824) != 0x570F530EL)), g_61.f2)), g_544[0])) ^ g_418[8]), (-1L))) , g_61.f0)))) == p_5), 5)) | p_4), p_5)), p_7)), p_6, l_825) , p_5) | 0x37L) != 0UL), l_805[0])) , g_27.f1) == p_5);
                        p_7 = (l_825 , p_4);
                        l_827[3][5] = l_826;
                        g_351[2][0] = (l_826 = (l_827[4][1] = func_43((l_801[3] = ((func_38(g_351[2][0].f2, g_61.f2) , g_568) , ((l_826.f1 = ((g_119[g_568] > 0x82CDFC95L) >= ((p_5 & (func_21((l_666 = l_826), g_418[7], p_7, l_825, p_8) >= 0x29174CD1L)) != g_510[2][3]))) , g_544[2]))), g_74[5], p_4, l_668[0], g_356)));
                    }
                    if (p_7)
                        continue;
                    return l_607[0][4].f1;
                }
                if ((5L >= (safe_rshift_func_uint8_t_u_s(p_8, 7))))
                {
                    struct S0 l_832[9] = {{3UL,8L,0x98L}, {3UL,8L,0x98L}, {0x5585L,0x4558B87BL,0L}, {3UL,8L,0x98L}, {3UL,8L,0x98L}, {0x5585L,0x4558B87BL,0L}, {3UL,8L,0x98L}, {3UL,8L,0x98L}, {0x5585L,0x4558B87BL,0L}};
                    unsigned char l_835 = 0x67L;
                    int i;
                    g_187[3] = (((~(((((safe_add_func_uint32_t_u_u(((((((l_827[3][5] , (g_118 = func_57((func_21(l_832[6], p_8, p_8, (p_6 > l_769), p_8) || (safe_lshift_func_uint16_t_u_s((func_43(l_666.f0, g_11, g_187[5], g_119[0], g_74[5]) , g_456), g_665.f1))), p_6, p_8))) && p_4) , 0x19L) ^ p_4) > l_667) > g_351[2][0].f2), p_7)) | l_835) , g_11) ^ g_544[0]) > 0L)) != g_11) | 255UL);
                }
                else
                {
                    for (l_774 = 10; (l_774 > (-5)); l_774 = safe_sub_func_int16_t_s_s(l_774, 6))
                    {
                        l_670[0][1] = l_666;
                    }
                }
            }
            if (g_61.f2)
            {
                unsigned char l_839 = 255UL;
                g_187[5] = (l_838[2] , g_418[8]);
                if (l_839)
                    break;
            }
            else
            {
                unsigned short l_843 = 9UL;
                l_645 = (~(p_4 != (g_840 & (func_21(l_607[0][4], ((p_8 = ((((safe_mod_func_uint8_t_u_u(l_843, g_544[1])) <= p_5) , p_5) | l_843)) , g_13[1]), g_356, l_838[1], g_64) & l_666.f1))));
                return p_8;
            }
        }
        for (p_5 = (-18); (p_5 >= 31); p_5 = safe_add_func_uint8_t_u_u(p_5, 3))
        {
            char l_852 = 9L;
            int l_862 = (-5L);
            struct S0 l_890 = {0x8D89L,0x618BDEB6L,0x67L};
            for (g_665.f1 = 0; (g_665.f1 < 5); g_665.f1++)
            {
                int l_861[10] = {7L, 0x6A418AF1L, 7L, 0x6A418AF1L, 7L, 0x6A418AF1L, 7L, 0x6A418AF1L, 7L, 0x6A418AF1L};
                struct S0 l_878 = {0x2B5CL,0L,0xB0L};
                int i;
                l_617[0] = (p_4 == (p_7 != (g_203 , (func_57(p_8, ((safe_rshift_func_int8_t_s_u((p_7 , l_838[2]), 7)) , g_64), g_456) || 0xD6L))));
                if (((((safe_rshift_func_uint8_t_u_s(l_852, 5)) >= func_33(((l_658 = (safe_rshift_func_uint16_t_u_s(((-1L) & ((l_861[1] = func_38((func_43((g_13[1] = 0xFFD14947L), (l_607[0][4].f1 , p_6), ((((l_861[1] = func_49(((l_862 = (safe_rshift_func_uint16_t_u_u(((0xB65E176BL >= (l_645 = ((g_665.f2 = (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_u(p_6, 3)) , l_647[5][3]), l_670[0][2].f2)) && l_636) | g_61.f0)) , 0x67229F66L))) <= l_861[1]), 8))) <= p_7), g_351[2][0].f2, l_852, g_61.f2, l_861[1])) != (-4L)) , l_852) == g_665.f1), g_863, g_456) , 0xE6F8CD22L), g_631)) || p_5)), g_418[5]))) >= 0UL), p_5)) <= p_4) | p_4))
                {
                    return l_861[2];
                }
                else
                {
                    short l_873 = 0xE992L;
                    int l_880 = 0xB094EC17L;
                    g_544[0] = (p_6 & func_49(((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((1UL != p_7), 3)), (p_7 | (g_568 > l_868)))) , (g_351[2][0].f2 <= (safe_sub_func_uint16_t_u_u((4294967295UL == g_61.f0), (-1L))))), g_418[8], p_5, p_7, l_861[1]));
                    l_880 = ((safe_lshift_func_int16_t_s_u(func_49(((l_873 = g_493) < g_118), (g_879 = (l_862 = (safe_add_func_uint16_t_u_u((g_61.f0 = g_493), (g_11 == ((p_7 = p_7) <= (((((g_863 = ((safe_rshift_func_int16_t_s_s((l_861[1] = g_456), 5)) < 1L)) | g_203) , (l_878 = l_670[0][2])) , p_8) || 0xC194L))))))), g_27.f1, p_5, p_6), l_824)) & 0xB9FCL);
                    l_880 = (func_33((safe_rshift_func_uint16_t_u_u((g_364 > (g_665.f1 > g_351[2][0].f0)), 2)), ((!(safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((p_5 == (g_493 , g_456)), (safe_unary_minus_func_uint8_t_u((g_731 = (p_7 , (safe_add_func_uint32_t_u_u((l_647[5][3] ^ 0L), 4294967287UL)))))))), p_7))) ^ g_418[4])) <= 0x9FD61593L);
                    l_890 = l_607[0][4];
                }
            }
            g_665.f1 = 0L;
        }
        g_665 = ((l_645 = (safe_sub_func_uint16_t_u_u(1UL, l_667))) , l_893);
    }
    return p_5;
}







static short func_15(unsigned char p_16, unsigned p_17, unsigned p_18, short p_19, unsigned short p_20)
{
    int l_597 = 0x9F94546EL;
    l_597 = g_418[8];
    for (g_568 = (-10); (g_568 == (-14)); --g_568)
    {
        int l_605 = (-7L);
        for (g_27.f2 = 0; (g_27.f2 <= (-18)); --g_27.f2)
        {
            unsigned char l_602 = 0x8AL;
            g_187[1] = (0x4BC2L ^ (((g_493 , (func_43(((l_602 = p_20) , (g_351[2][0].f2 , ((safe_rshift_func_int16_t_s_s((func_57(func_33(p_19, p_19), (p_17 == p_19), l_605) >= 255UL), g_27.f0)) ^ p_18))), p_16, g_27.f2, g_74[2], g_418[8]) , g_61.f1)) || p_16) & 7L));
        }
    }
    return g_187[5];
}







static unsigned func_21(struct S0 p_22, char p_23, unsigned p_24, unsigned p_25, char p_26)
{
    return g_544[2];
}







static struct S0 func_28(unsigned char p_29, int p_30, char p_31, const int p_32)
{
    unsigned l_376 = 0xE1303015L;
    int l_392[8][5][4] = {{{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}, {{(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}, {(-1L), 3L, (-1L), 0x8CFB3292L}}};
    int l_393 = 0x034A2D40L;
    unsigned char l_407[5][7][4] = {{{0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}}, {{0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}}, {{0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}}, {{0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}}, {{0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}, {0x0AL, 0x80L, 0xDEL, 0UL}}};
    struct S0 l_408 = {0x674DL,-1L,-5L};
    unsigned l_439[9][10] = {{0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}, {0x0AFD0AD5L, 0xF390243DL, 18446744073709551615UL, 18446744073709551610UL, 0x819C30D7L, 0x62B044E9L, 0x1C2B71EDL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL}};
    int l_465 = 0x5428DD49L;
    unsigned l_500 = 1UL;
    unsigned char l_522 = 0x96L;
    const unsigned l_534 = 18446744073709551615UL;
    unsigned char l_566 = 0x31L;
    int i, j, k;
lbl_470:
    p_30 = (safe_rshift_func_uint8_t_u_s(((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u((g_364 ^ (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(g_61.f1, (1UL <= (safe_rshift_func_int16_t_s_s(g_74[1], 3))))), (p_31 == l_376)))), p_31)))) | p_31), g_203));
    if (l_376)
    {
        char l_381 = 0x2FL;
        unsigned l_386[9][6][4] = {{{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}, {{18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}, {18446744073709551615UL, 0UL, 1UL, 0xACDA0508L}}};
        int l_391[6] = {0x97663FD4L, 0x97663FD4L, 1L, 0x97663FD4L, 0x97663FD4L, 1L};
        struct S0 l_394 = {5UL,0L,-6L};
        int i, j, k;
        p_30 = 0x88B26008L;
        g_351[2][0].f1 = (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(func_33((g_351[3][0] , l_381), (safe_mod_func_uint8_t_u_u((p_32 , (p_29 = (l_393 = (((((l_381 > (l_392[1][1][3] = (safe_mod_func_uint16_t_u_u(l_386[6][1][2], (safe_add_func_uint8_t_u_u(func_57((func_38(l_376, func_57(l_376, ((p_31 > (safe_rshift_func_uint16_t_u_u((l_391[1] = func_38((p_30 = (l_386[6][1][2] >= p_31)), g_119[1])), g_351[2][0].f1))) && 8UL), g_356)) > 3UL), l_381, p_32), (-1L))))))) >= p_29) > 2UL) && 1L) | l_386[6][1][2])))), 250UL))), l_386[6][1][2])) != l_381), l_376));
        l_394 = l_394;
    }
    else
    {
        int l_405 = 0L;
        struct S0 l_406[4] = {{1UL,2L,1L}, {0UL,0x560C18B8L,3L}, {1UL,2L,1L}, {0UL,0x560C18B8L,3L}};
        int l_480 = 1L;
        int l_494 = 0x69AA1C8CL;
        char l_521 = 0xE2L;
        int i;
        for (p_29 = 0; (p_29 <= 0); p_29 += 1)
        {
            int l_421 = 1L;
            const unsigned l_450 = 18446744073709551615UL;
            struct S0 l_511 = {0x0A5DL,0x5D09A7C2L,4L};
            int i;
            g_187[(p_29 + 4)] = ((safe_mod_func_uint16_t_u_u((g_119[p_29] & (safe_mod_func_uint16_t_u_u((g_187[(p_29 + 6)] > ((safe_rshift_func_int8_t_s_u((g_61.f1 || (safe_rshift_func_int16_t_s_u(g_61.f1, 4))), 5)) != g_2)), (g_74[6] && 1L)))), (safe_rshift_func_int8_t_s_s(l_405, 3)))) == (p_32 <= l_405));
            if ((0UL & (l_406[0] , func_49(((g_187[(p_29 + 6)] = l_407[4][3][2]) , (l_406[0].f1 = (l_408 , (l_408.f1 = (l_406[0].f0 != l_408.f0))))), func_57(l_392[1][1][3], (g_356 & (safe_rshift_func_uint8_t_u_u(((-8L) | g_351[2][0].f1), g_61.f2))), p_30), g_27.f2, p_30, g_356))))
            {
                unsigned char l_419 = 0x6EL;
                int l_420 = 0xD0E5574AL;
                unsigned l_438 = 0x9E2B8459L;
                struct S0 l_442 = {0xAE89L,0xF38BF8F9L,-6L};
                int i;
                l_408 = func_43((l_406[0].f1 = ((l_420 = (g_119[(p_29 + 1)] = ((safe_lshift_func_int16_t_s_s(((~(safe_unary_minus_func_int32_t_s((g_187[(p_29 + 6)] = (safe_lshift_func_uint8_t_u_u(((func_43(p_31, g_61.f2, ((func_43(((~l_406[0].f1) , g_61.f0), g_119[0], l_408.f2, g_61.f2, ((g_64 = ((safe_sub_func_uint8_t_u_u(g_418[8], g_351[2][0].f1)) , g_203)) , g_119[p_29])) , 0x6CDA9EC0L) >= 1L), l_419, l_419) , p_31) || 0xEF52FCE2L), l_405)))))) > p_29), l_392[5][0][0])) == 0xDAL))) == g_27.f2)), l_376, p_30, l_392[5][1][0], l_421);
                for (p_30 = 0; (p_30 <= 0); p_30 += 1)
                {
                    int l_451 = 1L;
                    int i, j;
                    g_351[2][0].f1 = ((((safe_sub_func_uint16_t_u_u((((g_351[(p_30 + 5)][p_30] , (((l_439[7][2] = (safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(g_27.f2, 0xA9L)), (safe_add_func_uint32_t_u_u((0x21L & (0x45F945E4L < (((safe_add_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_s((l_420 = p_30), 2)) < ((safe_rshift_func_int8_t_s_s(g_351[(p_30 + 5)][p_30].f2, func_38(p_32, (g_351[(p_30 + 5)][p_30].f1 = (safe_mod_func_int16_t_s_s(((p_30 < 1UL) < 1UL), 0x3004L)))))) | g_2)) != l_421) & 7UL), g_64)) < l_438) | g_418[6]))), 0x8354F028L))))) , 0x367C8528L) && g_61.f2)) <= l_408.f0) && g_351[2][0].f2), l_438)) , g_2) , 0xB21EL) > p_30);
                    if (g_203)
                    {
                        short l_443 = 0x15C5L;
                        int i, j;
                        if (g_27.f1)
                            break;
                        g_351[(p_30 + 6)][p_30] = func_43(func_57((safe_lshift_func_int16_t_s_s(g_187[2], 7)), l_419, l_438), (l_442 , ((l_443 = g_119[0]) ^ (p_31 >= (((p_31 | p_31) < l_406[0].f1) != l_407[3][3][0])))), p_30, g_351[2][0].f1, g_187[5]);
                    }
                    else
                    {
                        g_61.f1 = g_187[(p_29 + 4)];
                    }
                    l_442.f1 = (g_27.f0 || (((p_31 < (l_442.f1 , (safe_add_func_int32_t_s_s((p_32 < (l_406[0].f1 = (safe_mod_func_uint32_t_u_u(g_27.f1, (p_30 , (p_32 || (safe_add_func_uint8_t_u_u(((l_450 != ((l_451 = p_30) <= g_351[(p_30 + 5)][p_30].f0)) < 0xA9L), p_32)))))))), p_29)))) & 8UL) < l_406[0].f2));
                }
                for (g_61.f0 = 0; (g_61.f0 <= 3); g_61.f0 += 1)
                {
                    unsigned short l_452 = 65535UL;
                    g_187[5] = (1L & ((g_203 = (l_452 = ((g_27.f0 >= (g_61.f2 = (l_393 = g_119[p_29]))) & 1L))) == (safe_unary_minus_func_uint8_t_u((g_456 = (safe_mod_func_int8_t_s_s(g_27.f1, 0x4FL)))))));
                    for (g_456 = 3; (g_456 >= 0); g_456 -= 1)
                    {
                        int i, j, k;
                        l_392[(g_61.f0 + 1)][(g_456 + 1)][g_456] = ((((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(l_407[g_456][(p_29 + 4)][g_61.f0], l_392[(p_29 + 7)][(g_61.f0 + 1)][(p_29 + 3)])), 13)), p_30)) | 0x4AL) < p_29) || (g_356 <= (safe_lshift_func_int16_t_s_u(p_30, 2))));
                        return g_61;
                    }
                    for (l_452 = 0; (l_452 <= 3); l_452 += 1)
                    {
                        int i, j, k;
                        l_392[(p_29 + 7)][(p_29 + 3)][l_452] = l_407[(p_29 + 4)][(g_61.f0 + 2)][g_61.f0];
                    }
                    for (l_420 = 3; (l_420 >= 0); l_420 -= 1)
                    {
                        int i, j, k;
                        l_392[(p_29 + 4)][(g_61.f0 + 1)][g_61.f0] = l_407[(g_61.f0 + 1)][(g_61.f0 + 1)][l_420];
                        if (g_74[2])
                            break;
                        if (l_465)
                            continue;
                        l_406[g_61.f0] = l_442;
                    }
                }
                return l_442;
            }
            else
            {
                int l_466 = 0L;
                unsigned char l_467 = 0UL;
                struct S0 l_502 = {0x13E2L,0x871541C9L,-5L};
                int l_507 = 0x7E1A23FBL;
                if ((((p_30 = (g_187[5] = (l_466 == func_33((func_33(p_32, l_467) < 4L), g_27.f1)))) , (g_187[(p_29 + 4)] , ((0UL < 0xC4L) ^ l_406[0].f2))) ^ 0x35F19F81L))
                {
                    short l_478 = (-5L);
                    short l_479 = 0x0A4EL;
                    int l_481[5][8][5];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 8; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_481[i][j][k] = (-8L);
                        }
                    }
                    for (g_61.f1 = 1; (g_61.f1 >= 0); g_61.f1 -= 1)
                    {
                        return l_406[2];
                    }
                    for (l_408.f0 = 0; (l_408.f0 <= 10); l_408.f0++)
                    {
                        unsigned l_473[4][2] = {{0x5FBDDBE7L, 4294967295UL}, {0x5FBDDBE7L, 4294967295UL}, {0x5FBDDBE7L, 4294967295UL}, {0x5FBDDBE7L, 4294967295UL}};
                        int i, j;
                        if (l_450)
                            goto lbl_470;
                        p_30 = (safe_add_func_uint8_t_u_u((p_29 ^ (~l_473[1][0])), (l_481[0][2][0] = (((((safe_sub_func_uint16_t_u_u((((((g_203 = g_64) <= (p_31 = ((safe_lshift_func_uint8_t_u_u(func_57(g_27.f1, ((l_406[0] , g_187[7]) == (g_456 < g_27.f1)), (l_480 = ((l_478 != 0xB8L) , l_479))), 3)) != g_74[7]))) <= 0xE74EL) >= g_418[5]) ^ g_2), 0x947EL)) , 1UL) < 0xCDL) == g_119[1]) && l_479))));
                    }
                }
                else
                {
                    struct S0 l_482[6] = {{0x4AA5L,0x8C98602EL,0xFDL}, {0x4AA5L,0x8C98602EL,0xFDL}, {65530UL,-5L,-10L}, {0x4AA5L,0x8C98602EL,0xFDL}, {0x4AA5L,0x8C98602EL,0xFDL}, {65530UL,-5L,-10L}};
                    int l_499 = 0L;
                    int i;
                    g_351[5][0] = l_482[0];
                    if ((0x80C23419L & ((((l_482[0].f1 = g_456) , (((func_49(l_467, (((g_483[3][1] = l_482[0].f1) || func_33((func_49(g_187[(p_29 + 4)], (l_466 = func_57(l_465, (l_392[1][1][3] = (((safe_sub_func_uint32_t_u_u(p_31, (l_482[0].f1 = (((safe_rshift_func_int8_t_s_u(l_406[0].f1, 7)) > ((func_57(((g_187[5] != g_61.f2) , g_119[0]), g_119[0], l_406[0].f1) <= g_27.f0) != l_408.f0)) || g_483[3][1])))) & p_31) ^ p_29)), g_351[2][0].f2)), g_119[0], g_187[(p_29 + 4)], g_203) || g_2), p_31)) >= l_421), l_467, p_29, p_32) || p_29) ^ 2L) & p_31)) , g_27.f2) & 4294967291UL)))
                    {
                        int l_492 = (-2L);
                        unsigned char l_501 = 247UL;
                        g_187[(p_29 + 4)] = (l_494 = (((l_480 = (l_406[0].f1 = (p_30 = g_351[2][0].f2))) > l_421) <= ((g_64 = l_450) || ((g_483[0][3] != (((p_31 ^ func_49(g_61.f0, g_118, (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_482[0].f2 >= l_492), l_482[0].f0)), g_493)), g_2, l_408.f0)) , p_32) , p_29)) || g_61.f2))));
                        l_408.f1 = p_31;
                        l_502 = func_43(func_57((g_483[2][0] , (l_421 , func_49(((((0x9710L >= (safe_lshift_func_int16_t_s_u(func_57((((safe_mod_func_int32_t_s_s((g_187[(p_29 + 4)] != (l_421 = p_31)), (p_30 = l_499))) != 1UL) , ((((g_27.f1 == (p_30 = l_500)) >= l_492) && p_29) != p_32)), g_119[p_29], p_29), 4))) || 2UL) > 0xFF2CD97FL) == g_351[2][0].f2), p_29, l_466, g_118, g_27.f0))), g_351[2][0].f1, l_501), g_493, l_494, p_32, g_2);
                    }
                    else
                    {
                        l_502 = l_408;
                    }
                    l_511 = func_43(func_33(l_439[7][2], (func_43(((g_510[2][3] = (func_38(func_49(p_31, (l_466 = 0x42F0L), ((((~(((p_32 < l_482[0].f0) < l_502.f0) , (safe_sub_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_482[0].f1, l_507)) <= (safe_mod_func_uint8_t_u_u((l_480 != g_119[0]), p_31))), p_29)))) || 0x0DC23962L) | l_465) , 0x416A81A4L), p_32, g_483[1][0]), g_74[0]) , g_356)) , g_364), p_29, g_418[8], g_364, g_74[2]) , l_406[0].f0)), g_418[8], g_74[5], l_439[7][2], l_421);
                }
                if (l_511.f2)
                    continue;
            }
            l_408 = l_408;
            g_187[3] = func_49(p_31, g_119[p_29], (func_57(l_494, (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(func_57((g_64 = (p_32 | (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(func_57((safe_lshift_func_uint16_t_u_u(l_407[2][5][1], 6)), func_57(func_57((l_480 || (l_421 = (g_74[0] , g_61.f2))), l_521, p_30), g_187[5], l_408.f2), g_351[2][0].f1))), p_30)))), p_31, g_510[0][1]), p_30)), 10)), g_418[0]) , l_511.f2), l_521, p_30);
        }
    }
    for (p_30 = 0; (p_30 <= 3); p_30 += 1)
    {
        unsigned short l_543 = 65529UL;
        int l_545 = 4L;
        short l_546 = 0x3D57L;
        struct S0 l_585 = {0UL,0xA9C635A8L,0x6AL};
        if (l_392[1][1][3])
            break;
        for (g_356 = 0; (g_356 <= 3); g_356 += 1)
        {
            int l_547 = 1L;
            unsigned l_570 = 0x9179815DL;
            int i, j;
            l_522 = g_510[p_30][p_30];
            l_547 = (((1UL >= func_57(((func_43(l_376, g_61.f0, p_29, (((g_118 = (((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(g_483[3][1], (g_119[0] = ((safe_add_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(0xDFL)), 0x988AL)) ^ ((((((((safe_mod_func_uint32_t_u_u((l_534 || (((l_545 = ((safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_187[5] & 65535UL), 0xD4L)), p_31)) < g_510[p_30][p_30]) || g_356), p_32)) || l_543) > g_544[1]), 1L)) || g_510[p_30][p_30])) , g_483[4][3]) , l_546)), g_544[0])) , g_510[p_30][p_30]) & l_439[8][9]) ^ g_510[p_30][p_30]) , g_74[2]) > 1L) | 0xF5L) >= p_30))))), 12)) , l_408.f1), l_465)) , g_510[p_30][p_30]) || g_510[p_30][p_30])) ^ l_546) | l_543), p_31) , l_407[4][3][2]) , 0x335A4276L), g_510[p_30][p_30], g_2)) , g_119[0]) == p_31);
            for (l_408.f0 = 0; (l_408.f0 <= 3); l_408.f0 += 1)
            {
                short l_567 = 0x4ADAL;
                for (l_500 = 0; (l_500 <= 3); l_500 += 1)
                {
                    unsigned char l_569 = 0x27L;
                    int i, j, k;
                    l_547 = (func_49(((l_392[g_356][(l_500 + 1)][p_30] = (l_392[g_356][(l_500 + 1)][p_30] , ((safe_lshift_func_uint8_t_u_u((p_30 > 3UL), (4294967295UL & ((((g_568 = (safe_lshift_func_uint8_t_u_u(((g_510[p_30][l_408.f0] = ((g_364 = (((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(func_49((g_64 = ((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s((p_32 > (g_510[p_30][p_30] > ((((((((((func_57(((safe_add_func_int16_t_s_s((+g_364), p_30)) , ((((safe_sub_func_uint8_t_u_u((func_38((g_418[8] > g_64), g_61.f1) != 1L), 0UL)) , l_407[4][3][2]) >= g_418[8]) , 0x28C99705L)), l_566, p_32) < 0x593C9EA6L) <= 0x960DC393L) <= l_567) != 0L) , 0x17L) && 0xFEL) , 0xE854L) , (-1L)) <= l_567) , p_30))), g_510[p_30][p_30])), p_31)), g_27.f1)) , p_32)), l_465, g_510[p_30][p_30], l_376, g_27.f1), p_32)), l_567)) >= 1L) == 0xC8DED1E4L)) , 0UL)) != 1L), 3))) | 1UL) , (-1L)) , l_569)))) || g_544[2]))) , g_203), l_547, p_31, l_547, p_31) >= l_570);
                }
                l_545 = (0x8CCCL != func_33((l_543 || g_568), (safe_rshift_func_uint16_t_u_s(g_118, (g_61 , (safe_unary_minus_func_uint16_t_u((4L == ((l_393 = (p_31 , p_29)) == g_510[p_30][p_30])))))))));
                for (g_456 = 0; (g_456 <= 3); g_456 += 1)
                {
                    char l_578 = 9L;
                    int l_579 = (-1L);
                    int i, j, k;
                    for (l_465 = 3; (l_465 >= 0); l_465 -= 1)
                    {
                        g_187[7] = ((p_31 = g_64) >= (0UL > l_545));
                    }
                    l_579 = (safe_rshift_func_uint8_t_u_s((func_49(((safe_lshift_func_uint8_t_u_u(l_578, p_30)) | (g_493 >= g_118)), p_32, (func_57(p_29, (l_407[l_408.f0][(p_30 + 2)][g_356] = (+g_356)), p_31) , l_407[3][4][1]), p_29, l_570) , p_30), p_31));
                    g_187[8] = p_32;
                }
            }
            if (g_483[2][0])
                break;
            for (g_118 = 3; (g_118 >= 0); g_118 -= 1)
            {
                unsigned short l_584[7] = {65535UL, 65535UL, 0xAE6BL, 65535UL, 65535UL, 0xAE6BL, 65535UL};
                int i, j, k;
                l_547 = (l_392[(p_30 + 3)][p_30][g_118] <= ((g_351[2][0].f2 <= ((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s(g_510[2][3], (p_29 >= l_392[(p_30 + 3)][p_30][g_118]))) != 0xDEAEL), l_584[5])) , (l_566 & l_547))) && p_32));
                return l_585;
            }
        }
    }
    for (p_29 = 0; (p_29 >= 2); ++p_29)
    {
        struct S0 l_595 = {1UL,0x2F741D52L,0x77L};
        for (l_522 = 0; (l_522 < 52); l_522 = safe_add_func_uint8_t_u_u(l_522, 1))
        {
            short l_594 = 0xD65AL;
            g_544[1] = func_38(g_187[4], func_57(((0x05D6L | g_27.f2) , (safe_lshift_func_int8_t_s_u((g_203 = p_32), g_418[8]))), ((((l_594 = ((func_57((p_32 , 0xC2D85ADDL), (safe_lshift_func_int8_t_s_u((l_392[5][4][0] = p_29), 3)), p_29) <= p_31) || 65533UL)) ^ 0xDD81L) < g_27.f1) == g_483[2][2]), g_74[2]));
            l_595 = l_595;
            for (g_364 = 0; (g_364 <= 3); g_364 += 1)
            {
                int i, j;
                if (g_510[g_364][g_364])
                    break;
                g_544[1] = (g_510[g_364][g_364] , 0L);
            }
            l_595 = l_595;
        }
        l_408 = (g_351[2][0] = g_61);
    }
    return g_351[2][0];
}







static unsigned char func_33(unsigned p_34, unsigned p_35)
{
    const char l_346 = (-8L);
    unsigned l_347 = 18446744073709551613UL;
    unsigned char l_355 = 0x2AL;
    struct S0 l_357 = {65530UL,0x48BCDBA9L,1L};
    for (p_34 = 0; (p_34 <= 8); p_34 += 1)
    {
        int l_345 = 0x548835CBL;
        struct S0 l_354 = {0x11B6L,0xFB8773EDL,0xD0L};
        int i;
        g_187[p_34] = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_187[p_34] != (safe_sub_func_int8_t_s_s((g_61.f2 = g_187[3]), (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((p_34 , ((safe_mod_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_187[p_34], (safe_sub_func_uint32_t_u_u(0UL, (0x4976ADABL ^ ((((safe_lshift_func_int8_t_s_u((l_345 = (p_34 != (g_64 = p_34))), 5)) <= l_346) != g_27.f1) , 1L)))))), p_35)) , l_347)) > 0x7AEF03B1L), g_2)) , g_187[5]), g_187[p_34]))))))), 7L)), p_34)), 0L)) & p_34);
        for (l_345 = 0; (l_345 <= 1); l_345 += 1)
        {
            char l_350 = 0L;
            int i;
            if (g_119[l_345])
                break;
            for (g_61.f2 = 1; (g_61.f2 >= 0); g_61.f2 -= 1)
            {
                struct S0 l_353 = {0xF508L,-6L,6L};
                g_61.f1 = ((((p_34 | ((l_346 ^ ((((g_187[p_34] = ((safe_rshift_func_int8_t_s_u(6L, p_34)) || g_187[p_34])) , 251UL) , 0UL) > g_61.f1)) >= 4294967292UL)) == l_350) , p_34) <= g_27.f2);
                for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                {
                    struct S0 l_352 = {0x25D9L,0x3639A1FCL,0x23L};
                    for (l_347 = 0; (l_347 <= 1); l_347 += 1)
                    {
                        g_351[2][0] = g_61;
                        g_351[2][0] = g_351[2][0];
                        g_351[2][0].f1 = 0x07B2179AL;
                    }
                    l_352 = g_351[2][0];
                    l_353 = l_352;
                }
                l_354 = g_351[0][0];
            }
            g_61 = func_43(p_35, p_34, g_119[l_345], l_355, l_347);
            if (g_356)
                break;
        }
        g_187[p_34] = p_34;
    }
    l_357 = func_43(((!(((func_49((g_27.f1 | (l_357 , (g_74[2] != (l_357.f1 = (safe_mod_func_int16_t_s_s(l_355, (safe_mod_func_uint16_t_u_u(((g_364 = (((g_119[0] , func_43(p_34, l_347, (func_38((safe_sub_func_int16_t_s_s(p_35, (((p_35 <= l_347) <= 3L) , p_34))), p_34) , l_355), g_64, p_34)) , 0x19E4L) | 5L)) , 0x99F2L), g_351[2][0].f0)))))))), g_27.f1, g_27.f2, l_357.f0, g_64) > 255UL) , 6UL) < 0x97E5L)) == g_351[2][0].f0), g_74[4], p_34, p_34, l_346);
    l_357.f1 = p_35;
    return p_35;
}







static short func_38(int p_39, short p_40)
{
    unsigned short l_242[2];
    int l_243[9][10] = {{9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}, {9L, 0xC523401EL, 0xB4BAF5F1L, 0L, 0x1AC3CE05L, 0xF990C31AL, (-1L), 0x47C19EDDL, 4L, (-9L)}};
    struct S0 l_248[1] = {{0x6C3DL,0xF1352EBCL,4L}};
    struct S0 l_249 = {2UL,8L,0xCAL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_242[i] = 0xF7A6L;
    l_249 = (l_248[0] = func_43(l_242[0], (l_243[5][6] = g_119[0]), g_118, p_39, (func_57(g_61.f1, ((safe_lshift_func_uint8_t_u_s(l_242[1], ((safe_lshift_func_int16_t_s_u(l_242[0], 8)) < p_39))) , (g_119[0] & p_39)), p_39) , g_118)));
    if (g_61.f1)
        goto lbl_250;
lbl_250:
    for (p_39 = 1; (p_39 >= 0); p_39 -= 1)
    {
        int i;
        g_61 = g_61;
        return g_119[p_39];
    }
    for (g_61.f2 = 0; (g_61.f2 < (-8)); g_61.f2--)
    {
        unsigned l_253 = 0x9C43DC73L;
        char l_261[3][10] = {{1L, 0x09L, 0x4FL, 0x4FL, 0x09L, 1L, 0x09L, 0x4FL, 0x4FL, 0x09L}, {1L, 0x09L, 0x4FL, 0x4FL, 0x09L, 1L, 0x09L, 0x4FL, 0x4FL, 0x09L}, {1L, 0x09L, 0x4FL, 0x4FL, 0x09L, 1L, 0x09L, 0x4FL, 0x4FL, 0x09L}};
        int l_281 = 0x1680D130L;
        unsigned char l_284 = 0x4BL;
        int i, j;
        l_248[0] = g_27;
        if (((l_253 , (p_39 , 0x78792005L)) , p_39))
        {
            unsigned short l_266[10][3] = {{0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}, {0x91BFL, 0UL, 0x5B00L}};
            char l_285 = 0xDDL;
            struct S0 l_286 = {0x6A23L,0x2193D004L,0L};
            int i, j;
            if (p_39)
                break;
            if ((p_39 = l_253))
            {
                char l_258 = 0x6AL;
                int l_260[9] = {0xF9871668L, 0x8A0E0DACL, 0xF9871668L, 0x8A0E0DACL, 0xF9871668L, 0x8A0E0DACL, 0xF9871668L, 0x8A0E0DACL, 0xF9871668L};
                int l_276 = (-2L);
                struct S0 l_277 = {65534UL,0xCE5F64FCL,0xDBL};
                struct S0 l_278 = {0x8C47L,-1L,7L};
                int i;
                for (g_61.f0 = 0; (g_61.f0 <= 53); ++g_61.f0)
                {
                    int l_259 = 1L;
                    for (l_249.f2 = (-19); (l_249.f2 <= 18); l_249.f2 = safe_add_func_int32_t_s_s(l_249.f2, 3))
                    {
                        unsigned l_275 = 0x3E811AC5L;
                        l_258 = l_253;
                        l_261[2][4] = (l_259 > l_260[2]);
                        p_39 = (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((l_266[6][1] <= (l_276 = ((((((0xDA7329BDL >= (safe_rshift_func_uint16_t_u_s(0xE3BEL, 8))) || ((safe_add_func_int8_t_s_s(p_39, (+((p_40 && ((0x17L <= (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(0xE12AL, 7)), g_74[2])) & (p_39 || 0xAAL)) < g_61.f2)) != l_261[2][4])) , g_2)))) , g_61.f2)) | g_119[1]) && l_275) > p_39) ^ g_119[0]))) <= l_275), 3)), 0x2EL));
                        l_278 = l_277;
                    }
                }
                for (l_258 = 6; (l_258 >= 3); l_258 -= 1)
                {
                    l_248[0] = g_61;
                }
                l_284 = (((0x56AE9266L ^ (safe_mod_func_uint8_t_u_u(p_39, (((l_281 = (l_261[2][4] , g_187[5])) , (g_119[1] || (((((0xD6B8L != (~((l_281 = ((safe_add_func_int16_t_s_s((p_40 = (-6L)), g_61.f0)) , 1L)) & 0x1B35FC2BL))) || l_242[0]) , 0xB3B8L) , p_40) | l_278.f1))) ^ p_39)))) || g_27.f2) | l_277.f0);
                l_285 = (!g_27.f0);
            }
            else
            {
                return l_248[0].f1;
            }
            for (g_203 = 0; (g_203 <= 2); g_203 += 1)
            {
                int l_293 = (-8L);
                l_286 = l_248[0];
                for (l_249.f2 = 0; (l_249.f2 <= 2); l_249.f2 += 1)
                {
                    for (l_285 = 0; (l_285 <= 2); l_285 += 1)
                    {
                        int i, j;
                        l_248[0] = g_27;
                        l_248[0].f1 = (((((safe_rshift_func_int8_t_s_u(l_261[g_203][l_285], p_39)) == (safe_sub_func_uint16_t_u_u(g_61.f2, ((p_39 & (((l_243[5][6] , g_2) ^ ((safe_rshift_func_uint8_t_u_u((l_248[0].f0 | (p_40 , (l_286.f1 = ((g_187[5] && 0x85L) , 0x5325L)))), 1)) & p_40)) ^ p_39)) >= g_119[0])))) && p_39) > 6L) , g_203);
                    }
                    for (g_118 = 0; (g_118 <= 2); g_118 += 1)
                    {
                        if (g_74[4])
                            break;
                    }
                    p_39 = (0xDF3BL >= (p_39 ^ (0x6A3A427FL < (-10L))));
                    if (l_293)
                        break;
                }
            }
        }
        else
        {
            unsigned l_310 = 18446744073709551608UL;
            int l_311 = 0x35D7C608L;
            if ((((safe_lshift_func_int16_t_s_s(0xCEF2L, (g_119[0] = 0x2C78L))) ^ ((l_311 = (safe_lshift_func_int16_t_s_u(0L, (((((g_27.f0 <= (safe_lshift_func_int16_t_s_s((g_61.f0 , (safe_rshift_func_uint8_t_u_u((((g_61.f2 == p_40) || 254UL) & (+(l_281 = ((safe_mod_func_uint16_t_u_u(((((safe_mod_func_int32_t_s_s((g_187[1] = (g_61.f1 = ((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(3UL, 5L)), 0xB2FDL)) , 0L))), p_40)) <= l_310) <= p_39) == g_27.f1), 1UL)) , 65531UL)))), 1))), g_64))) != p_39) && 0xF921L) || l_243[5][6]) & 0x26118C7AL)))) <= p_39)) , g_2))
            {
                if (g_61.f1)
                    break;
            }
            else
            {
                p_39 = 1L;
                for (g_118 = 2; (g_118 >= 0); g_118 -= 1)
                {
                    if (p_39)
                        break;
                }
            }
            if (g_119[0])
                continue;
            l_248[0].f1 = (p_39 = (safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_74[2] , g_187[2]) >= (safe_rshift_func_int8_t_s_u((g_203 = (l_281 = (safe_mod_func_int16_t_s_s(g_118, (((safe_lshift_func_uint16_t_u_s((!0UL), l_310)) , l_248[0].f0) ^ 0x47L))))), 7))), 2)), (l_243[2][9] = (safe_sub_func_uint8_t_u_u((g_61.f2 || (l_243[8][9] == g_74[6])), 0x7FL))))));
        }
    }
    return l_243[8][1];
}







static struct S0 func_43(int p_44, unsigned short p_45, unsigned p_46, int p_47, int p_48)
{
    int l_219 = 0x66AF9433L;
    int l_238 = 0L;
    int l_239 = 0x97F5A8E2L;
    int l_240 = (-1L);
    int l_241 = 0x7685B39BL;
    g_187[5] = ((l_241 = (l_240 = ((safe_mod_func_uint32_t_u_u((((+(safe_sub_func_uint32_t_u_u(0x7F1C4373L, (g_61.f0 != (((safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((((l_219 != (g_119[0] = ((l_239 = (safe_add_func_int32_t_s_s(((g_203 = g_74[0]) ^ ((l_238 = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x64L, 6)), ((((((((safe_rshift_func_uint8_t_u_u(255UL, g_74[3])) == g_61.f0) < (safe_add_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((0xC0AEB2E2L >= l_219), l_219)) >= p_48), (-3L))) ^ 255UL), l_219))) == g_61.f1) <= 0x36L) == l_219) , l_219) ^ l_219))), 15)), p_44))) > l_219)), 0xF4FF7079L))) < 65534UL))) | p_48) >= 0UL), 0UL)), 0x2DF4L)) != p_47) , (-3L)))))) < g_118) , g_61.f0), 5L)) >= l_219))) >= 1L);
    return g_61;
}







static int func_49(unsigned p_50, unsigned short p_51, unsigned p_52, unsigned char p_53, int p_54)
{
    int l_66 = 8L;
    struct S0 l_79 = {0UL,1L,-1L};
    struct S0 l_101 = {0x5427L,-8L,7L};
    unsigned char l_117 = 0x14L;
    struct S0 l_139 = {1UL,0xE84F9EDAL,-5L};
lbl_142:
    l_66 = (-6L);
lbl_102:
    for (g_61.f1 = 0; (g_61.f1 < (-2)); g_61.f1 = safe_sub_func_int16_t_s_s(g_61.f1, 2))
    {
        unsigned short l_73 = 3UL;
        p_54 = (safe_rshift_func_int16_t_s_u(0xC0DDL, 8));
        l_79 = ((safe_rshift_func_int8_t_s_s(((((g_61.f2 | l_73) , (((g_74[2] == g_27.f0) , l_73) > (l_66 > ((g_27.f1 , (((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_73, 1)), g_27.f0)) & g_74[7]) | g_27.f0)) , p_50)))) == p_50) == l_73), 6)) , l_79);
    }
    if ((safe_mod_func_uint8_t_u_u((((((safe_add_func_int32_t_s_s(1L, g_61.f1)) && (g_61.f0 && ((g_2 , (safe_add_func_int16_t_s_s(p_50, ((~((safe_add_func_int8_t_s_s((p_50 , (l_66 | (-3L))), g_74[4])) || (-1L))) != l_79.f1)))) < l_79.f2))) , 1UL) > (-5L)) != g_61.f1), 0x9AL)))
    {
        unsigned short l_92 = 1UL;
        for (g_64 = (-5); (g_64 >= 32); ++g_64)
        {
            return l_79.f1;
        }
        return l_92;
    }
    else
    {
        unsigned l_95[5][1][3] = {{{9UL, 0x2D3B6D3EL, 9UL}}, {{9UL, 0x2D3B6D3EL, 9UL}}, {{9UL, 0x2D3B6D3EL, 9UL}}, {{9UL, 0x2D3B6D3EL, 9UL}}, {{9UL, 0x2D3B6D3EL, 9UL}}};
        int i, j, k;
        for (g_61.f0 = 0; (g_61.f0 < 32); g_61.f0++)
        {
            l_95[4][0][0] = p_51;
        }
    }
    for (l_79.f1 = (-28); (l_79.f1 <= (-18)); l_79.f1 = safe_add_func_int16_t_s_s(l_79.f1, 7))
    {
        struct S0 l_100 = {65527UL,0xB5CEFCB9L,0L};
        unsigned char l_167 = 6UL;
        char l_179 = 0x3EL;
        unsigned char l_180 = 5UL;
        for (p_51 = 0; (p_51 == 4); p_51 = safe_add_func_uint32_t_u_u(p_51, 9))
        {
            int l_107 = 0x60CE0BB6L;
            struct S0 l_140[2] = {{65526UL,0x4DD98C9EL,0L}, {65526UL,0x4DD98C9EL,0L}};
            int i;
            l_101 = l_100;
            if (g_2)
            {
                if (l_79.f2)
                    goto lbl_102;
            }
            else
            {
                int l_120 = (-1L);
                p_54 = g_64;
                for (l_101.f2 = 0; (l_101.f2 != 5); l_101.f2 = safe_add_func_uint8_t_u_u(l_101.f2, 3))
                {
                    short l_138[10][2][7] = {{{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}, {{0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}, {0x1F25L, 0xB34AL, (-5L), 0x5DC0L, 1L, 0x42CCL, 0x369BL}}};
                    int i, j, k;
                    for (p_54 = 13; (p_54 != (-8)); p_54 = safe_sub_func_int16_t_s_s(p_54, 7))
                    {
                        l_100.f1 = (g_61.f1 = l_107);
                    }
                    if (p_53)
                        continue;
                    if ((safe_sub_func_uint8_t_u_u(((!((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((((l_117 = (safe_rshift_func_uint8_t_u_s((g_74[7] > (safe_unary_minus_func_uint8_t_u(p_50))), 6))) < p_54) || (g_61.f1 = g_118)), (((g_119[0] = (p_54 < g_74[2])) , g_61.f0) < (1L <= l_100.f0)))), 5)) <= l_120)) | p_50), g_118)))
                    {
                        char l_125 = 1L;
                        l_139 = (((((g_119[1] = ((p_51 >= (safe_sub_func_int8_t_s_s(p_50, (safe_mod_func_int16_t_s_s(g_61.f0, (l_125 , ((safe_rshift_func_int16_t_s_s((l_100.f1 = (-10L)), 5)) & (safe_lshift_func_int16_t_s_u(2L, 5))))))))) ^ ((safe_lshift_func_int16_t_s_u(0x38B9L, 8)) | (safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((+(g_27.f2 > (((((l_138[9][1][4] & p_50) | 0xE0L) | l_125) <= l_125) | 0x05L))), 0x91DA39B3L)), g_74[4])), l_100.f0))))) >= l_107) != l_138[9][1][4]) , 0x0F4DL) , l_100);
                    }
                    else
                    {
                        unsigned l_141 = 0x38531772L;
                        l_139 = l_140[0];
                        l_141 = l_140[0].f2;
                        if (g_27.f2)
                            goto lbl_142;
                    }
                }
            }
            if (g_27.f1)
            {
                g_61.f1 = g_61.f1;
                if (l_140[0].f1)
                    continue;
                g_61.f1 = p_50;
            }
            else
            {
                struct S0 l_162 = {0x0AE6L,0xE361316CL,0xF0L};
                if ((9UL > (g_119[0] = (safe_mod_func_uint8_t_u_u(0x0DL, (safe_unary_minus_func_uint8_t_u(g_2)))))))
                {
                    int l_160[2][8] = {{9L, (-1L), 0x03636E33L, (-1L), 9L, (-1L), 0x03636E33L, (-1L)}, {9L, (-1L), 0x03636E33L, (-1L), 9L, (-1L), 0x03636E33L, (-1L)}};
                    int l_161[7] = {0L, 0x90C0CC13L, 0L, 0x90C0CC13L, 0L, 0x90C0CC13L, 0L};
                    struct S0 l_170 = {1UL,1L,0x2DL};
                    unsigned short l_171 = 0xB8B9L;
                    int i, j;
                    for (l_139.f0 = 12; (l_139.f0 == 25); l_139.f0 = safe_add_func_int8_t_s_s(l_139.f0, 6))
                    {
                        unsigned l_156 = 0x3FBD44C0L;
                        int l_159 = 2L;
                        l_101 = g_27;
                        l_139.f1 = (l_100.f0 < (((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_s(((g_27.f2 || (func_57((safe_rshift_func_uint16_t_u_u(((((l_156 = (p_52 || (safe_mod_func_uint32_t_u_u((g_61.f2 <= 0x833D7A0CL), p_52)))) , (safe_rshift_func_int8_t_s_u(0x16L, 2))) ^ (g_64 = g_61.f0)) > (~(((l_159 < g_119[1]) & g_118) && (-5L)))), p_51)), g_118, l_160[1][6]) != 4L)) <= (-7L)), 2)), 0x2E7E9FB3L)) == 0xF0CFL) == 0x63L));
                        l_161[3] = l_100.f2;
                        l_162 = g_27;
                    }
                    l_162 = (l_79.f1 , l_140[0]);
                    if (((safe_sub_func_int32_t_s_s((((65535UL < func_57(l_160[1][6], ((l_139 = l_140[0]) , (safe_sub_func_int16_t_s_s(g_74[2], func_57(p_52, p_51, ((func_57(l_167, ((safe_add_func_int8_t_s_s((p_50 == ((g_61.f2 = p_52) && g_61.f0)), 0xFAL)) , 246UL), g_74[2]) > 0x22L) , l_162.f2))))), l_140[0].f0)) < p_51) > p_51), p_51)) ^ l_140[0].f1))
                    {
                        return p_51;
                    }
                    else
                    {
                        g_61 = l_170;
                        g_61.f1 = (l_100.f1 = (-1L));
                        if (l_171)
                            continue;
                        return p_50;
                    }
                }
                else
                {
                    short l_178 = 0x1E6AL;
                    for (l_139.f0 = (-12); (l_139.f0 != 54); l_139.f0 = safe_add_func_uint16_t_u_u(l_139.f0, 4))
                    {
                        unsigned short l_188 = 0xDBD6L;
                        l_100.f1 = (l_140[0].f0 != (func_57(l_162.f0, l_139.f0, (g_74[2] < ((l_162.f1 = p_53) | (((l_140[0].f1 = (safe_lshift_func_int16_t_s_u(func_57((g_64 = func_57((g_119[0] , 0x2A2EA116L), p_51, (safe_lshift_func_uint8_t_u_u(l_178, g_27.f0)))), g_74[2], p_51), l_179))) , g_27.f0) >= l_162.f0)))) & l_180));
                        p_54 = (safe_rshift_func_int16_t_s_s(func_57(((!(l_162.f1 , ((+g_64) | g_119[0]))) >= (func_57(l_100.f0, p_51, (safe_rshift_func_uint16_t_u_s(g_61.f2, 15))) | ((safe_lshift_func_int16_t_s_u((g_118 = (-1L)), 14)) && ((g_187[5] = g_74[7]) , l_188)))), l_107, g_27.f0), 9));
                        l_100 = g_27;
                        return p_50;
                    }
                    return l_107;
                }
            }
            for (g_118 = (-4); (g_118 >= 15); g_118 = safe_add_func_uint8_t_u_u(g_118, 6))
            {
                int l_204 = 0L;
                int l_205[9] = {0xA5E322C8L, (-7L), 0xA5E322C8L, (-7L), 0xA5E322C8L, (-7L), 0xA5E322C8L, (-7L), 0xA5E322C8L};
                int i;
                for (l_100.f0 = 0; (l_100.f0 >= 30); ++l_100.f0)
                {
                    unsigned char l_202[3][10] = {{0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL}, {0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL}, {0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL, 0x86L, 0UL}};
                    int l_210 = 1L;
                    int i, j;
                    for (l_79.f2 = 0; (l_79.f2 <= 26); l_79.f2 = safe_add_func_int16_t_s_s(l_79.f2, 2))
                    {
                        int l_199 = (-1L);
                        g_187[5] = (l_205[6] = (safe_add_func_int16_t_s_s((-1L), ((0x25L || (((l_140[0].f1 = (((g_61.f0 = l_100.f1) , (safe_sub_func_uint8_t_u_u(l_199, (((safe_sub_func_int8_t_s_s(l_202[1][4], ((l_204 = (((((l_202[1][4] != ((0x19L == (p_52 > (g_64 = 0xB8FFC6A7L))) , 0x09L)) > p_52) == g_61.f2) || g_203) & 0UL)) , 0L))) , 0x632CL) >= 0x404AL)))) ^ l_101.f1)) & l_205[6]) , 0UL)) || g_118))));
                    }
                    for (l_107 = 8; (l_107 >= 1); l_107 -= 1)
                    {
                        int i;
                        g_187[l_107] = (p_50 | g_74[5]);
                        l_139.f1 = (l_140[0].f1 = (safe_add_func_int16_t_s_s(g_61.f1, (g_119[0] || p_52))));
                        if (l_107)
                            break;
                        l_210 = (safe_add_func_int32_t_s_s(l_167, p_54));
                    }
                }
            }
        }
        l_100 = (g_61.f0 , l_101);
    }
    return p_50;
}







static char func_57(unsigned p_58, unsigned char p_59, unsigned short p_60)
{
    unsigned char l_62 = 255UL;
    g_61 = g_27;
    l_62 = (-7L);
    g_61 = g_61;
    return p_59;
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
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_13[i], "g_13[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_61.f0, "g_61.f0", print_hash_value);
    transparent_crc(g_61.f1, "g_61.f1", print_hash_value);
    transparent_crc(g_61.f2, "g_61.f2", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_118, "g_118", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_187[i], "g_187[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_203, "g_203", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_351[i][j].f0, "g_351[i][j].f0", print_hash_value);
            transparent_crc(g_351[i][j].f1, "g_351[i][j].f1", print_hash_value);
            transparent_crc(g_351[i][j].f2, "g_351[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_418[i], "g_418[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_456, "g_456", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_483[i][j], "g_483[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_493, "g_493", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_510[i][j], "g_510[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_544[i], "g_544[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_657, "g_657", print_hash_value);
    transparent_crc(g_665.f0, "g_665.f0", print_hash_value);
    transparent_crc(g_665.f1, "g_665.f1", print_hash_value);
    transparent_crc(g_665.f2, "g_665.f2", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_840, "g_840", print_hash_value);
    transparent_crc(g_863, "g_863", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_895, "g_895", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    transparent_crc(g_918.f0, "g_918.f0", print_hash_value);
    transparent_crc(g_918.f1, "g_918.f1", print_hash_value);
    transparent_crc(g_918.f2, "g_918.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
