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



static int g_6 = 0x9B2CFB63L;
static int g_21 = (-1L);
static unsigned g_23 = 8UL;
static char g_29 = 0xD0L;
static char g_33 = 0x6EL;
static char *g_32 = &g_33;
static const unsigned g_43 = 0x3494ABC2L;
static unsigned char g_62 = 0xE2L;
static int * volatile g_68 = &g_21;
static unsigned g_118 = 0UL;
static char g_128 = 0x0EL;
static unsigned char g_142 = 0x7BL;
static int g_178 = (-8L);
static volatile unsigned g_179 = 0xD73B7D96L;
static unsigned short g_190 = 0xDE0BL;
static int *g_200 = &g_6;
static int ** volatile g_199 = &g_200;
static int ** volatile g_210 = (void*)0;
static unsigned short g_220 = 1UL;
static int g_222 = 0xCD93D51DL;
static int * volatile g_239 = (void*)0;
static int * volatile g_240 = &g_222;
static unsigned char g_345 = 248UL;
static unsigned g_451 = 0UL;
static short g_476 = 0x288EL;
static unsigned *g_498 = &g_451;
static unsigned * const *g_497 = &g_498;
static unsigned g_501 = 4294967286UL;
static int ** const volatile g_504 = (void*)0;
static short g_516 = (-8L);
static short g_525 = 0x8EE9L;
static const unsigned short g_539 = 1UL;
static unsigned short g_547 = 0x6C57L;
static int g_683 = 8L;
static unsigned short g_698 = 0x2834L;
static int g_800 = (-3L);
static char g_816 = 0xEDL;
static short g_837 = 6L;
static volatile int g_845 = 6L;
static unsigned g_869 = 18446744073709551615UL;
static volatile int g_966 = 0x305BE39BL;
static volatile unsigned char g_993 = 249UL;
static const int *g_1053 = &g_683;
static const int ** const volatile g_1052 = &g_1053;
static int * volatile g_1083 = &g_222;
static int **g_1188 = &g_200;
static volatile char g_1240 = 0xC5L;
static volatile char *g_1239 = &g_1240;
static volatile char **g_1238 = &g_1239;
static volatile char *** volatile g_1237 = &g_1238;
static const int ** volatile g_1241 = &g_1053;
static volatile unsigned short g_1299 = 0x2208L;
static volatile char g_1346 = 1L;
static volatile unsigned char g_1438 = 0x90L;
static const int ** volatile g_1440 = (void*)0;
static char g_1504 = 0L;
static const int ** volatile g_1505 = &g_1053;
static unsigned short g_1571 = 0x13B8L;
static unsigned *g_1592 = (void*)0;
static unsigned ** volatile g_1591 = &g_1592;
static int ** volatile g_1622 = (void*)0;
static int g_1800 = 0xE12A3135L;
static int *g_2030 = (void*)0;
static int * volatile *g_2029 = &g_2030;
static unsigned short g_2237 = 0xC706L;
static int g_2474 = 0x185A4234L;
static int g_2574 = 0L;
static const volatile unsigned g_2590 = 0xA7AE4461L;
static char * const volatile *g_2592 = (void*)0;
static char * const volatile * volatile *g_2591 = &g_2592;
static char **g_2594 = &g_32;
static char ***g_2593 = &g_2594;
static volatile short g_2747 = (-4L);
static volatile unsigned g_2748 = 0x7ACB49BFL;
static volatile unsigned char g_2785 = 255UL;
static volatile unsigned short g_2903 = 0xE144L;
static int ** volatile g_2933 = (void*)0;



static unsigned short func_1(void);
static int func_2(short p_3, int p_4, const int p_5);
static const int func_8(int p_9, unsigned p_10, unsigned p_11, unsigned p_12, unsigned p_13);
static int func_14(char p_15, unsigned p_16, char p_17, char p_18);
static unsigned char func_30(char * p_31);
static int * func_35(unsigned * p_36);
static unsigned * func_37(const unsigned * p_38, unsigned p_39, int p_40, int p_41);
static unsigned short func_46(unsigned short p_47, unsigned p_48);
static const short func_49(short p_50, int p_51, char ** p_52, char * p_53, unsigned p_54);
static char func_57(int p_58, unsigned p_59, char p_60);
static unsigned short func_1(void)
{
    unsigned l_7 = 0x6210B999L;
    unsigned *l_22 = &g_23;
    char *l_28 = &g_29;
    char **l_34 = &g_32;
    int l_2678 = 0x3021B2AEL;
    int l_2829 = 0L;
    int l_2832 = 2L;
    int l_2836 = 0x5106019EL;
    unsigned l_2954 = 18446744073709551608UL;
    int *l_2959 = &l_2836;
    if (func_2(g_6, l_7, func_8(func_14(((safe_sub_func_uint32_t_u_u(((*l_22)++), l_7)) <= ((safe_sub_func_int8_t_s_s(((*l_28) = 0x3FL), l_7)) != func_30(((*l_34) = g_32)))), l_7, g_539, g_43), l_7, l_7, g_539, l_7)))
    {
        return g_2237;
    }
    else
    {
        unsigned l_2613 = 6UL;
        unsigned l_2629 = 0x1B963A29L;
        const unsigned l_2640 = 4294967287UL;
        int *l_2641 = &g_1800;
        int l_2651 = 3L;
        char l_2757 = 1L;
        int l_2837 = 8L;
        int l_2840 = 0xC1D13A2EL;
        for (g_525 = (-8); (g_525 >= (-21)); g_525 = safe_sub_func_int32_t_s_s(g_525, 1))
        {
            char l_2628 = 0L;
            int l_2730 = 4L;
            int l_2765 = (-7L);
            unsigned l_2894 = 0xADFA8EA2L;
            unsigned l_2919 = 0x8B185B7CL;
            char **l_2928 = &g_32;
            unsigned l_2929 = 3UL;
            if ((l_2613 == l_7))
            {
                short *l_2616 = (void*)0;
                short *l_2617 = (void*)0;
                int l_2622 = 0x2BCC70EFL;
                int *l_2623 = &g_2574;
                int l_2632 = 0L;
                int l_2738 = 0x9D2E40D0L;
                int l_2823 = 0xAC0CC634L;
                int l_2866 = 0xB57EA0C9L;
                int l_2908 = 1L;
                if ((((*l_28) = (**g_1238)) && (((g_837 = (safe_lshift_func_uint16_t_u_s(0xB917L, l_2613))) > (((***g_2593) && (0xD4FAL & ((safe_div_func_uint16_t_u_u(l_2622, g_698)) > l_2628))) ^ g_43)) < g_222)))
                {
                    unsigned char *l_2635 = &g_142;
                    int l_2636 = (-3L);
                    char l_2639 = 0xE0L;
                    int l_2731 = 0xEAEABB1EL;
                    char l_2737 = 2L;
                    (*l_2623) &= ((l_2641 = ((safe_rshift_func_uint16_t_u_s(g_816, g_29)) , l_2641)) != l_22);
                    for (g_62 = 0; (g_62 == 33); g_62 = safe_add_func_int16_t_s_s(g_62, 4))
                    {
                        int l_2644 = 0x72C9C453L;
                        int *l_2645 = &g_21;
                        int *l_2646 = (void*)0;
                        int *l_2647 = &g_21;
                        int *l_2648 = &g_683;
                        int *l_2649 = (void*)0;
                        int *l_2650 = &l_2644;
                        int *l_2652 = &l_2622;
                        int *l_2653 = (void*)0;
                        int *l_2654 = &g_683;
                        int *l_2655 = &g_21;
                        int *l_2656 = &g_222;
                        int *l_2657 = (void*)0;
                        int *l_2658 = &g_1800;
                        int *l_2659 = &g_1800;
                        int *l_2660 = (void*)0;
                        int *l_2661 = &l_2622;
                        int *l_2662 = &g_1800;
                        int *l_2663 = &l_2651;
                        int *l_2664 = &l_2636;
                        int *l_2665 = (void*)0;
                        int *l_2666 = &l_2636;
                        int *l_2667 = &l_2632;
                        int *l_2668 = &l_2636;
                        int *l_2669 = (void*)0;
                        int *l_2670 = &l_2644;
                        int *l_2671 = &g_1800;
                        int *l_2672 = &g_800;
                        int *l_2673 = &g_1800;
                        int *l_2674 = &g_21;
                        int *l_2675 = (void*)0;
                        int *l_2676 = &l_2622;
                        int *l_2677 = (void*)0;
                        int *l_2679 = &g_800;
                        int *l_2680 = &l_2678;
                        int *l_2681 = (void*)0;
                        int *l_2682 = &l_2651;
                        int *l_2683 = (void*)0;
                        int *l_2684 = &g_222;
                        int *l_2685 = &g_21;
                        int *l_2686 = &l_2632;
                        int *l_2687 = &g_683;
                        int *l_2688 = &g_21;
                        int *l_2689 = &g_6;
                        int *l_2690 = (void*)0;
                        int *l_2691 = &g_21;
                        int *l_2692 = &g_2574;
                        int *l_2693 = (void*)0;
                        int *l_2694 = &l_2644;
                        int *l_2695 = (void*)0;
                        int *l_2696 = &g_21;
                        int *l_2697 = &l_2678;
                        int *l_2698 = &g_683;
                        int *l_2699 = &g_2574;
                        int *l_2700 = &g_6;
                        int *l_2701 = &l_2636;
                        int *l_2702 = &l_2651;
                        int *l_2703 = &l_2651;
                        int *l_2704 = &g_800;
                        int *l_2705 = (void*)0;
                        int *l_2706 = &g_21;
                        int *l_2707 = &g_2574;
                        int *l_2708 = &l_2636;
                        int *l_2709 = &g_6;
                        int *l_2710 = &g_2574;
                        int *l_2711 = &l_2632;
                        int *l_2712 = (void*)0;
                        int *l_2713 = &g_222;
                        int *l_2714 = &g_1800;
                        int *l_2715 = &l_2644;
                        int *l_2716 = &l_2632;
                        int *l_2717 = &g_6;
                        int *l_2718 = &l_2644;
                        int *l_2719 = &l_2622;
                        int *l_2720 = &l_2651;
                        int *l_2721 = &g_6;
                        int *l_2722 = &g_683;
                        int *l_2723 = &g_683;
                        int *l_2724 = &l_2636;
                        int *l_2725 = &l_2644;
                        int *l_2726 = &g_1800;
                        int *l_2727 = (void*)0;
                        int *l_2728 = &l_2678;
                        int *l_2729 = &l_2632;
                        int *l_2732 = &g_2574;
                        int *l_2733 = (void*)0;
                        int *l_2734 = &g_222;
                        int *l_2735 = (void*)0;
                        int *l_2736 = &l_2678;
                        int *l_2739 = &l_2730;
                        int *l_2740 = &g_800;
                        int *l_2741 = &l_2651;
                        int *l_2742 = &g_1800;
                        int *l_2743 = &l_2651;
                        int *l_2744 = &g_800;
                        int *l_2745 = &l_2632;
                        int *l_2746 = &l_2678;
                        int *l_2760 = (void*)0;
                        int *l_2761 = &l_2651;
                        int *l_2762 = &g_1800;
                        int *l_2763 = (void*)0;
                        int *l_2764 = &g_222;
                        int *l_2766 = (void*)0;
                        int *l_2767 = &g_683;
                        int *l_2768 = &l_2738;
                        int *l_2769 = (void*)0;
                        int *l_2770 = &l_2632;
                        int *l_2771 = &l_2651;
                        int *l_2772 = &g_222;
                        int *l_2773 = &g_1800;
                        int *l_2774 = &l_2636;
                        int *l_2775 = &l_2731;
                        int *l_2776 = (void*)0;
                        int *l_2777 = (void*)0;
                        int *l_2778 = &l_2636;
                        int *l_2779 = &l_2636;
                        int *l_2780 = (void*)0;
                        int *l_2781 = &l_2644;
                        int *l_2782 = (void*)0;
                        int *l_2783 = &l_2622;
                        int *l_2784 = &g_222;
                        l_2644 |= (*g_68);
                        g_2748--;
                        (*l_2746) = ((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((*g_32), ((*l_28) = (safe_mod_func_uint8_t_u_u(((*l_2635) = ((l_2628 , l_2757) != g_29)), func_8((*l_2623), (safe_div_func_int8_t_s_s(((void*)0 == &g_1083), 0x59L)), (*g_498), (*l_2623), (*l_2623))))))), 14)) && 0x0A5DD071L);
                        --g_2785;
                    }
                }
                else
                {
                    int *l_2788 = &g_1800;
                    int *l_2789 = &g_21;
                    int *l_2790 = &g_2574;
                    int *l_2791 = &l_2730;
                    int *l_2792 = &l_2651;
                    int *l_2793 = &l_2678;
                    int *l_2794 = (void*)0;
                    int *l_2795 = &l_2738;
                    int *l_2796 = &l_2730;
                    int *l_2797 = &l_2678;
                    int *l_2798 = &l_2632;
                    int *l_2799 = (void*)0;
                    int *l_2800 = &g_222;
                    int *l_2801 = &l_2622;
                    int *l_2802 = &l_2678;
                    int *l_2803 = &l_2632;
                    int *l_2804 = &g_6;
                    int *l_2805 = &g_222;
                    int *l_2806 = &g_6;
                    int *l_2807 = &g_6;
                    int *l_2808 = &g_21;
                    int *l_2809 = (void*)0;
                    int *l_2810 = &l_2622;
                    int *l_2811 = (void*)0;
                    int *l_2812 = &l_2622;
                    int *l_2813 = &g_21;
                    int *l_2814 = &g_1800;
                    int *l_2815 = &l_2632;
                    int *l_2816 = (void*)0;
                    int *l_2817 = (void*)0;
                    int *l_2818 = &l_2678;
                    int *l_2819 = &g_800;
                    int *l_2820 = &g_683;
                    int l_2821 = 4L;
                    int *l_2822 = (void*)0;
                    int *l_2824 = &l_2765;
                    int *l_2825 = &g_1800;
                    int *l_2826 = &l_2632;
                    int *l_2827 = &g_21;
                    int *l_2828 = &g_683;
                    int *l_2830 = &l_2730;
                    int *l_2831 = &g_6;
                    int *l_2833 = (void*)0;
                    int l_2834 = 0xC2680F84L;
                    int *l_2835 = &l_2765;
                    int *l_2838 = &g_6;
                    int *l_2839 = (void*)0;
                    int *l_2841 = &l_2837;
                    int *l_2842 = &l_2837;
                    int *l_2843 = (void*)0;
                    int *l_2844 = &l_2832;
                    int *l_2845 = &l_2622;
                    int *l_2846 = &g_1800;
                    int *l_2847 = (void*)0;
                    int *l_2848 = &l_2738;
                    int *l_2849 = &l_2834;
                    int *l_2850 = &g_683;
                    int *l_2851 = (void*)0;
                    int *l_2852 = &l_2632;
                    int *l_2853 = &l_2823;
                    int *l_2854 = &g_21;
                    int *l_2855 = &l_2837;
                    int *l_2856 = &g_21;
                    int *l_2857 = (void*)0;
                    int *l_2858 = &l_2738;
                    int *l_2859 = &g_21;
                    int *l_2860 = (void*)0;
                    int *l_2861 = &l_2840;
                    int *l_2862 = &l_2840;
                    int *l_2863 = &g_800;
                    int *l_2864 = &l_2730;
                    int *l_2865 = &l_2832;
                    int l_2867 = 0x83AB0AD6L;
                    int *l_2868 = &l_2866;
                    int *l_2869 = &l_2829;
                    int *l_2870 = &l_2866;
                    int *l_2871 = &l_2836;
                    int *l_2872 = &l_2821;
                    int *l_2873 = &l_2866;
                    int *l_2874 = (void*)0;
                    int *l_2875 = &l_2622;
                    int *l_2876 = &l_2821;
                    int *l_2877 = &l_2622;
                    int *l_2878 = &l_2738;
                    int *l_2879 = &g_222;
                    int *l_2880 = &g_222;
                    int *l_2881 = &l_2832;
                    int *l_2882 = (void*)0;
                    int *l_2883 = (void*)0;
                    int *l_2884 = (void*)0;
                    int l_2885 = 4L;
                    int *l_2886 = &l_2622;
                    int *l_2887 = (void*)0;
                    int *l_2888 = &l_2765;
                    int *l_2889 = &l_2730;
                    int *l_2890 = (void*)0;
                    int *l_2891 = &g_683;
                    int *l_2892 = &l_2730;
                    int *l_2893 = &g_1800;
                    (*g_1188) = &l_2678;
                    --l_2894;
                }
                for (l_2622 = 0; (l_2622 == 18); l_2622++)
                {
                    unsigned l_2904 = 0xF046F8DCL;
                    (*l_2623) ^= (safe_rshift_func_int8_t_s_s(((&g_239 == &g_1053) & 1L), 3));
                    for (g_501 = 29; (g_501 == 11); g_501--)
                    {
                        unsigned char *l_2905 = &g_142;
                        (*l_2623) = (g_2903 > ((l_2904 && g_345) && ((*l_2905) = g_1504)));
                        (*l_2641) = ((safe_lshift_func_int8_t_s_s((*l_2623), (l_2908 == 0x4B3EL))) == 4294967293UL);
                    }
                    if (l_2730)
                        continue;
                    (*l_2641) = ((safe_sub_func_uint16_t_u_u(g_2590, l_2904)) , 0x8658D8A7L);
                }
                if ((*l_2623))
                    break;
            }
            else
            {
                unsigned char *l_2920 = &g_62;
                unsigned l_2927 = 0UL;
                int *l_2934 = &g_6;
                int *l_2935 = &l_2651;
                int *l_2936 = &l_2678;
                int *l_2937 = (void*)0;
                int *l_2938 = &l_2651;
                int *l_2939 = (void*)0;
                int *l_2940 = &l_2837;
                int *l_2941 = &g_683;
                int *l_2942 = &l_2765;
                int *l_2943 = &l_2837;
                int *l_2944 = &g_2574;
                int *l_2945 = &l_2678;
                int *l_2946 = &l_2840;
                int *l_2947 = &l_2837;
                int *l_2948 = (void*)0;
                int *l_2949 = &g_1800;
                int *l_2950 = &g_222;
                int *l_2951 = &l_2651;
                int *l_2952 = (void*)0;
                int *l_2953 = &l_2829;
                (*l_2641) = (((*l_2920) = (*l_2641)) , ((((safe_div_func_int32_t_s_s(((void*)0 == &l_2919), (safe_lshift_func_uint8_t_u_u(g_190, 6)))) || (l_2832 , 0UL)) , l_2929) ^ 0x35L));
                for (g_128 = 3; (g_128 < 19); g_128 = safe_add_func_int8_t_s_s(g_128, 2))
                {
                    int *l_2932 = (void*)0;
                    l_2934 = ((*g_1188) = l_2932);
                }
                l_2954++;
                if (l_2929)
                    continue;
            }
            (*l_2641) |= l_2765;
        }
    }
    if ((0UL && (safe_unary_minus_func_uint8_t_u(l_2836))))
    {
        unsigned l_2958 = 0xAC20B535L;
        return l_2958;
    }
    else
    {
        unsigned **l_2962 = (void*)0;
        int l_2963 = 1L;
        (*g_1188) = l_2959;
        l_2963 = (safe_rshift_func_int16_t_s_s((&g_498 != l_2962), 0));
        (*g_200) = (safe_rshift_func_uint8_t_u_s((*l_2959), 3));
    }
    (*g_1188) = func_37(&l_7, g_29, ((*l_2959) & func_30((*g_2594))), (*l_2959));
    return g_118;
}







static int func_2(short p_3, int p_4, const int p_5)
{
    int *l_1087 = &g_222;
    int *l_1088 = &g_683;
    int l_1089 = 0xCA3995A5L;
    int *l_1090 = (void*)0;
    int *l_1091 = (void*)0;
    int *l_1092 = &g_6;
    int *l_1093 = (void*)0;
    int *l_1094 = &g_683;
    int *l_1095 = &g_800;
    int *l_1096 = &g_800;
    int *l_1097 = &g_21;
    int *l_1098 = (void*)0;
    int *l_1099 = &g_6;
    int *l_1100 = &g_6;
    int *l_1101 = &g_800;
    int *l_1102 = &g_683;
    int *l_1103 = &l_1089;
    int *l_1104 = &g_222;
    int *l_1105 = (void*)0;
    int l_1106 = 4L;
    int l_1107 = (-1L);
    int *l_1108 = &g_683;
    int *l_1109 = (void*)0;
    int *l_1110 = &l_1107;
    int *l_1111 = &g_21;
    int *l_1112 = &l_1106;
    int *l_1113 = &g_21;
    int *l_1114 = &l_1107;
    int *l_1115 = &l_1089;
    int *l_1116 = &l_1107;
    int *l_1117 = &g_222;
    int *l_1118 = &g_800;
    int *l_1119 = &l_1106;
    int *l_1120 = &l_1106;
    int *l_1121 = (void*)0;
    int *l_1122 = &l_1106;
    int *l_1123 = (void*)0;
    int *l_1124 = (void*)0;
    int *l_1125 = &l_1106;
    int l_1126 = (-1L);
    int *l_1127 = (void*)0;
    int *l_1128 = (void*)0;
    int *l_1129 = &g_6;
    int l_1130 = 0xCF0830DEL;
    int *l_1131 = &l_1089;
    int l_1132 = (-1L);
    int *l_1133 = (void*)0;
    int *l_1134 = &l_1130;
    int *l_1135 = &g_21;
    int *l_1136 = (void*)0;
    int *l_1137 = &g_800;
    int l_1138 = 0L;
    int *l_1139 = (void*)0;
    int *l_1140 = &l_1107;
    int *l_1141 = &l_1130;
    int *l_1142 = (void*)0;
    int *l_1143 = &l_1107;
    int *l_1144 = &g_222;
    int *l_1145 = &l_1107;
    int *l_1146 = (void*)0;
    int *l_1147 = &g_683;
    int *l_1148 = &g_21;
    int *l_1149 = &l_1126;
    int *l_1150 = &l_1089;
    int l_1151 = 4L;
    int l_1152 = 0xCEA28B86L;
    int *l_1153 = &l_1130;
    int *l_1154 = (void*)0;
    int *l_1155 = &l_1151;
    int *l_1156 = &g_222;
    int *l_1157 = &g_6;
    int *l_1158 = &g_683;
    int *l_1159 = &l_1107;
    int *l_1160 = &g_800;
    int *l_1161 = &l_1138;
    int *l_1162 = &g_222;
    int *l_1163 = &l_1151;
    int *l_1164 = &g_222;
    int *l_1165 = &g_21;
    int *l_1166 = (void*)0;
    int *l_1167 = &l_1132;
    int *l_1168 = &l_1126;
    int *l_1169 = &g_222;
    int *l_1170 = &g_21;
    int *l_1171 = (void*)0;
    int *l_1172 = &l_1138;
    int *l_1173 = &g_683;
    int *l_1174 = &g_6;
    int *l_1175 = &l_1132;
    int l_1176 = 0xDD997315L;
    int *l_1177 = (void*)0;
    int *l_1178 = &l_1132;
    int *l_1179 = (void*)0;
    int *l_1180 = &l_1130;
    int *l_1181 = &l_1089;
    int *l_1182 = (void*)0;
    unsigned l_1183 = 0x4D3C1746L;
    unsigned *l_1189 = &g_869;
    char *l_1190 = &g_33;
    int *l_1191 = &g_178;
    int l_1451 = (-8L);
    short l_1465 = 0xEDD5L;
    unsigned char l_1480 = 0xE2L;
    unsigned **l_1511 = &g_498;
    unsigned ***l_1510 = &l_1511;
    unsigned char l_1809 = 255UL;
    int l_2158 = 0x19133FB3L;
    int l_2166 = 0xBC278ECAL;
    int l_2183 = 0x295032D4L;
    int l_2185 = (-1L);
    int l_2253 = 1L;
    int * const l_2272 = &l_1152;
    char l_2296 = 0x55L;
    unsigned short *l_2319 = &g_547;
    unsigned short **l_2318 = &l_2319;
    unsigned short l_2403 = 1UL;
lbl_2001:
    ++l_1183;
    if ((*l_1178))
    {
        unsigned l_1194 = 0xD3381C8EL;
        int l_1199 = 1L;
        unsigned *l_1200 = (void*)0;
        unsigned *l_1201 = &g_23;
        unsigned short *l_1225 = &g_220;
        unsigned char *l_1255 = &g_62;
        const unsigned char * const l_1305 = (void*)0;
        int l_1324 = 0x1F55D4A9L;
        int l_1325 = 0xF9A63BBFL;
        int l_1353 = 0x3986EC0CL;
        int l_1354 = 0xA1EE4C67L;
        int l_1358 = (-2L);
        int l_1374 = 9L;
        int l_1406 = 0x7A497721L;
        unsigned short l_1426 = 65532UL;
        unsigned l_1493 = 1UL;
        char l_1494 = 0L;
        char **l_1663 = &l_1190;
        unsigned ***l_1815 = (void*)0;
        int l_1935 = 0xC72A727AL;
        unsigned char l_2007 = 255UL;
        if (((*l_1168) , (g_993 || (((*l_1201) |= (safe_lshift_func_int8_t_s_u((+func_57((*l_1158), (*g_498), (p_4 , (l_1194 > g_43)))), (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((l_1194 >= l_1194), 4)), l_1199))))) <= 1UL))))
        {
            unsigned l_1203 = 0x619A3571L;
            int l_1207 = 1L;
            int l_1276 = 0xBF9CD476L;
            unsigned **l_1281 = &l_1201;
            short l_1290 = 0L;
            char *l_1321 = (void*)0;
            int l_1366 = 0x0ACD3797L;
            int l_1375 = 0x666DD0E0L;
            int l_1408 = 0x32040648L;
            const unsigned *l_1442 = &g_43;
            unsigned char l_1515 = 0UL;
            if (((*l_1118) ^= (*g_1053)))
            {
                unsigned char l_1202 = 0x85L;
                return l_1202;
            }
            else
            {
                unsigned short l_1208 = 0x2D0AL;
                int l_1214 = 0x060CD649L;
                char **l_1222 = &l_1190;
                int *l_1249 = (void*)0;
                const int **l_1250 = &g_1053;
                const int *l_1252 = &g_222;
                const int **l_1251 = &l_1252;
                if (l_1203)
                {
                    unsigned char l_1204 = 1UL;
                    int *l_1242 = (void*)0;
                    (*l_1101) = ((((0xD9C39B50L | (func_57(l_1204, (**g_497), ((*g_32) ^= (safe_div_func_int8_t_s_s(0L, p_5)))) && p_4)) == p_4) != p_5) || 0xEFA315E6L);
                    ++l_1208;
                    for (l_1183 = 0; (l_1183 != 43); l_1183++)
                    {
                        char *l_1213 = &g_33;
                        int l_1219 = (-1L);
                        char ***l_1223 = &l_1222;
                        unsigned char *l_1224 = &g_142;
                        (*l_1159) &= ((*l_1096) |= (l_1214 |= p_4));
                        (*l_1104) = (65529UL ^ (safe_sub_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(((l_1219 , (p_3 , ((*l_1224) = (!((l_1219 |= (p_4 && ((&g_33 != &g_33) >= (safe_rshift_func_int16_t_s_s(((-1L) != (((*l_1223) = l_1222) == (void*)0)), 2))))) ^ l_1204))))) > l_1199), 0xF700D4DEL)) , l_1204) , 0x93L), 0x6AL)));
                        (*g_1241) = (((void*)0 != l_1225) , ((((safe_div_func_uint8_t_u_u(p_5, (*g_32))) , l_1214) != (((safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((p_3 != (g_62 = (safe_unary_minus_func_int32_t_s((*g_240))))) , (l_1219 &= ((**g_497) = (((p_4 > p_3) >= g_23) || l_1204)))), p_3)) | 0x7A22C297L), l_1199)) == (*g_1053)) == p_4)) , &p_5));
                        (*l_1143) ^= (*g_1083);
                    }
                    if (((*l_1170) = l_1204))
                    {
                        return p_3;
                    }
                    else
                    {
                        l_1242 = ((*g_1188) = &l_1199);
                    }
                }
                else
                {
                    for (l_1214 = 25; (l_1214 != 27); ++l_1214)
                    {
                        const int **l_1245 = (void*)0;
                        const int **l_1246 = (void*)0;
                        const int **l_1247 = &g_1053;
                        int l_1248 = (-1L);
                        (*l_1247) = &p_5;
                        if ((*l_1099))
                            break;
                        l_1248 &= p_4;
                    }
                    (*l_1119) = p_5;
                }
                (*g_1188) = (l_1249 = &l_1214);
                (*l_1251) = ((*l_1250) = ((p_3 > g_816) , &p_5));
            }
            for (l_1132 = 0; (l_1132 > 8); l_1132 = safe_add_func_int16_t_s_s(l_1132, 9))
            {
                unsigned **l_1256 = (void*)0;
                unsigned *l_1257 = &l_1203;
                const unsigned *l_1259 = &g_43;
                const unsigned **l_1258 = &l_1259;
                int l_1260 = 7L;
                (*g_1188) = func_37(func_37(((*l_1258) = ((&g_142 != l_1255) , func_35((l_1257 = &l_1203)))), l_1260, p_4, p_5), ((safe_rshift_func_uint8_t_u_s((((((p_5 && 0x26FFL) | g_547) && 0xF9DC8992L) != p_3) <= 0xB616L), 6)) & g_43), g_547, l_1207);
            }
            if (l_1194)
            {
                unsigned char l_1268 = 1UL;
                char l_1275 = 0xDAL;
                int l_1293 = (-5L);
                for (g_6 = 18; (g_6 >= (-21)); g_6--)
                {
                    char l_1265 = 0x56L;
                    if ((**g_1052))
                        break;
                    if (g_23)
                        goto lbl_1292;
                    l_1265 = l_1207;
                    if (g_547)
                        goto lbl_1292;
                    if ((safe_div_func_int16_t_s_s(((l_1268 < (((safe_add_func_uint16_t_u_u(((((func_57(((*l_1191) = ((safe_lshift_func_int16_t_s_u(g_23, ((((*l_1190) = ((void*)0 != &g_497)) & p_5) || l_1194))) < (safe_lshift_func_uint8_t_u_u((l_1199 || ((void*)0 == &l_1265)), p_5)))), (**g_497), p_5) , 0x1DL) && p_3) || g_966) != p_4), p_5)) , l_1275) , 0UL)) , (-2L)), 0x72BEL)))
                    {
                        return (*g_68);
                    }
                    else
                    {
                        unsigned l_1277 = 0x73BC96BBL;
                        int *l_1280 = (void*)0;
                        ++l_1277;
                        (*g_1188) = l_1280;
                    }
                }
                if (p_4)
                {
                    (*l_1157) |= ((p_4 | 2L) ^ ((((safe_lshift_func_int8_t_s_u(p_4, (safe_sub_func_int32_t_s_s((0L >= (**g_1238)), (+l_1203))))) | (g_23 <= (0UL < ((~l_1290) , 0x19L)))) , 0xAC4EL) && l_1194));
                    return (*g_68);
                }
                else
                {
lbl_1292:
                    if ((l_1207 && 8L))
                    {
                        const int **l_1291 = &g_1053;
                        (*l_1291) = &p_5;
                    }
                    else
                    {
                        (*l_1101) = (-1L);
                    }
                    (*g_1188) = (void*)0;
                    (*l_1113) ^= (p_5 < ((l_1293 || ((*l_1131) = l_1203)) , p_5));
                }
            }
            else
            {
                int l_1298 = 0xE7E34BBFL;
                unsigned short *l_1302 = &g_547;
                const unsigned *l_1318 = (void*)0;
                int l_1394 = 0x5CCDDDF7L;
                char ***l_1452 = (void*)0;
                char **l_1454 = &l_1190;
                char ***l_1453 = &l_1454;
                if ((((*l_1190) = (safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u(((((p_4 > ((0x8813L & g_845) && l_1298)) , (g_1299 & (*g_1053))) >= ((*l_1302) |= (--(*l_1225)))) , (p_5 || l_1290)), ((*g_32) , 249UL))) | 0UL) != l_1199), 6))) != l_1199))
                {
                    char *l_1303 = &g_128;
                    int l_1304 = 1L;
                    (*l_1140) = ((((p_5 , (*g_498)) <= l_1207) , l_1304) , (((void*)0 == l_1305) , (safe_div_func_int32_t_s_s(0xBF480E98L, ((safe_div_func_int16_t_s_s((((++(*l_1225)) , (void*)0) == (void*)0), 0xE1BCL)) | 0x16827444L)))));
                }
                else
                {
                    unsigned *l_1319 = &l_1183;
                    char **l_1320 = &g_32;
                    int l_1322 = 0L;
                    int l_1323 = 0x3A944834L;
                    int *l_1326 = &l_1324;
                    int *l_1327 = &l_1107;
                    int *l_1328 = &g_800;
                    int *l_1329 = &l_1106;
                    int *l_1330 = &l_1130;
                    int *l_1331 = &l_1324;
                    int *l_1332 = (void*)0;
                    int *l_1333 = &l_1089;
                    int *l_1334 = &l_1322;
                    int *l_1335 = &l_1138;
                    int *l_1336 = &g_6;
                    int *l_1337 = &l_1323;
                    int *l_1338 = &l_1322;
                    int *l_1339 = &l_1325;
                    int *l_1340 = &g_222;
                    int *l_1341 = &l_1138;
                    int *l_1342 = &l_1107;
                    int *l_1343 = &l_1151;
                    int *l_1344 = &l_1324;
                    int *l_1345 = &l_1130;
                    int *l_1347 = &l_1207;
                    int *l_1348 = &g_800;
                    int *l_1349 = &l_1106;
                    int *l_1350 = &g_222;
                    int *l_1351 = &l_1276;
                    int *l_1352 = &l_1132;
                    int *l_1355 = &l_1276;
                    int *l_1356 = &g_800;
                    int *l_1357 = &l_1322;
                    int *l_1359 = &l_1207;
                    int *l_1360 = &g_21;
                    int *l_1361 = &g_800;
                    int *l_1362 = &l_1107;
                    int *l_1363 = &l_1106;
                    int *l_1364 = &l_1325;
                    int *l_1365 = &l_1089;
                    int *l_1367 = (void*)0;
                    int *l_1368 = &g_21;
                    int *l_1369 = &l_1323;
                    int *l_1370 = &l_1151;
                    int *l_1371 = (void*)0;
                    int *l_1372 = &l_1323;
                    int *l_1373 = &g_222;
                    int *l_1376 = &l_1276;
                    int l_1377 = (-1L);
                    int *l_1378 = &g_6;
                    int *l_1379 = &g_683;
                    int *l_1380 = &l_1374;
                    int *l_1381 = &l_1138;
                    int *l_1382 = &l_1366;
                    int *l_1383 = &l_1089;
                    int *l_1384 = (void*)0;
                    int *l_1385 = &l_1375;
                    int *l_1386 = &l_1366;
                    int *l_1387 = &l_1106;
                    int *l_1388 = &l_1089;
                    int *l_1389 = &l_1377;
                    int *l_1390 = &l_1323;
                    int *l_1391 = &l_1298;
                    int *l_1392 = &l_1151;
                    int *l_1393 = (void*)0;
                    int *l_1395 = &l_1323;
                    int *l_1396 = &l_1199;
                    int *l_1397 = (void*)0;
                    int *l_1398 = &l_1375;
                    int *l_1399 = &l_1374;
                    int *l_1400 = (void*)0;
                    int *l_1401 = (void*)0;
                    int *l_1402 = &l_1354;
                    int *l_1403 = (void*)0;
                    int *l_1404 = (void*)0;
                    int *l_1405 = &l_1375;
                    int *l_1407 = &l_1151;
                    int *l_1409 = &l_1130;
                    int *l_1410 = &g_21;
                    int *l_1411 = &l_1176;
                    int *l_1412 = &l_1298;
                    int *l_1413 = &l_1106;
                    int *l_1414 = &l_1366;
                    int *l_1415 = (void*)0;
                    int *l_1416 = &l_1366;
                    int *l_1417 = &l_1374;
                    int *l_1418 = (void*)0;
                    int *l_1419 = &l_1325;
                    int *l_1420 = &l_1323;
                    int *l_1421 = &l_1176;
                    int *l_1422 = &l_1322;
                    int *l_1423 = &l_1358;
                    int *l_1424 = &l_1132;
                    int *l_1425 = &l_1126;
                    for (g_837 = 0; (g_837 <= (-8)); g_837 = safe_sub_func_int32_t_s_s(g_837, 9))
                    {
                        int **l_1314 = &l_1113;
                        unsigned ***l_1315 = (void*)0;
                        unsigned **l_1317 = &l_1189;
                        unsigned ***l_1316 = &l_1317;
                        (*l_1314) = ((*g_199) = func_37(&g_43, g_800, g_142, ((*l_1191) &= 7L)));
                        (*l_1316) = (void*)0;
                        (*g_1188) = func_37(func_37(l_1318, g_1299, (g_525 > ((l_1319 == &l_1183) <= ((*l_1302) |= ((&p_5 != (void*)0) ^ (**g_497))))), (*l_1150)), g_178, l_1207, p_3);
                    }
                    if (g_525)
                        goto lbl_1429;
                    (*g_1188) = func_37(l_1319, p_4, func_8((((*l_1320) = l_1190) == l_1321), ((g_698 != g_845) != l_1322), p_3, ((*l_1189) = l_1322), p_4), l_1199);
lbl_1429:
                    --l_1426;
                    for (g_345 = (-26); (g_345 != 40); g_345 = safe_add_func_int32_t_s_s(g_345, 2))
                    {
                        short *l_1436 = &l_1290;
                        char *l_1437 = &g_816;
                        const int **l_1439 = (void*)0;
                        const int **l_1441 = &g_1053;
                        (*l_1144) &= (safe_div_func_uint8_t_u_u(((0x1AF4L != l_1394) | g_816), g_1438));
                        (*l_1441) = (*g_1241);
                        return p_3;
                    }
                }
                (*g_1188) = func_37(l_1442, l_1298, g_525, (((*l_1255)--) >= ((l_1199 > ((++(**l_1281)) || ((*l_1125) = (*g_240)))) == (~(safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(g_816, 6)), 0))))));
                l_1366 = func_8(p_3, l_1451, p_3, g_683, (~(((*l_1453) = &l_1190) == (void*)0)));
                for (g_683 = 0; (g_683 < 17); g_683 = safe_add_func_uint16_t_u_u(g_683, 8))
                {
                    char l_1479 = 1L;
                    for (l_1324 = 15; (l_1324 == 3); --l_1324)
                    {
                        unsigned l_1474 = 4294967287UL;
                        (*l_1137) = ((((0x058F3E15L >= (*g_240)) , (safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_128, (**g_1238))), (safe_sub_func_int16_t_s_s(l_1465, p_5))))) , ((*l_1156) = (safe_div_func_int8_t_s_s((((**g_497) = 0xCDBF019CL) , (safe_mod_func_int16_t_s_s((~(safe_lshift_func_uint16_t_u_u(0x75ECL, (p_5 & 7L)))), 0x42B5L))), p_4)))) , (*g_240));
                        (*g_1188) = &l_1353;
                        (*g_1188) = (*g_1188);
                    }
                }
            }
            if (p_3)
            {
                int *l_1488 = &l_1408;
                char l_1514 = 0xFAL;
                int l_1523 = 4L;
                int l_1524 = 0xAC109D8FL;
                int l_1593 = (-1L);
                (*g_1188) = l_1488;
                if (func_57(p_5, ((*g_498) = p_3), (l_1325 = (((*l_1201)--) < ((*l_1137) = (func_8((((*l_1163) = func_57(((*l_1191) ^= ((*g_32) & (l_1375 > (l_1408 | ((*l_1137) = ((safe_div_func_int16_t_s_s((p_4 ^ ((g_142 || l_1493) ^ 1L)), g_1438)) ^ 1L)))))), l_1194, (*g_32))) ^ (*l_1488)), g_345, l_1324, g_547, l_1494) , 1UL))))))
                {
                    unsigned short l_1497 = 0x03E4L;
                    int l_1500 = (-6L);
                    unsigned *l_1503 = (void*)0;
                    for (g_345 = 6; (g_345 != 56); ++g_345)
                    {
                        unsigned char l_1501 = 253UL;
                        (*l_1172) = ((l_1497 <= p_4) ^ func_57(((*l_1191) = (((safe_lshift_func_uint16_t_u_s((p_5 || (l_1500 != ((l_1501 > (safe_unary_minus_func_int8_t_s(p_3))) < func_8(p_5, ((func_57((g_1504 |= ((*l_1191) |= ((void*)0 != l_1503))), l_1501, p_3) ^ 0xCD3BL) , l_1501), (*l_1168), p_3, (*g_498))))), 14)) , g_33) == (-1L))), l_1325, l_1203));
                        if (p_4)
                            continue;
                        (*g_1505) = &p_5;
                    }
                    (*l_1137) |= (p_3 > ((safe_lshift_func_uint8_t_u_s(((*l_1255) |= g_29), (((func_57(((*l_1191) = 0x0B2B764FL), (safe_sub_func_uint8_t_u_u(((void*)0 == l_1510), (safe_rshift_func_int16_t_s_s(p_5, l_1514)))), p_5) > (**g_497)) >= l_1497) , 0x25L))) == 9UL));
                }
                else
                {
                    int l_1518 = (-8L);
                    int l_1519 = 0x9DFFB0B3L;
                    int l_1520 = 6L;
                    int l_1521 = 0x70C747EFL;
                    int l_1522 = 1L;
                    int l_1525 = 6L;
                    int *l_1526 = &l_1375;
                    int *l_1527 = &l_1089;
                    int *l_1528 = (void*)0;
                    int *l_1529 = &l_1366;
                    int *l_1530 = &l_1325;
                    int *l_1531 = &l_1151;
                    int *l_1532 = (void*)0;
                    int *l_1533 = &l_1358;
                    int *l_1534 = &l_1358;
                    int *l_1535 = &l_1406;
                    int *l_1536 = (void*)0;
                    int *l_1537 = (void*)0;
                    int *l_1538 = (void*)0;
                    int *l_1539 = &g_21;
                    int *l_1540 = &l_1325;
                    int *l_1541 = &l_1107;
                    int *l_1542 = &l_1525;
                    int *l_1543 = &l_1126;
                    int *l_1544 = &l_1152;
                    int *l_1545 = &l_1520;
                    int *l_1546 = &l_1107;
                    int *l_1547 = &l_1106;
                    int *l_1548 = (void*)0;
                    int *l_1549 = (void*)0;
                    int *l_1550 = &l_1520;
                    int *l_1551 = &g_222;
                    int *l_1552 = &l_1276;
                    int *l_1553 = &l_1106;
                    int *l_1554 = &l_1132;
                    int *l_1555 = (void*)0;
                    int *l_1556 = &g_800;
                    int *l_1557 = &l_1130;
                    int *l_1558 = &l_1366;
                    int *l_1559 = (void*)0;
                    int *l_1560 = &l_1089;
                    int *l_1561 = &g_6;
                    int *l_1562 = &l_1523;
                    int *l_1563 = (void*)0;
                    int *l_1564 = (void*)0;
                    int *l_1565 = (void*)0;
                    int *l_1566 = &l_1151;
                    int *l_1567 = &l_1354;
                    int *l_1568 = &l_1089;
                    int l_1569 = 5L;
                    int *l_1570 = &l_1354;
                    char *l_1574 = &g_128;
                    --l_1515;
                    ++g_1571;
                    (*l_1540) = func_30(l_1574);
                    for (l_1523 = 0; (l_1523 != (-6)); l_1523 = safe_sub_func_uint8_t_u_u(l_1523, 2))
                    {
                        (*l_1570) ^= (((*g_32) != ((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_4 > g_6), (p_5 , 0x656EF2CCL))), (safe_lshift_func_uint16_t_u_u(((*l_1225) = (((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(0UL, (255UL || (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((l_1408 && (-1L)) & g_29), l_1353)), g_476))))) , p_4), 0L)) , (void*)0) != g_1591)), 10)))) == 0x6F76L)) , l_1593);
                        return p_4;
                    }
                }
            }
            else
            {
                unsigned l_1594 = 18446744073709551608UL;
                (*l_1168) ^= ((l_1594 ^ (-8L)) , (!2L));
                return l_1203;
            }
        }
        else
        {
            int *l_1617 = &g_178;
            int l_1621 = 0xF84B8280L;
            unsigned l_1655 = 1UL;
            int l_1665 = (-1L);
            int l_1666 = 0xFDDB5909L;
            int l_1747 = 0L;
            int l_1769 = 0xECD42857L;
            int l_1772 = 0xC520E75CL;
            int l_1790 = 0x6585A14BL;
            int l_1797 = 0x96203B46L;
            unsigned l_1998 = 9UL;
            unsigned **l_2010 = &l_1201;
            int **l_2012 = &l_1179;
            for (l_1374 = 0; (l_1374 == 15); ++l_1374)
            {
                (*g_1188) = &l_1151;
                (*l_1087) ^= (*l_1158);
            }
            for (g_345 = 0; (g_345 == 60); g_345 = safe_add_func_int32_t_s_s(g_345, 8))
            {
                short *l_1599 = &g_525;
                int l_1606 = 0x7C793087L;
                unsigned short l_1607 = 0UL;
                int *l_1616 = &g_178;
                const int *l_1625 = &l_1354;
                int l_1626 = 0x864944B4L;
                int l_1735 = 0xD13E4666L;
                int l_1817 = 0xAC3BC387L;
                int l_1867 = 0xA3E686CAL;
                int l_1878 = 0x3688884AL;
                unsigned l_1929 = 0UL;
                int l_1991 = 0L;
                if ((p_4 < 0L))
                {
                    int **l_1618 = (void*)0;
                    int **l_1619 = (void*)0;
                    int **l_1620 = &l_1617;
                    int l_1624 = 0x27F0C8C0L;
                    int l_1627 = 0x173694B8L;
                    int l_1638 = 0xCC903D43L;
                    char **l_1662 = &g_32;
                    int l_1685 = (-6L);
                    int l_1730 = 6L;
                    int l_1885 = 1L;
                    int l_1915 = (-10L);
                    int *l_1936 = &l_1089;
                    int *l_1937 = &l_1107;
                    int *l_1938 = &l_1666;
                    int *l_1939 = &l_1324;
                    int *l_1940 = &l_1817;
                    int *l_1941 = &g_683;
                    int *l_1942 = &l_1325;
                    int *l_1943 = &l_1606;
                    int *l_1944 = (void*)0;
                    int *l_1945 = &l_1624;
                    int *l_1946 = (void*)0;
                    int *l_1947 = (void*)0;
                    int *l_1948 = &l_1665;
                    int *l_1949 = &l_1621;
                    int *l_1950 = &l_1735;
                    int *l_1951 = &l_1817;
                    int *l_1952 = &g_21;
                    int *l_1953 = &l_1885;
                    int *l_1954 = &l_1621;
                    int *l_1955 = &g_222;
                    int *l_1956 = &l_1358;
                    int *l_1957 = &g_21;
                    int *l_1958 = &l_1915;
                    int *l_1959 = &l_1627;
                    int *l_1960 = &l_1685;
                    int *l_1961 = (void*)0;
                    int *l_1962 = &l_1730;
                    int *l_1963 = &l_1624;
                    int *l_1964 = &l_1666;
                    int *l_1965 = &g_683;
                    int *l_1966 = &l_1132;
                    int *l_1967 = (void*)0;
                    int *l_1968 = (void*)0;
                    int *l_1969 = &l_1867;
                    int *l_1970 = (void*)0;
                    int *l_1971 = &l_1107;
                    int *l_1972 = (void*)0;
                    int *l_1973 = (void*)0;
                    int *l_1974 = (void*)0;
                    int *l_1975 = &l_1152;
                    int *l_1976 = &l_1735;
                    int *l_1977 = &g_21;
                    int *l_1978 = &l_1665;
                    int *l_1979 = &l_1606;
                    int *l_1980 = &l_1406;
                    int *l_1981 = (void*)0;
                    int *l_1982 = &l_1126;
                    int *l_1983 = &l_1132;
                    int *l_1984 = &l_1126;
                    int *l_1985 = &l_1797;
                    int *l_1986 = &l_1626;
                    int *l_1987 = &l_1730;
                    int *l_1988 = &l_1878;
                    int *l_1989 = (void*)0;
                    int *l_1990 = &l_1915;
                    int *l_1992 = &g_800;
                    int *l_1993 = &l_1132;
                    int *l_1994 = &l_1735;
                    int *l_1995 = &l_1199;
                    int *l_1996 = (void*)0;
                    int *l_1997 = &l_1885;
                    if ((safe_div_func_uint8_t_u_u(((-9L) ^ ((*l_1169) = (safe_div_func_uint8_t_u_u((l_1621 < 0x0F2A3899L), 0xB7L)))), (**g_1238))))
                    {
                        if ((*l_1149))
                            break;
                    }
                    else
                    {
                        int **l_1623 = &l_1146;
                        (*l_1623) = ((*g_1188) = &l_1130);
                        (*l_1125) = ((*l_1158) = p_4);
                        if (l_1624)
                            continue;
                    }
                    if ((l_1599 == &g_476))
                    {
                        (*g_1188) = &l_1354;
                        if ((*g_1053))
                            break;
                        l_1625 = &p_5;
                        if (l_1426)
                            continue;
                    }
                    else
                    {
                        int *l_1628 = (void*)0;
                        int *l_1629 = &l_1107;
                        int *l_1630 = (void*)0;
                        int *l_1631 = &l_1151;
                        int *l_1632 = (void*)0;
                        int *l_1633 = &g_683;
                        int *l_1634 = &l_1353;
                        int *l_1635 = (void*)0;
                        int *l_1636 = &g_222;
                        int *l_1637 = &g_800;
                        int *l_1639 = (void*)0;
                        int *l_1640 = &l_1627;
                        int *l_1641 = &l_1176;
                        int *l_1642 = &l_1089;
                        int *l_1643 = &g_683;
                        int *l_1644 = &l_1358;
                        int *l_1645 = &l_1151;
                        unsigned char l_1646 = 255UL;
                        short *l_1660 = &l_1465;
                        char *l_1664 = &g_33;
                        int l_1667 = (-1L);
                        int *l_1668 = &l_1130;
                        int *l_1669 = &l_1325;
                        int *l_1670 = &l_1624;
                        int *l_1671 = &g_222;
                        int *l_1672 = &l_1354;
                        int *l_1673 = (void*)0;
                        int l_1674 = 9L;
                        int *l_1675 = &l_1354;
                        int *l_1676 = &g_800;
                        int *l_1677 = &l_1325;
                        int *l_1678 = (void*)0;
                        int *l_1679 = &l_1626;
                        int *l_1680 = (void*)0;
                        int *l_1681 = &l_1353;
                        int *l_1682 = &l_1624;
                        int *l_1683 = &g_21;
                        int *l_1684 = &l_1138;
                        int l_1686 = 1L;
                        int *l_1687 = &l_1665;
                        int l_1688 = 1L;
                        int *l_1689 = (void*)0;
                        int *l_1690 = &l_1686;
                        int *l_1691 = &l_1126;
                        int *l_1692 = &l_1132;
                        int *l_1693 = &l_1686;
                        int *l_1694 = &l_1176;
                        int *l_1695 = &l_1638;
                        int *l_1696 = &l_1126;
                        int *l_1697 = &l_1354;
                        int *l_1698 = &l_1685;
                        int *l_1699 = (void*)0;
                        int *l_1700 = &g_222;
                        int *l_1701 = &l_1626;
                        int *l_1702 = &l_1686;
                        int *l_1703 = &l_1626;
                        int *l_1704 = (void*)0;
                        int *l_1705 = &l_1665;
                        int *l_1706 = &l_1199;
                        int *l_1707 = (void*)0;
                        int *l_1708 = &l_1688;
                        int *l_1709 = &l_1132;
                        int *l_1710 = &g_683;
                        int *l_1711 = &l_1152;
                        int *l_1712 = (void*)0;
                        int *l_1713 = &l_1325;
                        int *l_1714 = &g_6;
                        int *l_1715 = (void*)0;
                        int *l_1716 = &l_1685;
                        int *l_1717 = (void*)0;
                        int l_1718 = 0L;
                        int *l_1719 = &l_1324;
                        int *l_1720 = &l_1107;
                        int *l_1721 = &l_1151;
                        int *l_1722 = &l_1374;
                        int *l_1723 = (void*)0;
                        int *l_1724 = &l_1138;
                        int *l_1725 = &g_222;
                        int *l_1726 = (void*)0;
                        int *l_1727 = &l_1354;
                        int *l_1728 = &l_1132;
                        int *l_1729 = &l_1627;
                        int *l_1731 = &l_1089;
                        int *l_1732 = (void*)0;
                        int *l_1733 = &l_1666;
                        int *l_1734 = &g_683;
                        int *l_1736 = &g_683;
                        int *l_1737 = &l_1126;
                        int *l_1738 = &l_1138;
                        int *l_1739 = (void*)0;
                        int *l_1740 = &l_1730;
                        int *l_1741 = &l_1152;
                        int *l_1742 = &l_1358;
                        int *l_1743 = (void*)0;
                        int *l_1744 = &l_1325;
                        int *l_1745 = &l_1685;
                        int *l_1746 = &l_1152;
                        int *l_1748 = &l_1107;
                        int *l_1749 = &g_800;
                        int *l_1750 = &l_1626;
                        int *l_1751 = &l_1374;
                        int *l_1752 = &l_1667;
                        int *l_1753 = (void*)0;
                        int *l_1754 = &l_1324;
                        int *l_1755 = &l_1406;
                        int *l_1756 = &l_1199;
                        int *l_1757 = &l_1353;
                        int *l_1758 = &g_800;
                        int *l_1759 = (void*)0;
                        int *l_1760 = &l_1674;
                        int *l_1761 = &l_1688;
                        int *l_1762 = (void*)0;
                        int *l_1763 = (void*)0;
                        int *l_1764 = &l_1358;
                        int *l_1765 = &l_1151;
                        int *l_1766 = &l_1130;
                        int *l_1767 = &l_1358;
                        int *l_1768 = &g_6;
                        int *l_1770 = &l_1089;
                        int *l_1771 = &l_1638;
                        int *l_1773 = &l_1769;
                        int *l_1774 = &l_1718;
                        int *l_1775 = &l_1621;
                        int *l_1776 = &l_1685;
                        int *l_1777 = (void*)0;
                        int *l_1778 = (void*)0;
                        int *l_1779 = &l_1666;
                        int *l_1780 = &l_1735;
                        int *l_1781 = &l_1735;
                        int *l_1782 = &l_1176;
                        int *l_1783 = (void*)0;
                        int *l_1784 = (void*)0;
                        int *l_1785 = &g_6;
                        int *l_1786 = &l_1685;
                        int *l_1787 = &l_1176;
                        int *l_1788 = &g_683;
                        int *l_1789 = &l_1152;
                        int l_1791 = (-2L);
                        int *l_1792 = (void*)0;
                        int *l_1793 = &l_1688;
                        int *l_1794 = (void*)0;
                        int *l_1795 = &l_1406;
                        int *l_1796 = &l_1791;
                        int *l_1798 = &g_683;
                        int *l_1799 = &l_1666;
                        int *l_1801 = (void*)0;
                        int *l_1802 = &l_1627;
                        int *l_1803 = &l_1606;
                        int *l_1804 = (void*)0;
                        int *l_1805 = &l_1606;
                        int *l_1806 = &l_1769;
                        int *l_1807 = &l_1353;
                        int *l_1808 = &l_1374;
                        l_1646--;
                        (*l_1112) = (((*l_1255) = (((**l_1662) = (((*l_1164) ^ (safe_div_func_uint32_t_u_u(0x0B04B279L, l_1621))) >= (((safe_mod_func_uint16_t_u_u(g_451, g_142)) , p_3) <= p_3))) , 0x10L)) == g_190);
                        ++l_1809;
                    }
                    for (l_1151 = 9; (l_1151 <= (-14)); l_1151 = safe_sub_func_uint32_t_u_u(l_1151, 9))
                    {
                        int l_1816 = 0x15186C01L;
                        int *l_1818 = &l_1666;
                        int *l_1819 = &l_1627;
                        int *l_1820 = &l_1132;
                        int *l_1821 = &l_1790;
                        int *l_1822 = &l_1790;
                        int *l_1823 = &l_1638;
                        int *l_1824 = (void*)0;
                        int *l_1825 = &l_1406;
                        int *l_1826 = (void*)0;
                        int *l_1827 = (void*)0;
                        int *l_1828 = &l_1772;
                        int *l_1829 = &l_1638;
                        int *l_1830 = &l_1089;
                        int *l_1831 = &l_1797;
                        int *l_1832 = (void*)0;
                        int *l_1833 = &g_683;
                        int *l_1834 = (void*)0;
                        int *l_1835 = &l_1107;
                        int *l_1836 = &l_1685;
                        int l_1837 = 0x500415BAL;
                        int *l_1838 = &l_1353;
                        int *l_1839 = &l_1626;
                        int *l_1840 = (void*)0;
                        int *l_1841 = (void*)0;
                        int *l_1842 = &l_1816;
                        int *l_1843 = &l_1325;
                        int *l_1844 = &l_1106;
                        int *l_1845 = &g_683;
                        int *l_1846 = (void*)0;
                        int *l_1847 = &l_1735;
                        int *l_1848 = &l_1685;
                        int *l_1849 = &l_1132;
                        int *l_1850 = &l_1638;
                        int *l_1851 = &l_1130;
                        int *l_1852 = &l_1790;
                        int *l_1853 = &l_1837;
                        int *l_1854 = (void*)0;
                        int *l_1855 = (void*)0;
                        int *l_1856 = &l_1769;
                        int *l_1857 = &l_1817;
                        int *l_1858 = (void*)0;
                        int *l_1859 = &l_1638;
                        int *l_1860 = &l_1772;
                        int *l_1861 = &l_1176;
                        int *l_1862 = (void*)0;
                        int *l_1863 = &l_1624;
                        int *l_1864 = (void*)0;
                        int *l_1865 = &l_1354;
                        int *l_1866 = &l_1666;
                        int *l_1868 = &l_1685;
                        int *l_1869 = &l_1354;
                        int *l_1870 = &l_1735;
                        int *l_1871 = (void*)0;
                        int *l_1872 = &l_1130;
                        int *l_1873 = &l_1621;
                        int *l_1874 = &l_1406;
                        int *l_1875 = &l_1606;
                        int *l_1876 = (void*)0;
                        int *l_1877 = &l_1152;
                        int *l_1879 = &l_1790;
                        int *l_1880 = &l_1130;
                        int *l_1881 = &g_222;
                        int *l_1882 = &l_1867;
                        int *l_1883 = &l_1089;
                        int *l_1884 = &l_1626;
                        int *l_1886 = &l_1325;
                        int *l_1887 = &l_1867;
                        int *l_1888 = &l_1358;
                        int *l_1889 = &l_1730;
                        int *l_1890 = &l_1730;
                        int *l_1891 = &l_1176;
                        int *l_1892 = &l_1106;
                        int *l_1893 = &l_1354;
                        int *l_1894 = &l_1790;
                        int *l_1895 = &l_1374;
                        int *l_1896 = (void*)0;
                        int *l_1897 = &l_1132;
                        int *l_1898 = &l_1685;
                        int *l_1899 = &g_21;
                        int *l_1900 = &l_1138;
                        int *l_1901 = &g_6;
                        int *l_1902 = &g_800;
                        int *l_1903 = &l_1374;
                        int *l_1904 = &l_1685;
                        int *l_1905 = &l_1797;
                        int *l_1906 = &l_1353;
                        int *l_1907 = &l_1665;
                        int *l_1908 = &l_1130;
                        int *l_1909 = &l_1837;
                        int *l_1910 = &l_1358;
                        int *l_1911 = &l_1666;
                        int *l_1912 = &g_1800;
                        int *l_1913 = (void*)0;
                        int *l_1914 = &l_1735;
                        int *l_1916 = &l_1621;
                        int *l_1917 = &g_21;
                        int *l_1918 = &l_1358;
                        int *l_1919 = (void*)0;
                        int *l_1920 = (void*)0;
                        int *l_1921 = &l_1176;
                        int *l_1922 = &l_1106;
                        int *l_1923 = &l_1176;
                        int *l_1924 = &l_1772;
                        int *l_1925 = &l_1797;
                        int *l_1926 = &l_1626;
                        int l_1927 = 0x1BD211D5L;
                        int *l_1928 = (void*)0;
                        unsigned l_1932 = 1UL;
                        (*l_1175) ^= (safe_unary_minus_func_uint16_t_u(((void*)0 != l_1815)));
                        ++l_1929;
                        (*g_1188) = &l_1325;
                        --l_1932;
                    }
                    --l_1998;
                }
                else
                {
                    unsigned l_2011 = 0xE428833FL;
                    int l_2014 = 0x430F3529L;
                    const int **l_2021 = &l_1625;
                    if ((**g_1241))
                    {
                        const int **l_2002 = &g_1053;
                        short *l_2013 = &g_516;
                        if (p_5)
                            goto lbl_2001;
                        (*l_2002) = (*g_1241);
                        (*l_1103) &= (0x394628FFL <= (((l_2014 = ((**l_2002) > ((**g_497) = (safe_div_func_uint32_t_u_u((((((*l_2013) = ((*l_1599) = ((safe_div_func_uint16_t_u_u(0UL, ((*l_1225) = 0xA670L))) , (p_5 == ((((((*g_32) &= l_2007) , (safe_rshift_func_int8_t_s_u(((((void*)0 != l_2010) , 65529UL) , l_2011), g_142))) < l_2011) , &g_68) == l_2012))))) | 1UL) , (*l_1110)) < g_683), 0xC6DF8C2FL))))) , 0x7089A620L) , 0L));
                        (*l_1174) = (safe_sub_func_uint32_t_u_u((++(**l_2010)), ((g_345 , ((p_4 || ((-4L) == (**g_1238))) , l_2014)) >= 0x140FL)));
                    }
                    else
                    {
                        unsigned short l_2019 = 0x9348L;
                        unsigned *l_2020 = (void*)0;
                        l_2019 ^= 0x9E8BD5B1L;
                        (*l_2012) = func_37((*l_2010), l_2011, p_5, g_516);
                        l_1935 &= 0L;
                    }
                    (*l_2021) = &p_5;
                }
                (*l_1096) &= p_3;
            }
        }
    }
    else
    {
        unsigned short l_2022 = 0UL;
        unsigned char *l_2023 = &g_345;
        unsigned l_2024 = 0x81E0CAA8L;
        int **l_2031 = &l_1191;
        int l_2032 = (-1L);
        int l_2033 = 0xA692C270L;
        int l_2034 = 0xF3DCF02BL;
        int l_2035 = 0xF4E70D6AL;
        int l_2038 = 1L;
        int l_2039 = 0xC8797FAEL;
        int l_2040 = 3L;
        int l_2055 = (-3L);
        int l_2072 = 2L;
        int l_2087 = (-4L);
        int l_2141 = 0x21625CCBL;
        int l_2157 = 0x18654E38L;
        int l_2200 = 0x8BF59FF5L;
        int l_2211 = 1L;
        char **l_2249 = (void*)0;
        unsigned char *l_2252 = &g_142;
        unsigned l_2254 = 4294967295UL;
        char **l_2255 = &l_1190;
        unsigned *l_2258 = (void*)0;
        int l_2286 = 0x4985797DL;
        unsigned char l_2583 = 0x6EL;
        if (((((p_4 == func_57((1UL || ((*l_2023) = l_2022)), l_2024, ((safe_mod_func_uint16_t_u_u((((func_8(((g_2029 == l_2031) == 0UL), p_5, (**g_497), p_3, (*l_1088)) , (*l_1129)) != (*l_1147)) , 65529UL), g_698)) || p_3))) != (*l_1145)) , (*l_1165)) , 3L))
        {
            short l_2036 = (-10L);
            int l_2037 = 7L;
            int l_2041 = 0x8A96DBACL;
            int *l_2042 = &g_21;
            int *l_2043 = (void*)0;
            int *l_2044 = &l_1132;
            int *l_2045 = &l_2037;
            int *l_2046 = (void*)0;
            int *l_2047 = &l_2039;
            int *l_2048 = (void*)0;
            int *l_2049 = &l_2040;
            int *l_2050 = &l_1176;
            int *l_2051 = (void*)0;
            int *l_2052 = (void*)0;
            int *l_2053 = &l_2040;
            int *l_2054 = &l_1151;
            int *l_2056 = &g_222;
            int *l_2057 = (void*)0;
            int *l_2058 = &g_683;
            int *l_2059 = &l_1126;
            int *l_2060 = &l_1107;
            int *l_2061 = &l_1130;
            int *l_2062 = (void*)0;
            int *l_2063 = &l_1126;
            int *l_2064 = &g_222;
            int *l_2065 = &l_1152;
            int *l_2066 = &g_683;
            int *l_2067 = &g_222;
            int *l_2068 = &l_1107;
            int *l_2069 = &l_1152;
            int *l_2070 = &l_1107;
            int *l_2071 = &g_21;
            int *l_2073 = &g_21;
            int *l_2074 = &g_222;
            int *l_2075 = &l_2033;
            int *l_2076 = &l_1176;
            int *l_2077 = &l_2055;
            int *l_2078 = &l_1130;
            int *l_2079 = &l_2040;
            int *l_2080 = &l_1132;
            int *l_2081 = (void*)0;
            int *l_2082 = &l_2035;
            int *l_2083 = (void*)0;
            int *l_2084 = &l_1176;
            int *l_2085 = &g_6;
            int *l_2086 = &l_2037;
            int *l_2088 = &l_2033;
            int *l_2089 = &l_2035;
            int *l_2090 = &l_1130;
            int *l_2091 = &l_2039;
            int *l_2092 = (void*)0;
            int *l_2093 = &l_1152;
            int *l_2094 = (void*)0;
            int *l_2095 = &l_2035;
            int *l_2096 = &l_2032;
            int *l_2097 = &l_1126;
            int *l_2098 = &l_1089;
            int *l_2099 = &g_21;
            int *l_2100 = (void*)0;
            int l_2101 = (-1L);
            int *l_2102 = &l_1132;
            int *l_2103 = &l_1130;
            int *l_2104 = &l_1107;
            int *l_2105 = &g_800;
            int l_2106 = 0L;
            int *l_2107 = &l_2034;
            int *l_2108 = &l_2040;
            int *l_2109 = (void*)0;
            int *l_2110 = (void*)0;
            int *l_2111 = &l_2055;
            int *l_2112 = (void*)0;
            int *l_2113 = &l_2072;
            int *l_2114 = &l_1126;
            int *l_2115 = &l_2038;
            int *l_2116 = (void*)0;
            int *l_2117 = &g_222;
            int *l_2118 = &l_2106;
            int *l_2119 = &l_2032;
            int *l_2120 = &l_1130;
            int *l_2121 = (void*)0;
            int *l_2122 = &l_2037;
            int *l_2123 = &l_2035;
            int *l_2124 = &l_1130;
            int *l_2125 = &l_1138;
            int l_2126 = 0x1487D997L;
            int *l_2127 = &l_2033;
            int *l_2128 = &l_2101;
            int *l_2129 = &l_1152;
            int *l_2130 = &g_6;
            int *l_2131 = (void*)0;
            int *l_2132 = &l_2126;
            int *l_2133 = &g_6;
            int l_2134 = 0x7D37B993L;
            int *l_2135 = &g_6;
            int *l_2136 = (void*)0;
            int *l_2137 = (void*)0;
            int *l_2138 = &g_800;
            int *l_2139 = &l_2033;
            int *l_2140 = &l_1130;
            int *l_2142 = &l_1126;
            int *l_2143 = &l_1152;
            int *l_2144 = &l_2087;
            int *l_2145 = &l_2072;
            int *l_2146 = (void*)0;
            int *l_2147 = &g_222;
            int *l_2148 = &g_21;
            int *l_2149 = &l_1126;
            int l_2150 = 0xDAEF2A6EL;
            int *l_2151 = &g_222;
            int *l_2152 = (void*)0;
            int *l_2153 = &l_2041;
            int *l_2154 = (void*)0;
            int *l_2155 = &g_222;
            int *l_2156 = &l_1089;
            int *l_2159 = &l_2126;
            int *l_2160 = (void*)0;
            int *l_2161 = &l_2087;
            int *l_2162 = &l_2126;
            int *l_2163 = &l_2072;
            int *l_2164 = &g_683;
            int *l_2165 = &l_1107;
            int *l_2167 = &g_800;
            int *l_2168 = &g_6;
            int *l_2169 = &l_2150;
            int *l_2170 = &l_2157;
            int *l_2171 = &l_2106;
            int *l_2172 = &l_2035;
            int *l_2173 = &l_2041;
            int *l_2174 = &l_2039;
            int *l_2175 = &l_2034;
            int *l_2176 = &l_2126;
            int *l_2177 = &l_2034;
            int *l_2178 = &l_2141;
            int *l_2179 = &g_222;
            int *l_2180 = &l_2087;
            int *l_2181 = &l_1106;
            int *l_2182 = &l_2040;
            int *l_2184 = &l_2034;
            int *l_2186 = &l_1132;
            int l_2187 = 0xB7D46F38L;
            int *l_2188 = (void*)0;
            int *l_2189 = &l_2157;
            int *l_2190 = &l_2126;
            int *l_2191 = &l_2126;
            int *l_2192 = &l_2038;
            int *l_2193 = &l_2035;
            int *l_2194 = &l_2101;
            int *l_2195 = &l_2187;
            int *l_2196 = &l_2033;
            int *l_2197 = &l_2106;
            int *l_2198 = (void*)0;
            int *l_2199 = (void*)0;
            int *l_2201 = (void*)0;
            int *l_2202 = &l_1138;
            int *l_2203 = &l_2150;
            int *l_2204 = &l_1132;
            int *l_2205 = (void*)0;
            int *l_2206 = &l_1130;
            int *l_2207 = &l_2134;
            int *l_2208 = (void*)0;
            int *l_2209 = &l_1107;
            int *l_2210 = &g_1800;
            short l_2212 = 0x0027L;
            int *l_2213 = &l_1130;
            int *l_2214 = &l_1107;
            int *l_2215 = (void*)0;
            int *l_2216 = &l_1106;
            int *l_2217 = &l_2106;
            int *l_2218 = &g_800;
            int *l_2219 = &l_2039;
            int *l_2220 = &l_2185;
            int *l_2221 = &l_1106;
            int *l_2222 = &l_2141;
            int *l_2223 = (void*)0;
            int *l_2224 = &l_2055;
            int *l_2225 = &l_2126;
            int *l_2226 = &l_2134;
            int *l_2227 = &l_2126;
            int *l_2228 = &l_2072;
            int *l_2229 = &g_800;
            int *l_2230 = &l_2106;
            int *l_2231 = &l_1132;
            int *l_2232 = &g_800;
            int *l_2233 = &l_2038;
            int *l_2234 = (void*)0;
            int *l_2235 = &l_2055;
            int *l_2236 = &l_2034;
lbl_2242:
            g_2237--;
            for (g_683 = 0; (g_683 >= 23); g_683 = safe_add_func_uint32_t_u_u(g_683, 1))
            {
                return l_2040;
            }
            if (g_128)
                goto lbl_2242;
            (*l_2093) &= (g_547 > p_5);
        }
        else
        {
            unsigned l_2245 = 0x16B73352L;
            char *l_2248 = &g_128;
            (*l_1103) |= (safe_rshift_func_int16_t_s_s((((l_2245 && l_2022) == l_2245) > l_2087), (*l_1175)));
        }
        l_2035 ^= l_2055;
        if (p_5)
        {
            unsigned l_2256 = 0xDB22B5B1L;
            return l_2256;
        }
        else
        {
            unsigned l_2257 = 0UL;
            unsigned **l_2259 = &g_1592;
            unsigned l_2268 = 0xB324BF94L;
            unsigned **l_2271 = &l_1189;
            int **l_2273 = &l_1142;
            short *l_2293 = &g_525;
            (*l_1129) = (((((*l_2259) = (l_2257 , l_2258)) != ((*l_2271) = func_35(func_37(&l_2257, (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(0xA8L, p_4)), (((safe_mod_func_int16_t_s_s(l_2268, (safe_add_func_uint32_t_u_u(p_3, 0L)))) > p_4) , (*l_1094)))), p_3)), p_4, l_2257)))) , (void*)0) != (*g_497));
            (*l_2273) = l_2272;
            (*l_1149) = (+(((((safe_lshift_func_int8_t_s_u((~((g_1240 , l_2032) <= p_4)), ((void*)0 != l_1190))) , (((*g_32) <= (**g_1238)) && ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((g_6 ^ (safe_lshift_func_uint8_t_u_s((((!((((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_2286 < (**l_2273)), (-1L))), p_5)) | 4UL) & (**g_1238)) == p_5)) > (*g_498)) || 1L), 3))) == (*g_32)), (**l_2273))), (**l_2273))) & 0xF2EAL))) > (*l_1150)) ^ 0x5BF6L) , (*g_240)));
            (*l_1116) = ((((safe_mod_func_int8_t_s_s(1L, ((*l_2252) = ((**l_2273) |= (((*l_2023) = g_869) != (safe_mod_func_int16_t_s_s(((*l_2293) = ((l_2200 && (***g_1237)) , g_501)), 6UL))))))) <= g_118) , 1L) < 6UL);
        }
        for (l_1183 = 0; (l_1183 >= 36); l_1183 = safe_add_func_int16_t_s_s(l_1183, 8))
        {
            unsigned l_2297 = 0x0FF4FCB7L;
            int *l_2300 = (void*)0;
            int l_2332 = (-8L);
            int l_2358 = 1L;
            int l_2378 = 0xA00D9ACDL;
            int l_2387 = 4L;
            int l_2536 = (-1L);
            int l_2553 = 0x9BCAFF9DL;
            int l_2555 = (-2L);
            l_2297++;
            l_2300 = &l_2055;
            if ((safe_rshift_func_uint8_t_u_s((p_4 < (*l_2300)), l_2157)))
            {
                unsigned short **l_2320 = &l_2319;
                char **l_2327 = &l_1190;
                int l_2328 = 0xCD28C410L;
                int l_2329 = 0xC566D5EFL;
                int l_2330 = 0xA7CAB1BDL;
                int l_2331 = (-9L);
                int l_2333 = 0x1A86D926L;
                int l_2334 = (-1L);
                int l_2335 = 1L;
                int l_2336 = 0x34692D72L;
                int l_2337 = 0L;
                int *l_2338 = &l_2033;
                int *l_2339 = (void*)0;
                int *l_2340 = &l_2032;
                int *l_2341 = &l_2336;
                int *l_2342 = &l_2032;
                int *l_2343 = (void*)0;
                int *l_2344 = &l_2330;
                int *l_2345 = &l_2337;
                int *l_2346 = (void*)0;
                int *l_2347 = &l_2183;
                int *l_2348 = &l_1152;
                int *l_2349 = &l_2032;
                int l_2350 = 1L;
                int *l_2351 = (void*)0;
                int l_2352 = 0xB0146FF0L;
                int l_2353 = 0x031EF733L;
                int *l_2354 = &l_2332;
                int *l_2355 = &l_2333;
                int *l_2356 = &l_2336;
                int *l_2357 = &l_2200;
                int *l_2359 = &l_2328;
                int *l_2360 = &g_21;
                int *l_2361 = (void*)0;
                int *l_2362 = &l_2358;
                int *l_2363 = &l_2141;
                int *l_2364 = &l_2337;
                int *l_2365 = (void*)0;
                int *l_2366 = (void*)0;
                int *l_2367 = (void*)0;
                int *l_2368 = &l_2200;
                int *l_2369 = (void*)0;
                int *l_2370 = &l_2253;
                int *l_2371 = (void*)0;
                int *l_2372 = &l_2211;
                int *l_2373 = &l_1130;
                int *l_2374 = &g_21;
                int *l_2375 = &l_2352;
                int *l_2376 = &g_800;
                int *l_2377 = (void*)0;
                int *l_2379 = (void*)0;
                int *l_2380 = &g_800;
                int *l_2381 = &g_1800;
                int *l_2382 = (void*)0;
                int *l_2383 = &l_1106;
                int *l_2384 = &g_683;
                int *l_2385 = &g_683;
                int *l_2386 = (void*)0;
                int *l_2388 = &l_2378;
                int *l_2389 = &l_2039;
                int *l_2390 = (void*)0;
                int *l_2391 = (void*)0;
                int *l_2392 = &g_222;
                int *l_2393 = &l_2038;
                int *l_2394 = (void*)0;
                int *l_2395 = (void*)0;
                int *l_2396 = &l_2035;
                int *l_2397 = (void*)0;
                int *l_2398 = &l_2183;
                int l_2399 = (-1L);
                int *l_2400 = (void*)0;
                int *l_2401 = &g_21;
                int l_2402 = 6L;
                for (g_190 = 0; (g_190 <= 25); g_190++)
                {
                    short l_2315 = 0xB7BAL;
                    (*l_1150) &= ((safe_add_func_int8_t_s_s(p_5, 0x51L)) >= (((*g_32) = (&l_1480 == ((p_3 || ((*l_2252) = (((safe_rshift_func_int16_t_s_s(l_2315, 10)) & ((((*l_1164) = (safe_rshift_func_uint16_t_u_u((l_2318 == l_2320), ((**l_2320) = 0xD80FL)))) , func_8(((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((((((-1L) | (*l_1149)) >= 4UL) == p_4) ^ (*g_1239)), 3)), p_5)) > 1UL) , l_2327) != &g_1239), 0x16L)) && 0x0F0CL), p_3, (**g_497), l_2328, (*g_498))) && 0xAAE2L)) <= g_29))) , (void*)0))) < l_2035));
                }
                if (l_2072)
                    break;
                (*l_1161) |= (*g_240);
                --l_2403;
            }
            else
            {
                short *l_2418 = (void*)0;
                short *l_2419 = &g_525;
                int l_2420 = 0xAC7383A3L;
                int l_2427 = 0x3B91EE2BL;
                short l_2428 = 0xD334L;
                int l_2478 = 1L;
                int l_2493 = 1L;
                int l_2522 = 1L;
                int l_2523 = 0x86582CB7L;
                char l_2600 = 0x1AL;
                if (((((*l_1140) , g_345) , p_3) , (safe_div_func_uint8_t_u_u(p_5, (((*l_1190) |= ((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((*l_2300), ((~(safe_rshift_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((-9L), (((*l_2419) = p_3) <= (p_3 <= (*l_2300))))), 255UL)) , (**g_1505)) < 0UL), 7))) & g_869))), p_5)) | 65535UL)) | p_3)))))
                {
                    unsigned short l_2421 = 65530UL;
                    char l_2424 = (-3L);
                    int l_2425 = 1L;
                    int l_2426 = 0L;
                    int *l_2429 = &g_800;
                    int *l_2430 = (void*)0;
                    int *l_2431 = &l_2033;
                    int *l_2432 = (void*)0;
                    int *l_2433 = &l_2332;
                    int *l_2434 = (void*)0;
                    int *l_2435 = (void*)0;
                    int *l_2436 = &g_21;
                    int *l_2437 = &l_2253;
                    int *l_2438 = &l_1089;
                    int *l_2439 = &l_2387;
                    int *l_2440 = &l_2038;
                    int l_2441 = 0x337A2600L;
                    int *l_2442 = &l_2425;
                    int *l_2443 = (void*)0;
                    int *l_2444 = &l_2034;
                    int *l_2445 = &l_2253;
                    int *l_2446 = &l_2166;
                    int *l_2447 = &l_2211;
                    int *l_2448 = &l_2072;
                    int *l_2449 = &l_1151;
                    int *l_2450 = &l_1151;
                    int *l_2451 = &l_2038;
                    int *l_2452 = &g_800;
                    int *l_2453 = &g_1800;
                    int *l_2454 = &l_2332;
                    int *l_2455 = &l_2332;
                    int *l_2456 = &l_2072;
                    int *l_2457 = &l_2420;
                    int *l_2458 = &l_2040;
                    int *l_2459 = &l_2166;
                    int *l_2460 = (void*)0;
                    int *l_2461 = &g_222;
                    int *l_2462 = (void*)0;
                    int *l_2463 = &l_2426;
                    int *l_2464 = &l_2055;
                    int *l_2465 = &l_2033;
                    int *l_2466 = &l_2087;
                    int *l_2467 = &l_2425;
                    int l_2468 = 1L;
                    int *l_2469 = &l_2253;
                    int *l_2470 = (void*)0;
                    int *l_2471 = &l_2072;
                    int *l_2472 = &l_1106;
                    int *l_2473 = &l_1106;
                    int *l_2475 = &l_2141;
                    int *l_2476 = &l_2211;
                    int *l_2477 = &g_21;
                    int *l_2479 = &g_1800;
                    int *l_2480 = (void*)0;
                    int *l_2481 = &l_2378;
                    int *l_2482 = &l_2035;
                    int *l_2483 = &g_683;
                    int *l_2484 = &l_1126;
                    int *l_2485 = &l_1089;
                    int *l_2486 = &l_2183;
                    int *l_2487 = &l_1106;
                    int *l_2488 = &g_800;
                    int *l_2489 = &l_1126;
                    int l_2490 = 0L;
                    int *l_2491 = &l_1132;
                    int *l_2492 = &l_1089;
                    int *l_2494 = &l_2141;
                    int *l_2495 = (void*)0;
                    int *l_2496 = (void*)0;
                    int *l_2497 = &l_2157;
                    int *l_2498 = &l_2166;
                    int *l_2499 = &l_2426;
                    int *l_2500 = &l_1151;
                    int *l_2501 = &l_2468;
                    int *l_2502 = (void*)0;
                    int *l_2503 = &l_2420;
                    int *l_2504 = (void*)0;
                    int *l_2505 = &l_2253;
                    int *l_2506 = &g_800;
                    int *l_2507 = &g_1800;
                    int *l_2508 = &l_2490;
                    int *l_2509 = (void*)0;
                    int *l_2510 = &l_2034;
                    int *l_2511 = (void*)0;
                    int *l_2512 = &l_1089;
                    int *l_2513 = &l_1126;
                    int *l_2514 = (void*)0;
                    int *l_2515 = &g_1800;
                    int *l_2516 = &l_2425;
                    int *l_2517 = &l_2425;
                    int *l_2518 = (void*)0;
                    int *l_2519 = &l_2387;
                    int *l_2520 = &l_2493;
                    int *l_2521 = &l_1138;
                    int *l_2524 = &l_2185;
                    int *l_2525 = &l_2034;
                    int *l_2526 = &l_2035;
                    int *l_2527 = &l_2141;
                    int *l_2528 = (void*)0;
                    int *l_2529 = &l_2157;
                    int *l_2530 = &l_1130;
                    int *l_2531 = (void*)0;
                    int *l_2532 = (void*)0;
                    int *l_2533 = (void*)0;
                    int *l_2534 = &l_2332;
                    int *l_2535 = &l_2523;
                    int *l_2537 = &l_1132;
                    int *l_2538 = &l_1132;
                    int *l_2539 = &l_2185;
                    int *l_2540 = &l_2387;
                    int *l_2541 = &l_2033;
                    int *l_2542 = &l_2426;
                    int *l_2543 = &l_2425;
                    int *l_2544 = (void*)0;
                    int *l_2545 = &l_2468;
                    int *l_2546 = &l_2536;
                    int l_2547 = (-3L);
                    int *l_2548 = (void*)0;
                    int *l_2549 = &l_1152;
                    int *l_2550 = &g_6;
                    int *l_2551 = &l_2387;
                    int *l_2552 = &l_2425;
                    int *l_2554 = &l_1132;
                    int *l_2556 = &l_2332;
                    int *l_2557 = (void*)0;
                    int *l_2558 = &l_2087;
                    int *l_2559 = &l_2034;
                    int *l_2560 = (void*)0;
                    int *l_2561 = &l_2553;
                    int *l_2562 = &l_2033;
                    int *l_2563 = &l_2553;
                    int *l_2564 = &g_1800;
                    int *l_2565 = &l_1132;
                    int *l_2566 = &g_1800;
                    int *l_2567 = &l_2387;
                    int *l_2568 = &l_2493;
                    int *l_2569 = &l_2420;
                    int *l_2570 = &l_2490;
                    int *l_2571 = &l_2034;
                    int *l_2572 = &l_1126;
                    int *l_2573 = (void*)0;
                    int *l_2575 = &l_2426;
                    int *l_2576 = &g_2574;
                    int *l_2577 = &l_2547;
                    int *l_2578 = (void*)0;
                    int *l_2579 = &l_1138;
                    int l_2580 = 0x726262B6L;
                    int *l_2581 = &l_1126;
                    int *l_2582 = &l_2522;
                    l_2421++;
                    ++l_2583;
                }
                else
                {
                    char ****l_2595 = &g_2593;
                    (*l_1170) = (safe_sub_func_uint8_t_u_u((p_5 > p_4), (safe_div_func_int16_t_s_s(((p_5 >= (g_2590 != ((p_3 >= (g_2591 != ((*l_2595) = g_2593))) , (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(65530UL, ((*l_2319) &= l_2600))) , g_1504), p_5))))) != p_5), p_5))));
                }
            }
        }
    }
    (*l_1104) ^= (+(safe_mul_func_int16_t_s_s(p_3, ((g_816 = (((**g_497) ^= (*l_1149)) >= (!(safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((((*g_32) = (*g_1239)) | (safe_lshift_func_int8_t_s_u(p_3, (safe_add_func_uint32_t_u_u((*l_1175), p_4))))) >= (g_6 & ((((*l_1159) , g_6) >= 9L) | 4UL))), 1L)), p_4))))) < p_3))));
    return p_3;
}







static const int func_8(int p_9, unsigned p_10, unsigned p_11, unsigned p_12, unsigned p_13)
{
    short l_1086 = 0x6756L;
    for (g_178 = 23; (g_178 >= 8); g_178--)
    {
        if (l_1086)
            break;
        return (*g_68);
    }
    return l_1086;
}







static int func_14(char p_15, unsigned p_16, char p_17, char p_18)
{
    unsigned l_701 = 0xF7ECD436L;
    int **l_705 = &g_200;
    unsigned char l_719 = 0x4EL;
    char *l_720 = &g_128;
    int l_741 = 0xCF3309E0L;
    int l_773 = 0x7A9C8D76L;
    int l_819 = (-1L);
    int l_861 = 0x17C87887L;
    int l_876 = (-8L);
    int l_885 = 0L;
    int l_919 = 0x31B19A32L;
    int l_948 = 0xE39055FAL;
    int l_956 = 0x47FF966CL;
    int l_962 = 0xA65F8173L;
    int l_964 = 0x2F5DE109L;
    char l_1009 = 0xE4L;
    const int *l_1051 = &g_21;
    int l_1068 = 0xDCC7508AL;
    int *l_1071 = &g_683;
    unsigned char l_1082 = 1UL;
    if (((g_23 , (((0x7E6BL & 1L) , func_49(l_701, (safe_mod_func_int8_t_s_s((*g_32), ((g_128 , ((*g_200) = (**g_199))) && l_701))), &g_32, &g_33, l_701)) > l_701)) <= g_345))
    {
        const unsigned *l_704 = &g_451;
        short *l_714 = &g_516;
        int l_721 = 0xDD40FCA4L;
        int l_767 = 0x944AB209L;
        int l_808 = (-8L);
        int l_810 = (-1L);
        int l_830 = (-1L);
        int l_841 = 0x517F69D9L;
        int l_874 = (-1L);
        int l_879 = 0x636D820DL;
        char l_924 = (-10L);
        int l_945 = 0xACAABBD9L;
        int l_958 = (-4L);
        unsigned short l_1011 = 0xA20FL;
lbl_998:
        (*l_705) = func_37(l_704, l_701, g_62, (l_705 == l_705));
        if (((safe_mod_func_int32_t_s_s((-9L), 0x219A869FL)) <= (((**g_497) && func_46((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((func_49(((*l_714) = (-2L)), ((**l_705) = ((((g_190 , ((p_15 | (safe_rshift_func_uint16_t_u_s((l_705 == (void*)0), 13))) , (safe_sub_func_uint32_t_u_u((**l_705), 0x93B48CEBL)))) > (**l_705)) != l_719) & 0xA138L)), &g_32, l_720, p_17) || p_16), (-1L))), 1)) > l_721) >= 0x1CL), l_721)), p_15)) , 0xE4L)))
        {
            unsigned l_724 = 18446744073709551608UL;
            int l_740 = 0x6A2D43CEL;
            int l_756 = 0x6FBCFE45L;
            int l_766 = 0x4E26FE36L;
            int l_872 = 0x7B277571L;
            int l_873 = 0x2CF4FF97L;
            int l_875 = (-1L);
            int l_877 = 0x30FDBB33L;
            int l_878 = 0x18DE7A70L;
            int l_881 = (-6L);
            int l_891 = 0xB4ACBCA5L;
            int l_939 = 0x096836F6L;
            int l_949 = 1L;
            int l_970 = 0x64C16A20L;
            unsigned char *l_1014 = &g_62;
            const unsigned * const *l_1019 = &l_704;
            unsigned l_1035 = 0x2FEF01E9L;
            unsigned char l_1067 = 0x37L;
            for (g_220 = 0; (g_220 > 16); g_220 = safe_add_func_int32_t_s_s(g_220, 1))
            {
                int *l_725 = &g_683;
                int *l_726 = &l_721;
                int *l_727 = &l_721;
                int *l_728 = &g_21;
                int *l_729 = &g_683;
                int l_730 = (-1L);
                int l_731 = 0xEC8D1C3FL;
                int *l_732 = &g_222;
                int *l_733 = (void*)0;
                int *l_734 = &l_730;
                int *l_735 = &l_731;
                int *l_736 = &l_731;
                int *l_737 = (void*)0;
                int *l_738 = &g_21;
                int *l_739 = (void*)0;
                int *l_742 = &l_731;
                int *l_743 = &l_740;
                int *l_744 = &g_222;
                int *l_745 = (void*)0;
                int *l_746 = &l_731;
                int *l_747 = &l_741;
                int *l_748 = (void*)0;
                int *l_749 = &l_721;
                int *l_750 = (void*)0;
                int *l_751 = &l_741;
                int *l_752 = &g_222;
                int *l_753 = &g_21;
                int *l_754 = &l_730;
                int *l_755 = &g_683;
                int *l_757 = &l_731;
                int l_758 = 1L;
                int *l_759 = &l_740;
                int *l_760 = &g_683;
                int *l_761 = &l_740;
                int *l_762 = &g_683;
                int *l_763 = (void*)0;
                int *l_764 = (void*)0;
                int *l_765 = (void*)0;
                int *l_768 = &l_740;
                int *l_769 = &l_721;
                int *l_770 = &g_683;
                int *l_771 = &l_766;
                int *l_772 = &l_731;
                int *l_774 = &l_773;
                int *l_775 = &l_773;
                int *l_776 = (void*)0;
                int *l_777 = &l_740;
                int *l_778 = &g_683;
                int *l_779 = (void*)0;
                int *l_780 = &l_741;
                int *l_781 = &l_721;
                int *l_782 = &l_767;
                int *l_783 = &g_222;
                int *l_784 = &l_773;
                int *l_785 = &l_766;
                int *l_786 = &g_683;
                int *l_787 = &g_21;
                int *l_788 = &l_756;
                int *l_789 = &l_741;
                int *l_790 = &l_731;
                int *l_791 = (void*)0;
                int *l_792 = &l_758;
                int *l_793 = (void*)0;
                int *l_794 = &l_767;
                int *l_795 = (void*)0;
                int *l_796 = &l_756;
                int *l_797 = &g_21;
                int *l_798 = (void*)0;
                int *l_799 = &l_721;
                int *l_801 = &l_773;
                int *l_802 = &l_766;
                int *l_803 = &l_730;
                int *l_804 = (void*)0;
                int *l_805 = &l_758;
                int *l_806 = (void*)0;
                int *l_807 = &g_21;
                int *l_809 = &l_767;
                int l_811 = 3L;
                int *l_812 = &l_721;
                int *l_813 = (void*)0;
                int *l_814 = &l_808;
                int *l_815 = &g_21;
                int *l_817 = (void*)0;
                int *l_818 = (void*)0;
                int *l_820 = &l_731;
                int *l_821 = &l_767;
                int *l_822 = &l_766;
                int *l_823 = &l_731;
                int *l_824 = &g_683;
                int *l_825 = &l_773;
                int *l_826 = &l_773;
                int *l_827 = &l_773;
                int *l_828 = &l_756;
                int *l_829 = (void*)0;
                int *l_831 = &l_741;
                int *l_832 = &l_810;
                int *l_833 = &l_740;
                int *l_834 = &l_756;
                int *l_835 = (void*)0;
                int *l_836 = &l_721;
                int *l_838 = &g_683;
                int *l_839 = &l_731;
                int *l_840 = &g_222;
                int *l_842 = &l_819;
                int *l_843 = &l_721;
                int *l_844 = &l_730;
                int *l_846 = (void*)0;
                int *l_847 = &l_808;
                int *l_848 = &g_222;
                int *l_849 = (void*)0;
                int *l_850 = &l_756;
                int *l_851 = &g_800;
                int *l_852 = &l_731;
                int *l_853 = (void*)0;
                int *l_854 = (void*)0;
                int *l_855 = &l_740;
                int *l_856 = &l_841;
                int *l_857 = &g_222;
                int *l_858 = &l_767;
                int *l_859 = &l_756;
                int *l_860 = &l_741;
                int *l_862 = &l_830;
                int *l_863 = &l_766;
                int *l_864 = &l_758;
                int *l_865 = &g_222;
                int *l_866 = &l_756;
                int *l_867 = &l_767;
                int *l_868 = &l_773;
                int l_880 = 1L;
                int *l_882 = &l_873;
                int *l_883 = &l_874;
                int *l_884 = &l_811;
                int *l_886 = &l_881;
                int *l_887 = &l_880;
                int *l_888 = &l_873;
                int *l_889 = &l_880;
                int *l_890 = &l_861;
                int *l_892 = &l_881;
                int *l_893 = &l_879;
                int *l_894 = &l_767;
                int *l_895 = (void*)0;
                int *l_896 = &l_875;
                int *l_897 = &g_683;
                int *l_898 = &l_730;
                int *l_899 = (void*)0;
                int *l_900 = &l_731;
                int *l_901 = (void*)0;
                int *l_902 = (void*)0;
                int *l_903 = (void*)0;
                int *l_904 = (void*)0;
                int *l_905 = &l_874;
                int *l_906 = &l_880;
                int *l_907 = &g_222;
                int *l_908 = (void*)0;
                int *l_909 = &l_879;
                int *l_910 = &l_811;
                int *l_911 = &l_874;
                int *l_912 = &g_683;
                int *l_913 = &l_766;
                int *l_914 = &l_808;
                int *l_915 = (void*)0;
                int *l_916 = &l_841;
                int *l_917 = &l_874;
                int *l_918 = &l_767;
                int l_920 = 0xA6D18B91L;
                int *l_921 = (void*)0;
                int l_922 = 0L;
                int *l_923 = &l_730;
                int *l_925 = &l_758;
                int *l_926 = &l_861;
                int *l_927 = &l_819;
                int *l_928 = &l_841;
                int *l_929 = &l_773;
                int *l_930 = &l_741;
                int *l_931 = &l_830;
                int *l_932 = (void*)0;
                int *l_933 = (void*)0;
                int *l_934 = &l_730;
                int *l_935 = &l_730;
                int *l_936 = (void*)0;
                int *l_937 = &l_773;
                int *l_938 = &l_819;
                int *l_940 = &l_741;
                int *l_941 = &l_721;
                int *l_942 = &l_841;
                int *l_943 = &l_721;
                int *l_944 = (void*)0;
                int *l_946 = (void*)0;
                int *l_947 = &g_800;
                int *l_950 = &l_756;
                int *l_951 = &l_949;
                int *l_952 = &l_948;
                int *l_953 = &l_878;
                int *l_954 = &l_830;
                int *l_955 = &l_873;
                int *l_957 = &l_880;
                int *l_959 = &l_880;
                int *l_960 = (void*)0;
                int *l_961 = &l_819;
                int *l_963 = &l_875;
                int *l_965 = &g_222;
                int *l_967 = &l_758;
                int *l_968 = &l_875;
                int *l_969 = &l_841;
                int *l_971 = &l_861;
                int *l_972 = &l_841;
                int *l_973 = &l_740;
                int l_974 = 0x93E4D57CL;
                int *l_975 = &l_949;
                int *l_976 = (void*)0;
                int *l_977 = &l_874;
                int *l_978 = &l_962;
                int *l_979 = &l_922;
                int *l_980 = &l_819;
                int *l_981 = &l_874;
                int *l_982 = &l_810;
                int *l_983 = &l_811;
                int *l_984 = &l_731;
                int *l_985 = &l_756;
                int *l_986 = &l_945;
                int *l_987 = &l_756;
                int *l_988 = (void*)0;
                int *l_989 = (void*)0;
                int *l_990 = &l_956;
                int *l_991 = &g_800;
                int *l_992 = &l_730;
                if (l_724)
                    break;
                g_869++;
                --g_993;
                for (l_876 = 0; (l_876 >= 16); l_876 = safe_add_func_uint8_t_u_u(l_876, 6))
                {
                    if (g_6)
                        goto lbl_998;
                }
            }
            for (l_885 = 14; (l_885 < 25); l_885 = safe_add_func_int16_t_s_s(l_885, 7))
            {
                unsigned l_1010 = 0x158E6A85L;
                l_1011 |= (safe_add_func_int8_t_s_s(((*g_32) = (safe_lshift_func_int16_t_s_u(l_767, (((*l_720) = (func_57(g_6, (safe_sub_func_int8_t_s_s(p_15, (((safe_lshift_func_uint8_t_u_u(0x68L, (l_810 = l_1009))) , (p_18 <= l_830)) != 0xE68CL))), (*g_32)) <= l_1010)) ^ p_16)))), 0xEFL));
                return p_18;
            }
            (*l_705) = ((((safe_rshift_func_int16_t_s_u((g_220 , (((*l_1014) = ((void*)0 != &l_721)) >= (*g_32))), p_17)) > p_17) , (*g_498)) , &l_808);
            if ((safe_sub_func_uint32_t_u_u((~(((((*g_32) , (((safe_mod_func_uint8_t_u_u(g_501, (p_16 && 0x02L))) , 4294967289UL) , (func_57(p_16, (**g_497), p_15) ^ 4294967295UL))) , l_1019) != (void*)0) , 4294967295UL)), p_17)))
            {
                unsigned l_1024 = 2UL;
                int l_1033 = 0L;
                unsigned l_1048 = 4294967295UL;
                int *l_1064 = &l_873;
                for (l_819 = 0; (l_819 >= 13); l_819 = safe_add_func_uint32_t_u_u(l_819, 8))
                {
                    unsigned short l_1027 = 0x3CFDL;
                    char *l_1032 = &l_924;
                    unsigned *l_1034 = &g_869;
                }
                (**l_705) = (*g_200);
                (*g_1052) = (l_1051 = l_1051);
                (*g_68) = ((g_501 <= 65535UL) , (l_773 &= (safe_sub_func_uint32_t_u_u((p_16 , (**g_497)), func_46((0xE13CL <= ((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((-3L) | (((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((*l_1064) &= (((((*l_1051) < (**g_497)) <= (0xB3L ^ (*l_1051))) | (**l_705)) || 0x2500L)), (**l_705))), g_222)) != l_924) | 0xB8L)), l_766)), g_33)) ^ l_874)), p_17)))));
            }
            else
            {
                for (l_958 = 0; (l_958 < (-13)); l_958--)
                {
                    return l_1067;
                }
            }
        }
        else
        {
            int *l_1069 = &l_948;
            (*l_1069) = l_1068;
        }
    }
    else
    {
        const int *l_1070 = &l_962;
        l_1070 = l_1070;
    }
    (*l_1071) ^= (g_128 < ((*l_1051) >= 8UL));
    (*g_1083) |= (safe_div_func_int32_t_s_s((4294967287UL | (safe_add_func_int32_t_s_s(((!(((safe_div_func_int8_t_s_s(0xCDL, 8L)) , ((*l_1071) = ((((*l_1051) || p_17) || (*g_32)) > ((safe_sub_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(8UL, g_451)) ^ (((-4L) | 1L) , g_869)), (**g_497))) || l_1082)))) < 0x83816744L)) ^ 8L), (**g_497)))), 0x60F26312L));
    return (*l_1051);
}







static unsigned char func_30(char * p_31)
{
    const unsigned *l_42 = &g_43;
    unsigned char *l_61 = &g_62;
    int l_67 = 0xFAA058A1L;
    int *l_503 = &g_222;
    int **l_505 = &g_200;
    int *l_506 = &l_67;
    short *l_513 = &g_476;
    short *l_514 = (void*)0;
    short *l_515 = &g_516;
    unsigned short **l_519 = (void*)0;
    unsigned short *l_521 = &g_190;
    unsigned short **l_520 = &l_521;
    unsigned **l_522 = &g_498;
    unsigned ***l_523 = &l_522;
    short *l_524 = &g_525;
    int *l_526 = (void*)0;
    int l_527 = 3L;
    unsigned l_540 = 0xEB0BC73DL;
    unsigned char *l_544 = &g_62;
    (*l_505) = (l_503 = func_35(func_37(l_42, (((safe_sub_func_int32_t_s_s(((func_46(((&p_31 != ((func_49((safe_lshift_func_uint16_t_u_u((((*p_31) >= 5L) & (((func_57((((&g_21 != &g_21) != (((*l_61)--) >= (safe_rshift_func_int8_t_s_s(((((*g_32) != (*p_31)) || l_67) , (*p_31)), (*p_31))))) >= l_67), g_21, (*p_31)) || (-10L)) != 0UL) & 8UL)), 9)), l_67, &g_32, &g_128, l_67) & l_67) , (void*)0)) && 0xB6AC9542L), l_67) || l_67) & l_67), l_67)) > 0xFDL) < g_6), g_33, l_67)));
    (*l_506) |= (**l_505);
    l_527 ^= (safe_add_func_uint16_t_u_u(65535UL, (((safe_lshift_func_uint16_t_u_s((*l_506), 9)) <= ((((*l_515) = ((*l_513) ^= ((*l_503) , 0x6EAEL))) > (g_21 < ((*g_68) , ((*l_524) &= ((*l_506) && (((*g_32) = (safe_add_func_uint8_t_u_u((((*l_523) = (((((*l_520) = l_515) != ((*g_32) , l_515)) & (**l_505)) , l_522)) != &g_498), 0x56L))) && (*p_31))))))) == (*l_503))) , (-6L))));
    for (l_527 = 0; (l_527 > 5); l_527 = safe_add_func_uint8_t_u_u(l_527, 9))
    {
        int **l_543 = &l_503;
        int l_567 = 6L;
        int l_605 = 5L;
        int l_629 = 0x4C383BE5L;
        int l_661 = 0x33A6990FL;
        int l_668 = 0x34D6C30FL;
        int l_687 = 0x267DB47FL;
        int l_696 = 1L;
        for (g_128 = 0; (g_128 < (-4)); --g_128)
        {
            short *l_532 = &g_476;
            const unsigned short *l_538 = &g_539;
            const unsigned short **l_537 = &l_538;
            unsigned short *l_545 = &g_220;
            unsigned short *l_546 = &g_547;
            int l_579 = (-1L);
            int l_619 = 0x0F209037L;
            int l_641 = 0x66704019L;
            int l_673 = 0L;
            if (((l_532 != l_532) != ((((**l_520)--) & (safe_rshift_func_int16_t_s_s((((*l_537) = &g_220) != (((*l_546) = ((*l_545) = (g_62 || (((*l_544) &= ((!(g_222 | l_540)) && (((((safe_add_func_int16_t_s_s(((*l_532) = (l_543 == (((*g_498) >= (**l_543)) , &l_526))), g_6)) | g_539) , (void*)0) == l_544) > 1UL))) & (*g_32))))) , (*l_520))), 11))) || (*g_32))))
            {
                return g_128;
            }
            else
            {
                int l_623 = (-1L);
                int l_638 = (-1L);
                int l_649 = (-2L);
                int l_650 = (-1L);
                int l_676 = (-1L);
                for (g_142 = 0; (g_142 > 53); g_142 = safe_add_func_int8_t_s_s(g_142, 1))
                {
                    int *l_550 = &g_222;
                    int *l_551 = &l_67;
                    int *l_552 = &g_222;
                    int *l_553 = &l_67;
                    int *l_554 = (void*)0;
                    int *l_555 = (void*)0;
                    int *l_556 = (void*)0;
                    int *l_557 = &l_67;
                    int *l_558 = &l_67;
                    int *l_559 = &g_21;
                    int *l_560 = &g_21;
                    int *l_561 = &l_67;
                    int *l_562 = &g_222;
                    int *l_563 = &g_21;
                    int *l_564 = &g_21;
                    int *l_565 = &g_21;
                    int *l_566 = &l_67;
                    int *l_568 = &g_222;
                    int *l_569 = (void*)0;
                    int *l_570 = &l_67;
                    int *l_571 = &g_222;
                    int *l_572 = &g_222;
                    int l_573 = 0x66BB1736L;
                    int *l_574 = &g_21;
                    int *l_575 = &g_21;
                    int *l_576 = &l_573;
                    int *l_577 = &g_222;
                    int *l_578 = &l_573;
                    int *l_580 = &l_67;
                    int *l_581 = &g_21;
                    int *l_582 = &l_579;
                    int *l_583 = &l_579;
                    int *l_584 = &g_222;
                    int *l_585 = (void*)0;
                    int *l_586 = &l_567;
                    int *l_587 = &l_567;
                    int *l_588 = &l_579;
                    int *l_589 = (void*)0;
                    int *l_590 = &l_567;
                    int *l_591 = &l_567;
                    int *l_592 = &g_21;
                    int *l_593 = (void*)0;
                    int *l_594 = &g_222;
                    int *l_595 = &g_222;
                    int *l_596 = (void*)0;
                    int *l_597 = &g_222;
                    int *l_598 = &l_573;
                    int *l_599 = (void*)0;
                    int *l_600 = &g_222;
                    int *l_601 = &l_579;
                    int *l_602 = &l_567;
                    int *l_603 = &l_579;
                    int *l_604 = &l_579;
                    int *l_606 = (void*)0;
                    int *l_607 = &g_222;
                    int *l_608 = &l_567;
                    int *l_609 = &g_222;
                    int *l_610 = &l_605;
                    int *l_611 = &l_605;
                    int *l_612 = &l_67;
                    int *l_613 = &l_579;
                    int *l_614 = &l_67;
                    int *l_615 = (void*)0;
                    int *l_616 = &g_21;
                    int *l_617 = (void*)0;
                    int *l_618 = &l_67;
                    int *l_620 = &l_579;
                    int *l_621 = &g_21;
                    int *l_622 = &l_567;
                    int *l_624 = &l_567;
                    int *l_625 = (void*)0;
                    int *l_626 = &l_619;
                    int *l_627 = (void*)0;
                    int *l_628 = &l_579;
                    int *l_630 = &l_623;
                    int *l_631 = &l_623;
                    int l_632 = (-1L);
                    int *l_633 = &l_619;
                    int *l_634 = &l_579;
                    int *l_635 = &l_632;
                    int *l_636 = &l_567;
                    int *l_637 = &l_567;
                    int *l_639 = &l_605;
                    int *l_640 = &l_67;
                    int *l_642 = (void*)0;
                    int *l_643 = &l_641;
                    int *l_644 = &l_67;
                    int *l_645 = &l_623;
                    int *l_646 = &l_579;
                    int *l_647 = &l_632;
                    int *l_648 = &l_623;
                    int *l_651 = &l_623;
                    int *l_652 = (void*)0;
                    int *l_653 = &l_649;
                    int *l_654 = &l_605;
                    int *l_655 = &l_573;
                    int *l_656 = &l_67;
                    int *l_657 = &g_222;
                    int *l_658 = &l_619;
                    int l_659 = (-6L);
                    int *l_660 = &g_21;
                    int *l_662 = &l_638;
                    int *l_663 = &g_222;
                    int *l_664 = &l_641;
                    int *l_665 = &l_650;
                    int *l_666 = &l_632;
                    int *l_667 = &l_638;
                    int *l_669 = &l_641;
                    int *l_670 = &l_649;
                    int *l_671 = (void*)0;
                    int *l_672 = (void*)0;
                    int *l_674 = &l_605;
                    int *l_675 = &l_629;
                    int *l_677 = &g_21;
                    int *l_678 = &l_632;
                    int l_679 = 0xC3F53BB1L;
                    int *l_680 = &l_567;
                    int *l_681 = &l_668;
                    int *l_682 = &l_679;
                    int *l_684 = &l_676;
                    int *l_685 = &l_623;
                    int *l_686 = &l_629;
                    int *l_688 = &l_567;
                    int *l_689 = (void*)0;
                    int *l_690 = &l_632;
                    int *l_691 = (void*)0;
                    int *l_692 = &l_623;
                    int *l_693 = &l_579;
                    int *l_694 = &l_650;
                    int *l_695 = &l_673;
                    int *l_697 = &l_573;
                    ++g_698;
                }
            }
        }
        return (**l_543);
    }
    return (**l_505);
}







static int * func_35(unsigned * p_36)
{
    unsigned char *l_460 = &g_62;
    int l_468 = 6L;
    int **l_469 = &g_200;
    int **l_470 = &g_200;
    int **l_471 = (void*)0;
    int **l_472 = &g_200;
    int *l_473 = &g_21;
    short *l_474 = (void*)0;
    short *l_475 = &g_476;
    char **l_477 = (void*)0;
    int *l_478 = &l_468;
    unsigned **l_495 = (void*)0;
    unsigned ***l_496 = &l_495;
    unsigned short *l_499 = &g_220;
    unsigned *l_500 = &g_501;
    short l_502 = 1L;
    (*l_478) &= (safe_sub_func_uint32_t_u_u((*l_473), (*g_240)));
    (*l_473) = (((!(((*l_500) = ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((*l_478), 0x9C70L)), 3)), g_220)) || ((*g_498) = (safe_sub_func_uint16_t_u_u(((g_62 & (*g_32)) > (*p_36)), ((*l_499) = (safe_div_func_int8_t_s_s(1L, (safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((func_57((safe_add_func_uint32_t_u_u((((*l_473) , ((((*l_496) = l_495) == g_497) <= (*g_32))) || (*l_478)), (*g_68))), (*g_498), (*g_32)) > g_6), g_451)), (*p_36))))))))))) ^ (*l_478))) & l_502) , 0L);
    return p_36;
}







static unsigned * func_37(const unsigned * p_38, unsigned p_39, int p_40, int p_41)
{
    unsigned l_454 = 8UL;
    int *l_457 = &g_222;
    l_454++;
    (*l_457) &= 0x5AC3371AL;
    return &g_451;
}







static unsigned short func_46(unsigned short p_47, unsigned p_48)
{
    int *l_217 = &g_21;
    char **l_218 = &g_32;
    unsigned short *l_219 = &g_220;
    unsigned char *l_247 = &g_142;
    unsigned l_261 = 8UL;
    int l_266 = 0L;
    int l_319 = 0xB3EA293CL;
    int l_425 = 0L;
    int l_431 = (-10L);
    unsigned *l_446 = &l_261;
    unsigned * const *l_445 = &l_446;
    unsigned * const **l_447 = &l_445;
    unsigned * const l_450 = &g_451;
    unsigned * const *l_449 = &l_450;
    unsigned * const **l_448 = &l_449;
    unsigned l_453 = 0xA852904BL;
    if (func_49((safe_sub_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s(((&g_32 != &g_32) > (*g_32)), (((((safe_unary_minus_func_uint8_t_u(((void*)0 == l_217))) != (func_49(p_47, (249UL != 0UL), l_218, &g_33, p_48) == 0L)) || g_128) , (void*)0) != l_219))) , &g_32) == l_218), 0UL)), p_47, l_218, (*l_218), g_62))
    {
        int *l_221 = &g_222;
        (*l_221) = ((*l_217) ^= 0xB4E2EDBCL);
    }
    else
    {
        int l_233 = 0x28449A31L;
        unsigned char *l_238 = &g_62;
        char *l_260 = (void*)0;
        int l_276 = 0xAE0BEDEDL;
        char l_327 = 1L;
        int *l_369 = &l_276;
        int *l_370 = (void*)0;
        int *l_371 = &l_276;
        int *l_372 = &l_276;
        int *l_373 = &l_266;
        int *l_374 = &g_21;
        int *l_375 = &g_222;
        int *l_376 = &l_276;
        int *l_377 = &l_319;
        int *l_378 = &l_266;
        int *l_379 = (void*)0;
        int *l_380 = &l_319;
        int *l_381 = (void*)0;
        int *l_382 = &l_319;
        int *l_383 = (void*)0;
        int *l_384 = (void*)0;
        int *l_385 = &g_21;
        int *l_386 = &g_222;
        int *l_387 = &l_319;
        int *l_388 = (void*)0;
        int *l_389 = &g_222;
        int *l_390 = &l_276;
        int *l_391 = &l_276;
        int *l_392 = &l_319;
        int *l_393 = &l_276;
        int *l_394 = (void*)0;
        int *l_395 = &l_266;
        int *l_396 = &g_21;
        int *l_397 = (void*)0;
        int *l_398 = (void*)0;
        int *l_399 = &g_222;
        int *l_400 = &l_319;
        int *l_401 = &g_21;
        int *l_402 = &g_21;
        int *l_403 = &g_21;
        int *l_404 = (void*)0;
        int *l_405 = (void*)0;
        int *l_406 = &g_21;
        int *l_407 = (void*)0;
        int *l_408 = (void*)0;
        int *l_409 = &l_276;
        int *l_410 = (void*)0;
        int *l_411 = &g_222;
        int *l_412 = (void*)0;
        int *l_413 = &l_319;
        int *l_414 = &l_319;
        int *l_415 = &g_222;
        int *l_416 = &l_266;
        int *l_417 = &g_222;
        int *l_418 = &l_276;
        int *l_419 = &l_276;
        int *l_420 = &l_319;
        int l_421 = 9L;
        int *l_422 = (void*)0;
        int *l_423 = &l_266;
        int *l_424 = &g_222;
        int *l_426 = &g_21;
        int *l_427 = &l_266;
        int l_428 = 3L;
        int *l_429 = &l_428;
        int *l_430 = (void*)0;
        int *l_432 = (void*)0;
        int *l_433 = &l_428;
        int *l_434 = (void*)0;
        int *l_435 = &l_421;
        int *l_436 = (void*)0;
        int *l_437 = (void*)0;
        unsigned char l_438 = 0x6AL;
        int **l_442 = &l_397;
lbl_348:
        (*g_240) |= (((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((((((*l_238) &= ((*l_217) == (safe_mod_func_uint8_t_u_u(g_142, (safe_mod_func_int32_t_s_s((p_48 > (((safe_mod_func_uint16_t_u_u(p_47, l_233)) || p_48) && ((l_233 , (safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(0L, (*l_217))), g_142))) , 0L))), 0x4CE0CA3BL)))))) >= 1UL) , l_233) && p_47), 0UL)), p_47)) || l_233) & (*l_217));
        for (p_47 = 0; (p_47 < 12); p_47++)
        {
            unsigned char *l_248 = &g_142;
            int l_255 = (-8L);
            char **l_259 = &g_32;
            int l_305 = (-1L);
            int l_331 = 1L;
            if ((func_57(((safe_add_func_int16_t_s_s(((0x116AA09AL < (safe_add_func_uint8_t_u_u(((g_118 , l_247) != (l_233 , l_248)), (((safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(0x10L, g_62)) | (safe_mod_func_uint8_t_u_u(0x1CL, p_48))), p_48)) < g_178) > g_142)))) != g_33), p_48)) < p_48), l_255, (*g_32)) != (-2L)))
            {
                unsigned char l_258 = 0xFEL;
                (*l_217) = ((safe_rshift_func_uint8_t_u_u(func_49(l_258, l_233, l_259, l_260, l_261), p_47)) , (*g_200));
            }
            else
            {
                int *l_352 = &g_222;
                const unsigned *l_366 = &g_43;
                const unsigned **l_365 = &l_366;
                if (p_47)
                {
                    int *l_262 = &l_255;
                    int *l_263 = &l_255;
                    int *l_264 = (void*)0;
                    int *l_265 = &g_222;
                    int *l_267 = &g_21;
                    int *l_268 = &g_222;
                    int *l_269 = &l_266;
                    int *l_270 = &g_21;
                    int *l_271 = (void*)0;
                    int *l_272 = &l_266;
                    int *l_273 = &g_222;
                    int *l_274 = &l_266;
                    int *l_275 = (void*)0;
                    int *l_277 = &l_266;
                    int *l_278 = (void*)0;
                    int *l_279 = (void*)0;
                    int *l_280 = &g_222;
                    int *l_281 = &g_21;
                    int *l_282 = &g_222;
                    int *l_283 = &g_222;
                    int *l_284 = (void*)0;
                    int *l_285 = &l_255;
                    int *l_286 = &l_266;
                    int *l_287 = &l_255;
                    int *l_288 = &g_21;
                    int *l_289 = &g_21;
                    int *l_290 = &l_266;
                    int *l_291 = (void*)0;
                    int *l_292 = &g_21;
                    int *l_293 = (void*)0;
                    int *l_294 = &l_276;
                    int *l_295 = (void*)0;
                    int *l_296 = &l_255;
                    int *l_297 = &l_276;
                    int *l_298 = &g_21;
                    int *l_299 = &l_276;
                    int *l_300 = &g_21;
                    int *l_301 = &l_255;
                    int *l_302 = &l_276;
                    int *l_303 = &l_266;
                    int *l_304 = &l_276;
                    int *l_306 = &g_21;
                    int *l_307 = &l_255;
                    int *l_308 = &l_255;
                    int *l_309 = &l_266;
                    int *l_310 = &l_255;
                    int *l_311 = &l_305;
                    int *l_312 = &g_21;
                    int *l_313 = &l_305;
                    int *l_314 = &l_276;
                    int *l_315 = (void*)0;
                    int *l_316 = &l_255;
                    int *l_317 = (void*)0;
                    int *l_318 = (void*)0;
                    int *l_320 = (void*)0;
                    int *l_321 = &l_276;
                    int *l_322 = &g_21;
                    int *l_323 = (void*)0;
                    int *l_324 = &l_266;
                    int *l_325 = &l_255;
                    int *l_326 = &l_266;
                    int *l_328 = &l_255;
                    int *l_329 = (void*)0;
                    int *l_330 = &l_319;
                    int *l_332 = &g_21;
                    int *l_333 = &l_331;
                    int *l_334 = &l_319;
                    int *l_335 = &l_266;
                    int *l_336 = &l_276;
                    int *l_337 = &g_222;
                    int *l_338 = &l_319;
                    int *l_339 = &l_305;
                    int *l_340 = &l_266;
                    int *l_341 = &l_255;
                    int *l_342 = &l_319;
                    int *l_343 = &g_222;
                    int l_344 = 0L;
                    --g_345;
                    if (g_190)
                        goto lbl_348;
                }
                else
                {
                    int *l_349 = &l_255;
                    int **l_350 = &g_200;
                    int **l_351 = &l_349;
                    (*l_351) = ((*l_350) = l_349);
                    (*l_351) = l_352;
                }
                l_255 &= ((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((*l_217), 8)), (((((*l_217) == ((*l_352) = 0x56D828C4L)) , (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(255UL, p_48)), (((*l_365) = &l_261) == (void*)0)))) & ((*g_68) > ((safe_mod_func_uint16_t_u_u(g_6, 1L)) == (-3L)))) < 0x3AC0L))) != g_220) || (*g_68)) | p_47), 0xCBL)), g_190)) , p_47);
                if (p_47)
                    goto lbl_441;
            }
            return p_48;
        }
lbl_441:
        --l_438;
        (*l_442) = (p_48 , &l_425);
    }
    l_266 ^= (*l_217);
    l_217 = &l_266;
    return l_453;
}







static const short func_49(short p_50, int p_51, char ** p_52, char * p_53, unsigned p_54)
{
    int *l_146 = &g_21;
    char l_160 = 6L;
    int l_167 = 0xE2A06A03L;
    int l_172 = 1L;
    char l_197 = 0L;
    char l_198 = 0x08L;
    unsigned l_209 = 0x39F97B59L;
    if (p_51)
    {
        int **l_145 = (void*)0;
        l_146 = &p_51;
        return g_62;
    }
    else
    {
        int *l_147 = &g_21;
        int *l_148 = &g_21;
        int *l_149 = (void*)0;
        int *l_150 = &g_21;
        int *l_151 = &g_21;
        int *l_152 = &g_21;
        int *l_153 = &g_21;
        int l_154 = 1L;
        int *l_155 = (void*)0;
        int *l_156 = &g_21;
        int *l_157 = &l_154;
        int *l_158 = &l_154;
        int *l_159 = &l_154;
        int l_161 = 0x7ADB2349L;
        int l_162 = 0L;
        int *l_163 = &l_162;
        int *l_164 = &l_162;
        int *l_165 = &g_21;
        int *l_166 = (void*)0;
        int *l_168 = (void*)0;
        int *l_169 = &l_167;
        int *l_170 = (void*)0;
        int *l_171 = &g_21;
        int *l_173 = &l_172;
        int *l_174 = &l_161;
        int *l_175 = &l_161;
        int *l_176 = &l_172;
        int *l_177 = &l_161;
        int **l_211 = &l_176;
        ++g_179;
lbl_201:
        for (g_128 = 3; (g_128 < 26); g_128 = safe_add_func_int32_t_s_s(g_128, 6))
        {
            unsigned l_184 = 0x5C255F5DL;
            unsigned short *l_189 = &g_190;
            (*g_68) = (((l_184 , l_175) == (func_57(g_178, (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_50, p_51)), ((*l_189) = g_33))), l_184) , l_146)) ^ p_50);
            p_51 &= l_184;
            if (((((*l_146) , (((safe_rshift_func_int16_t_s_u(l_184, ((*l_189) = 0x8B9EL))) , ((safe_add_func_int32_t_s_s(p_54, (p_50 | func_57(p_50, p_50, ((safe_add_func_int8_t_s_s((-9L), (*g_32))) , (*g_32)))))) > l_197)) , l_198)) != (*l_163)) > p_51))
            {
                if (l_184)
                    break;
                if (p_50)
                    continue;
            }
            else
            {
                (*g_199) = &g_21;
                if (g_142)
                    goto lbl_201;
            }
        }
        p_51 = ((*l_147) = (&g_68 == (void*)0));
        (*l_211) = ((((safe_sub_func_uint32_t_u_u(p_51, ((g_179 , func_57((l_146 != l_146), g_33, ((safe_unary_minus_func_int32_t_s(((p_51 <= (safe_div_func_uint32_t_u_u((+((((safe_add_func_int32_t_s_s(p_54, ((p_50 < (((p_54 || (*l_177)) == l_209) , g_190)) , (*l_146)))) == 0x6AL) != p_51) <= (-7L))), p_51))) , (*g_200)))) , 0x02L))) >= 4294967289UL))) == 0x7421FA51L) | 0x812AL) , (*g_199));
    }
    return p_50;
}







static char func_57(int p_58, unsigned p_59, char p_60)
{
    int *l_69 = &g_21;
    int *l_70 = (void*)0;
    int *l_71 = &g_21;
    int *l_72 = &g_21;
    int *l_73 = (void*)0;
    int *l_74 = &g_21;
    int *l_75 = &g_21;
    int *l_76 = &g_21;
    int *l_77 = &g_21;
    int *l_78 = &g_21;
    int *l_79 = (void*)0;
    int *l_80 = &g_21;
    int *l_81 = &g_21;
    int l_82 = 0x0698B42DL;
    int *l_83 = &l_82;
    int l_84 = 0x2C08F497L;
    int *l_85 = &l_82;
    int *l_86 = &g_21;
    int *l_87 = &l_84;
    int *l_88 = &l_82;
    int *l_89 = (void*)0;
    int *l_90 = &l_82;
    int *l_91 = &l_84;
    int *l_92 = (void*)0;
    int *l_93 = &l_84;
    int *l_94 = &l_84;
    int *l_95 = &l_82;
    int *l_96 = &l_84;
    int *l_97 = &g_21;
    int *l_98 = &l_84;
    int *l_99 = &l_82;
    int *l_100 = (void*)0;
    int *l_101 = &g_21;
    int *l_102 = (void*)0;
    int *l_103 = &l_84;
    int *l_104 = &l_84;
    int *l_105 = &l_84;
    int *l_106 = &g_21;
    int *l_107 = &l_82;
    int *l_108 = &l_84;
    int *l_109 = &g_21;
    int *l_110 = (void*)0;
    int *l_111 = &l_82;
    int *l_112 = &l_82;
    int *l_113 = &l_84;
    int *l_114 = (void*)0;
    int l_115 = 0x96E9900FL;
    int *l_116 = &l_84;
    int *l_117 = &g_21;
    short l_121 = 0L;
    int *l_122 = &l_115;
    int *l_123 = &l_82;
    int *l_124 = &g_21;
    int *l_125 = &g_21;
    int *l_126 = &l_115;
    int *l_127 = &g_21;
    int *l_129 = &l_84;
    int *l_130 = (void*)0;
    int *l_131 = (void*)0;
    int *l_132 = &g_21;
    int l_133 = 1L;
    int *l_134 = &l_84;
    int *l_135 = &l_133;
    int l_136 = 0x97C51C8BL;
    int *l_137 = (void*)0;
    int *l_138 = (void*)0;
    int *l_139 = &g_21;
    int *l_140 = &l_82;
    int *l_141 = &l_84;
    (*g_68) = p_59;
    g_118--;
    --g_142;
    return p_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_451, "g_451", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_516, "g_516", print_hash_value);
    transparent_crc(g_525, "g_525", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_547, "g_547", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_816, "g_816", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    transparent_crc(g_869, "g_869", print_hash_value);
    transparent_crc(g_966, "g_966", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1346, "g_1346", print_hash_value);
    transparent_crc(g_1438, "g_1438", print_hash_value);
    transparent_crc(g_1504, "g_1504", print_hash_value);
    transparent_crc(g_1571, "g_1571", print_hash_value);
    transparent_crc(g_1800, "g_1800", print_hash_value);
    transparent_crc(g_2237, "g_2237", print_hash_value);
    transparent_crc(g_2474, "g_2474", print_hash_value);
    transparent_crc(g_2574, "g_2574", print_hash_value);
    transparent_crc(g_2590, "g_2590", print_hash_value);
    transparent_crc(g_2747, "g_2747", print_hash_value);
    transparent_crc(g_2748, "g_2748", print_hash_value);
    transparent_crc(g_2785, "g_2785", print_hash_value);
    transparent_crc(g_2903, "g_2903", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
