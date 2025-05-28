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
   short f1;
   short f2;
   short f3;
   int f4;
   unsigned short f5;
};

union U1 {
   unsigned char f0;
   int f1;
   char f2;
   unsigned f3;
   char f4;
};


static unsigned short g_9 = 0x7BE9L;
static union U1 g_52 = {0x23L};
static unsigned g_85 = 0UL;
static short g_93 = 0xFA8EL;
static char g_115[7][10] = {{(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}, {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}, {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}, {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}, {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}, {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}, {(-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L), (-10L)}};
static struct S0 g_119 = {0xF437L,-9L,3L,0x5001L,0L,0x9353L};
static short g_122 = 1L;
static char g_124 = (-6L);
static unsigned char g_130 = 250UL;
static unsigned short g_131 = 0x92DEL;
static char g_151 = 0x56L;
static char g_156 = 0x4AL;
static char g_157 = 0x68L;
static unsigned g_158[5][3] = {{6UL, 0x80640D2DL, 6UL}, {6UL, 0x80640D2DL, 6UL}, {6UL, 0x80640D2DL, 6UL}, {6UL, 0x80640D2DL, 6UL}, {6UL, 0x80640D2DL, 6UL}};
static short g_161 = 0x8806L;
static short g_162[9] = {(-6L), 0x4ECEL, (-6L), 0x4ECEL, (-6L), 0x4ECEL, (-6L), 0x4ECEL, (-6L)};
static unsigned short g_164 = 1UL;
static unsigned g_169[5][3][1] = {{{0xB34E193FL}, {0xB34E193FL}, {0xB34E193FL}}, {{0xB34E193FL}, {0xB34E193FL}, {0xB34E193FL}}, {{0xB34E193FL}, {0xB34E193FL}, {0xB34E193FL}}, {{0xB34E193FL}, {0xB34E193FL}, {0xB34E193FL}}, {{0xB34E193FL}, {0xB34E193FL}, {0xB34E193FL}}};
static unsigned char g_186 = 4UL;
static int g_214 = (-4L);
static unsigned g_248 = 0x14950EE9L;
static union U1 g_299 = {4UL};
static int g_325 = 0xE4F0868AL;
static char g_328 = 0x53L;
static int g_329 = 0xCFECB3F4L;
static int g_334[6][2][3] = {{{0xCAB4327BL, 0xCAB4327BL, 0L}, {0xCAB4327BL, 0xCAB4327BL, 0L}}, {{0xCAB4327BL, 0xCAB4327BL, 0L}, {0xCAB4327BL, 0xCAB4327BL, 0L}}, {{0xCAB4327BL, 0xCAB4327BL, 0L}, {0xCAB4327BL, 0xCAB4327BL, 0L}}, {{0xCAB4327BL, 0xCAB4327BL, 0L}, {0xCAB4327BL, 0xCAB4327BL, 0L}}, {{0xCAB4327BL, 0xCAB4327BL, 0L}, {0xCAB4327BL, 0xCAB4327BL, 0L}}, {{0xCAB4327BL, 0xCAB4327BL, 0L}, {0xCAB4327BL, 0xCAB4327BL, 0L}}};
static unsigned short g_335[8][7] = {{0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}, {0x0539L, 2UL, 65533UL, 65533UL, 2UL, 0x0539L, 9UL}};
static short g_361 = 0L;
static unsigned char g_363[8] = {1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL};
static unsigned char g_374 = 0x5AL;
static unsigned short g_403 = 1UL;
static char g_406 = (-1L);
static short g_407 = (-1L);
static unsigned g_408 = 9UL;
static unsigned char g_419 = 1UL;
static struct S0 g_451 = {9UL,-8L,1L,0x97B1L,0x0D8B4E5DL,0UL};
static unsigned g_453 = 6UL;
static union U1 g_456 = {0x86L};
static unsigned g_464 = 4294967292UL;
static char g_470 = 0x8AL;
static unsigned short g_473 = 65535UL;
static char g_575 = 0L;
static unsigned short g_576[6][8][5] = {{{0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}}, {{0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}}, {{0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}}, {{0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}}, {{0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}}, {{0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}, {0x7046L, 0x54F1L, 0UL, 0x9887L, 0x34DFL}}};



static unsigned func_1(void);
static unsigned char func_12(unsigned p_13, unsigned short p_14, unsigned char p_15, unsigned p_16);
static unsigned func_17(int p_18);
static short func_19(union U1 p_20, unsigned p_21, struct S0 p_22);
static union U1 func_23(char p_24, unsigned char p_25, unsigned p_26, int p_27);
static unsigned short func_30(int p_31, int p_32, unsigned char p_33);
static int func_34(struct S0 p_35, unsigned p_36, unsigned char p_37);
static short func_38(unsigned p_39, unsigned short p_40, short p_41);
static unsigned short func_43(int p_44, int p_45, unsigned p_46, unsigned char p_47);
static unsigned func_50(union U1 p_51);
static unsigned func_1(void)
{
    int l_8 = 0x61D2250DL;
    unsigned l_500 = 18446744073709551609UL;
    struct S0 l_501[7] = {{0xB337L,-9L,0x9A8BL,1L,0xC800CACFL,0x8C91L}, {0xB337L,-9L,0x9A8BL,1L,0xC800CACFL,0x8C91L}, {0x08B5L,-1L,1L,-1L,0L,2UL}, {0xB337L,-9L,0x9A8BL,1L,0xC800CACFL,0x8C91L}, {0xB337L,-9L,0x9A8BL,1L,0xC800CACFL,0x8C91L}, {0x08B5L,-1L,1L,-1L,0L,2UL}, {0xB337L,-9L,0x9A8BL,1L,0xC800CACFL,0x8C91L}};
    int l_602 = 0x8362C784L;
    int i;
    l_602 &= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(l_8, g_9)), 3)), ((safe_sub_func_uint8_t_u_u(func_12((l_8 >= func_17((func_19(func_23(g_9, (safe_rshift_func_uint16_t_u_u(func_30(l_8, g_9, g_9), 0)), g_456.f2, g_161), l_500, l_501[5]) > l_501[5].f1))), g_407, l_501[5].f5, g_162[1]), l_501[5].f4)) < 7UL)));
    return g_158[1][0];
}







static unsigned char func_12(unsigned p_13, unsigned short p_14, unsigned char p_15, unsigned p_16)
{
    unsigned l_586 = 1UL;
    unsigned l_597 = 0x4ECF6A4AL;
    int l_598 = 0xBF5509DFL;
    int l_599 = 2L;
    l_599 &= ((safe_mul_func_int16_t_s_s(((g_406 ^= (l_586 & ((p_15 <= ((((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_14 | (p_15 && (l_598 ^= ((p_16 <= (l_597 &= ((g_119.f5 , (safe_rshift_func_uint8_t_u_s(g_456.f2, 7))) || (((g_158[1][0] & (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((((((-7L) || g_119.f2) || (-1L)) && g_115[1][1]) ^ l_586) < g_130), 0x5A9B60D4L)), g_52.f2))) >= g_576[4][2][3]) | l_586)))) == p_16)))), l_586)), p_13)) >= g_325) == 65530UL) < g_52.f2)) ^ 4294967291UL))) != g_575), p_15)) <= l_586);
    for (g_419 = 0; (g_419 <= 43); ++g_419)
    {
        return g_162[0];
    }
    l_599 = l_598;
    return g_451.f5;
}







static unsigned func_17(int p_18)
{
    struct S0 l_570 = {0x1F60L,0x0AF7L,5L,0x7403L,-1L,0x5F41L};
    int l_573[4] = {0x5AA78DDBL, 1L, 0x5AA78DDBL, 1L};
    int i;
    l_570 = l_570;
    for (g_119.f0 = 0; (g_119.f0 <= 6); g_119.f0 += 1)
    {
        char l_571 = 0x49L;
        int l_572 = 0xE5D5BBFDL;
        int l_574[5][6][7] = {{{1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}}, {{1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}}, {{1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}}, {{1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}}, {{1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}, {1L, 0x772A8051L, 0x4AB0CF6AL, 0x772A8051L, 1L, 0x772A8051L, 0x4AB0CF6AL}}};
        int i, j, k;
        ++g_576[4][2][1];
        if (g_115[1][1])
            continue;
        g_451 = ((safe_add_func_uint32_t_u_u(l_570.f1, (safe_add_func_int32_t_s_s(l_573[2], (((((0x97D52BCBL == (func_38(l_574[2][1][1], g_93, p_18) & ((g_52.f4 = 0x2FL) , func_38(((l_570.f2 , 0UL) || p_18), l_573[2], l_571)))) , p_18) , g_299) , g_122) > p_18))))) , l_570);

        for (p_18 = 4; (p_18 >= 0); p_18 -= 1)
        {
            int l_583 = 0x988A1349L;
            l_573[2] = (l_583 = 1L);
            for (g_328 = 4; (g_328 >= 0); g_328 -= 1)
            {
                int i, j;
                l_583 = g_115[g_119.f0][(g_119.f0 + 2)];
                if (g_115[g_119.f0][(g_328 + 1)])
                    break;
            }
        }
    }
    l_573[3] = (g_52.f1 = l_570.f1);

    return g_334[2][0][0];
}







static short func_19(union U1 p_20, unsigned p_21, struct S0 p_22)
{
    unsigned short l_508 = 65535UL;
    struct S0 l_552 = {0x7CF0L,0xBCD5L,0x09BDL,-1L,6L,0xE310L};
    int l_566 = 0x7B289C69L;
    short l_567 = (-5L);
    for (g_470 = (-13); (g_470 != (-2)); g_470 = safe_add_func_int8_t_s_s(g_470, 4))
    {
        unsigned l_526[3];
        int l_528[4] = {0x18AC4B50L, 0xC535FCEEL, 0x18AC4B50L, 0xC535FCEEL};
        struct S0 l_533 = {0xB8FEL,0x48CBL,0xD1F9L,0x467DL,-10L,0x9B88L};
        union U1 l_538[4] = {{0x9FL}, {0xD9L}, {0x9FL}, {0xD9L}};
        int i;
        for (i = 0; i < 3; i++)
            l_526[i] = 0x3446A833L;
        for (g_299.f0 = 9; (g_299.f0 != 27); ++g_299.f0)
        {
            int l_511 = 0x41E3E117L;
            unsigned l_527 = 0x83A9B772L;
            int l_529 = 0L;
            int l_543 = 0xBF6AF04AL;
            unsigned char l_548 = 0x2BL;
            struct S0 l_549 = {0x2B07L,0xDA93L,-7L,-5L,-1L,1UL};
            l_529 |= (safe_add_func_uint16_t_u_u(0xDC40L, (l_528[1] ^= (l_508 > (6L > (safe_add_func_int8_t_s_s(func_34(g_451, l_511, (g_363[4] = (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(func_38(g_119.f0, (((((((safe_add_func_int32_t_s_s(func_38(g_453, ((((((((0x87E6ECF7L <= ((safe_mod_func_int32_t_s_s((g_214 |= (safe_lshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(l_511, p_22.f1)), l_511)) == l_526[2]) , p_22.f0), 9))), p_22.f0)) & l_508)) , l_527) >= 0x1932CB05L) >= p_22.f3) ^ g_470) , 0xE7L) != p_22.f5) >= 0xC106L), l_508), 0x6FD1A9B3L)) || 0x4DL) && l_508) && l_526[2]) <= p_22.f5) && g_162[5]) > p_22.f4), p_22.f5), g_52.f4)), g_119.f3)))), p_21)))))));
            for (g_164 = 16; (g_164 <= 25); g_164 = safe_add_func_uint16_t_u_u(g_164, 1))
            {
                short l_532 = 0x4F95L;
                int l_539 = 0xD83C89CFL;
                int l_542[3][1][2] = {{{(-6L), (-6L)}}, {{(-6L), (-6L)}}, {{(-6L), (-6L)}}};
                int i, j, k;
                if (p_22.f3)
                    break;
                if (l_508)
                    continue;
                p_20.f1 = ((l_532 = (~l_527)) == func_34(l_533, ((((l_529 = g_334[4][0][1]) ^ (0x1C11L > 0x7A22L)) < (+(safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(l_508, (l_538[3] , l_539))), func_34(((func_23((safe_add_func_uint32_t_u_u((++g_85), ((safe_sub_func_uint32_t_u_u((l_511 &= 0x032EA948L), p_20.f2)) , 9L))), g_299.f4, l_527, l_548) , p_22.f3) , l_549), g_162[1], l_549.f4))))) && l_542[0][0][0]), g_186));

                                for (l_527 = 0; (l_527 <= 56); l_527 = safe_add_func_int16_t_s_s(l_527, 9))
                {
                    g_119 = p_22;
                }
            }
        }
        p_22 = g_119;
        for (g_299.f4 = 0; (g_299.f4 <= 0); g_299.f4 += 1)
        {
            unsigned l_553[3][1][3] = {{{4294967295UL, 4294967295UL, 0x23E226CCL}}, {{4294967295UL, 4294967295UL, 0x23E226CCL}}, {{4294967295UL, 4294967295UL, 0x23E226CCL}}};
            int i, j, k;
            l_552 = l_533;
            ++l_553[2][0][2];
            return p_22.f3;
        }

    }
    l_566 = ((0x43FEL == (func_23(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((0UL < 0x8CBFL), ((p_21 == ((g_85 = ((safe_mod_func_int8_t_s_s(p_22.f4, ((l_552.f0 , (g_451.f0 , (((safe_sub_func_int8_t_s_s((p_22.f5 ^ g_115[6][4]), l_552.f4)) == l_566) ^ g_119.f3))) && 1L))) ^ g_408)) ^ p_22.f5)) , p_22.f4))), 12)), l_508)) , (-9L)), l_567, p_20.f0, p_22.f1) , 65528UL)) != 0xE19AL);
    l_552 = ((safe_rshift_func_uint16_t_u_s((l_566 == l_552.f1), (g_162[8] == l_566))) , g_451);
    return l_552.f3;
}







static union U1 func_23(char p_24, unsigned char p_25, unsigned p_26, int p_27)
{
    char l_497 = 0x79L;
    int l_498 = (-4L);
    union U1 l_499 = {0UL};
    l_498 = l_497;
    return l_499;

    }







static unsigned short func_30(int p_31, int p_32, unsigned char p_33)
{
    unsigned char l_42 = 1UL;
    struct S0 l_466 = {0xFCBCL,-1L,9L,0L,-1L,0xEB05L};
    int l_496 = 0xFB8329D9L;
    l_496 = func_34(((0x8254L <= func_38(l_42, func_43(((((!(safe_sub_func_uint32_t_u_u(func_50(g_52), (g_453 |= l_42)))) <= l_42) < ((safe_sub_func_int32_t_s_s(l_42, (g_456 , (safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_9, 0xD7L)), l_42)), p_31))))) == l_42)) != l_42), p_32, l_42, l_42), g_456.f4)) , l_466), p_31, p_31);
    return l_466.f0;
}







static int func_34(struct S0 p_35, unsigned p_36, unsigned char p_37)
{
    short l_467[6] = {8L, 8L, 0xFFFEL, 8L, 8L, 0xFFFEL};
    int l_468 = 1L;
    int l_469[10] = {0x12C7BB83L, 0L, 0x12C7BB83L, 0L, 0x12C7BB83L, 0L, 0x12C7BB83L, 0L, 0x12C7BB83L, 0L};
    int l_471 = 0x0B637EF9L;
    short l_472[9] = {0x536EL, 0x536EL, (-1L), 0x536EL, 0x536EL, (-1L), 0x536EL, 0x536EL, (-1L)};
    struct S0 l_476 = {0x4680L,-1L,-1L,0x1FF4L,0x6846648FL,0UL};
    int i;
    g_119 = (g_451 = p_35);
    ++g_473;
    p_35 = l_476;
    if (p_35.f2)
    {
        l_471 |= (safe_lshift_func_int16_t_s_s(g_363[6], 14));
        g_119 = (p_35 , g_119);
    }
    else
    {
        unsigned char l_487 = 0x62L;
        int l_492 = 0L;
        for (g_52.f0 = 0; (g_52.f0 <= 38); g_52.f0++)
        {
            short l_486 = 2L;
            for (g_119.f5 = 0; (g_119.f5 < 60); ++g_119.f5)
            {
                unsigned l_489 = 0x7DA4EEECL;
                for (g_328 = 22; (g_328 != (-28)); --g_328)
                {
                    unsigned short l_485 = 65535UL;
                    if ((l_485 = 0x50B3280AL))
                    {
                        l_486 = 0x1C1167A7L;
                        return p_35.f5;
                    }
                    else
                    {
                        unsigned char l_488 = 255UL;
                        l_488 ^= (g_115[6][1] , l_487);
                    }
                    return l_489;
                }
                l_492 ^= (safe_lshift_func_uint16_t_u_u(g_451.f4, 7));
                if (p_35.f2)
                    continue;
            }
        }
        for (g_419 = 22; (g_419 != 7); --g_419)
        {
            unsigned char l_495 = 255UL;
            l_469[5] &= l_495;
        }
    }
    return l_472[7];
}







static short func_38(unsigned p_39, unsigned short p_40, short p_41)
{
    return p_39;
}







static unsigned short func_43(int p_44, int p_45, unsigned p_46, unsigned char p_47)
{
    union U1 l_463 = {0xB8L};
    struct S0 l_465 = {0x44E6L,0xB63AL,0xAE3BL,-2L,4L,1UL};
    g_464 &= func_50(l_463);
    l_465 = l_465;
    l_465 = g_119;
    return g_156;
}







static unsigned func_50(union U1 p_51)
{
    struct S0 l_53[2][9][10] = {{{{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}}, {{{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}, {{0xFF7DL,1L,8L,1L,0x285618A3L,0x12ECL}, {1UL,0x5A4BL,0L,-1L,-1L,65535UL}, {0x66B6L,9L,0L,-8L,9L,0x8FD6L}, {0x4C1BL,-10L,1L,0L,-1L,0x15E5L}, {0x6D35L,5L,-2L,0x499AL,-1L,0x4356L}, {0x429FL,1L,0x1587L,1L,-8L,0x4EECL}, {0xD352L,-1L,0x34C6L,2L,0L,0UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}, {2UL,-3L,0x5476L,-4L,0x05A42069L,1UL}, {0xCAECL,0xF6BFL,0L,0x6694L,0xF2EC8A69L,0UL}}}};
    int l_66 = 0x20E0A404L;
    union U1 l_67[10] = {{0x83L}, {255UL}, {0x83L}, {255UL}, {0x83L}, {255UL}, {0x83L}, {255UL}, {0x83L}, {255UL}};
    int l_123 = (-1L);
    unsigned l_254[8] = {1UL, 0xA22641FEL, 1UL, 0xA22641FEL, 1UL, 0xA22641FEL, 1UL, 0xA22641FEL};
    char l_324 = (-3L);
    int l_332 = 0xF8FDF514L;
    int i, j, k;
    for (g_52.f1 = 1; (g_52.f1 >= 0); g_52.f1 -= 1)
    {
        int l_56 = (-1L);
        int l_57[2][4][1];
        int l_60[3][10] = {{0x803A0833L, 1L, 0x7D2B40C0L, 0x69535F3DL, 0x73D745D2L, 0x69535F3DL, 0x7D2B40C0L, 1L, 0x803A0833L, 0xD446D23EL}, {0x803A0833L, 1L, 0x7D2B40C0L, 0x69535F3DL, 0x73D745D2L, 0x69535F3DL, 0x7D2B40C0L, 1L, 0x803A0833L, 0xD446D23EL}, {0x803A0833L, 1L, 0x7D2B40C0L, 0x69535F3DL, 0x73D745D2L, 0x69535F3DL, 0x7D2B40C0L, 1L, 0x803A0833L, 0xD446D23EL}};
        unsigned l_65 = 2UL;
        struct S0 l_70 = {65535UL,1L,0x6C9FL,0xA8EEL,1L,0xC5B3L};
        unsigned l_182 = 0x76EEAEBFL;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_57[i][j][k] = 0xEC08A347L;
            }
        }
        if (((safe_mul_func_int32_t_s_s(0xC58A5459L, ((l_56 = p_51.f4) >= (((l_57[0][2][0] = g_9) & (((safe_lshift_func_uint16_t_u_s(((l_60[2][6] || (safe_mod_func_int8_t_s_s(((g_52.f2 <= (((((safe_rshift_func_int8_t_s_u((((l_65 | ((l_66 = ((g_9 , g_52.f2) < (l_60[2][6] , 1L))) == p_51.f4)) ^ 0xF353L) >= l_60[2][5]), p_51.f0)) | g_52.f1) , 0xD216E5E9L) == l_65) | 0x2FF8L)) || 0xFDBCL), (-1L)))) || l_66), p_51.f0)) , 1UL) >= g_52.f2)) != p_51.f2)))) , g_52.f0))
        {
            short l_77 = 0xC862L;
            unsigned short l_116 = 0x2A24L;
            int l_120 = (-10L);
            int l_154 = 8L;
            struct S0 l_155 = {65535UL,2L,1L,0x0BE7L,-1L,65535UL};
            struct S0 l_213 = {8UL,0x4332L,0L,-1L,9L,65535UL};
            unsigned char l_290 = 0x48L;
            int l_326 = 0x01260AC6L;
            int l_330 = 0x1F9DEB38L;
            union U1 l_399[7][8] = {{{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}, {{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}, {{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}, {{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}, {{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}, {{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}, {{0UL}, {255UL}, {0UL}, {1UL}, {4UL}, {1UL}, {0x4AL}, {0x4AL}}};
            unsigned l_447 = 0x4D643D6FL;
            int i, j;
            if ((p_51.f4 >= (l_67[8] , ((safe_sub_func_uint32_t_u_u(p_51.f4, 1UL)) > ((l_70 , (safe_mod_func_int8_t_s_s((l_66 |= (!(+0xF3L))), (safe_sub_func_uint32_t_u_u(4294967295UL, (0x6FL ^ ((((safe_rshift_func_uint8_t_u_u(l_77, g_52.f4)) <= g_52.f1) , (-6L)) ^ p_51.f0))))))) && p_51.f0)))))
            {
                int l_78 = 0x73B790C2L;
                unsigned l_81 = 8UL;
                for (l_70.f5 = 0; (l_70.f5 <= 1); l_70.f5 += 1)
                {
                    unsigned l_94 = 1UL;
                    int l_114 = 0x3783EF79L;
                    for (p_51.f4 = 0; (p_51.f4 <= 1); p_51.f4 += 1)
                    {
                        unsigned char l_84 = 0x70L;
                        g_85 = (l_78 || (safe_mul_func_uint8_t_u_u(l_81, (safe_mod_func_uint16_t_u_u(l_81, ((l_67[8].f1 = (g_52.f4 <= l_84)) , (l_78 &= (l_84 < l_81))))))));
                        g_93 ^= ((safe_add_func_int32_t_s_s((l_67[8].f1 = (safe_add_func_int16_t_s_s(l_78, (safe_unary_minus_func_int8_t_s((safe_sub_func_uint8_t_u_u(g_52.f4, (0UL != g_52.f1)))))))), g_85)) , p_51.f0);
                        l_78 = ((p_51.f0 != ((255UL ^ (l_94 < (safe_sub_func_int8_t_s_s(0xE7L, (safe_lshift_func_int8_t_s_u(g_9, p_51.f4)))))) , 0xF3L)) > g_93);
                        l_67[8].f1 = 0x44345D73L;
                    }

                                        for (l_70.f3 = 0; (l_70.f3 <= 1); l_70.f3 += 1)
                    {
                        unsigned l_113 = 18446744073709551615UL;
                        l_114 = ((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_52.f0 > (g_52 , (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(l_78, ((safe_add_func_int16_t_s_s(0L, (safe_add_func_uint32_t_u_u(p_51.f2, ((p_51.f0 > p_51.f2) & (g_52.f2 && l_67[8].f4)))))) <= p_51.f2))) == 2UL), l_94)) ^ p_51.f4), l_113)))), 1)), g_52.f0)) <= 0L);
                        l_60[2][6] ^= p_51.f2;
                        p_51.f1 = g_52.f3;

                                            }
                }
                --l_116;
                for (l_70.f0 = 0; (l_70.f0 <= 1); l_70.f0 += 1)
                {
                    int l_121 = 0xF8A4D615L;
                    int i, j;
                    g_119 = g_119;
                    p_51.f1 = (l_120 &= g_115[(l_70.f0 + 5)][(g_52.f1 + 7)]);

                                        for (l_66 = 2; (l_66 <= 6); l_66 += 1)
                    {
                        unsigned l_125 = 1UL;
                        int i, j, k;
                        l_121 = p_51.f4;
                        --l_125;
                        g_130 ^= (safe_rshift_func_int16_t_s_u((p_51.f3 & (g_119.f3 >= (g_52.f2 , g_119.f4))), 6));
                        l_53[l_70.f0][(l_70.f0 + 7)][(l_66 + 3)] = l_53[l_70.f0][(l_70.f0 + 1)][(l_66 + 1)];
                    }
                }
                l_120 |= (-1L);
            }
            else
            {
                short l_143 = 1L;
                int l_150 = 0x1E9BC497L;
                int l_153 = 0x5E54166EL;
                struct S0 l_179 = {65534UL,-6L,1L,-1L,0x7469F826L,0x77B0L};
                unsigned l_198 = 0xBC4987A5L;
                for (l_70.f2 = 0; (l_70.f2 <= 1); l_70.f2 += 1)
                {
                    int l_142 = 0L;
                    unsigned short l_152 = 0xF0A8L;
                    g_131 = l_56;
                    l_153 = ((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_142 <= ((l_143 = g_115[3][0]) ^ (safe_sub_func_uint16_t_u_u(((l_66 | g_93) , (safe_mul_func_int8_t_s_s(((((safe_rshift_func_int8_t_s_s((p_51.f0 , 1L), ((l_150 = 1UL) | g_151))) > ((g_119.f3 < p_51.f2) > g_93)) <= g_115[0][4]) ^ g_115[1][2]), 5L))), 0xE25FL)))), g_122)), g_115[1][1])) == l_152) <= 1UL), l_153)), 4)), l_154)) | 0UL);
                    for (g_124 = 1; (g_124 >= 0); g_124 -= 1)
                    {
                        int i, j, k;
                        l_155 = l_53[g_124][(g_124 + 6)][(g_52.f1 + 1)];
                    }
                    --g_158[1][0];
                }
                if (l_155.f3)
                {
                    char l_163 = 0x68L;
                    struct S0 l_195 = {0x59ACL,2L,2L,0x439EL,0xF63190A6L,65532UL};
                    int l_199 = 0xD53FDCE9L;
                    g_164++;
                    for (g_119.f3 = (-24); (g_119.f3 < (-6)); g_119.f3 = safe_add_func_int32_t_s_s(g_119.f3, 2))
                    {
                        short l_176[2][2][8] = {{{0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L}, {0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L}}, {{0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L}, {0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L, 0xC6A2L, 0x6E56L}}};
                        int l_183 = (-1L);
                        int i, j, k;
                        l_150 &= l_123;
                        g_169[4][1][0] ^= 0xDAB9027DL;
                        l_57[0][0][0] &= (g_119 , (l_183 = (safe_sub_func_int16_t_s_s((65526UL >= (0L == ((safe_lshift_func_int8_t_s_u(((0xDA599ACBL >= (safe_lshift_func_uint8_t_u_u(l_163, 6))) , l_150), l_176[0][0][1])) != (safe_mod_func_int32_t_s_s(((((l_179 , (l_182 = (g_115[5][0] = (safe_add_func_uint32_t_u_u((g_158[0][1] = (l_67[8].f0 && g_156)), g_52.f4))))) , 1L) , 0UL) != p_51.f4), g_93))))), 0xDA60L))));
                    }
                    for (l_123 = 0; (l_123 < (-8)); l_123 = safe_sub_func_int16_t_s_s(l_123, 6))
                    {
                        g_186 = g_52.f1;
                    }
                    p_51.f1 = (l_163 , (safe_sub_func_uint16_t_u_u(((l_199 ^= (l_57[0][2][0] || (+(safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((((l_195 , l_70.f1) != g_164) == (g_156 , ((safe_rshift_func_int8_t_s_u((-6L), p_51.f2)) == (l_198 <= p_51.f4)))) > 5L), l_116)), l_155.f1)), l_67[8].f0))))) | p_51.f4), 0xDF80L)));

                                    }
                else
                {
                    struct S0 l_200 = {0x795CL,-1L,-1L,0L,0xE7AD450EL,0x6270L};
                    int l_234 = 2L;
                    l_53[0][2][6] = l_200;
                    p_51.f1 = ((l_70.f0 == (l_123 = ((g_158[2][0] &= p_51.f2) != l_116))) , (safe_rshift_func_uint16_t_u_s(g_115[1][1], ((((((safe_rshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(((p_51.f0 > g_164) <= ((safe_lshift_func_uint16_t_u_s(l_70.f1, 2)) != g_85)), (l_67[8].f1 = (safe_mod_func_int16_t_s_s(l_56, g_158[1][0]))))) & 1L), g_115[1][1])) <= l_179.f5) <= p_51.f2) != 0x24L) || 65535UL) | 0UL))));

                                        l_70 = l_213;
                    if (g_169[0][0][0])
                    {
                        struct S0 l_215 = {0xEFFCL,0xDAD2L,0L,-1L,0L,0xADD0L};
                        g_214 = g_186;
                        l_215 = (l_179 = l_70);
                        l_234 = (safe_sub_func_int16_t_s_s(((249UL & ((safe_sub_func_uint8_t_u_u((g_130 = (l_213.f0 >= (!l_70.f1))), ((safe_add_func_uint16_t_u_u(((l_150 = g_214) <= (-4L)), (safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((-6L), ((p_51.f2 = (l_200.f4 >= (((p_51.f0 > (safe_lshift_func_int16_t_s_u(((p_51.f4 || g_93) && 0UL), g_161))) & l_116) || p_51.f4))) == l_57[0][2][0]))), g_119.f3)), g_52.f1)))) , p_51.f2))) <= 0x7B16L)) , p_51.f4), l_60[0][9]));

                                            }
                    else
                    {
                        return p_51.f3;
                    }

                                    }

                            }
            if ((safe_lshift_func_uint8_t_u_u(g_157, 2)))
            {
                unsigned char l_245 = 0UL;
                int l_265 = (-2L);
                int l_323 = 0x8158996BL;
                int l_327 = 0xF3326ED6L;
                int l_331 = (-1L);
                int l_333 = 1L;
                l_123 &= l_70.f0;
                for (l_213.f0 = 25; (l_213.f0 > 25); ++l_213.f0)
                {
                    short l_243 = 8L;
                    int l_244 = 0x7F73B421L;
                    short l_246 = 1L;
                    int l_247 = 0x20474BB1L;
                    if ((p_51.f1 = (l_123 = ((g_169[4][1][0] && ((l_57[1][0][0] = (((l_123 || ((safe_rshift_func_int16_t_s_s((-2L), (~((p_51.f0 == 0x33E1L) == (p_51.f4 <= ((l_244 = (p_51.f0 <= l_243)) & (g_157 , l_245))))))) != p_51.f4)) , g_164) != p_51.f4)) == g_186)) || p_51.f4))))
                    {
                        if (l_155.f1)
                            break;
                    }
                    else
                    {
                        --g_248;
                        g_214 ^= l_246;
                        l_123 &= g_162[0];
                    }

                                        for (g_130 = 19; (g_130 < 57); ++g_130)
                    {
                        unsigned l_253[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_253[i] = 0x1647D06EL;
                        return l_253[0];
                    }
                    g_214 &= ((((l_244 & (p_51.f3 & l_70.f4)) <= g_124) & (~(((--l_254[4]) , (safe_lshift_func_int8_t_s_s((p_51.f2 || (g_186 = g_119.f0)), 2))) >= g_248))) && (0x45D0L >= (l_244 = ((g_248 > p_51.f0) , 0xA3F4L))));
                    for (g_119.f5 = 0; (g_119.f5 != 12); g_119.f5 = safe_add_func_int8_t_s_s(g_119.f5, 9))
                    {
                        g_214 = (-1L);
                    }
                }
                for (l_213.f1 = 1; (l_213.f1 >= 0); l_213.f1 -= 1)
                {
                    union U1 l_279 = {252UL};
                    int i, j;
                    if (((safe_add_func_int32_t_s_s(l_60[l_213.f1][(g_52.f1 + 1)], l_245)) < (l_57[0][2][0] = (p_51.f0 = (safe_mul_func_uint16_t_u_u((g_119.f5--), (((l_265 = (safe_sub_func_uint8_t_u_u((((g_52.f4 | (safe_add_func_int16_t_s_s((+(safe_lshift_func_uint16_t_u_s((~(p_51.f2 > (0xFFL <= (safe_mul_func_int8_t_s_s(g_119.f2, g_119.f2))))), 9))), (g_162[7] && (p_51 , l_70.f5))))) == p_51.f2) < 0x2DD4L), l_60[l_213.f1][(g_52.f1 + 1)]))) || 0xA0L) > g_169[3][1][0])))))))
                    {
                        unsigned l_276 = 0x7A678772L;
                        ++l_276;
                        g_214 = p_51.f4;
                        l_66 = (l_60[l_213.f1][(g_52.f1 + 1)] , (((l_279 , (safe_mul_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((l_60[l_213.f1][(g_52.f1 + 1)] | l_245), l_265)) , (safe_mod_func_uint16_t_u_u((g_119.f0 = (p_51.f4 >= (g_115[1][1] || (((safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s(l_290, 13)), p_51.f0)) == 0x3AL) > 255UL)))), 0x9FC2L))), l_65))) != g_52.f0) || g_169[4][1][0]));
                    }
                    else
                    {
                        unsigned char l_322 = 255UL;
                        l_154 = 2L;
                        g_325 &= (safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((l_60[l_213.f1][(g_52.f1 + 1)] &= ((safe_add_func_uint32_t_u_u((g_186 <= ((g_299 = p_51) , (l_265 != (((((g_119.f0 = g_162[0]) && (safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(((p_51.f3 = ((l_70.f1 , (g_122 , ((((l_323 = (safe_add_func_uint32_t_u_u(l_279.f2, ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_51.f4, (safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((!(safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((l_67[8].f4 , 0x2FF5E756L) < p_51.f0), 3)), g_52.f2))), 2)) <= l_265), g_214)))), (-2L))) ^ l_322), l_322)) && l_70.f0)))) , l_324) || 0UL) , p_51.f2))) <= p_51.f4)) & l_324), l_265)) > (-1L)) < l_279.f0), (-8L))), 1))) ^ l_265) && 0L) || g_131)))), 0x9D540DDEL)) ^ 0x3EL)), g_52.f3)), g_164));
                    }
                    for (l_154 = 0; (l_154 <= 1); l_154 += 1)
                    {
                        if (p_51.f2)
                            break;
                    }
                }
                g_335[6][6]--;
            }
            else
            {
                int l_349[3];
                int l_358 = 0x4829650CL;
                int l_360 = 1L;
                int l_362 = 0L;
                struct S0 l_373 = {0x38D5L,0L,0x10B1L,0x2E7AL,0x88DFA95FL,6UL};
                int l_393 = 0xEA5A3F09L;
                union U1 l_446 = {0xC2L};
                int i;
                for (i = 0; i < 3; i++)
                    l_349[i] = 0x611DE466L;
                if ((0xAAL & g_248))
                {
                    unsigned l_338 = 0UL;
                    struct S0 l_339[3][1][6] = {{{{65535UL,0x4A0FL,9L,0L,0L,0UL}, {0xA4F9L,0L,-1L,0L,0x9B99F9DAL,0UL}, {0xA54DL,-2L,0x64EDL,0xD266L,0xF5273B7CL,0x32DAL}, {0xA4F9L,0L,-1L,0L,0x9B99F9DAL,0UL}, {65535UL,0x4A0FL,9L,0L,0L,0UL}, {65526UL,0xC8D1L,0x78BCL,0xD70CL,0xA25F1CDEL,65532UL}}}, {{{65535UL,0x4A0FL,9L,0L,0L,0UL}, {0xA4F9L,0L,-1L,0L,0x9B99F9DAL,0UL}, {0xA54DL,-2L,0x64EDL,0xD266L,0xF5273B7CL,0x32DAL}, {0xA4F9L,0L,-1L,0L,0x9B99F9DAL,0UL}, {65535UL,0x4A0FL,9L,0L,0L,0UL}, {65526UL,0xC8D1L,0x78BCL,0xD70CL,0xA25F1CDEL,65532UL}}}, {{{65535UL,0x4A0FL,9L,0L,0L,0UL}, {0xA4F9L,0L,-1L,0L,0x9B99F9DAL,0UL}, {0xA54DL,-2L,0x64EDL,0xD266L,0xF5273B7CL,0x32DAL}, {0xA4F9L,0L,-1L,0L,0x9B99F9DAL,0UL}, {65535UL,0x4A0FL,9L,0L,0L,0UL}, {65526UL,0xC8D1L,0x78BCL,0xD70CL,0xA25F1CDEL,65532UL}}}};
                    int l_350 = 6L;
                    int i, j, k;
                    l_154 ^= l_338;
                    g_119 = l_339[1][0][5];
                    l_350 = (l_66 &= (((((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_339[1][0][5].f3, 15)), (((((((((g_122 = (l_67[8].f1 = g_157)) < l_70.f3) == 0x8F3659B2L) , 1UL) >= (~p_51.f2)) == ((safe_unary_minus_func_uint8_t_u(((((((((p_51.f0 ^ (safe_sub_func_int16_t_s_s((l_349[0] = l_120), (g_130 & g_299.f0)))) > p_51.f2) ^ g_162[0]) == l_339[1][0][5].f5) , 0xA81F63E3L) || 0L) | l_254[6]) , p_51.f0))) | p_51.f2)) | g_115[1][9]) > 0L) && 5L))), 10)) || g_151) || g_334[0][1][1]) , 1UL) & l_123));
                    if (g_52.f1)
                        break;
                }
                else
                {
                    unsigned l_353 = 1UL;
                    int l_359[6] = {0x92BD6711L, 0xE287BD51L, 0x92BD6711L, 0xE287BD51L, 0x92BD6711L, 0xE287BD51L};
                    unsigned short l_398 = 65535UL;
                    int i;
                    if ((l_349[0] , (7UL ^ (((safe_rshift_func_uint8_t_u_s((l_353 |= g_158[2][2]), 7)) , (safe_rshift_func_uint8_t_u_u(250UL, 5))) > ((((p_51.f0 > ((((safe_rshift_func_int16_t_s_s((l_154 , l_254[3]), (0xC3B143DAL ^ (l_358 = p_51.f0)))) & 0x1D80570EL) ^ 4294967292UL) < p_51.f4)) & 1L) && 0x509AL) , g_334[5][0][1])))))
                    {
                        unsigned short l_368[7][8] = {{65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}, {65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}, {65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}, {65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}, {65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}, {65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}, {65533UL, 3UL, 0x9614L, 0x9614L, 3UL, 65533UL, 3UL, 0x9614L}};
                        int i, j;
                        g_363[3]--;
                        l_53[1][7][8] = g_119;
                        g_214 = ((((safe_sub_func_uint32_t_u_u(((8UL | ((p_51.f2 = (l_353 == g_131)) | (g_299.f0 = l_358))) | 0x7AL), (l_67[8].f0 , l_368[1][3]))) <= (((safe_rshift_func_int16_t_s_u(l_213.f5, 10)) > (safe_rshift_func_int8_t_s_s(g_363[7], 6))) , 0x867EL)) && g_162[0]) | l_57[0][1][0]);

                                                g_119 = g_119;
                    }
                    else
                    {
                        unsigned l_397 = 4294967292UL;
                        l_155 = (l_373 = l_213);
                        g_374--;
                        p_51.f1 = (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((+(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(p_51.f4, (((p_51.f4 ^ l_57[0][2][0]) == (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(g_124, 0L)) <= (safe_mod_func_uint16_t_u_u((((--g_119.f5) | (((p_51.f4 < (p_51.f0 & (safe_unary_minus_func_uint8_t_u(l_67[8].f4)))) | g_335[6][6]) == (-1L))) >= l_213.f1), l_397))), g_299.f0))) , l_398))) , l_213.f3), 4)), 3)) , l_399[2][2]) , 0x3BL)) && g_119.f0), 0)), (-10L)));

                                            }

                                        for (g_164 = 20; (g_164 <= 10); g_164 = safe_sub_func_uint32_t_u_u(g_164, 1))
                    {
                        int l_402 = 0x097A1D36L;
                        l_402 ^= 0xD5EFAAA2L;
                        ++g_403;
                        return p_51.f2;
                    }
                    --g_408;
                    for (g_361 = 11; (g_361 < (-12)); --g_361)
                    {
                        l_360 ^= l_398;
                    }
                }
                if (g_93)
                    break;
                for (l_213.f1 = 26; (l_213.f1 != (-11)); l_213.f1 = safe_sub_func_int16_t_s_s(l_213.f1, 5))
                {
                    unsigned l_415 = 4294967290UL;
                    int l_417 = 2L;
                    if (p_51.f4)
                    {
                        return l_362;
                    }
                    else
                    {
                        l_393 = 0x52AC1A82L;
                    }
                    if (g_164)
                    {
                        l_393 = g_93;
                        l_415 = 0x12A5DED1L;
                        return g_9;
                    }
                    else
                    {
                        char l_416 = 0x0CL;
                        int l_418 = (-9L);
                        p_51.f1 = 0L;

                                                g_419--;
                    }

                                        return g_406;
                }
                if (l_373.f4)
                {
                    unsigned l_425 = 7UL;
                    for (g_151 = (-18); (g_151 != (-27)); --g_151)
                    {
                        unsigned char l_424 = 0xE9L;
                        if (l_424)
                            break;
                    }
                    return l_425;
                }
                else
                {
                    unsigned char l_430 = 247UL;
                    union U1 l_445 = {3UL};
                    l_67[8].f1 = (safe_rshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((l_399[2][2].f1 = l_430), (g_164 & (safe_sub_func_uint16_t_u_u((+(safe_add_func_int32_t_s_s(l_155.f5, ((l_362 &= g_119.f2) <= ((l_393 = (((((((p_51.f3 = 4294967294UL) < (l_53[0][0][0] , ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(g_408, (safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(l_67[8].f2, 7)) < ((l_446 = l_445) , g_9)), g_248)))) , (-3L)), 0x494DL)), 0x2FB3L)) & 1UL))) ^ l_447) || p_51.f2) ^ (-9L)) , l_66) ^ l_349[0])) != g_115[6][5]))))), l_70.f5))))) <= 1L), 4));

                                        for (g_119.f2 = 10; (g_119.f2 > 27); ++g_119.f2)
                    {
                        struct S0 l_450 = {0xE7AFL,-5L,-5L,-9L,-3L,1UL};
                        int l_452 = 0xB9FEADADL;
                        g_451 = l_450;
                        l_452 = (g_214 = g_119.f1);
                    }
                    g_299.f1 = 1L;

                                        p_51.f1 &= 0xCEEE61D6L;

                                    }

                                            }
        }
        else
        {
            g_214 = (p_51.f1 = 0xC4E2FF74L);

                    }
        l_53[0][1][4] = g_119;
        l_123 ^= ((g_115[2][8] ^= p_51.f0) , g_451.f0);
    }

        return g_451.f0;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_52.f1, "g_52.f1", print_hash_value);
    transparent_crc(g_52.f2, "g_52.f2", print_hash_value);
    transparent_crc(g_52.f3, "g_52.f3", print_hash_value);
    transparent_crc(g_52.f4, "g_52.f4", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_115[i][j], "g_115[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_119.f0, "g_119.f0", print_hash_value);
    transparent_crc(g_119.f1, "g_119.f1", print_hash_value);
    transparent_crc(g_119.f2, "g_119.f2", print_hash_value);
    transparent_crc(g_119.f3, "g_119.f3", print_hash_value);
    transparent_crc(g_119.f4, "g_119.f4", print_hash_value);
    transparent_crc(g_119.f5, "g_119.f5", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_158[i][j], "g_158[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_161, "g_161", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_162[i], "g_162[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_164, "g_164", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_169[i][j][k], "g_169[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_299.f0, "g_299.f0", print_hash_value);
    transparent_crc(g_299.f2, "g_299.f2", print_hash_value);
    transparent_crc(g_299.f4, "g_299.f4", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_334[i][j][k], "g_334[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_335[i][j], "g_335[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_363[i], "g_363[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_451.f0, "g_451.f0", print_hash_value);
    transparent_crc(g_451.f1, "g_451.f1", print_hash_value);
    transparent_crc(g_451.f2, "g_451.f2", print_hash_value);
    transparent_crc(g_451.f3, "g_451.f3", print_hash_value);
    transparent_crc(g_451.f4, "g_451.f4", print_hash_value);
    transparent_crc(g_451.f5, "g_451.f5", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_456.f0, "g_456.f0", print_hash_value);
    transparent_crc(g_456.f2, "g_456.f2", print_hash_value);
    transparent_crc(g_456.f4, "g_456.f4", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_473, "g_473", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_576[i][j][k], "g_576[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
