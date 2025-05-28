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



static unsigned g_10 = 18446744073709551613UL;
static volatile int g_13 = 6L;
static volatile int *g_12 = &g_13;
static int g_15 = (-1L);
static int g_22 = 0x6076FDA0L;
static int *g_21 = &g_22;
static unsigned long long g_64 = 18446744073709551614UL;
static short g_73 = 0L;
static unsigned long long g_75 = 1UL;
static int g_81 = 1L;
static unsigned g_82 = 0UL;
static int g_83 = 0xDD4F9520L;
static unsigned short g_87 = 65535UL;
static short **g_100 = (void*)0;
static int *g_106 = (void*)0;
static int ** volatile g_105 = &g_106;
static int ** volatile g_126 = &g_106;
static unsigned char g_145 = 246UL;
static long long g_149 = 0x89413133DC0AD4A3LL;
static unsigned long long *g_161 = &g_75;
static unsigned long long * volatile *g_160 = &g_161;
static int ** volatile g_181 = &g_106;
static char g_188 = 0L;
static int ** volatile g_208 = (void*)0;
static int ** volatile g_209 = &g_106;
static unsigned long long g_215 = 0x9211A307C16147B0LL;
static int *g_217 = &g_22;
static int ** volatile g_218 = &g_106;
static unsigned long long g_237 = 1UL;
static unsigned char g_256 = 6UL;
static char g_273 = 0x75L;
static volatile char g_302 = 8L;
static volatile char *g_301 = &g_302;
static volatile char * volatile *g_300 = &g_301;
static volatile char * volatile **g_299 = &g_300;
static int ** volatile g_338 = &g_106;
static unsigned g_366 = 0x679DC507L;
static unsigned short *g_384 = (void*)0;
static unsigned short **g_383 = &g_384;
static unsigned short *** volatile g_382 = &g_383;
static unsigned *g_397 = &g_10;
static unsigned **g_396 = &g_397;
static unsigned *** volatile g_395 = &g_396;
static unsigned g_438 = 18446744073709551613UL;
static int **g_441 = &g_106;
static unsigned g_453 = 0x61FFCB4AL;
static volatile int g_492 = (-1L);
static unsigned long long g_517 = 18446744073709551615UL;
static volatile unsigned short g_553 = 0UL;
static short *** volatile g_595 = &g_100;
static short ***g_633 = &g_100;
static unsigned **g_663 = (void*)0;
static long long *g_674 = &g_149;
static char g_683 = 1L;
static unsigned short g_706 = 8UL;
static unsigned g_711 = 0x39DAED9BL;
static volatile unsigned char g_715 = 1UL;
static volatile unsigned char *g_714 = &g_715;
static volatile unsigned char **g_713 = &g_714;
static volatile unsigned char *** volatile g_716 = (void*)0;
static volatile unsigned short * volatile *g_721 = (void*)0;
static unsigned char **g_730 = (void*)0;
static char *g_767 = &g_683;
static char **g_766 = &g_767;
static unsigned short g_768 = 0UL;
static unsigned char g_867 = 0xA7L;
static unsigned *g_941 = &g_453;
static unsigned **g_940 = &g_941;
static short g_964 = 7L;
static long long g_1159 = 0x3773B20005D2E48BLL;
static int ** volatile g_1173 = (void*)0;
static int ** volatile g_1183 = &g_106;
static short * volatile g_1240 = &g_73;
static short * volatile *g_1239 = &g_1240;
static short * volatile **g_1238 = &g_1239;
static short * volatile ** volatile *g_1237 = &g_1238;
static short * volatile ** volatile ** volatile g_1236 = &g_1237;
static int ** volatile g_1304 = &g_217;
static volatile char g_1314 = 0x76L;
static int ** volatile g_1351 = (void*)0;
static int ** volatile g_1352 = &g_21;
static int g_1419 = 0xC6F06BEFL;
static long long g_1436 = 0x7866FD87035A3DD9LL;
static volatile int **g_1465 = &g_12;
static volatile int ***g_1464 = &g_1465;
static volatile int ****g_1463 = &g_1464;
static char g_1493 = 1L;
static volatile char g_1534 = 1L;
static short g_1538 = (-5L);
static long long ** volatile g_1596 = &g_674;
static long long ** volatile *g_1595 = &g_1596;
static unsigned char g_1632 = 0x88L;



static int func_1(void);
static int * func_3(unsigned char p_4, int p_5, int * p_6, int * p_7);
static unsigned char func_16(int * p_17, int * p_18, unsigned short p_19, int * p_20);
static unsigned short func_24(int * p_25, int p_26, int * p_27, int p_28, int p_29);
static int func_30(int * p_31);
static int * func_32(int p_33, int * p_34, char p_35);
static int * func_36(short p_37, char p_38, int p_39, short p_40);
static short func_41(int * p_42, int p_43, unsigned char p_44);
static int * func_45(int * p_46, unsigned p_47);
static long long func_51(unsigned long long p_52, unsigned short p_53, unsigned long long p_54, int * p_55, long long p_56);
static int func_1(void)
{
    unsigned l_2 = 0UL;
    int *l_23 = &g_22;
    int *l_1127 = &g_22;
    int l_1332 = 0xA1B0E020L;
    unsigned long long **l_1384 = &g_161;
    int *l_1422 = &g_15;
    long long l_1437 = 0xA53FA7D9D85393DBLL;
    short l_1460 = 0x39CBL;
    unsigned char l_1461 = 0x90L;
    int l_1490 = 1L;
    int l_1554 = 0x468F3216L;
    char l_1569 = 0x3CL;
    unsigned short l_1600 = 8UL;
    unsigned short *l_1609 = &g_706;
    long long l_1610 = 4L;
    short l_1611 = (-9L);
    int *l_1612 = &l_1490;
    int **l_1613 = &l_23;
    int *l_1617 = &l_1490;
    unsigned **l_1620 = &g_941;
    unsigned l_1625 = 0x51E2E2D5L;
    char ***l_1630 = &g_766;
    int *l_1631 = (void*)0;
    if (l_2)
    {
        long long l_11 = 0L;
        int *l_14 = &g_15;
        int **l_1109 = &g_106;
        (*l_1109) = func_3((safe_sub_func_uint16_t_u_u((g_10 , l_11), (((*l_14) = (g_12 == (void*)0)) | ((((func_16(g_21, l_23, func_24(((func_30(((*l_1109) = func_32(g_22, func_36(func_41(func_45(&g_22, ((((*l_23) , g_13) && 6UL) >= l_11)), g_22, (*l_23)), (*l_23), g_867, (*l_23)), (*l_23)))) && (*g_941)) , l_1127), g_517, g_941, g_10, g_438), g_21) || (*l_23)) , (*g_1240)) && (****g_1237)) < g_768)))), l_1332, g_21, l_1127);



        ;


        ;

    }
    else
    {
        int l_1381 = 6L;
        unsigned char *l_1385 = (void*)0;
        unsigned char *l_1386 = &g_867;
        int *l_1387 = &g_81;
        int l_1394 = 0x73BA78AFL;
        short *l_1395 = &g_964;
        int *l_1400 = &l_1381;
        int ***l_1432 = &g_441;
        int ****l_1431 = &l_1432;
        unsigned long long l_1454 = 0x1879EB746C831D54LL;
        unsigned long long l_1466 = 0x749A0B13D7150F4FLL;
        int l_1478 = 0xEBD9409FL;
        long long **l_1499 = &g_674;
        long long ***l_1498 = &l_1499;
        unsigned l_1501 = 0x6915727DL;
        short l_1511 = (-1L);
        int l_1522 = 0xD64A99D3L;
        int *l_1545 = &l_1381;
        short l_1572 = 0xD712L;
        unsigned char ***l_1578 = &g_730;
        (*g_441) = func_3(((*g_299) != ((~((*l_1386) = func_16(((*g_441) = (func_16(l_1127, &l_1381, l_1381, (*g_218)) , &l_1381)), &g_81, l_1381, l_1127))) , (void*)0)), g_81, l_1387, &g_83);


        ;
        ;
        (*g_12) = (((((*g_301) , ((*l_1395) = ((*l_1387) || (((((**g_1239) = 0xB773L) > ((((*g_941) = (safe_mod_func_uint32_t_u_u(((((*l_1127) , ((*l_1387) , ((safe_sub_func_uint16_t_u_u((((*l_1387) = (safe_mod_func_uint32_t_u_u((~(((254UL != (func_51((((*l_1387) < (*l_1127)) & ((*l_23) , g_87)), (*l_1127), (*g_161), (*g_441), (*g_674)) == l_1381)) <= (**g_766)) ^ 6L)), (*g_941)))) < l_1394), 0L)) != (*g_941)))) , (*l_1387)) & (*l_1127)), (**g_940)))) <= (*l_1127)) >= 0xD37048B1L)) , l_1387) != l_1387)))) < (*l_1127)) != (**g_766)) != (*l_23));
        if ((((*l_23) = (**g_218)) > ((*l_1400) = ((*l_1387) > (((*l_1387) , ((((*l_1386) = g_188) & (*l_1387)) < (safe_rshift_func_int16_t_s_u(((((*l_1387) | (safe_sub_func_uint32_t_u_u(((**g_766) < g_75), ((**g_441) ^ (**g_940))))) & (*g_767)) , (*l_1387)), (*l_1387))))) , 65528UL)))))
        {
            char *l_1401 = &g_273;
            int l_1421 = (-1L);
            (*g_12) = func_30(((*g_441) = func_45(((*g_441) = l_1127), (**g_396))));

            ;
            (*g_441) = func_36((*l_1387), ((*g_767) = (***g_299)), ((*g_674) , g_188), ((*l_1387) , ((*l_1127) , (g_15 ^ ((*l_1401) = (*l_23))))));

            ;
            for (l_1332 = 0; (l_1332 <= 19); l_1332++)
            {
                char l_1417 = (-1L);
                int l_1420 = 0x7EBE93C4L;
                (*g_441) = (*g_181);
                for (g_10 = 0; (g_10 > 28); g_10 = safe_add_func_int64_t_s_s(g_10, 5))
                {
                    int *l_1409 = &l_1394;
                    int l_1412 = 0xC8270D1CL;
                    int *l_1418 = &g_1419;
                    unsigned char l_1423 = 0xE6L;
                    (*g_106) = (safe_rshift_func_uint16_t_u_u(2UL, (safe_unary_minus_func_uint64_t_u(((**g_160) = (((*l_1386) = (**g_713)) || (*g_714)))))));
                    for (g_82 = 0; (g_82 == 36); g_82 = safe_add_func_uint32_t_u_u(g_82, 4))
                    {
                        (*l_1387) = (**g_441);
                        return g_83;
                    }
                    (*g_441) = l_23;

                    ;
                }
            }

            ;
        }
        else
        {
            int *l_1426 = &g_15;
            l_1426 = ((((void*)0 != &l_1387) | (*g_941)) , (*g_338));

            ;
        }

        ;
        if (((*g_217) = (*g_106)))
        {
            if ((*l_1387))
            {
                unsigned l_1427 = 4294967295UL;
                return l_1427;
            }
            else
            {
                return g_517;
            }
        }
        else
        {
            int l_1428 = 1L;
            int *l_1441 = &g_22;
            unsigned ***l_1447 = (void*)0;
            unsigned long long l_1455 = 0x86A32E3BBFA94D4ALL;
            int l_1482 = (-1L);
            int *l_1505 = &l_1381;
            short ****l_1523 = &g_633;
            long long l_1552 = 5L;
            unsigned char l_1562 = 0UL;
            unsigned short *l_1567 = (void*)0;
            unsigned short *l_1568 = &g_87;
            if (((l_1428 | (-4L)) == (*g_161)))
            {
                int l_1433 = 0x0CEF5ED7L;
                short *l_1456 = &g_964;
                int *l_1459 = &g_22;
                short l_1468 = 1L;
                for (g_453 = 0; (g_453 >= 54); g_453 = safe_add_func_int32_t_s_s(g_453, 6))
                {
                    unsigned long long l_1439 = 18446744073709551615UL;
                    unsigned char l_1440 = 246UL;
                    unsigned ****l_1444 = (void*)0;
                    unsigned ***l_1446 = (void*)0;
                    unsigned ****l_1445 = &l_1446;
                    short **l_1457 = (void*)0;
                    short **l_1458 = &l_1456;
                    int l_1467 = (-4L);
                    if ((*l_1400))
                    {
                        (*l_1400) = (l_1431 != (void*)0);
                    }
                    else
                    {
                        short ****l_1438 = (void*)0;
                        (*g_217) = (((func_30(((*g_441) = l_23)) <= g_438) , l_1433) & l_1433);

                        ;
                    }
                    for (l_1394 = 0; (l_1394 >= (-29)); --l_1394)
                    {
                        return g_81;
                    }
                    (*g_12) = (((***g_1238) = (***g_1238)) , ((*g_674) <= (((*l_1445) = &g_940) == l_1447)));

                    ;
                    if ((safe_rshift_func_int8_t_s_u(((func_51(((+(*l_1441)) < (**g_1304)), ((((((*l_1458) = (((safe_mod_func_uint16_t_u_u(((+((*g_674) >= (-8L))) & (safe_rshift_func_uint8_t_u_s((*l_1441), ((**g_766) = (((l_1440 <= (*l_1441)) & (((!l_1433) < (l_1454 && 1L)) != (*l_1127))) | (*l_1400)))))), 0x81D2L)) , l_1455) , l_1456)) == (void*)0) == 7L) ^ (*l_1441)) <= (*g_941)), l_1433, l_1459, (*g_674)) , l_1460) , 0xEBL), l_1461)))
                    {
                        int **l_1469 = &l_1459;
                        (*l_1469) = ((*g_441) = func_3((**g_713), (((l_1467 = ((*g_674) = (safe_unary_minus_func_int32_t_s((g_1463 == (l_1466 , &g_1464)))))) < (*l_1459)) && ((l_1468 != (*l_1441)) | (l_1439 & ((**l_1384) = (((*g_767) < (**g_766)) == (*g_674)))))), (*g_441), (*g_441)));

                        ;
                        ;
                    }
                    else
                    {
                        int l_1479 = 2L;
                        (***l_1431) = func_36(((***g_299) , (((-2L) | (&l_1460 != ((safe_mod_func_uint64_t_u_u((((2L < (safe_lshift_func_uint16_t_u_s((***l_1432), 3))) , &g_161) != (((((*g_397) , (safe_lshift_func_int8_t_s_s((((4294967294UL ^ (safe_add_func_int8_t_s_s((l_1440 != 0xECB0L), (***l_1432)))) & (*l_1459)) | l_1439), 5))) , l_1439) , (**g_713)) , &g_161)), (*g_674))) , (void*)0))) , (****g_1237))), (***l_1432), l_1439, (*l_1127));

                        ;
                        (*l_1400) = (l_1478 , (l_1479 ^ (safe_rshift_func_uint16_t_u_s(l_1482, 6))));
                        return (****l_1431);
                    }

                    ;
                    ;
                }

                ;
            }
            else
            {
                int *l_1494 = &g_81;
                int *l_1512 = &g_22;
                unsigned char ***l_1519 = &g_730;
                short ******l_1531 = (void*)0;
                unsigned short l_1537 = 0xEB40L;
                unsigned l_1555 = 0x3DB47F2FL;
                (**g_126) = 0xCF4ACE7AL;
                (**l_1432) = (*g_209);
                if ((****g_1463))
                {
                    unsigned short *l_1487 = &g_706;
                    unsigned short *l_1488 = &g_768;
                    int *l_1489 = &g_15;
                    (*g_441) = (((((((((safe_mod_func_int64_t_s_s(0L, (*g_674))) , &g_940) != (void*)0) > (***g_1238)) >= 0x2E0E2E1AF843E606LL) < (*g_674)) , (***g_299)) != (*l_1441)) , l_1494);

                    ;
                }
                else
                {
                    (*g_12) = ((((****l_1431) = (*l_1422)) , (*l_1422)) & (*g_941));
                }
                for (g_1493 = (-4); (g_1493 == 17); ++g_1493)
                {
                    int *l_1497 = &g_83;
                    unsigned short *l_1500 = &g_768;
                    short l_1504 = 0x4833L;
                    unsigned char ***l_1518 = &g_730;
                    unsigned char ****l_1517 = &l_1518;
                    (*g_441) = l_1494;

                    ;
                    if ((((-1L) | ((**g_766) <= ((func_16(func_45(l_1497, (func_16((*g_209), (*g_441), ((*l_1500) = ((void*)0 != l_1498)), (*g_441)) , (*l_1422))), l_1441, g_1419, &g_22) ^ 252UL) || (*l_1422)))) , l_1501))
                    {
                        (**l_1432) = l_1494;

                        ;
                    }
                    else
                    {
                        int l_1510 = (-9L);
                        (*g_441) = &l_1510;

                        ;
                    }


                    if ((**g_1304))
                    {
                        short *****l_1529 = &l_1523;
                        short ******l_1528 = &l_1529;
                        short *******l_1530 = &l_1528;
                        int l_1539 = 0xF146C8E4L;
                        (*g_12) = (((l_1523 != (void*)0) > (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_1530) = l_1528) == l_1531), 4)), (safe_sub_func_int8_t_s_s(((*g_674) != ((g_1534 <= (*g_161)) , (**g_160))), (((*l_1400) = ((safe_lshift_func_int16_t_s_s(((*l_1395) = l_1537), g_1538)) <= 6UL)) <= l_1539)))))) ^ (*g_161));
                        if (l_1539)
                            continue;
                        (*g_441) = (void*)0;

                        ;
                        (*l_1512) = ((*l_1497) = func_30(&l_1539));
                    }
                    else
                    {
                        char l_1540 = 0x5CL;
                        int *l_1553 = (void*)0;
                        l_1540 = (*l_1441);
                        (*l_1497) = (*g_217);
                        (*l_1494) = (*l_1127);
                    }


                }


            }


            if ((((safe_mod_func_uint8_t_u_u((((*g_161) = ((((*l_23) > (((((*l_1505) = (*l_1422)) != ((*l_1387) = (safe_add_func_int16_t_s_s(((((safe_add_func_int8_t_s_s(l_1562, (!(*l_23)))) || 4L) && (safe_lshift_func_int8_t_s_u((**g_300), ((safe_add_func_uint16_t_u_u(((**g_940) ^ (**g_940)), ((*l_1568) = (g_768 = (g_215 == (**g_766)))))) | (*l_1127))))) == 0x2102606CL), (-10L))))) , l_1569) | (*l_1127))) != (*l_1422)) | (*l_1127))) && (*l_1441)), g_867)) , 0x2090L) , (*g_12)))
            {
                return g_64;
            }
            else
            {
                unsigned char l_1573 = 2UL;
                int l_1587 = 0x2224C5B8L;
                unsigned char *l_1592 = &g_867;
                short l_1597 = 0x6E3BL;
                for (g_1538 = 14; (g_1538 < (-17)); --g_1538)
                {
                    short l_1586 = 0x4BB7L;
                    int *l_1588 = &g_15;
                    unsigned char *l_1591 = &l_1573;
                    unsigned char l_1593 = 252UL;
                    int *l_1598 = &g_15;
                    l_1573 = l_1572;
                    if (l_1573)
                    {
                        char l_1574 = 0x86L;
                        unsigned char ****l_1579 = &l_1578;
                        (*l_1441) = (l_1574 , (safe_sub_func_uint64_t_u_u((((l_1573 == ((((**l_1499) = (((*l_1422) = l_1573) , l_1574)) == (l_1587 = ((safe_unary_minus_func_uint64_t_u(((((*l_1579) = l_1578) != (void*)0) || g_188))) , (((*g_941) = ((safe_sub_func_uint8_t_u_u(((+(safe_sub_func_uint8_t_u_u(((!((*l_1505) & (safe_add_func_uint8_t_u_u(((*l_1386) = (*l_1387)), (*g_714))))) , (**g_713)), 5L))) , (*l_23)), (**g_766))) || 6UL)) & l_1586)))) & (*l_1505))) | 4294967295UL) , 0xC113FA4E9DE3AC45LL), (*l_1505))));
                        l_1588 = l_1588;
                        (*l_1400) = (65530UL >= (*l_1400));
                    }
                    else
                    {
                        l_1400 = ((*g_441) = l_1441);

                        ;
                        ;
                        (*g_441) = func_45((*g_441), ((*g_397) = 0xE4D65681L));
                    }
                    if ((safe_lshift_func_uint8_t_u_u((l_1591 == (l_1592 = &g_145)), 5)))
                    {
                        long long ***l_1594 = &l_1499;
                        (*g_441) = ((((*l_1505) >= (l_1593 ^ (l_1594 == g_1595))) || ((l_1573 , 9L) , (*l_1588))) , func_36((***g_1238), ((**g_766) != (*g_767)), l_1597, l_1597));

                        ;
                        (*l_1441) = l_1587;
                    }
                    else
                    {
                        int *l_1599 = &l_1490;
                        l_1599 = ((*g_338) = l_1598);

                        ;
                        ;
                    }

                    ;
                    ;
                    (**l_1432) = (*g_441);
                }


                ;
                ;
            }


            ;
            (*l_1127) = (*l_1505);
            (*g_441) = (((*g_397) = (*l_1400)) , &l_1490);

            ;
        }

        ;
        ;
    }



    ;


    ;

    (*l_1613) = ((((*l_1127) = (func_51((*l_1127), (((((*l_1609) = (*l_23)) <= (*l_1422)) <= ((**l_1384) = (*g_161))) , ((*g_161) , (*l_1127))), (*l_1127), &l_1490, l_1610) >= l_1611)) < (*l_1422)) , l_1612);

    ;
    for (g_867 = (-21); (g_867 > 9); ++g_867)
    {
        int *l_1616 = &g_22;
        unsigned ***l_1621 = &g_940;
        unsigned **l_1622 = &g_941;
        int **l_1626 = (void*)0;
        int **l_1627 = &g_217;
        int **l_1628 = (void*)0;
        int **l_1629 = &g_106;
        (**l_1613) = (((func_16((*l_1613), l_1616, (((*l_1617) , l_1630) == (void*)0), l_1631) & (*g_161)) != (*l_1422)) ^ g_1632);
    }
    return g_83;


}







static int * func_3(unsigned char p_4, int p_5, int * p_6, int * p_7)
{
    int l_1335 = 0x12FEBEBBL;
    short l_1338 = (-3L);
    unsigned **l_1339 = &g_941;
    char **l_1342 = (void*)0;
    char l_1345 = 0x23L;
    unsigned long long l_1358 = 18446744073709551611UL;
    int **l_1373 = &g_106;
    int *l_1374 = &g_81;
    if (((((safe_mod_func_uint16_t_u_u(l_1335, 3L)) , (safe_sub_func_int64_t_s_s(((**g_160) & (((void*)0 == (***g_1237)) & (p_4 < l_1338))), 0x4B5DC78CCF0DF0FFLL))) , l_1339) != l_1339))
    {
        char ***l_1343 = &g_766;
        int l_1344 = 0L;
        char l_1350 = 8L;
        (*g_1352) = &l_1344;

        ;
    }
    else
    {
        unsigned **l_1353 = (void*)0;
        int l_1359 = (-1L);
        (*p_7) = ((((**g_766) = 1L) , ((*g_674) > ((void*)0 != l_1353))) , (safe_sub_func_uint64_t_u_u(l_1345, (((((g_867 , l_1338) <= (*g_767)) || (*g_1240)) , 0x5816C82DA338DCE2LL) , (*g_674)))));
        for (l_1358 = 0; (l_1358 != 42); l_1358++)
        {
            unsigned long long l_1368 = 0xDAE4233E366324A8LL;
            (*p_6) = 0L;
            for (g_87 = 0; (g_87 > 49); g_87 = safe_add_func_int64_t_s_s(g_87, 8))
            {
                for (l_1359 = 9; (l_1359 <= (-29)); l_1359 = safe_sub_func_uint8_t_u_u(l_1359, 6))
                {
                    (*p_7) = ((safe_lshift_func_int16_t_s_s((-1L), 10)) | l_1368);
                    for (g_256 = 16; (g_256 <= 21); g_256 = safe_add_func_uint16_t_u_u(g_256, 6))
                    {
                        unsigned long long l_1371 = 0xAA904E3AF5FEA575LL;
                        int **l_1372 = &g_217;
                        (*l_1372) = func_36(l_1371, p_5, l_1345, (p_4 , p_5));

                        ;
                    }
                }
            }
            if ((*p_7))
                break;
        }
    }
    (*l_1373) = (((*g_767) = (p_5 , p_5)) , &p_5);

    ;
    return l_1374;



}







static unsigned char func_16(int * p_17, int * p_18, unsigned short p_19, int * p_20)
{
    char l_1328 = 0x7AL;
    long long *l_1330 = (void*)0;
    unsigned ***l_1331 = &g_663;
    for (g_256 = (-26); (g_256 != 26); ++g_256)
    {
        int *l_1323 = &g_22;
        int **l_1324 = (void*)0;
        int **l_1325 = &l_1323;
        long long *l_1329 = &g_1159;
        (*g_1304) = ((*l_1325) = l_1323);

        ;
        (*p_17) = ((0UL | p_19) && ((p_19 < (((safe_lshift_func_int8_t_s_u(((l_1328 <= 0x4FDE208891D9C78FLL) != p_19), (((**g_300) , l_1329) != l_1330))) , (void*)0) == l_1331)) , 18446744073709551607UL));
    }
    return l_1328;
}







static unsigned short func_24(int * p_25, int p_26, int * p_27, int p_28, int p_29)
{
    char l_1128 = (-1L);
    int l_1137 = 3L;
    unsigned long long **l_1146 = (void*)0;
    int l_1160 = 0xA8FCA76CL;
    unsigned *l_1217 = &g_711;
    int *l_1222 = (void*)0;
    int ***l_1247 = (void*)0;
    int ****l_1246 = &l_1247;
    unsigned short ***l_1248 = &g_383;
    unsigned char ***l_1296 = (void*)0;
    if ((((((*g_161) >= l_1128) & (func_30((*g_209)) , (**g_940))) <= ((safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u(l_1128, l_1128)) || (((*p_25) = (((&g_106 != (((255UL == l_1128) && p_26) , &p_27)) >= 0x41L) != 1L)) == (*g_941))), l_1128)) , 0xDAACD8CFL)) > l_1128))
    {
        unsigned l_1133 = 8UL;
        int *l_1136 = (void*)0;
        (*p_27) = l_1128;
        return p_26;
    }
    else
    {
        unsigned char l_1140 = 0x73L;
        short ****l_1152 = &g_633;
        short *****l_1151 = &l_1152;
        int *l_1164 = &l_1160;
        int l_1170 = 0xE2CA8454L;
        char ***l_1307 = &g_766;
        unsigned ***l_1315 = (void*)0;
        if (l_1140)
        {
            int *l_1175 = &g_83;
            int l_1176 = 1L;
            unsigned long long l_1194 = 0UL;
            int *l_1202 = &l_1176;
            unsigned short **l_1208 = &g_384;
            unsigned short ***l_1209 = &l_1208;
            for (g_438 = (-25); (g_438 < 31); g_438++)
            {
                unsigned short *l_1145 = &g_706;
                unsigned short *l_1157 = &g_87;
                long long *l_1158 = &g_1159;
                (*p_25) = ((*p_25) , ((safe_sub_func_int64_t_s_s((l_1145 == (void*)0), ((*l_1158) = ((*g_674) = ((((void*)0 == l_1146) >= ((safe_rshift_func_uint16_t_u_s(((*l_1145) = (safe_rshift_func_int16_t_s_s(((void*)0 == l_1151), 1))), (safe_sub_func_uint16_t_u_u(((*l_1157) = (safe_lshift_func_uint16_t_u_u((0xCC1CC2F1L | (-10L)), 11))), p_28)))) == (-4L))) == p_28))))) || (***g_299)));
            }
            if (l_1137)
            {
                return l_1160;
            }
            else
            {
                unsigned l_1161 = 0x6E9ADB02L;
                int *l_1182 = (void*)0;
                short l_1195 = 0x1C25L;
                if ((*p_27))
                {
                    unsigned char ***l_1171 = &g_730;
                    int l_1172 = 0x0870C6E1L;
                    int l_1181 = 0xFAE8D7F0L;
                    (*g_12) = (p_28 , 0x1330E6ACL);
                    for (g_517 = 17; (g_517 <= 52); g_517++)
                    {
                        unsigned char l_1169 = 0x4FL;
                        int **l_1174 = &g_106;
                        (*l_1174) = &l_1137;

                        ;
                        (*p_25) = (((p_26 , (p_28 , (safe_rshift_func_int16_t_s_u(p_29, 11)))) && 1L) >= 0x88FDL);
                    }

                    ;
                    for (g_366 = 28; (g_366 <= 30); g_366++)
                    {
                        if (l_1181)
                            break;
                    }
                    (*g_1183) = l_1182;

                    ;
                }
                else
                {
                    unsigned l_1196 = 4294967295UL;
                    unsigned char *l_1197 = &g_867;
                    unsigned short **l_1198 = &g_384;
                    unsigned short ***l_1199 = &l_1198;
                    (*l_1175) = ((safe_mod_func_uint16_t_u_u((p_29 | (!((safe_rshift_func_uint16_t_u_u((((*l_1197) = (safe_sub_func_int64_t_s_s((*l_1164), (safe_lshift_func_int8_t_s_u((p_26 , func_30(&p_26)), ((((((255UL || (((*l_1175) ^ (*l_1164)) | (((safe_add_func_int32_t_s_s((((l_1194 <= l_1195) < p_29) > (*l_1164)), p_28)) & p_28) > 1L))) || p_28) ^ 0x92CA1FFAL) > 65532UL) < l_1196) ^ g_83)))))) , 0UL), l_1196)) == 0x68L))), 0xDBEAL)) ^ 0x11L);
                    (*g_106) = (((((*l_1199) = l_1198) != (void*)0) & ((safe_rshift_func_int8_t_s_u(func_51((p_26 && p_29), p_28, (((((((*l_1175) , (((((*l_1197) = l_1160) , 0x6DL) || 0UL) || p_26)) , 0xFCE629A2L) , g_22) , (*l_1175)) || (*l_1164)) == (*p_27)), l_1202, (*g_674)), 4)) ^ 2UL)) , (**g_1183));
                    for (l_1128 = 0; (l_1128 != (-18)); l_1128--)
                    {
                        int l_1205 = 0x6C3483BAL;
                        return l_1205;
                    }
                }

                ;
                for (g_73 = 0; (g_73 > (-10)); g_73 = safe_sub_func_uint8_t_u_u(g_73, 4))
                {
                    return l_1128;
                }
            }

            ;
            (*l_1209) = l_1208;
            p_25 = &p_26;

            ;
        }
        else
        {
            unsigned char l_1221 = 0xA7L;
            long long ***l_1229 = (void*)0;
            int *l_1231 = &l_1160;
            unsigned short l_1291 = 0xFA95L;
            unsigned long long *l_1298 = &g_75;
            char l_1317 = 1L;
            for (p_26 = 0; (p_26 <= (-17)); p_26 = safe_sub_func_int32_t_s_s(p_26, 1))
            {
                int l_1212 = (-4L);
                long long **l_1228 = &g_674;
                long long ***l_1227 = &l_1228;
                short *****l_1232 = &l_1152;
                unsigned short l_1271 = 1UL;
                int *l_1274 = &l_1212;
                unsigned l_1316 = 1UL;
                unsigned ***l_1319 = &g_940;
                int l_1320 = 0L;
            }
        }

        ;
        ;
        return g_273;
    }
}







static int func_30(int * p_31)
{
    unsigned l_1116 = 0x1DD5B4D0L;
    unsigned short l_1117 = 1UL;
    long long **l_1118 = &g_674;
    long long **l_1120 = &g_674;
    long long ***l_1119 = &l_1120;
    int l_1123 = (-4L);
    int l_1126 = 0xE0C64354L;
    (*g_12) = (safe_sub_func_int32_t_s_s(((*p_31) = ((safe_mul_func_uint64_t_u_u((~(safe_lshift_func_int8_t_s_s(((*g_767) = (l_1116 <= l_1116)), l_1117))), ((l_1117 , l_1118) == ((*l_1119) = l_1118)))) | (((safe_rshift_func_int16_t_s_s(((l_1123 = l_1116) | (safe_lshift_func_uint8_t_u_u(l_1126, 3))), 8)) , l_1123) , (*p_31)))), 0xDAF8013BL));
    return l_1126;
}







static int * func_32(int p_33, int * p_34, char p_35)
{
    int l_1099 = (-1L);
    unsigned short *l_1100 = &g_87;
    int l_1106 = 0x297D8EDCL;
    int l_1107 = 0L;
    unsigned ***l_1108 = &g_663;
    (*g_21) = (func_51(l_1099, ((*l_1100) = p_35), p_35, p_34, (((((*g_767) = (~((l_1107 = (safe_sub_func_int16_t_s_s(((((*g_161) & (((safe_unary_minus_func_int64_t_s(((*g_674) = (*g_674)))) ^ 0xA11864E1L) , (safe_add_func_int32_t_s_s(0x1B487612L, 4294967295UL)))) < l_1106) && l_1106), p_33))) == p_35))) <= (**g_713)) , 0xB945ABC8118F12C1LL) , 0x0DD154965F7F04D8LL)) != l_1099);
    (*p_34) = ((l_1107 >= ((((**g_713) > ((**g_766) ^ (!((l_1100 == (void*)0) , g_768)))) , &g_663) != (((l_1106 && p_35) , (-1L)) , l_1108))) && (*g_674));
    return p_34;


}







static int * func_36(short p_37, char p_38, int p_39, short p_40)
{
    long long l_1079 = 0xF60805DBE80AB604LL;
    short **l_1080 = (void*)0;
    short *l_1082 = &g_73;
    short **l_1081 = &l_1082;
    int *l_1094 = &g_22;
    int l_1095 = (-5L);
    unsigned short **l_1096 = &g_384;
    int *l_1098 = &g_83;
    (*g_12) = ((p_37 , l_1079) < (((*l_1081) = &p_37) != (void*)0));

    ;
    for (p_40 = 0; (p_40 == 8); p_40 = safe_add_func_int16_t_s_s(p_40, 3))
    {
        unsigned short **l_1087 = &g_384;
        unsigned short ***l_1088 = &g_383;
        unsigned short ***l_1089 = &g_383;
        short *****l_1090 = (void*)0;
        short ****l_1092 = (void*)0;
        short *****l_1091 = &l_1092;
        int *l_1097 = &l_1095;
        if (p_37)
            break;
        (*g_12) = ((*l_1097) = ((*g_941) || (safe_sub_func_uint32_t_u_u(((p_38 = ((l_1087 = l_1087) == ((((((*l_1091) = &g_633) != &g_633) | ((((p_38 | p_39) <= (safe_unary_minus_func_int8_t_s((*g_301)))) == p_38) && (func_51((p_40 , 1UL), p_40, l_1079, l_1094, (*g_674)) , (**g_713)))) , l_1095) , l_1096))) , 4294967288UL), (**g_940)))));

        ;
        if ((*l_1097))
            break;
    }
    return l_1098;


}







static short func_41(int * p_42, int p_43, unsigned char p_44)
{
    int *l_339 = &g_83;
    unsigned short l_340 = 65532UL;
    unsigned short *l_341 = (void*)0;
    int l_342 = 0xDC7AF598L;
    unsigned short *l_347 = &l_340;
    char *l_353 = &g_188;
    char **l_352 = &l_353;
    unsigned short *l_354 = &g_87;
    long long *l_357 = &g_149;
    int l_358 = 2L;
    unsigned char *l_359 = &g_256;
    short *l_377 = &g_73;
    short **l_376 = &l_377;
    unsigned char l_459 = 0xFFL;
    int l_494 = 0xD09711BBL;
    char l_516 = 0xD0L;
    int l_518 = (-1L);
    int l_532 = (-1L);
    char l_579 = (-1L);
    int l_628 = 0L;
    unsigned long long **l_710 = &g_161;
    unsigned **l_795 = &g_397;
    unsigned ***l_796 = &l_795;
    int l_797 = 0xF87F9BE3L;
    unsigned long long l_798 = 1UL;
    int l_809 = 3L;
    short l_811 = 0x641BL;
    int l_814 = 0L;
    unsigned short l_901 = 0x3873L;
    unsigned *l_939 = (void*)0;
    unsigned **l_938 = &l_939;
    unsigned **l_1073 = &l_939;
    int ***l_1076 = &g_441;
    int ****l_1075 = &l_1076;
    int *l_1078 = &l_358;
    l_339 = &l_342;

    ;
    if (((safe_mod_func_int32_t_s_s((((safe_add_func_int16_t_s_s((*l_339), ((*l_347) = 65529UL))) | ((((*l_359) = (safe_sub_func_uint32_t_u_u((!((func_51(((*g_161) = func_51(func_51(func_51(((**g_160) = (safe_lshift_func_uint8_t_u_s(g_73, (((((*l_339) > ((*l_357) = (((((((void*)0 != l_352) >= ((*l_354) = 0x5D95L)) && (**g_300)) && (safe_lshift_func_uint16_t_u_s((*l_339), 14))) < 2L) != g_81))) , 0x10L) , p_44) != p_44)))), (*l_339), (*l_339), &l_342, g_82), g_145, p_44, &l_342, g_215), (*l_339), (*l_339), p_42, p_43)), p_44, l_358, &g_22, (*l_339)) == 0x8532L) | g_64)), (*l_339)))) , g_22) != p_44)) , (-8L)), (*l_339))) || (-1L)))
    {
        short l_360 = 0x4266L;
        int **l_371 = &g_217;
        int l_393 = (-1L);
        unsigned **l_394 = (void*)0;
        unsigned long long l_410 = 0x198F3286DA748FBALL;
        unsigned char l_458 = 255UL;
        unsigned char l_531 = 246UL;
        short **l_594 = &l_377;
        unsigned short l_619 = 0x0277L;
        if (((((*g_161) = (*l_339)) < l_360) , (((((*l_339) , ((((l_347 == &g_73) | ((p_43 < (&g_100 == &g_100)) & l_360)) >= (*l_339)) , (*l_339))) != l_360) , (-1L)) > 0x80L)))
        {
            unsigned *l_365 = &g_366;
            int **l_367 = &l_339;
            int *l_412 = &l_342;
            unsigned long long l_413 = 18446744073709551607UL;
            int **l_450 = &l_412;
            int l_468 = (-2L);
            unsigned l_485 = 0x080C9B4DL;
            char l_497 = 0xE3L;
            long long **l_515 = &l_357;
            long long ***l_514 = &l_515;
            (*l_367) = p_42;

            ;
            if ((((safe_lshift_func_uint16_t_u_u(((*l_339) > (safe_unary_minus_func_int16_t_s((l_371 != ((0x7AAF0EE490C01ED3LL || (*l_339)) , &l_339))))), (((*l_359) = ((safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((*l_339), (-9L))) ^ ((void*)0 != l_376)), 65532UL)) == p_43)) < p_43))) != p_44) && p_43))
            {
                unsigned short **l_381 = &l_354;
                (*l_367) = (*l_371);
                (*g_12) = (*p_42);
                if (((**l_371) , (**l_367)))
                {
                    unsigned short *l_378 = (void*)0;
                    char *l_387 = &g_273;
                    int l_388 = 0xE316A125L;
                    (*g_12) = 0L;
                    if (((**g_300) & (p_44 , (func_51((**l_367), (+(((void*)0 == l_378) | (0xAA3ED2BC827CFBFALL != ((safe_lshift_func_int16_t_s_s(0x261EL, ((~p_43) < g_64))) , p_44)))), p_43, p_42, g_64) , p_43))))
                    {
                        (*g_382) = l_381;

                        ;
                        (*g_12) = (*g_217);
                        (*g_338) = p_42;

                        ;
                    }
                    else
                    {
                        short ***l_386 = (void*)0;
                        short ****l_385 = &l_386;
                        (*l_371) = ((((func_51((**g_160), p_43, p_44, p_42, (((((((*l_385) = &l_376) != (void*)0) , (*g_21)) && (p_44 ^ (((((((l_387 == (void*)0) <= 0x36L) < (*g_217)) , l_388) <= g_302) < (*g_21)) ^ (*p_42)))) , 0x44608C09B9994B67LL) >= 0xFD9708CCDC71F46ELL)) == g_149) != (**l_367)) > p_44) , p_42);

                        ;
                    }

                    ;
                    (*l_371) = (*l_371);
                    l_393 = ((+p_44) >= ((((*l_354) = 0xCF81L) <= (safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(l_388, ((**l_371) <= 0x727B3AEEDC8E8C16LL))), (**l_367)))) & 0xA4L));
                }
                else
                {
                    (*g_395) = l_394;

                    ;
                }

                ;
                ;
            }
            else
            {
                int l_400 = 0xA3F58CAEL;
                int l_405 = 0L;
                (*g_12) = (safe_add_func_uint32_t_u_u((((l_400 > ((**l_371) == (**l_367))) <= (+1UL)) ^ (((((safe_sub_func_int16_t_s_s(0xD6CEL, 0x210FL)) >= (**l_371)) , &g_149) == (void*)0) == (***g_299))), 0xAE1D0E72L));
                l_410 = func_51(((safe_add_func_int64_t_s_s((p_44 > (l_405 = p_44)), (safe_sub_func_int16_t_s_s(p_44, (0x8EL & func_51((**g_160), (((safe_sub_func_int8_t_s_s(8L, p_43)) , g_302) >= (**l_367)), (**l_367), &g_22, (**l_371))))))) , 0UL), p_43, l_400, &g_22, (*l_339));
            }

            ;
            ;
            if ((p_44 >= 0xFA6CL))
            {
                short l_429 = 0x16E9L;
                if ((*g_217))
                {
                    int *l_411 = &l_393;
                    unsigned *l_420 = &g_82;
                    char l_423 = 0x03L;
                    l_412 = ((*l_367) = l_411);

                    ;
                    ;
                    (*l_412) = (((func_51((*g_161), (((0xEAEA008FEF3BAD6BLL < l_413) == p_44) && (((safe_lshift_func_uint16_t_u_u(((*l_354) = (((g_149 > (((safe_mod_func_uint8_t_u_u((((*l_420) = (safe_add_func_int64_t_s_s(p_43, g_75))) , (p_44 = ((((safe_sub_func_uint8_t_u_u(p_44, ((*l_359) = ((((((*l_367) == (void*)0) , (*l_411)) != (**l_367)) & 0x81E4E76EL) || g_73)))) != l_423) , (*l_411)) <= 0L))), (*g_301))) && (**l_371)) >= (*g_161))) > p_43) == g_237)), 6)) <= g_366) < (*l_339))), (*l_411), p_42, p_43) , (**l_367)) , &l_360) != (*l_376));
                    for (g_366 = 16; (g_366 != 56); g_366 = safe_add_func_int16_t_s_s(g_366, 3))
                    {
                        short l_434 = 0xF17DL;
                        int l_435 = 0x33A7FF1CL;
                        unsigned *l_436 = (void*)0;
                        unsigned *l_437 = &g_438;
                        (*l_367) = p_42;

                        ;
                        if ((*p_42))
                            break;
                        (*l_371) = (l_339 = p_42);
                        (*g_12) = ((l_429 < l_435) > p_43);
                    }

                    ;
                }
                else
                {
                    unsigned long long l_439 = 18446744073709551609UL;
                    int *l_440 = &l_393;
                    unsigned *l_451 = &g_82;
                    unsigned *l_452 = &g_453;
                    (*l_367) = p_42;
                    (*l_367) = p_42;
                    p_42 = func_45(((*g_209) = p_42), ((*g_217) ^ func_51((*g_161), (**l_367), (l_439 ^ (p_44 > (*p_42))), &g_22, p_43)));
                    (*l_371) = p_42;
                }

                ;
                ;
                for (l_360 = 0; (l_360 > 20); l_360++)
                {
                    unsigned l_464 = 4294967286UL;
                    int *l_465 = (void*)0;
                    unsigned char l_466 = 0x9DL;
                    unsigned *l_467 = &l_464;
                }
            }
            else
            {
                (*l_371) = (*l_371);
            }

            ;
            ;
            if ((**l_371))
            {
                unsigned l_493 = 1UL;
                int *l_547 = &g_22;
                (**l_450) = 0L;
                if (((**l_450) != 0x73L))
                {
                    char *l_480 = &g_273;
                    int l_484 = 7L;
                    for (g_215 = (-12); (g_215 <= 40); g_215 = safe_add_func_uint8_t_u_u(g_215, 1))
                    {
                        long long l_479 = 0x86E9D7E682D25F76LL;
                        unsigned *l_481 = &g_82;
                        unsigned *l_498 = &g_438;
                        l_485 = (safe_sub_func_int64_t_s_s(((((safe_mod_func_uint8_t_u_u(g_237, ((~((*l_412) = ((*l_354) = (p_43 && (((+(((safe_rshift_func_uint16_t_u_u(((*l_347) = ((safe_mod_func_uint32_t_u_u(l_479, ((l_480 != (void*)0) , ((*l_481) = p_43)))) && l_479)), ((((p_44 & (safe_rshift_func_uint16_t_u_s((g_81 || g_83), 5))) <= p_44) != g_302) | l_484))) && g_145) , 0xD5CBL)) == p_44) , (**l_450)))))) && 0xE22FL))) <= p_43) < 0xDCB26EDDD47F1841LL) >= p_44), g_83));
                        if ((*p_42))
                            continue;
                        (*l_412) = (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((*l_339) , (p_44 >= ((*l_481) = 0x19981730L))), (safe_add_func_int64_t_s_s(g_492, l_493)))), l_494));
                        (*l_371) = ((*g_441) = p_42);

                        ;
                    }
                    for (l_484 = 0; (l_484 == 22); ++l_484)
                    {
                        short l_501 = (-1L);
                        (*g_12) = l_501;
                        (*l_412) = ((+(((+(safe_mod_func_int64_t_s_s(g_438, (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(0L, 10)), 1)) , (safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s(0L, (safe_mod_func_uint8_t_u_u(((*l_359) = func_51(l_493, ((((func_51((l_516 = (((void*)0 != l_514) , 0x1EDD18543EA68DFCLL)), p_44, g_517, (*l_450), l_501) > p_43) > p_44) ^ l_484) , 0x2AAAL), p_44, (*l_371), (**l_367))), 0x58L)))), l_518))) && (*l_339))))) != p_43) , p_44)) & 0x07L);
                        (*l_371) = p_42;
                    }
                    (*l_450) = &l_342;

                    ;
                    (*l_412) = ((safe_sub_func_int32_t_s_s((p_43 || p_44), ((safe_sub_func_uint64_t_u_u((((*g_12) || ((((((safe_rshift_func_uint16_t_u_u((((*l_359) = p_44) , func_51((l_484 , (*l_412)), (0x26551D75A18A6216LL > func_51((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_43, ((**l_371) , (**l_367)))), (*p_42))), (**l_371), l_484, &l_484, (**l_371))), p_43, p_42, g_273)), (*l_412))) , (*g_301)) ^ (**l_367)) && p_44) & g_10) == (**l_450))) <= l_493), 0x4235446F5B73D2A1LL)) ^ p_43))) || l_493);
                }
                else
                {
                    int *l_543 = &l_342;
                    (*l_450) = l_547;

                    ;
                    for (g_273 = 0; (g_273 != (-12)); g_273 = safe_sub_func_int32_t_s_s(g_273, 1))
                    {
                        unsigned long long l_550 = 0UL;
                        (*l_367) = l_543;

                        ;
                        return l_550;


                    }
                    (*l_450) = &l_342;

                    ;
                }

                ;
            }
            else
            {
                for (g_149 = 0; (g_149 != (-14)); g_149 = safe_sub_func_uint16_t_u_u(g_149, 7))
                {
                    long long l_554 = 0xBF4302C692040029LL;
                    if ((*g_21))
                    {
                        (*g_12) = g_553;
                        if (l_554)
                            break;
                        return p_43;


                    }
                    else
                    {
                        return (**l_371);


                    }
                }
            }
        }
        else
        {
            unsigned long long l_558 = 0x8F72CCCC7B7399C1LL;
            int l_560 = 0x1653066CL;
            (*l_371) = (void*)0;

            ;
            for (g_87 = (-6); (g_87 >= 2); ++g_87)
            {
                char l_557 = 9L;
                unsigned l_559 = 4UL;
                l_558 = l_557;
                l_560 = l_559;
                if ((*p_42))
                    continue;
            }
        }

        ;
        ;
        ;
        ;
        for (g_73 = 0; (g_73 < (-1)); g_73 = safe_sub_func_int64_t_s_s(g_73, 2))
        {
            int *l_563 = (void*)0;
            (*l_371) = (p_43 , l_563);

            ;
            (*g_441) = l_563;

            ;
        }


        if ((*l_339))
        {
            unsigned char l_570 = 247UL;
            int *l_580 = &g_81;
            int *l_581 = (void*)0;
            int *l_582 = &g_83;
            if (((*l_582) = (((g_553 > g_87) , 0x9D65L) | (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((g_75 , l_570), (((g_64 = (safe_mod_func_int32_t_s_s(((*l_580) = (p_44 >= ((safe_add_func_int32_t_s_s((*p_42), (safe_add_func_int16_t_s_s(((**l_376) = 0xBEB6L), ((*l_347) = ((safe_lshift_func_uint16_t_u_s(p_43, l_570)) == l_579)))))) | 0xEA72E90AL))), (*l_339)))) , p_44) <= 0xD1L))), 0x4967L)), (*p_42))))))
            {
                unsigned long long l_587 = 18446744073709551615UL;
                int l_593 = 0xCEB2877AL;
                for (g_366 = 0; (g_366 >= 29); g_366++)
                {
                    short ****l_588 = (void*)0;
                    short ***l_590 = &g_100;
                    short ****l_589 = &l_590;
                    l_593 = (safe_sub_func_uint64_t_u_u((((*g_161) = 0x226272B054453461LL) >= (l_587 = p_43)), ((g_81 >= ((((((*l_353) = ((g_215 >= (((((*l_589) = &g_100) == (void*)0) , p_44) , (safe_lshift_func_uint16_t_u_u((((*p_42) <= (*p_42)) < 0UL), p_43)))) & (*l_339))) , (*p_42)) ^ g_517) & p_43) && p_43)) || 0xC1ABA71A8656E5E5LL)));
                }
                (*g_595) = l_594;

                ;
                return (***g_595);



            }
            else
            {
                for (g_81 = 10; (g_81 >= 5); g_81 = safe_sub_func_uint8_t_u_u(g_81, 3))
                {
                    for (l_531 = 0; (l_531 < 3); l_531++)
                    {
                        (*l_371) = (void*)0;

                        ;
                        return p_43;


                    }
                    (*l_582) = (*l_339);
                }
                for (g_75 = 22; (g_75 == 44); ++g_75)
                {
                    for (g_145 = 28; (g_145 != 15); --g_145)
                    {
                        (*l_371) = (void*)0;

                        ;
                    }
                    (*l_582) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(p_43, 5)), 6));
                    if (((*l_580) = (p_44 | (18446744073709551609UL <= p_44))))
                    {
                        p_42 = p_42;
                    }
                    else
                    {
                        return p_44;


                    }
                }
            }
            (*g_12) = (0x618F356B597CD01ELL <= p_43);
            (*l_582) = (*l_339);
        }
        else
        {
            char l_613 = (-1L);
            int l_614 = (-3L);
            int ***l_620 = &g_441;
            (*g_12) = (safe_unary_minus_func_uint16_t_u((p_44 >= p_43)));
            (*l_620) = &p_42;

            ;
            l_342 = (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_43, func_51((*g_161), p_44, p_43, p_42, g_302))), p_44)), g_517));
            return p_44;



        }
    }
    else
    {
        int *l_627 = (void*)0;
        short ***l_632 = &g_100;
        short ****l_631 = &l_632;
        int l_652 = 0xD1CA13A3L;
        long long *l_673 = (void*)0;
        long long l_694 = 7L;
        unsigned l_695 = 18446744073709551615UL;
        unsigned char **l_729 = &l_359;
        char ***l_744 = &l_352;
        unsigned long long **l_785 = &g_161;
        (*g_441) = l_627;

        ;
        if ((((*l_339) | (*g_12)) & p_43))
        {
            unsigned *l_638 = &g_453;
            int l_640 = 0x7DFCA067L;
            unsigned char **l_648 = &l_359;
            unsigned char *l_649 = &g_145;
            long long **l_681 = &l_673;
            unsigned long long l_693 = 2UL;
            int *l_697 = (void*)0;
            short **l_739 = &l_377;
            int *l_740 = (void*)0;
            (*g_12) = (((p_44 , ((**g_160) = (safe_lshift_func_uint16_t_u_s(func_51(p_43, (*l_339), (safe_mod_func_uint32_t_u_u((p_44 | (**g_300)), (func_51(p_43, (+((((*l_638) = p_44) , (safe_unary_minus_func_int64_t_s((4UL != (0x6AL < l_640))))) <= p_43)), (*g_161), p_42, l_640) && 0x673CL))), p_42, (*l_339)), 9)))) , 18446744073709551606UL) , (*p_42));
            if ((((*l_357) = (safe_sub_func_int32_t_s_s((*p_42), (safe_unary_minus_func_int64_t_s((((*l_339) != (p_44 = ((*l_649) = (safe_add_func_uint32_t_u_u(0x910D5E95L, (((func_51((safe_mod_func_uint64_t_u_u((((*l_648) = &l_459) != ((*p_42) , l_649)), ((safe_add_func_uint64_t_u_u((l_652 >= 65535UL), func_51((p_43 , (*g_161)), p_43, (**g_160), &l_358, p_43))) , 5L))), (*l_339), (*l_339), p_42, g_215) <= g_145) , p_44) & p_44)))))) >= (*g_21))))))) >= p_43))
            {
                char l_669 = 0xF5L;
                unsigned long long l_670 = 0x540A2B359C4D4B1ALL;
                (*g_441) = (*g_181);
                for (l_640 = 2; (l_640 != (-4)); l_640 = safe_sub_func_uint32_t_u_u(l_640, 2))
                {
                    unsigned long long l_668 = 0x2C9295CA94DF0F32LL;
                }
            }
            else
            {
                unsigned short l_686 = 0x2C9FL;
                int *l_696 = (void*)0;
                (*g_441) = (*g_338);
                if ((((*l_339) = (*p_42)) , (((((safe_mod_func_uint8_t_u_u((l_686 , ((((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((p_44 , 0xE0L), (safe_sub_func_uint8_t_u_u(func_51(((**g_160) = (**g_160)), (l_694 = l_693), (p_44 , p_43), &l_640, l_695), 255UL)))), (*l_339))) != 1UL) ^ 0xCE3A2B28ECD0A4D0LL) == l_640)), (***g_299))) > 0UL) , p_43) && l_640) && 0xD1F8L)))
                {
                    (*g_12) = ((+0xA6DDDCC6L) > p_44);
                    (*g_441) = &l_640;

                    ;
                }
                else
                {
                    (*g_12) = 0xF245C1C5L;
                    l_697 = l_696;
                    for (l_340 = 0; (l_340 == 28); l_340++)
                    {
                        int l_712 = (-3L);
                        volatile unsigned char ***l_717 = &g_713;
                        (*l_339) = (*g_21);
                        (*l_717) = ((safe_rshift_func_int8_t_s_s(((*g_674) , (safe_mod_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(g_81, ((*l_353) = ((g_706 = (g_149 || ((void*)0 == (**g_299)))) | (safe_add_func_int64_t_s_s(((safe_unary_minus_func_uint64_t_u(((((*l_339) = (!p_44)) , l_710) != &g_161))) <= (g_711 = (*g_674))), (*g_161))))))) == g_145) & l_712), 0x1BL))), 1)) , g_713);
                    }
                    for (g_64 = 0; (g_64 >= 6); g_64 = safe_add_func_int8_t_s_s(g_64, 4))
                    {
                        (*g_12) = (p_44 != 8L);
                    }
                }

                ;
                if ((*p_42))
                {
                    short ****l_720 = (void*)0;
                    volatile unsigned short * volatile **l_722 = &g_721;
                    (*g_12) = ((*g_674) < ((**l_710) = (l_720 != &g_633)));
                    p_42 = p_42;
                    (*l_722) = g_721;
                }
                else
                {
                    unsigned char ***l_731 = &g_730;
                    int l_732 = (-3L);
                    int l_733 = 0L;
                    (*g_12) = ((((safe_lshift_func_int16_t_s_s((((!(p_44 , ((*g_674) < ((*l_339) , p_43)))) | ((**l_710) = (safe_sub_func_int16_t_s_s((l_729 != ((*l_731) = g_730)), l_732)))) | (4294967295UL > (&g_149 == (void*)0))), 0)) > 0xA970C17578619DBBLL) | l_733) != p_43);
                }
            }

            ;
            ;
            (*g_441) = func_45(p_42, ((safe_add_func_int32_t_s_s((*g_217), (safe_add_func_uint16_t_u_u(((void*)0 == l_681), (((safe_unary_minus_func_uint16_t_u(((*l_347) = p_44))) && p_43) , p_44))))) | ((((*g_674) , p_42) != (void*)0) != (*p_42))));

            ;
        }
        else
        {
            unsigned l_741 = 4UL;
            char ***l_743 = &l_352;
            int l_745 = 0x24968D74L;
            unsigned char l_757 = 1UL;
            unsigned char ***l_760 = &l_729;
            unsigned long long ***l_786 = (void*)0;
            unsigned long long ***l_787 = (void*)0;
            unsigned long long **l_788 = &g_161;
            if (l_741)
            {
                unsigned long long l_742 = 1UL;
                l_745 = ((l_742 , l_741) < (((*l_339) = (l_743 == l_744)) | (-6L)));
            }
            else
            {
                char l_761 = (-4L);
                long long *l_769 = &l_694;
                int *l_778 = &l_745;
                (*g_12) = (safe_mod_func_int8_t_s_s((***g_299), 0x86L));
                for (g_81 = 17; (g_81 < 28); g_81 = safe_add_func_uint64_t_u_u(g_81, 6))
                {
                    int *l_752 = &l_745;
                    (*g_441) = (void*)0;

                    ;
                    (*g_12) = 0x48DCC1DEL;
                    for (g_73 = (-6); (g_73 < (-26)); --g_73)
                    {
                        int **l_753 = &g_217;
                        (*l_753) = ((*g_441) = l_752);

                        ;
                        ;
                        (*g_441) = l_752;
                        (*g_12) = (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(0xD2L, 0))));
                    }

                    ;
                }

                ;
                ;
                (*g_12) = (((**l_376) = 0x7AD1L) != (*l_339));
                if (((*l_339) = (((0x4421EA41BF49EE5DLL < ((*l_769) = (~((((*g_674) = p_43) <= l_757) == (safe_sub_func_int8_t_s_s(((((**g_160) = ((((void*)0 == l_760) != ((*g_161) != 0xEF7522CFFC7AB24CLL)) , 0x8565661D17D30603LL)) > l_761) , g_768), l_761)))))) || 1UL) , (*p_42))))
                {
                    unsigned short l_770 = 65535UL;
                    int l_777 = 1L;
                    (*g_441) = func_45(&l_745, l_777);

                    ;
                }
                else
                {
                    (*g_441) = func_45(l_778, l_757);

                    ;
                    (**g_209) = (**g_441);
                    for (g_256 = 0; (g_256 < 46); g_256 = safe_add_func_int16_t_s_s(g_256, 6))
                    {
                        if ((*g_21))
                            break;
                    }
                    (*l_339) = ((**g_441) = (**g_126));
                }

                ;
            }

            ;
            ;
            (*g_441) = (void*)0;

            ;
            (*g_441) = &l_532;

            ;
            (*l_339) = (l_745 & (safe_sub_func_uint32_t_u_u(l_757, (safe_rshift_func_int16_t_s_u(p_43, ((l_785 != (l_788 = &g_161)) , p_44))))));
        }

        ;

        ;
    }




    ;
    ;
    ;
    if (((g_82 = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_518, ((safe_mod_func_int64_t_s_s((-1L), (-1L))) , (((*l_796) = l_795) == (void*)0)))), 2))) | (0x2FL == (l_797 < l_798))))
    {
        int *l_810 = &g_81;
        l_339 = &l_532;

        ;
    }
    else
    {
        unsigned l_815 = 4294967289UL;
        int *l_818 = (void*)0;
        unsigned long long **l_863 = &g_161;
        int *l_872 = &l_628;
        unsigned **l_917 = (void*)0;
        short l_936 = 0xD22BL;
        for (l_459 = (-9); (l_459 == 2); l_459++)
        {
            int *l_817 = &g_83;
            short ****l_827 = &g_633;
            char l_857 = 0xDBL;
            char l_900 = 1L;
            long long **l_925 = &g_674;
            unsigned long long l_932 = 5UL;
        }
        (*g_12) = ((*l_872) <= ((((safe_mod_func_uint16_t_u_u((((((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((p_44 , (func_51(p_43, (*l_872), p_43, p_42, (!((safe_lshift_func_int16_t_s_s(l_459, 0)) > (((*l_377) = (safe_add_func_uint16_t_u_u((p_44 == ((**g_160) == p_44)), p_43))) < p_44)))) >= p_43)) != 0x36L), (*g_941))), p_43)) , p_43) != p_44) > (*g_941)) == 18446744073709551611UL), (*l_872))) ^ (*g_674)) == (**g_766)) < (*l_872)));
        for (g_149 = 0; (g_149 == (-5)); g_149 = safe_sub_func_uint8_t_u_u(g_149, 1))
        {
            (*l_872) = 0L;
            (*l_872) = (*p_42);
        }
    }


    if ((safe_lshift_func_int8_t_s_u((((g_22 , (p_43 , (*l_376))) != (*l_376)) , func_51((func_51(((**g_160) = ((-1L) | p_44)), p_43, p_44, &l_342, p_44) , 0xF5CA3DBD3F357FCDLL), l_342, p_44, &l_628, (*g_674))), l_518)))
    {
        long long l_959 = 0x4FAC3E3E4EB26FEALL;
        unsigned long long *l_960 = &l_798;
        int *l_961 = &g_83;
        unsigned l_965 = 6UL;
        char l_980 = 0x15L;
        int *l_982 = &l_628;
        if ((func_51(((**g_160) , ((void*)0 == &l_901)), l_959, ((*l_960) = l_959), l_961, ((safe_sub_func_int64_t_s_s(p_43, ((+(p_44 >= (((*l_961) = g_964) , p_44))) | 0x43C9422789D5EB01LL))) ^ 9L)) <= l_965))
        {
            int *l_966 = (void*)0;
            (*g_441) = p_42;

            ;
            (*l_796) = (*g_395);

            ;
            p_42 = (*g_181);
        }
        else
        {
            short l_975 = 0x3864L;
            (*l_961) = (*p_42);
            for (g_237 = 0; (g_237 > 47); ++g_237)
            {
                char l_979 = 4L;
                for (l_494 = 0; (l_494 >= (-8)); --l_494)
                {
                    if ((p_43 && (((*l_357) = (((safe_rshift_func_uint16_t_u_s(((((safe_lshift_func_uint16_t_u_s((*l_961), l_975)) == ((safe_sub_func_uint8_t_u_u(((p_43 | (*g_941)) < ((g_81 ^ l_975) ^ ((safe_unary_minus_func_int16_t_s(l_979)) || (p_43 <= 255UL)))), l_979)) <= 2UL)) | (*l_961)) == (-1L)), l_980)) > 4294967295UL) >= 0xF3558B96L)) | p_44)))
                    {
                        if ((*p_42))
                            break;
                        (*l_961) = (*p_42);
                        (*l_961) = (!l_975);
                    }
                    else
                    {
                        char l_981 = 0x45L;
                        (*g_12) = (-1L);
                        return l_981;



                    }
                }
            }
            (*g_441) = l_982;

            ;
        }

        ;
        ;
    }
    else
    {
        short **l_987 = &l_377;
        int l_990 = (-7L);
        int *l_993 = &g_81;
        unsigned l_1074 = 0xEF11AF5EL;
        int ****l_1077 = (void*)0;
        if (((safe_add_func_int8_t_s_s(p_44, (-7L))) , (0L || ((*g_595) != (((safe_lshift_func_int8_t_s_s(((*g_767) = 1L), 5)) > (*g_674)) , l_987)))))
        {
            unsigned l_1000 = 0xFEB8F1F4L;
            unsigned ***l_1012 = &l_938;
            for (g_366 = (-21); (g_366 < 43); g_366 = safe_add_func_int16_t_s_s(g_366, 5))
            {
                int l_999 = 0x0E65AD9AL;
                if (l_990)
                {
                    long long l_996 = (-9L);
                    int l_1001 = 0L;
                    for (l_459 = 0; (l_459 == 14); l_459 = safe_add_func_uint16_t_u_u(l_459, 5))
                    {
                        (*g_441) = &l_342;

                        ;
                    }


                    (*g_299) = (*g_299);
                }
                else
                {
                    unsigned short *l_1010 = &g_87;
                    short *l_1011 = &g_964;
                    (*g_12) = (((*l_993) = (((~(p_44 & (l_1000 || ((safe_rshift_func_uint16_t_u_u(1UL, 10)) | ((*l_357) = func_51((p_44 , ((void*)0 == &g_161)), ((func_51(p_44, ((p_43 < ((safe_mod_func_int64_t_s_s((((*l_1011) = ((*l_377) = (safe_rshift_func_uint8_t_u_s(((((safe_sub_func_uint32_t_u_u((l_1010 == (void*)0), 0x638B27D8L)) , 1L) , l_1000) > 0L), 3)))) , 6L), (*g_674))) == (***g_299))) & 65532UL), (*g_161), p_42, p_43) == 0xFFL) >= p_44), p_43, p_42, (*g_674))))))) , (void*)0) == (void*)0)) <= p_43);
                }


                (*g_441) = p_42;

                ;
                return p_43;


            }
            (*g_441) = &l_342;

            ;
            (*l_1012) = (void*)0;

            ;
            (*l_993) = l_1000;
        }
        else
        {
            int l_1021 = 0x6DA0C339L;
            int ***l_1025 = &g_441;
            unsigned l_1040 = 0x848008BDL;
            for (g_87 = (-11); (g_87 <= 43); g_87 = safe_add_func_int16_t_s_s(g_87, 8))
            {
                unsigned long long l_1019 = 0xBDB924E41AE07ECALL;
                unsigned long long *l_1020 = &g_237;
                int l_1022 = 0x10037AEEL;
                (*l_993) = (safe_mod_func_uint32_t_u_u(func_51((*g_161), (safe_add_func_uint8_t_u_u((**g_713), (l_1019 && p_44))), ((*l_1020) = (*l_993)), p_42, (l_1022 = (((*g_21) > (*p_42)) , (+(p_44 != l_1021))))), p_43));
            }
            (*g_12) = ((((((safe_rshift_func_int16_t_s_u((p_43 || (&g_208 == l_1025)), 6)) && (((((**g_713) >= 0x9BL) && ((p_43 , (((p_43 ^ (safe_add_func_uint64_t_u_u(((**g_160) = p_44), (((0xDEL >= (**g_766)) ^ (*g_767)) == (*g_674))))) , 0x75L) && (*l_993))) , 0xF888L)) < 250UL) > p_44)) , (*g_674)) | p_44) < g_273) == (-6L));
            (**l_1025) = ((((*l_357) = (+(safe_rshift_func_uint16_t_u_s(func_51(((**g_713) | ((safe_mod_func_uint32_t_u_u(((*g_674) ^ (*l_993)), (-6L))) && ((safe_sub_func_int32_t_s_s((p_44 , ((*l_993) && (safe_sub_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(0xF4D0L, (l_1040 = ((*l_354) = 0x37A5L)))), (safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((*g_674), (*g_674))), 4)))))), (*l_993))) != p_44))), p_43, p_43, p_42, (*g_674)), g_215)))) ^ p_43) , &l_990);

            ;
            for (g_81 = (-28); (g_81 < (-13)); g_81 = safe_add_func_int32_t_s_s(g_81, 1))
            {
                unsigned long long **l_1051 = &g_161;
                unsigned long long *l_1058 = (void*)0;
                int l_1068 = (-1L);
                for (p_44 = (-7); (p_44 < 7); p_44++)
                {
                    unsigned long long **l_1052 = (void*)0;
                    unsigned char l_1053 = 250UL;
                    char l_1054 = (-1L);
                    unsigned char *l_1055 = &l_1053;
                    (*g_12) = (((*l_359) = 0xEBL) == ((*l_353) = (!(safe_rshift_func_uint8_t_u_s(((*l_1055) = (((***l_1025) = ((((***l_1025) , l_1051) == l_1052) , (l_1053 || p_44))) , l_1054)), ((*g_397) , (safe_mod_func_int8_t_s_s(p_43, p_44))))))));
                    (**g_441) = (((void*)0 != l_1058) , (safe_sub_func_int32_t_s_s(((p_43 & 0xCCFEL) < (((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint8_t_u_s(p_44, 2)) ^ (**g_300)))) >= ((safe_add_func_int8_t_s_s(l_1054, p_43)) != (((safe_add_func_uint64_t_u_u(2UL, (-6L))) > l_1054) , 0UL))) , (*p_42))), 4UL)));
                }
                l_1078 = (((**g_300) < (((((((**g_160) || (l_1068 && (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_359) = (((*l_993) , ((l_1073 == (void*)0) < (0xACA50A41D8D15997LL < p_44))) < (p_44 < g_438))), 0)), p_43)))) , l_1074) < (-1L)) , l_1075) != l_1077) , p_43)) , (void*)0);

                ;
                return p_43;



            }
        }

        ;
        ;
    }


    ;
    ;
    return p_43;



}







static int * func_45(int * p_46, unsigned p_47)
{
    unsigned long long *l_74 = &g_75;
    int l_76 = 0x253245E3L;
    short *l_90 = &g_73;
    short ***l_143 = (void*)0;
    short **l_165 = &l_90;
    char *l_189 = &g_188;
    int l_206 = (-4L);
    int l_303 = 0L;
    unsigned short l_329 = 0x8866L;
    unsigned short l_333 = 1UL;
    for (p_47 = (-18); (p_47 <= 22); ++p_47)
    {
        unsigned l_50 = 3UL;
        unsigned long long *l_63 = &g_64;
        long long l_71 = 0x62C90ACEFCE06DFELL;
        short *l_72 = &g_73;
        int *l_77 = &g_22;
        unsigned long long *l_115 = &g_75;
        int l_121 = 1L;
        short l_131 = 0xD53BL;
        unsigned short l_132 = 0UL;
        short ***l_144 = &g_100;
        unsigned char l_202 = 0x31L;
        char l_216 = 0xBDL;
    }
    if ((&l_76 != g_217))
    {
        int **l_219 = (void*)0;
        int **l_220 = &g_217;
        (*g_218) = p_46;


        (*l_220) = (*g_181);


        return (*g_209);


    }
    else
    {
        int **l_221 = &g_106;
        short ***l_224 = &g_100;
        short l_229 = (-8L);
        unsigned l_238 = 18446744073709551615UL;
        int l_304 = 0xB546AA6AL;
        int l_331 = 0x6E096090L;
        (*l_221) = (*g_209);
        (*l_221) = (*g_126);
        (*g_12) = (p_47 || (g_149 == p_47));
        if ((1L ^ (safe_add_func_uint32_t_u_u(((((void*)0 == l_224) , ((safe_lshift_func_uint16_t_u_s((((!(safe_sub_func_int16_t_s_s(l_229, p_47))) >= g_73) || (((~(g_237 = (safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(g_145, 5)), ((**l_165) = (((safe_sub_func_int8_t_s_s(0x77L, l_229)) || l_206) & g_81)))))))) , 0x7DL) <= p_47)), p_47)) == g_87)) || p_47), l_76))))
        {
            int l_248 = 6L;
            long long *l_306 = (void*)0;
            long long **l_305 = &l_306;
            if (l_238)
            {
                long long *l_243 = &g_149;
                short ***l_244 = (void*)0;
                int *l_245 = &g_83;
                unsigned short *l_251 = &g_87;
                short l_252 = 0xB730L;
                long long l_257 = 0x8F0C7B7B65CB5CBDLL;
                unsigned char *l_265 = &g_256;
                char *l_272 = &g_273;
                unsigned char *l_278 = &g_145;
                int *l_279 = (void*)0;
                int *l_280 = &g_81;
                int **l_285 = &l_279;
                if (((safe_rshift_func_uint8_t_u_u(0x2AL, 7)) , (safe_sub_func_int64_t_s_s(g_83, (((*l_243) = g_83) >= (l_244 == &l_165))))))
                {
                    (*l_221) = l_245;

                    ;
                }
                else
                {
                    (*l_221) = &l_76;

                    ;
                    if (((((safe_add_func_uint16_t_u_u((l_206 ^ (l_206 > ((**l_221) = (((~g_149) & ((*l_245) = g_22)) , 0x59B7E851L)))), 0xE5B5L)) == (l_248 <= 9L)) , ((safe_add_func_uint64_t_u_u((&g_87 != l_251), 0xBC829ADCCFBDE21BLL)) || 0xEC99466FL)) && g_13))
                    {
                        l_252 = (-1L);
                    }
                    else
                    {
                        long long l_255 = 1L;
                        (*g_12) = (((safe_add_func_uint16_t_u_u(func_51((l_206 || (**l_221)), l_255, p_47, l_245, ((0x2B22EB942D218AE0LL & ((l_255 , func_51(l_206, (((*l_245) = ((((*l_74) = g_256) >= p_47) != 0x01DDF3D5L)) != l_257), g_188, l_245, p_47)) >= p_47)) ^ 0x89A98373L)), g_188)) , (**l_221)) < l_248);
                    }
                    return p_46;



                }

                ;
                l_248 = (((safe_rshift_func_int8_t_s_u(g_75, (safe_sub_func_uint32_t_u_u(p_47, (!(safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u(((*l_265) = 8UL), (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_47, ((*l_272) = ((*l_189) = (0x5B03L & g_215))))) != (l_76 >= (((*g_126) != ((safe_add_func_uint8_t_u_u(((*l_278) = 4UL), 0UL)) , &l_248)) == l_76))), 0x0EL)), 3))))))))))) & 3UL) , 0xD4EB8893L);
                if (func_51((*g_161), l_206, ((p_47 || ((((*l_245) == 18446744073709551613UL) & ((*l_280) = l_206)) == (g_149 , ((safe_add_func_uint64_t_u_u(p_47, (!1UL))) , l_248)))) , (**g_160)), p_46, (**l_221)))
                {
                    for (g_149 = 0; (g_149 > 4); g_149 = safe_add_func_uint8_t_u_u(g_149, 1))
                    {
                        if ((*p_46))
                            break;
                        (*l_245) = (*g_217);
                    }
                }
                else
                {
                    (*l_280) = (*p_46);
                }
                (*l_285) = ((*l_221) = (void*)0);

                ;
            }
            else
            {
                (*l_221) = &l_206;

                ;
                (*l_221) = ((p_47 >= g_81) , (*l_221));
            }

            ;
            for (g_82 = 0; (g_82 <= 5); ++g_82)
            {
                int l_294 = 0xCB1FC8BDL;
                for (l_206 = (-26); (l_206 <= (-22)); ++l_206)
                {
                    unsigned short l_297 = 65528UL;
                    unsigned *l_298 = &l_238;
                    long long ***l_307 = &l_305;
                    long long **l_309 = (void*)0;
                    long long ***l_308 = &l_309;
                    (*g_12) = (((*l_298) = (((safe_rshift_func_uint16_t_u_s(65535UL, 7)) != ((l_206 < (safe_add_func_int8_t_s_s(((*l_189) = l_294), 0x51L))) > ((safe_rshift_func_uint16_t_u_u((((l_76 < ((void*)0 != p_46)) , 0UL) == ((l_248 , 0xD7L) | (-4L))), 14)) , l_76))) || l_297)) , (*p_46));
                    l_304 = (l_303 = (0x3F0AL && (g_299 == (void*)0)));
                    (*l_308) = ((*l_307) = l_305);

                    ;
                }
            }
            (*l_221) = (*l_221);
        }
        else
        {
            int *l_310 = &l_76;
            int *l_330 = &g_81;
            long long *l_332 = &g_149;
            (*l_221) = l_310;

            ;
            (**g_105) = (safe_lshift_func_uint16_t_u_u((((**l_165) = func_51((**g_160), ((((**l_221) = (-1L)) && (((*l_332) = (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((g_87 = ((18446744073709551610UL || (safe_lshift_func_int8_t_s_u((0x38F12F4BL | (safe_lshift_func_int8_t_s_u(((((safe_rshift_func_int8_t_s_u(((((*l_330) = (safe_sub_func_int64_t_s_s(g_215, ((l_76 = 0x67BF6E9DL) < ((((safe_add_func_uint64_t_u_u((l_206 = 0x836CF51DF5792ACDLL), l_303)) , l_329) && 0xFD2871D3L) , (*g_217)))))) < l_329) > l_331), 7)) && 0x039A49C0L) , p_47) , 1L), 2))), 3))) >= l_329)) || 0x1128L), (**g_300))) , 65526UL), g_64)), 6UL))) && (-1L))) || g_273), (*g_161), (*l_221), p_47)) == l_333), p_47));
            (*l_221) = (*g_218);
            for (g_64 = 0; (g_64 >= 53); g_64 = safe_add_func_uint16_t_u_u(g_64, 4))
            {
                int *l_336 = &l_206;
                int **l_337 = &l_310;
                (*l_337) = ((*l_221) = l_336);

                ;
                ;
            }

            ;
            ;
        }

        ;
    }

    ;
    (*g_338) = &l_76;

    ;
    return p_46;



}







static long long func_51(unsigned long long p_52, unsigned short p_53, unsigned long long p_54, int * p_55, long long p_56)
{
    unsigned l_84 = 0x1E971521L;
    for (g_75 = 18; (g_75 >= 8); g_75 = safe_sub_func_int8_t_s_s(g_75, 2))
    {
        int *l_80 = &g_81;
        g_82 = (p_56 >= ((*l_80) = (g_22 && p_53)));
        g_83 = ((*l_80) = (*p_55));
        (*l_80) = (*p_55);
    }
    l_84 = (g_64 && 0xC0F8L);
    return g_10;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_517, "g_517", print_hash_value);
    transparent_crc(g_553, "g_553", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_867, "g_867", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    transparent_crc(g_1159, "g_1159", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1436, "g_1436", print_hash_value);
    transparent_crc(g_1493, "g_1493", print_hash_value);
    transparent_crc(g_1534, "g_1534", print_hash_value);
    transparent_crc(g_1538, "g_1538", print_hash_value);
    transparent_crc(g_1632, "g_1632", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
