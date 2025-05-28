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



static int g_3 = 1L;
static int g_17 = 0xB9876427L;
static int g_23 = 0L;
static unsigned short g_25 = 0xAC54L;
static unsigned g_31 = 0x5D56974EL;
static int *g_59 = &g_3;
static int ** const g_58 = &g_59;
static unsigned g_97 = 0x9375E773L;
static unsigned short g_135 = 5UL;
static int g_246 = 0x30DF63A0L;
static unsigned char g_251 = 0x8CL;
static unsigned g_296 = 1UL;
static unsigned short *g_303 = (void*)0;
static unsigned short ** const g_302 = &g_303;
static int g_363 = 0x602D585DL;
static int g_371 = 7L;
static unsigned short g_375 = 4UL;
static char g_381 = 0x01L;
static short g_388 = 1L;
static int g_441 = 0xB922D4D5L;
static unsigned char g_459 = 0x52L;
static unsigned g_520 = 0UL;
static unsigned g_573 = 0xAA639954L;
static int **g_583 = &g_59;
static int ***g_582 = &g_583;
static unsigned g_670 = 0xB6ED61A2L;
static int *g_688 = &g_246;
static int g_765 = (-6L);
static unsigned g_787 = 0x5E6B33BDL;
static const short g_973 = 0x9F78L;
static int g_975 = 0L;
static const int g_983 = (-1L);
static char g_1035 = (-10L);
static char g_1037 = 0L;
static int g_1155 = 1L;
static int g_1187 = 0x9D249161L;
static unsigned g_1189 = 0x34A23CE9L;
static unsigned g_1197 = 0x30360020L;
static unsigned short g_1351 = 0x7A03L;
static char g_1438 = 0x3EL;
static unsigned g_1453 = 0UL;
static unsigned char g_1486 = 1UL;
static short g_1517 = 3L;
static int g_1657 = (-4L);
static short g_1677 = (-1L);
static short g_1683 = 0x546DL;
static int g_1691 = 4L;
static unsigned short g_1698 = 0xC008L;
static short *g_1755 = &g_388;
static short **g_1754 = &g_1755;
static int g_1760 = 0x463316D4L;
static int * const g_1898 = &g_3;
static unsigned g_1921 = 1UL;
static unsigned char *g_2159 = &g_459;
static unsigned char **g_2158 = &g_2159;
static const int *g_2177 = &g_23;
static unsigned g_2194 = 0x827833E0L;
static unsigned g_2196 = 0UL;
static int g_2294 = 0x8D1EE748L;
static int *g_2414 = &g_765;
static const unsigned g_2479 = 0UL;
static unsigned g_2480 = 0UL;
static int **g_2483 = &g_2414;
static char g_2494 = (-6L);
static int g_2621 = 0L;
static short g_2622 = (-1L);
static unsigned char g_2630 = 249UL;
static const unsigned g_2667 = 4294967295UL;
static unsigned *g_2707 = (void*)0;
static unsigned **g_2706 = &g_2707;
static int g_2715 = 6L;
static int g_2894 = (-4L);
static unsigned g_2918 = 0x549E5360L;
static int g_3094 = 0x06CB3A60L;
static unsigned g_3105 = 0x4A633A6FL;
static unsigned g_3255 = 4294967290UL;
static const char *g_3267 = &g_1438;
static const char **g_3266 = &g_3267;
static unsigned g_3325 = 0xE6B565CBL;
static unsigned g_3385 = 9UL;
static int ** const **g_3390 = (void*)0;



static unsigned func_1(void);
static unsigned char func_34(unsigned * p_35);
static unsigned * func_36(unsigned short p_37);
static int * func_40(unsigned char p_41);
static unsigned char func_42(unsigned p_43, const unsigned short p_44, int ** p_45);
static unsigned char func_46(int p_47, unsigned short p_48, short p_49, short p_50, short p_51);
static int * func_62(unsigned short p_63, unsigned char p_64, unsigned short p_65, const char p_66);
static int func_73(int * const * p_74);
static short func_79(unsigned p_80, unsigned p_81, short p_82, int ** p_83, unsigned p_84);
static int func_85(short p_86);
static unsigned func_1(void)
{
    int *l_2 = &g_3;
    int *l_4 = &g_3;
    int *l_5 = (void*)0;
    int *l_6 = &g_3;
    int *l_7 = &g_3;
    int *l_8 = &g_3;
    int l_9 = 0L;
    int *l_10 = &g_3;
    int *l_11 = (void*)0;
    int l_12 = 0xF3C34EEAL;
    int *l_13 = &l_12;
    int *l_14 = &g_3;
    int *l_15 = &g_3;
    int *l_16 = &l_12;
    int *l_18 = &g_17;
    int *l_19 = &l_9;
    int *l_20 = (void*)0;
    int *l_21 = &l_12;
    int *l_22 = &l_12;
    int *l_24 = &l_12;
    int **l_28 = (void*)0;
    int **l_29 = &l_5;
    unsigned *l_30 = &g_31;
    int l_72 = (-1L);
    unsigned char *l_1503 = &g_251;
    short *l_1504 = &g_388;
    int *l_1505 = &g_1155;
    unsigned char l_1506 = 5UL;
    int **l_2689 = &l_10;
    const unsigned l_2690 = 4294967293UL;
    int l_3297 = 1L;
    int l_3372 = 0x4670639CL;
    const int l_3411 = 0L;
    ++g_25;
    (*l_29) = &g_3;

    ;
    (*l_21) = ((--(*l_30)) ^ 0xF90350D8L);
    if ((func_34(func_36(((((((*l_29) = (*l_29)) != ((safe_sub_func_int32_t_s_s((((*l_2689) = func_40(func_42(((func_46(((*l_1505) ^= (safe_lshift_func_int16_t_s_s(((*l_1504) = (((((*l_1503) = (safe_rshift_func_int16_t_s_u((*l_24), (safe_sub_func_uint16_t_u_u((((g_31 || ((((void*)0 == g_58) , g_31) | (safe_sub_func_int32_t_s_s((*l_19), (*l_21))))) , func_62((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((*l_19) != 0x1FFDE63BL))), g_25)) && (-10L)), g_23)), g_17, l_72, (*l_21))) == &l_12), g_1486))))) , l_15) != (void*)0) | (*l_21))), g_363))), g_363, (*l_22), l_1506, g_973) , (*l_15)) || 0UL), g_765, g_583))) != (void*)0), g_1921)) , (void*)0)) < l_2690) <= (*l_24)) , 0UL))) , 0L))
    {
        unsigned char l_3289 = 255UL;
        int l_3292 = 0xE413A2EEL;
        int l_3293 = 0xCF9F581EL;
        int *l_3294 = (void*)0;
        int *l_3295 = &g_3;
        int *l_3296 = &g_246;
        int *l_3298 = (void*)0;
        int *l_3299 = &g_17;
        int *l_3300 = &g_765;
        int *l_3301 = (void*)0;
        int *l_3302 = &g_765;
        int *l_3303 = &g_2715;
        int *l_3304 = &l_3297;
        int *l_3305 = &g_2294;
        int *l_3306 = &l_12;
        int *l_3307 = &l_9;
        int *l_3308 = &g_441;
        int *l_3309 = &l_3297;
        int *l_3310 = &l_3293;
        int *l_3311 = &g_1657;
        int l_3312 = 8L;
        int *l_3313 = (void*)0;
        int *l_3314 = &g_3;
        int *l_3315 = &g_2621;
        int *l_3316 = &g_2621;
        int *l_3317 = (void*)0;
        int *l_3318 = (void*)0;
        int *l_3319 = &g_765;
        int *l_3320 = (void*)0;
        int *l_3321 = &g_1657;
        int *l_3322 = &l_3312;
        int *l_3323 = &l_3293;
        int *l_3324 = &g_246;
        int *l_3328 = (void*)0;
        int *l_3329 = &g_17;
        int *l_3330 = &g_1657;
        int *l_3331 = &l_3292;
        int *l_3332 = (void*)0;
        int *l_3333 = &g_765;
        int *l_3334 = &g_3;
        int *l_3335 = &l_3292;
        int *l_3336 = &l_3312;
        int *l_3337 = &g_2621;
        int *l_3338 = &l_3292;
        int *l_3339 = &g_3;
        int *l_3340 = &l_12;
        int *l_3341 = &l_3293;
        int *l_3342 = &g_1657;
        int *l_3343 = &l_9;
        int *l_3344 = &g_975;
        int *l_3345 = &g_246;
        int *l_3346 = &l_12;
        int *l_3347 = &l_3297;
        int *l_3348 = &l_3297;
        int *l_3349 = (void*)0;
        int l_3350 = (-4L);
        int *l_3351 = &l_3292;
        int *l_3352 = &l_3297;
        int *l_3353 = &g_23;
        int *l_3354 = &g_2294;
        int *l_3355 = (void*)0;
        int *l_3356 = &g_975;
        int *l_3357 = &g_2621;
        int *l_3358 = &g_246;
        int *l_3359 = &g_765;
        int *l_3360 = &g_2715;
        int *l_3361 = (void*)0;
        int *l_3362 = &g_2715;
        int *l_3363 = &g_2621;
        int *l_3364 = &g_2621;
        int *l_3365 = &g_1657;
        int *l_3366 = &g_246;
        int *l_3367 = &l_3292;
        int l_3368 = 0L;
        int *l_3369 = &l_3368;
        int *l_3370 = &g_2621;
        int *l_3371 = &l_9;
        int *l_3373 = &g_17;
        int *l_3374 = &l_3292;
        int *l_3375 = &g_3;
        int *l_3376 = &g_23;
        int *l_3377 = &g_975;
        int *l_3378 = &g_246;
        int *l_3379 = &g_23;
        int *l_3380 = &l_3293;
        int *l_3381 = (void*)0;
        int *l_3382 = &g_2621;
        int *l_3383 = &l_3312;
        int *l_3384 = &g_975;
        --l_3289;
        (*l_6) = (*g_2414);
        ++g_3325;
        --g_3385;
    }
    else
    {
        int ** const ***l_3391 = &g_3390;
        char l_3403 = 0x75L;
        short l_3404 = 0L;
        unsigned l_3405 = 18446744073709551612UL;
        char *l_3408 = &g_381;
        unsigned *l_3419 = &g_2196;
        unsigned ***l_3429 = &g_2706;
        (*l_18) = (0xAF0EL | (safe_sub_func_int8_t_s_s((((-2L) ^ (&g_582 == ((*l_3391) = g_3390))) != (*l_16)), (safe_unary_minus_func_int16_t_s((safe_mod_func_uint32_t_u_u((func_46(g_25, ((safe_mod_func_uint32_t_u_u((~((((((safe_rshift_func_int16_t_s_u((((-2L) ^ (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(2UL, 0)), ((**g_3266) & 1UL)))) != l_3403), 13)) , l_3404) > (**g_2158)) == l_3405) > 0x8053L) >= (**g_2158))), 1UL)) <= 0x656849C8L), l_3405, (**g_1754), (**g_1754)) , (*l_8)), l_3404)))))));
        (*l_8) &= l_3405;
        if ((safe_lshift_func_uint16_t_u_s(((((*l_3408) = (((*l_30) &= 0x79EB7201L) > (((**g_3266) <= (*l_18)) == (*g_1755)))) == (**g_2158)) , 65535UL), 4)))
        {
            int l_3414 = 0x2845C44BL;
            int *l_3420 = &g_17;
            (*g_2414) &= (((0xE6L & (safe_sub_func_uint32_t_u_u(0xDA122546L, (l_3411 < ((safe_sub_func_int32_t_s_s(l_3414, (((0x3F76252EL & ((((safe_lshift_func_int16_t_s_u(((*g_2177) >= (!g_31)), 4)) != 0L) , l_3419) != (void*)0)) && 0xFD4FL) | (*g_1755)))) , l_3414))))) , l_3414) , (*l_15));
            l_3420 = (*l_2689);

            ;
            (*g_1898) = 0xD64082A4L;
        }
        else
        {
            unsigned l_3424 = 0UL;
            int *l_3428 = &g_17;
            for (l_12 = 0; (l_12 >= 11); ++l_12)
            {
                unsigned short l_3423 = 0x9377L;
                const char ***l_3425 = &g_3266;
                l_3424 &= ((*g_1898) = l_3423);
                (*l_3425) = &g_3267;
                (*l_4) |= 0x92F0D795L;
                for (g_3105 = (-10); (g_3105 != 38); ++g_3105)
                {
                    (*g_583) = l_3428;

                    ;
                }
            }


        }


        (*l_3429) = &l_3419;

        ;
    }

    ;




    return (*l_5);
}







static unsigned char func_34(unsigned * p_35)
{
    int l_3281 = 0x780C64C7L;
    unsigned *l_3286 = &g_787;
    char *l_3287 = &g_1037;
    int **l_3288 = &g_2414;
    (**l_3288) &= ((*g_3267) , (-1L));
    return (*g_2159);
}







static unsigned * func_36(unsigned short p_37)
{
    unsigned char l_2693 = 251UL;
    char *l_2695 = (void*)0;
    char **l_2694 = &l_2695;
    int ****l_2701 = (void*)0;
    int *****l_2700 = &l_2701;
    int *** const *l_2702 = &g_582;
    const unsigned char l_2703 = 0x4CL;
    unsigned *l_2705 = &g_1197;
    unsigned * const *l_2704 = &l_2705;
    int l_2746 = 0x20EECEC8L;
    int l_2826 = 0x36E615B5L;
    int l_2842 = (-1L);
    char l_3110 = (-1L);
    short **l_3222 = &g_1755;
    int l_3223 = 0x30FB84ADL;
    unsigned short **l_3242 = &g_303;
    unsigned l_3253 = 0xC5462E73L;
    unsigned short l_3274 = 0x6A7FL;
    (*g_1898) = ((((safe_mod_func_uint16_t_u_u((((((l_2693 = ((*g_2414) |= (*g_2177))) , l_2693) , (l_2693 <= (((void*)0 != l_2694) | (safe_mod_func_uint32_t_u_u(l_2693, (safe_lshift_func_int16_t_s_u(((*g_1755) |= (((*l_2700) = &g_582) == ((g_2630 , l_2693) , l_2702))), l_2703))))))) >= (*g_2159)) > g_520), l_2703)) > 0L) > p_37) , (-1L));

    ;
    (*g_1898) |= (l_2704 == (g_2706 = &l_2705));

    ;
    for (g_670 = 7; (g_670 <= 34); ++g_670)
    {
        unsigned char l_2712 = 0xE3L;
        int l_2753 = 1L;
        int l_2768 = 1L;
        int l_2771 = 0xA691A6B9L;
        int l_2778 = 0xDF2A4742L;
        int l_2779 = 1L;
        int l_2824 = 0xD9B34BA2L;
        int l_2848 = 3L;
        int l_2910 = (-1L);
        unsigned short ***l_3116 = (void*)0;
        unsigned l_3211 = 0x88D4E3ECL;
        short l_3228 = 0x3B25L;
        int *l_3254 = &l_3223;
        short *l_3270 = (void*)0;
        short *l_3271 = &g_2622;
    }
    return l_2705;



}







static int * func_40(unsigned char p_41)
{
    char l_2267 = 1L;
    int *l_2268 = (void*)0;
    short * const *l_2275 = (void*)0;
    int l_2348 = 0xE3C90317L;
    int l_2349 = 0x7358457FL;
    int l_2386 = 5L;
    int l_2387 = 0x37EA0BC2L;
    int l_2401 = (-2L);
    unsigned **l_2411 = (void*)0;
    unsigned ***l_2410 = &l_2411;
    const unsigned l_2471 = 18446744073709551612UL;
    int ** const *l_2472 = &g_583;
    short l_2481 = (-1L);
    unsigned l_2658 = 0x8D95C079L;
    const unsigned * const **l_2661 = (void*)0;
    unsigned short l_2673 = 0x2361L;
    int *l_2688 = &g_1657;
    if ((p_41 || l_2267))
    {
        return l_2268;


    }
    else
    {
        short * const **l_2276 = (void*)0;
        short * const **l_2277 = &l_2275;
        short **l_2278 = &g_1755;
        int l_2279 = 0L;
        unsigned *l_2282 = &g_787;
        int **l_2283 = &g_59;
        const unsigned char l_2284 = 0x78L;
        int l_2285 = (-1L);
        int l_2308 = 1L;
        int l_2311 = 7L;
        int l_2315 = 0x787F95F9L;
        int l_2333 = 0xBFE08B8BL;
        int l_2339 = 0xA62AC66EL;
        unsigned l_2367 = 4294967295UL;
        int **l_2461 = (void*)0;
        short l_2484 = 1L;
        int l_2644 = (-1L);
        const unsigned * const ***l_2662 = &l_2661;
        const unsigned * const l_2666 = &g_2667;
        const unsigned * const *l_2665 = &l_2666;
        const unsigned * const **l_2664 = &l_2665;
        const unsigned * const ***l_2663 = &l_2664;
        unsigned short l_2672 = 0xC66EL;
        short *l_2674 = &g_1517;
        unsigned short *l_2675 = &g_25;
        int *l_2676 = &l_2349;
        l_2285 &= (safe_mod_func_int8_t_s_s(g_1197, (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((((*l_2277) = l_2275) != (l_2278 = &g_1755)), 15)), ((l_2279 > (((p_41 , 0x2E2C3174L) , l_2284) , p_41)) | p_41)))));
        if ((p_41 > p_41))
        {
            char l_2286 = 0L;
            int *l_2287 = &g_765;
            int *l_2288 = (void*)0;
            int *l_2289 = &g_765;
            int *l_2290 = &g_765;
            int *l_2291 = &l_2279;
            int *l_2292 = &g_975;
            int *l_2293 = &g_975;
            int *l_2295 = &g_2294;
            int *l_2296 = &g_1657;
            int *l_2297 = &l_2279;
            int *l_2298 = &g_1657;
            int *l_2299 = &g_2294;
            int *l_2300 = &g_2294;
            int l_2301 = 0x76985850L;
            int *l_2302 = &g_765;
            int *l_2303 = &g_1657;
            int *l_2304 = &l_2301;
            int *l_2305 = &g_23;
            int *l_2306 = &g_17;
            int *l_2307 = &l_2279;
            int *l_2309 = &g_765;
            int *l_2310 = &l_2285;
            int *l_2312 = &l_2285;
            int *l_2313 = &g_765;
            int *l_2314 = &g_441;
            int *l_2316 = (void*)0;
            int *l_2317 = (void*)0;
            int *l_2318 = &l_2315;
            int l_2319 = 0xB9737786L;
            int *l_2320 = &g_3;
            int *l_2321 = &g_1657;
            int *l_2322 = &g_441;
            int *l_2323 = &l_2315;
            int *l_2324 = &g_441;
            int *l_2325 = &l_2311;
            int *l_2326 = &g_3;
            int *l_2327 = &l_2319;
            int *l_2328 = &l_2315;
            int *l_2329 = &g_1657;
            int *l_2330 = &l_2285;
            int *l_2331 = &l_2319;
            int *l_2332 = &g_3;
            int *l_2334 = &g_3;
            int *l_2335 = (void*)0;
            int *l_2336 = &g_3;
            int *l_2337 = (void*)0;
            int *l_2338 = (void*)0;
            int *l_2340 = &l_2308;
            int *l_2341 = &l_2285;
            int *l_2342 = &g_17;
            int *l_2343 = (void*)0;
            int *l_2344 = &l_2315;
            int l_2345 = 0xAC046C3FL;
            int *l_2346 = &l_2308;
            int *l_2347 = &l_2311;
            int *l_2350 = &l_2311;
            int *l_2351 = (void*)0;
            int *l_2352 = &l_2319;
            int *l_2353 = &l_2285;
            int *l_2354 = &g_1657;
            int *l_2355 = &g_23;
            int *l_2356 = &l_2319;
            int *l_2357 = &g_2294;
            int *l_2358 = &l_2311;
            int *l_2359 = &l_2345;
            int *l_2360 = (void*)0;
            int *l_2361 = (void*)0;
            int *l_2362 = (void*)0;
            int *l_2363 = &g_246;
            int *l_2364 = &l_2279;
            int *l_2365 = &l_2339;
            int *l_2366 = (void*)0;
            unsigned l_2418 = 0x103A0E38L;
            int l_2421 = 0x256D8B84L;
            short * const l_2438 = &g_1677;
            unsigned short *l_2482 = &g_25;
            (*g_1898) &= 0xCA55B390L;
            l_2367++;
            if ((*g_1898))
            {
                short l_2379 = 0L;
                int l_2380 = 0L;
                char **l_2406 = (void*)0;
                char ***l_2405 = &l_2406;
                char *l_2409 = &l_2286;
                char **l_2408 = &l_2409;
                char ***l_2407 = &l_2408;
                unsigned ****l_2412 = &l_2410;
                int *l_2413 = &l_2319;
                for (g_3 = 18; (g_3 >= 21); g_3++)
                {
                    unsigned **l_2373 = (void*)0;
                    unsigned ***l_2372 = &l_2373;
                    unsigned short *l_2374 = &g_1351;
                    int *l_2375 = &g_1657;
                    int l_2377 = 7L;
                    int l_2378 = (-3L);
                    int l_2384 = 0x0F8F871EL;
                    unsigned short l_2402 = 65535UL;
                    (*l_2372) = &l_2282;

                    ;
                    if (((((*l_2374) = ((**g_1754) , 0UL)) > (**g_1754)) == p_41))
                    {
                        (*g_58) = l_2375;

                        ;
                    }
                    else
                    {
                        char l_2376 = 0x81L;
                        int l_2381 = 0x74668E60L;
                        int l_2382 = (-9L);
                        int l_2383 = 1L;
                        int l_2385 = 8L;
                        int *l_2388 = &l_2301;
                        int *l_2389 = (void*)0;
                        int *l_2390 = &g_246;
                        int *l_2391 = &l_2348;
                        int *l_2392 = &g_765;
                        int *l_2393 = (void*)0;
                        int *l_2394 = &l_2315;
                        int *l_2395 = (void*)0;
                        int *l_2396 = &g_246;
                        int *l_2397 = &g_23;
                        int l_2398 = 8L;
                        int *l_2399 = &l_2384;
                        int *l_2400 = &l_2377;
                        ++l_2402;
                    }
                    (**g_582) = &l_2380;

                    ;
                }


                if ((((((((*l_2295) , (((*l_2405) = (void*)0) == ((*l_2407) = (void*)0))) != (((*l_2282) = (((*l_2412) = l_2410) == (((*l_2323) = ((*l_2298) = (*l_2305))) , &l_2411))) == 4294967289UL)) >= (((l_2379 , (g_296 , l_2380)) < l_2379) == 1UL)) <= 0x08L) && g_363) && l_2380))
                {
                    (*l_2330) = p_41;
                }
                else
                {
                    unsigned l_2415 = 18446744073709551615UL;
                    unsigned short *l_2424 = (void*)0;
                    unsigned short *l_2425 = (void*)0;
                    unsigned short *l_2426 = &g_25;
                    if ((*g_1898))
                    {
                        return g_2414;



                    }
                    else
                    {
                        unsigned l_2419 = 0x59891606L;
                        int l_2420 = 0x9C7ACF6FL;
                        l_2415--;
                        (*g_1898) = (((**g_1754) >= (((p_41 , (((*g_1755) , ((g_97 = 1UL) | (-1L))) , ((((((g_520 = (p_41 <= l_2418)) , (l_2420 = l_2419)) , ((*g_1898) != l_2421)) == p_41) > 3UL) | 0xCA01FBD4L))) <= g_296) > 0UL)) && g_135);
                    }
                    (*l_2356) = (((safe_lshift_func_int16_t_s_u(((p_41 < (((*l_2426) = (*l_2328)) && l_2415)) >= ((**l_2278) |= (safe_unary_minus_func_uint16_t_u((*l_2413))))), (safe_mod_func_int8_t_s_s((-1L), (safe_rshift_func_int8_t_s_s((~p_41), g_1760)))))) , (void*)0) != l_2438);
                }

                ;
            }
            else
            {
                char l_2443 = 0x5CL;
                int l_2447 = (-1L);
                int **l_2470 = &l_2356;
                for (l_2311 = (-8); (l_2311 >= (-18)); --l_2311)
                {
                    char *l_2446 = (void*)0;
                    int l_2448 = 0x62B2AEF8L;
                    unsigned char *l_2449 = (void*)0;
                    unsigned char *l_2450 = (void*)0;
                    unsigned char *l_2451 = &g_251;
                    (*l_2283) = &l_2348;

                    ;
                    if (func_85(((safe_sub_func_uint16_t_u_u(l_2443, (l_2448 ^= (safe_sub_func_int8_t_s_s((l_2447 |= l_2443), (**g_2158)))))) , ((**g_2158) != ((*l_2451)++)))))
                    {
                        int **l_2454 = (void*)0;
                        int **l_2455 = &l_2365;
                        int *l_2458 = &g_1187;
                        (*l_2455) = ((*g_58) = (l_2447 , &l_2448));

                        ;
                        ;
                        (*g_58) = ((*l_2455) = ((**g_58) , (void*)0));

                        ;
                        ;
                        (*l_2356) |= l_2448;
                        l_2317 = &l_2348;

                        ;
                    }
                    else
                    {
                        if ((**g_58))
                            break;
                        (*l_2305) = (safe_sub_func_uint16_t_u_u(p_41, 0x84D6L));
                    }

                    ;
                    (*l_2327) ^= ((safe_lshift_func_int8_t_s_s(((g_1189 , (l_2448 ^ (p_41 & ((*g_1898) , (((g_25 || p_41) & l_2471) , 3L))))) < 0x5EEE62B0L), g_2196)) ^ p_41);
                }


                ;
                ;
                (*l_2346) = (((((l_2472 != l_2472) ^ (~(p_41 , ((*l_2282) = func_42((safe_rshift_func_uint8_t_u_u(((~p_41) >= ((g_1438 = p_41) >= ((safe_lshift_func_uint16_t_u_u(p_41, (*l_2358))) & p_41))), (*l_2296))), (**l_2470), (*g_582)))))) > (*l_2350)) != (*l_2346)) , l_2481);


            }

            ;
            ;
            (*l_2358) = ((*l_2287) | (((*g_2159) <= (*g_2159)) ^ ((((((*l_2327) == (p_41 , ((*l_2482) &= 1UL))) , (p_41 < p_41)) < p_41) == (*g_2414)) | 0x3F18L)));
        }
        else
        {
            int l_2485 = (-7L);
            int l_2486 = 0x3D321E82L;
            short **l_2489 = &g_1755;
            int l_2523 = 9L;
            int l_2531 = 0L;
            int l_2576 = 0x0157331CL;
            int l_2590 = 0L;
            (*g_1898) = ((*l_2472) != (g_2483 = &l_2268));

            ;
            (*g_1898) |= l_2484;
            if ((((**g_2158) = (l_2485 | (p_41 && l_2486))) , p_41))
            {
                int *l_2495 = &g_1155;
                int l_2498 = 0xA3DF5305L;
                int l_2499 = 0xAAE6D91FL;
                (*g_1898) = ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((*g_1755), (p_41 , (p_41 , (((*l_2495) = g_2494) , ((0xD2C0L && ((l_2498 ^= (((safe_mod_func_int32_t_s_s(0xFF8A3FE2L, 0xB920AE33L)) && (((p_41 <= 0x9CE6L) | 0x96L) & 0xEBE7L)) || p_41)) < (*g_1755))) == l_2499)))))), p_41)) || p_41);
            }
            else
            {
                short l_2597 = (-2L);
                int l_2624 = 0x9A72A620L;
                unsigned char **l_2647 = &g_2159;
                (*g_1898) &= (safe_add_func_int16_t_s_s((p_41 | (*g_2159)), ((void*)0 == &g_363)));
                for (g_246 = 0; (g_246 < (-20)); --g_246)
                {
                    int *l_2504 = &g_1657;
                    int l_2508 = 0x910DF898L;
                    int l_2514 = 0x68603D08L;
                    int l_2549 = 5L;
                    int l_2589 = 0x32CF868EL;
                    (*g_2414) &= 3L;
                    (**l_2472) = l_2504;

                    ;
                    for (g_17 = 0; (g_17 == (-28)); g_17 = safe_sub_func_uint32_t_u_u(g_17, 5))
                    {
                        int *l_2507 = &g_2294;
                        int *l_2509 = &l_2348;
                        int *l_2510 = &l_2308;
                        int *l_2511 = &l_2348;
                        int *l_2512 = &l_2315;
                        int *l_2513 = &l_2401;
                        int l_2515 = 0x57083FD2L;
                        int *l_2516 = &l_2515;
                        int *l_2517 = &l_2311;
                        int l_2518 = 0L;
                        int *l_2519 = &l_2514;
                        int *l_2520 = &l_2515;
                        int *l_2521 = &l_2485;
                        int *l_2522 = &l_2349;
                        int *l_2524 = &l_2401;
                        int *l_2525 = &l_2523;
                        int *l_2526 = &l_2285;
                        int *l_2527 = (void*)0;
                        int *l_2528 = &l_2333;
                        int *l_2529 = (void*)0;
                        int *l_2530 = &g_975;
                        int *l_2532 = &l_2315;
                        int *l_2533 = (void*)0;
                        int *l_2534 = &l_2486;
                        int *l_2535 = (void*)0;
                        int *l_2536 = &l_2531;
                        int *l_2537 = (void*)0;
                        int *l_2538 = &l_2523;
                        int *l_2539 = &l_2486;
                        int *l_2540 = &l_2311;
                        int *l_2541 = &l_2531;
                        int *l_2542 = &l_2485;
                        int *l_2543 = &l_2523;
                        int *l_2544 = &l_2333;
                        int *l_2545 = &l_2531;
                        int *l_2546 = &l_2285;
                        int *l_2547 = &l_2523;
                        int *l_2548 = &l_2315;
                        int *l_2550 = (void*)0;
                        int *l_2551 = &l_2349;
                        int *l_2552 = &l_2285;
                        int *l_2553 = &l_2531;
                        int *l_2554 = &l_2333;
                        int *l_2555 = &l_2285;
                        int *l_2556 = &l_2518;
                        int *l_2557 = &l_2486;
                        int *l_2558 = &l_2523;
                        int *l_2559 = &l_2333;
                        int *l_2560 = &l_2279;
                        int *l_2561 = &l_2315;
                        int *l_2562 = &l_2515;
                        int *l_2563 = &g_441;
                        int *l_2564 = (void*)0;
                        int *l_2565 = &l_2308;
                        int *l_2566 = &l_2515;
                        int *l_2567 = &l_2311;
                        int *l_2568 = &l_2387;
                        int *l_2569 = (void*)0;
                        int *l_2570 = &g_23;
                        int *l_2571 = (void*)0;
                        int *l_2572 = &l_2523;
                        int *l_2573 = &l_2285;
                        int *l_2574 = (void*)0;
                        int *l_2575 = &l_2311;
                        int *l_2577 = &g_2294;
                        int *l_2578 = &g_1657;
                        int *l_2579 = (void*)0;
                        int *l_2580 = &g_441;
                        int *l_2581 = (void*)0;
                        int *l_2582 = &l_2308;
                        int *l_2583 = &l_2523;
                        int *l_2584 = &l_2576;
                        int *l_2585 = &g_975;
                        int *l_2586 = (void*)0;
                        int *l_2587 = &l_2315;
                        int *l_2588 = &l_2387;
                        int *l_2591 = &l_2508;
                        int *l_2592 = &l_2348;
                        int *l_2593 = &l_2514;
                        int *l_2594 = &g_3;
                        int *l_2595 = &l_2308;
                        int *l_2596 = &l_2485;
                        int *l_2598 = &l_2523;
                        int *l_2599 = &l_2485;
                        int *l_2600 = &l_2308;
                        int *l_2601 = &l_2349;
                        int *l_2602 = &l_2315;
                        int *l_2603 = &l_2523;
                        int *l_2604 = &l_2515;
                        int *l_2605 = (void*)0;
                        int *l_2606 = (void*)0;
                        int *l_2607 = &l_2401;
                        int *l_2608 = &l_2531;
                        int *l_2609 = &g_975;
                        int *l_2610 = &l_2311;
                        int *l_2611 = &g_765;
                        int *l_2612 = &l_2401;
                        int *l_2613 = &l_2311;
                        int *l_2614 = &l_2514;
                        int *l_2615 = &g_765;
                        int *l_2616 = &l_2531;
                        int *l_2617 = &l_2508;
                        int *l_2618 = (void*)0;
                        int *l_2619 = &l_2523;
                        int *l_2620 = &l_2486;
                        int *l_2623 = &l_2348;
                        int *l_2625 = &l_2285;
                        int *l_2626 = &l_2590;
                        int *l_2627 = &g_2294;
                        int *l_2628 = &g_441;
                        int *l_2629 = &g_1657;
                        if (p_41)
                            break;
                        (**l_2283) &= (g_975 , (*g_1898));
                        --g_2630;
                    }
                    if ((safe_rshift_func_uint8_t_u_u((0xE393L && (safe_rshift_func_int8_t_s_u(p_41, 3))), p_41)))
                    {
                        int *l_2637 = (void*)0;
                        l_2637 = (void*)0;
                        l_2624 |= (safe_rshift_func_int16_t_s_u((-6L), (((((0x8F52L != ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(((5UL | (*l_2504)) > g_17), 4)) , l_2644), 7)) == ((((*g_2177) , p_41) | (p_41 == g_2621)) && 255UL))) >= 0xC30EEEF1L) < p_41) | 0x37A2L) <= g_2480)));
                        (**l_2472) = l_2637;

                        ;
                    }
                    else
                    {
                        short *l_2654 = &g_1683;
                        short *l_2655 = &l_2481;
                        (*g_1898) |= (safe_lshift_func_uint16_t_u_u((((l_2647 != (void*)0) & (**g_2158)) <= ((*l_2504) = ((*l_2655) = ((*l_2654) ^= ((**l_2278) ^= ((func_85((((void*)0 != l_2275) | 0xBBF0B3E5L)) >= (safe_mod_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_41 != ((safe_rshift_func_int16_t_s_u(0x1D52L, p_41)) & 1L)), p_41)), 0x35A9L))) != l_2597)))))), 0));
                    }

                    ;
                }
            }
        }


        (*g_2414) = ((*g_1898) &= ((g_381 , p_41) != (func_46(p_41, (p_41 > (((*g_1755) != (safe_add_func_uint8_t_u_u((l_2658 <= p_41), (g_1037 != (((safe_rshift_func_int8_t_s_s(((((*l_2663) = ((*l_2662) = l_2661)) == (void*)0) == (-10L)), p_41)) , g_459) , p_41))))) >= (*g_2159))), p_41, p_41, p_41) ^ p_41)));

        ;
        (*l_2676) ^= (safe_sub_func_int16_t_s_s((!(p_41 != (((func_42(p_41, ((*l_2675) |= ((safe_add_func_int8_t_s_s(l_2672, 0xAAL)) >= ((*l_2674) &= (*g_1755)))), (*g_582)) >= g_1189) ^ g_1683) , 0x8CB0927CL))), p_41));


    }



    for (g_2194 = (-27); (g_2194 <= 19); ++g_2194)
    {
        unsigned short l_2679 = 0x40C0L;
        char l_2684 = 7L;
        int l_2687 = 5L;
        --l_2679;
        l_2687 |= (((**g_1754) = (-9L)) || ((((safe_lshift_func_uint8_t_u_s((g_441 != l_2684), g_1197)) != 8UL) & (safe_rshift_func_uint16_t_u_s(((((void*)0 != &g_1755) < ((**g_1754) = p_41)) && (*g_2159)), l_2684))) || 65535UL));
    }
    return l_2688;



}







static unsigned char func_42(unsigned p_43, const unsigned short p_44, int ** p_45)
{
    unsigned short l_1711 = 0x3B86L;
    int *l_1726 = &g_17;
    short l_1759 = 0x4CD8L;
    int *l_1762 = &g_441;
    int l_1776 = 1L;
    int l_1802 = 0x43C21385L;
    int l_1886 = (-2L);
    unsigned l_1920 = 0xB5112906L;
    int l_1931 = 0x331E2992L;
    unsigned char l_1937 = 255UL;
    unsigned short l_1938 = 0x00A3L;
    short l_2026 = 0x88BDL;
    int l_2038 = (-1L);
    int l_2052 = (-2L);
    int l_2069 = 0xE5BF3771L;
    int l_2080 = 0xCA18B116L;
    char l_2145 = 0x4AL;
    int l_2154 = 0L;
    char *l_2195 = &g_1438;
    short l_2197 = 0x2846L;
    short l_2198 = 1L;
    unsigned l_2250 = 0xB75B18CCL;
    int l_2265 = (-3L);
    if (p_44)
    {
        int *l_1702 = &g_23;
        l_1702 = l_1702;
    }
    else
    {
        int *l_1703 = &g_765;
        int l_1713 = 4L;
        const unsigned short *l_1740 = &l_1711;
        const unsigned short ** const l_1739 = &l_1740;
        const unsigned short ** const *l_1738 = &l_1739;
        unsigned l_1743 = 0UL;
        char l_1773 = 1L;
        int *l_1845 = &g_17;
        unsigned char l_1857 = 3UL;
        int l_1945 = 0xFF442AADL;
        int l_1951 = 0xE967C081L;
        int l_1965 = 0x20824403L;
        int l_1975 = 0L;
        int l_1986 = 0x87604A57L;
        int l_2020 = 8L;
        int l_2070 = 6L;
        unsigned short l_2103 = 65535UL;
        unsigned l_2115 = 0xFCA50F98L;
        int l_2118 = (-1L);
        unsigned short l_2150 = 0x8558L;
        unsigned *l_2166 = &l_1743;
        unsigned **l_2165 = &l_2166;
        unsigned l_2187 = 0xC5BE647EL;
        (*l_1703) = (5L | p_43);
        for (g_1438 = 0; (g_1438 <= 8); g_1438 = safe_add_func_uint8_t_u_u(g_1438, 7))
        {
            unsigned l_1710 = 4294967289UL;
            short *l_1712 = (void*)0;
            short l_1714 = 0xE8A4L;
            unsigned short *l_1715 = (void*)0;
            unsigned short *l_1716 = &g_375;
            unsigned l_1721 = 0xA9717C4BL;
            int * const l_1745 = &g_1657;
            int l_1796 = 0x644AA5F0L;
            int l_1797 = 0xD0AC7146L;
            int l_1838 = 0x9F94596EL;
            int l_1839 = (-7L);
            unsigned l_1841 = 0xCF6CDECFL;
            int *l_1844 = &g_3;
            unsigned char l_1874 = 0xADL;
            int *l_1893 = (void*)0;
            int l_1988 = 0x589E4723L;
            int l_2096 = 0xEE2D0CF2L;
        }
        (*l_1845) = ((*l_1703) = 3L);
        if ((*g_1898))
        {
            short l_2108 = 0x593FL;
            unsigned short *l_2109 = (void*)0;
            unsigned short *l_2110 = &l_2103;
            char *l_2116 = (void*)0;
            char *l_2117 = &g_381;
            (*g_1898) &= (((*g_1755) >= (safe_lshift_func_int8_t_s_u(l_2108, (((*l_2110) |= (*l_1762)) > (((*l_1703) && (g_1517 > (safe_sub_func_int16_t_s_s((((*l_2117) = ((0xD5L ^ (((p_45 != ((safe_rshift_func_uint8_t_u_u((g_246 , p_43), 5)) , (void*)0)) ^ (*l_1703)) , 0x5EL)) , (*l_1703))) > p_44), (*g_1755))))) <= g_1683))))) , l_2118);
            (*g_1898) = l_2108;
        }
        else
        {
            short *l_2135 = &g_1677;
            const unsigned l_2162 = 0x9181F6C8L;
            int ***l_2169 = &g_583;
            for (l_2103 = 0; (l_2103 != 60); l_2103 = safe_add_func_uint16_t_u_u(l_2103, 2))
            {
                unsigned l_2129 = 0xF5296930L;
                int * const *l_2133 = &g_1898;
                int * const **l_2132 = &l_2133;
                unsigned short *l_2134 = &g_25;
                short **l_2136 = (void*)0;
                short **l_2137 = &l_2135;
                unsigned l_2138 = 0x24ABA763L;
                char *l_2139 = (void*)0;
                char *l_2140 = &g_1035;
                unsigned *l_2141 = &g_296;
                unsigned *l_2144 = &l_2138;
                char *l_2151 = &l_1773;
                unsigned char *l_2152 = (void*)0;
                unsigned char *l_2153 = &g_459;
                const unsigned * const *l_2163 = (void*)0;
                int *l_2176 = &l_1975;
                (*l_1762) = ((safe_sub_func_int16_t_s_s((*l_1726), 7L)) | ((safe_lshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((**g_1754), p_43)), (safe_sub_func_uint16_t_u_u(l_2129, (g_1155 , ((*l_2134) = ((((((((safe_add_func_int16_t_s_s((**g_1754), (*l_1703))) | p_44) == (***l_2132)) > p_43) == p_43) , p_43) != 0x5D6AL) | (-1L)))))))) | 1L));
            }
        }
    }
    l_2198 = (safe_mod_func_uint32_t_u_u(((void*)0 != &g_1438), func_46((*l_1762), (((((*l_2195) = (g_2194 || (1UL & (*g_2177)))) , g_2196) , &g_303) == (l_2197 , (void*)0)), (*l_1762), p_44, (**g_1754))));
    if ((*l_1762))
    {
        int *l_2199 = &g_975;
        int *l_2200 = &l_2069;
        int *l_2201 = &g_17;
        int *l_2202 = &g_765;
        int *l_2203 = &l_2069;
        int *l_2204 = &g_1657;
        int *l_2205 = (void*)0;
        int *l_2206 = &g_17;
        int *l_2207 = &g_17;
        int *l_2208 = &l_1776;
        int *l_2209 = (void*)0;
        int *l_2210 = &g_17;
        int *l_2211 = &g_3;
        int l_2212 = 0L;
        int *l_2213 = &l_2212;
        int *l_2214 = &l_2052;
        int *l_2215 = &g_765;
        int *l_2216 = &g_3;
        int *l_2217 = (void*)0;
        int *l_2218 = &l_2212;
        int *l_2219 = &g_765;
        int *l_2220 = &l_2212;
        int l_2221 = (-1L);
        int *l_2222 = (void*)0;
        int *l_2223 = (void*)0;
        int *l_2224 = &l_2069;
        int *l_2225 = &l_2212;
        int *l_2226 = &l_2221;
        int *l_2227 = &g_17;
        int *l_2228 = &g_246;
        int *l_2229 = &g_441;
        int *l_2230 = &l_2038;
        int *l_2231 = (void*)0;
        int *l_2232 = &l_2069;
        int *l_2233 = &l_2080;
        int *l_2234 = (void*)0;
        int *l_2235 = &g_3;
        int *l_2236 = &l_2052;
        int *l_2237 = &g_3;
        int *l_2238 = &l_1776;
        int *l_2239 = &l_2052;
        unsigned l_2240 = 4294967292UL;
        l_2240--;
        (*l_2199) = ((safe_lshift_func_uint8_t_u_u((p_43 , (*l_1726)), (safe_mod_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(0x96L, ((**g_2158) |= (((*g_1755) = ((*l_1762) , (*l_1726))) == (*l_2236))))) > p_43), (*l_2236))))) , (*g_1898));
        (*g_58) = ((((*l_2218) = p_44) , (((((~(~p_43)) || ((*g_2159) ^= l_2250)) && (safe_mod_func_uint16_t_u_u(p_43, p_43))) ^ (*l_1726)) < (p_43 ^ ((safe_rshift_func_int16_t_s_s(((*l_2229) ^ 0xC1DEL), p_44)) > p_43)))) , &l_2212);

        ;
    }
    else
    {
        int l_2266 = 0xA25FC816L;
        l_2266 = (safe_add_func_uint8_t_u_u((0x20142EF1L | (p_44 | ((safe_mod_func_uint16_t_u_u((((g_1351 || (safe_add_func_uint16_t_u_u(((!(safe_mod_func_uint32_t_u_u((*l_1762), (safe_sub_func_int16_t_s_s((*g_1755), (p_43 != (**g_2158))))))) != (l_2265 ^ (*l_1726))), (*g_1755)))) , p_43) | l_2266), 65531UL)) | 7UL))), p_44));
        (*p_45) = (void*)0;

        ;
    }


    return p_43;
}







static unsigned char func_46(int p_47, unsigned short p_48, short p_49, short p_50, short p_51)
{
    unsigned short l_1509 = 0xEB06L;
    int *l_1518 = &g_975;
    int l_1549 = 0x019025A2L;
    unsigned l_1568 = 1UL;
    unsigned l_1569 = 0x402FD1E0L;
    int *l_1572 = (void*)0;
    int *l_1573 = &g_23;
    int *l_1574 = &l_1549;
    int *l_1575 = &g_246;
    int *l_1576 = &g_441;
    int l_1577 = 0x768824D9L;
    int *l_1578 = &l_1549;
    int *l_1579 = &g_3;
    int *l_1580 = &g_246;
    int l_1581 = 1L;
    int *l_1582 = &g_975;
    int *l_1583 = &g_765;
    int *l_1584 = &g_246;
    int *l_1585 = &g_765;
    int *l_1586 = &g_765;
    int *l_1587 = &l_1577;
    int *l_1588 = (void*)0;
    int *l_1589 = &g_17;
    int *l_1590 = (void*)0;
    int l_1591 = 0L;
    int *l_1592 = &g_3;
    int *l_1593 = (void*)0;
    int *l_1594 = &g_3;
    int *l_1595 = (void*)0;
    int *l_1596 = &l_1581;
    int *l_1597 = &g_246;
    int *l_1598 = (void*)0;
    int *l_1599 = (void*)0;
    int *l_1600 = &g_441;
    int *l_1601 = (void*)0;
    int *l_1602 = &g_23;
    int l_1603 = 5L;
    int *l_1604 = &g_3;
    int *l_1605 = &g_975;
    int *l_1606 = &g_3;
    int l_1607 = 0xA36147E3L;
    int *l_1608 = &l_1603;
    int *l_1609 = &l_1591;
    int *l_1610 = &g_975;
    int *l_1611 = &g_3;
    int *l_1612 = &g_975;
    int l_1613 = 9L;
    int *l_1614 = (void*)0;
    int *l_1615 = &g_765;
    int *l_1616 = &g_765;
    int *l_1617 = &g_23;
    int l_1618 = (-4L);
    int *l_1619 = &l_1591;
    int *l_1620 = &g_975;
    int *l_1621 = &g_441;
    int *l_1622 = &l_1549;
    int *l_1623 = &g_765;
    int *l_1624 = (void*)0;
    int l_1625 = 0x2D5581FEL;
    int *l_1626 = &l_1549;
    int *l_1627 = &l_1618;
    int *l_1628 = &l_1625;
    int *l_1629 = &g_975;
    int *l_1630 = &g_17;
    int *l_1631 = (void*)0;
    int l_1632 = 0xA50F0615L;
    int *l_1633 = &g_246;
    int *l_1634 = &g_23;
    int *l_1635 = &l_1625;
    int *l_1636 = &l_1581;
    int *l_1637 = &g_975;
    int l_1638 = 5L;
    int *l_1639 = &g_765;
    int l_1640 = 0x54A8DEA2L;
    int *l_1641 = &g_441;
    int *l_1642 = (void*)0;
    int l_1643 = 0xCA3E0CE3L;
    int l_1644 = 0xC05716B8L;
    int *l_1645 = &l_1643;
    int *l_1646 = &l_1607;
    int *l_1647 = &l_1603;
    int *l_1648 = &l_1632;
    int *l_1649 = &l_1581;
    int *l_1650 = &l_1643;
    int *l_1651 = &l_1644;
    int *l_1652 = &l_1640;
    int l_1653 = 0xFA981976L;
    unsigned l_1654 = 0xA2413B52L;
    int *l_1658 = (void*)0;
    int *l_1659 = (void*)0;
    int *l_1660 = (void*)0;
    int *l_1661 = &l_1618;
    int *l_1662 = &l_1577;
    int *l_1663 = &g_23;
    int *l_1664 = &l_1618;
    int *l_1665 = &l_1644;
    int *l_1666 = &g_246;
    int *l_1667 = (void*)0;
    int *l_1668 = &l_1618;
    int *l_1669 = &l_1591;
    int *l_1670 = (void*)0;
    int *l_1671 = &l_1549;
    int *l_1672 = &l_1638;
    int *l_1673 = &l_1607;
    int *l_1674 = (void*)0;
    int *l_1675 = &l_1591;
    int *l_1676 = &l_1603;
    int *l_1678 = &l_1644;
    int *l_1679 = &l_1618;
    int *l_1680 = &l_1643;
    int *l_1681 = (void*)0;
    int *l_1682 = &l_1607;
    int *l_1684 = &l_1638;
    int *l_1685 = &l_1607;
    int *l_1686 = &l_1549;
    int *l_1687 = &l_1577;
    int *l_1688 = &l_1632;
    int *l_1689 = (void*)0;
    int *l_1690 = (void*)0;
    int *l_1692 = (void*)0;
    int *l_1693 = &l_1549;
    int *l_1694 = &l_1591;
    int *l_1695 = &l_1591;
    int *l_1696 = &l_1638;
    int *l_1697 = (void*)0;
    int l_1701 = 4L;
    for (g_1155 = 0; (g_1155 >= (-23)); g_1155 = safe_sub_func_uint16_t_u_u(g_1155, 1))
    {
        short *l_1512 = &g_388;
        int l_1515 = 0L;
        short *l_1516 = &g_1517;
        short l_1523 = 0x7C1AL;
        int l_1533 = (-9L);
        l_1518 = l_1518;
        for (g_388 = 0; (g_388 < 16); g_388++)
        {
            unsigned short l_1558 = 0x4D5BL;
            for (g_1517 = 4; (g_1517 != (-11)); g_1517--)
            {
                return g_1453;
            }
            if (l_1523)
            {
                char l_1532 = (-1L);
                unsigned short *l_1535 = &g_135;
                l_1533 &= ((*l_1518) && (p_49 == (((safe_mod_func_uint8_t_u_u(((-1L) > 65533UL), 0x1DL)) | ((*l_1518) = ((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((*l_1516) ^= (p_50 = (safe_rshift_func_int8_t_s_u((p_49 != ((p_50 != l_1515) | 2UL)), 3)))), l_1532)) , 0x7C6AL), l_1515)) || p_51))) > 0xB286L)));
                (*l_1518) &= (((safe_unary_minus_func_uint8_t_u(p_51)) , 65535UL) > (--(*l_1535)));
                l_1515 = (g_1438 >= p_51);
                if (p_47)
                    continue;
            }
            else
            {
                unsigned char *l_1563 = (void*)0;
                unsigned char *l_1564 = &g_459;
                int l_1567 = 0x8F307288L;
                for (g_459 = 0; (g_459 < 32); g_459++)
                {
                    int *l_1540 = (void*)0;
                    int l_1541 = 2L;
                    int *l_1542 = &l_1533;
                    int *l_1543 = &g_441;
                    int *l_1544 = &g_246;
                    int *l_1545 = &g_765;
                    int *l_1546 = &g_3;
                    int *l_1547 = &l_1515;
                    int *l_1548 = &g_23;
                    int *l_1550 = &g_765;
                    int *l_1551 = &g_3;
                    int *l_1552 = &g_975;
                    int *l_1553 = (void*)0;
                    int *l_1554 = &g_23;
                    int *l_1555 = &g_441;
                    int *l_1556 = &g_246;
                    int *l_1557 = &g_441;
                    l_1558++;
                }
                (*l_1518) |= (((1UL >= ((safe_mod_func_uint32_t_u_u(g_375, (((g_23 , ((*l_1564)--)) < p_47) || (p_50 , (((l_1567 && (((l_1568 = (((*l_1516) = (-5L)) <= p_48)) , (-1L)) <= g_1438)) && l_1533) <= l_1523))))) , l_1523)) >= l_1558) | p_51);
                (*l_1518) &= p_47;
                l_1533 = 0x8C532187L;
            }
            (*l_1518) &= 0xCD8B44D4L;
        }
        if ((*l_1518))
            break;
        l_1515 &= (g_973 && (*l_1518));
    }
    l_1569++;
    ++l_1654;
    g_1698++;
    return l_1701;
}







static int * func_62(unsigned short p_63, unsigned char p_64, unsigned short p_65, const char p_66)
{
    int * const *l_75 = &g_59;
    int *l_1487 = &g_17;
    int * const l_1488 = (void*)0;
    int l_1501 = 0x44457B48L;
    int *l_1502 = &g_441;
    if (((*l_1487) = func_73(l_75)))
    {
        int **l_1489 = &l_1487;
        int l_1492 = (-8L);
        unsigned short *l_1495 = &g_135;
        (*l_1489) = l_1488;

        ;
        l_1487 = ((safe_add_func_int8_t_s_s(l_1492, (safe_add_func_int16_t_s_s(g_388, ((*l_1495) = p_66))))) , ((**g_582) = l_1487));

        ;
    }
    else
    {
        unsigned char *l_1496 = &g_459;
        int l_1499 = 8L;
        unsigned char l_1500 = 0UL;
        (*l_1487) = p_66;
        l_1487 = (((g_388 , ((g_246 || (*l_1487)) , (--(*l_1496)))) > ((l_1500 = l_1499) & g_1037)) , ((**g_582) = &l_1499));

        ;
        ;
    }




    l_1501 = p_66;
    return l_1502;


}







static int func_73(int * const * p_74)
{
    int *l_78 = &g_23;
    unsigned *l_96 = &g_97;
    int l_1027 = 0x4BD69DB0L;
    short *l_1031 = &g_388;
    int l_1182 = (-9L);
    int l_1238 = 0x0B672C7BL;
    int l_1256 = 3L;
    int l_1263 = 0x8DF0F728L;
    int l_1282 = 1L;
    int l_1285 = 0xC0F66936L;
    int l_1286 = 0x3C60A51EL;
    int l_1308 = 1L;
    int l_1323 = 0xEB407D83L;
    int l_1334 = 0xEEF77836L;
    unsigned char *l_1360 = &g_459;
    if ((safe_sub_func_int16_t_s_s((((**g_58) = (*g_59)) || (((*p_74) == (g_31 , l_78)) >= (func_79(((*l_96) ^= ((*l_78) , ((func_85((*l_78)) < 0xEB1C2610L) == (safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(func_85(((*l_78) == g_17)), (*l_78))), (*l_78)))))), (*l_78), (*l_78), &l_78, g_25) != (-7L)))), l_1027)))
    {
        int **l_1028 = &l_78;
        short *l_1032 = &g_388;
        char *l_1033 = &g_381;
        char *l_1034 = &g_1035;
        unsigned char *l_1036 = &g_459;
        int l_1050 = 0x1BD4FFE3L;
        int l_1096 = 0x3DA97D06L;
        int l_1107 = 0xAAD83EB6L;
        int l_1130 = 0L;
        int l_1137 = 1L;
        unsigned **l_1216 = &l_96;
        unsigned short ** const *l_1220 = (void*)0;
        int l_1221 = 1L;
        short **l_1227 = &l_1032;
        int l_1230 = (-1L);
        int *l_1231 = (void*)0;
        int *l_1232 = &l_1130;
        int *l_1233 = &g_441;
        int *l_1234 = &g_246;
        int *l_1235 = &l_1230;
        int *l_1236 = &l_1096;
        int *l_1237 = &l_1130;
        int *l_1239 = (void*)0;
        int *l_1240 = (void*)0;
        int *l_1241 = &g_3;
        int *l_1242 = (void*)0;
        int *l_1243 = &g_765;
        int *l_1244 = (void*)0;
        int *l_1245 = &l_1238;
        int *l_1246 = &l_1230;
        int *l_1247 = &l_1050;
        int *l_1248 = &l_1182;
        int *l_1249 = &l_1137;
        int *l_1250 = &l_1050;
        int *l_1251 = (void*)0;
        int *l_1252 = &g_975;
        int *l_1253 = &l_1130;
        int *l_1254 = &g_441;
        int *l_1255 = &l_1027;
        int *l_1257 = &l_1096;
        int *l_1258 = (void*)0;
        int *l_1259 = &g_3;
        int *l_1260 = &g_765;
        int *l_1261 = &g_23;
        int *l_1262 = &g_441;
        int *l_1264 = &l_1182;
        int *l_1265 = &l_1137;
        int *l_1266 = &l_1182;
        int *l_1267 = &l_1238;
        int *l_1268 = (void*)0;
        int *l_1269 = &l_1096;
        int *l_1270 = &g_3;
        int *l_1271 = &l_1027;
        int *l_1272 = &l_1137;
        int *l_1273 = &l_1096;
        int *l_1274 = (void*)0;
        int *l_1275 = &g_3;
        int *l_1276 = (void*)0;
        int *l_1277 = &l_1263;
        int *l_1278 = &l_1107;
        int *l_1279 = &g_975;
        int *l_1280 = (void*)0;
        int *l_1281 = &l_1256;
        int *l_1283 = &l_1238;
        int *l_1284 = (void*)0;
        int *l_1287 = (void*)0;
        int *l_1288 = &l_1263;
        int l_1289 = 0x5A724D8DL;
        int *l_1290 = &l_1289;
        int *l_1291 = &g_975;
        int *l_1292 = &g_17;
        int *l_1293 = &l_1027;
        int *l_1294 = &l_1107;
        int *l_1295 = &l_1285;
        int *l_1296 = &l_1050;
        int *l_1297 = (void*)0;
        int *l_1298 = &l_1130;
        int *l_1299 = &l_1230;
        int *l_1300 = &g_17;
        int *l_1301 = &g_975;
        int *l_1302 = &l_1238;
        int *l_1303 = &g_246;
        int *l_1304 = &l_1130;
        int *l_1305 = &l_1096;
        int *l_1306 = &l_1230;
        int *l_1307 = &g_441;
        int *l_1309 = &l_1027;
        int *l_1310 = &l_1096;
        int *l_1311 = &g_17;
        int *l_1312 = (void*)0;
        int *l_1313 = &g_3;
        int l_1314 = (-1L);
        int *l_1315 = &l_1238;
        int *l_1316 = &g_17;
        int *l_1317 = &l_1230;
        int *l_1318 = &l_1263;
        int *l_1319 = &g_23;
        int *l_1320 = &l_1289;
        int *l_1321 = &l_1096;
        int *l_1322 = (void*)0;
        int *l_1324 = &l_1027;
        int *l_1325 = (void*)0;
        int l_1326 = (-4L);
        int *l_1327 = (void*)0;
        int *l_1328 = &g_23;
        int *l_1329 = &l_1050;
        int *l_1330 = &g_23;
        int *l_1331 = (void*)0;
        int *l_1332 = &l_1130;
        int *l_1333 = &l_1027;
        int *l_1335 = &l_1289;
        int *l_1336 = &g_975;
        int *l_1337 = &l_1323;
        int *l_1338 = &l_1286;
        int *l_1339 = &g_441;
        int *l_1340 = &g_17;
        int *l_1341 = &l_1256;
        int *l_1342 = &l_1107;
        int *l_1343 = (void*)0;
        int *l_1344 = (void*)0;
        int *l_1345 = &l_1230;
        int *l_1346 = &g_975;
        int *l_1347 = &g_246;
        int *l_1348 = &g_23;
        int *l_1349 = (void*)0;
        int l_1350 = 0x79FB6EBDL;
        (*l_1028) = (*p_74);

        ;
        if ((l_1027 |= (((safe_add_func_uint16_t_u_u((((*l_1034) = ((*l_1033) |= ((0x58CDL ^ (0x6DL | ((void*)0 == l_1031))) , (l_1032 != ((**l_1028) , l_1031))))) > ((*l_1036) &= g_973)), ((**l_1028) | (*l_78)))) , (-8L)) , 0x639169E0L)))
        {
            int l_1038 = (-1L);
            int l_1110 = 0L;
            int l_1142 = 1L;
            int l_1185 = 1L;
            int *l_1200 = &l_1050;
            (**g_583) &= g_1037;
            (**g_582) = (void*)0;

            ;
            if (l_1038)
            {
                short l_1043 = (-2L);
                int l_1047 = (-1L);
                int l_1109 = (-1L);
                int l_1129 = 0L;
                int l_1168 = (-4L);
                int l_1176 = 0xFBC698E2L;
                for (g_251 = (-7); (g_251 > 52); g_251 = safe_add_func_int16_t_s_s(g_251, 3))
                {
                    unsigned char l_1046 = 255UL;
                    int l_1097 = 1L;
                    int l_1102 = (-5L);
                    int l_1133 = 1L;
                    unsigned l_1192 = 0xBD532876L;
                }
            }
            else
            {
                return (*l_78);
            }
            l_78 = (((safe_sub_func_uint32_t_u_u(g_23, g_459)) < ((*l_1200) ^= (*l_78))) , (*p_74));

            ;
        }
        else
        {
            unsigned l_1209 = 4294967295UL;
            int *l_1210 = (void*)0;
            int *l_1211 = &g_975;
            unsigned **l_1217 = &l_96;
            unsigned short **l_1219 = &g_303;
            unsigned short ***l_1218 = &l_1219;
            char *l_1225 = &g_381;
            if ((~func_85(((*l_1032) = (((0xA0FACD52L > 0x2E638FF5L) != ((0xFC38L && (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((**l_1028), (**l_1028))), (*l_78)))) | g_1197)) == g_1187)))))
            {
                int **l_1212 = (void*)0;
                int **l_1213 = &l_78;
                (**g_583) |= 6L;
                (*l_1213) = (*p_74);
            }
            else
            {
                short l_1222 = 0x5FABL;
                char **l_1226 = &l_1225;
                (*l_1211) |= (**p_74);
                (**l_1028) = (((((((((safe_sub_func_uint32_t_u_u((*l_78), (l_1216 != ((*l_1211) , l_1217)))) && ((l_1218 != l_1220) , ((l_1222 , (**p_74)) & g_459))) | 0x58CCL) || (**p_74)) || (*l_78)) >= g_1035) && (-1L)) , (void*)0) != &g_302);
                (**g_583) = (g_381 & ((((*l_78) == (l_1222 ^ g_1197)) , l_1222) ^ (safe_sub_func_uint8_t_u_u(g_25, (((*l_1226) = l_1225) == l_1033)))));
            }
            (*l_1028) = (**g_582);
        }

        ;
        ;
        (*l_1233) ^= ((*l_1232) = ((0xEBD5L && (&g_973 != ((*l_1227) = l_1031))) >= (safe_rshift_func_int8_t_s_s(l_1230, 6))));
        --g_1351;
    }
    else
    {
        char *l_1357 = &g_1035;
        char **l_1356 = &l_1357;
        char *l_1358 = &g_1037;
        char **l_1359 = &l_1358;
        unsigned char **l_1361 = (void*)0;
        unsigned char *l_1363 = &g_251;
        unsigned char **l_1362 = &l_1363;
        (**g_582) = (*g_583);
        (***g_582) = ((safe_sub_func_uint32_t_u_u(((*l_78) <= ((((*l_1356) = &g_1035) == ((*l_1359) = l_1358)) < ((*l_78) ^ func_85((*l_78))))), (((*l_1031) &= (l_1360 != ((*l_1362) = (void*)0))) || (safe_unary_minus_func_uint16_t_u(func_85(func_85((*l_78)))))))) > (**p_74));

        ;
    }

    ;
    ;

    (*g_58) = &l_1238;

    ;
    for (g_459 = (-22); (g_459 >= 50); g_459 = safe_add_func_int32_t_s_s(g_459, 4))
    {
        unsigned l_1371 = 0xC622D866L;
        int l_1469 = 0xC3525F6EL;
        for (g_1187 = 19; (g_1187 < (-10)); g_1187--)
        {
            char **l_1370 = (void*)0;
            char ***l_1369 = &l_1370;
            char ***l_1379 = &l_1370;
            int l_1380 = 0xFEDA31A7L;
            char l_1467 = 1L;
            (*l_1369) = (void*)0;
            if (l_1371)
            {
                unsigned l_1378 = 0x5BFF7BFFL;
                int l_1384 = 0x250043F1L;
                int l_1399 = 0x8DB5B809L;
                int l_1416 = 1L;
                if ((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((0xC8L == (((((safe_rshift_func_uint16_t_u_s(l_1378, func_85((((**p_74) &= 0L) < l_1378)))) >= ((void*)0 == l_1379)) ^ l_1378) , l_1380) >= g_459)) != g_17), l_1380)), l_1371)))
                {
                    (**g_58) = ((g_135 , l_1371) | 0x87F4L);
                }
                else
                {
                    int *l_1381 = &g_246;
                    int *l_1382 = &l_1334;
                    int *l_1383 = (void*)0;
                    int *l_1385 = &g_23;
                    int *l_1386 = &l_1263;
                    int *l_1387 = &l_1256;
                    int *l_1388 = &l_1285;
                    int *l_1389 = &l_1256;
                    int *l_1390 = &l_1286;
                    int *l_1391 = &l_1282;
                    int *l_1392 = &g_23;
                    int *l_1393 = &l_1308;
                    int *l_1394 = &g_3;
                    int *l_1395 = &l_1263;
                    int *l_1396 = &l_1238;
                    int *l_1397 = &l_1282;
                    int *l_1398 = &g_975;
                    int *l_1400 = &l_1263;
                    int *l_1401 = &g_3;
                    int *l_1402 = &g_17;
                    int *l_1403 = &g_3;
                    int *l_1404 = &l_1399;
                    int *l_1405 = &l_1285;
                    int *l_1406 = &l_1286;
                    int *l_1407 = &l_1380;
                    int *l_1408 = &l_1282;
                    int *l_1409 = &l_1027;
                    int *l_1410 = &l_1334;
                    int *l_1411 = &l_1182;
                    int *l_1412 = &l_1399;
                    int *l_1413 = &l_1334;
                    int *l_1414 = &l_1308;
                    int *l_1415 = &g_23;
                    int *l_1417 = &g_765;
                    int *l_1418 = &l_1027;
                    int *l_1419 = &l_1027;
                    int *l_1420 = &l_1399;
                    int *l_1421 = &g_246;
                    int *l_1422 = &l_1282;
                    int l_1423 = (-10L);
                    int *l_1424 = &l_1334;
                    int *l_1425 = &l_1263;
                    int *l_1426 = &l_1380;
                    int *l_1427 = &g_441;
                    int *l_1428 = &g_975;
                    int *l_1429 = &l_1416;
                    int *l_1430 = &l_1256;
                    int *l_1431 = (void*)0;
                    int *l_1432 = &l_1323;
                    int *l_1433 = &l_1308;
                    int *l_1434 = (void*)0;
                    int *l_1435 = &l_1308;
                    int *l_1436 = &l_1182;
                    int *l_1437 = &l_1263;
                    int *l_1439 = (void*)0;
                    int *l_1440 = &g_765;
                    int *l_1441 = &l_1238;
                    int *l_1442 = &l_1238;
                    int *l_1443 = &l_1286;
                    int l_1444 = 4L;
                    int *l_1445 = &l_1444;
                    int *l_1446 = &l_1027;
                    int *l_1447 = &l_1182;
                    int *l_1448 = &l_1444;
                    int *l_1449 = &l_1423;
                    int *l_1450 = &g_23;
                    int *l_1451 = &g_23;
                    int *l_1452 = &l_1182;
                    --g_1453;
                }
            }
            else
            {
                unsigned short l_1483 = 1UL;
                for (g_375 = 0; (g_375 != 39); g_375 = safe_add_func_int16_t_s_s(g_375, 1))
                {
                    int *l_1458 = &l_1308;
                    int *l_1459 = &g_17;
                    int *l_1460 = &l_1380;
                    int *l_1461 = (void*)0;
                    int *l_1462 = (void*)0;
                    int *l_1463 = &g_246;
                    int *l_1464 = &g_246;
                    int *l_1465 = &g_246;
                    int *l_1466 = &l_1263;
                    int *l_1468 = &l_1285;
                    int *l_1470 = &l_1323;
                    int *l_1471 = &l_1286;
                    int *l_1472 = &l_1380;
                    int *l_1473 = &l_1282;
                    int *l_1474 = &g_3;
                    int *l_1475 = &l_1323;
                    int *l_1476 = &l_1027;
                    int *l_1477 = &l_1323;
                    int *l_1478 = &g_17;
                    int *l_1479 = &l_1308;
                    int *l_1480 = &l_1334;
                    int *l_1481 = &l_1285;
                    int *l_1482 = &g_765;
                    ++l_1483;
                    (*l_1466) = (*l_1468);
                }
            }
            (*g_583) = &l_1282;

            ;
        }

        ;
        return l_1469;


    }
    return g_1486;


}







static short func_79(unsigned p_80, unsigned p_81, short p_82, int ** p_83, unsigned p_84)
{
    unsigned char l_101 = 1UL;
    unsigned *l_102 = (void*)0;
    unsigned *l_103 = &g_97;
    int ***l_104 = (void*)0;
    int l_116 = 6L;
    int l_213 = 0xC20F6EBCL;
    int l_232 = (-2L);
    int l_235 = 0xA89D357DL;
    unsigned short *l_254 = &g_25;
    char l_594 = 0x11L;
    int *l_673 = &g_3;
    short l_821 = 0xDB1AL;
    unsigned short l_955 = 0UL;
    for (g_23 = (-17); (g_23 <= (-23)); g_23 = safe_sub_func_int16_t_s_s(g_23, 9))
    {
        int *l_100 = &g_3;
        l_100 = (*p_83);

        ;
    }
    (*g_59) &= ((((*l_103) = l_101) , &p_83) == l_104);
    for (p_84 = 0; (p_84 == 48); ++p_84)
    {
        unsigned l_125 = 4294967295UL;
        int l_136 = 0L;
        int *l_138 = &g_17;
        int *l_139 = &l_136;
        int *l_140 = &g_17;
        int *l_141 = (void*)0;
        int *l_142 = &g_3;
        int *l_143 = &g_17;
        int *l_144 = (void*)0;
        int *l_145 = &l_116;
        int *l_146 = (void*)0;
        int *l_147 = &l_136;
        int *l_148 = &g_23;
        int *l_149 = (void*)0;
        int *l_150 = &g_17;
        int *l_151 = &l_136;
        int *l_152 = &g_3;
        int *l_153 = &g_23;
        int *l_154 = &g_23;
        int *l_155 = &l_136;
        int *l_156 = &g_17;
        int *l_157 = &g_3;
        int *l_158 = &l_136;
        int *l_159 = &g_23;
        int *l_160 = &g_3;
        int *l_161 = &g_17;
        int *l_162 = &l_116;
        int *l_163 = &l_116;
        int *l_164 = &g_3;
        int *l_165 = &g_17;
        int *l_166 = &l_116;
        int *l_167 = (void*)0;
        int *l_168 = &l_116;
        int *l_169 = &l_136;
        int *l_170 = (void*)0;
        int *l_171 = &l_116;
        int *l_172 = &l_136;
        int *l_173 = &l_136;
        int *l_174 = &g_17;
        int *l_175 = &g_3;
        int *l_176 = &g_17;
        int *l_177 = &l_136;
        int *l_178 = &l_136;
        int *l_179 = &g_3;
        int *l_180 = &g_23;
        int *l_181 = &l_116;
        int *l_182 = &l_116;
        int *l_183 = &g_3;
        int *l_184 = &g_17;
        int *l_185 = &g_3;
        int *l_186 = &l_136;
        int *l_187 = &g_3;
        int *l_188 = &l_136;
        int *l_189 = &l_116;
        int *l_190 = &g_3;
        int *l_191 = &g_17;
        int *l_192 = &g_23;
        int *l_193 = &g_3;
        int *l_194 = &l_136;
        int *l_195 = &g_3;
        int *l_196 = &l_136;
        int *l_197 = &g_23;
        int *l_198 = &g_17;
        int *l_199 = &g_3;
        int *l_200 = (void*)0;
        int *l_201 = &g_17;
        int *l_202 = &g_23;
        int *l_203 = &g_3;
        int *l_204 = (void*)0;
        int *l_205 = &l_116;
        int *l_206 = &g_3;
        int *l_207 = &g_17;
        int l_208 = 7L;
        int *l_209 = &g_23;
        int *l_210 = &g_3;
        int *l_211 = &l_136;
        int *l_212 = &l_116;
        int *l_214 = &l_208;
        int *l_215 = &l_136;
        int l_216 = 0xC1DD83CBL;
        int *l_217 = (void*)0;
        int *l_218 = &g_17;
        int *l_219 = &l_208;
        int l_220 = 0x59F121BCL;
        int *l_221 = &l_136;
        int *l_222 = &g_23;
        int *l_223 = &l_213;
        int *l_224 = &l_136;
        int l_225 = (-1L);
        int *l_226 = &l_216;
        int *l_227 = &l_136;
        int *l_228 = &g_17;
        int *l_229 = &g_3;
        int *l_230 = &l_208;
        int *l_231 = (void*)0;
        int *l_233 = &l_220;
        int *l_234 = &l_208;
        int *l_236 = &l_232;
        int *l_237 = &l_235;
        int *l_238 = &l_208;
        int *l_239 = &l_235;
        int *l_240 = &l_116;
        int *l_241 = (void*)0;
        int *l_242 = &l_208;
        int *l_243 = &l_136;
        int *l_244 = (void*)0;
        int *l_245 = &l_220;
        int *l_247 = &g_246;
        int *l_248 = (void*)0;
        int *l_249 = &l_235;
        int *l_250 = &l_208;
        for (l_101 = (-14); (l_101 <= 10); l_101++)
        {
            int *l_109 = &g_23;
            int *l_110 = &g_17;
            int *l_111 = &g_23;
            int l_112 = 1L;
            int *l_113 = &l_112;
            int *l_114 = &g_3;
            int *l_115 = &g_17;
            int *l_117 = &l_112;
            int l_118 = 0x46FCCBB2L;
            int *l_119 = (void*)0;
            int *l_120 = &l_112;
            int *l_121 = &g_17;
            int *l_122 = &g_17;
            int *l_123 = &l_112;
            int *l_124 = &l_118;
            unsigned short *l_134 = &g_135;
            int **l_137 = &l_115;
            l_125++;
            l_136 &= ((((func_85(g_25) >= 0xB5L) > (safe_sub_func_uint16_t_u_u(((*l_134) |= (g_25 , ((((safe_add_func_int32_t_s_s((p_82 < (safe_add_func_int16_t_s_s(l_116, 0x4E7EL))), g_25)) >= (p_83 == &g_59)) , g_23) , g_23))), (*l_123)))) & p_84) , l_125);
            (*l_137) = (*p_83);

            ;
        }
        ++g_251;
    }
    if ((&g_25 != l_254))
    {
        unsigned short *l_301 = &g_25;
        int *l_311 = &l_235;
        const unsigned short l_392 = 8UL;
        int l_399 = 0xB89E6352L;
        int l_413 = 2L;
        unsigned short l_578 = 0xF7E2L;
        int l_732 = (-10L);
        int l_758 = 0xE4691611L;
        short *l_840 = &g_388;
        short **l_839 = &l_840;
        unsigned char l_942 = 0UL;
        unsigned l_976 = 18446744073709551612UL;
        if ((**g_58))
        {
            unsigned l_265 = 0UL;
            for (g_135 = 27; (g_135 >= 28); g_135 = safe_add_func_uint8_t_u_u(g_135, 1))
            {
                char l_259 = 0xE3L;
                int l_285 = 0x9A2289B7L;
                if ((safe_lshift_func_int8_t_s_u(l_259, (safe_lshift_func_int16_t_s_u(l_259, 15)))))
                {
                    int *l_262 = &l_116;
                    int *l_263 = &l_116;
                    int *l_264 = &l_213;
                    int **l_268 = &l_262;
                    l_265++;
                    (*l_268) = (*p_83);

                    ;
                    (*l_268) = (*l_268);
                }
                else
                {
                    int *l_269 = &l_232;
                    int *l_270 = (void*)0;
                    int *l_271 = &g_246;
                    int *l_272 = (void*)0;
                    int l_273 = 0x5485A9B4L;
                    int *l_274 = &g_23;
                    int *l_275 = &g_246;
                    int *l_276 = (void*)0;
                    int *l_277 = &l_232;
                    int *l_278 = &g_17;
                    int *l_279 = &l_235;
                    int l_280 = 0L;
                    int *l_281 = &l_232;
                    int *l_282 = (void*)0;
                    int *l_283 = &l_232;
                    int l_284 = 1L;
                    int *l_286 = &g_23;
                    int *l_287 = &l_213;
                    int *l_288 = &g_246;
                    int *l_289 = &g_17;
                    int *l_290 = &l_116;
                    int l_291 = 8L;
                    int *l_292 = &l_285;
                    int *l_293 = &l_291;
                    int *l_294 = &g_246;
                    int *l_295 = &l_285;
                    unsigned **l_299 = &l_102;
                    unsigned short **l_300 = (void*)0;
                    unsigned char l_310 = 0x0DL;
                    g_296--;
                    if ((((p_82 != g_296) , ((((~func_85(l_265)) , l_270) != ((*l_299) = (void*)0)) < (l_265 || ((l_301 = (void*)0) == (void*)0)))) , 6L))
                    {
                        return g_246;
                    }
                    else
                    {
                        unsigned short ***l_304 = &l_300;
                        int l_307 = 0xBB19F011L;
                        (*l_286) &= func_85(g_3);
                        (*l_304) = g_302;

                        ;
                        (*l_279) = (safe_lshift_func_int8_t_s_s((l_307 > (((4294967290UL != (safe_mod_func_int8_t_s_s(p_82, (((*l_274) = (g_296 , l_265)) ^ (((p_84 != l_310) <= ((g_251 != p_81) , p_82)) >= l_307))))) , 1L) || g_25)), 5));
                    }

                    ;
                }
            }

            ;
        }
        else
        {
            int **l_312 = (void*)0;
            int **l_313 = (void*)0;
            int l_320 = 4L;
            int l_333 = 0x0FBCE4B1L;
            int l_449 = 0x12B63EB4L;
            int l_625 = (-3L);
            int l_638 = 0xD24C9DFCL;
            l_311 = l_311;
            for (l_232 = 0; (l_232 >= (-2)); l_232 = safe_sub_func_int8_t_s_s(l_232, 6))
            {
                int l_391 = (-9L);
                int l_481 = 0x1BABB202L;
                int l_493 = 1L;
                int l_500 = 0x41503C55L;
                int *l_592 = (void*)0;
                int **l_593 = &l_311;
                int *l_595 = &g_17;
                int *l_596 = &g_17;
                int *l_597 = &l_213;
                int *l_598 = &l_116;
                int *l_599 = &l_500;
                int *l_600 = &g_441;
                int *l_601 = &l_481;
                int *l_602 = &g_441;
                int *l_603 = &l_413;
                int *l_604 = &l_320;
                int *l_605 = &g_3;
                int *l_606 = &l_481;
                int *l_607 = &l_116;
                int *l_608 = &l_235;
                int *l_609 = &l_449;
                int *l_610 = &l_493;
                int *l_611 = &l_493;
                int *l_612 = &g_23;
                int *l_613 = &l_399;
                int *l_614 = &l_500;
                int *l_615 = &l_116;
                int *l_616 = &l_449;
                int *l_617 = &l_413;
                int *l_618 = &g_23;
                int *l_619 = &l_116;
                int *l_620 = &g_3;
                int *l_621 = (void*)0;
                int *l_622 = &g_246;
                int *l_623 = &l_493;
                int *l_624 = &l_493;
                int *l_626 = (void*)0;
                int *l_627 = &g_441;
                int *l_628 = &l_399;
                int *l_629 = &g_246;
                int *l_630 = (void*)0;
                int *l_631 = &g_3;
                int *l_632 = (void*)0;
                int *l_633 = &l_235;
                int *l_634 = &g_246;
                int *l_635 = &g_3;
                int *l_636 = &l_399;
                int *l_637 = &l_333;
                int *l_639 = &l_493;
                int *l_640 = &l_213;
                int *l_641 = &l_235;
                int *l_642 = (void*)0;
                int *l_643 = &l_625;
                int *l_644 = &l_116;
                int *l_645 = &g_246;
                int *l_646 = &l_449;
                int *l_647 = &l_333;
                int *l_648 = &l_449;
                int *l_649 = &l_213;
                int *l_650 = (void*)0;
                int *l_651 = &l_638;
                int *l_652 = &g_23;
                int *l_653 = &g_23;
                int *l_654 = (void*)0;
                int *l_655 = &g_441;
                int *l_656 = (void*)0;
                int *l_657 = (void*)0;
                int *l_658 = (void*)0;
                int *l_659 = &g_17;
                int *l_660 = &l_399;
                int *l_661 = &l_638;
                int *l_662 = &l_213;
                int *l_663 = &l_116;
                int *l_664 = &g_246;
                int *l_665 = &l_625;
                int *l_666 = &l_333;
                int *l_667 = &g_3;
                int *l_668 = &g_17;
                int *l_669 = &g_3;
                for (g_246 = 29; (g_246 <= 7); g_246--)
                {
                    char *l_380 = &g_381;
                    int l_440 = 0xE82150C0L;
                    int l_488 = 1L;
                    for (g_3 = 22; (g_3 == (-6)); --g_3)
                    {
                        int *l_321 = &l_116;
                        int *l_322 = (void*)0;
                        int l_323 = 0x77F11762L;
                        int *l_324 = &g_23;
                        int *l_325 = &l_235;
                        int *l_326 = &g_23;
                        int *l_327 = &g_23;
                        int *l_328 = (void*)0;
                        int l_329 = 7L;
                        int *l_330 = &g_17;
                        int *l_331 = &l_213;
                        int *l_332 = &g_17;
                        int *l_334 = (void*)0;
                        int *l_335 = &l_235;
                        int *l_336 = &l_320;
                        int *l_337 = &l_320;
                        int *l_338 = &l_320;
                        int *l_339 = &l_116;
                        int *l_340 = &l_116;
                        int *l_341 = &g_17;
                        int *l_342 = &l_116;
                        int *l_343 = &g_23;
                        int *l_344 = &l_329;
                        int *l_345 = &l_320;
                        int *l_346 = &l_235;
                        int *l_347 = (void*)0;
                        int *l_348 = &g_23;
                        int *l_349 = &g_17;
                        int *l_350 = &l_116;
                        int *l_351 = (void*)0;
                        int *l_352 = (void*)0;
                        int *l_353 = (void*)0;
                        int l_354 = 0L;
                        int *l_355 = &g_17;
                        int l_356 = 1L;
                        int *l_357 = &l_323;
                        int *l_358 = &g_23;
                        int *l_359 = (void*)0;
                        int *l_360 = (void*)0;
                        int *l_361 = &l_329;
                        int *l_362 = (void*)0;
                        int *l_364 = &l_320;
                        int *l_365 = (void*)0;
                        int *l_366 = &l_320;
                        int *l_367 = &l_116;
                        int *l_368 = &l_323;
                        int *l_369 = &g_23;
                        int *l_370 = &l_235;
                        int l_372 = (-1L);
                        int *l_373 = &l_323;
                        int *l_374 = &l_354;
                        g_375--;
                    }
                    (**p_83) ^= (*g_59);
                    if ((safe_add_func_uint8_t_u_u(0x80L, ((*l_380) |= g_25))))
                    {
                        short l_384 = (-10L);
                        char *l_385 = &g_381;
                        short *l_386 = (void*)0;
                        short *l_387 = &g_388;
                        int l_390 = 0x601DA3A3L;
                        int *l_393 = (void*)0;
                        int *l_394 = &l_333;
                        int *l_395 = (void*)0;
                        int *l_396 = &l_390;
                        int *l_397 = &l_390;
                        int *l_398 = &l_235;
                        int *l_400 = &g_17;
                        int *l_401 = &l_235;
                        int *l_402 = &l_399;
                        int *l_403 = (void*)0;
                        int *l_404 = &l_390;
                        int *l_405 = (void*)0;
                        int *l_406 = &l_235;
                        int *l_407 = &l_333;
                        int *l_408 = &l_399;
                        int *l_409 = &l_390;
                        int *l_410 = &l_213;
                        int *l_411 = &g_23;
                        int *l_412 = &l_390;
                        int *l_414 = &l_413;
                        int *l_415 = &l_333;
                        int *l_416 = &g_3;
                        int *l_417 = &g_23;
                        int *l_418 = &l_213;
                        int *l_419 = &l_390;
                        int *l_420 = &l_116;
                        int *l_421 = &l_320;
                        int *l_422 = &l_413;
                        int *l_423 = &l_213;
                        int *l_424 = &l_116;
                        int *l_425 = &g_23;
                        int *l_426 = &g_3;
                        int *l_427 = &l_213;
                        int *l_428 = &l_333;
                        int *l_429 = &l_333;
                        int *l_430 = &l_116;
                        int *l_431 = &l_235;
                        int *l_432 = &l_320;
                        int *l_433 = &l_413;
                        int *l_434 = &g_3;
                        int *l_435 = &l_320;
                        int *l_436 = &g_3;
                        int *l_437 = &l_116;
                        int *l_438 = &g_3;
                        int *l_439 = &l_213;
                        int *l_442 = &l_213;
                        int *l_443 = &g_23;
                        int *l_444 = &l_333;
                        int *l_445 = &l_333;
                        int *l_446 = &l_440;
                        int *l_447 = &l_213;
                        int *l_448 = &l_235;
                        int *l_450 = &l_116;
                        int *l_451 = &l_320;
                        int *l_452 = &g_23;
                        int *l_453 = (void*)0;
                        int *l_454 = &l_116;
                        int *l_455 = &g_17;
                        int *l_456 = &l_320;
                        int *l_457 = (void*)0;
                        int *l_458 = (void*)0;
                        (**p_83) ^= ((**g_58) = (~func_85((((func_85(((0x66L != g_251) , (p_82 = ((*l_387) = (safe_add_func_uint32_t_u_u(((g_25 | (l_384 = p_81)) != (*g_59)), ((void*)0 != l_385))))))) <= (safe_unary_minus_func_uint32_t_u((l_390 &= 0x534DAAF5L)))) <= l_391) || l_392))));
                        g_459++;
                        if ((**p_83))
                            continue;
                        (*l_420) = (**p_83);
                    }
                    else
                    {
                        int *l_462 = &l_449;
                        int *l_463 = &g_17;
                        int *l_464 = (void*)0;
                        int *l_465 = &l_320;
                        int *l_466 = &l_235;
                        int *l_467 = &l_213;
                        int *l_468 = &l_449;
                        int *l_469 = &l_235;
                        int *l_470 = &l_399;
                        int *l_471 = &l_213;
                        int *l_472 = &g_17;
                        int *l_473 = (void*)0;
                        int *l_474 = &l_320;
                        int *l_475 = &l_235;
                        int *l_476 = (void*)0;
                        int *l_477 = &l_213;
                        int *l_478 = (void*)0;
                        int *l_479 = &l_399;
                        int *l_480 = &l_399;
                        int *l_482 = &l_116;
                        int *l_483 = &l_440;
                        int *l_484 = (void*)0;
                        int *l_485 = &g_17;
                        int *l_486 = (void*)0;
                        int *l_487 = &g_3;
                        int *l_489 = &l_488;
                        int *l_490 = &l_333;
                        int *l_491 = (void*)0;
                        int *l_492 = &l_213;
                        int *l_494 = (void*)0;
                        int *l_495 = (void*)0;
                        int *l_496 = &l_440;
                        int *l_497 = &l_413;
                        int *l_498 = &g_3;
                        int *l_499 = &l_213;
                        int *l_501 = &l_449;
                        int *l_502 = &g_23;
                        int *l_503 = &l_449;
                        int *l_504 = &l_488;
                        int *l_505 = &g_441;
                        int *l_506 = &l_488;
                        int *l_507 = &l_481;
                        int *l_508 = &g_23;
                        int *l_509 = &l_440;
                        int *l_510 = &g_3;
                        int *l_511 = &l_500;
                        int *l_512 = &l_116;
                        int *l_513 = &l_493;
                        int *l_514 = &l_399;
                        int *l_515 = &g_17;
                        int *l_516 = &l_116;
                        int *l_517 = &l_213;
                        int *l_518 = &l_440;
                        int *l_519 = &g_3;
                        short *l_527 = &g_388;
                        unsigned char *l_528 = (void*)0;
                        unsigned char *l_529 = &l_101;
                        int l_530 = 0L;
                        --g_520;
                        (*l_477) = ((*l_311) , ((*l_502) = (((*l_311) == (safe_mod_func_int8_t_s_s(((((*l_380) = 1L) >= (safe_lshift_func_int16_t_s_u(((*l_527) = (func_85(((*l_527) = 0xCBB3L)) >= ((((*l_529) ^= (*l_311)) ^ 7L) , (func_85(((*l_517) && p_82)) & (**g_58))))), p_80))) , p_81), (*l_311)))) , 0L)));
                        return l_530;
                    }
                }
                for (g_17 = 9; (g_17 >= (-30)); g_17--)
                {
                    unsigned **l_536 = &l_102;
                    int ****l_581 = &l_104;
                    int ****l_584 = &g_582;
                    char *l_585 = &g_381;
                    char **l_586 = (void*)0;
                    char **l_587 = &l_585;
                    for (l_449 = 0; (l_449 >= (-28)); l_449--)
                    {
                        unsigned **l_535 = &l_103;
                        int l_537 = 0L;
                        int l_538 = 0x58CCBB78L;
                        int l_539 = 0xA17076B1L;
                        int *l_540 = &l_413;
                        int *l_541 = (void*)0;
                        int *l_542 = &g_246;
                        int *l_543 = &g_441;
                        int *l_544 = &l_235;
                        int *l_545 = &g_441;
                        int *l_546 = &l_538;
                        int *l_547 = &l_539;
                        int *l_548 = &l_481;
                        int *l_549 = &g_246;
                        int *l_550 = &l_413;
                        int *l_551 = (void*)0;
                        int *l_552 = (void*)0;
                        int *l_553 = &l_538;
                        int *l_554 = &g_246;
                        int *l_555 = &l_235;
                        int *l_556 = &l_320;
                        int *l_557 = &l_539;
                        int *l_558 = &l_538;
                        int *l_559 = &l_235;
                        int *l_560 = &g_23;
                        int *l_561 = &g_3;
                        int *l_562 = &l_116;
                        int *l_563 = &g_23;
                        int *l_564 = &l_537;
                        int *l_565 = (void*)0;
                        int *l_566 = &l_235;
                        int *l_567 = &l_320;
                        int *l_568 = &l_320;
                        int *l_569 = (void*)0;
                        int *l_570 = (void*)0;
                        int *l_571 = (void*)0;
                        int *l_572 = &g_3;
                        l_536 = l_535;

                        ;
                        ++g_573;
                        if ((**p_83))
                            break;
                    }

                    ;
                    if ((safe_add_func_uint32_t_u_u(l_578, (safe_sub_func_uint16_t_u_u(((p_80 , (((*l_581) = &p_83) == ((*l_584) = g_582))) && l_391), func_85(((((((((&g_381 == (p_81 , ((*l_587) = l_585))) & (safe_mod_func_uint32_t_u_u((p_81 | g_97), 4294967293UL))) >= (**g_583)) | p_81) , g_246) , (void*)0) == (void*)0) , g_17)))))))
                    {
                        (**g_583) = func_85(g_573);
                    }
                    else
                    {
                        int **l_590 = (void*)0;
                        int **l_591 = &l_311;
                        (*l_591) = (**g_582);

                        ;
                    }

                    ;
                    l_592 = (*p_83);

                    ;
                }

                ;
                (*l_593) = (*g_583);

                ;
                g_670++;
            }

            ;
            ;
            l_673 = (*g_583);
            return p_80;
        }

        ;
        for (g_371 = (-18); (g_371 != 26); g_371++)
        {
            int l_680 = 0xF0A17552L;
            unsigned short **l_687 = (void*)0;
            unsigned short ***l_686 = &l_687;
            int l_716 = 0x20355440L;
            int **l_798 = &g_688;
            int l_953 = (-1L);
            const int *l_984 = &l_399;
            for (l_101 = (-23); (l_101 < 53); ++l_101)
            {
                unsigned char l_685 = 0xE5L;
                int *l_689 = &g_23;
                int *l_690 = &l_235;
                int *l_691 = &l_413;
                int *l_692 = &l_213;
                int *l_693 = (void*)0;
                int *l_694 = &l_232;
                int *l_695 = &g_441;
                int *l_696 = (void*)0;
                int *l_697 = &g_3;
                int *l_698 = &l_399;
                int *l_699 = &g_246;
                int *l_700 = &l_213;
                int *l_701 = &l_213;
                int *l_702 = &g_246;
                int *l_703 = &g_3;
                int *l_704 = &l_680;
                int *l_705 = (void*)0;
                int *l_706 = &g_17;
                int *l_707 = (void*)0;
                int *l_708 = &g_246;
                int *l_709 = (void*)0;
                int *l_710 = &g_23;
                int *l_711 = &g_3;
                int *l_712 = &g_3;
                int *l_713 = &l_399;
                int *l_714 = &l_399;
                int *l_715 = (void*)0;
                int *l_717 = (void*)0;
                int *l_718 = &g_23;
                int *l_719 = &l_213;
                int *l_720 = &g_23;
                int *l_721 = &g_23;
                int l_722 = 0xEE5B47ADL;
                int *l_723 = &g_23;
                int *l_724 = &l_722;
                int *l_725 = &l_116;
                int *l_726 = &l_716;
                int *l_727 = &g_441;
                int *l_728 = &l_413;
                int *l_729 = (void*)0;
                int *l_730 = &g_17;
                int *l_731 = &g_246;
                int *l_733 = &g_441;
                int *l_734 = &g_23;
                int *l_735 = (void*)0;
                int *l_736 = &l_213;
                int *l_737 = &l_716;
                int *l_738 = &l_116;
                int *l_739 = (void*)0;
                int *l_740 = &l_732;
                int *l_741 = &l_716;
                int *l_742 = &g_246;
                int *l_743 = &l_722;
                int *l_744 = &g_23;
                int *l_745 = &l_722;
                int *l_746 = &l_232;
                int l_747 = 0x82C4D354L;
                int *l_748 = (void*)0;
                int *l_749 = &g_17;
                int *l_750 = &l_399;
                int *l_751 = &g_17;
                int *l_752 = &g_23;
                int *l_753 = &l_732;
                int *l_754 = (void*)0;
                int *l_755 = &l_680;
                int *l_756 = &l_399;
                int *l_757 = &l_399;
                int *l_759 = &l_747;
                int *l_760 = (void*)0;
                int *l_761 = &g_23;
                int *l_762 = &g_17;
                int *l_763 = &l_232;
                int *l_764 = &l_722;
                int *l_766 = &l_399;
                int *l_767 = &l_747;
                int *l_768 = &l_722;
                int *l_769 = &l_722;
                int *l_770 = &l_213;
                int *l_771 = &l_716;
                int *l_772 = &l_732;
                int *l_773 = &l_680;
                int *l_774 = &l_747;
                int *l_775 = (void*)0;
                int *l_776 = &l_747;
                int *l_777 = &l_747;
                int *l_778 = (void*)0;
                int *l_779 = (void*)0;
                int *l_780 = &l_732;
                int *l_781 = &g_3;
                int *l_782 = (void*)0;
                int *l_783 = &l_413;
                int *l_784 = &g_246;
                int *l_785 = &l_716;
                int *l_786 = &l_680;
                g_688 = ((1L != ((((*l_673) > ((safe_rshift_func_uint8_t_u_u((((l_680 > p_81) || 0x5437L) , 0x90L), 1)) , (safe_rshift_func_int16_t_s_s(p_81, (safe_lshift_func_uint8_t_u_u(l_685, (((p_81 ^ (*l_311)) , (void*)0) == l_686))))))) != g_97) | 0x72CE6AA6L)) , (void*)0);

                ;
                ++g_787;
            }
            for (g_23 = 0; (g_23 >= (-9)); g_23--)
            {
                unsigned char *l_801 = &l_101;
                int l_816 = 0xCDA46070L;
                unsigned *l_819 = &g_787;
                unsigned char *l_820 = &g_459;
                const unsigned short **l_861 = (void*)0;
                int l_927 = (-1L);
                int l_931 = 0x97394E5EL;
                char *l_954 = &g_381;
                const short *l_972 = &g_973;
                const short *l_974 = &g_973;
                (*l_311) |= (+((**g_583) = (safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint8_t_u_s(func_85(((p_80 , 0xC9L) || ((safe_sub_func_int16_t_s_s((l_798 != &l_311), ((p_81 , (safe_rshift_func_int16_t_s_s(0x0D61L, 6))) & (0x87L | func_85(g_23))))) && (-6L)))), 2)) <= p_84) , 1UL), 3))));
                if (((*l_673) = (!(((*l_801) = (0xC3L < p_81)) ^ ((((*l_103) = (~(p_80 = (g_296--)))) & (func_85(g_3) ^ (p_82 == (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_765, (~(safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(l_816, ((*l_820) = (safe_rshift_func_uint16_t_u_s((((*l_819) = p_84) , (g_441 ^ 0L)), g_670))))), 12))))), l_816)), p_84)), (**g_583)))))) < (**p_83))))))
                {
                    int l_828 = 1L;
                    int ***l_833 = &g_583;
                    (*l_798) = &l_758;

                    ;
                    if (l_821)
                    {
                        (**g_583) = (safe_lshift_func_uint16_t_u_s((0L != ((safe_sub_func_uint8_t_u_u(g_375, (safe_sub_func_uint8_t_u_u(l_828, ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((*l_311), (func_85((*l_311)) == p_81))), 13)) || p_81))))) ^ (((l_833 != &l_798) < 0UL) , (***g_582)))), 6));
                    }
                    else
                    {
                        if ((***g_582))
                            break;
                    }
                    if ((*g_688))
                        continue;
                }
                else
                {
                    short **l_834 = (void*)0;
                    short *l_836 = &g_388;
                    short **l_835 = &l_836;
                    short *l_838 = (void*)0;
                    short **l_837 = &l_838;
                    int l_844 = 3L;
                    int *l_863 = &g_17;
                    int *l_864 = &g_246;
                    int *l_865 = &g_765;
                    int *l_866 = &g_246;
                    int *l_867 = &l_213;
                    int *l_868 = &g_3;
                    int *l_869 = &l_235;
                    int *l_870 = &l_844;
                    int *l_871 = &l_680;
                    int *l_872 = &l_816;
                    int *l_873 = &l_235;
                    int *l_874 = (void*)0;
                    int *l_875 = &g_765;
                    int *l_876 = &l_758;
                    int *l_877 = &g_765;
                    int *l_878 = &g_246;
                    int *l_879 = &l_116;
                    int *l_880 = &l_232;
                    int *l_881 = &g_3;
                    int *l_882 = &l_413;
                    int *l_883 = &l_116;
                    int *l_884 = &l_235;
                    int *l_885 = (void*)0;
                    int *l_886 = (void*)0;
                    int *l_887 = &l_680;
                    int *l_888 = &l_413;
                    int *l_889 = (void*)0;
                    int *l_890 = (void*)0;
                    int *l_891 = &l_399;
                    int *l_892 = &g_17;
                    int *l_893 = (void*)0;
                    int *l_894 = &l_235;
                    int *l_895 = &l_235;
                    int *l_896 = &g_765;
                    int *l_897 = &g_3;
                    int *l_898 = &g_441;
                    int *l_899 = &l_758;
                    int *l_900 = &l_758;
                    int *l_901 = &g_441;
                    int *l_902 = &g_441;
                    int *l_903 = (void*)0;
                    int *l_904 = &l_116;
                    int *l_905 = &l_232;
                    int *l_906 = &l_716;
                    int *l_907 = (void*)0;
                    int *l_908 = &l_758;
                    int *l_909 = &l_758;
                    int *l_910 = &l_732;
                    int *l_911 = &g_17;
                    int *l_912 = &l_844;
                    int *l_913 = (void*)0;
                    int *l_914 = &l_399;
                    int *l_915 = &g_441;
                    int *l_916 = (void*)0;
                    int *l_917 = &l_758;
                    int *l_918 = &l_235;
                    int *l_919 = &l_680;
                    int *l_920 = (void*)0;
                    int *l_921 = &g_3;
                    int *l_922 = &g_765;
                    int *l_923 = &l_213;
                    int *l_924 = &g_765;
                    int *l_925 = (void*)0;
                    int *l_926 = &g_441;
                    int *l_928 = &l_232;
                    int *l_929 = (void*)0;
                    int *l_930 = &g_3;
                    int *l_932 = &l_413;
                    int *l_933 = (void*)0;
                    int *l_934 = &g_765;
                    int *l_935 = &l_232;
                    int *l_936 = (void*)0;
                    int *l_937 = &l_716;
                    int *l_938 = &g_246;
                    int *l_939 = &l_235;
                    int *l_940 = (void*)0;
                    int *l_941 = &g_441;
                    if ((((((*l_835) = &g_388) == ((*l_837) = &l_821)) , ((void*)0 == l_839)) && (safe_sub_func_uint16_t_u_u(((p_82 > (((safe_unary_minus_func_uint8_t_u(g_251)) , ((g_135 , l_844) >= (((safe_mod_func_int8_t_s_s(((safe_add_func_int8_t_s_s((0L ^ g_787), p_81)) && 1L), p_84)) , 0xFFL) && 0xF3L))) & l_816)) , p_81), 0x54E6L))))
                    {
                        unsigned short l_855 = 0x0DF4L;
                        unsigned l_856 = 18446744073709551615UL;
                        if ((**p_83))
                            break;
                        l_856 &= (((**g_58) > 1L) && (((***g_582) ^ (p_82 ^ l_816)) == (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((l_816 && g_17), (safe_sub_func_uint32_t_u_u(func_85(g_441), (*l_311))))) > 1UL), l_855))));
                        l_844 |= func_85((!g_573));
                    }
                    else
                    {
                        const unsigned short ***l_862 = &l_861;
                        (**g_583) = (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((-3L), g_375)), 0x5261L));
                        (*l_862) = l_861;
                        return p_82;


                    }

                    ;
                    l_942--;
                }
                if ((**p_83))
                    break;
                if (((((*l_311) = (*l_673)) <= p_80) && ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((((-1L) >= p_81) != (safe_rshift_func_uint8_t_u_u(l_680, 4))), ((**l_839) = g_296))) != (safe_sub_func_int8_t_s_s(func_85(g_246), ((*l_954) = ((((func_85((1L & g_251)) <= (**p_83)) , 0xBD690EF3L) , p_81) != l_953))))), l_955)) > 0x9D2BL)))
                {
                    if ((safe_lshift_func_uint16_t_u_s((g_3 , ((g_670 , ((*l_254) &= p_81)) || ((((-7L) != (+(**p_83))) >= (safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_u(l_927, (safe_lshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(g_441, 7)) , (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_459, 1)), (g_251 = ((((l_972 = &p_82) != l_974) <= g_25) == g_375)))) , (*l_673)) , p_82)) <= g_975), g_381)), l_976)))) >= (-8L)) > 1UL), (**g_583)))) || p_82))), 6)))
                    {
                        (*g_59) = 0xA98BC18BL;
                        (*l_311) |= (**g_58);
                    }
                    else
                    {
                        (*g_59) = (**p_83);
                    }

                    ;
                }
                else
                {
                    unsigned char l_1023 = 252UL;
                    (***g_582) = (safe_add_func_int8_t_s_s((4294967290UL >= ((*l_819)++)), g_25));
                    if (l_931)
                    {
                        const int *l_982 = &g_983;
                        const int **l_981 = &l_982;
                        l_984 = ((*l_981) = (*l_798));

                        ;
                        ;
                        (*l_673) &= ((*l_311) = (**p_83));
                        if ((*g_59))
                            break;
                    }
                    else
                    {
                        int *l_985 = &g_975;
                        int *l_986 = &g_246;
                        int *l_987 = (void*)0;
                        int *l_988 = (void*)0;
                        int *l_989 = &g_975;
                        int *l_990 = &l_927;
                        int *l_991 = (void*)0;
                        int *l_992 = &g_765;
                        int *l_993 = &l_413;
                        int *l_994 = (void*)0;
                        int *l_995 = &g_17;
                        int *l_996 = &g_3;
                        int *l_997 = (void*)0;
                        int *l_998 = &g_441;
                        int *l_999 = &l_716;
                        int *l_1000 = &l_116;
                        int *l_1001 = (void*)0;
                        int *l_1002 = (void*)0;
                        int *l_1003 = &l_927;
                        int *l_1004 = &l_732;
                        int *l_1005 = &l_413;
                        int *l_1006 = (void*)0;
                        int *l_1007 = &l_732;
                        int *l_1008 = (void*)0;
                        int *l_1009 = &g_246;
                        int *l_1010 = &l_716;
                        int *l_1011 = &l_931;
                        int *l_1012 = (void*)0;
                        int *l_1013 = (void*)0;
                        int *l_1014 = &l_213;
                        int *l_1015 = &g_975;
                        int *l_1016 = &l_931;
                        int *l_1017 = &l_816;
                        int *l_1018 = &l_413;
                        int *l_1019 = (void*)0;
                        int *l_1020 = &l_816;
                        int *l_1021 = (void*)0;
                        int *l_1022 = &l_213;
                        l_673 = &l_758;

                        ;
                        if ((*g_59))
                            continue;
                        l_1023--;
                        (*l_798) = (*g_58);

                        ;
                    }
                }

                ;
            }

            ;
            ;
            l_680 |= func_85((*l_311));
            (*l_798) = (void*)0;

            ;
        }

        ;
        ;
    }
    else
    {
        int **l_1026 = &g_688;
        (*l_1026) = (**g_582);

        ;
    }


    ;
    return p_84;
}







static int func_85(short p_86)
{
    const int *l_87 = (void*)0;
    const int **l_88 = (void*)0;
    const int **l_89 = &l_87;
    int **l_91 = &g_59;
    int ***l_90 = &l_91;
    (*l_89) = l_87;
    (*l_90) = &g_59;
    return (**l_91);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_363, "g_363", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_375, "g_375", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_388, "g_388", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_459, "g_459", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_573, "g_573", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_765, "g_765", print_hash_value);
    transparent_crc(g_787, "g_787", print_hash_value);
    transparent_crc(g_973, "g_973", print_hash_value);
    transparent_crc(g_975, "g_975", print_hash_value);
    transparent_crc(g_983, "g_983", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1037, "g_1037", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1197, "g_1197", print_hash_value);
    transparent_crc(g_1351, "g_1351", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    transparent_crc(g_1453, "g_1453", print_hash_value);
    transparent_crc(g_1486, "g_1486", print_hash_value);
    transparent_crc(g_1517, "g_1517", print_hash_value);
    transparent_crc(g_1657, "g_1657", print_hash_value);
    transparent_crc(g_1677, "g_1677", print_hash_value);
    transparent_crc(g_1683, "g_1683", print_hash_value);
    transparent_crc(g_1691, "g_1691", print_hash_value);
    transparent_crc(g_1698, "g_1698", print_hash_value);
    transparent_crc(g_1760, "g_1760", print_hash_value);
    transparent_crc(g_1921, "g_1921", print_hash_value);
    transparent_crc(g_2194, "g_2194", print_hash_value);
    transparent_crc(g_2196, "g_2196", print_hash_value);
    transparent_crc(g_2294, "g_2294", print_hash_value);
    transparent_crc(g_2479, "g_2479", print_hash_value);
    transparent_crc(g_2480, "g_2480", print_hash_value);
    transparent_crc(g_2494, "g_2494", print_hash_value);
    transparent_crc(g_2621, "g_2621", print_hash_value);
    transparent_crc(g_2622, "g_2622", print_hash_value);
    transparent_crc(g_2630, "g_2630", print_hash_value);
    transparent_crc(g_2667, "g_2667", print_hash_value);
    transparent_crc(g_2715, "g_2715", print_hash_value);
    transparent_crc(g_2894, "g_2894", print_hash_value);
    transparent_crc(g_2918, "g_2918", print_hash_value);
    transparent_crc(g_3094, "g_3094", print_hash_value);
    transparent_crc(g_3105, "g_3105", print_hash_value);
    transparent_crc(g_3255, "g_3255", print_hash_value);
    transparent_crc(g_3325, "g_3325", print_hash_value);
    transparent_crc(g_3385, "g_3385", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
