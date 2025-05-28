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
   unsigned f0;
};

union U1 {
   unsigned char f0;
   unsigned char f1;
   int f2;
   unsigned short f3;
   int f4;
};

union U2 {
   short f0;
   int f1;
   short f2;
   int f3;
   unsigned char f4;
};


static char g_15[4][4][4] = {{{0xB3L,(-1L),0xE6L,(-1L)},{0x78L,0L,0x21L,(-1L)},{(-1L),5L,0xB3L,0x2CL},{8L,1L,0x2CL,(-1L)}},{{8L,0x6FL,0xB3L,0xB3L},{(-1L),(-1L),0x21L,0xF1L},{0x78L,0x21L,0xE6L,0L},{0xB3L,0L,0x4DL,0xE6L}},{{0xE6L,0L,(-1L),0L},{0L,0x21L,0L,0xF1L},{0x6FL,(-1L),5L,0xB3L},{(-1L),0x6FL,5L,0L}},{{0x78L,(-1L),5L,0L},{0xF1L,0x2CL,0x2CL,0xF1L},{0x4DL,0x78L,0x21L,0xE6L},{0x21L,0xE6L,0L,(-1L)}}};
static union U1 g_18 = {255UL};
static unsigned char g_53 = 0x99L;
static int g_72[4] = {0x32E49D2AL,0x32E49D2AL,0x32E49D2AL,0x32E49D2AL};
static int g_73 = 0L;
static int g_74 = 0x6829A6E4L;
static unsigned g_96[10] = {0UL,0x1A3E7089L,0x1A3E7089L,0UL,0x1A3E7089L,0x1A3E7089L,0UL,0x1A3E7089L,0x1A3E7089L,0UL};
static unsigned char g_98 = 1UL;
static char g_108 = (-4L);
static int g_119[9] = {0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L,0x3DEB0DB5L};
static unsigned g_131[2] = {1UL,1UL};
static unsigned g_132 = 0x0B2B3379L;
static short g_137 = 0x6616L;
static unsigned short g_150 = 0x0EDDL;
static char g_153[3][6] = {{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL},{0x3EL,0x3EL,0x3EL,0x3EL,0x3EL,0x3EL}};
static unsigned short g_161 = 0x50DFL;
static unsigned g_166 = 0UL;
static char g_182[6][5] = {{(-1L),0x6FL,(-1L),0x6FL,(-1L)},{0x40L,0x6FL,0x6FL,0x40L,0x40L},{9L,0x6FL,9L,0x6FL,9L},{0x40L,0x40L,0x6FL,0x6FL,0x40L},{(-1L),0x6FL,(-1L),0x6FL,(-1L)},{0x40L,0x6FL,0x6FL,0x40L,0x40L}};
static int g_183 = 0xB9B250EAL;
static unsigned short g_184 = 65529UL;
static char g_186[8] = {0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL};
static short g_193 = 0xA745L;
static unsigned g_194 = 0x2332137CL;
static unsigned char g_204 = 247UL;
static short g_207 = 0xF82AL;
static int g_209[5][8] = {{(-1L),0xFE2393D1L,0xBDF61FF8L,0xBDF61FF8L,0xFE2393D1L,(-1L),0x50909C1FL,(-1L)},{0xFE2393D1L,(-1L),0x50909C1FL,(-1L),0xFE2393D1L,0xBDF61FF8L,0xBDF61FF8L,0xFE2393D1L},{(-1L),1L,1L,(-1L),0x9BDCCDAAL,0xFE2393D1L,0x9BDCCDAAL,(-1L)},{1L,0x9BDCCDAAL,1L,0xBDF61FF8L,0x50909C1FL,0x50909C1FL,0xBDF61FF8L,1L},{0x9BDCCDAAL,0x9BDCCDAAL,0x50909C1FL,0xFE2393D1L,0x8E3CAC08L,0xFE2393D1L,0x50909C1FL,0x9BDCCDAAL}};
static unsigned short g_219 = 65526UL;
static unsigned g_227 = 0x503C9241L;
static unsigned g_228 = 0x613328CDL;
static unsigned char g_230 = 253UL;
static char g_243 = 1L;
static unsigned g_252 = 0xE4C8984CL;
static short g_272 = 0xE636L;
static char g_275 = 0xC8L;
static int g_315[10][4][6] = {{{(-9L),(-8L),0L,0xA8B34035L,0x4257E867L,(-1L)},{6L,0x426AC1B9L,(-1L),(-1L),6L,0x7F3BF8DCL},{6L,0x52C5CBB9L,0x15623E78L,0x52C5CBB9L,6L,0x6C583D23L},{(-7L),0x426AC1B9L,0x49665D56L,0xF28B1D9BL,0x4257E867L,0L}},{{(-1L),(-8L),0x4E16E312L,0x426AC1B9L,0L,0L},{1L,(-1L),0x49665D56L,0x8001BA6BL,(-1L),0x6C583D23L},{0L,0x7F3BF8DCL,0x15623E78L,0L,0x15623E78L,0x7F3BF8DCL},{0L,0x6C583D23L,(-1L),0x8001BA6BL,0x49665D56L,(-1L)}},{{1L,0L,0L,0x426AC1B9L,0x37B2A594L,0x6C583D23L},{0x15623E78L,0xB3D6F203L,6L,0x426AC1B9L,(-1L),(-1L)},{6L,0xA8B34035L,1L,0x0F6266CFL,0x4257E867L,0x0F6266CFL},{1L,0x8001BA6BL,1L,(-8L),0x15623E78L,(-1L)}},{{(-7L),(-8L),6L,0xEEBDB002L,0xF56058C3L,0x6C583D23L},{0x49665D56L,0x6C583D23L,0xF56058C3L,0xEEBDB002L,6L,(-8L)},{(-7L),(-1L),0x15623E78L,(-8L),1L,0x8001BA6BL},{1L,0x0F6266CFL,0x4257E867L,0x0F6266CFL,1L,0xA8B34035L}},{{6L,(-1L),(-1L),0x426AC1B9L,6L,0xB3D6F203L},{0x15623E78L,0x6C583D23L,0x37B2A594L,(-1L),0xF56058C3L,0xB3D6F203L},{0x4E16E312L,(-8L),(-1L),0xF28B1D9BL,0x15623E78L,0xA8B34035L},{0xF56058C3L,0x8001BA6BL,0x4257E867L,0xB3D6F203L,0x4257E867L,0x8001BA6BL}},{{0xF56058C3L,0xA8B34035L,0x15623E78L,0xF28B1D9BL,(-1L),(-8L)},{0x4E16E312L,0xB3D6F203L,0xF56058C3L,(-1L),0x37B2A594L,0x6C583D23L},{0x15623E78L,0xB3D6F203L,6L,0x426AC1B9L,(-1L),(-1L)},{6L,0xA8B34035L,1L,0x0F6266CFL,0x4257E867L,0x0F6266CFL}},{{1L,0x8001BA6BL,1L,0x6C583D23L,0x4257E867L,(-8L)},{6L,0x6C583D23L,(-7L),0L,(-9L),0xA8B34035L},{(-1L),0xA8B34035L,(-9L),0L,(-7L),0x6C583D23L},{6L,(-8L),0x4257E867L,0x6C583D23L,0x4E16E312L,0xF28B1D9BL}},{{0x4E16E312L,0x7F3BF8DCL,6L,0x7F3BF8DCL,0x4E16E312L,0xEEBDB002L},{1L,(-8L),0x15623E78L,(-1L),(-7L),0x52C5CBB9L},{0x4257E867L,0xA8B34035L,0L,(-8L),(-9L),0x52C5CBB9L},{0x37B2A594L,0x6C583D23L,0x15623E78L,0x426AC1B9L,0x4257E867L,0xEEBDB002L}},{{(-9L),0xF28B1D9BL,6L,0x52C5CBB9L,6L,0xF28B1D9BL},{(-9L),0xEEBDB002L,0x4257E867L,0x426AC1B9L,0x15623E78L,0x6C583D23L},{0x37B2A594L,0x52C5CBB9L,(-9L),(-8L),0L,0xA8B34035L},{0x4257E867L,0x52C5CBB9L,(-7L),(-1L),0x15623E78L,(-8L)}},{{1L,0xEEBDB002L,0x4E16E312L,0x7F3BF8DCL,6L,0x7F3BF8DCL},{0x4E16E312L,0xF28B1D9BL,0x4E16E312L,0x6C583D23L,0x4257E867L,(-8L)},{6L,0x6C583D23L,(-7L),0L,(-9L),0xA8B34035L},{(-1L),0xA8B34035L,(-9L),0L,(-7L),0x6C583D23L}}};
static unsigned short g_532 = 0x0FA6L;
static int g_598[8] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static unsigned char g_649 = 255UL;
static int g_660 = (-1L);
static int g_664 = 0x1419C385L;
static union U1 g_747 = {250UL};
static unsigned g_845 = 0x35AD941BL;
static unsigned char g_881 = 7UL;
static int g_889 = (-4L);
static unsigned char g_931 = 0x17L;
static union U0 g_934 = {0UL};
static short g_1090[5] = {0L,0L,0L,0L,0L};
static union U2 g_1531 = {1L};
static union U0 g_1670 = {0UL};
static union U1 g_1671 = {246UL};
static unsigned g_1795 = 1UL;



static short func_1(void);
static unsigned short func_4(char p_5, short p_6, short p_7, char p_8);
static unsigned func_9(unsigned short p_10, int p_11, unsigned short p_12, union U0 p_13, union U1 p_14);
static unsigned short func_29(unsigned char p_30, union U2 p_31, char p_32, unsigned short p_33, union U2 p_34);
static int func_36(int p_37);
static int func_42(char p_43, union U0 p_44, char p_45);
static unsigned short func_54(int p_55, union U0 p_56, unsigned char p_57, short p_58);
static int func_63(union U1 p_64, unsigned p_65, union U2 p_66, int p_67);
static unsigned func_70(short p_71);
static char func_80(int p_81, union U1 p_82);
static short func_1(void)
{
    char l_16 = 0xE1L;
    union U0 l_17 = {0x7E0D1B71L};
    union U0 l_21 = {0xEE3F2F34L};
    union U1 l_22 = {0x3BL};
    unsigned char l_23 = 0xB6L;
    l_22.f2 = (((safe_sub_func_uint16_t_u_u(func_4((func_9(g_15[1][2][0], l_16, (0xC863L ^ 7L), l_17, g_18) <= g_18.f1), (((safe_mod_func_uint8_t_u_u(func_9(l_17.f0, l_17.f0, g_15[2][0][1], l_21, l_22), l_21.f0)) && l_23) <= l_21.f0), g_15[1][2][0], l_23), 1L)) > l_17.f0) & g_1531.f4);

        return g_73;
}







static unsigned short func_4(char p_5, short p_6, short p_7, char p_8)
{
    unsigned l_24 = 18446744073709551610UL;
    int l_1700 = 0xC7DBA4E1L;
    union U2 l_1703 = {1L};
    char l_1717 = 0xF3L;
    union U0 l_1718 = {0x5568AC14L};
    unsigned char l_1825 = 0x0AL;
    union U0 l_1827 = {0UL};
    union U1 l_1829 = {0xC4L};
    char l_1831 = (-1L);
    unsigned l_1836 = 0x118C3CF7L;
    unsigned l_1848 = 0x5AFE9A8CL;
    if (((g_18.f3 = 0x7B40L) == (l_24 = g_15[1][2][0])))
    {
        int l_1449[4] = {(-6L),(-6L),(-6L),(-6L)};
        union U1 l_1719 = {255UL};
        int i;
        for (l_24 = 0; (l_24 < 29); l_24 = safe_add_func_uint8_t_u_u(l_24, 8))
        {
            union U2 l_35 = {0L};
            char l_46 = 6L;
            union U0 l_47 = {0xA787D30FL};
            int l_1704 = 0x0E39696FL;
            l_1700 = (safe_add_func_uint16_t_u_u(func_29((g_18.f0 = 0x43L), l_35, (p_8 = (p_7 | func_36((l_1449[2] = ((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(0L, 0x8597A0B8L)), func_42(l_46, l_47, (g_15[2][3][0] = 0x85L)))) || 0x0BDA0E4BL))))), l_24, g_1531), (-1L)));

                                    l_1704 = ((safe_sub_func_uint8_t_u_u((func_29(g_186[0], (l_35 = l_35), l_1700, l_1449[3], l_1703) ^ 0x27L), (g_889 || ((l_1700 & g_1531.f4) ^ p_5)))) || 0x45L);
            return l_1703.f0;
        }
        for (g_1671.f0 = (-27); (g_1671.f0 != 54); g_1671.f0 = safe_add_func_uint32_t_u_u(g_1671.f0, 7))
        {
            l_1449[2] = 0xA5365A04L;
        }
        l_1449[2] = ((safe_sub_func_uint16_t_u_u(g_161, (func_9(g_161, g_184, ((safe_rshift_func_uint8_t_u_s((((~(!(4294967287UL && (250UL > 0xA9L)))) < (((safe_sub_func_uint8_t_u_u((0x56L & p_7), (((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_747.f2 = func_9((0x10L ^ l_1717), g_186[0], p_8, l_1718, l_1719)), p_5)), g_1671.f1)) > p_5) == 9UL))) != g_315[5][1][5]) < g_15[3][2][2])) | g_182[0][2]), 5)) == 0x9872L), g_1670, g_18) || 0x2605L))) | p_7);

            }
    else
    {
        union U0 l_1740 = {0x71AAD8F2L};
        int l_1753 = 0x00DDC5D2L;
        int l_1754 = 0x7CF7E8BFL;
        union U1 l_1762 = {5UL};
        short l_1826 = 0xAD9DL;
        unsigned short l_1863 = 0xE284L;
        for (g_193 = 26; (g_193 != 12); g_193 = safe_sub_func_int32_t_s_s(g_193, 5))
        {
            for (g_194 = 0; (g_194 > 47); g_194++)
            {
                unsigned l_1728 = 0x08DF8A44L;
                unsigned short l_1735[8] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                union U1 l_1739 = {0xEDL};
                int i;
                l_1739.f2 = (safe_lshift_func_int8_t_s_s(0x8BL, (g_182[4][1] && (safe_rshift_func_uint8_t_u_s(((l_1728 > (p_5 = (((safe_rshift_func_uint16_t_u_s((((func_9(((safe_mod_func_uint8_t_u_u(0x92L, 0x35L)) == (safe_add_func_uint32_t_u_u(g_193, l_1735[6]))), l_1700, (safe_unary_minus_func_int16_t_s((func_9(((safe_sub_func_uint16_t_u_u(p_6, 0x1691L)) ^ (-1L)), p_5, g_1670.f0, g_934, l_1739) < 0xFC45L))), l_1740, l_1739) < g_889) != p_5) <= l_1740.f0), 13)) ^ p_5) && p_6))) & p_6), 1)))));

                                for (g_132 = 0; (g_132 < 44); g_132 = safe_add_func_uint16_t_u_u(g_132, 6))
                {
                    for (g_1671.f4 = 20; (g_1671.f4 >= 12); g_1671.f4 = safe_sub_func_int16_t_s_s(g_1671.f4, 1))
                    {
                        l_1700 = 0x1D4E1D7CL;
                    }

                                    }
            }
        }
        if (((safe_sub_func_uint16_t_u_u(65535UL, (l_1754 = ((-1L) > ((l_1753 = func_70(((0x0E3DL == (((safe_sub_func_int32_t_s_s(l_1740.f0, (safe_rshift_func_uint16_t_u_u(g_194, 2)))) & ((p_8 <= (~p_6)) > func_9((safe_lshift_func_uint8_t_u_u(g_132, (l_1700 = g_132))), p_5, g_598[4], l_1740, g_18))) ^ l_1740.f0)) | 0x59L))) ^ l_1740.f0))))) < 0xFE3FD608L))
        {
            l_1753 = g_18.f0;
            return p_5;
        }
        else
        {
            unsigned short l_1755[4][4][1];
            union U1 l_1761[3] = {{0x7FL},{0x7FL},{0x7FL}};
            unsigned char l_1782 = 0x56L;
            union U1 l_1809 = {0UL};
            union U0 l_1861 = {0x87BF8BD5L};
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_1755[i][j][k] = 9UL;
                }
            }
            for (g_228 = 0; (g_228 <= 4); g_228 += 1)
            {
                union U0 l_1760 = {0xCD6AEEB8L};
                int l_1781 = 0x1E73D664L;
                int l_1808 = 7L;
                if (l_1755[3][0][0])
                    break;
                for (g_934.f0 = 3; (g_934.f0 <= 9); g_934.f0 += 1)
                {
                    int l_1783 = 0xC0711946L;
                    int l_1792 = 0x8EAD8FC4L;
                    int i, j;
                    if ((safe_sub_func_int16_t_s_s((func_9(g_96[(g_228 + 1)], g_182[g_228][g_228], ((((g_1671.f1 & 0x577AB414L) < ((l_1754 = (~l_1700)) == ((!(safe_sub_func_int32_t_s_s((func_9((func_9(g_934.f0, g_183, l_1753, l_1760, l_1761[1]) | g_1090[2]), p_8, l_1760.f0, g_1670, l_1762) < g_660), 7UL))) == l_1762.f0))) & p_5) && g_209[4][4]), l_1718, l_1762) != p_8), 65535UL)))
                    {
                        g_747.f2 = (+((safe_add_func_int32_t_s_s((g_1671.f2 = p_5), (safe_sub_func_int32_t_s_s(((-1L) < p_8), (g_1531.f2 >= g_1090[4]))))) >= g_881));

                                                                        if (p_6)
                            break;
                    }
                    else
                    {
                        short l_1773[9] = {1L,0x2B85L,1L,1L,0x2B85L,1L,1L,0x2B85L,1L};
                        int l_1776 = (-5L);
                        int i;
                        l_1783 = (safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((0x080FL | ((safe_lshift_func_uint8_t_u_u(l_1773[6], 0)) <= 0xBD93DACBL)) ^ func_9(((safe_sub_func_uint16_t_u_u((l_1776 = (l_1703.f4 ^ g_931)), (l_1782 = ((safe_mod_func_int8_t_s_s((l_1755[3][0][0] >= (safe_mul_func_int32_t_s_s(l_1781, (g_137 > 8L)))), p_6)) | 255UL)))) <= l_1740.f0), p_7, l_1754, g_934, l_1761[1])), 0xFD0F38C9L)), g_53));
                        l_1761[1].f2 = (g_1531.f0 || (safe_rshift_func_uint8_t_u_u(g_1670.f0, ((func_9((g_1531.f0 > (p_6 | ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((l_1783 = g_1671.f1) & 0x27EDL), 5)) >= ((l_1792 = (l_1700 = ((safe_sub_func_int32_t_s_s(((g_18.f0 = 252UL) && (l_1762.f1 < ((l_1773[4] > l_1773[1]) | 0x107A7B69L))), g_845)) != p_8))) < 4294967286UL)), g_209[4][4])) >= p_8))), p_6, p_8, g_934, g_1671) < 0xD580L) & l_1755[1][0][0]))));
                        if (p_6)
                            continue;
                    }
                    g_18.f2 = (safe_add_func_int32_t_s_s(g_1795, func_9((g_219 = (safe_rshift_func_int8_t_s_u((g_182[g_228][g_228] = l_1740.f0), 1))), l_1760.f0, g_209[0][6], g_1670, l_1761[1])));

                                        if (((-1L) <= ((l_1754 < 0x0151L) || l_1760.f0)))
                    {
                        l_1761[1].f2 = (safe_lshift_func_uint8_t_u_u((func_9(g_182[g_228][g_228], func_9(((safe_rshift_func_int16_t_s_s(l_1703.f4, (l_1808 = func_9((safe_mod_func_int16_t_s_s((!(p_7 = ((g_532 = g_219) && 1UL))), (((p_6 && g_845) == (l_1700 = (safe_sub_func_uint32_t_u_u(5UL, (l_1783 != (safe_lshift_func_uint8_t_u_u(0x5BL, l_1781))))))) || l_1762.f0))), l_1781, l_1781, l_1740, g_1671)))) | p_8), p_6, p_6, l_1760, l_1761[1]), g_1670.f0, l_1718, l_1809) ^ g_137), p_5));
                    }
                    else
                    {
                        l_1700 = (g_315[5][1][5] = (p_8 >= (g_182[g_228][g_228] || (l_1760.f0 >= 0xC282995BL))));
                        g_1671.f2 = (!p_8);

                                                l_1809.f2 = p_7;

                                                g_664 = l_1703.f4;
                    }
                    l_1808 = p_7;
                    for (g_1795 = 0; (g_1795 <= 4); g_1795 += 1)
                    {
                        l_1809.f2 = (-1L);

                                                g_1671.f2 = (l_1809.f2 = g_137);

                                                if (g_1795)
                            continue;
                        return l_1809.f1;
                    }
                }
                for (g_18.f0 = 0; (g_18.f0 <= 4); g_18.f0 += 1)
                {
                    unsigned l_1828[3];
                    union U0 l_1830 = {0x6F422519L};
                    int l_1858 = 0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1828[i] = 0x8E41482AL;
                    for (l_1762.f4 = 4; (l_1762.f4 >= 0); l_1762.f4 -= 1)
                    {
                        int i, j;
                        g_315[7][2][0] = (safe_sub_func_uint32_t_u_u(((((g_182[l_1762.f4][g_228] | func_9(((safe_rshift_func_uint16_t_u_u(((((func_54((0UL || (l_1761[1].f2 = (safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((g_1090[g_228] ^ ((safe_sub_func_uint16_t_u_u((((g_598[(g_18.f0 + 1)] == 0L) && g_598[(g_18.f0 + 1)]) | (safe_unary_minus_func_int16_t_s(((g_15[3][2][0] == ((((l_1825 = g_18.f1) > (!0xC3L)) | 0xFF74C604L) < p_8)) > g_119[2])))), p_8)) < p_7)), g_108)) > g_227), 6)), l_1826)))), l_1827, p_6, l_1762.f1) == 65535UL) >= 7UL) != g_1671.f1) & l_1828[2]), l_1781)) || l_1753), p_6, g_18.f0, l_1827, l_1829)) != p_6) == l_1703.f2) == g_1090[g_228]), p_8));
                        return p_6;
                    }

                                        if (((p_7 || 0xB3E70968L) && (func_54(p_7, l_1830, l_1781, l_1831) != ((safe_sub_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((p_8 = p_8) ^ 1UL), 0x8A8FL)), l_1836)) & 248UL))))
                    {
                        int l_1841 = 0xA3A5C32FL;
                        l_1808 = g_132;
                        l_1761[1].f2 = ((g_194 >= func_54((l_1828[2] > l_1740.f0), l_1760, ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((p_5 & ((func_54(func_54(g_53, l_1760, l_1841, ((safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(0xF093L, l_1830.f0)), g_207)) <= g_1670.f0), l_1828[2])) & l_1808)), l_1760, l_1848, l_1808) | p_6) == 0xBFL)), 7)), 11)) | g_1531.f4), p_5)) < 0x8BBCL);
                    }
                    else
                    {
                        short l_1862 = (-10L);
                        l_1700 = p_5;
                        l_1829.f2 = (-8L);

                                                l_1808 = ((((g_1090[0] = (g_1531.f4 && l_1754)) & (((safe_unary_minus_func_uint32_t_u((((l_1754 != (safe_rshift_func_uint16_t_u_s(g_153[2][5], 2))) || l_1808) > 0x66791E0BL))) != (p_8 | 0x8B44L)) && g_931)) < 0xF3E69BCFL) > l_1762.f0);
                        l_1862 = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(l_1809.f1, l_1700)), ((l_1755[3][0][0] || ((safe_add_func_uint32_t_u_u(func_9((l_1858 = ((g_150 = p_7) == p_8)), (g_315[3][1][4] = (safe_lshift_func_int8_t_s_s((l_1761[1].f0 || g_207), (func_9(l_1755[1][1][0], l_1762.f4, p_8, l_1861, l_1762) >= 0UL)))), g_889, g_1670, l_1829), p_7)) != p_5)) > p_7)));
                    }
                    g_73 = (l_1863 & p_8);
                    return l_24;
                }
            }

                    }

                g_74 = p_5;
    }
    l_1829.f2 = ((safe_rshift_func_int8_t_s_s(l_1718.f0, 7)) | ((p_6 ^ p_7) > (65535UL & ((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(func_29(l_1827.f0, g_1531, p_6, l_1718.f0, (l_1703 = g_1531)), 0x74L)), 15)) && p_8))));

            l_1829.f2 = func_9((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_153[0][1], (l_1829.f0 ^ p_6))), func_9((safe_rshift_func_int8_t_s_s(l_1831, g_98)), (+l_1825), ((safe_add_func_uint8_t_u_u(l_1829.f2, ((l_1700 = p_8) ^ 0x5560L))) != 0x17F4L), l_1718, l_1829))), l_1848, g_96[0], l_1827, l_1829);
    return p_5;
}







static unsigned func_9(unsigned short p_10, int p_11, unsigned short p_12, union U0 p_13, union U1 p_14)
{
    return g_18.f0;
}







static unsigned short func_29(unsigned char p_30, union U2 p_31, char p_32, unsigned short p_33, union U2 p_34)
{
    char l_1551 = 0x95L;
    union U0 l_1557[10][3][8] = {{{{4UL},{0xFB5F9A6EL},{4294967291UL},{0x00D5AC9AL},{0xFF49FF98L},{0UL},{0x16B94397L},{4294967287UL}},{{0xFB5F9A6EL},{4294967287UL},{0xB16DFC61L},{9UL},{6UL},{0x37C2B688L},{0UL},{0x9888BC27L}},{{4294967295UL},{0x00D5AC9AL},{1UL},{6UL},{8UL},{0xA9DAE896L},{4UL},{0UL}}},{{{0UL},{4294967293UL},{0UL},{3UL},{0UL},{4294967293UL},{0UL},{0xB6E12741L}},{{0x60EA764AL},{0x5D4A6C24L},{1UL},{4294967287UL},{4UL},{0xFF49FF98L},{4294967286UL},{0xA9DAE896L}},{{0x9888BC27L},{9UL},{0xB6E12741L},{1UL},{4UL},{1UL},{0xC41D0635L},{3UL}}},{{{0x60EA764AL},{4294967287UL},{0x5D4A6C24L},{0xA9DAE896L},{0UL},{5UL},{0xB16DFC61L},{0xC41D0635L}},{{0UL},{1UL},{5UL},{0xFF49FF98L},{8UL},{4294967287UL},{4294967287UL},{3UL}},{{4UL},{0x00D5AC9AL},{0x00D5AC9AL},{4UL},{0xC41D0635L},{0xB16DFC61L},{5UL},{0UL}}},{{{0x37C2B688L},{8UL},{0xC091E509L},{1UL},{4UL},{6UL},{4294967293UL},{0xFF49FF98L}},{{4294967293UL},{8UL},{1UL},{4UL},{4294967286UL},{0xB16DFC61L},{3UL},{4294967291UL}},{{0xFB5F9A6EL},{0x00D5AC9AL},{1UL},{4294967295UL},{0x37C2B688L},{4294967287UL},{3UL},{1UL}}},{{{1UL},{6UL},{0xB16DFC61L},{0x72928DEAL},{0xB6E12741L},{0x72928DEAL},{0xB16DFC61L},{6UL}},{{1UL},{1UL},{4294967286UL},{9UL},{4UL},{0x16B94397L},{1UL},{4294967287UL}},{{0xB16DFC61L},{0x9888BC27L},{9UL},{0xB6E12741L},{1UL},{4UL},{1UL},{0xC41D0635L}}},{{{1UL},{0xB6E12741L},{4294967286UL},{0x16B94397L},{4294967287UL},{1UL},{0xB16DFC61L},{0x37C2B688L}},{{4294967287UL},{1UL},{0xB16DFC61L},{0x37C2B688L},{4294967287UL},{4294967287UL},{3UL},{3UL}},{{0UL},{1UL},{1UL},{1UL},{1UL},{0UL},{3UL},{4UL}}},{{{0x60EA764AL},{5UL},{1UL},{4294967287UL},{4UL},{0x5D4A6C24L},{4294967293UL},{0xB16DFC61L}},{{3UL},{0x37C2B688L},{0xC091E509L},{4294967287UL},{0x37C2B688L},{1UL},{0x72928DEAL},{4294967293UL}},{{0x9888BC27L},{0x37C2B688L},{1UL},{4294967295UL},{4UL},{0UL},{1UL},{0xC091E509L}}},{{{0xFF49FF98L},{0xA9DAE896L},{4294967287UL},{0UL},{4294967286UL},{1UL},{4294967286UL},{0UL}},{{4294967287UL},{4294967293UL},{4294967287UL},{0x00D5AC9AL},{0xA9DAE896L},{0xB16DFC61L},{0x9888BC27L},{9UL}},{{4UL},{0xFF49FF98L},{1UL},{4294967287UL},{8UL},{4294967291UL},{0xA9DAE896L},{1UL}}},{{{4UL},{1UL},{4UL},{0x9888BC27L},{0xA9DAE896L},{1UL},{0x60EA764AL},{0xC41D0635L}},{{4294967287UL},{5UL},{0xB6E12741L},{4294967287UL},{4294967286UL},{0x9888BC27L},{6UL},{0xFB5F9A6EL}},{{0xFF49FF98L},{0xB6E12741L},{0x37C2B688L},{4UL},{4UL},{0x37C2B688L},{0xB6E12741L},{0xFF49FF98L}}},{{{0x9888BC27L},{1UL},{4294967286UL},{4294967293UL},{0x37C2B688L},{0xFF49FF98L},{1UL},{4UL}},{{0xC091E509L},{1UL},{4UL},{6UL},{4294967293UL},{0xFF49FF98L},{4294967287UL},{0x5D4A6C24L}},{{0xA9DAE896L},{1UL},{0xC41D0635L},{1UL},{0xFB5F9A6EL},{0x37C2B688L},{9UL},{4294967291UL}}}};
    int l_1573 = (-4L);
    unsigned char l_1627 = 255UL;
    unsigned l_1673[10] = {0xAFA655B9L,18446744073709551615UL,18446744073709551615UL,0xAFA655B9L,1UL,0xAFA655B9L,18446744073709551615UL,18446744073709551615UL,0xAFA655B9L,1UL};
    union U1 l_1694 = {0xC2L};
    unsigned short l_1699 = 65535UL;
    int i, j, k;
    for (g_98 = 0; (g_98 <= 9); g_98 += 1)
    {
        int l_1543 = (-1L);
        union U1 l_1575 = {0xA6L};
        unsigned l_1583[10];
        union U0 l_1588 = {4294967294UL};
        unsigned short l_1593 = 65528UL;
        char l_1614 = 7L;
        short l_1626[4];
        union U1 l_1633 = {1UL};
        unsigned l_1675 = 0xDED5CB4DL;
        int i;
        for (i = 0; i < 10; i++)
            l_1583[i] = 3UL;
        for (i = 0; i < 4; i++)
            l_1626[i] = 0x99F7L;
        for (p_30 = 0; (p_30 <= 9); p_30 += 1)
        {
            unsigned l_1546 = 1UL;
            int l_1554 = 0L;
            union U1 l_1558 = {0xFBL};
            union U0 l_1600 = {4294967295UL};
            unsigned char l_1642 = 4UL;
            int l_1669 = 0L;
            union U0 l_1672[4][2][7] = {{{{0x1C28182AL},{0x3F4282C9L},{0xBE0BD4D6L},{0x1C28182AL},{0UL},{0x6CEFA092L},{0UL}},{{0x1C28182AL},{0x7C705712L},{0x7C705712L},{0x1C28182AL},{0xF6801398L},{0xEC554F42L},{0x3F4282C9L}}},{{{0x07562572L},{4294967295UL},{4294967295UL},{2UL},{4294967295UL},{0xD7D48694L},{4294967295UL}},{{0UL},{0x918A2BD8L},{0x6CEFA092L},{0UL},{0x07733A32L},{0x6CEFA092L},{0x3F4282C9L}}},{{{0x9AC3B2B5L},{4294967295UL},{0x07562572L},{0UL},{2UL},{2UL},{0UL}},{{0x07562572L},{0x1C28182AL},{0x07562572L},{0xF6801398L},{0x918A2BD8L},{0x40AE5BA3L},{0x7C705712L}}},{{{0x918A2BD8L},{0x9AC3B2B5L},{0x6CEFA092L},{4294967295UL},{0x3F4282C9L},{0xBE0BD4D6L},{4294967295UL}},{{0UL},{0x7C705712L},{4294967295UL},{0x07733A32L},{2UL},{0x40AE5BA3L},{0UL}}}};
            int i, j, k;
            for (g_649 = 0; (g_649 <= 9); g_649 += 1)
            {
                int l_1532[6][10][4] = {{{8L,8L,1L,(-9L)},{0L,1L,0xA6D6B84DL,0xB099ED4DL},{0x676B7ADEL,9L,0x97FE0962L,0xA6D6B84DL},{0xA6D6B84DL,9L,8L,0xB099ED4DL},{9L,1L,9L,(-9L)},{0xDCEF04B2L,8L,0xC7DF93D1L,0x676B7ADEL},{8L,0xDCEF04B2L,(-9L),8L},{0xB099ED4DL,0x0913F1EDL,(-9L),0xDCAC230BL},{8L,0xC7DF93D1L,0xC7DF93D1L,8L},{0xDCEF04B2L,0xB099ED4DL,9L,0xCC6C4BF3L}},{{9L,0xA6D6B84DL,0xB099ED4DL,0xCC6C4BF3L},{8L,8L,0x676B7ADEL,0xCC6C4BF3L},{0x7B5C9F70L,0xA6D6B84DL,8L,0xA6D6B84DL},{0xDCEF04B2L,0L,0x116F507BL,(-9L)},{0xB099ED4DL,0xDCAC230BL,0x7B5C9F70L,9L},{8L,0xCC6C4BF3L,9L,0xB099ED4DL},{8L,0x97FE0962L,0x7B5C9F70L,0x7B5C9F70L},{0xB099ED4DL,0xB099ED4DL,0x116F507BL,0xC7DF93D1L},{0xDCEF04B2L,0x116F507BL,8L,0L},{0x7B5C9F70L,1L,0x676B7ADEL,8L}},{{8L,1L,0xB099ED4DL,0L},{1L,0x116F507BL,1L,0xC7DF93D1L},{0x97FE0962L,0xB099ED4DL,0xDCAC230BL,0x7B5C9F70L},{(-9L),0x97FE0962L,0xC7DF93D1L,0xB099ED4DL},{0L,0xCC6C4BF3L,0xC7DF93D1L,9L},{(-9L),0xDCAC230BL,0xDCAC230BL,(-9L)},{0x97FE0962L,0L,1L,0xA6D6B84DL},{1L,0xA6D6B84DL,0xB099ED4DL,0xCC6C4BF3L},{8L,8L,0x676B7ADEL,0xCC6C4BF3L},{0x7B5C9F70L,0xA6D6B84DL,8L,0xA6D6B84DL}},{{0xDCEF04B2L,0L,0x116F507BL,(-9L)},{0xB099ED4DL,0xDCAC230BL,0x7B5C9F70L,9L},{8L,0xCC6C4BF3L,9L,0xB099ED4DL},{8L,0x97FE0962L,0x7B5C9F70L,0x7B5C9F70L},{0xA6D6B84DL,0xA6D6B84DL,0x0913F1EDL,0xDCEF04B2L},{(-9L),0x0913F1EDL,0xB099ED4DL,8L},{9L,0x7B5C9F70L,0xDCAC230BL,0xB099ED4DL},{0xB099ED4DL,0x7B5C9F70L,0xA6D6B84DL,8L},{0x7B5C9F70L,0x0913F1EDL,0x7B5C9F70L,0xDCEF04B2L},{0xC7DF93D1L,0xA6D6B84DL,0x97FE0962L,9L}},{{0L,0xC7DF93D1L,0xDCEF04B2L,0xA6D6B84DL},{8L,0x116F507BL,0xDCEF04B2L,0x676B7ADEL},{0L,0x97FE0962L,0x97FE0962L,0L},{0xC7DF93D1L,8L,0x7B5C9F70L,8L},{0x7B5C9F70L,8L,0xA6D6B84DL,0x116F507BL},{0xB099ED4DL,0xCC6C4BF3L,0xDCAC230BL,0x116F507BL},{9L,8L,0xB099ED4DL,8L},{(-9L),8L,0x0913F1EDL,0L},{0xA6D6B84DL,0x97FE0962L,9L,0x676B7ADEL},{0xCC6C4BF3L,0x116F507BL,0x676B7ADEL,0xA6D6B84DL}},{{0xCC6C4BF3L,0xC7DF93D1L,9L,9L},{0xA6D6B84DL,0xA6D6B84DL,0x0913F1EDL,0xDCEF04B2L},{(-9L),0x0913F1EDL,0xB099ED4DL,8L},{9L,0x7B5C9F70L,0xDCAC230BL,0xB099ED4DL},{0xB099ED4DL,0x7B5C9F70L,0xA6D6B84DL,8L},{0x7B5C9F70L,0x0913F1EDL,0x7B5C9F70L,0xDCEF04B2L},{0xC7DF93D1L,0xA6D6B84DL,0x97FE0962L,9L},{0L,0xC7DF93D1L,0xDCEF04B2L,0xA6D6B84DL},{(-9L),8L,0x97FE0962L,0x7B5C9F70L},{0xDCEF04B2L,0x676B7ADEL,0x676B7ADEL,0xDCEF04B2L}}};
                int l_1533 = 0x664AB48BL;
                int i, j, k;
                l_1532[3][0][2] = 0L;
                l_1533 = g_96[p_30];
                if (g_150)
                    break;
                for (p_34.f1 = (-4); (p_34.f1 == 19); ++p_34.f1)
                {
                    int l_1542 = 0xE7B511F8L;
                    l_1542 = (((safe_mod_func_int8_t_s_s(((g_227 = (g_845 = (safe_mod_func_uint8_t_u_u((((l_1542 != 1UL) == p_34.f1) && (g_166 < l_1543)), l_1532[3][0][2])))) ^ g_18.f0), (safe_rshift_func_int8_t_s_u(l_1546, 3)))) != ((g_315[4][1][4] = ((g_183 | (-9L)) >= g_131[1])) == g_1531.f4)) && 0x53B1L);
                    l_1554 = (l_1533 = (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_1551, 0)), (safe_sub_func_int32_t_s_s((g_73 = l_1546), l_1543)))));
                    for (g_747.f4 = 0; (g_747.f4 <= 3); g_747.f4 += 1)
                    {
                        int i;
                        return g_72[g_747.f4];
                    }

                }

                            }
        }
        for (l_1627 = 27; (l_1627 != 36); l_1627 = safe_add_func_int16_t_s_s(l_1627, 8))
        {
            union U1 l_1689 = {250UL};
            l_1633.f2 = (!((p_31.f4 ^ (65530UL | p_34.f4)) || (func_9((func_9(p_34.f2, ((~(safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u(p_31.f0, l_1633.f0)) >= (safe_rshift_func_int8_t_s_s(p_34.f2, 5))), (0xBDL & (p_34.f4 | p_33))))) && p_32), g_1671.f0, g_934, l_1689) || l_1557[0][2][5].f0), g_186[3], p_31.f2, l_1588, g_18) || l_1689.f0)));

                    }
    }
    g_747.f2 = (l_1673[1] < (((!l_1557[0][2][5].f0) != (safe_add_func_int8_t_s_s((((safe_add_func_int8_t_s_s(func_80(g_18.f1, l_1694), (safe_mod_func_uint32_t_u_u(func_9(l_1694.f1, (safe_mod_func_uint8_t_u_u((p_34.f4 = p_30), g_881)), (1UL | p_32), l_1557[0][2][5], l_1694), l_1699)))) & g_845) == 0xF0L), (-1L)))) != g_931));

        l_1694.f2 = p_32;

        return g_747.f1;
}







static int func_36(int p_37)
{
    unsigned char l_1452 = 1UL;
    int l_1455 = 0L;
    int l_1456 = 5L;
    union U0 l_1463 = {0UL};
    unsigned l_1464[6];
    int i;
    for (i = 0; i < 6; i++)
        l_1464[i] = 4294967291UL;
    l_1452 = (safe_add_func_uint8_t_u_u(255UL, 0xB5L));
    for (g_747.f2 = 0; (g_747.f2 <= 7); g_747.f2 += 1)
    {
        p_37 = 0xB7D0D285L;
    }

        p_37 = (safe_add_func_int32_t_s_s((((l_1455 = (-1L)) < (l_1456 = (0x04L >= p_37))) & l_1452), (safe_sub_func_int16_t_s_s(g_182[4][3], (safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s(func_54((g_598[2] < 0x59F369F9L), (l_1463 = l_1463), (l_1464[3] & l_1452), l_1464[1]), p_37)), 4294967295UL))))));

        for (p_37 = 23; (p_37 != 11); p_37 = safe_sub_func_int16_t_s_s(p_37, 9))
    {
        unsigned l_1467 = 1UL;
        char l_1478[5] = {0xE4L,0xE4L,0xE4L,0xE4L,0xE4L};
        int l_1484 = 0x804EA57FL;
        int l_1505 = 5L;
        int l_1509[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1509[i] = 0xEFE92C35L;
        l_1467 = (l_1455 <= (-10L));
        if (l_1467)
        {
            short l_1483 = (-6L);
            int l_1485[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1485[i] = (-7L);
            if ((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u(65534UL, ((l_1485[2] = (safe_add_func_uint8_t_u_u(0x48L, (safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((l_1484 = (g_230 || (((g_182[4][4] = g_598[2]) & ((l_1478[2] ^ (((safe_add_func_int16_t_s_s(l_1478[2], ((safe_sub_func_uint8_t_u_u((g_131[0] && g_889), p_37)) & l_1483))) >= l_1467) <= l_1478[2])) <= g_219)) > g_193))), g_881)), p_37))))) | g_649))), 14)))
            {
                int l_1486 = 0xE776D8ACL;
                return l_1486;
            }
            else
            {
                g_315[5][1][5] = (g_73 >= ((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(l_1478[4], 2)), (g_132 | g_119[2]))) >= (-6L)));
                l_1485[2] = ((func_42(p_37, l_1463, l_1485[8]) <= ((p_37 > g_72[1]) != 1UL)) ^ l_1485[2]);

                            }

                        if (g_228)
                break;
            g_73 = l_1485[8];
            g_664 = (((l_1485[2] = l_1456) || ((safe_add_func_int32_t_s_s(((1UL != (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((g_227 = p_37), (safe_lshift_func_uint8_t_u_u((((l_1464[3] <= ((l_1484 = g_186[3]) >= (g_315[5][1][5] >= ((1UL & (l_1483 > (((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((l_1467 ^ g_15[1][2][0]), g_186[5])), p_37)) <= l_1485[7]) || l_1478[2]))) != g_649)))) | g_150) != 0xB4898927L), 1)))), 5))) || l_1485[0]), 0x2F437A44L)) ^ 0xBD7C6280L)) > g_747.f0);
        }
        else
        {
            unsigned short l_1506[6] = {0x466AL,0x6395L,0x6395L,0x466AL,0x6395L,0x6395L};
            int i;
            l_1509[4] = (p_37 < ((((-1L) | (l_1456 = (0xE1L || (l_1484 = g_243)))) > (l_1506[5] = (l_1505 = (g_845 > (g_186[1] < 0x22B9L))))) || (safe_sub_func_int8_t_s_s(g_73, p_37))));
            l_1509[4] = 0x2EC52FA4L;
            for (l_1452 = 0; (l_1452 >= 46); ++l_1452)
            {
                unsigned char l_1529 = 0xDFL;
                int l_1530 = 0x03372991L;
                g_315[5][1][5] = ((safe_mod_func_uint16_t_u_u((0x4DL > p_37), 0xCF11L)) & 0x52L);
                for (l_1505 = 0; (l_1505 < 24); ++l_1505)
                {
                    unsigned l_1528 = 4294967295UL;
                    l_1530 = (safe_sub_func_uint32_t_u_u(func_70(p_37), (safe_rshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((l_1456 = 0x0CD8A73AL) & (-1L)), ((safe_add_func_uint16_t_u_u(g_934.f0, (l_1529 = ((((l_1506[2] | (safe_sub_func_int8_t_s_s(l_1464[2], p_37))) != ((safe_rshift_func_uint8_t_u_u(l_1506[0], 3)) & p_37)) && l_1528) == g_1090[0])))) > (-6L)))) == 0x2F32L), 1))));
                    return g_72[2];
                }
            }
            g_664 = g_660;
        }

                l_1455 = g_72[3];
        if (p_37)
            continue;
    }
    return g_132;
}







static int func_42(char p_43, union U0 p_44, char p_45)
{
    unsigned l_1182 = 0x3914FEFBL;
    unsigned char l_1212 = 0xFCL;
    int l_1300 = 0xFFDBB8EAL;
    union U1 l_1318 = {0UL};
    int l_1367[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1367[i] = 0xD776FDF3L;
    for (p_43 = 29; (p_43 >= (-12)); p_43 = safe_sub_func_int8_t_s_s(p_43, 9))
    {
        char l_52 = 0x1AL;
        int l_60 = 0xC990B51EL;
        union U1 l_68[3][3][10] = {{{{247UL},{8UL},{255UL},{0x53L},{255UL},{8UL},{247UL},{9UL},{3UL},{0xA3L}},{{0UL},{0x46L},{254UL},{0xEDL},{255UL},{255UL},{1UL},{1UL},{248UL},{9UL}},{{0x6AL},{0x46L},{0x14L},{0x67L},{8UL},{250UL},{247UL},{0xA3L},{0xA4L},{6UL}}},{{{0xA4L},{8UL},{0xDBL},{255UL},{0UL},{248UL},{255UL},{0UL},{255UL},{0x6AL}},{{254UL},{0x43L},{0x67L},{0xA4L},{255UL},{255UL},{0xA4L},{0x67L},{0x43L},{254UL}},{{0x63L},{0xDBL},{254UL},{0x20L},{0xEDL},{9UL},{0UL},{0x87L},{0xB5L},{0x46L}}},{{{0x43L},{255UL},{0xB5L},{0xDBL},{0xEDL},{0x67L},{0UL},{0x63L},{0UL},{254UL}},{{0xEDL},{0UL},{247UL},{254UL},{255UL},{0x14L},{255UL},{0UL},{0x20L},{0xA3L}},{{0UL},{255UL},{254UL},{0UL},{0UL},{255UL},{1UL},{255UL},{0UL},{0UL}}}};
        union U2 l_69 = {1L};
        unsigned char l_1183 = 3UL;
        int i, j, k;
        l_1182 = (safe_rshift_func_int8_t_s_u(((g_53 = (l_52 = (g_15[1][2][0] & p_43))) > ((-1L) > func_54((((safe_unary_minus_func_int16_t_s((0xD9L || ((!p_43) >= l_60)))) | ((safe_add_func_int32_t_s_s(func_63(l_68[1][0][2], g_15[1][2][0], l_69, g_15[2][0][3]), g_15[1][2][1])) == p_44.f0)) ^ p_44.f0), g_934, p_45, p_43))), 1));

                l_68[1][0][2].f2 = l_1183;
        g_73 = (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(l_1182, ((p_44.f0 < (0x8D00EAFEL && ((l_69.f0 != (-8L)) && ((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((g_532 = (safe_mod_func_uint16_t_u_u(g_649, l_1182))), p_45)), (safe_sub_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((((g_934.f0 = 4294967290UL) ^ g_96[6]) ^ 0xF999L), (-3L))) < p_43) >= 1UL), l_1182)))) <= 0x3010L)))) ^ 0xFAF3L))) >= 0x7EL), l_1182));
    }
    for (g_747.f1 = (-27); (g_747.f1 == 44); ++g_747.f1)
    {
        unsigned char l_1231[3];
        int l_1263 = 0xE2276AF6L;
        int l_1267 = 0x36270B3CL;
        char l_1298 = 1L;
        unsigned short l_1366 = 0x78DCL;
        int i;
        for (i = 0; i < 3; i++)
            l_1231[i] = 0xCAL;
        if (g_161)
        {
            return p_43;
        }
        else
        {
            unsigned l_1202 = 0x881210F2L;
            int l_1203 = 0x97CE06ABL;
            unsigned char l_1335 = 0x57L;
            l_1203 = (safe_add_func_uint32_t_u_u(4294967287UL, (l_1202 == p_45)));
            for (g_184 = 2; (g_184 <= 8); g_184 += 1)
            {
                char l_1241 = 0xAEL;
                int i;
                g_315[5][1][5] = (safe_mod_func_int32_t_s_s(g_119[g_184], (p_44.f0 && p_43)));
                for (p_43 = 1; (p_43 >= 0); p_43 -= 1)
                {
                    int l_1243 = 4L;
                    int l_1256 = 0L;
                    int i;
                    if (g_131[p_43])
                    {
                        int i;
                        l_1203 = (safe_rshift_func_int16_t_s_u(((g_1090[3] = (0x739819B0L <= g_131[p_43])) != (g_272 = (safe_sub_func_int32_t_s_s(g_131[p_43], (safe_sub_func_uint8_t_u_u(252UL, (l_1212 != (safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((((p_43 & p_44.f0) < (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((l_1231[2] = g_193) <= (g_119[g_184] | g_881)) | (-1L)), 15)), g_194)), l_1203)), 8)), p_44.f0)) ^ 0L), g_532)), 10))) >= p_45), (-1L))), 1L))))))))), p_44.f0));
                    }
                    else
                    {
                        char l_1238[6][5][7] = {{{0L,0x26L,0L,0x8CL,0L,0x26L,0L},{(-1L),0x24L,0xC4L,0x13L,0L,0x0FL,0x0FL},{(-1L),6L,0x9FL,6L,(-1L),0x26L,0x9FL},{0xC1L,(-1L),0x24L,0xC4L,0x13L,0L,0x0FL},{0L,0x8CL,0L,0x26L,0L,0x8CL,0L}},{{0xC1L,0xC4L,0x0FL,0x13L,(-1L),0x06L,0x24L},{(-1L),0x8CL,0xCEL,0x82L,(-1L),0x82L,0xCEL},{(-1L),(-1L),0x0FL,0x24L,0xC1L,0L,0xC4L},{0L,6L,0L,0x82L,0L,6L,0L},{0x13L,0x24L,0x24L,0x13L,0xC1L,0x0FL,0x06L}},{{(-1L),0x26L,0x9FL,0x26L,(-1L),6L,0x9FL},{0L,(-1L),0xC4L,0xC4L,(-1L),0L,0x06L},{0L,0x82L,0L,6L,0L,0x82L,0L},{0L,0xC4L,0x06L,0x13L,0x13L,0x06L,0xC4L},{(-1L),0x82L,0xCEL,0x8CL,(-1L),0x8CL,0xCEL}},{{0x13L,(-1L),0x06L,0x24L,0L,0L,0x24L},{0L,0x26L,0L,0x8CL,0L,0x26L,0L},{(-1L),0x24L,0xC4L,0x13L,0L,0x0FL,0x0FL},{(-1L),6L,0x9FL,6L,(-1L),0x26L,0x9FL},{0xC1L,(-1L),0x24L,0xC4L,0x13L,0L,0x0FL}},{{0L,0x8CL,0L,0x26L,0L,0x8CL,0L},{0xC1L,0xC4L,0x0FL,0x13L,(-1L),0x06L,0x24L},{(-1L),0x8CL,0xCEL,0x82L,(-1L),0x82L,0xCEL},{(-1L),(-1L),0x0FL,0x24L,0xC1L,0L,0xC4L},{0L,6L,0L,0x82L,0L,6L,0L}},{{0x13L,0x24L,0x24L,0x13L,0xC1L,0x0FL,0x06L},{(-1L),0x26L,0x9FL,0x26L,(-1L),6L,0x9FL},{0L,(-1L),0xC4L,0xC4L,(-1L),0L,0x06L},{0L,0x82L,0L,6L,0L,0x82L,0L},{0L,0xC4L,0x06L,0x13L,0x13L,0x06L,0xC4L}}};
                        int l_1242 = (-8L);
                        int i, j, k;
                        l_1242 = (((safe_rshift_func_uint8_t_u_u(((0x4CDCL & (safe_sub_func_int16_t_s_s(0x323DL, g_119[g_184]))) < g_219), 6)) >= ((g_119[g_184] >= p_45) >= ((safe_rshift_func_int16_t_s_u(l_1238[0][4][2], (safe_mod_func_uint16_t_u_u(g_98, g_15[2][1][2])))) < l_1241))) ^ 0x21L);
                        l_1243 = g_660;
                        g_315[5][1][5] = ((safe_unary_minus_func_uint32_t_u(g_1090[0])) != (g_15[(p_43 + 2)][p_43][(p_43 + 1)] = (g_119[g_184] || ((4294967287UL > ((((0x95L == (safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_s((((g_150 >= (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(g_207, ((l_1256 = 0xA767L) & l_1231[2]))), (+(-2L)))) | 0x77C373ACL)))) <= p_43) & l_1203), 7)) & p_43) >= l_1203), 0x305009CFL)), 65535UL))) && 0UL) & l_1212) != l_1242)) != g_193))));
                    }
                    if ((safe_mod_func_uint8_t_u_u((safe_add_func_int32_t_s_s(0L, p_43)), (safe_lshift_func_uint8_t_u_s(p_43, 5)))))
                    {
                        int i;
                        l_1243 = (((l_1263 = g_252) > (g_1090[3] = 0x7DD6L)) ^ g_137);
                        g_315[5][1][5] = (safe_add_func_uint32_t_u_u((g_131[p_43] = ((g_532 = (p_44.f0 != l_1263)) != ((l_1267 = ((safe_unary_minus_func_uint8_t_u(g_72[1])) <= p_44.f0)) & (g_881 & l_1263)))), g_137));
                        l_1263 = p_44.f0;
                        l_1267 = (l_1243 ^ l_1182);
                    }
                    else
                    {
                        return l_1243;
                    }
                    if (g_747.f0)
                    {
                        int l_1268 = 0x9DF2AEABL;
                        g_315[5][2][2] = (l_1268 = l_1203);
                        g_73 = (l_1203 = (6L >= ((0x31L && (l_1243 = (2UL & g_131[0]))) <= (((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(p_44.f0, l_1263)) >= (-6L)) != (g_227 > p_43)), l_1203)), 1)) && (-1L)) != 0x3D02L))));
                        l_1267 = ((((g_186[6] = ((safe_add_func_int8_t_s_s(((g_153[1][0] = (safe_mod_func_int8_t_s_s(g_119[3], g_131[1]))) <= l_1231[2]), (g_230 = p_43))) != (l_1203 = ((l_1256 < g_119[g_184]) && (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((l_1263 = p_43), l_1203)), p_45)) == g_747.f0), l_1243)), g_845)))))) ^ g_649) & l_1202) & p_43);
                        l_1243 = (safe_lshift_func_uint16_t_u_u(0x004CL, 6));
                    }
                    else
                    {
                        l_1267 = (p_44.f0 < (g_137 = p_44.f0));
                    }
                }
                return g_272;
            }
            for (p_45 = 3; (p_45 >= 0); p_45 -= 1)
            {
                int l_1297 = (-9L);
                int l_1299 = 0L;
                int l_1308[9][6] = {{0xBC3D77F7L,0xBC3D77F7L,(-1L),0xF860DE04L,(-1L),0xBC3D77F7L},{(-1L),0xC2600376L,0xF860DE04L,0xF860DE04L,0xC2600376L,(-1L)},{0xBC3D77F7L,(-1L),0xF860DE04L,(-1L),0xBC3D77F7L,0xBC3D77F7L},{0L,(-1L),(-1L),0L,0xC2600376L,0L},{0L,0xC2600376L,0L,(-1L),(-1L),0L},{0xBC3D77F7L,0xBC3D77F7L,(-1L),0xF860DE04L,(-1L),0xBC3D77F7L},{(-1L),0xC2600376L,0xF860DE04L,0xF860DE04L,0xC2600376L,(-1L)},{0xBC3D77F7L,(-1L),0xF860DE04L,(-1L),0xBC3D77F7L,0xBC3D77F7L},{0L,(-1L),(-1L),0L,0xC2600376L,0L}};
                int l_1309 = 0x1FDD8BE3L;
                int i, j;
                l_1203 = (((p_45 > (l_1299 = (l_1298 = (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(0x0E84L, g_934.f0)), 14)) ^ (g_881 & (safe_sub_func_uint32_t_u_u(((l_1263 = (-2L)) >= 4294967293UL), (safe_mod_func_uint32_t_u_u((((g_15[2][0][3] = l_1297) < 0x07L) || g_881), 4294967287UL)))))) < p_45)))) ^ 0xCBL) || g_230);
                if (p_43)
                    break;
                for (g_73 = 0; (g_73 <= 3); g_73 += 1)
                {
                    int l_1307 = 0x1E342C37L;
                    int l_1312[10][1][2] = {{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}},{{(-8L),(-8L)}}};
                    union U1 l_1322 = {255UL};
                    int i, j, k;
                    for (g_252 = 0; (g_252 <= 3); g_252 += 1)
                    {
                        l_1300 = 0xB9EDA622L;
                        l_1267 = (l_1263 = l_1202);
                        l_1299 = g_747.f0;
                        g_664 = (l_1231[2] == l_1263);
                    }
                    g_315[7][0][0] = (safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(l_1299, l_1267)) < (safe_add_func_uint32_t_u_u(0xFE887F77L, (+((((l_1308[8][2] = (l_1307 || l_1299)) ^ ((((p_44.f0 == (l_1309 = 0xB6CAL)) & (0x7C3EL && (safe_lshift_func_int8_t_s_s(0x30L, 2)))) >= g_845) != g_845)) && g_243) <= l_1312[6][0][1]))))), p_44.f0));
                    if (p_45)
                    {
                        unsigned l_1317 = 3UL;
                        int l_1319 = 6L;
                        int l_1327 = 0x6513E068L;
                        g_315[6][3][1] = (65535UL < ((safe_add_func_int8_t_s_s(p_44.f0, (func_80(((p_45 || l_1212) >= (g_845 != ((g_53 & (safe_add_func_int16_t_s_s((l_1263 = func_80((((l_1203 = l_1312[6][0][1]) != l_1202) || func_80(l_1317, l_1318)), g_747)), 0x2683L))) | p_43))), g_747) == g_660))) || l_1319));
                        l_1327 = ((func_80((safe_mod_func_uint8_t_u_u(g_207, l_1212)), l_1322) > (((((safe_lshift_func_uint16_t_u_u((l_1203 = p_45), 10)) >= g_881) || g_1090[1]) & g_15[1][3][2]) ^ (safe_add_func_int32_t_s_s((l_1319 = l_1318.f1), p_43)))) != l_1231[2]);
                        if (g_845)
                            continue;
                    }
                    else
                    {
                        union U1 l_1328[10] = {{250UL},{250UL},{0x92L},{250UL},{250UL},{0x92L},{250UL},{250UL},{0x92L},{250UL}};
                        int i;
                        g_315[1][3][4] = (g_74 = (func_80(g_1090[0], l_1328[7]) || p_44.f0));
                        if (p_45)
                            break;
                        l_1203 = p_43;
                        l_1203 = (((5L & ((((safe_rshift_func_uint8_t_u_s((+g_315[4][2][4]), (safe_sub_func_int32_t_s_s(((safe_mod_func_uint32_t_u_u((l_1328[7].f2 = p_44.f0), l_1335)) & 0x6E77L), (safe_unary_minus_func_int32_t_s(l_1318.f1)))))) & (safe_rshift_func_uint8_t_u_s((l_1212 > (((safe_rshift_func_uint8_t_u_s(l_1308[8][5], 4)) != (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(g_664, 13)), 13))) ^ l_1203)), 1))) >= p_44.f0) > 0x0437L)) < p_43) >= 1UL);
                    }
                }
            }
        }
        g_664 = 0xB441FE62L;
        l_1267 = p_43;
        for (g_184 = (-12); (g_184 == 21); ++g_184)
        {
            unsigned l_1365 = 0UL;
            int l_1368 = (-1L);
            unsigned char l_1391[5][2];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1391[i][j] = 248UL;
            }
            if (((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((g_194 != ((safe_sub_func_uint16_t_u_u((~1UL), ((safe_sub_func_uint16_t_u_u((g_219 & ((l_1365 = (((g_272 | ((-5L) != (safe_rshift_func_int8_t_s_u((p_44.f0 > (g_137 = ((safe_rshift_func_uint8_t_u_s(p_45, (p_43 = (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_43 & (g_73 == 4294967295UL)), p_43)), l_1300))))) <= l_1182))), l_1298)))) != 0x6482L) <= 0xB6E5L)) && l_1366)), l_1367[0])) == l_1368))) && l_1300)) != 0x43L) == p_45), g_153[2][3])), l_1298)) ^ l_1300))
            {
                for (l_1366 = 0; (l_1366 <= 0); l_1366 += 1)
                {
                    int i, j;
                    g_664 = g_153[(l_1366 + 2)][(l_1366 + 1)];
                    g_315[5][1][5] = l_1367[l_1366];
                    g_315[5][1][5] = g_193;
                }
                return l_1182;
            }
            else
            {
                char l_1373 = 0x1AL;
                int l_1380 = 0x0896BDA3L;
                int l_1409 = 0xF885053CL;
                int l_1425 = 1L;
                if (((p_43 <= ((safe_add_func_int32_t_s_s((l_1300 = ((0L ^ (((safe_rshift_func_uint8_t_u_s(l_1373, 1)) != p_44.f0) == g_243)) ^ (safe_sub_func_uint32_t_u_u(p_44.f0, (g_186[3] != (safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(l_1373, 11)), (l_1380 = g_845)))))))), l_1365)) | l_1368)) > g_747.f1))
                {
                    char l_1394 = 0xC7L;
                    int l_1410 = 1L;
                    l_1267 = l_1318.f1;
                    l_1391[1][0] = (l_1368 = (l_1300 & ((((safe_sub_func_uint8_t_u_u((g_230 = l_1231[0]), ((~p_44.f0) ^ p_43))) < (g_73 <= l_1366)) ^ (safe_add_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_43, 1)), 12)) && (l_1380 = (safe_mod_func_int32_t_s_s((p_43 <= ((p_44.f0 <= p_44.f0) || (-1L))), g_207)))) || p_45), g_98))) && 0xAE9BL)));
                    if ((safe_add_func_uint32_t_u_u(l_1394, ((l_1267 = (-1L)) <= (safe_mod_func_uint32_t_u_u((g_96[6] || ((l_1394 <= (l_1367[0] = ((l_1380 & (l_1365 & ((l_1231[2] >= (l_1212 ^ 0x0D7BC28EL)) && p_43))) || g_660))) > 0x8F3B943EL)), g_660))))))
                    {
                        g_73 = (((p_44.f0 && (((safe_mod_func_uint8_t_u_u(l_1366, (g_53 = p_43))) != p_44.f0) & (safe_rshift_func_int8_t_s_u(g_137, (safe_add_func_uint16_t_u_u(((g_72[0] < p_43) & g_153[0][1]), (safe_mod_func_uint32_t_u_u((g_119[3] && p_45), g_315[2][2][1])))))))) && 250UL) > p_44.f0);
                        return g_845;
                    }
                    else
                    {
                        g_74 = (l_1410 = (l_1409 = (safe_rshift_func_uint8_t_u_u((l_1367[0] = (l_1380 = (((safe_sub_func_uint8_t_u_u(g_119[3], p_43)) >= (l_1391[2][1] ^ l_1365)) | g_193))), ((l_1391[4][1] <= ((p_44.f0 = 0x366F3207L) || 6L)) ^ l_1318.f0)))));
                        l_1368 = l_1410;
                    }
                    for (g_183 = 0; g_183 < 8; g_183 += 1)
                    {
                        g_186[g_183] = 1L;
                    }
                }
                else
                {
                    unsigned l_1411 = 0x4E96FF49L;
                    int l_1412 = 0xFE977848L;
                    l_1380 = (g_74 = (l_1300 | (l_1412 = (l_1411 >= p_43))));
                    g_315[1][1][5] = (safe_rshift_func_int8_t_s_u(((g_53 < (p_44.f0 < (l_1300 ^ ((safe_lshift_func_uint16_t_u_u((l_1367[0] = (safe_lshift_func_uint8_t_u_s(g_74, p_45))), 0)) ^ ((safe_lshift_func_int8_t_s_u((((g_153[0][4] >= ((((g_74 <= (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u((g_207 = 0L), g_153[1][0])) <= l_1425) | (-1L)), 7))) > g_209[1][4]) < p_45) || 0x89687F0CL)) || p_44.f0) == l_1391[2][0]), 2)) | 0x4CB8L))))) == p_43), g_108));
                    return g_747.f1;
                }
                return p_44.f0;
            }
        }
    }

        for (g_194 = 0; (g_194 < 47); g_194 = safe_add_func_uint32_t_u_u(g_194, 6))
    {
        int l_1428[7] = {6L,(-1L),(-1L),6L,(-1L),(-1L),6L};
        int i;
        l_1428[3] = ((g_204 = ((4294967295UL != (p_44.f0 = 0x010C9A20L)) != 0xDC75L)) || 255UL);
        g_747.f2 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s(g_252, 8)) >= g_131[0]) | (safe_mod_func_uint16_t_u_u((l_1318.f1 & ((((g_315[5][1][5] = (-7L)) == g_153[0][1]) ^ p_44.f0) == ((((g_845 || ((g_186[3] || (safe_mod_func_int8_t_s_s((p_45 > (-8L)), g_881))) >= p_44.f0)) > 0x1CL) <= (-1L)) >= 0xABL))), g_131[1]))) != 0x3FB7L) < p_44.f0), g_98)), (-4L)));

                l_1367[0] = (((safe_add_func_int16_t_s_s(func_54(l_1318.f1, (g_934 = g_934), (1UL ^ p_43), (safe_lshift_func_int16_t_s_s(9L, (l_1428[4] = (safe_rshift_func_uint8_t_u_s(g_931, g_275)))))), (safe_mod_func_int16_t_s_s((-6L), 0x4A4DL)))) < g_132) <= 6L);

            }
    return g_315[5][1][5];
}







static unsigned short func_54(int p_55, union U0 p_56, unsigned char p_57, short p_58)
{
    unsigned l_937 = 4294967294UL;
    char l_956 = 0xBAL;
    short l_957 = 0x8D72L;
    unsigned short l_995 = 0x869BL;
    int l_996[6] = {0x4C2216CAL,0x4C2216CAL,0x4C2216CAL,0x4C2216CAL,0x4C2216CAL,0x4C2216CAL};
    unsigned short l_1042 = 0xD6A3L;
    unsigned char l_1054 = 1UL;
    short l_1067 = (-10L);
    int l_1167 = (-2L);
    int i;
    for (g_204 = 1; (g_204 <= 4); g_204 += 1)
    {
        unsigned short l_946 = 0x512EL;
        int l_958 = 0x2A166E15L;
        int l_959[2];
        unsigned l_1102 = 0UL;
        unsigned short l_1164 = 0x6B57L;
        int l_1172 = (-2L);
        int i;
        for (i = 0; i < 2; i++)
            l_959[i] = 0x6AF00F9EL;
        if (((4294967295UL ^ (g_186[3] || (safe_rshift_func_int8_t_s_s(l_937, ((safe_add_func_uint32_t_u_u((p_56.f0 = (g_131[1] = 4294967294UL)), ((safe_lshift_func_int8_t_s_s(g_72[1], 1)) & (!0xDAA5L)))) | (((safe_mod_func_int16_t_s_s(p_55, p_57)) && 8L) < l_937)))))) & 1L))
        {
            g_73 = g_931;
            return p_56.f0;
        }
        else
        {
            unsigned l_955 = 4294967293UL;
            int l_982 = 0xECB4B86AL;
            l_959[1] = (safe_lshift_func_uint16_t_u_u((l_958 = (+((g_209[4][4] && (((p_56.f0 && ((l_946 ^ (+(safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x52L, g_108)), l_937)), ((g_207 = ((l_937 ^ l_955) && (l_956 = (((l_937 < 0x604AL) <= 1L) >= l_946)))) == p_57))), 0x148AL)))) >= l_957)) != 0x90L) ^ (-1L))) <= g_881))), l_946));
            for (g_532 = 0; (g_532 <= 4); g_532 += 1)
            {
                int l_960 = 0xCB5FC5E6L;
                int i, j;
                l_960 = (((g_315[0][0][1] = 0L) < ((g_209[g_532][(g_204 + 1)] == (g_209[g_204][(g_204 + 2)] <= l_958)) && (g_209[g_532][(g_204 + 1)] == (g_96[0] < p_56.f0)))) && g_209[g_532][(g_204 + 1)]);
                if (p_56.f0)
                    break;
                for (g_137 = 0; (g_137 <= 4); g_137 += 1)
                {
                    unsigned l_963 = 0x3124B2D0L;
                    int l_964 = (-1L);
                    for (g_161 = 0; (g_161 <= 4); g_161 += 1)
                    {
                        g_74 = g_275;
                        l_963 = (p_58 <= (safe_add_func_int16_t_s_s(p_58, 0xEE78L)));
                        l_959[1] = p_57;
                    }
                    for (l_956 = 3; (l_956 >= 1); l_956 -= 1)
                    {
                        unsigned char l_979 = 0x17L;
                        if (g_72[0])
                            break;
                        l_964 = (g_315[5][1][5] = l_963);
                        l_960 = (0xD9L & p_56.f0);
                        l_958 = ((l_982 = (safe_lshift_func_int8_t_s_u((g_186[3] = (g_153[0][1] = (safe_rshift_func_uint8_t_u_u((p_55 && ((safe_mod_func_uint32_t_u_u(g_15[2][2][3], (safe_add_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0UL, (safe_add_func_uint16_t_u_u((p_57 || ((safe_rshift_func_uint8_t_u_s(0x13L, l_979)) != (p_56.f0 || l_979))), (safe_mod_func_int8_t_s_s(l_956, g_209[g_204][(g_204 + 2)])))))), 1UL)))) != 4UL)), p_56.f0)))), g_228))) <= (-9L));
                    }
                    g_73 = ((l_964 = (0xA1L != (safe_sub_func_uint16_t_u_u((l_958 & ((((g_272 = (l_995 = (((-1L) <= g_96[0]) | (safe_add_func_int8_t_s_s(0x8CL, (safe_lshift_func_uint8_t_u_u(255UL, (safe_lshift_func_int8_t_s_u((l_982 = (((safe_mod_func_uint32_t_u_u(l_958, l_955)) < (safe_lshift_func_int16_t_s_u(((l_960 = (-10L)) && 1UL), 10))) < p_57)), l_959[1]))))))))) | g_219) ^ l_956) && 0xF3L)), 0L)))) == g_186[3]);
                    for (g_108 = 4; (g_108 >= 0); g_108 -= 1)
                    {
                        l_996[2] = (-8L);
                        g_73 = p_56.f0;
                    }
                }
            }
            for (g_230 = 0; (g_230 <= 4); g_230 += 1)
            {
                unsigned l_999 = 0x55C4B186L;
                short l_1009 = 1L;
                unsigned l_1016 = 1UL;
                int l_1018 = 0x5AA3CEA4L;
                if ((safe_rshift_func_uint16_t_u_s((l_999 & g_72[1]), 11)))
                {
                    unsigned l_1008 = 0x555F7809L;
                    for (g_272 = 1; (g_272 <= 4); g_272 += 1)
                    {
                        unsigned short l_1000 = 0x23B4L;
                        l_958 = (g_747.f2 = l_1000);

                        l_982 = (-3L);
                    }
                    if (l_996[2])
                        break;
                    l_958 = 0x4212E3C9L;
                    for (l_957 = 0; (l_957 <= 5); l_957 += 1)
                    {
                        unsigned char l_1003 = 0x1DL;
                        int l_1010 = (-7L);
                        int i;
                        l_996[l_957] = (safe_add_func_int32_t_s_s((((l_1003 = (l_996[g_204] && p_58)) ^ (p_57 = 248UL)) != l_996[g_204]), (p_56.f0 >= (1UL | 0L))));
                        g_74 = (l_1010 = ((0x4591A7CDL <= l_946) <= (safe_rshift_func_int8_t_s_u(g_931, (l_996[2] = (p_57 = ((((l_956 & g_98) > (safe_add_func_uint16_t_u_u(l_1008, ((g_15[1][2][0] == 0x2CL) || p_55)))) | l_1009) || p_56.f0)))))));
                        if (l_937)
                            continue;
                        if (g_161)
                            break;
                    }
                }
                else
                {
                    for (g_934.f0 = 0; (g_934.f0 <= 4); g_934.f0 += 1)
                    {
                        if (g_150)
                            break;
                        return l_955;
                    }
                }
                if (g_131[1])
                {
                    unsigned char l_1011 = 0x04L;
                    int l_1023 = 0x7EE70A9DL;
                    unsigned l_1039[10] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                    int i;
                    l_1011 = l_982;
                    for (l_956 = 0; (l_956 <= 4); l_956 += 1)
                    {
                        int l_1017[10] = {(-10L),0x1D557369L,0L,0x1D557369L,(-10L),(-10L),0x1D557369L,0L,0x1D557369L,(-10L)};
                        int i;
                        g_73 = l_946;
                        l_959[1] = ((g_845 = (g_747.f1 && (safe_add_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u((g_161 = l_982), (g_252 <= ((g_934.f0 = (g_119[3] == g_227)) | (l_1016 != l_1017[8]))))) && (((g_934.f0 <= p_55) | 0UL) <= 0xB5A0D18BL)) < 0x2FL) & p_55), g_132)))) | l_1017[8]);
                        l_1018 = g_532;
                    }
                    l_1023 = ((0xB8L >= ((l_955 > (l_1011 == p_57)) < (((g_166 = l_996[2]) != l_1011) || 0xC966ED8EL))) && (safe_lshift_func_uint16_t_u_u(((-1L) ^ (safe_rshift_func_int16_t_s_u(p_58, 4))), l_1018)));
                    for (g_934.f0 = 1; (g_934.f0 <= 4); g_934.f0 += 1)
                    {
                        int l_1038 = (-3L);
                        g_74 = (safe_lshift_func_int16_t_s_s(p_55, (safe_add_func_int8_t_s_s((l_959[1] & 0x051FD95AL), p_56.f0))));
                        l_1023 = (l_1038 = ((~((safe_rshift_func_int16_t_s_s((255UL != (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((l_1018 = (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(l_1038, (l_1039[9] & (g_153[1][5] || g_315[5][1][5])))), 4))), ((p_56.f0 && l_1038) >= (g_186[3] = 0x00L)))), 0))), (+(g_747.f1 > g_275)))) == l_996[2])) != p_58));
                        g_73 = (safe_add_func_int16_t_s_s(l_1042, (((l_999 && (((((safe_rshift_func_int8_t_s_s((!(g_660 >= (l_1023 = (p_56.f0 & 0x6D577D48L)))), 2)) < ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(0x36L, g_204)), g_207)), 0xDB11L)) <= 0UL)) != p_58) >= p_55) > 0x99L)) & p_57) || 0xC0A6L)));
                    }
                }
                else
                {
                    unsigned char l_1053[10][6] = {{1UL,1UL,0x7DL,1UL,1UL,0x08L},{6UL,0UL,0xD1L,0x00L,0x7DL,1UL},{0xD1L,0xAAL,1UL,0UL,0x48L,1UL},{0x08L,0xB2L,0xD1L,0xD1L,0xB2L,0x08L},{0x48L,1UL,0x7DL,0xB9L,6UL,0xB2L},{1UL,1UL,6UL,2UL,0UL,255UL},{1UL,0x00L,2UL,0xB9L,0x7DL,0xD1L},{0xB9L,2UL,0x00L,1UL,0xD1L,0xAAL},{0UL,0x08L,255UL,0x00L,1UL,0x7DL},{1UL,0x08L,0xB2L,0xD1L,0xD1L,0xB2L}};
                    char l_1061 = 1L;
                    int i, j;
                    l_1054 = (!(safe_rshift_func_uint8_t_u_u(l_1053[2][3], 2)));
                    l_996[2] = (-9L);
                    l_1018 = (4294967288UL & (safe_lshift_func_uint8_t_u_u(((l_1009 ^ p_56.f0) ^ ((safe_lshift_func_uint8_t_u_u(p_57, 5)) | (l_1018 | ((safe_sub_func_int16_t_s_s((p_56.f0 >= (l_996[0] = (g_166 >= (((l_958 = (0x06L || l_1009)) < l_1061) < l_1016)))), p_58)) || p_57)))), 0)));
                }
            }
        }
        if (((((g_193 = (-1L)) < (((safe_sub_func_uint32_t_u_u((l_958 = l_996[5]), l_937)) <= l_996[0]) > (safe_rshift_func_uint16_t_u_s(((0x5734L ^ g_207) > g_747.f0), p_55)))) || 0x66CDL) | g_230))
        {
            char l_1066[1][10] = {{7L,7L,7L,7L,7L,7L,7L,7L,7L,7L}};
            int l_1074 = 5L;
            int l_1089 = 8L;
            int i, j;
            l_1067 = l_1066[0][4];
            g_664 = (safe_rshift_func_int16_t_s_u(g_598[1], (safe_mod_func_uint32_t_u_u(p_56.f0, (safe_mod_func_int16_t_s_s((l_1074 = (+(0x88FAL & p_57))), (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_649 = (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_532, (l_1089 = ((safe_add_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_57 && g_119[3]), p_56.f0)), (((((6L != 1UL) != 5UL) && 0xFADCL) != 6UL) && g_881))) == 4294967295UL)))), 13)), 0))), g_1090[0])), p_57))))))));
            g_73 = 0x16387993L;
        }
        else
        {
            unsigned char l_1095 = 0x59L;
            int l_1099 = 0x26CE64D0L;
            int l_1142 = 0xC5B077BCL;
            if ((p_56.f0 < (safe_lshift_func_int16_t_s_u((-7L), 14))))
            {
                unsigned char l_1101 = 0x26L;
                l_996[2] = ((safe_add_func_uint32_t_u_u((l_1095 = g_315[5][1][5]), (safe_unary_minus_func_uint32_t_u(g_108)))) > (l_959[1] = (safe_add_func_int32_t_s_s((l_958 = ((0x49954E7FL || (l_1099 < (((l_1102 = (safe_unary_minus_func_uint8_t_u((g_881 && l_1101)))) < p_56.f0) >= ((l_1099 >= ((safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_1101, g_252)) ^ 0xE1238CF7L), g_96[9])) < g_166)) >= p_56.f0)))) <= p_58)), 1UL))));
            }
            else
            {
                int l_1107 = 0x1FFA8B0EL;
                g_74 = (((l_996[2] = g_150) >= (g_747.f0 || l_1107)) <= ((safe_lshift_func_int8_t_s_u(((l_1107 != ((p_58 && (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((g_98 = ((safe_rshift_func_uint8_t_u_s((0x7C0AL >= (l_1107 != ((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((l_1099 = g_227), ((1L < 0x5AL) == g_184))) == 1UL), 1)) && p_58))), p_55)) || 0xF18CL)), 0x97L)), 1))) >= l_1107)) <= l_957), g_664)) <= g_209[2][4]));
            }
            for (g_747.f1 = 0; (g_747.f1 <= 4); g_747.f1 += 1)
            {
                unsigned l_1122[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                int l_1149 = (-7L);
                unsigned l_1150 = 1UL;
                int i;
                for (l_957 = 2; (l_957 <= 9); l_957 += 1)
                {
                    int i;
                    if ((g_96[l_957] > (((g_272 || (g_182[1][4] > l_1122[0])) ^ ((+0x823DL) != (g_532 = g_72[0]))) | ((+0xFB92L) != ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(p_58, (p_55 || g_108))) ^ 0x85CBL), 0xA7L)) ^ g_228)))))
                    {
                        char l_1127 = 0x5EL;
                        g_74 = l_937;
                        g_73 = l_1127;
                        l_1099 = ((p_58 != p_55) & g_598[1]);
                    }
                    else
                    {
                        l_996[2] = ((safe_lshift_func_int8_t_s_s(p_57, 3)) && (!(~g_96[l_957])));
                    }
                }
                l_1099 = (safe_mod_func_int16_t_s_s(((((1L ^ ((safe_add_func_int32_t_s_s(((!(safe_add_func_int16_t_s_s((g_193 = (safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(g_230, (((p_55 >= (l_1142 = l_1122[0])) | (safe_mod_func_uint32_t_u_u(p_58, (g_845 = g_108)))) ^ (l_1149 = (p_55 && ((~p_55) > (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s(g_228, l_1095)), l_1122[0])))))))), 2)) & p_58) <= p_57), l_1099))), g_131[1]))) > p_58), l_1150)) & 1L)) != p_56.f0) | l_1042) > 0x5246L), p_56.f0));
                for (g_150 = 0; (g_150 <= 5); g_150 += 1)
                {
                    for (g_243 = 0; (g_243 <= 5); g_243 += 1)
                    {
                        int i;
                        l_996[g_243] = ((p_57 != (safe_lshift_func_uint8_t_u_s(p_57, 1))) && (((p_55 && l_1142) == g_1090[0]) || g_1090[0]));
                        l_1149 = l_1095;
                    }
                }
            }
            l_1099 = l_958;
            g_73 = (g_747.f2 = l_1099);

        }
        for (g_747.f0 = 0; (g_747.f0 <= 4); g_747.f0 += 1)
        {
            int l_1159 = 0xC64141DCL;
            int l_1173 = 0xEECA0536L;
            l_1159 = ((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_s(g_193, l_996[3])), (g_131[1] = (((+g_1090[0]) < g_660) < 0xCDL)))) ^ ((((safe_rshift_func_int8_t_s_s((l_1159 >= ((safe_mod_func_int32_t_s_s(g_153[0][1], (+(safe_mod_func_uint32_t_u_u(g_15[1][2][0], ((0x0CB7L || g_153[0][2]) || g_881)))))) < 1UL)), g_204)) > p_55) ^ p_56.f0) ^ 7L));
            for (p_58 = 0; (p_58 <= 4); p_58 += 1)
            {
                l_1164 = l_1159;
            }
            g_315[5][1][5] = (safe_sub_func_uint16_t_u_u((l_1159 = (g_72[1] != l_1167)), (safe_sub_func_int8_t_s_s(g_194, ((safe_add_func_int16_t_s_s((g_272 = (l_1172 != p_55)), (l_959[1] = ((+((l_1173 | l_1173) | (g_194 < p_55))) == 4294967292UL)))) < 0xE29E44CEL)))));
            for (l_958 = 4; (l_958 >= 0); l_958 -= 1)
            {
                g_315[5][1][5] = ((((safe_sub_func_int16_t_s_s(0L, p_56.f0)) < (l_1172 = (g_243 = ((g_227 = (((g_747.f0 < (2UL >= (safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_int8_t_s_u(p_58, 0)) && (~p_57)) && ((l_959[0] || ((-10L) ^ l_1159)) <= p_57)) || g_15[1][2][0]), g_119[3])))) ^ p_58) && g_96[0])) || l_1159)))) && p_58) <= g_96[6]);
                for (g_649 = 0; (g_649 <= 3); g_649 += 1)
                {
                    int i;
                    return g_72[g_649];
                }
                l_959[1] = (0xD192L & (((~((safe_lshift_func_int16_t_s_s(p_57, l_1173)) >= p_55)) >= (g_186[0] = 0xFCL)) && (l_996[4] = l_1173)));
                for (p_56.f0 = 0; (p_56.f0 <= 4); p_56.f0 += 1)
                {
                    l_959[1] = g_315[5][1][5];
                }
            }
        }

    }
    return p_57;
}







static int func_63(union U1 p_64, unsigned p_65, union U2 p_66, int p_67)
{
    int l_926 = (-1L);
    int l_933 = (-2L);
    g_315[5][0][5] = (func_70(p_66.f2) || (0UL <= (safe_lshift_func_uint8_t_u_s((g_747.f1 = (l_926 = 249UL)), 1))));

        for (p_64.f2 = (-6); (p_64.f2 == 13); p_64.f2 = safe_add_func_int8_t_s_s(p_64.f2, 5))
    {
        int l_932 = 0xD5E0FA0DL;
        l_932 = ((func_70(g_209[4][3]) != (0xDB6FL > 0xC696L)) & (g_931 = (safe_add_func_int16_t_s_s(p_67, (6UL == g_15[1][2][0])))));
        l_933 = g_227;
        g_315[5][1][5] = g_186[1];
    }

        return l_926;
}







static unsigned func_70(short p_71)
{
    unsigned l_752 = 0xDEDE5561L;
    int l_760 = 0xC2DE9E34L;
    union U1 l_829 = {0x14L};
    unsigned short l_847 = 0x9B3CL;
    int l_895 = 0xDEFB083DL;
    union U1 l_898 = {253UL};
    unsigned char l_922[4] = {253UL,253UL,253UL,253UL};
    int i;
    for (p_71 = 3; (p_71 >= 0); p_71 -= 1)
    {
        union U1 l_748 = {255UL};
        unsigned char l_812 = 7UL;
        for (g_73 = 0; (g_73 <= 3); g_73 += 1)
        {
            char l_79 = (-9L);
            int l_793 = 6L;
            unsigned char l_811 = 0xEEL;
            union U1 l_842[6] = {{0x0FL},{0x0FL},{0x0FL},{0x0FL},{0x0FL},{0x0FL}};
            int l_892 = 1L;
            int i;
            for (g_74 = 0; (g_74 <= 3); g_74 += 1)
            {
                union U1 l_83 = {0xA0L};
                if ((safe_mod_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((l_79 ^ (func_80(p_71, l_83) || func_80(((safe_add_func_int8_t_s_s(((p_71 == l_79) != p_71), 6UL)) <= func_80(g_183, g_747)), l_748))), l_748.f1)) || p_71), p_71)))
                {
                    for (g_660 = 0; (g_660 <= 3); g_660 += 1)
                    {
                        unsigned short l_749[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_749[i] = 0xE651L;
                        g_664 = (((l_749[0] || p_71) ^ l_749[0]) & (safe_lshift_func_uint16_t_u_u((p_71 || l_752), l_79)));
                        g_315[0][0][3] = ((safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(l_748.f1)), p_71)) || g_649);
                    }
                    for (g_108 = 3; (g_108 >= 0); g_108 -= 1)
                    {
                        int i;
                        g_315[5][1][5] = (0UL >= g_598[(g_74 + 3)]);
                        g_315[6][2][0] = g_598[(p_71 + 4)];
                    }
                }
                else
                {
                    g_315[6][3][4] = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(g_182[1][4], 0)), 6));
                    if (p_71)
                        break;
                }
                for (g_219 = 0; (g_219 <= 4); g_219 += 1)
                {
                    int l_766 = 0x9ABC8FB4L;
                    int i, j;
                    for (g_183 = 0; (g_183 <= 2); g_183 += 1)
                    {
                        int i, j;
                        l_760 = g_182[(g_74 + 1)][p_71];
                        l_760 = (safe_unary_minus_func_uint8_t_u(0UL));
                    }
                    g_315[5][1][5] = ((g_182[(g_73 + 2)][g_219] || (safe_sub_func_uint8_t_u_u((g_315[5][1][5] != (((safe_add_func_int32_t_s_s(((l_766 = g_747.f1) <= l_79), 0xBE811F6AL)) & 0xEDA60D7BL) <= (g_194 && (l_760 = ((safe_rshift_func_uint8_t_u_u(l_748.f1, 1)) != g_73))))), g_119[7]))) ^ g_153[0][1]);
                    for (g_660 = 0; (g_660 <= 4); g_660 += 1)
                    {
                        g_747.f2 = (l_766 <= (0xA987L & (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_15[2][3][2], (l_760 & ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(1UL, 6)), g_243)) && (safe_mod_func_uint32_t_u_u((0xB593F722L || (g_73 < (safe_mod_func_int8_t_s_s(g_230, g_204)))), 0x39FC2CF2L)))))), 5)), 0x97L))));

                                                g_315[5][1][5] = p_71;
                    }
                    if ((((g_72[3] <= (g_747.f0 | (((p_71 || (safe_unary_minus_func_uint16_t_u(p_71))) | p_71) & 65533UL))) != g_119[3]) && 1UL))
                    {
                        int l_792 = 0L;
                        int i, j;
                        g_315[5][1][5] = (safe_lshift_func_int8_t_s_s((g_182[(g_73 + 1)][(p_71 + 1)] = g_96[0]), (safe_sub_func_int16_t_s_s((-10L), (((safe_add_func_int8_t_s_s(0x8FL, (p_71 <= p_71))) ^ (-10L)) == (safe_rshift_func_int16_t_s_u((l_792 = g_243), 7)))))));
                        g_664 = p_71;
                        g_747.f2 = l_83.f0;

                                                l_748.f2 = g_132;

                                            }
                    else
                    {
                        unsigned l_813 = 18446744073709551615UL;
                        g_664 = (p_71 == ((l_793 = (0x9B68L != (+p_71))) && (0xC8002232L | (g_193 || (l_793 = (safe_lshift_func_uint8_t_u_s((g_96[0] || l_748.f0), 0)))))));
                        l_766 = (((g_207 = g_194) < p_71) && ((safe_sub_func_int8_t_s_s((((l_83.f2 = p_71) >= (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_u(l_793, 6)))) | (l_811 & (g_207 = (p_71 != 0x9DL)))) && 0x71411CF9L), l_752)), l_812)) == 0x37B036BBL), 7)), 0))) < g_186[3]), l_813)) >= l_760));
                    }
                }
                g_315[1][1][1] = ((safe_sub_func_int32_t_s_s((g_15[1][2][0] == 252UL), (safe_sub_func_uint32_t_u_u((g_131[1] ^ (safe_lshift_func_uint16_t_u_u(l_811, g_166))), g_209[1][5])))) & 0x7DL);
            }
            for (g_747.f3 = 0; (g_747.f3 <= 3); g_747.f3 += 1)
            {
                int l_828 = 0xFA01142CL;
                int l_830[2];
                union U1 l_888 = {255UL};
                int i;
                for (i = 0; i < 2; i++)
                    l_830[i] = 0xBD24F9A3L;
                l_829.f2 = (func_80((l_828 = (g_209[0][4] <= (((safe_sub_func_int32_t_s_s(l_760, (g_98 >= (safe_lshift_func_uint8_t_u_s(1UL, (((g_166 != g_182[1][4]) & (safe_rshift_func_uint16_t_u_u((g_532 = (((safe_sub_func_uint32_t_u_u(g_186[3], ((g_219 | ((l_793 > l_793) || 0xF0B3L)) != l_79))) ^ 0x44L) < l_748.f1)), 11))) == 1UL)))))) != p_71) ^ g_108))), l_829) & l_829.f0);

                                for (l_812 = 0; (l_812 <= 3); l_812 += 1)
                {
                    unsigned short l_846 = 9UL;
                    int l_875 = 0L;
                    l_793 = (p_71 != (((l_812 && 0x60L) <= (l_830[0] = p_71)) & g_193));
                    l_748.f2 = g_183;

                                        if ((((safe_rshift_func_int16_t_s_s(g_74, 5)) || (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((((safe_add_func_int32_t_s_s((safe_unary_minus_func_int32_t_s(l_79)), (func_80(g_137, l_842[3]) ^ (g_845 = (safe_lshift_func_uint16_t_u_u(g_15[3][2][3], 12)))))) >= ((l_847 = l_846) & 0x5E1AL)) > (((p_71 < 0x09B41840L) > g_15[1][2][0]) > g_74)) || l_812), p_71)), 5L))) & p_71))
                    {
                        int l_852 = 5L;
                        l_760 = 0L;
                        g_315[5][1][5] = (safe_add_func_uint16_t_u_u((l_852 = (g_150 = (((l_760 = (safe_rshift_func_uint16_t_u_u(g_98, 8))) & l_852) || (safe_rshift_func_int16_t_s_u(((+(((((safe_rshift_func_uint16_t_u_s(((g_228 || (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, 7)), p_71))) | p_71), (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(6L, l_752)), (((p_71 <= p_71) ^ l_846) | l_748.f0))))) <= 0x18A6L) >= g_153[0][4]) < g_275) != 0L)) | l_748.f4), l_846))))), 65533UL));
                        return p_71;
                    }
                    else
                    {
                        int l_876[8] = {0xBAB53459L,0xBAB53459L,0xBAB53459L,0xBAB53459L,0xBAB53459L,0xBAB53459L,0xBAB53459L,0xBAB53459L};
                        int i;
                        l_748.f2 = (safe_mod_func_uint8_t_u_u((l_760 = 0xF2L), (func_80((safe_mod_func_uint32_t_u_u((l_811 == l_748.f1), (safe_rshift_func_uint8_t_u_u((((g_664 >= (4294967295UL >= (safe_mod_func_uint32_t_u_u((~(safe_sub_func_uint8_t_u_u(p_71, (((l_875 = (0x97CAL & (p_71 || l_830[0]))) != (-10L)) >= l_828)))), l_876[2])))) < l_846) ^ l_830[0]), p_71)))), g_747) || g_532)));
                        l_875 = ((l_875 | p_71) ^ (g_166 & (l_760 = p_71)));
                    }
                }
                l_760 = (safe_mod_func_int32_t_s_s(((l_748.f2 = (p_71 < (-2L))) >= ((func_80((safe_lshift_func_uint16_t_u_u(((g_881 = g_72[0]) | ((safe_lshift_func_uint8_t_u_u((l_830[0] = 0x1EL), ((((!l_812) == (0x2B2FL ^ (p_71 && (l_752 & (((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(l_828, 0x49L)), p_71)) == p_71) ^ l_828))))) != g_119[3]) > 9L))) & g_161)), 4)), l_888) ^ g_747.f3) && p_71)), 4294967295UL));

                                g_889 = (func_80(l_830[0], g_747) != 1L);
            }

                        l_842[3].f2 = func_80((((l_793 = p_71) && func_80((safe_add_func_uint16_t_u_u((0xA0L >= ((func_80(l_829.f1, l_829) && ((0L <= l_847) || p_71)) == p_71)), p_71)), l_748)) & l_892), g_747);
            g_74 = (g_252 & (p_71 <= (p_71 > l_811)));
        }
    }
    l_895 = ((l_829.f2 = (p_71 >= (0UL && (((func_80(p_71, l_829) > (safe_rshift_func_uint16_t_u_s((l_829.f0 && (l_760 = ((0xC384L < p_71) | 0L))), p_71))) & g_845) || l_847)))) >= l_752);

        l_895 = (1L < (safe_rshift_func_uint8_t_u_u((func_80(g_207, l_898) != p_71), 0)));
    if (g_150)
    {
        unsigned short l_907[10][4][6] = {{{0x694BL,0UL,0UL,0x694BL,0x6596L,0xD194L},{0x4A90L,0xA5F4L,0x1FB8L,0x2955L,0xD478L,0x4E11L},{1UL,65535UL,0x3E20L,1UL,0xD478L,1UL},{0x6596L,0xA5F4L,0x694BL,0xA5F4L,0x6596L,1UL}},{{0x3E20L,0UL,7UL,0xD194L,0x694BL,1UL},{7UL,65534UL,0x6596L,0UL,0xD31EL,1UL},{1UL,1UL,7UL,7UL,1UL,0xD31EL},{0UL,0x694BL,0x6596L,0xD194L,0x4E11L,1UL}},{{0x694BL,0xBB22L,0x4E11L,1UL,0xD478L,7UL},{0x694BL,0x3E20L,1UL,0xD194L,1UL,0x3E20L},{0UL,0x4E11L,65535UL,0x1FB8L,0x3E20L,0x6596L},{0xD31EL,0xA5F4L,0xD194L,65535UL,0x2955L,1UL}},{{0x1FB8L,0xA5F4L,0x4A90L,0x3E20L,0x3E20L,0x4A90L},{0x4E11L,0x4E11L,0xA5F4L,1UL,1UL,0x694BL},{0xBB22L,0x3E20L,7UL,0xD31EL,0xD478L,0xA5F4L},{0x2955L,0xBB22L,7UL,0x694BL,0x4E11L,0x694BL}},{{0xA5F4L,0x694BL,0xA5F4L,0x6596L,1UL,0x4A90L},{0x6596L,1UL,0x4A90L,0xD478L,0UL,1UL},{1UL,0x4A90L,0xD194L,0xD478L,0x6596L,0x6596L},{0x6596L,65535UL,65535UL,0x6596L,0xBB22L,0x3E20L}},{{0xA5F4L,1UL,1UL,0x694BL,0xD194L,7UL},{0x2955L,0xD478L,0x4E11L,0xD31EL,0xD194L,1UL},{0xBB22L,1UL,0x6596L,0UL,0xA5F4L,0xD478L},{1UL,0x3E20L,0x694BL,0x1FB8L,0x4A90L,0xBB22L}},{{0x694BL,1UL,0xA5F4L,0x3E20L,0xD194L,0xBB22L},{0xD478L,65535UL,0x694BL,0x694BL,65535UL,0xD478L},{0xD194L,65534UL,0x4A90L,7UL,1UL,65535UL},{65534UL,0xA5F4L,1UL,0x6596L,0x4E11L,0x2955L}},{{65534UL,0x1FB8L,0x6596L,7UL,0x6596L,0x1FB8L},{0xD194L,1UL,0x3E20L,0x694BL,0x1FB8L,0x4A90L},{0xD478L,0xD31EL,7UL,0x3E20L,0xBB22L,0x6596L},{0x694BL,0xD31EL,1UL,0x1FB8L,0x1FB8L,1UL}},{{1UL,1UL,0xD31EL,0UL,0x6596L,65534UL},{0xA5F4L,0x1FB8L,0x2955L,0xD478L,0x4E11L,0xD31EL},{0xBB22L,0xA5F4L,0x2955L,65534UL,1UL,65534UL},{0xD31EL,65534UL,0xD31EL,0x4A90L,65535UL,1UL}},{{0x4A90L,65535UL,1UL,0x4E11L,0xD194L,0x6596L},{0UL,1UL,7UL,0x4E11L,0x4A90L,0x4A90L},{0x4A90L,0x3E20L,0x4E11L,0xA5F4L,1UL,1UL},{0UL,65535UL,0xBB22L,0x4A90L,0x1FB8L,0x694BL}}};
        char l_920 = 0L;
        unsigned short l_923[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_923[i] = 65535UL;
        for (g_881 = 0; (g_881 < 15); g_881 = safe_add_func_int16_t_s_s(g_881, 8))
        {
            short l_910 = (-1L);
            g_747.f2 = (func_80((safe_lshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x211C5250L, ((((safe_rshift_func_uint8_t_u_s(p_71, (l_907[5][1][1] <= p_71))) <= (((safe_rshift_func_uint16_t_u_u((p_71 >= p_71), func_80(p_71, g_747))) >= l_910) || 0xC996L)) | g_881) | p_71))), 8)), g_747) ^ p_71);

                    }
        if (p_71)
        {
            union U1 l_913 = {0x97L};
            int l_921[2];
            int i;
            for (i = 0; i < 2; i++)
                l_921[i] = 0L;
            l_913.f2 = (safe_lshift_func_int16_t_s_s(func_80(p_71, l_913), 7));

                        g_73 = ((func_80((l_829.f2 = (func_80(p_71, l_898) | ((safe_add_func_int16_t_s_s(l_907[7][3][5], (safe_mod_func_int8_t_s_s(g_881, (safe_lshift_func_int8_t_s_u((l_913.f2 = l_920), ((((g_73 & l_921[0]) != p_71) | l_921[0]) && 0x6AL))))))) < l_921[1]))), g_747) || 0x71D75B93L) <= 0x26831C39L);
            l_923[1] = (l_922[0] = func_80(p_71, (l_913 = g_747)));

                        return l_913.f1;
        }
        else
        {
            l_829.f2 = p_71;
            return g_227;
        }
    }
    else
    {
        g_664 = (+(g_204 == 0x6DL));
    }
    return l_752;
}







static char func_80(int p_81, union U1 p_82)
{
    int l_97 = 0L;
    int l_99 = 0x6C9D3DA5L;
    unsigned l_164 = 4294967286UL;
    unsigned l_165[8][2] = {{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL},{4UL,4UL}};
    char l_185 = (-1L);
    unsigned char l_229 = 0UL;
    int l_241 = 0x07DF1CD1L;
    unsigned l_267 = 1UL;
    unsigned short l_271 = 0UL;
    int l_274[5] = {0x19FE8951L,0x19FE8951L,0x19FE8951L,0x19FE8951L,0x19FE8951L};
    short l_388 = 3L;
    char l_466 = 1L;
    int l_481 = (-2L);
    unsigned short l_538 = 0UL;
    char l_543 = 0xE5L;
    unsigned char l_570[3];
    unsigned short l_640 = 1UL;
    int l_733 = 0x70DD5463L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_570[i] = 0xFDL;
    if (((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((g_98 = (g_72[3] != (p_82.f3 = (safe_rshift_func_int8_t_s_s(g_72[1], ((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(1UL, (2L >= g_15[0][3][0]))), (g_96[0] = g_15[1][2][0]))), g_72[2])) > (l_97 = (((~p_82.f0) || ((l_97 != l_97) > 1UL)) < g_73)))))))), 0x9F6DL)), l_99)) > l_99))
    {
        return g_74;
    }
    else
    {
        unsigned l_103 = 0xDD6C5526L;
        short l_107 = 0x6400L;
        int l_111[6][1] = {{(-1L)},{0xEE0D328FL},{(-1L)},{(-1L)},{0xEE0D328FL},{(-1L)}};
        int l_181[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
        unsigned char l_195 = 254UL;
        unsigned l_208 = 18446744073709551609UL;
        int i, j;
        l_103 = ((safe_unary_minus_func_int32_t_s((((l_97 = g_98) | (~g_96[1])) < (safe_add_func_int32_t_s_s(p_82.f1, l_99))))) && g_15[1][2][0]);
        l_107 = (safe_mod_func_int16_t_s_s(l_99, (safe_unary_minus_func_uint8_t_u(g_15[1][2][0]))));
        g_108 = p_82.f1;
        if (((safe_add_func_uint8_t_u_u((l_111[5][0] = 0x74L), l_97)) != (g_15[1][2][0] >= p_82.f1)))
        {
            short l_112[6][8] = {{0x01CAL,0x9B40L,0x01CAL,8L,0x3846L,0x5F24L,0L,0x8F73L},{8L,2L,8L,0x667AL,0x962DL,0x3846L,0x3846L,0x962DL},{8L,0xC811L,0xC811L,8L,0x3846L,0x667AL,(-6L),0x5F24L},{0x01CAL,0x7D4EL,0x667AL,0L,0xC811L,0x9B40L,0x5F24L,0x9B40L},{1L,0x7D4EL,(-6L),0x7D4EL,1L,0x667AL,8L,0L},{0x667AL,0xC811L,1L,0x8F73L,0x1B11L,0x3846L,0x7D4EL,0x7D4EL}};
            int l_130 = 1L;
            int l_203 = (-1L);
            int i, j;
            p_81 = l_112[0][5];
            if (l_107)
            {
                unsigned char l_115 = 255UL;
                for (g_98 = 1; (g_98 < 37); g_98 = safe_add_func_uint8_t_u_u(g_98, 2))
                {
                    int l_118 = 1L;
                    int l_124 = 0x7FBE72DCL;
                    if (l_115)
                    {
                        l_111[5][0] = g_15[1][2][2];
                    }
                    else
                    {
                        if (l_99)
                            break;
                        g_119[3] = ((!g_96[0]) == (safe_sub_func_int8_t_s_s((g_98 >= 0x3D93L), (l_118 >= g_98))));
                        l_118 = (p_81 = (l_118 ^ p_81));
                        l_97 = g_108;
                    }
                    if ((g_119[3] <= ((~g_96[9]) || p_81)))
                    {
                        unsigned char l_129 = 0xEDL;
                        p_82.f2 = (p_82.f1 || (safe_mod_func_uint32_t_u_u(((!(l_130 = (((p_82.f1 == p_81) <= ((((safe_lshift_func_uint16_t_u_s(l_97, 0)) || 5UL) && ((l_124 >= l_112[0][5]) == (((safe_lshift_func_uint16_t_u_s((((((p_81 | (safe_mod_func_uint32_t_u_u(((l_118 = l_99) >= p_82.f3), 0x3B6BB073L))) > 8L) && 6L) && l_129) ^ 0x3FL), l_124)) < l_99) & l_112[4][6]))) == p_81)) ^ 1UL))) ^ l_129), p_82.f1)));

                                                if (p_82.f1)
                            continue;
                    }
                    else
                    {
                        g_131[1] = p_82.f1;
                    }
                    g_132 = (0UL < p_81);
                }
                l_111[1][0] = (1L & 1L);
                for (l_99 = 0; (l_99 == (-23)); l_99 = safe_sub_func_int32_t_s_s(l_99, 6))
                {
                    if (p_82.f3)
                        break;
                }
                for (g_98 = 0; (g_98 <= 8); g_98 += 1)
                {
                    int i;
                    g_137 = (safe_lshift_func_uint8_t_u_s(g_119[g_98], 5));
                }
            }
            else
            {
                int l_178 = 1L;
                int l_196 = 0xF663D83FL;
                for (l_97 = 0; (l_97 <= (-6)); l_97--)
                {
                    char l_152 = (-1L);
                    int l_154 = 0xF4F87987L;
                    for (g_98 = 0; (g_98 != 10); g_98 = safe_add_func_int16_t_s_s(g_98, 3))
                    {
                        unsigned short l_151 = 0x288EL;
                        p_82.f2 = (safe_lshift_func_int16_t_s_s((g_131[1] & g_15[1][2][0]), 12));

                                                g_153[0][1] = (safe_lshift_func_uint8_t_u_u(((((-1L) > p_82.f4) >= (safe_rshift_func_uint16_t_u_s(l_111[5][0], g_131[1]))) == (((g_150 = p_82.f3) >= (l_130 = (l_151 != (((((((l_99 >= 0x08L) <= (-10L)) == 0x0268L) > p_82.f2) != 0x29419120L) == g_74) >= 8UL)))) == l_152)), p_82.f0));
                        l_154 = g_132;
                        l_164 = (safe_sub_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u(l_154, p_82.f1)) | (!g_153[1][3])) > (l_99 = (l_111[5][0] = (0x23EF36B2L != (l_112[1][0] || (p_82.f3 & p_82.f1)))))), (safe_sub_func_int8_t_s_s(g_161, ((safe_rshift_func_uint16_t_u_u(65528UL, 15)) < 0x25EDL)))));
                    }
                    if ((g_166 = (l_165[1][1] ^ l_165[1][1])))
                    {
                        return g_150;
                    }
                    else
                    {
                        short l_177 = 0xBD85L;
                        g_182[1][4] = ((((safe_sub_func_int32_t_s_s(l_111[2][0], ((g_161 = (safe_lshift_func_uint16_t_u_u((p_81 || g_137), (g_150 = (((safe_sub_func_int16_t_s_s(((!(safe_add_func_uint32_t_u_u((g_166 < (safe_sub_func_uint16_t_u_u(l_177, (p_82.f1 & (l_181[4] = (l_178 && (p_81 ^ (safe_add_func_int8_t_s_s(g_15[2][1][0], 249UL))))))))), 0x1BF0A7C6L))) <= g_119[4]), p_82.f3)) < p_81) ^ 1L))))) != 0xEDECL))) || g_153[1][4]) > g_96[5]) | 0x1905C5DAL);
                        g_183 = (((l_111[4][0] = p_82.f0) & (g_108 && g_98)) != p_82.f3);
                        p_82.f2 = l_165[7][0];

                                                p_82.f2 = l_154;
                    }

                                        if ((0xADL != l_152))
                    {
                        g_184 = p_82.f0;
                        return l_185;
                    }
                    else
                    {
                        l_99 = p_82.f0;
                        g_186[3] = p_82.f2;
                        g_194 = ((g_15[1][2][0] >= p_82.f4) ^ (safe_sub_func_uint16_t_u_u(g_96[4], (((g_96[6] != ((+p_82.f0) | (((((g_193 = (safe_sub_func_int32_t_s_s(l_178, (safe_sub_func_uint32_t_u_u(l_178, g_137))))) & g_153[0][4]) != g_73) ^ p_82.f1) == 0xE03BL))) > 0xED89F813L) < 1L))));
                    }
                    p_82.f2 = (((p_82.f0 | (l_130 = (g_98 = 254UL))) <= (l_196 = l_195)) ^ ((-10L) ^ g_15[3][2][1]));
                }
            }
            g_204 = ((g_153[0][1] = ((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(0UL, ((((safe_mod_func_uint16_t_u_u(65526UL, (g_137 = g_98))) && (0x3637L ^ l_203)) ^ l_112[0][5]) < (l_99 = l_130)))), l_185)) | (g_182[1][1] == p_82.f1))) <= p_82.f1);
            for (g_204 = 0; (g_204 > 3); g_204++)
            {
                l_111[5][0] = (p_82.f0 != p_82.f1);
                if (l_203)
                    break;
            }
        }
        else
        {
            g_207 = p_82.f0;
            g_209[4][4] = l_208;
        }
    }

        for (g_98 = 0; (g_98 <= 3); g_98 += 1)
    {
        int l_210 = 2L;
        int l_244[7];
        unsigned char l_394 = 249UL;
        char l_465[7] = {0x83L,0x83L,0xEAL,0x83L,0x83L,0xEAL,0x83L};
        int l_619 = 0xD862D2EBL;
        int l_662 = (-1L);
        char l_677 = (-6L);
        unsigned short l_683 = 0x0259L;
        int i;
        for (i = 0; i < 7; i++)
            l_244[i] = 1L;
        l_210 = (!g_186[(g_98 + 3)]);
        if (((((((safe_mod_func_uint32_t_u_u(0xEDD6FC38L, (safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(0x44L, g_72[g_98])), (safe_add_func_uint32_t_u_u(g_182[1][4], p_82.f0)))))) >= ((((((!((((l_210 = (l_165[0][1] < (p_81 = (g_219 = g_186[3])))) ^ ((safe_rshift_func_int16_t_s_u((g_72[g_98] | 0x61L), 10)) | 0x95L)) == 1UL) == g_207)) == 0x92EBDECAL) | g_119[5]) <= p_82.f3) != g_186[(g_98 + 3)]) ^ l_185)) == g_204) && p_81) != g_72[g_98]) != g_186[3]))
        {
            int l_224 = 0x54B6F45FL;
            l_97 = (g_227 = ((safe_add_func_uint8_t_u_u(g_186[(g_98 + 3)], l_224)) < (~(safe_sub_func_int16_t_s_s(g_73, l_185)))));
            for (l_97 = 2; (l_97 <= 7); l_97 += 1)
            {
                g_228 = g_183;
            }
            l_229 = (l_97 = g_182[1][1]);
        }
        else
        {
            g_230 = (g_73 < ((p_82.f3 = l_99) | p_81));
        }
        if ((safe_rshift_func_uint16_t_u_s(l_165[1][1], (g_98 != g_186[3]))))
        {
            unsigned short l_242 = 0x7A07L;
            unsigned l_251 = 18446744073709551615UL;
            int i;
            l_244[2] = (0UL ^ (safe_rshift_func_uint8_t_u_u(((p_82.f0 < (l_210 = g_184)) != (g_186[(g_98 + 2)] = (p_82.f1 ^ (safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((g_243 = (l_242 = ((safe_add_func_uint32_t_u_u(l_241, 4294967295UL)) && g_98))) != p_81), 13)) & p_81) && p_82.f3), 0x71L))))), 5)));
            l_210 = 0L;
            if (((safe_add_func_int16_t_s_s((-8L), (l_251 = (safe_add_func_int8_t_s_s((safe_sub_func_int8_t_s_s(p_82.f3, (g_230 = (0xD85002B8L & p_82.f3)))), g_186[(g_98 + 2)]))))) && (l_244[2] = 0x7060L)))
            {
                g_252 = g_227;
            }
            else
            {
                unsigned char l_253[8][2][5] = {{{5UL,0UL,255UL,5UL,255UL},{5UL,5UL,0UL,0xDDL,0x8DL}},{{0x89L,0x8DL,255UL,255UL,0x8DL},{0x8DL,0UL,0x89L,0x8DL,255UL}},{{0xDDL,0x8DL,0UL,0x8DL,0xDDL},{0x89L,5UL,0UL,255UL,5UL}},{{0xDDL,0UL,0UL,0xDDL,255UL},{0x8DL,0xDDL,0UL,5UL,5UL}},{{0x89L,0xDDL,0x89L,255UL,0xDDL},{5UL,0UL,255UL,5UL,255UL}},{{5UL,5UL,0UL,0xDDL,0x8DL},{0x89L,0x8DL,255UL,255UL,0x8DL}},{{0x8DL,0UL,0x89L,0x8DL,255UL},{0xDDL,0x8DL,0UL,0x8DL,0xDDL}},{{0x89L,5UL,0UL,255UL,5UL},{0xDDL,0UL,0UL,0xDDL,255UL}}};
                int l_273 = 0xF35BE7F5L;
                int i, j, k;
                g_275 = ((g_186[g_98] = l_253[2][0][1]) > (safe_lshift_func_int8_t_s_s((((l_274[0] = (l_273 = (safe_mod_func_int32_t_s_s(0x6AC7B5D3L, (g_272 = ((l_97 = (p_82.f3 = (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int16_t_s_s(l_253[2][0][1], (safe_rshift_func_int16_t_s_u(p_82.f0, 2)))) >= (safe_lshift_func_int8_t_s_u((l_267 = (3UL & (l_99 = l_253[2][0][1]))), 0))))), 7)))) && ((safe_unary_minus_func_int16_t_s(((safe_sub_func_uint8_t_u_u(((-1L) >= g_204), p_82.f3)) ^ l_271))) && l_253[2][0][1]))))))) && 1L) == g_209[0][4]), 7)));
            }
        }
        else
        {
            unsigned char l_278[7] = {0UL,0UL,0xE0L,0UL,0UL,0xE0L,0UL};
            int l_292 = (-1L);
            unsigned short l_305 = 65535UL;
            char l_540[5] = {0L,0L,0L,0L,0L};
            int i;
            for (l_267 = 0; (l_267 != 10); ++l_267)
            {
                int l_285 = (-7L);
                int l_293[4] = {2L,2L,2L,2L};
                int l_294 = 0x9D0DC52BL;
                int l_295 = 4L;
                int l_316 = 5L;
                unsigned l_338 = 18446744073709551614UL;
                int i;
                l_295 = (l_278[5] != ((p_82.f1 >= ((l_294 = (((l_278[5] >= (safe_lshift_func_int8_t_s_u((p_82.f0 || ((safe_rshift_func_uint8_t_u_u(g_96[1], 4)) > ((safe_add_func_uint8_t_u_u((0UL | (l_285 = g_98)), ((p_82.f0 & (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u((l_293[1] = (l_292 = ((((safe_mod_func_uint16_t_u_u(g_132, 0x4982L)) ^ p_82.f0) == 0xBFL) && l_185))), g_243)), g_228)) ^ 0x234DL) | 4294967295UL)) > p_82.f1))) != (-1L)))), 0))) >= l_278[5]) != g_186[(g_98 + 3)])) ^ g_161)) > 6L));
                if (l_267)
                    continue;
                if (l_278[0])
                {
                    unsigned char l_308 = 0x8AL;
                    l_285 = g_186[4];
                    for (g_161 = 1; (g_161 <= 4); g_161 += 1)
                    {
                        int i;
                        l_274[g_161] = p_81;
                        p_82.f2 = (safe_rshift_func_uint8_t_u_u((0x8F9A5DA1L == (safe_sub_func_uint16_t_u_u((((l_274[0] = (((safe_unary_minus_func_uint16_t_u((l_294 > (g_150 = g_184)))) >= ((((0x92L <= l_210) & g_72[g_98]) >= ((safe_lshift_func_int16_t_s_u(p_82.f3, (safe_lshift_func_int16_t_s_u(l_305, (safe_add_func_uint16_t_u_u(p_82.f1, l_308)))))) && p_82.f0)) && (-7L))) || p_82.f3)) <= p_82.f3) && 0x6AL), l_293[1]))), 3));

                                            }
                    return p_82.f0;
                }
                else
                {
                    unsigned l_311 = 0x2914CA68L;
                    g_315[5][1][5] = ((p_82.f3 ^ (safe_unary_minus_func_uint16_t_u(((0x72416165L > g_186[(g_98 + 3)]) <= (safe_unary_minus_func_uint32_t_u(((l_311 == (safe_unary_minus_func_int16_t_s(l_294))) < (0x5B85E74FL > p_82.f1)))))))) >= (((safe_add_func_uint32_t_u_u(((0xCBL & l_311) == 0x816BL), 1UL)) >= g_186[(g_98 + 3)]) > 1UL));
                }
                if ((0x318D4BECL != l_316))
                {
                    short l_320 = (-4L);
                    unsigned short l_339[3];
                    unsigned l_340 = 0UL;
                    unsigned short l_350 = 5UL;
                    unsigned short l_364 = 0x47D0L;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_339[i] = 0x8D8CL;
                    if (l_278[6])
                    {
                        l_244[2] = (p_81 = l_293[1]);
                    }
                    else
                    {
                        unsigned l_319 = 1UL;
                        p_82.f2 = (4294967292UL ^ ((safe_add_func_int16_t_s_s(l_319, l_320)) >= (safe_lshift_func_uint8_t_u_u(8UL, p_82.f1))));

                                                g_315[0][3][0] = (g_230 > l_320);
                        if (p_81)
                            continue;
                        if (l_293[2])
                            continue;
                    }
                    if (g_207)
                    {
                        unsigned char l_325 = 0x5CL;
                        p_81 = ((p_82.f3 != ((safe_add_func_uint8_t_u_u((g_209[4][4] <= (l_325 = g_131[0])), 0xFAL)) ^ (safe_mod_func_int32_t_s_s(g_153[0][1], (g_186[5] ^ (safe_add_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(1L, (g_108 = p_82.f1))), 1UL)) || p_81) >= p_82.f1), 0xD4L))))))) >= p_82.f3);
                        p_82.f2 = (g_228 == g_73);

                                                p_82.f2 = ((p_82.f1 == p_81) != ((((p_82.f2 <= (((l_294 = (g_230 = g_132)) | (safe_rshift_func_uint16_t_u_u(p_82.f0, 5))) < (1L ^ (~(safe_lshift_func_int16_t_s_s(((l_338 <= ((l_339[0] = 0UL) == (g_207 = ((p_82.f2 < p_82.f4) <= 0x37CFC890L)))) == 1L), 14)))))) && g_182[1][2]) ^ 0xCE42L) | l_340));
                        g_315[1][3][4] = ((l_99 = (safe_add_func_uint32_t_u_u((p_82.f0 || (p_82.f2 = g_137)), 0xCCC11644L))) == (safe_sub_func_int16_t_s_s((l_285 != (((g_153[0][1] = (l_325 & p_81)) <= g_72[g_98]) && ((g_272 = ((safe_sub_func_int16_t_s_s((~g_186[6]), l_295)) == g_137)) ^ l_293[2]))), g_207)));
                    }
                    else
                    {
                        char l_347[2];
                        int l_351 = 0x05C8CDA9L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_347[i] = (-1L);
                        if (p_82.f1)
                            break;
                        l_347[1] = 0x83DD8F19L;
                        p_82.f2 = (safe_add_func_uint32_t_u_u((l_292 = l_340), l_350));

                                                g_315[5][1][5] = (l_97 = l_351);
                    }

                                        g_315[5][1][5] = (p_82.f2 = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0x4785L, (l_292 <= l_316))), (safe_lshift_func_uint8_t_u_s(l_364, 0)))), 0x2CF0FD47L)), (safe_rshift_func_int8_t_s_u(p_82.f3, l_164)))), g_183)));
                }
                else
                {
                    unsigned short l_375[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_375[i] = 0x0565L;
                    l_375[0] = (l_267 == ((safe_rshift_func_int16_t_s_u((((((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(p_82.f1, g_98)), p_82.f3)) || p_82.f1) | (safe_rshift_func_uint8_t_u_s(((g_227 = (l_292 = 0x5C8E2DAAL)) != g_207), 3))) <= (g_272 > (p_82.f1 >= 6L))) & l_271), 8)) <= (-3L)));
                    return l_165[1][1];
                }

                            }
            for (l_305 = (-18); (l_305 < 15); l_305 = safe_add_func_int32_t_s_s(l_305, 1))
            {
                unsigned short l_389 = 0x28EBL;
                int l_416 = 0xB899C51DL;
                unsigned l_450 = 0xFCA33EDAL;
                l_292 = (g_315[5][1][5] = (p_81 > ((safe_rshift_func_uint8_t_u_s((~l_278[5]), (((~(safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((g_96[0] & g_275) == ((p_82.f3 = (safe_mod_func_uint8_t_u_u(((l_394 = ((((l_388 == (g_182[2][4] = l_389)) | ((safe_rshift_func_uint16_t_u_u(g_73, (safe_add_func_int8_t_s_s(g_184, (p_82.f0 ^ 8UL))))) < g_207)) || 6L) > 65535UL)) & 4294967288UL), p_82.f3))) | l_244[2])), 6)), 4))) <= l_244[2]) && 0x5567L))) < g_315[1][2][1])));
                for (g_150 = 26; (g_150 == 21); g_150 = safe_sub_func_uint8_t_u_u(g_150, 2))
                {
                    int l_415 = 5L;
                    unsigned char l_451 = 0x3EL;
                    for (l_389 = 0; (l_389 <= 4); l_389 += 1)
                    {
                        int i;
                        l_274[(g_98 + 1)] = ((((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(l_274[(g_98 + 1)], (((safe_rshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_82.f3, (((8UL < (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(p_82.f3, 0)), p_82.f1))) && (safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(g_166, p_82.f1)), (p_81 != (l_244[3] = (-2L))))), 0x8494L))) && l_278[5]))), l_415)) && 65532UL) | g_153[0][1]))), g_204)) && g_96[0]) & 0UL) & 0x39L);
                        l_416 = g_272;
                        p_81 = (safe_lshift_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((0x37A37F9BL | ((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_315[2][1][2], 0xECL)), ((safe_lshift_func_int16_t_s_u((((g_166 = g_74) == (l_415 > p_82.f1)) & (g_137 = (((safe_add_func_uint32_t_u_u((p_82.f0 > (l_292 = g_227)), g_153[0][4])) != 4UL) <= l_278[3]))), 4)) | 0x02AF99A6L))) < p_81)), l_394)), l_416)) & 0L) > l_274[(g_98 + 1)]), l_278[5]));
                    }
                    if ((g_315[5][1][5] = l_416))
                    {
                        unsigned l_445 = 0x3559EBF4L;
                        l_97 = (p_82.f2 = (safe_sub_func_int8_t_s_s(g_182[5][4], 1UL)));

                                                l_292 = ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(p_82.f0, (0xD54B9568L | (safe_mod_func_uint32_t_u_u((0UL && p_82.f1), ((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((g_219 = (l_445 = (safe_sub_func_int16_t_s_s(p_82.f0, p_82.f0)))), ((g_186[5] = (p_82.f2 == (safe_add_func_int16_t_s_s((g_207 ^ (l_244[1] == p_82.f3)), g_132)))) <= 0x66L))), g_119[3])) && g_96[1])))))) ^ 0x4BC99166L), 2)) < g_209[4][4]);
                    }
                    else
                    {
                        int l_452 = 0x539C9D7DL;
                        p_81 = (p_82.f1 && ((((safe_sub_func_uint16_t_u_u((!0x7D6DL), 0UL)) < (l_450 = (p_81 == 0x7222L))) ^ ((l_416 = 4294967295UL) >= (1UL > (l_451 >= (g_230 != p_81))))) <= l_452));
                        return l_165[1][1];
                    }

                                        return p_82.f0;
                }
            }
            p_81 = (safe_sub_func_int32_t_s_s((g_315[5][1][5] = g_182[1][4]), l_292));
            if (((safe_rshift_func_uint8_t_u_s(l_278[5], ((l_292 = g_72[g_98]) != g_153[0][1]))) > (safe_add_func_uint16_t_u_u((p_82.f0 < 0x5539DB3BL), ((safe_rshift_func_int8_t_s_s(0L, (p_82.f1 < (safe_sub_func_int32_t_s_s(((((l_274[1] = (((0x2BC01D2BL & ((l_465[4] = ((g_227 = (l_210 = l_278[2])) ^ g_96[0])) == (-9L))) & 0xC7F9CE68L) | p_82.f1)) == 0x9FL) ^ p_81) < g_119[3]), 0UL))))) > g_193)))))
            {
                unsigned l_467 = 0xA080B7CCL;
                int l_498 = 0L;
                int l_518 = (-1L);
                if (l_466)
                {
                    char l_474 = 0x6FL;
                    if ((p_82.f0 || (g_15[2][2][0] <= (l_467 & g_315[8][1][5]))))
                    {
                        g_315[5][2][5] = 1L;
                        g_315[0][1][0] = (l_274[4] = (safe_lshift_func_int8_t_s_u(l_305, l_465[4])));
                        p_81 = g_182[4][3];
                    }
                    else
                    {
                        p_82.f2 = (g_315[9][3][4] = ((safe_rshift_func_uint8_t_u_u(g_252, (l_274[1] = g_166))) < p_82.f0));

                                                p_82.f2 = g_15[2][0][1];
                        p_82.f2 = (safe_add_func_uint16_t_u_u((~g_186[3]), p_82.f3));
                        l_474 = (-8L);
                    }
                    if (p_82.f1)
                        continue;
                }
                else
                {
                    unsigned char l_514 = 252UL;
                    for (l_267 = 0; (l_267 < 47); ++l_267)
                    {
                        p_81 = (safe_rshift_func_int16_t_s_s((g_137 = (safe_add_func_int16_t_s_s(g_119[3], (l_292 = l_481)))), 5));
                    }
                    p_82.f2 = (p_81 = ((0x93L ^ l_467) & (l_498 = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_166, (safe_sub_func_int8_t_s_s(p_82.f1, (safe_lshift_func_int16_t_s_u(g_15[1][1][0], g_98)))))) == g_166), (g_193 = (g_272 = (safe_sub_func_uint16_t_u_u((p_82.f3 && ((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_81, 0x74A1L)), l_467)) > g_275)), g_96[0])))))) || p_82.f3), 6)))));

                                        for (g_137 = 28; (g_137 > 13); g_137--)
                    {
                        unsigned l_501 = 3UL;
                        p_82.f2 = ((p_82.f4 && (g_161 = l_498)) && l_501);
                        g_315[6][1][4] = (((l_244[2] = p_82.f2) & (g_204 = ((((l_210 = (l_292 = (g_74 < 0xD56AFC3FL))) && (0xC66CE658L != p_81)) >= (~(safe_lshift_func_uint8_t_u_s((p_82.f2 > g_243), (l_498 | p_82.f2))))) >= 1UL))) ^ 252UL);
                        g_315[0][0][3] = (l_274[0] = 1L);
                        g_315[3][3][4] = (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(1L, (((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_82.f2 > (safe_rshift_func_uint8_t_u_u(7UL, 3))), (p_82.f0 ^ p_82.f0))), (g_193 = (l_244[1] = l_514)))) <= p_82.f3) != (p_82.f4 | ((g_228 == p_82.f4) == 0x55L))))), 246UL));
                    }
                }
                for (l_466 = (-15); (l_466 >= 8); l_466 = safe_add_func_int32_t_s_s(l_466, 1))
                {
                    short l_517 = 5L;
                    int l_519[5][9] = {{0x084BAEF5L,0x084BAEF5L,0x64C4C857L,(-10L),0xD3FC8CA3L,(-5L),0xA9CB900DL,(-1L),0xA9CB900DL},{0x084BAEF5L,0x49EA2DB0L,(-5L),(-5L),0x49EA2DB0L,0x084BAEF5L,(-10L),0L,0xB39FB2B0L},{(-1L),7L,0x64C4C857L,0xB39FB2B0L,0x49EA2DB0L,0x49EA2DB0L,0xB39FB2B0L,0x64C4C857L,7L},{0x49EA2DB0L,0xD8DC3B80L,0x084BAEF5L,(-6L),0xD3FC8CA3L,7L,(-10L),(-10L),7L},{(-6L),0x64C4C857L,0L,0x64C4C857L,(-6L),0xD8DC3B80L,0xA9CB900DL,0x084BAEF5L,0xB39FB2B0L}};
                    int i, j;
                    if (l_467)
                    {
                        p_81 = g_96[0];
                        return g_108;
                    }
                    else
                    {
                        p_81 = g_207;
                        l_519[1][0] = ((g_73 ^ l_244[4]) && (l_517 > (g_275 | l_518)));
                        l_274[0] = (g_166 || g_132);
                    }
                    if (g_207)
                        continue;
                }
                if ((g_150 && g_153[0][1]))
                {
                    unsigned l_535 = 0x277919F7L;
                    for (g_194 = 0; (g_194 <= 3); g_194 += 1)
                    {
                        int l_524 = (-1L);
                        int i;
                        p_82.f2 = (safe_add_func_uint8_t_u_u(((g_72[g_98] || (-1L)) & (l_524 = (safe_rshift_func_uint8_t_u_u(p_82.f3, l_210)))), (g_243 != g_186[3])));

                                            }
                    p_82.f2 = ((safe_lshift_func_uint8_t_u_s((l_244[6] = l_518), 7)) != 0xE1L);

                                        if ((safe_unary_minus_func_uint32_t_u(((((!l_278[5]) ^ ((g_98 || (g_219 <= g_315[5][1][5])) < ((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((g_532 = 0L) != (p_82.f0 & (safe_mod_func_uint8_t_u_u(((l_535 = p_82.f4) > (safe_mod_func_int16_t_s_s(l_244[5], g_119[3]))), l_241)))), 6)), g_252)) || g_182[1][4]) > l_538) <= g_219))) | (-5L)) || p_82.f1))))
                    {
                        return g_243;
                    }
                    else
                    {
                        return g_194;
                    }
                }
                else
                {
                    unsigned short l_539 = 0xC80AL;
                    l_540[3] = (p_81 = l_539);
                    if (g_194)
                    {
                        p_81 = (l_498 ^ (safe_mod_func_uint8_t_u_u((l_543 ^ (safe_rshift_func_uint16_t_u_s(65534UL, 13))), l_465[3])));
                        return l_388;
                    }
                    else
                    {
                        g_315[5][1][5] = g_108;
                    }
                    g_315[5][1][5] = p_81;
                }
            }
            else
            {
                short l_554 = 0L;
                g_315[5][1][5] = (l_210 = l_388);
                if (g_137)
                {
                    g_315[6][3][4] = (p_82.f3 == 7L);
                    p_82.f2 = ((2L ^ p_82.f1) == (p_82.f0 != (0xBC8FL || ((safe_lshift_func_int8_t_s_s((l_97 = (+g_72[g_98])), (safe_add_func_uint8_t_u_u(p_82.f1, l_274[1])))) == g_72[3]))));

                                    }
                else
                {
                    int l_571[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_571[i] = 0x16F0A1C2L;
                    for (l_97 = (-22); (l_97 == 5); ++l_97)
                    {
                        unsigned l_569 = 0x106A2A40L;
                        l_571[0] = (0L >= ((g_15[0][2][1] ^ l_554) < ((l_570[2] = (safe_add_func_int8_t_s_s(0x11L, (!((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_82.f0, 0)), (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((65535UL || ((safe_add_func_int16_t_s_s((p_81 <= ((g_108 = g_252) != (((safe_add_func_int8_t_s_s(0L, p_82.f3)) || p_82.f3) && 0x1DB51FF0L))), g_98)) & l_569)), p_82.f3)), p_81)))) | g_227))))) <= p_81)));
                    }
                }
                if (g_132)
                {
                    short l_572 = 0x72C5L;
                    l_572 = (l_210 = (0xAE21L != p_82.f0));
                    p_81 = (p_82.f3 != l_165[1][1]);
                    g_315[5][1][5] = (g_209[4][4] <= (-1L));
                }
                else
                {
                    unsigned short l_573[4][4] = {{65535UL,6UL,65535UL,65535UL},{0x6DEAL,0x6DEAL,0x8702L,6UL},{6UL,65535UL,0x8702L,65535UL},{0x6DEAL,0x1D33L,65535UL,0x8702L}};
                    int l_574 = 0x50DE46F4L;
                    int i, j;
                    l_573[0][0] = l_466;
                    l_574 = g_209[4][4];
                    l_574 = (-4L);
                }
            }
        }
        for (g_204 = 0; (g_204 <= 2); g_204 += 1)
        {
            unsigned l_582 = 0x9AAFEFFEL;
            char l_583 = 0xEAL;
            short l_584[9][3][8] = {{{(-9L),0xD21FL,0xB56CL,1L,(-10L),0xC5F0L,2L,(-1L)},{(-3L),0xB56CL,0xC5F0L,0x467DL,(-9L),4L,0xD8BFL,0x467DL},{(-9L),4L,0xD8BFL,0x467DL,(-9L),0xB56CL,0xB3E8L,(-1L)}},{{1L,0xC5F0L,0xD21FL,1L,1L,0xD21FL,0xC5F0L,1L},{1L,0xD21FL,0xC5F0L,1L,(-1L),0L,(-2L),0x1A81L},{1L,0xB3E8L,(-1L),(-3L),1L,0L,0xD8BFL,(-1L)}},{{0x84BDL,0xD21FL,0xB3E8L,0xD8FAL,0x476DL,(-2L),0L,(-3L)},{(-1L),(-2L),0xB3E8L,1L,(-9L),(-6L),0xD8BFL,0x84BDL},{0x476DL,0xD8BFL,(-1L),(-1L),0xDE3AL,0xD8BFL,(-2L),0x84BDL}},{{(-9L),(-6L),0xC5F0L,1L,(-3L),(-2L),(-2L),(-3L)},{0xD8FAL,(-2L),(-2L),0xD8FAL,(-3L),0xD21FL,4L,(-1L)},{(-9L),0L,2L,(-3L),0xDE3AL,0xB3E8L,2L,0x1A81L}},{{0x476DL,0L,(-2L),1L,(-9L),0xD21FL,0xB56CL,1L},{(-1L),(-2L),(-6L),0x467DL,0x476DL,(-2L),0xB56CL,0xDE3AL},{0x84BDL,(-6L),(-2L),(-10L),1L,0xD8BFL,2L,(-10L)}},{{1L,0xD8BFL,2L,(-10L),(-1L),(-6L),4L,0xDE3AL},{0x467DL,(-1L),0L,(-10L),(-10L),0L,(-1L),0x467DL},{0x467DL,(-2L),(-2L),1L,0xDE3AL,0L,0L,0xD8FAL}},{{1L,4L,0xB3E8L,0x84BDL,1L,0L,2L,0xDE3AL},{(-9L),(-2L),4L,(-9L),0x1A81L,0L,0xC5F0L,0x84BDL},{0xDE3AL,(-1L),4L,0x467DL,(-1L),0xD21FL,2L,(-9L)}},{{0x1A81L,2L,0xB3E8L,0xDE3AL,(-3L),2L,0L,(-9L)},{1L,0xD21FL,(-2L),0x467DL,0x84BDL,(-1L),(-1L),0x84BDL},{(-9L),0L,0L,(-9L),0x84BDL,(-2L),0xD8BFL,0xDE3AL}},{{1L,0L,0xB56CL,0x84BDL,(-3L),4L,0xB56CL,0xD8FAL},{0x1A81L,0L,(-1L),1L,(-1L),(-2L),(-6L),0x467DL},{0xDE3AL,0L,0xD21FL,(-10L),0x1A81L,(-1L),(-6L),(-3L)}}};
            int l_595[7][9][2] = {{{1L,0x21F53E24L},{0L,0xCCE9099DL},{0x1A136FD8L,0x6D491EDCL},{1L,0x21F53E24L},{(-1L),1L},{0L,0x1A136FD8L},{0x63D64212L,0x1A136FD8L},{0L,1L},{(-1L),0x21F53E24L}},{{(-1L),(-1L)},{0xE1C65C00L,1L},{0x21F53E24L,0x442B5E56L},{(-1L),0x6D491EDCL},{0x442B5E56L,1L},{0x76851E36L,0x76851E36L},{0x63D64212L,0L},{0x1A136FD8L,1L},{(-1L),0xE1C65C00L}},{{(-1L),(-1L)},{0x6D491EDCL,1L},{0x6D491EDCL,(-1L)},{(-1L),0xE1C65C00L},{(-1L),1L},{0x1A136FD8L,0L},{0x63D64212L,0x76851E36L},{0x76851E36L,1L},{0x442B5E56L,0x6D491EDCL}},{{(-1L),0x442B5E56L},{0x21F53E24L,1L},{0xE1C65C00L,(-1L)},{(-1L),0x21F53E24L},{(-1L),1L},{0L,0x1A136FD8L},{0x63D64212L,0x1A136FD8L},{0L,1L},{(-1L),0x21F53E24L}},{{(-1L),(-1L)},{0xE1C65C00L,1L},{0x21F53E24L,0x442B5E56L},{(-1L),0x6D491EDCL},{0x442B5E56L,1L},{0x76851E36L,0x76851E36L},{0x63D64212L,0L},{0x1A136FD8L,1L},{(-1L),0xE1C65C00L}},{{(-1L),(-1L)},{0x6D491EDCL,1L},{0x6D491EDCL,(-1L)},{(-1L),0xE1C65C00L},{(-1L),1L},{0x1A136FD8L,0L},{(-10L),1L},{1L,0L},{5L,(-1L)}},{{0x305E49ACL,5L},{(-1L),0L},{0x63D64212L,0xCCE9099DL},{0x305E49ACL,(-1L)},{0xCCE9099DL,0L},{1L,0xA7E43366L},{(-10L),0xA7E43366L},{1L,0L},{0xCCE9099DL,(-1L)}}};
            unsigned l_680 = 4294967293UL;
            unsigned l_702 = 4294967295UL;
            int i, j, k;
            for (l_538 = 0; (l_538 <= 2); l_538 += 1)
            {
                int l_581 = 0L;
                int i, j;
                if ((safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(1UL, g_153[g_204][(g_98 + 1)])), g_153[l_538][(g_98 + 1)])))
                {
                    short l_592[5] = {0L,0L,0L,0L,0L};
                    int i;
                    for (p_82.f3 = 0; (p_82.f3 <= 7); p_82.f3 += 1)
                    {
                        int l_589 = 0xC8217C66L;
                        int i;
                        l_582 = (safe_add_func_int8_t_s_s((l_581 = (g_186[(g_98 + 2)] = l_465[l_538])), p_81));
                        if (g_108)
                            continue;
                        g_315[5][1][5] = g_243;
                        g_315[5][1][5] = (((g_108 = (((0x22L | ((l_583 = l_582) ^ l_210)) & (0x5EL > p_81)) ^ ((l_584[7][0][2] > (safe_sub_func_uint16_t_u_u(((g_131[1] = (((~((safe_mod_func_int16_t_s_s((l_274[0] = (l_589 = p_82.f0)), g_182[2][1])) && ((safe_add_func_int8_t_s_s(g_96[1], 0xCEL)) < (-9L)))) < l_592[1]) < p_82.f0)) >= p_82.f0), p_82.f1))) ^ p_81))) < p_82.f1) < (-1L));
                    }
                }
                else
                {
                    int l_599 = (-1L);
                    l_599 = (g_598[2] = ((safe_add_func_int8_t_s_s((l_244[2] = (g_74 == (l_595[4][2][1] = 0L))), (0UL <= g_161))) || (((~p_82.f3) < 0UL) < ((safe_mod_func_uint32_t_u_u(l_388, (g_315[5][1][5] = (-6L)))) >= (g_209[4][5] & g_193)))));
                    for (g_272 = 0; (g_272 <= 2); g_272 += 1)
                    {
                        int i;
                        if (l_570[g_272])
                            break;
                    }
                }
            }
            if (g_108)
            {
                unsigned l_602 = 0xBEDFC33FL;
                int l_663 = 0x9449A948L;
                for (g_275 = 0; (g_275 <= 1); g_275 += 1)
                {
                    short l_620[1][6][10] = {{{0x9F79L,0L,0L,0L,0x26DCL,0x26DCL,0L,0L,0L,0x9F79L},{0x1961L,0L,0L,7L,(-9L),(-1L),0x26DCL,(-1L),(-9L),7L},{7L,0L,7L,0L,(-9L),0L,0x9F79L,0xAF69L,0xAF69L,0x9F79L},{(-9L),0x26DCL,0L,0L,0x26DCL,(-9L),0x1961L,0xAF69L,0L,(-1L)},{0L,(-1L),7L,0L,0xAF69L,0L,7L,(-1L),0L,(-9L)},{0L,0L,0L,0x1961L,0L,(-9L),(-9L),0L,0x1961L,0L}}};
                    int l_647 = 0x9068B537L;
                    int l_648 = (-1L);
                    int i, j, k;
                    for (l_466 = 0; (l_466 <= 1); l_466 += 1)
                    {
                        int i, j;
                        p_81 = (!((l_210 = (safe_add_func_int8_t_s_s(((l_165[(l_466 + 2)][g_275] <= (p_82.f1 != p_81)) == 0xE6L), l_274[0]))) && g_209[4][4]));
                        p_81 = g_315[5][1][5];
                        g_315[6][3][3] = (((((p_82.f1 = (l_165[(l_466 + 2)][g_275] && 4294967292UL)) | p_81) == l_602) | (g_166 != 7UL)) != (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((g_186[(g_98 + 3)] < ((safe_mod_func_int32_t_s_s((0xA3L && (g_15[0][0][2] || g_186[3])), g_119[0])) | g_74)), 7)), 0UL)));
                    }
                    g_315[3][1][4] = l_584[8][0][1];
                    for (l_582 = 28; (l_582 >= 52); l_582++)
                    {
                        g_315[5][1][5] = p_82.f1;
                        g_315[5][1][5] = p_82.f1;
                        g_315[2][2][4] = (safe_rshift_func_int8_t_s_u((((g_230 = ((~(safe_rshift_func_int8_t_s_u((0xDCF840EBL && l_602), ((safe_sub_func_uint32_t_u_u((((g_161 = (l_244[2] = l_619)) >= l_583) || l_620[0][2][2]), (p_81 != l_602))) <= (0xC4L >= 0x0FL))))) < g_153[0][1])) | 255UL) | g_137), g_166));
                    }
                    if (((safe_sub_func_uint32_t_u_u(((g_131[0] | 0xDDL) < ((safe_lshift_func_uint8_t_u_u(((g_108 = (safe_sub_func_uint16_t_u_u(((-4L) == p_81), ((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((((safe_lshift_func_int8_t_s_u(((p_82.f1 = g_108) != (safe_sub_func_int8_t_s_s(p_81, (safe_lshift_func_int16_t_s_u(p_81, 7))))), 7)) >= (0UL | (safe_lshift_func_int8_t_s_s(l_640, l_394)))) != g_15[1][2][0]) && g_119[8]))), 2)) < p_81)))) & 0L), 2)) > 0xFCF21518L)), p_81)) != 4L))
                    {
                        g_649 = ((l_648 = (safe_rshift_func_uint16_t_u_s(g_598[0], (safe_lshift_func_int16_t_s_s(g_153[1][1], (safe_add_func_int8_t_s_s((l_647 = 0xE4L), ((g_315[5][1][5] = 0xC48E9E37L) == 4294967293UL)))))))) == g_184);
                    }
                    else
                    {
                        l_244[2] = p_82.f1;
                        l_595[4][2][1] = (((safe_sub_func_int16_t_s_s(0xD965L, (4294967287UL | (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(g_153[1][4], 7)), (safe_mod_func_int32_t_s_s(g_73, (safe_lshift_func_int16_t_s_u(g_660, (p_82.f3 = (safe_unary_minus_func_uint16_t_u(((-9L) && (g_207 = (l_663 = l_662))))))))))))))) >= (g_598[2] & p_81)) & g_15[2][0][1]);

                                                if (g_96[1])
                            break;
                    }
                }

                                g_664 = (g_315[2][3][5] = p_82.f1);
                return l_210;
            }
            else
            {
                char l_673 = (-8L);
                int l_690 = 0xF7D1732FL;
                p_82.f2 = ((8L <= ((safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_82.f3, 9)) && (p_82.f3 <= g_153[0][3])), (l_274[4] = (safe_rshift_func_uint8_t_u_s(((l_595[4][2][1] = (0x7A7D7A1CL || ((l_673 = p_82.f3) ^ ((safe_unary_minus_func_int8_t_s(g_73)) > l_465[2])))) <= ((safe_lshift_func_int16_t_s_s(g_664, p_81)) > p_81)), 5))))) == 8UL)) | 0x6BL);

                                p_81 = 0L;
                if (g_186[0])
                {
                    l_677 = l_274[0];
                    if ((g_252 | l_673))
                    {
                        if (g_119[3])
                            break;
                        g_315[5][1][5] = ((p_81 = p_82.f1) & (l_274[0] = g_660));
                        l_680 = (safe_sub_func_int16_t_s_s(p_81, 0xBFC5L));
                        if (g_272)
                            continue;
                    }
                    else
                    {
                        return l_584[7][0][2];
                    }
                }
                else
                {
                    unsigned short l_691 = 0UL;
                    l_683 = ((+g_598[2]) != 0L);
                    p_81 = 0x9A903766L;
                    if ((((safe_lshift_func_int16_t_s_u(0x9C6DL, (safe_lshift_func_int8_t_s_u(p_82.f2, 3)))) && (g_649 = g_660)) && (safe_sub_func_uint32_t_u_u(l_690, (g_315[5][3][3] < l_691)))))
                    {
                        int l_698 = 0xA68172D9L;
                        unsigned char l_701 = 254UL;
                        p_81 = (g_207 & (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(0xE7D8L, (p_82.f3 | (g_186[2] = (safe_add_func_int32_t_s_s((l_698 == g_193), l_584[7][0][2])))))), (l_702 = (safe_rshift_func_uint16_t_u_s(l_701, 1))))));
                        return g_131[1];
                    }
                    else
                    {
                        p_82.f2 = g_207;
                    }
                }
            }

                        for (p_82.f3 = 0; (p_82.f3 > 46); p_82.f3++)
            {
                short l_705 = 0L;
                int l_712 = (-8L);
                int l_723 = (-1L);
                unsigned char l_724[10] = {254UL,0x50L,254UL,1UL,1UL,254UL,0x50L,0x50L,252UL,252UL};
                int i;
                l_595[6][8][0] = (p_81 = 1L);
                l_705 = (p_82.f0 || l_595[4][2][1]);
                for (g_108 = 0; (g_108 > 5); g_108 = safe_add_func_int8_t_s_s(g_108, 6))
                {
                    unsigned l_711 = 0xC8EFE7ABL;
                    if (((((g_315[5][1][5] & ((g_194 >= 0L) & g_598[2])) <= (safe_add_func_uint8_t_u_u((l_99 = l_705), ((l_712 = (safe_unary_minus_func_int32_t_s((p_81 & (l_705 || l_711))))) == ((0xC12CL || g_150) != 0xB4L))))) ^ p_82.f0) | 0xECE2L))
                    {
                        int l_713[9][7][4] = {{{0x1A4E3FCDL,0x4A239179L,2L,(-1L)},{0x1A4E3FCDL,0x5654CC05L,0x5481DA50L,0x4F30B1A2L},{0xC140E25BL,(-1L),0xBC03E5A6L,0xE0E7C53FL},{0x5654CC05L,(-1L),0xAAA79958L,0x7398702FL},{0xD15EB554L,0xC140E25BL,0x485F9D2DL,(-1L)},{2L,6L,0x4F30B1A2L,0x485F9D2DL},{0xE9230E47L,0x5481DA50L,0x5481DA50L,0xE9230E47L}},{{0x6F3C263AL,0xA3B5174BL,1L,(-1L)},{0x5481DA50L,(-1L),0x0072661BL,0xBC03E5A6L},{0xC140E25BL,0xD15EB554L,0xE0E7C53FL,0xBC03E5A6L},{2L,(-1L),0L,(-1L)},{0x56B023EFL,0xA3B5174BL,0x485F9D2DL,0xE9230E47L},{(-1L),0x5481DA50L,0xBC03E5A6L,0x485F9D2DL},{0xA3B5174BL,6L,0x0072661BL,(-1L)}},{{0x6F3C263AL,0xC140E25BL,0x5654CC05L,0x7398702FL},{0x1A4E3FCDL,(-1L),0x1A4E3FCDL,0xE0E7C53FL},{0xE9230E47L,(-1L),0xE0E7C53FL,0x4F30B1A2L},{(-1L),0x5654CC05L,0xAAA79958L,(-1L)},{(-1L),0x4A239179L,0xAAA79958L,(-1L)},{(-1L),0x6F3C263AL,0xE0E7C53FL,0xAAA79958L},{0xE9230E47L,6L,0x1A4E3FCDL,0xA3B5174BL}},{{0x1A4E3FCDL,0xA3B5174BL,0x5654CC05L,0x56B023EFL},{0x6F3C263AL,0x5654CC05L,0x0072661BL,0xE0E7C53FL},{0xD15EB554L,0xAAA79958L,2L,2L},{0x4A239179L,0x4A239179L,0xE3B7E490L,0L},{0x485F9D2DL,0x7398702FL,0x7FBF8738L,0xD15EB554L},{0xA3B5174BL,0xE018D81FL,(-1L),0x7FBF8738L},{0xC95304ADL,0xE018D81FL,0x4F30B1A2L,0xD15EB554L}},{{0xE018D81FL,0x7398702FL,0xE9230E47L,0L},{(-9L),0x4A239179L,0xE018D81FL,2L},{(-1L),0xAAA79958L,0x5654CC05L,(-1L)},{0xA3B5174BL,0xC140E25BL,0xE3B7E490L,0x485F9D2DL},{0x6C3B9D6DL,0xD15EB554L,0x419A4DC4L,0xD15EB554L},{0xC140E25BL,0xBC03E5A6L,2L,0x419A4DC4L},{0xC95304ADL,(-9L),0xE018D81FL,0x56B023EFL}},{{0xE0E7C53FL,0x7398702FL,0xA3B5174BL,(-8L)},{0xE0E7C53FL,0xC140E25BL,0xE018D81FL,0x5654CC05L},{0xC95304ADL,(-8L),2L,(-1L)},{0xC140E25BL,(-1L),0x419A4DC4L,0L},{0x6C3B9D6DL,0xC95304ADL,0xE3B7E490L,0x56B023EFL},{0xA3B5174BL,0xBC03E5A6L,0x5654CC05L,0xE3B7E490L},{(-1L),0xE018D81FL,0xE018D81FL,(-1L)}},{{(-9L),0xD15EB554L,0xE9230E47L,(-8L)},{0xE018D81FL,(-1L),0x4F30B1A2L,2L},{0xC95304ADL,0x6C3B9D6DL,(-1L),2L},{0xA3B5174BL,(-1L),0x7FBF8738L,(-8L)},{0x485F9D2DL,0xD15EB554L,0xE3B7E490L,(-1L)},{0x7FBF8738L,0x56B023EFL,0x6C3B9D6DL,2L},{0x1A4E3FCDL,0xD15EB554L,0xC95304ADL,6L}},{{(-1L),0x5481DA50L,0x419A4DC4L,(-9L)},{0x7398702FL,0xE3B7E490L,0x7398702FL,0L},{0x0072661BL,0x4F30B1A2L,0L,0xAAA79958L},{0x7FBF8738L,0x419A4DC4L,(-1L),0x4F30B1A2L},{0x4F30B1A2L,0x6F3C263AL,(-1L),6L},{0x7FBF8738L,(-1L),0L,(-1L)},{0x0072661BL,0xD15EB554L,0x7398702FL,0x1A4E3FCDL}},{{0x7398702FL,0x1A4E3FCDL,0x419A4DC4L,0xBC03E5A6L},{(-1L),0x419A4DC4L,0xC95304ADL,0L},{0x1A4E3FCDL,0xE018D81FL,0x6C3B9D6DL,0x6C3B9D6DL},{0x7FBF8738L,0x7FBF8738L,2L,(-9L)},{0xBC03E5A6L,0x6F3C263AL,1L,0x1A4E3FCDL},{7L,0x56B023EFL,0L,1L},{0x5481DA50L,0x56B023EFL,0xC95304ADL,0x1A4E3FCDL}}};
                        int i, j, k;
                        if (l_595[0][7][1])
                            break;
                        p_81 = (p_82.f1 > g_204);
                        if (l_713[8][6][3])
                            continue;
                        g_315[4][2][3] = 0x18844209L;
                    }
                    else
                    {
                        g_315[5][1][4] = l_711;
                        g_664 = (safe_rshift_func_int16_t_s_u(p_82.f0, 10));
                    }
                    g_315[6][2][3] = p_82.f3;
                    g_664 = (p_81 = (safe_mod_func_uint16_t_u_u(l_712, (safe_sub_func_uint32_t_u_u(g_96[1], (l_711 > ((+((g_315[5][1][5] = (((safe_unary_minus_func_int32_t_s((safe_unary_minus_func_int8_t_s((safe_unary_minus_func_uint16_t_u((l_595[4][2][1] = (l_723 = g_72[2])))))))) != p_81) <= l_724[0])) != (safe_mod_func_int8_t_s_s(g_119[7], (~(safe_sub_func_int16_t_s_s(g_243, l_271))))))) & (-6L))))))));
                }
                for (l_705 = 0; (l_705 >= (-5)); l_705 = safe_sub_func_int16_t_s_s(l_705, 3))
                {
                    unsigned l_734 = 18446744073709551615UL;
                    for (g_243 = 15; (g_243 != (-25)); g_243 = safe_sub_func_uint16_t_u_u(g_243, 6))
                    {
                        g_664 = l_481;
                        if (l_733)
                            continue;
                        return g_96[7];
                    }
                    g_315[7][1][3] = (g_166 & (p_82.f1 >= l_734));
                }
            }

                        p_82.f2 = 0x4FADA6E9L;

                    }
    }
    g_315[3][3][4] = (g_204 > (safe_add_func_int32_t_s_s((g_182[1][4] > 0x7CL), ((safe_mod_func_uint8_t_u_u(1UL, (g_230 = (safe_sub_func_int32_t_s_s((p_82.f2 = g_243), 0x129970CCL))))) < ((l_274[0] = (safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_137, 4L)), g_108))) ^ (-1L))))));

        return g_315[4][1][4];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_15[i][j][k], "g_15[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_18.f0, "g_18.f0", print_hash_value);
    transparent_crc(g_18.f1, "g_18.f1", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_153[i][j], "g_153[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_182[i][j], "g_182[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_186[i], "g_186[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_209[i][j], "g_209[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_315[i][j][k], "g_315[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_532, "g_532", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_598[i], "g_598[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_660, "g_660", print_hash_value);
    transparent_crc(g_664, "g_664", print_hash_value);
    transparent_crc(g_747.f0, "g_747.f0", print_hash_value);
    transparent_crc(g_747.f1, "g_747.f1", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_881, "g_881", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_934.f0, "g_934.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1090[i], "g_1090[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1531.f0, "g_1531.f0", print_hash_value);
    transparent_crc(g_1531.f2, "g_1531.f2", print_hash_value);
    transparent_crc(g_1531.f4, "g_1531.f4", print_hash_value);
    transparent_crc(g_1670.f0, "g_1670.f0", print_hash_value);
    transparent_crc(g_1671.f0, "g_1671.f0", print_hash_value);
    transparent_crc(g_1671.f1, "g_1671.f1", print_hash_value);
    transparent_crc(g_1795, "g_1795", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
