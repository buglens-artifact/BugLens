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



static short g_6 = (-4L);
static char g_56 = 0L;
static int g_68 = 0xB45C761BL;
static int g_76 = 0x444C9CADL;
static volatile int g_98 = 0L;
static volatile int *g_97 = &g_98;
static volatile int **g_96 = &g_97;
static unsigned short g_102 = 0x0F1DL;
static unsigned long long g_113 = 0UL;
static int g_115 = 0x69C78C3DL;
static int g_166 = 1L;
static unsigned short g_177 = 6UL;
static unsigned g_190 = 0xB36A1522L;
static unsigned char g_192 = 0x42L;
static int *g_211 = &g_76;
static volatile int g_390 = (-7L);
static volatile char g_399 = 0xFCL;
static unsigned char g_482 = 8UL;
static short g_489 = 0x48D0L;
static short g_492 = 0x7133L;
static volatile unsigned short g_497 = 0UL;
static char g_522 = 0x7AL;
static long long g_564 = 9L;
static unsigned char g_576 = 0x73L;
static volatile short g_647 = 1L;
static short g_674 = 0x5B2BL;
static volatile long long g_704 = 0xCD98A267DB47F5A9LL;
static char g_710 = 0x70L;
static volatile int g_716 = (-2L);
static unsigned short g_722 = 0xE225L;
static int g_775 = 6L;
static unsigned long long g_814 = 18446744073709551615UL;
static long long g_823 = 3L;
static unsigned **g_913 = (void*)0;
static unsigned short g_936 = 65529UL;
static char g_1021 = 0x68L;
static volatile unsigned short g_1023 = 8UL;
static char g_1103 = (-1L);
static long long g_1116 = 1L;
static volatile int g_1127 = 0L;
static volatile int g_1129 = (-9L);
static volatile int g_1167 = 0xD29CFD90L;
static unsigned long long g_1173 = 8UL;
static unsigned long long **g_1178 = (void*)0;
static volatile char *g_1205 = &g_399;
static volatile char **g_1204 = &g_1205;
static unsigned g_1220 = 0UL;
static volatile unsigned g_1327 = 0x6E46DA1BL;
static unsigned long long g_1355 = 18446744073709551615UL;
static volatile int g_1368 = 0xE497990BL;
static volatile unsigned char g_1373 = 255UL;
static volatile unsigned char *g_1372 = &g_1373;
static volatile unsigned char **g_1371 = &g_1372;
static unsigned char *g_1393 = (void*)0;
static unsigned char **g_1392 = &g_1393;
static unsigned short g_1418 = 0xAFDCL;
static volatile unsigned *g_1421 = &g_1327;
static volatile unsigned **g_1420 = &g_1421;
static unsigned short g_1517 = 65535UL;
static volatile int g_1536 = 0x3509B142L;
static unsigned g_1548 = 4294967295UL;
static volatile short g_1600 = 1L;
static volatile unsigned g_1606 = 0x7F3EA876L;
static unsigned long long g_1618 = 0x3AE2D444B7D2E5C3LL;
static volatile unsigned g_1701 = 0UL;
static int *g_1772 = (void*)0;
static char *g_1783 = &g_1103;
static unsigned short g_1784 = 0xDF02L;
static unsigned g_1799 = 0x9B563C5FL;
static unsigned char g_1821 = 0xBBL;
static short g_1962 = 0x0A8DL;
static volatile int g_1967 = 0xFBA7609AL;
static unsigned g_1970 = 6UL;
static short *g_2074 = &g_674;
static short **g_2073 = &g_2074;
static volatile unsigned g_2195 = 0x936C3DC7L;
static unsigned long long g_2225 = 1UL;
static volatile unsigned short *g_2245 = (void*)0;
static char *g_2283 = &g_1021;
static unsigned long long *g_2342 = &g_814;
static unsigned long long g_2470 = 3UL;
static unsigned long long ***g_2503 = &g_1178;
static unsigned long long ****g_2502 = &g_2503;
static unsigned g_2507 = 0x9945AF01L;
static unsigned g_2621 = 9UL;
static volatile int *g_2626 = (void*)0;
static short g_2792 = (-9L);
static volatile long long g_2800 = (-7L);
static int g_2807 = 0L;
static volatile unsigned short g_2811 = 1UL;
static volatile unsigned g_2875 = 0xC7806AD2L;
static unsigned g_3039 = 1UL;
static unsigned short *g_3055 = &g_1517;
static unsigned *g_3123 = (void*)0;
static unsigned **g_3122 = &g_3123;
static unsigned ***g_3121 = &g_3122;
static unsigned ****g_3120 = &g_3121;
static int g_3238 = (-5L);
static unsigned g_3253 = 4294967286UL;
static volatile short g_3472 = 0L;
static unsigned g_3524 = 0x70DA53BBL;
static unsigned *****g_3750 = &g_3120;
static unsigned ******g_3749 = &g_3750;
static int g_3766 = 6L;



static int func_1(void);
static int func_2(int p_3, unsigned p_4, long long p_5);
static unsigned func_9(char p_10, short p_11, unsigned short p_12);
static unsigned func_13(char p_14, int p_15, long long p_16, unsigned short p_17);
static unsigned char func_20(int p_21, long long p_22, unsigned p_23, short p_24, char p_25);
static char func_28(unsigned p_29, short p_30, unsigned short p_31, long long p_32, int p_33);
static unsigned char func_43(unsigned p_44, short p_45, int p_46, int p_47);
static char func_50(long long p_51, char p_52, unsigned p_53, unsigned long long p_54);
static int func_60(unsigned p_61, char * p_62, int p_63, char * p_64, int p_65);
static int * func_84(int * p_85, int p_86, unsigned p_87);
static int func_1(void)
{
    unsigned short l_42 = 1UL;
    char *l_55 = &g_56;
    unsigned char l_57 = 1UL;
    short l_2462 = 1L;
    long long l_2463 = (-8L);
    int l_2469 = 0x597196CDL;
    unsigned l_3534 = 1UL;
    int *l_3764 = &l_2469;
    int *l_3765 = &g_3766;
    (*l_3765) ^= ((*l_3764) = func_2(g_6, ((((safe_lshift_func_int8_t_s_u((func_9((((func_13((safe_add_func_uint8_t_u_u(func_20(g_6, (safe_sub_func_int32_t_s_s((func_28((safe_sub_func_int64_t_s_s(((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u(g_6, (safe_mod_func_int64_t_s_s((l_42 , ((((g_6 <= g_6) || func_43(l_42, (safe_rshift_func_int8_t_s_u(func_50(l_42, ((*l_55) = (((g_6 & g_6) && g_6) == 9L)), g_6, l_57), g_1021)), l_57, g_1116)) > 18446744073709551611UL) <= 0x23L)), l_42)))), l_42)) , g_1368), l_57)), l_57, g_1021, l_57, l_42) >= l_42), g_2225)), g_814, l_42, l_57), (*g_2283))), l_2462, g_1962, l_2463) != l_2469) < l_2462) , 0x64L), g_2470, g_1021) && l_57), l_42)) && l_3534) > 65535UL) , l_2469), g_2470));
    return (*l_3765);
}







static int func_2(int p_3, unsigned p_4, long long p_5)
{
    long long l_3537 = 0xE21089E6E27C91C5LL;
    unsigned ******l_3538 = (void*)0;
    unsigned ******l_3539 = (void*)0;
    unsigned *****l_3541 = &g_3120;
    unsigned ******l_3540 = &l_3541;
    unsigned *****l_3542 = &g_3120;
    unsigned short l_3545 = 0xC9F8L;
    int *l_3548 = &g_3238;
    int l_3557 = 0x35B4EF3AL;
    int l_3586 = (-10L);
    int l_3623 = 0xEF255F2AL;
    int l_3639 = 0xDF121238L;
    int l_3648 = 0x22A161C6L;
    int l_3665 = 0x4DE44424L;
    int l_3706 = 0x34C0A033L;
    int l_3714 = 0x3A985B22L;
    char *l_3741 = (void*)0;
    unsigned *******l_3751 = &l_3539;
    unsigned short *l_3758 = (void*)0;
    unsigned short *l_3759 = (void*)0;
    unsigned short *l_3760 = &g_102;
    unsigned *l_3761 = &g_1220;
    unsigned l_3762 = 0x345EEB34L;
    long long *l_3763 = &g_1116;
    if ((+(safe_lshift_func_int16_t_s_s((((*l_3540) = ((l_3537 , (p_3 & 0xD7L)) , &g_3120)) != l_3542), ((g_1368 , l_3537) || ((*g_1783) | ((l_3537 ^ p_5) , 251UL)))))))
    {
        int *l_3543 = &g_775;
        int *l_3544 = &g_76;
        int **l_3549 = &g_211;
        int l_3550 = 0xF36178ABL;
        int *l_3551 = &g_115;
        int *l_3552 = &g_115;
        int *l_3553 = &l_3550;
        int *l_3554 = &g_166;
        int *l_3555 = (void*)0;
        int *l_3556 = (void*)0;
        int *l_3558 = &l_3557;
        int *l_3559 = &l_3550;
        int *l_3560 = &g_775;
        int *l_3561 = &g_3238;
        int *l_3562 = &g_775;
        int *l_3563 = &l_3557;
        int *l_3564 = &g_166;
        int *l_3565 = (void*)0;
        int *l_3566 = &g_3238;
        int *l_3567 = (void*)0;
        int l_3568 = 0x609DC01FL;
        int *l_3569 = &g_775;
        int *l_3570 = &g_76;
        int *l_3571 = &l_3568;
        int *l_3572 = &l_3557;
        int *l_3573 = (void*)0;
        int *l_3574 = &l_3557;
        int *l_3575 = &g_76;
        int *l_3576 = &l_3550;
        int *l_3577 = &g_76;
        int *l_3578 = (void*)0;
        int *l_3579 = &g_166;
        int *l_3580 = &l_3568;
        int *l_3581 = (void*)0;
        int *l_3582 = &l_3557;
        int *l_3583 = &g_166;
        int *l_3584 = &g_166;
        int *l_3585 = &g_3238;
        int *l_3587 = &g_166;
        int *l_3588 = &l_3557;
        int *l_3589 = (void*)0;
        int *l_3590 = &g_166;
        int *l_3591 = &l_3568;
        int *l_3592 = (void*)0;
        int l_3593 = 0xD750EE8BL;
        int *l_3594 = &l_3593;
        int *l_3595 = &l_3557;
        int *l_3596 = (void*)0;
        int *l_3597 = (void*)0;
        int *l_3598 = &l_3586;
        int *l_3599 = &l_3586;
        int *l_3600 = &l_3593;
        int *l_3601 = &l_3568;
        int *l_3602 = &g_3238;
        int *l_3603 = &g_115;
        int *l_3604 = (void*)0;
        int l_3605 = 0xFBDD0DDFL;
        int *l_3606 = &l_3605;
        int *l_3607 = &g_775;
        int *l_3608 = &l_3568;
        int l_3609 = (-5L);
        int *l_3610 = &l_3557;
        int *l_3611 = &g_775;
        int *l_3612 = &l_3609;
        int *l_3613 = &g_76;
        int *l_3614 = &l_3609;
        int *l_3615 = &g_3238;
        int *l_3616 = &g_3238;
        int *l_3617 = &g_115;
        int *l_3618 = &g_3238;
        int *l_3619 = &l_3586;
        int *l_3620 = &g_775;
        int *l_3621 = &l_3557;
        int *l_3622 = (void*)0;
        int *l_3624 = &l_3557;
        int *l_3625 = &g_115;
        int *l_3626 = (void*)0;
        int l_3627 = (-9L);
        int *l_3628 = &l_3627;
        int *l_3629 = &g_3238;
        int *l_3630 = (void*)0;
        int *l_3631 = &l_3550;
        int *l_3632 = &l_3605;
        int l_3633 = (-1L);
        int *l_3634 = (void*)0;
        int *l_3635 = &l_3633;
        int *l_3636 = &g_775;
        int *l_3637 = (void*)0;
        int *l_3638 = &g_775;
        int *l_3640 = &l_3627;
        int *l_3641 = &l_3609;
        int *l_3642 = &l_3627;
        int *l_3643 = &g_76;
        int *l_3644 = &l_3605;
        int *l_3645 = &g_166;
        int *l_3646 = &l_3609;
        int *l_3647 = &l_3586;
        int l_3649 = 0x04CC20EAL;
        int *l_3650 = &l_3633;
        int *l_3651 = &l_3609;
        int *l_3652 = &g_115;
        int *l_3653 = &g_76;
        int *l_3654 = (void*)0;
        int *l_3655 = &g_775;
        int l_3656 = 0x1E54FB02L;
        int *l_3657 = (void*)0;
        int *l_3658 = &l_3633;
        int *l_3659 = &l_3639;
        int *l_3660 = (void*)0;
        int *l_3661 = &l_3609;
        int *l_3662 = &l_3649;
        int *l_3663 = &l_3605;
        int *l_3664 = (void*)0;
        int *l_3666 = &g_3238;
        int *l_3667 = (void*)0;
        int *l_3668 = &g_76;
        int *l_3669 = &g_76;
        int l_3670 = 0x61FD7984L;
        int *l_3671 = &l_3639;
        int *l_3672 = (void*)0;
        int *l_3673 = &l_3648;
        int l_3674 = 0L;
        int *l_3675 = &l_3674;
        int *l_3676 = (void*)0;
        int *l_3677 = &l_3586;
        int *l_3678 = &l_3557;
        int *l_3679 = &l_3670;
        int *l_3680 = &g_166;
        int *l_3681 = &l_3623;
        int *l_3682 = &l_3593;
        int l_3683 = 0x2A3DE22FL;
        int *l_3684 = &l_3593;
        int *l_3685 = &l_3609;
        int *l_3686 = &l_3683;
        int *l_3687 = &l_3568;
        int *l_3688 = &l_3593;
        int *l_3689 = &l_3649;
        int *l_3690 = &l_3557;
        int l_3691 = 6L;
        int *l_3692 = &l_3593;
        int l_3693 = 6L;
        int *l_3694 = &l_3557;
        int *l_3695 = &l_3586;
        int *l_3696 = &g_115;
        int *l_3697 = &l_3623;
        int *l_3698 = &l_3627;
        int l_3699 = 0L;
        int l_3700 = 0x44CAD188L;
        int *l_3701 = &l_3693;
        int *l_3702 = &g_76;
        int *l_3703 = &l_3656;
        int *l_3704 = &l_3670;
        int *l_3705 = (void*)0;
        int *l_3707 = &l_3656;
        int *l_3708 = &g_115;
        int *l_3709 = &l_3593;
        int *l_3710 = &l_3699;
        int *l_3711 = &l_3656;
        int *l_3712 = (void*)0;
        int *l_3713 = (void*)0;
        int *l_3715 = &l_3623;
        int *l_3716 = (void*)0;
        int *l_3717 = &l_3665;
        int *l_3718 = (void*)0;
        int *l_3719 = &l_3627;
        int *l_3720 = &l_3683;
        int *l_3721 = &l_3670;
        int *l_3722 = &l_3706;
        int *l_3723 = &l_3648;
        int l_3724 = 1L;
        int *l_3725 = (void*)0;
        int *l_3726 = (void*)0;
        unsigned long long l_3727 = 0xA22E89B57B131B6DLL;
        unsigned ****l_3730 = &g_3121;
        --l_3545;
        (*l_3549) = (l_3548 = &g_166);
        l_3727--;
        (*l_3682) |= ((void*)0 == l_3730);
    }
    else
    {
        int l_3731 = 0x451B90B1L;
        long long *l_3736 = (void*)0;
        long long *l_3737 = &g_823;
        unsigned char l_3740 = 246UL;
        short ***l_3742 = &g_2073;
        p_3 &= p_5;
        (*l_3742) = &g_2074;
    }
    (*l_3548) = (((((void*)0 == (*l_3540)) <= (((*l_3548) <= (safe_rshift_func_int8_t_s_u(((((((((*l_3763) ^= (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_3, (((*l_3751) = (p_3 , g_3749)) != ((safe_sub_func_uint32_t_u_u(((((**g_2073) = (((safe_lshift_func_int16_t_s_s(0xD1EEL, 3)) && (*l_3548)) > (((*l_3761) = (((*g_2342) = (safe_add_func_uint16_t_u_u(((*l_3760) ^= func_13(((*g_1783) = ((g_56 > p_3) & 0x8C9D1B8DEE06D114LL)), (*l_3548), p_5, (*l_3548))), (*g_2074)))) && (*l_3548))) , (*l_3548)))) , (void*)0) != &g_1772), l_3762)) , (void*)0)))) > (-5L)), 254UL))) >= (*l_3548)) && (*l_3548)) >= p_3) && p_5) , (void*)0) != (void*)0), (*g_1372)))) && p_4)) , p_4) <= p_3);
    return p_5;
}







static unsigned func_9(char p_10, short p_11, unsigned short p_12)
{
    unsigned short l_2473 = 5UL;
    unsigned short *l_2478 = &g_177;
    int l_2483 = (-7L);
    long long l_2484 = 0xDDF756E699CA1182LL;
    unsigned short *l_2485 = (void*)0;
    unsigned short *l_2486 = &g_102;
    int l_2542 = 0x601ECC94L;
    int l_2548 = 0x6F1B039BL;
    int l_2561 = 0L;
    int l_2564 = 1L;
    int l_2574 = 0x69382206L;
    int l_2576 = 0L;
    int l_2600 = 0xEBD40E9CL;
    unsigned long long l_2659 = 0x5CCB6E2AA87F6D7ALL;
    int l_2662 = 3L;
    short l_2665 = (-1L);
    unsigned l_2712 = 0xC6D62AA6L;
    unsigned long long l_3036 = 0UL;
    char *l_3058 = &g_56;
    unsigned *l_3062 = &g_3039;
    unsigned **l_3061 = &l_3062;
    unsigned ***l_3060 = &l_3061;
    int l_3087 = 0xC5C5D6ECL;
    unsigned ***l_3089 = &g_913;
    char l_3091 = (-1L);
    unsigned char l_3093 = 5UL;
    char l_3159 = 0xCEL;
    unsigned long long ****l_3258 = &g_2503;
    unsigned l_3307 = 0x77444D91L;
    unsigned char l_3381 = 249UL;
    int *l_3402 = &l_2542;
    unsigned char ***l_3518 = (void*)0;
    int l_3519 = 6L;
    char **l_3525 = &g_1783;
    char *l_3526 = &g_710;
    int **l_3527 = &g_1772;
    unsigned long long l_3530 = 0x41D1BF9839A6C39DLL;
    unsigned *l_3531 = &g_3524;
    unsigned char *l_3532 = &g_192;
    unsigned short l_3533 = 0xF64DL;
    if ((safe_rshift_func_uint16_t_u_u((l_2473 , (safe_lshift_func_int16_t_s_s(l_2473, 11))), ((*l_2486) = ((safe_mod_func_uint16_t_u_u((l_2483 |= ((l_2473 || ((((**g_2073) > 0x5DEFL) & (++(*l_2478))) | ((*g_2342) > ((safe_sub_func_int16_t_s_s(l_2473, 4L)) < l_2473)))) && l_2473)), l_2484)) , p_12)))))
    {
        unsigned long long ***l_2489 = &g_1178;
        int l_2504 = 0x24A8B97CL;
        char l_2505 = 0x01L;
        int *l_2516 = &l_2504;
        int *l_2517 = &g_76;
        int *l_2518 = (void*)0;
        int *l_2519 = &g_166;
        int *l_2520 = &g_166;
        int *l_2521 = (void*)0;
        int *l_2522 = &g_115;
        int *l_2523 = &g_775;
        int *l_2524 = &g_76;
        int *l_2525 = &g_166;
        int *l_2526 = &g_166;
        int *l_2527 = &g_76;
        int *l_2528 = &g_775;
        int *l_2529 = &g_166;
        int *l_2530 = &l_2483;
        int *l_2531 = &l_2483;
        int *l_2532 = &l_2504;
        int *l_2533 = &l_2504;
        int *l_2534 = &g_775;
        int *l_2535 = &l_2504;
        int *l_2536 = (void*)0;
        int *l_2537 = &l_2504;
        int *l_2538 = (void*)0;
        int *l_2539 = &l_2504;
        int *l_2540 = &l_2504;
        int *l_2541 = &l_2483;
        int *l_2543 = &g_76;
        int *l_2544 = &g_115;
        int l_2545 = (-1L);
        int *l_2546 = &g_115;
        int *l_2547 = (void*)0;
        int *l_2549 = &g_76;
        int *l_2550 = &l_2504;
        int l_2551 = 0x96045077L;
        int *l_2552 = &g_76;
        int *l_2553 = (void*)0;
        int *l_2554 = &g_76;
        int *l_2555 = &l_2483;
        int *l_2556 = &l_2483;
        int l_2557 = 0x51149676L;
        int *l_2558 = &g_775;
        int *l_2559 = &l_2542;
        int *l_2560 = (void*)0;
        int *l_2562 = &g_166;
        int *l_2563 = &l_2483;
        int *l_2565 = &l_2542;
        int *l_2566 = (void*)0;
        int l_2567 = 0L;
        int *l_2568 = &l_2548;
        int *l_2569 = &g_775;
        int *l_2570 = &l_2551;
        int *l_2571 = &l_2561;
        int *l_2572 = &l_2483;
        int *l_2573 = &l_2545;
        int *l_2575 = &l_2504;
        int *l_2577 = &l_2564;
        int *l_2578 = &l_2504;
        int *l_2579 = &g_775;
        int *l_2580 = (void*)0;
        int l_2581 = (-7L);
        int *l_2582 = &l_2542;
        int *l_2583 = &g_76;
        int *l_2584 = &l_2548;
        int *l_2585 = (void*)0;
        int *l_2586 = &l_2542;
        int *l_2587 = &g_76;
        int *l_2588 = &g_76;
        int *l_2589 = &l_2557;
        int *l_2590 = &l_2483;
        int l_2591 = 8L;
        int *l_2592 = &l_2591;
        int *l_2593 = (void*)0;
        int *l_2594 = (void*)0;
        int *l_2595 = &l_2561;
        int *l_2596 = &l_2574;
        int *l_2597 = &l_2551;
        int *l_2598 = &l_2576;
        int *l_2599 = &l_2557;
        int *l_2601 = &l_2581;
        int *l_2602 = &g_76;
        int *l_2603 = &l_2504;
        int *l_2604 = (void*)0;
        int *l_2605 = (void*)0;
        int *l_2606 = &l_2551;
        int *l_2607 = &g_775;
        int *l_2608 = &l_2574;
        int *l_2609 = &l_2542;
        int *l_2610 = &l_2542;
        int l_2611 = 0xE137617BL;
        int *l_2612 = &l_2567;
        int *l_2613 = (void*)0;
        int *l_2614 = &l_2483;
        int *l_2615 = &l_2581;
        int *l_2616 = &l_2545;
        int *l_2617 = (void*)0;
        int *l_2618 = &g_166;
        int *l_2619 = &l_2545;
        int *l_2620 = &l_2600;
        int *l_2629 = &g_68;
        for (g_177 = (-9); (g_177 != 12); g_177 = safe_add_func_int8_t_s_s(g_177, 3))
        {
            unsigned long long ****l_2490 = (void*)0;
            unsigned long long ****l_2491 = &l_2489;
            int l_2506 = 1L;
            long long *l_2508 = &g_564;
            long long *l_2509 = &g_823;
            int l_2510 = 0x3F06F29BL;
            g_211 = &g_775;
            l_2510 ^= (((((func_13(func_13((((p_10 < ((((*l_2491) = l_2489) == &g_1178) ^ ((*l_2509) &= ((*l_2508) = (safe_rshift_func_uint8_t_u_s(((func_13(p_12, p_10, g_1517, (g_2507 = func_13((l_2504 = ((safe_add_func_int8_t_s_s(((((*g_211) = (((**g_2073) = (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((func_13(((safe_add_func_uint64_t_u_u((g_2502 != (void*)0), l_2484)) && p_10), l_2504, p_12, l_2505) , l_2506), 0xA5DD0E91C8D9CFF6LL)), p_10))) < (-9L))) | l_2483) >= l_2505), (**g_1371))) , (*g_1205))), p_12, g_1548, l_2484))) , 0x8DAC5BAC832E9F58LL) , l_2506), 4)))))) , l_2506) < p_10), p_11, l_2473, l_2505), p_12, g_1517, g_710) ^ p_11) == 0x21L) || l_2484) >= (-2L)) < l_2506);
            if (l_2505)
                continue;
            if ((l_2483 = ((void*)0 != (*g_2073))))
            {
                unsigned short l_2513 = 0x670FL;
                short *l_2514 = (void*)0;
                short *l_2515 = &g_489;
                l_2483 |= (((*l_2515) |= ((*g_2074) |= (safe_lshift_func_int16_t_s_s(l_2513, 14)))) , l_2513);
            }
            else
            {
                (*g_211) |= p_12;
                return g_1103;
            }
        }
        g_2621--;
        for (g_1618 = 0; (g_1618 == 11); g_1618++)
        {
            int *l_2628 = &g_68;
            int **l_2627 = &l_2628;
            int **l_2630 = (void*)0;
            int **l_2631 = &l_2572;
            g_2626 = &g_1167;
            (*l_2631) = func_84((l_2629 = ((*l_2627) = l_2527)), l_2576, (p_10 , 9UL));
        }
    }
    else
    {
        int *l_2640 = &g_775;
        int l_2647 = (-1L);
        short **l_2666 = &g_2074;
        unsigned *l_2669 = &g_190;
        unsigned char l_2670 = 0x46L;
        int l_2699 = 0x5B4008FDL;
        int l_2703 = (-1L);
        int l_2761 = (-1L);
        int l_2797 = 0xFA1A243BL;
        int l_2799 = (-2L);
        char *l_2824 = &g_710;
        unsigned l_2827 = 0xA18A3614L;
        char *l_2899 = &g_56;
        unsigned l_2909 = 0xF27A6CF7L;
        int l_2915 = 0xF8B7F7FEL;
        unsigned long long **l_2917 = &g_2342;
        unsigned short *l_3082 = &g_1784;
        unsigned ****l_3117 = &l_3060;
        int l_3135 = 0xFEC39D10L;
        unsigned *l_3149 = &g_2621;
        char l_3396 = 0x37L;
        unsigned long long *l_3507 = &g_814;
        short l_3512 = 0x8F42L;
        l_2647 &= ((*l_2640) = (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(((func_13(l_2574, ((safe_lshift_func_uint8_t_u_s((l_2640 == l_2640), (((**g_96) , &p_11) != (void*)0))) , (p_10 || ((*l_2640) < (safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((((*g_1783) = ((safe_rshift_func_uint8_t_u_u((l_2483 && p_12), (*l_2640))) ^ (*g_2342))) != (*l_2640)), l_2548)), 3))))), g_1548, p_12) & l_2561) & (*l_2640)), 6)) , p_10), (*l_2640))), p_10)));
        if (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((*g_2342) ^= (safe_add_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u(func_28((*l_2640), (((*l_2669) |= ((p_10 = (safe_unary_minus_func_uint8_t_u((*l_2640)))) >= (l_2561 = (safe_sub_func_uint16_t_u_u(l_2659, ((((**g_2073) = l_2662) <= ((((safe_mod_func_int16_t_s_s(p_12, ((l_2665 & (l_2666 != (void*)0)) , (--(*l_2486))))) > (g_1129 > 0xC2C7113A64005B91LL)) , (*l_2640)) < p_11)) < (-1L))))))) != p_12), l_2542, l_2576, (*l_2640)), l_2670)), 4UL))) | (-1L)), 5)), (*l_2640))) == p_12))
        {
            int *l_2671 = &l_2542;
            int *l_2672 = &l_2647;
            int *l_2673 = (void*)0;
            int *l_2674 = &g_775;
            int l_2675 = (-1L);
            int *l_2676 = &g_76;
            int *l_2677 = (void*)0;
            int *l_2678 = &g_166;
            int l_2679 = 0x8F36204FL;
            int *l_2680 = &l_2576;
            int *l_2681 = &l_2574;
            int *l_2682 = (void*)0;
            int *l_2683 = &l_2483;
            int *l_2684 = &l_2564;
            int *l_2685 = &g_115;
            int *l_2686 = &l_2561;
            int *l_2687 = &g_166;
            int *l_2688 = &l_2561;
            int *l_2689 = &l_2679;
            int *l_2690 = &l_2576;
            int *l_2691 = &l_2564;
            int *l_2692 = &l_2561;
            int *l_2693 = &l_2679;
            int *l_2694 = &l_2542;
            int *l_2695 = &l_2576;
            int *l_2696 = &l_2483;
            int *l_2697 = (void*)0;
            int *l_2698 = &l_2647;
            int *l_2700 = &g_115;
            int *l_2701 = &l_2561;
            int *l_2702 = &g_76;
            int *l_2704 = &l_2647;
            int *l_2705 = &l_2699;
            int *l_2706 = &l_2542;
            int *l_2707 = &l_2574;
            int *l_2708 = &l_2542;
            int *l_2709 = &g_775;
            int *l_2710 = &l_2548;
            int *l_2711 = &l_2564;
            int l_2758 = 0x07BFD0DFL;
            int l_2759 = 0xB710D129L;
            int l_2795 = 0xB03B0540L;
            l_2712++;
            if ((safe_add_func_int32_t_s_s(p_10, (*l_2640))))
            {
                int *l_2721 = &g_775;
                int *l_2722 = &l_2675;
                int *l_2723 = (void*)0;
                int *l_2724 = &g_775;
                int *l_2725 = &g_76;
                int *l_2726 = &g_166;
                int *l_2727 = &l_2699;
                int *l_2728 = (void*)0;
                int *l_2729 = &l_2699;
                int *l_2730 = (void*)0;
                int *l_2731 = &l_2542;
                int *l_2732 = (void*)0;
                int *l_2733 = &l_2561;
                int *l_2734 = &l_2542;
                int *l_2735 = &l_2574;
                int *l_2736 = &g_775;
                int *l_2737 = (void*)0;
                int *l_2738 = &g_775;
                int *l_2739 = (void*)0;
                int *l_2740 = &l_2679;
                int *l_2741 = &l_2574;
                int *l_2742 = &l_2647;
                int l_2743 = 1L;
                int *l_2744 = &g_775;
                int *l_2745 = &l_2564;
                int *l_2746 = &l_2647;
                int *l_2747 = &l_2675;
                int *l_2748 = &g_115;
                int *l_2749 = &l_2647;
                int *l_2750 = (void*)0;
                int *l_2751 = (void*)0;
                int *l_2752 = &l_2600;
                int l_2753 = (-2L);
                int *l_2754 = &l_2600;
                int *l_2755 = &l_2753;
                int *l_2756 = (void*)0;
                int *l_2757 = &l_2564;
                int l_2760 = (-8L);
                int *l_2762 = &g_775;
                int *l_2763 = &l_2761;
                int *l_2764 = &l_2576;
                int *l_2765 = &l_2548;
                int *l_2766 = &l_2743;
                int *l_2767 = &l_2759;
                int *l_2768 = (void*)0;
                int *l_2769 = (void*)0;
                int *l_2770 = &g_76;
                int *l_2771 = &l_2576;
                int *l_2772 = &l_2483;
                int l_2773 = (-1L);
                int *l_2774 = &l_2548;
                int *l_2775 = &l_2600;
                int *l_2776 = &l_2675;
                int *l_2777 = &l_2703;
                int *l_2778 = &l_2600;
                int *l_2779 = &l_2564;
                int l_2780 = (-1L);
                int *l_2781 = &l_2703;
                int *l_2782 = &l_2675;
                int *l_2783 = &g_76;
                int *l_2784 = (void*)0;
                int *l_2785 = &l_2679;
                int *l_2786 = &g_166;
                int *l_2787 = &l_2600;
                int *l_2788 = &g_775;
                int l_2789 = 0x197E8AB9L;
                int *l_2790 = &l_2758;
                int *l_2791 = &l_2758;
                int *l_2793 = &l_2759;
                int *l_2794 = &l_2743;
                int *l_2796 = &l_2743;
                int *l_2798 = &l_2760;
                int *l_2801 = &l_2600;
                int *l_2802 = &l_2799;
                int *l_2803 = &l_2773;
                int *l_2804 = (void*)0;
                int *l_2805 = &g_775;
                int *l_2806 = &l_2542;
                int *l_2808 = (void*)0;
                int *l_2809 = &l_2760;
                int *l_2810 = &l_2647;
                for (l_2712 = 0; (l_2712 > 46); l_2712 = safe_add_func_uint8_t_u_u(l_2712, 3))
                {
                    int **l_2719 = (void*)0;
                    int **l_2720 = &l_2692;
                    (*l_2720) = &g_166;
                }
                g_2811++;
                (*l_2681) &= ((*l_2744) = ((*g_2074) , 0xC54BE0FFL));
                (*l_2711) |= p_11;
            }
            else
            {
                int *l_2818 = &l_2662;
                int l_2833 = 0x57D9C45EL;
                unsigned l_2838 = 0x8F427FB0L;
                int l_2869 = 0xFD721255L;
                for (g_2792 = 0; (g_2792 != (-5)); g_2792 = safe_sub_func_uint16_t_u_u(g_2792, 8))
                {
                    char l_2821 = 0L;
                    int **l_2822 = &l_2818;
                    unsigned short *l_2823 = (void*)0;
                    int **l_2828 = &l_2690;
                    (*l_2710) |= p_11;
                    (*l_2692) &= (safe_mul_func_int16_t_s_s(l_2827, 0L));
                    (*l_2828) = l_2818;
                    for (g_775 = 0; (g_775 < 19); g_775 = safe_add_func_uint32_t_u_u(g_775, 1))
                    {
                        short l_2836 = 0xA532L;
                        long long *l_2837 = &g_564;
                        int l_2839 = 0x3D7987C1L;
                        int l_2840 = 0xA0782F66L;
                        int *l_2841 = &l_2576;
                        int *l_2842 = &l_2795;
                        int *l_2843 = (void*)0;
                        int *l_2844 = (void*)0;
                        int *l_2845 = &l_2679;
                        int *l_2846 = &l_2797;
                        int *l_2847 = &g_115;
                        int *l_2848 = &l_2840;
                        int *l_2849 = (void*)0;
                        int *l_2850 = &l_2542;
                        int *l_2851 = &g_115;
                        int *l_2852 = &l_2761;
                        int *l_2853 = &l_2675;
                        int *l_2854 = (void*)0;
                        int *l_2855 = &l_2799;
                        int *l_2856 = &l_2600;
                        int *l_2857 = &l_2600;
                        int *l_2858 = &l_2576;
                        int *l_2859 = (void*)0;
                        int *l_2860 = &l_2564;
                        int *l_2861 = &g_76;
                        int *l_2862 = &g_115;
                        int *l_2863 = &l_2542;
                        int *l_2864 = &l_2647;
                        int *l_2865 = &l_2799;
                        int *l_2866 = &g_166;
                        int *l_2867 = &l_2548;
                        int *l_2868 = &l_2576;
                        int *l_2870 = &l_2869;
                        int *l_2871 = &g_76;
                        int *l_2872 = (void*)0;
                        int *l_2873 = &l_2840;
                        int *l_2874 = &l_2600;
                        (*l_2690) = p_12;
                        (*l_2694) &= func_28((safe_rshift_func_uint8_t_u_u(l_2833, 3)), (safe_sub_func_int64_t_s_s(l_2836, (**l_2828))), p_12, ((*l_2837) = g_98), l_2838);
                        --g_2875;
                    }
                }
                return l_2484;
            }
            return p_12;
        }
        else
        {
            unsigned *l_2882 = (void*)0;
            int l_2883 = 0x58393CB5L;
            unsigned *l_2884 = &g_1799;
            int *l_2900 = &g_166;
            int *l_2901 = &l_2576;
            int *l_2902 = &l_2600;
            int *l_2903 = &g_166;
            int *l_2904 = &l_2483;
            int *l_2905 = &l_2799;
            int *l_2906 = &l_2797;
            int *l_2907 = &l_2542;
            int *l_2908 = &g_115;
            char *l_2914 = &g_522;
            unsigned char l_2916 = 0x95L;
            int l_2974 = 0x35EFBEC3L;
            short l_2976 = (-6L);
            int l_3024 = 0xCB6C2493L;
            int *l_3090 = (void*)0;
            unsigned **l_3104 = &l_2669;
            unsigned ****l_3119 = &l_3060;
            (*l_2640) = ((p_12 == (safe_sub_func_int32_t_s_s(p_11, (*l_2640)))) != 4L);
            l_2909++;
            if (((((**g_2073) = ((safe_sub_func_uint8_t_u_u(l_2473, (*l_2902))) , func_43((((func_28(p_10, p_11, g_1548, g_2507, (*l_2908)) , 0x3B094D2EL) , l_2917) == l_2917), p_11, p_11, g_2507))) ^ l_2659) & (*l_2901)))
            {
                int *l_2918 = &l_2703;
                int *l_2919 = &l_2799;
                int l_2920 = (-1L);
                int *l_2921 = &l_2797;
                int *l_2922 = &l_2561;
                int *l_2923 = &l_2600;
                int *l_2924 = &g_115;
                int *l_2925 = &l_2761;
                int *l_2926 = (void*)0;
                int *l_2927 = &l_2703;
                int *l_2928 = (void*)0;
                int *l_2929 = &l_2542;
                int *l_2930 = &g_76;
                int *l_2931 = (void*)0;
                int *l_2932 = &g_166;
                int *l_2933 = &l_2542;
                int *l_2934 = &g_76;
                int *l_2935 = &g_76;
                int *l_2936 = (void*)0;
                int *l_2937 = &l_2564;
                int *l_2938 = &l_2574;
                int *l_2939 = &l_2483;
                int *l_2940 = (void*)0;
                int l_2941 = 0L;
                int *l_2942 = (void*)0;
                int *l_2943 = &l_2920;
                int *l_2944 = &l_2761;
                int l_2945 = 0x18BA0D12L;
                int *l_2946 = &l_2797;
                int *l_2947 = &l_2647;
                int *l_2948 = (void*)0;
                int *l_2949 = &l_2799;
                int *l_2950 = &l_2883;
                int *l_2951 = &l_2883;
                int *l_2952 = (void*)0;
                int *l_2953 = &l_2548;
                int *l_2954 = &l_2703;
                int *l_2955 = &l_2915;
                int *l_2956 = &l_2600;
                int l_2957 = 0xDF8114EEL;
                int *l_2958 = (void*)0;
                int *l_2959 = (void*)0;
                int *l_2960 = &l_2576;
                int *l_2961 = (void*)0;
                int *l_2962 = &g_76;
                int *l_2963 = &g_775;
                int *l_2964 = (void*)0;
                int *l_2965 = (void*)0;
                int *l_2966 = &g_115;
                int *l_2967 = &l_2561;
                int *l_2968 = &l_2915;
                int *l_2969 = &l_2915;
                int *l_2970 = &l_2957;
                int *l_2971 = &l_2647;
                int *l_2972 = &l_2761;
                int *l_2973 = (void*)0;
                int *l_2975 = &l_2915;
                int *l_2977 = &g_166;
                int *l_2978 = &l_2761;
                int l_2979 = 0L;
                int *l_2980 = (void*)0;
                int *l_2981 = &l_2703;
                int *l_2982 = &l_2979;
                int *l_2983 = (void*)0;
                int *l_2984 = &l_2647;
                int *l_2985 = &l_2600;
                int *l_2986 = &g_115;
                int *l_2987 = &l_2945;
                int *l_2988 = (void*)0;
                int *l_2989 = &l_2600;
                int *l_2990 = &l_2979;
                int *l_2991 = &l_2797;
                int *l_2992 = &l_2920;
                int *l_2993 = &l_2883;
                int *l_2994 = &l_2703;
                int *l_2995 = &l_2647;
                int *l_2996 = (void*)0;
                int *l_2997 = &l_2920;
                int *l_2998 = (void*)0;
                int *l_2999 = &l_2574;
                int *l_3000 = &l_2915;
                int *l_3001 = &l_2915;
                int *l_3002 = (void*)0;
                int *l_3003 = &l_2797;
                int *l_3004 = (void*)0;
                int *l_3005 = &l_2703;
                int *l_3006 = (void*)0;
                int *l_3007 = &l_2920;
                int *l_3008 = &l_2941;
                int l_3009 = 8L;
                int *l_3010 = &l_2542;
                int *l_3011 = &l_2564;
                int *l_3012 = &l_2574;
                int *l_3013 = &l_2574;
                int l_3014 = 0x2432D254L;
                int *l_3015 = &l_2647;
                int *l_3016 = (void*)0;
                int *l_3017 = &l_2761;
                int *l_3018 = (void*)0;
                int *l_3019 = &l_2483;
                int *l_3020 = &l_2941;
                int *l_3021 = &l_3014;
                int *l_3022 = (void*)0;
                int *l_3023 = &l_2979;
                int *l_3025 = &l_3024;
                int *l_3026 = &l_2915;
                int *l_3027 = &l_3024;
                int *l_3028 = &g_115;
                int *l_3029 = &l_2974;
                int *l_3030 = (void*)0;
                int *l_3031 = &l_2483;
                int *l_3032 = &l_2761;
                int l_3033 = 9L;
                int *l_3034 = (void*)0;
                int *l_3035 = (void*)0;
                ++l_3036;
                g_3039--;
            }
            else
            {
                unsigned long long l_3042 = 0x14D55FF5FA885720LL;
                unsigned **l_3048 = &l_2669;
                unsigned char *l_3053 = &l_2670;
                unsigned l_3106 = 0x77E957AEL;
                unsigned *****l_3118 = &l_3117;
                int **l_3130 = &g_1772;
                l_3042++;
                for (g_1355 = 0; (g_1355 >= 58); g_1355++)
                {
                    unsigned **l_3047 = &l_2669;
                    int l_3054 = 1L;
                    long long l_3072 = (-1L);
                    (*l_2900) ^= ((!(((l_3047 == l_3048) & (((l_3042 | (safe_mod_func_uint16_t_u_u(0x2E22L, (**g_2073)))) , 0x192D812CB721649FLL) > g_716)) , 2L)) , (*l_2907));
                    if ((&g_2811 == (g_3055 = &p_12)))
                    {
                        int l_3059 = (-6L);
                        unsigned ****l_3063 = (void*)0;
                        unsigned ****l_3064 = &l_3060;
                        unsigned *l_3071 = &l_2712;
                        (*l_2905) = (safe_rshift_func_uint16_t_u_u(((0xEA26749CL || g_1327) && 0x765465FEL), 8));
                        (*l_2903) ^= ((p_11 , 255UL) >= 246UL);
                    }
                    else
                    {
                        int *l_3079 = &l_2662;
                        int l_3088 = 0x0BD72861L;
                        unsigned l_3092 = 0x88DD9B2CL;
                        (*l_2905) ^= ((func_28(l_2548, (**g_2073), p_11, l_3042, l_3093) && l_3088) < (*l_2907));
                    }
                    (*l_2902) = ((safe_mod_func_uint8_t_u_u(func_13(((p_11 > (safe_mod_func_uint64_t_u_u(1UL, (0x4F6BB327L | 0x9030D746L)))) | (*l_2903)), p_11, ((l_3072 <= (--(*g_3055))) , (safe_lshift_func_uint16_t_u_s(0x5DDCL, p_10))), p_11), (**g_1204))) | l_3054);
                    if (p_10)
                        break;
                }
                for (l_2483 = 0; (l_2483 >= (-25)); l_2483 = safe_sub_func_uint8_t_u_u(l_2483, 1))
                {
                    unsigned ***l_3105 = &l_3048;
                    if (((*l_2905) = (((*l_3089) = &l_2669) != ((*l_3105) = l_3104))))
                    {
                        (*l_2908) ^= ((*g_1205) > 0xD2L);
                        --l_3106;
                    }
                    else
                    {
                        return (**g_913);
                    }
                    (*l_2905) = 1L;
                }
                (*l_3130) = func_84(&g_68, (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u(((*l_3082) = (l_2473 >= ((*l_3053) ^= p_10))), (((*g_2342) ^= p_12) == (func_13((safe_sub_func_int8_t_s_s((0x92L > p_11), (((*l_2640) = ((((*l_3118) = l_3117) != (g_3120 = l_3119)) || (+(((safe_lshift_func_uint16_t_u_u(((((**l_3104) = (safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((l_2483 , g_1548) , (-10L)), l_3042)), 18446744073709551613UL))) , 4294967286UL) >= 0x3F8BDE22L), (*l_2640))) >= (*g_3055)) | 0L)))) , (*g_2283)))), l_3106, (*l_2900), (*g_3055)) & (**g_2073))))) < p_12), l_2712)), 15)), (*l_2908));
            }
            (*l_2905) &= ((*l_2902) = (safe_add_func_uint8_t_u_u(((*g_3055) , (safe_add_func_uint16_t_u_u(l_3135, (*l_2902)))), l_2600)));
        }
        if (func_13(p_12, p_10, (g_823 = (((*l_2669) |= p_10) >= (++(*l_3149)))), (*g_3055)))
        {
            unsigned short l_3152 = 0x22D6L;
            l_2600 &= ((*l_2640) ^= l_3152);
        }
        else
        {
            char l_3169 = (-6L);
            int l_3194 = 0x4475FA75L;
            int *l_3259 = &l_2797;
            unsigned long long l_3308 = 9UL;
            int *l_3313 = &l_2561;
            int *l_3314 = (void*)0;
            int *l_3315 = (void*)0;
            int *l_3316 = &l_2574;
            int *l_3317 = &g_76;
            int *l_3318 = &l_2647;
            int *l_3319 = &l_2915;
            int *l_3320 = &l_3194;
            int *l_3321 = &l_2647;
            int *l_3322 = &g_115;
            int *l_3323 = &l_2600;
            int *l_3324 = &l_2797;
            int *l_3325 = &g_76;
            int *l_3326 = &g_3238;
            int *l_3327 = &g_76;
            int *l_3328 = &l_2483;
            int *l_3329 = &l_2703;
            int *l_3330 = &g_166;
            int *l_3331 = &l_2797;
            int *l_3332 = (void*)0;
            int *l_3333 = &l_2561;
            int *l_3334 = &l_2548;
            int *l_3335 = &l_3194;
            int *l_3336 = &g_775;
            int *l_3337 = &l_2542;
            int *l_3338 = &g_3238;
            int l_3339 = 0x83A95003L;
            int *l_3340 = (void*)0;
            int *l_3341 = &l_2600;
            int *l_3342 = &l_2647;
            int *l_3343 = &l_2561;
            int *l_3344 = (void*)0;
            int *l_3345 = (void*)0;
            int *l_3346 = (void*)0;
            int *l_3347 = &l_2542;
            int *l_3348 = &l_3339;
            int *l_3349 = &l_2915;
            int *l_3350 = &g_115;
            int *l_3351 = &g_775;
            int *l_3352 = &l_3194;
            int *l_3353 = (void*)0;
            int *l_3354 = &l_3194;
            int *l_3355 = &g_115;
            int *l_3356 = &g_166;
            int *l_3357 = &l_2915;
            int *l_3358 = &l_2699;
            int *l_3359 = &l_3135;
            int l_3360 = 0x73D06DB4L;
            int *l_3361 = &l_2542;
            int l_3362 = 0xD2D7349CL;
            int *l_3363 = &l_3362;
            int *l_3364 = &l_2761;
            int *l_3365 = (void*)0;
            int *l_3366 = (void*)0;
            int *l_3367 = (void*)0;
            int *l_3368 = &l_2699;
            int *l_3369 = &g_115;
            int *l_3370 = &l_2542;
            int *l_3371 = &g_76;
            int *l_3372 = (void*)0;
            int *l_3373 = (void*)0;
            int *l_3374 = &g_76;
            int *l_3375 = &g_76;
            int *l_3376 = &l_2548;
            int *l_3377 = (void*)0;
            int l_3378 = 0xB795D474L;
            int *l_3379 = (void*)0;
            int *l_3380 = (void*)0;
            unsigned char *l_3384 = &l_3093;
            int *l_3395 = &g_2807;
            unsigned long long l_3397 = 18446744073709551606UL;
            unsigned long long l_3404 = 0UL;
            unsigned ****l_3423 = &l_3089;
            for (l_2600 = 10; (l_2600 >= (-1)); --l_2600)
            {
                unsigned long long ****l_3167 = &g_2503;
                int l_3168 = 0x73FB34C2L;
                int *l_3288 = &g_68;
                short *l_3309 = (void*)0;
                short *l_3310 = &g_2792;
                short *l_3311 = &g_489;
                int **l_3312 = &l_2640;
                if (((p_12 , (((!p_11) ^ (((**g_1204) == 0xC9L) , ((safe_mod_func_int16_t_s_s((((*l_2640) |= (p_11 , l_3159)) , l_2484), (safe_lshift_func_int8_t_s_u((l_3091 >= p_12), p_11)))) != p_10))) , g_3039)) , (*l_2640)))
                {
                    short l_3164 = 1L;
                    int l_3170 = (-2L);
                    int l_3204 = 0xA5C927CEL;
                    int l_3242 = 1L;
                    unsigned long long l_3275 = 0x60B4792726C17AD0LL;
                    if ((p_11 & (((*l_2640) = (safe_sub_func_int8_t_s_s(l_2483, ((*g_2074) <= ((*l_2640) , (**g_2073)))))) , ((func_13(l_3164, l_2483, l_3164, (~(safe_sub_func_int8_t_s_s(((((l_3167 != &g_2503) == 0x3BA0756ED3AA5362LL) > p_11) || (*l_2640)), l_2659)))) == l_3168) == p_12))))
                    {
                        int *l_3171 = &g_76;
                        int *l_3172 = &l_2564;
                        int *l_3173 = &l_2647;
                        int *l_3174 = &l_2564;
                        int *l_3175 = (void*)0;
                        int *l_3176 = &l_3168;
                        int *l_3177 = &l_2647;
                        int *l_3178 = &l_2703;
                        int *l_3179 = &l_2483;
                        int *l_3180 = &l_2564;
                        int *l_3181 = (void*)0;
                        int *l_3182 = &g_775;
                        int *l_3183 = (void*)0;
                        int *l_3184 = &l_2542;
                        int *l_3185 = (void*)0;
                        int *l_3186 = (void*)0;
                        int *l_3187 = &l_2576;
                        int l_3188 = 0L;
                        int *l_3189 = &l_2703;
                        int *l_3190 = (void*)0;
                        int *l_3191 = (void*)0;
                        int *l_3192 = &l_2576;
                        int *l_3193 = (void*)0;
                        int *l_3195 = &l_3188;
                        int *l_3196 = &g_775;
                        int *l_3197 = (void*)0;
                        int *l_3198 = &l_2574;
                        int *l_3199 = &l_2483;
                        int *l_3200 = (void*)0;
                        int *l_3201 = &l_2576;
                        int *l_3202 = (void*)0;
                        int *l_3203 = &l_2761;
                        int *l_3205 = &l_3188;
                        int *l_3206 = &l_3168;
                        int *l_3207 = &l_2542;
                        int *l_3208 = &l_2564;
                        int *l_3209 = &l_3204;
                        int *l_3210 = (void*)0;
                        int *l_3211 = &l_3168;
                        int *l_3212 = &l_2797;
                        int *l_3213 = &l_3204;
                        int *l_3214 = &l_2564;
                        int *l_3215 = &l_3194;
                        int *l_3216 = (void*)0;
                        int *l_3217 = &l_2576;
                        int *l_3218 = &l_2548;
                        int *l_3219 = &l_2915;
                        int *l_3220 = (void*)0;
                        int *l_3221 = (void*)0;
                        int *l_3222 = &g_166;
                        int *l_3223 = &l_3188;
                        int *l_3224 = (void*)0;
                        int *l_3225 = (void*)0;
                        int *l_3226 = (void*)0;
                        int *l_3227 = &l_2542;
                        int *l_3228 = &l_2542;
                        int *l_3229 = &l_2576;
                        int *l_3230 = &l_2548;
                        int *l_3231 = &l_2561;
                        int *l_3232 = &l_2703;
                        int *l_3233 = (void*)0;
                        int *l_3234 = &l_2548;
                        int *l_3235 = &l_3204;
                        int *l_3236 = &l_2915;
                        int *l_3237 = (void*)0;
                        int *l_3239 = &l_2797;
                        int *l_3240 = (void*)0;
                        int *l_3241 = (void*)0;
                        int *l_3243 = &l_2483;
                        int *l_3244 = &l_2647;
                        int *l_3245 = &l_3170;
                        int *l_3246 = &l_2761;
                        int *l_3247 = &l_2548;
                        int *l_3248 = &g_775;
                        int *l_3249 = &l_3170;
                        int *l_3250 = &g_775;
                        int *l_3251 = &l_2574;
                        int *l_3252 = (void*)0;
                        l_3169 = p_10;
                        --g_3253;
                        (*l_3234) = ((*g_2074) & func_28((safe_unary_minus_func_uint16_t_u((0x0926L && ((p_11 , 9L) & (((0x64L == ((func_13((safe_unary_minus_func_uint8_t_u((l_3194 |= 0xE5L))), (l_3242 , (((*l_3199) != 0x675F4119D409BAC6LL) || l_3164)), g_2800, p_12) ^ (*g_3055)) == (-1L))) > 0x92L) && 3UL))))), l_3168, (*g_3055), p_12, p_10));
                        (*l_2640) = (l_3258 != &g_2503);
                    }
                    else
                    {
                        int **l_3260 = &g_1772;
                        int *l_3261 = (void*)0;
                        int *l_3262 = &l_3135;
                        int *l_3263 = &l_3168;
                        int *l_3264 = &l_3168;
                        int *l_3265 = (void*)0;
                        int *l_3266 = (void*)0;
                        int *l_3267 = &l_3194;
                        int *l_3268 = &l_2576;
                        int *l_3269 = &g_3238;
                        int *l_3270 = &l_3170;
                        int *l_3271 = &l_3194;
                        int *l_3272 = (void*)0;
                        int *l_3273 = &g_775;
                        int *l_3274 = (void*)0;
                        (*l_3260) = l_3259;
                        (*g_1772) = 0xAF090E28L;
                        if (p_12)
                            break;
                        ++l_3275;
                    }
                }
                else
                {
                    short *l_3281 = &g_489;
                    short *l_3282 = &g_2792;
                    short l_3285 = (-6L);
                    int **l_3286 = (void*)0;
                    int **l_3287 = &l_2640;
                    (*l_2640) ^= (*l_3259);
                    (*l_2640) = ((safe_rshift_func_int8_t_s_s((**g_1204), 7)) != func_13((l_3168 = l_3036), func_13((g_1355 != l_3285), ((*l_2640) = (*l_3259)), p_11, (*g_3055)), p_10, (*g_3055)));
                    (*l_3287) = &l_2761;
                }
                (*l_3312) = func_84(l_3288, (safe_add_func_uint16_t_u_u((((*l_3058) = p_12) >= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_3259) = p_11) || (g_1103 && ((safe_rshift_func_uint16_t_u_s(0xE4AAL, 4)) || (safe_mod_func_int16_t_s_s(((*l_3311) = ((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((*g_3055), 2)), ((0x6456L <= (**g_2073)) , (safe_mod_func_int16_t_s_s(((*l_3310) ^= ((*g_2074) = (((*l_3259) = (((((func_13(((*g_2283) = (l_2548 | 0UL)), (*l_2640), l_3168, (*l_3259)) == l_3307) > p_10) || p_10) != g_1821) || l_3308)) , p_10))), p_11))))), 1)) , 1L)), p_11))))), (**g_1204))), (*l_2640)))), p_11)), g_775);
            }
            (*l_2640) = g_1220;
            --l_3381;
            if (((p_11 < ((((*l_3384)--) , 0x106F8FF75899FA43LL) && 0x9F764569CE9A0360LL)) && (((*l_2899) &= (safe_sub_func_int16_t_s_s((((((((p_12 = (*l_3329)) & p_10) & p_10) , p_12) < l_3396) , l_3397) > (*l_2640)), p_11))) & 0x0CL)))
            {
                short l_3405 = 0x8EBCL;
                int l_3407 = (-9L);
                int l_3408 = (-1L);
                int l_3409 = 0xC889CE5BL;
                unsigned char l_3418 = 0UL;
                int **l_3498 = &l_3318;
                g_1772 = &l_2483;
                if ((0UL >= (safe_rshift_func_int8_t_s_u(((*g_2502) == (*g_2502)), 3))))
                {
                    unsigned short l_3411 = 5UL;
                    int *l_3414 = &l_2761;
                    if (((*l_3331) = (safe_rshift_func_int8_t_s_u((**g_1204), 7))))
                    {
                        int **l_3403 = &l_3370;
                        (*l_3403) = l_3402;
                    }
                    else
                    {
                        short l_3406 = 2L;
                        int l_3410 = 0L;
                        l_3402 = func_84(&g_2807, (((*l_3149) |= l_3405) , l_3405), ((0x23L <= 255UL) , 0xDB510AD4L));
                        l_3411--;
                        (*l_3321) &= (*l_2640);
                    }
                    l_2640 = l_3414;
                }
                else
                {
                    short l_3415 = 5L;
                    int l_3417 = 0L;
                    char l_3424 = (-1L);
                    int l_3426 = (-8L);
                    int l_3427 = (-8L);
                    int l_3452 = 0x3F6104B8L;
                    if ((((*g_2074) = func_13(((*l_3058) &= (*g_1783)), l_3415, (*l_2640), (*l_3361))) != p_10))
                    {
                        char l_3416 = (-3L);
                        int **l_3425 = &l_3326;
                        l_3418--;
                        (*l_3325) = ((*l_3352) = p_10);
                        (*l_3425) = ((func_20((safe_add_func_int32_t_s_s(((void*)0 == l_3423), g_647)), g_1355, g_1784, (l_3416 , ((p_10 & ((**g_2073) >= ((p_11 > l_3416) ^ g_482))) <= l_3424)), p_12) , p_12) , &g_166);
                    }
                    else
                    {
                        int *l_3428 = &l_3426;
                        int *l_3429 = (void*)0;
                        int *l_3430 = &l_2576;
                        int *l_3431 = &l_3339;
                        int *l_3432 = &l_2915;
                        int *l_3433 = &l_2561;
                        int *l_3434 = (void*)0;
                        int *l_3435 = &l_2561;
                        int *l_3436 = &l_3194;
                        int *l_3437 = &l_2703;
                        int *l_3438 = &g_76;
                        int *l_3439 = &g_76;
                        int *l_3440 = (void*)0;
                        int *l_3441 = &g_166;
                        int *l_3442 = &l_2574;
                        int *l_3443 = &l_2600;
                        int *l_3444 = &l_2915;
                        int *l_3445 = &l_2564;
                        int *l_3446 = &l_3407;
                        int *l_3447 = &l_2699;
                        int *l_3448 = (void*)0;
                        int *l_3449 = &g_76;
                        int l_3450 = (-9L);
                        int *l_3451 = &l_2647;
                        int *l_3453 = &l_2542;
                        int *l_3454 = &l_2647;
                        int *l_3455 = &l_2548;
                        int *l_3456 = &l_3409;
                        int *l_3457 = &g_775;
                        int *l_3458 = &g_775;
                        int *l_3459 = &l_2799;
                        int *l_3460 = &l_2799;
                        int *l_3461 = (void*)0;
                        int *l_3462 = (void*)0;
                        int *l_3463 = &l_3194;
                        int *l_3464 = &l_2703;
                        int *l_3465 = &l_2576;
                        int *l_3466 = &l_2574;
                        int *l_3467 = (void*)0;
                        int *l_3468 = &l_2564;
                        int *l_3469 = &l_2576;
                        int *l_3470 = &g_76;
                        int *l_3471 = &l_2647;
                        int *l_3473 = &l_3407;
                        int *l_3474 = &l_2542;
                        int *l_3475 = &l_2574;
                        int *l_3476 = &l_3360;
                        int *l_3477 = &l_2761;
                        int *l_3478 = &g_76;
                        int *l_3479 = &g_166;
                        int *l_3480 = &l_3339;
                        int *l_3481 = (void*)0;
                        int *l_3482 = (void*)0;
                        int *l_3483 = (void*)0;
                        int *l_3484 = (void*)0;
                        int l_3485 = 0xC96CA942L;
                        int *l_3486 = &l_3339;
                        int *l_3487 = &l_3360;
                        int *l_3488 = &l_3409;
                        int *l_3489 = (void*)0;
                        int *l_3490 = &l_3409;
                        int *l_3491 = &l_3426;
                        unsigned short l_3492 = 0x2430L;
                        int **l_3495 = &l_3328;
                        --l_3492;
                        (*l_3495) = &g_115;
                    }
                }
                (*l_3498) = func_84(l_2640, func_20(((*l_3354) = (1L <= (((*l_3402) , (*l_2917)) != (*l_2917)))), g_177, p_12, (((safe_sub_func_int32_t_s_s(((void*)0 != (*g_3121)), l_3409)) , (void*)0) != (*g_2502)), (*l_2640)), g_1962);
            }
            else
            {
                int **l_3499 = &l_3330;
                (*l_3499) = &g_3238;
            }
        }
        for (l_2712 = (-30); (l_2712 > 46); l_2712 = safe_add_func_int32_t_s_s(l_2712, 8))
        {
            long long *l_3504 = &g_1116;
            unsigned ****l_3508 = &l_3089;
            int l_3511 = (-1L);
            int l_3513 = 1L;
            unsigned char ***l_3517 = &g_1392;
            unsigned char ****l_3516 = &l_3517;
            l_3402 = func_84(&g_68, ((safe_mod_func_int64_t_s_s(func_20((l_3135 &= (1UL != (((((*l_3504) &= 0x3F54211D79FB4274LL) ^ (((0xCB252A3269146E14LL != (safe_rshift_func_uint8_t_u_s(((((l_3507 == (*l_2917)) , l_3508) != &l_3089) , (((safe_sub_func_int8_t_s_s(((l_3511 = (*l_2640)) , (**g_1204)), (*l_2640))) > p_11) , 0UL)), 5))) , l_3512) > 0xF232L)) != g_722) & (*l_3402)))), l_3513, p_12, l_3513, (*g_2283)), g_6)) <= 0x9BL), g_2807);
            g_3524 = (safe_add_func_uint8_t_u_u(l_3513, (((&g_1371 != (l_3518 = ((*l_3516) = &g_1392))) != ((*l_2486) &= 1UL)) || (func_13(p_11, p_12, l_3519, ((((*l_3402) = (*l_3402)) | (safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(p_12, (*g_2283))) > (*g_2283)), 11))) , (*l_2640))) <= 65527UL))));
        }
    }
    (*l_3527) = func_84(&l_3087, (((*l_3525) = &g_710) != l_3526), p_10);
    l_2542 = ((((**l_3060) == (void*)0) & 2UL) , (((**l_3527) = ((*l_3532) = ((**l_3527) & ((safe_lshift_func_uint8_t_u_u(l_3530, (**l_3527))) == (p_10 != ((*l_3531) = (((*g_1783) ^ (*l_3402)) , p_11))))))) > l_3533));
    return p_12;
}







static unsigned func_13(char p_14, int p_15, long long p_16, unsigned short p_17)
{
    unsigned l_2468 = 5UL;
    for (g_1103 = 9; (g_1103 >= (-3)); g_1103 = safe_sub_func_int32_t_s_s(g_1103, 3))
    {
        int *l_2466 = &g_76;
        int **l_2467 = &l_2466;
        (*l_2467) = l_2466;
        (*l_2466) &= p_14;
        return l_2468;
    }
    return l_2468;
}







static unsigned char func_20(int p_21, long long p_22, unsigned p_23, short p_24, char p_25)
{
    unsigned char l_2247 = 0UL;
    unsigned *l_2250 = &g_1970;
    unsigned **l_2249 = &l_2250;
    unsigned ***l_2248 = &l_2249;
    unsigned short *l_2253 = &g_177;
    unsigned short *l_2254 = &g_1418;
    int l_2255 = 0L;
    int *l_2259 = &g_115;
    char l_2274 = (-1L);
    short l_2325 = (-6L);
    unsigned long long *l_2343 = (void*)0;
    int l_2378 = 0xE566BF58L;
    unsigned *l_2399 = (void*)0;
    unsigned **l_2398 = &l_2399;
    unsigned l_2453 = 4294967295UL;
    unsigned l_2454 = 7UL;
    unsigned ***l_2461 = &l_2398;
    if (func_43(l_2247, l_2247, ((l_2248 == &l_2249) , ((p_24 & ((*l_2253) = ((safe_lshift_func_uint16_t_u_u(p_21, 10)) ^ (l_2247 | (*g_1783))))) ^ (l_2255 = (((*l_2254) = func_28(p_24, (*g_2074), p_25, p_23, p_23)) & 0x6CDDL)))), p_24))
    {
        short **l_2256 = &g_2074;
        int *l_2257 = &g_76;
        int *l_2258 = &g_115;
        int **l_2260 = &l_2259;
        (*l_2258) ^= ((*l_2257) = (l_2256 == l_2256));
        (*l_2260) = l_2259;
    }
    else
    {
        char l_2273 = 0xA1L;
        volatile int *l_2276 = &g_1536;
        volatile int **l_2275 = &l_2276;
        p_21 = (safe_sub_func_int16_t_s_s((0x5766L & 0xD616L), ((func_43(p_25, (p_25 >= p_24), (safe_mod_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((*g_1783) = 0x9EL), (safe_lshift_func_uint8_t_u_u((p_23 != (safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(l_2273, l_2273)) | l_2274) >= l_2273), 252UL))), 0)))) != 5L) ^ 0x66L), 5L)), p_24) | p_21) || p_21)));
        (*l_2275) = &g_390;
    }
    for (g_936 = (-3); (g_936 == 38); g_936++)
    {
        char l_2279 = (-10L);
        unsigned long long ***l_2316 = &g_1178;
        unsigned long long l_2348 = 0x2D387047A2773781LL;
        int l_2362 = 0xA1C9F5BCL;
        unsigned short l_2404 = 0x016DL;
        short l_2430 = 0xCFA5L;
        int *l_2437 = (void*)0;
    }
    (*l_2461) = (void*)0;
    return p_23;
}







static char func_28(unsigned p_29, short p_30, unsigned short p_31, long long p_32, int p_33)
{
    unsigned long long l_2220 = 18446744073709551611UL;
    char *l_2223 = &g_522;
    for (g_1821 = 1; (g_1821 < 20); g_1821 = safe_add_func_int32_t_s_s(g_1821, 5))
    {
        short l_2200 = 0L;
        int l_2201 = 0xE200DD53L;
        int *l_2202 = &g_76;
        int *l_2203 = (void*)0;
        int *l_2204 = &g_115;
        int *l_2205 = (void*)0;
        int *l_2206 = &g_115;
        int *l_2207 = &g_775;
        int *l_2208 = &g_76;
        int *l_2209 = &g_775;
        int *l_2210 = &g_166;
        int *l_2211 = &l_2201;
        int *l_2212 = &g_76;
        int l_2213 = 0L;
        int *l_2214 = &g_76;
        int *l_2215 = &l_2201;
        int l_2216 = 0x3F7F3173L;
        int *l_2217 = &g_166;
        int *l_2218 = &g_76;
        int *l_2219 = &g_115;
        char *l_2224 = &g_1103;
        unsigned char l_2232 = 0xB0L;
        --l_2220;
        if ((((p_31 , 0xC7L) | (*l_2217)) >= (*l_2202)))
        {
            unsigned short l_2226 = 65534UL;
            l_2226++;
        }
        else
        {
            int **l_2229 = &l_2207;
            (*l_2229) = &g_166;
            if (((((*l_2206) ^ (safe_sub_func_uint64_t_u_u((p_30 ^ p_30), 1UL))) > ((**l_2229) ^ p_33)) , (((p_29 <= (**g_1371)) && p_32) ^ l_2232)))
            {
                (*l_2217) &= ((*l_2206) = l_2220);
            }
            else
            {
                unsigned short *l_2233 = (void*)0;
                unsigned short *l_2234 = &g_722;
                unsigned char *l_2241 = &g_576;
                int l_2246 = (-5L);
                (*l_2206) = (p_31 | ((((1UL || ((*l_2234)--)) || p_31) <= (**g_1204)) != 0UL));
            }
        }
    }
    return l_2220;
}







static unsigned char func_43(unsigned p_44, short p_45, int p_46, int p_47)
{
    long long l_1183 = 0x8ECE233EEFA315E6LL;
    unsigned long long *l_1192 = &g_113;
    int l_1195 = 7L;
    int l_1197 = 0x96F7D0ECL;
    int l_1199 = 0x4BA736D5L;
    char *l_1207 = (void*)0;
    char **l_1206 = &l_1207;
    unsigned *l_1219 = &g_1220;
    int **l_1261 = &g_211;
    int l_1400 = 0xBEBA3B46L;
    short *l_1413 = &g_674;
    short l_1480 = 0x3F7CL;
    unsigned long long l_1546 = 0UL;
    int **l_1553 = (void*)0;
    unsigned long long l_1713 = 1UL;
    char l_1724 = 0x3FL;
    char l_1730 = (-1L);
    unsigned ***l_1765 = &g_913;
    int l_1801 = (-8L);
    int **l_1819 = (void*)0;
    short l_1837 = (-1L);
    unsigned char **l_2061 = &g_1393;
    char l_2067 = 0x38L;
    int l_2075 = 0L;
    int *l_2076 = (void*)0;
    int *l_2077 = (void*)0;
    int *l_2078 = &l_2075;
    int *l_2079 = &l_1197;
    int *l_2080 = &g_115;
    int *l_2081 = (void*)0;
    int *l_2082 = &l_2075;
    int *l_2083 = &g_166;
    int *l_2084 = &l_2075;
    int *l_2085 = &l_1197;
    int *l_2086 = &l_1195;
    int *l_2087 = (void*)0;
    int *l_2088 = &g_166;
    int *l_2089 = &g_775;
    int *l_2090 = &g_166;
    int *l_2091 = &g_76;
    int *l_2092 = &l_1197;
    int *l_2093 = &l_1195;
    int *l_2094 = &g_115;
    int *l_2095 = (void*)0;
    int *l_2096 = &l_1197;
    int *l_2097 = &l_1195;
    int *l_2098 = &g_115;
    int *l_2099 = &g_775;
    int *l_2100 = &g_166;
    int *l_2101 = &g_775;
    int *l_2102 = (void*)0;
    int *l_2103 = (void*)0;
    int l_2104 = 0x10B5EE1BL;
    int *l_2105 = &l_1195;
    int *l_2106 = (void*)0;
    int *l_2107 = &l_1197;
    int *l_2108 = &l_1195;
    int *l_2109 = &l_1199;
    int *l_2110 = &l_2075;
    int *l_2111 = &l_2075;
    int *l_2112 = &g_166;
    int *l_2113 = (void*)0;
    int *l_2114 = &l_2075;
    int *l_2115 = &l_2075;
    int *l_2116 = &g_775;
    int *l_2117 = &g_775;
    int *l_2118 = (void*)0;
    int *l_2119 = (void*)0;
    int *l_2120 = &l_1199;
    int *l_2121 = &g_166;
    int *l_2122 = &g_115;
    int *l_2123 = (void*)0;
    int *l_2124 = (void*)0;
    int *l_2125 = &l_1199;
    int *l_2126 = &g_775;
    int l_2127 = (-1L);
    int *l_2128 = &g_775;
    int *l_2129 = &g_115;
    int *l_2130 = &l_2104;
    int l_2131 = (-2L);
    int l_2132 = 0x7C0A8911L;
    int *l_2133 = &l_1197;
    int l_2134 = 0x4D1257D3L;
    int l_2135 = 0L;
    int *l_2136 = &g_115;
    int *l_2137 = &g_76;
    int *l_2138 = &l_1195;
    int l_2139 = 1L;
    int *l_2140 = &l_2131;
    int *l_2141 = &l_2075;
    int l_2142 = 0x7D0822F0L;
    int *l_2143 = &l_2135;
    int *l_2144 = &l_2132;
    int *l_2145 = &l_2104;
    int *l_2146 = &g_166;
    int *l_2147 = (void*)0;
    int *l_2148 = &l_2131;
    int *l_2149 = &l_2131;
    int *l_2150 = &l_2131;
    int *l_2151 = &g_115;
    int *l_2152 = &g_76;
    int *l_2153 = &l_2135;
    int *l_2154 = &l_2142;
    int *l_2155 = &g_115;
    int *l_2156 = &l_2131;
    int l_2157 = 0L;
    int *l_2158 = &g_76;
    int *l_2159 = &l_2132;
    int *l_2160 = &l_2132;
    int *l_2161 = &l_2131;
    int *l_2162 = &l_2075;
    int *l_2163 = (void*)0;
    int *l_2164 = &l_2134;
    int *l_2165 = (void*)0;
    int *l_2166 = &l_1195;
    int *l_2167 = (void*)0;
    int l_2168 = 0L;
    int *l_2169 = &l_2142;
    int *l_2170 = &g_76;
    int *l_2171 = &l_2135;
    int l_2172 = (-5L);
    int *l_2173 = (void*)0;
    int *l_2174 = (void*)0;
    int *l_2175 = &g_115;
    int *l_2176 = (void*)0;
    int *l_2177 = &l_1197;
    int *l_2178 = &l_2104;
    int *l_2179 = &l_2131;
    int *l_2180 = &g_115;
    int *l_2181 = &l_2142;
    int *l_2182 = (void*)0;
    int *l_2183 = &g_775;
    int *l_2184 = (void*)0;
    int *l_2185 = (void*)0;
    int *l_2186 = &l_2168;
    int *l_2187 = (void*)0;
    int *l_2188 = &l_2132;
    int *l_2189 = (void*)0;
    int l_2190 = 0xB335E68FL;
    int *l_2191 = (void*)0;
    int *l_2192 = (void*)0;
    int *l_2193 = (void*)0;
    int *l_2194 = &l_2127;
    if (((((safe_sub_func_uint8_t_u_u((!((g_1178 == (void*)0) <= ((((safe_sub_func_uint64_t_u_u(((((safe_mod_func_int32_t_s_s((+l_1183), p_45)) | (safe_mod_func_uint32_t_u_u((p_47 <= (-6L)), g_1173))) != (0x90L | (p_44 | 0x12L))) || g_716), l_1183)) >= p_47) ^ l_1183) , 4294967292UL))), l_1183)) & l_1183) != p_47) | l_1183))
    {
        unsigned long long *l_1190 = &g_113;
        unsigned long long **l_1191 = &l_1190;
        char *l_1196 = &g_56;
        unsigned *l_1198 = &g_190;
        int l_1218 = 0L;
        long long l_1233 = 5L;
        long long l_1260 = 0xB7B40A61C01CE1BDLL;
        int l_1313 = 0x23DCBB73L;
        unsigned l_1375 = 8UL;
        int **l_1389 = &g_211;
        int *l_1391 = &g_68;
        unsigned char **l_1394 = &g_1393;
        unsigned char **l_1399 = &g_1393;
        if (((safe_mod_func_int32_t_s_s((((safe_mod_func_int8_t_s_s((((*l_1191) = l_1190) == l_1192), ((*l_1196) ^= (l_1195 = (safe_rshift_func_int16_t_s_s((-2L), 2)))))) , (g_710 &= g_56)) != ((l_1199 = (((*l_1198) = ((l_1197 |= p_45) < p_46)) ^ g_1127)) & ((safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((1UL <= g_115), g_674)) , l_1183), g_1103)) && 0xD6A1B42CL))), g_482)) == p_46))
        {
            char ***l_1208 = &l_1206;
            int *l_1209 = &g_115;
            int *l_1210 = (void*)0;
            unsigned char l_1247 = 0xDAL;
            int l_1287 = (-1L);
            unsigned l_1358 = 0UL;
            (*l_1209) = (g_1204 != ((*l_1208) = l_1206));
            l_1195 = ((*l_1209) = l_1183);
            if ((p_46 || (*l_1209)))
            {
                for (l_1218 = 0; (l_1218 == (-16)); l_1218 = safe_sub_func_int16_t_s_s(l_1218, 7))
                {
                    unsigned char *l_1225 = (void*)0;
                    unsigned char *l_1226 = (void*)0;
                    unsigned char *l_1227 = &g_482;
                    unsigned char *l_1230 = &g_192;
                    short *l_1236 = &g_489;
                    int *l_1237 = &l_1197;
                    (*l_1237) ^= (safe_lshift_func_uint8_t_u_s(((*l_1230) = (++(*l_1227))), ((((1L > ((*l_1209) = ((safe_add_func_uint8_t_u_u(255UL, (((*l_1209) >= ((*l_1236) = (((l_1233 > (safe_sub_func_uint32_t_u_u(((*l_1198) ^= p_44), l_1195))) >= p_44) != ((4294967294UL | l_1233) | g_564)))) && g_814))) && p_45))) , g_1127) | 0x2357L) <= p_46)));
                }
                p_46 |= p_47;
                for (g_113 = 15; (g_113 >= 32); ++g_113)
                {
                    int **l_1240 = &g_211;
                    (*l_1240) = &l_1195;
                    (**l_1240) = p_47;
                }
            }
            else
            {
                short *l_1241 = &g_489;
                short **l_1242 = &l_1241;
                long long *l_1245 = &g_1116;
                long long *l_1246 = &g_823;
                char *l_1256 = &g_56;
                int l_1338 = (-6L);
                int l_1343 = 0L;
                unsigned short *l_1384 = &g_177;
                int l_1390 = 0L;
                unsigned char **l_1396 = &g_1393;
                unsigned char ***l_1395 = &l_1396;
                if (((&g_492 != ((*l_1242) = l_1241)) || (((0UL == ((l_1247 = ((*l_1246) = ((*l_1245) = (safe_rshift_func_uint16_t_u_u(p_45, 7))))) ^ (safe_sub_func_uint16_t_u_u(g_722, ((void*)0 != &p_46))))) < p_45) != 0x415F41C2L)))
                {
                    int *l_1257 = &l_1195;
                    int **l_1258 = &l_1209;
                    (*l_1258) = l_1257;
                }
                else
                {
                    unsigned l_1259 = 18446744073709551614UL;
                    int l_1304 = 1L;
                    unsigned char *l_1370 = &g_576;
                    unsigned char **l_1369 = &l_1370;
                    if (((+0xA38270C3L) , (p_46 > (l_1260 != ((void*)0 == l_1261)))))
                    {
                        int *l_1262 = &g_166;
                        int *l_1263 = &l_1197;
                        int *l_1264 = &g_115;
                        int *l_1265 = &l_1195;
                        int *l_1266 = &l_1195;
                        int *l_1267 = &g_166;
                        int *l_1268 = &l_1199;
                        int *l_1269 = &g_166;
                        int *l_1270 = (void*)0;
                        int *l_1271 = &g_775;
                        int *l_1272 = &g_775;
                        int *l_1273 = (void*)0;
                        int *l_1274 = (void*)0;
                        int *l_1275 = &l_1197;
                        int *l_1276 = &g_166;
                        int *l_1277 = (void*)0;
                        int *l_1278 = &l_1197;
                        int *l_1279 = &g_166;
                        int *l_1280 = (void*)0;
                        int *l_1281 = &g_775;
                        int *l_1282 = (void*)0;
                        int *l_1283 = &g_115;
                        int *l_1284 = &g_166;
                        int *l_1285 = &g_76;
                        int *l_1286 = &g_76;
                        int *l_1288 = &l_1218;
                        int *l_1289 = &g_775;
                        int *l_1290 = &g_775;
                        int *l_1291 = (void*)0;
                        int *l_1292 = &l_1197;
                        int *l_1293 = &l_1199;
                        int *l_1294 = &g_76;
                        int *l_1295 = &g_115;
                        int *l_1296 = &l_1218;
                        int *l_1297 = (void*)0;
                        int *l_1298 = (void*)0;
                        int *l_1299 = &g_775;
                        int *l_1300 = &l_1199;
                        int *l_1301 = &l_1199;
                        int *l_1302 = &g_76;
                        int l_1303 = 0x7CCD58D9L;
                        int *l_1305 = &l_1304;
                        int *l_1306 = &l_1218;
                        int *l_1307 = (void*)0;
                        int *l_1308 = &l_1197;
                        int *l_1309 = (void*)0;
                        int *l_1310 = &l_1197;
                        int *l_1311 = &g_76;
                        int *l_1312 = (void*)0;
                        int *l_1314 = &g_115;
                        int *l_1315 = &l_1199;
                        int *l_1316 = (void*)0;
                        int *l_1317 = (void*)0;
                        int *l_1318 = &g_76;
                        int *l_1319 = &g_775;
                        int *l_1320 = &l_1195;
                        int *l_1321 = &g_76;
                        int *l_1322 = (void*)0;
                        int *l_1323 = (void*)0;
                        int *l_1324 = &l_1218;
                        int *l_1325 = &l_1195;
                        int *l_1326 = (void*)0;
                        long long l_1330 = 1L;
                        int *l_1331 = &l_1197;
                        int *l_1332 = &g_775;
                        int *l_1333 = &l_1218;
                        int *l_1334 = (void*)0;
                        int *l_1335 = &l_1197;
                        int *l_1336 = &l_1199;
                        int *l_1337 = &g_166;
                        int *l_1339 = &l_1199;
                        int *l_1340 = &l_1313;
                        int *l_1341 = (void*)0;
                        int *l_1342 = &l_1199;
                        int *l_1344 = &g_115;
                        int *l_1345 = &g_76;
                        int *l_1346 = &l_1338;
                        int *l_1347 = &g_115;
                        int *l_1348 = (void*)0;
                        int *l_1349 = &l_1199;
                        int *l_1350 = &l_1287;
                        int *l_1351 = &l_1303;
                        int *l_1352 = &l_1338;
                        int *l_1353 = &l_1343;
                        int *l_1354 = &g_76;
                        --g_1327;
                        g_1355--;
                        ++l_1358;
                    }
                    else
                    {
                        char *l_1363 = &g_1103;
                        int l_1374 = (-1L);
                        long long l_1376 = 5L;
                        (*l_1261) = (void*)0;
                        l_1199 = p_45;
                        (*l_1261) = ((safe_mod_func_int16_t_s_s((((l_1375 < 0x4E81L) | l_1374) , p_47), l_1376)) , (void*)0);
                    }
                    (*l_1209) = 4L;
                }
                (*l_1389) = func_84((l_1391 = (((*l_1209) | (safe_rshift_func_uint16_t_u_u(((((((((((l_1218 = p_47) ^ (safe_unary_minus_func_uint32_t_u(g_647))) | ((((safe_lshift_func_int8_t_s_u(4L, 6)) >= ((*l_1384) = (--g_936))) < (((g_482 , (safe_add_func_uint8_t_u_u(l_1313, (safe_add_func_int64_t_s_s(1L, (((g_489 ^ (l_1313 > p_44)) ^ 0UL) , 0x27F6A1569A8F9A63LL)))))) , (void*)0) != (void*)0)) && p_46)) >= 0L) && 0UL) >= 0x1594CD33D66976E6LL) < 0x5B42L) < g_1103) , l_1389) != (void*)0), l_1390))) , &g_68)), (*l_1209), p_44);
                (*l_1261) = func_84(&g_68, (p_44 > 0UL), (**l_1261));
            }
            (*l_1209) ^= g_674;
        }
        else
        {
            long long *l_1406 = &l_1233;
            int *l_1407 = &l_1218;
            unsigned l_1408 = 0x807A54CDL;
            (*l_1389) = &p_46;
            (**l_1389) = l_1400;
            l_1408 |= ((*l_1407) ^= ((((&g_1372 != ((!p_46) , &g_1372)) == ((0x83ABFC4156876EB1LL && (~((safe_lshift_func_int8_t_s_s(((0xC1D63B0CL ^ (safe_unary_minus_func_uint32_t_u((**l_1261)))) && g_177), 4)) ^ (**l_1261)))) , p_44)) == g_814) >= p_47));
        }
    }
    else
    {
        unsigned **l_1411 = &l_1219;
        short *l_1412 = &g_492;
        int *l_1414 = &l_1195;
        unsigned *l_1417 = &g_190;
        int l_1419 = (-8L);
        unsigned char **l_1427 = &g_1393;
        int l_1468 = 0xCF7EA55DL;
        int l_1490 = 1L;
        char **l_1531 = &l_1207;
        int *l_1555 = &g_68;
        int **l_1554 = &l_1555;
        char *l_1566 = &g_1103;
        int l_1581 = 0x61F83375L;
        long long *l_1614 = &g_1116;
        unsigned short l_1638 = 65528UL;
        unsigned long long **l_1813 = (void*)0;
        unsigned ***l_1854 = &g_913;
        int *l_1984 = &l_1581;
        int *l_1985 = &l_1195;
        int *l_1986 = (void*)0;
        int *l_1987 = &l_1468;
        int *l_1988 = &l_1419;
        int *l_1989 = &l_1199;
        int *l_1990 = (void*)0;
        int *l_1991 = &l_1197;
        int *l_1992 = &l_1490;
        int *l_1993 = &l_1419;
        int *l_1994 = &l_1199;
        int *l_1995 = &g_775;
        int *l_1996 = &l_1468;
        int *l_1997 = (void*)0;
        int *l_1998 = &l_1197;
        int *l_1999 = &g_76;
        int *l_2000 = &g_775;
        int *l_2001 = &l_1195;
        int *l_2002 = &l_1197;
        int *l_2003 = &g_775;
        int *l_2004 = &g_166;
        int *l_2005 = &l_1197;
        int *l_2006 = &g_76;
        int *l_2007 = &l_1197;
        int *l_2008 = &l_1490;
        int *l_2009 = &l_1581;
        int *l_2010 = (void*)0;
        int *l_2011 = &l_1195;
        int *l_2012 = &l_1581;
        int *l_2013 = &g_166;
        int *l_2014 = &g_775;
        int *l_2015 = (void*)0;
        int *l_2016 = (void*)0;
        int *l_2017 = &g_115;
        int *l_2018 = &l_1195;
        int *l_2019 = &g_775;
        int *l_2020 = (void*)0;
        int *l_2021 = &l_1199;
        int *l_2022 = &l_1468;
        int *l_2023 = &l_1581;
        int *l_2024 = &g_76;
        int *l_2025 = &g_115;
        int *l_2026 = &g_775;
        int *l_2027 = &g_166;
        int *l_2028 = &l_1468;
        int *l_2029 = &l_1468;
        int *l_2030 = &l_1490;
        int *l_2031 = &l_1490;
        int *l_2032 = &l_1419;
        int *l_2033 = &l_1581;
        int *l_2034 = &l_1197;
        int *l_2035 = &l_1197;
        int *l_2036 = &l_1199;
        int *l_2037 = (void*)0;
        int *l_2038 = &l_1197;
        int *l_2039 = &l_1419;
        int *l_2040 = &l_1581;
        int *l_2041 = &l_1197;
        int *l_2042 = &l_1581;
        int *l_2043 = (void*)0;
        int *l_2044 = (void*)0;
        int *l_2045 = &l_1419;
        int *l_2046 = &g_115;
        int *l_2047 = &l_1581;
        int *l_2048 = (void*)0;
        int *l_2049 = (void*)0;
        int *l_2050 = &l_1197;
        int *l_2051 = (void*)0;
        int *l_2052 = &l_1199;
        int *l_2053 = &g_775;
        int *l_2054 = &l_1419;
        int *l_2055 = (void*)0;
        unsigned l_2056 = 4294967290UL;
        if ((safe_lshift_func_int8_t_s_u((((((*l_1414) = (p_44 , ((-1L) < (((*l_1412) = ((+(((*l_1411) = &p_44) == (g_489 , &g_1220))) , p_44)) && (l_1413 == &g_6))))) ^ ((*l_1417) = ((safe_mod_func_int8_t_s_s((~(**g_1204)), 0x79L)) >= 0xCFD3L))) < g_1418) ^ l_1419), p_44)))
        {
            unsigned l_1432 = 4294967291UL;
            (*l_1414) = (p_45 | (g_1420 == &g_1421));
            for (p_45 = 0; (p_45 >= 24); p_45 = safe_add_func_int16_t_s_s(p_45, 9))
            {
                int l_1428 = 1L;
                unsigned char *l_1429 = &g_192;
                unsigned char l_1433 = 0x5FL;
                g_166 ^= (((!(**g_1204)) & l_1432) != (*l_1414));
            }
            (*l_1261) = &g_775;
        }
        else
        {
            int l_1434 = (-1L);
            int *l_1437 = &g_166;
            int *l_1438 = &l_1419;
            int *l_1439 = (void*)0;
            int *l_1440 = &l_1199;
            int *l_1441 = &g_775;
            int *l_1442 = (void*)0;
            int *l_1443 = &g_775;
            int *l_1444 = &l_1199;
            int *l_1445 = &g_115;
            int *l_1446 = &g_166;
            int *l_1447 = &l_1434;
            int *l_1448 = &g_775;
            int *l_1449 = &g_775;
            int *l_1450 = &l_1197;
            int *l_1451 = &g_166;
            int *l_1452 = &l_1197;
            int *l_1453 = &g_115;
            int *l_1454 = &g_166;
            int *l_1455 = &g_166;
            int *l_1456 = &l_1199;
            int *l_1457 = &g_166;
            int *l_1458 = &l_1434;
            int *l_1459 = &l_1434;
            int *l_1460 = (void*)0;
            int *l_1461 = &l_1419;
            int *l_1462 = &g_76;
            int *l_1463 = &g_166;
            int *l_1464 = &g_76;
            int *l_1465 = &l_1434;
            int *l_1466 = &l_1197;
            int *l_1467 = &l_1419;
            int *l_1469 = (void*)0;
            int *l_1470 = &g_76;
            int *l_1471 = &l_1199;
            int *l_1472 = (void*)0;
            int *l_1473 = &g_115;
            int *l_1474 = &g_76;
            int *l_1475 = &g_76;
            int *l_1476 = &g_76;
            int *l_1477 = &l_1197;
            int *l_1478 = &l_1195;
            int *l_1479 = &l_1199;
            int *l_1481 = &l_1195;
            int *l_1482 = &l_1197;
            int *l_1483 = &l_1197;
            int *l_1484 = &g_76;
            int *l_1485 = &l_1468;
            int *l_1486 = &l_1468;
            int l_1487 = (-6L);
            int *l_1488 = &l_1195;
            int *l_1489 = (void*)0;
            int *l_1491 = &l_1199;
            int *l_1492 = &l_1419;
            int *l_1493 = &l_1434;
            int *l_1494 = &g_115;
            int *l_1495 = &l_1195;
            int *l_1496 = &g_115;
            int *l_1497 = &l_1468;
            int *l_1498 = (void*)0;
            int *l_1499 = &g_166;
            int l_1500 = 0xE6280418L;
            int *l_1501 = &l_1500;
            int *l_1502 = &l_1419;
            int *l_1503 = &l_1434;
            int *l_1504 = (void*)0;
            int *l_1505 = &l_1195;
            int *l_1506 = &l_1434;
            int *l_1507 = &l_1197;
            int *l_1508 = &l_1434;
            int *l_1509 = &l_1500;
            int *l_1510 = &l_1468;
            int *l_1511 = &g_76;
            int *l_1512 = &l_1468;
            int *l_1513 = &g_76;
            int *l_1514 = (void*)0;
            int *l_1515 = &g_76;
            int *l_1516 = &g_115;
            unsigned long long **l_1528 = &l_1192;
            unsigned char l_1563 = 0UL;
            (*l_1414) |= p_45;
            for (g_68 = 0; (g_68 != 6); g_68 = safe_add_func_int32_t_s_s(g_68, 4))
            {
                return l_1434;
            }
            --g_1517;
            for (p_44 = 0; (p_44 < 47); p_44++)
            {
                unsigned **l_1526 = &l_1417;
                unsigned long long l_1530 = 0x8AF9FBDA014212A6LL;
                int l_1534 = 0xB42CA172L;
                int l_1535 = 0xD9E2B50CL;
                volatile int *l_1540 = &g_1536;
                long long *l_1541 = &g_1116;
                unsigned *l_1544 = &g_1220;
                int *l_1545 = &l_1400;
                unsigned *l_1547 = &g_1548;
                unsigned short *l_1549 = &g_177;
                char *l_1568 = &g_710;
                for (p_47 = 0; (p_47 > 17); p_47 = safe_add_func_int8_t_s_s(p_47, 2))
                {
                    unsigned l_1537 = 1UL;
                    for (g_1173 = (-12); (g_1173 >= 34); g_1173 = safe_add_func_uint8_t_u_u(g_1173, 2))
                    {
                        unsigned long long **l_1527 = &l_1192;
                        int l_1529 = 7L;
                        (*l_1512) &= ((g_913 == l_1526) ^ (p_46 = (l_1527 == l_1528)));
                        if (l_1529)
                            continue;
                        (*l_1456) ^= (l_1530 || (l_1531 == l_1531));
                    }
                    for (g_522 = (-22); (g_522 < 21); g_522 = safe_add_func_uint16_t_u_u(g_522, 5))
                    {
                        l_1537++;
                        l_1540 = &g_1167;
                    }
                }
                if (p_44)
                {
                    int l_1561 = 0L;
                    int l_1569 = 0x020A6D0AL;
                    int l_1570 = 2L;
                    int l_1571 = 0L;
                    int l_1572 = 0x012AA602L;
                    int *l_1573 = &l_1570;
                    int *l_1574 = (void*)0;
                    int *l_1575 = &l_1572;
                    int *l_1576 = &l_1569;
                    int *l_1577 = &l_1419;
                    int *l_1578 = (void*)0;
                    int l_1579 = 0xB3A348FCL;
                    int *l_1580 = &l_1569;
                    int *l_1582 = &l_1571;
                    int *l_1583 = &l_1490;
                    int *l_1584 = &l_1487;
                    int *l_1585 = (void*)0;
                    int *l_1586 = &g_76;
                    int l_1587 = 0x09BCA201L;
                    int *l_1588 = &l_1535;
                    int *l_1589 = &g_115;
                    int *l_1590 = &g_76;
                    int *l_1591 = &l_1569;
                    int *l_1592 = &l_1490;
                    int *l_1593 = &l_1535;
                    int *l_1594 = &l_1490;
                    int *l_1595 = &l_1197;
                    int *l_1596 = &l_1197;
                    int *l_1597 = &l_1468;
                    int *l_1598 = (void*)0;
                    int *l_1599 = &l_1569;
                    int *l_1601 = &l_1197;
                    int *l_1602 = &l_1419;
                    int *l_1603 = &l_1579;
                    int *l_1604 = &l_1571;
                    int *l_1605 = &l_1199;
                    for (g_564 = 0; (g_564 == (-24)); --g_564)
                    {
                        volatile int **l_1552 = &l_1540;
                        char *l_1562 = &g_56;
                        int l_1567 = 0x8054CDB2L;
                        (*l_1552) = &g_1536;
                        (*l_1483) = ((*l_1461) = (((l_1553 == l_1554) || (0x9D07L == p_45)) , ((g_1127 , (p_46 | (((((safe_unary_minus_func_uint16_t_u((((safe_lshift_func_int8_t_s_s((**g_1204), ((*l_1562) |= (safe_rshift_func_uint8_t_u_s(8UL, (((((((l_1561 <= 0x4D73C8CE245CB907LL) & p_47) , l_1535) <= g_190) != 1UL) , &g_97) == l_1553)))))) != g_1173) <= l_1563))) != 0x79L) ^ (-5L)) | p_44) , p_46))) == 0x43L)));
                        p_46 |= ((g_1021 > g_710) == (0xFA06L || (p_44 , 65529UL)));
                    }
                    ++g_1606;
                    if (p_46)
                        break;
                }
                else
                {
                    if (g_1606)
                        break;
                    return p_45;
                }
                if ((*l_1540))
                    break;
            }
        }
        if ((safe_sub_func_int64_t_s_s(((**g_1204) && (((safe_add_func_int64_t_s_s((l_1614 != &g_1116), g_1536)) >= p_44) == 3L)), g_1116)))
        {
            long long l_1617 = 0x5E42C0F4C57BFE72LL;
            int l_1647 = 0x9D918B22L;
            short l_1677 = 0xAB76L;
            int *l_1727 = &g_68;
            char *l_1782 = &l_1730;
            int l_1800 = 0x441F0D8AL;
            (*l_1414) |= p_44;
            (*l_1261) = (void*)0;
            if (p_44)
            {
                short l_1623 = (-2L);
                int l_1642 = (-10L);
                (*l_1414) = (safe_rshift_func_uint8_t_u_u((g_1373 | p_46), l_1617));
                g_1618 = ((0xA850DD52L != 0x3D6B6FA9L) <= (4294967295UL && p_45));
                if ((safe_add_func_uint16_t_u_u((!0xBA0DL), (safe_rshift_func_uint8_t_u_u((l_1623 = 8UL), 3)))))
                {
                    int l_1628 = (-1L);
                    unsigned char *l_1639 = (void*)0;
                    unsigned char *l_1640 = (void*)0;
                    unsigned char *l_1641 = &g_576;
                    int *l_1643 = (void*)0;
                    int *l_1644 = &g_76;
                    (*l_1644) |= (safe_lshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(l_1628, 11)) ^ ((safe_mod_func_uint16_t_u_u((p_47 | p_44), (g_1548 & (safe_unary_minus_func_uint32_t_u((((*g_1205) != (+((l_1642 = ((*l_1641) = (((*l_1414) = (9L >= ((*l_1614) &= (safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(l_1617, (l_1617 && (safe_sub_func_uint32_t_u_u(((p_46 &= (!((g_1618 >= (-4L)) ^ l_1628))) , l_1638), p_45))))), p_45))))) , 0x92L))) || (-1L)))) , (*l_1414))))))) | p_47)) , 0x35FFL), l_1617));
                    (*l_1261) = func_84(&p_47, (**g_96), (p_46 < 0L));
                }
                else
                {
                    l_1647 = ((*l_1414) = (248UL && p_46));
                    return p_44;
                }
            }
            else
            {
                int *l_1648 = (void*)0;
                int *l_1649 = &l_1419;
                int *l_1650 = &l_1468;
                int *l_1651 = &l_1647;
                int *l_1652 = (void*)0;
                int *l_1653 = &l_1419;
                int *l_1654 = &l_1199;
                int *l_1655 = &l_1195;
                int *l_1656 = (void*)0;
                int *l_1657 = &l_1199;
                int *l_1658 = &l_1199;
                int *l_1659 = &g_775;
                int *l_1660 = &l_1197;
                int *l_1661 = &l_1419;
                int *l_1662 = (void*)0;
                int *l_1663 = &l_1490;
                int l_1664 = 1L;
                int *l_1665 = &g_76;
                int *l_1666 = &g_115;
                int *l_1667 = &g_76;
                int *l_1668 = &l_1195;
                int *l_1669 = &g_115;
                int *l_1670 = &l_1197;
                int *l_1671 = &l_1581;
                int *l_1672 = &l_1468;
                int *l_1673 = &l_1490;
                int *l_1674 = &g_115;
                int *l_1675 = &l_1647;
                int *l_1676 = &l_1199;
                int *l_1678 = &l_1199;
                int *l_1679 = &l_1647;
                int *l_1680 = (void*)0;
                int *l_1681 = &l_1581;
                int *l_1682 = (void*)0;
                int *l_1683 = &l_1197;
                int *l_1684 = &l_1468;
                int *l_1685 = (void*)0;
                int *l_1686 = &l_1664;
                int *l_1687 = &l_1197;
                int *l_1688 = &g_76;
                int *l_1689 = &l_1195;
                int *l_1690 = &l_1490;
                int *l_1691 = &g_775;
                int *l_1692 = &l_1419;
                int *l_1693 = &l_1490;
                int *l_1694 = (void*)0;
                int *l_1695 = &l_1468;
                int *l_1696 = &g_76;
                int *l_1697 = &g_115;
                int *l_1698 = (void*)0;
                int *l_1699 = &l_1419;
                int *l_1700 = &l_1647;
                int l_1738 = 0x5F6F67DFL;
                unsigned ***l_1767 = &g_913;
                unsigned l_1776 = 0xB590093AL;
                g_1701++;
                if (l_1617)
                {
                    int *l_1706 = &l_1199;
                    (*l_1261) = l_1706;
                    (*l_1650) &= ((func_50(((8L > (safe_sub_func_uint64_t_u_u((~((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(p_47, l_1677)) | (((**l_1261) &= ((l_1713 , (safe_sub_func_uint64_t_u_u(p_47, (safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(0xFEL, ((safe_rshift_func_int8_t_s_s(((*l_1690) = l_1724), (*g_1205))) | ((safe_sub_func_uint32_t_u_u((l_1647 ^ (*l_1414)), (*l_1675))) | l_1617)))), p_46)), g_56))))) > g_76)) <= p_47)), 0)) , 18446744073709551615UL)), p_46))) | p_44), p_44, p_45, g_489) == g_814) <= g_1021);
                }
                else
                {
                    short l_1735 = 0L;
                    unsigned long long l_1749 = 0x485F663B4E8456B3LL;
                    int l_1758 = 0xA1CB34FDL;
                    unsigned ***l_1766 = &g_913;
                    (*l_1261) = func_84(l_1727, (safe_sub_func_int32_t_s_s(l_1730, ((((((((*l_1670) = (safe_sub_func_int16_t_s_s(((((safe_add_func_uint8_t_u_u((0UL != l_1735), ((0UL == (safe_add_func_int64_t_s_s((l_1738 == ((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((*l_1413) = (!(p_45 ^ (safe_rshift_func_int8_t_s_s(0xC5L, (safe_add_func_int8_t_s_s((**g_1204), p_46))))))), 3)), l_1735)), p_47)) != p_46)), 0x1D58D55A0DDBA564LL))) != p_47))) & 0x20101A586E5A8380LL) & p_47) , 0xF7EDL), (*l_1414)))) , 4294967295UL) <= (*l_1697)) < 0xB9449D244A90A9A9LL) || p_44) && 8UL) < l_1749))), p_47);
                    for (l_1735 = (-20); (l_1735 != 11); ++l_1735)
                    {
                        int *l_1769 = (void*)0;
                        (*l_1261) = (void*)0;
                        (*l_1669) = ((&p_46 == &g_775) < ((*l_1689) = ((((safe_mod_func_uint16_t_u_u(3UL, l_1617)) < p_46) == l_1735) , 0x1F22BCF5L)));
                        (*l_1654) |= ((g_1368 , ((*l_1192) = p_46)) < ((safe_rshift_func_uint8_t_u_u((!(l_1758 = (safe_lshift_func_uint16_t_u_s(0UL, 1)))), 0)) == (safe_sub_func_uint8_t_u_u(0x86L, (p_46 ^ ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((l_1765 == (l_1767 = l_1766)), ((p_46 & (safe_unary_minus_func_uint8_t_u(p_46))) <= 1UL))), 3)) | p_47))))));
                        (*l_1261) = func_84(l_1769, p_46, g_1618);
                    }
                }
                for (g_775 = (-23); (g_775 < 20); g_775 = safe_add_func_uint16_t_u_u(g_775, 4))
                {
                    long long l_1785 = 1L;
                    int *l_1786 = &l_1647;
                    char *l_1797 = &g_1021;
                    unsigned char *l_1798 = &g_576;
                    (*l_1658) = p_45;
                    if (p_44)
                    {
                        (*l_1261) = g_1772;
                    }
                    else
                    {
                        long long l_1773 = 4L;
                        int **l_1781 = (void*)0;
                        (*l_1261) = func_84(&g_68, (l_1773 >= (safe_add_func_uint64_t_u_u((p_44 >= 4294967292UL), l_1785))), p_46);
                        (*l_1261) = l_1786;
                        return l_1647;
                    }
                    (*l_1683) = p_45;
                    (*l_1661) = (safe_lshift_func_int16_t_s_u((((safe_lshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s((*l_1650), 0L)) , ((*l_1798) ^= ((*l_1414) &= (safe_lshift_func_uint8_t_u_s(l_1677, (*g_1783)))))) ^ (*g_1372)), 4)) & p_47) && 0xE9DB4D38A561A65DLL), 10));
                }
                p_46 = (((~((1L | (*l_1414)) ^ (l_1617 , 0x90F127F96A061D03LL))) , l_1800) & (*l_1414));
            }
            (*l_1261) = &l_1647;
        }
        else
        {
            unsigned char *l_1806 = &g_192;
            unsigned **l_1807 = (void*)0;
            int l_1808 = 1L;
            unsigned long long **l_1816 = &l_1192;
            int **l_1820 = (void*)0;
            int *l_1857 = &g_68;
            long long *l_1869 = &l_1183;
            int l_1926 = (-1L);
            l_1801 |= 0x17DA9D70L;
            if ((((*l_1806) &= ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x28L, 2)), (-1L))) , (!(*g_1372)))) || ((l_1807 = (*l_1765)) != (void*)0)))
            {
                unsigned long long ***l_1814 = (void*)0;
                unsigned long long ***l_1815 = &l_1813;
                int **l_1817 = &l_1414;
                int ***l_1818 = &l_1261;
                p_46 = 0x2CCE4529L;
                if ((((*l_1806) &= l_1808) <= ((safe_sub_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((l_1197 &= g_68) && (((*l_1815) = l_1813) == l_1816)) > ((((((0x23L && ((*g_1783) , (((*l_1818) = l_1817) == ((*g_1421) , (l_1820 = ((((*g_1783) , 6UL) , l_1808) , l_1819)))))) , p_44) , g_674) , 0xDD7DL) && p_44) > g_482)), g_1821)), 1L)) && p_46)))
                {
                    return p_44;
                }
                else
                {
                    int *l_1822 = &l_1581;
                    unsigned *l_1831 = &g_1799;
                    int l_1838 = 0x55FDD81AL;
                    l_1822 = ((**l_1818) = func_84(&g_68, (*g_97), (*l_1414)));
                    l_1838 = ((safe_rshift_func_int16_t_s_s(((*l_1412) = 7L), 12)) & (safe_mod_func_uint16_t_u_u(((*l_1822) & (p_45 <= (g_192 = (safe_lshift_func_int8_t_s_u((((safe_sub_func_uint32_t_u_u((((*l_1822) || (p_44 != (**l_1817))) && g_102), (((*l_1831) = p_45) , (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(p_44)) & 8L), (*l_1414))), (**g_1204)))))) < l_1837) >= p_47), p_45))))), g_482)));
                    g_1536 ^= ((*l_1822) = (safe_lshift_func_uint8_t_u_u(((*l_1806)--), ((safe_sub_func_uint8_t_u_u(p_45, (safe_unary_minus_func_int16_t_s((-5L))))) & p_46))));
                }
                (**l_1817) = 0x10C7D955L;
            }
            else
            {
                unsigned short l_1851 = 65529UL;
                unsigned ****l_1855 = &l_1765;
                unsigned **l_1865 = &l_1219;
                unsigned **l_1867 = &l_1219;
                int l_1876 = 0x16555A77L;
                int l_1907 = 0x49F8A2BDL;
                int l_1969 = 0xF0ECE601L;
                char *l_1981 = &g_522;
                int *l_1983 = &l_1490;
                if ((l_1808 , (((((safe_unary_minus_func_uint32_t_u(((*l_1417)++))) , p_47) > (**g_1371)) != (safe_lshift_func_int16_t_s_u((l_1851 = 1L), (safe_add_func_uint16_t_u_u((((*l_1566) = (l_1854 != ((*l_1855) = l_1765))) < (((void*)0 != &p_44) >= g_177)), g_710))))) || p_45)))
                {
                    int l_1856 = 0L;
                    p_46 = (((*l_1413) = (p_46 && l_1851)) , p_47);
                    (*l_1414) = l_1856;
                }
                else
                {
                    unsigned short *l_1862 = &g_936;
                    unsigned short *l_1863 = (void*)0;
                    unsigned short *l_1864 = &g_1418;
                    unsigned ***l_1866 = &l_1865;
                    unsigned **l_1870 = &l_1417;
                    int l_1871 = (-10L);
                    int l_1902 = 0x9FE93C86L;
                    int l_1932 = 0x61B9603DL;
                    int l_1933 = 1L;
                    int l_1956 = 4L;
                    (*l_1261) = func_84(l_1857, (safe_add_func_uint16_t_u_u(((*l_1864) = ((*l_1862) = (((((*l_1413) = (safe_lshift_func_int8_t_s_s(((*l_1566) = (0x6D3EA35DDC2899C5LL & p_44)), 4))) < g_1368) || (-1L)) ^ p_46))), 0x6940L)), p_47);
                    if (((((((void*)0 == &g_1783) ^ p_45) , (((*l_1866) = l_1865) != l_1867)) == ((((safe_unary_minus_func_int16_t_s(g_1784)) & p_44) | p_45) || 0x2824L)) , (**l_1261)))
                    {
                        int *l_1872 = &l_1581;
                        int *l_1873 = (void*)0;
                        int *l_1874 = &g_166;
                        int *l_1875 = (void*)0;
                        int *l_1877 = &l_1468;
                        int *l_1878 = &l_1871;
                        int *l_1879 = &g_166;
                        int *l_1880 = &l_1808;
                        int *l_1881 = &l_1871;
                        int *l_1882 = &l_1195;
                        int *l_1883 = &l_1581;
                        int *l_1884 = &l_1808;
                        int *l_1885 = &g_775;
                        int *l_1886 = &l_1195;
                        int *l_1887 = &g_166;
                        int *l_1888 = &l_1490;
                        int *l_1889 = &l_1199;
                        int *l_1890 = &l_1468;
                        int *l_1891 = &l_1195;
                        int *l_1892 = (void*)0;
                        int *l_1893 = (void*)0;
                        int *l_1894 = &l_1876;
                        int *l_1895 = &l_1468;
                        int *l_1896 = &l_1195;
                        int *l_1897 = &l_1871;
                        int *l_1898 = &l_1199;
                        int *l_1899 = &g_775;
                        int *l_1900 = (void*)0;
                        int *l_1901 = &l_1490;
                        int *l_1903 = &l_1199;
                        int *l_1904 = &l_1902;
                        int *l_1905 = (void*)0;
                        int *l_1906 = (void*)0;
                        int *l_1908 = (void*)0;
                        int *l_1909 = &g_775;
                        int *l_1910 = &l_1490;
                        int *l_1911 = (void*)0;
                        int *l_1912 = &g_166;
                        int *l_1913 = (void*)0;
                        int *l_1914 = &g_76;
                        int *l_1915 = &l_1907;
                        int *l_1916 = &g_166;
                        int *l_1917 = (void*)0;
                        int *l_1918 = &l_1490;
                        int *l_1919 = &l_1581;
                        int *l_1920 = &l_1808;
                        int *l_1921 = &l_1197;
                        int *l_1922 = (void*)0;
                        int *l_1923 = (void*)0;
                        int *l_1924 = (void*)0;
                        int *l_1925 = &l_1419;
                        int *l_1927 = &g_775;
                        int *l_1928 = &g_166;
                        int *l_1929 = &g_775;
                        int *l_1930 = (void*)0;
                        int *l_1931 = (void*)0;
                        int *l_1934 = &l_1871;
                        int *l_1935 = &l_1581;
                        int *l_1936 = &l_1195;
                        int *l_1937 = &l_1902;
                        int *l_1938 = &g_115;
                        int *l_1939 = &g_76;
                        int l_1940 = 2L;
                        int *l_1941 = &g_115;
                        int *l_1942 = &g_166;
                        int *l_1943 = &l_1907;
                        int *l_1944 = &l_1197;
                        int *l_1945 = &l_1419;
                        int *l_1946 = &l_1197;
                        int *l_1947 = &l_1926;
                        int *l_1948 = &l_1419;
                        int *l_1949 = &l_1490;
                        int *l_1950 = &l_1197;
                        int *l_1951 = &l_1419;
                        int *l_1952 = &g_166;
                        int *l_1953 = &g_115;
                        int *l_1954 = (void*)0;
                        int *l_1955 = (void*)0;
                        int *l_1957 = (void*)0;
                        int *l_1958 = &l_1871;
                        int *l_1959 = (void*)0;
                        int *l_1960 = &g_775;
                        int *l_1961 = &g_76;
                        int *l_1963 = &l_1907;
                        int *l_1964 = &l_1907;
                        int *l_1965 = (void*)0;
                        int *l_1966 = &l_1490;
                        int *l_1968 = (void*)0;
                        (*g_211) = ((**g_1204) , (*g_211));
                        --g_1970;
                        (*l_1941) ^= ((*l_1414) > (safe_sub_func_uint8_t_u_u((((*l_1899) , &g_97) == (void*)0), (safe_rshift_func_uint8_t_u_s(p_47, ((*l_1566) &= l_1871))))));
                        (*l_1886) = 0xA460ED69L;
                    }
                    else
                    {
                        unsigned long long l_1982 = 1UL;
                        l_1982 = (safe_add_func_int64_t_s_s((g_399 == 0xAD2EL), 7UL));
                        (*l_1261) = (l_1983 = &p_46);
                    }
                    (*l_1414) = ((*g_211) = 0xA9ACED51L);
                    (*g_211) = (**l_1261);
                }
            }
        }
        ++l_2056;
    }
    l_1195 ^= (safe_add_func_int8_t_s_s(((((void*)0 == l_2061) , (safe_add_func_int16_t_s_s((9L || (safe_unary_minus_func_uint64_t_u(((g_1970 ^ ((*l_1413) = (safe_add_func_int32_t_s_s(l_2067, p_47)))) , (safe_sub_func_uint64_t_u_u((((((safe_unary_minus_func_int32_t_s(0x963B4A99L)) <= ((((safe_rshift_func_uint16_t_u_u(((g_2073 != &l_1413) < 2L), p_45)) && (*g_1372)) , p_47) , (*g_2074))) & g_1618) || l_2075) | (-9L)), p_47)))))), 65535UL))) , (*g_1205)), (*g_1783)));
    g_2195++;
    return (*g_1372);
}







static char func_50(long long p_51, char p_52, unsigned p_53, unsigned long long p_54)
{
    char *l_69 = (void*)0;
    int l_519 = 0xEB905F65L;
    int l_533 = 0xA5A646F1L;
    int *l_543 = (void*)0;
    int **l_542 = &l_543;
    int *l_544 = &g_68;
    int l_641 = 0L;
    int l_670 = 0xA4616DD8L;
    unsigned **l_733 = (void*)0;
    unsigned l_774 = 0xA0075ED1L;
    short l_786 = 0x9A24L;
    int **l_800 = &g_211;
    int l_896 = 4L;
    int l_903 = 0x39B7CD2BL;
    int l_928 = 7L;
    int l_1172 = 0x3F75FBCCL;
    for (p_52 = 14; (p_52 <= (-26)); --p_52)
    {
        int *l_66 = (void*)0;
        int *l_67 = &g_68;
        int *l_503 = &g_166;
        unsigned short *l_516 = (void*)0;
        unsigned long long l_545 = 0x4528E02149DF2EAALL;
        int l_602 = 0xEA310EAAL;
        int l_613 = 0L;
        int l_632 = 0xA63C7AB3L;
        int l_649 = (-1L);
        int l_707 = 0x03E3E7EDL;
        char *l_763 = (void*)0;
        (*l_503) = (!func_60(g_6, &g_56, ((*l_67) = g_56), l_69, (safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_s(1L, 4))))));
        (*g_211) = (*g_211);
        for (g_492 = 0; (g_492 > 29); ++g_492)
        {
            char *l_520 = &g_56;
            char *l_521 = &g_522;
            unsigned char **l_527 = (void*)0;
            unsigned char **l_528 = (void*)0;
            unsigned char **l_529 = (void*)0;
            unsigned char **l_530 = (void*)0;
            unsigned char *l_531 = &g_192;
            int l_532 = 0xA290CDD9L;
            unsigned long long l_556 = 18446744073709551615UL;
            int l_626 = (-10L);
            int l_666 = 0x3E1314E4L;
            int l_680 = 0x6990FBD0L;
            int l_696 = 0xA3E1B3F8L;
            short l_729 = 0x15FAL;
            long long *l_758 = &g_564;
            unsigned long long **l_759 = (void*)0;
            unsigned long long *l_761 = &l_556;
            unsigned long long **l_760 = &l_761;
            char **l_762 = &l_521;
            (*g_211) = (safe_rshift_func_int16_t_s_s((l_533 ^= (((safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(1L, ((safe_lshift_func_uint8_t_u_u(((((((void*)0 != l_516) >= (g_497 | ((safe_lshift_func_int8_t_s_s(((*l_521) |= ((*l_520) |= l_519)), (safe_rshift_func_uint16_t_u_s(((safe_mod_func_int32_t_s_s((p_54 , p_53), (*g_211))) & ((l_531 = (g_113 , &g_192)) != &g_192)), 11)))) ^ g_482))) || p_54) || g_115) ^ g_76), 2)) , 0x53L))), (*l_503))) , g_102), p_51)) , g_390) == l_532)), 3));
            if ((((g_166 || g_113) ^ 0x68L) > (l_533 <= p_52)))
            {
                int **l_534 = &l_503;
                int **l_535 = (void*)0;
                int **l_536 = &g_211;
                int **l_537 = (void*)0;
                int *l_539 = &l_532;
                int **l_538 = &l_539;
                int l_549 = 0xDE7F64FBL;
                int l_551 = 0L;
                int l_555 = 6L;
                unsigned char *l_565 = &g_482;
                (*l_538) = ((*l_536) = ((*l_534) = &g_166));
                (*l_503) |= p_51;
                if (((safe_add_func_int64_t_s_s((g_98 , ((&l_67 == l_542) , (((*l_542) = (void*)0) == l_544))), 1UL)) >= l_545))
                {
                    int *l_546 = &l_533;
                    int l_547 = (-1L);
                    int *l_548 = &l_547;
                    int *l_550 = &g_166;
                    int *l_552 = &l_547;
                    int *l_553 = &l_549;
                    int *l_554 = &g_166;
                    l_556++;
                    if (p_52)
                        break;
                }
                else
                {
                    long long *l_563 = &g_564;
                    unsigned l_566 = 1UL;
                    int *l_567 = &l_551;
                    l_567 = func_84(func_84(func_84(l_539, ((*l_544) = (safe_unary_minus_func_int32_t_s(((**l_536) = (g_190 && (((g_497 < (safe_sub_func_uint8_t_u_u((g_68 , (g_192 | (&g_482 == (((safe_unary_minus_func_int64_t_s(((*l_563) = p_51))) <= l_533) , l_565)))), 252UL))) == p_51) == (*l_539))))))), p_51), p_52, p_51), p_52, l_566);
                }
                for (g_56 = (-3); (g_56 != (-4)); g_56--)
                {
                    int **l_577 = &l_543;
                    int *l_578 = &l_519;
                    for (g_166 = 28; (g_166 >= (-22)); --g_166)
                    {
                        return p_54;
                    }
                    (*l_578) |= ((*l_539) ^ (safe_sub_func_uint64_t_u_u((g_576 ^= (safe_rshift_func_int16_t_s_u(g_113, 15))), (l_532 & ((p_54 | p_52) || (((*l_521) = ((l_577 == (void*)0) < (*l_503))) <= ((void*)0 != l_544)))))));
                }
            }
            else
            {
                int *l_579 = &l_519;
                int **l_580 = &l_503;
                int *l_581 = &l_532;
                int *l_582 = &l_532;
                int l_583 = 0x971C4D4AL;
                int *l_584 = &l_519;
                int *l_585 = (void*)0;
                int *l_586 = (void*)0;
                int *l_587 = (void*)0;
                int *l_588 = &g_76;
                int *l_589 = &l_583;
                int *l_590 = &l_532;
                int *l_591 = &l_532;
                int l_592 = 8L;
                int *l_593 = (void*)0;
                int *l_594 = (void*)0;
                int *l_595 = &g_166;
                int *l_596 = (void*)0;
                int *l_597 = &g_115;
                int *l_598 = (void*)0;
                int *l_599 = &g_166;
                int *l_600 = (void*)0;
                int *l_601 = &g_166;
                int *l_603 = &g_115;
                int *l_604 = (void*)0;
                int *l_605 = &l_602;
                int *l_606 = &g_115;
                int *l_607 = (void*)0;
                int *l_608 = &l_602;
                int *l_609 = &l_602;
                int *l_610 = &g_115;
                int *l_611 = &l_519;
                int *l_612 = &g_166;
                int *l_614 = &l_583;
                int *l_615 = &l_519;
                int *l_616 = (void*)0;
                int *l_617 = &l_533;
                int *l_618 = (void*)0;
                int l_619 = 0x419DD807L;
                int *l_620 = &l_592;
                int *l_621 = (void*)0;
                int *l_622 = &l_533;
                int *l_623 = &l_583;
                int *l_624 = (void*)0;
                int *l_625 = &l_613;
                int *l_627 = &l_532;
                int *l_628 = &l_532;
                int *l_629 = &g_76;
                int *l_630 = &l_533;
                int *l_631 = &l_592;
                int *l_633 = &l_583;
                int *l_634 = &g_115;
                int *l_635 = (void*)0;
                int *l_636 = (void*)0;
                int *l_637 = &l_626;
                int *l_638 = &l_532;
                int *l_639 = &l_519;
                int *l_640 = &l_592;
                int *l_642 = &l_592;
                int *l_643 = &l_519;
                int *l_644 = &l_519;
                int *l_645 = &l_613;
                int *l_646 = (void*)0;
                int *l_648 = &l_583;
                int *l_650 = &l_641;
                int *l_651 = &l_533;
                int *l_652 = &l_519;
                int *l_653 = &l_592;
                int *l_654 = &g_76;
                int *l_655 = &g_76;
                int *l_656 = &l_583;
                int *l_657 = &l_641;
                int *l_658 = &l_583;
                int *l_659 = &g_166;
                int *l_660 = &l_649;
                int *l_661 = &l_533;
                int *l_662 = &g_76;
                int *l_663 = &g_166;
                int *l_664 = &g_76;
                int *l_665 = &l_532;
                int *l_667 = (void*)0;
                int *l_668 = &l_602;
                int *l_669 = &l_592;
                int *l_671 = &l_641;
                int *l_672 = &l_649;
                int *l_673 = &l_583;
                int *l_675 = &l_583;
                int *l_676 = &l_641;
                int *l_677 = &l_649;
                int *l_678 = &g_166;
                int *l_679 = &l_602;
                int *l_681 = &l_680;
                int *l_682 = &l_613;
                int l_683 = 1L;
                int *l_684 = &l_532;
                int *l_685 = (void*)0;
                int *l_686 = &l_602;
                int l_687 = 0xC30F5127L;
                int *l_688 = &l_619;
                int l_689 = 2L;
                int *l_690 = &l_632;
                int *l_691 = (void*)0;
                int *l_692 = &l_687;
                int *l_693 = &l_641;
                int *l_694 = &g_115;
                int *l_695 = (void*)0;
                int *l_697 = (void*)0;
                int *l_698 = (void*)0;
                int *l_699 = &l_666;
                int *l_700 = (void*)0;
                int *l_701 = (void*)0;
                int *l_702 = &l_666;
                int l_703 = 0x4C374B97L;
                int *l_705 = &l_613;
                int *l_706 = &l_602;
                int *l_708 = &l_670;
                int *l_709 = &l_592;
                int *l_711 = &l_683;
                int *l_712 = &g_115;
                int *l_713 = (void*)0;
                int *l_714 = &l_613;
                int *l_715 = &l_533;
                int *l_717 = &l_619;
                int *l_718 = &l_626;
                int *l_719 = &l_666;
                int *l_720 = &g_166;
                int *l_721 = &g_115;
                (*l_580) = l_579;
                g_722--;
                for (l_613 = (-7); (l_613 < (-7)); l_613 = safe_add_func_int16_t_s_s(l_613, 6))
                {
                    unsigned l_730 = 1UL;
                    unsigned *l_736 = &l_730;
                    unsigned **l_735 = &l_736;
                    unsigned long long l_742 = 18446744073709551607UL;
                    int l_745 = (-1L);
                    if (((safe_rshift_func_uint16_t_u_u(p_54, 13)) & 0x3B5EF5EFCAC26395LL))
                    {
                        if (p_53)
                            break;
                        --l_730;
                    }
                    else
                    {
                        unsigned ***l_734 = &l_733;
                        int l_741 = 0x88D47356L;
                        (*l_694) |= (((((*l_734) = l_733) != l_735) & (safe_add_func_uint64_t_u_u((&g_113 != &g_113), g_98))) , (l_532 = (p_51 == (*l_503))));
                        if (l_626)
                            continue;
                        (*l_658) = (safe_lshift_func_int16_t_s_u(0x49C8L, 13));
                        l_742++;
                    }
                    if ((*g_211))
                    {
                        l_745 = p_54;
                        return g_704;
                    }
                    else
                    {
                        short l_754 = (-2L);
                        char *l_757 = &g_710;
                        if (p_53)
                            break;
                        (*l_673) = (safe_rshift_func_int8_t_s_u(((*l_757) = (g_390 , ((((*l_521) = ((*l_520) ^= (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((g_98 == ((((g_722 != (&p_52 == &p_52)) == ((*l_612) = l_754)) , p_52) != p_51)) != ((((safe_mod_func_uint8_t_u_u((((p_52 , g_489) & p_51) | l_729), g_576)) && l_680) | 0xA39CL) | g_192)), g_192)), 2)))) , 248UL) || 0xD4L))), 7));
                    }
                }
            }
            (*g_211) = ((p_54 >= l_641) || ((((*l_758) = l_641) && (g_113 = (((*l_760) = &l_545) != &l_545))) && (((*l_762) = &g_710) != l_763)));
            if ((*g_211))
                continue;
        }
    }
    if (p_51)
    {
        return l_670;
    }
    else
    {
        unsigned long long *l_768 = (void*)0;
        unsigned long long *l_769 = (void*)0;
        unsigned long long *l_770 = &g_113;
        int l_773 = 0xD0861988L;
        int **l_776 = &g_211;
        unsigned short *l_779 = (void*)0;
        unsigned short *l_780 = &g_102;
        long long *l_785 = &g_564;
        int l_815 = 0x3CAE9386L;
        unsigned l_817 = 0xAA6798A1L;
        int l_830 = 0x3CD70492L;
        int *l_841 = &g_775;
        int *l_842 = &l_641;
        int *l_843 = &g_115;
        int *l_844 = &g_775;
        int *l_845 = (void*)0;
        int *l_846 = &g_76;
        int *l_847 = &l_670;
        int *l_848 = &g_115;
        int *l_849 = &g_115;
        int *l_850 = (void*)0;
        int *l_851 = &g_115;
        int l_852 = 0xB29C7893L;
        int *l_853 = &l_519;
        int *l_854 = &l_641;
        int *l_855 = &l_519;
        int *l_856 = &g_775;
        int *l_857 = &l_852;
        int *l_858 = (void*)0;
        int *l_859 = (void*)0;
        int *l_860 = (void*)0;
        int *l_861 = (void*)0;
        int *l_862 = &g_76;
        int *l_863 = &l_815;
        int *l_864 = &g_115;
        int *l_865 = &l_815;
        int l_866 = (-1L);
        int *l_867 = &l_519;
        int *l_868 = &l_533;
        int *l_869 = (void*)0;
        int *l_870 = &g_115;
        int *l_871 = &g_775;
        int *l_872 = &l_852;
        int *l_873 = &l_866;
        int *l_874 = &l_519;
        int *l_875 = &g_115;
        int *l_876 = &l_852;
        int *l_877 = &l_773;
        int *l_878 = &l_670;
        int *l_879 = &l_852;
        int *l_880 = &g_115;
        int *l_881 = &g_166;
        int *l_882 = &l_670;
        int *l_883 = &l_866;
        int *l_884 = &l_815;
        int *l_885 = &l_519;
        int *l_886 = (void*)0;
        int *l_887 = &g_166;
        int l_888 = 8L;
        int *l_889 = &g_166;
        int *l_890 = &l_641;
        int *l_891 = &g_775;
        int *l_892 = &g_775;
        int *l_893 = &l_773;
        int *l_894 = &l_888;
        int *l_895 = &l_888;
        int *l_897 = &l_896;
        int *l_898 = &l_888;
        int *l_899 = &l_852;
        int *l_900 = &l_866;
        int *l_901 = &l_533;
        int *l_902 = &l_866;
        int *l_904 = (void*)0;
        int *l_905 = &g_775;
        int *l_906 = &l_519;
        int *l_907 = &l_866;
        unsigned char l_908 = 0xF5L;
        (*l_776) = (func_60(l_533, ((g_775 &= ((1L < ((safe_add_func_int32_t_s_s((*g_211), ((((*l_770) = (safe_rshift_func_uint16_t_u_s((g_76 , (((*g_97) , &p_54) != &p_54)), (!(-8L))))) != ((((safe_mod_func_int64_t_s_s(p_54, l_773)) == 0xBF2BE97FAF36EF52LL) >= l_773) , l_774)) | 0UL))) > p_54)) , g_482)) , &p_52), p_54, &g_710, (*g_211)) , (void*)0);
        if (((p_53 , g_522) & (0xFFL <= ((g_564 , (void*)0) != (void*)0))))
        {
            unsigned char l_795 = 9UL;
            int ***l_801 = (void*)0;
            int ***l_802 = &l_776;
            char *l_803 = (void*)0;
            int *l_816 = &g_115;
            for (g_674 = (-16); (g_674 <= 9); g_674 = safe_add_func_int16_t_s_s(g_674, 4))
            {
                int *l_789 = (void*)0;
                int *l_790 = &l_519;
                int *l_791 = &l_533;
                int *l_792 = &g_76;
                int *l_793 = &l_641;
                int *l_794 = &l_773;
                ++l_795;
                (*l_790) = (((((*l_770) = l_670) >= 1L) >= (p_53 ^ ((safe_add_func_int16_t_s_s(0xD67DL, p_53)) | ((*l_780) = 65528UL)))) || (g_576 , g_115));
            }
            (*l_802) = l_800;
            g_76 &= ((*l_816) = (l_773 |= l_815));
            return l_817;
        }
        else
        {
            int *l_837 = (void*)0;
            int *l_838 = &l_533;
            for (l_670 = (-12); (l_670 > (-10)); ++l_670)
            {
                int *l_820 = &g_68;
                int l_821 = 0x05C01A75L;
                long long *l_822 = &g_823;
                int *l_831 = (void*)0;
                int *l_832 = (void*)0;
                int *l_833 = &g_775;
                short *l_836 = &g_492;
                if (p_52)
                    break;
                if (p_53)
                    continue;
                (*l_776) = func_84(l_820, l_821, (((*l_822) = ((*l_785) = (g_722 , 0x1C01A14A0E6AF30FLL))) & (((((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0x50L, (((*l_833) = (g_704 | (((*l_770) = 0x4C694B760A30BF8ALL) == l_830))) != (safe_add_func_uint64_t_u_u((((*l_836) = g_166) < 65535UL), g_489))))), g_190)) , 0UL), p_54)) == g_68) || p_52) & 0xB6B0734E14868E69LL) && p_53)));
                (*l_833) ^= 1L;
            }
            (*l_838) = p_53;
            for (g_823 = 0; (g_823 > 21); ++g_823)
            {
                (*l_776) = (*l_800);
            }
        }
        ++l_908;
    }
    if (p_52)
    {
        unsigned l_911 = 0x4D57C430L;
        int *l_912 = &l_903;
        unsigned ***l_914 = &l_733;
        unsigned *l_915 = (void*)0;
        unsigned *l_916 = &g_190;
        unsigned l_917 = 1UL;
        int l_918 = 1L;
        (*l_912) |= l_911;
        (*l_914) = (g_913 = g_913);
        if (((g_522 |= ((0x7E9FL != p_51) & ((((*l_542) = (void*)0) == (void*)0) <= ((*l_916) ^= g_192)))) , (g_76 = (((*l_912) = (0xCC73B85BL ^ l_917)) >= l_918))))
        {
            (*l_912) = g_489;
        }
        else
        {
            l_912 = ((*l_800) = ((*l_912) , l_915));
            (*l_800) = (*l_800);
        }
        (*l_800) = (void*)0;
    }
    else
    {
        short l_921 = 0L;
        long long *l_924 = &g_823;
        unsigned *l_927 = &g_190;
        unsigned short l_950 = 0xF1D3L;
        int l_958 = 0L;
        int l_975 = 0xB5ED032FL;
        int l_985 = (-1L);
        int l_1003 = 0x8FAABBF3L;
        int *l_1026 = &l_533;
        int *l_1027 = &l_958;
        int *l_1028 = &l_533;
        int *l_1029 = &g_166;
        int *l_1030 = (void*)0;
        int *l_1031 = &g_76;
        int *l_1032 = &l_519;
        int *l_1033 = &g_115;
        int *l_1034 = &l_903;
        int *l_1035 = &l_896;
        int *l_1036 = (void*)0;
        int *l_1037 = &l_896;
        int *l_1038 = &l_903;
        int *l_1039 = &l_896;
        int *l_1040 = &l_519;
        int *l_1041 = &g_775;
        int *l_1042 = &l_903;
        int *l_1043 = &l_985;
        int *l_1044 = &g_76;
        int *l_1045 = (void*)0;
        int *l_1046 = &l_533;
        int l_1047 = (-8L);
        int *l_1048 = &l_533;
        int *l_1049 = &l_896;
        int *l_1050 = &g_115;
        int *l_1051 = (void*)0;
        int *l_1052 = &l_641;
        int l_1053 = 0x2C11F924L;
        int *l_1054 = &l_670;
        int *l_1055 = &g_166;
        int *l_1056 = (void*)0;
        int *l_1057 = &l_641;
        int *l_1058 = &g_166;
        int *l_1059 = &l_519;
        int *l_1060 = &l_670;
        int *l_1061 = &g_775;
        int *l_1062 = &l_670;
        int *l_1063 = (void*)0;
        int *l_1064 = &l_985;
        int *l_1065 = &l_1003;
        int *l_1066 = &g_775;
        int *l_1067 = &l_670;
        int *l_1068 = &l_975;
        int l_1069 = (-4L);
        int *l_1070 = &g_166;
        int *l_1071 = &l_1069;
        int *l_1072 = (void*)0;
        int l_1073 = 0x0830DE5DL;
        int l_1074 = (-1L);
        int *l_1075 = &l_1047;
        int *l_1076 = &l_1069;
        int *l_1077 = &l_1047;
        int *l_1078 = &g_166;
        int *l_1079 = &l_1053;
        int *l_1080 = &l_1003;
        int *l_1081 = &l_1073;
        int *l_1082 = &l_958;
        int *l_1083 = &l_533;
        int *l_1084 = &l_985;
        int *l_1085 = (void*)0;
        int *l_1086 = &g_775;
        int *l_1087 = &g_115;
        int *l_1088 = &l_1003;
        int *l_1089 = &l_641;
        int *l_1090 = &l_1047;
        int *l_1091 = &l_1003;
        int *l_1092 = &l_958;
        int *l_1093 = &g_775;
        int *l_1094 = &l_975;
        int *l_1095 = &l_958;
        int *l_1096 = &l_1073;
        int *l_1097 = &g_76;
        int *l_1098 = &l_903;
        int *l_1099 = &l_1073;
        int *l_1100 = (void*)0;
        int *l_1101 = &g_775;
        int *l_1102 = &l_670;
        int *l_1104 = (void*)0;
        int *l_1105 = &l_903;
        int *l_1106 = &l_903;
        int l_1107 = 0xA5E97BEEL;
        int *l_1108 = &l_903;
        int *l_1109 = &l_1074;
        int *l_1110 = &l_641;
        int *l_1111 = &g_775;
        int *l_1112 = &l_1003;
        int *l_1113 = &l_903;
        int *l_1114 = &l_975;
        int *l_1115 = &l_519;
        int *l_1117 = &l_670;
        int *l_1118 = &l_1003;
        int *l_1119 = (void*)0;
        int *l_1120 = (void*)0;
        int *l_1121 = &l_533;
        int *l_1122 = &g_775;
        int *l_1123 = &l_1074;
        int *l_1124 = (void*)0;
        int l_1125 = (-1L);
        int *l_1126 = &l_1125;
        int *l_1128 = &l_641;
        int l_1130 = 1L;
        int *l_1131 = &l_1003;
        int *l_1132 = &g_76;
        int *l_1133 = &l_519;
        int *l_1134 = &g_115;
        int *l_1135 = &l_1107;
        int *l_1136 = &l_1047;
        int *l_1137 = &l_533;
        int *l_1138 = (void*)0;
        int l_1139 = 0x47E298B7L;
        int *l_1140 = &l_985;
        int *l_1141 = (void*)0;
        int *l_1142 = &l_1107;
        int *l_1143 = (void*)0;
        int *l_1144 = &l_903;
        int *l_1145 = &g_166;
        int l_1146 = 9L;
        int *l_1147 = &l_1146;
        int *l_1148 = &l_1073;
        int l_1149 = 0x5E26AE9BL;
        int *l_1150 = &l_1130;
        int *l_1151 = &l_1073;
        int *l_1152 = &l_1146;
        int *l_1153 = &l_519;
        int *l_1154 = &l_896;
        int *l_1155 = &l_1139;
        int l_1156 = (-1L);
        int *l_1157 = &l_1125;
        int *l_1158 = (void*)0;
        int *l_1159 = (void*)0;
        int *l_1160 = &l_670;
        int *l_1161 = (void*)0;
        int *l_1162 = &l_1149;
        int *l_1163 = &l_1053;
        int *l_1164 = (void*)0;
        int *l_1165 = (void*)0;
        int *l_1166 = &l_1047;
        int *l_1168 = &l_1139;
        int *l_1169 = &g_76;
        int *l_1170 = &g_166;
        int *l_1171 = &l_975;
        if (((((((((safe_mod_func_uint64_t_u_u((l_921 | ((*l_924) = ((*g_97) , (safe_rshift_func_uint16_t_u_u(p_52, 10))))), l_921)) ^ ((p_51 ^ (1UL | (((safe_lshift_func_uint16_t_u_u((g_102 == p_53), (((*l_927) |= p_53) ^ g_115))) > p_54) , 0x19A7L))) != g_6)) ^ l_921) >= p_52) & l_928) & l_921) < (-1L)) & p_54))
        {
            unsigned *l_929 = &l_774;
            int *l_937 = &l_928;
            int l_945 = (-1L);
            long long l_955 = 9L;
            if (p_51)
            {
                int l_951 = 0x1CD933EFL;
                unsigned short *l_959 = &g_936;
                int *l_960 = &g_775;
                unsigned char *l_961 = &g_192;
                unsigned char *l_962 = (void*)0;
                unsigned char *l_963 = &g_576;
                for (g_482 = 0; (g_482 <= 40); g_482 = safe_add_func_int8_t_s_s(g_482, 7))
                {
                    int *l_952 = &l_896;
                    for (l_928 = 14; (l_928 <= (-2)); l_928 = safe_sub_func_int16_t_s_s(l_928, 8))
                    {
                        int *l_942 = &l_533;
                        (*l_942) = p_51;
                        (*l_800) = l_927;
                        (*g_211) = (safe_add_func_uint32_t_u_u(((g_722 <= (l_945 ^ (((safe_rshift_func_int16_t_s_s(p_52, 12)) > (l_950 <= (((g_564 = 4L) , p_52) ^ 8UL))) | (p_53 != (g_647 || p_54))))) , l_951), p_51));
                        if ((*g_211))
                            break;
                    }
                    (*l_952) = (&l_927 == (void*)0);
                    (*l_800) = &l_945;
                }
                (*l_960) = (((g_722 &= (safe_add_func_uint32_t_u_u(g_704, (p_54 , l_955)))) | (l_950 <= (safe_mod_func_int16_t_s_s((0x68947EB9L || ((l_958 = (g_823 > g_674)) <= l_950)), ((*l_959) ^= 0xD8B4L))))) && 1L);
                l_945 ^= (((*l_963) = ((*l_961) = g_704)) | (*l_960));
            }
            else
            {
                return p_51;
            }
        }
        else
        {
            int *l_976 = &l_903;
            int *l_977 = &g_775;
            int *l_978 = &g_115;
            int *l_979 = &l_958;
            int *l_980 = &l_533;
            int *l_981 = &l_641;
            int *l_982 = &l_670;
            int *l_983 = (void*)0;
            int *l_984 = &l_975;
            int *l_986 = &g_166;
            int *l_987 = &l_975;
            int *l_988 = &l_641;
            int *l_989 = &l_903;
            int *l_990 = &l_903;
            int *l_991 = &l_641;
            int *l_992 = &g_166;
            int *l_993 = &l_670;
            int *l_994 = &l_975;
            int *l_995 = &l_641;
            int *l_996 = &g_775;
            int *l_997 = (void*)0;
            int *l_998 = (void*)0;
            int *l_999 = &l_903;
            int *l_1000 = &g_166;
            int *l_1001 = &g_76;
            int *l_1002 = &g_166;
            int *l_1004 = &l_985;
            int *l_1005 = &l_958;
            int *l_1006 = &g_76;
            int *l_1007 = &g_76;
            int *l_1008 = &g_775;
            int *l_1009 = &g_76;
            int *l_1010 = &g_115;
            int *l_1011 = &l_903;
            int *l_1012 = (void*)0;
            int *l_1013 = &l_985;
            int *l_1014 = &l_670;
            int *l_1015 = &l_1003;
            int *l_1016 = &g_166;
            int *l_1017 = (void*)0;
            int *l_1018 = &l_670;
            int *l_1019 = &g_115;
            int *l_1020 = &l_641;
            int *l_1022 = (void*)0;
            for (g_823 = (-18); (g_823 >= 6); ++g_823)
            {
                char *l_966 = (void*)0;
                unsigned long long *l_969 = &g_113;
                int l_970 = 7L;
                int *l_971 = (void*)0;
                int *l_972 = (void*)0;
                int *l_973 = (void*)0;
                int *l_974 = &l_519;
                (*l_974) ^= (+p_52);
            }
            g_1023++;
        }
        ++g_1173;
    }
    return p_52;
}







static int func_60(unsigned p_61, char * p_62, int p_63, char * p_64, int p_65)
{
    long long l_77 = 0x34D89BB643C8F438LL;
    int *l_80 = (void*)0;
    int *l_81 = &g_76;
    unsigned char *l_188 = (void*)0;
    unsigned char **l_187 = &l_188;
    unsigned *l_189 = &g_190;
    unsigned char *l_191 = &g_192;
    int l_303 = 0x1354E1D6L;
    long long l_305 = 4L;
    int l_342 = 0L;
    int l_346 = 1L;
    int l_367 = (-1L);
    int l_401 = 0x1942EB45L;
    int l_414 = 0x0580F477L;
    int l_429 = 0L;
    int l_433 = (-1L);
    int l_453 = (-7L);
    int l_454 = 0xD9F06A96L;
    int l_469 = 0xF4181989L;
    for (g_68 = 12; (g_68 < 10); g_68 = safe_sub_func_uint32_t_u_u(g_68, 1))
    {
        int *l_75 = &g_76;
        if (g_6)
            break;
        (*l_75) = p_65;
        if (l_77)
            continue;
    }
    (*l_81) &= (g_6 <= (safe_add_func_int16_t_s_s(l_77, (~p_65))));
    for (p_65 = 0; (p_65 <= 10); p_65 = safe_add_func_int8_t_s_s(p_65, 4))
    {
        int **l_88 = (void*)0;
        int *l_90 = &g_68;
        int **l_89 = &l_90;
        int l_91 = 0x67647CF2L;
        int **l_181 = &l_81;
        (*l_181) = func_84(((*l_89) = &g_68), (p_65 , (0xB22CL <= l_91)), p_61);
    }
    if (((0x6F341A2B65289450LL & (((*l_191) = (safe_unary_minus_func_uint8_t_u((((((safe_lshift_func_int16_t_s_u(((0xD59534E3L ^ (safe_rshift_func_uint8_t_u_u((((((void*)0 == &g_56) , ((*l_189) = ((*g_96) != (((((((1UL || p_63) || ((void*)0 != l_80)) <= (*l_81)) , l_187) == (void*)0) && (*l_81)) , (void*)0)))) <= 0xE7A24857L) , (*l_81)), g_166))) != 0x1DB4B26C247421FALL), 1)) == g_6) , p_63) ^ (*l_81)) >= 0xE5L)))) <= (*p_62))) | g_166))
    {
        int *l_193 = &g_76;
        int **l_194 = (void*)0;
        int **l_195 = &l_81;
        int **l_196 = &l_193;
        (*l_81) = g_56;
        (*l_196) = (l_80 = ((*l_195) = l_193));
    }
    else
    {
        unsigned l_204 = 0x28FE829DL;
        int l_253 = 0x156ABEB0L;
        int l_282 = 0x3552C833L;
        int l_288 = 1L;
        int l_291 = 0x0E80B645L;
        int l_318 = 0x4A0073B9L;
        int l_353 = 1L;
        int l_391 = 1L;
        int l_411 = 0x2A144F9DL;
        int l_431 = 0x46EF5501L;
        int l_460 = 0xC172C578L;
        int l_471 = 0xEEA38388L;
        int l_477 = (-1L);
        int l_480 = 0L;
        int l_481 = 0x843842C4L;
        unsigned **l_496 = &l_189;
        if ((p_61 <= 0UL))
        {
            unsigned l_212 = 1UL;
            for (g_177 = 0; (g_177 != 46); g_177 = safe_add_func_int8_t_s_s(g_177, 4))
            {
                if (p_63)
                {
                    int *l_199 = &g_76;
                    int *l_200 = &g_115;
                    int *l_201 = &g_76;
                    int *l_202 = &g_115;
                    int *l_203 = &g_115;
                    l_204++;
                    for (g_115 = (-28); (g_115 == (-25)); g_115++)
                    {
                        int **l_209 = (void*)0;
                        int **l_210 = (void*)0;
                        g_211 = &g_76;
                        return l_212;
                    }
                }
                else
                {
                    char l_227 = 1L;
                    int l_228 = 0L;
                    if (p_63)
                    {
                        int l_221 = (-1L);
                        unsigned short *l_224 = &g_102;
                        long long *l_225 = &l_77;
                        int *l_226 = (void*)0;
                        l_227 ^= (safe_add_func_int8_t_s_s((0x2EDBCE3F75E0FD25LL & (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((((*p_62) && (safe_add_func_uint32_t_u_u(p_65, (l_221 = (((*l_81) = (*g_211)) <= p_63))))) || l_221), (((*l_225) = ((safe_lshift_func_uint16_t_u_u(((*l_224) = ((l_204 , p_65) & g_98)), 6)) >= p_65)) < 0x136B179DCF4DCFDALL))) > p_63), 0))), g_113));
                        p_65 ^= (*g_211);
                        if ((*g_211))
                            continue;
                    }
                    else
                    {
                        short l_229 = 0xC43CL;
                        l_228 = 0x054F3BA6L;
                        if ((*g_211))
                            continue;
                        if (l_229)
                            continue;
                        (*g_211) ^= (((65534UL >= l_212) >= (l_227 != 0x6DC9F68CL)) <= g_115);
                    }
                }
            }
        }
        else
        {
            for (g_192 = 0; (g_192 == 36); g_192++)
            {
                return (*g_211);
            }
        }
        for (g_68 = 0; (g_68 <= (-4)); g_68 = safe_sub_func_int32_t_s_s(g_68, 7))
        {
            if (p_63)
                break;
            p_65 = (*g_211);
        }
        if (p_65)
        {
            int **l_234 = &l_80;
            (*l_234) = &p_65;
        }
        else
        {
            int *l_240 = (void*)0;
            int *l_241 = &g_76;
            int *l_242 = &g_166;
            int *l_243 = &g_76;
            int *l_244 = (void*)0;
            int *l_245 = &g_76;
            int *l_246 = &g_115;
            int *l_247 = (void*)0;
            int *l_248 = &g_166;
            int *l_249 = &g_115;
            int *l_250 = &g_166;
            int *l_251 = (void*)0;
            int *l_252 = &g_166;
            int *l_254 = (void*)0;
            int *l_255 = &l_253;
            int *l_256 = &g_166;
            int *l_257 = &g_115;
            int *l_258 = &g_76;
            int *l_259 = &g_76;
            int *l_260 = &g_115;
            int *l_261 = &g_115;
            int *l_262 = &g_76;
            int *l_263 = &l_253;
            int *l_264 = &g_115;
            int *l_265 = &l_253;
            int *l_266 = &g_76;
            int *l_267 = &g_76;
            int *l_268 = &g_76;
            int *l_269 = &l_253;
            int *l_270 = &g_115;
            int *l_271 = &g_76;
            int *l_272 = &g_166;
            int l_273 = 0x0482E1C0L;
            int *l_274 = &l_273;
            int *l_275 = (void*)0;
            int *l_276 = &l_273;
            int *l_277 = &l_253;
            int *l_278 = &l_273;
            int *l_279 = &g_76;
            int *l_280 = &g_115;
            int *l_281 = &g_76;
            int *l_283 = (void*)0;
            int *l_284 = &l_273;
            int *l_285 = (void*)0;
            int *l_286 = &g_166;
            int *l_287 = &g_76;
            int l_289 = 0xC0604E30L;
            int *l_290 = (void*)0;
            int *l_292 = &l_288;
            int *l_293 = &g_166;
            int *l_294 = &g_76;
            int *l_295 = &l_288;
            int *l_296 = &l_282;
            int *l_297 = (void*)0;
            int *l_298 = &l_288;
            int *l_299 = &g_76;
            int *l_300 = (void*)0;
            int *l_301 = &l_289;
            int *l_302 = &l_291;
            int *l_304 = &l_253;
            int *l_306 = &l_303;
            int *l_307 = &l_273;
            int *l_308 = (void*)0;
            int *l_309 = &l_289;
            int *l_310 = &g_76;
            int *l_311 = &l_288;
            int *l_312 = &l_282;
            int *l_313 = &l_253;
            int *l_314 = &l_291;
            int *l_315 = &l_291;
            int *l_316 = (void*)0;
            int *l_317 = &l_273;
            int *l_319 = &g_166;
            int *l_320 = &g_166;
            int l_321 = (-1L);
            int *l_322 = &l_253;
            int *l_323 = &l_282;
            int *l_324 = &l_288;
            int *l_325 = &g_115;
            int *l_326 = &g_115;
            int *l_327 = &g_76;
            int *l_328 = (void*)0;
            int *l_329 = (void*)0;
            int *l_330 = &l_321;
            int *l_331 = &l_282;
            int *l_332 = &g_115;
            int *l_333 = &l_282;
            int *l_334 = &l_288;
            int *l_335 = &l_253;
            int *l_336 = &l_321;
            int *l_337 = &l_289;
            int *l_338 = &l_321;
            int *l_339 = (void*)0;
            int *l_340 = &l_318;
            int *l_341 = &l_273;
            int *l_343 = (void*)0;
            int *l_344 = &l_318;
            int *l_345 = &l_318;
            int *l_347 = (void*)0;
            int *l_348 = &l_253;
            int *l_349 = &l_291;
            int *l_350 = &l_342;
            int *l_351 = &l_273;
            int *l_352 = &l_318;
            int *l_354 = &l_288;
            int *l_355 = &l_289;
            int *l_356 = &l_321;
            int *l_357 = &l_282;
            int *l_358 = &l_273;
            int *l_359 = &l_288;
            int *l_360 = &l_273;
            int *l_361 = &l_321;
            int *l_362 = (void*)0;
            int *l_363 = &l_273;
            int *l_364 = &l_289;
            int *l_365 = &l_289;
            int *l_366 = (void*)0;
            int l_368 = 0xD3434037L;
            int *l_369 = &g_115;
            int *l_370 = (void*)0;
            int *l_371 = &g_76;
            int *l_372 = &l_346;
            int *l_373 = (void*)0;
            int *l_374 = &l_253;
            int *l_375 = &l_273;
            int *l_376 = &l_282;
            int *l_377 = &l_273;
            int *l_378 = &l_282;
            int *l_379 = &l_368;
            int *l_380 = (void*)0;
            int *l_381 = &l_346;
            int *l_382 = &l_253;
            int *l_383 = &l_367;
            int *l_384 = &l_353;
            int *l_385 = (void*)0;
            int l_386 = (-4L);
            int *l_387 = &l_367;
            int *l_388 = &l_321;
            int *l_389 = &l_386;
            int *l_392 = (void*)0;
            int *l_393 = &l_321;
            int *l_394 = (void*)0;
            int *l_395 = &l_273;
            int *l_396 = &l_368;
            int *l_397 = (void*)0;
            int *l_398 = &g_166;
            int l_400 = (-1L);
            int *l_402 = &l_401;
            int *l_403 = &l_367;
            int *l_404 = &l_401;
            int *l_405 = (void*)0;
            int *l_406 = &l_253;
            int *l_407 = &l_303;
            int *l_408 = &l_386;
            int *l_409 = &l_346;
            int *l_410 = &l_253;
            int *l_412 = (void*)0;
            int *l_413 = &l_318;
            int *l_415 = &l_291;
            int *l_416 = &l_253;
            int *l_417 = (void*)0;
            int *l_418 = &l_288;
            int *l_419 = &l_273;
            int *l_420 = &l_400;
            int *l_421 = &l_342;
            int *l_422 = &l_303;
            int *l_423 = &l_318;
            int *l_424 = &g_115;
            int *l_425 = &l_367;
            int *l_426 = &l_273;
            int *l_427 = &l_391;
            int *l_428 = (void*)0;
            int *l_430 = &l_289;
            int *l_432 = &l_273;
            int *l_434 = &l_368;
            int *l_435 = &l_321;
            int *l_436 = &l_321;
            int *l_437 = &l_273;
            int l_438 = 5L;
            int *l_439 = &l_438;
            int *l_440 = &l_303;
            int *l_441 = &l_400;
            int *l_442 = (void*)0;
            int *l_443 = (void*)0;
            int *l_444 = &l_429;
            int *l_445 = &l_400;
            int *l_446 = &g_115;
            int *l_447 = &l_391;
            int *l_448 = &l_401;
            int *l_449 = &l_289;
            int *l_450 = (void*)0;
            int *l_451 = &l_431;
            int *l_452 = &l_318;
            int *l_455 = &l_346;
            int *l_456 = &l_368;
            int *l_457 = &l_346;
            int *l_458 = &g_115;
            int *l_459 = &l_453;
            int *l_461 = &g_166;
            int l_462 = 0xC3CA2894L;
            int l_463 = 1L;
            int *l_464 = &l_367;
            int *l_465 = &g_115;
            int *l_466 = (void*)0;
            int *l_467 = &l_282;
            int *l_468 = &g_166;
            int *l_470 = &l_462;
            int *l_472 = &l_303;
            int *l_473 = &l_342;
            int *l_474 = &l_342;
            int *l_475 = (void*)0;
            int *l_476 = &l_391;
            int *l_478 = &l_368;
            int l_479 = 0xB86BBE56L;
            int **l_502 = &l_440;
            for (l_204 = 0; (l_204 <= 3); l_204 = safe_add_func_int16_t_s_s(l_204, 1))
            {
                int *l_239 = &g_115;
                (*g_211) = (*l_81);
                (*l_239) = ((*g_211) = (l_204 , (safe_rshift_func_int16_t_s_u((!(0xDE282C3DD90FB3CCLL ^ (g_68 == g_56))), 6))));
            }
            g_482--;
            if (p_65)
            {
                long long l_487 = 0L;
                short *l_488 = &g_489;
                short *l_490 = (void*)0;
                short *l_491 = &g_492;
                unsigned short *l_493 = (void*)0;
                unsigned short *l_494 = &g_102;
                if ((((*l_494) = (safe_rshift_func_int16_t_s_s((p_61 >= l_487), ((*l_491) = ((*l_488) = l_204))))) , 0x544A1050L))
                {
                    int l_495 = 1L;
                    l_495 &= p_65;
                    (*l_252) |= ((0x512A262BL ^ (!(p_65 & p_61))) > g_192);
                }
                else
                {
                    l_496 = &l_189;
                }
                g_497--;
            }
            else
            {
                p_65 = (*g_211);
            }
            (*l_502) = func_84(&g_68, ((*g_211) , ((safe_add_func_int16_t_s_s(p_63, (*l_425))) <= (*l_332))), p_65);
        }
    }
    return (*l_81);
}







static int * func_84(int * p_85, int p_86, unsigned p_87)
{
    unsigned char l_92 = 0x04L;
    int l_106 = 0xB8B7CB4DL;
    int l_134 = 0x29228E1FL;
    int l_135 = (-7L);
    int l_168 = 0x996C8B9EL;
    int l_175 = 0x7E9A7030L;
    if ((((!l_92) , g_6) | p_86))
    {
        int l_93 = 0xB358509EL;
        unsigned char *l_101 = (void*)0;
        int *l_103 = &g_76;
        unsigned char l_111 = 246UL;
        unsigned long long *l_112 = &g_113;
        int *l_114 = &g_115;
        unsigned char **l_116 = &l_101;
        unsigned char *l_118 = &l_92;
        unsigned char **l_117 = &l_118;
        int *l_119 = &g_76;
        int *l_120 = &g_115;
        int *l_121 = &g_76;
        int *l_122 = (void*)0;
        int *l_123 = &g_115;
        int *l_124 = (void*)0;
        int *l_125 = &g_76;
        int l_126 = 0x3FCFB248L;
        int *l_127 = &g_115;
        int *l_128 = &g_76;
        int *l_129 = &g_115;
        int *l_130 = &g_76;
        int *l_131 = &g_76;
        int *l_132 = &g_115;
        int *l_133 = &l_126;
        int *l_136 = &l_135;
        int *l_137 = &l_134;
        int *l_138 = &l_134;
        int *l_139 = &g_76;
        int *l_140 = &g_115;
        int *l_141 = &g_76;
        int *l_142 = &l_126;
        int l_143 = (-1L);
        int *l_144 = (void*)0;
        int *l_145 = &l_126;
        int *l_146 = (void*)0;
        int *l_147 = &g_115;
        int *l_148 = &g_76;
        int *l_149 = &l_126;
        int *l_150 = &g_76;
        int *l_151 = &l_143;
        int *l_152 = &g_115;
        int *l_153 = &l_134;
        int *l_154 = (void*)0;
        int *l_155 = &l_143;
        int *l_156 = &l_134;
        int *l_157 = (void*)0;
        int *l_158 = (void*)0;
        int *l_159 = &l_126;
        int *l_160 = &g_76;
        int *l_161 = &l_134;
        int *l_162 = &l_134;
        int *l_163 = &l_143;
        int *l_164 = &l_143;
        int *l_165 = (void*)0;
        int *l_167 = &g_76;
        int *l_169 = &g_115;
        int *l_170 = &g_166;
        int *l_171 = &g_76;
        int *l_172 = &g_166;
        int *l_173 = &l_135;
        int *l_174 = &g_76;
        int *l_176 = &l_126;
        (*l_103) |= ((((l_93 == (((safe_rshift_func_uint8_t_u_u(((g_96 != &p_85) , (((safe_rshift_func_int8_t_s_s((l_92 && l_92), 7)) <= (g_102 ^= (p_87 , l_93))) > ((p_87 | (l_93 , p_86)) != 1UL))), g_98)) , 0x29L) <= l_92)) > (-1L)) | 0UL) && g_102);
        (*l_114) = (((safe_add_func_uint32_t_u_u((l_92 >= (l_106 || g_98)), ((*l_103) ^= (l_92 ^ (((*l_112) |= (((((g_56 || (safe_sub_func_uint16_t_u_u(p_86, 65530UL))) ^ (l_92 | (safe_rshift_func_uint8_t_u_u(l_111, 3)))) > p_87) , p_87) , 0x392579B7B7A4FD34LL)) | 0x445D8D6691A67D55LL))))) != l_106) ^ 1UL);
        (*l_103) |= ((0x384D564CE3E23DE1LL & (+(g_68 , (((*l_116) = &l_92) == ((*l_117) = &l_92))))) | 0UL);
        g_177++;
    }
    else
    {
        int *l_180 = &l_175;
        return &g_115;
    }
    return &g_166;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_489, "g_489", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_576, "g_576", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_710, "g_710", print_hash_value);
    transparent_crc(g_716, "g_716", print_hash_value);
    transparent_crc(g_722, "g_722", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_814, "g_814", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1103, "g_1103", print_hash_value);
    transparent_crc(g_1116, "g_1116", print_hash_value);
    transparent_crc(g_1127, "g_1127", print_hash_value);
    transparent_crc(g_1129, "g_1129", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    transparent_crc(g_1173, "g_1173", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1327, "g_1327", print_hash_value);
    transparent_crc(g_1355, "g_1355", print_hash_value);
    transparent_crc(g_1368, "g_1368", print_hash_value);
    transparent_crc(g_1373, "g_1373", print_hash_value);
    transparent_crc(g_1418, "g_1418", print_hash_value);
    transparent_crc(g_1517, "g_1517", print_hash_value);
    transparent_crc(g_1536, "g_1536", print_hash_value);
    transparent_crc(g_1548, "g_1548", print_hash_value);
    transparent_crc(g_1600, "g_1600", print_hash_value);
    transparent_crc(g_1606, "g_1606", print_hash_value);
    transparent_crc(g_1618, "g_1618", print_hash_value);
    transparent_crc(g_1701, "g_1701", print_hash_value);
    transparent_crc(g_1784, "g_1784", print_hash_value);
    transparent_crc(g_1799, "g_1799", print_hash_value);
    transparent_crc(g_1821, "g_1821", print_hash_value);
    transparent_crc(g_1962, "g_1962", print_hash_value);
    transparent_crc(g_1967, "g_1967", print_hash_value);
    transparent_crc(g_1970, "g_1970", print_hash_value);
    transparent_crc(g_2195, "g_2195", print_hash_value);
    transparent_crc(g_2225, "g_2225", print_hash_value);
    transparent_crc(g_2470, "g_2470", print_hash_value);
    transparent_crc(g_2507, "g_2507", print_hash_value);
    transparent_crc(g_2621, "g_2621", print_hash_value);
    transparent_crc(g_2792, "g_2792", print_hash_value);
    transparent_crc(g_2800, "g_2800", print_hash_value);
    transparent_crc(g_2807, "g_2807", print_hash_value);
    transparent_crc(g_2811, "g_2811", print_hash_value);
    transparent_crc(g_2875, "g_2875", print_hash_value);
    transparent_crc(g_3039, "g_3039", print_hash_value);
    transparent_crc(g_3238, "g_3238", print_hash_value);
    transparent_crc(g_3253, "g_3253", print_hash_value);
    transparent_crc(g_3472, "g_3472", print_hash_value);
    transparent_crc(g_3524, "g_3524", print_hash_value);
    transparent_crc(g_3766, "g_3766", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
