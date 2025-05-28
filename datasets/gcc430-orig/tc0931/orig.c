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
   short f0;
   unsigned f1;
   const short f2;
   unsigned char f3;
   const signed f4 : 26;
};


static char g_8 = 0xEDL;
static unsigned g_10 = 0x45559507L;
static int g_50 = 0x5706B379L;
static int g_57 = 0xE80A7C6DL;
static unsigned long long g_65 = 0x2633933B839BF5BFLL;
static char g_74 = 0xD0L;
static char g_76 = 0x55L;
static unsigned char g_80 = 0x0DL;
static unsigned char g_82 = 1UL;
static unsigned g_86 = 0x37D9CC13L;
static long long g_90 = 1L;
static unsigned char g_91 = 0xCAL;
static union U0 g_93 = {0x4446L};
static union U0 *g_92 = &g_93;
static unsigned g_97 = 8UL;
static long long g_99 = 0xD3F58F29ADBE56F6LL;
static int g_120 = 0x1BDB030FL;
static unsigned char g_132 = 1UL;
static int *g_146 = &g_57;
static unsigned g_188 = 1UL;
static const char g_199 = 0x7EL;
static union U0 g_203 = {0x2D78L};
static unsigned long long g_206 = 0x0EB54A4BB2EE2B33LL;
static short g_266 = 0xCF6EL;
static unsigned short g_271 = 65535UL;
static short **g_297 = (void*)0;
static unsigned g_318 = 18446744073709551611UL;
static int g_354 = 0x4ADBFCEAL;
static int * const g_358 = &g_354;
static int g_376 = 0L;
static unsigned long long g_388 = 1UL;
static char **g_403 = (void*)0;
static unsigned *g_484 = &g_318;
static unsigned **g_483 = &g_484;
static unsigned ***g_482 = &g_483;
static unsigned * const *g_531 = (void*)0;
static short ***g_544 = (void*)0;
static unsigned g_624 = 0x66065819L;
static const unsigned long long *g_628 = &g_65;
static const unsigned long long ** const g_627 = &g_628;
static long long g_767 = 0x47D33763558134D8LL;
static unsigned short g_768 = 0UL;
static const unsigned g_829 = 1UL;
static int g_862 = 5L;
static unsigned g_872 = 0xA357A342L;
static unsigned g_883 = 0xF6B40288L;
static short g_989 = (-1L);
static int g_991 = 0x7EE9314EL;
static unsigned char g_1001 = 7UL;
static int g_1071 = 1L;
static short *g_1079 = &g_203.f0;
static long long *g_1119 = &g_99;
static int **g_1133 = &g_146;
static int ***g_1132 = &g_1133;
static unsigned short g_1264 = 7UL;
static unsigned char g_1283 = 0x16L;
static unsigned short g_1494 = 0x193CL;
static short g_1566 = 1L;
static long long g_1570 = 9L;
static unsigned long long g_1576 = 18446744073709551615UL;
static char g_1653 = 0x8EL;
static unsigned long long g_1668 = 2UL;
static long long g_1735 = 0L;
static unsigned long long g_1737 = 18446744073709551615UL;
static unsigned short g_1831 = 0x9CBAL;
static char * const g_1843 = &g_1653;
static char * const *g_1842 = &g_1843;
static char * const **g_1841 = &g_1842;
static const unsigned g_1859 = 0x67C7DF4CL;
static short g_1903 = 0L;
static unsigned long long g_1928 = 1UL;
static const int g_2051 = (-1L);
static const int g_2053 = (-7L);
static const int *g_2052 = &g_2053;
static char g_2191 = 1L;
static unsigned long long g_2224 = 18446744073709551611UL;
static long long g_2263 = 0L;
static short g_2311 = 0x89D6L;
static unsigned g_2480 = 0x5ED2907AL;
static short g_2607 = 0xE907L;
static long long g_2613 = 0x57E9380A7642833CLL;
static char g_2638 = 0x8DL;
static int g_2652 = 7L;
static unsigned long long g_2658 = 0x5E9C6C6B54617907LL;
static unsigned g_2697 = 4294967295UL;
static const int g_2712 = 0x2DB238D6L;
static unsigned char g_2736 = 0xC2L;
static unsigned long long g_2839 = 0x3366BDA52191064ALL;
static unsigned g_3000 = 0x25E089CAL;
static char g_3071 = 0xB4L;
static unsigned long long *g_3077 = (void*)0;
static short ****g_3107 = &g_544;
static short *****g_3106 = &g_3107;
static long long g_3176 = 4L;
static short g_3177 = 0x3DDDL;
static unsigned g_3200 = 1UL;
static unsigned char g_3269 = 0x2BL;
static short g_3372 = 0xBB4DL;
static unsigned g_3403 = 0x522DAE1BL;
static int *g_3510 = (void*)0;
static unsigned ****g_3583 = &g_482;
static unsigned *****g_3582 = &g_3583;
static long long g_3666 = 0x7EC7C512843A5716LL;
static unsigned short g_3698 = 0xCF3FL;
static int g_3763 = 1L;
static int g_3771 = 0L;
static char g_3774 = 0L;
static short g_3788 = 0xF5C6L;
static unsigned g_3827 = 1UL;
static int ****g_3903 = &g_1132;
static int *****g_3902 = &g_3903;
static unsigned long long g_3912 = 0xB868A38EB4CE147ELL;



static char func_1(void);
static int * func_2(unsigned p_3, short p_4, int * p_5, int * p_6, int * p_7);
static int * func_13(long long p_14, int p_15, unsigned * p_16, const short p_17, unsigned long long p_18);
static char func_21(long long p_22);
static long long func_23(unsigned long long p_24, unsigned char p_25, int * p_26, unsigned p_27, int * p_28);
static unsigned long long func_29(unsigned short p_30, long long p_31, long long p_32, int * p_33, int * p_34);
static unsigned short func_35(unsigned * p_36, unsigned char p_37, short p_38);
static unsigned * func_39(short p_40, unsigned * p_41, unsigned char p_42, unsigned long long p_43);
static unsigned * func_45(const unsigned short p_46, long long p_47, int * p_48, unsigned p_49);
static int * func_51(unsigned p_52, long long p_53);
static char func_1(void)
{
    unsigned *l_9 = &g_10;
    int l_44 = (-10L);
    unsigned l_352 = 18446744073709551615UL;
    int *l_812 = &l_44;
    long long l_3574 = 0x29B5ECAEBEA64EB5LL;
    int *l_3615 = (void*)0;
    int l_3815 = (-1L);
    int l_3817 = 4L;
    unsigned l_3867 = 0UL;
lbl_3916:
    (*g_1133) = func_2((--(*l_9)), g_8, l_9, func_13((safe_sub_func_uint16_t_u_u((func_21(func_23(func_29(func_35(func_39(l_44, func_45(g_8, (l_44 > 1L), &l_44, l_44), g_132, l_352), g_767, l_44), g_388, g_266, l_812, &l_44), g_1283, &l_44, (*l_812), &g_991)) <= 255UL), g_3176)), (*l_812), (**g_482), g_1283, l_3574), g_484);

    ;
    for (g_93.f1 = 19; (g_93.f1 < 48); g_93.f1 = safe_add_func_uint64_t_u_u(g_93.f1, 6))
    {
        unsigned l_3600 = 18446744073709551607UL;
        int l_3606 = 0x9454A95EL;
        int l_3720 = 0x02E42FD8L;
        char l_3769 = 0L;
        int l_3806 = (-1L);
        long long l_3833 = 0x85F1A18079C72422LL;
        int *l_3887 = &l_3606;
        unsigned short *l_3893 = &g_768;
        short * const **l_3897 = (void*)0;
        short * const ***l_3896 = &l_3897;
        short ****l_3898 = &g_544;
        short *****l_3899 = (void*)0;
        short *****l_3900 = &l_3898;
        unsigned *l_3901 = &g_3000;
        int ******l_3904 = (void*)0;
        int ******l_3905 = &g_3902;
        unsigned char *l_3906 = (void*)0;
        unsigned char *l_3907 = &g_3269;
    }

    for (g_2480 = 9; (g_2480 == 36); g_2480++)
    {
        if (g_1570)
            goto lbl_3916;
    }
    return (**g_1842);
}







static int * func_2(unsigned p_3, short p_4, int * p_5, int * p_6, int * p_7)
{
    const long long l_3581 = 0xFEF68AFD5F6D5084LL;
    const unsigned *** const ** const l_3584 = (void*)0;
    char * const ***l_3587 = (void*)0;
    char * const ***l_3589 = (void*)0;
    char * const ****l_3588 = &l_3589;
    unsigned short *l_3592 = &g_768;
    int *l_3593 = &g_1071;
    (***g_1132) = ((safe_rshift_func_uint8_t_u_u((((*g_1119) || (*g_1119)) || (-2L)), 6)) >= (safe_add_func_uint64_t_u_u(((l_3581 != (g_3582 == l_3584)) | ((safe_lshift_func_uint16_t_u_s((+(((*l_3588) = (l_3587 = l_3587)) == &g_1841)), 9)) == (+((safe_rshift_func_uint16_t_u_u(((*l_3592) = l_3581), l_3581)) <= (***g_1132))))), 0x82BB1978B48C5D65LL)));
    return l_3593;


}







static int * func_13(long long p_14, int p_15, unsigned * p_16, const short p_17, unsigned long long p_18)
{
    int * const l_3575 = &g_1071;
    int **l_3576 = &g_146;
    (*g_358) ^= p_15;
    (*l_3576) = l_3575;

    ;
    return (**g_1132);


}







static char func_21(long long p_22)
{
    unsigned l_2330 = 4294967290UL;
    unsigned ***l_2333 = &g_483;
    int *l_2334 = (void*)0;
    int l_2415 = (-1L);
    int l_2416 = 0xB55595C5L;
    long long l_2418 = 0xC2E069F239371FEELL;
    int l_2649 = 0L;
    int *l_2713 = &g_376;
    unsigned *l_2730 = &g_188;
    const unsigned char l_2843 = 7UL;
    short l_2870 = 0xEF9DL;
    int l_3028 = (-4L);
    int ****l_3207 = (void*)0;
    unsigned char l_3305 = 0xC3L;
    char ****l_3320 = (void*)0;
    int *l_3521 = &g_991;
    union U0 *l_3524 = &g_203;
    short * const ***l_3531 = (void*)0;
    short * const ****l_3530 = &l_3531;
    if (((safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((**g_1842), p_22)), ((safe_unary_minus_func_int16_t_s((safe_sub_func_uint64_t_u_u((**g_627), (safe_mod_func_uint64_t_u_u((*g_628), l_2330)))))) || p_22))) & (*g_1079)), 0x15L)) | func_29(((safe_sub_func_uint16_t_u_u(((&g_483 != l_2333) < p_22), (-5L))) > p_22), p_22, p_22, l_2334, l_2334)))
    {
        unsigned short l_2337 = 1UL;
        short l_2347 = 0xFAB0L;
        int *l_2348 = &g_1071;
        const long long *l_2369 = &g_99;
        const long long ** const l_2368 = &l_2369;
        int l_2390 = 0x3A698AF0L;
        int l_2536 = 0x66DF3A12L;
        int l_2551 = 0x69042B90L;
        int l_2562 = 0x861A1D75L;
        const char *l_2663 = &g_199;
        const char **l_2662 = &l_2663;
        const char ***l_2661 = &l_2662;
        short l_2677 = 0x8ED4L;
        const int *l_2882 = &l_2415;
        int *l_2931 = &g_57;
        int l_3033 = 0x206DA46FL;
        int l_3053 = 0L;
        unsigned long long l_3072 = 18446744073709551614UL;
        short ****l_3093 = &g_544;
        unsigned l_3103 = 1UL;
        unsigned l_3285 = 0x27ED2628L;
        unsigned ***l_3416 = &g_483;
        for (g_1570 = 0; (g_1570 == (-18)); g_1570 = safe_sub_func_uint16_t_u_u(g_1570, 1))
        {
            unsigned l_2338 = 0x92EC5101L;
            short *l_2340 = &g_2311;
            char l_2349 = 1L;
            char *l_2350 = (void*)0;
            char *l_2351 = &g_74;
            int *l_2352 = &g_57;
            unsigned char l_2353 = 0x7FL;
            int l_2413 = 1L;
            int l_2414 = 4L;
            int l_2417 = 0xB1E0B015L;
            int l_2812 = 4L;
            int l_2824 = 0xAE4D2AE8L;
            short l_2872 = 0xDC4AL;
            unsigned ***l_2873 = &g_483;
            int *l_3003 = &l_2649;
            int *l_3004 = &g_120;
            int *l_3005 = &l_2562;
            int *l_3006 = (void*)0;
            int *l_3007 = &l_2415;
            int *l_3008 = &g_354;
            int *l_3009 = &l_2414;
            int *l_3010 = &g_2652;
            int *l_3011 = &g_2652;
            int *l_3012 = (void*)0;
            int *l_3013 = &l_2413;
            int *l_3014 = &g_376;
            int *l_3015 = &g_120;
            int *l_3016 = &l_2414;
            int *l_3017 = &g_354;
            int *l_3018 = &g_2652;
            int *l_3019 = (void*)0;
            int *l_3020 = &g_354;
            int *l_3021 = &l_2416;
            int *l_3022 = (void*)0;
            int *l_3023 = &l_2414;
            int *l_3024 = &l_2390;
            int *l_3025 = &l_2562;
            int *l_3026 = (void*)0;
            int *l_3027 = &l_2649;
            int *l_3029 = &l_2413;
            int *l_3030 = &g_57;
            int *l_3031 = (void*)0;
            int *l_3032 = (void*)0;
            int *l_3034 = (void*)0;
            int *l_3035 = &g_376;
            int *l_3036 = &g_376;
            int *l_3037 = &l_2824;
            int *l_3038 = &l_2417;
            int *l_3039 = &l_2414;
            int *l_3040 = &l_2414;
            int *l_3041 = (void*)0;
            int *l_3042 = (void*)0;
            int *l_3043 = &g_2652;
            int *l_3044 = &g_354;
            int *l_3045 = &l_2562;
            int *l_3046 = &l_2416;
            int *l_3047 = &g_120;
            int *l_3048 = &g_1071;
            int *l_3049 = &g_1071;
            int *l_3050 = &g_1071;
            int *l_3051 = &l_2390;
            int *l_3052 = &g_57;
            unsigned char l_3054 = 0x15L;
            if (l_2353)
            {
                unsigned long long l_2410 = 0x9D9D1EAF62D76A74LL;
                int l_2559 = 0x2BBAD159L;
                int l_2572 = (-3L);
                int l_2593 = 0L;
                int l_2596 = (-1L);
                int l_2600 = 0L;
                int l_2623 = 5L;
                int l_2626 = 0x28395D81L;
                char ****l_2675 = (void*)0;
                char l_2676 = 0xD3L;
                for (g_1071 = 0; (g_1071 >= 15); g_1071 = safe_add_func_uint32_t_u_u(g_1071, 9))
                {
                    long long l_2360 = 0L;
                    unsigned char *l_2361 = &g_82;
                    int *l_2370 = &g_1071;
                    int l_2399 = 0L;
                    int l_2455 = 0xF761BCC0L;
                    int l_2657 = (-1L);
                    const char ****l_2664 = &l_2661;
                    unsigned ***l_2706 = &g_483;
                    const int *l_2711 = &g_2712;
                    if ((!(((((safe_rshift_func_uint8_t_u_u(g_376, 1)) >= (safe_sub_func_uint8_t_u_u(((*l_2361) = l_2360), ((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((func_29(((l_2368 != &g_1119) >= (p_22 < func_35((*g_483), g_1264, p_22))), p_22, (*g_1119), l_2334, l_2370) & (*l_2370)), (*g_628))) == 0x64E9L), 2)) != (*g_1843))))) == (*l_2370)) == p_22) > 0x332AL)))
                    {
                        int *l_2371 = &g_354;
                        int *l_2372 = (void*)0;
                        int *l_2373 = &g_57;
                        int *l_2374 = &g_354;
                        int *l_2375 = &g_120;
                        int *l_2376 = (void*)0;
                        int *l_2377 = &g_120;
                        int *l_2378 = &g_57;
                        int *l_2379 = &g_57;
                        int *l_2380 = &g_991;
                        int *l_2381 = &g_120;
                        int *l_2382 = &g_376;
                        int *l_2383 = &g_991;
                        int *l_2384 = &g_354;
                        int *l_2385 = &g_376;
                        int *l_2386 = &g_991;
                        int *l_2387 = &g_376;
                        int *l_2388 = &g_991;
                        int *l_2389 = &g_376;
                        int *l_2391 = &g_991;
                        int *l_2392 = (void*)0;
                        int *l_2393 = &g_991;
                        int *l_2394 = &l_2390;
                        int *l_2395 = &l_2390;
                        int *l_2396 = &g_991;
                        int *l_2397 = &g_120;
                        int *l_2398 = (void*)0;
                        int *l_2400 = &g_354;
                        int *l_2401 = (void*)0;
                        int *l_2402 = &g_354;
                        int *l_2403 = &g_376;
                        int *l_2404 = (void*)0;
                        int *l_2405 = &g_991;
                        int *l_2406 = &g_991;
                        int *l_2407 = &l_2390;
                        int *l_2408 = (void*)0;
                        int *l_2409 = &g_354;
                        int *l_2419 = (void*)0;
                        int *l_2420 = (void*)0;
                        int *l_2421 = &g_57;
                        int *l_2422 = &l_2390;
                        int *l_2423 = &g_57;
                        int *l_2424 = &g_991;
                        int *l_2425 = &g_376;
                        int *l_2426 = &l_2399;
                        int *l_2427 = (void*)0;
                        int *l_2428 = &g_57;
                        int *l_2429 = &g_991;
                        int *l_2430 = (void*)0;
                        int *l_2431 = &g_57;
                        int *l_2432 = &l_2390;
                        int *l_2433 = &l_2415;
                        int *l_2434 = (void*)0;
                        int *l_2435 = &l_2399;
                        int *l_2436 = &l_2414;
                        int *l_2437 = &g_120;
                        int *l_2438 = (void*)0;
                        int *l_2439 = (void*)0;
                        int *l_2440 = (void*)0;
                        int *l_2441 = &l_2417;
                        int *l_2442 = &l_2413;
                        int *l_2443 = &l_2415;
                        int *l_2444 = &g_354;
                        int *l_2445 = &g_376;
                        int *l_2446 = &g_120;
                        int *l_2447 = (void*)0;
                        int *l_2448 = &l_2413;
                        int *l_2449 = &g_376;
                        int *l_2450 = &g_376;
                        int *l_2451 = &g_354;
                        int *l_2452 = (void*)0;
                        int *l_2453 = &g_376;
                        int *l_2454 = &l_2416;
                        int *l_2456 = &l_2455;
                        int *l_2457 = &l_2390;
                        int *l_2458 = &l_2455;
                        int *l_2459 = &l_2416;
                        int *l_2460 = &g_991;
                        int *l_2461 = &g_57;
                        int *l_2462 = &l_2417;
                        int *l_2463 = &l_2415;
                        int *l_2464 = &g_991;
                        int *l_2465 = &g_57;
                        int *l_2466 = (void*)0;
                        int *l_2467 = &l_2413;
                        int *l_2468 = &g_376;
                        int *l_2469 = &l_2390;
                        int *l_2470 = &g_376;
                        int *l_2471 = (void*)0;
                        int l_2472 = 0x4971AA62L;
                        int l_2473 = 0L;
                        int *l_2474 = &l_2473;
                        int *l_2475 = &l_2472;
                        int *l_2476 = &l_2399;
                        int *l_2477 = &l_2472;
                        int l_2478 = 0x28E76FD8L;
                        int *l_2479 = &g_120;
                        unsigned *l_2488 = &g_86;
                        unsigned ** const l_2487 = &l_2488;
                        l_2410++;
                        if ((***g_1132))
                            continue;
                        g_2480--;
                        (*l_2391) = ((0x14FBB7A3L | ((*l_2352) = p_22)) != ((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint32_t_u_u((g_80 || p_22), func_29(p_22, ((g_531 != l_2487) <= (*g_358)), p_22, &l_2416, &l_2417))) != (**g_627)) >= (**g_627)), 7)) && 0xC0L));
                    }
                    else
                    {
                        int *l_2489 = &l_2390;
                        int *l_2490 = &l_2390;
                        int *l_2491 = &l_2416;
                        int *l_2492 = (void*)0;
                        int *l_2493 = &g_354;
                        int *l_2494 = &l_2390;
                        int *l_2495 = &g_57;
                        int *l_2496 = &l_2399;
                        int *l_2497 = &g_991;
                        int *l_2498 = &g_376;
                        int l_2499 = 0x64F6BC26L;
                        int *l_2500 = &l_2455;
                        int *l_2501 = (void*)0;
                        int l_2502 = (-10L);
                        int *l_2503 = &g_57;
                        int *l_2504 = &l_2399;
                        int *l_2505 = &l_2415;
                        int *l_2506 = &g_57;
                        int *l_2507 = &l_2414;
                        int *l_2508 = &l_2502;
                        int *l_2509 = &l_2415;
                        int *l_2510 = &g_354;
                        int *l_2511 = (void*)0;
                        int *l_2512 = &l_2413;
                        int *l_2513 = (void*)0;
                        int *l_2514 = &l_2414;
                        int *l_2515 = &g_120;
                        int *l_2516 = (void*)0;
                        int *l_2517 = &l_2413;
                        int *l_2518 = &g_354;
                        int *l_2519 = &g_991;
                        int *l_2520 = &g_57;
                        int *l_2521 = &g_991;
                        int *l_2522 = &g_376;
                        int *l_2523 = &l_2399;
                        int *l_2524 = &l_2415;
                        int *l_2525 = &l_2415;
                        int *l_2526 = &l_2417;
                        int *l_2527 = &g_120;
                        int *l_2528 = &l_2417;
                        int l_2529 = (-8L);
                        int *l_2530 = &l_2390;
                        int *l_2531 = &g_57;
                        int *l_2532 = &l_2455;
                        int *l_2533 = &l_2390;
                        int *l_2534 = &g_376;
                        int *l_2535 = &l_2455;
                        int *l_2537 = &l_2536;
                        int *l_2538 = &l_2455;
                        int *l_2539 = &g_57;
                        int *l_2540 = &l_2413;
                        int *l_2541 = &l_2416;
                        int *l_2542 = &g_120;
                        int *l_2543 = &l_2416;
                        int *l_2544 = &l_2536;
                        int *l_2545 = &l_2399;
                        int *l_2546 = &l_2414;
                        int *l_2547 = &l_2417;
                        int *l_2548 = (void*)0;
                        int *l_2549 = &l_2529;
                        int *l_2550 = &l_2417;
                        int *l_2552 = (void*)0;
                        int *l_2553 = &l_2417;
                        int *l_2554 = &l_2499;
                        int *l_2555 = &l_2390;
                        int *l_2556 = &g_376;
                        int *l_2557 = (void*)0;
                        int *l_2558 = &l_2416;
                        int *l_2560 = (void*)0;
                        int *l_2561 = (void*)0;
                        int *l_2563 = &l_2413;
                        int *l_2564 = &l_2536;
                        int *l_2565 = &l_2529;
                        int *l_2566 = &l_2399;
                        int *l_2567 = (void*)0;
                        int *l_2568 = (void*)0;
                        int *l_2569 = &g_57;
                        int *l_2570 = &g_120;
                        int *l_2571 = &l_2502;
                        int *l_2573 = &l_2502;
                        int *l_2574 = &g_57;
                        int *l_2575 = &l_2399;
                        int *l_2576 = (void*)0;
                        int *l_2577 = (void*)0;
                        int *l_2578 = &l_2562;
                        int *l_2579 = &l_2551;
                        int *l_2580 = (void*)0;
                        int *l_2581 = &g_376;
                        int *l_2582 = &l_2559;
                        int *l_2583 = &g_57;
                        int *l_2584 = &l_2499;
                        int *l_2585 = (void*)0;
                        int *l_2586 = &l_2572;
                        int *l_2587 = &l_2390;
                        int *l_2588 = (void*)0;
                        int *l_2589 = &l_2499;
                        int *l_2590 = &l_2551;
                        int *l_2591 = (void*)0;
                        int *l_2592 = &l_2413;
                        int *l_2594 = &g_120;
                        int *l_2595 = (void*)0;
                        int *l_2597 = &l_2413;
                        int *l_2598 = &l_2415;
                        int *l_2599 = &g_354;
                        int *l_2601 = &l_2399;
                        int *l_2602 = &l_2529;
                        int *l_2603 = (void*)0;
                        int *l_2604 = &l_2390;
                        int *l_2605 = &l_2562;
                        int *l_2606 = &l_2596;
                        int *l_2608 = &g_376;
                        int *l_2609 = (void*)0;
                        int l_2610 = (-1L);
                        int *l_2611 = &l_2559;
                        int *l_2612 = (void*)0;
                        int *l_2614 = &l_2413;
                        int *l_2615 = &g_376;
                        int *l_2616 = &l_2499;
                        int *l_2617 = &l_2417;
                        int *l_2618 = &l_2559;
                        int *l_2619 = &l_2593;
                        int *l_2620 = &l_2390;
                        int *l_2621 = (void*)0;
                        int *l_2622 = &l_2413;
                        int *l_2624 = &l_2529;
                        int *l_2625 = &l_2536;
                        int *l_2627 = &l_2413;
                        int *l_2628 = &g_354;
                        int *l_2629 = &g_57;
                        int *l_2630 = (void*)0;
                        int *l_2631 = (void*)0;
                        int *l_2632 = &l_2600;
                        int *l_2633 = &l_2596;
                        int *l_2634 = &g_354;
                        int *l_2635 = (void*)0;
                        int *l_2636 = (void*)0;
                        int *l_2637 = &l_2415;
                        int *l_2639 = &l_2502;
                        int l_2640 = 0x8011E569L;
                        int *l_2641 = (void*)0;
                        int *l_2642 = &l_2626;
                        int *l_2643 = &g_120;
                        int *l_2644 = &l_2596;
                        int *l_2645 = &l_2610;
                        int *l_2646 = &l_2593;
                        int *l_2647 = &l_2502;
                        int *l_2648 = (void*)0;
                        int *l_2650 = &l_2593;
                        int *l_2651 = &l_2562;
                        int *l_2653 = &l_2649;
                        int *l_2654 = &l_2416;
                        int *l_2655 = &l_2502;
                        int *l_2656 = &l_2626;
                        (**g_1133) = (-1L);
                        if ((*g_146))
                            continue;
                        g_2658++;
                    }

                    ;
                    l_2623 = ((((*l_2664) = l_2661) != &g_403) > (safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((*g_1119), (!p_22))), 1UL)));
                    (*g_358) = (0x1DC8L != ((*g_1079) = (((*g_1119) = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_2361) &= p_22), 2)), func_29((*l_2352), l_2415, func_23((**g_627), func_29((func_29(g_271, (safe_rshift_func_uint16_t_u_s(((l_2675 == l_2664) ^ l_2676), (*g_1079))), (*g_1119), &l_2649, &l_2593) <= (*l_2348)), (*l_2370), p_22, &l_2414, &g_120), &l_2399, l_2677, &l_2649), &l_2417, &l_2416)))) || 0x078941D6034C5631LL)));
                    for (g_120 = 0; (g_120 > (-24)); g_120--)
                    {
                        int *l_2680 = (void*)0;
                        int *l_2681 = &l_2417;
                        int *l_2682 = &g_376;
                        int *l_2683 = &l_2414;
                        int *l_2684 = &l_2562;
                        int *l_2685 = &l_2390;
                        int *l_2686 = &l_2536;
                        int *l_2687 = &g_991;
                        int *l_2688 = &g_354;
                        int *l_2689 = (void*)0;
                        int *l_2690 = &l_2600;
                        int *l_2691 = &l_2600;
                        int *l_2692 = &l_2562;
                        int *l_2693 = &l_2536;
                        int *l_2694 = &l_2399;
                        int *l_2695 = &g_2652;
                        int *l_2696 = &l_2600;
                        unsigned * const **l_2705 = (void*)0;
                        unsigned * const ***l_2704 = &l_2705;
                        long long *l_2709 = &l_2418;
                        unsigned *l_2710 = &g_883;
                        g_2697++;
                        (*l_2691) |= ((safe_rshift_func_uint8_t_u_s((((-3L) != ((*g_1843) && g_1566)) <= ((safe_mod_func_uint64_t_u_u((((*l_2704) = (void*)0) != l_2706), 0x7E113C33BB38FCF9LL)) <= (((***g_1132) = (!p_22)) >= 0xED376A58L))), ((*l_2351) = (1L > (*g_1079))))) || (**g_1133));
                        (*l_2692) = ((*l_2690) &= ((func_29((g_1264 = ((safe_sub_func_uint64_t_u_u(((*l_2686) > ((*l_2710) = (p_22 < func_29(g_2613, (*g_1119), ((*l_2709) = (*g_1119)), &l_2657, ((**g_1132) = (*g_1133)))))), ((l_2711 = &l_2536) == &l_2390))) ^ p_22)), l_2572, (*g_1119), l_2713, &l_2390) == p_22) || p_22));

                        ;
                        if ((***g_1132))
                            continue;
                    }

                    ;
                }
                return (***g_1841);
            }
            else
            {
                int *l_2714 = &l_2414;
                (*g_1133) = &l_2417;

                ;
                l_2714 = func_51(p_22, (*g_1119));

                ;
                ;
            }

            ;
            for (g_883 = 0; (g_883 >= 36); g_883++)
            {
                return (*l_2352);


            }
            for (g_1735 = 9; (g_1735 < 11); g_1735++)
            {
                unsigned *l_2724 = &g_97;
                int l_2729 = 0xF1D25C83L;
                short *l_2856 = &g_93.f0;
                unsigned l_2880 = 6UL;
                short l_2949 = 0xA70FL;
                long long l_2952 = 0L;
            }
            ++l_3054;
        }


        if (((((*g_1119) != (*l_2348)) < 0xC8DFL) != (g_829 == 0x1BL)))
        {
            unsigned char l_3064 = 0UL;
            int *l_3065 = &l_2415;
            long long l_3069 = (-6L);
            unsigned long long *l_3074 = &g_65;
            int l_3144 = 6L;
            int l_3148 = (-1L);
            int l_3153 = 0xE9BADB4EL;
            int l_3280 = 0x821ADA51L;
            unsigned char *l_3281 = &g_93.f3;
            unsigned l_3295 = 0UL;
            unsigned short *l_3318 = &g_768;
            unsigned *l_3319 = &g_203.f1;
            if ((*g_358))
            {
                union U0 **l_3057 = &g_92;
                union U0 *l_3059 = &g_203;
                union U0 **l_3058 = &l_3059;
                int *l_3068 = &l_2536;
                const int **l_3086 = &l_2882;
                const int ***l_3085 = &l_3086;
                short ****l_3094 = &g_544;
                int l_3114 = 0x8CEF6E49L;
                int l_3133 = 0xC0248DC4L;
                int l_3185 = 0L;
                (*l_2348) &= (((*l_3057) = &g_203) == ((*l_3058) = (void*)0));

                ;
                ;
                if (p_22)
                {
                    unsigned l_3070 = 0xD2A8A215L;
                    unsigned long long *l_3073 = &g_2224;
                    unsigned * const *l_3078 = (void*)0;
                    g_3071 ^= ((p_22 & (p_22 <= ((0xCC63A75718E86321LL ^ ((safe_lshift_func_int16_t_s_u((func_23((**g_627), l_3064, l_3065, (safe_mod_func_uint16_t_u_u(0x53D0L, p_22)), l_3068) <= 18446744073709551612UL), 5)) >= p_22)) ^ l_3069))) <= l_3070);


                    if (((*g_358) = l_3072))
                    {
                        unsigned long long **l_3075 = (void*)0;
                        unsigned long long **l_3076 = (void*)0;
                        unsigned * const **l_3079 = &l_3078;
                        (*l_3065) ^= (((*g_1079) = ((l_3073 != (g_3077 = l_3074)) == (((*l_3079) = l_3078) == (void*)0))) > 0x1D04L);

                        ;
                        (*l_3065) = ((*l_2348) = 0xBBDECCC1L);
                    }
                    else
                    {
                        unsigned short *l_3082 = (void*)0;
                        unsigned short *l_3083 = &g_1831;
                        int ***l_3084 = (void*)0;
                        const int ****l_3087 = (void*)0;
                        const int ****l_3088 = &l_3085;
                        short *****l_3095 = &l_3094;
                        unsigned short *l_3096 = &g_271;
                        (*l_3065) = (safe_add_func_uint16_t_u_u(((*l_3083) = (*l_3068)), ((*l_3096) = (((l_3084 != ((*l_3088) = l_3085)) >= (0x31F4272055839250LL >= 0xF036F36A32872041LL)) | (0x7BL <= ((!((~(safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u(((l_3093 == ((*l_3095) = l_3094)) == ((void*)0 == &g_1841)), 5)) <= p_22), (**l_3086)))) < 4L)) & p_22))))));
                    }
                    (*g_358) &= (***l_3085);
                    return p_22;
                }
                else
                {
                    int *l_3099 = &l_2415;
                    unsigned char *l_3100 = &l_3064;
                    unsigned char **l_3104 = &l_3100;
                    unsigned char * const l_3105 = &g_80;
                    for (g_1494 = 0; (g_1494 != 24); ++g_1494)
                    {
                        (*l_2348) &= ((*g_358) &= (*l_2713));
                        (*l_3086) = l_3099;
                        (**g_1132) = &l_2649;

                        ;
                    }


                    (*g_358) = (((*l_3100) |= 0x85L) >= (p_22 | (safe_sub_func_int32_t_s_s(((-3L) && l_3103), p_22))));
                    (*l_2348) = (0x0309L != 65526UL);
                    if ((((*l_3104) = &g_2736) == l_3105))
                    {
                        int *l_3108 = &l_2649;
                        (*l_2713) &= func_23((**g_627), (g_3106 == (void*)0), l_3108, (*l_3099), l_3108);


                    }
                    else
                    {
                        (*l_3068) = ((*l_3099) = (((0xE1L <= (*l_2713)) != p_22) && (g_203.f2 && g_99)));
                    }


                    ;
                }


                for (g_1494 = 0; (g_1494 < 4); g_1494 = safe_add_func_int32_t_s_s(g_1494, 1))
                {
                    int *l_3111 = &l_2551;
                    int *l_3112 = &l_2551;
                    int *l_3113 = &g_354;
                    int *l_3115 = &l_2551;
                    int *l_3116 = &g_2652;
                    int *l_3117 = (void*)0;
                    int *l_3118 = &l_2416;
                    int *l_3119 = &g_1071;
                    int *l_3120 = &l_2562;
                    int *l_3121 = &g_376;
                    int l_3122 = (-1L);
                    int *l_3123 = &l_2416;
                    int *l_3124 = &g_354;
                    int *l_3125 = (void*)0;
                    int *l_3126 = &g_991;
                    int *l_3127 = &l_3053;
                    int *l_3128 = &l_3122;
                    int *l_3129 = &g_354;
                    int *l_3130 = &g_57;
                    int l_3131 = 0x6D70F0E0L;
                    int *l_3132 = &l_3028;
                    int *l_3134 = &g_1071;
                    int *l_3135 = &g_120;
                    int *l_3136 = &g_376;
                    int *l_3137 = &l_2562;
                    int *l_3138 = &g_57;
                    int *l_3139 = (void*)0;
                    int *l_3140 = &l_2649;
                    int *l_3141 = &l_2536;
                    int *l_3142 = &g_1071;
                    int *l_3143 = (void*)0;
                    int *l_3145 = &l_2551;
                    int *l_3146 = &g_120;
                    int l_3147 = 0L;
                    int *l_3149 = &l_3114;
                    int *l_3150 = &l_2415;
                    int *l_3151 = (void*)0;
                    int *l_3152 = &g_2652;
                    int *l_3154 = &g_376;
                    int *l_3155 = &g_354;
                    int *l_3156 = &l_2551;
                    int *l_3157 = (void*)0;
                    int *l_3158 = &g_57;
                    int *l_3159 = &g_120;
                    int *l_3160 = &l_2536;
                    int *l_3161 = &g_1071;
                    int *l_3162 = &g_376;
                    int *l_3163 = &l_3122;
                    int *l_3164 = &l_3148;
                    int *l_3165 = &g_57;
                    int *l_3166 = (void*)0;
                    int *l_3167 = &l_2416;
                    int *l_3168 = (void*)0;
                    int *l_3169 = &l_3114;
                    int *l_3170 = (void*)0;
                    int *l_3171 = &l_3053;
                    int *l_3172 = &l_3147;
                    int *l_3173 = &l_3148;
                    int *l_3174 = &g_57;
                    int *l_3175 = (void*)0;
                    int *l_3178 = &l_3053;
                    int *l_3179 = &g_376;
                    int *l_3180 = &l_3144;
                    int *l_3181 = &g_1071;
                    int *l_3182 = (void*)0;
                    int *l_3183 = &g_354;
                    int *l_3184 = &g_120;
                    int *l_3186 = &g_354;
                    int *l_3187 = &l_3131;
                    int *l_3188 = &l_3114;
                    int l_3189 = 0xB1FE9F83L;
                    int l_3190 = (-5L);
                    int *l_3191 = &l_3131;
                    int *l_3192 = (void*)0;
                    int *l_3193 = &l_3053;
                    int *l_3194 = &g_354;
                    int *l_3195 = (void*)0;
                    int *l_3196 = &g_991;
                    int *l_3197 = (void*)0;
                    int *l_3198 = &l_2551;
                    int *l_3199 = &l_3189;
                    (*l_2931) ^= p_22;
                    ++g_3200;
                    for (g_3177 = (-8); (g_3177 < (-9)); --g_3177)
                    {
                        l_3179 = (void*)0;

                        ;
                    }

                    ;
                    if (p_22)
                        break;
                }
                for (g_188 = (-8); (g_188 == 57); g_188++)
                {
                    int *****l_3208 = &l_3207;
                    (*g_358) &= (&g_1132 == ((*l_3208) = l_3207));
                    (*g_358) = p_22;
                }
            }
            else
            {
                unsigned l_3209 = 0x99E05331L;
                int *l_3212 = (void*)0;
                int *l_3213 = &l_2390;
                int *l_3214 = &l_3153;
                int *l_3215 = &l_2562;
                int *l_3216 = &l_3148;
                int *l_3217 = (void*)0;
                int *l_3218 = &g_376;
                int *l_3219 = (void*)0;
                int *l_3220 = &l_3028;
                int *l_3221 = (void*)0;
                int *l_3222 = &g_1071;
                int *l_3223 = &l_2551;
                int *l_3224 = &l_2551;
                int *l_3225 = (void*)0;
                int *l_3226 = &g_354;
                int *l_3227 = &l_2536;
                int *l_3228 = &g_354;
                int *l_3229 = &l_2562;
                int *l_3230 = &g_2652;
                int *l_3231 = (void*)0;
                int *l_3232 = &l_3033;
                int *l_3233 = &l_2562;
                int *l_3234 = &l_2649;
                int *l_3235 = &l_2649;
                int *l_3236 = &l_2562;
                int *l_3237 = &l_3028;
                int *l_3238 = &g_2652;
                int *l_3239 = &l_3153;
                int *l_3240 = (void*)0;
                int *l_3241 = &l_2416;
                int *l_3242 = (void*)0;
                int *l_3243 = &l_3144;
                int l_3244 = 0x1369273AL;
                int *l_3245 = &l_2416;
                int *l_3246 = &g_1071;
                int l_3247 = 1L;
                int *l_3248 = (void*)0;
                int *l_3249 = (void*)0;
                int *l_3250 = &l_2415;
                int *l_3251 = &l_2649;
                int *l_3252 = &g_57;
                int *l_3253 = &l_3028;
                int l_3254 = 0x61224599L;
                int *l_3255 = &l_3028;
                int *l_3256 = &l_3053;
                int *l_3257 = &l_2551;
                int *l_3258 = &g_991;
                int *l_3259 = &l_2416;
                int *l_3260 = &l_3247;
                int *l_3261 = &l_2416;
                int *l_3262 = &l_3247;
                int *l_3263 = &l_3148;
                int *l_3264 = &l_3244;
                int *l_3265 = &l_3254;
                int *l_3266 = (void*)0;
                int *l_3267 = &l_2415;
                int *l_3268 = &l_3053;
                ++l_3209;
                ++g_3269;
                (*l_3065) = (*l_2348);
                for (g_65 = 0; (g_65 > 10); g_65 = safe_add_func_int64_t_s_s(g_65, 4))
                {
                    if ((*l_2348))
                    {
                        (*l_3223) ^= 1L;
                    }
                    else
                    {
                        (**g_1132) = (void*)0;

                        ;
                    }
                }
            }


            (**g_1132) = &l_3148;

            ;
            if ((safe_sub_func_uint64_t_u_u((((*g_1119) ^= p_22) >= ((*g_2052) > (safe_lshift_func_uint16_t_u_u(((*l_3065) >= ((*l_2931) && (p_22 | p_22))), 1)))), func_35(l_3065, ((*l_3281) = (safe_add_func_int16_t_s_s(((*g_1079) = l_3280), 65535UL))), p_22))))
            {
                unsigned long long *l_3293 = &g_2658;
                int *l_3294 = (void*)0;
                for (l_2337 = 0; (l_2337 >= 21); l_2337++)
                {
                    int l_3284 = 0x3CA592B8L;
                    unsigned *l_3286 = (void*)0;
                    unsigned l_3287 = 0x2E1FCF8EL;
                    unsigned long long *l_3292 = &g_206;
                    (*l_3065) &= func_35((**g_482), (g_91 |= g_624), l_3284);

                    ;
                    (*g_1133) = &l_2562;

                    ;
                    if (func_29(l_3287, (*g_1119), (g_2613 = func_23(p_22, ((func_35(&l_3103, (*l_2882), p_22) <= ((*g_2052) > (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(9L, (-2L))), 0xADL)))) == 2L), &l_2536, (**g_483), &l_3028)), l_3294, &l_3053))
                    {
                        int *l_3300 = &l_3033;
                        int **l_3301 = (void*)0;
                        int **l_3302 = &l_3065;
                        (*l_3302) = ((*g_1133) = l_3300);

                        ;
                        ;
                        (*g_1133) = (void*)0;

                        ;
                        return (**g_1842);
                    }
                    else
                    {
                        if ((*g_2052))
                            break;
                        (*g_358) ^= 1L;
                    }

                    ;
                }

                ;
                (*l_2713) = ((safe_add_func_int8_t_s_s(func_35(&l_3103, func_29(g_829, (((8UL > (9UL <= ((((((g_188 != p_22) == l_3305) > (*l_2713)) <= ((safe_mod_func_int16_t_s_s(((-1L) == 0xDC75E771D7CE9495LL), (*g_1079))) < (*l_2713))) != p_22) | p_22))) | (**g_1133)) <= 1L), (*l_2931), &l_2562, (**g_1132)), p_22), p_22)) > p_22);

                ;
            }
            else
            {
                return p_22;


            }

            ;
            (*g_1133) = func_45(((((*l_3319) = (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((*g_1843), 4)), func_29(((*l_3318) = (func_23(p_22, g_991, &l_2390, p_22, (*g_1133)) >= ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(p_22, 7)), (safe_sub_func_int8_t_s_s(((p_22 >= 0xD807906DL) == (***g_1841)), 254UL)))) < 0x823DL))), (*g_1119), (*g_1119), &l_3280, &l_3144)))) == 0x148E8D3EL) || (*l_2348)), (*l_2882), &l_3153, p_22);

            ;
        }
        else
        {
            int *l_3321 = &l_3028;
            int l_3329 = 0x5C8F2988L;
            int l_3330 = 0x6C99CF3EL;
            unsigned long long l_3505 = 7UL;
            unsigned char *l_3518 = &l_3305;
            unsigned short *l_3519 = &l_2337;
            long long *l_3520 = &g_2263;
            if (((*g_358) &= (&l_2662 == &g_403)))
            {
                int l_3345 = 0L;
                int *l_3418 = (void*)0;
                unsigned long long l_3420 = 0xFF09C6EF33F3012FLL;
                int *l_3421 = (void*)0;
                int l_3427 = 0xFC4DFCCFL;
                unsigned short l_3442 = 0xDCC0L;
                if (func_29((&l_2661 != l_3320), p_22, (*g_1119), l_3321, ((**g_1132) = &l_2551)))
                {
                    int l_3322 = (-8L);
                    unsigned char *l_3323 = &g_3269;
                    l_3322 = 0L;
                    (*l_2931) = (!(((*l_3323) = (g_3269 == 0x6DL)) || p_22));
                }
                else
                {
                    int *l_3324 = &g_354;
                    int *l_3325 = &l_2536;
                    int *l_3326 = (void*)0;
                    int *l_3327 = (void*)0;
                    int *l_3328 = &l_2390;
                    int *l_3331 = &l_2649;
                    int *l_3332 = &g_991;
                    int *l_3333 = (void*)0;
                    int *l_3334 = &l_2390;
                    int *l_3335 = &g_376;
                    int *l_3336 = &l_2416;
                    int *l_3337 = (void*)0;
                    int l_3338 = 0x70866F0DL;
                    int *l_3339 = (void*)0;
                    int *l_3340 = &l_3330;
                    int *l_3341 = &l_2649;
                    int *l_3342 = &l_3330;
                    int *l_3343 = (void*)0;
                    int *l_3344 = (void*)0;
                    int *l_3346 = &l_2415;
                    int *l_3347 = &l_3330;
                    int *l_3348 = &l_3338;
                    int *l_3349 = (void*)0;
                    int *l_3350 = &l_2415;
                    int *l_3351 = &l_2649;
                    int *l_3352 = (void*)0;
                    int *l_3353 = &g_57;
                    int *l_3354 = &g_120;
                    int *l_3355 = &l_2536;
                    int *l_3356 = &g_1071;
                    int *l_3357 = &g_1071;
                    int *l_3358 = (void*)0;
                    int *l_3359 = &g_2652;
                    int *l_3360 = &l_2551;
                    int *l_3361 = &l_3033;
                    int *l_3362 = &l_2390;
                    int *l_3363 = &l_2562;
                    int *l_3364 = (void*)0;
                    int *l_3365 = (void*)0;
                    int *l_3366 = &l_2562;
                    int *l_3367 = &l_3033;
                    int *l_3368 = &l_2390;
                    int *l_3369 = &l_2536;
                    int *l_3370 = &g_376;
                    int *l_3371 = &l_2415;
                    int *l_3373 = &g_991;
                    int *l_3374 = &l_2390;
                    int *l_3375 = &l_3033;
                    int *l_3376 = (void*)0;
                    int *l_3377 = &g_991;
                    int *l_3378 = (void*)0;
                    int *l_3379 = &l_3028;
                    int *l_3380 = &l_2551;
                    int *l_3381 = &l_2562;
                    int *l_3382 = (void*)0;
                    int *l_3383 = &l_3330;
                    int *l_3384 = (void*)0;
                    int *l_3385 = (void*)0;
                    int *l_3386 = (void*)0;
                    int *l_3387 = (void*)0;
                    int *l_3388 = &l_2536;
                    int *l_3389 = &l_2390;
                    int *l_3390 = &l_2536;
                    int *l_3391 = (void*)0;
                    int *l_3392 = &l_2536;
                    int *l_3393 = &l_2562;
                    int *l_3394 = &g_1071;
                    int *l_3395 = &l_3330;
                    int *l_3396 = &g_376;
                    int *l_3397 = &l_2415;
                    int *l_3398 = &l_2551;
                    int *l_3399 = &l_2390;
                    int *l_3400 = &g_354;
                    int *l_3401 = &l_2390;
                    int *l_3402 = &l_2415;
                    short *l_3419 = &g_2607;
                    unsigned short *l_3451 = (void*)0;
                    unsigned short *l_3452 = &l_2337;
                    unsigned *l_3455 = (void*)0;
                    char l_3456 = 0xE6L;
                    --g_3403;
                    for (g_206 = 13; (g_206 != 19); g_206++)
                    {
                        unsigned *l_3410 = (void*)0;
                        unsigned *l_3411 = &l_2330;
                        int l_3417 = 0x897B8FAEL;
                        long long l_3426 = 0x2CC9287D5C0A849DLL;
                        int *l_3428 = &l_3053;
                        int *l_3429 = &g_354;
                        int *l_3430 = &g_376;
                        int *l_3431 = (void*)0;
                        int *l_3432 = &l_2562;
                        int *l_3433 = &g_1071;
                        int *l_3434 = &l_2649;
                        int *l_3435 = &g_991;
                        int *l_3436 = (void*)0;
                        int *l_3437 = &l_2562;
                        int *l_3438 = &l_3028;
                        int *l_3439 = &g_376;
                        int *l_3440 = (void*)0;
                        int *l_3441 = &l_3028;
                        (*l_3357) ^= (safe_mul_func_int32_t_s_s(((((*l_3411) = l_3345) && l_3345) <= func_29((*l_3321), (((**g_1842) = 2L) < ((*l_3397) && func_35((*g_483), g_2658, (l_3417 = (safe_rshift_func_int8_t_s_s(0x92L, (safe_mod_func_int16_t_s_s((((void*)0 == l_3416) ^ p_22), (*g_1079))))))))), (*g_1119), &l_3329, l_3418)), 0L));
                        (*l_3368) ^= (((((*g_1079) = ((*l_2713) &= (p_22 == p_22))) != (l_3420 = ((void*)0 != l_3419))) <= (-4L)) ^ (((g_65 <= ((**g_627) == func_29(g_271, (*g_1119), (*l_2931), l_3421, &l_3417))) && p_22) && (-10L)));
                        (*g_358) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(0x61L, 3)), (*l_2713)));
                        l_3442++;
                    }
                    (*l_3347) |= 0xE4AF4E43L;
                    if ((safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s((*g_2052), (*l_3396))), (((l_3456 ^= ((safe_lshift_func_uint16_t_u_u(((*l_3321) >= (*l_3390)), (--(*l_3452)))) && (p_22 ^ ((*l_3321) = g_3177)))) <= (((!((p_22 != g_8) & (*l_3328))) < p_22) <= p_22)) >= (***g_1132)))))
                    {
                        (*l_3355) ^= 0L;
                        (*l_3394) = 1L;
                        return p_22;
                    }
                    else
                    {
                        (*l_3371) &= ((*l_3340) >= 1L);
                        (*l_2713) = 1L;
                        (*g_1133) = (void*)0;

                        ;
                    }

                    ;
                }

                ;
            }
            else
            {
                unsigned short *l_3467 = &g_768;
                char l_3468 = 1L;
                int *l_3469 = &l_2416;
                unsigned char *l_3470 = &g_2736;
                short **l_3508 = &g_1079;
                if (((*l_3321) != (((*l_3470) = ((safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u((p_22 && (safe_rshift_func_uint16_t_u_u(p_22, func_29(((*l_3467) = (&l_3072 != (*g_627))), ((**g_1842) || (func_23(p_22, p_22, ((*g_1133) = (void*)0), l_3468, l_3469) < p_22)), (*g_1119), &l_2536, l_3469)))), 0x2BFBF08F99A1C72CLL)) | p_22) || (*l_3469)) != (-1L)), g_1283)), p_22)), (*l_2713))) ^ g_199)) >= 0xBDL)))
                {
                    int *l_3471 = &l_3033;
                    int *l_3472 = (void*)0;
                    int *l_3473 = &l_2551;
                    int *l_3474 = &g_354;
                    int *l_3475 = &g_2652;
                    int *l_3476 = &g_2652;
                    int *l_3477 = &g_2652;
                    int *l_3478 = &l_2536;
                    int *l_3479 = &l_2562;
                    int *l_3480 = &l_2416;
                    int *l_3481 = &g_120;
                    int *l_3482 = &g_120;
                    int *l_3483 = (void*)0;
                    int *l_3484 = &l_2562;
                    int *l_3485 = (void*)0;
                    int *l_3486 = &l_2415;
                    int *l_3487 = &l_3330;
                    int *l_3488 = &g_57;
                    int *l_3489 = (void*)0;
                    int *l_3490 = &g_1071;
                    int *l_3491 = &l_2416;
                    int *l_3492 = &g_1071;
                    int *l_3493 = &g_354;
                    int *l_3494 = &l_3330;
                    int *l_3495 = &l_3053;
                    int *l_3496 = (void*)0;
                    int *l_3497 = &l_2416;
                    int *l_3498 = &l_2562;
                    int *l_3499 = &g_354;
                    int *l_3500 = &g_376;
                    int *l_3501 = &l_2649;
                    int l_3502 = 1L;
                    int *l_3503 = &g_376;
                    int *l_3504 = &l_3028;
                    short ** const l_3509 = &g_1079;
                    l_3505++;
                    (*l_3321) |= ((*l_2931) && ((*l_2713) = func_29((&g_482 != (void*)0), (l_3508 == l_3509), (*g_1119), &l_3330, g_3510)));
                }
                else
                {
                    unsigned char l_3513 = 8UL;
                    (*l_2931) = p_22;
                    for (g_2652 = 0; (g_2652 > 22); g_2652++)
                    {
                        --l_3513;
                        if (p_22)
                            break;
                        return (***g_1841);
                    }
                }
            }
            (*l_2713) = (func_29(((((*g_1119) = 0xBF6375AFFABD1F12LL) < (3UL > p_22)) ^ (+func_35(l_3321, ((*l_3518) &= (safe_lshift_func_int16_t_s_u(p_22, 12))), ((p_22 & ((*l_3520) = ((65535UL < ((*l_3519) = ((((*l_3321) <= (0x91L == p_22)) >= (*l_3321)) || 1L))) ^ g_203.f2))) != p_22)))), g_1001, g_1001, l_3521, &l_2551) >= p_22);

            ;
        }

        ;
        if (p_22)
        {
            (*g_146) |= (safe_rshift_func_int8_t_s_s(((+(((void*)0 == l_3524) > 0xA44354555D2A1A60LL)) && p_22), (*l_2882)));
        }
        else
        {
            return p_22;
        }
    }
    else
    {
        int l_3529 = 0x2F1E58DAL;
        char * const *l_3541 = &g_1843;
        char **l_3545 = (void*)0;
        (*l_2713) = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((*g_1079), l_3529)), (l_3530 == &g_3107)));
        for (g_2613 = (-22); (g_2613 >= 2); g_2613 = safe_add_func_int64_t_s_s(g_2613, 1))
        {
            const unsigned long long l_3536 = 0xC5AB28E9966D8F0FLL;
            int l_3569 = 0xDB559409L;
            if (((0xBEABBC795EA32349LL | (safe_rshift_func_int8_t_s_u((*l_2713), p_22))) < l_3536))
            {
                return (*l_3521);
            }
            else
            {
                char **l_3542 = (void*)0;
                char ***l_3543 = &l_3542;
                char ***l_3544 = &g_403;
                (***g_1132) = ((-1L) < (safe_mod_func_uint32_t_u_u(0x92E32C01L, (safe_lshift_func_uint8_t_u_u((((*g_1841) = l_3541) != (l_3545 = ((*l_3544) = ((*l_3543) = l_3542)))), l_3529)))));
                for (g_1928 = 5; (g_1928 == 46); g_1928++)
                {
                    unsigned char l_3555 = 0x81L;
                    (**g_1132) = (*g_1133);
                    for (g_1831 = 0; (g_1831 > 49); g_1831++)
                    {
                        int *l_3550 = &g_376;
                        int *l_3551 = &g_376;
                        int *l_3552 = &l_3028;
                        int *l_3553 = (void*)0;
                        int *l_3554 = (void*)0;
                        unsigned l_3566 = 0xAC077808L;
                        unsigned long long *l_3567 = &g_1737;
                        long long *l_3568 = &g_90;
                        (*l_2713) ^= p_22;
                        ++l_3555;
                        l_3569 = ((safe_lshift_func_uint8_t_u_s(((((*l_3568) &= (safe_mod_func_int32_t_s_s((((((l_3555 > (*l_3551)) <= (*l_3550)) > (safe_rshift_func_int8_t_s_s(((func_23((*g_628), (safe_add_func_int64_t_s_s(l_3566, ((*l_3567) = (*g_628)))), (**g_1132), (**g_483), l_3552) ^ p_22) && p_22), 4))) && p_22) && (**g_627)), (*g_358)))) || (**g_627)) | (*g_1119)), (*g_1843))) ^ p_22);
                    }
                    (*l_3521) |= ((-9L) < (safe_lshift_func_uint8_t_u_s(g_132, ((*g_1843) < (*g_1843)))));
                }

                ;
                if ((**g_1133))
                {
                    (***g_1132) ^= (safe_add_func_uint32_t_u_u(p_22, 4294967294UL));
                }
                else
                {
                    return p_22;
                }
                return p_22;
            }
        }
    }

    return p_22;
}







static long long func_23(unsigned long long p_24, unsigned char p_25, int * p_26, unsigned p_27, int * p_28)
{
    unsigned long long *l_2299 = &g_65;
    short * const **l_2306 = (void*)0;
    short * const **l_2307 = (void*)0;
    short * const l_2310 = &g_2311;
    short * const *l_2309 = &l_2310;
    short * const **l_2308 = &l_2309;
    short **l_2312 = &g_1079;
    unsigned *l_2315 = &g_318;
    int l_2318 = 0x8D2213FFL;
    (*p_28) &= ((((*l_2299) = (*g_628)) && ((*l_2299) = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(246UL, ((safe_mod_func_int32_t_s_s((((*l_2308) = &g_1079) != l_2312), (safe_sub_func_uint16_t_u_u(func_35(l_2315, (safe_rshift_func_uint8_t_u_u(0x8EL, ((g_57 && g_318) != (func_29(g_50, p_25, p_25, p_26, l_2315) || l_2318)))), p_27), (*g_1079))))) >= l_2318))), 4)))) | p_25);

    ;
    return (*g_1119);
}







static unsigned long long func_29(unsigned short p_30, long long p_31, long long p_32, int * p_33, int * p_34)
{
    int * const l_813 = &g_354;
    int **l_814 = (void*)0;
    int **l_815 = &g_146;
    unsigned *l_816 = (void*)0;
    unsigned long long *l_821 = &g_388;
    unsigned long long **l_820 = &l_821;
    unsigned long long ***l_819 = &l_820;
    long long *l_822 = &g_767;
    const unsigned *l_828 = &g_829;
    char l_832 = (-1L);
    int l_861 = 1L;
    unsigned short l_899 = 0UL;
    int l_945 = 1L;
    short l_1058 = 9L;
    int l_1236 = 9L;
    int l_1244 = 0xAFEF2452L;
    int l_1251 = (-1L);
    short l_1418 = (-1L);
    int l_1663 = 0L;
    int l_1836 = 0x1EBC0F3EL;
    char * const **l_1844 = &g_1842;
    char l_1848 = (-1L);
    unsigned l_1999 = 0x81B18672L;
    unsigned short l_2038 = 0xB705L;
    short l_2040 = (-3L);
    unsigned l_2081 = 5UL;
    const int l_2082 = 1L;
    unsigned short l_2083 = 0xCC0EL;
    const char *l_2244 = (void*)0;
    const char **l_2243 = &l_2244;
    const char ***l_2242 = &l_2243;
    const char ****l_2241 = &l_2242;
    unsigned *l_2253 = &g_624;
    unsigned **l_2252 = &l_2253;
    unsigned ***l_2251 = &l_2252;
    (*l_815) = l_813;

    ;
    return p_31;
}







static unsigned short func_35(unsigned * p_36, unsigned char p_37, short p_38)
{
    int **l_810 = &g_146;
    unsigned long long l_811 = 0x7D46C5297BFD730CLL;
    (*l_810) = p_36;


    return l_811;
}







static unsigned * func_39(short p_40, unsigned * p_41, unsigned char p_42, unsigned long long p_43)
{
    int *l_353 = &g_354;
    short *l_357 = &g_203.f0;
    unsigned char *l_359 = (void*)0;
    unsigned *l_362 = &g_93.f1;
    unsigned *l_363 = &g_93.f1;
    unsigned *l_364 = &g_93.f1;
    unsigned *l_365 = &g_93.f1;
    unsigned *l_366 = (void*)0;
    unsigned *l_367 = &g_86;
    unsigned long long *l_371 = &g_65;
    long long *l_378 = &g_90;
    int l_491 = 1L;
    int l_498 = 0xCDEC75F1L;
    unsigned short *l_561 = &g_271;
    char *l_565 = &g_74;
    char **l_564 = &l_565;
    unsigned * const **l_566 = &g_531;
    unsigned long long *l_568 = &g_65;
    unsigned long long **l_567 = &l_568;
    int l_619 = 1L;
    unsigned l_805 = 9UL;
    (*l_353) = ((*g_146) = (*g_146));
    l_353 = func_45((safe_lshift_func_int16_t_s_u(((*l_357) = (*l_353)), ((l_353 == g_358) | ((*l_367) ^= (((-1L) >= (--p_42)) == g_80))))), ((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(((*l_378) = ((++(*l_371)) || (+((*l_353) ^ (safe_mod_func_uint16_t_u_u((g_376 ^ (safe_unary_minus_func_int64_t_s((7L != p_43)))), 65529UL)))))))) ^ 0x93E5L), g_97)) >= 0x8EL), l_353, g_76);

    ;
    ;
    if (g_203.f3)
        goto lbl_556;
lbl_556:
    for (g_206 = (-17); (g_206 >= 13); g_206 = safe_add_func_int32_t_s_s(g_206, 6))
    {
        unsigned l_381 = 1UL;
        int l_400 = 0x777DDB8EL;
        int *l_428 = &g_354;
        char ** const * const l_451 = &g_403;
    }
    if ((((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((*l_561) = (*l_353)), 5)), (*l_353))) <= (safe_add_func_uint64_t_u_u(((l_498 &= ((void*)0 != l_564)) <= (l_566 != (void*)0)), (((((l_371 = &g_206) != ((*l_567) = (void*)0)) == ((((void*)0 != l_566) & (*l_353)) != 0xB7L)) > p_42) > 0x7CA0L)))) && p_42) | (*l_353)) ^ g_65))
    {
        unsigned short l_592 = 0x6EB0L;
        char ***l_595 = &l_564;
        int l_657 = 0xB5EDEE61L;
        int l_723 = (-1L);
        if (((((safe_add_func_uint32_t_u_u(5UL, (safe_sub_func_int16_t_s_s(p_43, ((*l_561) ^= 0x4651L))))) | (*l_353)) && 65533UL) || p_40))
        {
            int *l_573 = &l_498;
            int *l_574 = &g_354;
            int *l_575 = &g_120;
            int *l_576 = &g_376;
            int *l_577 = &g_57;
            int *l_578 = &g_354;
            int *l_579 = &l_498;
            int *l_580 = &l_498;
            int *l_581 = &g_354;
            int *l_582 = &g_354;
            int *l_583 = &g_57;
            int *l_584 = &l_491;
            int *l_585 = &g_57;
            int *l_586 = (void*)0;
            int *l_587 = &l_491;
            int *l_588 = (void*)0;
            int *l_589 = &l_498;
            int *l_590 = &l_491;
            int *l_591 = (void*)0;
            unsigned long long ***l_629 = &l_567;
            unsigned l_632 = 18446744073709551614UL;
            l_592--;
            if (((*l_353) = ((l_595 = &g_403) == &l_564)))
            {
                int l_596 = 0x9FD2BC73L;
                int *l_597 = (void*)0;
                int *l_598 = &l_491;
                int *l_599 = &g_376;
                int *l_600 = &l_498;
                int *l_601 = &g_354;
                int *l_602 = &l_498;
                int *l_603 = &g_120;
                int *l_604 = &g_354;
                int *l_605 = &g_376;
                int *l_606 = (void*)0;
                int *l_607 = &g_354;
                int *l_608 = &l_491;
                int *l_609 = &g_57;
                int *l_610 = &g_57;
                int *l_611 = &g_57;
                int *l_612 = &g_57;
                int *l_613 = &g_120;
                int *l_614 = &g_120;
                int *l_615 = &g_57;
                int *l_616 = &g_376;
                int *l_617 = &l_498;
                int *l_618 = &g_354;
                int *l_620 = &g_354;
                int l_621 = 1L;
                int *l_622 = (void*)0;
                int *l_623 = &g_376;
                ++g_624;
            }
            else
            {
                return p_41;


            }

            ;
            if ((g_627 == ((*l_629) = &l_568)))
            {
                for (g_76 = (-5); (g_76 >= (-27)); g_76--)
                {
                    (*l_584) = (*g_146);
                    ++l_632;
                    (*l_574) |= (p_43 & (*l_353));
                }
                for (g_90 = (-25); (g_90 <= 15); ++g_90)
                {
                    if ((*l_576))
                        break;
                    return p_41;


                }
            }
            else
            {
                return (**g_482);


            }
        }
        else
        {
            int *l_637 = (void*)0;
            int *l_638 = &g_57;
            int *l_639 = &g_376;
            int *l_640 = (void*)0;
            int *l_641 = (void*)0;
            int *l_642 = &g_376;
            int *l_643 = &l_491;
            int *l_644 = &g_120;
            int *l_645 = &g_57;
            int *l_646 = (void*)0;
            int *l_647 = &g_57;
            int *l_648 = &l_498;
            int *l_649 = &l_619;
            int *l_650 = &g_57;
            int *l_651 = &g_376;
            int *l_652 = &g_354;
            int *l_653 = &l_498;
            int *l_654 = &g_57;
            int *l_655 = &g_57;
            int *l_656 = &l_498;
            int *l_658 = &l_498;
            int l_659 = 0x9DEFC572L;
            int *l_660 = (void*)0;
            int *l_661 = &l_619;
            int *l_662 = &g_57;
            int *l_663 = (void*)0;
            int *l_664 = &g_354;
            int *l_665 = &g_376;
            int *l_666 = (void*)0;
            int *l_667 = &g_57;
            int *l_668 = &l_657;
            int *l_669 = &l_619;
            int *l_670 = &g_354;
            int *l_671 = (void*)0;
            int *l_672 = (void*)0;
            int *l_673 = &l_659;
            int *l_674 = &l_619;
            int *l_675 = &g_376;
            int *l_676 = &l_498;
            int *l_677 = (void*)0;
            int *l_678 = &l_619;
            int *l_679 = &l_659;
            int *l_680 = (void*)0;
            int *l_681 = &g_354;
            int *l_682 = &g_354;
            int *l_683 = (void*)0;
            int *l_684 = &l_657;
            int *l_685 = &l_498;
            int *l_686 = &l_659;
            int *l_687 = &l_619;
            int *l_688 = (void*)0;
            int *l_689 = &l_498;
            int *l_690 = (void*)0;
            int *l_691 = (void*)0;
            int *l_692 = &g_354;
            int *l_693 = &g_57;
            int *l_694 = (void*)0;
            int *l_695 = &g_354;
            int *l_696 = (void*)0;
            int *l_697 = &g_120;
            int *l_698 = &l_491;
            int *l_699 = (void*)0;
            int *l_700 = &g_376;
            int *l_701 = (void*)0;
            int *l_702 = (void*)0;
            int *l_703 = &l_498;
            int *l_704 = &l_498;
            int *l_705 = &l_498;
            int *l_706 = &l_657;
            int *l_707 = &l_619;
            int *l_708 = &g_120;
            int *l_709 = &l_659;
            int *l_710 = &g_376;
            int *l_711 = &g_354;
            int *l_712 = &l_659;
            int *l_713 = (void*)0;
            int *l_714 = &l_491;
            int *l_715 = (void*)0;
            int *l_716 = &g_354;
            int *l_717 = &g_354;
            int *l_718 = &g_354;
            int *l_719 = &l_498;
            int *l_720 = (void*)0;
            int *l_721 = &l_657;
            int *l_722 = &l_491;
            int *l_724 = (void*)0;
            int *l_725 = (void*)0;
            int *l_726 = (void*)0;
            int *l_727 = &g_376;
            int *l_728 = &l_498;
            int l_729 = 1L;
            int *l_730 = &l_657;
            int *l_731 = &l_619;
            int *l_732 = &l_491;
            int *l_733 = (void*)0;
            int *l_734 = &l_619;
            int *l_735 = (void*)0;
            int *l_736 = &g_57;
            int *l_737 = &l_657;
            int *l_738 = &l_659;
            int *l_739 = &g_376;
            int *l_740 = (void*)0;
            int *l_741 = (void*)0;
            int *l_742 = &g_376;
            int *l_743 = &l_729;
            int *l_744 = &g_57;
            int *l_745 = &l_619;
            int *l_746 = &l_498;
            int *l_747 = &l_657;
            int *l_748 = (void*)0;
            int *l_749 = &g_354;
            int *l_750 = &g_354;
            int *l_751 = &l_657;
            int *l_752 = (void*)0;
            int *l_753 = (void*)0;
            int *l_754 = &g_354;
            int *l_755 = &g_354;
            int *l_756 = (void*)0;
            int *l_757 = &g_57;
            int *l_758 = &g_120;
            int *l_759 = &l_491;
            int *l_760 = &l_619;
            int *l_761 = (void*)0;
            int *l_762 = &l_659;
            int *l_763 = &l_619;
            int *l_764 = &g_354;
            int *l_765 = &l_659;
            int *l_766 = (void*)0;
            --g_768;
        }

        ;
        l_657 |= 0x47B0789CL;
        (*g_146) |= p_42;
    }
    else
    {
        int *l_771 = &l_491;
        int l_772 = (-1L);
        int *l_773 = (void*)0;
        int *l_774 = &g_354;
        int *l_775 = &g_120;
        int *l_776 = &l_498;
        int *l_777 = &l_491;
        int *l_778 = &l_619;
        int *l_779 = &l_772;
        int *l_780 = &g_354;
        int *l_781 = (void*)0;
        int *l_782 = &g_57;
        int *l_783 = (void*)0;
        int *l_784 = (void*)0;
        int *l_785 = &l_498;
        int *l_786 = &l_772;
        int *l_787 = &g_120;
        int *l_788 = &l_498;
        int *l_789 = &l_772;
        int *l_790 = &l_498;
        int *l_791 = &l_772;
        int *l_792 = &l_498;
        int *l_793 = &l_619;
        int *l_794 = &l_491;
        int *l_795 = &l_619;
        int l_796 = 0x43A8D199L;
        int l_797 = 4L;
        int *l_798 = (void*)0;
        int *l_799 = &l_772;
        int *l_800 = (void*)0;
        int *l_801 = (void*)0;
        int l_802 = (-7L);
        int *l_803 = &l_491;
        int *l_804 = &l_498;
        ++l_805;
        for (g_91 = (-7); (g_91 <= 15); ++g_91)
        {
            if (g_90)
                goto lbl_556;
            g_146 = &g_376;

            ;
        }
    }

    ;
    ;
    return p_41;


}







static unsigned * func_45(const unsigned short p_46, long long p_47, int * p_48, unsigned p_49)
{
    unsigned long long l_54 = 18446744073709551614UL;
    int **l_350 = &g_146;
    unsigned *l_351 = &g_318;
    g_50 |= (*p_48);
    (*l_350) = func_51(g_50, l_54);

    ;
    return l_351;


}







static int * func_51(unsigned p_52, long long p_53)
{
    unsigned l_55 = 0UL;
    int *l_56 = &g_57;
    const unsigned l_87 = 1UL;
    int l_109 = 0L;
    unsigned l_193 = 0x4D024A44L;
    int l_253 = 1L;
    long long l_314 = (-1L);
    const unsigned short l_345 = 0xEB45L;
    if (((*l_56) ^= (l_55 == p_52)))
    {
        int *l_58 = (void*)0;
        int l_63 = 0L;
lbl_94:
        l_58 = l_56;

        ;
        for (p_53 = 0; (p_53 > (-21)); p_53--)
        {
            int *l_61 = &g_57;
            int *l_62 = &g_57;
            int *l_64 = &l_63;
            unsigned * const l_96 = &g_97;
            unsigned * const *l_95 = &l_96;
            const unsigned l_100 = 3UL;
            g_65++;
            for (l_63 = 0; (l_63 == (-17)); l_63--)
            {
                unsigned * const **l_98 = &l_95;
                for (l_55 = (-28); (l_55 >= 41); ++l_55)
                {
                    if (g_50)
                        break;
                    if ((p_52 > g_65))
                    {
                        int **l_72 = &l_61;
                        char *l_73 = &g_74;
                        char *l_75 = &g_76;
                        unsigned char *l_79 = &g_80;
                        unsigned char *l_81 = &g_82;
                        unsigned *l_85 = &g_86;
                        long long *l_88 = (void*)0;
                        long long *l_89 = &g_90;
                        (*l_56) &= p_53;
                        (*l_72) = &l_63;

                        ;
                        g_91 = (0x885A1EC8F9491450LL & ((((*l_89) = ((((*l_75) = (((*l_73) = p_53) ^ ((*l_62) = (**l_72)))) || ((g_74 > ((+(safe_sub_func_int32_t_s_s((0x435DL | (~(((*l_81) |= ((*l_79) = p_53)) != (g_57 ^ (((safe_sub_func_uint32_t_u_u((((*l_85) = 0UL) != l_87), p_53)) != (-1L)) & 1UL))))), g_65))) < 0UL)) == g_57)) != 0xE1L)) ^ 18446744073709551615UL) && 5UL));
                    }
                    else
                    {
                        g_92 = (void*)0;

                        ;
                        if (g_50)
                            goto lbl_94;
                    }
                }
                (*l_98) = l_95;
                g_99 &= ((*l_58) == g_82);
            }

            ;
            if (l_100)
                continue;
            if (g_8)
                break;
        }
    }
    else
    {
        int *l_101 = (void*)0;
        int **l_102 = (void*)0;
        int **l_103 = &l_56;
        union U0 *l_201 = &g_93;
        unsigned short l_221 = 1UL;
        int *l_299 = &g_120;
        unsigned **l_330 = (void*)0;
        unsigned ***l_329 = &l_330;
        (*l_103) = l_101;

        ;
        (*l_103) = &g_57;

        ;
        if (g_99)
        {
            for (g_90 = 9; (g_90 < 9); g_90 = safe_add_func_int16_t_s_s(g_90, 5))
            {
                unsigned long long l_135 = 18446744073709551615UL;
                for (g_80 = 0; (g_80 >= 12); ++g_80)
                {
                    int l_108 = (-1L);
                    int l_110 = 6L;
                    int l_124 = 0L;
                }
            }
        }
        else
        {
            unsigned short l_138 = 1UL;
            unsigned char l_159 = 246UL;
            int l_166 = 0x3508C96FL;
            int l_233 = (-10L);
            int l_236 = 0L;
            unsigned l_304 = 4UL;
            if (g_57)
            {
                l_138 ^= g_57;
                return &g_57;


            }
            else
            {
                unsigned *l_140 = &g_97;
                unsigned **l_139 = &l_140;
                unsigned char *l_143 = &g_82;
                const int *l_145 = &l_109;
                unsigned char l_161 = 1UL;
                if ((((*l_139) = l_56) == &g_97))
                {
                    int *l_160 = &g_120;
                    for (g_93.f0 = 7; (g_93.f0 < 18); ++g_93.f0)
                    {
                        const int *l_144 = &l_109;
                        (*l_56) = (l_143 == &g_91);
                        l_145 = l_144;
                        (*l_103) = (g_146 = &g_57);

                        ;
                    }

                    (*l_160) |= (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u(((void*)0 == &g_146))), (safe_add_func_uint8_t_u_u(((((*l_145) == (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((0xC2L < g_76), ((*l_56) = 65527UL))))), 3))) != (((*l_145) | ((safe_lshift_func_uint8_t_u_s(0xA1L, 1)) > (p_52 ^ p_53))) > (*l_145))) && l_159), p_53))));
                    (*l_56) = (*l_160);
                    (*l_103) = l_140;
                }
                else
                {
                    --l_161;
                    return &g_120;


                }

                ;
            }

            g_146 = &g_57;

            ;
            if (g_76)
                goto lbl_165;
lbl_165:
            (**l_103) = (l_138 != (safe_unary_minus_func_uint16_t_u(l_138)));
            if ((*g_146))
            {
                unsigned char l_216 = 0x89L;
                int l_225 = 0x61DA5914L;
                int l_254 = 1L;
                int l_255 = 0x736160A4L;
                int l_268 = 1L;
                if (p_52)
                {
                    int *l_167 = (void*)0;
                    int *l_168 = &g_57;
                    int *l_169 = &l_166;
                    int *l_170 = &g_57;
                    int *l_171 = &g_120;
                    int *l_172 = &l_109;
                    int *l_173 = &g_120;
                    int *l_174 = &l_109;
                    int *l_175 = &l_166;
                    int *l_176 = &g_120;
                    int *l_177 = &l_109;
                    int *l_178 = &g_120;
                    int *l_179 = &g_120;
                    int *l_180 = &l_109;
                    int *l_181 = &l_166;
                    int *l_182 = &g_120;
                    int *l_183 = (void*)0;
                    int *l_184 = &g_120;
                    int *l_185 = &l_109;
                    int *l_186 = &l_166;
                    int *l_187 = &l_166;
                    short *l_194 = &g_93.f0;
                    g_146 = (void*)0;

                    ;
                    --g_188;
                    (*l_185) |= g_57;
                    (*l_170) = (safe_lshift_func_int16_t_s_u(((*l_194) &= l_193), 2));
                }
                else
                {
                    union U0 *l_202 = &g_203;
                    int *l_209 = &l_166;
                    int *l_210 = (void*)0;
                    int *l_211 = &l_109;
                    int *l_212 = (void*)0;
                    int *l_213 = (void*)0;
                    int *l_214 = (void*)0;
                    int *l_215 = &g_120;
                    for (g_120 = 0; (g_120 > (-7)); g_120--)
                    {
                        const char *l_198 = &g_199;
                        const char **l_197 = &l_198;
                        int l_200 = (-1L);
                        int *l_204 = &l_109;
                        int *l_205 = &l_166;
                        l_200 ^= (((*l_197) = &g_74) == (void*)0);

                        ;
                        l_200 = ((l_202 = l_201) == l_201);

                        ;
                        g_206++;
                        if ((**l_103))
                            continue;
                    }

                    ;
                    l_216++;
                    if ((safe_lshift_func_int8_t_s_u((g_80 != g_57), ((7UL & ((1UL ^ p_52) != l_221)) <= (g_97 | (*l_56))))))
                    {
                        int l_222 = 8L;
                        int *l_223 = &g_120;
                        int *l_224 = &l_109;
                        int *l_226 = (void*)0;
                        int *l_227 = (void*)0;
                        int *l_228 = &l_222;
                        int *l_229 = (void*)0;
                        int *l_230 = &l_225;
                        int *l_231 = &l_225;
                        int *l_232 = &l_109;
                        int *l_234 = &l_109;
                        int *l_235 = &g_57;
                        int *l_237 = (void*)0;
                        int *l_238 = &l_236;
                        int *l_239 = &l_109;
                        int *l_240 = (void*)0;
                        int *l_241 = &g_120;
                        int *l_242 = &l_225;
                        int *l_243 = &l_233;
                        int *l_244 = &l_109;
                        int *l_245 = &l_236;
                        int *l_246 = &l_109;
                        int *l_247 = &l_166;
                        int *l_248 = &l_236;
                        int *l_249 = &g_120;
                        int *l_250 = &l_166;
                        int *l_251 = &l_166;
                        int *l_252 = &l_233;
                        int *l_256 = &l_166;
                        int *l_257 = &l_225;
                        int *l_258 = &l_233;
                        int *l_259 = &l_109;
                        int *l_260 = &l_255;
                        int *l_261 = &l_109;
                        int *l_262 = &g_120;
                        int *l_263 = &l_222;
                        int *l_264 = &l_236;
                        int *l_265 = (void*)0;
                        int *l_267 = &l_233;
                        int *l_269 = &l_225;
                        int *l_270 = &l_166;
                        --g_271;
                    }
                    else
                    {
                        return &g_120;


                    }
                }

                ;
                (*l_56) &= (safe_rshift_func_int16_t_s_s(l_255, 5));
                for (l_159 = (-7); (l_159 == 29); l_159 = safe_add_func_uint16_t_u_u(l_159, 4))
                {
                    int l_286 = (-10L);
                    (**l_103) |= (safe_add_func_int8_t_s_s(9L, (((((p_53 & ((safe_mod_func_int64_t_s_s(g_80, 0x7D408D08F60D6E8ALL)) == g_271)) ^ (safe_rshift_func_uint16_t_u_u((p_52 == (l_268 || g_188)), (g_65 & 3L)))) != g_203.f3) | l_225) <= 4294967295UL)));
                    for (g_120 = 0; (g_120 < (-12)); g_120--)
                    {
                        l_286 &= p_53;
                        if (g_188)
                            break;
                        if (l_286)
                            break;
                    }
                    for (l_221 = 0; (l_221 <= 11); l_221++)
                    {
                        union U0 **l_289 = &l_201;
                        (*l_289) = (void*)0;

                        ;
                    }
                }

                ;
                g_146 = (void*)0;

                ;
            }
            else
            {
                short l_307 = 5L;
                unsigned long long *l_325 = &g_65;
                short *l_326 = &g_203.f0;
                long long *l_337 = &l_314;
                for (g_203.f0 = (-19); (g_203.f0 != 21); g_203.f0++)
                {
                    int *l_294 = &g_57;
                    for (g_97 = (-11); (g_97 != 40); g_97 = safe_add_func_uint16_t_u_u(g_97, 9))
                    {
                        const union U0 *l_296 = &g_203;
                        const union U0 **l_295 = &l_296;
                        short ***l_298 = &g_297;
                        l_294 = (void*)0;

                        ;
                        (*l_295) = (void*)0;

                        ;
                        (*l_298) = g_297;
                        (*l_103) = l_299;

                        ;
                    }

                    ;
                    for (g_74 = 0; (g_74 != 18); g_74++)
                    {
                        (*l_56) = (safe_add_func_uint32_t_u_u(g_199, l_304));
                        return &g_120;


                    }
                    for (g_91 = 0; (g_91 >= 6); g_91 = safe_add_func_int8_t_s_s(g_91, 7))
                    {
                        const int l_317 = 0x00487FC3L;
                        g_318 |= (((p_52 | (g_99 = 0xA631387556249259LL)) < 1L) > (l_307 == (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u(((safe_add_func_int64_t_s_s((*l_56), (l_314 <= (g_203.f3 == (safe_rshift_func_int8_t_s_s(p_52, 7)))))) | ((l_317 & g_203.f3) <= 0x5795804E8CAA09B4LL)), g_86)) && 6L), p_53))));
                        if (p_52)
                            continue;
                        (*g_146) ^= l_307;
                    }
                }

                ;
                (**l_103) = (safe_add_func_uint16_t_u_u((255UL < ((*l_56) != (safe_mod_func_uint64_t_u_u((~(((*l_325) = p_53) && p_53)), g_266)))), ((l_159 == g_93.f3) | ((((*l_326) = p_53) ^ p_52) != 65535UL))));
                l_236 &= (safe_add_func_int64_t_s_s(((l_329 != (void*)0) & (((((p_53 || (((**l_103) >= (safe_rshift_func_int16_t_s_u(((*l_326) = ((*g_146) & (safe_sub_func_uint64_t_u_u((g_132 >= ((~((-10L) >= ((((*l_56) || (((*l_337) = (safe_lshift_func_uint8_t_u_u(0x21L, (*l_56)))) || g_90)) > p_53) | p_53))) || g_91)), (-2L))))), 1))) && p_53)) | 0xC7B6A198L) != l_138) != g_93.f3) != l_304)), 5L));
            }

            ;
            ;
            ;
        }

        ;
        ;
    }

    ;
    for (g_50 = 0; (g_50 != (-29)); --g_50)
    {
        int **l_340 = &g_146;
        (*l_340) = (void*)0;

        ;
        (*l_340) = &g_120;

        ;
    }
    (*l_56) = (p_53 != ((p_52 < g_99) != (safe_sub_func_uint16_t_u_u(((0xBC908AECDC9E869FLL > (safe_lshift_func_int16_t_s_s(p_53, l_345))) || ((safe_sub_func_int64_t_s_s((p_53 & (g_203.f2 && (safe_mod_func_int8_t_s_s(g_188, g_97)))), p_52)) & 0x93L)), 0UL))));
    return &g_57;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93.f0, "g_93.f0", print_hash_value);
    transparent_crc(g_93.f1, "g_93.f1", print_hash_value);
    transparent_crc(g_93.f2, "g_93.f2", print_hash_value);
    transparent_crc(g_93.f3, "g_93.f3", print_hash_value);
    transparent_crc(g_93.f4, "g_93.f4", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_199, "g_199", print_hash_value);
    transparent_crc(g_203.f0, "g_203.f0", print_hash_value);
    transparent_crc(g_203.f2, "g_203.f2", print_hash_value);
    transparent_crc(g_203.f3, "g_203.f3", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_767, "g_767", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_829, "g_829", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_883, "g_883", print_hash_value);
    transparent_crc(g_989, "g_989", print_hash_value);
    transparent_crc(g_991, "g_991", print_hash_value);
    transparent_crc(g_1001, "g_1001", print_hash_value);
    transparent_crc(g_1071, "g_1071", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1283, "g_1283", print_hash_value);
    transparent_crc(g_1494, "g_1494", print_hash_value);
    transparent_crc(g_1566, "g_1566", print_hash_value);
    transparent_crc(g_1570, "g_1570", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1653, "g_1653", print_hash_value);
    transparent_crc(g_1668, "g_1668", print_hash_value);
    transparent_crc(g_1735, "g_1735", print_hash_value);
    transparent_crc(g_1737, "g_1737", print_hash_value);
    transparent_crc(g_1831, "g_1831", print_hash_value);
    transparent_crc(g_1859, "g_1859", print_hash_value);
    transparent_crc(g_1903, "g_1903", print_hash_value);
    transparent_crc(g_1928, "g_1928", print_hash_value);
    transparent_crc(g_2051, "g_2051", print_hash_value);
    transparent_crc(g_2053, "g_2053", print_hash_value);
    transparent_crc(g_2191, "g_2191", print_hash_value);
    transparent_crc(g_2224, "g_2224", print_hash_value);
    transparent_crc(g_2263, "g_2263", print_hash_value);
    transparent_crc(g_2311, "g_2311", print_hash_value);
    transparent_crc(g_2480, "g_2480", print_hash_value);
    transparent_crc(g_2607, "g_2607", print_hash_value);
    transparent_crc(g_2613, "g_2613", print_hash_value);
    transparent_crc(g_2638, "g_2638", print_hash_value);
    transparent_crc(g_2652, "g_2652", print_hash_value);
    transparent_crc(g_2658, "g_2658", print_hash_value);
    transparent_crc(g_2697, "g_2697", print_hash_value);
    transparent_crc(g_2712, "g_2712", print_hash_value);
    transparent_crc(g_2736, "g_2736", print_hash_value);
    transparent_crc(g_2839, "g_2839", print_hash_value);
    transparent_crc(g_3000, "g_3000", print_hash_value);
    transparent_crc(g_3071, "g_3071", print_hash_value);
    transparent_crc(g_3176, "g_3176", print_hash_value);
    transparent_crc(g_3177, "g_3177", print_hash_value);
    transparent_crc(g_3200, "g_3200", print_hash_value);
    transparent_crc(g_3269, "g_3269", print_hash_value);
    transparent_crc(g_3372, "g_3372", print_hash_value);
    transparent_crc(g_3403, "g_3403", print_hash_value);
    transparent_crc(g_3666, "g_3666", print_hash_value);
    transparent_crc(g_3698, "g_3698", print_hash_value);
    transparent_crc(g_3763, "g_3763", print_hash_value);
    transparent_crc(g_3771, "g_3771", print_hash_value);
    transparent_crc(g_3774, "g_3774", print_hash_value);
    transparent_crc(g_3788, "g_3788", print_hash_value);
    transparent_crc(g_3827, "g_3827", print_hash_value);
    transparent_crc(g_3912, "g_3912", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
