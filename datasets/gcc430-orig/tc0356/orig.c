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
   unsigned f0 : 16;
   unsigned f1 : 5;
   signed f2 : 19;
   signed f3 : 19;
   signed f4 : 22;
};


static char g_24 = 0x21L;
static short g_38 = 0x5E4DL;
static int g_48 = 0x837E05AFL;
static int *g_47 = &g_48;
static struct S0 g_64 = {96,2,569,-347,-1745};
static struct S0 g_65[4] = {{82,4,344,-640,-836},{82,4,344,-640,-836},{82,4,344,-640,-836},{82,4,344,-640,-836}};
static int g_66[6][1][2] = {{{0x9BFF34F2L,0x9BFF34F2L}},{{0x9BFF34F2L,0x9BFF34F2L}},{{0x9BFF34F2L,0x9BFF34F2L}},{{0x9BFF34F2L,0x9BFF34F2L}},{{0x9BFF34F2L,0x9BFF34F2L}},{{0x9BFF34F2L,0x9BFF34F2L}}};
static char g_79[4] = {0x7FL,0x7FL,0x7FL,0x7FL};
static short g_85[10][2][7] = {{{0xDC17L,0x343BL,(-1L),(-1L),(-7L),(-2L),0xE2BEL},{0x6A1DL,1L,0L,(-1L),(-5L),(-1L),0L}},{{0xAD78L,0xAD78L,0x300AL,0x7260L,1L,0x9BE9L,0x91E3L},{(-5L),(-2L),0x6A1DL,0L,(-5L),1L,0x6A1DL}},{{0xDBF1L,0x18A9L,0xD3ABL,1L,0x300AL,(-7L),0x300AL},{1L,(-2L),(-2L),1L,1L,0L,0L}},{{1L,0xD3ABL,0x18A9L,0xDBF1L,0xE2BEL,0xF730L,(-1L)},{(-5L),4L,0x5AF4L,1L,0xDF46L,1L,0L}},{{(-1L),8L,1L,1L,8L,(-1L),0x300AL},{0x0853L,(-5L),1L,4L,0x1B61L,0x8DEBL,0x6A1DL}},{{0xDC17L,(-1L),0x7E75L,1L,1L,0xAD78L,0x9BE9L},{(-5L),(-5L),1L,0x5D42L,0x5D42L,1L,(-5L)}},{{0xE2BEL,8L,(-2L),0xAD78L,0x91E3L,(-1L),0xF730L},{(-8L),4L,0x6A1DL,1L,0L,0xCCB4L,(-2L)}},{{(-2L),0xD3ABL,0xF730L,0xAD78L,0x7E75L,0x7E75L,0xAD78L},{0xDF46L,(-2L),0xDF46L,0x5D42L,0x6A1DL,(-5L),1L}},{{0L,0x18A9L,0x300AL,1L,(-7L),8L,0x343BL},{(-2L),0x5AF4L,0x6A1DL,1L,4L,0L,0L}},{{0x9BE9L,0x18A9L,(-1L),0x18A9L,0x9BE9L,0x300AL,(-1L)},{1L,0x8DEBL,1L,(-5L),0L,0x6A1DL,(-2L)}}};
static unsigned short g_98 = 0x5786L;
static int g_101 = 1L;
static unsigned g_126 = 4294967295UL;
static unsigned long long g_127 = 0x6CE8D70DEC899BC1LL;
static unsigned long long g_130 = 0x3A76A61A6B3F764ALL;
static unsigned char g_147 = 0x72L;
static unsigned short ***g_167 = (void*)0;
static unsigned char g_249 = 255UL;
static short g_276 = 0x2DA3L;
static const short g_311 = 0x59EBL;
static const short *g_310[8] = {&g_311,&g_311,&g_311,&g_311,&g_311,&g_311,&g_311,&g_311};
static int g_340 = 1L;
static long long g_344 = 0x813A64160D235B5DLL;
static struct S0 *g_349 = &g_64;
static struct S0 *g_350 = &g_65[0];
static char *g_352 = (void*)0;
static char **g_351 = &g_352;
static unsigned short g_371 = 0x268EL;
static int g_374 = 0x80F8FDA9L;



static unsigned long long func_1(void);
static unsigned short func_6(short p_7, long long p_8, struct S0 p_9);
static unsigned func_10(const unsigned p_11, int p_12, const short p_13, unsigned p_14, char p_15);
static long long func_19(unsigned p_20, int p_21, int p_22, unsigned p_23);
static int func_25(unsigned p_26, long long p_27, struct S0 p_28, unsigned p_29);
static unsigned func_32(int p_33);
static unsigned short func_35(short p_36);
static unsigned short func_40(const short * p_41);
static short * func_42(unsigned char p_43);
static int * func_44(const unsigned long long p_45, struct S0 p_46);
static unsigned long long func_1(void)
{
    short l_18 = 0xEE5AL;
    int l_34 = (-1L);
    short *l_37[10][4] = {{&g_38,&g_38,&g_38,&g_38},{&g_38,&g_38,&g_38,&l_18},{&g_38,&g_38,&g_38,&l_18},{&g_38,&l_18,&l_18,&l_18},{&g_38,&g_38,&g_38,&l_18},{&l_18,&g_38,&g_38,&g_38},{&g_38,&g_38,&l_18,&g_38},{&g_38,&g_38,&g_38,&g_38},{&g_38,&g_38,&g_38,&l_18},{&g_38,&g_38,&g_38,&l_18}};
    int l_39 = 0xD8720725L;
    unsigned short l_288 = 0UL;
    struct S0 l_303 = {48,1,-377,-675,342};
    long long *l_343 = &g_344;
    unsigned short *l_370 = &g_98;
    int *l_372 = (void*)0;
    int *l_373 = &g_374;
    int i, j;
    (*l_373) ^= (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_371 = ((+((*l_370) = func_6((~(func_10((((*l_343) = (safe_sub_func_uint64_t_u_u(l_18, (func_19(g_24, func_25(l_18, ((safe_add_func_uint32_t_u_u(func_32(((l_18 || (l_34 == (g_24 & func_35((l_39 = l_18))))) && (func_35((func_40(func_42(((l_18 ^ g_24) && l_18))) > l_288)) || l_18))), 0x9EBD8DD0L)) & l_18), l_303, l_303.f0), g_98, l_34) <= l_303.f2)))) > (-1L)), g_101, l_303.f3, l_288, l_303.f0) > 0L)), l_288, l_303))) && l_303.f3)), l_303.f3)), l_18));
    for (g_126 = 0; (g_126 != 50); ++g_126)
    {
        long long l_377 = (-4L);
        return l_377;
    }
    return (*l_373);
}







static unsigned short func_6(short p_7, long long p_8, struct S0 p_9)
{
    long long l_354[2];
    struct S0 l_366[4] = {{98,3,124,343,-568},{98,3,124,343,-568},{98,3,124,343,-568},{98,3,124,343,-568}};
    int *l_369 = &g_66[4][0][1];
    int i;
    for (i = 0; i < 2; i++)
        l_354[i] = 6L;
    if (l_354[1])
    {
        unsigned l_362 = 0x858311B6L;
        for (g_276 = 1; (g_276 >= 0); g_276 -= 1)
        {
            struct S0 l_355 = {190,3,443,-6,1046};
            int * const l_363 = &g_66[5][0][1];
            for (g_249 = 0; (g_249 <= 0); g_249 += 1)
            {
                for (p_8 = 0; (p_8 >= 0); p_8 -= 1)
                {
                    int i, j, k;
                    g_66[(g_276 + 2)][g_249][g_249] = 1L;
                    if (g_66[(p_8 + 2)][p_8][(g_249 + 1)])
                        break;
                }
                for (g_340 = 2; (g_340 <= 7); g_340 += 1)
                {
                    const char l_356[1][8][8] = {{{0xBCL,0xBCL,0xDCL,1L,0x77L,1L,0xDCL,0xBCL},{0xBCL,0x1EL,(-1L),0xDCL,0xDCL,(-1L),0x1EL,0xBCL},{0x1EL,(-4L),0xBCL,1L,0xBCL,(-4L),0x1EL,0x1EL},{(-4L),0xDCL,0xBCL,0xBCL,0xDCL,1L,0x77L,1L},{0xDCL,1L,0x77L,1L,0xDCL,0xBCL,0xBCL,0xDCL},{1L,(-1L),(-1L),1L,(-4L),0xDCL,(-4L),1L},{(-1L),(-4L),(-1L),0xBCL,0x77L,0x77L,0xBCL,(-1L)},{(-4L),(-4L),0x77L,0xDCL,0x1EL,0xDCL,0x77L,(-4L)}}};
                    int *l_358[3][8][3] = {{{&g_48,&g_66[3][0][1],&g_66[1][0][1]},{(void*)0,&g_48,&g_340},{&g_48,&g_48,(void*)0},{&g_48,(void*)0,&g_48},{&g_66[3][0][1],&g_48,&g_66[3][0][1]},{&g_66[4][0][1],&g_48,(void*)0},{&g_66[2][0][0],&g_66[3][0][1],&g_66[3][0][1]},{(void*)0,&g_66[4][0][1],&g_48}},{{&g_66[1][0][1],&g_66[2][0][0],(void*)0},{(void*)0,(void*)0,&g_340},{&g_66[2][0][0],&g_66[1][0][1],&g_66[1][0][1]},{&g_66[4][0][1],(void*)0,&g_66[4][0][1]},{&g_66[3][0][1],&g_66[2][0][0],&g_48},{&g_48,&g_66[4][0][1],&g_66[4][0][1]},{&g_48,&g_66[3][0][1],&g_66[1][0][1]},{(void*)0,&g_48,&g_340}},{{&g_48,&g_48,(void*)0},{&g_48,(void*)0,&g_48},{&g_66[3][0][1],&g_48,&g_66[2][0][0]},{&g_48,&g_66[1][0][1],&g_340},{&g_66[0][0][0],&g_66[2][0][0],&g_66[2][0][0]},{&g_340,&g_48,(void*)0},{&g_66[3][0][1],&g_66[0][0][0],&g_66[1][0][1]},{&g_340,&g_340,&g_48}}};
                    int l_361 = 0xC0E24B25L;
                    int **l_364[10][5] = {{&g_47,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_358[0][2][0],&l_358[2][1][2],(void*)0,&l_358[2][7][0]},{&l_358[2][7][0],(void*)0,&l_358[1][7][1],(void*)0,&l_358[2][7][0]},{&l_358[2][1][2],(void*)0,&l_358[0][2][0],&l_358[2][7][0],(void*)0},{&l_358[2][7][0],(void*)0,(void*)0,&l_358[2][7][0],(void*)0},{(void*)0,&l_358[0][4][2],&l_358[2][7][0],(void*)0,(void*)0},{&g_47,&l_358[2][7][0],&g_47,(void*)0,&l_358[2][7][0]},{(void*)0,&l_358[0][2][0],&l_358[2][7][0],(void*)0,&l_358[2][7][0]},{&g_47,&g_47,&l_358[1][7][1],&l_358[2][7][0],(void*)0},{&l_358[2][1][2],(void*)0,&l_358[2][7][0],&l_358[2][7][0],(void*)0}};
                    int **l_365 = &l_358[2][7][0];
                    int i, j, k;
                    for (g_344 = 0; (g_344 <= 1); g_344 += 1)
                    {
                        int i, j, k;
                        p_9.f3 ^= g_85[(g_344 + 5)][g_344][(g_344 + 5)];
                        (*g_349) = l_355;
                        g_48 &= (l_356[0][0][7] | (safe_unary_minus_func_int64_t_s((+(((l_358[2][7][0] == &g_66[5][0][1]) != 0xB689L) || (safe_rshift_func_uint8_t_u_s(l_354[1], l_361)))))));
                        if (l_362)
                            break;
                    }
                    (*l_365) = l_363;
                }
            }
        }
    }
    else
    {
        int *l_367[7][1] = {{&g_340},{&g_340},{&g_340},{&g_340},{&g_340},{&g_340},{&g_340}};
        int **l_368[2][2][5];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 5; k++)
                    l_368[i][j][k] = &g_47;
            }
        }
        p_9.f2 &= 0x5A8B7693L;
        (*g_350) = l_366[2];
        g_64.f4 = (p_9.f4 &= p_8);
        l_369 = l_367[1][0];
    }
    return (*l_369);
}







static unsigned func_10(const unsigned p_11, int p_12, const short p_13, unsigned p_14, char p_15)
{
    const int l_345 = 7L;
    int *l_346 = &g_340;
    struct S0 *l_347 = &g_64;
    struct S0 **l_348[10];
    char ***l_353[6] = {&g_351,&g_351,&g_351,&g_351,&g_351,&g_351};
    int i;
    for (i = 0; i < 10; i++)
        l_348[i] = (void*)0;
    for (g_38 = 0; g_38 < 10; g_38 += 1)
    {
        for (g_130 = 0; g_130 < 2; g_130 += 1)
        {
            for (g_147 = 0; g_147 < 7; g_147 += 1)
            {
                g_85[g_38][g_130][g_147] = 0xB1E2L;
            }
        }
    }
    (*l_346) |= l_345;
    g_350 = (g_349 = (l_347 = &g_65[2]));
    g_351 = g_351;
    return (*l_346);
}







static long long func_19(unsigned p_20, int p_21, int p_22, unsigned p_23)
{
    short l_305 = 0L;
    int *l_313 = &g_66[1][0][1];
    unsigned short *l_317 = &g_98;
    int *l_339[4];
    int **l_341 = (void*)0;
    int **l_342 = &l_313;
    int i;
    for (i = 0; i < 4; i++)
        l_339[i] = &g_340;
    if (l_305)
    {
        struct S0 l_308 = {211,0,146,-286,-928};
        const short *l_309 = (void*)0;
        unsigned long long *l_312 = &g_127;
        for (g_127 = 0; (g_127 >= 40); g_127 = safe_add_func_uint32_t_u_u(g_127, 9))
        {
            g_65[0] = l_308;
        }
        l_313 = &p_22;
    }
    else
    {
        unsigned short *l_316 = (void*)0;
        unsigned short **l_318 = &l_317;
        short *l_323[3];
        int *l_326 = &g_48;
        int i;
        for (i = 0; i < 3; i++)
            l_323[i] = &g_38;
        (*l_326) |= (0x4682L ^ ((p_22 = 3L) > ((safe_add_func_int16_t_s_s(((l_316 == ((*l_318) = l_317)) & (safe_rshift_func_uint16_t_u_u(p_23, 0))), ((*l_313) != (safe_rshift_func_int16_t_s_s((g_85[1][1][2] |= (p_21 & (*l_313))), (safe_lshift_func_uint8_t_u_s(255UL, 7))))))) ^ p_23)));
    }
    g_64.f3 &= func_32(func_32(((((safe_add_func_uint16_t_u_u(func_35((safe_add_func_uint32_t_u_u(g_48, (!(safe_rshift_func_uint16_t_u_u(p_20, ((safe_add_func_uint64_t_u_u(p_21, 1L)) ^ (func_35((safe_mod_func_uint16_t_u_u((((g_24 < (g_48 >= 0x8AL)) && (safe_mod_func_uint16_t_u_u((g_127 && p_20), (*l_313)))) == p_22), 1UL))) >= p_20)))))))), (*l_313))) > p_21) ^ (*l_313)) != p_22)));
    (*l_342) = l_339[3];
    return p_23;
}







static int func_25(unsigned p_26, long long p_27, struct S0 p_28, unsigned p_29)
{
    struct S0 *l_304[3];
    int i;
    for (i = 0; i < 3; i++)
        l_304[i] = &g_65[0];
    g_65[3] = p_28;
    g_64 = g_65[1];
    return g_79[0];
}







static unsigned func_32(int p_33)
{
    unsigned *l_291 = (void*)0;
    unsigned *l_292 = &g_126;
    char l_293 = 0x1DL;
    int **l_294 = (void*)0;
    int **l_295 = &g_47;
    unsigned short l_300[1][9] = {{1UL,0x2FD1L,1UL,0x2FD1L,1UL,0x2FD1L,1UL,0x2FD1L,1UL}};
    const short *l_301[8][8] = {{&g_276,&g_38,&g_276,&g_276,(void*)0,&g_276,&g_38,&g_85[1][1][2]},{&g_276,&g_38,&g_276,&g_276,&g_276,&g_276,&g_38,&g_276},{&g_276,&g_276,(void*)0,&g_85[1][1][2],&g_38,&g_38,&g_276,&g_38},{&g_85[1][1][2],&g_38,&g_85[1][1][2],&g_38,&g_85[1][1][2],&g_38,&g_276,&g_38},{&g_38,&g_276,&g_38,&g_85[1][1][2],&g_276,&g_276,&g_85[1][1][2],&g_38},{&g_38,&g_38,&g_38,&g_276,(void*)0,&g_276,&g_276,&g_38},{&g_276,&g_276,&g_85[1][1][2],&g_38,&g_85[1][1][2],&g_276,&g_276,&g_38},{&g_276,&g_276,(void*)0,&g_276,&g_38,&g_38,&g_38,&g_38}};
    unsigned char *l_302 = &g_249;
    int i, j;
    l_293 = (safe_mod_func_uint32_t_u_u((p_33 > p_33), ((*l_292) &= 0x9ECA4B76L)));
    (*l_295) = l_291;
    g_48 |= p_33;
    g_66[1][0][1] &= ((safe_rshift_func_uint8_t_u_s(((*l_302) = (safe_mod_func_int16_t_s_s((-1L), p_33))), (func_35(p_33) < p_33))) ^ 255UL);
    return g_126;
}







static unsigned short func_35(short p_36)
{
    return g_24;
}







static unsigned short func_40(const short * p_41)
{
    int l_261 = 0xFA59681AL;
    short * const l_262 = &g_85[1][1][2];
    unsigned short l_264[8][6] = {{65534UL,2UL,2UL,2UL,65534UL,2UL},{2UL,65534UL,2UL,0xDABBL,0xDABBL,2UL},{0xDABBL,0xDABBL,2UL,65534UL,2UL,2UL},{65534UL,2UL,2UL,2UL,65534UL,2UL},{2UL,65534UL,2UL,0xDABBL,0xDABBL,2UL},{0xDABBL,0xDABBL,2UL,65534UL,2UL,2UL},{65534UL,2UL,2UL,65534UL,0xDABBL,65528UL},{65534UL,0xDABBL,65528UL,2UL,2UL,65528UL}};
    int **l_286 = &g_47;
    int *l_287[4] = {&g_66[5][0][1],&g_66[5][0][1],&g_66[5][0][1],&g_66[5][0][1]};
    int i, j;
    for (g_127 = 0; (g_127 <= 3); g_127 += 1)
    {
        int l_256 = 0x97F58E8FL;
        int l_279 = 0x27664DF7L;
        int i;
        l_256 = g_79[g_127];
        for (g_48 = 3; (g_48 >= 0); g_48 -= 1)
        {
            unsigned l_263 = 0x6A70711BL;
            int *l_282 = &l_256;
            int *l_285 = (void*)0;
            if ((((((safe_lshift_func_uint8_t_u_u(((0x9CL || (((safe_add_func_int64_t_s_s((+(-6L)), (l_261 = l_261))) < ((void*)0 != l_262)) && (l_263 >= (l_264[0][2] & g_79[g_127])))) && func_35(((*l_262) &= g_38))), 7)) >= 0x124BL) != 1L) <= l_263) > l_263))
            {
                unsigned short l_277 = 9UL;
                if (l_264[6][2])
                    break;
                if (func_35(l_261))
                {
                    unsigned long long l_265 = 18446744073709551608UL;
                    return l_265;
                }
                else
                {
                    int *l_266 = &l_256;
                    if (((*l_266) ^= (*g_47)))
                    {
                        short *l_275[5][10][5] = {{{&g_85[9][0][1],&g_38,&g_85[5][0][1],&g_38,&g_38},{&g_38,&g_38,&g_38,&g_85[4][0][2],&g_38},{&g_85[5][0][0],&g_38,&g_38,&g_38,&g_38},{&g_85[1][1][2],&g_38,&g_276,&g_85[4][0][2],(void*)0},{&g_38,&g_276,&g_85[3][0][0],&g_38,&g_85[9][0][1]},{&g_38,&g_85[4][0][2],&g_38,&g_85[5][1][2],&g_38},{&g_38,&g_38,&g_85[5][0][1],&g_276,&g_85[5][0][0]},{&g_85[1][1][2],&g_38,(void*)0,&g_38,&g_85[1][1][2]},{&g_85[5][0][0],&g_276,&g_85[5][0][1],&g_38,&g_38},{&g_38,&g_85[5][1][2],&g_38,&g_85[4][0][2],&g_38}},{{&g_85[9][0][1],&g_38,&g_85[3][0][0],&g_276,&g_38},{(void*)0,&g_85[4][0][2],&g_276,&g_38,&g_85[1][1][2]},{&g_38,&g_38,&g_38,&g_38,&g_85[5][0][0]},{&g_38,&g_85[4][0][2],&g_38,&g_38,&g_38},{&g_38,&g_38,&g_85[5][0][1],&g_38,&g_85[9][0][1]},{&g_85[1][1][2],&g_85[5][1][2],&g_276,&g_38,(void*)0},{&g_85[9][0][1],&g_276,(void*)0,&g_38,&g_38},{&g_38,&g_85[5][1][2],&g_38,(void*)0,&g_38},{&g_85[5][0][0],&g_85[1][1][2],&g_85[3][0][0],&g_38,&g_85[1][1][2]},{(void*)0,&g_38,&g_85[1][1][2],&g_38,(void*)0}},{{&g_85[1][1][2],&g_38,&g_85[3][0][0],&g_85[1][1][2],&g_85[5][0][0]},{&g_38,(void*)0,&g_38,&g_85[5][1][2],&g_38},{&g_38,&g_38,(void*)0,&g_38,&g_85[5][0][0]},{&g_276,&g_85[5][1][2],(void*)0,&g_85[1][1][2],(void*)0},{&g_85[5][0][0],&g_85[3][0][0],&g_85[1][1][2],&g_38,&g_85[1][1][2]},{&g_38,&g_85[5][1][2],&g_38,&g_38,&g_38},{(void*)0,&g_38,&g_85[3][0][0],&g_85[3][0][0],&g_38},{(void*)0,(void*)0,(void*)0,&g_38,&g_276},{&g_38,&g_38,&g_276,&g_38,&g_85[5][0][0]},{&g_38,&g_38,&g_38,&g_85[1][1][2],&g_38}},{{&g_38,&g_85[1][1][2],&g_85[1][1][2],&g_38,(void*)0},{(void*)0,&g_85[5][1][2],&g_85[1][1][2],&g_85[5][1][2],(void*)0},{(void*)0,&g_38,&g_85[1][1][2],&g_85[1][1][2],&g_38},{&g_38,&g_85[1][1][2],&g_38,&g_38,&g_38},{&g_85[5][0][0],&g_38,&g_276,&g_38,&g_38},{&g_276,&g_38,(void*)0,(void*)0,(void*)0},{&g_38,&g_85[3][0][0],&g_85[3][0][0],&g_38,(void*)0},{&g_38,&g_38,&g_38,&g_85[5][1][2],&g_38},{&g_85[1][1][2],&g_38,&g_85[1][1][2],&g_85[3][0][0],&g_85[5][0][0]},{(void*)0,&g_85[1][1][2],(void*)0,&g_85[5][1][2],&g_276}},{{&g_85[5][0][0],&g_38,(void*)0,&g_38,&g_38},{&g_38,&g_85[5][1][2],&g_38,(void*)0,&g_38},{&g_85[5][0][0],&g_85[1][1][2],&g_85[3][0][0],&g_38,&g_85[1][1][2]},{(void*)0,&g_38,&g_85[1][1][2],&g_38,(void*)0},{&g_85[1][1][2],&g_38,&g_85[3][0][0],&g_85[1][1][2],&g_85[5][0][0]},{&g_38,(void*)0,&g_38,&g_85[5][1][2],&g_38},{&g_38,&g_38,(void*)0,&g_38,&g_85[5][0][0]},{&g_276,&g_85[5][1][2],(void*)0,&g_85[1][1][2],(void*)0},{&g_85[5][0][0],&g_85[3][0][0],&g_85[1][1][2],&g_38,&g_85[1][1][2]},{&g_38,&g_85[5][1][2],&g_38,&g_38,&g_38}}};
                        int l_278 = 0xA2A62F15L;
                        int *l_280 = &g_66[1][0][1];
                        int i, j, k;
                        (*l_266) = l_263;
                        (*l_280) &= (((safe_mod_func_int16_t_s_s(0x6B3EL, (*l_266))) > (l_279 ^= (((((g_38 ^ (safe_lshift_func_int8_t_s_u(((func_35(l_256) & (func_35((*p_41)) & (safe_sub_func_int16_t_s_s((+(l_277 = (safe_add_func_int16_t_s_s(((*p_41) <= func_35(((*l_266) | (*g_47)))), (*p_41))))), 65530UL)))) || (*g_47)), g_85[1][0][2]))) < l_278) > l_261) > g_24) != 0x662EA837A7E7F28ELL))) != g_79[g_127]);
                    }
                    else
                    {
                        (*l_266) &= (*g_47);
                        return g_130;
                    }
                    return l_261;
                }
            }
            else
            {
                int **l_281 = &g_47;
                l_282 = ((*l_281) = &l_261);
                (*g_47) = func_35(g_79[g_127]);
                (**l_281) |= (safe_rshift_func_int16_t_s_s(func_35((*p_41)), (*p_41)));
            }
            g_64.f2 &= l_261;
        }
    }
    (*l_286) = &l_261;
    g_64.f4 = ((**l_286) = ((**l_286) < (**l_286)));
    return g_66[1][0][1];
}







static short * func_42(unsigned char p_43)
{
    short *l_49 = &g_38;
    unsigned char l_56[8][6][5] = {{{8UL,6UL,255UL,0xEAL,0x4CL},{0x56L,0x20L,252UL,3UL,255UL},{0x4CL,255UL,255UL,0UL,0x1EL},{0UL,0x78L,0x77L,0xB5L,255UL},{0x6AL,0UL,0UL,0xBEL,0xDAL},{0x0DL,0x6AL,0x01L,0xDBL,0x1EL}},{{249UL,0x1EL,255UL,255UL,5UL},{0UL,255UL,0x90L,255UL,249UL},{0x57L,0x61L,0x4CL,0xDBL,6UL},{252UL,0xDAL,255UL,0xBEL,6UL},{0x23L,255UL,0x56L,6UL,255UL},{0x4AL,1UL,255UL,252UL,6UL}},{{0xD5L,0x4AL,255UL,8UL,0UL},{1UL,0x78L,6UL,0UL,0UL},{0xEAL,0x57L,0xD5L,0x57L,0xEAL},{0xB6L,5UL,0x57L,0xA0L,252UL},{7UL,0UL,0xAAL,1UL,3UL},{0x56L,8UL,255UL,5UL,252UL}},{{0xAFL,1UL,0UL,255UL,0xEAL},{252UL,0x69L,0xC3L,1UL,0UL},{0x4CL,0xC3L,0xD7L,6UL,0UL},{255UL,253UL,6UL,255UL,6UL},{255UL,1UL,0x86L,1UL,255UL},{6UL,0xBFL,252UL,0xD5L,3UL}},{{0x4AL,0x4CL,255UL,0x69L,0xD7L},{0x4CL,0xE8L,255UL,0xDBL,0x1EL},{0x4CL,1UL,249UL,0xBFL,0xBEL},{0x4CL,0x77L,1UL,0xA0L,6UL},{0x4CL,0xEAL,255UL,6UL,8UL},{0x4AL,0xD9L,252UL,252UL,0xFCL}},{{255UL,0UL,6UL,0xDAL,0x13L},{0x61L,255UL,0x69L,0x78L,0xB5L},{0xFCL,255UL,6UL,0xD9L,0x61L},{0x01L,254UL,0x18L,5UL,0x18L},{0x78L,0x78L,0xA3L,252UL,0UL},{252UL,0x18L,3UL,0UL,0x78L}},{{254UL,255UL,0xBFL,249UL,1UL},{0x78L,0x18L,255UL,255UL,0x57L},{249UL,0x78L,0x56L,0x4DL,0xDBL},{255UL,254UL,0x77L,2UL,0x4CL},{0x7BL,255UL,0UL,0x56L,0UL},{252UL,255UL,1UL,0x86L,1UL}},{{0xDBL,0UL,0x4AL,3UL,0xFCL},{0x78L,6UL,3UL,0xE4L,249UL},{254UL,0UL,1UL,0x86L,0xE9L},{0xA3L,1UL,6UL,0x4CL,1UL},{1UL,248UL,6UL,0x90L,0UL},{0x69L,0xDBL,1UL,254UL,0UL}}};
    int l_63 = 0x3630DD35L;
    int *l_255 = &g_48;
    int i, j, k;
    l_255 = func_44(((p_43 != (((*l_49) = (~((void*)0 == g_47))) || (safe_unary_minus_func_uint16_t_u((l_63 = (!(safe_mod_func_uint16_t_u_u((0xDEC53312A7FAD540LL >= (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(l_56[5][1][1], 2))))), (((*g_47) = ((((safe_sub_func_int16_t_s_s((0L | (safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((&g_38 != (void*)0), l_56[6][3][3])), g_38))), l_56[5][1][1])) & 6UL) | 18446744073709551611UL) && g_38)) || 0x093F7740L))))))))) != g_24), g_64);
    return &g_85[1][1][2];
}







static int * func_44(const unsigned long long p_45, struct S0 p_46)
{
    int *l_67[2];
    unsigned l_86 = 0x9573D52BL;
    int ***l_144 = (void*)0;
    long long l_151 = 0L;
    unsigned short *l_166 = &g_98;
    unsigned short **l_165 = &l_166;
    unsigned short ***l_164 = &l_165;
    char l_222[2];
    unsigned char *l_244 = (void*)0;
    unsigned l_250 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_67[i] = &g_66[3][0][1];
    for (i = 0; i < 2; i++)
        l_222[i] = 0x75L;
    for (g_48 = 3; (g_48 >= 0); g_48 -= 1)
    {
        short *l_70 = &g_38;
        int l_75 = 0L;
        char *l_78 = &g_79[0];
        char l_82[4][8] = {{7L,0L,0L,0xD0L,0L,0L,7L,7L},{0L,0xD0L,0x2CL,0x2CL,0xD0L,0L,0L,0L},{0xD0L,0L,0L,0L,0xD0L,0x2CL,0x2CL,0xD0L},{0L,7L,7L,0L,0L,0xD0L,0L,0L}};
        short *l_83 = (void*)0;
        short *l_84 = &g_85[1][1][2];
        const int * const l_152 = (void*)0;
        unsigned *l_221 = &g_126;
        int i, j;
        for (g_38 = 3; (g_38 >= 0); g_38 -= 1)
        {
            int **l_69 = &l_67[0];
            int ***l_68 = &l_69;
            for (g_66[1][0][1] = 3; (g_66[1][0][1] >= 0); g_66[1][0][1] -= 1)
            {
                return l_67[1];
            }
            if (p_46.f0)
                break;
            (*l_68) = &g_47;
        }
    }
    g_64.f3 |= ((*g_47) = ((p_46.f4 != func_35(func_35(g_64.f0))) >= (g_64.f2 >= l_222[1])));
    for (g_147 = 0; (g_147 <= 11); ++g_147)
    {
        int *l_225[4][2] = {{&g_66[1][0][0],&g_66[1][0][0]},{&g_66[1][0][0],&g_66[1][0][0]},{&g_66[1][0][0],&g_66[1][0][0]},{&g_66[1][0][0],&g_66[1][0][0]}};
        int i, j;
        return l_225[0][0];
    }
    for (g_147 = 21; (g_147 >= 15); g_147 = safe_sub_func_int64_t_s_s(g_147, 1))
    {
        const int *l_228 = &g_66[5][0][1];
        const int **l_229 = &l_228;
        unsigned long long l_230 = 0xF70791D89197F5A8LL;
        int l_235 = 0x5489C1C6L;
        unsigned char *l_243 = &g_147;
        unsigned char **l_242 = &l_243;
        unsigned char *l_245 = (void*)0;
        unsigned char *l_246 = (void*)0;
        unsigned char *l_247 = (void*)0;
        unsigned char *l_248 = &g_249;
        (*l_229) = l_228;
        g_64.f3 |= (l_230 != ((safe_rshift_func_int16_t_s_u((((safe_add_func_int8_t_s_s(((l_235 && g_66[1][0][1]) > ((*l_248) = ((((safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s(((void*)0 == g_167), 12)) & ((g_64.f4 >= 0x18F1L) || (((*l_242) = &g_147) == l_244))), 18446744073709551606UL)), g_24)) & p_46.f3) >= g_98) == 0x01E5B4BAL))), 255UL)) < l_250) || (*g_47)), (**l_229))) >= (-5L)));
        g_64.f2 ^= ((*g_47) = (safe_sub_func_int8_t_s_s((*l_228), (0x6DD6E431L & (safe_mod_func_int32_t_s_s(0x8DA6C3DDL, (*g_47)))))));
    }
    return l_67[1];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_64.f0, "g_64.f0", print_hash_value);
    transparent_crc(g_64.f1, "g_64.f1", print_hash_value);
    transparent_crc(g_64.f2, "g_64.f2", print_hash_value);
    transparent_crc(g_64.f3, "g_64.f3", print_hash_value);
    transparent_crc(g_64.f4, "g_64.f4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_65[i].f0, "g_65[i].f0", print_hash_value);
        transparent_crc(g_65[i].f1, "g_65[i].f1", print_hash_value);
        transparent_crc(g_65[i].f2, "g_65[i].f2", print_hash_value);
        transparent_crc(g_65[i].f3, "g_65[i].f3", print_hash_value);
        transparent_crc(g_65[i].f4, "g_65[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_66[i][j][k], "g_66[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_85[i][j][k], "g_85[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_340, "g_340", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
