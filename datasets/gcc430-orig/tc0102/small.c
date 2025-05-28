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



static unsigned g_14 = 0x5A1FA147L;
static char g_27 = 0x2FL;
static int g_59 = 0xC7BD553FL;
static char g_61 = 9L;
static unsigned short g_69[7] = {0UL,0x49D4L,0UL,0UL,0x49D4L,0UL,0UL};
static unsigned short g_73 = 0x6C03L;
static unsigned g_88 = 0x83285BF1L;
static unsigned g_93[9][3] = {{0x87503BCFL,0x87503BCFL,1UL},{8UL,8UL,0x6DD939A8L},{0x87503BCFL,0x87503BCFL,1UL},{8UL,8UL,0x6DD939A8L},{0x87503BCFL,0x87503BCFL,1UL},{8UL,8UL,0x6DD939A8L},{0x87503BCFL,0x87503BCFL,1UL},{8UL,8UL,0x6DD939A8L},{0x87503BCFL,0x87503BCFL,1UL}};
static unsigned g_95 = 0xB5088466L;
static int g_101 = 6L;
static int *g_108 = &g_101;
static unsigned g_117[5][5] = {{6UL,4294967289UL,0xB6DC2EE8L,4294967289UL,6UL},{4294967289UL,8UL,0x2D9D7C28L,1UL,8UL},{6UL,0x2D9D7C28L,0x6C7F956FL,1UL,0xBFA8D9A8L},{4294967289UL,1UL,6UL,0x2D9D7C28L,0x2D9D7C28L},{0xB6DC2EE8L,1UL,0xB6DC2EE8L,0xBFA8D9A8L,1UL}};
static int **g_144 = &g_108;
static int ***g_143 = &g_144;
static unsigned char g_167 = 0x6FL;
static char *g_189 = &g_61;
static char **g_188 = &g_189;
static unsigned long long g_192 = 7UL;
static int g_219[6] = {0L,0x9636FA01L,0x9636FA01L,0L,0x9636FA01L,0x9636FA01L};
static int g_252[4][9] = {{0xCF8D8C50L,(-5L),0xCF8D8C50L,(-5L),0xCF8D8C50L,(-5L),0xCF8D8C50L,(-5L),0xCF8D8C50L},{0x045916E1L,0x045916E1L,0xAC34F897L,0xAC34F897L,0x045916E1L,0x045916E1L,0xAC34F897L,0xAC34F897L,0x045916E1L},{1L,(-5L),1L,(-5L),1L,(-5L),1L,(-5L),1L},{0x045916E1L,0xAC34F897L,0xAC34F897L,0x045916E1L,0x045916E1L,0xAC34F897L,0xAC34F897L,0x045916E1L,0x045916E1L}};
static short g_256 = (-1L);
static char g_260 = (-3L);
static char g_265 = 0x63L;
static unsigned char g_323 = 254UL;
static unsigned g_329[7] = {0x39DABB63L,1UL,1UL,0x39DABB63L,1UL,1UL,0x39DABB63L};
static unsigned short *g_371 = &g_69[1];
static unsigned short **g_370 = &g_371;
static unsigned *g_410 = &g_329[5];
static short g_422 = (-1L);
static int g_437 = (-1L);
static unsigned long long *g_463 = &g_192;
static unsigned long long **g_462 = &g_463;
static long long g_485 = 0xF7BC8F13D05738AFLL;
static int g_497 = 0x8208C4B3L;
static unsigned char *g_512 = &g_167;
static unsigned char **g_511 = &g_512;
static short g_564 = 0xD455L;
static unsigned char g_633 = 254UL;
static unsigned long long g_635 = 0x8E601810E0C888CBLL;
static unsigned short g_711 = 0x7162L;
static short *g_753 = &g_422;
static short **g_752 = &g_753;
static int ***g_800 = &g_144;
static int **g_804 = (void*)0;
static unsigned g_828 = 1UL;
static int g_839 = 1L;



static int func_1(void);
static int func_2(unsigned p_3, int p_4, char p_5, int p_6);
static short func_12(unsigned p_13);
static int * func_22(unsigned p_23, int * p_24, int p_25);
static short func_30(int * p_31, int ** p_32);
static int func_36(unsigned p_37, unsigned char p_38, int ** p_39, unsigned p_40, unsigned char p_41);
static int ** func_43(int * p_44, unsigned short p_45, unsigned short p_46);
static int * func_47(unsigned long long p_48, int p_49);
static short func_51(char * p_52, unsigned long long p_53);
static char * func_54(int * p_55);
static int func_1(void)
{
    int l_9 = 0x5E00FE1CL;
    char l_727 = 0xC9L;
    int *l_738[5][5][8] = {{{&g_497,&g_219[1],&g_497,&g_101,&g_101,&g_497,&g_219[1],&g_497},{&g_219[0],&g_101,&g_59,&g_101,&g_219[0],&g_219[0],&g_101,&g_59},{&g_219[0],&g_219[0],&g_101,&g_59,&g_101,&g_219[0],&g_219[0],&g_101},{&g_497,&g_101,&g_101,&g_497,&g_219[1],&g_497,&g_101,&g_101},{&g_101,&g_101,&g_219[0],&g_219[0],&g_101,&g_59,&g_101,&g_219[0]}},{{&g_219[1],&g_101,&g_219[1],&g_59,&g_59,&g_219[1],&g_101,&g_219[1]},{&g_497,&g_59,&g_219[0],&g_59,&g_497,&g_497,&g_59,&g_219[0]},{&g_497,&g_497,&g_59,&g_219[0],&g_59,&g_497,&g_497,&g_59},{&g_219[1],&g_59,&g_59,&g_219[1],&g_101,&g_219[1],&g_59,&g_59},{&g_59,&g_101,&g_219[0],&g_219[0],&g_101,&g_59,&g_101,&g_219[0]}},{{&g_219[1],&g_101,&g_219[1],&g_59,&g_59,&g_219[1],&g_101,&g_219[1]},{&g_497,&g_59,&g_219[0],&g_59,&g_497,&g_497,&g_59,&g_219[0]},{&g_497,&g_497,&g_59,&g_219[0],&g_59,&g_497,&g_497,&g_59},{&g_219[1],&g_59,&g_59,&g_219[1],&g_101,&g_219[1],&g_59,&g_59},{&g_59,&g_101,&g_219[0],&g_219[0],&g_101,&g_59,&g_101,&g_219[0]}},{{&g_219[1],&g_101,&g_219[1],&g_59,&g_59,&g_219[1],&g_101,&g_219[1]},{&g_497,&g_497,&g_219[1],&g_497,&g_101,&g_101,&g_497,&g_219[1]},{&g_101,&g_101,&g_497,&g_219[1],&g_497,&g_101,&g_101,&g_497},{&g_59,&g_497,&g_497,&g_59,&g_219[0],&g_59,&g_497,&g_497},{&g_497,&g_219[0],&g_219[1],&g_219[1],&g_219[0],&g_497,&g_219[0],&g_219[1]}},{{&g_59,&g_219[0],&g_59,&g_497,&g_497,&g_59,&g_219[0],&g_59},{&g_101,&g_497,&g_219[1],&g_497,&g_101,&g_101,&g_497,&g_219[1]},{&g_101,&g_101,&g_497,&g_219[1],&g_497,&g_101,&g_101,&g_497},{&g_59,&g_497,&g_497,&g_59,&g_219[0],&g_59,&g_497,&g_497},{&g_497,&g_219[0],&g_219[1],&g_219[1],&g_219[0],&g_497,&g_219[0],&g_219[1]}}};
    short **l_762 = &g_753;
    int ***l_798 = &g_144;
    unsigned *l_815 = &g_14;
    unsigned **l_814[1][9][8] = {{{&l_815,&l_815,(void*)0,&l_815,&l_815,&l_815,&l_815,&l_815},{(void*)0,&l_815,&l_815,(void*)0,(void*)0,(void*)0,&l_815,&l_815},{(void*)0,(void*)0,&l_815,&l_815,&l_815,&l_815,&l_815,&l_815},{&l_815,&l_815,(void*)0,&l_815,(void*)0,&l_815,&l_815,(void*)0},{&l_815,(void*)0,(void*)0,&l_815,&l_815,(void*)0,&l_815,&l_815},{&l_815,&l_815,&l_815,&l_815,&l_815,&l_815,&l_815,&l_815},{&l_815,&l_815,&l_815,&l_815,(void*)0,&l_815,&l_815,&l_815},{&l_815,&l_815,&l_815,(void*)0,&l_815,&l_815,(void*)0,&l_815},{&l_815,&l_815,&l_815,&l_815,&l_815,&l_815,&l_815,&l_815}}};
    unsigned char l_820 = 8UL;
    int *l_852 = &g_497;
    int i, j, k;
    g_219[3] = func_2((safe_sub_func_int8_t_s_s((l_9 || ((safe_rshift_func_int16_t_s_u(func_12(g_14), (safe_sub_func_uint16_t_u_u((&g_371 == &g_371), l_9)))) > (+g_422))), l_9)), l_9, l_727, g_711);
    for (g_256 = (-15); (g_256 >= (-21)); g_256 = safe_sub_func_uint16_t_u_u(g_256, 7))
    {
        unsigned short l_741 = 1UL;
        int l_742 = 0xF976CA26L;
        unsigned short **l_755[7][9] = {{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371},{&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371}};
        int *l_775 = &g_101;
        int ***l_797 = (void*)0;
        char *l_822 = &g_61;
        int i, j;
    }
    return g_192;
}







static int func_2(unsigned p_3, int p_4, char p_5, int p_6)
{
    long long l_728[5] = {0x05A0119E7CAFCF37LL,0x05A0119E7CAFCF37LL,0x05A0119E7CAFCF37LL,0x05A0119E7CAFCF37LL,0x05A0119E7CAFCF37LL};
    int **l_729 = &g_108;
    int *l_730 = &g_101;
    char *l_737 = &g_27;
    int i;
    (*l_730) = func_36(p_3, l_728[0], l_729, (**l_729), p_4);
    (*l_730) = (safe_add_func_int8_t_s_s(p_4, ((*l_737) = (safe_sub_func_int32_t_s_s((*l_730), (((*g_371) = (~(((*l_730) & p_6) & ((safe_mod_func_int8_t_s_s((*l_730), (*l_730))) > ((void*)0 != &p_4))))) && (((*g_189) = (*l_730)) >= p_3)))))));
    return p_4;
}







static short func_12(unsigned p_13)
{
    char l_631 = 1L;
    int *l_723 = &g_59;
    unsigned long long l_724 = 18446744073709551614UL;
    for (g_14 = 8; (g_14 != 48); g_14 = safe_add_func_uint16_t_u_u(g_14, 9))
    {
        int *l_636 = (void*)0;
        for (p_13 = 0; (p_13 >= 34); p_13 = safe_add_func_int64_t_s_s(p_13, 6))
        {
            int *l_20 = (void*)0;
            int **l_19 = &l_20;
            int l_21[5][5][8] = {{{0x1F1717C2L,0xA2967684L,0xF2B78262L,0xDBD0176DL,(-1L),0L,0x0424B969L,0xC4CE10B4L},{0L,0xC4CE10B4L,0xC005D9C7L,(-4L),0x3F4B1415L,1L,2L,9L},{0x0424B969L,0xCD953295L,1L,(-1L),0x9BA5E0B2L,0xDE9AB5C2L,0xA2967684L,0L},{0x478C9DFFL,(-1L),0x42C512DCL,0L,(-9L),(-1L),0x6E3F0E26L,0xDBD0176DL},{4L,0xF1BB1300L,0xCD953295L,(-5L),0x6E3F0E26L,1L,(-1L),0xEA381E16L}},{{0x0424B969L,(-1L),0x41791E6EL,0xF1BB1300L,2L,2L,0xF1BB1300L,0x41791E6EL},{0L,0L,0L,0x1F1717C2L,(-1L),0L,(-1L),(-1L)},{1L,0x80643B8AL,0xD0F065F4L,(-10L),0xA5C25CCEL,0x9BA5E0B2L,4L,(-1L)},{0x80643B8AL,9L,4L,0x1F1717C2L,0x1A0E1C2AL,(-1L),1L,0x41791E6EL},{0L,0xEA381E16L,0L,0x80643B8AL,0L,0x4EB300A9L,0xEA381E16L,0xC4CE10B4L}},{{(-4L),(-1L),(-5L),(-1L),0xDB81FDF2L,0x9BA5E0B2L,0xC005D9C7L,(-1L)},{0L,0x6A0B5978L,0x41791E6EL,0xDB81FDF2L,(-4L),1L,0xD93CBFB4L,(-10L)},{0xF1BB1300L,0xDB81FDF2L,0x4EB300A9L,0x6E3F0E26L,0x0424B969L,6L,0xEA381E16L,0xD93CBFB4L},{1L,0L,4L,0xC005D9C7L,0xD93CBFB4L,4L,(-1L),0x0424B969L},{1L,2L,4L,(-1L),(-10L),0xC005D9C7L,0x0424B969L,(-4L)}},{{0x3F4B1415L,0xEA381E16L,8L,(-1L),(-1L),0x0D2F38D9L,0x6E3F0E26L,0xDB81FDF2L},{0L,0x67AB6CE1L,2L,(-7L),0xC4CE10B4L,4L,(-5L),0L},{0xDB81FDF2L,(-1L),2L,0xEA381E16L,2L,(-1L),0xDB81FDF2L,0x6A0B5978L},{0xDBD0176DL,0xDB81FDF2L,7L,0x3F4B1415L,1L,1L,0xF1BB1300L,0L},{4L,0xD8D34108L,0xC005D9C7L,9L,1L,0x9BA5E0B2L,4L,0xEA381E16L}},{{0xDBD0176DL,0xDE9AB5C2L,0x95506909L,0L,2L,(-5L),(-1L),0x94BF7D69L},{0xDB81FDF2L,0xC4CE10B4L,0L,0x41791E6EL,0xC005D9C7L,0xA5C25CCEL,4L,0x6A0B5978L},{0xB6AC8918L,0x1A0E1C2AL,0L,(-9L),(-1L),0L,0xA7AD11E7L,0x95506909L},{0L,0L,0xE6D39C7CL,0xDE9AB5C2L,8L,(-1L),(-5L),0L},{(-5L),(-7L),0xA2967684L,0x41791E6EL,1L,1L,0x9BA5E0B2L,(-10L)}}};
            char *l_26 = &g_27;
            int *l_34 = &l_21[3][0][1];
            int **l_33 = &l_34;
            unsigned char *l_632 = &g_633;
            unsigned long long *l_634 = &g_635;
            int i, j, k;
            (*l_19) = (void*)0;
            if (l_21[2][4][3])
                continue;
        }
    }
    (*l_723) = func_51(func_54(l_723), l_724);
    (*g_144) = l_723;
    (*g_144) = l_723;
    return g_265;
}







static int * func_22(unsigned p_23, int * p_24, int p_25)
{
    short *l_645[4] = {&g_256,&g_256,&g_256,&g_256};
    short **l_644 = &l_645[3];
    short ***l_643 = &l_644;
    int l_663[4][6][2] = {{{6L,0xF5A59E84L},{0xC461C1F8L,6L},{0xF5A59E84L,(-1L)},{0L,0L},{0xC461C1F8L,0L},{0L,(-1L)}},{{0xF5A59E84L,6L},{0xC461C1F8L,0xF5A59E84L},{6L,(-1L)},{6L,0xF5A59E84L},{0xC461C1F8L,6L},{0xF5A59E84L,(-1L)}},{{0L,0L},{0xC461C1F8L,0L},{0L,(-1L)},{0xF5A59E84L,6L},{0xC461C1F8L,0xF5A59E84L},{6L,(-1L)}},{{6L,0xF5A59E84L},{0xC461C1F8L,6L},{0xF5A59E84L,(-1L)},{0L,0L},{0xC461C1F8L,0L},{0L,(-1L)}}};
    char *l_689 = &g_27;
    int *l_691 = &g_59;
    int i, j, k;
    for (g_192 = 0; (g_192 > 24); ++g_192)
    {
        short ***l_646 = &l_644;
        int l_653 = (-1L);
        unsigned long long l_654[6][4] = {{0x3CD8E67A1D8F2943LL,0xF0452EC9B67EA3C2LL,0xF0452EC9B67EA3C2LL,0x3CD8E67A1D8F2943LL},{0xF0452EC9B67EA3C2LL,0x3CD8E67A1D8F2943LL,18446744073709551615UL,18446744073709551607UL},{0xF0452EC9B67EA3C2LL,18446744073709551615UL,0xF0452EC9B67EA3C2LL,18446744073709551615UL},{0x3CD8E67A1D8F2943LL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL},{0xE0A92BD63FE70026LL,0xE0A92BD63FE70026LL,18446744073709551615UL,0xF0452EC9B67EA3C2LL},{0xF0452EC9B67EA3C2LL,18446744073709551612UL,18446744073709551615UL,18446744073709551612UL}};
        unsigned l_668[10] = {4294967295UL,4294967295UL,4294967289UL,4294967295UL,4294967295UL,4294967289UL,4294967295UL,4294967295UL,4294967289UL,4294967295UL};
        long long **l_707 = (void*)0;
        long long ***l_706 = &l_707;
        unsigned short **l_716[10] = {&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371,&g_371};
        int **l_720 = (void*)0;
        int **l_721 = &l_691;
        int l_722[8] = {1L,(-3L),1L,1L,(-3L),1L,1L,(-3L)};
        int i, j;
    }
    (*l_691) = (*l_691);
    (*l_691) = (*l_691);
    return p_24;
}







static short func_30(int * p_31, int ** p_32)
{
    long long l_35 = 0xA9B8364B2CBD72F5LL;
    int l_70 = 0xE2D206F8L;
    int *l_496 = &g_497;
    int **l_495 = &l_496;
    unsigned short **l_614 = &g_371;
    (**p_32) = (-1L);
    if ((4294967295UL > l_35))
    {
        unsigned l_42 = 0x5ED53545L;
        unsigned l_50 = 4294967288UL;
        int *l_56 = (void*)0;
        char *l_64 = (void*)0;
        char **l_65 = &l_64;
        unsigned short *l_66 = (void*)0;
        unsigned short *l_67 = (void*)0;
        unsigned short *l_68 = &g_69[1];
        short *l_278 = &g_256;
        unsigned char *l_279[5][3] = {{&g_167,&g_167,&g_167},{&g_167,(void*)0,(void*)0},{&g_167,&g_167,&g_167},{&g_167,(void*)0,(void*)0},{&g_167,&g_167,&g_167}};
        int l_280 = (-1L);
        int *l_281 = &g_252[1][3];
        int i, j;
        (**l_495) = func_36(l_42, (((p_32 = func_43(func_47(l_35, ((*l_281) = ((l_280 = (l_50 < ((((*l_278) = func_51(func_54(l_56), (~((l_70 = ((safe_mul_func_uint16_t_u_u(l_35, (&g_61 != ((*l_65) = l_64)))) ^ ((*l_68) = g_14))) != l_35)))) & g_14) >= l_42))) || l_70))), l_35, l_35)) != l_495) && (**l_495)), (*g_143), (*l_496), (**l_495));
    }
    else
    {
        (*g_144) = (void*)0;
        g_370 = l_614;
    }
    for (g_564 = 9; (g_564 <= 4); --g_564)
    {
        short *l_619 = &g_564;
        short **l_618 = &l_619;
        short ***l_617 = &l_618;
        int l_620[2][2][10] = {{{8L,1L,1L,8L,0x0EED169CL,8L,1L,1L,8L,0x0EED169CL},{8L,1L,1L,8L,0x0EED169CL,8L,1L,1L,8L,0x0EED169CL}},{{8L,1L,1L,8L,0x0EED169CL,8L,1L,1L,8L,0x0EED169CL},{8L,1L,1L,8L,0x0EED169CL,8L,1L,1L,8L,0x0EED169CL}}};
        int i, j, k;
        (*l_495) = (*l_495);
        (**l_495) = (((*l_496) || g_256) <= ((void*)0 == l_617));
        if (l_620[0][1][3])
            continue;
        for (g_95 = 28; (g_95 <= 4); g_95 = safe_sub_func_int8_t_s_s(g_95, 1))
        {
            unsigned long long l_623 = 0UL;
            return l_623;
        }
    }
    return (**l_495);
}







static int func_36(unsigned p_37, unsigned char p_38, int ** p_39, unsigned p_40, unsigned char p_41)
{
    char l_498 = 0x30L;
    int l_524 = (-7L);
    short *l_537 = &g_422;
    int l_549[7][5] = {{3L,0x021A53D7L,(-1L),0x021A53D7L,3L},{0xFE5F3751L,0x8A4BB95EL,0x8A4BB95EL,0xFE5F3751L,0L},{0xA2BCB8E8L,0x021A53D7L,0xA2BCB8E8L,0xF18256B6L,0xA2BCB8E8L},{0xFE5F3751L,0xFE5F3751L,(-8L),0x8A4BB95EL,0L},{3L,0xF18256B6L,(-1L),0xF18256B6L,3L},{0L,0x8A4BB95EL,(-8L),0xFE5F3751L,0xFE5F3751L},{0xA2BCB8E8L,0xF18256B6L,0xA2BCB8E8L,0x021A53D7L,0xA2BCB8E8L}};
    long long *l_597 = &g_485;
    unsigned l_602 = 0xF09DA224L;
    int *l_612 = &l_524;
    int **l_611 = &l_612;
    unsigned short l_613 = 5UL;
    int i, j;
    if (l_498)
    {
        unsigned char l_514 = 0xABL;
        int *l_529 = (void*)0;
        short *l_536 = &g_422;
        int l_555 = (-1L);
        long long l_578 = 0x46A1226D7F67F8F1LL;
        unsigned long long **l_585 = &g_463;
        for (p_41 = 20; (p_41 != 30); p_41 = safe_add_func_uint16_t_u_u(p_41, 7))
        {
            unsigned l_513 = 0x1882AAEEL;
            unsigned long long ***l_518 = (void*)0;
            unsigned long long *l_519 = &g_192;
            char *l_520 = (void*)0;
            int *l_538 = &g_219[2];
            unsigned char l_553 = 255UL;
            int l_579 = 0xAE305990L;
            unsigned long long ***l_586 = &l_585;
            if ((!l_498))
            {
                long long *l_506 = &g_485;
                long long **l_505 = &l_506;
                int *l_507 = &g_101;
                char *l_515 = &g_265;
                for (l_498 = 0; (l_498 <= 5); l_498 += 1)
                {
                    int i;
                    if (g_219[l_498])
                    {
                        long long l_501 = (-1L);
                        long long *l_503 = (void*)0;
                        long long **l_502 = &l_503;
                        long long ***l_504 = (void*)0;
                        int i;
                        g_219[l_498] = l_501;
                        if (g_219[l_498])
                            break;
                        (*p_39) = (void*)0;
                        l_505 = l_502;
                    }
                    else
                    {
                        unsigned char *l_509 = &g_167;
                        unsigned char **l_508 = &l_509;
                        unsigned char ***l_510 = &l_508;
                        (*p_39) = l_507;
                        if ((**g_144))
                            continue;
                        g_511 = ((*l_510) = l_508);
                    }
                }
                (*l_507) = (l_513 == (l_514 >= p_38));
            }
            else
            {
                unsigned short l_523 = 0x807AL;
                int *l_535[9][5] = {{&g_219[0],&g_219[0],&g_219[0],&g_219[0],&g_59},{&g_219[3],&g_219[0],&g_219[0],&g_219[3],(void*)0},{&g_219[0],&g_219[0],&g_219[0],&g_219[0],&g_59},{&g_219[3],&g_219[0],&g_219[0],&g_219[3],(void*)0},{&g_219[0],&g_219[0],&g_219[0],&g_219[0],&g_59},{&g_219[3],&g_219[0],&g_219[0],&g_219[3],(void*)0},{&g_219[0],&g_219[0],&g_219[0],&g_219[0],&g_59},{&g_219[3],&g_219[0],&g_219[0],&g_219[3],(void*)0},{&g_219[0],&g_219[0],&g_219[0],&g_219[0],&g_59}};
                int i, j;
                if ((((l_518 == &g_462) > ((*g_462) != (l_519 = (*g_462)))) & (g_219[0] && (safe_sub_func_uint64_t_u_u(((**g_462) = (*g_463)), (l_524 = l_523))))))
                {
                    int *l_525 = &g_219[0];
                    (*p_39) = (void*)0;
                    (*l_525) = 4L;
                }
                else
                {
                    long long l_532 = 0xB3BC9B28AA653F8BLL;
                    for (g_323 = 3; (g_323 > 28); ++g_323)
                    {
                        unsigned l_528 = 0xE58B13FAL;
                        return l_528;
                    }
                    l_529 = ((*p_39) = l_529);
                    if ((safe_rshift_func_uint8_t_u_u(l_513, (p_38 & (&g_462 != (void*)0)))))
                    {
                        (*g_144) = (**g_143);
                        l_524 = l_513;
                    }
                    else
                    {
                        unsigned long long l_533 = 0x667429A30303A4C1LL;
                        l_533 = l_532;
                    }
                }
                for (l_513 = 0; (l_513 <= 6); l_513 += 1)
                {
                    for (p_40 = 0; (p_40 <= 6); p_40 += 1)
                    {
                        int *l_534 = &g_101;
                        l_535[5][4] = (l_534 = ((*g_144) = l_534));
                    }
                    for (g_265 = 0; g_265 < 5; g_265 += 1)
                    {
                        for (g_73 = 0; g_73 < 5; g_73 += 1)
                        {
                            g_117[g_265][g_73] = 0x0917245BL;
                        }
                    }
                }
            }
            if ((((l_537 = l_536) == l_536) >= l_513))
            {
                (**g_143) = l_538;
                for (g_61 = 10; (g_61 < (-4)); g_61--)
                {
                    char l_541 = 0xB8L;
                    (**g_143) = (*g_144);
                    (**p_39) = ((l_524 = (l_541 || (safe_rshift_func_uint16_t_u_s(p_37, 2)))) > l_541);
                }
            }
            else
            {
                char l_552[5][10] = {{4L,(-3L),(-3L),4L,0x8FL,0xE9L,1L,1L,0x85L,1L},{(-3L),1L,0x83L,1L,0x83L,1L,(-3L),1L,1L,4L},{1L,(-3L),1L,0x85L,2L,2L,0x85L,1L,(-3L),1L},{0x50L,(-3L),1L,0x06L,0x83L,4L,2L,4L,0x83L,0x06L},{0x06L,0x10L,0x06L,(-3L),0x83L,0xE9L,1L,0x8FL,0x8FL,1L}};
                int *l_554 = &g_497;
                int l_556 = 0xF644EB2CL;
                short l_561 = (-6L);
                int i, j;
                (*p_39) = l_538;
                for (g_61 = 0; (g_61 <= 13); ++g_61)
                {
                }
                l_556 = (l_555 = ((*l_554) = ((*l_538) = (**p_39))));
                for (l_514 = 0; (l_514 <= 6); l_514 += 1)
                {
                    int i;
                }
            }
            for (g_61 = 0; (g_61 >= (-15)); g_61--)
            {
                int l_582 = 0L;
                (*g_144) = (*p_39);
                (**g_144) = (!l_582);
                for (l_498 = 2; (l_498 >= 0); l_498 -= 1)
                {
                    for (l_524 = 0; (l_524 <= 2); l_524 += 1)
                    {
                        int i, j;
                        (*p_39) = (*p_39);
                        (**g_144) = (+(safe_mod_func_uint32_t_u_u(4294967286UL, g_93[(l_524 + 1)][l_498])));
                    }
                }
            }
            l_529 = func_47(p_37, (2UL >= (((*l_586) = l_585) != (void*)0)));
        }
        (*g_144) = &l_555;
    }
    else
    {
        unsigned short l_589[2][2] = {{65535UL,65535UL},{65535UL,65535UL}};
        int l_591 = 6L;
        long long *l_595[7][2] = {{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485},{&g_485,&g_485}};
        unsigned short l_599 = 65535UL;
        int i, j;
        for (p_40 = (-20); (p_40 > 42); p_40++)
        {
            int *l_590[2][9][2] = {{{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]}},{{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]},{(void*)0,&g_219[0]}}};
            long long **l_596 = &l_595[4][0];
            unsigned short l_598 = 0xEE5FL;
            int i, j, k;
            l_591 = l_589[0][0];
            for (g_260 = 18; (g_260 == (-13)); g_260 = safe_sub_func_uint64_t_u_u(g_260, 1))
            {
                int *l_594[7] = {(void*)0,(void*)0,&l_591,(void*)0,(void*)0,&l_591,(void*)0};
                int i;
                (*g_144) = l_594[0];
                (*p_39) = (*p_39);
                for (g_61 = 0; (g_61 <= 1); g_61 += 1)
                {
                    return l_549[1][3];
                }
            }
            l_599 = (((void*)0 == &g_371) | ((((((*l_596) = l_595[4][0]) == l_597) && g_437) ^ (g_219[0] = l_598)) || p_40));
        }
    }
    (*p_39) = &l_524;
    (**p_39) = (l_602 & ((*g_189) >= ((((*l_597) = (((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((g_252[1][3] ^ (-2L)), ((g_564 = (l_549[1][4] < ((void*)0 == &l_549[6][0]))) <= (((*g_371) = (safe_sub_func_int16_t_s_s(p_38, (safe_rshift_func_int8_t_s_u((*g_189), 0))))) || p_41)))), p_41)) | p_38) || 0x26L)) < l_524) ^ 0x00L)));
    (*l_611) = ((*p_39) = (*p_39));
    return l_613;
}







static int ** func_43(int * p_44, unsigned short p_45, unsigned short p_46)
{
    unsigned long long *l_331[10] = {&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192,&g_192};
    int l_332 = 0x96E08463L;
    int l_333 = 0x672026A9L;
    int l_334 = 5L;
    int l_335 = 0xB0E08A20L;
    char *l_343 = &g_260;
    int *l_380[5][5][1] = {{{&l_334},{(void*)0},{&l_334},{&l_335},{&l_334}},{{(void*)0},{&l_334},{&l_335},{&l_334},{(void*)0}},{{&l_334},{&l_335},{&l_334},{(void*)0},{&l_334}},{{&l_335},{&l_334},{(void*)0},{&l_334},{&l_335}},{{&l_334},{(void*)0},{&l_334},{&l_335},{&l_334}}};
    int *l_401 = &g_219[0];
    unsigned l_434[3];
    unsigned long long l_492[9][5][3] = {{{0x37A474A702519E11LL,1UL,0x9E11150FF37BDC37LL},{0UL,18446744073709551615UL,0x6B6C9741DC32873DLL},{0x78C1EB0AC2111B99LL,1UL,0x8D841130AB181131LL},{1UL,0UL,0x6B6C9741DC32873DLL},{0x37A474A702519E11LL,3UL,0x9E11150FF37BDC37LL}},{{1UL,18446744073709551615UL,0x5E1205CD75A4EE61LL},{0x78C1EB0AC2111B99LL,3UL,0x8D841130AB181131LL},{0UL,0UL,0x5E1205CD75A4EE61LL},{0x37A474A702519E11LL,1UL,0x9E11150FF37BDC37LL},{0UL,18446744073709551615UL,0x6B6C9741DC32873DLL}},{{0x78C1EB0AC2111B99LL,1UL,0x8D841130AB181131LL},{1UL,0UL,0x6B6C9741DC32873DLL},{0x37A474A702519E11LL,3UL,0x9E11150FF37BDC37LL},{1UL,18446744073709551615UL,0x5E1205CD75A4EE61LL},{0x78C1EB0AC2111B99LL,3UL,0x8D841130AB181131LL}},{{0UL,0UL,0x5E1205CD75A4EE61LL},{0x37A474A702519E11LL,1UL,0x9E11150FF37BDC37LL},{0UL,18446744073709551615UL,0x6B6C9741DC32873DLL},{0x78C1EB0AC2111B99LL,1UL,0x8D841130AB181131LL},{1UL,0UL,0x6B6C9741DC32873DLL}},{{0x37A474A702519E11LL,3UL,0x9E11150FF37BDC37LL},{1UL,18446744073709551615UL,0x5E1205CD75A4EE61LL},{0x78C1EB0AC2111B99LL,3UL,0x8D841130AB181131LL},{0UL,0UL,0x5E1205CD75A4EE61LL},{0x37A474A702519E11LL,1UL,0x9E11150FF37BDC37LL}},{{0UL,18446744073709551615UL,0x6B6C9741DC32873DLL},{0x78C1EB0AC2111B99LL,1UL,0x8D841130AB181131LL},{1UL,0UL,0x6B6C9741DC32873DLL},{0x37A474A702519E11LL,3UL,0x9E11150FF37BDC37LL},{1UL,18446744073709551615UL,0x5E1205CD75A4EE61LL}},{{0x78C1EB0AC2111B99LL,3UL,0x8D841130AB181131LL},{0UL,0UL,0x5E1205CD75A4EE61LL},{0x37A474A702519E11LL,1UL,0x9E11150FF37BDC37LL},{0UL,18446744073709551615UL,0x6B6C9741DC32873DLL},{0x78C1EB0AC2111B99LL,1UL,0x8D841130AB181131LL}},{{1UL,0UL,0x6B6C9741DC32873DLL},{0x37A474A702519E11LL,3UL,0x9E11150FF37BDC37LL},{1UL,18446744073709551615UL,0x5E1205CD75A4EE61LL},{0x78C1EB0AC2111B99LL,3UL,0x8D841130AB181131LL},{0UL,0UL,0x5E1205CD75A4EE61LL}},{{0x37A474A702519E11LL,1UL,0x9E11150FF37BDC37LL},{0UL,18446744073709551615UL,0x6B6C9741DC32873DLL},{0x78C1EB0AC2111B99LL,1UL,0x8D841130AB181131LL},{1UL,0UL,0x6B6C9741DC32873DLL},{0x37A474A702519E11LL,3UL,0x9E11150FF37BDC37LL}}};
    int **l_494 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_434[i] = 0UL;
    if ((l_335 = ((l_334 = (l_333 = (l_332 = (g_192 = p_45)))) >= l_335)))
    {
        int *l_338 = &g_219[0];
        unsigned short *l_346 = &g_73;
        unsigned short *l_353 = &g_69[1];
        (*l_338) = (g_329[2] & (safe_mul_func_uint16_t_u_u(p_46, 6UL)));
        if (((((*l_346) = ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(0xFE0DA037L, (l_332 < p_46))), 1)) | p_46)) <= g_265) || 0x7A5ABE0D1BAC34EDLL))
        {
            short l_347 = (-1L);
            l_347 = l_332;
        }
        else
        {
            unsigned l_354 = 4UL;
            int *l_361 = &l_334;
            if (l_334)
            {
                return (*g_143);
            }
            else
            {
                unsigned l_350[6][6];
                int *l_360 = &g_219[2];
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_350[i][j] = 0x3FEF23D1L;
                }
lbl_357:
                for (p_45 = 0; (p_45 <= 4); p_45 += 1)
                {
                    (**g_143) = p_44;
                    for (l_332 = 4; (l_332 >= 1); l_332 -= 1)
                    {
                        short *l_355 = &g_256;
                        int *l_356 = &g_252[1][3];
                        int i, j;
                        (**g_143) = func_47(((g_329[(l_332 + 2)] > ((g_117[p_45][p_45] >= p_46) > (safe_lshift_func_int16_t_s_s(l_350[3][5], 14)))) > (((*l_338) || ((*l_355) = (safe_rshift_func_uint16_t_u_s((((g_69[1] || ((*l_353) = (((l_353 == &g_69[2]) && p_46) >= g_101))) && l_354) == g_73), 13)))) ^ g_323)), g_252[1][8]);
                        (**g_143) = func_47(g_73, ((*l_356) = (!0x0E269AAFL)));
                        if (l_334)
                            break;
                        (*g_144) = (**g_143);
                    }
                    if (g_88)
                        goto lbl_357;
                }
                for (p_45 = 0; (p_45 <= 50); p_45 = safe_add_func_int32_t_s_s(p_45, 9))
                {
                    l_360 = ((**g_143) = &g_101);
                    for (g_95 = 1; (g_95 <= 9); g_95 += 1)
                    {
                        int *l_362[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_362[i] = &g_59;
                        l_361 = p_44;
                        (**g_143) = l_362[1];
                    }
                }
            }
            for (g_167 = (-27); (g_167 != 58); ++g_167)
            {
                int **l_378 = &l_361;
                int l_385 = (-7L);
                if (p_45)
                {
                    (*g_144) = (void*)0;
                    for (g_95 = 0; (g_95 > 25); g_95 = safe_add_func_uint16_t_u_u(g_95, 1))
                    {
                        unsigned short l_369 = 0x2698L;
                        unsigned short ***l_372 = &g_370;
                        (*l_338) = (safe_rshift_func_int16_t_s_s(((g_167 < l_369) && ((*l_353) = 0UL)), 1));
                        (*g_144) = (*g_144);
                        (*l_372) = g_370;
                    }
                }
                else
                {
                    int *l_375 = &g_219[0];
                    for (l_333 = 0; (l_333 == 23); l_333++)
                    {
                        (**g_143) = p_44;
                        (*g_144) = l_375;
                    }
                }
                for (g_61 = 0; (g_61 <= 4); g_61 += 1)
                {
                    unsigned short *l_376 = &g_69[1];
                    int **l_377[3][4] = {{(void*)0,(void*)0,&l_338,(void*)0},{(void*)0,&l_338,&l_338,(void*)0},{&l_338,(void*)0,&l_338,&l_338}};
                    unsigned short ***l_379 = (void*)0;
                    char **l_383 = &l_343;
                    char ***l_384 = &g_188;
                    int i, j;
                }
                (*l_378) = ((*g_144) = p_44);
            }
        }
        for (p_45 = 1; (p_45 <= 5); p_45 += 1)
        {
            int i;
            g_59 = ((safe_rshift_func_int16_t_s_s(((*l_338) = g_252[2][2]), p_46)) >= g_252[1][3]);
            (**g_143) = func_47(g_192, (((*l_343) = (safe_rshift_func_int8_t_s_s((*g_189), (g_219[p_45] >= p_46)))) < (2L | (safe_mod_func_uint32_t_u_u(g_329[0], 2UL)))));
            for (l_335 = 0; (l_335 <= 6); l_335 += 1)
            {
                (**g_143) = (*g_144);
            }
        }
        return (*g_143);
    }
    else
    {
        char *l_394[5][6] = {{&g_260,&g_260,(void*)0,&g_260,&g_260,(void*)0},{&g_260,&g_260,(void*)0,&g_260,&g_265,&g_260},{&g_265,&g_265,&g_260,&g_265,&g_265,&g_260},{&g_265,&g_265,&g_260,&g_265,&g_265,&g_260},{&g_265,&g_265,&g_260,&g_265,&g_265,&g_260}};
        int l_395 = 0xFA61CDEDL;
        int l_421 = 0L;
        unsigned long long **l_423 = &l_331[8];
        short *l_456[6];
        unsigned *l_459 = &g_329[1];
        unsigned short l_472 = 0UL;
        int **l_476 = &l_401;
        int i, j;
        for (i = 0; i < 6; i++)
            l_456[i] = &g_256;
        if ((p_46 <= (safe_lshift_func_uint8_t_u_u((&g_256 == &g_256), (l_395 <= 7UL)))))
        {
            int l_398 = 0x65AE9129L;
            if ((0x8AE9L >= l_398))
            {
                int **l_399 = &l_380[2][1][0];
                unsigned char l_436[2][6][4] = {{{0xA5L,0x9DL,7UL,7UL},{0xA5L,0xA5L,1UL,1UL},{0xB6L,7UL,0xA5L,0UL},{0x9DL,0UL,0xD6L,0xA5L},{1UL,0UL,1UL,0UL},{0UL,7UL,6UL,1UL}},{{1UL,0xA5L,0x9DL,7UL},{0x09L,0x9DL,0x9DL,0x09L},{1UL,0UL,6UL,1UL},{0UL,0x5DL,1UL,1UL},{1UL,1UL,0xD6L,1UL},{0x9DL,0x5DL,0xA5L,1UL}}};
                int i, j, k;
lbl_402:
                for (g_88 = 0; (g_88 <= 0); g_88 += 1)
                {
                    for (g_265 = 0; (g_265 <= 2); g_265 += 1)
                    {
                        int **l_400 = (void*)0;
                        return l_400;
                    }
                    if (l_335)
                        goto lbl_402;
                    l_398 = l_398;
                    for (l_334 = 0; (l_334 >= 0); l_334 -= 1)
                    {
                        int i, j;
                        if (g_252[(g_88 + 2)][(l_334 + 1)])
                            break;
                        l_401 = p_44;
                    }
                }
                for (g_61 = 0; (g_61 >= 0); g_61 -= 1)
                {
                    short *l_405 = &g_256;
                    unsigned char *l_406[6][5][8] = {{{(void*)0,&g_167,&g_167,&g_323,&g_167,&g_167,&g_323,&g_167},{&g_323,&g_323,(void*)0,&g_323,&g_323,&g_323,&g_167,(void*)0},{&g_323,&g_323,&g_167,(void*)0,(void*)0,(void*)0,&g_167,&g_323},{(void*)0,&g_323,(void*)0,&g_167,&g_323,&g_323,&g_323,(void*)0},{&g_323,&g_323,&g_167,&g_167,&g_167,&g_323,(void*)0,&g_167}},{{&g_167,&g_167,&g_167,&g_323,&g_323,&g_323,&g_323,&g_167},{&g_323,&g_323,&g_323,&g_167,&g_323,(void*)0,&g_323,&g_323},{&g_323,&g_167,&g_323,&g_323,&g_323,&g_167,&g_323,&g_323},{&g_167,(void*)0,&g_323,&g_167,(void*)0,(void*)0,(void*)0,&g_167},{&g_167,&g_323,&g_323,&g_323,&g_167,&g_167,(void*)0,&g_167}},{{&g_167,(void*)0,&g_167,&g_167,(void*)0,&g_167,&g_167,(void*)0},{&g_167,&g_323,&g_323,&g_323,&g_323,(void*)0,&g_323,&g_167},{&g_323,&g_323,(void*)0,&g_323,&g_323,&g_323,&g_323,&g_323},{&g_167,&g_323,&g_167,&g_323,&g_323,&g_167,(void*)0,&g_167},{&g_323,&g_167,&g_167,&g_323,&g_323,&g_323,&g_323,(void*)0}},{{&g_323,&g_323,(void*)0,&g_323,(void*)0,&g_167,&g_323,&g_323},{&g_167,(void*)0,&g_167,&g_323,&g_167,(void*)0,&g_323,&g_323},{&g_323,&g_323,(void*)0,&g_323,&g_167,&g_323,&g_167,&g_323},{&g_323,&g_167,&g_323,&g_323,&g_323,&g_167,&g_323,(void*)0},{&g_167,&g_167,&g_323,&g_323,&g_323,(void*)0,(void*)0,&g_323}},{{(void*)0,&g_323,&g_323,(void*)0,&g_323,(void*)0,&g_167,&g_167},{&g_323,&g_323,(void*)0,&g_323,&g_167,&g_167,&g_323,&g_167},{&g_323,&g_323,&g_167,&g_323,&g_323,(void*)0,&g_323,&g_323},{&g_167,&g_323,&g_167,&g_323,(void*)0,(void*)0,(void*)0,&g_323},{(void*)0,&g_167,(void*)0,&g_167,(void*)0,&g_167,&g_167,&g_167}},{{&g_167,&g_167,&g_167,&g_323,&g_323,&g_323,&g_323,&g_167},{&g_323,&g_323,&g_167,&g_323,&g_167,(void*)0,(void*)0,(void*)0},{&g_323,(void*)0,(void*)0,&g_323,(void*)0,&g_323,&g_323,&g_167},{&g_323,(void*)0,&g_167,&g_167,&g_167,(void*)0,&g_323,&g_323},{&g_323,&g_167,&g_167,&g_323,&g_167,&g_167,&g_323,&g_323}}};
                    short l_409[2];
                    unsigned long long **l_425 = &l_331[8];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_409[i] = (-6L);
                    (*l_399) = &g_219[(g_61 + 1)];
                    if ((g_219[(g_61 + 1)] & (((((((p_46 ^ p_46) | ((safe_lshift_func_int16_t_s_s(((*l_405) = g_260), 4)) && (l_398 | l_398))) == (g_167 = g_88)) || g_69[1]) > (g_192 = (safe_sub_func_uint16_t_u_u((p_45 = ((void*)0 != (*g_188))), p_46)))) > g_93[0][0]) > 0x725981189C1980ADLL)))
                    {
                        int i;
                        g_219[(g_61 + 2)] = 0L;
                        if (l_409[1])
                            break;
                        (*g_144) = p_44;
                        l_398 = l_398;
                    }
                    else
                    {
                        (*g_144) = &l_398;
                        (*g_108) = 1L;
                    }
                    if ((p_44 != g_410))
                    {
                        unsigned long long ***l_424 = &l_423;
                        g_219[(g_61 + 1)] = (safe_mul_func_int8_t_s_s((g_265 = (safe_sub_func_uint8_t_u_u(((0x1F0FL | (!(safe_mod_func_uint32_t_u_u((p_46 || l_398), (*g_410))))) == (!g_61)), (l_395 = ((*l_343) = l_395))))), (safe_rshift_func_int8_t_s_s(p_45, (!(g_422 = (((safe_mul_func_uint16_t_u_u(0x9473L, (l_421 <= p_46))) | 0L) | 0xEEB56CBC40B6AFEALL)))))));
                        g_219[0] = (((*l_424) = l_423) == l_425);
                        (*l_399) = (void*)0;
                    }
                    else
                    {
                        p_44 = p_44;
                        (*g_144) = (*g_144);
                    }
                    for (g_256 = 0; (g_256 <= 0); g_256 += 1)
                    {
                        int l_435 = (-1L);
                        int i, j;
                        l_436[1][5][3] = (safe_mul_func_uint16_t_u_u(g_117[g_256][(g_61 + 4)], (0x18L > ((((safe_lshift_func_int8_t_s_s(g_117[(g_256 + 1)][(g_256 + 4)], ((l_409[1] && ((void*)0 != &g_329[0])) < (safe_sub_func_int16_t_s_s(((l_435 = (safe_mul_func_int16_t_s_s((((l_399 != l_399) ^ ((l_395 = g_329[0]) ^ p_45)) != l_434[0]), 0x6322L))) & l_398), 0x866EL))))) ^ (**g_370)) > (**g_370)) < p_46))));
                        (**g_143) = &l_421;
                        if ((*g_108))
                            continue;
                    }
                }
                for (l_334 = 1; (l_334 >= 0); l_334 -= 1)
                {
                    short *l_444 = (void*)0;
                    int i;
                    g_437 = (g_219[(l_334 + 1)] = g_219[l_334]);
                    p_44 = func_47((safe_mod_func_int64_t_s_s((&g_370 != (void*)0), ((*g_410) | ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_219[l_334] <= (&g_422 != l_444)), ((safe_unary_minus_func_uint16_t_u((*g_371))) == l_395))), 3L)) & 0x6C471C45L)))), g_88);
                    for (g_437 = 0; (g_437 <= 1); g_437 += 1)
                    {
                        short **l_454 = (void*)0;
                        short **l_455[6][9][1] = {{{&l_444},{&l_444},{&l_444},{(void*)0},{(void*)0},{&l_444},{&l_444},{&l_444},{&l_444}},{{&l_444},{&l_444},{&l_444},{(void*)0},{(void*)0},{&l_444},{&l_444},{&l_444},{&l_444}},{{&l_444},{&l_444},{&l_444},{(void*)0},{(void*)0},{&l_444},{&l_444},{&l_444},{&l_444}},{{&l_444},{&l_444},{&l_444},{(void*)0},{(void*)0},{&l_444},{&l_444},{&l_444},{&l_444}},{{&l_444},{&l_444},{&l_444},{(void*)0},{(void*)0},{&l_444},{&l_444},{&l_444},{&l_444}},{{&l_444},{&l_444},{&l_444},{(void*)0},{(void*)0},{&l_444},{&l_444},{&l_444},{&l_444}}};
                        short ***l_457 = &l_455[2][8][0];
                        int i, j, k;
                        (**g_143) = func_47((((*g_371) <= ((((void*)0 == &g_188) > (18446744073709551615UL || ((safe_lshift_func_int8_t_s_s(0xB7L, 3)) >= ((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(l_398, (safe_rshift_func_uint16_t_u_s(((l_456[0] = (void*)0) != (void*)0), g_329[5])))) | p_45) <= 1UL), 0x9B16L)) && g_93[4][1])))) < g_252[l_334][(g_437 + 3)])) & p_46), p_45);
                        (*l_457) = l_455[2][8][0];
                        l_398 = g_252[l_334][(g_437 + 3)];
                        (**g_143) = (void*)0;
                    }
                }
                (*g_144) = p_44;
            }
            else
            {
                unsigned **l_458 = &g_410;
                unsigned long long ***l_464 = (void*)0;
                unsigned long long ***l_465 = &g_462;
                unsigned *l_466 = &g_117[3][1];
                (**g_143) = &l_335;
                (*g_108) = ((((*l_458) = p_44) == l_459) != (((**g_188) = (**g_188)) != (g_93[0][0] && ((((safe_lshift_func_int16_t_s_u(l_395, 14)) < ((*l_466) = ((*l_459) = (((((*l_465) = g_462) == (void*)0) || g_265) > p_46)))) && 0xC9L) <= p_45))));
            }
            l_395 = (!(p_46 & (p_44 == (l_459 = l_401))));
        }
        else
        {
            unsigned char l_475 = 1UL;
            for (g_61 = 0; (g_61 <= 4); g_61 += 1)
            {
                short l_469 = 0x7A66L;
                int *l_473 = (void*)0;
                (*l_401) = (safe_rshift_func_uint16_t_u_s((l_472 = (p_46 | (((*l_343) = l_469) < (safe_sub_func_int64_t_s_s(p_45, p_45))))), 15));
                (**g_143) = p_44;
                if (g_260)
                {
                    (*l_401) = l_469;
                    for (l_333 = 3; (l_333 >= 1); l_333 -= 1)
                    {
                        (**g_143) = &l_421;
                    }
                    (**g_143) = l_473;
                }
                else
                {
                    return (*g_143);
                }
                for (g_265 = 4; (g_265 >= 1); g_265 -= 1)
                {
                    long long l_474[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_474[i] = 0L;
                    (**g_143) = p_44;
                    if (l_474[0])
                        continue;
                    for (g_192 = 0; (g_192 <= 4); g_192 += 1)
                    {
                        (**g_143) = (**g_143);
                        (*l_401) = (+l_475);
                    }
                }
            }
        }
        (*l_476) = func_47((**g_462), (p_45 ^ (((*l_476) = &l_395) == (void*)0)));
        (*l_476) = &l_335;
    }
    (*l_401) = (safe_lshift_func_int8_t_s_s((+(((**g_188) >= 0xDAL) != (*l_401))), 5));
    for (l_332 = 6; (l_332 != (-14)); l_332 = safe_sub_func_uint32_t_u_u(l_332, 2))
    {
        long long *l_484 = &g_485;
        int l_493 = 1L;
        for (g_101 = 4; (g_101 == (-15)); g_101 = safe_sub_func_int32_t_s_s(g_101, 6))
        {
            if (p_46)
                break;
            (**g_143) = (void*)0;
        }
        (*g_144) = func_47((**g_462), (safe_unary_minus_func_uint8_t_u((((((*l_484) = (*l_401)) > (((safe_rshift_func_int16_t_s_s((g_463 != (void*)0), 7)) == 247UL) || (safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_s((*g_371), l_492[3][1][1])) && 0x61L) & p_46), 5)))) == g_61) || p_45))));
        (*l_401) = l_493;
    }
    return l_494;
}







static int * func_47(unsigned long long p_48, int p_49)
{
    int *l_285 = &g_59;
    long long l_290[2][3] = {{6L,6L,0xA831BCBC3065EFAELL},{6L,6L,0xA831BCBC3065EFAELL}};
    char l_309 = 8L;
    int *l_330 = &g_219[2];
    int i, j;
    for (g_167 = (-17); (g_167 >= 57); g_167 = safe_add_func_uint8_t_u_u(g_167, 5))
    {
        int *l_284 = &g_219[5];
        unsigned char *l_321[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        l_285 = l_284;
        for (g_256 = 0; (g_256 <= 6); g_256 += 1)
        {
            char l_312[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
            int i;
            for (g_88 = 0; (g_88 <= 4); g_88 += 1)
            {
                unsigned l_301 = 18446744073709551607UL;
                int l_303 = (-5L);
                for (g_101 = 6; (g_101 >= 2); g_101 -= 1)
                {
                    short *l_288 = (void*)0;
                    unsigned short *l_289[4][9][5] = {{{&g_69[1],&g_69[g_256],&g_73,&g_69[1],&g_69[2]},{&g_69[g_256],&g_69[0],(void*)0,&g_73,&g_69[2]},{&g_73,&g_73,(void*)0,&g_73,&g_69[g_256]},{&g_69[g_256],&g_69[1],&g_69[4],&g_69[1],&g_69[1]},{&g_69[g_256],&g_69[2],&g_69[g_256],&g_73,&g_73},{&g_73,&g_69[4],&g_69[g_256],&g_73,&g_69[g_256]},{&g_69[1],&g_73,&g_69[4],&g_73,&g_69[1]},{&g_73,&g_69[0],(void*)0,&g_69[g_256],&g_69[1]},{&g_69[2],&g_69[g_256],(void*)0,&g_69[1],(void*)0}},{{(void*)0,&g_73,&g_73,&g_73,(void*)0},{&g_69[g_256],&g_69[2],&g_73,(void*)0,&g_73},{&g_69[2],&g_69[g_256],&g_73,&g_69[0],&g_69[g_256]},{&g_69[0],&g_69[1],(void*)0,&g_69[2],&g_73},{(void*)0,&g_69[0],&g_73,&g_69[g_256],(void*)0},{&g_73,&g_69[g_256],&g_69[4],(void*)0,(void*)0},{&g_69[1],&g_69[0],&g_69[g_256],&g_69[2],&g_69[1]},{&g_69[g_256],&g_69[g_256],&g_73,&g_73,&g_69[1]},{&g_73,&g_73,&g_69[g_256],&g_69[1],&g_69[g_256]}},{{&g_73,&g_73,&g_69[1],&g_73,&g_73},{&g_73,&g_73,&g_73,(void*)0,&g_69[1]},{&g_73,(void*)0,&g_73,(void*)0,(void*)0},{&g_69[1],&g_69[1],&g_69[1],&g_69[1],&g_73},{&g_69[g_256],&g_69[3],&g_73,&g_69[g_256],&g_69[0]},{&g_69[2],&g_69[g_256],&g_69[g_256],&g_69[2],&g_73},{&g_69[1],&g_73,&g_69[g_256],&g_73,&g_73},{&g_69[6],&g_73,&g_69[g_256],&g_73,&g_69[1]},{(void*)0,&g_73,(void*)0,&g_73,&g_73}},{{&g_69[0],&g_69[0],&g_69[1],&g_69[2],&g_73},{&g_73,&g_69[g_256],&g_69[g_256],&g_69[g_256],(void*)0},{&g_69[0],&g_73,(void*)0,&g_69[1],&g_73},{&g_73,&g_73,(void*)0,(void*)0,&g_69[0]},{&g_73,&g_69[1],(void*)0,(void*)0,&g_69[1]},{&g_69[2],&g_73,&g_69[g_256],&g_69[g_256],&g_69[1]},{&g_69[2],&g_69[0],&g_69[1],&g_69[0],&g_69[g_256]},{&g_73,(void*)0,&g_69[g_256],&g_73,(void*)0},{&g_73,&g_69[g_256],&g_73,&g_69[0],&g_73}}};
                    int *l_304 = &g_101;
                    int i, j, k;
                    if (((safe_mul_func_int16_t_s_s(((void*)0 != l_288), g_69[g_256])) != ((**g_188) = (0x813BL && (l_290[0][2] = g_117[g_88][g_88])))))
                    {
                        int *l_291 = &g_219[3];
                        (*g_144) = l_291;
                        (*g_144) = (void*)0;
                    }
                    else
                    {
                        int l_300 = (-1L);
                        unsigned char *l_302 = (void*)0;
                        (*l_284) = (safe_sub_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_300, l_301)), (l_303 = g_252[1][3]))) != (!0xC0386A190276F2A3LL)), l_301)), (((*l_284) | (65528UL == g_93[1][1])) || (g_59 < p_49))));
                    }
                    (**g_143) = (void*)0;
                    return l_304;
                }
                if (p_49)
                {
                    for (g_61 = 0; (g_61 <= 19); ++g_61)
                    {
                        (*l_285) = 0xA064B616L;
                        (*l_284) = (g_93[3][1] || g_93[2][1]);
                        (*l_285) = (*l_284);
                    }
                }
                else
                {
                    return l_285;
                }
            }
            for (g_101 = 0; (g_101 <= 1); g_101 += 1)
            {
                int i, j;
                if (((*l_284) = (safe_sub_func_int8_t_s_s(l_290[g_101][g_101], (((~l_309) == p_48) == 0x3FL)))))
                {
                    unsigned *l_310 = (void*)0;
                    unsigned *l_311 = &g_117[0][0];
                    (*l_284) = (((*l_311) = g_101) != l_312[1]);
                    if (p_49)
                        break;
                }
                else
                {
                    unsigned l_313 = 0UL;
                    unsigned char *l_322 = &g_323;
                    int *l_325[10][8][3] = {{{&g_219[0],&g_101,(void*)0},{&g_101,(void*)0,&g_59},{(void*)0,&g_219[0],(void*)0},{&g_59,(void*)0,&g_101},{&g_219[0],(void*)0,&g_219[3]},{&g_101,(void*)0,(void*)0},{(void*)0,&g_101,&g_101},{&g_101,&g_219[0],&g_59}},{{&g_219[0],&g_59,&g_59},{&g_59,&g_59,&g_101},{&g_219[0],&g_219[3],(void*)0},{&g_59,&g_59,&g_219[3]},{(void*)0,&g_59,&g_101},{(void*)0,&g_219[0],&g_219[0]},{&g_59,&g_101,&g_59},{&g_219[0],(void*)0,&g_219[0]}},{{&g_59,(void*)0,&g_101},{&g_219[0],(void*)0,&g_219[3]},{&g_101,(void*)0,(void*)0},{(void*)0,&g_101,&g_101},{&g_101,&g_219[0],&g_59},{&g_219[0],&g_59,&g_59},{&g_59,&g_59,&g_101},{&g_219[0],&g_219[3],(void*)0}},{{&g_59,&g_59,&g_219[3]},{(void*)0,&g_59,&g_101},{(void*)0,&g_219[0],&g_219[0]},{&g_59,&g_101,&g_59},{&g_219[0],(void*)0,&g_219[0]},{&g_59,(void*)0,&g_101},{&g_219[0],(void*)0,&g_219[3]},{&g_101,(void*)0,(void*)0}},{{(void*)0,&g_101,&g_101},{&g_101,&g_219[0],&g_59},{&g_219[0],&g_59,&g_59},{&g_59,(void*)0,&g_219[0]},{&g_59,&g_219[0],&g_219[3]},{(void*)0,(void*)0,&g_219[0]},{&g_219[0],(void*)0,&g_59},{&g_219[0],(void*)0,&g_59}},{{(void*)0,&g_219[0],(void*)0},{&g_59,&g_219[0],&g_59},{&g_59,&g_101,&g_59},{(void*)0,&g_101,&g_219[0]},{&g_219[0],&g_219[0],&g_219[3]},{&g_101,&g_219[0],&g_219[0]},{&g_219[0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{&g_59,(void*)0,&g_219[0]},{&g_59,&g_219[0],&g_219[3]},{(void*)0,(void*)0,&g_219[0]},{&g_219[0],(void*)0,&g_59},{&g_219[0],(void*)0,&g_59},{(void*)0,&g_219[0],(void*)0},{&g_59,&g_219[0],&g_59},{&g_59,&g_101,&g_59}},{{(void*)0,&g_101,&g_219[0]},{&g_219[0],&g_219[0],&g_219[3]},{&g_101,&g_219[0],&g_219[0]},{&g_219[0],(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{&g_59,(void*)0,&g_219[0]},{&g_59,&g_219[0],&g_219[3]},{(void*)0,(void*)0,&g_219[0]}},{{&g_219[0],(void*)0,&g_59},{&g_219[0],(void*)0,&g_59},{(void*)0,&g_219[0],&g_101},{&g_59,&g_59,&g_59},{(void*)0,&g_219[0],(void*)0},{&g_219[0],&g_219[0],(void*)0},{(void*)0,&g_59,&g_219[0]},{&g_59,(void*)0,(void*)0}},{{(void*)0,&g_101,&g_219[3]},{&g_219[0],&g_101,&g_219[3]},{(void*)0,&g_219[3],(void*)0},{&g_59,(void*)0,&g_219[0]},{&g_219[3],&g_219[3],(void*)0},{&g_59,&g_101,(void*)0},{&g_59,&g_101,&g_59},{&g_219[3],(void*)0,&g_101}}};
                    int i, j, k;
                    (**g_143) = l_284;
                    (*l_285) = l_290[g_101][g_101];
                    if ((p_49 & g_69[1]))
                    {
                        (*l_284) = (~p_49);
                        l_313 = (**g_144);
                    }
                    else
                    {
                        unsigned long long l_314 = 18446744073709551615UL;
                        unsigned short *l_324 = &g_73;
                        int i;
                        (*l_285) = (((*l_324) = (((((g_252[1][3] == g_265) <= l_314) | (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(((g_69[g_256] = ((safe_mul_func_int8_t_s_s(((l_313 | 5UL) || p_48), ((&g_167 == (l_322 = l_321[3])) && g_265))) || g_93[8][2])) < (*l_284)), 0xE165E364B94D7647LL)), 7))) > p_49) && g_265)) || (*l_285));
                    }
                    return l_325[5][0][1];
                }
            }
        }
        (*l_285) = (*l_284);
    }
    for (g_260 = (-5); (g_260 > (-24)); g_260 = safe_sub_func_int8_t_s_s(g_260, 4))
    {
        int *l_328[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        (**g_143) = l_328[0];
        g_329[0] = 0xD50A5C85L;
    }
    return l_330;
}







static short func_51(char * p_52, unsigned long long p_53)
{
    short l_96 = 0x2EDFL;
    int *l_106 = &g_101;
    int l_249 = (-1L);
    unsigned char *l_253 = &g_167;
    for (g_59 = 2; (g_59 <= 6); g_59 += 1)
    {
        short l_71 = (-1L);
        int l_103 = 0x08EF1BB2L;
        int *l_111 = &l_103;
        char *l_123 = &g_61;
        char **l_122 = &l_123;
        int *l_156 = &g_59;
        if ((g_69[1] | 5L))
        {
            int *l_110 = &g_101;
            if (g_59)
            {
                unsigned l_99 = 0x10901DBAL;
                int *l_107 = &l_103;
                if (l_71)
                {
                    int *l_72[1][3][10] = {{{&g_59,&g_59,&g_59,&g_59,(void*)0,(void*)0,(void*)0,&g_59,&g_59,&g_59},{&g_59,(void*)0,(void*)0,&g_59,(void*)0,(void*)0,(void*)0,(void*)0,&g_59,(void*)0},{(void*)0,(void*)0,&g_59,&g_59,(void*)0,(void*)0,&g_59,(void*)0,(void*)0,&g_59}}};
                    int i, j, k;
                    for (g_61 = 0; (g_61 <= 6); g_61 += 1)
                    {
                        if (p_53)
                            break;
                    }
                    g_73 = (p_53 ^ p_53);
                    for (l_71 = 6; (l_71 >= 0); l_71 -= 1)
                    {
                        unsigned char l_86[6][10][3] = {{{0xA9L,0UL,0xA9L},{0UL,251UL,0x1BL},{252UL,255UL,0x1BL},{0xDDL,252UL,0xA9L},{250UL,4UL,0UL},{0xDDL,6UL,252UL},{252UL,6UL,0UL},{252UL,0UL,0x93L},{250UL,255UL,0UL},{0UL,0xF1L,0xB0L}},{{0UL,1UL,252UL},{250UL,255UL,250UL},{252UL,1UL,0UL},{0xB0L,0xF1L,0UL},{0UL,255UL,250UL},{0x93L,0UL,252UL},{0UL,252UL,0xB0L},{0xB0L,252UL,0UL},{252UL,0UL,0x93L},{250UL,255UL,0UL}},{{0UL,0xF1L,0xB0L},{0UL,1UL,252UL},{250UL,255UL,250UL},{252UL,1UL,0UL},{0xB0L,0xF1L,0UL},{0UL,255UL,250UL},{0x93L,0UL,252UL},{0UL,252UL,0xB0L},{0xB0L,252UL,0UL},{252UL,0UL,0x93L}},{{250UL,255UL,0UL},{0UL,0xF1L,0xB0L},{0UL,1UL,252UL},{250UL,255UL,250UL},{252UL,1UL,0UL},{0xB0L,0xF1L,0UL},{0UL,255UL,250UL},{0x93L,0UL,252UL},{0UL,252UL,246UL},{246UL,250UL,1UL}},{{1UL,0x92L,0xBBL},{0x93L,0x93L,1UL},{0xCDL,0xDDL,246UL},{0xCDL,0UL,1UL},{0x93L,255UL,0x93L},{1UL,0UL,0xCDL},{246UL,0xDDL,0xCDL},{1UL,0x93L,0x93L},{0xBBL,0x92L,1UL},{1UL,250UL,246UL}},{{246UL,250UL,1UL},{1UL,0x92L,0xBBL},{0x93L,0x93L,1UL},{0xCDL,0xDDL,246UL},{0xCDL,0UL,1UL},{0x93L,255UL,0x93L},{1UL,0UL,0xCDL},{246UL,0xDDL,0xCDL},{1UL,0x93L,0x93L},{0xBBL,0x92L,1UL}}};
                        int l_87 = 0xED801979L;
                        char *l_89 = &g_61;
                        char **l_90 = &l_89;
                        char *l_92 = &g_61;
                        char **l_91 = &l_92;
                        int l_94 = 0L;
                        int i, j, k;
                        l_94 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(g_73, (((safe_sub_func_uint8_t_u_u((g_14 >= (safe_add_func_int8_t_s_s(((l_71 < (((g_93[1][1] = ((((((void*)0 == &g_61) > (((g_88 = (l_87 = l_86[0][4][1])) < (((*l_91) = ((*l_90) = l_89)) != p_52)) == l_71)) < 0xE414CEA6L) && g_59) >= l_71)) & 0x1AL) && g_73)) ^ g_69[1]), g_59))), p_53)) != p_53) <= 0xDD4D5FF6L))), l_71)), 4)) == g_61);
                        g_95 = p_53;
                    }
                    return l_96;
                }
                else
                {
                    for (g_95 = 0; (g_95 <= 6); g_95 += 1)
                    {
                        int *l_100 = &g_101;
                        int i;
                        (*l_100) = (safe_mod_func_uint32_t_u_u(g_69[g_95], (l_99 | g_95)));
                    }
                }
                if ((l_71 || (!g_61)))
                {
                    int *l_102[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,&g_59},{&g_59,&g_59},{&g_59,&g_59},{&g_101,(void*)0},{&g_101,(void*)0},{&g_59,&g_59},{&g_101,&g_101},{(void*)0,&g_101},{&g_59,&g_59}},{{&g_59,&g_59},{&g_101,&g_59},{(void*)0,&g_59},{(void*)0,&g_59},{&g_101,&g_59},{&g_59,(void*)0},{&g_101,&g_101},{&g_101,&g_101},{&g_101,&g_101},{&g_59,&g_101}},{{&g_101,&g_101},{&g_59,&g_101},{&g_59,(void*)0},{&g_59,&g_59},{&g_59,&g_59},{&g_59,&g_59},{&g_59,&g_101},{(void*)0,&g_59},{&g_101,&g_59},{(void*)0,(void*)0}},{{&g_101,&g_59},{(void*)0,&g_101},{&g_101,&g_59},{&g_59,(void*)0},{&g_59,&g_59},{(void*)0,(void*)0},{&g_59,&g_59},{&g_59,&g_59},{&g_101,&g_101},{&g_59,&g_59}},{{(void*)0,&g_59},{&g_59,&g_101},{&g_59,(void*)0},{(void*)0,&g_101},{&g_101,(void*)0},{&g_59,&g_59},{&g_59,&g_59},{&g_59,(void*)0},{&g_59,&g_101},{&g_59,&g_59}},{{&g_101,(void*)0},{(void*)0,&g_59},{(void*)0,&g_59},{(void*)0,(void*)0},{&g_101,&g_59},{&g_59,&g_101},{&g_59,(void*)0},{&g_59,&g_59},{&g_59,&g_59},{&g_59,(void*)0}},{{&g_101,&g_101},{(void*)0,(void*)0},{&g_59,&g_101},{&g_59,&g_59},{&g_101,(void*)0},{(void*)0,&g_101},{(void*)0,&g_101},{&g_101,&g_101},{&g_59,&g_101},{&g_101,&g_59}},{{&g_59,(void*)0},{&g_59,&g_101},{&g_59,(void*)0},{(void*)0,&g_59},{&g_59,&g_59},{&g_101,&g_101},{&g_101,(void*)0},{(void*)0,(void*)0},{&g_101,&g_59},{&g_101,(void*)0}},{{(void*)0,&g_101},{(void*)0,(void*)0},{&g_101,&g_59},{(void*)0,&g_59},{&g_101,&g_101},{(void*)0,&g_101},{&g_59,&g_59},{&g_59,&g_101},{&g_101,&g_59},{&g_59,&g_101}},{{&g_59,&g_59},{&g_59,(void*)0},{&g_59,&g_59},{&g_59,&g_101},{&g_59,&g_59},{&g_101,&g_101},{&g_59,&g_59},{&g_59,&g_101},{(void*)0,&g_101},{&g_101,&g_59}}};
                    int i, j, k;
                    l_103 = 0L;
                }
                else
                {
                    int *l_105 = &g_59;
                    int **l_104[6][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105}};
                    int i, j;
                    l_106 = (void*)0;
                    g_108 = l_107;
                }
            }
            else
            {
                for (l_96 = 6; (l_96 >= 2); l_96 -= 1)
                {
                    if ((*g_108))
                        break;
                    for (g_88 = 0; (g_88 <= 2); g_88 += 1)
                    {
                        unsigned short l_109 = 0xE9C8L;
                        (*l_106) = l_109;
                        (*l_106) = 1L;
                    }
                    l_110 = &g_59;
                    l_111 = (void*)0;
                }
                for (g_61 = 2; (g_61 <= 6); g_61 += 1)
                {
                    unsigned *l_116 = &g_117[0][0];
                    for (g_73 = 1; (g_73 <= 6); g_73 += 1)
                    {
                        int **l_113 = (void*)0;
                        int ***l_112 = &l_113;
                        (*l_112) = &l_110;
                    }
                    (*g_108) = ((*l_110) != (g_69[1] >= (((*l_116) = p_53) > p_53)));
                }
                if ((*g_108))
                    break;
            }
        }
        else
        {
            int *l_119 = &l_103;
            short l_125 = (-9L);
            long long l_157 = (-5L);
            long long l_160 = (-2L);
            unsigned long long l_185 = 18446744073709551607UL;
            char l_216 = 0xC4L;
            if ((*g_108))
            {
                int **l_118[3][3][6] = {{{&l_106,&g_108,&l_111,&l_106,&l_111,&g_108},{&l_106,&g_108,&l_111,&l_106,&l_111,&l_111},{&g_108,&g_108,&g_108,&g_108,&l_111,&l_111}},{{&l_106,&g_108,&l_111,&l_106,&l_111,&g_108},{&l_106,&g_108,&l_111,&l_106,&l_111,&l_111},{&g_108,&g_108,&g_108,&g_108,&l_111,&l_111}},{{&l_106,&g_108,&l_111,&l_106,&l_111,&g_108},{&l_106,&g_108,&l_111,&l_106,&l_111,&l_111},{&g_108,&g_108,&g_108,&g_108,&l_111,&l_111}}};
                int l_163 = 0x4DCE6FA7L;
                int i, j, k;
                l_119 = l_106;
                if ((safe_mul_func_int8_t_s_s(((*p_52) = 0xBDL), g_69[1])))
                {
                    unsigned l_124 = 0x2F923AD0L;
                    (*g_108) = ((l_122 = &p_52) != &p_52);
                    for (l_71 = 0; (l_71 <= 6); l_71 += 1)
                    {
                        (*g_108) = 0L;
                        (*l_111) = ((*l_111) ^ 65527UL);
                        if (l_124)
                            continue;
                    }
                    (*l_119) = (p_53 || l_125);
                }
                else
                {
                    int *l_126 = &g_101;
                    if ((*g_108))
                    {
                        unsigned l_145 = 0x287FB009L;
                        int l_146 = 0xA269F80FL;
                        unsigned char l_147 = 0x08L;
                        int l_148 = 0x9A0BCAFDL;
                        l_126 = l_106;
                        l_148 = (safe_add_func_uint16_t_u_u((((p_53 <= (l_146 = ((*l_111) = ((**g_144) = (safe_sub_func_uint16_t_u_u(p_53, (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((*p_52), (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(g_95, (safe_rshift_func_uint16_t_u_u(g_14, 9)))) <= (g_143 == (void*)0)), g_69[0])))), (l_145 = p_53))))))))) | 0x0AL) | l_147), p_53));
                        if ((*l_126))
                            break;
                        return (*l_119);
                    }
                    else
                    {
                        short l_151 = 1L;
                        unsigned char *l_166 = &g_167;
                        (***g_143) = (safe_rshift_func_int8_t_s_s(1L, ((0xA90C89A7L > (0xAFFEL <= 0xDE13L)) ^ l_151)));
                        (*l_126) = (safe_sub_func_int16_t_s_s(((void*)0 == &l_106), (safe_add_func_int64_t_s_s((*l_111), ((*l_119) | 0L)))));
                        (**g_143) = l_156;
                        g_101 = ((l_157 == ((safe_sub_func_int16_t_s_s((l_160 ^ ((safe_mod_func_int32_t_s_s(p_53, (**g_144))) == (!(l_163 && (((*l_166) = (safe_rshift_func_uint8_t_u_s(p_53, 2))) || ((*p_52) = l_151)))))), (safe_mul_func_int8_t_s_s((*l_156), (safe_mod_func_uint64_t_u_u(g_93[6][2], g_117[0][0])))))) ^ 0x915CL)) & (-1L));
                    }
                    return g_69[2];
                }
                if (p_53)
                    continue;
            }
            else
            {
                long long l_179[8];
                int l_183[7][9] = {{0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L,0x0A1AB052L}};
                int i, j;
                for (i = 0; i < 8; i++)
                    l_179[i] = 0x2D600B73D5C98588LL;
                for (g_101 = 6; (g_101 >= 0); g_101 -= 1)
                {
                    unsigned short l_180 = 0x9019L;
                    for (l_125 = 6; (l_125 >= 1); l_125 -= 1)
                    {
                        int *l_172 = (void*)0;
                        short *l_177 = &l_71;
                        unsigned char *l_178 = &g_167;
                        int i;
                        l_106 = l_172;
                        l_180 = (((0xAA1D096303E4D4EBLL ^ (2UL >= (1UL == ((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s((*p_52), ((*l_178) = (((6UL && (g_73 > (*p_52))) == (g_69[g_101] = (((*l_177) = ((((g_59 | g_117[0][0]) <= g_88) < g_93[8][0]) > (**g_144))) > p_53))) >= g_14)))) & (-1L)), p_53)) || l_179[0])))) && g_167) == p_53);
                        if ((***g_143))
                            break;
                        l_183[6][0] = ((*l_111) = ((+(safe_add_func_int8_t_s_s(0x5EL, 0L))) != (g_88 || g_95)));
                    }
                }
            }
            if ((*g_108))
            {
                char l_184 = 0xE1L;
                unsigned long long *l_190 = (void*)0;
                unsigned long long *l_191 = &g_192;
                char ***l_195 = &l_122;
                char **l_196 = &l_123;
                unsigned short *l_197 = &g_73;
                l_184 = ((void*)0 == &l_119);
                if ((***g_143))
                    break;
                (*l_111) = (g_88 == (l_185 | (g_69[4] < ((*g_108) = (+(((((*l_119) > (safe_add_func_uint64_t_u_u((*l_119), ((*l_191) = (&p_52 != g_188))))) <= ((safe_mul_func_uint16_t_u_u(((*l_197) = (p_53 > (((*l_195) = &p_52) != l_196))), p_53)) == g_14)) < g_88) != 0x3AE9L))))));
                (**g_143) = (**g_143);
            }
            else
            {
                short *l_214 = (void*)0;
                short *l_215 = &l_96;
                unsigned short l_217 = 2UL;
                int *l_218 = &g_219[0];
                (*l_218) = ((***g_143) = (safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(((!65532UL) <= g_59), (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((+((p_53 < (safe_sub_func_uint32_t_u_u(((*l_111) = (((safe_rshift_func_int8_t_s_u((*p_52), 0)) | ((*l_215) = (safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(p_53, 4)), p_53)))) ^ ((((l_216 && ((g_69[6] ^ (0UL & 3UL)) || (*l_111))) < (**g_144)) >= (-1L)) > g_101))), p_53))) < g_61)) || p_53), 8)), 10)))) >= l_217), 0xD8B73B3AL)));
                (*l_218) = ((***g_143) = l_96);
                (*l_111) = ((p_53 == (*l_119)) >= (((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_s((0x3C70L & p_53), 3)))) != (safe_mod_func_uint32_t_u_u((!g_219[3]), g_61))), (safe_rshift_func_int16_t_s_u((*l_111), 13)))) ^ (*l_119)) >= (safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(p_53, 4294967295UL)), g_219[1]))));
            }
            if ((***g_143))
            {
                for (l_103 = 0; (l_103 != (-23)); --l_103)
                {
                    for (l_96 = (-1); (l_96 == 22); l_96 = safe_add_func_uint16_t_u_u(l_96, 8))
                    {
                        unsigned long long *l_239[7][2] = {{(void*)0,&l_185},{(void*)0,&l_185},{(void*)0,&l_185},{(void*)0,&l_185},{(void*)0,&l_185},{(void*)0,&l_185},{(void*)0,&l_185}};
                        unsigned long long **l_238 = &l_239[3][1];
                        unsigned long long ***l_237 = &l_238;
                        int i, j;
                        (*l_237) = (void*)0;
                        (*g_144) = (*g_144);
                        (**g_143) = (**g_143);
                    }
                }
                (*g_144) = (l_106 = l_119);
                (*g_108) = (**g_144);
            }
            else
            {
                int *l_244 = (void*)0;
                for (p_53 = (-11); (p_53 > 41); p_53 = safe_add_func_uint8_t_u_u(p_53, 8))
                {
                    return p_53;
                }
                (*g_144) = l_119;
                for (l_185 = (-30); (l_185 == 4); ++l_185)
                {
                    long long l_245 = 1L;
                    l_244 = (**g_143);
                    l_245 = (*l_111);
                }
            }
        }
        for (g_95 = (-24); (g_95 > 5); ++g_95)
        {
            int *l_248[6] = {&g_59,&g_59,&g_59,&g_59,&g_59,&g_59};
            int i;
            l_249 = ((***g_143) = 0xCF54E4A9L);
        }
        return (*l_156);
    }
    (***g_143) = (safe_mod_func_int32_t_s_s((((*l_253) = (0x39L & (g_252[1][3] = ((*g_189) = (*p_52))))) && ((g_219[0] && 0xE49B171A6DB7C819LL) < (safe_lshift_func_uint16_t_u_s(g_93[3][0], 10)))), (**g_144)));
    if (g_256)
    {
        char *l_259 = &g_260;
        int l_263 = 8L;
        char *l_264[4][4];
        short *l_273 = &g_256;
        unsigned long long *l_277[4];
        unsigned long long **l_276 = &l_277[2];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 4; j++)
                l_264[i][j] = &g_265;
        }
        for (i = 0; i < 4; i++)
            l_277[i] = (void*)0;
        if ((((*p_52) = (*g_189)) <= ((safe_mul_func_int8_t_s_s((1UL ^ ((***g_143) = (-6L))), ((*l_259) = g_117[0][0]))) != (((p_52 != l_259) != (safe_mul_func_int8_t_s_s((g_265 = l_263), (safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_53 == g_88), p_53)), 8))))) && p_53))))
        {
            int *l_270 = &l_263;
            unsigned long long *l_275[6];
            unsigned long long **l_274 = &l_275[3];
            int i;
            for (i = 0; i < 6; i++)
                l_275[i] = &g_192;
            (**g_143) = l_270;
            l_249 = ((***g_143) = ((g_69[1] = ((***g_143) == (safe_rshift_func_int8_t_s_s((*p_52), 1)))) <= (l_273 != &g_256)));
            (*g_108) = (p_53 < (p_53 && (((**l_274) = (l_274 == l_276)) != l_263)));
        }
        else
        {
            (**g_144) = (**g_144);
            (***g_143) = (***g_143);
            (***g_143) = (**g_144);
            g_219[5] = ((**g_144) = 0x8B70AA4EL);
        }
        return l_249;
    }
    else
    {
        (*g_144) = (void*)0;
    }
    return g_93[1][1];
}







static char * func_54(int * p_55)
{
    int *l_58 = &g_59;
    int **l_57 = &l_58;
    char *l_60 = &g_61;
    (*l_57) = (void*)0;
    return l_60;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_93[i][j], "g_93[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_117[i][j], "g_117[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_219[i], "g_219[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_252[i][j], "g_252[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_265, "g_265", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_329[i], "g_329[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_437, "g_437", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_564, "g_564", print_hash_value);
    transparent_crc(g_633, "g_633", print_hash_value);
    transparent_crc(g_635, "g_635", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
