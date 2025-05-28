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



static unsigned short g_20 = 0x425FL;
static unsigned long long g_35 = 0x0E7790660D64C9D8LL;
static int g_37 = (-8L);
static unsigned long long * volatile * volatile g_94 = (void*)0;
static short g_96 = 0L;
static char g_101 = 0x3EL;
static volatile unsigned g_113 = 0xB24405C6L;
static int *g_117 = &g_37;
static int ** volatile g_116 = &g_117;
static long long g_133 = 0x26432604E4D2D991LL;
static int g_145 = 0xD1F7F3E9L;
static int * volatile g_144 = &g_145;
static int ** volatile g_148 = &g_117;
static volatile short * volatile *g_149 = (void*)0;
static volatile unsigned short g_249 = 0UL;
static unsigned char g_258 = 255UL;
static unsigned short g_270 = 0UL;
static int ** volatile g_355 = &g_117;
static int ** volatile g_356 = &g_117;
static long long *g_378 = &g_133;
static int g_380 = 0x66C92315L;
static int * volatile g_379 = &g_380;
static unsigned g_384 = 2UL;
static unsigned *g_383 = &g_384;
static volatile unsigned g_477 = 0x6E83DC22L;
static short *g_498 = &g_96;
static short **g_497 = &g_498;
static short g_500 = 0xE482L;
static unsigned char *g_516 = &g_258;
static unsigned char **g_515 = &g_516;
static unsigned char *** volatile g_514 = &g_515;
static int ** volatile g_520 = &g_117;
static int * volatile g_649 = &g_37;
static int * volatile * volatile g_650 = &g_144;
static int ** volatile g_790 = &g_117;
static volatile unsigned char g_847 = 0UL;
static int ** volatile g_848 = &g_117;
static unsigned char * volatile * volatile *g_852 = (void*)0;
static unsigned g_1293 = 4UL;
static short g_1525 = 0xD0B2L;
static volatile unsigned long long g_1526 = 0x8FB334C03F42430FLL;
static unsigned char g_1586 = 3UL;
static unsigned long long g_1646 = 18446744073709551609UL;
static unsigned short **g_1650 = (void*)0;
static unsigned ***g_1661 = (void*)0;
static char g_1669 = 0L;
static unsigned short g_1681 = 0xEA3EL;
static unsigned **g_1685 = &g_383;
static unsigned char g_1704 = 247UL;
static unsigned char g_1869 = 0x59L;
static unsigned g_1891 = 4294967293UL;
static char *g_1898 = &g_101;
static char **g_1897 = &g_1898;
static char ** volatile * volatile g_1896 = &g_1897;
static unsigned long long g_2294 = 18446744073709551615UL;
static int ** volatile g_2297 = &g_117;
static volatile int g_2498 = (-3L);
static volatile int g_2504 = 0x54E93B82L;
static volatile int g_2506 = 0xDBE28900L;
static volatile unsigned g_2514 = 0x633F6730L;
static unsigned char g_2521 = 0x6BL;
static int ** volatile g_2553 = (void*)0;
static int ** volatile g_2555 = &g_117;
static unsigned short *g_2580 = &g_270;
static int **g_2586 = &g_117;
static int *** volatile g_2585 = &g_2586;
static unsigned * volatile * volatile g_2607 = &g_383;
static unsigned * volatile * volatile *g_2606 = &g_2607;
static char * volatile *g_2823 = &g_1898;
static char * volatile * volatile *g_2822 = &g_2823;
static int * volatile g_2888 = &g_145;
static unsigned long long **g_2892 = (void*)0;
static unsigned long long ***g_2891 = &g_2892;



static unsigned short func_1(void);
static unsigned short func_4(unsigned char p_5, char p_6, char p_7);
static int func_11(int p_12, unsigned char p_13, int p_14, unsigned short p_15, unsigned char p_16);
static char func_21(int p_22, unsigned p_23, int p_24, int p_25);
static int func_28(unsigned long long p_29, unsigned p_30);
static short func_48(unsigned long long p_49);
static unsigned char func_52(unsigned char p_53);
static unsigned long long func_54(int * p_55, short p_56, int p_57, int p_58, unsigned long long * p_59);
static unsigned char func_65(int p_66, short p_67, unsigned long long * p_68, int p_69);
static int func_72(char p_73, long long p_74, unsigned long long * p_75);
static unsigned short func_1(void)
{
    unsigned short l_8 = 0x7B1CL;
    unsigned long long ****l_2893 = (void*)0;
    unsigned long long ***l_2895 = &g_2892;
    unsigned long long ****l_2894 = &l_2895;
    int *l_2896 = &g_145;
    unsigned char l_2897 = 255UL;
    (*l_2896) = (safe_sub_func_uint16_t_u_u(func_4(l_8, l_8, (safe_lshift_func_uint16_t_u_u(l_8, 2))), (safe_add_func_uint64_t_u_u(g_2521, (g_2891 == ((*l_2894) = &g_2892))))));


    ;

    ;
    return l_2897;
}







static unsigned short func_4(unsigned char p_5, char p_6, char p_7)
{
    unsigned short l_17 = 0x6544L;
    unsigned long long l_31 = 0x9481F3403CA955A6LL;
    unsigned long long *l_34 = &g_35;
    int *l_36 = &g_37;
    int l_2852 = 0x71A92F71L;
    unsigned l_2862 = 0x496AA666L;
    if (func_11(l_17, ((safe_lshift_func_uint8_t_u_s((((l_17 , g_20) < func_21((safe_lshift_func_int16_t_s_u(l_17, 1)), g_20, (l_17 & 0x017CA4E86524F204LL), func_28((l_31 & (safe_add_func_int32_t_s_s(((*l_36) = ((((*l_34) = p_5) && p_6) < l_31)), 4294967291UL))), g_20))) , 0UL), 7)) , (***g_514)), p_6, g_2521, p_5))
    {
        unsigned **l_2841 = (void*)0;
        int l_2853 = 0x4EF39A54L;
        int *l_2854 = &l_2853;
        int *l_2855 = &l_2852;
        int *l_2856 = (void*)0;
        int *l_2857 = &l_2853;
        int *l_2858 = (void*)0;
        int *l_2859 = &g_145;
        int *l_2860 = &l_2852;
        int *l_2861 = &g_37;
        (*l_36) = ((safe_lshift_func_uint16_t_u_u((p_5 > ((((safe_lshift_func_int16_t_s_s(((((g_113 , (*l_36)) && p_5) ^ func_21((safe_add_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(((l_2852 = (p_6 , ((((void*)0 == l_2841) <= ((!((**g_1897) >= (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(p_7, (*g_1898))), 0)), 0)), 10)), 7)))) , (***g_2822))) ^ p_7))) >= p_7), g_101)), p_5)), p_7)), l_2853, p_5, p_7)) , l_2853), 10)) , p_7) , (*g_2580)) > (*l_36))), 11)) > p_5);
        (*l_36) = (*g_144);
        --l_2862;
    }
    else
    {
        unsigned l_2865 = 4294967290UL;
        unsigned long long *l_2872 = (void*)0;
        unsigned char *l_2873 = &g_1704;
        int l_2874 = 0x961A6765L;
        l_2874 &= ((*l_36) | ((l_2865++) , func_52(((*l_2873) ^= ((p_6 <= func_65((((+(((*g_378) = 0x8E0A5BAA899A935DLL) == (((safe_sub_func_int32_t_s_s(((safe_sub_func_int64_t_s_s((((*l_36) > (((((((*g_383) ^= ((p_6 < p_5) <= p_5)) , p_7) , (void*)0) != (**g_514)) | p_5) <= 1L)) , g_1869), p_6)) & (**g_2823)), l_2865)) || p_5) & (*l_36)))) != l_2865) & (*g_2580)), (*l_36), l_2872, p_5)) != p_5)))));

        ;
        (*g_790) = &l_2852;

        ;
    }


    ;

    ;
    for (g_1586 = (-22); (g_1586 != 43); g_1586 = safe_add_func_uint16_t_u_u(g_1586, 5))
    {
        long long l_2885 = (-1L);
        unsigned char *l_2887 = &g_1869;
        (*l_36) = 0xB5094801L;
    }
    return (*l_36);


}







static int func_11(int p_12, unsigned char p_13, int p_14, unsigned short p_15, unsigned char p_16)
{
    unsigned char l_2619 = 0xD6L;
    int *l_2632 = &g_145;
    unsigned short *l_2644 = (void*)0;
    int l_2749 = 0x793350F1L;
    int l_2753 = 0x243885D6L;
    int l_2781 = 1L;
    int l_2800 = 0L;
    int l_2830 = 0x883B1AF3L;
    for (g_145 = 0; (g_145 > (-6)); g_145 = safe_sub_func_int64_t_s_s(g_145, 2))
    {
        unsigned char l_2603 = 0xE9L;
        unsigned ***l_2608 = &g_1685;
        char l_2615 = 0xCEL;
        int *l_2616 = &g_380;
        short **l_2627 = &g_498;
        (*l_2616) ^= (((safe_rshift_func_int8_t_s_s((-1L), l_2603)) | ((safe_sub_func_uint8_t_u_u((p_13 = (g_2606 == l_2608)), l_2603)) <= (safe_lshift_func_uint16_t_u_s((((--(*g_383)) & (p_16 ^ 1L)) , ((-6L) == ((safe_lshift_func_int8_t_s_u((*g_1898), 5)) , l_2615))), 1)))) , 0x55EE49F1L);
        for (g_101 = (-1); (g_101 > 28); g_101++)
        {
            char l_2622 = 0xEEL;
            int *l_2628 = (void*)0;
            int *l_2629 = &g_37;
            (*l_2616) = (**g_650);
            (*l_2629) &= ((**g_1897) != (func_52(((p_14 != l_2619) , func_21((p_13 , l_2619), l_2619, (safe_add_func_uint8_t_u_u(l_2622, ((--(*g_2580)) , ((safe_sub_func_int64_t_s_s(((*g_378) = func_52((l_2627 != &g_498))), 0L)) != l_2619)))), g_1704))) , 0x2DL));

            ;
        }
    }


    for (g_101 = 7; (g_101 <= 8); g_101 = safe_add_func_int16_t_s_s(g_101, 4))
    {
        int l_2643 = 0x9FA6352CL;
        char *l_2645 = (void*)0;
        char *l_2646 = (void*)0;
        char *l_2647 = &g_1669;
        (*g_116) = l_2632;

        ;
        g_380 |= ((**g_790) <= (safe_add_func_uint8_t_u_u((**g_515), ((*l_2647) = (p_13 != (safe_rshift_func_int8_t_s_u((&p_15 != ((5L && (!(*g_378))) , ((p_12 , (p_13 >= (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((*l_2632), l_2643)), (-7L))), 7)))) , l_2644))), 2)))))));
    }


    for (g_133 = 0; (g_133 >= 10); g_133++)
    {
        char l_2650 = 0x44L;
        int l_2670 = 1L;
        int l_2699 = 0L;
        unsigned char **l_2828 = &g_516;
        unsigned long long *l_2829 = &g_2294;
        if (l_2650)
        {
            int *l_2651 = &g_145;
            int l_2652 = 0x2B25336FL;
            int l_2684 = (-7L);
            int l_2701 = (-5L);
            int l_2758 = 3L;
            int l_2783 = 1L;
            char ***l_2815 = &g_1897;
            unsigned char *l_2821 = &g_1704;
            if (p_14)
                break;
            (*g_2586) = l_2651;

            ;
            if (l_2652)
            {
                int l_2653 = 6L;
                return l_2653;
            }
            else
            {
                char l_2697 = 0L;
                int l_2737 = (-2L);
                int l_2762 = 0x808F73D8L;
                int l_2766 = 0x296C8B77L;
                int l_2790 = 0x8DDD3EC4L;
                unsigned l_2811 = 4294967289UL;
                unsigned **l_2814 = &g_383;
                for (g_500 = 25; (g_500 <= 27); ++g_500)
                {
                    char l_2656 = 0L;
                    int *l_2657 = &g_37;
                    int *l_2658 = &g_380;
                    int *l_2659 = &g_380;
                    int *l_2660 = &g_145;
                    int *l_2661 = &g_380;
                    int *l_2662 = &g_380;
                    int *l_2663 = &g_145;
                    int *l_2664 = (void*)0;
                    int *l_2665 = &g_37;
                    int *l_2666 = &g_145;
                    int *l_2667 = &g_37;
                    int *l_2668 = &g_37;
                    int *l_2669 = &g_145;
                    int *l_2671 = &g_380;
                    int *l_2672 = &l_2670;
                    int *l_2673 = &g_37;
                    int *l_2674 = &g_145;
                    int *l_2675 = &g_380;
                    int *l_2676 = &g_37;
                    int *l_2677 = &g_37;
                    int *l_2678 = &g_380;
                    int *l_2679 = (void*)0;
                    int *l_2680 = (void*)0;
                    int *l_2681 = &g_145;
                    int *l_2682 = &g_37;
                    int *l_2683 = (void*)0;
                    int *l_2685 = &l_2684;
                    int *l_2686 = &g_145;
                    int *l_2687 = (void*)0;
                    int *l_2688 = &g_37;
                    int *l_2689 = &l_2670;
                    int *l_2690 = &g_37;
                    int *l_2691 = &g_145;
                    int *l_2692 = &l_2684;
                    int *l_2693 = (void*)0;
                    int *l_2694 = &l_2684;
                    int *l_2695 = &g_37;
                    int *l_2696 = &l_2670;
                    int *l_2698 = &g_37;
                    int *l_2700 = &g_145;
                    int *l_2702 = &l_2670;
                    int *l_2703 = &l_2701;
                    int *l_2704 = &l_2699;
                    int *l_2705 = &g_37;
                    int *l_2706 = &g_37;
                    int *l_2707 = &l_2699;
                    int *l_2708 = &l_2701;
                    int *l_2709 = (void*)0;
                    int *l_2710 = &g_37;
                    int *l_2711 = &l_2670;
                    int *l_2712 = &g_37;
                    int *l_2713 = &g_145;
                    int *l_2714 = &l_2670;
                    int *l_2715 = (void*)0;
                    int *l_2716 = &l_2701;
                    int *l_2717 = &g_145;
                    int *l_2718 = &l_2684;
                    int *l_2719 = &g_380;
                    int *l_2720 = &g_145;
                    int *l_2721 = &g_37;
                    int *l_2722 = &l_2701;
                    int *l_2723 = &l_2670;
                    int *l_2724 = &g_37;
                    int *l_2725 = &l_2699;
                    int *l_2726 = (void*)0;
                    int *l_2727 = &g_37;
                    int *l_2728 = (void*)0;
                    int *l_2729 = &g_145;
                    int *l_2730 = &l_2699;
                    int *l_2731 = &l_2670;
                    int *l_2732 = &g_37;
                    int *l_2733 = &l_2699;
                    int *l_2734 = (void*)0;
                    int *l_2735 = &l_2684;
                    int *l_2736 = &l_2699;
                    int *l_2738 = &l_2737;
                    int *l_2739 = &l_2737;
                    int *l_2740 = &g_380;
                    int l_2741 = (-2L);
                    int *l_2742 = &g_145;
                    int *l_2743 = &l_2684;
                    int *l_2744 = &l_2670;
                    int *l_2745 = &l_2699;
                    int *l_2746 = &g_37;
                    int *l_2747 = &g_37;
                    int *l_2748 = &l_2737;
                    int *l_2750 = &l_2741;
                    int *l_2751 = &l_2701;
                    int *l_2752 = &g_380;
                    int *l_2754 = &l_2670;
                    int *l_2755 = &l_2741;
                    int *l_2756 = &l_2753;
                    int *l_2757 = &l_2701;
                    int *l_2759 = &g_380;
                    int *l_2760 = &g_145;
                    int *l_2761 = &l_2701;
                    int *l_2763 = &l_2737;
                    int *l_2764 = &l_2762;
                    int *l_2765 = &l_2758;
                    int *l_2767 = &l_2737;
                    int *l_2768 = &l_2762;
                    int *l_2769 = &g_380;
                    int *l_2770 = &g_37;
                    int *l_2771 = &g_380;
                    int *l_2772 = (void*)0;
                    int *l_2773 = &l_2749;
                    int *l_2774 = &l_2762;
                    int *l_2775 = (void*)0;
                    int *l_2776 = &g_380;
                    int *l_2777 = &g_37;
                    int *l_2778 = (void*)0;
                    int *l_2779 = &l_2749;
                    int *l_2780 = &l_2701;
                    int *l_2782 = &l_2699;
                    int *l_2784 = &l_2699;
                    int *l_2785 = &l_2701;
                    int *l_2786 = &g_145;
                    int *l_2787 = &l_2670;
                    int *l_2788 = &l_2737;
                    int *l_2789 = &l_2783;
                    int *l_2791 = &l_2670;
                    int *l_2792 = (void*)0;
                    int *l_2793 = &l_2741;
                    int *l_2794 = (void*)0;
                    int *l_2795 = &l_2790;
                    int *l_2796 = (void*)0;
                    int *l_2797 = &l_2753;
                    int l_2798 = 3L;
                    int *l_2799 = (void*)0;
                    int l_2801 = (-1L);
                    int *l_2802 = &l_2737;
                    int *l_2803 = &l_2737;
                    int *l_2804 = &l_2798;
                    int *l_2805 = &g_37;
                    int *l_2806 = (void*)0;
                    int *l_2807 = (void*)0;
                    int *l_2808 = &l_2753;
                    int l_2809 = 0xC0593014L;
                    int *l_2810 = &l_2701;
                    ++l_2811;
                    (*l_2744) = p_13;
                    (*g_2606) = l_2814;
                }
                if ((**g_848))
                    continue;
            }
            (*l_2651) &= func_21(p_16, p_12, p_16, (((*g_516) , l_2815) == ((safe_lshift_func_int8_t_s_s(((((***g_2606) = (safe_mod_func_int16_t_s_s(p_16, (0xF904L & (((**g_1897) = (safe_unary_minus_func_uint8_t_u(((*l_2821) = (((p_16 > p_14) , 8L) ^ l_2699))))) ^ 9UL))))) > 0x052DD02CL) | 1L), 2)) , g_2822)));


        }
        else
        {
            (*l_2632) = l_2650;
        }
        if (p_15)
            break;
        (*g_2586) = ((p_12 != (safe_mod_func_int8_t_s_s((*g_1898), l_2670))) , (((*l_2632) |= ((*l_2829) ^= ((1UL | (safe_lshift_func_int8_t_s_u(func_52(p_13), 3))) , (((*g_514) = l_2828) == l_2828)))) , &l_2699));

        ;
    }
    return l_2830;
}







static char func_21(int p_22, unsigned p_23, int p_24, int p_25)
{
    for (g_35 = 0; (g_35 <= 17); g_35 = safe_add_func_int64_t_s_s(g_35, 1))
    {
        (*g_2586) = &p_24;

        ;
    }


    return (**g_1897);


}







static int func_28(unsigned long long p_29, unsigned p_30)
{
    unsigned char l_40 = 4UL;
    int l_41 = 0xC7E318B4L;
    unsigned short *l_2579 = &g_20;
    unsigned short *l_2581 = &g_1681;
    int l_2582 = 2L;
    int l_2583 = 0xFD52454DL;
    int **l_2584 = &g_117;
    unsigned *l_2592 = &g_384;
    char *l_2595 = &g_1669;
    int *l_2596 = &g_145;
    l_2583 = (safe_mod_func_int32_t_s_s((l_41 = l_40), ((((safe_add_func_int32_t_s_s(((l_2582 = (safe_mod_func_uint16_t_u_u(((*l_2581) = (safe_rshift_func_int16_t_s_u((+(func_48(g_35) && (1UL >= (((safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s(p_29, l_40)) ^ (safe_add_func_uint32_t_u_u(((l_2579 == (g_2580 = l_2579)) < (p_29 >= 0x06L)), p_30))), (*g_378))) <= p_30) , p_29)))), g_1704))), 0xB8E1L))) < p_30), p_30)) == 0x4BCEL) > 0x9D658624L) && l_40)));


    ;

    ;
    (*g_2585) = l_2584;
    (*l_2596) = ((safe_mod_func_int8_t_s_s((p_30 >= p_29), (safe_unary_minus_func_uint16_t_u(65531UL)))) || (safe_add_func_int8_t_s_s(((l_41 , ((void*)0 == l_2592)) >= (safe_lshift_func_int16_t_s_u(l_2583, 5))), ((*l_2595) = ((**g_1897) = (**g_1897))))));
    return p_29;
}







static short func_48(unsigned long long p_49)
{
    short l_60 = (-1L);
    int l_76 = (-7L);
    unsigned long long **l_77 = (void*)0;
    unsigned long long *l_79 = &g_35;
    unsigned long long **l_78 = &l_79;
    unsigned long long *l_2293 = &g_2294;
    int *l_2556 = &l_76;
    int *l_2557 = &g_145;
    int *l_2558 = (void*)0;
    int *l_2559 = &g_145;
    int *l_2560 = &g_37;
    int *l_2561 = &g_380;
    int *l_2562 = (void*)0;
    int *l_2563 = &g_37;
    int *l_2564 = &l_76;
    int *l_2565 = &g_37;
    int *l_2566 = (void*)0;
    int l_2567 = 0x4B32C710L;
    int *l_2568 = &g_37;
    int *l_2569 = &l_2567;
    unsigned l_2570 = 2UL;
    (*g_2555) = ((+(safe_sub_func_uint8_t_u_u(func_52(((((func_54(((0x2E5769E8L > 0x8D8805E5L) , (void*)0), l_60, (+(p_49 , (safe_lshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((func_65(((safe_lshift_func_int16_t_s_s(((~0xD464L) | (func_72(p_49, (l_76 = p_49), ((*l_78) = &g_35)) >= 0xF0366284L)), p_49)) != g_1704), p_49, l_2293, g_1704) , 0L), p_49)), g_1704)))), l_60, &g_2294) || l_76) | 0xDF76L) , (*g_378)) , 248UL)), l_60))) , &l_76);

    ;
    ;

    l_2570--;
    return p_49;


}







static unsigned char func_52(unsigned char p_53)
{
    int *l_2549 = (void*)0;
    int **l_2550 = (void*)0;
    int *l_2551 = (void*)0;
    int *l_2552 = &g_380;
    int **l_2554 = &l_2552;
    (*g_356) = l_2549;

    ;
    l_2549 = l_2549;
    (*l_2552) &= 0L;
    (*l_2554) = l_2552;
    return (*g_516);
}







static unsigned long long func_54(int * p_55, short p_56, int p_57, int p_58, unsigned long long * p_59)
{
    int * volatile *l_2517 = &g_649;
    int *l_2518 = &g_37;
    unsigned long long *l_2522 = &g_2294;
    unsigned char l_2523 = 0x13L;
    unsigned l_2524 = 7UL;
    unsigned l_2529 = 0x7F938DEDL;
    (*l_2517) = (*g_650);

    ;
    (*l_2517) = l_2518;

    ;
    if ((((((((**l_2517) , l_2518) == p_55) & (safe_rshift_func_uint8_t_u_u((((*g_378) = ((+(*l_2518)) < p_56)) != (*p_59)), 4))) , func_65((l_2523 = ((((((**l_2517) ^= (*p_59)) && ((*p_59) = ((((func_65((*l_2518), g_2521, l_2522, (*l_2518)) >= (*l_2518)) && (*p_59)) & 0x2BFCCCEC34879A45LL) != (**g_1897)))) , (*l_2518)) != p_58) , (*l_2518))), p_58, l_2522, l_2524)) > l_2524) , 0x4B7935C1L))
    {
        long long l_2532 = 0x654061B40D9FDCF4LL;
        unsigned long long *l_2533 = &g_1646;
        if ((safe_lshift_func_uint16_t_u_s(p_58, (func_65((safe_rshift_func_uint8_t_u_u(1UL, 6)), ((func_65(l_2529, p_57, p_59, g_96) >= (*g_378)) , (safe_sub_func_uint64_t_u_u((+(*p_59)), l_2532))), l_2533, p_56) >= p_58))))
        {
            (**l_2517) |= (p_56 & l_2532);
        }
        else
        {
            short l_2536 = 0x98A1L;
            for (g_145 = (-15); (g_145 < (-12)); g_145 = safe_add_func_int32_t_s_s(g_145, 8))
            {
                short *l_2537 = &g_1525;
                (*l_2518) |= (p_58 != func_65((**g_116), ((*l_2537) |= ((*p_59) && l_2536)), &g_2294, ((0x207EA8C7DF4898ACLL <= (*g_378)) , g_1891)));
            }
            return (*p_59);
        }
        p_57 ^= ((*g_117) = (((safe_add_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((9L >= (0xF294L == p_58)), l_2532)), (((*p_59) || (0x48A7L <= p_58)) != ((!(safe_mod_func_int8_t_s_s(0L, ((7UL <= g_2521) , (-10L))))) ^ (*l_2518))))) , (void*)0) == p_59));
        for (g_1891 = (-11); (g_1891 < 36); g_1891 = safe_add_func_int64_t_s_s(g_1891, 8))
        {
            (*l_2517) = &p_58;

            ;
            (*g_117) &= (*l_2518);
        }

        ;
    }
    else
    {
        (*g_117) = (**g_355);
        (*l_2517) = (*g_148);

        ;
    }

    ;
    for (p_57 = (-27); (p_57 == 12); ++p_57)
    {
        int *l_2548 = &g_380;
        l_2548 = (void*)0;

        ;
    }
    return (*l_2518);


}







static unsigned char func_65(int p_66, short p_67, unsigned long long * p_68, int p_69)
{
    int *l_2295 = &g_380;
    int **l_2296 = (void*)0;
    int *l_2298 = &g_380;
    int *l_2299 = &g_145;
    int *l_2300 = &g_380;
    int *l_2301 = &g_145;
    int *l_2302 = (void*)0;
    int *l_2303 = (void*)0;
    int *l_2304 = &g_380;
    int *l_2305 = &g_37;
    int *l_2306 = (void*)0;
    int l_2307 = (-8L);
    int *l_2308 = &g_37;
    int *l_2309 = &l_2307;
    int *l_2310 = &g_145;
    int *l_2311 = &g_380;
    int *l_2312 = &g_37;
    int *l_2313 = &l_2307;
    int *l_2314 = &l_2307;
    int *l_2315 = (void*)0;
    int *l_2316 = (void*)0;
    int *l_2317 = &g_380;
    int *l_2318 = &g_145;
    int *l_2319 = &g_145;
    int l_2320 = 0x176D296EL;
    int *l_2321 = &g_380;
    int *l_2322 = (void*)0;
    int *l_2323 = &g_145;
    int *l_2324 = &l_2320;
    int l_2325 = (-1L);
    int *l_2326 = (void*)0;
    int *l_2327 = &l_2325;
    int l_2328 = (-7L);
    int *l_2329 = (void*)0;
    int *l_2330 = &g_145;
    int *l_2331 = &g_380;
    int *l_2332 = &l_2307;
    int *l_2333 = (void*)0;
    int *l_2334 = &l_2325;
    int l_2335 = (-7L);
    int *l_2336 = &l_2307;
    int l_2337 = 0L;
    int *l_2338 = &l_2337;
    int *l_2339 = &l_2320;
    int *l_2340 = &g_380;
    int l_2341 = 0xAD77A820L;
    int *l_2342 = &l_2335;
    int *l_2343 = &l_2337;
    int *l_2344 = &g_37;
    int *l_2345 = &l_2337;
    int *l_2346 = &g_380;
    int *l_2347 = &l_2341;
    int *l_2348 = &l_2337;
    int l_2349 = 0x9AFF0F68L;
    int *l_2350 = &g_380;
    int *l_2351 = &l_2335;
    int *l_2352 = &g_145;
    int *l_2353 = &l_2335;
    int *l_2354 = &l_2328;
    int *l_2355 = &g_145;
    short l_2356 = 0x23B0L;
    int *l_2357 = &l_2320;
    int *l_2358 = &g_145;
    int *l_2359 = &g_380;
    int *l_2360 = &l_2307;
    int l_2361 = 1L;
    int *l_2362 = (void*)0;
    int *l_2363 = &l_2341;
    int *l_2364 = &l_2335;
    int *l_2365 = &l_2361;
    int *l_2366 = &g_380;
    int l_2367 = (-1L);
    int *l_2368 = (void*)0;
    int l_2369 = (-7L);
    int *l_2370 = &l_2320;
    int *l_2371 = &l_2337;
    int *l_2372 = &l_2341;
    int *l_2373 = &l_2341;
    int *l_2374 = &g_37;
    int *l_2375 = &l_2335;
    int *l_2376 = (void*)0;
    int *l_2377 = &l_2337;
    int *l_2378 = &l_2337;
    int *l_2379 = &l_2307;
    int *l_2380 = &g_380;
    int *l_2381 = (void*)0;
    int *l_2382 = &l_2349;
    int *l_2383 = &l_2369;
    int *l_2384 = &g_37;
    int *l_2385 = (void*)0;
    int *l_2386 = (void*)0;
    int *l_2387 = &g_37;
    int *l_2388 = (void*)0;
    int *l_2389 = &l_2328;
    int *l_2390 = &l_2325;
    int *l_2391 = &l_2367;
    int *l_2392 = &l_2349;
    int *l_2393 = &g_380;
    int *l_2394 = &l_2320;
    int l_2395 = 0x46740E6DL;
    int l_2396 = 1L;
    int *l_2397 = (void*)0;
    int *l_2398 = &l_2337;
    int *l_2399 = &l_2337;
    int *l_2400 = &l_2361;
    int *l_2401 = (void*)0;
    int *l_2402 = (void*)0;
    int *l_2403 = &l_2325;
    int *l_2404 = &l_2367;
    int *l_2405 = &l_2335;
    int *l_2406 = &l_2367;
    int *l_2407 = &l_2328;
    int *l_2408 = &g_145;
    int *l_2409 = &l_2369;
    int *l_2410 = &l_2361;
    int *l_2411 = &g_145;
    int *l_2412 = &l_2367;
    int *l_2413 = (void*)0;
    int l_2414 = 0xA22D7244L;
    int *l_2415 = &l_2414;
    int *l_2416 = &l_2414;
    int *l_2417 = (void*)0;
    int l_2418 = 0x624E669DL;
    int *l_2419 = &g_380;
    int *l_2420 = &l_2341;
    int *l_2421 = &l_2349;
    int *l_2422 = &l_2361;
    int *l_2423 = &g_380;
    int *l_2424 = &l_2335;
    int *l_2425 = &g_380;
    int *l_2426 = &l_2320;
    int *l_2427 = &l_2369;
    int l_2428 = 0x6EA018E7L;
    int l_2429 = 0x9C7C9816L;
    int *l_2430 = &l_2335;
    int *l_2431 = (void*)0;
    int *l_2432 = &l_2307;
    int *l_2433 = (void*)0;
    int *l_2434 = (void*)0;
    int *l_2435 = (void*)0;
    int *l_2436 = (void*)0;
    int *l_2437 = &l_2414;
    int *l_2438 = &l_2307;
    int *l_2439 = (void*)0;
    int *l_2440 = (void*)0;
    int *l_2441 = &l_2429;
    int *l_2442 = &l_2361;
    int *l_2443 = &l_2341;
    int *l_2444 = &g_145;
    int *l_2445 = &l_2414;
    int l_2446 = (-7L);
    int *l_2447 = &l_2369;
    int *l_2448 = &l_2396;
    int *l_2449 = &l_2325;
    int *l_2450 = (void*)0;
    int *l_2451 = &l_2349;
    int *l_2452 = &l_2325;
    int *l_2453 = &l_2428;
    int *l_2454 = &g_380;
    int *l_2455 = &l_2446;
    int *l_2456 = (void*)0;
    int l_2457 = 0x536E1ADCL;
    int *l_2458 = &l_2446;
    int *l_2459 = &l_2446;
    int *l_2460 = &l_2418;
    int *l_2461 = (void*)0;
    int *l_2462 = &l_2349;
    int *l_2463 = &l_2325;
    int *l_2464 = &l_2418;
    int *l_2465 = &l_2414;
    int *l_2466 = (void*)0;
    int l_2467 = 9L;
    int *l_2468 = &l_2367;
    int *l_2469 = &g_380;
    int *l_2470 = (void*)0;
    int *l_2471 = &l_2341;
    int *l_2472 = &g_37;
    int l_2473 = (-1L);
    int *l_2474 = &l_2341;
    int *l_2475 = (void*)0;
    int *l_2476 = &l_2341;
    int *l_2477 = &l_2349;
    int l_2478 = (-1L);
    int *l_2479 = (void*)0;
    int *l_2480 = &l_2337;
    int *l_2481 = &g_145;
    int *l_2482 = &l_2367;
    int *l_2483 = &l_2337;
    int *l_2484 = &l_2337;
    int *l_2485 = &l_2446;
    int *l_2486 = &l_2349;
    int *l_2487 = &l_2307;
    int *l_2488 = &l_2428;
    int *l_2489 = &l_2335;
    int *l_2490 = &l_2418;
    int *l_2491 = &l_2428;
    int *l_2492 = &l_2414;
    int l_2493 = 0L;
    int *l_2494 = &l_2467;
    int *l_2495 = &l_2428;
    int *l_2496 = &l_2320;
    int *l_2497 = &l_2307;
    int *l_2499 = &l_2429;
    int *l_2500 = &l_2478;
    int *l_2501 = &l_2428;
    int *l_2502 = &l_2493;
    int *l_2503 = (void*)0;
    int l_2505 = 0x840FD82EL;
    int *l_2507 = &l_2320;
    int *l_2508 = &l_2446;
    int l_2509 = 3L;
    int *l_2510 = &l_2478;
    int *l_2511 = (void*)0;
    int *l_2512 = &l_2428;
    int l_2513 = 0xCB2429F0L;
    (*g_2297) = l_2295;

    ;
    --g_2514;
    return (***g_514);
}







static int func_72(char p_73, long long p_74, unsigned long long * p_75)
{
    long long l_82 = 0xAC8E9BDCCB4F7BC7LL;
    int *l_83 = &g_37;
    int l_237 = 0L;
    int l_347 = 1L;
    int l_425 = 0x6CFC32C8L;
    int l_427 = (-4L);
    int l_455 = 0x2775CE7BL;
    int l_471 = 0x8DE2D49EL;
    unsigned l_483 = 0UL;
    short *l_496 = &g_96;
    short **l_495 = &l_496;
    unsigned l_842 = 0xBCB418E0L;
    unsigned char *l_846 = &g_258;
    int l_1259 = 0x0E779F0AL;
    int l_1271 = 0x87871CD3L;
    int l_1272 = 0x54291C4EL;
    unsigned **l_1352 = &g_383;
    unsigned long long l_1364 = 18446744073709551615UL;
    unsigned char ***l_1649 = &g_515;
    short l_1674 = (-6L);
    short l_1706 = 0L;
    int *l_1707 = (void*)0;
    unsigned **l_2030 = &g_383;
    int l_2174 = 0x55EEFA90L;
    if ((p_74 , ((safe_lshift_func_int8_t_s_s(l_82, (((*l_83) |= l_82) <= 0xC392AD58L))) == (p_73 > ((void*)0 == l_83)))))
    {
        unsigned l_99 = 5UL;
        unsigned l_102 = 0x68B20CE9L;
        short l_146 = 0x8DBDL;
        int *l_147 = &g_145;
        int l_174 = (-7L);
        int l_183 = 0x403E3ABEL;
        int l_192 = 0x98E3433BL;
        long long l_285 = 0xDBF4B4AC7E9961A2LL;
        unsigned long long l_309 = 0UL;
        unsigned *l_370 = &l_99;
        int l_430 = 0x4FC0F73CL;
        int l_476 = 0x65208B08L;
        char *l_522 = (void*)0;
        char **l_521 = &l_522;
        int *l_796 = &l_347;
        int *l_797 = (void*)0;
        int *l_798 = &l_183;
        int *l_799 = &l_237;
        int *l_800 = &l_427;
        int *l_801 = (void*)0;
        int *l_802 = &l_427;
        int *l_803 = &l_347;
        int *l_804 = &g_145;
        int *l_805 = &l_427;
        int *l_806 = &l_347;
        int *l_807 = &l_347;
        int *l_808 = &g_37;
        int *l_809 = &l_427;
        int *l_810 = &l_425;
        int *l_811 = &l_455;
        int *l_812 = (void*)0;
        int *l_813 = &l_427;
        int *l_814 = (void*)0;
        int *l_815 = &l_183;
        int *l_816 = &g_380;
        int *l_817 = &l_347;
        int *l_818 = &g_145;
        int *l_819 = &g_145;
        int *l_820 = &g_37;
        int *l_821 = &l_237;
        int *l_822 = &g_380;
        int *l_823 = &l_192;
        int *l_824 = &l_237;
        int *l_825 = &l_471;
        int *l_826 = &l_425;
        int *l_827 = &g_145;
        int *l_828 = &l_427;
        int *l_829 = &g_145;
        int *l_830 = &l_455;
        int *l_831 = &l_471;
        int *l_832 = &l_427;
        int *l_833 = &l_237;
        int *l_834 = &l_476;
        int *l_835 = &l_455;
        int *l_836 = &l_192;
        int *l_837 = &g_37;
        int *l_838 = (void*)0;
        int *l_839 = &l_455;
        int *l_840 = &l_347;
        int *l_841 = &l_192;
        for (p_74 = 0; (p_74 > (-14)); p_74--)
        {
            unsigned l_88 = 5UL;
            unsigned long long *l_92 = &g_35;
            unsigned long long **l_91 = &l_92;
            unsigned long long ***l_93 = &l_91;
            short *l_95 = &g_96;
            char *l_100 = &g_101;
            long long *l_161 = (void*)0;
            long long *l_162 = &g_133;
            unsigned l_170 = 0x03AD1870L;
            int l_182 = 0x88299C91L;
            int l_198 = 0x09C17E67L;
            int l_203 = 0x20BE38E8L;
            int *l_254 = &g_37;
            unsigned char l_259 = 0x0CL;
            if ((safe_add_func_uint8_t_u_u(((((l_88 | (((safe_add_func_int32_t_s_s(0x9BED5D29L, ((((*l_93) = l_91) == (p_73 , g_94)) != ((*l_95) = 0x003FL)))) != ((*l_83) <= 0x6BL)) || (safe_add_func_int32_t_s_s((g_37 |= (((*l_100) |= (((1UL || l_99) & 18446744073709551615UL) | g_35)) <= p_73)), g_20)))) != 0L) ^ p_74) , l_102), p_74)))
            {
                unsigned *l_105 = &l_88;
                int l_106 = 0x4F57033CL;
                int *l_108 = &l_106;
                int *l_109 = (void*)0;
                int *l_110 = &l_106;
                int *l_111 = &g_37;
                int *l_112 = &g_37;
                (*l_83) |= (((safe_lshift_func_uint16_t_u_s((((*l_105) = ((*p_75) > p_74)) >= 4294967295UL), (l_106 &= (!p_73)))) >= (safe_unary_minus_func_int16_t_s(p_74))) & 0UL);
                (*l_83) = g_96;
                g_113++;
                if (l_99)
                    continue;
            }
            else
            {
                long long *l_130 = &l_82;
                long long *l_131 = (void*)0;
                long long *l_132 = &g_133;
                int l_142 = 0x28FC8EE3L;
                (*g_116) = &g_37;
                (*l_83) = (safe_mod_func_int64_t_s_s((255UL <= (g_37 < (g_113 , (g_35 > g_96)))), p_74));
                if (((safe_lshift_func_int8_t_s_u(0x7EL, (&g_101 == (void*)0))) || ((*p_75) <= (safe_mod_func_int16_t_s_s(0x57C3L, ((0xCEL >= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((*l_132) = ((*l_130) &= ((+0x32560637L) < (safe_mod_func_uint64_t_u_u(0x550D74AE622E340DLL, (*l_83)))))), (*p_75))), 7))) , l_99))))))
                {
                    int l_143 = (-1L);
                    (*g_144) = ((safe_lshift_func_int8_t_s_u(g_20, (l_99 & (((safe_lshift_func_uint16_t_u_s(0xFF8DL, 14)) , (((-1L) <= (l_88 , l_102)) != (safe_lshift_func_uint16_t_u_u(p_73, 1)))) | (safe_sub_func_int8_t_s_s((p_73 , (((*l_83) = (g_101 , (**g_116))) , p_74)), l_142)))))) | l_143);
                    (*l_83) ^= l_143;
                    (*g_117) ^= (~l_146);
                }
                else
                {
                    (*g_148) = l_147;

                    ;
                    g_149 = (void*)0;
                }

                ;
                return p_73;
            }
            l_83 = (*g_116);
            if ((((safe_sub_func_int8_t_s_s((-1L), 0xCFL)) , (g_101 , 6L)) >= (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(65534UL, (safe_mod_func_uint16_t_u_u(p_74, (safe_unary_minus_func_int64_t_s(((safe_add_func_uint16_t_u_u(65531UL, ((((*l_162) = (0UL < 65535UL)) <= 1L) == p_73))) , (*l_83)))))))), (*l_83)))))
            {
                short l_169 = 0xCED0L;
                int l_234 = 0x2A416096L;
                int l_235 = 0L;
                char l_297 = 0x38L;
                (*g_117) &= (safe_mod_func_uint8_t_u_u((+(safe_add_func_int8_t_s_s(p_74, (safe_mod_func_int16_t_s_s(0x345EL, ((*l_95) = l_169)))))), l_170));
                for (p_73 = (-7); (p_73 < (-10)); p_73 = safe_sub_func_uint32_t_u_u(p_73, 1))
                {
                    int *l_173 = &g_145;
                    int *l_175 = (void*)0;
                    int *l_176 = &g_37;
                    int *l_177 = &g_37;
                    int *l_178 = &g_145;
                    int *l_179 = &g_37;
                    int *l_180 = &g_145;
                    int *l_181 = (void*)0;
                    int *l_184 = &g_145;
                    int *l_185 = &l_182;
                    int *l_186 = &l_182;
                    int *l_187 = &g_37;
                    int *l_188 = &g_145;
                    int *l_189 = &l_182;
                    int *l_190 = &l_182;
                    int *l_191 = (void*)0;
                    int *l_193 = &l_182;
                    int *l_194 = &g_37;
                    int *l_195 = &l_183;
                    int *l_196 = &g_37;
                    int *l_197 = &g_37;
                    int *l_199 = &g_145;
                    int *l_200 = &l_192;
                    int *l_201 = &g_145;
                    int *l_202 = (void*)0;
                    int l_204 = 0x3B259310L;
                    int *l_205 = &l_203;
                    int *l_206 = &l_198;
                    int *l_207 = &l_182;
                    int *l_208 = &l_203;
                    int *l_209 = &l_182;
                    int *l_210 = &l_203;
                    int *l_211 = &l_192;
                    int *l_212 = &l_198;
                    int *l_213 = &l_183;
                    int *l_214 = &l_183;
                    int *l_215 = &g_145;
                    int *l_216 = &l_183;
                    int *l_217 = &l_203;
                    int *l_218 = &l_192;
                    int *l_219 = &l_203;
                    int *l_220 = &l_204;
                    int *l_221 = &g_145;
                    int *l_222 = (void*)0;
                    int *l_223 = &l_203;
                    int *l_224 = &l_192;
                    int *l_225 = &l_198;
                    int l_226 = 1L;
                    int *l_227 = &l_182;
                    int *l_228 = &l_198;
                    int *l_229 = &l_183;
                    int *l_230 = &g_37;
                    int *l_231 = (void*)0;
                    int *l_232 = &l_198;
                    int *l_233 = &l_204;
                    int *l_236 = &g_145;
                    int *l_238 = (void*)0;
                    int *l_239 = &g_145;
                    int *l_240 = &l_183;
                    int *l_241 = (void*)0;
                    int l_242 = 0xF84FEBECL;
                    int *l_243 = &l_226;
                    int *l_244 = &l_242;
                    int *l_245 = (void*)0;
                    int *l_246 = &l_198;
                    int *l_247 = &l_182;
                    int *l_248 = &g_145;
                    unsigned short *l_269 = &g_270;
                    g_249++;
                    for (l_192 = (-7); (l_192 >= 24); l_192++)
                    {
                        unsigned *l_255 = &l_170;
                        unsigned char *l_256 = (void*)0;
                        unsigned char *l_257 = &g_258;
                        int l_261 = 1L;
                        int **l_264 = &l_241;
                        l_254 = (void*)0;

                        ;
                        (*l_264) = ((((*l_255) ^= g_37) , (((((g_101 ^ (((*l_257) ^= p_74) , l_259)) , (p_73 <= (safe_unary_minus_func_uint8_t_u(((p_74 <= l_261) || ((safe_sub_func_uint64_t_u_u((g_101 < (*l_83)), (-5L))) ^ 1L)))))) , p_73) , g_249) ^ 0xC9F1C089L)) , (void*)0);
                        if ((**g_116))
                            break;
                    }
                    (*l_243) |= ((l_182 , (((safe_sub_func_int8_t_s_s((*l_83), 0xF7L)) == (safe_rshift_func_uint16_t_u_u(((*l_269) = g_101), (g_96 | (g_35 , (*l_147)))))) != g_258)) && (safe_lshift_func_uint16_t_u_u((&l_254 != &l_210), g_258)));
                    if ((*l_83))
                    {
                        short *l_283 = &l_146;
                        unsigned char *l_284 = &g_258;
                        (*l_247) |= (safe_sub_func_int32_t_s_s((**g_116), (((*l_284) = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((1L & ((*p_75) = (((*l_95) = ((safe_mod_func_uint32_t_u_u(g_133, l_169)) | (safe_sub_func_int16_t_s_s(p_74, p_73)))) | ((((*l_283) ^= 2L) , ((g_270 <= (*l_147)) ^ 0xDFF1L)) > 0x0524414FL)))), 3)), (*l_147))) <= 0xF050L)) && l_285)));
                        return (*g_117);
                    }
                    else
                    {
                        unsigned *l_296 = &l_99;
                        int l_304 = 0x4C4AE1A5L;
                        (*l_224) ^= (**g_148);
                        (*l_177) = ((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((*l_100) = (safe_mod_func_int32_t_s_s((*g_144), ((*l_296) &= (p_73 & (g_101 | (safe_sub_func_int8_t_s_s(0L, p_74)))))))) & (((***l_93) = g_145) | (0UL > ((l_297 == 0L) >= (-1L))))), 0x39025BF7L)) <= (*l_83)), 0xA39021D3DD3D9F1BLL)), p_74)) >= (*l_83));
                        (*l_189) = (**g_116);
                        (*l_195) |= (((((3UL < (0xEDFDEEC52BA2822ELL && ((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((**l_91) = (safe_rshift_func_int16_t_s_u((p_73 , (*l_147)), g_258))), l_304)) , p_74), 7L)) & (safe_add_func_int32_t_s_s((**g_148), l_304))))) != g_37) ^ (*l_83)) ^ 0xC0L) | g_101);
                    }
                }

                ;
            }
            else
            {
                (*l_254) = (*g_117);
                (*l_147) |= p_73;
            }

            ;
        }
        for (l_237 = 29; (l_237 < (-22)); l_237 = safe_sub_func_int64_t_s_s(l_237, 1))
        {
            unsigned char l_349 = 0x4FL;
            int *l_381 = (void*)0;
            int l_407 = 0xA4B412E4L;
            int l_410 = 0L;
            unsigned l_482 = 0xDC5E032EL;
            unsigned long long **l_537 = (void*)0;
            unsigned long long ***l_536 = &l_537;
            unsigned short l_646 = 7UL;
            int l_741 = 3L;
            int l_743 = (-5L);
            int l_745 = 0L;
            int l_746 = (-7L);
            unsigned char l_775 = 0x2BL;
        }
        --l_842;
        return p_73;
    }
    else
    {
        int l_845 = 0L;
        unsigned **l_862 = &g_383;
        int l_874 = 0x04298FA6L;
        int l_892 = 1L;
        int l_937 = (-4L);
        int l_962 = (-1L);
        int l_1030 = 1L;
        unsigned l_1566 = 0x7FE6A28EL;
        short l_1572 = 1L;
        short **l_1587 = (void*)0;
        unsigned ***l_1660 = (void*)0;
        unsigned ****l_1659 = &l_1660;
        unsigned ****l_1662 = &g_1661;
        char *l_1667 = &g_101;
        char *l_1668 = &g_1669;
        int **l_1671 = &l_83;
        int ***l_1670 = &l_1671;
        unsigned short *l_1677 = (void*)0;
        unsigned short *l_1680 = &g_1681;
        int l_1682 = 1L;
        unsigned long long *l_1686 = &g_1646;
        unsigned long long *l_1687 = &l_1364;
        int l_2212 = 0x464287CFL;
        int l_2246 = 0x32A43207L;
        int l_2251 = 0xE41E02F2L;
        int l_2277 = 6L;
        int l_2280 = (-3L);
        unsigned l_2288 = 0x339DCF24L;
        if (((((((p_73 > (p_74 > (l_845 , ((!(*l_83)) | ((***g_514) || 3UL))))) >= ((*g_383) = ((l_845 , l_846) != l_846))) && 1UL) >= 6L) , g_847) < l_845))
        {
            unsigned char ***l_851 = &g_515;
            int l_853 = 0L;
            unsigned **l_861 = (void*)0;
            int l_923 = 0x1DC41066L;
            int l_971 = (-4L);
            int l_986 = (-8L);
            int l_988 = 0xF3999759L;
            int l_999 = 4L;
            int l_1010 = 0x31854D72L;
            int l_1034 = 0L;
            int l_1040 = 0x2ECCB1FBL;
            long long l_1072 = 0xDA2493751AEDE9A1LL;
            short l_1115 = 0L;
            char l_1365 = 0x54L;
            unsigned *l_1581 = &l_1566;
            unsigned **l_1580 = &l_1581;
            (*g_848) = (*g_116);
            if ((safe_mod_func_int8_t_s_s(((((p_74 , &l_846) == ((*l_851) = (*g_514))) == ((void*)0 != g_852)) == p_74), p_73)))
            {
                short l_858 = 0xBBAAL;
                int l_924 = (-9L);
                int l_956 = (-5L);
                short l_1067 = 0x7426L;
                int **l_1307 = &l_83;
                (*g_117) = ((*l_83) > 0x7128L);
                if (((((((0x9C45L > (65535UL < (*l_83))) != ((++(*p_75)) && ((*p_75) = ((((safe_mod_func_int32_t_s_s((-8L), l_853)) & ((l_858 > l_858) != (safe_sub_func_uint32_t_u_u((((*g_383) = ((l_845 , l_861) != l_862)) && (**g_650)), 0x4215D6DCL)))) == 0x5DL) , l_845)))) < p_74) > g_500) > p_74) > (*l_83)))
                {
                    int *l_867 = (void*)0;
                    int *l_868 = &l_425;
                    int *l_869 = (void*)0;
                    int *l_870 = &l_853;
                    int *l_871 = (void*)0;
                    int *l_872 = &l_471;
                    int *l_873 = &l_455;
                    int *l_875 = (void*)0;
                    int *l_876 = &g_37;
                    int *l_877 = &g_380;
                    int *l_878 = &g_37;
                    int *l_879 = &g_380;
                    int *l_880 = (void*)0;
                    int *l_881 = &g_37;
                    int *l_882 = &g_37;
                    int *l_883 = &g_380;
                    int *l_884 = (void*)0;
                    int *l_885 = &l_455;
                    int l_886 = 0x4A0B1B0BL;
                    int *l_887 = &l_427;
                    int *l_888 = &l_455;
                    int *l_889 = &l_427;
                    int *l_890 = &l_427;
                    int *l_891 = &l_425;
                    int *l_893 = &l_874;
                    int *l_894 = &l_853;
                    int *l_895 = (void*)0;
                    int l_896 = (-1L);
                    int *l_897 = &l_455;
                    int *l_898 = &l_892;
                    int *l_899 = &l_892;
                    int *l_900 = &l_427;
                    int *l_901 = &l_455;
                    int *l_902 = &l_347;
                    int *l_903 = (void*)0;
                    int *l_904 = (void*)0;
                    int *l_905 = &l_347;
                    int l_906 = 0x9DC29DA8L;
                    int *l_907 = &l_347;
                    int *l_908 = &g_37;
                    int *l_909 = &l_237;
                    int *l_910 = &g_37;
                    int *l_911 = &g_37;
                    int *l_912 = &l_347;
                    int *l_913 = &l_237;
                    int *l_914 = &l_455;
                    int *l_915 = &l_455;
                    int *l_916 = &g_380;
                    int *l_917 = (void*)0;
                    int *l_918 = (void*)0;
                    int *l_919 = &l_892;
                    int *l_920 = &l_892;
                    int *l_921 = &g_380;
                    int *l_922 = &l_886;
                    int *l_925 = &g_380;
                    int *l_926 = &l_896;
                    int *l_927 = &l_425;
                    int *l_928 = &l_237;
                    int *l_929 = &l_886;
                    int *l_930 = &g_380;
                    int *l_931 = (void*)0;
                    int *l_932 = (void*)0;
                    int *l_933 = &l_896;
                    int *l_934 = &g_145;
                    int *l_935 = &g_380;
                    int *l_936 = &l_455;
                    int *l_938 = &l_237;
                    int *l_939 = &g_145;
                    int *l_940 = &l_923;
                    int *l_941 = &l_237;
                    int *l_942 = &l_886;
                    int *l_943 = (void*)0;
                    int *l_944 = &g_380;
                    int *l_945 = &l_937;
                    int *l_946 = &g_37;
                    int *l_947 = &g_37;
                    int *l_948 = &l_853;
                    int *l_949 = &l_892;
                    int *l_950 = &l_347;
                    int *l_951 = (void*)0;
                    int *l_952 = &l_924;
                    int *l_953 = &l_874;
                    int *l_954 = &l_923;
                    int *l_955 = &l_896;
                    int *l_957 = (void*)0;
                    int *l_958 = &l_237;
                    int *l_959 = (void*)0;
                    int *l_960 = (void*)0;
                    int *l_961 = &l_853;
                    int *l_963 = (void*)0;
                    int *l_964 = (void*)0;
                    int *l_965 = (void*)0;
                    int *l_966 = &l_937;
                    int *l_967 = &l_427;
                    int *l_968 = &l_425;
                    int *l_969 = &g_37;
                    int *l_970 = &l_886;
                    int *l_972 = &l_853;
                    int *l_973 = &l_347;
                    int *l_974 = &l_427;
                    int *l_975 = (void*)0;
                    int *l_976 = &l_237;
                    int *l_977 = &l_347;
                    int *l_978 = &l_892;
                    int *l_979 = &l_886;
                    int *l_980 = &l_971;
                    int *l_981 = &l_471;
                    int *l_982 = &l_427;
                    int *l_983 = &l_896;
                    int *l_984 = &l_347;
                    int *l_985 = &g_380;
                    int *l_987 = &l_347;
                    int *l_989 = &l_971;
                    int *l_990 = (void*)0;
                    int *l_991 = &l_906;
                    int *l_992 = &l_896;
                    int *l_993 = &l_347;
                    int *l_994 = &l_347;
                    int *l_995 = &l_427;
                    int *l_996 = &g_145;
                    int *l_997 = &l_906;
                    int *l_998 = &l_237;
                    int *l_1000 = &l_962;
                    int *l_1001 = &l_892;
                    int *l_1002 = &l_962;
                    int *l_1003 = &l_471;
                    int *l_1004 = &l_427;
                    int *l_1005 = &l_853;
                    int *l_1006 = &l_886;
                    int *l_1007 = &l_923;
                    int l_1008 = 0x0D8C12E8L;
                    int *l_1009 = &l_986;
                    int *l_1011 = &l_471;
                    int *l_1012 = &l_455;
                    int *l_1013 = (void*)0;
                    int *l_1014 = &l_892;
                    int *l_1015 = &l_999;
                    int *l_1016 = (void*)0;
                    int *l_1017 = (void*)0;
                    int *l_1018 = (void*)0;
                    int *l_1019 = &g_380;
                    int *l_1020 = &l_986;
                    int *l_1021 = &g_145;
                    int *l_1022 = &l_471;
                    int *l_1023 = &l_1010;
                    int *l_1024 = &l_1010;
                    int *l_1025 = &l_853;
                    int *l_1026 = &l_892;
                    int *l_1027 = &l_962;
                    int *l_1028 = &l_1010;
                    int *l_1029 = &l_999;
                    int *l_1031 = (void*)0;
                    int *l_1032 = &l_906;
                    int *l_1033 = &l_986;
                    int *l_1035 = &l_892;
                    int *l_1036 = &l_906;
                    int *l_1037 = (void*)0;
                    int *l_1038 = &l_1010;
                    int *l_1039 = &l_874;
                    int *l_1041 = &l_237;
                    int l_1042 = 0x82F9EE1BL;
                    int *l_1043 = (void*)0;
                    int *l_1044 = &l_892;
                    int *l_1045 = &l_956;
                    int *l_1046 = &l_853;
                    unsigned short l_1047 = 65527UL;
                    char *l_1062 = &g_101;
                    for (g_380 = 0; (g_380 == 27); ++g_380)
                    {
                        int *l_865 = &l_237;
                        int l_866 = 0x032C8552L;
                        l_866 &= ((*l_865) &= (**g_790));
                    }
                    --l_1047;
                    for (g_384 = 0; (g_384 < 22); g_384 = safe_add_func_int8_t_s_s(g_384, 3))
                    {
                        (*l_1027) = (safe_add_func_int32_t_s_s(p_74, (*l_83)));
                    }
                    (*l_1000) &= (safe_sub_func_uint16_t_u_u(l_924, (safe_sub_func_uint64_t_u_u((*p_75), ((l_1067 |= (safe_add_func_uint32_t_u_u(((((*g_378) <= (*g_378)) || ((*l_991) , ((+((*l_1062) = (safe_rshift_func_int8_t_s_u((-9L), 6)))) | ((safe_lshift_func_uint8_t_u_u((p_73 > (safe_rshift_func_uint8_t_u_s(((*l_83) = p_74), p_73))), 0)) == p_73)))) && g_847), p_73))) , g_20)))));
                }
                else
                {
                    int *l_1073 = &l_455;
                    int l_1107 = (-10L);
                    int l_1113 = 0L;
                    int l_1117 = 0x000E9CC1L;
                    int l_1133 = 0x0638CB48L;
                    int l_1149 = 0x9676EC6CL;
                    int l_1219 = 0L;
                    int l_1222 = 0x435B4432L;
                    int l_1246 = (-4L);
                    int l_1282 = 1L;
                    unsigned char l_1305 = 0x15L;
                    if ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(l_986, (*g_383))) >= l_1072), 2)))
                    {
                        int *l_1074 = (void*)0;
                        int *l_1075 = &g_37;
                        int *l_1076 = &l_988;
                        int *l_1077 = &l_956;
                        int *l_1078 = &l_1034;
                        int *l_1079 = (void*)0;
                        int *l_1080 = &l_1010;
                        int *l_1081 = (void*)0;
                        int *l_1082 = (void*)0;
                        int *l_1083 = (void*)0;
                        int *l_1084 = (void*)0;
                        int *l_1085 = &l_1034;
                        int *l_1086 = &l_892;
                        int *l_1087 = &l_1030;
                        int *l_1088 = &l_427;
                        int *l_1089 = (void*)0;
                        int *l_1090 = (void*)0;
                        int *l_1091 = &l_1040;
                        int *l_1092 = &l_1010;
                        int *l_1093 = &l_425;
                        int *l_1094 = &l_1034;
                        int *l_1095 = &l_1010;
                        int *l_1096 = &l_1030;
                        int *l_1097 = &l_427;
                        int *l_1098 = &g_145;
                        int *l_1099 = &l_425;
                        int *l_1100 = (void*)0;
                        int *l_1101 = &l_853;
                        int *l_1102 = &l_1010;
                        int *l_1103 = &l_874;
                        int *l_1104 = &l_962;
                        int *l_1105 = &l_937;
                        int *l_1106 = (void*)0;
                        int *l_1108 = &l_986;
                        int *l_1109 = &l_427;
                        int *l_1110 = &l_425;
                        int *l_1111 = &l_892;
                        int *l_1112 = &l_999;
                        int *l_1114 = (void*)0;
                        int *l_1116 = &l_347;
                        int *l_1118 = (void*)0;
                        int *l_1119 = (void*)0;
                        int *l_1120 = &l_427;
                        int *l_1121 = &l_999;
                        int *l_1122 = &l_427;
                        int *l_1123 = &l_962;
                        int *l_1124 = &l_853;
                        int *l_1125 = &g_380;
                        int *l_1126 = &l_937;
                        int *l_1127 = (void*)0;
                        int *l_1128 = (void*)0;
                        int *l_1129 = (void*)0;
                        int *l_1130 = &l_924;
                        int *l_1131 = &l_971;
                        int *l_1132 = &l_986;
                        int *l_1134 = &l_1030;
                        int *l_1135 = &l_455;
                        int *l_1136 = &l_999;
                        int *l_1137 = (void*)0;
                        int *l_1138 = &l_455;
                        int *l_1139 = &g_145;
                        int *l_1140 = &l_924;
                        int *l_1141 = (void*)0;
                        int *l_1142 = &l_1010;
                        int *l_1143 = &l_1040;
                        int *l_1144 = &l_1034;
                        int *l_1145 = (void*)0;
                        int *l_1146 = &g_145;
                        int *l_1147 = &l_937;
                        int *l_1148 = &l_471;
                        int *l_1150 = &l_1034;
                        int *l_1151 = &l_1133;
                        int *l_1152 = &l_237;
                        int *l_1153 = &l_1040;
                        int l_1154 = 0x559F8177L;
                        int *l_1155 = (void*)0;
                        int *l_1156 = &l_427;
                        int *l_1157 = (void*)0;
                        int *l_1158 = &l_956;
                        int *l_1159 = &l_471;
                        int *l_1160 = (void*)0;
                        int *l_1161 = &l_1107;
                        int l_1162 = (-1L);
                        int *l_1163 = &g_145;
                        int *l_1164 = (void*)0;
                        int *l_1165 = &l_988;
                        int *l_1166 = &l_1010;
                        int *l_1167 = &l_425;
                        int *l_1168 = &l_237;
                        int *l_1169 = (void*)0;
                        int *l_1170 = (void*)0;
                        int *l_1171 = &l_956;
                        int *l_1172 = &l_1154;
                        int *l_1173 = &l_1162;
                        int *l_1174 = &l_999;
                        int *l_1175 = &l_956;
                        int *l_1176 = &l_1107;
                        int *l_1177 = &l_237;
                        int *l_1178 = &l_1113;
                        int *l_1179 = &l_455;
                        int *l_1180 = &l_1107;
                        int *l_1181 = &g_37;
                        int *l_1182 = (void*)0;
                        int *l_1183 = &l_1034;
                        int *l_1184 = &g_37;
                        int *l_1185 = (void*)0;
                        int *l_1186 = &l_962;
                        int *l_1187 = &l_455;
                        int *l_1188 = (void*)0;
                        int *l_1189 = &g_37;
                        int *l_1190 = &l_237;
                        int *l_1191 = &l_962;
                        int *l_1192 = &l_427;
                        int *l_1193 = &g_380;
                        int *l_1194 = &l_853;
                        int *l_1195 = &l_425;
                        int *l_1196 = &l_988;
                        int *l_1197 = &l_347;
                        int *l_1198 = &l_956;
                        int *l_1199 = &l_425;
                        int *l_1200 = &l_1040;
                        int *l_1201 = &l_956;
                        int *l_1202 = &l_988;
                        int *l_1203 = &l_427;
                        int *l_1204 = &l_956;
                        int *l_1205 = (void*)0;
                        int *l_1206 = (void*)0;
                        int *l_1207 = &l_1133;
                        int *l_1208 = &l_971;
                        int l_1209 = 0L;
                        int *l_1210 = &l_1107;
                        int *l_1211 = &l_427;
                        int *l_1212 = (void*)0;
                        int *l_1213 = &l_1030;
                        int *l_1214 = &l_1162;
                        int *l_1215 = (void*)0;
                        int *l_1216 = &l_455;
                        int *l_1217 = &l_999;
                        int *l_1218 = &l_971;
                        int *l_1220 = &l_853;
                        int *l_1221 = &l_962;
                        int *l_1223 = &l_937;
                        int *l_1224 = &l_1030;
                        int *l_1225 = (void*)0;
                        int *l_1226 = &l_1107;
                        int *l_1227 = &l_1162;
                        int *l_1228 = &l_1154;
                        int *l_1229 = (void*)0;
                        int *l_1230 = (void*)0;
                        int *l_1231 = &l_923;
                        int *l_1232 = (void*)0;
                        int *l_1233 = &l_999;
                        int *l_1234 = &l_347;
                        int *l_1235 = &l_347;
                        int *l_1236 = (void*)0;
                        int *l_1237 = &l_962;
                        int *l_1238 = &l_471;
                        int *l_1239 = &l_1113;
                        int *l_1240 = &l_999;
                        int *l_1241 = &g_37;
                        int *l_1242 = &l_924;
                        int *l_1243 = (void*)0;
                        int *l_1244 = &l_956;
                        int *l_1245 = &l_1010;
                        int *l_1247 = &g_145;
                        int *l_1248 = &l_1107;
                        int *l_1249 = &l_1040;
                        int *l_1250 = (void*)0;
                        int *l_1251 = &l_986;
                        int *l_1252 = &l_1222;
                        int *l_1253 = &g_145;
                        int *l_1254 = &l_1030;
                        int *l_1255 = &l_962;
                        int *l_1256 = &l_1149;
                        int *l_1257 = &l_237;
                        int *l_1258 = &l_853;
                        int *l_1260 = &l_1010;
                        int *l_1261 = &l_853;
                        int *l_1262 = (void*)0;
                        int *l_1263 = (void*)0;
                        int *l_1264 = (void*)0;
                        int *l_1265 = &l_937;
                        int *l_1266 = &g_380;
                        int *l_1267 = &l_455;
                        int *l_1268 = &l_986;
                        int *l_1269 = &l_999;
                        int *l_1270 = &l_427;
                        int *l_1273 = &l_1113;
                        int *l_1274 = &l_1149;
                        int *l_1275 = &l_1162;
                        int *l_1276 = &l_988;
                        int *l_1277 = &l_347;
                        int *l_1278 = &l_971;
                        int *l_1279 = (void*)0;
                        int *l_1280 = &l_1222;
                        int *l_1281 = (void*)0;
                        int *l_1283 = &l_455;
                        int *l_1284 = &l_892;
                        int *l_1285 = &l_1246;
                        int *l_1286 = &l_999;
                        int *l_1287 = &l_1133;
                        int *l_1288 = &l_924;
                        int *l_1289 = &l_1149;
                        int *l_1290 = &g_380;
                        int *l_1291 = &l_425;
                        int *l_1292 = &l_988;
                        int **l_1296 = &l_1120;
                        (*g_116) = l_1073;

                        ;
                        --g_1293;
                        (*l_1296) = &l_1271;

                        ;
                    }
                    else
                    {
                        unsigned *l_1304 = &l_483;
                        unsigned **l_1303 = &l_1304;
                        int l_1306 = 0x2C9171E5L;
                        l_1306 = ((*l_83) = (safe_lshift_func_uint16_t_u_u(((g_258 <= (3UL < (safe_add_func_int16_t_s_s((0x0321L || (((*l_1073) ^= ((**g_116) <= (p_74 == ((*l_496) = (((safe_rshift_func_int8_t_s_s((((*g_378) = ((((*l_1303) = &g_1293) != &g_1293) , l_845)) && ((*g_383) || 0x4CCFA370L)), p_74)) , l_861) == l_862))))) >= l_1305)), 0x5D6DL)))) & 0L), l_874)));

                        ;
                    }

                    ;
                }

                ;
                (*l_1307) = &l_874;

                ;
            }
            else
            {
                unsigned l_1314 = 0xBEA3B012L;
                int l_1325 = 8L;
                int l_1335 = 0x7336C030L;
                unsigned l_1348 = 0x0D0751B9L;
                unsigned **l_1351 = &g_383;
                int l_1447 = 0L;
                int l_1450 = 2L;
                int l_1455 = (-1L);
                int l_1458 = 0x57CDF1BCL;
                int l_1465 = (-1L);
                int l_1477 = 0x7CD13A49L;
                int l_1510 = 0L;
                unsigned long long l_1596 = 0xDB7CCC3086E3F7EBLL;
                int *l_1597 = &l_999;
                if (((*l_83) = (safe_lshift_func_uint8_t_u_s(249UL, g_20))))
                {
                    unsigned ***l_1353 = &l_861;
                    int *l_1366 = &g_145;
                    int *l_1367 = &l_347;
                    int *l_1368 = &l_999;
                    int *l_1369 = &l_988;
                    int *l_1370 = (void*)0;
                    int *l_1371 = (void*)0;
                    int *l_1372 = &l_874;
                    int *l_1373 = &l_471;
                    int *l_1374 = &l_425;
                    int *l_1375 = &l_427;
                    int *l_1376 = &l_1010;
                    int *l_1377 = &l_1271;
                    int *l_1378 = &l_1259;
                    int *l_1379 = (void*)0;
                    int *l_1380 = &l_455;
                    int *l_1381 = &l_1335;
                    int *l_1382 = (void*)0;
                    int *l_1383 = &l_1335;
                    int *l_1384 = (void*)0;
                    int *l_1385 = (void*)0;
                    int *l_1386 = (void*)0;
                    int *l_1387 = &g_145;
                    int *l_1388 = &l_455;
                    int *l_1389 = (void*)0;
                    int *l_1390 = &l_347;
                    int *l_1391 = &g_380;
                    int *l_1392 = &g_380;
                    int *l_1393 = &l_1040;
                    int *l_1394 = &l_853;
                    int *l_1395 = &l_1335;
                    int *l_1396 = &l_971;
                    int *l_1397 = &l_1325;
                    int *l_1398 = &l_971;
                    int *l_1399 = &l_986;
                    int *l_1400 = &l_937;
                    int *l_1401 = &l_1272;
                    int *l_1402 = &l_892;
                    int *l_1403 = &l_962;
                    int *l_1404 = &l_237;
                    int l_1405 = (-9L);
                    int *l_1406 = &l_347;
                    int *l_1407 = &l_986;
                    int *l_1408 = &l_1335;
                    int *l_1409 = &l_892;
                    int *l_1410 = &g_145;
                    int *l_1411 = &l_1259;
                    int *l_1412 = (void*)0;
                    int *l_1413 = (void*)0;
                    int *l_1414 = (void*)0;
                    int *l_1415 = &l_1271;
                    int *l_1416 = &l_1259;
                    int *l_1417 = (void*)0;
                    int *l_1418 = &l_425;
                    int *l_1419 = &l_986;
                    int *l_1420 = &l_853;
                    int *l_1421 = (void*)0;
                    int *l_1422 = &l_986;
                    int *l_1423 = &l_1034;
                    int *l_1424 = &l_1405;
                    int *l_1425 = &l_853;
                    int *l_1426 = &l_1335;
                    int *l_1427 = &l_1325;
                    int *l_1428 = &l_1040;
                    int *l_1429 = &g_145;
                    int *l_1430 = &l_986;
                    int *l_1431 = &l_1271;
                    int *l_1432 = &l_427;
                    int *l_1433 = &l_1405;
                    int *l_1434 = &l_237;
                    int *l_1435 = &g_145;
                    int *l_1436 = &l_971;
                    int *l_1437 = &l_237;
                    int *l_1438 = &g_37;
                    int *l_1439 = &l_1405;
                    int *l_1440 = (void*)0;
                    int *l_1441 = &l_1010;
                    int *l_1442 = &l_1272;
                    int *l_1443 = &l_962;
                    int *l_1444 = (void*)0;
                    int *l_1445 = &l_347;
                    int *l_1446 = &l_1271;
                    int *l_1448 = &l_923;
                    int *l_1449 = &l_986;
                    int *l_1451 = (void*)0;
                    int *l_1452 = &l_1447;
                    int *l_1453 = &l_237;
                    int *l_1454 = &l_971;
                    int *l_1456 = &l_1335;
                    int *l_1457 = &g_145;
                    int *l_1459 = &l_427;
                    int *l_1460 = (void*)0;
                    int *l_1461 = &l_923;
                    int *l_1462 = &l_853;
                    int *l_1463 = (void*)0;
                    int *l_1464 = &l_1030;
                    int *l_1466 = &l_1010;
                    int *l_1467 = (void*)0;
                    int *l_1468 = &l_1030;
                    int *l_1469 = &l_471;
                    int *l_1470 = (void*)0;
                    int *l_1471 = &g_145;
                    int *l_1472 = &l_237;
                    int *l_1473 = &l_853;
                    int *l_1474 = &l_1030;
                    int *l_1475 = &g_145;
                    int *l_1476 = &l_1405;
                    int *l_1478 = &l_1477;
                    int *l_1479 = &g_145;
                    int *l_1480 = &l_874;
                    int *l_1481 = &l_962;
                    int *l_1482 = &l_1010;
                    int *l_1483 = (void*)0;
                    int *l_1484 = &l_427;
                    int *l_1485 = &l_1325;
                    int *l_1486 = &l_1325;
                    int *l_1487 = &l_923;
                    int *l_1488 = &l_1272;
                    int *l_1489 = (void*)0;
                    int *l_1490 = (void*)0;
                    int *l_1491 = &l_892;
                    int *l_1492 = &l_1030;
                    int *l_1493 = &l_1465;
                    int *l_1494 = &g_145;
                    int *l_1495 = &l_347;
                    int *l_1496 = &g_145;
                    int *l_1497 = (void*)0;
                    int *l_1498 = &l_1030;
                    int *l_1499 = &l_1271;
                    int *l_1500 = &l_988;
                    int *l_1501 = &l_1447;
                    int *l_1502 = &l_971;
                    int *l_1503 = &l_1335;
                    int *l_1504 = &l_999;
                    int *l_1505 = (void*)0;
                    int *l_1506 = &l_1450;
                    int *l_1507 = &l_1405;
                    int *l_1508 = &l_1465;
                    int *l_1509 = &l_853;
                    int *l_1511 = &g_37;
                    int *l_1512 = &g_37;
                    int *l_1513 = &g_380;
                    int *l_1514 = &g_380;
                    int *l_1515 = &l_1034;
                    int *l_1516 = &l_1405;
                    int *l_1517 = &l_1272;
                    int *l_1518 = &l_1272;
                    int *l_1519 = &l_923;
                    int *l_1520 = &l_892;
                    int *l_1521 = &l_1034;
                    int *l_1522 = &l_853;
                    int *l_1523 = &l_1325;
                    int *l_1524 = &l_1259;
                    for (l_455 = 0; (l_455 != 7); l_455 = safe_add_func_uint8_t_u_u(l_455, 6))
                    {
                        int *l_1312 = &l_853;
                        int *l_1313 = &g_380;
                        int *l_1317 = &l_853;
                        int *l_1318 = &l_962;
                        int *l_1319 = (void*)0;
                        int *l_1320 = &l_999;
                        int *l_1321 = &l_892;
                        int *l_1322 = &l_237;
                        int *l_1323 = &l_999;
                        int *l_1324 = &l_1034;
                        int *l_1326 = (void*)0;
                        int *l_1327 = &g_37;
                        int *l_1328 = &l_962;
                        int *l_1329 = (void*)0;
                        int *l_1330 = (void*)0;
                        int *l_1331 = &l_1325;
                        int *l_1332 = &l_1034;
                        int *l_1333 = &l_1272;
                        int *l_1334 = &l_892;
                        int *l_1336 = &l_1335;
                        int *l_1337 = &l_347;
                        int *l_1338 = &l_1325;
                        int *l_1339 = &l_237;
                        int *l_1340 = &l_999;
                        int *l_1341 = &l_1040;
                        int *l_1342 = (void*)0;
                        int *l_1343 = &l_892;
                        int *l_1344 = &l_971;
                        int *l_1345 = (void*)0;
                        char l_1346 = (-1L);
                        int *l_1347 = &l_1030;
                        ++l_1314;
                        if (p_74)
                            break;
                        (*g_144) = (((*p_75) & (p_74 != ((void*)0 != &g_379))) < ((*l_1313) = p_73));
                        --l_1348;
                    }
                    (*g_117) = (l_1351 == ((*l_1353) = l_1352));

                    ;
                    (*l_1367) &= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((((((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((*p_75) & ((18446744073709551615UL ^ l_1314) >= (safe_sub_func_int64_t_s_s(((l_874 = (l_1364 |= ((*l_83) = p_73))) > ((*l_1366) = (p_74 , ((g_35 , l_1335) && (l_1365 || (*g_498)))))), g_258)))) , (*l_83)) , 0xE0A3F096L), p_73)), p_74)) , (*p_75)) , l_1034) && 5UL) , (***g_514)), l_1010)), 10));
                    g_1526++;
                }
                else
                {
                    char l_1562 = 0xE9L;
                    l_1455 ^= (safe_add_func_uint64_t_u_u((p_74 , (*p_75)), ((void*)0 == &l_1348)));
                    (*g_117) |= p_73;
                    (*g_117) = p_73;
                    if ((*l_83))
                    {
                        int *l_1531 = &l_874;
                        int *l_1532 = (void*)0;
                        int *l_1533 = &l_988;
                        int l_1534 = 0x725E487FL;
                        int *l_1535 = &l_1259;
                        int *l_1536 = (void*)0;
                        int *l_1537 = &l_455;
                        int *l_1538 = (void*)0;
                        int *l_1539 = &l_986;
                        int *l_1540 = &l_1040;
                        int *l_1541 = &l_427;
                        int *l_1542 = (void*)0;
                        int l_1543 = 0xE6528346L;
                        int *l_1544 = &g_380;
                        int *l_1545 = &l_923;
                        int *l_1546 = &l_1465;
                        int *l_1547 = (void*)0;
                        int *l_1548 = &l_892;
                        int *l_1549 = &l_892;
                        int *l_1550 = &l_999;
                        int *l_1551 = &g_145;
                        int *l_1552 = &l_999;
                        int *l_1553 = (void*)0;
                        int *l_1554 = &l_237;
                        int *l_1555 = &l_1465;
                        int *l_1556 = &l_986;
                        int *l_1557 = &l_1510;
                        int *l_1558 = &l_923;
                        int l_1559 = 0x09775F64L;
                        int *l_1560 = (void*)0;
                        int *l_1561 = &l_1543;
                        int *l_1563 = &l_1040;
                        int *l_1564 = &l_1465;
                        int *l_1565 = &l_1259;
                        int **l_1569 = &l_1539;
                        --l_1566;
                        (*l_1569) = &l_1271;

                        ;
                    }
                    else
                    {
                        int **l_1573 = (void*)0;
                        int **l_1574 = &g_117;
                        int **l_1575 = &l_83;
                        char *l_1584 = &l_1365;
                        unsigned char *l_1585 = &g_1586;
                        short ***l_1588 = &l_495;
                        unsigned long long *l_1595 = (void*)0;
                        unsigned long long **l_1594 = &l_1595;
                        (*l_1575) = ((safe_sub_func_uint64_t_u_u(l_1572, 0x288732BDFBE3CA87LL)) , ((*l_1574) = &l_1259));

                        ;
                        ;
                        l_874 = (safe_mod_func_int8_t_s_s(((((((*l_1585) = ((safe_add_func_uint64_t_u_u((((**g_515) = ((*g_378) || (((*g_378) = l_971) , ((void*)0 == l_1580)))) > l_1566), (7UL > l_1562))) ^ (65533UL < (safe_add_func_int64_t_s_s(((((*l_1584) = 0xFBL) && 0x83L) , (-6L)), 9UL))))) || 0L) <= (*p_75)) ^ p_73) && (**g_515)), g_249));
                        (*l_1588) = l_1587;

                        ;
                        (*g_117) = ((((p_74 , (*g_383)) >= (*g_383)) && g_145) < ((**g_497) ^= (0L & (safe_unary_minus_func_int16_t_s((~(((((safe_lshift_func_int8_t_s_u(((***g_514) < l_874), 1)) == (safe_add_func_uint16_t_u_u((+l_971), (((*l_1594) = &g_35) == (void*)0)))) || (*p_75)) >= l_1596) ^ (*g_378))))))));

                        ;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                ;
                (*l_1597) = ((*l_83) = (**g_520));
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            int **l_1598 = &l_83;
            int l_1599 = 1L;
            int *l_1600 = &l_962;
            int *l_1601 = (void*)0;
            int *l_1602 = &l_962;
            int *l_1603 = (void*)0;
            int *l_1604 = &l_425;
            int *l_1605 = (void*)0;
            int *l_1606 = &g_145;
            int *l_1607 = &l_962;
            int *l_1608 = &l_1030;
            int *l_1609 = &l_1272;
            int *l_1610 = (void*)0;
            int *l_1611 = &l_874;
            int *l_1612 = &l_427;
            int *l_1613 = &l_455;
            int *l_1614 = &l_892;
            int *l_1615 = (void*)0;
            int *l_1616 = (void*)0;
            int *l_1617 = (void*)0;
            int *l_1618 = &l_427;
            int *l_1619 = (void*)0;
            int *l_1620 = &g_380;
            char l_1621 = 0x82L;
            int *l_1622 = &l_1259;
            int *l_1623 = (void*)0;
            int *l_1624 = &l_874;
            int *l_1625 = &g_37;
            int *l_1626 = &l_962;
            int *l_1627 = &l_874;
            int *l_1628 = &l_1272;
            int *l_1629 = &l_937;
            int *l_1630 = &g_380;
            int *l_1631 = &g_37;
            int *l_1632 = &l_962;
            int *l_1633 = &l_1599;
            int *l_1634 = &l_455;
            int *l_1635 = &l_471;
            int *l_1636 = &l_1259;
            int l_1637 = 0L;
            int *l_1638 = &g_380;
            int *l_1639 = &g_145;
            int *l_1640 = &l_471;
            int *l_1641 = &l_1637;
            int *l_1642 = &g_145;
            int *l_1643 = &l_237;
            int *l_1644 = (void*)0;
            int *l_1645 = &g_145;
            (*l_1598) = (void*)0;

            ;
            --g_1646;
            (*l_1622) |= 0L;
            if ((+(l_1649 != l_1649)))
            {
                return (**g_650);
            }
            else
            {
                unsigned short ***l_1651 = (void*)0;
                unsigned short ***l_1652 = &g_1650;
                unsigned short *l_1655 = &g_20;
                unsigned short **l_1654 = &l_1655;
                unsigned short ***l_1653 = &l_1654;
                int l_1658 = 1L;
                (*l_1653) = ((*l_1652) = g_1650);

                ;
                (*l_1626) = ((((*p_75) = ((-2L) < ((1UL || l_962) ^ (0x54AE15AA89EB6071LL < (safe_mod_func_uint16_t_u_u((~l_1658), (((*l_1649) == (void*)0) , l_962))))))) , l_496) != l_496);
            }
        }

        ;
        ;
        ;
        (*g_117) = (((g_35 & (((*l_1659) = &l_862) != ((*l_1662) = ((4UL <= p_73) , g_1661)))) != (safe_mod_func_int16_t_s_s(l_845, (safe_sub_func_uint32_t_u_u(((((*l_1668) = ((*l_1667) = l_1572)) , (g_1646 > ((((*l_1670) = &l_83) != &l_83) > p_74))) < (*g_383)), p_73))))) | 0x4CL);

        ;
        (*g_117) ^= (*g_144);
        if (((((*p_75) | ((*g_378) = (*g_378))) == ((safe_rshift_func_int16_t_s_s(l_1674, (**g_497))) == ((safe_add_func_int64_t_s_s((p_74 ^= ((((*l_1680) &= (--g_270)) >= p_73) > l_1682)), 0xE58260C0D1A64FC7LL)) <= ((*l_1687) &= (((((*l_1686) = ((l_455 = ((l_427 = (safe_add_func_uint32_t_u_u(1UL, (((*l_1660) = (g_1685 = &g_383)) != &g_383)))) & 0xC97AB2C5L)) <= (*g_383))) >= 0xAB6039C44E11C666LL) > 1UL) >= (*g_516)))))) >= g_258))
        {
            int *l_1688 = &l_1030;
            unsigned *l_1699 = &l_842;
            unsigned **l_1698 = &l_1699;
            unsigned ***l_1697 = &l_1698;
            int l_1716 = 1L;
            int l_1797 = 1L;
            int l_1850 = 1L;
            unsigned long long *l_1889 = &l_1364;
            short *l_1899 = &l_1706;
            int l_2006 = 1L;
            int l_2009 = 0L;
            unsigned short l_2136 = 65535UL;
            (*l_1671) = (*g_356);

            ;
            l_83 = (void*)0;

            ;
            (*l_1688) = ((*g_117) ^= (0L == p_73));
            if ((p_73 > p_74))
            {
                int l_1729 = (-7L);
                int l_1767 = 0x07A6A757L;
                int l_1813 = 0xFC35F7DAL;
                unsigned long long l_1872 = 2UL;
                int l_1875 = 1L;
                for (p_74 = 20; (p_74 != 28); p_74++)
                {
                    (**l_1670) = (*g_848);

                    ;
                }

                ;
                if ((**g_356))
                {
                    unsigned short l_1691 = 65532UL;
                    int l_1732 = 0x735651F9L;
                    int l_1820 = 0x813B8D17L;
                    int l_1843 = 2L;
                    int l_1864 = 0x52FC7D4AL;
                    if (l_1691)
                    {
                        unsigned l_1696 = 4294967295UL;
                        unsigned ****l_1700 = &l_1697;
                        unsigned ***l_1701 = (void*)0;
                        int l_1705 = 9L;
                        (*g_117) = (p_74 > ((safe_rshift_func_uint16_t_u_u(((*p_75) >= (safe_lshift_func_uint8_t_u_s((l_1705 = (((l_1696 ^ ((*p_75) , ((((*l_1700) = l_1697) != l_1701) || (*l_1688)))) ^ (safe_rshift_func_uint8_t_u_s((((((p_74 < (*p_75)) <= 0x73L) || p_74) && (*l_1688)) <= g_1704), g_258))) <= 0xA4L)), 1))), 5)) != l_1696));
                    }
                    else
                    {
                        l_1706 = 1L;
                    }
                    if ((**g_116))
                    {
                        int *l_1708 = (void*)0;
                        int *l_1709 = &g_380;
                        int *l_1710 = &l_874;
                        int *l_1711 = &g_37;
                        int *l_1712 = &l_425;
                        int *l_1713 = &l_1272;
                        int *l_1714 = &l_237;
                        int *l_1715 = &g_37;
                        int *l_1717 = &l_471;
                        int *l_1718 = &l_962;
                        int *l_1719 = (void*)0;
                        int *l_1720 = &l_425;
                        int *l_1721 = &l_874;
                        int *l_1722 = (void*)0;
                        int *l_1723 = &l_455;
                        int *l_1724 = (void*)0;
                        int *l_1725 = &l_425;
                        int *l_1726 = &l_874;
                        int *l_1727 = &g_145;
                        int *l_1728 = &g_37;
                        int *l_1730 = &g_37;
                        int *l_1731 = &l_455;
                        int *l_1733 = (void*)0;
                        int *l_1734 = &l_1030;
                        int *l_1735 = &l_1259;
                        int *l_1736 = &l_425;
                        int *l_1737 = &l_427;
                        int *l_1738 = &g_145;
                        int *l_1739 = &g_380;
                        int l_1740 = 0xBC787EDEL;
                        int *l_1741 = &l_237;
                        int l_1742 = 0x03202AB1L;
                        int *l_1743 = &l_1716;
                        int *l_1744 = &l_1716;
                        int *l_1745 = (void*)0;
                        int *l_1746 = &l_892;
                        int *l_1747 = &l_471;
                        int *l_1748 = &l_1740;
                        int *l_1749 = (void*)0;
                        int *l_1750 = (void*)0;
                        int *l_1751 = (void*)0;
                        int *l_1752 = &l_471;
                        int *l_1753 = &l_1716;
                        int *l_1754 = (void*)0;
                        int *l_1755 = (void*)0;
                        int *l_1756 = &l_1742;
                        int *l_1757 = &l_937;
                        int *l_1758 = &l_1716;
                        int *l_1759 = &l_892;
                        int *l_1760 = &l_1272;
                        int *l_1761 = &l_471;
                        int *l_1762 = &l_1729;
                        int *l_1763 = &l_892;
                        int *l_1764 = &g_37;
                        int *l_1765 = &l_962;
                        int *l_1766 = &l_347;
                        int *l_1768 = &g_380;
                        int *l_1769 = &l_1767;
                        int *l_1770 = &l_1030;
                        int *l_1771 = &l_347;
                        int *l_1772 = (void*)0;
                        int *l_1773 = &g_380;
                        int *l_1774 = &l_1740;
                        int l_1775 = (-5L);
                        int *l_1776 = &l_1740;
                        int *l_1777 = &l_427;
                        int *l_1778 = &l_347;
                        int *l_1779 = &l_1742;
                        int *l_1780 = &l_1716;
                        int *l_1781 = &l_1272;
                        int *l_1782 = &l_1259;
                        int *l_1783 = &l_892;
                        int *l_1784 = &l_237;
                        int *l_1785 = &l_1742;
                        int *l_1786 = (void*)0;
                        int *l_1787 = (void*)0;
                        int *l_1788 = &l_237;
                        int l_1789 = (-1L);
                        int *l_1790 = &l_1716;
                        int *l_1791 = &l_1767;
                        int *l_1792 = &l_455;
                        int *l_1793 = &l_455;
                        int *l_1794 = &l_1271;
                        int *l_1795 = &l_1272;
                        int *l_1796 = (void*)0;
                        int *l_1798 = (void*)0;
                        int *l_1799 = (void*)0;
                        int *l_1800 = (void*)0;
                        int *l_1801 = &l_937;
                        int *l_1802 = &g_145;
                        int l_1803 = 0x42612CB2L;
                        int *l_1804 = (void*)0;
                        int *l_1805 = &l_1740;
                        int *l_1806 = &l_1775;
                        int *l_1807 = &l_874;
                        int *l_1808 = &l_1729;
                        int *l_1809 = (void*)0;
                        int *l_1810 = &l_1775;
                        int *l_1811 = &l_962;
                        int *l_1812 = (void*)0;
                        int *l_1814 = (void*)0;
                        int *l_1815 = &l_237;
                        int *l_1816 = &l_427;
                        int *l_1817 = &l_237;
                        int *l_1818 = &l_1259;
                        int *l_1819 = &l_1030;
                        int *l_1821 = &l_1030;
                        int *l_1822 = &l_1729;
                        int *l_1823 = &l_1729;
                        int *l_1824 = &l_1803;
                        int *l_1825 = (void*)0;
                        int *l_1826 = (void*)0;
                        int *l_1827 = &l_237;
                        int *l_1828 = &l_1729;
                        int *l_1829 = &l_1732;
                        int *l_1830 = &l_892;
                        int *l_1831 = (void*)0;
                        int *l_1832 = (void*)0;
                        int *l_1833 = &l_237;
                        int *l_1834 = &l_1813;
                        int *l_1835 = &l_455;
                        int *l_1836 = &g_380;
                        int *l_1837 = &l_874;
                        int *l_1838 = &l_1775;
                        int l_1839 = 0xB0AF07FBL;
                        int *l_1840 = &l_1716;
                        int *l_1841 = &l_237;
                        int *l_1842 = &l_1740;
                        int *l_1844 = &l_1820;
                        int *l_1845 = &l_1789;
                        int *l_1846 = &l_1767;
                        int *l_1847 = &l_1732;
                        int l_1848 = 0L;
                        int *l_1849 = (void*)0;
                        int *l_1851 = (void*)0;
                        int *l_1852 = (void*)0;
                        int *l_1853 = &l_1272;
                        int *l_1854 = &l_427;
                        int *l_1855 = (void*)0;
                        int *l_1856 = (void*)0;
                        int *l_1857 = &g_145;
                        int *l_1858 = &l_425;
                        int *l_1859 = &l_1797;
                        int *l_1860 = &g_37;
                        int *l_1861 = &l_1030;
                        int *l_1862 = &l_237;
                        int *l_1863 = &l_1740;
                        int *l_1865 = &l_962;
                        int *l_1866 = &l_1259;
                        int *l_1867 = (void*)0;
                        int *l_1868 = &l_962;
                        (*l_1671) = l_1707;

                        ;
                        g_1869++;
                        (**g_116) |= 0L;
                    }
                    else
                    {
                        return l_1872;


                    }

                    ;
                    (**l_1670) = &l_471;

                    ;
                }
                else
                {
                    (*l_1688) ^= ((safe_sub_func_uint64_t_u_u((&p_74 == &g_133), ((p_73 > l_1875) != p_74))) , 0x20F6EE7BL);
                }

                ;
                (**g_148) = (*g_144);
            }
            else
            {
                unsigned l_1880 = 0xE2DD5054L;
                long long *l_1885 = &l_82;
                int l_1886 = 1L;
                int l_1997 = 0L;
                int l_2004 = 0x2EC13822L;
                (**l_1670) = &l_1797;

                ;
                (*l_1671) = &l_1716;

                ;
                if (((**g_650) != (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u((p_74 | (l_1880 & (((*l_83) ^ ((((*g_378) | ((l_1886 = ((*l_1688) = ((*l_1885) ^= (safe_add_func_int8_t_s_s((((1L == (**l_1671)) & (*l_1688)) , l_1880), p_74))))) & (*g_378))) && 0x7C21E2B8L) >= (*g_117))) | (*g_117)))), 5L)), 4))))
                {
                    unsigned *l_1890 = &g_1891;
                    unsigned *l_1892 = (void*)0;
                    int l_1893 = 0L;
                    int l_1894 = 8L;
                    (*l_1688) ^= (((255UL & (((l_1893 &= (3UL > ((((safe_add_func_int8_t_s_s(l_1880, (&g_116 != &g_355))) & (l_1889 == p_75)) < ((*l_1890) |= ((*g_383) = (**l_1671)))) , ((*l_1667) |= g_1704)))) , 65531UL) >= l_1894)) , (*p_75)) || (*p_75));
                }
                else
                {
                    unsigned char l_2024 = 1UL;
                    unsigned **l_2029 = (void*)0;
                    (*g_116) = &l_455;

                    ;
                    if ((safe_unary_minus_func_int64_t_s(((void*)0 == g_1896))))
                    {
                        (*g_117) = ((*g_378) != (!(l_1899 == ((*g_497) = (void*)0))));

                        ;
                    }
                    else
                    {
                        int *l_1900 = &l_1886;
                        int *l_1901 = &l_1850;
                        int *l_1902 = &l_471;
                        int *l_1903 = (void*)0;
                        int *l_1904 = (void*)0;
                        int *l_1905 = (void*)0;
                        int *l_1906 = (void*)0;
                        int *l_1907 = &l_425;
                        int *l_1908 = &l_1716;
                        int *l_1909 = &g_145;
                        int *l_1910 = &l_455;
                        int *l_1911 = (void*)0;
                        int *l_1912 = &l_1271;
                        int *l_1913 = &l_1797;
                        int *l_1914 = (void*)0;
                        int *l_1915 = &l_427;
                        int *l_1916 = &l_1272;
                        int *l_1917 = &g_37;
                        int *l_1918 = &l_1271;
                        int l_1919 = 0xBD95A018L;
                        int *l_1920 = &l_1259;
                        int *l_1921 = &l_937;
                        int *l_1922 = &l_1919;
                        int *l_1923 = (void*)0;
                        int *l_1924 = &l_1716;
                        int *l_1925 = &l_1030;
                        int *l_1926 = &l_237;
                        int *l_1927 = (void*)0;
                        int *l_1928 = &l_1272;
                        int l_1929 = 0x270C69F2L;
                        int *l_1930 = &l_1919;
                        int *l_1931 = &l_1850;
                        int *l_1932 = &l_455;
                        int *l_1933 = &l_962;
                        int *l_1934 = &l_874;
                        int *l_1935 = &l_1797;
                        int *l_1936 = &l_962;
                        int *l_1937 = &l_937;
                        int *l_1938 = &l_1929;
                        int *l_1939 = &l_455;
                        int *l_1940 = &l_1271;
                        int *l_1941 = &l_455;
                        int *l_1942 = &l_427;
                        int *l_1943 = &g_380;
                        int *l_1944 = (void*)0;
                        int *l_1945 = &l_1919;
                        int *l_1946 = &g_145;
                        int *l_1947 = &l_425;
                        int *l_1948 = &l_237;
                        int *l_1949 = &l_455;
                        int *l_1950 = (void*)0;
                        int *l_1951 = &l_1929;
                        int *l_1952 = &l_937;
                        int *l_1953 = &l_1919;
                        int *l_1954 = &l_874;
                        int *l_1955 = &g_37;
                        int *l_1956 = &l_1030;
                        int *l_1957 = (void*)0;
                        int *l_1958 = &l_937;
                        int *l_1959 = &l_471;
                        int *l_1960 = (void*)0;
                        int *l_1961 = &l_1919;
                        int *l_1962 = &l_1919;
                        int *l_1963 = (void*)0;
                        int *l_1964 = &l_347;
                        int *l_1965 = &l_237;
                        int *l_1966 = &l_874;
                        int *l_1967 = &l_892;
                        int *l_1968 = (void*)0;
                        int *l_1969 = &l_427;
                        int *l_1970 = &l_425;
                        int *l_1971 = &l_937;
                        int *l_1972 = &l_892;
                        int *l_1973 = &l_937;
                        int *l_1974 = &l_1850;
                        int *l_1975 = &g_145;
                        int *l_1976 = &l_237;
                        int *l_1977 = &g_380;
                        int *l_1978 = (void*)0;
                        int *l_1979 = &l_1929;
                        int *l_1980 = &l_1886;
                        int *l_1981 = &l_1716;
                        int *l_1982 = &l_892;
                        int *l_1983 = &l_892;
                        int *l_1984 = (void*)0;
                        int *l_1985 = (void*)0;
                        int *l_1986 = &l_1850;
                        int *l_1987 = &l_1929;
                        int *l_1988 = &l_1259;
                        int *l_1989 = &l_1271;
                        int *l_1990 = (void*)0;
                        int *l_1991 = &g_380;
                        int *l_1992 = &l_1716;
                        int *l_1993 = (void*)0;
                        int *l_1994 = &l_892;
                        int *l_1995 = (void*)0;
                        int *l_1996 = &g_145;
                        int *l_1998 = &l_1797;
                        int *l_1999 = &l_1271;
                        int *l_2000 = &l_1850;
                        int *l_2001 = &g_145;
                        int *l_2002 = &l_1886;
                        int *l_2003 = &g_37;
                        int *l_2005 = &l_425;
                        int *l_2007 = &l_962;
                        int *l_2008 = &l_2006;
                        int *l_2010 = &l_1850;
                        int *l_2011 = &l_1030;
                        int *l_2012 = &l_892;
                        int *l_2013 = &l_471;
                        int *l_2014 = &l_2009;
                        int *l_2015 = &l_1850;
                        int *l_2016 = &l_2004;
                        int *l_2017 = &l_1850;
                        int *l_2018 = &l_1716;
                        int *l_2019 = &l_347;
                        int *l_2020 = &l_937;
                        int *l_2021 = &l_237;
                        int *l_2022 = (void*)0;
                        int *l_2023 = &l_455;
                        (*l_1688) &= p_74;
                        --l_2024;
                        g_497 = &g_498;
                        (*l_1974) = (**l_1671);
                    }

                    ;
                    (*l_1671) = (*g_848);

                    ;
                    if (((p_74 , (safe_mod_func_int64_t_s_s(((g_96 , (**g_650)) < ((((**l_1659) = l_2029) == l_2030) | (*l_1688))), ((*l_1885) &= (((((safe_mod_func_uint8_t_u_u(((***l_1649)--), (*l_1688))) && ((((*g_117) < 0x1595C248L) || 4294967295UL) , 255UL)) >= p_73) != (*g_378)) != 3UL))))) , 1L))
                    {
                        int **l_2035 = &l_1688;
                        (*l_1671) = (**l_1670);
                        (*l_2035) = ((*l_1671) = &l_1272);

                        ;
                        ;
                    }
                    else
                    {
                        int *l_2036 = (void*)0;
                        int *l_2037 = &l_2009;
                        int *l_2038 = &l_1271;
                        int *l_2039 = &g_37;
                        int *l_2040 = &l_1259;
                        int *l_2041 = (void*)0;
                        int *l_2042 = &l_471;
                        int *l_2043 = (void*)0;
                        int *l_2044 = (void*)0;
                        int *l_2045 = &g_145;
                        int *l_2046 = &l_237;
                        int *l_2047 = &l_1030;
                        int *l_2048 = &l_1030;
                        int *l_2049 = (void*)0;
                        int *l_2050 = &l_237;
                        int *l_2051 = &l_1716;
                        int *l_2052 = (void*)0;
                        int *l_2053 = &l_1886;
                        int *l_2054 = &l_2006;
                        int *l_2055 = &l_2004;
                        int *l_2056 = &l_962;
                        int *l_2057 = &l_347;
                        int *l_2058 = &l_2006;
                        int *l_2059 = &l_347;
                        int *l_2060 = &g_145;
                        int *l_2061 = &l_1716;
                        int *l_2062 = (void*)0;
                        int *l_2063 = &l_1716;
                        int *l_2064 = &l_347;
                        int *l_2065 = &l_237;
                        int *l_2066 = &g_145;
                        int *l_2067 = &l_2009;
                        int *l_2068 = (void*)0;
                        int *l_2069 = &l_1850;
                        int *l_2070 = &l_2004;
                        int *l_2071 = &l_892;
                        int *l_2072 = &g_145;
                        int *l_2073 = &l_2004;
                        int *l_2074 = &l_455;
                        int *l_2075 = &l_1259;
                        int *l_2076 = &l_1259;
                        int *l_2077 = &l_2006;
                        int *l_2078 = &l_237;
                        int *l_2079 = &l_937;
                        int *l_2080 = &l_1271;
                        int *l_2081 = &g_380;
                        int *l_2082 = &g_145;
                        int *l_2083 = &l_471;
                        int *l_2084 = &l_1797;
                        int *l_2085 = (void*)0;
                        int *l_2086 = (void*)0;
                        int *l_2087 = &l_1030;
                        int *l_2088 = &l_1030;
                        int *l_2089 = &l_892;
                        int *l_2090 = &l_455;
                        int *l_2091 = &l_1886;
                        int *l_2092 = &l_874;
                        int l_2093 = (-7L);
                        int *l_2094 = &l_1272;
                        int *l_2095 = &l_347;
                        int *l_2096 = &l_1886;
                        int *l_2097 = &l_1886;
                        int *l_2098 = &l_1716;
                        int *l_2099 = &g_145;
                        int *l_2100 = &l_2004;
                        int *l_2101 = &l_237;
                        int *l_2102 = &l_2004;
                        int *l_2103 = (void*)0;
                        int *l_2104 = &l_2006;
                        int *l_2105 = &g_37;
                        int *l_2106 = &l_1271;
                        int *l_2107 = (void*)0;
                        int *l_2108 = &l_937;
                        int *l_2109 = &l_1271;
                        int *l_2110 = &g_145;
                        int *l_2111 = &l_1797;
                        int *l_2112 = &l_425;
                        int *l_2113 = &l_1716;
                        int *l_2114 = (void*)0;
                        int *l_2115 = &g_380;
                        int *l_2116 = &l_1886;
                        int *l_2117 = &l_471;
                        int *l_2118 = (void*)0;
                        int *l_2119 = (void*)0;
                        int *l_2120 = &l_1886;
                        int *l_2121 = (void*)0;
                        int *l_2122 = &l_1997;
                        int *l_2123 = &l_2093;
                        int *l_2124 = &l_1797;
                        int *l_2125 = &l_2093;
                        int *l_2126 = (void*)0;
                        int *l_2127 = &l_1030;
                        int *l_2128 = &l_427;
                        int *l_2129 = &l_1271;
                        int *l_2130 = &l_427;
                        int *l_2131 = (void*)0;
                        int *l_2132 = &l_2004;
                        int *l_2133 = (void*)0;
                        int *l_2134 = &g_145;
                        int *l_2135 = (void*)0;
                        --l_2136;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
        }
        else
        {
            unsigned ***l_2139 = &l_862;
            int l_2142 = 0xAA7E3CEBL;
            int l_2146 = 0x96935C69L;
            int l_2184 = 8L;
            int l_2190 = 1L;
            int l_2193 = 0x56E05AC5L;
            int l_2219 = 0x4C4505B5L;
            if (((void*)0 != l_2139))
            {
                int *l_2140 = &l_455;
                int *l_2141 = &l_425;
                int *l_2143 = (void*)0;
                int *l_2144 = (void*)0;
                int *l_2145 = &l_455;
                int *l_2147 = (void*)0;
                int *l_2148 = &l_1259;
                int *l_2149 = &g_380;
                int *l_2150 = &g_37;
                int *l_2151 = &l_237;
                int *l_2152 = &l_962;
                int *l_2153 = &l_892;
                int *l_2154 = &l_1271;
                int *l_2155 = &l_455;
                int *l_2156 = &l_427;
                int *l_2157 = (void*)0;
                int *l_2158 = &l_1272;
                int *l_2159 = &l_1259;
                int *l_2160 = &g_380;
                int *l_2161 = &l_2142;
                int *l_2162 = &l_471;
                int *l_2163 = &g_145;
                int *l_2164 = &l_2142;
                int *l_2165 = &l_471;
                int *l_2166 = &l_455;
                int *l_2167 = &l_892;
                int *l_2168 = &l_1259;
                int *l_2169 = (void*)0;
                int *l_2170 = &l_937;
                int *l_2171 = &l_425;
                int *l_2172 = &l_2142;
                int *l_2173 = &l_2146;
                int *l_2175 = &l_237;
                int *l_2176 = &g_145;
                int *l_2177 = &l_874;
                int *l_2178 = &l_1030;
                int *l_2179 = &l_962;
                int *l_2180 = &l_427;
                int *l_2181 = &l_874;
                int *l_2182 = &l_1271;
                int *l_2183 = &l_874;
                int *l_2185 = (void*)0;
                int l_2186 = 0L;
                int *l_2187 = &l_455;
                int *l_2188 = &l_874;
                int *l_2189 = &l_1259;
                int *l_2191 = &l_2186;
                int *l_2192 = &l_2190;
                int *l_2194 = &l_425;
                int *l_2195 = &l_874;
                int *l_2196 = &l_2174;
                int *l_2197 = &l_892;
                int l_2198 = 0x14F106D8L;
                int *l_2199 = &l_874;
                int *l_2200 = (void*)0;
                int *l_2201 = &g_37;
                int *l_2202 = (void*)0;
                int *l_2203 = (void*)0;
                int *l_2204 = &l_455;
                int *l_2205 = (void*)0;
                int *l_2206 = &l_425;
                int *l_2207 = (void*)0;
                int *l_2208 = (void*)0;
                int *l_2209 = &g_380;
                int *l_2210 = (void*)0;
                int *l_2211 = &l_962;
                int *l_2213 = &l_2193;
                int *l_2214 = &l_2198;
                int *l_2215 = &l_2142;
                int *l_2216 = &l_874;
                int *l_2217 = &l_2186;
                int *l_2218 = &l_937;
                int *l_2220 = &l_962;
                int *l_2221 = &l_892;
                int *l_2222 = &l_2186;
                int *l_2223 = &l_237;
                int *l_2224 = &l_2193;
                int *l_2225 = &l_237;
                int l_2226 = (-6L);
                int *l_2227 = &g_145;
                int *l_2228 = (void*)0;
                int *l_2229 = &l_2174;
                int *l_2230 = (void*)0;
                int *l_2231 = &l_874;
                int *l_2232 = &l_2174;
                int *l_2233 = &g_37;
                int *l_2234 = &l_2212;
                int *l_2235 = &g_37;
                int *l_2236 = &l_962;
                int *l_2237 = &g_380;
                int *l_2238 = &l_2198;
                int *l_2239 = &g_145;
                int *l_2240 = &l_2212;
                int *l_2241 = &l_1030;
                int *l_2242 = &l_347;
                int *l_2243 = &l_347;
                int *l_2244 = &l_962;
                int *l_2245 = &g_145;
                int *l_2247 = &l_471;
                int *l_2248 = &g_380;
                int *l_2249 = &l_2174;
                int *l_2250 = &l_2186;
                int *l_2252 = &l_2226;
                int *l_2253 = &l_427;
                int *l_2254 = &l_874;
                int *l_2255 = (void*)0;
                int *l_2256 = &l_892;
                int *l_2257 = &g_145;
                int *l_2258 = &l_455;
                int *l_2259 = &l_874;
                int *l_2260 = &l_2212;
                int *l_2261 = &l_2174;
                int *l_2262 = &l_892;
                int *l_2263 = &l_2193;
                int *l_2264 = (void*)0;
                int *l_2265 = &l_1259;
                int *l_2266 = &l_2146;
                int *l_2267 = &l_2174;
                int *l_2268 = (void*)0;
                int *l_2269 = &l_2184;
                int *l_2270 = (void*)0;
                int *l_2271 = (void*)0;
                int *l_2272 = &l_427;
                int *l_2273 = &l_892;
                int *l_2274 = &g_37;
                int *l_2275 = &l_2190;
                int *l_2276 = &l_455;
                int *l_2278 = &l_2146;
                int *l_2279 = &l_2193;
                int *l_2281 = &l_425;
                int *l_2282 = &l_1259;
                int *l_2283 = &l_237;
                int *l_2284 = &l_2251;
                int *l_2285 = &l_2246;
                int *l_2286 = &l_2186;
                int *l_2287 = &l_962;
                ++l_2288;
                (*l_2177) = ((**g_1897) , 3L);
            }
            else
            {
                for (l_2251 = (-9); (l_2251 != 5); ++l_2251)
                {
                    (**l_1670) = (*g_520);

                    ;
                }

                ;
                (**l_1670) = (*g_790);

                ;
            }

            ;
            return p_74;


        }


        ;
        ;
    }


    ;
    ;
    ;
    return p_73;


}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_380, "g_380", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    transparent_crc(g_1293, "g_1293", print_hash_value);
    transparent_crc(g_1525, "g_1525", print_hash_value);
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1586, "g_1586", print_hash_value);
    transparent_crc(g_1646, "g_1646", print_hash_value);
    transparent_crc(g_1669, "g_1669", print_hash_value);
    transparent_crc(g_1681, "g_1681", print_hash_value);
    transparent_crc(g_1704, "g_1704", print_hash_value);
    transparent_crc(g_1869, "g_1869", print_hash_value);
    transparent_crc(g_1891, "g_1891", print_hash_value);
    transparent_crc(g_2294, "g_2294", print_hash_value);
    transparent_crc(g_2498, "g_2498", print_hash_value);
    transparent_crc(g_2504, "g_2504", print_hash_value);
    transparent_crc(g_2506, "g_2506", print_hash_value);
    transparent_crc(g_2514, "g_2514", print_hash_value);
    transparent_crc(g_2521, "g_2521", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
