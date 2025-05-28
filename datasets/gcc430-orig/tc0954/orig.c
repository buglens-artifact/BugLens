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



static int g_2 = 0xB9F9B319L;
static int g_5 = (-1L);
static long long g_15 = 4L;
static unsigned long long g_22 = 9UL;
static long long g_24 = 1L;
static unsigned g_39 = 4UL;
static int g_41 = (-9L);
static short g_69 = 7L;
static long long g_92 = 0x718A84D2376568C0LL;
static long long g_110 = 0L;
static unsigned g_135 = 1UL;
static int ** const g_147 = (void*)0;
static unsigned long long g_159 = 0xAD4DBF7CD62FFE2ALL;
static int g_193 = (-5L);
static short g_228 = 1L;
static const short g_237 = (-1L);
static char g_242 = 1L;
static char g_273 = 0L;
static int *g_302 = &g_193;
static const long long g_334 = 0xB54F28CA52837081LL;
static int **g_371 = &g_302;
static int g_395 = 3L;
static unsigned short g_418 = 0x0B53L;
static unsigned short g_431 = 65527UL;
static short g_458 = 0x6961L;
static short g_461 = 0xFDDBL;
static int g_500 = 0xC767CC5CL;
static unsigned char g_507 = 0UL;
static unsigned char g_572 = 248UL;
static short g_575 = 0x62F1L;
static short g_583 = 0L;
static unsigned short *g_586 = &g_431;
static int g_619 = 0L;
static long long g_653 = (-1L);
static unsigned g_659 = 0xA0813F29L;
static char *g_663 = (void*)0;
static char **g_662 = &g_663;
static int **g_669 = (void*)0;
static int ***g_668 = &g_669;
static unsigned char g_783 = 252UL;
static unsigned char g_854 = 3UL;
static const char ***g_857 = (void*)0;
static unsigned long long g_866 = 18446744073709551610UL;
static long long g_931 = 0x6F27D343D9787229LL;
static long long g_933 = 6L;
static unsigned short g_940 = 0UL;
static unsigned g_1063 = 0UL;
static unsigned g_1410 = 0xE94213C3L;
static unsigned short g_1543 = 65529UL;
static unsigned long long g_1575 = 18446744073709551610UL;
static int g_1616 = 0x992F00B7L;
static const unsigned short g_1678 = 0x681EL;
static unsigned char *g_1716 = &g_572;
static unsigned char **g_1715 = &g_1716;
static unsigned char g_1841 = 0xB1L;
static int g_1943 = 0x3CBF475CL;
static int g_1944 = 0x7EF147CFL;
static char g_1945 = 0x14L;
static unsigned g_1951 = 0x0954C056L;
static unsigned char g_2037 = 0xE3L;
static unsigned char g_2135 = 0xECL;
static int ** const g_2202 = &g_302;
static unsigned char g_2233 = 1UL;
static int g_2416 = (-1L);
static int g_2426 = (-1L);
static unsigned char g_2442 = 1UL;
static int g_2448 = 0xE372CC59L;
static unsigned short g_2457 = 0xFF22L;
static long long g_2540 = 0x1211CFAED63316BDLL;
static short g_2593 = 0x6BABL;
static unsigned long long g_2697 = 18446744073709551610UL;
static long long g_2814 = 0L;
static char ****g_2847 = (void*)0;
static const int g_2912 = 0x08CE1243L;
static short *g_2953 = (void*)0;
static unsigned char g_3100 = 0x90L;
static unsigned short **g_3131 = &g_586;
static int *g_3136 = (void*)0;
static unsigned **g_3141 = (void*)0;
static unsigned char g_3239 = 255UL;
static char g_3292 = (-5L);
static int g_3296 = 0L;
static int g_3297 = (-5L);
static char g_3306 = 0xA6L;
static unsigned g_3309 = 0xAE37F82CL;
static unsigned g_3332 = 0x7D0B10F7L;



static unsigned func_1(void);
static int func_8(long long p_9, long long p_10, unsigned long long p_11, int p_12);
static unsigned short func_30(int * p_31, unsigned p_32);
static unsigned func_33(int p_34, unsigned short p_35, int * p_36, int p_37);
static int ** const func_138(int * const p_139, short p_140, char p_141, unsigned p_142);
static int * func_148(const long long p_149, unsigned p_150, int p_151, short p_152, int p_153);
static long long func_160(int * p_161, unsigned long long p_162, const char p_163);
static int func_169(long long * p_170, unsigned p_171, int p_172, int * p_173);
static unsigned short func_178(unsigned long long p_179, short p_180);
static int * func_184(int * p_185, long long * p_186, unsigned long long p_187, unsigned char p_188, int * const p_189);
static unsigned func_1(void)
{
    long long *l_25 = &g_24;
    int l_2964 = 0xCAEB4DB1L;
    int l_2992 = 0x92F8B63FL;
    int l_2999 = 0x93D507F2L;
    int l_3054 = 0x764C002BL;
    const unsigned short *l_3105 = (void*)0;
    const unsigned l_3121 = 18446744073709551613UL;
    unsigned short **l_3128 = &g_586;
    unsigned char l_3165 = 1UL;
    char *****l_3351 = &g_2847;
    char **** const *l_3352 = &g_2847;
    int *l_3353 = &g_2;
    for (g_2 = 0; (g_2 > (-16)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    {
        long long *l_23 = &g_24;
        int l_38 = (-1L);
        int l_2983 = 0x404F0DE2L;
        int l_2986 = 0L;
        int l_3003 = 8L;
        long long l_3062 = 0xF6E5CEA86D389129LL;
        for (g_5 = 0; (g_5 > (-6)); g_5--)
        {
            unsigned l_13 = 1UL;
            long long *l_14 = &g_15;
            int *l_20 = (void*)0;
            int *l_21 = (void*)0;
            int *l_2976 = (void*)0;
        }
        if (l_38)
        {
            for (g_458 = 0; (g_458 >= 23); g_458++)
            {
                long long l_2979 = (-3L);
                return l_2979;
            }
            (*g_302) |= l_38;
        }
        else
        {
            char l_2982 = 0L;
            int *l_2984 = &g_395;
            int *l_2985 = (void*)0;
            int *l_2987 = &l_2983;
            int *l_2988 = &g_619;
            int *l_2989 = &l_2986;
            int *l_2990 = &g_395;
            int *l_2991 = &l_2964;
            int *l_2993 = (void*)0;
            int *l_2994 = &g_2448;
            int *l_2995 = &g_1616;
            int *l_2996 = (void*)0;
            int *l_2997 = &g_619;
            int *l_2998 = &g_395;
            int *l_3000 = &g_41;
            int *l_3001 = &g_41;
            int *l_3002 = &l_2986;
            int *l_3004 = &l_2992;
            int *l_3005 = &g_1943;
            int *l_3006 = &g_619;
            int *l_3007 = &g_500;
            int *l_3008 = &g_500;
            int *l_3009 = &l_38;
            int *l_3010 = (void*)0;
            int *l_3011 = &l_3003;
            int *l_3012 = (void*)0;
            int *l_3013 = &l_2986;
            int *l_3014 = &g_5;
            int *l_3015 = &l_2986;
            int *l_3016 = &g_5;
            int *l_3017 = &l_2999;
            int *l_3018 = &g_395;
            int *l_3019 = &l_2964;
            int *l_3020 = &g_41;
            int *l_3021 = &l_2992;
            int *l_3022 = &l_38;
            int *l_3023 = &g_5;
            int *l_3024 = &l_3003;
            int *l_3025 = &g_193;
            int *l_3026 = &l_2992;
            int *l_3027 = &g_395;
            int *l_3028 = &g_5;
            int *l_3029 = &g_41;
            int *l_3030 = &l_2964;
            int *l_3031 = &l_2999;
            int *l_3032 = (void*)0;
            int l_3033 = 0L;
            int *l_3034 = &g_2448;
            int *l_3035 = (void*)0;
            short l_3036 = 1L;
            int *l_3037 = &g_1943;
            int *l_3038 = &g_41;
            int *l_3039 = &l_2964;
            int *l_3040 = (void*)0;
            int *l_3041 = &l_2992;
            int *l_3042 = &g_5;
            int *l_3043 = (void*)0;
            int *l_3044 = &l_2983;
            int *l_3045 = &g_395;
            int *l_3046 = &g_1616;
            int *l_3047 = &g_500;
            int *l_3048 = &l_3003;
            int *l_3049 = &l_2964;
            int *l_3050 = &l_2999;
            int *l_3051 = &l_2986;
            int *l_3052 = &l_2986;
            int *l_3053 = (void*)0;
            int *l_3055 = &g_193;
            int *l_3056 = &l_38;
            int *l_3057 = &g_41;
            int *l_3058 = &g_395;
            int l_3059 = 0x6DD8AFBFL;
            int *l_3060 = &g_41;
            int *l_3061 = (void*)0;
            int *l_3063 = &l_2964;
            int *l_3064 = &l_3054;
            int *l_3065 = &l_3033;
            int *l_3066 = (void*)0;
            int *l_3067 = &g_395;
            int *l_3068 = &l_38;
            int *l_3069 = (void*)0;
            int *l_3070 = (void*)0;
            int *l_3071 = (void*)0;
            int *l_3072 = &g_1943;
            int *l_3073 = &g_619;
            int *l_3074 = &l_3054;
            int *l_3075 = &l_3054;
            int *l_3076 = &l_2992;
            int *l_3077 = (void*)0;
            int *l_3078 = &l_2992;
            int *l_3079 = (void*)0;
            int *l_3080 = &l_3059;
            int *l_3081 = &l_2964;
            int *l_3082 = &l_2986;
            int *l_3083 = &l_2992;
            int *l_3084 = &g_2448;
            int *l_3085 = &g_5;
            int *l_3086 = &g_395;
            int *l_3087 = (void*)0;
            int *l_3088 = &l_2992;
            int *l_3089 = (void*)0;
            int l_3090 = 0x807891D4L;
            int *l_3091 = (void*)0;
            int *l_3092 = &l_2983;
            int *l_3093 = &l_2999;
            int *l_3094 = &g_193;
            int *l_3095 = &g_500;
            int *l_3096 = &g_500;
            int *l_3097 = (void*)0;
            int *l_3098 = &g_500;
            int *l_3099 = &g_500;
            (*g_302) = ((&g_668 != (void*)0) > (!(!(safe_sub_func_int32_t_s_s(l_2982, l_38)))));
            g_3100++;
        }
    }
    if ((0x54L > (6UL | (-1L))))
    {
        int l_3116 = 0x61CFB953L;
        short l_3125 = 0x2842L;
        (**g_371) = (safe_div_func_uint8_t_u_u((l_3105 != &g_2457), 246UL));
        if ((*g_302))
        {
            long long l_3106 = 1L;
            unsigned long long *l_3107 = &g_866;
            short *l_3117 = &g_458;
            int *l_3120 = (void*)0;
            int *l_3122 = &l_3054;
            unsigned short ***l_3129 = &l_3128;
            unsigned short ***l_3130 = (void*)0;
            int *l_3132 = &g_193;
            l_2992 = ((*l_3122) = (func_8(l_3106, g_2037, ((*l_3107)++), (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_572, (safe_mod_func_uint8_t_u_u((*g_1716), (((*l_3117) = l_3116) && (((safe_mod_func_uint64_t_u_u(func_33(l_3054, ((*g_586) = func_160((*g_371), func_160(l_3120, (0UL != 0xD0D5FFD7L), l_3121), l_3116)), &l_3116, g_1410), g_395)) || (-4L)) && (**g_371))))))), (**g_1715)))) == l_3116));


            (*l_3132) |= ((safe_mod_func_uint64_t_u_u(l_3125, ((*l_25) = (-3L)))) < func_33(l_3054, (safe_sub_func_uint32_t_u_u(((g_3131 = ((*l_3129) = l_3128)) == &g_586), (l_2999 && ((*g_586) < ((l_3125 && (g_507 ^ g_866)) ^ 0L))))), l_3122, l_3054));
        }
        else
        {
            return l_2999;
        }


    }
    else
    {
        int *l_3135 = &g_41;
        long long l_3244 = (-1L);
        unsigned long long *l_3347 = &g_866;
        int l_3348 = 1L;
        for (g_193 = 0; (g_193 > 8); g_193++)
        {
            unsigned *l_3143 = (void*)0;
            unsigned **l_3142 = &l_3143;
            (*g_2202) = l_3135;

            ;
            (*g_371) = (*g_371);
            (*g_302) = (l_2999 & func_33((**g_371), (*g_586), g_3136, (g_1944 ^= (0xF2L > (safe_lshift_func_uint8_t_u_s(l_2964, (safe_mod_func_int32_t_s_s((l_2964 >= (g_3141 == l_3142)), l_3054))))))));
        }

        ;
        for (g_507 = 7; (g_507 < 51); g_507 = safe_add_func_int8_t_s_s(g_507, 3))
        {
            const unsigned long long l_3151 = 0x1B611B0F7540646CLL;
            int l_3162 = 0x4AC954BFL;
            unsigned l_3166 = 0x44BC8B6BL;
            int l_3213 = 0L;
            for (g_2448 = 0; (g_2448 >= 29); g_2448 = safe_add_func_uint64_t_u_u(g_2448, 3))
            {
                unsigned long long l_3148 = 8UL;
                int *l_3149 = &g_619;
                short *l_3150 = &g_458;
                (*g_2202) = l_3135;

                ;
                if ((!((~(0xE3L | l_3148)) & (((g_135 <= ((((func_160(l_3149, (0L || ((*l_3150) |= (*l_3135))), l_3151) | g_2593) > g_1410) || 0x815432B661BF8F9ALL) >= 0x7EL)) | (*l_3135)) >= l_3151))))
                {
                    (*g_371) = &l_2999;

                    ;
                    return g_1616;


                }
                else
                {
                    int *l_3152 = (void*)0;
                    unsigned *l_3153 = &g_1063;
                    unsigned *l_3154 = (void*)0;
                    unsigned *l_3155 = &g_659;
                    unsigned *l_3156 = &g_1410;
                    if (l_2964)
                        break;
                    if (l_3054)
                        continue;
                    (*g_302) = (**g_2202);
                    (*g_302) = func_30(l_3152, ((*l_3156) &= ((*l_3155) = ((*l_3153) &= g_619))));
                }
                for (g_1944 = 0; (g_1944 > 15); g_1944 = safe_add_func_int8_t_s_s(g_1944, 8))
                {
                    if ((*l_3149))
                        break;
                }
                for (g_2233 = 0; (g_2233 == 9); g_2233 = safe_add_func_int16_t_s_s(g_2233, 1))
                {
                    int l_3161 = (-4L);
                    return l_3161;
                }
            }
        }
        l_3348 &= (l_3054 = (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(0L, (**g_1715))) != (*g_1716)), (safe_div_func_uint64_t_u_u((func_30(((*g_371) = l_3135), (*l_3135)) && (g_1951 && ((*l_3347) = g_2233))), func_33((0xB2DACC55L & 4294967295UL), (*g_586), l_3135, g_2540))))));

        ;
    }


    (*l_3353) ^= (safe_add_func_int32_t_s_s((l_3351 == l_3352), l_3121));
    return g_1543;
}







static int func_8(long long p_9, long long p_10, unsigned long long p_11, int p_12)
{
    int *l_2968 = (void*)0;
    unsigned char *l_2969 = &g_2442;
    int l_2970 = 1L;
    int *l_2975 = &g_2448;
    for (g_41 = 21; (g_41 < (-6)); g_41 = safe_sub_func_uint16_t_u_u(g_41, 6))
    {
        short l_2967 = 0xA4B2L;
        (**g_2202) = l_2967;
    }
    l_2968 = l_2968;
    (*l_2975) ^= ((((*g_1715) = (*g_1715)) == l_2969) != (l_2970 && (safe_mul_func_int8_t_s_s(p_9, (l_2970 & ((((*g_586) | func_160(((*g_371) = &p_12), (safe_sub_func_int64_t_s_s(func_30(&p_12, g_2442), 5UL)), p_10)) & 0L) == p_12))))));

    ;
    return p_12;


}







static unsigned short func_30(int * p_31, unsigned p_32)
{
    int *l_40 = &g_41;
    int *l_42 = &g_41;
    int *l_43 = (void*)0;
    int *l_44 = &g_41;
    int *l_45 = &g_41;
    int *l_46 = &g_41;
    int *l_47 = &g_41;
    int *l_48 = &g_41;
    int *l_49 = (void*)0;
    int *l_50 = &g_41;
    int *l_51 = &g_41;
    int *l_52 = (void*)0;
    int *l_53 = &g_41;
    int *l_54 = (void*)0;
    int *l_55 = &g_41;
    int *l_56 = &g_41;
    int *l_57 = &g_41;
    int *l_58 = &g_41;
    int *l_59 = &g_41;
    int l_60 = (-2L);
    int *l_61 = (void*)0;
    int *l_62 = &l_60;
    int *l_63 = &l_60;
    int *l_64 = &l_60;
    int *l_65 = &l_60;
    int *l_66 = &l_60;
    int *l_67 = &g_41;
    int l_68 = 0x069D1FE9L;
    int *l_70 = &l_60;
    int *l_71 = &l_60;
    int *l_72 = &l_60;
    int *l_73 = &l_68;
    int *l_74 = &g_41;
    int *l_75 = (void*)0;
    int *l_76 = &l_60;
    int *l_77 = &l_60;
    int l_78 = 0x23E629BAL;
    int *l_79 = (void*)0;
    int *l_80 = &l_78;
    int l_81 = 0xAFE0A4D2L;
    int *l_82 = &l_60;
    int *l_83 = (void*)0;
    int *l_84 = &g_41;
    int *l_85 = &l_81;
    int l_86 = 0x89E7675DL;
    int *l_87 = &l_86;
    int *l_88 = &l_86;
    int *l_89 = &l_81;
    int *l_90 = &l_60;
    int *l_91 = &l_86;
    int *l_93 = &l_60;
    int *l_94 = &l_78;
    int *l_95 = &l_78;
    int *l_96 = (void*)0;
    int *l_97 = (void*)0;
    int *l_98 = &l_81;
    int *l_99 = &l_68;
    int *l_100 = &l_78;
    int *l_101 = &l_60;
    int l_102 = 0xF8616691L;
    int *l_103 = &l_86;
    int *l_104 = &l_60;
    int *l_105 = &l_60;
    int *l_106 = &l_68;
    int *l_107 = (void*)0;
    int *l_108 = (void*)0;
    int *l_109 = (void*)0;
    int *l_111 = &l_102;
    int *l_112 = &l_60;
    int *l_113 = (void*)0;
    int *l_114 = &l_86;
    int l_115 = (-1L);
    int *l_116 = &l_78;
    int *l_117 = &l_81;
    int *l_118 = &l_102;
    int l_119 = 7L;
    int *l_120 = &l_81;
    int *l_121 = &l_60;
    int *l_122 = &l_86;
    int l_123 = (-1L);
    int *l_124 = &l_81;
    int *l_125 = &l_123;
    int *l_126 = (void*)0;
    int *l_127 = &l_86;
    int *l_128 = &l_119;
    int *l_129 = &l_86;
    int *l_130 = &l_119;
    int *l_131 = &l_115;
    int l_132 = 0x555A6F0EL;
    int *l_133 = &l_119;
    int *l_134 = &l_132;
    int **l_2836 = &l_64;
    char ***l_2845 = &g_662;
    char ****l_2844 = &l_2845;
    char ***l_2866 = &g_662;
    unsigned l_2944 = 1UL;
    g_135++;
    return p_32;
}







static unsigned func_33(int p_34, unsigned short p_35, int * p_36, int p_37)
{
    return p_34;
}







static int ** const func_138(int * const p_139, short p_140, char p_141, unsigned p_142)
{
    unsigned long long l_156 = 0UL;
    int *l_164 = &g_41;
    unsigned char *l_2823 = (void*)0;
    long long *l_2832 = &g_92;
    short *l_2833 = &g_2593;
    unsigned long long *l_2834 = &g_2697;
    int l_2835 = (-1L);
    for (g_92 = 8; (g_92 == (-28)); --g_92)
    {
        int *l_146 = &g_5;
        int ** const l_145 = &l_146;
        return g_147;


    }
    l_164 = func_148(((-10L) ^ (safe_div_func_uint64_t_u_u(p_140, 0x053AAA0C7D0B67C4LL))), (((*p_139) = l_156) && (safe_div_func_int64_t_s_s((l_156 == p_140), ((g_159 <= g_24) ^ func_160(l_164, (*l_164), g_39))))), p_140, g_940, (*l_164));

    ;
    ;
    ;
    l_2835 &= ((g_2814 ^ (safe_mod_func_uint8_t_u_u(((*g_1716) |= 7UL), (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((((*l_2834) = (safe_rshift_func_int16_t_s_s(((*l_2833) = ((l_2823 != (void*)0) > (safe_div_func_int64_t_s_s(g_395, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((g_1616 != l_156), p_140)) < ((((*g_586) = (((*l_2832) ^= p_140) || p_142)) ^ p_141) > g_1944)) & 0xD759727427C245D7LL), 6)), 4)))))), 13))) > 0x34BA31DEA61F63FCLL) != (*p_139)), p_142)), p_140))))) <= g_159);
    return (*g_668);


}







static int * func_148(const long long p_149, unsigned p_150, int p_151, short p_152, int p_153)
{
    char l_2470 = 0x10L;
    char *l_2475 = (void*)0;
    int l_2476 = 0x53877E62L;
    int *l_2477 = &g_2448;
    unsigned short *l_2478 = &g_940;
    int l_2479 = 0x0E1C73CDL;
    int l_2522 = 0x5CFCEC3EL;
    int l_2526 = 8L;
    int l_2567 = 0L;
    int l_2584 = (-1L);
    int l_2603 = 0x8126E14DL;
    int l_2621 = (-1L);
    int l_2624 = 0x5168B397L;
    int l_2634 = 0xB663341BL;
    int l_2651 = (-1L);
    unsigned short ***l_2705 = (void*)0;
    int *l_2725 = (void*)0;
    int *l_2726 = (void*)0;
    int *l_2727 = &l_2651;
    int *l_2728 = &g_395;
    int *l_2729 = &g_1616;
    int *l_2730 = &l_2476;
    int *l_2731 = (void*)0;
    int *l_2732 = (void*)0;
    int *l_2733 = &l_2584;
    int *l_2734 = &g_2448;
    int *l_2735 = (void*)0;
    int *l_2736 = &g_1943;
    int *l_2737 = &l_2567;
    int *l_2738 = &g_2448;
    int *l_2739 = &g_1943;
    int *l_2740 = &g_500;
    int *l_2741 = &g_500;
    int *l_2742 = &l_2634;
    int *l_2743 = (void*)0;
    int *l_2744 = (void*)0;
    int *l_2745 = (void*)0;
    int *l_2746 = &l_2603;
    int *l_2747 = &g_619;
    int *l_2748 = &l_2476;
    int *l_2749 = &l_2479;
    int *l_2750 = &g_41;
    int *l_2751 = &l_2634;
    int *l_2752 = &l_2479;
    int *l_2753 = &l_2476;
    int *l_2754 = &g_193;
    int *l_2755 = &l_2567;
    int *l_2756 = &g_395;
    int *l_2757 = &g_500;
    int *l_2758 = (void*)0;
    int *l_2759 = &g_1943;
    int *l_2760 = &g_1616;
    int *l_2761 = &g_41;
    int *l_2762 = (void*)0;
    int *l_2763 = &l_2621;
    int *l_2764 = &l_2479;
    int *l_2765 = &l_2479;
    int *l_2766 = &l_2603;
    int *l_2767 = &l_2526;
    int *l_2768 = (void*)0;
    int *l_2769 = &l_2621;
    int *l_2770 = &l_2479;
    int *l_2771 = &l_2651;
    int *l_2772 = &l_2603;
    int *l_2773 = &g_2448;
    int *l_2774 = &g_395;
    int *l_2775 = (void*)0;
    int *l_2776 = &g_41;
    int l_2777 = 0xAA3AE3CCL;
    int *l_2778 = &g_1943;
    int *l_2779 = &l_2624;
    int *l_2780 = (void*)0;
    int *l_2781 = &g_193;
    int *l_2782 = (void*)0;
    int *l_2783 = &l_2567;
    int *l_2784 = &l_2479;
    int *l_2785 = &g_41;
    int *l_2786 = &l_2584;
    int *l_2787 = &g_395;
    int *l_2788 = &l_2479;
    int *l_2789 = &l_2624;
    int *l_2790 = &l_2526;
    int *l_2791 = &l_2567;
    int *l_2792 = &g_395;
    int *l_2793 = (void*)0;
    int *l_2794 = &g_2448;
    int *l_2795 = &l_2522;
    int *l_2796 = &g_619;
    int *l_2797 = &g_395;
    int *l_2798 = &l_2777;
    int *l_2799 = &l_2476;
    int *l_2800 = &l_2603;
    int *l_2801 = &l_2651;
    int *l_2802 = (void*)0;
    int *l_2803 = &g_1616;
    int *l_2804 = &g_500;
    int *l_2805 = &g_500;
    int *l_2806 = &l_2651;
    int *l_2807 = &l_2567;
    int *l_2808 = &l_2634;
    int *l_2809 = &g_500;
    int *l_2810 = &g_500;
    unsigned char l_2811 = 0x3BL;
    if ((safe_mod_func_uint16_t_u_u(((p_151 | (safe_rshift_func_uint16_t_u_u(((*l_2478) &= ((l_2470 ^ (safe_rshift_func_int16_t_s_s(g_2426, l_2470))) || func_169(&g_92, ((safe_rshift_func_uint8_t_u_s(l_2470, (l_2476 = l_2470))) <= (p_153 != (func_33((**g_371), l_2470, (*g_2202), p_152) & l_2470))), l_2470, l_2477))), p_149))) == p_151), g_5)))
    {
        int *l_2480 = (void*)0;
        int *l_2481 = &g_2448;
        int *l_2482 = (void*)0;
        int *l_2483 = &l_2479;
        int *l_2484 = (void*)0;
        int *l_2485 = &g_500;
        int *l_2486 = &g_395;
        int l_2487 = 0x0C52C825L;
        int *l_2488 = (void*)0;
        int *l_2489 = (void*)0;
        int *l_2490 = (void*)0;
        int *l_2491 = &l_2476;
        int *l_2492 = &g_1616;
        int *l_2493 = (void*)0;
        int *l_2494 = &l_2479;
        int *l_2495 = &g_1616;
        int *l_2496 = &g_41;
        int *l_2497 = &l_2476;
        int *l_2498 = &l_2487;
        int *l_2499 = &g_41;
        int *l_2500 = &g_41;
        int l_2501 = (-1L);
        int l_2502 = 0L;
        int *l_2503 = &g_41;
        int *l_2504 = &g_41;
        int *l_2505 = &g_500;
        int *l_2506 = (void*)0;
        int l_2507 = 9L;
        int l_2508 = 1L;
        int *l_2509 = &g_193;
        int *l_2510 = &l_2501;
        int *l_2511 = &l_2476;
        int *l_2512 = &l_2507;
        int *l_2513 = &g_500;
        int *l_2514 = &g_193;
        int *l_2515 = &g_41;
        int l_2516 = 0x81FF0455L;
        int *l_2517 = &l_2502;
        int *l_2518 = &g_193;
        int *l_2519 = &g_193;
        int *l_2520 = &g_500;
        int *l_2521 = &g_193;
        int *l_2523 = &g_500;
        int *l_2524 = &g_395;
        int *l_2525 = &l_2508;
        int *l_2527 = &l_2507;
        int *l_2528 = &g_41;
        int *l_2529 = &l_2508;
        int *l_2530 = &l_2501;
        int *l_2531 = &l_2479;
        int *l_2532 = (void*)0;
        int *l_2533 = &g_395;
        int *l_2534 = &l_2502;
        int *l_2535 = &l_2508;
        int *l_2536 = &g_500;
        int *l_2537 = &l_2501;
        int *l_2538 = &l_2516;
        int *l_2539 = &g_193;
        int *l_2541 = &g_1616;
        int *l_2542 = &l_2487;
        int *l_2543 = &l_2516;
        int *l_2544 = &g_2448;
        int *l_2545 = &l_2507;
        int *l_2546 = &l_2507;
        int *l_2547 = &g_1616;
        int *l_2548 = &l_2476;
        int *l_2549 = (void*)0;
        int *l_2550 = (void*)0;
        int *l_2551 = &l_2516;
        int *l_2552 = &g_41;
        int l_2553 = (-1L);
        int *l_2554 = &g_41;
        int *l_2555 = (void*)0;
        int *l_2556 = &l_2553;
        int *l_2557 = &l_2526;
        int *l_2558 = &l_2501;
        int *l_2559 = (void*)0;
        int *l_2560 = &l_2553;
        int *l_2561 = &g_1943;
        int *l_2562 = &g_619;
        int *l_2563 = &l_2487;
        int *l_2564 = &l_2507;
        int *l_2565 = &g_500;
        int *l_2566 = &l_2501;
        int *l_2568 = &g_1616;
        int *l_2569 = &g_2448;
        int l_2570 = 1L;
        int *l_2571 = &g_1616;
        int *l_2572 = &l_2507;
        int *l_2573 = &l_2508;
        int *l_2574 = &l_2501;
        int *l_2575 = &g_193;
        int l_2576 = 0x7FEFC595L;
        int *l_2577 = &l_2570;
        int *l_2578 = &l_2476;
        int *l_2579 = &l_2476;
        int *l_2580 = &l_2487;
        int *l_2581 = &l_2576;
        int l_2582 = (-1L);
        int *l_2583 = (void*)0;
        int *l_2585 = (void*)0;
        int *l_2586 = &l_2507;
        int *l_2587 = &g_193;
        int *l_2588 = &l_2576;
        int *l_2589 = &l_2522;
        int *l_2590 = (void*)0;
        int *l_2591 = (void*)0;
        int *l_2592 = (void*)0;
        int *l_2594 = &g_1943;
        int *l_2595 = &l_2576;
        int *l_2596 = (void*)0;
        int *l_2597 = &l_2526;
        int *l_2598 = (void*)0;
        int *l_2599 = (void*)0;
        int l_2600 = 0L;
        int *l_2601 = &g_41;
        int *l_2602 = &g_395;
        int *l_2604 = &l_2603;
        int *l_2605 = &l_2516;
        int *l_2606 = &l_2582;
        int *l_2607 = (void*)0;
        int *l_2608 = &l_2516;
        int *l_2609 = &l_2487;
        int *l_2610 = (void*)0;
        int *l_2611 = (void*)0;
        int *l_2612 = &g_193;
        int *l_2613 = &l_2600;
        int l_2614 = 0x8E81878BL;
        int l_2615 = 0x999DC112L;
        int *l_2616 = &g_41;
        int *l_2617 = &g_1943;
        int *l_2618 = &l_2584;
        int *l_2619 = (void*)0;
        int *l_2620 = &l_2603;
        int *l_2622 = &l_2502;
        int *l_2623 = &l_2487;
        int l_2625 = (-1L);
        int *l_2626 = &g_2448;
        int *l_2627 = (void*)0;
        int *l_2628 = (void*)0;
        int *l_2629 = &l_2502;
        int *l_2630 = (void*)0;
        int *l_2631 = &l_2502;
        int *l_2632 = (void*)0;
        int *l_2633 = &l_2584;
        int *l_2635 = &l_2614;
        int *l_2636 = &l_2624;
        int *l_2637 = &l_2621;
        int *l_2638 = &l_2621;
        int *l_2639 = &g_395;
        int *l_2640 = &g_1616;
        int *l_2641 = &l_2634;
        int *l_2642 = &l_2502;
        int *l_2643 = &l_2625;
        int *l_2644 = &l_2516;
        int *l_2645 = (void*)0;
        int *l_2646 = &l_2507;
        int *l_2647 = &l_2570;
        int *l_2648 = &l_2582;
        int *l_2649 = (void*)0;
        int *l_2650 = &l_2576;
        int *l_2652 = &l_2526;
        int *l_2653 = &g_193;
        int *l_2654 = &g_2448;
        int *l_2655 = &g_619;
        int *l_2656 = &l_2576;
        int *l_2657 = &l_2501;
        int *l_2658 = &l_2614;
        int *l_2659 = &l_2584;
        int *l_2660 = &g_500;
        int *l_2661 = (void*)0;
        int *l_2662 = &l_2487;
        int *l_2663 = &g_1943;
        int *l_2664 = (void*)0;
        int *l_2665 = &g_1616;
        int *l_2666 = (void*)0;
        int *l_2667 = &g_500;
        int *l_2668 = (void*)0;
        int *l_2669 = &l_2567;
        int *l_2670 = &l_2479;
        int *l_2671 = &l_2516;
        int *l_2672 = &l_2553;
        int *l_2673 = &l_2567;
        int *l_2674 = &l_2625;
        int l_2675 = 1L;
        int *l_2676 = &l_2675;
        int l_2677 = 0x796C6068L;
        int l_2678 = 5L;
        int *l_2679 = &l_2553;
        int l_2680 = 0xCD902999L;
        int *l_2681 = &l_2507;
        int *l_2682 = &l_2476;
        int *l_2683 = &l_2502;
        int *l_2684 = &l_2600;
        int *l_2685 = (void*)0;
        int *l_2686 = (void*)0;
        int *l_2687 = &l_2501;
        int *l_2688 = &l_2584;
        int *l_2689 = &g_500;
        int *l_2690 = &l_2677;
        int *l_2691 = &l_2516;
        int *l_2692 = &l_2508;
        int *l_2693 = &g_619;
        int *l_2694 = &g_1616;
        int *l_2695 = &l_2625;
        int l_2696 = 0x2A5E3D6DL;
        unsigned long long *l_2704 = &g_2697;
        unsigned short ****l_2706 = &l_2705;
        int ****l_2707 = &g_668;
        ++g_2697;
        (*l_2554) ^= (*l_2544);
        (*l_2646) &= (&g_668 == (void*)0);
    }
    else
    {
        long long l_2722 = 0x252CBC1B3439374DLL;
        int *l_2723 = &l_2522;
        char *l_2724 = &l_2470;
        l_2476 |= ((safe_add_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((0xA2L && ((safe_rshift_func_int8_t_s_u(func_169(&g_110, ((safe_sub_func_int8_t_s_s(((*g_1716) ^ (**g_1715)), (safe_lshift_func_uint8_t_u_u(250UL, 7)))) < ((*l_2724) = ((*l_2723) = ((func_33((l_2722 || 4294967295UL), l_2722, l_2723, g_24) >= 2L) || p_152)))), (*l_2477), l_2723), 7)) && (*l_2723))), (-1L))), l_2722)) && p_151);
    }


    ;
    ++l_2811;
    (*g_2202) = (void*)0;

    ;
    return (*g_371);


}







static long long func_160(int * p_161, unsigned long long p_162, const char p_163)
{
    unsigned short l_181 = 65535UL;
    int *l_671 = &g_41;
    int l_2220 = 0x96A3C469L;
    int l_2344 = 0L;
    int l_2398 = 0x76527D8EL;
    int l_2425 = 0x7360AA6BL;
    int l_2440 = 4L;
    int l_2445 = 0x28257E19L;
    int l_2446 = 0L;
    long long *l_2464 = &g_110;
    unsigned char l_2465 = 0x2AL;
    for (g_92 = 21; (g_92 >= (-1)); --g_92)
    {
        short l_672 = 0x5200L;
        int l_2212 = 0x69F43F4CL;
        int l_2244 = 0x1ACE500FL;
        int l_2245 = 0xC5249E66L;
        int l_2269 = 0xC76F449EL;
        int l_2286 = 0xFC162D7CL;
        int l_2289 = 0xF9E7C652L;
        int l_2342 = 0L;
        int l_2414 = 1L;
        int l_2415 = 7L;
        int l_2447 = 6L;
        int l_2449 = 1L;
        int l_2454 = 0xE41D4B9BL;
        long long *l_2463 = &g_933;
        for (g_69 = 0; (g_69 > 22); ++g_69)
        {
            char **l_665 = &g_663;
            char ***l_664 = &l_665;
            short *l_666 = (void*)0;
            short *l_667 = &g_575;
            int ****l_670 = &g_668;
            int l_2228 = (-1L);
            int l_2380 = 0x456E19BEL;
            int l_2382 = 0x442D839CL;
            int l_2455 = (-1L);
            int *l_2460 = (void*)0;
            long long *l_2461 = &g_653;
        }
    }
    return g_1543;
}







static int func_169(long long * p_170, unsigned p_171, int p_172, int * p_173)
{
    const char l_673 = 0xAFL;
    int l_689 = 6L;
    int *l_690 = (void*)0;
    unsigned short *l_806 = &g_431;
    unsigned long long l_867 = 18446744073709551609UL;
    int l_908 = (-7L);
    char l_947 = 0x31L;
    char l_1317 = (-5L);
    int l_1345 = 1L;
    int l_1348 = (-7L);
    int l_1386 = 0x03011F35L;
    unsigned char l_1566 = 0x9AL;
    long long *l_1571 = &g_92;
    unsigned char l_1609 = 255UL;
    char **l_1622 = &g_663;
    long long l_1643 = 0x803AFBF9BBC24C3BLL;
    unsigned short l_1846 = 0x95C8L;
    int ** const *l_1874 = &g_371;
    int l_2115 = 0L;
    int *l_2138 = (void*)0;
    int *l_2139 = &g_1943;
    int *l_2140 = &l_1386;
    int *l_2141 = (void*)0;
    int *l_2142 = &l_1386;
    int *l_2143 = &l_1345;
    int *l_2144 = &g_500;
    int *l_2145 = &l_689;
    int *l_2146 = &l_1348;
    int *l_2147 = &g_193;
    int *l_2148 = (void*)0;
    int *l_2149 = &g_395;
    int *l_2150 = &l_908;
    int *l_2151 = &l_1345;
    long long l_2152 = 4L;
    int *l_2153 = &g_1616;
    int *l_2154 = &l_1345;
    int *l_2155 = &g_193;
    int *l_2156 = &g_619;
    int *l_2157 = &g_395;
    int *l_2158 = &g_619;
    int *l_2159 = &g_619;
    int *l_2160 = (void*)0;
    int *l_2161 = &l_908;
    int *l_2162 = (void*)0;
    int *l_2163 = &l_1345;
    int *l_2164 = &l_908;
    int *l_2165 = (void*)0;
    int *l_2166 = &g_1616;
    int *l_2167 = &l_908;
    int *l_2168 = &l_689;
    int *l_2169 = &g_500;
    int *l_2170 = &l_908;
    int *l_2171 = (void*)0;
    int *l_2172 = (void*)0;
    int *l_2173 = &g_1943;
    int *l_2174 = &l_1348;
    int *l_2175 = &g_395;
    int *l_2176 = (void*)0;
    int *l_2177 = (void*)0;
    int *l_2178 = &g_619;
    int *l_2179 = &l_1348;
    int l_2180 = 1L;
    int *l_2181 = &l_1348;
    int l_2182 = 0x0DE6750CL;
    int l_2183 = 4L;
    int *l_2184 = &g_1616;
    int *l_2185 = &l_2180;
    int *l_2186 = &g_619;
    int *l_2187 = &g_1616;
    int *l_2188 = &g_500;
    int *l_2189 = (void*)0;
    int *l_2190 = (void*)0;
    int *l_2191 = &g_619;
    int l_2192 = 0xE8E4051AL;
    int *l_2193 = &l_908;
    int *l_2194 = &g_193;
    int *l_2195 = &l_2180;
    int *l_2196 = &g_500;
    int l_2197 = 0x2F55FBBCL;
    int *l_2198 = &g_1616;
    unsigned l_2199 = 1UL;
    if (l_673)
    {
        unsigned l_687 = 0x148EE5A6L;
        int *l_691 = &l_689;
        int l_712 = 0x9328C614L;
        int l_720 = 0x478550B2L;
        int l_756 = 0L;
        short *l_810 = &g_458;
        char l_951 = 0x92L;
        unsigned long long l_974 = 0UL;
        char l_986 = 0x49L;
        int l_1168 = (-7L);
        int l_1173 = (-1L);
        char l_1287 = 7L;
        char ***l_1311 = &g_662;
        char ****l_1310 = &l_1311;
        int ****l_1315 = &g_668;
        unsigned short l_1428 = 3UL;
        long long *l_1445 = (void*)0;
    }
    else
    {
        int l_1602 = (-1L);
        unsigned char *l_1605 = &g_507;
        int l_1608 = 0L;
        short *l_1610 = &g_583;
        long long *l_1613 = (void*)0;
        char l_1671 = 0x3FL;
        unsigned l_1679 = 0x8966E779L;
        int *l_1699 = &l_1345;
        int *l_1725 = &g_1616;
        short **l_1739 = (void*)0;
        int l_1924 = 0x95C01A5EL;
        int l_2107 = 3L;
        if ((g_193 = (((*l_1610) |= (safe_lshift_func_int8_t_s_u(((safe_sub_func_int32_t_s_s((+(0x38B9L > ((((safe_lshift_func_int8_t_s_s(p_171, ((g_866 = func_33(((*p_173) = (safe_div_func_uint64_t_u_u(l_1602, ((0x15F5L >= l_1602) ^ (((*p_170) = ((safe_mod_func_uint16_t_u_u((((void*)0 != l_806) < (l_1608 ^= ((*l_1605)--))), 0xAD81L)) ^ g_69)) && g_572))))), p_171, p_173, p_172)) == 2UL))) < l_1609) == p_172) >= l_1602))), g_458)) ^ p_171), 0))) || p_171)))
        {
            int l_1611 = 0xC4882126L;
            long long *l_1612 = &g_653;
            long long l_1642 = 0x4C4ACC5E859C03EFLL;
            short l_1665 = 0xBE3BL;
            char ***l_1744 = &g_662;
            int l_1789 = (-1L);
            int l_1918 = (-1L);
            int l_1926 = 0x17873A26L;
            int l_1942 = (-4L);
lbl_1662:
            l_1608 |= l_1611;
            if (l_1602)
                goto lbl_1617;
lbl_1617:
            (*p_173) = func_33((*p_173), ((g_228 ^ (g_431 ^ ((p_170 = l_1612) == l_1613))) >= (p_171 <= p_171)), p_173, func_33(((~((*l_1612) = (safe_lshift_func_uint8_t_u_s(0xC2L, 0)))) || g_92), g_1616, p_173, l_1608));

            ;
            if ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((*p_170) && (l_1622 == &g_663)), g_619)), 11)))
            {
                int *l_1640 = &g_395;
                int l_1641 = 0x05DE709DL;
                int *l_1644 = (void*)0;
                int *l_1645 = &g_193;
                unsigned long long *l_1670 = &g_1575;
                int **l_1672 = &l_1645;
                const unsigned short *l_1677 = &g_1678;
                const unsigned short **l_1676 = &l_1677;
                (*l_1645) ^= ((safe_mul_func_int8_t_s_s(((((safe_div_func_int32_t_s_s((((((safe_mod_func_int32_t_s_s(((*l_1640) = (l_1642 ^= (safe_rshift_func_uint16_t_u_u((*g_586), (0x53EF25ADD4150AE4LL > (l_1602 & (p_171 > (func_33(((*l_1640) = (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(func_33(((safe_add_func_int16_t_s_s((func_33((*p_173), p_172, l_1640, func_33((*p_173), (*l_1640), p_173, g_1616)) && p_172), (-8L))) < p_172), l_1641, &l_689, g_575))), g_1410)), l_1611))), p_171, &g_500, l_1608) == (-1L))))))))), l_1643)) | g_461) | 0UL) <= 1L) && p_171), 1UL)) == l_1602) >= l_1641) > l_1602), 0x54L)) || 1L);
                for (g_458 = (-8); (g_458 <= (-12)); g_458 = safe_sub_func_uint8_t_u_u(g_458, 8))
                {
                    long long l_1650 = 0xD8C5764E5592034CLL;
                    if (((*l_1645) != ((safe_rshift_func_int16_t_s_u(((p_171 ^ l_1650) > ((*l_1605) &= l_1650)), 2)) | ((safe_mul_func_int16_t_s_s(((((safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_add_func_int8_t_s_s(p_172, (++g_783))) == func_33((*p_173), (*g_586), p_173, g_659)), 255UL)), (*g_586))) ^ l_1602) < 1UL) && l_1608), 7L)) & p_172))))
                    {
                        int **l_1661 = &l_1645;
                        (*l_1661) = &l_1345;

                        ;
                        if (l_1642)
                            goto lbl_1662;
                    }
                    else
                    {
                        (*l_1640) |= ((*l_1645) = (-1L));
                        if (g_583)
                            goto lbl_1673;
                        if ((*p_173))
                            continue;
                    }
                    (*l_1645) = 0x9B0D0FBCL;
                }

                ;
lbl_1673:
                (*l_1672) = &l_1611;

                ;
                (*l_1645) = ((*l_1640) ^= (safe_add_func_uint32_t_u_u(g_2, (0x6B1C9273L > func_33(((*l_1645) &= ((7UL >= ((*g_586) || (((*l_1676) = (void*)0) != (void*)0))) == ((*l_1670) = func_33((*p_173), (*g_586), (*l_1672), g_783)))), l_1679, p_173, p_171)))));

                ;
            }
            else
            {
                unsigned short l_1692 = 7UL;
                int l_1714 = 0x9B83F477L;
                char *l_1740 = &g_242;
                char ***l_1743 = &g_662;
                unsigned short **l_1746 = &l_806;
                int * const l_1755 = &g_5;
                int l_1798 = 0xC56EC7CDL;
                int l_1828 = 0x3E8DC1A5L;
                for (p_171 = 0; (p_171 >= 27); p_171 = safe_add_func_int64_t_s_s(p_171, 2))
                {
                    unsigned l_1695 = 4294967295UL;
                    int l_1698 = 0L;
                    for (g_39 = 0; (g_39 != 37); g_39++)
                    {
                        int *l_1684 = &g_1616;
                        int *l_1685 = &l_1386;
                        int *l_1686 = &l_1386;
                        int l_1687 = 0L;
                        int *l_1688 = &l_1348;
                        int *l_1689 = (void*)0;
                        int *l_1690 = &g_619;
                        int *l_1691 = &l_1608;
                        l_1692++;
                        if (l_1602)
                            break;
                        l_1695--;
                    }
                    if ((l_1698 == (func_33(l_1608, p_172, l_1699, p_172) >= ((void*)0 == &g_458))))
                    {
                        char *l_1712 = &g_242;
                        short *l_1713 = &g_461;
                        unsigned char ***l_1717 = &g_1715;
                        int l_1722 = (-1L);
                        unsigned l_1726 = 1UL;
                        l_1714 = (safe_mod_func_uint64_t_u_u(g_583, ((safe_lshift_func_uint8_t_u_u(1UL, ((*l_1605) = (safe_add_func_int16_t_s_s(((*l_1713) &= (safe_mod_func_int8_t_s_s(((g_228 & ((*l_1612) = g_5)) != ((safe_mod_func_int8_t_s_s(((*l_1712) = (safe_add_func_int64_t_s_s(0xDCBC8A64B36F41DELL, (l_1665 == (!1L))))), (*l_1699))) != (*l_1699))), p_171))), g_619))))) || p_172)));
                        (*l_1717) = g_1715;
                        l_1714 ^= (safe_rshift_func_int16_t_s_u(p_172, 6));
                        l_1726 = ((0x03L >= (safe_lshift_func_int16_t_s_s(((g_242 = l_1722) || 0x9CL), 14))) && (g_653 == (((*l_1725) |= (l_1692 || (((*l_1610) = (func_33(((*p_173) |= ((*l_1699) = (*l_1699))), (safe_rshift_func_uint8_t_u_u(((*g_586) || (~p_171)), 1)), l_1725, p_172) || p_171)) ^ 0xC67CL))) && l_1714)));
                    }
                    else
                    {
                        unsigned long long *l_1729 = &l_867;
                        char *l_1732 = &l_1317;
                        int **l_1733 = (void*)0;
                        int **l_1734 = &g_302;
                        (*l_1699) ^= (safe_div_func_int16_t_s_s((((*l_1729) = g_5) & (g_237 || (!(safe_add_func_int32_t_s_s((0x45L ^ ((*l_1732) = p_171)), (p_172 || l_1665)))))), (*g_586)));
                        (*l_1699) &= ((*p_173) = func_33(l_1642, ((*l_806) = 0xA1C1L), p_173, ((((*l_1734) = &l_1714) != &l_1611) <= (g_39 > (&g_1715 != &g_1715)))));

                        ;
                    }
                }


                l_1611 &= ((safe_add_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(g_1616, (l_1739 == &l_1610))) >= (!p_171)), (*l_1725))) ^ (((*l_1622) = l_1740) == l_1740));

                ;
                if (((*p_173) = (*p_173)))
                {
                    char ****l_1745 = &l_1744;
                    unsigned short ***l_1747 = &l_1746;
                    unsigned short **l_1749 = &g_586;
                    unsigned short ***l_1748 = &l_1749;
                    int l_1754 = 3L;
                    int l_1844 = 0x6E8764BAL;
                    int l_1845 = 0xCF44A599L;
                    (*l_1725) &= (((((+((1UL > l_1611) < (*g_663))) <= ((safe_sub_func_int16_t_s_s((l_1743 != ((*l_1745) = l_1744)), (((*l_1748) = ((*l_1747) = l_1746)) != &g_586))) != (((0xF03CL > p_171) > 0x9355L) <= p_172))) | p_171) & p_171) && 0x289B1B9D93DD2B1FLL);

                    ;
                    for (g_1063 = 0; (g_1063 < 59); g_1063++)
                    {
                        l_1714 &= l_1611;
                    }
                    if ((safe_add_func_int32_t_s_s((*l_1725), p_172)))
                    {
                        int **l_1756 = &l_1725;
                        int *l_1757 = (void*)0;
                        int *l_1758 = &l_1754;
                        int *l_1759 = &l_689;
                        int *l_1760 = (void*)0;
                        int *l_1761 = (void*)0;
                        int *l_1762 = (void*)0;
                        int *l_1763 = &g_619;
                        int *l_1764 = (void*)0;
                        int *l_1765 = (void*)0;
                        int *l_1766 = &l_689;
                        int *l_1767 = &l_1345;
                        int *l_1768 = &g_41;
                        int *l_1769 = &l_1386;
                        int *l_1770 = &l_1754;
                        int *l_1771 = (void*)0;
                        int *l_1772 = &l_1611;
                        int *l_1773 = &g_619;
                        int *l_1774 = &g_619;
                        int *l_1775 = (void*)0;
                        int *l_1776 = &l_689;
                        int *l_1777 = (void*)0;
                        int *l_1778 = (void*)0;
                        int *l_1779 = &l_1608;
                        int *l_1780 = (void*)0;
                        int *l_1781 = &l_1754;
                        int *l_1782 = (void*)0;
                        int *l_1783 = &l_1754;
                        int *l_1784 = &l_689;
                        int *l_1785 = &g_193;
                        int *l_1786 = &l_1754;
                        int *l_1787 = (void*)0;
                        int *l_1788 = &g_619;
                        int *l_1790 = &l_1348;
                        int *l_1791 = &l_1386;
                        int *l_1792 = &l_1789;
                        int *l_1793 = &l_1754;
                        int *l_1794 = &l_1754;
                        int *l_1795 = (void*)0;
                        int *l_1796 = &l_1789;
                        int *l_1797 = (void*)0;
                        int *l_1799 = &l_908;
                        int *l_1800 = &g_500;
                        int *l_1801 = &g_1616;
                        int *l_1802 = &g_619;
                        int *l_1803 = &g_500;
                        int *l_1804 = &l_908;
                        int *l_1805 = (void*)0;
                        int *l_1806 = &g_193;
                        int *l_1807 = &g_1616;
                        int *l_1808 = (void*)0;
                        int *l_1809 = &l_1611;
                        int *l_1810 = &l_1798;
                        int *l_1811 = &l_1611;
                        int *l_1812 = &g_193;
                        int *l_1813 = (void*)0;
                        int l_1814 = (-1L);
                        int *l_1815 = &l_689;
                        int *l_1816 = &g_619;
                        int *l_1817 = &l_1345;
                        int *l_1818 = &l_1386;
                        int *l_1819 = &g_619;
                        int *l_1820 = &l_689;
                        int *l_1821 = &l_1798;
                        int *l_1822 = &l_1345;
                        int *l_1823 = &l_1386;
                        int *l_1824 = &l_689;
                        int *l_1825 = &l_1611;
                        int *l_1826 = &l_1348;
                        int *l_1827 = &l_1714;
                        int *l_1829 = &l_908;
                        int *l_1830 = (void*)0;
                        int *l_1831 = &g_1616;
                        int *l_1832 = &l_1754;
                        int *l_1833 = &l_1608;
                        int *l_1834 = (void*)0;
                        int *l_1835 = &g_1616;
                        int *l_1836 = &l_1754;
                        int *l_1837 = (void*)0;
                        int *l_1838 = (void*)0;
                        int *l_1839 = &l_1611;
                        int *l_1840 = &l_1714;
                        if (g_92)
                            goto lbl_1617;

                        (*l_1756) = &l_1608;

                        ;
                        --g_1841;
                        ++l_1846;
                    }
                    else
                    {
                        char l_1853 = 0x9AL;
                        l_1853 &= ((((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s(((*l_1755) | ((*l_1725) = (*p_173))), (*l_1755))), (p_172 || (&g_662 == l_1743)))) < (*l_1755)) >= (*g_586)) < p_172);
                    }

                    ;
                    (*l_1725) = (safe_sub_func_uint64_t_u_u(0UL, p_171));
                }
                else
                {
                    unsigned long long *l_1857 = (void*)0;
                    unsigned long long **l_1856 = &l_1857;
                    unsigned char l_1860 = 0x5FL;
                    unsigned short *l_1861 = (void*)0;
                    int *l_1862 = &g_5;
                    int **l_1863 = &l_690;
                    (*l_1699) = ((*p_173) &= ((249UL & ((l_1860 ^= ((((*l_1856) = p_170) == p_170) & (safe_mod_func_uint16_t_u_u(((*l_806) = (&l_1642 != &g_110)), (+0L))))) ^ ((void*)0 == l_1861))) | g_854));

                    ;
                    (*l_1863) = l_1862;

                    ;
                }

                ;
                ;
                (*p_173) = (-1L);
            }

            ;
            ;
            if ((*p_173))
            {
                int ***l_1873 = &g_371;
                int *l_1898 = &g_41;
                int *l_1899 = &l_1348;
                int *l_1900 = &l_1608;
                int *l_1901 = (void*)0;
                int *l_1902 = &g_41;
                int *l_1903 = &g_193;
                int *l_1904 = (void*)0;
                int *l_1905 = &l_1789;
                int *l_1906 = &g_619;
                int *l_1907 = &l_1608;
                int l_1908 = (-7L);
                int *l_1909 = &g_41;
                int *l_1910 = (void*)0;
                int *l_1911 = &g_619;
                int *l_1912 = &g_193;
                int *l_1913 = &g_500;
                int *l_1914 = (void*)0;
                int l_1915 = 0x2F91EF91L;
                int *l_1916 = &l_1611;
                int *l_1917 = (void*)0;
                int *l_1919 = &l_1608;
                int *l_1920 = (void*)0;
                int *l_1921 = &l_1908;
                int *l_1922 = &l_1348;
                int *l_1923 = &l_1908;
                int *l_1925 = (void*)0;
                int *l_1927 = &l_1386;
                int *l_1928 = &l_908;
                int *l_1929 = &l_689;
                int *l_1930 = &l_1608;
                int *l_1931 = &l_1924;
                int *l_1932 = (void*)0;
                int *l_1933 = &l_1608;
                int *l_1934 = (void*)0;
                int *l_1935 = &l_1386;
                int *l_1936 = &g_619;
                int *l_1937 = &g_619;
                int *l_1938 = &g_193;
                int *l_1939 = &l_1926;
                int *l_1940 = &g_619;
                int *l_1941 = &g_619;
                int *l_1946 = &g_193;
                int *l_1947 = &g_395;
                int *l_1948 = (void*)0;
                int *l_1949 = &l_1908;
                int *l_1950 = &l_1608;
                l_1789 = 1L;
                for (l_1671 = 23; (l_1671 <= 12); l_1671--)
                {
                    unsigned short **l_1870 = &g_586;
                    int l_1879 = 0x67AF3842L;
                    unsigned *l_1880 = &g_135;
                    unsigned char l_1881 = 0x9FL;
                    char *l_1886 = (void*)0;
                    char *l_1887 = &l_1317;
                    (*p_173) ^= (safe_lshift_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((+((*l_1880) = (((void*)0 == l_1870) || (*g_586)))) || p_171) != (*l_1699)), l_1879)), 15));
                    (*p_173) = (safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((*l_1887) = p_171), p_171)), (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(1L, (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(((*l_1605) = (18446744073709551608UL | (*p_170))), 3)) >= (*p_173)), (safe_mod_func_int32_t_s_s(((*l_1725) >= 0x011A7CACF42B27C1LL), (-3L))))))), 255UL))));
                }
                (*p_173) = 0xDD576ECAL;
                g_1951--;
            }
            else
            {
                int **l_1954 = &g_302;
                char *l_1963 = &g_1945;
                int l_1964 = (-1L);
                int *l_1965 = &g_500;
                int *l_1966 = &g_395;
                int *l_1967 = &l_1611;
                int *l_1968 = (void*)0;
                int *l_1969 = &l_1926;
                int *l_1970 = &l_1942;
                int *l_1971 = &g_1616;
                int *l_1972 = (void*)0;
                int *l_1973 = &g_41;
                int *l_1974 = &l_1964;
                int *l_1975 = &g_395;
                int l_1976 = (-1L);
                int *l_1977 = &l_689;
                int *l_1978 = &l_1924;
                int *l_1979 = &l_1926;
                int *l_1980 = &l_908;
                int *l_1981 = &g_395;
                int *l_1982 = &l_1386;
                int *l_1983 = &l_1345;
                int *l_1984 = (void*)0;
                int *l_1985 = &l_1942;
                int *l_1986 = &g_395;
                int *l_1987 = &l_689;
                int *l_1988 = &g_1616;
                int *l_1989 = &l_1345;
                int *l_1990 = &l_1611;
                int *l_1991 = (void*)0;
                int *l_1992 = (void*)0;
                int *l_1993 = &l_1386;
                int *l_1994 = &g_193;
                int *l_1995 = &g_619;
                int *l_1996 = &l_1964;
                int *l_1997 = &l_1348;
                int *l_1998 = (void*)0;
                int *l_1999 = &g_193;
                int *l_2000 = &l_1608;
                int *l_2001 = &l_1386;
                int *l_2002 = &l_1348;
                int *l_2003 = (void*)0;
                int *l_2004 = &g_41;
                int *l_2005 = &l_1611;
                int *l_2006 = &g_1943;
                int *l_2007 = &l_1348;
                int *l_2008 = &l_908;
                int *l_2009 = (void*)0;
                int l_2010 = (-1L);
                int *l_2011 = &l_1348;
                int *l_2012 = &l_1964;
                int *l_2013 = &l_2010;
                int *l_2014 = &l_1926;
                int *l_2015 = &g_41;
                int *l_2016 = &g_619;
                int *l_2017 = &g_1943;
                int l_2018 = 0x248661A2L;
                int *l_2019 = &l_1386;
                int *l_2020 = &l_1924;
                int *l_2021 = &g_619;
                int *l_2022 = &l_1918;
                int *l_2023 = &l_1608;
                int *l_2024 = &g_1616;
                int *l_2025 = &g_1943;
                int *l_2026 = (void*)0;
                int *l_2027 = &l_1926;
                int *l_2028 = &l_1976;
                int l_2029 = 0xE6B277D3L;
                int *l_2030 = &g_619;
                int *l_2031 = &l_1976;
                int *l_2032 = &l_908;
                int *l_2033 = &g_619;
                int *l_2034 = &l_1918;
                int *l_2035 = &g_41;
                int *l_2036 = (void*)0;
                (*l_1954) = &l_1924;

                ;
                (**l_1954) = ((+p_171) >= 0L);
                --g_2037;
            }


        }
        else
        {
            int *l_2040 = (void*)0;
            int *l_2041 = &g_619;
            int *l_2042 = &l_1924;
            int *l_2043 = &g_395;
            int *l_2044 = &l_689;
            int l_2045 = 0x89EABBBAL;
            int *l_2046 = &g_1943;
            int *l_2047 = &l_1348;
            int *l_2048 = &l_1608;
            int *l_2049 = &l_689;
            int *l_2050 = &l_1345;
            int *l_2051 = &l_908;
            int *l_2052 = (void*)0;
            int *l_2053 = (void*)0;
            int *l_2054 = &l_1608;
            int *l_2055 = &l_689;
            int *l_2056 = &l_908;
            int *l_2057 = &l_1345;
            int *l_2058 = (void*)0;
            int *l_2059 = &g_41;
            int *l_2060 = &g_41;
            int *l_2061 = (void*)0;
            int *l_2062 = &l_1608;
            int *l_2063 = (void*)0;
            int *l_2064 = (void*)0;
            int *l_2065 = (void*)0;
            int *l_2066 = &l_1348;
            int *l_2067 = &l_689;
            int *l_2068 = (void*)0;
            int *l_2069 = &l_689;
            int *l_2070 = &l_908;
            int *l_2071 = &l_1386;
            int *l_2072 = &g_1616;
            int *l_2073 = &g_619;
            int *l_2074 = (void*)0;
            int *l_2075 = &g_1616;
            int *l_2076 = &l_1345;
            int *l_2077 = &l_1924;
            int *l_2078 = &g_619;
            int *l_2079 = &l_1608;
            int *l_2080 = (void*)0;
            int *l_2081 = &l_1924;
            int l_2082 = 0xE579A6D4L;
            int *l_2083 = &l_2045;
            int *l_2084 = &l_1924;
            int *l_2085 = (void*)0;
            int *l_2086 = &g_193;
            int *l_2087 = (void*)0;
            int *l_2088 = &g_1616;
            int *l_2089 = (void*)0;
            int *l_2090 = (void*)0;
            int *l_2091 = &g_500;
            int *l_2092 = &g_395;
            int *l_2093 = &l_2045;
            int *l_2094 = (void*)0;
            int *l_2095 = &l_689;
            int *l_2096 = &l_1345;
            int l_2097 = 0L;
            int *l_2098 = &l_2045;
            int *l_2099 = (void*)0;
            int *l_2100 = &g_193;
            int *l_2101 = (void*)0;
            int *l_2102 = &l_2082;
            int *l_2103 = &g_500;
            int *l_2104 = &g_1616;
            int *l_2105 = &l_1386;
            int *l_2106 = (void*)0;
            int *l_2108 = &l_2045;
            int l_2109 = (-2L);
            int *l_2110 = &l_1348;
            int *l_2111 = &g_1616;
            int *l_2112 = &l_689;
            int *l_2113 = &l_2097;
            int *l_2114 = &g_41;
            int *l_2116 = &l_908;
            int *l_2117 = &l_2045;
            int *l_2118 = &l_1348;
            int *l_2119 = &l_2082;
            int *l_2120 = &l_2045;
            int *l_2121 = (void*)0;
            int *l_2122 = &l_1348;
            int *l_2123 = &g_395;
            int *l_2124 = (void*)0;
            int *l_2125 = &g_395;
            int *l_2126 = &l_2045;
            int *l_2127 = (void*)0;
            int *l_2128 = (void*)0;
            int *l_2129 = &l_2109;
            int *l_2130 = (void*)0;
            int *l_2131 = &g_500;
            int *l_2132 = &l_2082;
            int *l_2133 = &g_395;
            int *l_2134 = (void*)0;
            g_2135--;
        }


        ;
        ;
        ;
        return (*p_173);


    }
    l_690 = &l_908;

    ;
    ++l_2199;
    (*l_2195) = ((void*)0 == g_2202);
    return (*p_173);
}







static unsigned short func_178(unsigned long long p_179, short p_180)
{
    int l_183 = 0L;
    int *l_191 = &l_183;
    int **l_190 = &l_191;
    int *l_192 = &g_193;
    long long *l_194 = &g_24;
    int *l_199 = &g_5;
    int *l_623 = &g_619;
    int l_631 = (-6L);
    int l_645 = 0L;
    (*l_623) |= ((!(safe_unary_minus_func_uint32_t_u(func_33(l_183, l_183, func_184((l_192 = ((*l_190) = (void*)0)), l_194, (0x627841B2L ^ func_33(((safe_add_func_uint8_t_u_u(g_39, (safe_div_func_int16_t_s_s((((p_180 ^ (1L > g_41)) || 252UL) && l_183), g_159)))) && g_24), p_180, l_199, p_179)), g_92, &g_193), g_92)))) < 18446744073709551615UL);

    ;
    ;
    ;

    (*l_190) = &g_193;

    ;
    for (g_572 = 13; (g_572 >= 34); ++g_572)
    {
        int *l_626 = (void*)0;
        int *l_627 = &g_500;
        int *l_628 = (void*)0;
        int *l_629 = (void*)0;
        int *l_630 = &g_619;
        int *l_632 = &g_193;
        int *l_633 = &g_619;
        int *l_634 = &g_500;
        int *l_635 = &g_500;
        int *l_636 = &g_193;
        int *l_637 = &l_631;
        int l_638 = 0xD0B9917CL;
        int *l_639 = (void*)0;
        int *l_640 = &g_619;
        int *l_641 = &g_395;
        int *l_642 = &l_638;
        int *l_643 = (void*)0;
        int *l_644 = &g_193;
        int *l_646 = (void*)0;
        int *l_647 = &g_500;
        int *l_648 = &g_395;
        int *l_649 = (void*)0;
        int *l_650 = &g_193;
        int *l_651 = &l_183;
        int *l_652 = &g_193;
        int *l_654 = (void*)0;
        int *l_655 = &g_500;
        int *l_656 = &l_183;
        int *l_657 = (void*)0;
        int *l_658 = &l_631;
        --g_659;
        if ((*l_633))
            continue;
        (*l_191) = p_179;
        l_642 = (*l_190);

        ;
    }
    return (*g_586);
}







static int * func_184(int * p_185, long long * p_186, unsigned long long p_187, unsigned char p_188, int * const p_189)
{
    int *l_207 = &g_193;
    int **l_206 = &l_207;
    int *l_209 = &g_41;
    int **l_208 = &l_209;
    int l_210 = (-3L);
    int l_211 = 0L;
    unsigned short l_212 = 0x15EAL;
    int *l_213 = &l_211;
    const short *l_241 = (void*)0;
    int l_260 = 0x9DE4BE9BL;
    char *l_306 = &g_242;
    char **l_305 = &l_306;
    int l_347 = 7L;
    int **l_362 = &l_209;
    const int l_442 = 0x0F83A2D1L;
    short l_510 = 0xA5FAL;
    short l_514 = (-1L);
    short *l_597 = &g_69;
    if (((safe_lshift_func_uint8_t_u_s(g_92, (safe_rshift_func_uint16_t_u_s(65535UL, func_33(((*p_189) |= (((4294967295UL < 1UL) != 65535UL) < (safe_lshift_func_uint16_t_u_u((((((*l_208) = ((*l_206) = p_185)) != p_185) > l_210) && g_92), l_211)))), l_212, l_213, (*l_213)))))) || 0x9EL))
    {
        int *l_222 = &g_5;
        short *l_227 = &g_228;
        const short *l_236 = &g_237;
        const short **l_235 = &l_236;
        const short *l_239 = (void*)0;
        const short **l_238 = &l_239;
        const short **l_240 = (void*)0;
        int *l_270 = &g_5;
        if (func_33((*p_189), (safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((((*l_206) = l_222) != p_189), (*l_222))), 0xA7AC8E61696E83D7LL)) || (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((*l_227) = (*l_207)) ^ (g_242 = (safe_div_func_int16_t_s_s((g_135 >= (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((l_241 = ((*l_238) = ((*l_235) = (void*)0))) != (void*)0), 11)), (*l_213)))), g_24)))), 7)) >= (*p_189)), g_24))) & 1L), (-1L))), g_41)), l_222, p_188))
        {
            int l_257 = 1L;
            unsigned short *l_258 = (void*)0;
            unsigned short *l_259 = (void*)0;
            char *l_271 = &g_242;
            char *l_272 = &g_273;
            l_257 = func_33((safe_sub_func_int32_t_s_s((*p_189), (*p_189))), (l_260 = ((safe_sub_func_int64_t_s_s((*p_186), (safe_add_func_int16_t_s_s((**l_206), (*l_213))))) ^ (((((func_33((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((*l_227) = (*l_222)), ((*p_189) | (safe_mod_func_uint16_t_u_u(p_187, g_92))))) & 0x2C81L), p_188)), 0UL)), p_187, (*l_206), g_135) != p_188) && 0x5459D1A19A74B103LL) >= 0xF2L) | l_257) < (*p_189)))), &l_257, g_41);
            if ((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((*l_222), (g_135 != ((*l_272) = ((*l_271) = (safe_unary_minus_func_int64_t_s(((*l_222) < (0x7CDC2653L > (func_33(((*l_213) ^= (((l_257 != func_33((safe_rshift_func_uint8_t_u_u(p_188, g_5)), (*l_222), p_185, p_188)) & g_228) ^ g_24)), l_257, l_270, g_135) || 0L)))))))))), p_188)))
            {
                (*p_189) ^= g_39;
            }
            else
            {
                for (g_110 = 0; (g_110 == 13); ++g_110)
                {
                    return p_185;


                }
            }
        }
        else
        {
            unsigned *l_278 = (void*)0;
            unsigned *l_279 = (void*)0;
            unsigned *l_280 = &g_135;
            char *l_283 = (void*)0;
            char *l_284 = &g_273;
            char **l_295 = &l_283;
            int l_300 = (-8L);
            char *l_301 = &g_242;
            (*l_213) ^= (safe_div_func_uint8_t_u_u(g_41, func_33((!(((*l_280) = 0x641F7FF8L) > (safe_lshift_func_int8_t_s_u(((*l_284) = p_188), 4)))), ((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(0xE2FCL, (safe_mul_func_int8_t_s_s(((*l_301) &= ((((*l_295) = &g_242) != &g_242) || ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(p_187, func_33(l_300, g_39, p_185, g_193))), p_187)) > g_92))), g_193)))), g_41)), g_159)) == p_187), l_270, g_2)));

            ;
            (*l_206) = (g_302 = p_185);

            ;
            ;
        }

        ;
        ;
        ;
    }
    else
    {
        char ***l_307 = &l_305;
        for (g_228 = 15; (g_228 != 8); g_228 = safe_sub_func_int16_t_s_s(g_228, 3))
        {
            (*g_302) = (*g_302);
        }
        (*l_307) = l_305;
    }

    ;
    ;
    ;
    (*p_189) = (*p_189);
    if (g_193)
    {
        int l_308 = 0x1CC7438CL;
        (*p_189) = l_308;
        (*p_189) = (safe_lshift_func_uint16_t_u_u(g_193, g_92));
    }
    else
    {
        char l_365 = 0xFEL;
        int l_430 = 0x889E0017L;
        int *l_435 = &l_347;
        int l_464 = 0xA4F3221EL;
        int l_527 = 0xC80A9E85L;
        int l_545 = 0x676D5B9CL;
        unsigned short *l_613 = &g_431;
        for (l_210 = 0; (l_210 <= 7); l_210 = safe_add_func_uint64_t_u_u(l_210, 4))
        {
            char l_323 = 0xB2L;
            int *l_349 = &g_2;
            unsigned long long l_381 = 0x5DB99627D35BE622LL;
            int l_421 = 0x0E47E4D3L;
            for (g_110 = 0; (g_110 < 22); g_110 = safe_add_func_uint8_t_u_u(g_110, 8))
            {
                unsigned *l_322 = &g_39;
                unsigned **l_321 = &l_322;
                int l_340 = 0x5A3C54BDL;
                long long *l_348 = (void*)0;
                long long l_378 = 0xDFB154BAD24C2FD1LL;
                int l_379 = (-1L);
                int l_380 = 3L;
                int *l_434 = &g_193;
                if ((safe_mul_func_uint16_t_u_u((~(safe_lshift_func_int8_t_s_s(0x62L, 3))), (p_187 < (safe_lshift_func_uint16_t_u_u((((*l_321) = (void*)0) != &g_135), 15))))))
                {
                    if (l_323)
                    {
                        const long long *l_333 = &g_334;
                        const long long **l_332 = &l_333;
                        const long long **l_335 = (void*)0;
                        const long long *l_337 = &g_334;
                        const long long **l_336 = &l_337;
                        short *l_343 = &g_228;
                        int l_346 = 0x87BA435BL;
                        (*l_213) = (-1L);
                        (*p_189) = (((safe_lshift_func_uint16_t_u_u(0xC7B4L, ((((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((((*l_332) = (void*)0) == ((*l_336) = &g_24)), ((*l_343) |= (safe_mod_func_uint16_t_u_u(l_340, (safe_add_func_int16_t_s_s(g_242, l_340))))))), p_188)), (safe_mod_func_uint64_t_u_u((0x7D465171171D35FCLL < p_188), p_188)))) != l_346) | 0x95L) ^ l_346))) & (*p_189)) > l_347);

                        ;
                        ;
                    }
                    else
                    {
                        l_340 ^= (l_348 != &g_110);
                    }
                    (*l_206) = l_349;

                    ;
                }
                else
                {
                    int *l_350 = &g_41;
                    unsigned *l_353 = (void*)0;
                    unsigned *l_354 = &g_135;
                    int ***l_370 = &l_362;
                    p_185 = ((*l_206) = l_350);

                    ;
                    ;
                    (*p_189) = (safe_lshift_func_int16_t_s_u((((*l_354) = 1UL) || (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(g_69, (((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint16_t_u_u(p_187, p_187)))) ^ ((void*)0 != l_362)) | (safe_mod_func_uint16_t_u_u(l_365, (g_69 && 0x6E32L)))))) && g_135), l_340))), p_187));
                    (*p_189) = (p_188 > (l_380 ^= ((safe_sub_func_int16_t_s_s(func_33((((*p_186) ^ 0x99461F976974A869LL) & ((l_340 ^= g_242) > (~(safe_add_func_int8_t_s_s(((g_371 = ((*l_370) = &l_209)) != &g_302), (safe_div_func_int8_t_s_s((func_33((l_379 = (safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((func_33(((*p_189) |= func_33(l_378, (((void*)0 == l_349) ^ 0x03912959L), (*l_206), l_365)), g_24, p_185, g_334) != g_334), p_188)), 0x35DAL))), g_110, p_185, g_69) < 1UL), p_188))))))), g_237, p_185, p_188), (*l_350))) && (*p_186))));

                    ;
                    l_380 = (*p_185);
                }

                ;
                ;
                if ((l_378 >= 18446744073709551606UL))
                {
                    short l_389 = (-5L);
                    int l_413 = 0x93AF8227L;
                    int *l_422 = &l_421;
                    int *l_423 = &g_193;
                    int *l_424 = &l_421;
                    int *l_425 = (void*)0;
                    int *l_426 = &l_340;
                    int l_427 = 0L;
                    int *l_428 = (void*)0;
                    int *l_429 = &l_340;
                    (*g_371) = (*l_208);
                    l_381 = (g_5 | p_187);
                    for (l_260 = 0; (l_260 == (-1)); l_260 = safe_sub_func_int16_t_s_s(l_260, 1))
                    {
                        int *l_384 = &l_379;
                        int *l_385 = &l_340;
                        int *l_386 = &l_211;
                        int *l_387 = &l_379;
                        int *l_388 = &l_347;
                        int *l_390 = &l_340;
                        int *l_391 = &l_211;
                        int *l_392 = &l_379;
                        int *l_393 = &g_193;
                        int *l_394 = &l_347;
                        int *l_396 = &l_379;
                        int *l_397 = (void*)0;
                        int *l_398 = &g_395;
                        int *l_399 = (void*)0;
                        int *l_400 = &l_340;
                        int *l_401 = &g_193;
                        int *l_402 = &l_211;
                        int *l_403 = &l_211;
                        int *l_404 = &l_211;
                        int *l_405 = &g_193;
                        int *l_406 = (void*)0;
                        int *l_407 = (void*)0;
                        int *l_408 = &g_395;
                        int *l_409 = &l_380;
                        int *l_410 = &l_347;
                        int *l_411 = (void*)0;
                        int *l_412 = (void*)0;
                        int *l_414 = &l_413;
                        int *l_415 = &l_380;
                        int *l_416 = &l_413;
                        int *l_417 = &g_193;
                        (*l_208) = (*g_371);
                        --g_418;
                        (*p_189) = ((void*)0 == &g_92);
                    }
                    g_431++;
                }
                else
                {
                    (*l_362) = l_434;

                    ;
                }
            }
            (*p_189) = (l_435 == (void*)0);
        }

        ;
        ;
        ;
        ;
        if ((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((0UL > p_188), ((safe_div_func_uint8_t_u_u(p_188, ((func_33((*p_189), g_273, p_185, g_242) || (*l_435)) && l_442))) < g_41))), p_187)))
        {
            int l_443 = 0xAEE22B1FL;
            if (l_443)
            {
                unsigned short l_448 = 1UL;
                for (l_365 = (-21); (l_365 > 8); ++l_365)
                {
                    (*l_435) = (p_188 >= p_188);
                    (*p_189) = (safe_div_func_int8_t_s_s((((((*l_435) ^= 3L) || p_187) != p_188) & p_188), ((*p_186) && l_448)));
                }
                return p_185;



            }
            else
            {
                return p_185;



            }
        }
        else
        {
            unsigned long long l_452 = 0xE6389586FDC5E22ELL;
            int *l_515 = &l_211;
            int *l_516 = &g_193;
            int *l_517 = &g_193;
            int *l_518 = &l_210;
            int *l_519 = &l_210;
            int *l_520 = &g_395;
            int *l_521 = &l_210;
            int *l_522 = (void*)0;
            int *l_523 = &g_500;
            int *l_524 = &g_395;
            int *l_525 = &g_395;
            int *l_526 = &l_211;
            int *l_528 = &g_193;
            int *l_529 = &l_210;
            int *l_530 = (void*)0;
            int l_531 = 0x9A104086L;
            int *l_532 = &g_193;
            int *l_533 = &l_211;
            int *l_534 = &l_347;
            int *l_535 = &l_347;
            int *l_536 = &l_210;
            int *l_537 = &g_193;
            int *l_538 = &g_193;
            int *l_539 = &g_193;
            int *l_540 = &g_395;
            int *l_541 = &l_347;
            int *l_542 = &g_193;
            int *l_543 = &l_531;
            int *l_544 = &g_193;
            int *l_546 = (void*)0;
            int *l_547 = &l_464;
            int *l_548 = &g_193;
            int *l_549 = &g_395;
            int *l_550 = &l_545;
            int l_551 = 0xF70E0C27L;
            int *l_552 = &l_211;
            int *l_553 = &l_347;
            int *l_554 = &l_527;
            int *l_555 = &l_210;
            int *l_556 = &l_545;
            int *l_557 = &l_210;
            int *l_558 = &g_500;
            int *l_559 = &g_395;
            int l_560 = 0xA97216EBL;
            int *l_561 = &g_500;
            int *l_562 = &g_500;
            int *l_563 = &l_464;
            int *l_564 = &g_193;
            int *l_565 = (void*)0;
            int *l_566 = (void*)0;
            int *l_567 = &l_464;
            int *l_568 = &l_545;
            int *l_569 = &l_210;
            int *l_570 = &l_531;
            int *l_571 = &l_545;
            int *l_604 = &l_531;
            unsigned short *l_612 = &l_212;
            for (l_347 = 0; (l_347 > 23); ++l_347)
            {
                unsigned l_451 = 9UL;
                unsigned *l_453 = (void*)0;
                unsigned *l_454 = &g_135;
                short *l_457 = &g_458;
                int l_490 = (-9L);
                if (((*p_189) &= ((*p_186) | (((((*l_454) = ((g_228 = (l_451 && l_452)) <= ((*l_435) > 0x691D6934L))) < (g_5 | (((safe_lshift_func_int16_t_s_s(((*l_457) = (*l_435)), (p_188 | (((safe_rshift_func_uint8_t_u_s((g_39 & p_187), 6)) != 0x31E9B562L) > (*l_213))))) >= (*p_186)) & 0x0F37L))) >= g_395) >= g_461))))
                {
                    long long l_462 = 0x61DE8A2C71066C91LL;
                    int l_463 = 0x3152C324L;
                    int *l_465 = &g_193;
                    int *l_466 = (void*)0;
                    int *l_467 = &l_464;
                    int *l_468 = &l_210;
                    int *l_469 = &g_395;
                    int *l_470 = &g_395;
                    int *l_471 = &g_395;
                    int *l_472 = &g_395;
                    int *l_473 = &l_464;
                    int l_474 = 0x8FA9ADC0L;
                    int *l_475 = &g_395;
                    int *l_476 = &l_463;
                    int *l_477 = &l_464;
                    int *l_478 = &l_463;
                    int *l_479 = (void*)0;
                    int *l_480 = (void*)0;
                    int *l_481 = &g_193;
                    int *l_482 = &l_463;
                    int *l_483 = &g_395;
                    int *l_484 = &l_211;
                    int *l_485 = &l_464;
                    int *l_486 = &l_474;
                    int *l_487 = (void*)0;
                    int *l_488 = &l_211;
                    int *l_489 = &l_474;
                    int *l_491 = &l_474;
                    int *l_492 = &l_211;
                    int *l_493 = &l_211;
                    int *l_494 = &l_463;
                    int *l_495 = (void*)0;
                    int *l_496 = (void*)0;
                    int *l_497 = &l_474;
                    int *l_498 = &g_193;
                    int *l_499 = &l_463;
                    int *l_501 = &g_193;
                    int *l_502 = &l_463;
                    int *l_503 = (void*)0;
                    int *l_504 = &g_500;
                    int *l_505 = &g_500;
                    int *l_506 = (void*)0;
                    g_507--;
                    if ((*p_189))
                        continue;
                    if (l_510)
                        continue;
                    (*l_491) = 1L;
                }
                else
                {
                    int l_511 = 0x8BD9CC43L;
                    (*p_189) = ((((*l_454) = (((*l_213) = l_511) >= ((~0x31L) ^ ((((p_187 && ((((g_69 <= 1UL) < g_334) >= p_188) == (g_5 >= ((((l_457 != l_457) <= (*l_435)) | 0UL) < 0UL)))) & (*p_189)) > g_228) == (*l_435))))) | l_514) | p_188);
                }
            }
            ++g_572;
            (*l_556) = (g_575 >= ((*l_435) == (safe_add_func_int32_t_s_s((*p_189), ((g_237 >= ((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((0x6FC8L >= g_135), g_458)), 7)) ^ (safe_unary_minus_func_uint8_t_u((*l_435))))) <= g_583)))));
            for (l_531 = 2; (l_531 >= 14); ++l_531)
            {
                unsigned short l_587 = 0x62D1L;
                short * const l_596 = (void*)0;
                int l_603 = 0xA9659DCBL;
                const int *l_621 = &l_531;
                const int **l_620 = &l_621;
                const int *l_622 = &l_551;
                (*l_516) = (*l_435);
                (*l_547) = ((void*)0 != g_586);
                ++l_587;
                for (g_242 = 0; (g_242 == (-28)); g_242 = safe_sub_func_int16_t_s_s(g_242, 9))
                {
                    long long *l_602 = &g_110;
                    int l_608 = (-1L);
                    if ((g_575 > (0xFEBA3E4821012C4BLL || (((safe_div_func_int32_t_s_s((l_596 != l_597), (safe_sub_func_int16_t_s_s(((*l_435) = g_41), g_92)))) != func_33(((-1L) || (-10L)), (l_603 = (safe_rshift_func_int16_t_s_s((((((*l_602) ^= (p_188 & (*p_189))) > (*p_186)) && g_583) <= (*p_189)), 11))), p_185, p_188)) < (*g_586)))))
                    {
                        int *l_605 = &g_395;
                        return l_605;



                    }
                    else
                    {
                        unsigned char *l_611 = &g_507;
                        int * const l_618 = &g_619;
                        int * const *l_617 = &l_618;
                        int * const **l_616 = &l_617;
                        (*l_523) ^= ((p_187 > (safe_mul_func_int8_t_s_s(((l_608 >= (safe_rshift_func_uint8_t_u_s(l_608, 4))) | (*l_213)), ((1UL ^ func_33((*p_189), ((*g_586) &= (g_237 < ((*l_611) = 0xCEL))), p_185, l_608)) | 0x3DL)))) == g_334);
                        (*l_516) ^= (-1L);
                        (*l_548) |= ((l_612 != (l_613 = &l_587)) != (p_187 >= (safe_mul_func_int16_t_s_s(((((*l_616) = &p_189) == l_620) == (**l_620)), (*l_435)))));

                        ;
                        ;
                        if ((*l_435))
                            break;
                    }

                    ;
                    (*l_620) = l_622;

                    ;
                    if (l_608)
                        break;
                    (*l_206) = &l_527;

                    ;
                }


                ;
            }

            ;

        }

        ;

    }

    ;

    ;
    ;
    return p_185;



}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_395, "g_395", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_507, "g_507", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_583, "g_583", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_783, "g_783", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_1063, "g_1063", print_hash_value);
    transparent_crc(g_1410, "g_1410", print_hash_value);
    transparent_crc(g_1543, "g_1543", print_hash_value);
    transparent_crc(g_1575, "g_1575", print_hash_value);
    transparent_crc(g_1616, "g_1616", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1841, "g_1841", print_hash_value);
    transparent_crc(g_1943, "g_1943", print_hash_value);
    transparent_crc(g_1944, "g_1944", print_hash_value);
    transparent_crc(g_1945, "g_1945", print_hash_value);
    transparent_crc(g_1951, "g_1951", print_hash_value);
    transparent_crc(g_2037, "g_2037", print_hash_value);
    transparent_crc(g_2135, "g_2135", print_hash_value);
    transparent_crc(g_2233, "g_2233", print_hash_value);
    transparent_crc(g_2416, "g_2416", print_hash_value);
    transparent_crc(g_2426, "g_2426", print_hash_value);
    transparent_crc(g_2442, "g_2442", print_hash_value);
    transparent_crc(g_2448, "g_2448", print_hash_value);
    transparent_crc(g_2457, "g_2457", print_hash_value);
    transparent_crc(g_2540, "g_2540", print_hash_value);
    transparent_crc(g_2593, "g_2593", print_hash_value);
    transparent_crc(g_2697, "g_2697", print_hash_value);
    transparent_crc(g_2814, "g_2814", print_hash_value);
    transparent_crc(g_2912, "g_2912", print_hash_value);
    transparent_crc(g_3100, "g_3100", print_hash_value);
    transparent_crc(g_3239, "g_3239", print_hash_value);
    transparent_crc(g_3292, "g_3292", print_hash_value);
    transparent_crc(g_3296, "g_3296", print_hash_value);
    transparent_crc(g_3297, "g_3297", print_hash_value);
    transparent_crc(g_3306, "g_3306", print_hash_value);
    transparent_crc(g_3309, "g_3309", print_hash_value);
    transparent_crc(g_3332, "g_3332", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
