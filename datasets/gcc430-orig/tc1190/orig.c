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



static const unsigned g_6 = 0x905D09EAL;
static int g_52[2] = {0xC545E213L, 0xC545E213L};
static int g_53[10][2][3] = {{{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}, {{0x5291260EL, (-5L), 0x8E60A2FCL}, {0x5291260EL, (-5L), 0x8E60A2FCL}}};
static int g_54 = 0x3046AA1DL;
static int **g_97 = (void*)0;
static int g_113[7][2] = {{0x73AC07ACL, 0x73AC07ACL}, {0x73AC07ACL, 0x73AC07ACL}, {0x73AC07ACL, 0x73AC07ACL}, {0x73AC07ACL, 0x73AC07ACL}, {0x73AC07ACL, 0x73AC07ACL}, {0x73AC07ACL, 0x73AC07ACL}, {0x73AC07ACL, 0x73AC07ACL}};
static int g_162 = 0L;
static int *g_174 = &g_113[6][1];
static int g_330[6] = {0L, 0x819E399DL, 0L, 0x819E399DL, 0L, 0x819E399DL};
static int g_342 = (-1L);
static short g_398 = (-1L);
static const int *g_419 = &g_54;
static const int g_435 = (-2L);
static int g_517 = 1L;
static unsigned g_635 = 0x11D9E99DL;
static int g_691 = 0x46CE921EL;
static unsigned char g_704 = 0xAEL;
static char g_726 = 5L;
static char g_852 = 0x33L;
static int g_906 = 1L;
static char g_1085 = (-7L);
static char g_1145 = 0x42L;
static char g_1147[10][1][9] = {{{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}, {{0xA1L, 0x3EL, 7L, 0xA3L, (-1L), (-1L), 0x34L, 0xEDL, 0xC9L}}};
static int g_1292 = 1L;



static unsigned short func_1(void);
static unsigned func_7(short p_8, unsigned char p_9, unsigned short p_10, unsigned p_11, int p_12);
static int func_15(char p_16, char p_17, const short p_18);
static unsigned char func_28(unsigned p_29, unsigned char p_30, unsigned p_31, unsigned char p_32);
static unsigned func_33(unsigned short p_34, int p_35, short p_36, unsigned p_37);
static unsigned char func_44(unsigned p_45);
static char func_55(int p_56, unsigned short p_57, unsigned short p_58, const unsigned short p_59, int p_60);
static int func_63(char p_64, int p_65, int p_66, unsigned short p_67, unsigned p_68);
static unsigned char func_69(unsigned p_70, int p_71, unsigned char p_72);
static const short func_73(unsigned char p_74);
static unsigned short func_1(void)
{
    int l_21 = (-8L);
    int l_489 = 0x44FD802EL;
    int *l_1291 = &g_1292;
    (*l_1291) &= (safe_rshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u(g_6, ((func_7((65535UL > (safe_lshift_func_uint8_t_u_u((((func_15(g_6, (safe_lshift_func_int16_t_s_u((l_21 > g_6), (((safe_rshift_func_uint8_t_u_s(0xF2L, 2)) > (safe_rshift_func_uint8_t_u_s((0x86L > ((safe_add_func_uint8_t_u_u(((func_28(func_33(((safe_mul_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(0x57L, (safe_sub_func_uint8_t_u_u(func_44((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s(l_21, g_6)), 7))), 0x9EL)))) == g_113[6][1]), g_435)) , l_21), (*g_174), l_21, l_21), g_330[2], l_489, g_113[6][1]) != 0L) , l_21), 1UL)) < 2L)), 6))) ^ 0x3B2D0110L))), g_435) > l_489) > g_330[2]) < g_852), l_489))), g_162, l_489, l_489, g_6) | l_489) == g_435))) , 9UL) | g_435), l_21));


    ;
    ;
    (*l_1291) ^= (-3L);
    return g_342;
}







static unsigned func_7(short p_8, unsigned char p_9, unsigned short p_10, unsigned p_11, int p_12)
{
    unsigned char l_933[1][8][7] = {{{1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}, {1UL, 1UL, 0UL, 0x57L, 0x08L, 250UL, 255UL}}};
    int l_941 = 0xCC33D069L;
    int **l_942 = &g_174;
    const int *l_1156 = &g_342;
    short l_1199 = 0xDE79L;
    int i, j, k;
    for (g_54 = 0; (g_54 <= (-15)); --g_54)
    {
        unsigned char l_936 = 0x90L;
        l_941 = (safe_rshift_func_int8_t_s_s((-1L), (((l_933[0][6][3] , func_69((p_10 >= g_517), (safe_lshift_func_uint8_t_u_s((((((9L ^ 0x97L) != 0xB9F7L) <= (l_936 < (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_936, p_11)), 0UL)))) , 8UL) , p_12), 0)), p_12)) | p_10) & 0x4021L)));
        if ((*g_419))
            continue;
        l_941 ^= (6L < g_53[1][1][2]);
        g_97 = l_942;

        ;
    }
    for (g_54 = 0; (g_54 <= 0); g_54 += 1)
    {
        int * const l_943 = (void*)0;
        int **l_944 = &g_174;
        const int l_1026 = 0L;
        int *l_1027 = &g_113[2][1];
        unsigned char l_1039[1][4][8];
        unsigned l_1061 = 0xB1FC8728L;
        int l_1155 = 0L;
        unsigned l_1198[2][8][1] = {{{0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}}, {{0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}, {0x4A44DE23L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 8; k++)
                    l_1039[i][j][k] = 0xE7L;
            }
        }
        (*l_944) = l_943;

        ;
    }
    return p_8;
}







static int func_15(char p_16, char p_17, const short p_18)
{
    unsigned l_505[9][3][8] = {{{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}, {{0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}, {0UL, 18446744073709551606UL, 0x543953DFL, 0xC7E5D7E2L, 0x543953DFL, 18446744073709551606UL, 0UL, 18446744073709551611UL}}};
    int * const l_506 = (void*)0;
    int ***l_594 = (void*)0;
    int l_728 = (-1L);
    int l_736 = 0xBFC53AB4L;
    unsigned char l_739 = 2UL;
    int l_794 = 0L;
    int *l_800 = (void*)0;
    int *l_827 = &g_162;
    short l_851 = 0x66D4L;
    unsigned short l_868 = 65535UL;
    int **l_910[6] = {&g_174, &l_827, &g_174, &l_827, &g_174, &l_827};
    int i, j, k;
    if (((246UL < ((l_505[7][2][7] < ((void*)0 == l_506)) != 0x70CF7D08L)) < (l_505[0][2][2] || 0x5743L)))
    {
        int *l_507 = &g_342;
        int *l_516 = &g_517;
        (*l_507) |= p_18;
        (*l_516) &= (safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(p_17, (((&g_174 == &l_507) , (g_435 && ((safe_sub_func_uint32_t_u_u(g_435, func_33((safe_lshift_func_uint16_t_u_u(g_52[1], 2)), p_17, (*l_507), g_53[1][1][2]))) | (*l_507)))) <= p_18))) , p_16), 0x9347L));
        l_516 = l_507;

        ;
    }
    else
    {
        unsigned short l_520 = 1UL;
        int *l_521 = (void*)0;
        int l_549[10];
        unsigned l_571 = 0x7960DF3AL;
        int ***l_582 = &g_97;
        unsigned l_605 = 0x27569AEDL;
        unsigned char l_654 = 1UL;
        unsigned short l_692 = 0x7B7EL;
        unsigned l_820 = 0xBCD2F0E3L;
        int l_890[7][10][3] = {{{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}, {{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}, {{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}, {{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}, {{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}, {{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}, {{0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}, {0xF2B81B5BL, 0x57C252EFL, (-1L)}}};
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_549[i] = 0x09F4ED71L;
        if ((safe_sub_func_int16_t_s_s(((func_69((&l_506 == (void*)0), l_520, l_520) , &g_435) != l_521), func_33(p_18, (((((((func_44((safe_sub_func_int32_t_s_s((g_54 , 0xC097FA97L), 0x62AAEB3BL))) , &l_521) != (void*)0) | g_162) , &g_113[6][1]) != l_521) , 0xBAD7L) & p_17), l_520, g_435))))
        {
            int l_526 = 0xC5B49FCEL;
            char l_536[10][4][5] = {{{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}, {{(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}, {(-3L), 0x61L, 1L, 0x91L, 0xC5L}}};
            int ***l_544 = &g_97;
            int **l_560 = &l_521;
            int l_588 = 0x0A9185C4L;
            int * const l_589 = (void*)0;
            unsigned l_634 = 4294967286UL;
            char l_639 = 0x74L;
            int i, j, k;
            for (p_17 = 10; (p_17 < (-25)); p_17--)
            {
                unsigned l_527 = 0xB4C6E319L;
                l_527 = (g_330[2] && l_526);
                return p_17;
            }
            if (p_18)
            {
                int ***l_546 = (void*)0;
                int l_557[5];
                unsigned short l_576 = 0UL;
                int i;
                for (i = 0; i < 5; i++)
                    l_557[i] = 0x79EF8FD2L;
                if ((safe_lshift_func_uint8_t_u_u(((8UL <= (((p_17 ^ p_18) , p_17) ^ (((safe_sub_func_uint16_t_u_u(((g_330[2] != (p_16 , 0x23FBD536L)) > (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(func_44(g_517), 4L)), l_526))), l_526)) , &l_521) != &g_419))) <= l_536[8][3][0]), g_517)))
                {
                    return p_16;
                }
                else
                {
                    int ***l_537 = &g_97;
                    unsigned l_545 = 1UL;
                    (*l_537) = &g_174;

                    ;
                    if ((safe_mod_func_int32_t_s_s((0x5B44C6BAL > (((safe_mod_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(g_330[0], (((p_18 <= g_162) , l_544) != (void*)0))) ^ l_545), p_16)) <= ((*g_97) == (**l_544))) && 0x7BL)), 0x65E3F517L)))
                    {
                        int l_553 = 1L;
                        int l_554 = 3L;
                        int *l_555 = &l_549[5];
                        l_549[5] &= func_69(((void*)0 == l_546), ((safe_mul_func_uint32_t_u_u(g_52[1], (p_16 <= (p_17 != p_18)))) , p_16), g_162);
lbl_556:
                        if (g_517)
                            goto lbl_550;
lbl_550:
                        (**l_537) = (**l_537);
                        (*l_555) &= ((p_17 == (l_537 == (void*)0)) ^ ((0x605CL >= p_17) || (safe_sub_func_int32_t_s_s(l_553, l_554))));
                        if (p_18)
                            goto lbl_556;
                    }
                    else
                    {
                        l_557[3] ^= func_73(p_16);
                    }
                    (**l_537) = (((((g_330[2] < g_113[0][1]) , p_16) , ((((((safe_mul_func_uint8_t_u_u((((&g_419 == l_560) , ((((safe_mul_func_uint16_t_u_u(p_17, (safe_add_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u(p_16, 250UL)) || ((void*)0 == &g_419)) <= g_52[0]) <= 0x46L), 1L)))) == 0x03BBL) >= g_330[4]) != 250UL)) != p_17), g_6)) && 0x43L) , g_53[3][0][0]) > p_17) > p_17) , p_17)) ^ 0x7484187CL) , (*g_97));
                    l_557[3] = (safe_mul_func_uint16_t_u_u(0xF9CFL, 0x98CFL));
                }

                ;
                if (((safe_rshift_func_int16_t_s_s(func_28(p_18, l_571, g_517, func_69((0xFB10L != p_16), ((safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((1L != func_69(l_576, ((&l_549[5] != (void*)0) , p_16), g_113[6][1])), (-1L))), p_16)) & p_18), p_16)), l_557[1])) , 0xCEF71317L))
                {
                    short l_587 = 1L;
                    int l_597 = 0L;
                    int **l_604 = &l_521;
                    for (l_571 = 12; (l_571 <= 19); l_571++)
                    {
                        int l_581 = 1L;
                        int **l_590 = &l_521;
                        g_342 = func_28(g_53[1][1][2], ((safe_lshift_func_uint16_t_u_s(((l_581 , l_582) == &g_97), ((safe_mod_func_int32_t_s_s(0L, (((safe_lshift_func_uint16_t_u_s((l_581 && (g_6 , ((g_53[1][1][2] ^ l_587) , 0x5A559EC7L))), g_330[2])) || g_162) , g_53[4][1][1]))) == l_588))) , g_113[6][1]), p_18, g_342);
                        (*l_590) = l_589;
                    }
                    for (l_576 = 12; (l_576 == 5); l_576 = safe_sub_func_uint16_t_u_u(l_576, 9))
                    {
                        int ***l_593[7][9][3] = {{{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}, {{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}, {{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}, {{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}, {{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}, {{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}, {{&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}, {&l_560, &g_97, &l_560}}};
                        int i, j, k;
                        l_597 |= (((4294967295UL || ((l_593[6][5][1] != l_594) | p_17)) , g_113[3][1]) , (safe_lshift_func_uint8_t_u_u(0UL, 7)));
                        return p_18;
                    }
                    if (p_17)
                    {
                        unsigned short l_598 = 65535UL;
                        const int *l_603 = &l_549[5];
                        g_517 = l_598;
                        g_53[7][0][1] ^= (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((void*)0 != l_603), ((((*l_603) , 0xEAL) >= ((0x97C88287L != 0xEB6E56F1L) > (p_16 , g_398))) <= (g_435 , p_16)))) , 2UL), (*l_603)));
                        (*l_582) = l_604;

                        ;
                    }
                    else
                    {
                        unsigned l_606[6] = {0x83B10593L, 0x83B10593L, 0x7AD4BAC8L, 0x83B10593L, 0x83B10593L, 0x7AD4BAC8L};
                        int i;
                        l_605 = (*g_419);
                        l_606[5] = (3L & g_53[1][1][2]);
                        return p_18;
                    }

                    ;
                    for (p_17 = 0; (p_17 == 13); p_17 = safe_add_func_uint16_t_u_u(p_17, 9))
                    {
                        int **l_609[5][10] = {{&l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521}, {&l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521}, {&l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521}, {&l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521}, {&l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521, &l_521}};
                        int i, j;
                        (*l_544) = l_609[1][3];
                        g_174 = (*l_560);

                        ;
                        l_549[5] = p_18;
                    }

                    ;
                }
                else
                {
                    const int *l_621 = &l_557[3];
                    for (p_17 = 1; (p_17 >= 0); p_17 -= 1)
                    {
                        char l_614 = (-1L);
                        int *l_636 = &l_549[6];
                        int i;
                        l_549[(p_17 + 4)] |= ((g_52[1] >= ((**l_544) == l_506)) > (safe_add_func_int16_t_s_s((func_73((!(safe_mul_func_uint8_t_u_u((((-5L) <= func_69((l_614 || (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((g_52[0] , ((void*)0 != l_621)) && func_69((((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(0L, p_18)) & (*g_419)) <= g_330[2]), p_17)), p_18)) < 0x086105A0L), g_342)) | p_18) & 0xE0L), (*l_621), g_53[1][1][2])), g_398)), p_16)), p_17))), (*l_621), p_18)) , 247UL), g_52[0])))) < 0xA7B6L), p_18)));
                        l_549[(p_17 + 3)] &= p_16;
                        (*l_636) &= func_33((+(((safe_lshift_func_uint8_t_u_s(0xC3L, p_17)) , (*g_97)) != (*g_97))), ((void*)0 != (*g_97)), (g_53[7][0][1] , func_44((((safe_lshift_func_int16_t_s_u(l_634, 1)) & g_635) , 1UL))), g_113[0][1]);
                    }
                }

                ;
                for (p_17 = 22; (p_17 >= (-28)); p_17--)
                {
                    int l_659 = 1L;
                    int l_667[2][7] = {{0L, 0x2BBA6B41L, 0x4B9E1732L, 0x4B9E1732L, 0x2BBA6B41L, 0L, 0x2BBA6B41L}, {0L, 0x2BBA6B41L, 0x4B9E1732L, 0x4B9E1732L, 0x2BBA6B41L, 0L, 0x2BBA6B41L}};
                    int i, j;
                    if (l_639)
                    {
                        unsigned char l_640 = 0x9AL;
                        return l_640;


                    }
                    else
                    {
                        g_53[8][0][0] |= p_16;
                    }
                    if (p_18)
                    {
                        unsigned short l_653 = 0UL;
                        int *l_655 = &l_557[2];
                        unsigned l_658 = 1UL;
                        (*l_655) ^= (safe_add_func_int16_t_s_s(p_17, ((safe_add_func_uint16_t_u_u(p_17, p_16)) , ((safe_add_func_int32_t_s_s(0x8FF58670L, ((0L && ((-2L) < ((((safe_add_func_int32_t_s_s(((((safe_add_func_uint32_t_u_u((func_28(g_54, p_18, func_69(((p_16 , p_18) , 0x3AC90742L), l_653, l_653), g_398) == g_342), (-3L))) > g_6) >= g_635) < g_635), p_18)) < 1L) >= l_654) == 1UL))) == g_330[0]))) ^ l_653))));
                        (*l_655) = (-1L);
                        if (p_16)
                            continue;
                        l_659 = (((((l_546 == (((!(((func_73(g_53[1][1][2]) > 7UL) | (*l_655)) || func_69(g_435, (((p_16 >= p_18) && p_16) < 0x7524C511L), g_54))) == g_53[1][1][2]) , &l_560)) , g_53[5][1][1]) && 9UL) < (*l_655)) ^ g_517);
                    }
                    else
                    {
                        int *l_666[8] = {&l_549[5], &g_113[2][1], &l_549[5], &g_113[2][1], &l_549[5], &g_113[2][1], &l_549[5], &g_113[2][1]};
                        int i;
                        l_667[1][0] |= (((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0x6D35L, l_659)), 0x3CL)) <= 0xE1L) != (safe_mul_func_uint16_t_u_u(0x3D6EL, (g_330[2] == (func_28(p_18, g_53[8][1][0], p_18, g_635) , p_16)))));
                        if (p_18)
                            continue;
                        if (p_16)
                            break;
                    }
                }
            }
            else
            {
                unsigned char l_677[6][9][4] = {{{0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}}, {{0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}}, {{0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}}, {{0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}}, {{0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}}, {{0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}, {0x1EL, 0xF7L, 0x91L, 0x72L}}};
                int **l_682 = (void*)0;
                unsigned short l_683[3];
                int *l_693 = &g_53[3][1][2];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_683[i] = 0x1CE5L;
                for (p_17 = (-25); (p_17 == (-30)); --p_17)
                {
                    unsigned short l_674 = 65535UL;
                    int l_684 = 6L;
                    for (l_588 = 0; (l_588 < (-1)); l_588 = safe_sub_func_uint8_t_u_u(l_588, 4))
                    {
                        l_677[0][7][1] = ((safe_add_func_uint32_t_u_u(((l_674 <= 1L) || (1L && (safe_add_func_uint8_t_u_u(p_18, g_517)))), (g_330[2] || g_635))) || g_52[1]);
                    }
                    l_684 = (((p_17 , ((p_17 , g_54) , g_435)) == p_16) || p_16);
                }
                (*l_693) = (safe_mod_func_uint32_t_u_u(((((safe_mul_func_uint8_t_u_u(0x1CL, (((safe_add_func_int8_t_s_s(((*l_582) == l_682), g_53[4][0][2])) || g_53[1][1][2]) && (4294967295UL ^ func_69(g_113[3][0], p_16, ((((((p_18 && g_691) ^ g_691) || g_162) < 0x9DL) < (*g_419)) ^ 0L)))))) <= l_692) && p_17) >= 0x2CL), p_16));
                (*l_693) = func_69(p_17, (((4294967286UL | func_33(((void*)0 == &g_162), (*g_419), p_18, (safe_mul_func_uint8_t_u_u(((((safe_mod_func_uint8_t_u_u(g_54, 0x80L)) > func_69(g_691, p_17, p_17)) | p_17) & p_16), 0xE9L)))) && 0x324EL) , (-6L)), g_435);
            }

            ;
        }
        else
        {
            for (g_635 = 0; g_635 < 10; g_635 += 1)
            {
                for (l_654 = 0; l_654 < 2; l_654 += 1)
                {
                    for (g_517 = 0; g_517 < 3; g_517 += 1)
                    {
                        g_53[g_635][l_654][g_517] = 0xB534E7E8L;
                    }
                }
            }
        }

        ;
        for (l_571 = 0; (l_571 <= 2); l_571 += 1)
        {
            int l_701 = (-3L);
            int l_706[8] = {1L, 1L, 0x393CC686L, 1L, 1L, 0x393CC686L, 1L, 1L};
            int l_727 = (-9L);
            int l_737 = 1L;
            int **l_738 = &g_174;
            int *l_757 = &g_517;
            int i;
        }
        for (p_17 = (-18); (p_17 == (-22)); p_17--)
        {
            int *l_773 = &l_728;
            (*l_773) &= (safe_rshift_func_uint16_t_u_s((((p_17 != (-5L)) , (-1L)) , (((0xF4418B5CL || (((p_16 > (g_162 != 0x4163L)) && (safe_add_func_uint32_t_u_u(func_33(g_162, p_18, p_17, g_517), 8UL))) != g_517)) , p_16) || g_53[3][0][1])), 11));
            (*l_773) = 0xA3C0858BL;
            if ((*g_419))
                break;
        }
        if ((*g_419))
        {
            int *l_777 = &g_342;
            for (g_517 = (-15); (g_517 == (-13)); g_517 = safe_add_func_int32_t_s_s(g_517, 1))
            {
                short l_776 = 0x616FL;
                if (p_18)
                    break;
                l_776 &= 0x9C3D5843L;
            }
            g_419 = l_777;

            ;
        }
        else
        {
            int l_792 = 0x66B166B4L;
            int ***l_813 = &g_97;
            unsigned l_816[6];
            unsigned char l_869 = 252UL;
            int *l_900[2][6][10] = {{{&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}}, {{&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}, {&g_113[6][1], &g_517, &g_54, &l_549[5], &g_53[1][1][2], &g_342, (void*)0, &g_113[6][1], (void*)0, &g_342}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_816[i] = 0x1A2C9892L;
        }

        ;
    }


    ;
    return (*l_827);
}







static unsigned char func_28(unsigned p_29, unsigned char p_30, unsigned p_31, unsigned char p_32)
{
    int l_498 = 1L;
    int **l_501 = &g_174;
    char l_502 = 0xF2L;
    int *l_503 = (void*)0;
    int *l_504[2];
    int i;
    for (i = 0; i < 2; i++)
        l_504[i] = &g_113[6][1];
    g_54 = (g_54 > p_32);
    (*l_501) = (*l_501);
    g_53[1][1][2] |= (*g_419);
    return g_330[2];
}







static unsigned func_33(unsigned short p_34, int p_35, short p_36, unsigned p_37)
{
    int ** const *l_452 = &g_97;
    for (p_37 = (-7); (p_37 <= 14); p_37 = safe_add_func_uint16_t_u_u(p_37, 8))
    {
        int *l_438 = &g_53[1][1][2];
        int l_464 = 0x6A84D3C0L;
        unsigned short l_488 = 0xACF8L;
        if ((g_162 <= (((((&p_35 != (p_36 , l_438)) <= 0xD80DL) != (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int32_t_s(((p_35 , (safe_lshift_func_uint16_t_u_s(p_37, 11))) ^ ((((&g_174 != ((!(g_330[0] , g_113[6][1])) , &g_174)) , &l_438) == (void*)0) | p_35))))))) > (*l_438)) ^ 65529UL)))
        {
            int **l_443 = &g_174;
            int l_453 = 0x67350298L;
            int ***l_465 = (void*)0;
            int ***l_466 = &l_443;
            (*l_443) = (void*)0;

            ;
            l_453 |= (((safe_mul_func_int8_t_s_s(((*l_438) ^ 8UL), g_330[2])) >= (safe_add_func_uint8_t_u_u((((((p_37 & (*l_438)) > ((((safe_sub_func_uint16_t_u_u(p_37, (*l_438))) ^ 0x4952E4ADL) , (safe_sub_func_uint32_t_u_u(((*l_438) , p_37), g_398))) > 0x14L)) ^ g_113[6][1]) , l_452) != (void*)0), p_36))) <= p_35);
            l_464 |= func_69(((!0xEDL) || (safe_add_func_int8_t_s_s(g_162, (((func_69(g_162, (p_36 | (safe_mul_func_uint8_t_u_u((((((safe_rshift_func_uint8_t_u_s(g_342, p_34)) >= (0L < (safe_mod_func_uint8_t_u_u(((func_73((safe_sub_func_uint8_t_u_u(g_162, func_44((*l_438))))) >= p_37) , p_34), 0xBCL)))) , 0xA127L) , g_330[2]) ^ 0xF3D4EFF0L), p_35))), p_37) , g_330[2]) , g_53[6][1][2]) == p_37)))), p_34, g_398);
            (*l_466) = l_443;
        }
        else
        {
            int *l_471 = &g_113[0][0];
            const int **l_482 = &g_419;
            const int ***l_481 = &l_482;
            if (((~(~(safe_mod_func_int16_t_s_s((safe_sub_func_int16_t_s_s((func_44((l_471 == (void*)0)) , ((0x415CF07EL >= 0x3D26581AL) , (safe_sub_func_uint32_t_u_u(0xB103E8A3L, func_69(g_342, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_35, (safe_mul_func_int8_t_s_s(0xE1L, p_37)))), 1UL)), p_35))))), (-1L))), g_330[2])))) > (-1L)))
            {
                unsigned char l_480 = 2UL;
                unsigned char l_483 = 0UL;
                (*l_438) = (p_37 , p_37);
                l_483 |= ((((l_480 >= 0xE4L) > (l_481 == (void*)0)) , (p_34 >= l_480)) && g_53[0][0][0]);
            }
            else
            {
                for (g_54 = (-14); (g_54 > 12); ++g_54)
                {
                    (*l_438) = (safe_sub_func_int16_t_s_s((***l_481), func_69(l_488, func_69(g_435, p_34, p_37), (&g_97 == &g_97))));
                    return p_36;
                }
                return g_113[6][1];
            }
        }
    }
    return g_398;
}







static unsigned char func_44(unsigned p_45)
{
    unsigned l_431 = 0xF79C41B6L;
    const int *l_432 = &g_342;
    for (p_45 = 8; (p_45 > 10); p_45 = safe_add_func_uint32_t_u_u(p_45, 5))
    {
        char l_94 = 0x04L;
        for (g_53[1][1][2] = 0; (g_53[1][1][2] <= 1); g_53[1][1][2] += 1)
        {
            int l_95 = 0xCB68B63CL;
            int i;
            for (g_54 = 0; (g_54 <= 1); g_54 += 1)
            {
                int i;
                return g_52[g_54];
            }
            for (g_54 = 0; g_54 < 2; g_54 += 1)
            {
                g_52[g_54] = 1L;
            }
        }
    }
    return p_45;
}







static char func_55(int p_56, unsigned short p_57, unsigned short p_58, const unsigned short p_59, int p_60)
{
    unsigned l_114 = 8UL;
    int *l_178 = &g_113[6][1];
    short l_186 = 0x02BAL;
    int l_187 = 0x7A14AA7FL;
    unsigned l_222[8];
    int ***l_241 = &g_97;
    unsigned l_258 = 4294967295UL;
    unsigned short l_266[1];
    short l_329 = (-1L);
    int l_378[1];
    unsigned char l_407 = 0x50L;
    unsigned l_425 = 3UL;
    int i;
    for (i = 0; i < 8; i++)
        l_222[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_266[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_378[i] = 0L;
    for (p_60 = (-25); (p_60 > 8); p_60 = safe_add_func_uint16_t_u_u(p_60, 9))
    {
        int *l_101 = &g_54;
        char l_136 = 0xC3L;
        int l_147 = 0x6E9923ECL;
        int *l_181 = &g_162;
        (*l_101) = g_53[8][1][1];
        for (p_58 = 0; (p_58 >= 44); p_58 = safe_add_func_int8_t_s_s(p_58, 9))
        {
            unsigned l_115 = 9UL;
            int l_140 = (-2L);
            char l_163 = 0x25L;
            for (g_54 = 4; (g_54 > (-15)); g_54 = safe_sub_func_int32_t_s_s(g_54, 9))
            {
                char l_123[10][9] = {{0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}, {0xBBL, 0xF7L, 4L, 7L, 0L, 0L, 7L, 4L, 0xF7L}};
                short l_124 = 1L;
                int i, j;
                for (p_57 = (-21); (p_57 != 60); p_57 = safe_add_func_int8_t_s_s(p_57, 8))
                {
                    if (((g_54 < g_52[0]) , (-5L)))
                    {
                        int *l_112[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_112[i] = &g_113[6][1];
                        p_56 = (g_53[3][1][0] == (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(0x30C3L, 4)), 2)));
                    }
                    else
                    {
                        return g_54;


                    }
                    p_56 = (p_58 , p_56);
                }
                if ((l_114 && (l_115 != ((safe_add_func_uint32_t_u_u(((((safe_sub_func_int32_t_s_s(((&g_113[4][0] != &p_56) == ((((((((~l_114) & g_54) <= (safe_mod_func_int16_t_s_s((g_97 != (((((func_69(g_113[6][1], ((safe_unary_minus_func_int8_t_s((l_123[3][8] & 0UL))) ^ l_114), g_6) == 0xCCL) , g_52[0]) == p_57) , p_59) , g_97)), g_113[6][1]))) <= l_124) , (*l_101)) >= 0x0E29191AL) , p_58) ^ 9L)), 0UL)) , p_58) >= (-1L)) , 0xAEAC5D1DL), g_113[0][0])) ^ 0xCCF25865L))))
                {
                    short l_133 = 0x76ABL;
                    int **l_151 = (void*)0;
                    int **l_152 = &l_101;
                    if (((safe_sub_func_int8_t_s_s(g_113[6][1], g_113[2][1])) < (4294967295UL >= ((l_101 == (void*)0) <= (((l_115 != (safe_mod_func_uint16_t_u_u(l_124, (safe_add_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s((l_133 , ((safe_add_func_int8_t_s_s(0x6FL, l_136)) < p_56)), 0xA972L)) , p_60) & 0xEEL), 0xDB58L))))) , (void*)0) != (void*)0)))))
                    {
                        return p_58;


                    }
                    else
                    {
                        int *l_139[6][5] = {{&g_113[6][1], &g_113[4][0], &g_113[6][1], &g_113[4][0], &g_113[6][1]}, {&g_113[6][1], &g_113[4][0], &g_113[6][1], &g_113[4][0], &g_113[6][1]}, {&g_113[6][1], &g_113[4][0], &g_113[6][1], &g_113[4][0], &g_113[6][1]}, {&g_113[6][1], &g_113[4][0], &g_113[6][1], &g_113[4][0], &g_113[6][1]}, {&g_113[6][1], &g_113[4][0], &g_113[6][1], &g_113[4][0], &g_113[6][1]}, {&g_113[6][1], &g_113[4][0], &g_113[6][1], &g_113[4][0], &g_113[6][1]}};
                        int **l_148 = &l_101;
                        int i, j;
                        l_140 = ((251UL & 0x0FL) , (safe_lshift_func_int8_t_s_u(g_53[1][1][2], 0)));
                        l_140 = (safe_add_func_int32_t_s_s((((safe_mod_func_int8_t_s_s(p_56, (((4294967295UL >= ((p_59 , (-1L)) , (&p_60 == l_101))) && (safe_sub_func_uint16_t_u_u(g_54, p_58))) && ((1UL ^ p_59) <= p_56)))) || 0x281CD202L) & l_115), (-7L)));
                        l_147 = l_133;
                        (*l_148) = &p_56;

                        ;
                    }

                    ;
                    for (l_133 = 18; (l_133 <= (-30)); l_133--)
                    {
                        if (l_115)
                            break;
                        (*l_101) = p_56;
                    }
                    (*l_152) = (g_53[1][1][2] , &p_60);

                    ;
                }
                else
                {
                    unsigned l_157 = 0x9BE39F15L;
                    int *l_171 = &g_53[9][1][2];
                    int *l_173 = &g_53[1][1][2];
                    int **l_175 = &g_174;
                    for (l_140 = (-25); (l_140 != 28); l_140 = safe_add_func_int32_t_s_s(l_140, 3))
                    {
                        unsigned l_170 = 0x14546EEDL;
                        int **l_172 = &l_101;
                        l_170 = func_69(g_53[1][1][2], ((~(safe_rshift_func_int16_t_s_u((func_69(l_157, (safe_mul_func_uint16_t_u_u(l_114, (((1L || func_69(((safe_add_func_int8_t_s_s(((0xB4L & g_162) && l_163), (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(p_56, (l_157 >= 0xF77AL))), 7)), p_58)) ^ 253UL) <= 0x8A0F2808L))) <= p_58), g_53[1][1][0], p_56)) & g_53[1][1][2]) > g_54))), p_58) > (-8L)), 4))) , 0xFD0DEDD1L), g_6);
                        (*l_172) = l_171;

                        ;
                        (*l_172) = &l_140;

                        ;
                        l_101 = l_173;

                        ;
                    }
                    g_174 = &p_56;

                    ;
                    (*l_175) = &g_53[1][1][2];

                    ;
                    (*l_175) = ((func_69((func_69((safe_add_func_int16_t_s_s((*l_101), (-1L))), ((l_178 == &p_60) | p_59), (safe_lshift_func_int16_t_s_s(func_69((0x135FL >= ((*l_178) & (*l_101))), (*g_174), g_113[6][1]), p_60))) > p_56), p_56, g_53[8][0][2]) ^ g_113[4][0]) , &p_56);

                    ;
                }
                p_56 &= 0x52690A63L;
            }
            l_178 = l_181;

            ;
        }

        ;
    }

    ;
    ;
    if ((((safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(p_56, 1L)), g_54)) & l_186) != ((&p_56 != (void*)0) != (((func_69((*l_178), (func_69(l_187, (((safe_sub_func_int16_t_s_s((-2L), (*l_178))) , 4294967287UL) , (-10L)), g_53[8][1][1]) , (-1L)), g_113[2][0]) != g_54) && 4294967295UL) & 0x9AL))))
    {
        int l_190 = 0L;
        int *l_195 = &g_113[6][1];
        unsigned char l_197 = 0xE9L;
        int *l_261 = &g_113[6][1];
        int ***l_273 = &g_97;
        unsigned short l_317 = 65535UL;
        short l_318 = 1L;
        if (l_190)
        {
            char l_196 = 1L;
            int **l_223[7][3] = {{&g_174, &l_195, &l_195}, {&g_174, &l_195, &l_195}, {&g_174, &l_195, &l_195}, {&g_174, &l_195, &l_195}, {&g_174, &l_195, &l_195}, {&g_174, &l_195, &l_195}, {&g_174, &l_195, &l_195}};
            unsigned short l_245 = 0x6DEEL;
            unsigned char l_270 = 5UL;
            int i, j;
            if (((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((void*)0 == &p_56), ((&p_60 == l_195) >= (*l_195)))) , (*l_195)), p_59)) > (((g_113[2][0] > (func_73(l_196) >= 0x7303L)) <= 1L) > l_197)))
            {
                unsigned char l_198 = 7UL;
                l_198 |= (*l_195);
            }
            else
            {
                int *l_201 = &g_53[1][1][2];
                int **l_208[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_208[i] = &l_201;
                for (g_162 = 4; (g_162 != 10); ++g_162)
                {
                    int **l_202 = (void*)0;
                    int **l_203 = &l_201;
                    (*l_203) = l_201;
                    return p_60;


                }
                p_60 &= ((l_196 == (*g_174)) , (*l_178));
                (*l_178) = ((safe_lshift_func_uint16_t_u_s((~1UL), 8)) < (safe_mod_func_uint8_t_u_u((*l_178), g_6)));
                g_174 = l_195;

                ;
            }
            for (p_58 = 26; (p_58 != 43); p_58 = safe_add_func_uint16_t_u_u(p_58, 4))
            {
                int **l_211 = &l_195;
                int *l_224 = &g_113[0][0];
                char l_244 = (-1L);
                l_211 = &l_178;

                ;
                if ((*g_174))
                {
                    unsigned l_217 = 4294967290UL;
                    const int *l_236 = &g_53[1][1][2];
                    const int **l_235 = &l_236;
                    unsigned char l_240[3][4] = {{5UL, 0x77L, 5UL, 0x77L}, {5UL, 0x77L, 5UL, 0x77L}, {5UL, 0x77L, 5UL, 0x77L}};
                    int i, j;
                    if ((((~((safe_unary_minus_func_uint8_t_u((*l_178))) < (safe_mul_func_uint8_t_u_u(247UL, (((safe_mod_func_uint32_t_u_u(((((p_60 & (l_217 <= ((g_53[5][0][1] > (0x488C446EL > (safe_lshift_func_uint8_t_u_s(((func_69(g_113[6][1], p_56, p_57) <= p_57) , l_222[2]), g_113[6][1])))) <= (-4L)))) , g_113[4][0]) , &l_195) != l_223[4][1]), 0xDD7041B7L)) , (void*)0) != (void*)0))))) , l_224) == &p_56))
                    {
                        return g_113[6][1];


                    }
                    else
                    {
                        unsigned l_234 = 18446744073709551612UL;
                        int ***l_237 = &l_211;
                        l_234 &= (((**l_211) > 0x6BL) != (((g_113[5][0] <= ((void*)0 != l_223[4][1])) > (((p_56 ^ (((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(1L, (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((0x9FDC4488L < (((+g_113[3][0]) <= 0x55B5L) , p_56)), p_56)))))), g_113[6][1])) && p_60) && 0UL)) , &l_195) == &l_195)) >= 0x29L));
                        (*l_224) &= (l_235 == (void*)0);
                        (*l_195) |= p_58;
                        (*l_237) = &g_174;

                        ;
                    }

                    ;
                    (*l_224) ^= (safe_mod_func_uint32_t_u_u(p_60, l_240[0][3]));
                    if (((-8L) & (&l_223[4][1] == (g_113[3][0] , l_241))))
                    {
                        if ((*g_174))
                            break;
                        if (p_60)
                            break;
                        p_60 &= ((((*l_178) & (&l_223[4][1] != ((p_58 , (safe_add_func_uint16_t_u_u(0x4207L, ((g_6 , (func_69((g_162 || ((&g_97 != l_241) | 1L)), l_244, p_59) , l_245)) == 0xBF92L)))) , &l_211))) , (void*)0) != &g_174);
                        (*g_174) = ((void*)0 == &l_235);
                    }
                    else
                    {
                        const unsigned l_257 = 4294967295UL;
                        (**l_211) = (safe_unary_minus_func_uint8_t_u(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(func_73((((*l_211) == ((((safe_add_func_int32_t_s_s(l_257, func_63(l_258, (*l_224), (func_63((safe_rshift_func_int8_t_s_u(g_53[1][1][2], (g_113[3][0] || 0x102F24D4L))), p_57, ((4294967295UL != 1UL) & 0x756BE5B3L), g_113[6][1], g_113[1][1]) | 0xB8L), g_162, g_113[6][1]))) < 0x42L) ^ g_53[2][0][2]) , &p_60)) == g_162)), g_113[6][1])), g_52[0])) == p_59) | 0x6DL) && (*g_174)) != 0UL), 5)), 11)) < p_59)));
                        return g_53[3][1][2];


                    }
                    (*l_195) = p_60;
                }
                else
                {
                    for (g_162 = 0; (g_162 <= 1); g_162 += 1)
                    {
                        int i, j;
                        l_261 = &g_113[(g_162 + 3)][g_162];
                        g_113[g_162][g_162] = (safe_add_func_int16_t_s_s(p_59, (g_113[2][1] , (((*l_224) >= (0x58C51676L <= p_57)) >= p_58))));
                        return p_59;


                    }
                }

                ;
                if (((safe_sub_func_int32_t_s_s((*g_174), (g_113[6][1] , p_58))) == (((l_266[0] && 0x271DECC0L) <= ((((safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s(0x71L, (((p_60 == ((*l_178) | func_73((p_57 , 255UL)))) != p_59) <= g_162))))) > 1L) <= 255UL) < 0L)) > 6UL)))
                {
                    (**l_211) = l_270;
                }
                else
                {
                    p_60 &= (*g_174);
                    for (p_57 = 0; (p_57 > 53); p_57++)
                    {
                        if (p_58)
                            break;
                    }
                    return g_113[6][1];


                }
                (*l_224) = (l_273 != l_241);
            }
        }
        else
        {
            unsigned short l_286 = 0xE7CDL;
            int *l_287 = &g_113[4][1];
            l_287 = ((safe_add_func_uint8_t_u_u((func_73((*l_178)) == 65534UL), (safe_sub_func_uint8_t_u_u(((*l_241) == ((safe_rshift_func_uint8_t_u_s((&l_187 == &g_113[6][0]), 5)) , &g_174)), ((safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(g_113[6][1], (*l_195))) != g_53[4][0][1]), 6L)) , l_286), p_59)) < 0x654CDD86L))))) , (void*)0);

            ;
            for (l_286 = 0; (l_286 < 19); ++l_286)
            {
                for (p_60 = 0; (p_60 >= 0); p_60 -= 1)
                {
                    int i, j;
                    if ((0x8DCA40DCL >= g_113[(p_60 + 1)][p_60]))
                    {
                        int i;
                        (*l_195) = l_266[p_60];
                    }
                    else
                    {
                        int **l_290 = &l_287;
                        (*l_290) = &p_56;

                        ;
                        (*l_290) = &g_113[(p_60 + 1)][p_60];

                        ;
                    }

                    ;
                    return l_266[p_60];


                }
            }
            for (l_187 = 0; (l_187 != (-16)); l_187 = safe_sub_func_int8_t_s_s(l_187, 1))
            {
                int *l_293 = &g_162;
                for (l_258 = 0; (l_258 <= 0); l_258 += 1)
                {
                    int **l_300 = &l_293;
                    unsigned short l_309[4] = {65535UL, 0xD083L, 65535UL, 0xD083L};
                    int i;
                    l_293 = &p_56;

                    ;
                    for (l_190 = 1; (l_190 >= 0); l_190 -= 1)
                    {
                        int * const *l_307 = &l_287;
                        int l_308 = 0xBC9FF50BL;
                        int i;
                        (**l_300) = func_69((~(safe_mod_func_int8_t_s_s(((g_52[(l_258 + 1)] == (safe_add_func_uint8_t_u_u((((func_63((safe_add_func_uint32_t_u_u((l_300 != (void*)0), (g_52[l_190] & l_266[l_258]))), (safe_sub_func_int8_t_s_s(g_6, (((((*l_261) == func_73((safe_rshift_func_int16_t_s_s(func_63((safe_add_func_uint32_t_u_u(g_162, (((func_73(g_54) != 0x0488L) , l_307) == (*l_273)))), l_308, p_60, l_309[1], p_58), 0)))) , g_53[0][1][1]) , g_52[1]) , g_113[4][0]))), (*l_195), (*l_293), g_113[6][1]) && (*l_293)) < 1L) <= p_57), p_56))) , (-4L)), g_162))), (*l_293), g_113[6][1]);
                        return g_52[1];


                    }
                }

                ;
                for (g_162 = 0; (g_162 <= (-9)); --g_162)
                {
                    int *l_312[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_312[i] = &g_113[6][1];
                    l_312[0] = &p_60;


                    l_287 = l_287;
                    for (l_186 = 0; (l_186 != (-24)); l_186--)
                    {
                        g_174 = (g_6 , &p_56);

                        ;
                    }
                }
                if ((*g_174))
                    break;
            }
            (*g_174) = (safe_add_func_int32_t_s_s(func_69(g_113[6][1], l_317, p_57), l_318));
        }
    }
    else
    {
        const int l_320 = 0xE75EA0E8L;
        int l_332 = (-1L);
        int **l_402 = &l_178;
        for (p_56 = 0; (p_56 >= 0); p_56 -= 1)
        {
            int **l_341 = &l_178;
            int l_430 = 0x9E2A8F95L;
            int i;
        }
        return (**l_402);


    }
    return g_6;


}







static int func_63(char p_64, int p_65, int p_66, unsigned short p_67, unsigned p_68)
{
    unsigned l_96 = 5UL;
    int *l_98 = &g_54;
    (*l_98) ^= (((l_96 == ((&g_53[1][1][2] != (p_65 , &p_66)) && (g_97 != g_97))) , &p_65) == &p_65);
    return p_66;
}







static unsigned char func_69(unsigned p_70, int p_71, unsigned char p_72)
{
    return p_71;
}







static const short func_73(unsigned char p_74)
{
    int *l_75 = &g_53[9][0][2];
    int **l_76 = &l_75;
    char l_79 = 0x8BL;
    g_54 ^= p_74;
    (*l_76) = l_75;
    g_54 = (safe_mul_func_uint8_t_u_u((l_79 <= (safe_rshift_func_int8_t_s_u(p_74, (g_53[1][1][2] ^ ((((((safe_add_func_int8_t_s_s(((*l_75) ^ p_74), ((*l_76) != ((safe_lshift_func_uint8_t_u_s(p_74, (0xAEC2L || (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(2L, p_74)), (**l_76)))))) , (*l_76))))) || 0x6118L) | (**l_76)) & p_74) > g_54) < p_74))))), p_74));
    return g_53[3][1][0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_52[i], "g_52[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_53[i][j][k], "g_53[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_113[i][j], "g_113[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_330[i], "g_330[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_342, "g_342", print_hash_value);
    transparent_crc(g_398, "g_398", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_691, "g_691", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_852, "g_852", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1085, "g_1085", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_1147[i][j][k], "g_1147[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1292, "g_1292", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
