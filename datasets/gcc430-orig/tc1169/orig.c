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
   unsigned char f0;
   unsigned char f1;
};

union U1 {
   unsigned short f0;
   short f1;
};

union U2 {
   unsigned short f0;
};


static char g_13 = (-1L);
static union U0 g_29[4] = {{0UL}, {0UL}, {0UL}, {0UL}};
static char g_60 = 0x76L;
static int g_81[3] = {0x025F3D18L, 0x025F3D18L, 0x025F3D18L};
static unsigned g_101[3] = {0x28CFE7A2L, 0x28CFE7A2L, 0x28CFE7A2L};
static short g_106 = 0x8D46L;
static unsigned char g_114[8] = {254UL, 254UL, 0x49L, 254UL, 254UL, 0x49L, 254UL, 254UL};
static union U2 g_137 = {0xD5DAL};
static unsigned g_198 = 4294967295UL;
static int g_271 = 0x3804CC39L;
static int g_290 = 0L;
static char g_292 = (-1L);
static unsigned short g_293 = 0x83C5L;
static int g_365[10][3] = {{1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}, {1L, 1L, 1L}};
static unsigned g_381[4] = {0UL, 0UL, 0UL, 0UL};
static unsigned g_383[8][9] = {{0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}, {0UL, 1UL, 0UL, 0x91147520L, 0x192F708FL, 4294967294UL, 0xABEF9D2DL, 0xABEF9D2DL, 4294967294UL}};
static short g_466[9] = {(-3L), (-3L), 0x403CL, (-3L), (-3L), 0x403CL, (-3L), (-3L), 0x403CL};
static unsigned char g_475 = 0x97L;
static unsigned g_538 = 0xB66C6D99L;
static union U1 g_586 = {0x2DD7L};
static unsigned short g_714 = 0xE693L;
static union U2 g_813[10][9][2] = {{{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}, {{{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}, {{65531UL}, {0x7C92L}}}};
static short g_930 = 1L;



static unsigned func_1(void);
static short func_19(union U1 p_20);
static union U1 func_21(unsigned p_22, int p_23);
static char func_24(unsigned short p_25, unsigned char p_26, union U0 p_27);
static char func_32(unsigned char p_33, unsigned p_34);
static short func_68(int p_69, unsigned char p_70, unsigned p_71, int p_72);
static const short func_108(const union U0 p_109, int p_110);
static union U0 func_111(unsigned short p_112);
static char func_124(unsigned char p_125, int p_126, unsigned short p_127, const short p_128, int p_129);
static unsigned short func_132(unsigned char p_133, union U2 p_134, unsigned short p_135, union U2 p_136);
static unsigned func_1(void)
{
    unsigned char l_4 = 0x52L;
    int l_14 = 0L;
    unsigned short l_805 = 0x7883L;
    union U2 l_812 = {0xDEFBL};
    unsigned l_835 = 4294967290UL;
    short l_901[2];
    int l_912 = 0L;
    unsigned l_913 = 0x351190FCL;
    int l_943 = (-10L);
    unsigned l_1040 = 0xFB042EDBL;
    int i;
    for (i = 0; i < 2; i++)
        l_901[i] = 0xD2C0L;
    if ((safe_div_func_uint32_t_u_u((g_101[2] = (l_4 >= (safe_mul_func_uint8_t_u_u((0x80E3580DL < ((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((l_4 ^ (l_14 = g_13)), (safe_mul_func_int16_t_s_s((0x495E3B37L <= (l_4 && (safe_sub_func_int16_t_s_s(l_4, (g_586.f1 = func_19(func_21(l_4, (5L <= l_4)))))))), 8L)))), g_13)), (-7L))) ^ l_4)), g_13)))), l_4)))
    {
        short l_814[8] = {(-10L), 0x487AL, (-10L), 0x487AL, (-10L), 0x487AL, (-10L), 0x487AL};
        int i;
        g_290 = g_290;
        g_81[0] = (safe_div_func_uint8_t_u_u(((((l_805 && 5L) || (-3L)) > (g_292 = (safe_sub_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s(g_137.f0, ((-2L) >= (func_132(g_586.f1, l_812, (~g_114[0]), (g_813[9][8][0] = g_137)) >= 65530UL)))) & g_106), 0xA9A2L)), g_714)))) > g_714), l_814[1]));
    }
    else
    {
        char l_817[3];
        int l_832 = 7L;
        unsigned short l_868 = 65535UL;
        union U2 l_902 = {0x5B50L};
        int l_906 = 0x559AEC7FL;
        unsigned char l_1039 = 0x10L;
        int i;
        for (i = 0; i < 3; i++)
            l_817[i] = 0xA3L;
        if ((safe_sub_func_int32_t_s_s(l_817[2], (safe_lshift_func_uint16_t_u_s((l_805 >= 0x43L), (safe_mul_func_int8_t_s_s(l_817[2], l_4)))))))
        {
            unsigned char l_824 = 255UL;
            unsigned short l_891 = 0x3E9AL;
            union U2 l_903 = {65535UL};
            int l_916 = 1L;
            short l_931 = 0x9DB5L;
            int l_1004 = 0x57066F1DL;
            for (g_292 = 2; (g_292 <= 7); g_292 += 1)
            {
                const int l_831 = 1L;
                int l_834 = 0xD71DAECFL;
                union U2 l_864[1] = {{1UL}};
                int i;
                for (g_538 = 0; (g_538 <= 3); g_538 += 1)
                {
                    int l_833 = 8L;
                    int i, j;
                    if ((g_383[g_538][g_292] & (((l_835 = func_32((g_475 = (l_834 = ((g_114[(g_538 + 2)] ^ (l_14 = (safe_mod_func_int8_t_s_s(l_824, g_383[g_538][g_292])))) != (safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((l_831 < (l_832 = (l_817[2] >= (l_831 != 0UL)))), 2)), 7)), (l_833 = g_466[3])))))), g_114[7])) && 247UL) > 4L)))
                    {
                        return l_812.f0;
                    }
                    else
                    {
                        int l_840 = 0x90EB5328L;
                        l_840 = (safe_add_func_uint16_t_u_u(g_381[0], (safe_mul_func_int16_t_s_s(l_840, 1L))));
                        return l_831;
                    }
                }
                g_81[0] = g_586.f0;
                for (g_586.f0 = 1; (g_586.f0 <= 7); g_586.f0 += 1)
                {
                    union U2 l_865 = {0xE1BFL};
                    unsigned short l_866 = 65530UL;
                    const unsigned char l_867 = 0x7BL;
                    int l_889 = 0x58F80BF8L;
                    if ((+0xE97420DCL))
                    {
                        int i, j;
                        g_290 = g_383[g_586.f0][g_292];
                    }
                    else
                    {
                        unsigned char l_843[5][9][5] = {{{0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}}, {{0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}}, {{0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}}, {{0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}}, {{0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}, {0x1AL, 1UL, 0xABL, 0x00L, 0xEAL}}};
                        union U2 l_890 = {65529UL};
                        int l_892 = 0x5DE06C6DL;
                        int i, j, k;
                        l_832 = (safe_add_func_uint16_t_u_u((g_114[5] & func_32(l_843[0][1][1], (g_538 = (safe_lshift_func_uint8_t_u_u(0x96L, 4))))), (g_714 = (safe_mod_func_uint32_t_u_u((g_365[3][2] > 0x31AC9E13L), l_824)))));
                        l_832 = (((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((((safe_div_func_uint16_t_u_u(l_805, (0xD8L & l_834))) < (g_466[4] = (safe_mod_func_uint32_t_u_u(func_132((safe_add_func_uint8_t_u_u((~g_114[2]), (safe_mod_func_int16_t_s_s(l_831, (((safe_lshift_func_int16_t_s_s((g_466[2] < l_832), (((((l_817[2] ^ (safe_div_func_uint32_t_u_u(0xCE234B18L, g_13))) | l_812.f0) <= (-7L)) & g_292) && g_586.f1))) & l_831) & 1UL))))), l_864[0], l_4, l_865), 0x877CDA95L)))) <= 65533UL) < l_866) & g_271) < l_867), l_817[2])), l_824)) & 1L) < l_868);
                        g_290 = (safe_rshift_func_uint8_t_u_u(g_714, ((l_892 = (safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(func_132(((safe_add_func_uint32_t_u_u((~(g_383[g_586.f0][(g_292 + 1)] = ((safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_int32_t_s_s(((~g_290) <= g_198), (g_538 && (func_124(g_813[9][8][0].f0, l_824, l_834, (l_889 = (1UL & (l_817[2] ^ 0xA49D6B36L))), g_475) > l_831)))), g_137.f0)), 0xC99C4F12L)), 0x6FL)), g_586.f0)), g_106)) & g_383[5][0]))), g_365[0][0])) <= 0xECL), l_890, l_817[2], g_813[3][5][1]), l_891)), l_891))) <= l_834)));
                        g_290 = func_124(g_101[2], ((safe_sub_func_uint32_t_u_u(l_824, 0xDC2FAE5CL)) == g_101[2]), (g_714 = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((((0x8931D239L | (+0UL)) && func_132(((l_901[1] = (safe_div_func_uint32_t_u_u((g_475 > g_137.f0), g_381[0]))) >= g_292), l_902, l_14, l_903)) | g_383[1][2]), 0)) < l_835), 0))), l_817[2], l_868);
                    }
                    g_290 = (safe_lshift_func_int8_t_s_s(((0xF41AL <= (l_14 = func_32(g_466[2], (l_832 | (l_906 = (g_383[5][0] = (g_383[3][8] && 0L))))))) >= (safe_lshift_func_int8_t_s_u(g_292, 1))), (g_466[2] && (func_132((safe_unary_minus_func_uint8_t_u(func_32((safe_mod_func_int8_t_s_s(l_889, g_198)), l_912))), g_813[9][8][0], l_866, l_903) ^ g_114[7]))));
                    l_913 = (g_81[2] = 0x25C1EED3L);
                    l_906 = (l_834 && l_865.f0);
                }
            }
            l_906 = (+g_714);
            for (g_293 = (-30); (g_293 <= 1); ++g_293)
            {
                unsigned char l_960[9][10] = {{6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}, {6UL, 255UL, 0xE7L, 252UL, 0x3FL, 0xC7L, 1UL, 0x6AL, 0x0AL, 255UL}};
                int i, j;
                l_916 = l_891;
                for (g_586.f1 = (-17); (g_586.f1 < (-28)); g_586.f1 = safe_sub_func_uint8_t_u_u(g_586.f1, 1))
                {
                    unsigned short l_925 = 0x6D14L;
                    short l_970[3];
                    int l_972 = 0x43057BFCL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_970[i] = 0L;
                    if ((g_290 = (g_81[0] = (g_293 < ((safe_add_func_uint32_t_u_u(0UL, ((safe_rshift_func_uint16_t_u_s(0x534AL, 2)) & ((0xAE67CF8CL || func_124(g_271, (l_925 = g_475), g_586.f1, (g_81[0] <= (safe_mul_func_int8_t_s_s((l_931 = (safe_div_func_uint8_t_u_u(l_817[0], g_930))), g_365[2][2]))), l_812.f0)) | l_901[1])))) > (-1L))))))
                    {
                        int l_940 = 0x9FB91849L;
                        l_943 = (l_14 = (safe_mul_func_int16_t_s_s(func_32(g_381[0], (safe_lshift_func_uint8_t_u_u(l_906, g_290))), (safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(l_940, (safe_rshift_func_int16_t_s_s((0xF57AL || g_106), 12)))), g_466[3])))));
                        l_14 = (safe_mul_func_uint16_t_u_u((g_466[1] & ((((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(g_813[9][8][0].f0, 14)), 2)) <= (safe_sub_func_int16_t_s_s(0xCB47L, (g_137.f0 = (l_940 > (l_940 ^ (safe_add_func_int16_t_s_s(func_32((3L && (g_198 == (safe_lshift_func_uint16_t_u_s((~((safe_div_func_uint32_t_u_u(g_383[5][0], (safe_lshift_func_uint16_t_u_u(g_383[5][0], 9)))) != g_81[0])), 0)))), g_60), 0xAAE7L)))))))) > g_586.f0) >= 2L)), l_824));
                    }
                    else
                    {
                        const char l_967[9] = {1L, 0x4FL, 1L, 0x4FL, 1L, 0x4FL, 1L, 0x4FL, 1L};
                        int l_971 = 0xDFD8C413L;
                        int i;
                        if (l_960[5][5])
                            break;
                        if (l_925)
                            break;
                        g_81[0] = ((((safe_rshift_func_int16_t_s_u(g_137.f0, ((safe_mod_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(l_967[8], (func_32((g_475 = (l_832 = ((((l_970[2] = (func_32((safe_rshift_func_int16_t_s_u(l_960[7][3], 6)), g_586.f0) && (g_13 && l_913))) != g_586.f0) == (g_114[2] = (l_971 = 0x4FL))) >= 0x345233ADL))), l_901[1]) != l_817[0]))) | g_466[3]), l_891)) >= l_967[8]))) && 0xCAL) == g_106) < l_972);
                    }
                }
                g_81[0] = (safe_mod_func_uint32_t_u_u((l_817[2] >= 0L), g_383[0][2]));
                g_81[0] = g_930;
            }
            for (l_902.f0 = 0; (l_902.f0 <= 1); l_902.f0 += 1)
            {
                unsigned l_990 = 0xDF4076EBL;
                unsigned short l_1017 = 0xD4D2L;
                if (g_81[0])
                {
                    short l_977 = 0x19C9L;
                    int l_980 = (-7L);
                    g_81[1] = (l_980 = ((g_538 != (g_586.f1 = (safe_mul_func_uint16_t_u_u(2UL, l_977)))) == (safe_lshift_func_int16_t_s_u((g_466[3] = 0x78F2L), 11))));
                    l_906 = l_817[1];
                }
                else
                {
                    unsigned l_989 = 0x0AFBEC0BL;
                    int l_993 = 0x05D47D02L;
                    l_993 = ((safe_add_func_uint8_t_u_u((g_114[2] = (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(l_931, 0)), 0x12AAL))), ((g_60 = g_813[9][8][0].f0) < ((!(safe_rshift_func_uint16_t_u_u((l_990 = l_989), 5))) < ((g_81[0] != 0x59L) || (((safe_sub_func_uint16_t_u_u(0UL, l_891)) && 0xF660L) < g_290)))))) & 0xFF99L);
                }
                for (l_916 = 1; (l_916 >= 0); l_916 -= 1)
                {
                    char l_1012 = 6L;
                    l_14 = (safe_mod_func_int16_t_s_s(((0x12L > (safe_sub_func_int32_t_s_s(0L, l_14))) <= (safe_add_func_uint8_t_u_u((l_990 <= g_813[9][8][0].f0), (g_271 ^ (safe_sub_func_uint8_t_u_u(0x84L, (safe_div_func_int16_t_s_s((l_1004 = g_137.f0), 0x82DCL)))))))), 0x6E6EL));
                    for (l_912 = 0; (l_912 <= 1); l_912 += 1)
                    {
                        char l_1007 = 0x79L;
                        int i, j, k;
                        g_290 = (safe_sub_func_int32_t_s_s(2L, l_1007));
                        if (g_930)
                            break;
                        g_290 = func_132(g_271, g_813[(l_916 + 8)][(l_912 + 7)][l_916], ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_292, l_1012)), ((g_930 = g_586.f1) ^ l_902.f0))) < (safe_mod_func_int8_t_s_s(g_538, (((l_1017 = g_383[2][8]) >= (0x8FC72938L <= g_586.f1)) || 0xF03DDF8EL)))), l_812);
                    }
                }
                return g_101[1];
            }
        }
        else
        {
            unsigned short l_1038 = 0xCEE8L;
            l_943 = ((safe_sub_func_uint8_t_u_u(g_13, (safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(0UL, g_475)) > (((g_101[2] = (safe_rshift_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((~(safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(g_813[9][8][0].f0, (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(g_137.f0, (safe_add_func_int16_t_s_s((l_1038 && (((func_124(g_81[0], g_365[2][2], l_14, l_4, g_930) == l_805) <= g_714) && l_1038)), g_586.f1)))), 10)))) != 0x7AB7L), 2))), l_1039)) < g_586.f1) ^ l_812.f0), 14))) > (-1L)) ^ g_586.f1)), l_902.f0)))) ^ l_832);
            l_1040 = 0L;
            g_81[0] = (-2L);
        }
    }
    return g_114[2];
}







static short func_19(union U1 p_20)
{
    unsigned short l_587 = 0x7772L;
    int l_590 = 9L;
    int l_595[5][2] = {{0x4FC591ABL, 0xF9795EA5L}, {0x4FC591ABL, 0xF9795EA5L}, {0x4FC591ABL, 0xF9795EA5L}, {0x4FC591ABL, 0xF9795EA5L}, {0x4FC591ABL, 0xF9795EA5L}};
    union U0 l_596 = {0x2FL};
    unsigned char l_599 = 0xF5L;
    const unsigned short l_614 = 2UL;
    int l_615[4][7] = {{8L, 0x9F2B86BAL, 0xA4022597L, 0xB6B5A0FAL, 0xB717424BL, 0x8F66AD6AL, 0xB717424BL}, {8L, 0x9F2B86BAL, 0xA4022597L, 0xB6B5A0FAL, 0xB717424BL, 0x8F66AD6AL, 0xB717424BL}, {8L, 0x9F2B86BAL, 0xA4022597L, 0xB6B5A0FAL, 0xB717424BL, 0x8F66AD6AL, 0xB717424BL}, {8L, 0x9F2B86BAL, 0xA4022597L, 0xB6B5A0FAL, 0xB717424BL, 0x8F66AD6AL, 0xB717424BL}};
    int l_616 = 0x6B0D0B31L;
    short l_617 = 0xC806L;
    unsigned char l_681 = 0x79L;
    unsigned l_736 = 4294967295UL;
    union U2 l_776 = {0UL};
    unsigned char l_802 = 9UL;
    int i, j;
    g_290 = (g_81[0] = (l_587 && p_20.f0));
    g_81[0] = (1L && (safe_rshift_func_uint16_t_u_s(func_24(((l_587 == (l_590 = (p_20.f1 = (g_60 ^ (g_290 = l_587))))) <= func_32((65535UL < (l_587 < l_587)), (safe_lshift_func_uint16_t_u_u(func_32((safe_add_func_int16_t_s_s((0xF46808EFL ^ (l_595[2][0] = g_538)), g_81[0])), l_587), 5)))), l_587, l_596), 8)));
    if (((safe_add_func_uint8_t_u_u(((g_114[2] = (((p_20.f1 = l_599) == (((safe_sub_func_int32_t_s_s(l_590, (safe_sub_func_uint8_t_u_u(l_587, g_381[0])))) < func_68((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_595[2][0], 5)), ((l_595[2][0] && (safe_mod_func_uint32_t_u_u(((4294967289UL < func_124((safe_mul_func_uint8_t_u_u(l_595[0][0], ((g_114[2] = (safe_add_func_uint32_t_u_u((l_616 = (l_615[3][6] = (g_475 | l_614))), 0xAFAA25D0L))) | l_617))), g_383[6][6], g_586.f0, l_617, g_383[6][3])) > g_137.f0), 4294967295UL))) > 0xD28AL))), l_596.f0, l_596.f1, g_475)) <= l_595[2][0])) & l_614)) >= g_13), g_271)) > g_466[3]))
    {
        for (g_292 = 9; (g_292 >= (-30)); g_292--)
        {
            int l_620 = 0L;
            l_620 = g_198;
        }
    }
    else
    {
        short l_623 = (-6L);
        int l_626 = 0xCFCF608DL;
        int l_668 = 1L;
        char l_717[3];
        int i;
        for (i = 0; i < 3; i++)
            l_717[i] = 0x64L;
        if (l_617)
        {
            for (g_475 = 0; (g_475 < 17); ++g_475)
            {
                g_81[0] = 0L;
                if (g_586.f0)
                    continue;
            }
        }
        else
        {
            int l_629 = 1L;
            int l_630[1];
            int l_635[5];
            unsigned short l_777 = 65526UL;
            unsigned l_793[6][4] = {{0UL, 0x36C66A89L, 18446744073709551613UL, 0x527A4A0AL}, {0UL, 0x36C66A89L, 18446744073709551613UL, 0x527A4A0AL}, {0UL, 0x36C66A89L, 18446744073709551613UL, 0x527A4A0AL}, {0UL, 0x36C66A89L, 18446744073709551613UL, 0x527A4A0AL}, {0UL, 0x36C66A89L, 18446744073709551613UL, 0x527A4A0AL}, {0UL, 0x36C66A89L, 18446744073709551613UL, 0x527A4A0AL}};
            unsigned char l_801 = 1UL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_630[i] = 0x40D733BCL;
            for (i = 0; i < 5; i++)
                l_635[i] = 1L;
            l_623 = g_466[3];
            l_635[3] = (safe_div_func_int16_t_s_s(((p_20.f1 | (l_626 = p_20.f1)) != (+(g_538 & (safe_mul_func_uint8_t_u_u((l_629 = g_13), (l_630[0] || ((g_466[4] & l_630[0]) <= (safe_rshift_func_uint16_t_u_u(g_383[5][0], (safe_div_func_int16_t_s_s(0L, l_623))))))))))), 65534UL));
            l_626 = (g_114[2] ^ (((safe_lshift_func_uint8_t_u_s((func_32(((g_81[1] != (func_32(p_20.f0, (g_381[0] = 0x38AE137FL)) && (safe_sub_func_int16_t_s_s((l_629 & g_81[0]), l_623)))) && (safe_add_func_uint16_t_u_u((g_137.f0 = p_20.f0), 9UL))), p_20.f0) != g_60), g_365[2][2])) > 0UL) || l_626));
            if ((((safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_626, (safe_add_func_uint32_t_u_u((((((l_595[2][0] = g_466[7]) == p_20.f1) == (safe_lshift_func_uint8_t_u_u(255UL, (!p_20.f1)))) && ((safe_lshift_func_int16_t_s_u(((0x90L ^ (func_124((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s(g_101[2], (safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(g_586.f0, ((safe_div_func_int8_t_s_s((4294967286UL | p_20.f1), 0xC2L)) != g_293))), g_101[2])))), 13)), g_381[0], p_20.f1, p_20.f0, l_668) ^ 246UL)) || l_626), l_635[3])) < p_20.f1)) < l_617), l_614)))), 65535UL)), (-1L))), p_20.f1)) && g_383[5][0]) & p_20.f0))
            {
                int l_674[7][5][7] = {{{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}, {{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}, {{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}, {{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}, {{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}, {{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}, {{0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}, {0xC3ED935AL, (-1L), 6L, 0x51BCCC5FL, 0x0212BAD9L, 0x0212BAD9L, 0x51BCCC5FL}}};
                int l_713 = (-5L);
                int i, j, k;
                for (p_20.f1 = 0; (p_20.f1 >= 0); p_20.f1 -= 1)
                {
                    int l_669 = (-1L);
                    int i;
                    if (g_101[(p_20.f1 + 2)])
                        break;
                    if ((l_635[2] > 0UL))
                    {
                        unsigned l_675 = 0x0C016AFCL;
                        union U2 l_676 = {0xC0E1L};
                        l_669 = g_81[2];
                        l_629 = ((0L & g_466[3]) & ((l_595[0][0] = 0xCB64D0C4L) == ((safe_add_func_uint16_t_u_u((g_137.f0 = (safe_rshift_func_int8_t_s_s(l_669, (0x0CA4C563L | func_132((l_674[3][4][0] | g_271), g_137, ((l_675 = l_674[3][4][0]) & g_13), l_676))))), g_586.f0)) >= l_668)));
                        g_81[0] = ((l_615[0][4] = func_108((g_29[1] = func_111(l_676.f0)), (l_595[2][0] = (((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((g_365[4][0] != (l_681 = p_20.f1)), (safe_sub_func_uint32_t_u_u((0UL >= ((safe_sub_func_int16_t_s_s((l_623 && l_623), (0xBAL && 0L))) || 0x57227E63L)), 4UL)))), 0x0209L)) != 0x74L) < p_20.f1)))) <= l_635[3]);
                    }
                    else
                    {
                        return p_20.f1;
                    }
                    if (l_674[3][4][1])
                    {
                        int l_690[7][7] = {{1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}, {1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}, {1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}, {1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}, {1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}, {1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}, {1L, 3L, 0L, 0x1AE3A29EL, 0xFCB66095L, 0x7C0C1716L, 0x5B5B7E1BL}};
                        const int l_697 = 0L;
                        int i, j;
                        g_81[0] = (safe_sub_func_uint8_t_u_u(g_106, (safe_lshift_func_uint16_t_u_s(l_690[0][0], l_669))));
                        g_81[0] = (g_290 = (g_381[0] > (l_630[0] ^ (safe_mod_func_int32_t_s_s(((+(p_20.f1 != (safe_add_func_int32_t_s_s(l_595[2][0], l_690[2][4])))) > (safe_lshift_func_int8_t_s_u(l_697, func_32((p_20.f0 && (func_68(p_20.f1, (safe_add_func_uint16_t_u_u(0xD864L, l_669)), l_635[2], g_475) || g_466[3])), g_101[0])))), g_137.f0)))));
                    }
                    else
                    {
                        unsigned char l_700 = 255UL;
                        l_669 = (g_81[2] = (g_290 = l_700));
                        l_635[4] = l_669;
                    }
                    g_81[0] = p_20.f0;
                    for (g_106 = 1; (g_106 >= 0); g_106 -= 1)
                    {
                        int i, j;
                        l_626 = ((safe_div_func_int8_t_s_s((0UL & 0x383002CFL), ((g_714 = (g_290 = (g_81[2] = (l_595[(g_106 + 3)][(p_20.f1 + 1)] = (func_68(l_595[(g_106 + 1)][g_106], (l_595[(g_106 + 1)][g_106] | (l_669 = (safe_add_func_int8_t_s_s((-1L), func_32((safe_div_func_int8_t_s_s(g_466[5], g_114[7])), (safe_mul_func_uint8_t_u_u((l_713 = (g_475 = (safe_lshift_func_uint16_t_u_u(p_20.f0, (safe_rshift_func_int16_t_s_u(p_20.f0, p_20.f1)))))), g_466[3]))))))), l_635[2], p_20.f0) > l_595[(g_106 + 1)][g_106]))))) & p_20.f0))) || 0UL);
                        if (l_674[3][4][0])
                            break;
                        g_81[0] = (safe_mul_func_int8_t_s_s((g_60 = (p_20.f0 < (((g_290 = p_20.f1) || g_60) != p_20.f1))), (g_114[2] == l_669)));
                    }
                }
                for (l_599 = 0; (l_599 <= 4); l_599 += 1)
                {
                    for (g_538 = 0; (g_538 <= 4); g_538 += 1)
                    {
                        l_615[0][6] = 0L;
                        g_81[2] = 1L;
                        return p_20.f1;
                    }
                    for (l_681 = 0; (l_681 <= 4); l_681 += 1)
                    {
                        l_595[3][0] = (l_717[1] && (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(0x009EL, g_81[0])), g_586.f0)));
                    }
                }
            }
            else
            {
                unsigned l_746 = 0xFC3F0E1AL;
                int l_747 = (-1L);
                const int l_800[3] = {(-8L), (-8L), (-8L)};
                int i;
                for (l_599 = 0; (l_599 <= 2); l_599 += 1)
                {
                    g_81[0] = (safe_lshift_func_int8_t_s_u(g_292, 7));
                    return g_466[5];
                }
                if ((l_635[3] != g_81[0]))
                {
                    int l_756[1][10][10] = {{{0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}, {0x6D2C9AE5L, 0x5D4AC49CL, (-1L), 8L, 9L, 0xF48E6814L, 0x9759473FL, 0x02D8DB45L, (-1L), 0x02D8DB45L}}};
                    int l_768 = 1L;
                    int l_769 = 1L;
                    int i, j, k;
                    g_290 = 0x2CD4DCACL;
                    if ((l_635[4] = (l_626 = (g_81[0] = (safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u((g_137.f0 = (safe_lshift_func_int16_t_s_s(func_68(l_630[0], (safe_mod_func_uint16_t_u_u(g_293, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((0x2E0CL ^ g_475) != (l_736 = 0x1D55B0C6L)), (((safe_lshift_func_int8_t_s_u(p_20.f0, 1)) & (safe_unary_minus_func_int16_t_s((((-8L) >= (safe_add_func_int16_t_s_s((((((l_746 = (safe_div_func_uint16_t_u_u(9UL, (safe_add_func_int16_t_s_s(p_20.f1, g_137.f0))))) & l_747) >= g_106) | l_747) != p_20.f1), p_20.f1))) != p_20.f0)))) && p_20.f0))), p_20.f1)))), l_747, g_81[1]), l_626))), 0xF441L)), l_630[0]))))))
                    {
                        l_590 = 3L;
                        g_290 = (safe_add_func_uint32_t_u_u(((l_630[0] > (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_586.f1, (l_756[0][9][7] = (g_293 = (safe_div_func_uint16_t_u_u(p_20.f1, l_629)))))), (l_717[2] >= p_20.f1)))) | (((safe_sub_func_uint8_t_u_u(l_746, (safe_mod_func_uint8_t_u_u(0x0EL, (l_616 = l_717[1]))))) > g_586.f1) > p_20.f0)), l_746));
                    }
                    else
                    {
                        unsigned l_767 = 0xE8F83930L;
                        int l_772 = 0xF69EDDB6L;
                        int l_775[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_775[i] = 0x0E54C4BEL;
                        l_626 = func_132((l_769 = (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u(p_20.f1, 2)), 11)) || (!g_381[2])) != (l_768 = l_767))), g_137, ((l_747 = (l_775[0] = (((safe_add_func_uint16_t_u_u((l_615[3][6] = l_772), p_20.f0)) != (l_767 != (g_290 = func_124(g_106, (safe_div_func_int32_t_s_s(p_20.f0, 1UL)), p_20.f1, l_756[0][2][6], l_596.f0)))) <= g_292))) & 0xB4L), l_776);
                        l_777 = p_20.f1;
                        g_81[0] = p_20.f0;
                        l_635[3] = p_20.f0;
                    }
                }
                else
                {
                    l_595[2][0] = p_20.f1;
                }
                for (l_596.f1 = 8; (l_596.f1 > 3); l_596.f1 = safe_sub_func_uint32_t_u_u(l_596.f1, 5))
                {
                    char l_780[8][1][4] = {{{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}, {{1L, (-3L), 0x78L, 0L}}};
                    int l_781 = 1L;
                    int i, j, k;
                    l_780[3][0][3] = ((g_475 <= p_20.f1) != (l_616 = 0xAACFL));
                    l_781 = (l_780[3][0][3] <= func_132(p_20.f1, g_137, p_20.f1, g_137));
                    for (g_198 = (-18); (g_198 != 46); g_198 = safe_add_func_uint16_t_u_u(g_198, 4))
                    {
                        unsigned char l_786 = 255UL;
                        g_81[1] = (safe_mod_func_int32_t_s_s(p_20.f0, (g_290 = (l_626 = l_786))));
                        g_290 = l_747;
                    }
                    g_290 = (((((safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((l_793[0][0] | (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(p_20.f0, (g_13 == 0UL))) <= func_124(p_20.f1, (l_626 >= 7UL), g_475, l_800[2], g_466[3])), l_801)) > 0x44L) != 0x15L) && 0UL), 7))) ^ 0x0921E4BEL) || g_290), p_20.f0)), l_746)), 4294967291UL)) >= l_595[2][0]) | g_101[2]) < (-5L)) == l_717[1]);
                }
            }
        }
        return p_20.f1;
    }
    return l_802;
}







static union U1 func_21(unsigned p_22, int p_23)
{
    union U0 l_28 = {0xC8L};
    int l_432 = 0L;
    int l_437 = (-7L);
    unsigned short l_444[9] = {1UL, 1UL, 0x9BCDL, 1UL, 1UL, 0x9BCDL, 1UL, 1UL, 0x9BCDL};
    int l_457 = (-5L);
    char l_472 = (-4L);
    union U2 l_476 = {0x7177L};
    const union U0 l_488 = {0x90L};
    int l_499[10];
    unsigned char l_511[6][2] = {{0xC4L, 255UL}, {0xC4L, 255UL}, {0xC4L, 255UL}, {0xC4L, 255UL}, {0xC4L, 255UL}, {0xC4L, 255UL}};
    unsigned short l_529 = 65535UL;
    int l_547[8][3] = {{0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}, {0x2808B4F0L, (-1L), 0x2808B4F0L}};
    int i, j;
    for (i = 0; i < 10; i++)
        l_499[i] = 0x80474592L;
    if (((l_432 = func_24(g_13, p_23, l_28)) & (func_32(((safe_mod_func_int16_t_s_s((((l_437 = (safe_lshift_func_int16_t_s_u((g_13 & p_23), 1))) < (safe_mod_func_uint16_t_u_u(func_32(((safe_lshift_func_uint16_t_u_s((l_28.f1 & (func_32(((l_28.f1 > (safe_unary_minus_func_int8_t_s((l_28.f1 ^ g_13)))) ^ 0x91L), p_22) >= p_23)), 1)) == p_23), l_28.f1), 65526UL))) ^ g_13), 0x9F4BL)) < 0xB6L), g_13) == g_13)))
    {
        unsigned l_443[9] = {0x6F60658FL, 0x6F60658FL, 0xFA77FB34L, 0x6F60658FL, 0x6F60658FL, 0xFA77FB34L, 0x6F60658FL, 0x6F60658FL, 0xFA77FB34L};
        int l_467 = (-4L);
        unsigned l_477 = 2UL;
        union U2 l_478 = {0x0C20L};
        int i;
        l_444[7] = func_24(l_28.f1, (p_23 | l_443[1]), l_28);
        l_467 = (g_81[1] = ((-1L) >= ((safe_mod_func_uint32_t_u_u(p_22, (((safe_lshift_func_uint8_t_u_s(l_437, 1)) && (((safe_mul_func_int8_t_s_s(((g_114[2] = func_124((safe_lshift_func_uint8_t_u_u(((l_432 = (safe_div_func_int32_t_s_s((l_437 = func_24((g_293 = 0xA018L), ((safe_add_func_uint32_t_u_u((l_457 = p_22), ((safe_div_func_int32_t_s_s(0x774CF1EFL, (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(((g_114[2] = p_23) & (safe_lshift_func_uint8_t_u_u(p_23, 6))), g_383[0][7])), g_81[0])))) | g_81[0]))) <= l_443[4]), l_28)), g_13))) || 0L), l_444[3])), p_22, p_22, g_13, g_13)) <= p_22), g_466[3])) & g_466[3]) == g_13)) & p_23))) != l_28.f0)));
        for (g_293 = 0; (g_293 <= 8); g_293 += 1)
        {
            int l_479 = 1L;
            int i;
            l_479 = func_132(((l_444[g_293] <= (-1L)) | (func_124(l_444[g_293], l_444[g_293], l_444[g_293], ((l_467 = (l_437 ^ ((((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_22 < l_472), (safe_sub_func_uint16_t_u_u(p_22, l_444[2])))), l_467)) || 1L) ^ g_271) > g_475))) <= g_466[3]), p_23) < p_23)), l_476, l_477, l_478);
            for (p_22 = 0; (p_22 <= 8); p_22 += 1)
            {
                int i;
                g_290 = (safe_mul_func_int16_t_s_s(l_444[g_293], 0x7ABBL));
                for (g_475 = 0; (g_475 <= 8); g_475 += 1)
                {
                    int l_483[5][5][1] = {{{0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}}, {{0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}}, {{0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}}, {{0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}}, {{0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}, {0x9684B9FDL}}};
                    int i, j, k;
                    for (l_457 = 3; (l_457 <= 8); l_457 += 1)
                    {
                        unsigned l_482 = 0xA3651EB7L;
                        l_483[4][1][0] = l_482;
                    }
                    if (g_365[2][2])
                        break;
                }
                if (g_198)
                    continue;
                for (g_137.f0 = 0; (g_137.f0 <= 8); g_137.f0 += 1)
                {
                    g_81[1] = g_381[0];
                    if (p_23)
                        continue;
                }
            }
            if (g_60)
                break;
        }
    }
    else
    {
        short l_500 = 0xB0A9L;
        int l_501 = 1L;
        union U2 l_510[6] = {{4UL}, {4UL}, {4UL}, {4UL}, {4UL}, {4UL}};
        const char l_548 = 0x1CL;
        unsigned short l_585 = 65528UL;
        int i;
        l_501 = (((safe_rshift_func_int16_t_s_s(((func_108(l_488, l_444[7]) == 0x9F13L) != ((safe_div_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((~(safe_mul_func_int8_t_s_s((l_437 = g_365[2][2]), ((safe_rshift_func_uint16_t_u_s((g_114[2] & ((l_499[8] = p_23) >= 0x99D5FE64L)), 5)) && 0x1981L)))), l_500)), l_472)) < 0x8013L), l_500)) == g_365[2][2])), p_23)) & 0x373C3403L) && l_500);
        l_499[0] = (func_108((g_29[0] = g_29[1]), (safe_rshift_func_int16_t_s_u(((safe_lshift_func_int8_t_s_s((l_499[2] = g_60), (safe_sub_func_uint8_t_u_u(p_23, ((safe_add_func_uint8_t_u_u(func_132(p_23, l_510[3], (l_437 = ((6UL >= l_457) >= l_511[3][0])), l_476), g_137.f0)) || g_293))))) < g_381[0]), 14))) || l_501);
        for (g_293 = 0; (g_293 <= 5); g_293 += 1)
        {
            int l_533 = (-4L);
            int l_549 = 0xD6F3C8C4L;
            int l_550 = (-10L);
            unsigned short l_577 = 5UL;
            int i;
            l_499[8] = g_137.f0;
            if ((safe_mul_func_int16_t_s_s(func_124(((safe_add_func_int16_t_s_s((func_32(((0xAC937EE4L >= (safe_rshift_func_int8_t_s_u((l_501 = (-7L)), (safe_unary_minus_func_uint8_t_u((l_28.f0 < (l_510[3].f0 <= (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((g_271 < p_23), ((g_292 = (safe_mod_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((l_529 = g_106) ^ p_22), ((safe_sub_func_int32_t_s_s((func_132(((((safe_unary_minus_func_int8_t_s((l_499[8] = (-1L)))) > g_466[3]) & p_22) <= g_365[9][2]), l_510[g_293], l_510[g_293].f0, g_137) > l_510[g_293].f0), l_488.f1)) >= (-8L)))) >= 0x4DL), 0x67F3A45DL))) && g_292))), p_23))))))))) ^ 0x680911B0L), l_533) <= g_290), 0xAF1CL)) && l_533), p_22, g_466[8], p_23, p_22), l_533)))
            {
                short l_551 = 0x64D1L;
                l_550 = (safe_rshift_func_int8_t_s_s(1L, ((~(safe_sub_func_int8_t_s_s(g_538, ((l_549 = (g_466[3] = (1L & (safe_div_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_510[g_293].f0, (func_124(p_22, l_547[7][0], p_22, l_548, (g_365[3][2] = g_292)) > l_501))), g_101[1])), p_23)), l_547[7][0]))))) >= p_23)))) && g_466[3])));
                l_499[8] = g_466[5];
                for (g_106 = 1; (g_106 <= 5); g_106 += 1)
                {
                    unsigned char l_552 = 0x1AL;
                    g_290 = p_22;
                    for (l_529 = 1; (l_529 <= 5); l_529 += 1)
                    {
                        unsigned char l_553 = 0xFCL;
                        l_552 = func_124(l_551, g_292, g_466[3], p_23, (g_101[1] >= (l_548 <= (l_432 = p_22))));
                        g_81[2] = g_114[2];
                        g_290 = l_553;
                    }
                }
            }
            else
            {
                const int l_566 = 0x1C10962EL;
                int l_567 = 0x48DA7C68L;
                g_81[0] = p_22;
                l_567 = ((safe_lshift_func_int16_t_s_s((((g_101[2] < l_511[5][0]) | (g_106 = (g_466[3] = (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((safe_add_func_int8_t_s_s((l_510[g_293].f0 < ((((((-8L) ^ p_23) && (((safe_mul_func_int16_t_s_s(g_114[2], l_566)) > l_472) || (g_292 = func_68(func_124((p_23 || l_511[0][1]), p_22, l_550, g_60, l_500), p_22, g_538, p_23)))) >= g_271) > p_23) <= l_547[7][0])), g_137.f0)) <= 0x4E03L) & 0x46L), g_114[2])), l_549))))) & 0x6CL), 9)) || p_22);
            }
            for (l_501 = 4; (l_501 >= 0); l_501 -= 1)
            {
                l_499[7] = ((safe_sub_func_int16_t_s_s(0xD752L, (((safe_sub_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u((~(safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(l_577, 5)) == 0x52CEL), p_23))))), (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_22, p_22)), 0xA0F5L)))) <= (~(g_137.f0 = (safe_mod_func_uint32_t_u_u((((safe_unary_minus_func_int8_t_s((l_549 = p_22))) ^ (func_32(l_548, l_585) || g_137.f0)) == g_383[5][0]), l_533))))) > g_101[2]))) > 0xCBBF3798L);
                if (p_23)
                    break;
            }
        }
    }
    return g_586;
}







static char func_24(unsigned short p_25, unsigned char p_26, union U0 p_27)
{
    short l_35 = 0xD64DL;
    int l_57 = 0L;
    unsigned l_63 = 0x8F381C4EL;
    const char l_351 = 0L;
    short l_354 = (-1L);
    unsigned l_364 = 18446744073709551615UL;
    const unsigned l_416[3][9][8] = {{{1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}}, {{1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}}, {{1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}, {1UL, 0UL, 0xC56D41D6L, 4294967295UL, 0xC83A19E9L, 0x6A0469A3L, 0xC6E82A49L, 0x3FC13C45L}}};
    int i, j, k;
    for (p_27.f1 = 0; (p_27.f1 <= 3); p_27.f1 += 1)
    {
        unsigned l_56 = 3UL;
        unsigned short l_102 = 0x5510L;
        int l_105 = 8L;
        unsigned l_344 = 18446744073709551609UL;
        union U2 l_353 = {1UL};
        short l_419[4][1] = {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}};
        char l_421[5] = {0x18L, 2L, 0x18L, 2L, 0x18L};
        int i, j;
        if (p_27.f0)
            break;
        for (p_25 = 0; (p_25 <= 3); p_25 += 1)
        {
            int l_55 = 0x80D6736FL;
            short l_107 = 0x5B04L;
            unsigned l_335 = 1UL;
            char l_415 = 0x7BL;
            union U2 l_418 = {0x5337L};
            l_55 = (safe_rshift_func_uint8_t_u_u((247UL | func_32(l_35, g_13)), 7));
            l_57 = (~l_56);
            if (((l_57 = (g_60 = (l_55 = (safe_rshift_func_uint16_t_u_s(p_26, l_57))))) >= p_26))
            {
                const short l_82 = (-1L);
                int l_98 = 0L;
                l_98 = (safe_mod_func_uint16_t_u_u((l_63 = g_13), (l_55 = (safe_mul_func_int16_t_s_s(((safe_div_func_int16_t_s_s((p_25 <= 1L), func_68(l_57, ((safe_add_func_uint16_t_u_u((func_32((p_26 = (0x29C8L && p_25)), (((safe_mod_func_int16_t_s_s((0xEA91L ^ (0xBD0CL <= (safe_mul_func_uint16_t_u_u((g_81[0] = (safe_lshift_func_int16_t_s_u(p_27.f0, 15))), g_13)))), 0x129AL)) != p_27.f1) ^ l_82)) == 0x4113L), g_60)) > g_60), g_60, g_60))) < l_82), p_25)))));
                if (p_27.f1)
                {
                    char l_113 = 1L;
                    g_81[0] = (safe_mod_func_uint16_t_u_u(p_27.f0, l_63));
                    l_107 = (g_81[0] = func_68(p_27.f0, (g_101[2] = g_13), l_35, (l_102 >= (safe_mul_func_uint16_t_u_u(65535UL, ((l_105 = 1L) && (g_106 = p_25)))))));
                    l_55 = (((func_108(func_111(func_32((g_114[2] = func_32(l_82, (l_57 = l_113))), l_102)), g_13) == 1L) == g_13) >= l_107);
                    if ((safe_sub_func_int16_t_s_s(p_27.f0, g_137.f0)))
                    {
                        int l_327[4] = {4L, 0xD6D6BBC8L, 4L, 0xD6D6BBC8L};
                        int i;
                        g_81[1] = func_124((safe_rshift_func_uint8_t_u_u((g_114[2] = ((safe_add_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(1UL, l_113)), (safe_lshift_func_int8_t_s_s(g_81[0], 6)))), (g_60 = ((safe_rshift_func_int16_t_s_u(g_292, l_82)) > p_27.f0)))) && l_102)), l_327[2])), (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_32(g_106, p_27.f1), p_26)), 3)), l_55, p_26, g_81[0]);
                    }
                    else
                    {
                        int l_334[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_334[i] = (-1L);
                        g_290 = g_271;
                        g_290 = (l_344 = ((l_335 = (g_106 = (l_98 = (safe_mod_func_int8_t_s_s((~l_334[1]), g_101[0]))))) < (safe_rshift_func_uint8_t_u_s(0xA4L, (((func_32(g_137.f0, (safe_div_func_int32_t_s_s(((g_198 = (+(((safe_lshift_func_uint8_t_u_u(p_25, 2)) <= l_82) & (((g_114[1] | (((0L != (safe_mul_func_uint8_t_u_u((g_81[2] != l_334[1]), p_27.f1))) <= l_113) & g_293)) & l_102) & g_290)))) | g_293), p_26))) <= l_82) >= 0x300037EEL) >= l_107)))));
                        l_98 = (safe_rshift_func_int16_t_s_u(((((p_25 != p_26) && (safe_add_func_uint16_t_u_u(l_113, l_57))) >= 0UL) <= ((~l_113) ^ (4L | g_198))), 4));
                        if (l_351)
                            continue;
                    }
                }
                else
                {
                    int l_352 = (-1L);
                    for (g_290 = 0; (g_290 <= 3); g_290 += 1)
                    {
                        char l_355 = 0L;
                        unsigned l_362 = 0xFE90F022L;
                        char l_363 = (-3L);
                        g_81[2] = (l_55 = (l_355 = func_124(l_63, p_26, p_26, g_292, (l_82 | func_32((g_114[2] = func_132(l_352, g_137, p_26, l_353)), l_354)))));
                        g_81[0] = g_290;
                        g_81[2] = (l_35 > ((((safe_rshift_func_int8_t_s_s((((l_352 = (func_124(l_351, (l_82 ^ (((l_55 = (safe_add_func_uint16_t_u_u(((65535UL | (safe_mul_func_uint16_t_u_u(l_352, 0x2C3CL))) ^ (l_362 != (func_68(g_137.f0, l_363, g_101[2], g_293) != 0x1CL))), l_363))) == 0UL) | p_26)), l_82, l_352, g_290) < 1L)) ^ g_271) != p_25), p_27.f0)) < 0x6E11L) & p_27.f1) & l_364));
                        g_365[2][2] = l_335;
                    }
                }
            }
            else
            {
                short l_374 = 0xCD1EL;
                int l_382 = (-4L);
                union U2 l_410 = {0x9247L};
                int l_417[5] = {0x8D72C96BL, 0x6A5DE530L, 0x8D72C96BL, 0x6A5DE530L, 0x8D72C96BL};
                int i;
                l_105 = (safe_mul_func_int16_t_s_s((func_108(func_111(g_292), (l_107 ^ (g_383[5][0] = (g_290 = (safe_sub_func_uint16_t_u_u((((p_27.f0 | (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((l_382 = ((p_27.f1 <= l_374) > (g_381[0] = (((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((l_57 = ((safe_mul_func_uint16_t_u_u(func_32(p_27.f0, g_290), p_27.f0)) > l_353.f0)) ^ p_25), p_27.f0)), g_271)) ^ l_102) || 0xF675L)))), p_26)), p_26))) < l_374) & 1UL), 0L)))))) <= g_13), g_365[2][2]));
                if ((l_382 = 0xD95623D9L))
                {
                    for (g_137.f0 = 0; (g_137.f0 <= 2); g_137.f0 += 1)
                    {
                        int i, j;
                        l_55 = (safe_lshift_func_int8_t_s_s((g_365[(p_25 + 6)][g_137.f0] && (g_365[(g_137.f0 + 4)][g_137.f0] > ((safe_sub_func_uint16_t_u_u(g_383[5][0], (-7L))) | (safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((g_81[g_137.f0] = (safe_add_func_uint16_t_u_u(g_290, p_27.f0))), (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(g_365[(p_25 + 6)][g_137.f0], 5)), l_57)))), 6))))), 1));
                        g_290 = 0xB401F739L;
                        g_81[0] = ((g_81[0] != (1L || g_271)) != g_114[1]);
                    }
                    l_105 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((g_114[2] = p_27.f1), p_27.f0)), 0)) & ((safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((-9L), (func_68(g_365[5][2], (p_26 = (p_27.f1 != (g_293 = p_25))), p_27.f0, (g_290 = g_381[0])) & l_374))) <= p_25), 2UL)) | (-2L)));
                    if (l_353.f0)
                        continue;
                }
                else
                {
                    int l_420 = 0xA2ABE865L;
                    l_421[3] = ((safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((func_132(l_35, l_410, ((safe_mod_func_uint8_t_u_u(p_27.f1, (safe_mod_func_int8_t_s_s(l_55, g_106)))) == (~(((p_25 != (((((-8L) < ((0x4CL & func_124(g_383[5][0], g_365[2][2], l_415, l_416[1][6][5], g_101[0])) < 8UL)) <= 0L) != p_27.f0) | 1UL)) < l_417[4]) | p_25))), l_418) ^ l_419[1][0]), p_26)) > p_25), 65527UL)) | l_420);
                    l_420 = (!g_13);
                }
                l_57 = (l_382 = (safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(func_108(g_29[p_27.f1], p_27.f1), ((l_105 ^ ((g_198 > (!g_365[2][2])) | ((p_26 > g_383[4][4]) < (((-1L) && (-1L)) > g_29[p_27.f1].f0)))) || g_13))), g_29[p_27.f1].f0)), 4)));
            }
        }
    }
    l_57 = 0x5CF4F576L;
    return p_27.f1;
}







static char func_32(unsigned char p_33, unsigned p_34)
{
    unsigned l_42 = 0xB71808ADL;
    int l_51 = (-6L);
    int l_52 = 0xDAD24015L;
    int l_53 = 4L;
    int l_54 = (-1L);
    l_54 = ((safe_lshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((+((safe_add_func_int8_t_s_s(p_34, (l_42 <= ((g_13 >= (safe_mod_func_int32_t_s_s(0xDA314325L, (l_53 = (safe_sub_func_int16_t_s_s(0L, ((l_52 = (((safe_sub_func_int8_t_s_s(0xACL, l_42)) | (p_34 && (safe_rshift_func_uint16_t_u_s((l_51 = g_13), p_33)))) <= 6UL)) < p_34))))))) == g_13)))) < g_13)), 1)) && l_42) && l_53), l_42)) & l_42);
    return g_13;
}







static short func_68(int p_69, unsigned char p_70, unsigned p_71, int p_72)
{
    unsigned short l_89 = 0x9332L;
    for (p_69 = 0; (p_69 < (-24)); --p_69)
    {
        char l_96[4] = {(-1L), 1L, (-1L), 1L};
        int l_97 = 0x8A2E7C99L;
        int i;
        for (p_71 = 0; (p_71 <= 3); p_71 = safe_add_func_int8_t_s_s(p_71, 4))
        {
            if (p_72)
                break;
        }
        l_89 = (safe_sub_func_uint32_t_u_u(p_71, g_81[0]));
        for (p_72 = 0; (p_72 == (-13)); p_72 = safe_sub_func_uint16_t_u_u(p_72, 3))
        {
            l_97 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(l_96[2], 5)), 2)) || 0xFE8EB263L);
            l_97 = l_97;
        }
    }
    return g_60;
}







static const short func_108(const union U0 p_109, int p_110)
{
    const short l_221 = 0xE82BL;
    int l_234 = (-10L);
    short l_283 = (-1L);
    if ((p_110 = ((~l_221) && ((l_221 & (safe_lshift_func_int16_t_s_u(func_68((safe_mul_func_int8_t_s_s(p_109.f0, g_60)), ((safe_lshift_func_uint16_t_u_u(65528UL, 6)) < l_221), ((g_101[2] = g_13) < l_221), (safe_sub_func_int32_t_s_s(g_60, g_60))), 15))) <= p_109.f0))))
    {
        unsigned l_235 = 18446744073709551615UL;
        union U2 l_253[5][2][6] = {{{{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}, {{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}}, {{{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}, {{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}}, {{{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}, {{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}}, {{{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}, {{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}}, {{{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}, {{2UL}, {65535UL}, {65533UL}, {0UL}, {0xECEFL}, {0UL}}}};
        union U2 l_291[10][2] = {{{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}, {{65532UL}, {0xD11CL}}};
        char l_300 = 1L;
        int i, j, k;
        g_81[0] = l_221;
        for (g_60 = 0; (g_60 <= 11); ++g_60)
        {
            unsigned l_256 = 0x3BED8244L;
            union U2 l_272 = {0xE111L};
            int l_282 = 0x44AE2F33L;
            for (g_106 = 2; (g_106 >= 0); g_106 -= 1)
            {
                int l_255[8][8][4] = {{{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}, {{0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}, {0L, 0xC7BFAAA5L, 0L, (-1L)}}};
                int i, j, k;
                g_81[g_106] = g_81[g_106];
                for (p_110 = 0; (p_110 >= (-4)); p_110 = safe_sub_func_int32_t_s_s(p_110, 1))
                {
                    l_234 = p_109.f0;
                }
                g_81[0] = (-1L);
                if (l_235)
                {
                    for (l_234 = 15; (l_234 >= 14); l_234 = safe_sub_func_int8_t_s_s(l_234, 1))
                    {
                        return g_101[2];
                    }
                }
                else
                {
                    short l_248 = 0xBFE3L;
                    union U2 l_254 = {0x604CL};
                    l_248 = ((safe_lshift_func_uint8_t_u_s(p_109.f1, g_81[g_106])) & ((((((p_110 & func_68(p_109.f0, g_106, g_81[1], ((safe_div_func_int16_t_s_s((1L != ((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((func_68((safe_lshift_func_int16_t_s_s(0xDF53L, g_81[g_106])), g_106, g_101[2], p_109.f1) && g_81[g_106]) == g_114[2]), g_81[g_106])), 6)) >= (-8L))), 0xFA16L)) || p_109.f1))) || p_110) <= g_60) >= g_60) > 0x9BL) <= g_198));
                    p_110 = (safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(g_106, func_132(l_235, l_253[3][0][4], p_110, l_254))) || (((-1L) ^ (func_124((p_110 || (func_124(p_109.f1, g_101[2], g_198, g_81[0], g_198) != 8UL)), l_255[1][3][3], l_254.f0, l_255[2][7][1], p_109.f1) < p_110)) == p_109.f1)), 1UL));
                }
            }
            p_110 = (func_32(l_256, g_114[2]) <= (safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(func_132((l_234 = 0x86L), g_137, ((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(g_198, (g_271 = (safe_div_func_int32_t_s_s(((((safe_div_func_int32_t_s_s(l_221, func_32(l_221, g_101[2]))) ^ l_221) ^ (-1L)) ^ 0x0BBD1961L), l_253[3][0][4].f0))))), p_109.f1)) & (-3L)), l_272), 255UL)), g_198)) != g_114[2]), g_198)));
            for (g_137.f0 = 23; (g_137.f0 != 45); g_137.f0 = safe_add_func_int16_t_s_s(g_137.f0, 5))
            {
                unsigned l_281 = 18446744073709551612UL;
                int l_307[5];
                union U2 l_308 = {0xA048L};
                int l_309 = 0xE7674160L;
                int i;
                for (i = 0; i < 5; i++)
                    l_307[i] = (-8L);
                p_110 = (g_293 = ((g_292 = ((g_81[0] = (safe_mul_func_int8_t_s_s(func_132(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((l_282 = l_281), (0x91L >= l_283))), 6)) < (safe_sub_func_int8_t_s_s(func_132((l_272.f0 >= g_81[2]), (l_253[2][0][2] = g_137), (((g_290 = (8UL != (g_114[6] != ((safe_mod_func_uint16_t_u_u(l_234, l_221)) & 0x68L)))) <= 0x7DA2A81AL) <= p_109.f0), g_137), 0L))), l_291[2][1], g_198, l_291[2][1]), l_281))) || p_110)) & g_60));
                p_110 = (safe_add_func_uint32_t_u_u(((l_282 = (l_309 = ((safe_lshift_func_int8_t_s_u(func_32(func_132(l_281, l_253[4][1][5], (func_68(((safe_mul_func_int8_t_s_s(func_32(g_114[2], l_300), 250UL)) > ((safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((0x0E61L | 1UL), ((g_106 = (safe_mod_func_uint32_t_u_u((l_307[4] = func_124(l_281, l_235, g_106, p_109.f0, g_114[2])), p_109.f0))) && 0xAA6CL))), g_101[1])) | l_272.f0)), g_292, p_109.f0, g_198) != p_109.f0), l_308), l_282), 1)) >= p_109.f1))) | p_109.f0), 1UL));
                for (l_282 = 5; (l_282 == 5); ++l_282)
                {
                    g_290 = (g_81[2] = p_109.f1);
                }
                if (p_109.f1)
                    break;
            }
        }
        g_290 = g_290;
    }
    else
    {
        int l_312 = 0xE27A8F87L;
        g_290 = (l_312 = g_114[2]);
        l_312 = g_101[2];
    }
    return g_60;
}







static union U0 func_111(unsigned short p_112)
{
    unsigned l_184 = 0xD51B32B0L;
    union U2 l_216[9][9] = {{{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}, {{0xF44EL}, {0x2077L}, {1UL}, {0x973CL}, {65532UL}, {65527UL}, {65532UL}, {0x973CL}, {1UL}}};
    union U0 l_220 = {0x2EL};
    int i, j;
    for (p_112 = 0; (p_112 <= 43); p_112++)
    {
        unsigned l_138 = 18446744073709551615UL;
        int l_181 = 0x45E95938L;
        int l_182 = (-1L);
        union U2 l_190 = {1UL};
        if ((safe_lshift_func_int8_t_s_s(p_112, 3)))
        {
            unsigned char l_174 = 0x9DL;
            for (g_106 = 0; (g_106 >= 7); g_106 = safe_add_func_uint8_t_u_u(g_106, 2))
            {
                char l_166 = 0xF3L;
                g_81[2] = (~(safe_unary_minus_func_int32_t_s(((safe_add_func_uint16_t_u_u(0UL, g_114[2])) != func_124(g_106, g_114[2], g_114[2], (safe_mod_func_uint32_t_u_u((p_112 > (func_132(g_106, g_137, p_112, g_137) < l_138)), l_138)), p_112)))));
                if (g_137.f0)
                {
                    unsigned l_161[6][1][6] = {{{0x7AEC3750L, 8UL, 0x2790A7DFL, 8UL, 0x7AEC3750L, 8UL}}, {{0x7AEC3750L, 8UL, 0x2790A7DFL, 8UL, 0x7AEC3750L, 8UL}}, {{0x7AEC3750L, 8UL, 0x2790A7DFL, 8UL, 0x7AEC3750L, 8UL}}, {{0x7AEC3750L, 8UL, 0x2790A7DFL, 8UL, 0x7AEC3750L, 8UL}}, {{0x7AEC3750L, 8UL, 0x2790A7DFL, 8UL, 0x7AEC3750L, 8UL}}, {{0x7AEC3750L, 8UL, 0x2790A7DFL, 8UL, 0x7AEC3750L, 8UL}}};
                    const int l_162 = 0L;
                    int l_163 = 0xE5480BE8L;
                    int i, j, k;
                    l_163 = func_124(g_13, p_112, (l_161[2][0][2] = g_101[0]), l_162, l_138);
                }
                else
                {
                    union U2 l_183 = {65527UL};
                    g_81[0] = (g_114[2] ^ (((((safe_add_func_int16_t_s_s(((l_166 >= l_166) < ((safe_mod_func_uint8_t_u_u(p_112, (safe_unary_minus_func_uint8_t_u(((safe_mul_func_uint8_t_u_u(255UL, g_137.f0)) & ((func_132((safe_mul_func_uint8_t_u_u((+(l_174 = 0x55L)), (safe_add_func_uint32_t_u_u((l_182 = (l_181 = ((safe_add_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u((-1L), 6)) && p_112) > l_138), p_112)) || (-8L)))), 0xB512B1E0L)))), l_183, l_138, g_137) != l_183.f0) | 0xE1L)))))) ^ 0x24L)), 0xACDBL)) | g_137.f0) ^ l_184) < g_101[0]) != l_166));
                    g_81[0] = p_112;
                }
            }
        }
        else
        {
            union U2 l_189 = {0x9DC8L};
            unsigned l_191 = 7UL;
            int l_192 = 0x9EA80ACBL;
            union U0 l_193 = {255UL};
            l_182 = ((p_112 < 0x1579L) | (safe_mod_func_uint32_t_u_u((l_192 = (safe_add_func_int32_t_s_s(((g_101[1] = func_132(l_184, l_189, l_184, l_190)) || (((l_181 = l_184) < (-1L)) | l_182)), l_191))), p_112)));
            return l_193;
        }
        if (l_184)
        {
            char l_207 = 0x16L;
            int l_215[5][4][6] = {{{0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}}, {{0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}}, {{0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}}, {{0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}}, {{0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}, {0xA0F4BA2FL, 1L, 0x6B16CC9FL, 0xACE2569EL, 0xBED496A5L, 0L}}};
            int i, j, k;
            if (l_138)
            {
                int l_199 = 1L;
                g_81[2] = ((safe_mod_func_int8_t_s_s(((g_81[1] == (safe_mul_func_int8_t_s_s((func_68(p_112, (g_114[2] = g_114[2]), (g_137.f0 || (func_32(((g_198 = g_101[2]) & g_106), g_101[2]) ^ func_32(l_181, g_13))), p_112) ^ (-9L)), 3L))) != 0xE43B7CC5L), l_190.f0)) > l_199);
                return g_29[0];
            }
            else
            {
                unsigned char l_204 = 0x86L;
                int l_214 = 0xC7CA1AE9L;
                l_215[4][1][5] = func_32(p_112, ((safe_div_func_int32_t_s_s((((safe_div_func_int8_t_s_s(g_81[0], g_81[0])) & l_204) | (+((safe_lshift_func_int8_t_s_u((l_182 >= func_32(l_207, (l_214 = (((1L <= g_60) || (safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(g_13, g_106)), 6)) == p_112), l_181))) <= g_60)))), g_101[2])) == p_112))), g_106)) && l_182));
            }
            l_215[4][1][5] = 3L;
        }
        else
        {
            l_181 = func_132(l_181, l_216[3][0], p_112, l_190);
            l_182 = g_60;
            if (g_137.f0)
            {
                short l_219 = 0x36C6L;
                l_219 = (l_216[3][0].f0 != (safe_lshift_func_int16_t_s_u(g_137.f0, 0)));
            }
            else
            {
                if (g_81[2])
                    break;
                g_81[0] = (l_216[3][0].f0 ^ 0L);
            }
        }
        l_182 = (!l_138);
    }
    return l_220;
}







static char func_124(unsigned char p_125, int p_126, unsigned short p_127, const short p_128, int p_129)
{
    unsigned l_151[6][9] = {{0UL, 0UL, 0x71E1A547L, 0xC440229AL, 1UL, 4294967291UL, 4294967295UL, 0UL, 4294967292UL}, {0UL, 0UL, 0x71E1A547L, 0xC440229AL, 1UL, 4294967291UL, 4294967295UL, 0UL, 4294967292UL}, {0UL, 0UL, 0x71E1A547L, 0xC440229AL, 1UL, 4294967291UL, 4294967295UL, 0UL, 4294967292UL}, {0UL, 0UL, 0x71E1A547L, 0xC440229AL, 1UL, 4294967291UL, 4294967295UL, 0UL, 4294967292UL}, {0UL, 0UL, 0x71E1A547L, 0xC440229AL, 1UL, 4294967291UL, 4294967295UL, 0UL, 4294967292UL}, {0UL, 0UL, 0x71E1A547L, 0xC440229AL, 1UL, 4294967291UL, 4294967295UL, 0UL, 4294967292UL}};
    int l_152 = (-7L);
    int l_155 = 0x642F9FB1L;
    int l_160 = 0xA7D0CF22L;
    int i, j;
    l_160 = (g_60 > ((safe_mod_func_int32_t_s_s((l_152 = (safe_add_func_uint8_t_u_u((p_125 = (safe_rshift_func_int16_t_s_u((!(safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(p_127, ((0x063CD606L > ((g_114[3] | (l_151[5][0] = 0x87L)) | (l_152 & (safe_rshift_func_int16_t_s_s((l_155 = 0x71DCL), 13))))) != ((p_126 = g_114[2]) <= (safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(g_81[0], (-1L))), l_152)))))), p_129))), 13))), p_129))), l_160)) | l_160));
    g_81[2] = p_127;
    return p_125;
}







static unsigned short func_132(unsigned char p_133, union U2 p_134, unsigned short p_135, union U2 p_136)
{
    g_81[0] = 0x6D70DB99L;
    return p_135;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_29[i].f0, "g_29[i].f0", print_hash_value);
        transparent_crc(g_29[i].f1, "g_29[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_114[i], "g_114[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_137.f0, "g_137.f0", print_hash_value);
    transparent_crc(g_198, "g_198", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_365[i][j], "g_365[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_381[i], "g_381[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_383[i][j], "g_383[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_466[i], "g_466[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_475, "g_475", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_586.f0, "g_586.f0", print_hash_value);
    transparent_crc(g_586.f1, "g_586.f1", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_813[i][j][k].f0, "g_813[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_930, "g_930", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
