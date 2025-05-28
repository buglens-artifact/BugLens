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
   char f0;
   unsigned f1;
   char f2;
   int f3;
   volatile int f4;
};


static volatile int g_3[5][1][5] = {{{0L, 0x6EC79CF1L, (-1L), 0x95364446L, 0x95364446L}}, {{0L, 0x6EC79CF1L, (-1L), 0x95364446L, 0x95364446L}}, {{0L, 0x6EC79CF1L, (-1L), 0x95364446L, 0x95364446L}}, {{0L, 0x6EC79CF1L, (-1L), 0x95364446L, 0x95364446L}}, {{0L, 0x6EC79CF1L, (-1L), 0x95364446L, 0x95364446L}}};
static volatile int g_4 = 0x946507E6L;
static int g_5 = 0x92C5EB20L;
static int g_78 = 0x474C77A5L;
static long long g_84 = 0x36CA9A47FA8275BALL;
static char g_89 = 0x29L;
static int g_94 = 0xF1140913L;
static unsigned char g_95 = 251UL;
static unsigned g_105 = 4294967295UL;
static char g_115 = 0xB1L;
static char g_116 = 1L;
static unsigned g_125 = 0xB4F51244L;
static int g_140 = 1L;
static long long g_147 = 0x70163A679AE65B8CLL;
static unsigned g_154 = 4294967295UL;
static char g_155 = 0L;
static short g_157 = 0L;
static unsigned long long g_158 = 18446744073709551606UL;
static unsigned char g_174 = 0xC5L;
static short g_204 = 0x1139L;
static unsigned g_206 = 0x68102DB9L;
static unsigned short g_211 = 0xAAFFL;
static unsigned long long g_246 = 18446744073709551610UL;
static struct S0 g_268 = {1L,4294967295UL,9L,1L,0L};
static struct S0 g_269 = {0xEAL,1UL,-1L,0x8132174BL,0L};
static volatile struct S0 g_270 = {0xAEL,1UL,-5L,0x2C8B667AL,0L};
static volatile struct S0 g_271[1][6] = {{{-1L,0x54B6F45FL,0xBAL,0xB4AAB06BL,-10L}, {-1L,0x54B6F45FL,0xBAL,0xB4AAB06BL,-10L}, {-1L,0x54B6F45FL,0xBAL,0xB4AAB06BL,-10L}, {-1L,0x54B6F45FL,0xBAL,0xB4AAB06BL,-10L}, {-1L,0x54B6F45FL,0xBAL,0xB4AAB06BL,-10L}, {-1L,0x54B6F45FL,0xBAL,0xB4AAB06BL,-10L}}};
static struct S0 g_272 = {-7L,1UL,0x5EL,0xBF458E13L,0x8D3250E5L};
static struct S0 g_273 = {0xBAL,0xFD385860L,1L,0x51E65B8EL,0L};
static struct S0 g_330[10] = {{-2L,4294967295UL,-3L,-3L,0xE4D1A800L}, {0xFBL,0xCDF532A4L,0xE7L,0x04C714D6L,0x9F77C5E9L}, {-2L,4294967295UL,-3L,-3L,0xE4D1A800L}, {0xFBL,0xCDF532A4L,0xE7L,0x04C714D6L,0x9F77C5E9L}, {-2L,4294967295UL,-3L,-3L,0xE4D1A800L}, {0xFBL,0xCDF532A4L,0xE7L,0x04C714D6L,0x9F77C5E9L}, {-2L,4294967295UL,-3L,-3L,0xE4D1A800L}, {0xFBL,0xCDF532A4L,0xE7L,0x04C714D6L,0x9F77C5E9L}, {-2L,4294967295UL,-3L,-3L,0xE4D1A800L}, {0xFBL,0xCDF532A4L,0xE7L,0x04C714D6L,0x9F77C5E9L}};
static struct S0 g_331 = {1L,0xC3E3A944L,-10L,1L,-1L};
static unsigned short g_348 = 3UL;
static struct S0 g_357 = {0x3AL,4294967295UL,7L,0x7D9B99ADL,0xB456CCBCL};
static struct S0 g_358 = {-2L,0UL,0x81L,0x6355D4E9L,3L};
static struct S0 g_359 = {0x91L,0x2195163EL,0L,0x5A29FD0DL,1L};
static int g_374 = 0xAC6D7CA5L;
static struct S0 g_395 = {0xC9L,1UL,0L,0xC66AD1BEL,0x3329FD5DL};
static struct S0 g_406 = {0xD6L,0UL,1L,0xD2DA71E5L,0x39972AAAL};
static struct S0 g_407 = {1L,4294967290UL,-9L,0L,0x02AA44B9L};
static volatile struct S0 g_408 = {0x1EL,0x054F9480L,0xA0L,7L,0x2C22F8CDL};
static struct S0 g_418 = {0x30L,0UL,0x62L,0xAA342D9FL,-1L};
static unsigned short g_450[9] = {0x8848L, 0xAD65L, 0x8848L, 0xAD65L, 0x8848L, 0xAD65L, 0x8848L, 0xAD65L, 0x8848L};
static long long g_471 = 0L;
static short g_472 = 0x9A8EL;
static unsigned short g_474 = 1UL;
static volatile struct S0 g_493 = {-7L,1UL,-1L,7L,-1L};
static volatile struct S0 g_494 = {0xEBL,2UL,-1L,0L,-8L};
static unsigned long long g_522[1] = {4UL};
static volatile struct S0 g_525 = {0L,4294967295UL,-2L,0xCCCDE696L,1L};
static volatile char g_537 = 0xEAL;
static volatile long long g_566 = 0xFB56C652D444DE94LL;
static volatile struct S0 g_672 = {0x66L,4294967292UL,0xFCL,0x8C6FFDB6L,1L};
static volatile struct S0 g_673 = {-3L,1UL,-10L,0xC4C8C3EEL,0x7445AB4CL};
static struct S0 g_710 = {0xB6L,4294967293UL,-1L,5L,0xB7E0530EL};
static struct S0 g_711 = {0x0BL,4294967295UL,0xD6L,0x5CFECC03L,1L};
static struct S0 g_747 = {-1L,0x593F7225L,-10L,9L,1L};
static char g_765 = (-1L);
static volatile struct S0 g_848 = {0x9EL,0xFEC1E2EEL,0x9AL,3L,9L};
static volatile struct S0 g_849 = {0x69L,4294967295UL,0x92L,-3L,-10L};
static volatile struct S0 g_881 = {0x19L,0x00C34CBEL,0L,0x0ECD99DEL,0xD87471E3L};
static volatile struct S0 g_882 = {-8L,0x1D75B935L,-1L,0x6831C39EL,1L};
static struct S0 g_962[8][7] = {{{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}, {{1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {-1L,7UL,0xB0L,1L,0x0D1A3887L}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}, {1L,0xB5BD67C8L,0x89L,0x2D4E3BFBL,0x33A1CA5AL}, {7L,0x5446C630L,-1L,-10L,0xA0002FD6L}}};
static struct S0 g_963 = {7L,4294967295UL,0L,1L,0x7839F3EAL};
static unsigned g_998 = 0xEA03B980L;
static struct S0 g_1004 = {0L,4294967294UL,0xECL,0L,-7L};
static volatile struct S0 g_1049 = {0x75L,4294967286UL,-8L,0xF2F77BEAL,0xDB7E94E7L};
static struct S0 g_1070 = {0xC8L,0xFADF83A9L,0L,1L,1L};
static struct S0 g_1071[5][5] = {{{0xA0L,0UL,0x98L,0L,-6L}, {1L,0x2771DF8AL,0xD7L,4L,-2L}, {0x3FL,4294967294UL,4L,7L,-1L}, {0L,4294967287UL,1L,1L,0x07681C3BL}, {0x10L,0UL,0xAAL,-10L,0L}}, {{0xA0L,0UL,0x98L,0L,-6L}, {1L,0x2771DF8AL,0xD7L,4L,-2L}, {0x3FL,4294967294UL,4L,7L,-1L}, {0L,4294967287UL,1L,1L,0x07681C3BL}, {0x10L,0UL,0xAAL,-10L,0L}}, {{0xA0L,0UL,0x98L,0L,-6L}, {1L,0x2771DF8AL,0xD7L,4L,-2L}, {0x3FL,4294967294UL,4L,7L,-1L}, {0L,4294967287UL,1L,1L,0x07681C3BL}, {0x10L,0UL,0xAAL,-10L,0L}}, {{0xA0L,0UL,0x98L,0L,-6L}, {1L,0x2771DF8AL,0xD7L,4L,-2L}, {0x3FL,4294967294UL,4L,7L,-1L}, {0L,4294967287UL,1L,1L,0x07681C3BL}, {0x10L,0UL,0xAAL,-10L,0L}}, {{0xA0L,0UL,0x98L,0L,-6L}, {1L,0x2771DF8AL,0xD7L,4L,-2L}, {0x3FL,4294967294UL,4L,7L,-1L}, {0L,4294967287UL,1L,1L,0x07681C3BL}, {0x10L,0UL,0xAAL,-10L,0L}}};
static volatile struct S0 g_1121 = {0L,0x899E13C8L,-8L,-2L,0L};
static volatile struct S0 g_1122 = {0x9DL,7UL,2L,-7L,1L};
static volatile struct S0 g_1183 = {0x50L,0x18544C4BL,0x4EL,6L,0x6B58771CL};
static struct S0 g_1184[5] = {{-6L,0x1B57C72BL,-1L,-4L,0xFE81FDB9L}, {0x02L,0UL,-8L,-8L,0x029B21FEL}, {-6L,0x1B57C72BL,-1L,-4L,0xFE81FDB9L}, {0x02L,0UL,-8L,-8L,0x029B21FEL}, {-6L,0x1B57C72BL,-1L,-4L,0xFE81FDB9L}};
static struct S0 g_1186 = {0L,1UL,3L,4L,0x79663B89L};
static struct S0 g_1191 = {0x7BL,0UL,0xC0L,0xF08631B5L,0x62996701L};
static char g_1206 = (-3L);
static volatile struct S0 g_1230[3] = {{0xBBL,0xC796D0BAL,0x16L,6L,-5L}, {0xBBL,0xC796D0BAL,0x16L,6L,-5L}, {0xBBL,0xC796D0BAL,0x16L,6L,-5L}};
static volatile struct S0 g_1231 = {-1L,0x5B56BC9EL,1L,1L,6L};
static unsigned g_1268 = 0x2C378AE9L;
static int g_1292[7][2][6] = {{{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}, {{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}, {{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}, {{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}, {{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}, {{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}, {{0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}, {0x220EC379L, 0x59464591L, (-2L), 0xDBEA9249L, (-2L), 0x59464591L}}};
static volatile struct S0 g_1469 = {1L,4294967288UL,0x44L,2L,0x997EC4CFL};
static unsigned char g_1520[2] = {0xB5L, 0xB5L};
static struct S0 g_1566 = {0x7DL,0xD218E023L,-1L,0xE3F4FDD1L,-9L};
static struct S0 g_1567 = {0xF7L,0xE723E4EEL,0x43L,0L,0L};
static unsigned short g_1657 = 0x7C92L;
static volatile struct S0 g_1686 = {0x61L,4294967295UL,1L,-1L,0L};
static short g_1707 = 0x3CFCL;



static char func_1(void);
static unsigned char func_6(unsigned p_7, int p_8, unsigned char p_9, int p_10, int p_11);
static unsigned func_18(unsigned p_19, short p_20);
static unsigned long long func_21(unsigned char p_22, short p_23, unsigned p_24, unsigned char p_25);
static unsigned func_29(unsigned short p_30, int p_31, int p_32, unsigned char p_33, long long p_34);
static unsigned char func_42(int p_43, unsigned short p_44, int p_45, unsigned short p_46, int p_47);
static int func_48(unsigned p_49, char p_50, unsigned p_51, int p_52, long long p_53);
static unsigned func_56(long long p_57, int p_58, char p_59, unsigned char p_60, short p_61);
static char func_66(unsigned p_67);
static int func_73(long long p_74);
static char func_1(void)
{
    unsigned long long l_2[1][1];
    int l_15 = 0x4E1C2E93L;
    short l_1217 = 0x939CL;
    int l_1223 = 0xCF180D4EL;
    int l_1225 = 0x3D328CBCL;
    unsigned short l_1269 = 0x0DE0L;
    int l_1293 = 0xCF8F7A58L;
    int l_1295 = 0x59FD1AC3L;
    int l_1302 = 0x1FE620F9L;
    unsigned short l_1325 = 0x94B3L;
    int l_1326 = 0L;
    unsigned char l_1336[4][10] = {{1UL, 7UL, 255UL, 0x0BL, 0UL, 0xB8L, 0xA7L, 251UL, 0x80L, 0x48L}, {1UL, 7UL, 255UL, 0x0BL, 0UL, 0xB8L, 0xA7L, 251UL, 0x80L, 0x48L}, {1UL, 7UL, 255UL, 0x0BL, 0UL, 0xB8L, 0xA7L, 251UL, 0x80L, 0x48L}, {1UL, 7UL, 255UL, 0x0BL, 0UL, 0xB8L, 0xA7L, 251UL, 0x80L, 0x48L}};
    int l_1372 = 0L;
    unsigned short l_1437 = 65535UL;
    unsigned l_1528[5];
    long long l_1562 = 0xBCC832DF7CB4164ALL;
    long long l_1603 = 0x45A5A3DB4A0AFB21LL;
    unsigned char l_1604 = 248UL;
    char l_1643 = 0x55L;
    int l_1692 = 0xF48E801BL;
    unsigned char l_1698[8];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_2[i][j] = 1UL;
    }
    for (i = 0; i < 5; i++)
        l_1528[i] = 0xA8B3CDF4L;
    for (i = 0; i < 8; i++)
        l_1698[i] = 0x09L;
lbl_1491:
    for (g_5 = 0; (g_5 <= 0); g_5 += 1)
    {
        unsigned l_14 = 0x82C32B96L;
        unsigned char l_1201 = 0UL;
        unsigned l_1204 = 0x01691A6CL;
        unsigned l_1205 = 1UL;
        int l_1229 = 0x9B7D42F6L;
        int l_1243 = 6L;
        int l_1301 = 0L;
        int l_1304[10][2] = {{0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}, {0x13869889L, 0xF06742FBL}};
        int l_1307 = 2L;
        int l_1308 = 0xD146DBC5L;
        int i, j;
        if ((func_6(((safe_rshift_func_uint8_t_u_s((l_15 = l_14), 0)) >= (g_471 = (safe_sub_func_int16_t_s_s(((l_1201 = func_18(g_5, g_3[2][0][2])) > (safe_mod_func_int64_t_s_s(l_1204, l_2[0][0]))), (((5L < (g_1206 = ((func_21((((l_2[0][0] < (((l_1205 >= l_2[0][0]) ^ 0x6CL) < g_998)) >= g_1070.f3) | g_395.f3), g_1184[3].f1, g_962[4][3].f2, g_406.f2) < g_395.f3) && 0xA574524B074CA78FLL))) & g_1184[3].f3) != g_747.f0))))), g_962[4][3].f1, l_1205, g_395.f3, g_1070.f1) && g_272.f1))
        {
            char l_1218 = 0L;
            l_15 = (g_672.f1 | l_1217);
            for (g_406.f0 = 0; (g_406.f0 >= 0); g_406.f0 -= 1)
            {
                char l_1224 = 0x1CL;
                int i, j;
                l_1225 |= func_6((l_15 ^= (!g_273.f4)), func_73(l_1218), g_711.f3, ((((~(safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint16_t_u_s((+(l_1204 < (!(l_1223 = (((-1L) > (l_2[g_5][g_406.f0] &= 9UL)) <= ((g_1186.f3 || g_963.f1) == g_358.f0)))))), g_1191.f0)) & l_1217), 4))) > l_1224) >= g_395.f1) ^ g_472), l_1217);
            }
        }
        else
        {
            char l_1228 = 0xDDL;
            unsigned char l_1254 = 1UL;
            unsigned long long l_1255 = 0x7807EE4D00CCE2AELL;
            int l_1257 = (-5L);
            short l_1261[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1261[i] = (-2L);
            l_1229 &= ((safe_add_func_int32_t_s_s(g_471, l_1228)) != (g_1071[1][0].f2 > g_271[0][5].f0));
            g_1231 = g_1230[2];
            for (g_357.f2 = 0; (g_357.f2 >= 0); g_357.f2 -= 1)
            {
                int l_1238 = 6L;
                long long l_1260 = 1L;
                int i, j;
                g_359.f3 ^= (safe_add_func_uint32_t_u_u(((l_1243 = (l_1229 &= (safe_add_func_int16_t_s_s(1L, func_66(((safe_sub_func_uint32_t_u_u(0UL, g_673.f4)) >= func_21(((l_1238 & ((safe_add_func_int64_t_s_s(l_1228, (+((g_174 &= g_268.f3) & ((((l_2[g_5][g_357.f2] = (safe_lshift_func_int16_t_s_s(0L, l_1238))) != (g_246 = (g_765 ^ g_1004.f1))) > l_14) ^ l_1238))))) ^ (-8L))) & l_15), g_407.f2, l_1238, l_1223))))))) > l_1228), g_1071[1][0].f3));
                for (g_273.f1 = 0; (g_273.f1 <= 0); g_273.f1 += 1)
                {
                    int l_1253 = 5L;
                    int i, j, k;
                    g_3[(g_5 + 4)][g_357.f2][(g_357.f2 + 3)] ^= l_1228;
                    for (g_472 = 0; (g_472 <= 0); g_472 += 1)
                    {
                        unsigned l_1256[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1256[i] = 0x0B54FFC4L;
                        g_1186.f3 ^= (((func_66((l_1256[3] &= func_6(g_493.f1, g_407.f2, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_15 = (safe_unary_minus_func_int16_t_s((safe_sub_func_int16_t_s_s(l_1201, l_1201))))) == g_1184[3].f1), 13)), 5)), ((safe_sub_func_uint16_t_u_u(((~l_1253) >= l_1254), ((18446744073709551615UL <= l_1253) | 0x0C2FFB228185C162LL))) ^ g_963.f1), l_1255))) > 8UL) < 0L) <= 0xA7C94128L);
                    }
                    for (g_273.f3 = 0; (g_273.f3 <= 0); g_273.f3 += 1)
                    {
                        int i, j;
                        g_1004.f3 = (g_331.f3 ^= 0L);
                        l_1257 = l_2[g_273.f3][g_273.f3];
                    }
                }
                l_1261[1] = (safe_sub_func_int32_t_s_s(g_1184[3].f3, (l_1260 = 0xFDBB8EA2L)));
            }
            g_4 = (l_1269 = ((safe_lshift_func_int16_t_s_u((g_94 | func_48((g_273.f1++), l_1261[1], g_710.f4, (l_15 = (~(!(((++g_474) | 1L) > (0UL || g_268.f0))))), (g_147 ^= (-2L)))), (l_1257 = (g_1268 = l_1223)))) ^ g_406.f1));
        }
        for (g_270.f0 = 0; g_270.f0 < 1; g_270.f0 += 1)
        {
            g_522[g_270.f0] = 0x6BC3D77F7C48E81FLL;
        }
        for (g_331.f2 = 0; (g_331.f2 >= 0); g_331.f2 -= 1)
        {
            unsigned long long l_1270 = 8UL;
            int l_1294 = 0L;
            int l_1305 = 0xC55C5AB7L;
            int l_1309 = 0x03985CC1L;
            unsigned short l_1310 = 0xC5E9L;
            for (g_273.f1 = 0; (g_273.f1 <= 0); g_273.f1 += 1)
            {
                int l_1271 = 0x134BC113L;
                int l_1296 = 0xD8309D64L;
                int l_1297 = 0xAA36D442L;
                int l_1303 = 0xBBDB9EA4L;
                int l_1306 = 1L;
                if (g_672.f1)
                    break;
                if (l_1270)
                    break;
                g_406.f3 = 0L;
                if (l_1271)
                {
                    unsigned long long l_1290 = 0x866BCF75475618D8LL;
                    for (g_418.f3 = 0; (g_418.f3 <= 9); g_418.f3 += 1)
                    {
                        int i, j;
                        g_407.f3 = (((safe_rshift_func_uint8_t_u_u(g_522[g_273.f1], 2)) >= (safe_lshift_func_uint16_t_u_u(g_522[g_273.f1], (++g_348)))) >= ((g_522[g_273.f1] || (l_2[g_5][g_273.f1] &= (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_1204, (g_157 = ((g_882.f0 & g_765) < ((+l_1229) ^ (g_710.f1 &= (safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_450[3]++), ((g_147 = (g_84 = (8L ^ (safe_mul_func_uint16_t_u_u((l_1290 <= g_357.f0), (-1L)))))) | g_998))), 8L)))))))), l_1270)))) & 0x75CBFDDFL));
                    }
                }
                else
                {
                    for (g_116 = 0; (g_116 <= 4); g_116 += 1)
                    {
                        int l_1291 = 0xE0683BD7L;
                        int l_1298 = 1L;
                        int l_1299 = 0x99909BB2L;
                        int l_1300[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1300[i] = (-1L);
                        l_1310++;
                    }
                }
            }
        }
    }
    if (((safe_sub_func_int32_t_s_s((+((safe_rshift_func_uint16_t_u_s((l_1326 &= (func_56((safe_sub_func_int64_t_s_s((func_42((l_1223 = ((safe_mul_func_int16_t_s_s(l_1302, g_881.f3)) < (safe_rshift_func_int8_t_s_s(l_1293, 3)))), ((g_204 = (l_15 = (0xD5FCL | g_115))) > (safe_mod_func_uint16_t_u_u((g_474 = (((-1L) != (l_1295 = (g_78 ^= (~(g_157 ^ (g_273.f1 | 0x05D16A1C76A53D57LL)))))) <= 4UL)), l_1217))), g_998, l_1269, g_84) || l_1325), g_710.f1)), l_1217, g_963.f2, l_1293, l_1269) < 65534UL)), 11)) ^ l_2[0][0])), g_747.f3)) == g_1070.f2))
    {
        int l_1327[2][6][9] = {{{(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}}, {{(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}, {(-1L), 0xDB5939CEL, 0x252F4134L, 0xD3824DD2L, 0x233B8375L, 0x3F5632F0L, (-6L), 0xD3824DD2L, 0x216BC074L}}};
        unsigned long long l_1337[2][10] = {{0x924B8E267FA17EB5LL, 0xA675914747A26892LL, 0x2B652739279CAD20LL, 0x2B652739279CAD20LL, 0xA675914747A26892LL, 0x924B8E267FA17EB5LL, 0xA675914747A26892LL, 0x2B652739279CAD20LL, 0x2B652739279CAD20LL, 0xA675914747A26892LL}, {0x924B8E267FA17EB5LL, 0xA675914747A26892LL, 0x2B652739279CAD20LL, 0x2B652739279CAD20LL, 0xA675914747A26892LL, 0x924B8E267FA17EB5LL, 0xA675914747A26892LL, 0x2B652739279CAD20LL, 0x2B652739279CAD20LL, 0xA675914747A26892LL}};
        int l_1394 = (-6L);
        int i, j, k;
        if (func_66(l_1327[1][1][8]))
        {
            unsigned l_1328[10][9] = {{0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}, {0x770019C8L, 7UL, 0xA7EDEBA7L, 0xC3506583L, 0xA7EDEBA7L, 7UL, 0x770019C8L, 0UL, 5UL}};
            int l_1363 = 0x09A96259L;
            int l_1365 = 1L;
            long long l_1366 = 1L;
            int l_1368[7][8][4] = {{{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}, {{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}, {{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}, {{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}, {{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}, {{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}, {{(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}, {(-3L), (-9L), (-3L), (-9L)}}};
            int i, j, k;
            if (((g_1071[1][0].f1 < ((func_48(func_6(g_493.f3, l_1328[5][3], (((g_472 ^= g_358.f3) & g_330[0].f3) <= 4L), (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint8_t_u_u((l_1295 &= (((safe_add_func_int64_t_s_s(0L, func_21((safe_sub_func_uint16_t_u_u((g_158 && func_6(l_1328[5][3], g_272.f1, g_1191.f2, g_1004.f0, l_1328[5][3])), l_1328[5][3])), l_1328[4][0], l_1327[1][1][8], g_395.f2))) > g_1268) ^ l_1328[5][3])), 0)))), l_1336[1][8]), g_272.f3, l_1302, g_1184[3].f0, g_418.f2) < 1UL) & 65535UL)) != 3L))
            {
                short l_1344 = 1L;
                int l_1349 = 0x6A0EFFAFL;
                char l_1350 = 1L;
                int l_1351 = 1L;
                l_1351 = func_18(l_1337[1][1], (((((func_42(((safe_lshift_func_int8_t_s_u((g_1004.f2 |= g_525.f1), ((safe_sub_func_uint8_t_u_u(g_418.f1, (safe_add_func_uint32_t_u_u(g_140, g_359.f1)))) <= ((l_1344 == (l_1349 = ((l_1327[0][0][2] = ((0xA4509BA812EBD36FLL ^ ((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(g_357.f3, func_6(l_1328[4][6], l_1328[6][0], l_1328[6][6], g_147, g_406.f2))) || 0xBEB6L), 1)) && g_331.f3)) > l_1344)) <= g_395.f3))) && l_1328[4][6])))) < 0xACB9L), g_115, l_15, g_211, g_711.f2) < 0L) >= l_1350) ^ g_272.f1) != (-5L)) >= 0x2536ED13L));
                if (l_1295)
                    goto lbl_1352;
lbl_1352:
                l_1293 |= (1UL && g_1071[1][0].f1);
                g_418.f3 ^= ((safe_mul_func_uint8_t_u_u(g_962[4][3].f0, func_66(((l_1295 = g_711.f1) != ((((safe_add_func_uint64_t_u_u(g_710.f1, g_408.f4)) || l_1328[4][2]) <= (g_95 |= ((safe_sub_func_uint32_t_u_u(l_1328[5][3], 0x0EEB8FFEL)) != (safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(l_1328[4][4], (0x8EL & g_268.f2))) >= l_1344), 4294967295UL))))) != l_1344))))) > g_330[0].f3);
            }
            else
            {
                short l_1364 = 0x15AAL;
                int l_1367 = (-5L);
                int l_1369 = 0xED58A4EFL;
                int l_1370 = 0x51772D17L;
                int l_1371 = 0x92FAE0D8L;
                int l_1373 = 1L;
                unsigned l_1374 = 0x1C15B222L;
                --l_1374;
            }
            for (g_711.f3 = (-9); (g_711.f3 >= 2); g_711.f3 = safe_add_func_uint32_t_u_u(g_711.f3, 3))
            {
                return g_1004.f2;
            }
            g_962[4][3].f3 = ((g_357.f3 &= (g_1070.f3 = (g_359.f3 ^= (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((l_1295 = l_1327[1][2][8]))), ((((((safe_add_func_int16_t_s_s((g_407.f1 >= g_374), g_881.f0)) > (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((l_1394 = (safe_rshift_func_uint8_t_u_u((l_1269 && l_1337[1][1]), ((safe_rshift_func_uint16_t_u_u(l_1327[1][1][8], 0)) >= func_66((g_395.f1--)))))), g_962[4][3].f3)) && g_1070.f2), 0xB352E1B6L))) ^ l_1327[1][1][6]) && g_206) <= l_1217) <= l_1363)))))) == g_710.f2);
            l_1394 |= (safe_mul_func_uint16_t_u_u((g_450[4] = ((safe_mod_func_uint8_t_u_u((l_1327[1][1][8] <= l_1363), l_1328[5][3])) && (safe_sub_func_uint8_t_u_u(0xA4L, 1L)))), ((g_418.f3 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((~0xCB22A76EL), func_73((safe_lshift_func_uint8_t_u_u(l_1337[1][6], 7))))), (safe_mod_func_uint64_t_u_u(g_711.f3, g_268.f0))))) >= 0xCF24376FL)));
        }
        else
        {
            unsigned char l_1414 = 0x18L;
            int l_1415 = (-1L);
            int l_1416 = 0xE7A06882L;
            l_1327[1][1][8] ^= l_1337[1][1];
            g_270.f3 = ((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((g_408.f3 > g_1184[3].f0), (g_418.f0 && (l_1416 = ((g_711.f3 | (l_15 = 4UL)) & (l_1415 = (safe_unary_minus_func_uint8_t_u(l_1414)))))))), (((l_1327[1][5][8] = ((g_273.f2 && (((safe_rshift_func_int16_t_s_u(l_1295, (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((l_1394 = ((func_66((g_450[3] < g_268.f2)) ^ 0x8DL) && g_94)), l_1414)), 0UL)))) <= g_710.f1) ^ 0x26L)) != g_450[4])) ^ l_1337[0][6]) <= l_1337[1][1]))) && l_1414);
            l_1415 ^= l_1394;
        }
    }
    else
    {
        unsigned l_1430 = 0UL;
        int l_1444 = (-1L);
        unsigned l_1448 = 0UL;
        int l_1472 = 1L;
        int l_1561 = (-1L);
        int l_1584 = 0x3EA223EBL;
        int l_1697 = 4L;
        unsigned l_1755 = 0xEFD8DA8BL;
        for (g_406.f0 = 14; (g_406.f0 < (-20)); g_406.f0 = safe_sub_func_uint64_t_u_u(g_406.f0, 2))
        {
            char l_1433[1];
            int l_1436 = 0xB02912D7L;
            int l_1449 = 0xB231DF97L;
            int l_1473 = 0xDE22E9D5L;
            int l_1490 = 0L;
            int l_1494 = (-6L);
            int l_1504 = (-1L);
            char l_1523 = 0L;
            int l_1560 = 8L;
            int l_1563 = 5L;
            int i;
            for (i = 0; i < 1; i++)
                l_1433[i] = 0x39L;
            for (g_268.f0 = (-24); (g_268.f0 > 22); g_268.f0 = safe_add_func_uint32_t_u_u(g_268.f0, 1))
            {
                char l_1429 = 0xF8L;
                int l_1470 = (-4L);
                int l_1471 = (-4L);
                short l_1505 = (-3L);
                if ((safe_mul_func_uint16_t_u_u(l_1429, func_56(l_1430, (g_331.f3 > (((l_1437 = ((l_1436 = ((safe_rshift_func_int16_t_s_u(((g_331.f3 ^ ((g_1184[3].f4 && 0xC01FL) != l_1433[0])) < (safe_mod_func_uint32_t_u_u(6UL, l_1225))), l_1217)) & g_331.f1)) < l_1336[2][6])) <= l_1433[0]) && l_1429)), l_1429, l_1433[0], g_418.f1))))
                {
                    unsigned l_1447 = 4294967292UL;
                    int l_1456 = (-1L);
                    unsigned l_1468 = 0UL;
                    unsigned l_1489 = 0xDF93D1CBL;
                    l_1449 = (safe_add_func_int32_t_s_s(func_66((l_1448 = (g_407.f1 = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((l_1444 = g_1070.f2) || (-1L)), g_882.f3)), (safe_rshift_func_int8_t_s_s(l_1447, 0))))))), (0UL <= l_1433[0])));
                    if ((!((((g_1184[3].f1 >= ((safe_rshift_func_uint16_t_u_u(l_1433[0], (safe_rshift_func_uint16_t_u_s((0x9761FB63L == g_395.f4), 1)))) < l_1430)) && (g_471 ^= func_21((((safe_add_func_uint32_t_u_u(l_1449, func_21(g_474, g_1183.f0, g_154, g_358.f2))) != l_1447) == 0L), g_273.f3, l_1429, g_407.f2))) <= g_395.f2) <= l_1429)))
                    {
                        short l_1467 = 0x47B1L;
                        g_273 = g_881;
                        l_1456 = 0L;
                        g_1186.f3 |= (g_1071[1][0].f3 != (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(g_357.f2, (((func_73(l_1429) == (safe_rshift_func_uint16_t_u_s(l_1444, 13))) ^ (g_407.f0 = g_408.f0)) || l_1429))), ((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((l_1468 = func_6(g_711.f0, (l_1456 <= g_406.f0), g_211, l_1467, g_998)), g_406.f0)) <= 4294967288UL), 9L)) == l_1430))));
                        g_881 = g_1469;
                    }
                    else
                    {
                        unsigned char l_1474 = 0xCDL;
                        --l_1474;
                        if (g_1070.f0)
                            break;
                    }
                    l_1444 = g_1121.f4;
                    if ((((safe_add_func_int8_t_s_s(1L, (18446744073709551611UL < (l_1295 ^= ((safe_mul_func_uint16_t_u_u((func_56(((g_358.f1 <= (safe_rshift_func_int16_t_s_u(((0x0FAB028D840913F1LL < (safe_rshift_func_uint8_t_u_s((g_174 ^= (safe_rshift_func_uint16_t_u_s(func_73(g_1071[1][0].f4), 14))), 2))) <= (l_1444 |= (+l_1472))), 15))) & (safe_sub_func_uint32_t_u_u(l_1489, 0x854596A9L))), g_1206, l_1490, g_359.f0, l_1437) & g_765), 65527UL)) == g_1184[3].f2))))) | g_1004.f0) == g_747.f0))
                    {
                        g_359.f3 ^= g_204;
                        if (g_157)
                            goto lbl_1491;
                        if (g_270.f0)
                            break;
                    }
                    else
                    {
                        g_1049.f3 = l_1448;
                    }
                }
                else
                {
                    short l_1495 = 0xA599L;
                    for (g_105 = 0; (g_105 < 41); g_105++)
                    {
                        unsigned short l_1496 = 0xB62BL;
                        int l_1499 = (-1L);
                        l_1499 = ((--l_1496) != l_1325);
                    }
                    g_357.f3 = (g_330[0].f3 = ((0x97E7B511L != (safe_mul_func_uint16_t_u_u((l_1326 = (safe_lshift_func_int8_t_s_u(func_56((l_2[0][0] ^ 0xB7201444L), l_1448, l_1326, l_1448, (l_1504 <= (l_1473 ^= l_1437))), l_1495))), l_1505))) ^ l_1436));
                    l_1470 = (!(l_1433[0] <= (g_1004.f4 < ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s(((~g_1071[1][0].f0) && (safe_rshift_func_uint16_t_u_s(l_1217, 0))), 3)), (-1L))) & func_21((safe_mod_func_uint16_t_u_u(func_66(g_1184[3].f1), l_1494)), (g_1520[0] = (g_472 = ((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(l_1495, 0x41L)), 3)) || (-7L)) == g_268.f1), l_1433[0])) == 0xFFE3L))), l_1495, g_711.f2)))));
                    return g_246;
                }
                g_1070 = g_1183;
            }
            g_1184[3].f3 |= ((safe_mod_func_int32_t_s_s(func_66(l_1217), l_1523)) < 0xAE896172928DEA06LL);
            for (g_84 = (-4); (g_84 > 13); ++g_84)
            {
                short l_1535 = 0x6D05L;
                int l_1536 = (-1L);
                unsigned l_1541 = 4294967291UL;
                long long l_1543[8][10][1] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
                int i, j, k;
                for (g_358.f2 = 0; (g_358.f2 >= 5); ++g_358.f2)
                {
                    g_1004.f3 = ((0xA152C4A56902B1E9LL >= func_6((0x40FEL & l_1528[3]), l_1223, g_157, func_6((g_1184[3].f1++), g_493.f3, (safe_rshift_func_uint8_t_u_s((l_1473 = (safe_mul_func_int8_t_s_s(func_6(l_1473, (7L > (l_1444 = g_1070.f1)), g_272.f2, l_1269, l_1535), (-9L)))), 5)), l_1535, g_711.f0), g_710.f1)) < g_395.f0);
                    g_1230[2].f3 = g_408.f3;
                    l_1536 |= g_747.f2;
                }
                g_882.f3 ^= l_1535;
                for (g_269.f1 = (-13); (g_269.f1 <= 36); g_269.f1++)
                {
                    char l_1542 = 0x2DL;
                    l_1436 = (safe_mul_func_int8_t_s_s(func_6(l_1541, l_1295, l_1542, (((g_330[0].f0 = func_21(l_1436, l_1535, (g_998 = g_140), l_1473)) ^ l_1490) <= 1UL), l_1444), (-9L)));
                    if (g_963.f1)
                        goto lbl_1491;
                }
                l_1472 &= (g_1186.f3 &= (((((l_1543[1][4][0] | (g_204 = (((l_1436 = (0x286720C5L ^ (safe_sub_func_int16_t_s_s(l_1437, (l_1444 = (safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u(func_21((safe_lshift_func_int8_t_s_s(l_1336[1][8], 4)), (g_157 ^= g_962[4][3].f3), func_6(g_116, g_359.f4, g_273.f0, g_1070.f3, g_246), g_1184[3].f0), g_962[4][3].f0)) > l_1536) > l_1543[1][4][0]), l_15)), g_331.f3))))))) == l_1535) <= l_1528[3]))) == l_1448) <= l_1325) != l_1535) == g_1071[1][0].f1));
            }
            if ((((l_1490 >= ((g_406.f3 != g_273.f0) ^ (g_105 = 6UL))) != (safe_add_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((func_6((0x5430L || ((g_330[0].f2 && func_6(g_849.f3, g_273.f2, l_1560, l_1561, l_1269)) <= 0x3BL)), l_1430, g_5, l_1562, l_1563) < 0xE9233133A70C4678LL) & g_418.f3), 6)) | 0L), 65535UL))) < g_711.f0))
            {
                l_1472 ^= (safe_lshift_func_int8_t_s_u(l_1430, (l_1436 = (l_1444 == 8UL))));
                g_1567 = g_1566;
                return g_272.f1;
            }
            else
            {
                for (g_1186.f3 = 21; (g_1186.f3 < (-16)); g_1186.f3 = safe_sub_func_int8_t_s_s(g_1186.f3, 6))
                {
                    return g_747.f3;
                }
                if (l_1504)
                    break;
            }
        }
        l_1444 = ((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(0xAF99L, g_849.f2)) | ((func_73((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(g_174, 10)), func_21(l_1430, (g_472 &= (0x5AL <= ((0x9549L != l_2[0][0]) > ((g_204 = l_1302) || l_1336[2][5])))), l_15, l_1444))) >= 0xA1L), (-3L)))) && g_711.f3) > 0x8F8D15A6AD8A024BLL)) > g_1004.f1), g_1567.f3)), l_1326)) && l_1225) != l_1584), g_1071[1][0].f2)) <= 4294967293UL);
        for (l_1430 = 0; (l_1430 <= 6); l_1430 += 1)
        {
            unsigned short l_1591[3][10][3] = {{{0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}}, {{0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}}, {{0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}, {0xEC2CL, 65531UL, 0x1007L}}};
            unsigned long long l_1594[6][10][2] = {{{0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}}, {{0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}}, {{0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}}, {{0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}}, {{0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}}, {{0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}, {0xA024D69FB21E8046LL, 0x6E2D5867D86D0F74LL}}};
            long long l_1602 = 0x9D432C156F7EEEE0LL;
            int l_1606 = 0x5AF56321L;
            int l_1607 = 0x9262806BL;
            unsigned l_1630 = 5UL;
            int i, j, k;
            g_374 ^= (!(safe_sub_func_uint8_t_u_u((func_48((--g_1567.f1), (safe_rshift_func_int8_t_s_s((g_962[4][3].f0 = func_6(l_1591[1][2][2], ((g_246 = 0x47956570F7EDCE2CLL) & 0x35CC926FDD7C0C4BLL), (((safe_sub_func_int8_t_s_s(l_1594[5][3][0], (safe_rshift_func_int16_t_s_u((g_157 |= 1L), func_6(((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_unary_minus_func_int8_t_s((((g_395.f2 || 0UL) != l_1594[5][3][0]) != func_21(g_710.f1, l_1325, l_1602, g_1122.f2)))) <= l_1225), 0xF67DL)), 2)) ^ 0x8B78CE12L), l_1594[3][4][1], g_358.f1, l_1561, g_357.f3))))) || g_672.f0) ^ g_765), g_406.f0, l_1591[2][5][0])), l_1562)), l_1603, g_273.f0, l_1594[5][3][0]) < 0xDF6BL), l_1584)));
            l_1223 = l_1594[1][3][1];
            g_359.f3 = g_494.f2;
            g_1567.f3 |= func_18((l_1604 = l_1594[2][7][1]), g_711.f0);
            for (g_1004.f2 = 5; (g_1004.f2 >= 1); g_1004.f2 -= 1)
            {
                unsigned long long l_1608 = 1UL;
                int l_1625 = 0x7B5BD91DL;
                int l_1626 = (-3L);
                int l_1628 = 0x06A10B8AL;
                int l_1629 = 0xA0602603L;
                for (g_711.f0 = 0; (g_711.f0 <= 6); g_711.f0 += 1)
                {
                    char l_1605[8][2][6] = {{{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}, {{1L, 0L, 1L, 0L, 1L, 0x80L}, {1L, 0L, 1L, 0L, 1L, 0x80L}}};
                    int l_1627[5][10][1] = {{{0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}}, {{0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}}, {{0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}}, {{0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}}, {{0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}, {0xE9138094L}}};
                    int i, j, k;
                    for (l_1293 = 0; (l_1293 <= 1); l_1293 += 1)
                    {
                        int i, j, k;
                        l_1608++;
                        return g_1292[(l_1293 + 1)][l_1293][g_1004.f2];
                    }
                    if ((safe_add_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_1607 = g_358.f2), func_21((safe_sub_func_int16_t_s_s((g_882.f2 > (safe_mod_func_uint32_t_u_u(func_66((safe_mod_func_int8_t_s_s((func_21(l_1584, l_1605[0][1][3], (255UL < g_331.f2), l_1594[5][3][0]) <= l_1602), 253UL))), l_1608))), 0L)), l_1472, g_358.f0, g_1184[3].f3))), 0x823BL)) >= 0x45F5L), g_963.f0)))
                    {
                        int i, j;
                        g_1184[3].f3 ^= (safe_rshift_func_uint16_t_u_u(65530UL, 2));
                        g_672 = g_962[(g_711.f0 + 1)][g_711.f0];
                    }
                    else
                    {
                        if (g_1191.f2)
                            break;
                        if (g_78)
                            continue;
                        if (g_1186.f4)
                            break;
                        l_1630--;
                    }
                }
                for (l_1326 = 0; (l_1326 <= 1); l_1326 += 1)
                {
                    g_1071[1][0] = g_271[0][5];
                }
            }
        }
        if (l_1326)
        {
            unsigned short l_1644 = 65528UL;
            long long l_1651 = 0xDB697E5511691092LL;
            int l_1655 = 0xB08BFBC2L;
            for (g_358.f3 = 19; (g_358.f3 <= 2); g_358.f3 = safe_sub_func_int8_t_s_s(g_358.f3, 1))
            {
                long long l_1650 = 0L;
                int l_1654 = 0L;
                for (g_358.f2 = 0; (g_358.f2 < 0); g_358.f2 = safe_add_func_uint16_t_u_u(g_358.f2, 6))
                {
                    long long l_1645 = (-1L);
                    l_1645 = ((safe_sub_func_uint8_t_u_u((g_174 = (safe_lshift_func_uint8_t_u_s(0x85L, g_998))), (l_1472 |= (((-1L) > (l_1223 |= g_493.f4)) >= (0x0987B2CFA908DF8ALL || g_268.f2))))) == (safe_mod_func_int64_t_s_s(l_1643, (g_471 &= (g_331.f1 & l_1644)))));
                    g_418.f3 |= (safe_mul_func_int8_t_s_s(g_1520[0], ((g_1230[2].f2 < ((safe_mod_func_int16_t_s_s(g_1071[1][0].f2, 0xDCD9L)) ^ 0x13L)) == l_1650)));
                }
                l_1472 = func_56(l_1651, ((l_1655 = ((func_66(((-1L) == (g_522[0] = (safe_mul_func_int8_t_s_s((g_273.f4 >= (l_1654 |= 0xDFL)), 0UL))))) & (-1L)) > 0x0DBBC96FFC4DE51CLL)) | (safe_unary_minus_func_uint64_t_u((g_1657 = g_359.f1)))), g_268.f2, g_204, l_1430);
                l_1444 = g_963.f4;
                if (((((((((g_395.f4 || ((l_1651 != (((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((0x57L ^ (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(1L, g_1230[2].f4)), l_1650)), 0))), 6UL)), 0L)) == (((((((safe_add_func_uint8_t_u_u((l_1444 = (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_268.f0 |= (((l_1654 = ((l_1472 = (g_95 |= (safe_sub_func_int64_t_s_s(((0xEEL < 255UL) & l_1654), g_147)))) == g_1567.f0)) || l_1528[1]) == g_998)), 0x52L)), 0x39L))), l_1651)) < g_962[4][3].f1) == g_711.f3) ^ 1L) & l_1650) | 0L) | 0xADL)) <= 0x3E977BEF598928CDLL)) < l_1655)) || g_125) > 0x91L) | 0x60C7L) > g_78) >= g_1004.f3) || 0L) && 0x758ADEA9L))
                {
                    unsigned char l_1680 = 246UL;
                    char l_1681 = (-1L);
                    unsigned l_1691[7];
                    int l_1695 = 0x27ED7D4AL;
                    int l_1696 = 0x1221A634L;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1691[i] = 1UL;
                    g_1070.f3 ^= (safe_sub_func_uint8_t_u_u(func_21(l_1448, ((0UL || ((safe_rshift_func_uint16_t_u_u((g_1230[2].f3 != ((((g_406.f1 = (g_711.f1 = ((l_1681 ^= l_1680) < 18446744073709551609UL))) && (((safe_mul_func_int16_t_s_s(((0xF7L == g_330[0].f2) || func_21(l_1444, (l_1528[3] == g_115), l_1644, g_1191.f1)), g_962[4][3].f2)) & g_1566.f2) <= 1L)) & g_418.f0) <= 0x54B33A43L)), l_1680)) && 0L)) & g_273.f1), g_472, g_522[0]), l_1680));
                    for (g_272.f1 = 0; (g_272.f1 <= 16); g_272.f1++)
                    {
                        g_1183 = g_1686;
                    }
                    for (g_273.f0 = (-5); (g_273.f0 < (-15)); --g_273.f0)
                    {
                        unsigned short l_1693[9][9] = {{0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL}};
                        int i, j;
                        g_407.f3 &= (g_1071[1][0].f3 = (~((safe_rshift_func_int16_t_s_u(l_1223, func_66((func_21(l_1680, l_1691[5], g_710.f2, (l_1693[6][4] = func_66((l_1692 <= 0x58L)))) == (l_1655 >= l_1650))))) <= l_1655)));
                    }
                    if (g_710.f1)
                    {
                        int l_1694[1][4] = {{(-5L), (-1L), (-5L), (-1L)}};
                        int i, j;
                        l_1698[7]++;
                        if (g_1469.f3)
                            continue;
                    }
                    else
                    {
                        l_1654 = l_1654;
                        return g_1122.f4;
                    }
                }
                else
                {
                    unsigned short l_1704[6][1][9] = {{{0x9803L, 0x19E3L, 65535UL, 65535UL, 65529UL, 0x5899L, 65529UL, 65535UL, 65535UL}}, {{0x9803L, 0x19E3L, 65535UL, 65535UL, 65529UL, 0x5899L, 65529UL, 65535UL, 65535UL}}, {{0x9803L, 0x19E3L, 65535UL, 65535UL, 65529UL, 0x5899L, 65529UL, 65535UL, 65535UL}}, {{0x9803L, 0x19E3L, 65535UL, 65535UL, 65529UL, 0x5899L, 65529UL, 65535UL, 65535UL}}, {{0x9803L, 0x19E3L, 65535UL, 65535UL, 65529UL, 0x5899L, 65529UL, 65535UL, 65535UL}}, {{0x9803L, 0x19E3L, 65535UL, 65535UL, 65529UL, 0x5899L, 65529UL, 65535UL, 65535UL}}};
                    int l_1729 = 0xA2238BFEL;
                    int i, j, k;
                    for (g_331.f1 = (-2); (g_331.f1 != 33); g_331.f1 = safe_add_func_int16_t_s_s(g_331.f1, 9))
                    {
                        short l_1703 = 0x952CL;
                        g_5 |= g_1122.f3;
                        g_849 = g_493;
                        --l_1704[3][0][8];
                        if (g_1707)
                            break;
                    }
                    for (l_1223 = 3; (l_1223 > (-7)); l_1223 = safe_sub_func_uint8_t_u_u(l_1223, 2))
                    {
                        return g_1566.f4;
                    }
                    for (l_1217 = 0; (l_1217 <= 0); l_1217 += 1)
                    {
                        int l_1724 = 0x638D5D02L;
                        int l_1744[7] = {0x6753C12CL, 0x6753C12CL, (-1L), 0x6753C12CL, 0x6753C12CL, (-1L), 0x6753C12CL};
                        int i, j;
                        l_1654 |= (safe_add_func_uint64_t_u_u((g_418.f4 <= func_66(g_273.f0)), g_711.f2));
                        g_1191.f3 = (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((g_1184[3].f3 |= (((--l_2[l_1217][l_1217]) <= (l_15 = (((l_1655 >= (g_211 = 65532UL)) == (safe_add_func_uint64_t_u_u(g_525.f1, (g_1292[5][0][1] > l_1654)))) & (safe_sub_func_int8_t_s_s(func_21(l_1724, (g_204 = func_6((l_1472 = (l_1729 = (((safe_add_func_uint8_t_u_u(((g_272.f1 = l_1724) && (safe_mul_func_int64_t_s_s((~g_359.f1), (g_1071[1][0].f3 == l_1704[0][0][3])))), l_1372)) ^ l_1651) ^ g_357.f2))), l_1444, l_1724, l_1561, g_998)), g_115, l_1295), l_1650))))) & 0x6CE6B895EB27F464LL)) || 4294967288UL) < l_1651), 1)), (-1L))), l_1724));
                        if (l_1729)
                            continue;
                        g_269.f3 |= ((safe_add_func_uint8_t_u_u(0xEEL, (safe_add_func_int64_t_s_s(g_95, (func_21((g_1520[0] = ((g_5 = ((+func_6(((safe_mod_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((l_1444 &= ((0xD9B5L && l_1698[3]) ^ 1UL)) | ((l_2[l_1217][l_1217] | (safe_add_func_int32_t_s_s((g_1071[1][0].f4 > g_174), func_6((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(func_21(g_154, g_998, l_1704[3][0][8], g_747.f2), 6)) & l_1584), l_1651)), l_1651, g_1191.f1, g_331.f0, g_418.f3)))) != g_963.f2)), 0L)) < l_1655) && l_1655), g_962[4][3].f3)) || l_1650), l_1651, g_157, l_1724, l_1430)) <= g_273.f3)) != l_1744[1])), g_1566.f1, g_747.f2, l_1651) == (-2L)))))) || g_673.f0);
                    }
                }
            }
        }
        else
        {
            int l_1745[8] = {(-8L), 0x8E325559L, (-8L), 0x8E325559L, (-8L), 0x8E325559L, (-8L), 0x8E325559L};
            int l_1754 = 0L;
            int i;
            l_1745[0] ^= g_270.f4;
            g_1191.f3 = (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((249UL || l_1697), g_962[4][3].f3)), ((safe_sub_func_uint64_t_u_u(func_66(g_963.f4), (0xF1L ^ (safe_sub_func_int32_t_s_s(((g_418.f2 = (func_21((g_1520[0] = (l_1745[6] >= (l_1745[4] != (l_1754 = (((l_1472 = g_1184[3].f2) & l_1295) > 0x657609C3L))))), g_1184[3].f1, l_1755, l_1326) == l_1326)) > g_358.f0), l_1444))))) & g_273.f3)));
        }
    }
    l_1223 = g_357.f2;
    return l_1225;
}







static unsigned char func_6(unsigned p_7, int p_8, unsigned char p_9, int p_10, int p_11)
{
    unsigned l_1207 = 0UL;
    int l_1208 = 0x55323DAFL;
    int l_1209 = (-1L);
    int l_1210[9] = {0x2FDD4A8EL, 0x2C39A63EL, 0x2FDD4A8EL, 0x2C39A63EL, 0x2FDD4A8EL, 0x2C39A63EL, 0x2FDD4A8EL, 0x2C39A63EL, 0x2FDD4A8EL};
    short l_1211[2][3];
    short l_1212[7];
    short l_1213[8] = {(-1L), (-1L), 1L, (-1L), (-1L), 1L, (-1L), (-1L)};
    unsigned l_1214 = 0x469A5DA2L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_1211[i][j] = 0x3EDFL;
    }
    for (i = 0; i < 7; i++)
        l_1212[i] = 0xA06AL;
    l_1207 &= (p_10 = g_348);
    g_963.f3 = (-7L);
    p_8 = l_1207;
    --l_1214;
    return p_9;
}







static unsigned func_18(unsigned p_19, short p_20)
{
    unsigned long long l_28 = 0xD933BD3E018EBDB8LL;
    char l_39 = 0x4BL;
    int l_748 = 0x97C9F728L;
    int l_749 = 0L;
    int l_958 = 1L;
    int l_973[10][2];
    long long l_978 = 0xF55FB6A8267FFCBCLL;
    unsigned l_985 = 4UL;
    short l_1066 = 1L;
    int l_1151 = 0x9CB58CBEL;
    long long l_1168 = 0x0A861784EA83D968LL;
    int l_1182 = (-1L);
    unsigned l_1188 = 0x0DF7AFAFL;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_973[i][j] = 0x6A846F17L;
    }
    if (((func_21((safe_rshift_func_int8_t_s_s(1L, 7)), l_28, func_29((safe_mul_func_int16_t_s_s(p_19, (safe_sub_func_uint64_t_u_u(g_5, l_39)))), l_39, l_28, (l_749 = (l_748 &= (safe_mod_func_uint8_t_u_u(func_42((g_374 &= func_48(((safe_lshift_func_int16_t_s_s((func_56(l_39, l_39, p_19, l_39, g_3[1][0][4]) > p_20), 4)) || g_84), g_89, g_5, l_39, g_272.f0)), p_20, l_28, l_28, l_39), 249UL)))), g_358.f1), p_19) <= g_710.f0) ^ l_28))
    {
        unsigned long long l_886 = 0x76058BA64A33E1DELL;
        return l_886;
    }
    else
    {
        unsigned char l_889 = 253UL;
        int l_890 = 0x25FFC2BEL;
        int l_943[1];
        unsigned long long l_945 = 0UL;
        int l_1097 = 0x6AA40E2AL;
        char l_1141 = 0L;
        unsigned long long l_1152 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_943[i] = 0L;
lbl_1003:
        for (g_269.f1 = 11; (g_269.f1 != 1); --g_269.f1)
        {
            l_890 = (g_710.f3 = (g_882.f0 & l_889));
            for (g_273.f0 = 6; (g_273.f0 >= 0); g_273.f0 -= 1)
            {
                int i;
                g_78 = g_450[g_273.f0];
            }
            l_749 &= l_748;
            for (g_140 = 0; (g_140 == 8); g_140 = safe_add_func_int64_t_s_s(g_140, 7))
            {
                int l_893[10] = {0x73E52DD5L, (-9L), 0xDAC97AF0L, 0xDAC97AF0L, (-9L), 0x73E52DD5L, (-9L), 0xDAC97AF0L, 0xDAC97AF0L, (-9L)};
                int i;
                return l_893[2];
            }
        }
        if (func_29((g_407.f4 | l_889), p_19, p_20, l_890, (p_19 != l_889)))
        {
            short l_966 = 0x5C60L;
            int l_967 = (-4L);
            int l_970[4] = {4L, 0xE80E908FL, 4L, 0xE80E908FL};
            char l_1045 = 0x49L;
            int l_1181 = 2L;
            unsigned short l_1192 = 4UL;
            int i;
            if (p_19)
            {
                unsigned short l_904 = 65535UL;
                int l_905 = 0x46EB4688L;
                char l_910[3];
                int l_939 = 0xE68EB954L;
                int l_940 = 0L;
                int l_944 = (-1L);
                int l_976 = 1L;
                int l_979 = 0x60574212L;
                unsigned char l_980[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_910[i] = 1L;
                for (i = 0; i < 3; i++)
                    l_980[i] = 0x77L;
lbl_919:
                g_711.f3 = (safe_sub_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((g_348 |= l_39), 0xBAB7L)) ^ p_19), (func_21((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(l_904, (((l_905 = g_271[0][5].f3) != 0x961C87EDDDAA5DB5LL) > p_20))) ^ (safe_lshift_func_uint8_t_u_u(func_66(l_28), 6))), p_19)), p_20)), g_418.f0, g_522[0], p_20) != p_20)));
                if ((l_748 = (safe_add_func_int64_t_s_s((((g_472 = l_910[2]) > l_889) & (safe_sub_func_uint64_t_u_u(((p_19 ^ 0xD1L) == g_271[0][5].f0), (safe_mul_func_uint16_t_u_u(65535UL, p_19))))), ((+(safe_mul_func_uint16_t_u_u(p_19, l_889))) < (-1L))))))
                {
                    int l_934 = 8L;
                    int l_938[6] = {0xA59C2F81L, 0x78F16309L, 0xA59C2F81L, 0x78F16309L, 0xA59C2F81L, 0x78F16309L};
                    int i;
                    for (g_395.f0 = (-5); (g_395.f0 == 5); g_395.f0 = safe_add_func_uint64_t_u_u(g_395.f0, 8))
                    {
                        short l_935[10] = {1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)};
                        int l_941 = 3L;
                        int l_942 = 0L;
                        int i;
                        if (g_268.f3)
                            goto lbl_919;
                        l_749 = ((((g_474 &= 0x27CCL) ^ (safe_mod_func_int32_t_s_s(0xC14B6243L, (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(0x4139EBCBL, p_19)), (p_19 && (safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((g_204 |= (g_472 = p_19)), (~(safe_rshift_func_int8_t_s_u(0L, 0))))) == (l_935[6] &= l_934)), (~(l_938[4] &= (safe_mod_func_int16_t_s_s(p_19, p_20)))))), p_20)))))))) && l_935[6]) >= 0x2696L);
                        l_945++;
                        if (p_20)
                            continue;
                    }
                }
                else
                {
                    unsigned l_950 = 0x73A4521DL;
                    int l_957 = 3L;
                    for (g_407.f3 = 18; (g_407.f3 <= (-28)); --g_407.f3)
                    {
                        unsigned l_959 = 0UL;
                        l_950--;
                        l_944 = (safe_sub_func_uint32_t_u_u(l_945, g_273.f3));
                        l_905 |= (safe_add_func_int16_t_s_s((g_472 = g_84), (p_19 > (g_158 > 0x3CL))));
                        l_959++;
                    }
                    g_963 = g_962[4][3];
                }
                for (g_331.f0 = (-13); (g_331.f0 <= 11); g_331.f0 = safe_add_func_int16_t_s_s(g_331.f0, 8))
                {
                    int l_968 = 0xDEA9FFC5L;
                    int l_969 = 0xD64869B4L;
                    int l_971 = (-6L);
                    int l_972 = (-5L);
                    int l_974 = 0xD612918FL;
                    int l_975 = 0xEF5C23F4L;
                    int l_977 = 5L;
                    l_980[1]--;
                }
                for (g_418.f1 = 0; (g_418.f1 < 12); g_418.f1++)
                {
                    short l_995 = 0xF850L;
                    int l_999[5][1] = {{1L}, {1L}, {1L}, {1L}, {1L}};
                    int l_1000 = 0L;
                    int i, j;
                    --l_985;
                    l_1000 |= func_48((safe_unary_minus_func_uint8_t_u((+((p_20 = (safe_lshift_func_uint16_t_u_s(g_270.f3, 3))) | (safe_add_func_int64_t_s_s((safe_add_func_int64_t_s_s((func_73(func_73(l_995)) || 4294967286UL), (p_19 > g_358.f1))), g_374)))))), ((safe_sub_func_int8_t_s_s((((0x9EL != g_272.f2) != 0x87792BADL) ^ g_357.f2), g_522[0])) >= g_998), l_28, p_19, l_999[4][0]);
                    for (g_474 = 10; (g_474 <= 18); g_474 = safe_add_func_int64_t_s_s(g_474, 1))
                    {
                        if (g_273.f2)
                            goto lbl_1003;
                        if (p_19)
                            break;
                        g_1004 = g_357;
                    }
                }
            }
            else
            {
                unsigned short l_1005 = 0xE89FL;
                char l_1022 = 1L;
                int l_1048 = 0xCA07C736L;
                l_1005--;
                for (g_747.f3 = 1; (g_747.f3 > 26); g_747.f3 = safe_add_func_int16_t_s_s(g_747.f3, 9))
                {
                    for (g_206 = 0; (g_206 != 16); ++g_206)
                    {
                        char l_1046[7] = {0x8DL, 0x8DL, 3L, 0x8DL, 0x8DL, 3L, 0x8DL};
                        unsigned l_1047 = 18446744073709551610UL;
                        int i;
                        l_1022 = (safe_lshift_func_int16_t_s_u(p_19, ((l_943[0] < p_20) & (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(0xE1L, (g_493.f4 && (g_494.f2 <= 0x5EF3CEE7L)))), ((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(g_206, (p_20 == 1UL))), 0x57L)) > 0x65BFL))))));
                        l_1048 &= ((((safe_add_func_int8_t_s_s((p_20 | (safe_lshift_func_int8_t_s_s((+(((safe_mul_func_int16_t_s_s((l_1047 ^= (safe_sub_func_uint32_t_u_u((l_1046[2] &= ((255UL && ((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_mod_func_int32_t_s_s(func_73(func_21((safe_rshift_func_uint16_t_u_s(p_20, (func_73(g_848.f1) & ((safe_sub_func_int16_t_s_s((5UL && (safe_add_func_uint8_t_u_u((func_21(l_1045, (l_970[0] <= 0x0BF326216F41F290LL), g_711.f3, l_890) ^ l_1022), 0x08L))), 0xDE84L)) && 0xA1B7FF302D8F6139LL)))), g_89, l_889, l_943[0])), g_406.f1)), 2UL)), p_20)) && p_20) | 0x2FA9L) || 0L), p_19)) != 0xED37B9BAL)) > 0x7018L)), p_19))), 0xB799L)) < g_211) ^ p_20)), p_20))), p_20)) | (-5L)) ^ 0xD34123C8L) | g_269.f2);
                    }
                    g_672 = g_1049;
                }
                if ((((((safe_add_func_uint8_t_u_u(p_19, (safe_lshift_func_int8_t_s_u(((g_84 |= p_19) <= l_39), ((safe_rshift_func_int16_t_s_s((l_1005 ^ func_21((safe_lshift_func_int8_t_s_s((l_1048 |= (safe_mul_func_uint16_t_u_u((g_474 = ((safe_add_func_uint64_t_u_u((l_943[0] = l_973[3][1]), g_566)) != l_966)), (safe_add_func_int64_t_s_s((-2L), (safe_sub_func_int32_t_s_s((l_978 != g_330[0].f2), 0x8BA44002L))))))), 5)), g_710.f3, l_1066, p_20)), g_710.f2)) >= p_19))))) != 1UL) >= 0x95FFB90FCB008AADLL) <= g_147) < 0UL))
                {
                    l_958 |= l_1048;
                }
                else
                {
                    int l_1087 = 0xF5C958FDL;
                    int l_1088 = (-1L);
                    int l_1109 = 5L;
                    for (g_418.f2 = 14; (g_418.f2 < 18); g_418.f2 = safe_add_func_uint32_t_u_u(g_418.f2, 9))
                    {
                        unsigned l_1069[6] = {0x2F1E744FL, 0x30205E98L, 0x2F1E744FL, 0x30205E98L, 0x2F1E744FL, 0x30205E98L};
                        int i;
                        if (l_1069[2])
                            break;
                        g_1071[1][0] = g_1070;
                        l_970[0] = (safe_add_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((l_1088 = ((g_359.f3 = ((0x0053L | g_406.f2) || (+(((safe_add_func_uint8_t_u_u(l_970[0], 0L)) > (safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(((((g_418.f1 = (func_66(g_672.f0) == g_330[0].f1)) & func_21((safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s(1L)) != func_21(l_1087, p_20, l_890, p_20)), g_272.f2)), 0xF2B0L)), g_395.f3, l_1087, g_747.f1)) || 1UL) && 0xFEL), p_19)) != l_1087) && g_962[4][3].f4) | p_20), l_1005))) != g_418.f3)))) & g_358.f0)), g_157)) & g_269.f3), g_357.f3));
                    }
                    for (g_331.f1 = 0; (g_331.f1 != 43); ++g_331.f1)
                    {
                        unsigned char l_1096 = 250UL;
                        int l_1108[8];
                        short l_1120[6] = {(-6L), (-4L), (-6L), (-4L), (-6L), (-4L)};
                        int i;
                        for (i = 0; i < 8; i++)
                            l_1108[i] = (-1L);
                        l_1109 &= (g_710.f3 = (g_272.f1 < ((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((func_66((safe_lshift_func_int8_t_s_s((g_882.f3 != l_970[0]), l_1096))) < (l_1097 || ((safe_lshift_func_uint8_t_u_s(g_268.f1, 3)) & (safe_lshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((l_749 = ((safe_mod_func_uint32_t_u_u((func_21((p_19 == (l_1108[7] &= (safe_rshift_func_uint16_t_u_s((0x2C37B847D6182172LL == 6L), g_330[0].f2)))), p_19, g_418.f1, l_1088) ^ g_89), 8L)) && 65526UL)) == g_273.f2), l_1096)) == l_973[7][0]), l_943[0]))))), 6)))) > 1L)));
                        if (p_19)
                            break;
                        l_1120[4] &= ((((safe_rshift_func_int8_t_s_u(4L, (((((safe_lshift_func_int16_t_s_s(func_21((g_174 = (safe_add_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((g_204 <= (g_418.f2 == l_943[0])), (p_20 && (l_1022 & 0xF39565E4L)))), (safe_rshift_func_int8_t_s_u(l_1097, 2))))), (g_525.f1 > p_20), g_268.f0, l_1088), 2)) == g_273.f1) & l_967) >= 0x1B7C6861L) | 1UL))) > l_890) || 0xAE29F2483C269A97LL) > 0L);
                        if (l_943[0])
                            break;
                    }
                    for (g_357.f3 = 0; (g_357.f3 <= 6); g_357.f3 += 1)
                    {
                        g_418.f3 &= p_19;
                        g_1122 = g_1121;
                    }
                }
            }
            l_970[0] = g_1121.f1;
            for (g_155 = (-6); (g_155 != (-10)); g_155 = safe_sub_func_int8_t_s_s(g_155, 4))
            {
                short l_1131 = (-8L);
                unsigned l_1132 = 0x8797F97FL;
                int l_1154[2];
                unsigned l_1167 = 0x36ED9154L;
                long long l_1187 = 0x7F99949E7DCB3E63LL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1154[i] = 5L;
                for (g_269.f3 = 0; (g_269.f3 <= 3); g_269.f3 += 1)
                {
                    for (g_358.f3 = 0; (g_358.f3 <= 8); g_358.f3 += 1)
                    {
                        int i;
                        l_970[g_269.f3] ^= g_450[(g_269.f3 + 4)];
                        return g_450[(g_269.f3 + 3)];
                    }
                    for (g_407.f0 = 0; g_407.f0 < 9; g_407.f0 += 1)
                    {
                        g_450[g_407.f0] = 0x404CL;
                    }
                    if (p_19)
                        break;
                }
                if (func_21(((((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(func_21((g_140 > (safe_mod_func_uint32_t_u_u(0x8ED6293CL, func_21(p_19, p_20, g_273.f1, g_418.f1)))), p_19, p_19, p_20), l_1131)) != p_19) < 6L) > l_889), 65530UL)) >= g_881.f0) <= g_522[0]) >= p_19), g_406.f1, l_1132, l_970[0]))
                {
                    unsigned l_1133[6] = {0UL, 0xA0695E15L, 0UL, 0xA0695E15L, 0UL, 0xA0695E15L};
                    int i;
                    l_1133[2]--;
                }
                else
                {
                    int l_1138 = 0L;
                    unsigned char l_1153 = 0xA6L;
                    int l_1155 = (-6L);
                    unsigned l_1156 = 0xAAE35691L;
                    int l_1164 = 0x161A5C19L;
                    unsigned l_1185 = 0xDA4B3F87L;
                    l_1138 = (safe_lshift_func_uint8_t_u_u(0xC9L, l_973[6][1]));
                    if ((((l_1152 = func_21(p_19, ((((g_407.f1 = (l_1151 = ((~l_943[0]) ^ func_21(p_19, (g_472 |= ((safe_mul_func_uint16_t_u_u(((((l_1138 == l_1141) && (safe_mod_func_uint32_t_u_u(((func_21((safe_mul_func_int16_t_s_s(func_21(((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u(0UL)), (safe_add_func_uint16_t_u_u(p_19, p_20)))) != g_418.f4), g_711.f0, g_406.f1, g_357.f3), g_710.f3)), p_19, l_943[0], l_1131) < p_19) ^ l_966), g_1004.f3))) >= p_19) & 0xF85BL), 9UL)) & (-1L))), p_19, g_1071[1][0].f0)))) && p_20) != g_1070.f1) ^ 0x1045A3C21D1D6CDELL), l_1132, p_20)) ^ l_1153) >= g_522[0]))
                    {
                        l_1154[1] ^= g_147;
                        if (g_848.f4)
                            break;
                    }
                    else
                    {
                        short l_1163 = 0x790DL;
                        ++l_1156;
                        l_1168 &= ((l_1097 ^= (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(g_331.f2, (p_20 = ((((l_1156 != 7L) > 65530UL) < (func_21((l_1155 = (l_28 == l_1163)), (l_1164 = l_1163), (safe_mul_func_int16_t_s_s(func_21(((l_943[0] ^ p_20) >= 0xC91D47479848A94CLL), g_494.f0, g_747.f0, p_19), l_1167)), l_1131) != 1L)) < 0x0BDC5C3BL)))), g_348))) <= p_19);
                    }
                    if (((safe_rshift_func_uint16_t_u_u((l_1154[0] = (g_1070.f0 != (((safe_add_func_uint32_t_u_u(((p_20 &= (g_204 = (safe_rshift_func_int16_t_s_s((g_157 &= l_1164), 10)))) <= func_21((safe_add_func_int64_t_s_s((g_1004.f3 > (((g_450[8]++) < 0xE063L) & ((l_1131 >= (func_21((l_970[0] = (((safe_add_func_int64_t_s_s(p_19, 0xF39668948BE3D591LL)) || (func_21((g_95 |= l_889), p_19, l_966, g_395.f4) < l_1153)) == 0UL)), l_1181, l_1182, l_1045) & 0xCE0D837CECAEBF01LL)) || p_19))), 0x88F78281BAA0A45DLL)), p_19, l_889, p_19)), 0x88128297L)) <= p_19) > g_105))), g_331.f3)) > 0x86L))
                    {
                        g_1183 = g_1122;
                        g_407 = g_1184[3];
                        return l_1185;
                    }
                    else
                    {
                        g_1186 = g_272;
                        if (g_672.f4)
                            break;
                    }
                    ++l_1188;
                }
                g_1191 = g_357;
            }
            return l_1192;
        }
        else
        {
            l_1151 &= p_19;
        }
        g_270.f3 = p_20;
    }
    g_1049.f3 = (safe_mod_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(g_268.f4, (safe_add_func_uint16_t_u_u((((+((-1L) != (g_1184[3].f0 || 3UL))) > g_273.f1) < ((safe_rshift_func_int8_t_s_s(p_19, 6)) != (func_66(p_19) || 0x1010L))), g_273.f2)))) != l_748), l_1182));
    return p_20;
}







static unsigned long long func_21(unsigned char p_22, short p_23, unsigned p_24, unsigned char p_25)
{
    unsigned short l_883[8] = {65531UL, 65528UL, 65531UL, 65528UL, 65531UL, 65528UL, 65531UL, 65528UL};
    int i;
    ++l_883[6];
    return l_883[6];
}







static unsigned func_29(unsigned short p_30, int p_31, int p_32, unsigned char p_33, long long p_34)
{
    unsigned l_754 = 0x203D5926L;
    int l_759 = 0x9056AD76L;
    unsigned l_764[2];
    int l_766 = 0x442455F8L;
    int l_841 = (-7L);
    int l_842 = 6L;
    int l_844[3];
    int l_877 = 8L;
    unsigned char l_878 = 1UL;
    int i;
    for (i = 0; i < 2; i++)
        l_764[i] = 0x33093F76L;
    for (i = 0; i < 3; i++)
        l_844[i] = 9L;
    if ((func_42((safe_sub_func_uint8_t_u_u(p_31, (g_174++))), func_73(p_32), l_754, l_754, (l_766 &= (g_765 ^= (((safe_rshift_func_int8_t_s_s(1L, (l_759 ^= (safe_mul_func_uint8_t_u_u(p_33, g_406.f4))))) || ((safe_mul_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((p_33 = (g_94 && 0xCB778611L)) <= 0x66L) && g_270.f1), l_759)) & l_754), l_764[1])) != 18446744073709551614UL)) && l_754)))) || 0UL))
    {
        return l_764[0];
    }
    else
    {
        short l_778 = 0xF53DL;
        long long l_779 = 0xCAEE394DCEF13477LL;
        long long l_786 = (-3L);
        int l_811 = 8L;
        int l_840[6][3][8] = {{{1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}}, {{1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}}, {{1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}}, {{1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}}, {{1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}}, {{1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}, {1L, (-1L), 0x1B26DFE7L, 1L, 1L, 0x1B26DFE7L, (-1L), 1L}}};
        unsigned l_845 = 0x7B286F76L;
        int i, j, k;
        l_779 = (safe_unary_minus_func_uint16_t_u(func_48(((safe_add_func_int16_t_s_s(p_33, (safe_lshift_func_uint8_t_u_u(p_32, 0)))) & func_48((func_66(p_32) > p_34), (safe_lshift_func_int8_t_s_u(g_711.f3, (!(safe_add_func_uint32_t_u_u((l_759 > 1L), (safe_mod_func_uint64_t_u_u(p_30, g_395.f3))))))), p_33, p_33, l_759)), g_406.f0, p_33, g_747.f2, l_778)));
        if ((l_779 | (((safe_add_func_uint64_t_u_u((+l_754), 0x39D7BACB671411CFLL)) <= (safe_mod_func_int64_t_s_s(((p_33 > (safe_sub_func_int64_t_s_s((1UL <= p_30), (func_73(l_754) == (((p_31 >= g_273.f3) ^ 0x716C769544710133LL) ^ 0x9F0906F9L))))) && p_32), l_786))) > 0xB8599A6CL)))
        {
            int l_800[5][4] = {{9L, 9L, 0x347D4771L, 9L}, {9L, 9L, 0x347D4771L, 9L}, {9L, 9L, 0x347D4771L, 9L}, {9L, 9L, 0x347D4771L, 9L}, {9L, 9L, 0x347D4771L, 9L}};
            int l_812 = (-9L);
            int i, j;
            l_766 = (safe_add_func_uint64_t_u_u(((p_31 <= l_764[0]) != (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((p_34 | (((g_522[0] = 0xFB5530D22EBC7097LL) <= (safe_mod_func_uint64_t_u_u(func_56(p_31, l_779, (~g_331.f2), (safe_unary_minus_func_uint16_t_u((!((l_786 != (safe_rshift_func_uint16_t_u_s((((l_800[3][1] = l_764[1]) > 0xE83446EAB4B9DFB1LL) ^ l_759), 3))) && l_778)))), g_525.f0), l_764[1]))) | 0xD1L)), 0x96L)), l_754)), 9))), l_779));
            l_812 = (((g_395.f4 && (p_33 = func_48(p_30, (safe_mul_func_int8_t_s_s(3L, (safe_mul_func_int8_t_s_s((g_358.f0 = (l_811 |= func_48(p_30, (safe_rshift_func_int8_t_s_u(0xEBL, 1)), (safe_rshift_func_uint8_t_u_u(l_764[1], (0x18C25AC8A32BBDF2LL & l_779))), ((safe_mul_func_uint16_t_u_u(((g_246 = g_747.f4) == l_754), 0UL)) == p_34), g_268.f0))), l_786)))), p_33, g_269.f2, p_33))) > 1L) >= 0x70L);
        }
        else
        {
            long long l_834 = 7L;
            int l_838 = 0x39C5718AL;
            int l_839[3][8][10] = {{{0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}}, {{0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}}, {{0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}, {0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L), 0x919A7B2DL, (-9L), 0x017AACC0L, 0x017AACC0L, (-9L)}}};
            long long l_843 = 0L;
            int i, j, k;
            for (g_272.f0 = 0; (g_272.f0 >= (-12)); g_272.f0 = safe_sub_func_int8_t_s_s(g_272.f0, 7))
            {
                char l_825[3][7][8] = {{{0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}}, {{0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}}, {{0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}, {0x0AL, (-6L), 1L, (-6L), 0x0AL, 0x59L, 0x0AL, (-6L)}}};
                int i, j, k;
                for (g_359.f0 = (-15); (g_359.f0 >= 29); g_359.f0 = safe_add_func_int32_t_s_s(g_359.f0, 1))
                {
                    short l_837 = 0x2194L;
                    g_407.f3 ^= func_56(g_269.f0, func_66((safe_lshift_func_uint8_t_u_s(0xE5L, 7))), (safe_mul_func_uint16_t_u_u((safe_mul_func_int64_t_s_s((safe_add_func_int64_t_s_s(l_825[1][4][2], l_778)), ((((safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(g_408.f3, (safe_mul_func_int16_t_s_s(l_834, (l_766 = (l_834 && (safe_rshift_func_uint8_t_u_u((l_834 | l_779), l_837)))))))), g_522[0])), l_779)) == 0x74L) ^ l_825[1][2][2]) <= l_834))), 0x644FL)), l_764[1], p_30);
                }
                l_759 = p_33;
            }
            l_845--;
            g_849 = g_848;
            for (g_273.f0 = 2; (g_273.f0 >= 0); g_273.f0 -= 1)
            {
                int i;
                l_842 |= (l_844[g_273.f0] ^ (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(((l_766 = l_844[g_273.f0]) <= l_844[g_273.f0]), 4)), (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((l_811 &= func_73(((safe_mul_func_int8_t_s_s(l_844[g_273.f0], g_395.f4)) || ((safe_lshift_func_int16_t_s_u(func_48(g_270.f3, func_73((!func_73((g_357.f1 >= (func_73((l_779 & (p_34 ^= l_840[1][1][5]))) | g_450[4]))))), g_269.f2, p_32, g_418.f3), g_710.f0)) < g_406.f1)))) ^ 0xF641L), 1)), p_32)))));
                g_271[0][5].f3 ^= (l_842 < g_359.f3);
                l_840[3][2][5] = (safe_lshift_func_uint8_t_u_s(255UL, ((g_406.f0 <= p_30) & (l_839[2][4][5] < (4L != (l_841 = (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((p_33--), 6)) <= (251UL & p_30)) >= (func_66(l_834) != g_331.f0)), 18446744073709551615UL))))))));
            }
        }
        for (g_95 = (-20); (g_95 > 26); g_95++)
        {
            int l_876 = 0x4DD32ED4L;
            for (g_147 = 0; (g_147 < 19); g_147++)
            {
                l_811 = (safe_lshift_func_uint16_t_u_s((g_358.f0 && g_95), (p_31 < l_876)));
            }
            g_272.f3 = p_33;
            if (p_31)
                continue;
        }
    }
    --l_878;
    g_357.f3 = g_271[0][5].f0;
    g_882 = g_881;
    return l_764[1];
}







static unsigned char func_42(int p_43, unsigned short p_44, int p_45, unsigned short p_46, int p_47)
{
    unsigned short l_497 = 0x47D9L;
    int l_513[9];
    int l_583 = (-1L);
    unsigned long long l_584 = 1UL;
    int l_586 = 0x2920B057L;
    unsigned l_587 = 0UL;
    unsigned l_599 = 0x3359B462L;
    unsigned l_667[7][8] = {{18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}, {18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}, {18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}, {18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}, {18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}, {18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}, {18446744073709551615UL, 6UL, 18446744073709551615UL, 3UL, 0UL, 0UL, 0x7DF568E4L, 0x7DF568E4L}};
    unsigned char l_692 = 0UL;
    unsigned l_723 = 0x7121FC7DL;
    int i, j;
    for (i = 0; i < 9; i++)
        l_513[i] = 0x4E450C33L;
lbl_614:
    for (g_157 = 0; (g_157 > 23); g_157 = safe_add_func_int32_t_s_s(g_157, 9))
    {
        unsigned short l_506 = 0x4C85L;
        int l_511 = 0x9169287FL;
        char l_512[9] = {0xF2L, 0xF9L, 0xF2L, 0xF9L, 0xF2L, 0xF9L, 0xF2L, 0xF9L, 0xF2L};
        int l_532 = (-1L);
        int l_534 = (-7L);
        int l_535 = (-3L);
        int l_540 = 1L;
        int l_541 = 1L;
        int l_544 = 0xB2B10520L;
        int l_550 = 0x226BB654L;
        int l_553[5] = {2L, 0x06D1C905L, 2L, 0x06D1C905L, 2L};
        unsigned char l_576 = 249UL;
        int i;
        if (l_497)
            break;
        g_374 &= (safe_sub_func_uint64_t_u_u((l_513[7] = func_56((((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((l_497 | p_47), func_66(l_506))), p_47)) || func_48(((-6L) & p_43), (safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(p_45, ((l_511 ^= 0xFF42A157L) <= g_272.f1))) == 65527UL), 0x3DL)), l_506, l_506, g_147)), l_512[3])) == p_44) ^ l_497), l_497, g_418.f1, l_512[3], p_46)), l_497));
        for (p_44 = 1; (p_44 <= 8); p_44 += 1)
        {
            int l_523 = 3L;
            char l_524[6][7][6] = {{{0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}}, {{0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}}, {{0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}}, {{0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}}, {{0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}}, {{0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}, {0x0DL, 0x2CL, 0L, 0L, 0x29L, (-5L)}}};
            int l_533 = (-1L);
            int l_545 = 0L;
            long long l_547 = 0xCE70BBCC75FB7C0DLL;
            int l_548 = 0L;
            int l_551 = 1L;
            int l_555 = 0x1FB55890L;
            int l_558 = 0x6AE211D9L;
            int l_559 = 0x3C1E21A4L;
            int l_561[4][9][5] = {{{0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}}, {{0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}}, {{0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}}, {{0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}, {0x70BC12DAL, 0x3FE6D684L, 0x17674C85L, 1L, 0x4CE22D36L}}};
            int i, j, k;
            if ((~(safe_add_func_uint8_t_u_u((g_450[p_44] <= func_56(g_5, (g_268.f3 &= ((l_506 > (safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((0x8BL || g_450[p_44]) || g_359.f1) || 0xDA2FL), (l_523 = (safe_rshift_func_int16_t_s_s(g_522[0], 8))))), 0UL))) || g_359.f3)), l_524[1][4][5], g_450[p_44], p_47)), l_497))))
            {
                g_3[2][0][1] ^= 9L;
                return g_359.f2;
            }
            else
            {
                unsigned l_526 = 18446744073709551607UL;
                int l_531 = 0xE2D0096CL;
                int l_536 = (-2L);
                int l_543 = 8L;
                int l_546 = 0x316D2AB9L;
                int l_549 = 0xC5C0EDC4L;
                int l_554 = 0L;
                int l_556 = 0xE2A2A03EL;
                int l_560 = 3L;
                int l_563 = (-8L);
                int l_568 = (-1L);
                int l_569 = (-4L);
                int l_570[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_570[i] = 0x777DE3ABL;
                for (g_407.f0 = 0; (g_407.f0 >= 0); g_407.f0 -= 1)
                {
                    int i, j, k;
                    g_331 = g_525;
                    if (g_3[g_407.f0][g_407.f0][(g_407.f0 + 4)])
                        continue;
                    l_526++;
                }
                for (g_358.f2 = 0; (g_358.f2 <= (-13)); g_358.f2--)
                {
                    int l_538 = 0xF6423927L;
                    int l_539 = 0xBE214CC4L;
                    int l_542 = 0x148CAC0EL;
                    int l_552 = 0xE7C4F223L;
                    int l_557 = 0xABDAFC4DL;
                    int l_562 = 0xDEE36842L;
                    int l_564 = 0x185D0533L;
                    int l_565 = 0L;
                    int l_567 = 1L;
                    int l_571 = 0xF88D8BF3L;
                    int l_572 = 0x68B8C428L;
                    int l_573 = 0x9A101F06L;
                    int l_574 = 4L;
                    int l_575 = 5L;
                    l_576++;
                }
                return p_45;
            }
        }
    }
lbl_718:
    p_43 = (l_497 >= (safe_add_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_513[7], ((l_583 = 0x2EL) != l_513[7]))), (func_66(l_584) > (safe_unary_minus_func_uint32_t_u((((g_5 == (g_357.f0 = (((l_586 = p_47) & (((+(g_359.f1 = (g_273.f0 == l_513[7]))) < 4294967295UL) >= g_331.f4)) < l_584))) > g_272.f2) & l_587)))))));
    if (l_513[7])
    {
        unsigned short l_597 = 0xB95AL;
        int l_598 = 0x7869A243L;
        int l_600 = 0x4BF12715L;
        if (((!p_47) == (-5L)))
        {
            unsigned char l_590 = 0x29L;
            l_600 = (safe_mul_func_int16_t_s_s(((l_599 = ((l_590 == l_587) || ((p_46 && (g_95 = (((p_43 & (!((safe_rshift_func_uint8_t_u_s(255UL, 6)) <= ((g_125 ^ (safe_mod_func_uint16_t_u_u((0UL < (l_598 = (safe_mul_func_uint8_t_u_u(l_597, l_586)))), 1L))) >= 0xB6DDL)))) | 0L) & 255UL))) == 0x15AD1007L))) != p_47), g_3[0][0][2]));
        }
        else
        {
            return g_155;
        }
    }
    else
    {
        unsigned l_620 = 0xC7F10669L;
        int l_630 = 0x19F6CAF6L;
        int l_736 = 1L;
        unsigned short l_737[7][10] = {{3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}, {3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}, {3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}, {3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}, {3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}, {3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}, {3UL, 0x9EBBL, 0x0BA7L, 65535UL, 65535UL, 0x0BA7L, 0x9EBBL, 3UL, 0x0BA7L, 3UL}};
        unsigned char l_744 = 0x83L;
        int i, j;
        if ((g_406.f3 = 0x0C52BBFBL))
        {
            unsigned l_617 = 18446744073709551614UL;
            int l_631 = (-1L);
            int l_632 = (-2L);
            p_43 = g_330[0].f4;
            if (((safe_rshift_func_uint16_t_u_s(p_43, 4)) == l_583))
            {
                unsigned char l_605 = 0x7FL;
                int l_610 = 0x63D5DD70L;
                for (g_272.f3 = (-14); (g_272.f3 > (-10)); ++g_272.f3)
                {
                    ++l_605;
                    if (p_44)
                        continue;
                    for (g_158 = 2; (g_158 <= 9); g_158 += 1)
                    {
                        unsigned short l_611 = 65529UL;
                        g_273.f3 = (!(safe_lshift_func_uint8_t_u_u(((0xE59B7B6DL >= p_44) ^ p_46), (l_611--))));
                    }
                    if (g_204)
                        goto lbl_614;
                }
                g_330[7] = g_273;
                if (((safe_rshift_func_int8_t_s_s((-1L), 6)) >= 18446744073709551614UL))
                {
                    ++l_617;
                }
                else
                {
                    return g_357.f1;
                }
            }
            else
            {
                char l_629 = 0xD6L;
                int l_642 = 0xA00F1B26L;
                int l_656 = 0xC5E9DDFAL;
                l_632 = (l_620 <= (l_631 = (safe_add_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(func_48(l_617, l_513[7], g_269.f4, p_47, (l_630 = ((((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((0L < 0x41EF07C6L), l_586)) <= (((func_66(p_47) ^ l_629) == g_358.f1) <= g_89)), l_617)) > g_450[0]) >= l_620) ^ l_513[7]))), g_450[4])) == 0xECL) != p_44), (-1L)))));
                for (g_395.f1 = 0; (g_395.f1 >= 26); g_395.f1++)
                {
                    char l_635 = 0xA0L;
                    if ((l_629 < func_56(g_408.f1, g_522[0], (l_635 >= (safe_mul_func_uint16_t_u_u((0xF550A512A9195D42LL < l_635), g_89))), l_599, func_73(((g_246 = (l_632 = 3UL)) & 0xE121E370BE26844ELL)))))
                    {
                        g_330[0].f3 = g_271[0][5].f4;
                        l_642 |= (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u(g_358.f2, 0xCDL)) >= l_629), 14));
                        return l_642;
                    }
                    else
                    {
                        long long l_645 = 0xBB7D6A130808CB3BLL;
                        l_631 = ((func_56(l_635, ((((0xC9L & (safe_rshift_func_uint16_t_u_u(func_56(g_406.f1, p_45, ((func_66(l_631) | l_620) != 0x16E41643L), ((g_407.f3 = p_45) == 0x608D529DL), p_43), p_47))) != g_331.f0) ^ 0xB5L) | g_331.f0), p_46, p_43, l_645) != g_406.f2) >= g_89);
                    }
                    if (((+(safe_mul_func_int16_t_s_s((g_204 &= (safe_mul_func_int8_t_s_s((+(g_418.f4 | l_599)), ((safe_unary_minus_func_int8_t_s((g_358.f2 = (((((safe_add_func_int64_t_s_s(l_635, 0xD3686828E3F0F916LL)) | (safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u((l_656 |= g_359.f3))), ((((l_620 >= ((func_66(func_66(g_5)) | 0x11BCL) & 0xEEF8L)) <= 1L) & g_272.f2) >= 0x38570D36L)))) == l_513[2]) | 0x4385L) < l_599)))) || 0x138D25DF6681A31ELL)))), g_269.f2))) || l_642))
                    {
                        if (g_273.f1)
                            goto lbl_614;
                        return g_269.f1;
                    }
                    else
                    {
                        l_583 ^= p_43;
                        if (g_268.f0)
                            break;
                        return l_635;
                    }
                }
            }
        }
        else
        {
            int l_670[4][10] = {{0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L}, {0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L}, {0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L}, {0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L, 0xBE5EE560L, (-1L), 0xBE5EE560L}};
            int l_714 = 0L;
            int i, j;
            for (g_406.f3 = 3; (g_406.f3 <= 8); g_406.f3 += 1)
            {
                unsigned l_671[5];
                int l_674 = 1L;
                unsigned char l_713 = 247UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_671[i] = 0x6C9C6D88L;
                l_513[g_406.f3] = l_513[g_406.f3];
                if (((0L | func_73(((((safe_sub_func_int32_t_s_s(0L, func_66(func_66(((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((((safe_mul_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(l_513[g_406.f3], (l_630 = (18446744073709551608UL | p_44)))) && ((func_73(l_667[2][5]) & (safe_mod_func_uint16_t_u_u((p_44 <= (~(l_670[0][3] = l_513[g_406.f3]))), g_272.f4))) >= l_671[1])) ^ 8UL), 255UL)) < g_406.f2) < 0x3DCEL) || (-1L)), 1)), 1L)) && l_599))))) <= p_43) == 0x17L) | 6L))) || p_43))
                {
                    unsigned short l_681[6][5];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_681[i][j] = 65529UL;
                    }
                    if (p_45)
                        break;
                    g_673 = g_672;
                    for (g_268.f3 = 0; (g_268.f3 >= 0); g_268.f3 -= 1)
                    {
                        int i, j;
                        l_674 = (l_513[g_406.f3] &= l_667[(g_268.f3 + 2)][g_268.f3]);
                        g_358.f3 &= (g_374 &= ((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(((((safe_add_func_uint16_t_u_u(65526UL, func_66(g_522[g_268.f3]))) && func_66(l_513[(g_268.f3 + 6)])) < g_406.f1) ^ l_670[0][3]), 2)) && ((-6L) ^ (g_147 ^ g_566))), p_43)) | l_681[3][4]));
                        p_43 ^= p_45;
                    }
                    p_43 &= ((safe_lshift_func_uint16_t_u_s((((func_66(l_513[7]) < (p_46 = ((safe_rshift_func_int16_t_s_s(g_471, 12)) && p_47))) < (safe_rshift_func_int8_t_s_s((l_630 = ((g_522[0] = (safe_add_func_int8_t_s_s(l_681[3][2], (-5L)))) > g_270.f1)), (l_692 = (safe_lshift_func_uint16_t_u_s(l_513[g_406.f3], 4)))))) == p_45), l_671[4])) > l_671[4]);
                }
                else
                {
                    unsigned char l_697 = 0UL;
                    if ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s((p_44 | 0x7398702F430CC140LL), (l_697 > ((((!(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((g_359.f1 >= g_493.f0) <= func_66((func_66((safe_mul_func_int16_t_s_s(g_272.f1, (((g_395.f0 | (((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((p_46 &= l_620) <= p_47), l_697)) || l_670[0][3]), g_522[0])) <= 0xF6D7C15FL) < g_359.f1)) >= p_45) > l_697)))) <= l_697))) == p_45), p_44)), 1)), g_406.f0))) < 0x93C9AFCDL) < 0L) & g_268.f2)))) > 0L), g_406.f3)))
                    {
                        unsigned short l_712 = 0xDEF5L;
                        if (l_584)
                            goto lbl_614;
                        g_711 = g_710;
                        if (p_44)
                            break;
                        if (l_712)
                            continue;
                    }
                    else
                    {
                        unsigned short l_715 = 0x063DL;
                        if (l_713)
                            break;
                        ++l_715;
                        if (g_269.f2)
                            goto lbl_718;
                    }
                }
                for (g_174 = 0; (g_174 <= 0); g_174 += 1)
                {
                    int i, j;
                    if (g_357.f1)
                        goto lbl_614;
                    l_723 |= (l_670[(g_174 + 3)][(g_174 + 8)] <= (((safe_lshift_func_int16_t_s_u(l_670[g_174][(g_174 + 1)], ((safe_lshift_func_uint8_t_u_u(l_670[(g_174 + 1)][(g_174 + 3)], 0)) >= g_408.f0))) <= func_73((l_513[g_406.f3] = 0x8159BFAB2DADDA11LL))) <= ((((g_358.f2 ^ 0x517EL) || p_44) != g_5) == l_670[(g_174 + 3)][(g_174 + 8)])));
                }
                for (g_359.f2 = 0; (g_359.f2 >= 0); g_359.f2 -= 1)
                {
                    long long l_724[6] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
                    int l_735 = 0x4568A6EFL;
                    int i;
                    for (g_418.f3 = 8; (g_418.f3 >= 0); g_418.f3 -= 1)
                    {
                        l_724[2] ^= g_3[1][0][1];
                    }
                    if (g_359.f3)
                        continue;
                    l_674 &= (((((l_737[6][2] = (g_272.f0 = ((safe_rshift_func_uint8_t_u_u(l_630, 0)) | (((!g_331.f1) ^ func_73((g_84 = (((l_714 = (l_736 = ((safe_lshift_func_int8_t_s_u((g_493.f2 & (((0x6557FA8D2F6B723FLL >= l_667[2][5]) != (l_671[2] >= (safe_mul_func_uint8_t_u_u(((l_583 &= p_47) < l_620), (safe_rshift_func_uint8_t_u_s((l_735 ^= (safe_add_func_uint16_t_u_u((l_513[g_406.f3] = l_670[0][9]), 4UL))), 2)))))) ^ g_78)), l_670[0][3])) & p_43))) != g_330[0].f1) != 0L)))) != 5UL)))) && 255UL) && g_331.f4) > g_359.f2) & 1L);
                    p_43 |= (safe_sub_func_uint32_t_u_u(((g_348 = g_359.f2) == ((l_714 |= (safe_mod_func_int32_t_s_s(0xA7BE5B9AL, (g_672.f2 ^ 8UL)))) || (safe_lshift_func_int16_t_s_u(l_744, 12)))), ((p_44 ^ (safe_mul_func_uint16_t_u_u(0xFE49L, func_73(l_670[2][5])))) >= p_44)));
                }
            }
        }
        g_271[0][5] = g_747;
    }
    return g_493.f0;
}







static int func_48(unsigned p_49, char p_50, unsigned p_51, int p_52, long long p_53)
{
    unsigned l_312 = 6UL;
    int l_315 = (-2L);
    int l_316[7] = {0xB0368638L, 0xD908F457L, 0xB0368638L, 0xD908F457L, 0xB0368638L, 0xD908F457L, 0xB0368638L};
    short l_383[6] = {(-10L), 0x83DDL, (-10L), 0x83DDL, (-10L), 0x83DDL};
    int l_401 = 0x4EF84BDCL;
    unsigned short l_457 = 0xC0E5L;
    unsigned short l_460 = 0x5FFFL;
    int i;
    for (p_49 = 0; (p_49 <= 0); p_49 += 1)
    {
        unsigned short l_309 = 0x9B48L;
        int l_336 = 0x9B654D01L;
        int l_400 = 0xA962BC0DL;
        int l_402 = 0x718F28EBL;
        int l_422 = 0x24B0BE51L;
        int l_424[6][10] = {{(-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L}, {(-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L}, {(-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L}, {(-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L}, {(-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L}, {(-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L, (-1L), 0x8A34C089L}};
        int i, j;
        p_52 = (safe_unary_minus_func_int16_t_s(g_273.f4));
        if (((((safe_lshift_func_uint8_t_u_u(255UL, (((safe_rshift_func_int8_t_s_u(l_309, (g_272.f3 < (l_316[2] &= (((safe_sub_func_uint8_t_u_u(((g_273.f3 = l_312) != 0x0AE17FB4L), (safe_mul_func_int8_t_s_s(0xCEL, p_53)))) > l_315) | (g_94 && (-2L))))))) == l_315) & p_49))) ^ 0UL) || l_309) == 0x67L))
        {
            for (p_52 = 0; p_52 < 7; p_52 += 1)
            {
                l_316[p_52] = 0xE435CB93L;
            }
        }
        else
        {
            int l_328[4][9] = {{0xA9D0DC52L, (-4L), 0xA9D0DC52L, 1L, (-1L), 0xB401B76CL, 0xA13EBE0AL, 0xA13EBE0AL, 0xB401B76CL}, {0xA9D0DC52L, (-4L), 0xA9D0DC52L, 1L, (-1L), 0xB401B76CL, 0xA13EBE0AL, 0xA13EBE0AL, 0xB401B76CL}, {0xA9D0DC52L, (-4L), 0xA9D0DC52L, 1L, (-1L), 0xB401B76CL, 0xA13EBE0AL, 0xA13EBE0AL, 0xB401B76CL}, {0xA9D0DC52L, (-4L), 0xA9D0DC52L, 1L, (-1L), 0xB401B76CL, 0xA13EBE0AL, 0xA13EBE0AL, 0xB401B76CL}};
            unsigned l_378 = 0xCFDC6233L;
            unsigned char l_403 = 0xACL;
            int i, j;
            if (func_66(((248UL < (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int16_t_s(l_315)) & (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_315, ((g_273.f2 = g_246) ^ (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_328[0][8] != 0x0E6226BAD4DA2322LL), (g_271[0][5].f4 & (0xAAF9CA1D855957BALL & 0L)))), 0x79L))))), p_50))), 8))) != g_273.f1)))
            {
                unsigned l_329 = 0xF7423D9BL;
                int l_366 = 1L;
                unsigned long long l_373 = 0xF4237CFC89070E22LL;
                int l_375 = (-8L);
                int l_376 = 0x8723BDF1L;
                int l_377 = 0x438EB258L;
                if (l_329)
                {
                    unsigned l_337 = 4294967291UL;
                    int l_340[8][9][3] = {{{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}, {{(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}, {(-1L), 1L, (-8L)}}};
                    int i, j, k;
                    g_331 = g_330[0];
                    if ((safe_rshift_func_int8_t_s_s(0x14L, 7)))
                    {
                        g_271[0][5].f3 = ((safe_mul_func_uint16_t_u_u(l_336, (~(g_270.f2 == (l_337 |= func_73(p_51)))))) == (l_336 & (g_272.f0 = ((safe_rshift_func_uint16_t_u_u((((p_51 ^ (l_340[5][7][0] |= p_49)) <= (safe_mul_func_int16_t_s_s(p_50, (0x8138001BA6B6870ALL ^ p_50)))) | 0L), g_272.f2)) & g_330[0].f1))));
                    }
                    else
                    {
                        unsigned l_343 = 0xD6E0BD63L;
                        if (l_329)
                            break;
                        l_343++;
                        g_272.f3 = (safe_mod_func_uint8_t_u_u(((g_348 && (safe_sub_func_uint64_t_u_u((((((g_331.f0 <= (g_270.f1 > g_206)) & (~l_309)) ^ (safe_mul_func_int8_t_s_s((((1UL < l_329) && (g_269.f0 & (((l_316[2] && l_337) && (-10L)) || p_49))) ^ 0x5485L), 0xE3L))) >= 0UL) != g_273.f0), l_343))) && 18446744073709551615UL), p_51));
                        p_52 = (safe_add_func_int32_t_s_s(p_52, g_3[1][0][1]));
                    }
                    if ((safe_lshift_func_int16_t_s_u((p_49 | func_73(l_336)), 13)))
                    {
                        g_357 = g_273;
                        l_328[2][5] = g_78;
                        g_359 = g_358;
                        p_52 ^= (safe_add_func_uint64_t_u_u((l_336 = (g_270.f2 >= (((func_73((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s((l_366 = p_50), func_73((g_84 &= (246UL >= g_357.f0))))) && (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_337, 12)), (safe_add_func_uint8_t_u_u(0x0DL, 0x68L))))), g_273.f2))) == 5L) || g_174) || l_373))), p_49));
                    }
                    else
                    {
                        l_328[0][8] ^= (-6L);
                        return p_50;
                    }
                }
                else
                {
                    g_272.f3 = func_66(g_330[0].f4);
                }
                --l_378;
                for (g_154 = 0; (g_154 <= 3); g_154 += 1)
                {
                    return p_53;
                }
            }
            else
            {
                unsigned short l_394[2];
                int l_397 = 0x571EEE5CL;
                int l_399[8][8] = {{1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}, {1L, (-10L), 0xA714A2ECL, (-10L), 1L, (-4L), 1L, (-10L)}};
                unsigned l_417 = 1UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_394[i] = 0UL;
                if ((safe_mod_func_uint8_t_u_u((l_336 = (((l_383[5] = 1UL) | g_157) && (((safe_sub_func_uint32_t_u_u((((~4294967292UL) >= l_378) > (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_53, (l_378 | l_328[0][8]))), (p_52 ^= (safe_lshift_func_uint8_t_u_u(((g_269.f0 > g_158) > 7L), 2))))), g_268.f1))), 0L)) > l_394[1]) ^ 18446744073709551607UL))), 0xB3L)))
                {
                    int l_398 = 0L;
                    for (g_331.f2 = 0; (g_331.f2 <= 0); g_331.f2 += 1)
                    {
                        int i;
                        return l_394[p_49];
                    }
                    g_268 = g_395;
                    for (g_269.f0 = 0; (g_269.f0 <= 0); g_269.f0 += 1)
                    {
                        int l_396 = 0x0EB8E422L;
                        int i, j;
                        g_271[g_269.f0][(g_269.f0 + 2)] = g_271[p_49][(p_49 + 5)];
                        g_140 = l_328[0][8];
                        l_403--;
                    }
                }
                else
                {
                    g_407 = g_406;
                    for (g_331.f2 = 0; (g_331.f2 <= 0); g_331.f2 += 1)
                    {
                        int i, j;
                        l_316[5] = l_316[2];
                        g_271[g_331.f2][(g_331.f2 + 4)] = g_271[g_331.f2][(p_49 + 2)];
                        if (p_49)
                            continue;
                    }
                    for (g_407.f2 = 0; (g_407.f2 <= 0); g_407.f2 += 1)
                    {
                        int i, j;
                        g_271[p_49][(g_407.f2 + 2)] = g_408;
                        p_52 = p_51;
                        return p_53;
                    }
                }
                p_52 = (safe_mul_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(l_401, p_53)) <= func_73(l_383[5])), (safe_mod_func_int8_t_s_s(((0UL || (l_403 && (l_402 ^= (safe_mod_func_uint16_t_u_u(l_417, g_395.f3))))) >= l_383[5]), p_53))));
            }
            if (g_407.f0)
                continue;
        }
        for (p_52 = 0; (p_52 >= 0); p_52 -= 1)
        {
            unsigned l_419 = 4294967294UL;
            int l_420 = 0x8F204AD2L;
            int l_421 = 0x04B760C9L;
            int l_423 = 0x4AA6C5B2L;
            int l_425 = (-6L);
            int l_426 = 7L;
            int l_427 = (-1L);
            int l_428 = 1L;
            int l_429 = 0x89974250L;
            int l_430 = 0xECC3D7A1L;
            int l_431 = 7L;
            int l_432 = 0L;
            int l_433 = (-6L);
            int l_434 = 0xCF849704L;
            int l_435 = (-7L);
            int l_436 = 0x7C3C8B75L;
            int l_437[10][7] = {{9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}, {9L, 0xE8B4BC99L, 0x27CF19DAL, (-4L), 0L, 0L, 0L}};
            unsigned long long l_438 = 8UL;
            unsigned l_480 = 4294967289UL;
            int i, j;
            if (func_73(p_52))
            {
                g_268 = g_418;
            }
            else
            {
                return l_419;
            }
            ++l_438;
            for (g_395.f2 = 0; (g_395.f2 >= 0); g_395.f2 -= 1)
            {
                unsigned short l_449 = 0x82C3L;
                int l_453 = (-1L);
                int l_455 = 1L;
                int l_456[6][3][3] = {{{9L, 1L, 9L}, {9L, 1L, 9L}, {9L, 1L, 9L}}, {{9L, 1L, 9L}, {9L, 1L, 9L}, {9L, 1L, 9L}}, {{9L, 1L, 9L}, {9L, 1L, 9L}, {9L, 1L, 9L}}, {{9L, 1L, 9L}, {9L, 1L, 9L}, {9L, 1L, 9L}}, {{9L, 1L, 9L}, {9L, 1L, 9L}, {9L, 1L, 9L}}, {{9L, 1L, 9L}, {9L, 1L, 9L}, {9L, 1L, 9L}}};
                int i, j, k;
                if ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u(func_73(((safe_lshift_func_uint8_t_u_s((g_174 = g_3[(g_395.f2 + 1)][p_49][p_49]), ((safe_add_func_uint8_t_u_u((((g_358.f3 < g_359.f1) >= l_449) ^ g_450[4]), (safe_mul_func_uint16_t_u_u((!g_273.f0), func_73((((g_246 = (func_73(func_73(l_422)) != 4294967295UL)) && g_154) == g_268.f0)))))) || 0xFF63BBD886A20634LL))) < 5L)), 6)) < g_89) || p_49), 4294967295UL)))
                {
                    int l_454 = 6L;
                    for (g_115 = 0; (g_115 >= 0); g_115 -= 1)
                    {
                        int i, j, k;
                        l_453 &= (p_52 <= g_272.f4);
                        l_424[5][6] |= g_331.f1;
                    }
                    if (g_273.f2)
                        continue;
                    l_457++;
                    l_453 |= func_73(p_51);
                }
                else
                {
                    unsigned short l_465 = 0x3A9CL;
                    int l_470 = 0x609E194BL;
                    int l_473[10] = {3L, 0xB9D5FF27L, 3L, 0xB9D5FF27L, 3L, 0xB9D5FF27L, 3L, 0xB9D5FF27L, 3L, 0xB9D5FF27L};
                    int i;
                    for (g_269.f3 = 8; (g_269.f3 >= 0); g_269.f3 -= 1)
                    {
                        int i;
                        ++l_460;
                        l_455 = (safe_sub_func_int64_t_s_s(g_450[(g_395.f2 + 3)], g_450[g_269.f3]));
                        g_272.f3 &= l_316[(g_395.f2 + 5)];
                    }
                    l_453 = g_330[0].f3;
                    l_400 = (l_456[4][1][1] = ((func_66(p_53) <= ((((p_50 < ((p_51 & (~(l_465 = l_455))) <= (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((0x35A9A108L & (g_406.f3 ^= (l_470 && l_424[5][6]))), (((~(--g_474)) || l_432) || l_420))), l_421)))) || (-1L)) && g_330[0].f1) == 6UL)) > g_357.f0));
                }
                if (p_53)
                    break;
                l_316[2] ^= g_271[0][5].f3;
                for (g_140 = 0; (g_140 <= 29); ++g_140)
                {
                    char l_479[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_479[i] = 0x96L;
                    l_480--;
                    return g_418.f1;
                }
            }
        }
        l_424[5][6] &= (p_52 &= 0L);
    }
    p_52 = func_66((safe_lshift_func_uint16_t_u_u(((g_147 > (safe_mul_func_int16_t_s_s((-7L), (6L && l_460)))) < ((g_357.f0 |= (((safe_mod_func_uint64_t_u_u((p_49 || (1UL & (l_315 = g_418.f2))), (safe_rshift_func_int16_t_s_u(0x62BDL, ((safe_lshift_func_int16_t_s_u(0xAF90L, 6)) || l_383[0]))))) | 0x9F07L) ^ 0xD9E9AA602BFDE3D3LL)) == l_316[2])), l_316[1])));
    g_140 = 0xB84A7B26L;
    g_494 = g_493;
    return g_140;
}







static unsigned func_56(long long p_57, int p_58, char p_59, unsigned char p_60, short p_61)
{
    unsigned l_70 = 0xB5C7B123L;
    int l_71 = 0x8E23095CL;
    int l_255 = 0x850909C1L;
    short l_267[1];
    int i;
    for (i = 0; i < 1; i++)
        l_267[i] = 0x9157L;
    p_58 = (-5L);
    l_255 = ((g_4 >= (((safe_rshift_func_int8_t_s_s((-9L), (((safe_rshift_func_int8_t_s_s(func_66((safe_mod_func_int32_t_s_s(g_5, (l_71 |= l_70)))), p_60)) && (((0x59L == 0L) <= ((safe_add_func_int16_t_s_s((func_66(g_158) && (-5L)), l_71)) > g_157)) | p_57)) == p_58))) && 0x7388L) < p_57)) != 0x8A177C5EL);
    if ((safe_rshift_func_int8_t_s_u(p_59, l_70)))
    {
        unsigned short l_258 = 0UL;
        return l_258;
    }
    else
    {
        unsigned l_261[10][3][2];
        int l_276 = 0x7DF1CD13L;
        int l_302[4];
        int i, j, k;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 2; k++)
                    l_261[i][j][k] = 0xC3D6B9C2L;
            }
        }
        for (i = 0; i < 4; i++)
            l_302[i] = 0x18718794L;
        for (l_70 = 0; (l_70 <= 0); l_70 += 1)
        {
            int l_266 = 0xB8F5414DL;
            unsigned long long l_299 = 0x7B5D319B2BCD5C98LL;
            l_71 = (func_73((safe_mul_func_int16_t_s_s(p_61, (l_261[3][2][1] &= 0x942CL)))) && ((p_57 ^ (safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((func_73(l_266) >= g_89), (l_255 = l_261[3][2][1]))), ((!(l_267[0] || g_94)) < l_266)))) || 0x3E3A797FL));
            for (g_155 = 0; (g_155 <= 0); g_155 += 1)
            {
                long long l_303 = (-6L);
                for (g_94 = 0; (g_94 >= 0); g_94 -= 1)
                {
                    g_269 = g_268;
                    for (g_268.f3 = 0; (g_268.f3 >= 0); g_268.f3 -= 1)
                    {
                        g_269 = g_269;
                        g_271[0][5] = g_270;
                    }
                }
                for (g_94 = 0; (g_94 <= 0); g_94 += 1)
                {
                    for (g_204 = 0; (g_204 <= 0); g_204 += 1)
                    {
                        g_273 = g_272;
                    }
                }
                for (g_269.f2 = 0; (g_269.f2 <= 0); g_269.f2 += 1)
                {
                    int l_298 = 0x72C4620BL;
                    int l_300 = 0x7228AEF1L;
                    for (g_268.f1 = 0; (g_268.f1 <= 0); g_268.f1 += 1)
                    {
                        int l_301 = 0x99BF919AL;
                        int i, j, k;
                        g_3[(g_269.f2 + 1)][g_269.f2][(l_70 + 3)] = (g_3[(g_268.f1 + 4)][g_269.f2][(l_70 + 2)] || ((safe_rshift_func_uint16_t_u_s(p_59, 0)) && p_57));
                        l_276 |= g_271[0][5].f2;
                        l_302[0] ^= (safe_rshift_func_uint16_t_u_u(((p_57 >= ((l_276 = (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((l_300 = (l_301 = (safe_add_func_uint16_t_u_u(((g_204 |= 0L) && (p_60 >= (safe_mul_func_uint16_t_u_u((g_105 < (safe_unary_minus_func_uint64_t_u((safe_mul_func_int16_t_s_s(0x88B7L, (p_61 = (safe_add_func_uint16_t_u_u(g_272.f4, (safe_mul_func_int8_t_s_s(((g_84 && g_211) || ((safe_sub_func_int8_t_s_s((+(safe_lshift_func_uint8_t_u_s((l_298 = (p_58 > 65533UL)), l_299))), l_300)) && l_261[1][2][1])), g_273.f2)))))))))), p_60)))), g_269.f3)))), g_268.f2)) != 0xC889L), g_273.f1))) || g_246)) || 4294967288UL), g_94));
                        l_300 ^= g_271[0][5].f0;
                    }
                    if (l_261[3][2][1])
                        break;
                    l_71 |= (l_303 | l_261[9][1][1]);
                }
            }
        }
    }
    return p_58;
}







static char func_66(unsigned p_67)
{
    unsigned l_72 = 0x77734166L;
    int l_75 = 0xA2E34EF9L;
    int l_169 = 0x2A8B94E1L;
    int l_203 = 1L;
    int l_205[9][5] = {{7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}, {7L, 3L, 0xDB42BE2FL, 3L, 7L}};
    unsigned char l_216 = 247UL;
    unsigned char l_226[8][3] = {{2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}, {2UL, 0x49L, 2UL}};
    unsigned l_227 = 0x0532C751L;
    int i, j;
    l_72 = 0x5BB0C7F2L;
    l_169 = func_73((l_75 = g_5));
lbl_245:
    if ((((safe_sub_func_uint8_t_u_u(p_67, (l_169 |= (safe_add_func_int64_t_s_s((l_75 > l_75), l_75))))) <= func_73(((l_75 <= func_73(p_67)) != (((++g_174) | ((l_75 | (safe_mul_func_uint16_t_u_u(l_72, 0xBEBDL))) && p_67)) != p_67)))) && p_67))
    {
        char l_179[6] = {0x11L, 0x3CL, 0x11L, 0x3CL, 0x11L, 0x3CL};
        int l_233 = 0x817529D5L;
        int l_242 = (-10L);
        int i;
        for (l_169 = 0; (l_169 <= 5); l_169 += 1)
        {
            unsigned char l_180 = 255UL;
            int l_181[5] = {0x5446B8ABL, 0x3A84B1F9L, 0x5446B8ABL, 0x3A84B1F9L, 0x5446B8ABL};
            unsigned l_182[1][7][9] = {{{3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}, {3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}, {3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}, {3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}, {3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}, {3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}, {3UL, 3UL, 18446744073709551607UL, 0x679AD97AL, 0x4F3F077AL, 0x679AD97AL, 18446744073709551607UL, 3UL, 3UL}}};
            int i, j, k;
            if ((l_75 = (+(((((l_179[l_169] &= ((l_180 = p_67) >= func_73(p_67))) >= (g_174 = l_181[1])) && (g_115 & l_182[0][5][1])) == (safe_lshift_func_uint8_t_u_s(p_67, (safe_lshift_func_int16_t_s_s((l_72 >= g_94), p_67))))) > g_5))))
            {
                unsigned long long l_200 = 0x5ED220E4BD68C6BBLL;
                int l_202 = 0x65C3E68FL;
                l_181[1] = l_179[2];
                l_75 = (+(l_181[2] = p_67));
                for (l_75 = 0; (l_75 <= 5); l_75 += 1)
                {
                    int l_199 = 0x6B93622BL;
                    for (g_78 = 0; (g_78 <= 0); g_78 += 1)
                    {
                        char l_201 = 0x65L;
                        g_140 = (l_200 &= ((safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(l_75, (safe_add_func_int32_t_s_s(5L, (safe_mul_func_uint8_t_u_u(0x23L, 0x40L)))))), 10)) > ((-1L) < (safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(l_75, 5)) <= p_67), (+l_199))))));
                        g_206++;
                    }
                    for (g_140 = 1; (g_140 <= 5); g_140 += 1)
                    {
                        g_78 = (p_67 > g_89);
                        l_199 = ((((l_200 >= 4294967295UL) || ((g_115 && (g_125 = l_202)) | (0xA0L <= l_179[3]))) | (g_211 = (g_84 && (safe_lshift_func_int8_t_s_s(p_67, p_67))))) & 0x19355E81L);
                    }
                }
            }
            else
            {
                long long l_225 = (-3L);
                int l_228 = 8L;
                l_75 &= (safe_add_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((l_216++), (safe_sub_func_int8_t_s_s(g_94, (((g_206 && ((safe_mul_func_int8_t_s_s(0x40L, (func_73((p_67 | (safe_add_func_int8_t_s_s((func_73(l_203) ^ (l_181[1] = l_225)), p_67)))) && p_67))) != g_5)) ^ g_94) != p_67))))) > l_226[3][0]), g_157));
                l_228 = (l_227 == (((p_67 | l_180) != p_67) != (0L && func_73(l_225))));
                if (p_67)
                    continue;
                l_228 = func_73(((safe_mod_func_uint16_t_u_u(l_226[3][2], (((g_140 & (l_233 = (g_174 &= (safe_sub_func_uint32_t_u_u((p_67++), l_228))))) < l_216) | (((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((-3L), (safe_sub_func_uint16_t_u_u((l_242 = (l_225 == ((0x4FAEA5775FD7C9B7LL ^ 0x134CBB6089915209LL) == g_78))), l_182[0][0][6])))), 0UL)) >= 0x501FL) == 0xA1L)))) & 0x5B1DL));
            }
        }
        l_169 = g_89;
        for (g_95 = 0; (g_95 > 21); g_95 = safe_add_func_uint32_t_u_u(g_95, 7))
        {
            g_78 = p_67;
            if (g_157)
                goto lbl_245;
        }
    }
    else
    {
        g_78 = 0xE1E59718L;
    }
    --g_246;
    return p_67;
}







static int func_73(long long p_74)
{
    int l_85 = (-10L);
    int l_98 = 0x9D2A59A0L;
    int l_112[9][2] = {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}};
    int i, j;
    for (p_74 = (-3); (p_74 >= (-24)); p_74 = safe_sub_func_uint16_t_u_u(p_74, 4))
    {
        int l_91 = 0x46A2FF81L;
        int l_93 = 0x13981DC8L;
        for (g_78 = 8; (g_78 > (-20)); g_78 = safe_sub_func_int16_t_s_s(g_78, 3))
        {
            short l_81 = 0x53D1L;
            int l_88 = 0x64E94140L;
            int l_90 = 0x8C4B5077L;
            int l_92 = 4L;
            l_85 = (l_81 < (((safe_rshift_func_uint16_t_u_u(g_5, 13)) > (4294967295UL == g_78)) || (g_84 = 9UL)));
            if (((l_98 = (--g_95)) >= ((safe_rshift_func_uint8_t_u_u((g_78 | g_89), g_94)) < (safe_mul_func_uint8_t_u_u(((l_112[5][0] = ((safe_rshift_func_uint8_t_u_s((++g_105), (safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((g_78 <= (-1L)), 4)), (p_74 || g_5))))) && (((0x059BF80BL ^ g_5) <= 0x905AFB09L) | l_88))) & l_85), 0x89L)))))
            {
                unsigned l_152[7] = {0UL, 0UL, 18446744073709551606UL, 0UL, 0UL, 18446744073709551606UL, 0UL};
                int i;
                l_93 = 4L;
                for (g_105 = 19; (g_105 == 34); g_105 = safe_add_func_int8_t_s_s(g_105, 5))
                {
                    unsigned l_139 = 18446744073709551615UL;
                    g_115 = p_74;
                    g_116 = 0x96D9C50EL;
                    l_90 = (safe_mod_func_uint32_t_u_u(l_81, (safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_116, (g_125 = 0xDA592003L))), (l_112[8][1] = l_91))), p_74))));
                    g_140 = (safe_mod_func_uint32_t_u_u(0x448C3647L, (safe_lshift_func_int8_t_s_s((g_5 & 1UL), (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((l_112[4][1] = l_98) >= (0L > (safe_rshift_func_uint16_t_u_s(g_5, ((l_85 & l_139) || (p_74 != 0xBC3860FE7B97028ALL)))))))), l_91)), 1))))));
                }
                g_140 = (safe_sub_func_uint64_t_u_u((l_93 = ((0x8587L <= (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((0L | (p_74 && 0xA78AC094E546F8AALL)) ^ p_74), (g_140 > (g_147 = 0L)))), ((safe_rshift_func_uint16_t_u_u(((p_74 == (~(g_95--))) ^ g_115), l_152[6])) | l_93)))) == g_78)), (-1L)));
            }
            else
            {
                int l_164 = 0x76681864L;
                if (g_105)
                    break;
                for (l_85 = 0; l_85 < 9; l_85 += 1)
                {
                    for (g_125 = 0; g_125 < 2; g_125 += 1)
                    {
                        l_112[l_85][g_125] = (-1L);
                    }
                }
                for (g_115 = 1; (g_115 >= 0); g_115 -= 1)
                {
                    char l_153 = (-1L);
                    int l_163 = 0x72DC7329L;
                    for (g_125 = 0; (g_125 <= 1); g_125 += 1)
                    {
                        int i, j;
                        l_88 |= (l_112[(g_115 + 5)][g_125] & g_78);
                        l_91 = 0x20FBFF59L;
                    }
                    for (g_140 = 0; (g_140 <= 1); g_140 += 1)
                    {
                        int l_156 = 0L;
                        int i, j;
                        l_153 ^= l_112[(g_140 + 6)][g_115];
                        g_154 |= 0xBDAACF22L;
                        g_155 = g_147;
                        ++g_158;
                    }
                    g_140 = (safe_mul_func_int16_t_s_s((((l_163 = 0x231492E8FA5C3DAFLL) || l_164) || l_93), p_74));
                }
                if (((0x51L && ((safe_mul_func_uint16_t_u_u(0x52CCL, (~((!((safe_add_func_int64_t_s_s(g_94, l_92)) < p_74)) > l_91)))) || ((0UL == 0x8B3FE5387F91F76DLL) || g_78))) > p_74))
                {
                    return p_74;
                }
                else
                {
                    g_140 = (l_164 = g_95);
                    return l_93;
                }
            }
        }
        return p_74;
    }
    l_112[5][0] = p_74;
    return l_85;
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
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_3[i][j][k], "g_3[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_268.f0, "g_268.f0", print_hash_value);
    transparent_crc(g_268.f1, "g_268.f1", print_hash_value);
    transparent_crc(g_268.f2, "g_268.f2", print_hash_value);
    transparent_crc(g_268.f3, "g_268.f3", print_hash_value);
    transparent_crc(g_268.f4, "g_268.f4", print_hash_value);
    transparent_crc(g_269.f0, "g_269.f0", print_hash_value);
    transparent_crc(g_269.f1, "g_269.f1", print_hash_value);
    transparent_crc(g_269.f2, "g_269.f2", print_hash_value);
    transparent_crc(g_269.f3, "g_269.f3", print_hash_value);
    transparent_crc(g_269.f4, "g_269.f4", print_hash_value);
    transparent_crc(g_270.f0, "g_270.f0", print_hash_value);
    transparent_crc(g_270.f1, "g_270.f1", print_hash_value);
    transparent_crc(g_270.f2, "g_270.f2", print_hash_value);
    transparent_crc(g_270.f3, "g_270.f3", print_hash_value);
    transparent_crc(g_270.f4, "g_270.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_271[i][j].f0, "g_271[i][j].f0", print_hash_value);
            transparent_crc(g_271[i][j].f1, "g_271[i][j].f1", print_hash_value);
            transparent_crc(g_271[i][j].f2, "g_271[i][j].f2", print_hash_value);
            transparent_crc(g_271[i][j].f3, "g_271[i][j].f3", print_hash_value);
            transparent_crc(g_271[i][j].f4, "g_271[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_272.f0, "g_272.f0", print_hash_value);
    transparent_crc(g_272.f1, "g_272.f1", print_hash_value);
    transparent_crc(g_272.f2, "g_272.f2", print_hash_value);
    transparent_crc(g_272.f3, "g_272.f3", print_hash_value);
    transparent_crc(g_272.f4, "g_272.f4", print_hash_value);
    transparent_crc(g_273.f0, "g_273.f0", print_hash_value);
    transparent_crc(g_273.f1, "g_273.f1", print_hash_value);
    transparent_crc(g_273.f2, "g_273.f2", print_hash_value);
    transparent_crc(g_273.f3, "g_273.f3", print_hash_value);
    transparent_crc(g_273.f4, "g_273.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_330[i].f0, "g_330[i].f0", print_hash_value);
        transparent_crc(g_330[i].f1, "g_330[i].f1", print_hash_value);
        transparent_crc(g_330[i].f2, "g_330[i].f2", print_hash_value);
        transparent_crc(g_330[i].f3, "g_330[i].f3", print_hash_value);
        transparent_crc(g_330[i].f4, "g_330[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_331.f0, "g_331.f0", print_hash_value);
    transparent_crc(g_331.f1, "g_331.f1", print_hash_value);
    transparent_crc(g_331.f2, "g_331.f2", print_hash_value);
    transparent_crc(g_331.f3, "g_331.f3", print_hash_value);
    transparent_crc(g_331.f4, "g_331.f4", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_357.f0, "g_357.f0", print_hash_value);
    transparent_crc(g_357.f1, "g_357.f1", print_hash_value);
    transparent_crc(g_357.f2, "g_357.f2", print_hash_value);
    transparent_crc(g_357.f3, "g_357.f3", print_hash_value);
    transparent_crc(g_357.f4, "g_357.f4", print_hash_value);
    transparent_crc(g_358.f0, "g_358.f0", print_hash_value);
    transparent_crc(g_358.f1, "g_358.f1", print_hash_value);
    transparent_crc(g_358.f2, "g_358.f2", print_hash_value);
    transparent_crc(g_358.f3, "g_358.f3", print_hash_value);
    transparent_crc(g_358.f4, "g_358.f4", print_hash_value);
    transparent_crc(g_359.f0, "g_359.f0", print_hash_value);
    transparent_crc(g_359.f1, "g_359.f1", print_hash_value);
    transparent_crc(g_359.f2, "g_359.f2", print_hash_value);
    transparent_crc(g_359.f3, "g_359.f3", print_hash_value);
    transparent_crc(g_359.f4, "g_359.f4", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_395.f0, "g_395.f0", print_hash_value);
    transparent_crc(g_395.f1, "g_395.f1", print_hash_value);
    transparent_crc(g_395.f2, "g_395.f2", print_hash_value);
    transparent_crc(g_395.f3, "g_395.f3", print_hash_value);
    transparent_crc(g_395.f4, "g_395.f4", print_hash_value);
    transparent_crc(g_406.f0, "g_406.f0", print_hash_value);
    transparent_crc(g_406.f1, "g_406.f1", print_hash_value);
    transparent_crc(g_406.f2, "g_406.f2", print_hash_value);
    transparent_crc(g_406.f3, "g_406.f3", print_hash_value);
    transparent_crc(g_406.f4, "g_406.f4", print_hash_value);
    transparent_crc(g_407.f0, "g_407.f0", print_hash_value);
    transparent_crc(g_407.f1, "g_407.f1", print_hash_value);
    transparent_crc(g_407.f2, "g_407.f2", print_hash_value);
    transparent_crc(g_407.f3, "g_407.f3", print_hash_value);
    transparent_crc(g_407.f4, "g_407.f4", print_hash_value);
    transparent_crc(g_408.f0, "g_408.f0", print_hash_value);
    transparent_crc(g_408.f1, "g_408.f1", print_hash_value);
    transparent_crc(g_408.f2, "g_408.f2", print_hash_value);
    transparent_crc(g_408.f3, "g_408.f3", print_hash_value);
    transparent_crc(g_408.f4, "g_408.f4", print_hash_value);
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f1, "g_418.f1", print_hash_value);
    transparent_crc(g_418.f2, "g_418.f2", print_hash_value);
    transparent_crc(g_418.f3, "g_418.f3", print_hash_value);
    transparent_crc(g_418.f4, "g_418.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_450[i], "g_450[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_493.f0, "g_493.f0", print_hash_value);
    transparent_crc(g_493.f1, "g_493.f1", print_hash_value);
    transparent_crc(g_493.f2, "g_493.f2", print_hash_value);
    transparent_crc(g_493.f3, "g_493.f3", print_hash_value);
    transparent_crc(g_493.f4, "g_493.f4", print_hash_value);
    transparent_crc(g_494.f0, "g_494.f0", print_hash_value);
    transparent_crc(g_494.f1, "g_494.f1", print_hash_value);
    transparent_crc(g_494.f2, "g_494.f2", print_hash_value);
    transparent_crc(g_494.f3, "g_494.f3", print_hash_value);
    transparent_crc(g_494.f4, "g_494.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_522[i], "g_522[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_525.f0, "g_525.f0", print_hash_value);
    transparent_crc(g_525.f1, "g_525.f1", print_hash_value);
    transparent_crc(g_525.f2, "g_525.f2", print_hash_value);
    transparent_crc(g_525.f3, "g_525.f3", print_hash_value);
    transparent_crc(g_525.f4, "g_525.f4", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_672.f0, "g_672.f0", print_hash_value);
    transparent_crc(g_672.f1, "g_672.f1", print_hash_value);
    transparent_crc(g_672.f2, "g_672.f2", print_hash_value);
    transparent_crc(g_672.f3, "g_672.f3", print_hash_value);
    transparent_crc(g_672.f4, "g_672.f4", print_hash_value);
    transparent_crc(g_673.f0, "g_673.f0", print_hash_value);
    transparent_crc(g_673.f1, "g_673.f1", print_hash_value);
    transparent_crc(g_673.f2, "g_673.f2", print_hash_value);
    transparent_crc(g_673.f3, "g_673.f3", print_hash_value);
    transparent_crc(g_673.f4, "g_673.f4", print_hash_value);
    transparent_crc(g_710.f0, "g_710.f0", print_hash_value);
    transparent_crc(g_710.f1, "g_710.f1", print_hash_value);
    transparent_crc(g_710.f2, "g_710.f2", print_hash_value);
    transparent_crc(g_710.f3, "g_710.f3", print_hash_value);
    transparent_crc(g_710.f4, "g_710.f4", print_hash_value);
    transparent_crc(g_711.f0, "g_711.f0", print_hash_value);
    transparent_crc(g_711.f1, "g_711.f1", print_hash_value);
    transparent_crc(g_711.f2, "g_711.f2", print_hash_value);
    transparent_crc(g_711.f3, "g_711.f3", print_hash_value);
    transparent_crc(g_711.f4, "g_711.f4", print_hash_value);
    transparent_crc(g_747.f0, "g_747.f0", print_hash_value);
    transparent_crc(g_747.f1, "g_747.f1", print_hash_value);
    transparent_crc(g_747.f2, "g_747.f2", print_hash_value);
    transparent_crc(g_747.f3, "g_747.f3", print_hash_value);
    transparent_crc(g_747.f4, "g_747.f4", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_848.f0, "g_848.f0", print_hash_value);
    transparent_crc(g_848.f1, "g_848.f1", print_hash_value);
    transparent_crc(g_848.f2, "g_848.f2", print_hash_value);
    transparent_crc(g_848.f3, "g_848.f3", print_hash_value);
    transparent_crc(g_848.f4, "g_848.f4", print_hash_value);
    transparent_crc(g_849.f0, "g_849.f0", print_hash_value);
    transparent_crc(g_849.f1, "g_849.f1", print_hash_value);
    transparent_crc(g_849.f2, "g_849.f2", print_hash_value);
    transparent_crc(g_849.f3, "g_849.f3", print_hash_value);
    transparent_crc(g_849.f4, "g_849.f4", print_hash_value);
    transparent_crc(g_881.f0, "g_881.f0", print_hash_value);
    transparent_crc(g_881.f1, "g_881.f1", print_hash_value);
    transparent_crc(g_881.f2, "g_881.f2", print_hash_value);
    transparent_crc(g_881.f3, "g_881.f3", print_hash_value);
    transparent_crc(g_881.f4, "g_881.f4", print_hash_value);
    transparent_crc(g_882.f0, "g_882.f0", print_hash_value);
    transparent_crc(g_882.f1, "g_882.f1", print_hash_value);
    transparent_crc(g_882.f2, "g_882.f2", print_hash_value);
    transparent_crc(g_882.f3, "g_882.f3", print_hash_value);
    transparent_crc(g_882.f4, "g_882.f4", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_962[i][j].f0, "g_962[i][j].f0", print_hash_value);
            transparent_crc(g_962[i][j].f1, "g_962[i][j].f1", print_hash_value);
            transparent_crc(g_962[i][j].f2, "g_962[i][j].f2", print_hash_value);
            transparent_crc(g_962[i][j].f3, "g_962[i][j].f3", print_hash_value);
            transparent_crc(g_962[i][j].f4, "g_962[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_963.f0, "g_963.f0", print_hash_value);
    transparent_crc(g_963.f1, "g_963.f1", print_hash_value);
    transparent_crc(g_963.f2, "g_963.f2", print_hash_value);
    transparent_crc(g_963.f3, "g_963.f3", print_hash_value);
    transparent_crc(g_963.f4, "g_963.f4", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1004.f0, "g_1004.f0", print_hash_value);
    transparent_crc(g_1004.f1, "g_1004.f1", print_hash_value);
    transparent_crc(g_1004.f2, "g_1004.f2", print_hash_value);
    transparent_crc(g_1004.f3, "g_1004.f3", print_hash_value);
    transparent_crc(g_1004.f4, "g_1004.f4", print_hash_value);
    transparent_crc(g_1049.f0, "g_1049.f0", print_hash_value);
    transparent_crc(g_1049.f1, "g_1049.f1", print_hash_value);
    transparent_crc(g_1049.f2, "g_1049.f2", print_hash_value);
    transparent_crc(g_1049.f3, "g_1049.f3", print_hash_value);
    transparent_crc(g_1049.f4, "g_1049.f4", print_hash_value);
    transparent_crc(g_1070.f0, "g_1070.f0", print_hash_value);
    transparent_crc(g_1070.f1, "g_1070.f1", print_hash_value);
    transparent_crc(g_1070.f2, "g_1070.f2", print_hash_value);
    transparent_crc(g_1070.f3, "g_1070.f3", print_hash_value);
    transparent_crc(g_1070.f4, "g_1070.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1071[i][j].f0, "g_1071[i][j].f0", print_hash_value);
            transparent_crc(g_1071[i][j].f1, "g_1071[i][j].f1", print_hash_value);
            transparent_crc(g_1071[i][j].f2, "g_1071[i][j].f2", print_hash_value);
            transparent_crc(g_1071[i][j].f3, "g_1071[i][j].f3", print_hash_value);
            transparent_crc(g_1071[i][j].f4, "g_1071[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1121.f0, "g_1121.f0", print_hash_value);
    transparent_crc(g_1121.f1, "g_1121.f1", print_hash_value);
    transparent_crc(g_1121.f2, "g_1121.f2", print_hash_value);
    transparent_crc(g_1121.f3, "g_1121.f3", print_hash_value);
    transparent_crc(g_1121.f4, "g_1121.f4", print_hash_value);
    transparent_crc(g_1122.f0, "g_1122.f0", print_hash_value);
    transparent_crc(g_1122.f1, "g_1122.f1", print_hash_value);
    transparent_crc(g_1122.f2, "g_1122.f2", print_hash_value);
    transparent_crc(g_1122.f3, "g_1122.f3", print_hash_value);
    transparent_crc(g_1122.f4, "g_1122.f4", print_hash_value);
    transparent_crc(g_1183.f0, "g_1183.f0", print_hash_value);
    transparent_crc(g_1183.f1, "g_1183.f1", print_hash_value);
    transparent_crc(g_1183.f2, "g_1183.f2", print_hash_value);
    transparent_crc(g_1183.f3, "g_1183.f3", print_hash_value);
    transparent_crc(g_1183.f4, "g_1183.f4", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1184[i].f0, "g_1184[i].f0", print_hash_value);
        transparent_crc(g_1184[i].f1, "g_1184[i].f1", print_hash_value);
        transparent_crc(g_1184[i].f2, "g_1184[i].f2", print_hash_value);
        transparent_crc(g_1184[i].f3, "g_1184[i].f3", print_hash_value);
        transparent_crc(g_1184[i].f4, "g_1184[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1186.f0, "g_1186.f0", print_hash_value);
    transparent_crc(g_1186.f1, "g_1186.f1", print_hash_value);
    transparent_crc(g_1186.f2, "g_1186.f2", print_hash_value);
    transparent_crc(g_1186.f3, "g_1186.f3", print_hash_value);
    transparent_crc(g_1186.f4, "g_1186.f4", print_hash_value);
    transparent_crc(g_1191.f0, "g_1191.f0", print_hash_value);
    transparent_crc(g_1191.f1, "g_1191.f1", print_hash_value);
    transparent_crc(g_1191.f2, "g_1191.f2", print_hash_value);
    transparent_crc(g_1191.f3, "g_1191.f3", print_hash_value);
    transparent_crc(g_1191.f4, "g_1191.f4", print_hash_value);
    transparent_crc(g_1206, "g_1206", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1230[i].f0, "g_1230[i].f0", print_hash_value);
        transparent_crc(g_1230[i].f1, "g_1230[i].f1", print_hash_value);
        transparent_crc(g_1230[i].f2, "g_1230[i].f2", print_hash_value);
        transparent_crc(g_1230[i].f3, "g_1230[i].f3", print_hash_value);
        transparent_crc(g_1230[i].f4, "g_1230[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1231.f0, "g_1231.f0", print_hash_value);
    transparent_crc(g_1231.f1, "g_1231.f1", print_hash_value);
    transparent_crc(g_1231.f2, "g_1231.f2", print_hash_value);
    transparent_crc(g_1231.f3, "g_1231.f3", print_hash_value);
    transparent_crc(g_1231.f4, "g_1231.f4", print_hash_value);
    transparent_crc(g_1268, "g_1268", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1292[i][j][k], "g_1292[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1469.f0, "g_1469.f0", print_hash_value);
    transparent_crc(g_1469.f1, "g_1469.f1", print_hash_value);
    transparent_crc(g_1469.f2, "g_1469.f2", print_hash_value);
    transparent_crc(g_1469.f3, "g_1469.f3", print_hash_value);
    transparent_crc(g_1469.f4, "g_1469.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1520[i], "g_1520[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1566.f0, "g_1566.f0", print_hash_value);
    transparent_crc(g_1566.f1, "g_1566.f1", print_hash_value);
    transparent_crc(g_1566.f2, "g_1566.f2", print_hash_value);
    transparent_crc(g_1566.f3, "g_1566.f3", print_hash_value);
    transparent_crc(g_1566.f4, "g_1566.f4", print_hash_value);
    transparent_crc(g_1567.f0, "g_1567.f0", print_hash_value);
    transparent_crc(g_1567.f1, "g_1567.f1", print_hash_value);
    transparent_crc(g_1567.f2, "g_1567.f2", print_hash_value);
    transparent_crc(g_1567.f3, "g_1567.f3", print_hash_value);
    transparent_crc(g_1567.f4, "g_1567.f4", print_hash_value);
    transparent_crc(g_1657, "g_1657", print_hash_value);
    transparent_crc(g_1686.f0, "g_1686.f0", print_hash_value);
    transparent_crc(g_1686.f1, "g_1686.f1", print_hash_value);
    transparent_crc(g_1686.f2, "g_1686.f2", print_hash_value);
    transparent_crc(g_1686.f3, "g_1686.f3", print_hash_value);
    transparent_crc(g_1686.f4, "g_1686.f4", print_hash_value);
    transparent_crc(g_1707, "g_1707", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
