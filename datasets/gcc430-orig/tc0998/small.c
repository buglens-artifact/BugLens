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
   short f0;
   short f1;
   unsigned f2;
   int f3;
   int f4;
};


static const struct S0 g_11 = {0x0A29L,0x22CBL,4294967293UL,6L,9L};
static unsigned g_35 = 0UL;
static int g_39 = 0xB26DE0D6L;
static int g_64 = 0xE3E2CA52L;
static short g_98 = 0xDE87L;
static short g_100 = 0L;
static short g_102 = 0xB477L;
static char g_109 = 1L;
static unsigned g_113 = 4294967295UL;
static int *g_119 = &g_39;
static int **g_118 = &g_119;
static const int *g_124 = &g_11.f4;
static const int **g_123 = &g_124;
static struct S0 *g_130 = (void*)0;
static unsigned short g_134 = 1UL;
static int g_166 = (-1L);
static unsigned char g_170 = 0x55L;
static int g_266 = 9L;
static int g_290 = 0xA3542F59L;
static short g_319 = 1L;
static short g_329 = 0xF3A6L;
static short g_339 = 0xC922L;
static unsigned g_349 = 18446744073709551614UL;
static int g_392 = 0x7E17964DL;
static unsigned g_411 = 0x2BE46188L;
static unsigned char g_495 = 1UL;
static struct S0 g_546 = {0L,-3L,4294967295UL,0xEE71F5CCL,0x189E2EE1L};
static char g_610 = 0xFCL;
static short *g_636 = (void*)0;
static short * const *g_635 = &g_636;
static const struct S0 *g_651 = &g_11;
static const struct S0 **g_650 = &g_651;
static unsigned g_758 = 4UL;
static int g_809 = (-1L);
static int g_850 = 0x4B43AA44L;
static short g_873 = 1L;
static unsigned short g_898 = 0UL;
static unsigned g_1147 = 4294967295UL;
static short ** const g_1156 = &g_636;
static short ** const *g_1155 = &g_1156;
static short ** const **g_1154 = &g_1155;
static short g_1209 = 0xEA1AL;
static int g_1217 = 0x164F3FC9L;
static short g_1218 = (-7L);
static int g_1219 = 0x6F475C93L;
static short g_1244 = 0x96E8L;
static unsigned short g_1266 = 0x2E01L;
static int g_1332 = 0xB29A496DL;
static short g_1338 = 0xF657L;
static unsigned g_1344 = 1UL;
static unsigned g_1392 = 1UL;
static unsigned g_1573 = 0xFF3AD6C9L;
static int * const g_1577 = (void*)0;
static int g_1703 = 0x058FE49DL;
static unsigned g_1709 = 0x037072ABL;
static int ***g_1771 = &g_118;
static int ****g_1770 = &g_1771;
static unsigned char g_1946 = 2UL;
static char g_2093 = 0xCAL;
static short g_2094 = 0xA05DL;
static char g_2105 = (-7L);
static unsigned short g_2106 = 0xC5CBL;
static unsigned short g_2218 = 0x0D89L;
static char g_2328 = 0xF8L;
static unsigned g_2332 = 4294967295UL;
static unsigned char g_2507 = 1UL;
static short g_2812 = 0x822BL;
static char g_2836 = 0x07L;
static unsigned char *g_2867 = (void*)0;
static unsigned char **g_2866 = &g_2867;
static unsigned short g_2877 = 0x0240L;
static int g_3022 = 0x465FDC5CL;



static int func_1(void);
static const int func_2(short p_3, const struct S0 p_4, int p_5, short p_6, unsigned p_7);
static short func_12(char p_13, unsigned p_14, int p_15, struct S0 p_16, const struct S0 p_17);
static short func_20(unsigned char p_21, unsigned short p_22, char p_23);
static int * const func_42(int * p_43, struct S0 p_44, unsigned p_45, int p_46);
static char func_53(unsigned char p_54, const int * p_55, int * p_56, struct S0 p_57, int p_58);
static int ** const func_76(int ** const p_77, char p_78, int p_79);
static int ** const func_80(int ** p_81, int ** p_82, char p_83, int ** p_84, const int ** p_85);
static int ** func_86(const int * p_87, short p_88);
static int * func_89(unsigned short p_90);
static int func_1(void)
{
    unsigned short l_8 = 0x2360L;
    struct S0 l_40 = {0xBF08L,0xFFFFL,0x23E629BAL,0x2CE6C1CCL,-1L};
    const struct S0 l_41 = {-2L,5L,4294967295UL,-9L,1L};
    int *l_2783 = &g_1703;
    unsigned char *l_2786 = &g_170;
    unsigned char **l_2785 = &l_2786;
    unsigned char ***l_2784 = &l_2785;
    unsigned l_2787 = 1UL;
    int *l_2788 = (void*)0;
    int *l_2789 = (void*)0;
    int *l_2790 = (void*)0;
    int *l_2791 = &g_266;
    int l_2792 = 0xC29B1692L;
    unsigned short *l_2793 = &l_8;
    int *l_2841 = &l_40.f3;
    short l_2868 = 0x27B3L;
    char l_2974 = 0x7EL;
    unsigned char * const l_3035 = &g_1946;
    unsigned short l_3043 = 0x8A4EL;
    unsigned char l_3044 = 249UL;
    (*l_2783) |= func_2((+(l_8 > (safe_rshift_func_uint8_t_u_u(l_8, 0)))), g_11, g_11.f2, func_12(((0x0C43L >= ((safe_add_func_int16_t_s_s((func_20((safe_lshift_func_uint8_t_u_s(2UL, 7)), l_8, (safe_rshift_func_int16_t_s_s(g_11.f1, (1UL > g_11.f4)))) & 65535UL), g_11.f4)) <= (-1L))) || 0xAFL), g_11.f3, l_8, l_40, l_41), l_40.f1);



    ;

    (*l_2784) = (void*)0;

    ;
    (*l_2791) &= (l_2787 ^= (*l_2783));
    if ((g_35 != ((*l_2793) &= l_2792)))
    {
        char l_2802 = 1L;
        unsigned *l_2804 = &g_546.f2;
        int *l_2805 = &l_40.f4;
        struct S0 l_2807 = {0x29D0L,1L,0x5E1C7110L,0x78B06352L,2L};
        struct S0 *l_2808 = &g_546;
        unsigned short l_2840 = 0x8F47L;
        struct S0 l_2842 = {0xEB6FL,-1L,0xD151D5DCL,4L,0xC412B41DL};
        unsigned short l_2963 = 7UL;
        int l_2970 = 0L;
        int l_3020 = (-1L);
        unsigned l_3036 = 0x68038F6EL;
        if ((safe_mod_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_166, g_2106)) & 5L), g_339)))
        {
            (***g_1770) = l_2805;

            ;
        }
        else
        {
            short l_2806 = (-8L);
            return l_2806;
        }

        ;
        (*l_2808) = l_2807;
        if ((((***g_1771) || (*l_2791)) | ((***g_1770) != (**g_1771))))
        {
            struct S0 l_2809 = {7L,1L,0x055BDEE1L,0x559B7918L,1L};
            l_2809 = l_2809;
            return l_2809.f3;


        }
        else
        {
            const char l_2833 = (-1L);
            const short l_2839 = 0xB14DL;
            char *l_2843 = &g_610;
            int l_2871 = 0x321431AFL;
            int l_2928 = 0x81871F51L;
            int l_3001 = 0L;
            int l_3004 = 0xFE9A262BL;
            unsigned char ***l_3005 = &g_2866;
            struct S0 l_3006 = {0x1BEFL,-1L,0UL,0x37C58DCDL,-9L};
            struct S0 l_3024 = {1L,0L,0x8F8340F7L,0L,0L};
            int *l_3027 = &l_2842.f3;
            unsigned short l_3028 = 65535UL;
            short l_3042 = 0x6FB3L;
            if (((*l_2791) = (+(g_1209 && (((g_1332 >= ((*l_2843) |= ((5L || (safe_sub_func_int16_t_s_s(g_2812, (+(safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((((*l_2793) = (safe_mod_func_uint32_t_u_u(g_35, (safe_add_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((((**g_1771) = func_89(func_53(((safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(l_2833, ((*l_2805) = ((safe_rshift_func_int16_t_s_s(g_2836, (safe_div_func_uint8_t_u_u(l_2839, (g_546.f2 ^ 0xDB60L))))) >= 0xCAL)))), g_2812)), l_2840)), 0x496BL)), 14)) < g_1946), (***g_1770), l_2841, l_2842, l_2839))) != (void*)0), l_2842.f4)) ^ (*l_2791)) != g_134), l_2842.f1))))) >= g_2507) == g_1219), 0x2BB6L)), l_2839)))))) < 0x49281916L))) >= 0x4CA2ED7AL) != 0xD9L)))))
            {
                struct S0 **l_2847 = &g_130;
                struct S0 ***l_2846 = &l_2847;
                int l_2860 = 0x9E96D845L;
                short l_2872 = 0L;
                short l_2901 = 0x43DBL;
                int l_2922 = 7L;
                int l_2941 = (-7L);
                unsigned char ***l_2980 = (void*)0;
                if ((((((*l_2846) = (void*)0) == &g_130) < g_11.f0) | (safe_mul_func_uint32_t_u_u((safe_div_func_int32_t_s_s((((*l_2843) |= l_2833) <= ((*l_2841) && g_392)), ((***g_1771) = (safe_lshift_func_uint16_t_u_s(((*l_2793) |= ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((l_2860 | (*l_2805)), (*l_2841))), 13)), g_546.f3)) == 0UL)), (*l_2805)))))), 0UL))))
                {
                    short *l_2863 = &g_873;
                    int l_2870 = 0x74D4C256L;
                    int l_2889 = 0x4FD8044FL;
                    int *l_2898 = &l_2860;
                    int *l_2899 = &l_40.f3;
                    int *l_2900 = &l_2807.f3;
                    int *l_2902 = &l_2860;
                    int *l_2903 = &l_2870;
                    int *l_2904 = &l_2871;
                    int *l_2905 = &g_392;
                    int *l_2906 = (void*)0;
                    int *l_2907 = &l_2807.f4;
                    int *l_2908 = &l_40.f3;
                    int *l_2909 = &g_1703;
                    int *l_2910 = &g_809;
                    int *l_2911 = &g_1703;
                    int *l_2912 = &l_2807.f3;
                    int *l_2913 = &l_40.f4;
                    int *l_2914 = &g_1332;
                    int *l_2915 = (void*)0;
                    int *l_2916 = &l_2807.f4;
                    int *l_2917 = &g_266;
                    int *l_2918 = (void*)0;
                    int *l_2919 = (void*)0;
                    int *l_2920 = &g_1703;
                    int *l_2921 = &l_2889;
                    int *l_2923 = (void*)0;
                    int *l_2924 = &g_1217;
                    int *l_2925 = &g_39;
                    int *l_2926 = &g_39;
                    int *l_2927 = &g_266;
                    int *l_2929 = &l_2842.f3;
                    int *l_2930 = &g_392;
                    int *l_2931 = &l_2842.f4;
                    int *l_2932 = (void*)0;
                    int *l_2933 = &g_64;
                    int *l_2934 = &l_2928;
                    int *l_2935 = &l_2842.f3;
                    int *l_2936 = &l_2842.f4;
                    int *l_2937 = (void*)0;
                    int *l_2938 = &l_2922;
                    int *l_2939 = (void*)0;
                    int *l_2940 = &g_809;
                    int *l_2942 = &g_1217;
                    int *l_2943 = &l_2889;
                    int *l_2944 = (void*)0;
                    int *l_2945 = &g_64;
                    int *l_2946 = (void*)0;
                    int *l_2947 = &g_266;
                    int *l_2948 = (void*)0;
                    unsigned short l_2949 = 0UL;
                    if ((0x8DEA433BL ^ (safe_add_func_int16_t_s_s((*l_2805), ((*l_2863) = l_2860)))))
                    {
                        return (*l_2791);


                    }
                    else
                    {
                        (*l_2783) |= (safe_lshift_func_int8_t_s_s((g_2866 == (void*)0), (l_2839 != 7UL)));
                        (*g_118) = (***g_1770);
                        (**g_118) = l_2868;
                    }
                    (*g_1771) = &l_2805;

                    ;
                    if (((safe_unary_minus_func_uint8_t_u(l_2870)) ^ (((l_2860 < l_2833) && 1L) > g_495)))
                    {
                        int *l_2873 = &g_392;
                        int *l_2874 = &l_2871;
                        int *l_2875 = &l_2842.f3;
                        int *l_2876 = &l_2842.f3;
                        int *l_2880 = &g_1332;
                        int *l_2881 = &l_2871;
                        int *l_2882 = &l_2842.f4;
                        int *l_2883 = &g_546.f4;
                        int *l_2884 = &l_2807.f4;
                        int *l_2885 = &l_2807.f3;
                        int *l_2886 = &g_546.f3;
                        int *l_2887 = (void*)0;
                        int *l_2888 = &l_2871;
                        int *l_2890 = &l_2871;
                        int *l_2891 = &g_266;
                        int *l_2892 = &g_1217;
                        int *l_2893 = &g_546.f4;
                        int *l_2894 = &g_266;
                        unsigned short l_2895 = 0x33E6L;
                        ++g_2877;
                        (*l_2873) &= (g_11.f4 | l_2833);
                        l_2895--;
                        (*g_123) = ((*g_118) = (void*)0);

                        ;
                        ;
                    }
                    else
                    {
                        return l_2872;



                    }

                    ;
                    ;
                    ++l_2949;
                }
                else
                {
                    short l_2952 = 9L;
                    if ((*l_2805))
                    {
                        (*g_118) = (**g_1771);
                    }
                    else
                    {
                        int *l_2953 = &l_40.f3;
                        int *l_2954 = &g_392;
                        int *l_2955 = &g_266;
                        int *l_2956 = &g_64;
                        int *l_2957 = (void*)0;
                        int l_2958 = 0xD6ECEFA6L;
                        int *l_2959 = &l_40.f3;
                        int *l_2960 = &g_39;
                        int *l_2961 = &l_2842.f4;
                        int *l_2962 = &l_2941;
                        --l_2963;
                    }
                }

                ;

                ;
                ;
                if (((-6L) || (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_2970 = l_2839), 0xB6L)), 5))))
                {
                    int l_2977 = 0x2B06BB64L;
                    if ((*l_2783))
                    {
                        short l_2971 = 0x5D7FL;
                        return l_2971;



                    }
                    else
                    {
                        (*l_2841) = func_2((g_35 == l_2922), (*l_2808), (g_109 | l_2871), (l_2941 = (safe_div_func_int16_t_s_s(l_2974, l_2941))), ((safe_lshift_func_int8_t_s_u(g_1946, 5)) != (((*l_2843) ^= l_2977) > l_2860)));
                        return l_2977;



                    }
                }
                else
                {
                    unsigned char ***l_2981 = &l_2785;
                    int l_2983 = 4L;
                    (*l_2783) ^= (-7L);
                    for (l_40.f4 = 0; (l_40.f4 < 7); l_40.f4 = safe_add_func_uint16_t_u_u(l_40.f4, 4))
                    {
                        unsigned char ****l_2982 = &l_2784;
                        (*g_123) = func_89((l_2980 != ((*l_2982) = l_2981)));

                        ;
                        return l_2983;



                    }
                }
                (**g_1771) = (**g_1771);

                ;
                ;
            }
            else
            {
                unsigned l_2995 = 0UL;
                unsigned l_3007 = 2UL;
                for (g_610 = (-11); (g_610 == 29); g_610++)
                {
                    const int l_2990 = 0x0A240942L;
                    unsigned short l_3000 = 5UL;
                    int *l_3002 = &g_290;
                    const struct S0 l_3003 = {0L,0xEC47L,0UL,0x41C51D67L,0L};
                    l_3004 ^= (safe_add_func_uint32_t_u_u((((func_2((*l_2805), (*l_2808), ((l_2990 || (safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(func_2(func_2(l_2995, l_40, ((*l_3002) = (l_2995 <= (safe_add_func_int16_t_s_s((((*l_2783) = ((*l_2791) = l_2839)) & (****g_1770)), (func_20(((safe_mod_func_int32_t_s_s(l_2928, l_2990)) < 2L), l_3000, l_3000) != l_3001))))), l_2990, l_2928), l_3003, g_495, l_2871, g_2877), (-1L))) && l_3003.f0), 0xD28A2808L))) == g_2332), l_2995, l_3001) | 0L) > 0xFD784510L) <= l_2871), g_113));
                }
                (*l_2805) &= ((l_3005 = &g_2866) != (void*)0);
                l_40 = l_3006;
                (*l_2791) = func_20(l_3007, (+((*l_2793)--)), g_2105);
            }

            ;
            ;

            ;
            (*l_2783) &= l_3006.f4;
            for (g_758 = 0; (g_758 >= 26); g_758 = safe_add_func_uint16_t_u_u(g_758, 6))
            {
                unsigned l_3021 = 0xC45BE561L;
                const struct S0 l_3037 = {0L,0x9EFEL,4294967295UL,2L,0x4F0CCFACL};
                int l_3040 = 0xB43E4018L;
                if ((safe_sub_func_uint8_t_u_u(((*l_2786) = (safe_add_func_int32_t_s_s(0L, 0x4A8F6584L))), ((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(g_546.f4, l_2839)) == 5UL), l_3021)) | l_3001))))
                {
                    if (g_3022)
                        break;
                }
                else
                {
                    short l_3023 = 0xC25FL;
                    struct S0 *l_3038 = &g_546;
                    struct S0 *l_3039 = &l_40;
                    int l_3041 = (-1L);
                    if (l_3023)
                    {
                        unsigned l_3025 = 0x8C80EE08L;
                        short l_3026 = 0xB936L;
                        l_3027 = &l_2928;

                        ;
                    }
                    else
                    {
                        return l_3028;



                    }

                    ;
                    (*l_2841) = (safe_sub_func_uint8_t_u_u(((*l_3035) = (0xD903L < ((func_2(((((*l_2786) &= l_3021) == (&l_3005 == &l_3005)) >= (safe_mod_func_uint16_t_u_u(((void*)0 == l_3035), ((l_3036 <= func_2(l_3021, ((*l_3039) = ((*l_3038) = l_3037)), g_1946, l_3037.f3, (*l_3027))) && g_2094)))), l_41, g_339, l_3023, l_3040) >= (*l_2783)) | (-4L)))), (-2L)));
                    (*l_3027) = (((-1L) || (l_3040 >= l_3041)) < (*l_3027));
                    if (l_3041)
                        break;
                }
            }

            ;
            if (((~l_3043) || l_3044))
            {
                (*g_123) = (void*)0;

                ;
            }
            else
            {
                unsigned short l_3045 = 0UL;
                char *l_3046 = &g_2093;
                (*l_3027) |= l_3045;
                (*l_2783) &= (((*l_2843) = (*l_3027)) > func_20((*l_2791), (*l_3027), ((*l_3046) = l_3045)));
            }
        }

        ;
        ;

        ;
        return (*l_2783);



    }
    else
    {
        struct S0 l_3047 = {0x09B1L,5L,0x83D6CE91L,0L,0x064DEA52L};
        struct S0 *l_3048 = &g_546;
        (*l_3048) = l_3047;
        (*l_2841) = l_3047.f2;
    }
    return (*l_2791);
}







static const int func_2(short p_3, const struct S0 p_4, int p_5, short p_6, unsigned p_7)
{
    short l_2548 = 0x7D14L;
    int *l_2551 = (void*)0;
    int *l_2552 = &g_392;
    struct S0 l_2553 = {-1L,0xE498L,0x7802531EL,0x6F0C5D7EL,0xB0FAD48BL};
    unsigned char *l_2556 = &g_1946;
    unsigned *l_2557 = &g_113;
    int *l_2558 = (void*)0;
    int *l_2559 = &g_1703;
    int *l_2560 = &g_546.f3;
    int *l_2561 = (void*)0;
    int *l_2562 = &g_266;
    int *l_2563 = &g_546.f4;
    int *l_2564 = &g_266;
    int *l_2565 = (void*)0;
    int *l_2566 = &g_546.f3;
    int *l_2567 = &g_64;
    int *l_2568 = &g_809;
    int *l_2569 = &g_546.f3;
    int *l_2570 = (void*)0;
    int *l_2571 = &g_392;
    int *l_2572 = &g_64;
    int *l_2573 = &g_39;
    int *l_2574 = (void*)0;
    int *l_2575 = &g_546.f4;
    int *l_2576 = (void*)0;
    int *l_2577 = (void*)0;
    int l_2578 = 1L;
    int l_2579 = 0x1117208DL;
    int *l_2580 = &g_1332;
    int *l_2581 = (void*)0;
    int *l_2582 = &l_2578;
    int *l_2583 = &g_546.f3;
    int *l_2584 = &l_2578;
    int l_2585 = 9L;
    int *l_2586 = &g_1703;
    int *l_2587 = (void*)0;
    int *l_2588 = &g_39;
    int *l_2589 = &g_546.f4;
    int *l_2590 = &g_546.f4;
    int *l_2591 = &g_39;
    int l_2592 = 1L;
    int *l_2593 = &g_1703;
    int *l_2594 = &l_2579;
    int *l_2595 = &l_2553.f4;
    int *l_2596 = &l_2553.f4;
    int *l_2597 = (void*)0;
    int *l_2598 = (void*)0;
    int *l_2599 = &g_809;
    int *l_2600 = &g_1703;
    int *l_2601 = &g_1217;
    int *l_2602 = &g_809;
    int *l_2603 = &l_2585;
    int *l_2604 = &g_546.f4;
    int l_2605 = 7L;
    int *l_2606 = &g_39;
    int l_2607 = 0x77E34EF4L;
    int *l_2608 = &l_2605;
    int *l_2609 = &l_2592;
    int *l_2610 = &l_2605;
    int *l_2611 = &l_2578;
    int *l_2612 = &g_546.f4;
    int *l_2613 = &g_392;
    int *l_2614 = &l_2579;
    int *l_2615 = &l_2553.f4;
    int *l_2616 = (void*)0;
    int *l_2617 = (void*)0;
    int l_2618 = 0x51A27BCBL;
    int *l_2619 = &g_1332;
    int *l_2620 = &g_1703;
    int *l_2621 = &g_546.f4;
    int *l_2622 = (void*)0;
    int l_2623 = (-9L);
    int *l_2624 = &l_2579;
    int *l_2625 = &g_546.f3;
    int *l_2626 = &l_2553.f3;
    int *l_2627 = &l_2605;
    int *l_2628 = (void*)0;
    int *l_2629 = &l_2618;
    int *l_2630 = &l_2578;
    int *l_2631 = &l_2553.f3;
    int *l_2632 = (void*)0;
    int *l_2633 = &g_1332;
    int *l_2634 = &g_266;
    int *l_2635 = &l_2605;
    int l_2636 = 1L;
    int *l_2637 = &l_2605;
    int l_2638 = (-10L);
    int *l_2639 = &l_2623;
    int *l_2640 = &l_2585;
    int *l_2641 = (void*)0;
    int *l_2642 = &l_2607;
    int *l_2643 = &l_2579;
    int *l_2644 = &g_546.f4;
    int l_2645 = 0x36DDDDAFL;
    int *l_2646 = (void*)0;
    int *l_2647 = &l_2638;
    int *l_2648 = &l_2553.f3;
    int *l_2649 = &g_64;
    int l_2650 = (-1L);
    int *l_2651 = (void*)0;
    int *l_2652 = (void*)0;
    int *l_2653 = &g_546.f4;
    int *l_2654 = &l_2623;
    int *l_2655 = &g_546.f3;
    int *l_2656 = &l_2553.f4;
    int *l_2657 = &g_1332;
    int l_2658 = (-3L);
    int *l_2659 = &l_2645;
    int *l_2660 = &l_2607;
    int *l_2661 = &l_2607;
    int *l_2662 = &g_1217;
    int *l_2663 = &l_2592;
    int *l_2664 = &l_2636;
    int *l_2665 = &l_2592;
    int *l_2666 = &g_64;
    int *l_2667 = &l_2553.f3;
    int *l_2668 = &g_546.f3;
    int *l_2669 = &g_809;
    int l_2670 = 0x7F864C11L;
    int *l_2671 = &l_2579;
    int *l_2672 = &l_2638;
    int *l_2673 = &l_2578;
    int *l_2674 = &g_546.f4;
    int *l_2675 = (void*)0;
    int *l_2676 = &l_2553.f4;
    int *l_2677 = (void*)0;
    int *l_2678 = (void*)0;
    int *l_2679 = &g_266;
    int *l_2680 = &g_266;
    int *l_2681 = (void*)0;
    int *l_2682 = &g_809;
    int *l_2683 = &l_2578;
    int l_2684 = 1L;
    int *l_2685 = &l_2585;
    int *l_2686 = &l_2623;
    int *l_2687 = &g_546.f3;
    int *l_2688 = &l_2684;
    int *l_2689 = &l_2623;
    int *l_2690 = &l_2623;
    int *l_2691 = &l_2636;
    int *l_2692 = &g_809;
    int *l_2693 = &l_2578;
    int *l_2694 = (void*)0;
    int *l_2695 = &l_2618;
    int *l_2696 = (void*)0;
    int *l_2697 = &g_1703;
    int *l_2698 = (void*)0;
    int *l_2699 = &l_2578;
    int *l_2700 = &l_2650;
    int *l_2701 = &l_2645;
    int *l_2702 = (void*)0;
    int *l_2703 = &g_64;
    int *l_2704 = &l_2579;
    int *l_2705 = &g_1703;
    int *l_2706 = &l_2592;
    int *l_2707 = &l_2638;
    int *l_2708 = (void*)0;
    int *l_2709 = &g_809;
    int *l_2710 = &l_2658;
    int *l_2711 = (void*)0;
    int *l_2712 = (void*)0;
    int l_2713 = 0x3E4403FFL;
    int *l_2714 = &l_2645;
    int *l_2715 = &g_1332;
    int *l_2716 = &l_2578;
    int *l_2717 = &g_546.f3;
    int *l_2718 = &g_64;
    int *l_2719 = &g_809;
    int *l_2720 = (void*)0;
    int l_2721 = 0x4C3442D1L;
    int *l_2722 = &g_1217;
    int *l_2723 = &l_2713;
    int *l_2724 = &g_546.f3;
    int *l_2725 = &l_2618;
    int *l_2726 = &l_2658;
    int *l_2727 = &l_2605;
    int *l_2728 = (void*)0;
    int *l_2729 = &l_2553.f4;
    int *l_2730 = (void*)0;
    int *l_2731 = (void*)0;
    int *l_2732 = (void*)0;
    int *l_2733 = &g_1332;
    int *l_2734 = &l_2721;
    int *l_2735 = &l_2670;
    int *l_2736 = &l_2592;
    int *l_2737 = &l_2645;
    int *l_2738 = &l_2721;
    int *l_2739 = (void*)0;
    int *l_2740 = &l_2713;
    int *l_2741 = &l_2605;
    int *l_2742 = &l_2636;
    int *l_2743 = &l_2721;
    int *l_2744 = &l_2645;
    int *l_2745 = &g_1217;
    int *l_2746 = &l_2623;
    int *l_2747 = &g_546.f4;
    int *l_2748 = (void*)0;
    int *l_2749 = &l_2645;
    int *l_2750 = &l_2650;
    int *l_2751 = (void*)0;
    int *l_2752 = &g_546.f3;
    int l_2753 = (-3L);
    int *l_2754 = (void*)0;
    int *l_2755 = (void*)0;
    int *l_2756 = &l_2670;
    int *l_2757 = &l_2553.f4;
    int *l_2758 = &g_1217;
    int *l_2759 = &l_2618;
    int *l_2760 = &l_2623;
    int *l_2761 = &l_2658;
    int *l_2762 = &l_2605;
    int *l_2763 = &l_2645;
    int *l_2764 = &g_39;
    int l_2765 = (-10L);
    int *l_2766 = &l_2658;
    int *l_2767 = &l_2638;
    int *l_2768 = &g_1703;
    int l_2769 = (-1L);
    int *l_2770 = &l_2650;
    int *l_2771 = &g_809;
    int l_2772 = (-5L);
    int *l_2773 = &g_1217;
    int *l_2774 = (void*)0;
    int *l_2775 = &g_64;
    int *l_2776 = &g_1217;
    int *l_2777 = &l_2684;
    int *l_2778 = (void*)0;
    int l_2779 = (-7L);
    unsigned l_2780 = 0x91541BF4L;
    for (g_2507 = 8; (g_2507 == 60); ++g_2507)
    {
        unsigned char *l_2540 = (void*)0;
        int l_2541 = 1L;
        int l_2542 = (-8L);
        unsigned short *l_2543 = &g_898;
        g_266 = (safe_div_func_int16_t_s_s(p_4.f2, func_20((l_2541 = 255UL), ((*l_2543) &= l_2542), l_2542)));
    }
    (*l_2552) = (safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((((*g_1156) = (*g_1156)) != &p_3), 15)) >= (p_6 || g_1573)), p_4.f2));
    l_2780--;
    return p_5;
}







static short func_12(char p_13, unsigned p_14, int p_15, struct S0 p_16, const struct S0 p_17)
{
    struct S0 l_47 = {0xE11CL,0x4EE3L,0x919D6B80L,-7L,1L};
    int l_50 = (-10L);
    const int *l_59 = (void*)0;
    int *l_60 = &g_39;
    unsigned *l_1348 = &g_758;
    int **l_1777 = (void*)0;
    const unsigned l_1784 = 0UL;
    int l_1787 = 9L;
    struct S0 * const *l_1794 = &g_130;
    short l_2181 = 0xE2CFL;
    int l_2216 = (-1L);
    unsigned *l_2511 = &g_1573;
    unsigned short *l_2519 = &g_1266;
    const short *l_2529 = &g_11.f0;
    const short **l_2528 = &l_2529;
    const short **l_2530 = (void*)0;
    const short **l_2531 = (void*)0;
    const short *l_2533 = &g_11.f1;
    const short **l_2532 = &l_2533;
    short *l_2534 = (void*)0;
    short *l_2535 = &g_319;
    l_59 = func_42(&g_39, l_47, ((*l_1348) = ((safe_sub_func_int16_t_s_s((l_50 &= l_47.f2), (safe_lshift_func_int16_t_s_u(p_16.f4, func_20(g_11.f4, g_11.f4, func_53(g_11.f4, l_59, l_60, g_11, g_39)))))) > g_1338)), p_16.f1);

    ;
    ;

    if ((safe_rshift_func_int16_t_s_u(8L, (0xBF68L <= (safe_div_func_uint32_t_u_u(func_53(p_16.f2, (*g_123), ((***g_1770) = func_89((safe_div_func_uint8_t_u_u(((p_17.f1 ^ l_1784) < (*l_60)), (safe_sub_func_uint32_t_u_u(p_15, l_1787)))))), l_47, (*l_60)), 0x60A2B3B0L))))))
    {
        unsigned short l_1792 = 9UL;
        struct S0 **l_1793 = &g_130;
        int l_1795 = 0x5733F914L;
        int ** const *l_1807 = &l_1777;
        int l_1892 = 0x7BAB919CL;
        int l_2199 = 0x6FFBBCCAL;
        if (((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(0x07FEE638L, (func_20(p_17.f4, l_1792, (&p_14 != (void*)0)) & ((l_1795 |= (p_16.f0 = (p_16.f1 || (l_1793 == l_1794)))) | 1UL)))), 3)) | g_809))
        {
            short **l_1800 = &g_636;
            short ***l_1799 = &l_1800;
            short **** const l_1798 = &l_1799;
            unsigned char *l_1808 = &g_170;
            int l_1809 = 0L;
            char *l_1810 = (void*)0;
            char *l_1811 = &g_109;
            char *l_1812 = &g_610;
            (*g_119) = func_53((((safe_div_func_int32_t_s_s(func_53((((void*)0 != l_1798) < (((*l_1812) = ((*l_1811) |= (((safe_add_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((p_16.f0 ^ func_53(((*l_1808) = ((0x478362BAL <= p_17.f3) != (((g_349 | (l_1807 != &l_1777)) ^ p_17.f3) & 6L))), (*g_118), (**g_1771), p_17, g_1344)), 9)), l_1809)), l_1809)) <= (*g_124)) | 1UL))) > 0UL)), &l_1809, (*g_118), p_17, g_1244), g_850)) != p_17.f3) || (-9L)), (*g_118), (*g_118), p_17, p_17.f1);
            (*g_123) = (*g_123);
            (*g_650) = &g_546;

            ;
        }
        else
        {
            (*g_123) = &p_15;

            ;
            for (g_1266 = 0; (g_1266 >= 59); ++g_1266)
            {
                int l_1815 = 7L;
                (*l_60) = l_1815;
            }
            (***g_1771) = 0x28D5ACEFL;
        }

        ;

        if ((0x6F4BL != 0x3BE0L))
        {
            struct S0 l_1816 = {0x54DDL,0xCFCFL,0xC8FBFB19L,-1L,0xF4E5736DL};
            struct S0 *l_1817 = &g_546;
            int l_1973 = 0x8DC1A5C5L;
            unsigned short l_1985 = 65530UL;
            int l_2113 = 0x1703707DL;
            int l_2126 = 2L;
            int l_2145 = 0x54C056C8L;
            int l_2153 = 0x5741363AL;
            (*l_1817) = l_1816;
            if (p_16.f2)
            {
                char l_1828 = 0x54L;
                int l_1904 = (-1L);
                int l_1939 = 8L;
                int l_1945 = 0x6EC7CD72L;
                if (l_1816.f4)
                {
                    int *l_1818 = &l_47.f4;
                    int *l_1819 = &l_1816.f4;
                    int *l_1820 = (void*)0;
                    int *l_1821 = &g_392;
                    int *l_1822 = &l_47.f3;
                    int *l_1823 = &l_1795;
                    int *l_1824 = (void*)0;
                    int *l_1825 = &g_1703;
                    int *l_1826 = &l_47.f4;
                    int *l_1827 = &g_809;
                    int *l_1829 = &g_1703;
                    int *l_1830 = (void*)0;
                    int *l_1831 = (void*)0;
                    int *l_1832 = &g_546.f3;
                    int *l_1833 = &l_1816.f4;
                    int *l_1834 = &g_266;
                    int *l_1835 = &g_1217;
                    int *l_1836 = &g_809;
                    int *l_1837 = &l_1795;
                    int *l_1838 = &g_546.f3;
                    int *l_1839 = &l_47.f3;
                    int *l_1840 = &g_392;
                    int *l_1841 = (void*)0;
                    int *l_1842 = &g_546.f3;
                    int *l_1843 = &g_546.f4;
                    int *l_1844 = (void*)0;
                    int *l_1845 = &l_1816.f4;
                    int *l_1846 = &g_266;
                    int *l_1847 = &g_266;
                    int *l_1848 = (void*)0;
                    int *l_1849 = &l_47.f4;
                    int *l_1850 = (void*)0;
                    int *l_1851 = &g_1703;
                    int *l_1852 = (void*)0;
                    int *l_1853 = &g_546.f4;
                    int *l_1854 = &l_1795;
                    int *l_1855 = (void*)0;
                    int *l_1856 = &g_266;
                    int *l_1857 = &g_39;
                    int *l_1858 = &g_809;
                    int *l_1859 = &l_1795;
                    int *l_1860 = &g_64;
                    int *l_1861 = &g_392;
                    int *l_1862 = (void*)0;
                    int *l_1863 = &g_64;
                    int *l_1864 = &g_546.f4;
                    int *l_1865 = &l_47.f4;
                    int *l_1866 = &l_47.f3;
                    int *l_1867 = &g_546.f4;
                    int *l_1868 = &g_546.f3;
                    int *l_1869 = &g_1703;
                    int *l_1870 = (void*)0;
                    int *l_1871 = &g_1332;
                    int *l_1872 = &g_809;
                    int *l_1873 = &l_47.f4;
                    int *l_1874 = &g_392;
                    int *l_1875 = &g_1332;
                    int *l_1876 = (void*)0;
                    int *l_1877 = (void*)0;
                    int *l_1878 = &g_1217;
                    int *l_1879 = &l_50;
                    int *l_1880 = (void*)0;
                    int *l_1881 = &g_1332;
                    int *l_1882 = &g_546.f4;
                    int *l_1883 = &l_1816.f4;
                    int *l_1884 = &g_64;
                    int *l_1885 = &l_47.f4;
                    int *l_1886 = &g_1332;
                    int *l_1887 = (void*)0;
                    int *l_1888 = &l_1795;
                    int *l_1889 = (void*)0;
                    int *l_1890 = &g_266;
                    int *l_1891 = &l_1795;
                    int l_1893 = (-9L);
                    int *l_1894 = &g_546.f4;
                    int *l_1895 = &g_39;
                    int l_1896 = 0xC8B5471DL;
                    int *l_1897 = &g_546.f4;
                    int *l_1898 = &l_1896;
                    int *l_1899 = &g_546.f4;
                    int *l_1900 = (void*)0;
                    int *l_1901 = &l_47.f4;
                    int *l_1902 = &g_64;
                    int *l_1903 = &g_546.f3;
                    int *l_1905 = (void*)0;
                    int *l_1906 = &g_1217;
                    int *l_1907 = &g_392;
                    int *l_1908 = (void*)0;
                    int *l_1909 = &g_809;
                    int l_1910 = (-1L);
                    int *l_1911 = &g_392;
                    int *l_1912 = &l_50;
                    int *l_1913 = &g_546.f3;
                    int *l_1914 = &g_546.f3;
                    int *l_1915 = (void*)0;
                    int *l_1916 = &l_1816.f4;
                    int *l_1917 = &g_266;
                    int *l_1918 = (void*)0;
                    int *l_1919 = &g_809;
                    int *l_1920 = &l_1795;
                    int *l_1921 = &g_266;
                    int *l_1922 = &l_1816.f3;
                    int *l_1923 = &l_1816.f3;
                    int *l_1924 = &l_1904;
                    int *l_1925 = (void*)0;
                    int *l_1926 = &l_1892;
                    int *l_1927 = &l_1893;
                    int *l_1928 = &g_546.f3;
                    int l_1929 = 0L;
                    int *l_1930 = &l_1816.f4;
                    int *l_1931 = &l_1896;
                    int *l_1932 = &l_1893;
                    int *l_1933 = &l_1816.f3;
                    int *l_1934 = (void*)0;
                    int *l_1935 = &g_1217;
                    int *l_1936 = (void*)0;
                    int *l_1937 = &l_1896;
                    int *l_1938 = &l_47.f4;
                    int *l_1940 = &g_39;
                    int *l_1941 = &l_1904;
                    int *l_1942 = (void*)0;
                    int *l_1943 = &l_1910;
                    int *l_1944 = &l_1816.f3;
                    (*g_119) &= 0x1FE3BB43L;
                    ++g_1946;
                }
                else
                {
                    int *l_1949 = &g_809;
                    int *l_1950 = &l_1795;
                    int *l_1951 = &l_47.f3;
                    int *l_1952 = &l_1816.f3;
                    int *l_1953 = &g_546.f3;
                    int *l_1954 = (void*)0;
                    int *l_1955 = &g_266;
                    int *l_1956 = &g_546.f4;
                    int *l_1957 = &g_1217;
                    int *l_1958 = &g_1217;
                    int *l_1959 = (void*)0;
                    int *l_1960 = &l_1939;
                    int *l_1961 = (void*)0;
                    int *l_1962 = &g_809;
                    int *l_1963 = &g_392;
                    int *l_1964 = (void*)0;
                    int *l_1965 = &l_1795;
                    int *l_1966 = &g_392;
                    int *l_1967 = &g_546.f4;
                    int *l_1968 = &g_1332;
                    int *l_1969 = &l_1939;
                    int *l_1970 = &l_1945;
                    int *l_1971 = &l_1816.f3;
                    int *l_1972 = &g_1703;
                    int *l_1974 = (void*)0;
                    int *l_1975 = (void*)0;
                    int l_1976 = 9L;
                    int *l_1977 = &g_809;
                    int *l_1978 = &l_1816.f3;
                    int *l_1979 = (void*)0;
                    int *l_1980 = &g_392;
                    int l_1981 = 1L;
                    int *l_1982 = &l_1795;
                    int *l_1983 = &l_47.f4;
                    int *l_1984 = &g_39;
                    ++l_1985;
                }
                for (g_1218 = 0; (g_1218 < (-30)); g_1218 = safe_sub_func_int8_t_s_s(g_1218, 6))
                {
                    int l_2003 = 0x2F39F374L;
                    int l_2109 = 0x89DEC2C9L;
                    int l_2110 = 7L;
                    int l_2111 = (-10L);
                    int l_2112 = 0L;
                    int l_2115 = 0xD66B95C0L;
                    int l_2125 = 0xABEF0E2EL;
                    int l_2142 = 0x7C34D0B0L;
                    int l_2150 = 0L;
                    int l_2154 = (-1L);
                    int l_2209 = 0x8575E2EBL;
                    if (l_1828)
                    {
                        int *l_1990 = &g_1703;
                        int *l_1991 = &l_1892;
                        int *l_1992 = &l_1973;
                        int *l_1993 = (void*)0;
                        int *l_1994 = &l_50;
                        int *l_1995 = &g_546.f4;
                        int *l_1996 = (void*)0;
                        int *l_1997 = &g_546.f3;
                        int *l_1998 = &l_1973;
                        int *l_1999 = &l_1973;
                        int *l_2000 = (void*)0;
                        int *l_2001 = &g_1217;
                        int *l_2002 = &g_1217;
                        int *l_2004 = &l_1973;
                        int *l_2005 = &l_1816.f4;
                        int *l_2006 = (void*)0;
                        int *l_2007 = &l_1904;
                        int *l_2008 = (void*)0;
                        int *l_2009 = &l_47.f3;
                        int *l_2010 = &l_1904;
                        int *l_2011 = (void*)0;
                        int *l_2012 = (void*)0;
                        int *l_2013 = &g_392;
                        int *l_2014 = &g_39;
                        int *l_2015 = &g_546.f3;
                        int l_2016 = 0x10751D3DL;
                        int *l_2017 = &g_39;
                        int *l_2018 = &l_1816.f3;
                        int *l_2019 = &g_1703;
                        int *l_2020 = &g_39;
                        int *l_2021 = &l_47.f3;
                        int *l_2022 = &l_1816.f4;
                        int *l_2023 = (void*)0;
                        int *l_2024 = &l_1904;
                        int *l_2025 = &l_47.f4;
                        int *l_2026 = (void*)0;
                        int *l_2027 = &l_1892;
                        int *l_2028 = &g_1703;
                        int *l_2029 = (void*)0;
                        int *l_2030 = &g_546.f4;
                        int *l_2031 = &g_1703;
                        int *l_2032 = &g_392;
                        int *l_2033 = (void*)0;
                        int *l_2034 = &l_1973;
                        int *l_2035 = &g_546.f4;
                        int *l_2036 = &g_64;
                        int l_2037 = 0xE45F0CDBL;
                        int *l_2038 = &l_1904;
                        int *l_2039 = &g_546.f4;
                        int *l_2040 = &l_2016;
                        int *l_2041 = &g_64;
                        int *l_2042 = &l_47.f3;
                        int *l_2043 = (void*)0;
                        int *l_2044 = &g_546.f4;
                        int *l_2045 = &g_809;
                        int *l_2046 = &g_266;
                        int *l_2047 = &l_1939;
                        int *l_2048 = &g_64;
                        int *l_2049 = &l_2037;
                        int *l_2050 = (void*)0;
                        int *l_2051 = &l_1795;
                        int *l_2052 = &g_1703;
                        int *l_2053 = &l_1939;
                        int *l_2054 = (void*)0;
                        int *l_2055 = &l_1795;
                        int *l_2056 = &g_809;
                        int *l_2057 = &l_50;
                        int *l_2058 = &l_1973;
                        int *l_2059 = (void*)0;
                        int *l_2060 = &l_1795;
                        int *l_2061 = &g_1217;
                        int *l_2062 = &l_1939;
                        int *l_2063 = (void*)0;
                        int *l_2064 = &g_546.f3;
                        int *l_2065 = &g_546.f3;
                        int *l_2066 = &g_809;
                        int *l_2067 = (void*)0;
                        int *l_2068 = &l_2003;
                        int *l_2069 = &l_1795;
                        int *l_2070 = &l_2003;
                        int *l_2071 = &l_1816.f4;
                        int *l_2072 = &l_47.f4;
                        int *l_2073 = &g_546.f3;
                        int *l_2074 = &l_1939;
                        int *l_2075 = &l_1973;
                        int *l_2076 = &g_392;
                        int *l_2077 = &g_266;
                        int *l_2078 = &l_1816.f3;
                        int *l_2079 = &g_39;
                        int *l_2080 = (void*)0;
                        int *l_2081 = &l_2016;
                        int *l_2082 = &g_809;
                        int *l_2083 = &l_1816.f4;
                        int *l_2084 = &l_2003;
                        int *l_2085 = &l_1892;
                        int *l_2086 = (void*)0;
                        int *l_2087 = &g_64;
                        int *l_2088 = &l_1816.f3;
                        int *l_2089 = (void*)0;
                        int *l_2090 = &g_1217;
                        int *l_2091 = &g_266;
                        int *l_2092 = &l_1904;
                        int *l_2095 = &l_1795;
                        int *l_2096 = &l_2016;
                        int *l_2097 = &l_1816.f3;
                        int *l_2098 = &l_50;
                        int *l_2099 = &g_266;
                        int *l_2100 = (void*)0;
                        int *l_2101 = &g_266;
                        int *l_2102 = &l_47.f3;
                        int *l_2103 = &l_1816.f3;
                        int *l_2104 = &g_64;
                        int *l_2114 = &l_1939;
                        int *l_2116 = (void*)0;
                        int *l_2117 = &l_2016;
                        int *l_2118 = &g_64;
                        int *l_2119 = &l_2037;
                        int *l_2120 = &g_546.f3;
                        int *l_2121 = (void*)0;
                        int *l_2122 = (void*)0;
                        int *l_2123 = &l_1945;
                        int *l_2124 = &l_1945;
                        int *l_2127 = &l_1945;
                        int *l_2128 = &l_1945;
                        int *l_2129 = &g_546.f3;
                        int *l_2130 = &g_266;
                        int *l_2131 = &g_809;
                        int *l_2132 = &l_2115;
                        int *l_2133 = (void*)0;
                        int *l_2134 = (void*)0;
                        int *l_2135 = &g_1217;
                        int *l_2136 = &l_1816.f3;
                        int *l_2137 = (void*)0;
                        int *l_2138 = &l_47.f3;
                        int *l_2139 = &g_1332;
                        int *l_2140 = (void*)0;
                        int *l_2141 = &g_809;
                        int *l_2143 = &g_546.f3;
                        int *l_2144 = &l_2110;
                        int *l_2146 = &l_2115;
                        int *l_2147 = (void*)0;
                        int *l_2148 = (void*)0;
                        int *l_2149 = &g_546.f4;
                        int *l_2151 = &g_1703;
                        int *l_2152 = &l_2111;
                        int *l_2155 = &l_47.f4;
                        int *l_2156 = &g_546.f3;
                        int *l_2157 = &l_2145;
                        int *l_2158 = (void*)0;
                        int *l_2159 = (void*)0;
                        int *l_2160 = (void*)0;
                        int *l_2161 = &l_1892;
                        int *l_2162 = (void*)0;
                        int *l_2163 = &l_1892;
                        int *l_2164 = &l_2113;
                        int *l_2165 = &l_47.f4;
                        int *l_2166 = &l_2150;
                        int *l_2167 = &l_2115;
                        int *l_2168 = (void*)0;
                        int *l_2169 = &l_1816.f4;
                        int *l_2170 = (void*)0;
                        int *l_2171 = &l_2142;
                        int *l_2172 = &g_1332;
                        int *l_2173 = &l_1945;
                        int *l_2174 = &g_1703;
                        int *l_2175 = &g_39;
                        int *l_2176 = (void*)0;
                        int *l_2177 = &g_1703;
                        int *l_2178 = &g_39;
                        int *l_2179 = &g_64;
                        int *l_2180 = &l_2145;
                        int *l_2182 = (void*)0;
                        int *l_2183 = &l_2110;
                        int *l_2184 = (void*)0;
                        int *l_2185 = (void*)0;
                        int *l_2186 = (void*)0;
                        int *l_2187 = &l_2125;
                        int *l_2188 = &l_2016;
                        int *l_2189 = &l_47.f3;
                        int *l_2190 = &l_1795;
                        int *l_2191 = &l_1945;
                        int *l_2192 = (void*)0;
                        int *l_2193 = &g_809;
                        int *l_2194 = &l_2115;
                        int *l_2195 = &g_266;
                        int *l_2196 = &g_1332;
                        int *l_2197 = (void*)0;
                        int *l_2198 = (void*)0;
                        int *l_2200 = &l_2145;
                        int *l_2201 = &l_2145;
                        int *l_2202 = (void*)0;
                        int *l_2203 = (void*)0;
                        int *l_2204 = &l_47.f3;
                        int *l_2205 = &g_64;
                        int *l_2206 = &l_2003;
                        int *l_2207 = (void*)0;
                        int *l_2208 = &l_2154;
                        int *l_2210 = &l_2111;
                        int *l_2211 = &l_47.f3;
                        int *l_2212 = (void*)0;
                        int *l_2213 = &l_2112;
                        int *l_2214 = &g_1332;
                        int *l_2215 = (void*)0;
                        int *l_2217 = &l_2126;
                        --g_2106;
                        (*g_123) = &l_2003;

                        ;
                        g_2218--;
                    }
                    else
                    {
                        struct S0 ***l_2221 = &l_1793;
                        int *l_2222 = &g_546.f4;
                        int *l_2223 = (void*)0;
                        int *l_2224 = &l_2150;
                        int *l_2225 = &g_392;
                        int *l_2226 = &l_2111;
                        int *l_2227 = &l_2003;
                        int *l_2228 = (void*)0;
                        int *l_2229 = &l_2110;
                        int *l_2230 = (void*)0;
                        int l_2231 = 1L;
                        int *l_2232 = &l_1904;
                        int *l_2233 = (void*)0;
                        int *l_2234 = (void*)0;
                        int *l_2235 = &l_50;
                        int *l_2236 = &g_546.f4;
                        int *l_2237 = &l_2199;
                        int *l_2238 = (void*)0;
                        int *l_2239 = &l_2150;
                        int *l_2240 = &l_2111;
                        int *l_2241 = &l_1939;
                        int *l_2242 = &l_2199;
                        int *l_2243 = &l_1816.f4;
                        int *l_2244 = &l_1816.f3;
                        int *l_2245 = &g_64;
                        int *l_2246 = (void*)0;
                        int *l_2247 = &g_1703;
                        int *l_2248 = (void*)0;
                        int *l_2249 = &l_2209;
                        int *l_2250 = &l_2113;
                        int *l_2251 = &l_2115;
                        int *l_2252 = &l_2110;
                        int *l_2253 = &l_1945;
                        int *l_2254 = &g_392;
                        int *l_2255 = (void*)0;
                        int *l_2256 = &g_64;
                        int *l_2257 = &l_2112;
                        int *l_2258 = &l_1892;
                        int *l_2259 = &l_2111;
                        int *l_2260 = &g_809;
                        int *l_2261 = &g_1217;
                        int *l_2262 = &l_2003;
                        int *l_2263 = &l_1816.f3;
                        int *l_2264 = &l_1816.f4;
                        int *l_2265 = &l_1939;
                        int *l_2266 = &g_39;
                        int *l_2267 = &l_2125;
                        int *l_2268 = &l_2110;
                        int *l_2269 = (void*)0;
                        int *l_2270 = (void*)0;
                        int *l_2271 = &g_39;
                        int *l_2272 = &l_2003;
                        int *l_2273 = &l_2209;
                        int l_2274 = 0xDB4FF48FL;
                        int *l_2275 = (void*)0;
                        int *l_2276 = &l_2113;
                        int *l_2277 = &l_2142;
                        int *l_2278 = (void*)0;
                        int *l_2279 = (void*)0;
                        int *l_2280 = &l_1939;
                        int *l_2281 = &l_2113;
                        int *l_2282 = &l_1945;
                        int *l_2283 = &l_2153;
                        int *l_2284 = &l_47.f4;
                        int *l_2285 = &g_546.f3;
                        int *l_2286 = &g_809;
                        int l_2287 = (-10L);
                        int *l_2288 = &l_2287;
                        int *l_2289 = &l_2150;
                        int *l_2290 = (void*)0;
                        int *l_2291 = &l_2142;
                        int *l_2292 = &l_47.f4;
                        int *l_2293 = &l_1904;
                        int *l_2294 = &l_1816.f4;
                        int *l_2295 = &l_47.f4;
                        int *l_2296 = &l_1945;
                        int *l_2297 = &l_2109;
                        int *l_2298 = &g_266;
                        int *l_2299 = &l_47.f4;
                        int *l_2300 = &l_2142;
                        int *l_2301 = &g_64;
                        int *l_2302 = &l_1816.f3;
                        int *l_2303 = &l_2145;
                        int *l_2304 = &l_2111;
                        int *l_2305 = (void*)0;
                        int *l_2306 = &l_2274;
                        int *l_2307 = &l_2145;
                        int *l_2308 = &l_1795;
                        int *l_2309 = &l_2231;
                        int *l_2310 = &l_2125;
                        int *l_2311 = &l_2153;
                        int *l_2312 = &l_47.f3;
                        int *l_2313 = &l_2125;
                        int *l_2314 = &g_546.f3;
                        int *l_2315 = &l_2113;
                        int *l_2316 = &l_2109;
                        int *l_2317 = &l_2150;
                        int *l_2318 = (void*)0;
                        int *l_2319 = (void*)0;
                        int *l_2320 = &g_1703;
                        int *l_2321 = &l_50;
                        int *l_2322 = &l_2154;
                        int *l_2323 = &l_1816.f4;
                        int *l_2324 = &l_2115;
                        int *l_2325 = &l_1939;
                        int *l_2326 = &l_2209;
                        int *l_2327 = &g_1217;
                        int *l_2329 = &l_2110;
                        int *l_2330 = &g_1332;
                        int *l_2331 = &l_2111;
                        (**g_118) &= (l_2221 == l_2221);
                        ++g_2332;
                        if (p_16.f1)
                            break;
                    }


                    (*l_1817) = (*l_1817);
                }


            }
            else
            {
                short l_2335 = 5L;
                unsigned *l_2336 = &l_1816.f2;
                short *l_2337 = &g_329;
                int l_2450 = 0x5A3DCF7EL;
                int l_2477 = 0xCC825F35L;
                int l_2478 = 1L;
                if (((*g_119) = (((*l_2336) |= l_2335) ^ ((*g_1156) != l_2337))))
                {
                    return p_16.f3;


                }
                else
                {
                    int l_2431 = 7L;
                    int l_2459 = (-1L);
                    int l_2499 = 0x27BD1A30L;
                    (*g_123) = (*g_118);

                    ;
                    for (g_898 = 0; (g_898 == 30); g_898 = safe_add_func_uint16_t_u_u(g_898, 8))
                    {
                        unsigned l_2340 = 0x685A05D7L;
                        p_16 = p_16;
                        return l_2340;
                    }
                    (***g_1771) = p_16.f0;
                    if (p_17.f0)
                    {
                        int *l_2341 = &l_2113;
                        l_2341 = (void*)0;

                        ;
                    }
                    else
                    {
                        int *l_2342 = &l_47.f3;
                        int *l_2343 = &l_1816.f3;
                        int *l_2344 = &l_2153;
                        int *l_2345 = &l_1795;
                        int *l_2346 = (void*)0;
                        int *l_2347 = &l_1795;
                        int *l_2348 = &l_1816.f4;
                        int *l_2349 = &g_64;
                        int *l_2350 = &l_47.f3;
                        int *l_2351 = &g_64;
                        int *l_2352 = &l_47.f3;
                        int *l_2353 = (void*)0;
                        int *l_2354 = &l_1816.f4;
                        int *l_2355 = &g_1332;
                        int *l_2356 = &g_64;
                        int *l_2357 = (void*)0;
                        int *l_2358 = (void*)0;
                        int *l_2359 = &g_1332;
                        int *l_2360 = &l_47.f3;
                        int *l_2361 = (void*)0;
                        int *l_2362 = &l_2126;
                        int *l_2363 = &g_392;
                        int *l_2364 = &l_1816.f4;
                        int *l_2365 = (void*)0;
                        int *l_2366 = (void*)0;
                        int *l_2367 = &l_2199;
                        int *l_2368 = &l_50;
                        int *l_2369 = &l_1816.f4;
                        int *l_2370 = &l_50;
                        int *l_2371 = &l_1816.f3;
                        int *l_2372 = &l_2126;
                        int *l_2373 = &l_1892;
                        int *l_2374 = &g_546.f4;
                        int *l_2375 = (void*)0;
                        int *l_2376 = &l_2216;
                        int *l_2377 = &l_1892;
                        int *l_2378 = &l_2153;
                        int *l_2379 = &g_39;
                        int *l_2380 = &l_2145;
                        int *l_2381 = &g_64;
                        int *l_2382 = &g_39;
                        int *l_2383 = &g_39;
                        int *l_2384 = (void*)0;
                        int *l_2385 = &g_266;
                        int *l_2386 = &g_1332;
                        int *l_2387 = (void*)0;
                        int *l_2388 = &l_2216;
                        int *l_2389 = &l_1892;
                        int *l_2390 = (void*)0;
                        int *l_2391 = &g_64;
                        int *l_2392 = &l_1816.f4;
                        int *l_2393 = (void*)0;
                        int *l_2394 = &g_266;
                        int *l_2395 = &l_1816.f3;
                        int *l_2396 = &l_1973;
                        int *l_2397 = &g_1217;
                        int l_2398 = 0x980DE675L;
                        int *l_2399 = &g_546.f4;
                        int *l_2400 = &l_1795;
                        int *l_2401 = &l_1816.f4;
                        int *l_2402 = &l_1892;
                        int *l_2403 = &l_1816.f3;
                        int *l_2404 = &l_1795;
                        int *l_2405 = &l_2126;
                        int *l_2406 = &l_47.f3;
                        int *l_2407 = &l_1816.f3;
                        int *l_2408 = &g_809;
                        int *l_2409 = &g_39;
                        int *l_2410 = &g_546.f4;
                        int *l_2411 = (void*)0;
                        int *l_2412 = &l_1973;
                        int *l_2413 = &l_50;
                        int *l_2414 = &l_47.f3;
                        int *l_2415 = &g_809;
                        int *l_2416 = &g_1332;
                        int *l_2417 = &l_2398;
                        int *l_2418 = &l_50;
                        int *l_2419 = &l_2199;
                        int *l_2420 = &g_266;
                        int *l_2421 = &l_1892;
                        int *l_2422 = (void*)0;
                        int *l_2423 = &l_47.f4;
                        int *l_2424 = (void*)0;
                        int *l_2425 = &l_2216;
                        int *l_2426 = &l_1892;
                        int *l_2427 = &g_1332;
                        int *l_2428 = &g_266;
                        int *l_2429 = (void*)0;
                        int *l_2430 = &l_2398;
                        int *l_2432 = &l_1973;
                        int *l_2433 = &l_2398;
                        int *l_2434 = &l_2145;
                        int *l_2435 = &l_47.f3;
                        int *l_2436 = &l_2216;
                        int *l_2437 = &l_2431;
                        int *l_2438 = &g_546.f4;
                        int *l_2439 = &l_2113;
                        int *l_2440 = &g_39;
                        int *l_2441 = &g_1217;
                        int *l_2442 = &g_39;
                        int l_2443 = 0xC469FA70L;
                        int *l_2444 = &l_2199;
                        int *l_2445 = &g_392;
                        int *l_2446 = (void*)0;
                        int *l_2447 = &l_47.f3;
                        int *l_2448 = (void*)0;
                        int l_2449 = 0L;
                        int *l_2451 = (void*)0;
                        int *l_2452 = &l_1892;
                        int *l_2453 = &l_47.f3;
                        int *l_2454 = (void*)0;
                        int *l_2455 = &l_2443;
                        int *l_2456 = &l_2443;
                        int *l_2457 = &g_546.f4;
                        int *l_2458 = (void*)0;
                        int *l_2460 = &l_2113;
                        int *l_2461 = (void*)0;
                        int *l_2462 = &l_1795;
                        int *l_2463 = &l_2145;
                        int *l_2464 = &l_2449;
                        int *l_2465 = (void*)0;
                        int *l_2466 = &l_47.f3;
                        int *l_2467 = &l_2113;
                        int *l_2468 = &g_64;
                        int *l_2469 = &g_1332;
                        int *l_2470 = &l_47.f3;
                        int *l_2471 = &g_392;
                        int *l_2472 = (void*)0;
                        int *l_2473 = &l_2431;
                        int *l_2474 = &g_1703;
                        int *l_2475 = &l_2216;
                        int *l_2476 = &g_392;
                        int *l_2479 = &l_2459;
                        int *l_2480 = &l_2443;
                        int *l_2481 = (void*)0;
                        int *l_2482 = &l_1973;
                        int *l_2483 = &l_1892;
                        int *l_2484 = &l_1973;
                        int *l_2485 = (void*)0;
                        int *l_2486 = &g_809;
                        int *l_2487 = &l_1973;
                        int *l_2488 = &l_47.f4;
                        int *l_2489 = &g_64;
                        int *l_2490 = &g_266;
                        int *l_2491 = &l_2126;
                        int *l_2492 = &l_2443;
                        int *l_2493 = &l_2477;
                        int *l_2494 = &l_2443;
                        int *l_2495 = &l_1795;
                        int *l_2496 = (void*)0;
                        int *l_2497 = &l_2431;
                        int *l_2498 = (void*)0;
                        int *l_2500 = &g_546.f4;
                        int *l_2501 = (void*)0;
                        int *l_2502 = &l_1973;
                        int *l_2503 = &g_546.f3;
                        int *l_2504 = &l_50;
                        int *l_2505 = &l_2113;
                        int l_2506 = 8L;
                        struct S0 *l_2510 = &l_47;
                        --g_2507;
                        (*l_2510) = (g_546 = l_47);
                        (***g_1770) = &p_15;

                        ;
                        (*l_1793) = &g_546;

                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
                p_16.f3 ^= (***g_1771);
            }

            ;

            ;
            (***g_1770) = &p_15;

            ;
            l_60 = func_89(p_17.f1);

            ;
        }
        else
        {
            char *l_2512 = (void*)0;
            int l_2513 = 1L;
            unsigned short *l_2516 = &g_2106;
            (*l_60) = ((***g_1771) = ((p_13 = (l_2511 == (void*)0)) != (func_53(l_2513, func_89(((*l_2519) = ((safe_add_func_uint16_t_u_u(((*l_2516) = g_319), ((safe_mod_func_uint8_t_u_u(p_16.f1, func_20(g_546.f3, (l_2519 == (void*)0), g_1217))) != 5L))) & 1UL))), &l_2513, p_16, g_2328) ^ 0x0CCEL)));
            for (g_113 = 0; (g_113 != 19); g_113 = safe_add_func_uint8_t_u_u(g_113, 2))
            {
                (*g_119) ^= (p_16.f4 = ((*l_60) = (-1L)));
            }
        }

        ;
        ;

        ;
        (***g_1771) = p_17.f1;
        for (g_2507 = 6; (g_2507 > 8); ++g_2507)
        {
            int l_2524 = 1L;
            return l_2524;



        }
    }
    else
    {
        short l_2525 = (-1L);
        return l_2525;
    }

    ;
    ;

    ;

    p_16.f3 ^= (g_546.f1 ^ (safe_sub_func_uint16_t_u_u(func_53(p_16.f1, &l_50, (**g_1771), p_17, (((***g_1154) = (void*)0) != ((*l_2532) = ((*l_2528) = &l_2181)))), (((*l_2535) |= (p_16.f0 ^= (g_546.f1 && 1L))) != 0x5C37L))));

    ;
    ;
    return p_14;



}







static short func_20(unsigned char p_21, unsigned short p_22, char p_23)
{
    int *l_28 = (void*)0;
    int l_29 = 0x11DE2A90L;
    int *l_30 = &l_29;
    int l_31 = 0xCDA2A4F2L;
    int *l_32 = &l_29;
    int *l_33 = &l_31;
    int *l_34 = &l_31;
    int *l_38 = &g_39;
    ++g_35;
    (*l_38) = ((*l_34) = ((*l_32) ^= (&l_29 == (void*)0)));
    return p_21;
}







static int * const func_42(int * p_43, struct S0 p_44, unsigned p_45, int p_46)
{
    unsigned l_1353 = 18446744073709551608UL;
    int l_1363 = 1L;
    int l_1379 = 0x074CA273L;
    unsigned short l_1397 = 0xF828L;
    int l_1412 = 0L;
    int l_1416 = 0xD83F1305L;
    int l_1426 = 0x2260DDE4L;
    int l_1432 = (-5L);
    int l_1472 = (-4L);
    int l_1476 = (-6L);
    int l_1512 = 0xBF0A4660L;
    int l_1597 = 0x0854B28FL;
    short **l_1623 = (void*)0;
    short ***l_1622 = &l_1623;
    unsigned l_1716 = 1UL;
    unsigned *l_1743 = &g_546.f2;
    unsigned l_1757 = 0UL;
    for (g_113 = (-2); (g_113 > 45); g_113 = safe_add_func_int16_t_s_s(g_113, 7))
    {
        int *l_1356 = &g_39;
        short **l_1360 = &g_636;
        short ***l_1359 = &l_1360;
        short ****l_1361 = &l_1359;
        char l_1362 = 3L;
        struct S0 l_1378 = {-10L,-1L,4294967295UL,0x984759E1L,0x0B86204FL};
        if ((safe_lshift_func_uint8_t_u_s((l_1363 = (l_1353 && (safe_lshift_func_uint16_t_u_s(func_53(p_44.f3, (*g_123), l_1356, (*g_651), (((l_1353 == (safe_div_func_uint32_t_u_u(p_46, (*p_43)))) ^ (((((*l_1361) = l_1359) == (void*)0) != 0xA04E18D1L) >= g_319)) <= l_1362)), l_1362)))), l_1353)))
        {
            struct S0 l_1364 = {0x999EL,0x8309L,0x3FE367B1L,0x449315ECL,-5L};
            p_44 = l_1364;
            if (l_1363)
                break;
        }
        else
        {
            char l_1381 = 0x94L;
            int l_1386 = 0xEB79B396L;
            for (g_546.f0 = 0; (g_546.f0 < 16); g_546.f0 = safe_add_func_int32_t_s_s(g_546.f0, 3))
            {
                for (g_109 = (-10); (g_109 == (-1)); g_109++)
                {
                    unsigned char *l_1377 = &g_495;
                    char *l_1380 = &l_1362;
                    l_1381 ^= ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((func_20(l_1363, g_610, ((*l_1380) = ((safe_add_func_uint16_t_u_u(p_46, (p_44.f0 = p_44.f0))) && func_53(((*l_1377) = (safe_add_func_uint8_t_u_u(((**g_123) & ((*p_43) = (**g_118))), p_44.f4))), &l_1363, (*g_118), l_1378, l_1379)))) == p_46) >= p_44.f2), 0)), 0x787DF173L)) && 0xF6L);
                }
            }
            if (l_1381)
                continue;
            for (g_898 = 0; (g_898 <= 28); g_898++)
            {
                short l_1384 = (-1L);
                int *l_1385 = &g_1217;
                int *l_1387 = &l_1386;
                int *l_1388 = &l_1386;
                int *l_1389 = (void*)0;
                int *l_1390 = (void*)0;
                int *l_1391 = &l_1386;
                --g_1392;
                (*g_118) = func_89(g_170);

                ;
            }
        }
    }

    ;
    if (((*g_119) = (safe_lshift_func_uint16_t_u_u((l_1397 == ((*p_43) ^ (**g_118))), (&p_44 == (void*)0)))))
    {
        int *l_1398 = &g_1332;
        int l_1499 = (-6L);
        int l_1513 = 7L;
        int l_1549 = (-1L);
        int l_1567 = 0xDABA111BL;
        struct S0 *l_1576 = (void*)0;
        (*l_1398) |= (*p_43);
        if ((*l_1398))
        {
            struct S0 *l_1399 = &g_546;
            int *l_1400 = (void*)0;
            int *l_1401 = &l_1379;
            int *l_1402 = &g_809;
            int *l_1403 = (void*)0;
            int *l_1404 = &g_1217;
            int *l_1405 = &g_64;
            int *l_1406 = &g_809;
            int *l_1407 = &g_1217;
            int *l_1408 = &l_1363;
            int *l_1409 = &g_1332;
            int *l_1410 = &g_64;
            int *l_1411 = &g_39;
            int *l_1413 = (void*)0;
            int *l_1414 = &g_1332;
            int *l_1415 = &l_1379;
            int *l_1417 = &l_1363;
            int *l_1418 = &g_546.f3;
            int *l_1419 = (void*)0;
            int *l_1420 = &g_546.f3;
            int *l_1421 = &g_266;
            int *l_1422 = &l_1363;
            int *l_1423 = &g_809;
            int *l_1424 = &g_546.f4;
            int *l_1425 = (void*)0;
            int *l_1427 = (void*)0;
            int l_1428 = (-1L);
            int *l_1429 = &l_1363;
            int *l_1430 = (void*)0;
            int l_1431 = 1L;
            int *l_1433 = &g_64;
            int *l_1434 = &g_64;
            int *l_1435 = &g_809;
            int *l_1436 = &l_1379;
            int *l_1437 = &l_1412;
            int *l_1438 = &g_809;
            int *l_1439 = (void*)0;
            int *l_1440 = (void*)0;
            int *l_1441 = &l_1379;
            int *l_1442 = &l_1426;
            int *l_1443 = &g_266;
            int *l_1444 = (void*)0;
            int *l_1445 = &l_1416;
            int *l_1446 = &g_1217;
            int *l_1447 = (void*)0;
            int *l_1448 = &g_1332;
            int *l_1449 = &g_546.f3;
            int *l_1450 = &g_266;
            int *l_1451 = &g_392;
            int *l_1452 = &l_1379;
            int *l_1453 = &l_1363;
            int *l_1454 = &g_39;
            int *l_1455 = (void*)0;
            int *l_1456 = &g_392;
            int *l_1457 = &l_1412;
            int *l_1458 = (void*)0;
            int *l_1459 = &g_64;
            int *l_1460 = (void*)0;
            int *l_1461 = &g_266;
            int *l_1462 = &g_546.f3;
            int *l_1463 = &g_546.f3;
            int *l_1464 = (void*)0;
            int *l_1465 = &l_1428;
            int *l_1466 = &g_39;
            int *l_1467 = &g_809;
            int *l_1468 = &l_1428;
            int *l_1469 = &g_64;
            int *l_1470 = &l_1416;
            int *l_1471 = &l_1432;
            int *l_1473 = &l_1432;
            int *l_1474 = &g_266;
            int *l_1475 = &l_1432;
            int *l_1477 = &l_1428;
            int *l_1478 = &g_64;
            int *l_1479 = &l_1426;
            int *l_1480 = &g_392;
            int *l_1481 = (void*)0;
            int *l_1482 = (void*)0;
            int *l_1483 = (void*)0;
            int *l_1484 = &l_1428;
            int l_1485 = 1L;
            int *l_1486 = &g_809;
            int *l_1487 = &g_266;
            int *l_1488 = &l_1428;
            int *l_1489 = &g_1217;
            int *l_1490 = &l_1428;
            int *l_1491 = &l_1432;
            int *l_1492 = &g_392;
            int *l_1493 = &g_1332;
            int *l_1494 = &g_64;
            int *l_1495 = &l_1485;
            int *l_1496 = &l_1431;
            int *l_1497 = &g_546.f3;
            int *l_1498 = &g_546.f4;
            int *l_1500 = &l_1432;
            int *l_1501 = &g_546.f4;
            int *l_1502 = &g_1332;
            int *l_1503 = &l_1426;
            int *l_1504 = &g_64;
            int *l_1505 = (void*)0;
            int *l_1506 = &g_809;
            int *l_1507 = &g_1332;
            int *l_1508 = &l_1428;
            int *l_1509 = &l_1485;
            int *l_1510 = (void*)0;
            int *l_1511 = &l_1476;
            int *l_1514 = &l_1476;
            int *l_1515 = (void*)0;
            int *l_1516 = &l_1412;
            int l_1517 = 0x22A451C0L;
            int l_1518 = 0x35F335B8L;
            int *l_1519 = &l_1472;
            int *l_1520 = &l_1485;
            int *l_1521 = &l_1472;
            int l_1522 = 0xDF3FE06CL;
            int *l_1523 = &l_1379;
            int *l_1524 = &l_1518;
            int *l_1525 = &g_39;
            int *l_1526 = &l_1379;
            int *l_1527 = &l_1522;
            int *l_1528 = (void*)0;
            int *l_1529 = &g_39;
            int *l_1530 = &g_546.f3;
            int *l_1531 = &g_39;
            int *l_1532 = &l_1432;
            int *l_1533 = (void*)0;
            int *l_1534 = &l_1379;
            int *l_1535 = (void*)0;
            int *l_1536 = (void*)0;
            int *l_1537 = (void*)0;
            int *l_1538 = &l_1476;
            int *l_1539 = (void*)0;
            int *l_1540 = &g_546.f3;
            int *l_1541 = &l_1485;
            int *l_1542 = &l_1499;
            int l_1543 = (-1L);
            int *l_1544 = &l_1485;
            int *l_1545 = &l_1485;
            int *l_1546 = (void*)0;
            int l_1547 = (-7L);
            int *l_1548 = &g_546.f4;
            int *l_1550 = (void*)0;
            int *l_1551 = &l_1412;
            int l_1552 = 0x32013D97L;
            int *l_1553 = (void*)0;
            int *l_1554 = &l_1513;
            int *l_1555 = &g_39;
            int *l_1556 = &g_392;
            int *l_1557 = &l_1518;
            int *l_1558 = &l_1549;
            int *l_1559 = &l_1499;
            int *l_1560 = &g_392;
            int *l_1561 = (void*)0;
            int *l_1562 = (void*)0;
            int *l_1563 = &l_1472;
            int *l_1564 = &l_1552;
            int *l_1565 = &g_64;
            int *l_1566 = &l_1412;
            int *l_1568 = &l_1416;
            int *l_1569 = (void*)0;
            int *l_1570 = &l_1513;
            int l_1571 = 0L;
            int *l_1572 = &l_1522;
            (*l_1399) = (**g_650);
            ++g_1573;
            (*g_650) = l_1576;

            ;
            return g_1577;


        }
        else
        {
            int * const l_1578 = (void*)0;
            return l_1578;


        }
    }
    else
    {
        char l_1590 = (-1L);
        const int *l_1631 = (void*)0;
        int l_1633 = (-8L);
        unsigned l_1717 = 0x54B146CDL;
        struct S0 l_1718 = {1L,0x1DFBL,1UL,0x6D0EBF83L,2L};
        unsigned char *l_1772 = (void*)0;
        short *l_1773 = &g_546.f1;
        unsigned short *l_1776 = &g_898;
        for (p_46 = 0; (p_46 < 10); ++p_46)
        {
            unsigned l_1613 = 18446744073709551607UL;
            int l_1655 = 0x6D34617CL;
            if ((**g_118))
            {
                short * const l_1583 = &g_1218;
                int l_1584 = (-7L);
                unsigned short *l_1598 = &g_898;
                unsigned char *l_1624 = &g_495;
                int *l_1632 = &l_1512;
                int *l_1634 = &l_1597;
                int *l_1635 = &l_1584;
                int *l_1636 = &l_1432;
                int *l_1637 = &l_1412;
                int *l_1638 = &l_1416;
                int *l_1639 = &g_809;
                int *l_1640 = &l_1412;
                int *l_1641 = (void*)0;
                int *l_1642 = (void*)0;
                int *l_1643 = &l_1584;
                int *l_1644 = &g_266;
                int *l_1645 = &g_266;
                int *l_1646 = &g_266;
                int *l_1647 = &g_809;
                int *l_1648 = &g_1332;
                int *l_1649 = &l_1416;
                int *l_1650 = &g_546.f3;
                int *l_1651 = &l_1412;
                int *l_1652 = &g_1332;
                int *l_1653 = &l_1633;
                int *l_1654 = &l_1512;
                int *l_1656 = &g_1217;
                int *l_1657 = &l_1379;
                int *l_1658 = (void*)0;
                int *l_1659 = (void*)0;
                int *l_1660 = &g_392;
                int *l_1661 = (void*)0;
                int *l_1662 = &l_1584;
                int *l_1663 = (void*)0;
                int *l_1664 = &l_1412;
                int *l_1665 = (void*)0;
                int *l_1666 = (void*)0;
                int *l_1667 = &l_1363;
                int *l_1668 = &l_1512;
                int *l_1669 = &l_1512;
                int *l_1670 = &l_1633;
                int *l_1671 = &l_1472;
                int *l_1672 = &l_1426;
                int *l_1673 = &l_1472;
                int *l_1674 = &l_1655;
                int *l_1675 = (void*)0;
                int *l_1676 = &l_1584;
                int *l_1677 = &g_546.f3;
                int *l_1678 = &l_1472;
                int *l_1679 = (void*)0;
                int *l_1680 = (void*)0;
                int *l_1681 = &g_1217;
                int *l_1682 = &g_392;
                int *l_1683 = (void*)0;
                int *l_1684 = &g_546.f4;
                int *l_1685 = &g_64;
                int *l_1686 = &l_1416;
                int *l_1687 = &g_266;
                int *l_1688 = (void*)0;
                int *l_1689 = &g_64;
                int *l_1690 = &g_1217;
                int *l_1691 = &g_64;
                int *l_1692 = &l_1512;
                int *l_1693 = &l_1476;
                int *l_1694 = &g_809;
                int *l_1695 = &l_1416;
                int *l_1696 = &l_1597;
                int *l_1697 = &g_266;
                int *l_1698 = &l_1426;
                int *l_1699 = (void*)0;
                int *l_1700 = &l_1412;
                int *l_1701 = &l_1584;
                int *l_1702 = &l_1412;
                int *l_1704 = &l_1512;
                int *l_1705 = &g_64;
                int *l_1706 = &l_1416;
                int *l_1707 = &l_1584;
                int *l_1708 = (void*)0;
                for (l_1353 = (-15); (l_1353 < 56); l_1353 = safe_add_func_int8_t_s_s(l_1353, 3))
                {
                    unsigned short *l_1587 = &g_898;
                    int l_1593 = (-9L);
                    int *l_1594 = &g_266;
                    l_1584 &= ((**g_1155) != l_1583);
                    (*p_43) = ((++(*l_1587)) < ((l_1590 <= (((safe_div_func_uint8_t_u_u(p_46, l_1593)) >= (((*p_43) > g_411) | (g_495 | p_44.f0))) < ((*l_1594) = 0L))) > (((safe_lshift_func_uint16_t_u_s(1UL, p_44.f0)) || l_1584) < p_46)));
                }
                (*p_43) = ((l_1597 || (!(((*l_1598) = p_44.f0) && (((safe_sub_func_int8_t_s_s(p_46, (safe_rshift_func_int8_t_s_s(((((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((*g_119) || g_1332) >= (p_45 >= (0xE2D77DEEL <= l_1597))), (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_170, p_45)), 4)), g_546.f4)) <= (*p_43)) | l_1590))), p_44.f3)) < p_45) | 0x46L) == g_1209), 0)))) <= l_1613) < 0x07EBL)))) >= 0xEAL);
                (*l_1632) &= (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((*l_1624) = (safe_div_func_int8_t_s_s(((**g_123) != ((void*)0 != l_1622)), p_46))), ((safe_div_func_uint32_t_u_u(g_1244, (safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((0x63L >= func_53(l_1476, l_1631, (*g_118), p_44, p_44.f3)), l_1476)), 3)))) | g_411))), p_44.f4)) || g_11.f1), p_44.f0));
                ++g_1709;
            }
            else
            {
                (*g_650) = &p_44;

                ;
            }
            (*g_123) = (*g_123);
        }

        ;
        if ((func_53((((safe_add_func_int8_t_s_s((l_1353 != func_20((safe_div_func_uint32_t_u_u(g_392, func_53(l_1716, func_89(l_1717), (*g_118), l_1718, ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(p_44.f4, ((safe_mod_func_int8_t_s_s(l_1363, p_44.f4)) | 255UL))), g_11.f4)), (**g_123))) || l_1397)))), g_1244, p_44.f0)), p_44.f1)) < p_45) <= p_44.f4), &l_1633, (*g_118), (*g_651), p_45) & g_1147))
        {
            int l_1731 = 1L;
            unsigned char *l_1736 = &g_495;
            const unsigned *l_1742 = &l_1717;
            int l_1748 = 0xB84763CBL;
            (*g_119) = func_53(((*l_1736) = ((safe_sub_func_uint16_t_u_u(func_20(((func_20((safe_sub_func_uint8_t_u_u(l_1731, (g_113 ^ (*p_43)))), (safe_rshift_func_int8_t_s_s(4L, 3)), (g_109 = ((safe_mod_func_int8_t_s_s(l_1731, p_44.f0)) <= l_1432))) < g_170) ^ 253UL), g_1217, g_1392), l_1731)) == p_46)), (*g_118), (*g_118), (**g_650), p_44.f3);
            p_43 = func_89((safe_mod_func_int8_t_s_s(p_46, (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s(((func_20(p_44.f0, g_170, (l_1742 == l_1743)) | (l_1748 = (safe_add_func_int8_t_s_s((safe_div_func_uint8_t_u_u(((g_170 && l_1731) != (g_1209 <= g_1573)), p_45)), g_610)))) == g_546.f0))) > p_46), 0x70A6L)))));

            ;
            (*g_119) = (g_411 > (l_1757 |= (((safe_lshift_func_int8_t_s_u(0x44L, ((func_20(func_20(((*l_1736) = (safe_lshift_func_int8_t_s_u((safe_div_func_uint8_t_u_u(l_1363, g_610)), g_392))), g_850, (safe_mod_func_int8_t_s_s(((0xBA524B38L <= l_1731) == p_44.f4), p_44.f4))), g_809, p_44.f4) & p_44.f4) < p_44.f1))) | p_44.f0) & 0x0D0FL)));
        }
        else
        {
            unsigned l_1760 = 0UL;
            const int *l_1766 = (void*)0;
            struct S0 *l_1767 = (void*)0;
            struct S0 *l_1768 = (void*)0;
            struct S0 *l_1769 = &g_546;
            l_1512 &= (*p_43);
            l_1472 |= ((*p_43) = (~(l_1363 = ((safe_mod_func_int32_t_s_s(l_1760, (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((**g_123), 4294967286UL)), (func_53(((safe_unary_minus_func_uint8_t_u((l_1363 > (p_45 || l_1476)))) < 3UL), l_1766, ((*g_118) = (*g_118)), (**g_650), g_495) <= l_1379))))) == 0x10L))));
            (*l_1769) = (*g_651);
        }

        ;
        (*p_43) ^= (((*l_1773) = ((g_495 = ((g_1770 = g_1770) != &g_1771)) & g_349)) | (safe_lshift_func_uint16_t_u_u(((*l_1776) = l_1432), 4)));
    }

    ;
    ;
    return (*g_118);



}







static char func_53(unsigned char p_54, const int * p_55, int * p_56, struct S0 p_57, int p_58)
{
    unsigned short l_73 = 0xF555L;
    int l_95 = 0x15234D5EL;
    int **l_122 = &g_119;
    unsigned char *l_1014 = &g_170;
    int l_1130 = 0L;
    int l_1138 = (-1L);
    int l_1251 = 1L;
    int l_1324 = 1L;
    struct S0 l_1347 = {2L,0L,1UL,0x4A1D62D0L,0xC036BF5AL};
    for (g_39 = 2; (g_39 < 11); g_39 = safe_add_func_int8_t_s_s(g_39, 1))
    {
        int *l_63 = &g_64;
        int *l_65 = &g_64;
        int *l_66 = &g_64;
        int *l_67 = &g_64;
        int *l_68 = &g_64;
        int *l_69 = &g_64;
        int *l_70 = (void*)0;
        int *l_71 = &g_64;
        int *l_72 = &g_64;
        unsigned short *l_91 = &l_73;
        short *l_96 = (void*)0;
        short *l_97 = &g_98;
        short *l_99 = &g_100;
        short *l_101 = &g_102;
        int ***l_1002 = &l_122;
        ++l_73;
    }
    p_57.f3 |= ((*g_119) = (l_95 |= (**l_122)));
    for (g_546.f3 = 0; (g_546.f3 > 9); g_546.f3++)
    {
        unsigned char l_1018 = 0x1FL;
        int l_1075 = (-5L);
        int l_1077 = 0L;
        (**g_118) = (safe_rshift_func_int8_t_s_u(p_57.f4, 2));
        for (g_329 = 0; (g_329 < (-12)); g_329 = safe_sub_func_uint32_t_u_u(g_329, 7))
        {
            return p_58;
        }
        for (g_64 = (-30); (g_64 == (-2)); g_64 = safe_add_func_int16_t_s_s(g_64, 1))
        {
            unsigned char l_1013 = 0UL;
            unsigned char *l_1015 = &g_495;
            unsigned char *l_1017 = &g_495;
            unsigned char **l_1016 = &l_1017;
            int l_1059 = 2L;
            int l_1115 = 3L;
            int l_1116 = 0L;
            int l_1137 = (-1L);
            int *l_1162 = &l_1137;
            short l_1253 = 1L;
        }
        if (l_1077)
            break;
    }
    l_1347 = p_57;
    return g_339;
}







static int ** const func_76(int ** const p_77, char p_78, int p_79)
{
    const int l_927 = 9L;
    int **l_932 = &g_119;
    int l_947 = 0xCCB8C620L;
    struct S0 *l_957 = &g_546;
    short l_971 = 0xFEA0L;
    short ***l_980 = (void*)0;
    int l_983 = 0x8166AFCCL;
    int l_984 = 1L;
    if ((safe_rshift_func_int16_t_s_u(l_927, p_78)))
    {
        int ***l_933 = (void*)0;
        int ***l_934 = (void*)0;
        int ***l_935 = &g_118;
        unsigned *l_936 = &g_546.f2;
        unsigned char *l_939 = &g_170;
        int *l_940 = &g_64;
        int *l_941 = (void*)0;
        g_546.f3 |= (**g_118);
        p_79 = (((0x44L > (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((&g_119 != ((*l_935) = l_932)), 3)), (0xCCL > g_11.f3)))) >= (g_411 != (--(*l_936)))) && ((g_850 || (!((*l_939) |= 1UL))) != ((*l_940) = ((***l_935) > 0L))));
    }
    else
    {
        unsigned char l_946 = 252UL;
        int *l_948 = &g_809;
        (*l_948) = ((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_946, 3)), 7)) > l_947);
        l_947 |= ((*l_948) = (6L ^ (**l_932)));
        if (p_79)
        {
            for (g_319 = (-3); (g_319 > (-5)); --g_319)
            {
                (*g_123) = func_89(g_166);

                ;
            }
            if ((*g_124))
            {
                for (g_113 = (-24); (g_113 != 32); g_113 = safe_add_func_uint16_t_u_u(g_113, 6))
                {
                    (*g_123) = func_89(p_78);

                    ;
                }
                (*l_948) = 0L;
            }
            else
            {
                if ((*g_124))
                {
                    struct S0 *l_953 = &g_546;
                    int l_956 = 0x92AAF338L;
                    (*l_953) = (*g_651);
                    (*l_948) = (safe_sub_func_int32_t_s_s((l_956 == (((void*)0 == l_957) < ((safe_sub_func_int32_t_s_s(0xF8838F35L, 0x4276EAC0L)) ^ (0x6FL || (((+(**g_123)) != (safe_mod_func_int32_t_s_s((*g_124), g_266))) <= (-4L)))))), 4294967294UL));
                }
                else
                {
                    return &g_119;


                }
            }
        }
        else
        {
            int *l_964 = &g_266;
            struct S0 *l_973 = &g_546;
            for (g_166 = 21; (g_166 > 12); g_166 = safe_sub_func_int8_t_s_s(g_166, 1))
            {
                return &g_119;


            }
            (*g_123) = l_964;

            ;
            if ((*l_948))
            {
                (*g_123) = (void*)0;

                ;
                (*l_932) = (*l_932);
            }
            else
            {
                int l_968 = (-1L);
                unsigned short *l_972 = &g_134;
                short *l_976 = &g_319;
                short **l_978 = &g_636;
                short ***l_977 = &l_978;
                short ****l_979 = &l_977;
                short ****l_981 = (void*)0;
                short ****l_982 = &l_980;
                int l_992 = 0x24F788F5L;
                (*g_123) = func_89(((*l_972) = ((*l_948) < ((((1L & (g_109 > (safe_unary_minus_func_uint32_t_u((((**l_932) || (0xDCDB2F4AL != ((safe_div_func_uint32_t_u_u(p_78, (*l_948))) <= l_968))) && ((safe_div_func_int16_t_s_s((p_79 & l_971), p_79)) != 1UL)))))) | 0xC2E9L) ^ 0xA4E3212AL) >= 0x8350L))));

                ;
                (*l_964) &= (((((l_973 != (void*)0) > (~((*l_976) = ((0UL > (safe_mod_func_uint16_t_u_u((**l_932), 0xEA66L))) & 0x4444L)))) & ((g_290 <= ((((*l_979) = l_977) == ((*l_982) = l_980)) && g_850)) < 4294967289UL)) > 0x6CL) || (**g_123));
                (*l_964) = (((**g_123) & ((l_968 | p_79) & (p_79 && ((*l_948) = 0x2CL)))) && (l_983 & ((*l_972) = (*l_964))));
                l_992 &= (g_170 & (p_79 || ((l_984 >= ((*g_119) || (safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_968, p_78)), 5)))), 5)))) ^ g_329)));
            }

            ;
        }

        ;
    }

    ;
    (*p_77) = func_89((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(g_11.f3, 2)), p_79)));


    for (g_290 = 0; (g_290 >= 17); g_290++)
    {
        unsigned char * const l_1000 = &g_495;
        unsigned char * const *l_999 = &l_1000;
        unsigned char * const **l_1001 = &l_999;
        (*l_1001) = l_999;
        if ((*g_119))
            continue;
    }
    return p_77;


}







static int ** const func_80(int ** p_81, int ** p_82, char p_83, int ** p_84, const int ** p_85)
{
    struct S0 * const *l_132 = &g_130;
    short l_135 = 0xFA15L;
    int l_144 = 0x88FD2EADL;
    int l_153 = 0xBB9DF8DAL;
    unsigned short l_175 = 65535UL;
    unsigned l_235 = 0x0F27F31DL;
    int l_267 = 0x246BF972L;
    int *l_424 = &l_144;
    struct S0 **l_642 = (void*)0;
    const struct S0 **l_653 = &g_651;
    int l_853 = 0L;
    int l_880 = 0x0A72F707L;
    int l_885 = 0x5ED87387L;
    struct S0 l_923 = {-1L,0x5D6CL,0xF3B4F3A1L,0xCC3B32DDL,0x6AF81A32L};
    for (g_102 = 0; (g_102 == (-5)); g_102--)
    {
        unsigned l_127 = 0UL;
        struct S0 l_128 = {9L,-7L,0x67F40E30L,-1L,5L};
        struct S0 *l_129 = &l_128;
        struct S0 **l_131 = &l_129;
        unsigned short *l_133 = &g_134;
        int *l_178 = &l_128.f4;
        int *l_179 = &l_128.f4;
        int *l_180 = &g_64;
        int *l_181 = &l_128.f4;
        int *l_182 = &g_64;
        int *l_183 = &l_144;
        int *l_184 = &l_128.f4;
        int *l_185 = &l_153;
        int *l_186 = &l_128.f3;
        int *l_187 = (void*)0;
        int *l_188 = &l_128.f3;
        int *l_189 = &l_153;
        int *l_190 = &l_128.f4;
        int *l_191 = &l_128.f4;
        int *l_192 = (void*)0;
        int *l_193 = &g_64;
        int *l_194 = &l_128.f4;
        int *l_195 = &l_128.f4;
        int *l_196 = &l_144;
        int *l_197 = &l_128.f3;
        int *l_198 = (void*)0;
        int *l_199 = &g_64;
        int *l_200 = &l_128.f4;
        int *l_201 = &l_144;
        int *l_202 = &g_64;
        int *l_203 = &g_64;
        int *l_204 = &l_153;
        int *l_205 = &l_144;
        int *l_206 = &l_128.f4;
        int *l_207 = &l_144;
        int *l_208 = &l_128.f4;
        int *l_209 = (void*)0;
        int *l_210 = &l_128.f3;
        int *l_211 = &l_128.f4;
        int *l_212 = (void*)0;
        int *l_213 = (void*)0;
        int *l_214 = &l_128.f4;
        int *l_215 = (void*)0;
        int *l_216 = &l_128.f3;
        int *l_217 = &l_128.f4;
        int *l_218 = &g_64;
        int *l_219 = &g_64;
        int *l_220 = &l_153;
        int *l_221 = &g_64;
        int *l_222 = &l_128.f3;
        int *l_223 = (void*)0;
        int *l_224 = &l_153;
        int *l_225 = &g_64;
        unsigned l_226 = 0x1A19A74BL;
        if (l_127)
            break;
        (*l_129) = l_128;
        if ((l_127 || ((-2L) <= ((((*l_131) = g_130) == &g_11) < ((((*l_133) = (((void*)0 != l_132) && p_83)) <= (+l_135)) >= (safe_rshift_func_int8_t_s_s(l_128.f3, 2)))))))
        {
            int l_138 = 1L;
            int l_156 = (-8L);
            int l_161 = 0x329EC220L;
            l_138 |= l_127;
            for (l_128.f2 = 3; (l_128.f2 >= 44); l_128.f2++)
            {
                int *l_141 = (void*)0;
                int *l_142 = &g_64;
                int *l_143 = &g_64;
                int *l_145 = (void*)0;
                int *l_146 = &l_128.f4;
                int *l_147 = &l_128.f3;
                int *l_148 = (void*)0;
                int *l_149 = &l_144;
                char l_150 = (-8L);
                int *l_151 = &l_144;
                int *l_152 = &l_128.f3;
                int *l_154 = (void*)0;
                int *l_155 = (void*)0;
                int *l_157 = &l_128.f3;
                int *l_158 = &l_156;
                int *l_159 = &g_64;
                int *l_160 = (void*)0;
                int *l_162 = &l_128.f3;
                int *l_163 = &l_128.f4;
                int *l_164 = (void*)0;
                int *l_165 = &l_144;
                int *l_167 = (void*)0;
                int *l_168 = &l_156;
                int *l_169 = &l_153;
                g_170++;
            }
            (*g_123) = (*p_85);
            return p_82;


        }
        else
        {
            int *l_176 = (void*)0;
            int *l_177 = &g_64;
            l_128.f4 ^= ((*l_177) = (l_128.f3 |= (safe_add_func_int16_t_s_s((g_170 != l_175), 3UL))));
        }

        ;
        l_226++;
    }
    for (g_35 = 0; (g_35 == 4); g_35 = safe_add_func_int16_t_s_s(g_35, 1))
    {
        unsigned l_240 = 9UL;
        int l_250 = (-3L);
        int l_285 = 0x5193FB3AL;
        int l_400 = 0xBB27ABABL;
        const struct S0 l_547 = {0x70C3L,0x731CL,4294967289UL,-1L,7L};
        int ***l_566 = &g_118;
        short *l_621 = &l_135;
        short **l_620 = &l_621;
        short ***l_619 = &l_620;
        struct S0 **l_643 = &g_130;
        unsigned l_702 = 4294967295UL;
        int l_731 = 0x0CCFAD29L;
        unsigned char *l_762 = (void*)0;
        unsigned char **l_761 = &l_762;
        int l_806 = (-1L);
        for (g_64 = 12; (g_64 < (-2)); g_64 = safe_sub_func_int16_t_s_s(g_64, 7))
        {
            unsigned l_270 = 0x719B2E0BL;
            int l_314 = (-5L);
            int l_348 = 0x96FE6C66L;
            int l_384 = 0x9461F976L;
            int ** const l_507 = &l_424;
            const struct S0 *l_554 = &l_547;
            const struct S0 **l_555 = &l_554;
        }
        if ((safe_div_func_uint16_t_u_u((*l_424), ((**g_118) && (safe_sub_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(l_547.f0, ((g_319 != g_339) ^ (l_400 = (((l_547.f2 || ((safe_rshift_func_int8_t_s_u(g_134, 6)) || (safe_div_func_uint8_t_u_u(((void*)0 == l_566), (-5L))))) | p_83) <= (***l_566)))))), (-9L)))))))
        {
            unsigned char l_587 = 0x14L;
            const struct S0 *l_628 = &l_547;
            short ** const l_639 = &l_621;
            int l_696 = (-2L);
            int *l_708 = &l_144;
            int *l_709 = &l_267;
            int *l_710 = (void*)0;
            int *l_711 = &l_250;
            int *l_712 = &g_64;
            int *l_713 = &g_546.f3;
            int *l_714 = &g_64;
            int *l_715 = (void*)0;
            int *l_716 = &g_392;
            int *l_717 = &g_546.f4;
            int *l_718 = &l_400;
            int *l_719 = (void*)0;
            int *l_720 = &g_64;
            int *l_721 = &g_266;
            int *l_722 = (void*)0;
            int *l_723 = &l_250;
            int *l_724 = &l_400;
            int *l_725 = &l_400;
            int *l_726 = &g_64;
            int *l_727 = &l_696;
            int *l_728 = &l_153;
            int *l_729 = &g_392;
            int *l_730 = (void*)0;
            int *l_732 = &l_153;
            int *l_733 = &l_144;
            int *l_734 = (void*)0;
            int *l_735 = &l_153;
            int *l_736 = (void*)0;
            int *l_737 = &g_64;
            int *l_738 = (void*)0;
            int *l_739 = (void*)0;
            int *l_740 = (void*)0;
            int *l_741 = (void*)0;
            int *l_742 = &g_64;
            int *l_743 = &l_731;
            int *l_744 = &l_144;
            int *l_745 = &l_153;
            int *l_746 = &l_285;
            int *l_747 = &l_153;
            int *l_748 = &l_696;
            int *l_749 = &l_144;
            int *l_750 = (void*)0;
            int *l_751 = (void*)0;
            int *l_752 = (void*)0;
            int *l_753 = &l_285;
            int *l_754 = &g_546.f3;
            int *l_755 = (void*)0;
            int *l_756 = (void*)0;
            int *l_757 = &l_153;
            (*l_424) = (&l_175 != (void*)0);
            if ((**p_84))
            {
                unsigned short l_571 = 0UL;
                short *l_575 = &g_329;
                short **l_574 = &l_575;
                short * const **l_637 = (void*)0;
                short * const **l_638 = &g_635;
                struct S0 l_657 = {0x8524L,0xB644L,7UL,-1L,0x56082626L};
                if ((*g_119))
                {
                    (*l_424) ^= (***l_566);
                }
                else
                {
                    for (g_546.f4 = 0; (g_546.f4 == (-22)); g_546.f4 = safe_sub_func_uint16_t_u_u(g_546.f4, 5))
                    {
                        const struct S0 *l_570 = (void*)0;
                        const struct S0 **l_569 = &l_570;
                        (*l_569) = &g_11;

                        ;
                    }
                    (*g_118) = func_89(g_102);

                    ;
                    if ((*g_119))
                        continue;
                }
                l_571++;
                if (((((p_83 ^ g_109) > g_290) <= g_546.f2) < (***l_566)))
                {
                    short ***l_576 = &l_574;
                    if ((((l_571 <= g_113) <= ((g_495 ^= ((p_83 | g_11.f2) != 255UL)) & (((*l_576) = l_574) == (void*)0))) || ((*l_575) &= (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((!(safe_sub_func_uint16_t_u_u((((void*)0 != &p_85) > 0L), 1L))), p_83)), (*l_424))) > 0xF843924FL), l_587)), 6)))))
                    {
                        int *l_592 = (void*)0;
                        int *l_593 = &g_392;
                        (*l_593) |= (7L >= (safe_div_func_int32_t_s_s((**p_84), ((*l_424) = (safe_lshift_func_int8_t_s_u(g_113, 4))))));
                    }
                    else
                    {
                        struct S0 **l_594 = &g_130;
                        (*p_85) = (*g_123);
                        (*l_594) = &g_546;

                        ;
                        if ((**p_85))
                            continue;
                        (*l_424) = 0xC3DBBB63L;
                    }
                    g_64 = 0xB754D1B4L;
                }
                else
                {
                    unsigned char l_618 = 255UL;
                    const struct S0 **l_629 = (void*)0;
                    const struct S0 **l_630 = &l_628;
                    for (g_100 = (-6); (g_100 == (-28)); g_100 = safe_sub_func_int32_t_s_s(g_100, 4))
                    {
                        unsigned char *l_598 = &l_587;
                        unsigned char *l_601 = &g_495;
                        int l_606 = 4L;
                        char *l_609 = &g_109;
                        struct S0 **l_613 = (void*)0;
                        (*p_81) = func_89(((safe_unary_minus_func_uint8_t_u((((*l_601) = (++(*l_598))) <= (g_610 ^= (safe_rshift_func_uint8_t_u_s((***l_566), ((*l_609) = (l_571 ^ (safe_div_func_int16_t_s_s(((l_606 = (p_83 ^ g_339)) < (g_109 != (((void*)0 == &g_319) ^ 0xF633L))), (safe_rshift_func_uint16_t_u_s((g_11.f0 & 0x59L), g_546.f1)))))))))))) != 0x28L));

                        ;
                    }
                    if (l_587)
                        continue;
                    (*l_424) &= (safe_sub_func_int8_t_s_s(g_98, ((safe_add_func_int32_t_s_s((***l_566), ((safe_lshift_func_int16_t_s_s((!(&g_11 == ((*l_630) = l_628))), g_339)) != ((&g_130 != l_629) < (safe_mod_func_uint32_t_u_u((+g_11.f4), (safe_mod_func_int8_t_s_s(((*g_124) < 4294967287UL), 0x1AL)))))))) >= (***l_566))));
                }
                if ((((*l_638) = g_635) != l_639))
                {
                    unsigned short *l_644 = &g_134;
                    unsigned short *l_649 = &l_175;
                    if (((((**l_639) = (~(safe_rshift_func_uint8_t_u_u(((l_643 = l_642) == &g_130), 0)))) != ((*l_644) = l_587)) ^ ((*l_649) = ((0UL >= (**p_85)) & (safe_add_func_int16_t_s_s(((0x8208L && (*l_424)) > (safe_add_func_uint8_t_u_u((&l_547 == &g_11), (*l_424)))), (***l_566)))))))
                    {
                        if ((**g_123))
                            break;
                        (*p_85) = func_89((***l_566));

                        ;
                    }
                    else
                    {
                        const struct S0 ***l_652 = (void*)0;
                        int *l_656 = &g_546.f3;
                        (*l_656) |= ((l_642 != (l_653 = g_650)) ^ ((*l_424) = (safe_lshift_func_uint8_t_u_s(((**p_81) >= 0x5B78EF11L), 0))));
                        l_657 = (*g_651);
                    }

                    ;
                    ;
                    return p_82;


                }
                else
                {
                    if (((void*)0 != &g_118))
                    {
                        (*l_424) |= (&g_123 == &g_123);
                    }
                    else
                    {
                        int *l_658 = &l_657.f4;
                        int *l_659 = &l_144;
                        int *l_660 = &g_64;
                        int *l_661 = &l_657.f3;
                        int *l_662 = &g_64;
                        int *l_663 = &g_64;
                        int *l_664 = &l_285;
                        int *l_665 = &l_144;
                        int *l_666 = &l_285;
                        int *l_667 = &l_250;
                        int *l_668 = &g_64;
                        int *l_669 = &l_657.f3;
                        int *l_670 = (void*)0;
                        int *l_671 = (void*)0;
                        int *l_672 = &g_266;
                        int *l_673 = &l_657.f4;
                        int *l_674 = &l_657.f4;
                        int *l_675 = &l_657.f4;
                        int *l_676 = (void*)0;
                        int *l_677 = &l_657.f3;
                        int *l_678 = &l_285;
                        int *l_679 = &l_144;
                        int *l_680 = &l_153;
                        int *l_681 = &l_400;
                        int *l_682 = &l_285;
                        int *l_683 = &l_144;
                        int *l_684 = (void*)0;
                        int *l_685 = &l_144;
                        int *l_686 = &g_546.f3;
                        int *l_687 = &g_546.f4;
                        int *l_688 = &l_267;
                        int *l_689 = &g_546.f4;
                        int *l_690 = &g_64;
                        int *l_691 = &l_400;
                        int *l_692 = (void*)0;
                        int *l_693 = &g_392;
                        int *l_694 = &l_267;
                        int *l_695 = (void*)0;
                        int *l_697 = &l_250;
                        int *l_698 = &l_696;
                        int *l_699 = &l_153;
                        int *l_700 = &l_400;
                        int *l_701 = (void*)0;
                        (*l_424) ^= 4L;
                        (*l_424) ^= (*g_119);
                        (*p_81) = (void*)0;

                        ;
                        l_702++;
                    }

                    ;
                }

                ;
            }
            else
            {
                return (*l_566);


            }

            ;
            for (g_546.f2 = 24; (g_546.f2 > 25); g_546.f2++)
            {
                int *l_707 = &l_285;
                if (l_696)
                    break;
                (*l_707) &= (*l_424);
                l_696 = (((*l_707) | p_83) ^ (p_83 > l_702));
            }
            g_758--;
        }
        else
        {
            unsigned char ***l_763 = &l_761;
            struct S0 *l_764 = (void*)0;
            struct S0 *l_765 = &g_546;
            unsigned short *l_768 = (void*)0;
            unsigned short *l_769 = (void*)0;
            unsigned short *l_770 = (void*)0;
            unsigned short *l_771 = &g_134;
            int l_782 = 0L;
            (*l_763) = l_761;
            (*l_765) = (*g_651);
            (*l_424) |= (((--(*l_771)) != p_83) & ((*g_119) == (*g_119)));
            if ((**p_81))
            {
                unsigned short *l_780 = &l_175;
                unsigned *l_781 = (void*)0;
                int l_783 = 0x3FF71A98L;
                int *l_784 = &g_266;
                unsigned char *l_793 = (void*)0;
                unsigned char *l_794 = &g_495;
                int l_847 = 0L;
                char l_909 = 1L;
                const int *l_913 = &l_853;
                (*l_784) = (l_783 = ((safe_mul_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((-1L), ((safe_sub_func_int16_t_s_s((l_780 == l_771), p_83)) & ((*l_424) = 0xC4CB7AFFL)))), 0UL)) > l_782));
                if ((g_290 & (safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((p_83 | (safe_mod_func_int16_t_s_s(((**l_620) = (***l_566)), (((*l_794) = (((void*)0 == &g_134) < (safe_div_func_int16_t_s_s(((*l_784) = l_782), p_83)))) && (p_83 ^ p_83))))), (***l_566))), 0x99L))))
                {
                    (*l_424) = ((*l_424) | ((safe_unary_minus_func_int8_t_s(g_35)) || g_349));
                }
                else
                {
                    int *l_796 = &l_285;
                    int *l_797 = &g_392;
                    int *l_798 = &l_144;
                    int *l_799 = &g_546.f3;
                    int *l_800 = &l_400;
                    int *l_801 = &l_783;
                    int *l_802 = &l_153;
                    int *l_803 = (void*)0;
                    int *l_804 = (void*)0;
                    int *l_805 = &g_392;
                    int *l_807 = &l_731;
                    int *l_808 = &g_546.f4;
                    int *l_810 = &l_267;
                    int *l_811 = &l_400;
                    int *l_812 = &g_809;
                    int *l_813 = (void*)0;
                    int *l_814 = &l_144;
                    int *l_815 = &l_144;
                    int *l_816 = &l_144;
                    int *l_817 = &l_153;
                    int *l_818 = &g_64;
                    int *l_819 = &l_153;
                    int *l_820 = (void*)0;
                    int *l_821 = &l_267;
                    int *l_822 = &l_267;
                    int *l_823 = &l_267;
                    int *l_824 = &l_783;
                    int *l_825 = &l_400;
                    int *l_826 = &g_64;
                    int *l_827 = &l_144;
                    int *l_828 = &g_546.f3;
                    int *l_829 = &g_266;
                    int *l_830 = (void*)0;
                    int l_831 = (-9L);
                    int *l_832 = &l_782;
                    int *l_833 = (void*)0;
                    int *l_834 = (void*)0;
                    int *l_835 = &l_144;
                    int *l_836 = &l_731;
                    int *l_837 = &g_266;
                    int *l_838 = &l_267;
                    int *l_839 = &l_806;
                    int *l_840 = &l_831;
                    int *l_841 = &g_546.f3;
                    int *l_842 = &l_144;
                    int *l_843 = &l_400;
                    int *l_844 = (void*)0;
                    int l_845 = 0x9189DE80L;
                    int *l_846 = &l_806;
                    int *l_848 = &g_64;
                    int *l_849 = &l_783;
                    int *l_851 = &g_392;
                    int *l_852 = (void*)0;
                    int *l_854 = &l_831;
                    int *l_855 = &l_144;
                    int *l_856 = &l_267;
                    int *l_857 = &l_847;
                    int *l_858 = &l_847;
                    int *l_859 = &l_153;
                    int *l_860 = &g_546.f3;
                    int *l_861 = (void*)0;
                    int *l_862 = &l_806;
                    int *l_863 = &l_267;
                    int *l_864 = &l_806;
                    int *l_865 = (void*)0;
                    int *l_866 = &l_144;
                    int *l_867 = &l_400;
                    int *l_868 = (void*)0;
                    int *l_869 = &l_267;
                    int *l_870 = (void*)0;
                    int *l_871 = (void*)0;
                    int *l_872 = (void*)0;
                    int *l_874 = (void*)0;
                    int *l_875 = &l_285;
                    int *l_876 = &l_831;
                    int *l_877 = (void*)0;
                    int *l_878 = &g_266;
                    int *l_879 = &l_853;
                    int *l_881 = &l_267;
                    int *l_882 = &l_144;
                    int *l_883 = &l_806;
                    int *l_884 = (void*)0;
                    int *l_886 = &l_285;
                    int *l_887 = &l_153;
                    int *l_888 = &g_266;
                    int *l_889 = &l_853;
                    int *l_890 = &l_153;
                    int *l_891 = &l_845;
                    int *l_892 = (void*)0;
                    int *l_893 = &l_285;
                    int *l_894 = &g_392;
                    int *l_895 = &g_546.f4;
                    int *l_896 = &l_782;
                    int *l_897 = &l_845;
                    g_898--;
                    if ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((p_83 <= 0xACD1L), 1L)), ((safe_add_func_int32_t_s_s(((*l_424) = (**p_84)), (**p_84))) > (g_850 > (safe_mod_func_uint32_t_u_u((((*l_780) = 0x216DL) & ((p_83 <= (g_495 || g_134)) | g_329)), l_782)))))))
                    {
                        unsigned l_910 = 0UL;
                        l_910--;
                        (*l_566) = func_86(l_913, (&g_495 != ((**l_763) = (*l_761))));
                    }
                    else
                    {
                        return p_82;


                    }
                    (*l_821) |= 2L;
                }
            }
            else
            {
                unsigned l_914 = 5UL;
                l_914--;
            }
        }

        ;
        (*l_424) ^= (safe_rshift_func_uint16_t_u_s(1UL, g_134));
        (*g_118) = func_89(g_898);

        ;
    }

    ;
    ;
    for (g_546.f1 = 0; (g_546.f1 != 20); ++g_546.f1)
    {
        struct S0 l_924 = {3L,0xA7EDL,0UL,0L,8L};
        for (l_853 = 15; (l_853 >= (-16)); --l_853)
        {
            (*p_85) = (*g_123);
        }
        if ((**p_85))
            continue;
        (*p_85) = (*g_123);
        l_924 = (l_923 = (**l_653));
    }
    return &g_119;


}







static int ** func_86(const int * p_87, short p_88)
{
    int *l_117 = &g_39;
    int **l_116 = &l_117;
    for (p_88 = 11; (p_88 != 10); --p_88)
    {
        unsigned l_105 = 18446744073709551615UL;
        int *l_106 = &g_64;
        int *l_107 = (void*)0;
        int *l_108 = (void*)0;
        int *l_110 = &g_64;
        int *l_111 = &g_64;
        int *l_112 = &g_64;
        (*l_106) |= l_105;
        --g_113;
        if ((*l_112))
            break;
    }
    return g_118;


}







static int * func_89(unsigned short p_90)
{
    int *l_92 = &g_64;
    int **l_93 = &l_92;
    int *l_94 = &g_64;
    l_92 = (void*)0;

    ;
    (*l_93) = &g_39;

    ;
    (*l_94) |= (0x87DC7FB0L != p_90);
    return &g_64;


}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_166, "g_166", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_339, "g_339", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_546.f0, "g_546.f0", print_hash_value);
    transparent_crc(g_546.f1, "g_546.f1", print_hash_value);
    transparent_crc(g_546.f2, "g_546.f2", print_hash_value);
    transparent_crc(g_546.f3, "g_546.f3", print_hash_value);
    transparent_crc(g_546.f4, "g_546.f4", print_hash_value);
    transparent_crc(g_610, "g_610", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_850, "g_850", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    transparent_crc(g_898, "g_898", print_hash_value);
    transparent_crc(g_1147, "g_1147", print_hash_value);
    transparent_crc(g_1209, "g_1209", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1244, "g_1244", print_hash_value);
    transparent_crc(g_1266, "g_1266", print_hash_value);
    transparent_crc(g_1332, "g_1332", print_hash_value);
    transparent_crc(g_1338, "g_1338", print_hash_value);
    transparent_crc(g_1344, "g_1344", print_hash_value);
    transparent_crc(g_1392, "g_1392", print_hash_value);
    transparent_crc(g_1573, "g_1573", print_hash_value);
    transparent_crc(g_1703, "g_1703", print_hash_value);
    transparent_crc(g_1709, "g_1709", print_hash_value);
    transparent_crc(g_1946, "g_1946", print_hash_value);
    transparent_crc(g_2093, "g_2093", print_hash_value);
    transparent_crc(g_2094, "g_2094", print_hash_value);
    transparent_crc(g_2105, "g_2105", print_hash_value);
    transparent_crc(g_2106, "g_2106", print_hash_value);
    transparent_crc(g_2218, "g_2218", print_hash_value);
    transparent_crc(g_2328, "g_2328", print_hash_value);
    transparent_crc(g_2332, "g_2332", print_hash_value);
    transparent_crc(g_2507, "g_2507", print_hash_value);
    transparent_crc(g_2812, "g_2812", print_hash_value);
    transparent_crc(g_2836, "g_2836", print_hash_value);
    transparent_crc(g_2877, "g_2877", print_hash_value);
    transparent_crc(g_3022, "g_3022", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
